import { Node, Nodes, LET_TYPE, LET_INIT, FN_RET_BACK, FN_BODY_BACK, FN_ARGS_BACK, F_NAMED_ARGS, F_ID, F_FIELD, F_USING, F_FULLY_TYPED, F_CLOSURE, F_IMPLICIT, F_MUT, F_TEMPLATE, F_ELISION } from './parse';
import * as Fail from './fail';

import { Type, t_template, t_void, t_i32, t_bool, t_string, isAssignable, add_ref, add_prvalue_ref, add_mutref, add_refs_from, registerStruct, StructField, serializeType, tryClear_ref, tryClear_mutref, clear_refs, type_has/*, q_non_zero, qadd*/, type_tryInter, q_copy, q_move, q_ref, q_prvalue, createArray, tryClear_array, createMap, tryClear_map } from './types';

export type SolvedNodes = (SolvedNode|null)[];

export type Type = Type;

export type SolvedNode = Node &
{
    type:       Type;
    items:      SolvedNodes|null;
    target:     Overload|null;
};

export type SolveResult =
{
    root:       SolvedNode;
    scope:      Scope;
};


//

let _here:              Node|null           = null;
let _scope:             Scope|null          = null;
let _scope_root:        Scope|null          = null;
let _current_fn:        SolvedNode|null     = null;
let _current_str:       SolvedNode|null     = null;
let _current_strt:      Type|null           = null;

let _closure_detect:    Scope|null          = null;
let _closure_detected:  boolean             = false;
let _typeParams:        TypeParams|null     = null;

function RESET()
{
    _here               = null;
    _scope              = null;
    _scope_root         = null;
    _current_fn         = null;
    _current_str        = null;
    _current_strt       = null;

    _closure_detect     = null;
    _closure_detected   = false;
}

function fail(...rest: unknown[])
{
    if (!_here)
        return Fail.fail(...rest);

    const msg   = rest.length
                ? rest
                : [ 'Unexpected `' + _here.value + '`.' ];

    const fname = _here.token && _here.token.fname;
    const l0    = _here.token && _here.token.line;
    const c0    = _here.token && _here.token.col;

    const addr = '@' + l0 + ':' + c0;

    return Fail.fail(
        fname + ' ' + addr
            + ':\n\t', ...msg);
}


//

type Callsite =
{
    node:               SolvedNode;

    _scope:             Scope|null;
    _closure_detect:    Scope|null;
    _current_fn:        SolvedNode|null;
    _current_str:       SolvedNode|null;
    _current_strt:      Type|null;
};

function Callsite(node: SolvedNode): Callsite
{
    return { node, _scope, _closure_detect, _current_fn, _current_str, _current_strt };
}

function atCallsite(callsite: Callsite, action: (node: SolvedNode) => void)
{
    ////////////////////////////////////////
    const scope0            = _scope;
    const closure_detect0   = _closure_detect;
    const current_fn0       = _current_fn;
    const current_str0      = _current_str;
    const current_strt0     = _current_strt;
    ////////////////////////////////////////

    _scope                  = callsite._scope;
    _closure_detect         = callsite._closure_detect;
    _current_fn             = callsite._current_fn;
    _current_str            = callsite._current_str;
    _current_strt           = callsite._current_strt;

    action(callsite.node);

    ////////////////////////////////////////
    _scope          = scope0;
    _closure_detect = closure_detect0;
    _current_fn     = current_fn0;
    _current_str    = current_str0;
    _current_strt   = current_strt0;
    ////////////////////////////////////////
}


//

type Template =
{
    readonly node: Node;
    readonly scope: Scope;
    readonly specializations:
        { [mangle: string]: Overload|null };
};

function Template(node: Node, scope: Scope)
{
    return { node, scope, specializations: Object.create(null) };
}


//

type Overload =
{
    readonly kind: 'template'|'fn'|'var'|'field'|'type'|'defctor'|'p-unshift'|'p-wrap';
    readonly node: SolvedNode|null;
    readonly type: Type|null;

    // Arity.
    min: number;
    max: number;
    args: Type[]|null;
    names: string[]|null;
    defaults: SolvedNodes|null;

    readonly partial: Overload[]|null;

    // Usage.
    callsites: Callsite[]|null;
    template: Template|null;
};

function resetUsage(o: Overload): Overload
{
    return {
        kind:       o.kind,
        node:       o.node,
        type:       o.type,

        min:        o.min,
        max:        o.max,
        args:       o.args,
        names:      o.names,
        defaults:   o.defaults,
        partial:    o.partial,

        // Reset usage.
        callsites:  null,
        template:   o.template && Template(o.template.node, o.template.scope) || null,
    };
}

function Binding(node: SolvedNode, type: Type): Overload
{
    return { kind: 'var', node, type, min: 0, max: 0, args: null, names: null, defaults: null, partial: null, callsites: null, template: null };
}

function Field(node: SolvedNode, structType: Type, fieldType: Type): Overload
{
    node && node.items || fail();

    return { kind: 'field', node, type: fieldType, min: 1, max: 1, args: [ structType ], names: [ 'this' ], defaults: null, partial: null, callsites: null, template: null };
}

function Typedef(type: Type): Overload
{
    return { kind: 'type', node: null, type, min: 0, max: 0, args: null, names: null, defaults: null, partial: null, callsites: null, template: null };
}

function TemplateDecl(node: Node): Overload
{
    const min = node.kind === 'fn'
        ? (node.items || fail()).length + FN_ARGS_BACK
        : fail('TODO');

    const max = node.kind === 'fn'
        ? 0xffffff // implicit args etc, dunno whats happening, allow it all
        : min;

    const template = Template(node, _scope || fail());

    let names: string[]|null = null;
    if (node.kind === 'fn')
    {
        names = [];

        const items = node.items || fail();
        for (let i = 0, n = items.length + FN_ARGS_BACK; i < n; i++)
        {
            const arg = items[i] || fail();
            arg.kind === 'let' || fail();
            const name = arg.value || fail();
            names[i] = name;
        }
    }

    return { kind: 'template', node: null, type: t_template, min, max, args: null, names, defaults: null, partial: null, callsites: null, template };
}

function FnDecl(node: SolvedNode): Overload
{
    node && node.items || fail();

    const items: SolvedNodes = node.items || fail();
    const rnode = items[items.length + FN_RET_BACK];
    const ret   = rnode && rnode.type || fail();

    const max   = items.length + FN_RET_BACK;
    const args  = items.slice(0, max);

    const arg_t: Type[]      = [];
    const arg_n: string[]    = [];
    const arg_d: SolvedNodes = [];

    let min = 0;
    for (let i = 0; i < max; i++)
    {
        const arg = args[i]  || fail();
        arg.kind === 'let'   || fail();
        arg_t[i] = arg.type  || fail();
        arg_n[i] = arg.value || fail();
        arg_d[i] = arg.items && arg.items[LET_INIT] || null;

        // Non-implicit, non-defaulted argument?
        if (!(arg.flags & F_IMPLICIT) && !(arg.items && arg.items[LET_INIT]))
            min++;
    }

    return { kind: 'fn', node, type: ret, min, max, args: arg_t, names: arg_n, defaults: arg_d, partial: null, callsites: null, template: null };
}

function DefaultCtor(type: Type, members: SolvedNode[]): Overload
{
    const arg_t = members.map(i => i && i.type  || fail());
    const arg_n = members.map(i => i && i.value || fail());

    //
    const max   = members.length;
    let   min   = 0;
    let   arg_d: SolvedNode[]|null = null;

    {
        const defaults: SolvedNode[] = [];
        arg_d = defaults;
        for (let i = 0; i < members.length; i++)
        {
            const member = members[i];
            const init   = (member.items || fail())[LET_INIT] || tryDefaultInit(member.type);

            // Disable defaulting if any member is non-defaulted.
            if (!init)
            {
                arg_d = null;
                min   = max;
                break;
            }

            defaults[i] = init;
        }
    }

    return { kind: 'defctor', node: null, type, min, max, args: arg_t, defaults: arg_d, names: arg_n, partial: null, callsites: null, template: null };
}

function tryDefaultInit(type: Type): SolvedNode|null
{
    // Reference? No init, else default.
    if (type.quals.indexOf(q_ref) >= 0)
        return null;

    return createDefaultInit(type);
}

function createDefaultInit(type: Type): SolvedNode
{
    return {
        kind:   'definit',
        flags:  0,
        value:  null,

        items:  null,
        token:  (_here || fail()).token,
        type,
        target: null,
    };
}


//

function Partial(via: Overload, overload: Overload): Overload
{
    let kind: 'p-unshift'|'p-wrap' = 'p-unshift';
    let min = overload.min - 1;
    let max = overload.max - 1;
    min >= 0 && max >= min || fail();

    const o_args     = overload.args || fail();
    const o_names    = overload.names;
    const o_defaults = overload.defaults;

    // Fixed.
    let args     = o_args     && o_args    .length > 1 ? o_args    .slice(1) : null;
    let names    = o_names    && o_names   .length > 1 ? o_names   .slice(1) : null;
    let defaults = o_defaults && o_defaults.length > 1 ? o_defaults.slice(1) : null;

    // Everything that's not a local/namespace/static/constant
    //  needs a value through which to activate.
    if (via.kind !== 'var')
    {
        kind = 'p-wrap';
        min++;
        max++;

        const via_t = via.args && via.args[0] || fail();

        //
        if (!args)
            args = [];

        args.unshift(via_t);
        if (names)
            names.unshift('using');
        if (defaults)
            defaults.unshift(null);
    }

    //
    return { kind, node: null, type: overload.type, min, max, args, names, defaults, partial: [ via, overload ], callsites: null, template: null };
}

type Scope =
{
    [id: string]: Overload[];
};


//

function scope_push()
{
    const scope = _scope;
    _scope = Object.create(scope);
    return scope;
}

const hasOwnProperty = Object.prototype.hasOwnProperty;

function scope_add(id: string, overload: Overload)
{
    const scope = _scope || fail();

    const prev  = scope[id];
    const next  =
        hasOwnProperty.call(scope, id)
            ? prev
            : scope[id] = prev ? prev.slice() : [];

    if (overload.min)
        next.push(overload);
    else
        next.unshift(overload);
}

function scope_using(via: Overload)
{
    const scope = _scope || fail();
    const actual = via.type || fail();

    for (const id in scope)
    {
        // Skip over operators.
        if (!/[a-zA-Z_]/.test(id))
            continue;

        const overloads = scope[id];
        if (!Array.isArray(overloads))
            continue;

        let arity0 = false;
        for (let i = 0, MUT_n0 = overloads.length; i < MUT_n0; i++)
        {
            const overload = overloads[i];
            if (overload.min < 1)
            {
                arity0 = true;
                continue;
            }

            // TODO using + templates, the fuck do we do?
            if (overload.template)
                continue;

            const expect = (overload.args || fail())[0] || fail();
            if (!isAssignable(expect, actual))
                continue;

            if (overload.min < 2 && arity0)
                fail('`using` arity-0 conflict: `' + id + '`.');

            // MUT DURING ITER!
            scope_add(id, Partial(via, overload));
        }
    }
}

function scope_resetUsage(scope: Scope)
{
    for (const key in scope)
        scope[key] = scope[key].map(resetUsage);
}

const NO_ARGS: SolvedNodes = [];
Object.freeze(NO_ARGS);

function scope_tryMatch__mutargs(id: string, args: SolvedNodes|null, retType: Type|null, flags: number): Overload|null
{
    const scope     = _scope || fail();
    const overloads = scope[id];
    if (!overloads)
        return null;

    // Closure detector.
    const closureDetect = !_closure_detected && _closure_detect && _closure_detect[id] || null;
    const rootScope     = closureDetect && _scope_root && _scope_root[id] || null;

    let matched: Overload|null  = null;

    // Arity 0 - blind head match.
    // Allows simple shadowing of variables and such, latest wins.
    if (!args || !args.length)
    {
        const head = overloads[0];
        if (head.min === 0)
            matched = head;
    }

    if (!matched)
    {
        if (!args)
            args = NO_ARGS;

        //
        const arity = args.length;

        // Prep labelled args for remap.
        let names: (string|null)[]|null = null;
        if (flags & F_NAMED_ARGS)
        {
            names = [];
            let some = false;

            for (let i = 0; i < arity; i++)
            {
                const arg = args[i];
                names[i] =
                    arg && arg.kind === 'label'
                        ? (some = true, arg.value) || fail()
                        : null;
            }

            some || fail();
        }

        //
        let mut_args = args;

        NEXT: for (let i = 0; i < overloads.length; i++)
        {
            let overload = overloads[i];
            let actual: SolvedNodes = args;

            TEST_AGAIN: for (;;)
            {
                if (overload.min > arity || overload.max < arity)
                    continue NEXT;

                // Match by return.
                if (retType && !isAssignable(retType, overload.type || fail()))
                    continue NEXT;

                // Remap named arguments.
                actual = args;
                if (names)
                {
                    const overloadNames = overload.names;
                    if (!overloadNames)
                        continue NEXT;

                    // Move named arguments around.
                    for (let i = 0; i < names.length; i++)
                    {
                        const id = names[i];
                        if (!id)
                            continue;

                        const idx = overloadNames.indexOf(id);
                        if (idx < 0)
                            continue NEXT;

                        if (actual === args)
                            actual = args.map(() => null);

                        actual[idx] = args[i];
                    }

                    // Fill the rest.
                    actual === args && fail();
                    {
                        let i = 0;
                        let j = 0;

                        while (i < args.length && j < actual.length)
                        {
                            if (actual[j]) { j++; continue; }
                            if (names [i]) { i++; continue; }

                            actual[j++] = args[i++];
                        }
                    }
                }

                // Specialize.
                if (overload.template)
                {
                    const spec = trySpecialize(overload.template, args);
                    if (!spec)
                        continue NEXT;

                    overload = spec;

                    // Repeat arity checks and such.
                    continue TEST_AGAIN;
                }

                // Done here.
                break TEST_AGAIN;
            }

            // Type check args.
            const arg_t = overload.args || fail();
            const arg_d = overload.defaults;
            for (let i = 0; i < actual.length; i++)
            {
                const arg = actual[i];
                if (!arg)
                {
                    arg_d && arg_d[i] || fail();
                    continue;
                }

                if (!isAssignable(arg_t[i], (actual[i] || fail()).type))
                    continue NEXT;
            }

            // Forbid ambiguity.
            if (matched)
                fail('Ambiguous callsite, matches multiple functions in scope: `' + id + '`.');

            // Done!
            matched     = overload;
            mut_args    = actual;
        }

        // Mutate call args last thing.
        if (matched && mut_args !== args)
        {
            const arg_d = matched.defaults;

            mut_args.length >= args.length || fail();
            for (let i = 0; i < mut_args.length; i++)
                args[i] = mut_args[i] || arg_d && arg_d[i] || fail();
        }
    }

    if (matched)
    {
        // Closure detector:
        //  -   for something to be a closure,
        //      it has to close over something from a parent scope
        //      that is not the root scope.
        if (closureDetect
            && closureDetect !== rootScope // opti
            && (!rootScope ||
                closureDetect.indexOf(matched) >= 0
                &&  rootScope.indexOf(matched)  < 0))
        {
            _closure_detected = true;
        }

        // Implicit argument injection.
        const arg_t = matched.args;
        const arg_d = matched.defaults;

        if (args && arg_t && args.length < arg_t.length)
        {
            const arg_n = matched.names || fail();
            for (let i = args.length; i < arg_t.length; i++)
            {
                const id   = arg_n[i];
                const type = arg_t[i];
                const def  = arg_d && arg_d[i];

                // Inject default ...
                if (def)
                    args[i] = def;

                // ... or propagate implicit.
                else
                    bindImplicitArg(args, i, id, type);
            }
        }
    }

    return matched;
}

function scope_match__mutargs(id: string, args: SolvedNodes|null, flags: number): Overload
{
    return scope_tryMatch__mutargs(id, args, null, flags)
        || _scope && _scope[id] && fail('No overload of `' + id + '` matches call signature.', args && args.map(i => i && i.type), args && args.map(i => i && i.kind + ':' + i.value))
        || notDefined(id);
}

function notDefined(id: string): Overload
{
    switch (id)
    {
        case '__native_pure': return __native_pure();
    }

    return fail('`' + id + '` is not defined.');
}

function __native_pure()
{
    const fn    = _current_fn   || fail();
    const items = fn.items      || fail();
    const rnode = items[items.length + FN_RET_BACK] || fail();

    return Binding(fn, rnode.type || fail());
}


//

type Solver = (node: Node) => SolvedNode;

const SOLVE: { [nodeKind: string]: Solver } =
{
    'root':     solveRoot,
    'block':    solveBlock,
    'label':    solveComma,

    'let':      solveLet,
    'call':     solveCall,
    'arrlit':   solveArrayLiteral,
    'if':       solveIf,
    'loop':     solveBlock, // TODO

    'return':   solveReturn,
    'break':    solveJump,
    'continue': solveJump,

    'int':      solveInt,
    'str':      solveStr,
    'empty':    solveEmpty,
};

type UnorderedPreper = (node: Node) => SolvedNode|null;
type UnorderedSolver = (node: Node, solved: SolvedNode|null) => SolvedNode;

const UNORDERED_PREP: { [nodeKind: string]: UnorderedPreper } =
{
    'fn':       uPrepFn,
    'struct':   uPrepStruct,
};

const UNORDERED_SOLVE: { [nodeKind: string]: UnorderedSolver } =
{
    'fn':       uSolveFn,
    'struct':   uSolveStruct,
};

function solveRoot(node: Node): SolvedNode
{
    return SolvedNode(node, solveNodes(node.items), t_void);
}

function solveBlock(node: Node): SolvedNode
{
    const scope0 = scope_push();
    const out = SolvedNode(node, solveNodes(node.items), t_void);
    _scope = scope0;
    return out;
}

function solveComma(node: Node): SolvedNode
{
    const items = solveNodes(node.items);
    const last = items && items[items.length - 1] || fail();

    return SolvedNode(node, items, last.type || fail());
}


//

const i32_min = 0xffffffff|0;
const i32_max = 0x7fffffff|0;

function solveInt(node: Node): SolvedNode
{
    const v = Number(node.value);
    if (v >= i32_min && v <= i32_max)
    {
        let type = t_i32;
        // if (v !== 0)
        //     type = qadd(type, q_non_zero);

        return SolvedNode(node, null, type);
    }

    return fail(
        'Out of range for an i32 literal.');
}

function solveStr(node: Node): SolvedNode
{
    const v = node.value;
    typeof v === 'string' || fail();

    return SolvedNode(node, null, t_string);
}

function solveEmpty(node: Node): SolvedNode
{
    return SolvedNode(node, null, t_void);
}


//

function uPrepFn(node: Node): SolvedNode|null
{
    return __solveFn(false, false, node, null, -1);
}

function uSolveFn(node: Node, prep: SolvedNode|null): SolvedNode
{
    return __solveFn(true, false, node, prep, -1) || fail();
}

function __solveFn(solve: boolean, spec: boolean, n_fn: Node, prep: SolvedNode|null, caseIdx: number): SolvedNode|null
{
    const id = n_fn.value || fail('TODO anonymous fns');

    // Template early exit.
    if (spec)
    {
        solve || fail();
    }
    else if (n_fn.flags & F_TEMPLATE)
    {
        if (solve)
            return prep || fail();

        const tDecl = TemplateDecl(n_fn);
        const out   = SolvedNode(n_fn, null, t_void);
        out.target  = tDecl;

        scope_add(id, tDecl);
        return out;
    }

    // Prep reject.
    if (!solve && !(n_fn.flags & F_FULLY_TYPED))
        return null;

    const inItems   = n_fn.items || fail();
    inItems.length >= FN_RET_BACK || fail();

    const out       = prep || SolvedNode(n_fn, null, t_void);

    const outItems: SolvedNodes = inItems.map(() => null);
    out.items       = outItems;

    //////////////////////////
    {
        const current_fn0   = _current_fn;
        const scope0        = scope_push();

        _current_fn         = out;

        // Arg decls.
        for (let i = 0; i < inItems.length + FN_ARGS_BACK; i++)
        {
            const n_arg = inItems[i] || fail();
            n_arg.kind === 'let' || fail();
            outItems[i] = solveLet(n_arg);
        }

        /////////////////////////////////////////////////////
        let n_ret   = inItems[inItems.length + FN_RET_BACK];
        let n_body  = inItems[inItems.length + FN_BODY_BACK] || fail();

        // Pattern descent.
        if (caseIdx >= 0)
        {
            n_body.kind === 'pattern' || fail();
            const branch = n_body.items && n_body.items[caseIdx] || fail();
            const items = branch.items || fail();

            n_ret   = items[items.length + FN_RET_BACK]  || n_ret || null;
            n_body  = items[items.length + FN_BODY_BACK] || fail();
        }

        // Return type annot.
        {
            const s_ret = n_ret && evalTypeAnnot(n_ret) || null;

            // MUT DURING SOLVE,
            //  implicit args splice in
            outItems[outItems.length + FN_RET_BACK] = s_ret;
        }

        // Only if actually solving the fn, the fn body.
        if (solve)
        {
            const s_body = solveNode(n_body) || fail();

            // MUT DURING SOLVE,
            //  implicit args splice in
            outItems[outItems.length + FN_BODY_BACK] = s_body;
        }

        //
        /////////////////////////////////////////////////////

        _current_fn         = current_fn0;
        _scope              = scope0;
    }
    //////////////////////////

    if (!prep)
    {
        const fnDecl = FnDecl(out);
        out.target && fail();
        out.target = fnDecl;

        if (!spec)
            scope_add(id, fnDecl);
    }

    !solve || out.items[out.items.length + FN_BODY_BACK] || fail();

    return out;
}


//

let mangler_lastIn : SolvedNodes|null;
let mangler_lastOut: string = '';

function mangler(args: SolvedNodes): string
{
    if (args === mangler_lastIn)
        return mangler_lastOut;

    let mangle = '';
    for (let i = 0; i < args.length; i++)
        mangle += '\v' + serializeType((args[i] || fail()).type);

    return (
        mangler_lastIn  = args,
        mangler_lastOut = mangle);
}


//

function trySpecialize(
    template: Template, args: SolvedNodes)
        : Overload|null
{
    const mangle = mangler(args);

    //
    let match = template.specializations[mangle];
    if (match === undefined)
        match = template.specializations[mangle] = doTrySpecialize(template, args) || null;

    return match;
}

type TypeParams = { [id: string]: Type };

function doTrySpecialize(
    template: Template, args: SolvedNodes)
        : Overload|null
{
    const typeParams: TypeParams = {};

    ///////////////////////////////////////
    const scope0 = _scope;
    _scope = Object.create(template.scope);
    ///////////////////////////////////////

    const node = template.node;

    const result = node.kind === 'fn'
        ? trySpecializeFn(node, args, typeParams)
        : fail('TODO');

    ///////////////////////////////////////
    _scope = scope0;
    ///////////////////////////////////////

    return result;
}


//

function trySpecializeFn(
    node: Node, args: SolvedNodes, typeParams: TypeParams)
        : Overload|null
{
    const items = node.items || fail();

    // First off, solve type params.
    for (let i = 0, n = items.length + FN_ARGS_BACK; i < n; i++)
    {
        const argNode = items[i] || fail();
        argNode.kind === 'let'   || fail();

        const argValue = args && args[i];
        const inType = argValue && argValue.type;

        if (inType)
        {
            const argName = argNode.value || fail();
            if (!typeParams[argName])
                typeParams[argName] = inType;
        }

        if (argNode.flags & F_TEMPLATE)
        {
            const annot = argNode.items && argNode.items[LET_TYPE];
            if (annot)
            {
                const ok = inType && trySolveTypeParams(
                    annot, inType, typeParams);

                if (!ok)
                    return null;
            }
        }
    }

    // Match pattern arm here.
    let caseIdx = -1;

    const pattern = items[items.length + FN_BODY_BACK] || fail();
    if (pattern.kind === 'pattern')
    {
        const branches = pattern.items || fail();

        for (let i = 0; i < branches.length; i++)
        {
            const branch = branches[i];
            const items = branch && branch.items || fail();
            const cond = items[0] || fail();

            if (evalTypePattern(cond, typeParams))
            {
                caseIdx = i;
                break;
            }
        }

        // All branches mismatch?
        if (caseIdx < 0)
            return null;
    }

    ////////////////////////////////
    const typeParams0 = _typeParams;
    _typeParams = typeParams;
    ////////////////////////////////

    const specialized = __solveFn(true, true, node, null, caseIdx) || fail();

    ////////////////////////////////
    _typeParams = typeParams0;
    ////////////////////////////////

    return specialized.target || fail();
}


//

function uPrepStruct(node: Node): SolvedNode
{
    return __solveStruct(false, node, null);
}

function uSolveStruct(node: Node, prep: SolvedNode|null): SolvedNode
{
    return __solveStruct(true, node, prep);
}

function __solveStruct(solve: boolean, node: Node, prep: SolvedNode|null): SolvedNode
{
    const out           = prep || SolvedNode(node, null, t_void);

    const fields: StructField[] = [];

    const id            = node.value || fail('TODO anonymous structs');
    const type          = registerStruct(id, fields, node.flags);

    // Add the arity-0 type entry.
    if (!prep)
    {
        const decl = Typedef(type);
        out.target && fail();
        out.target = decl;

        scope_add(id, decl);
    }

    if (!solve)
        return out;

    //////////////////////////
    {
        const current_str0  = _current_str;
        const current_strt0 = _current_strt;

        _current_str        = out;
        _current_strt       = type;

        solveNodes(
            node.items,
            out.items = (node.items || fail()).map(() => null));

        _current_str        = current_str0;
        _current_strt       = current_strt0;
    }
    //////////////////////////

    // Add a default constructor.
    {
        const members: SolvedNode[] = [];
        const items = out.items || fail();
        for (let i = 0; i < items.length; i++)
        {
            const item = items[i];
            if (item && item.kind === 'let' && (item.flags & F_FIELD))
            {
                members.push(item);
                fields.push({
                    id:   item.value || fail(),
                    type: item.type  || fail(),
                });
            }
        }

        scope_add(id, DefaultCtor(type, members));
    }

    return out;
}


//

function solveReturn(node: Node): SolvedNode
{
    const out = SolvedNode(node, solveNodes(node.items), t_void);

    // Either use the return expression,
    //  or the void-returning return statement itself,
    //   so we always have a node to rely on.

    const nextExpr  = out.items && out.items[0] || out;
    const nextType  = nextExpr.type || fail();

    const fn        = _current_fn || fail();
    const items     = fn.items || fail();
    const retIdx    = items.length + FN_RET_BACK;
    const prevExpr  = items[retIdx];
    const prevType  = prevExpr ? prevExpr.type || fail() : null;

    if (prevType)
        isAssignable(prevType, nextType)
            || fail('Non-assignable return types.');
    else
        items[retIdx] = nextExpr || fail();

    return out;
}

function solveJump(node: Node): SolvedNode
{
    return SolvedNode(node, null, t_void);
}


//

function solveLet(node: Node): SolvedNode
{
    const annot     = node.items && node.items[LET_TYPE];
    const init      = node.items && node.items[LET_INIT];

    const s_annot   = annot && evalTypeAnnot(annot);
    let   s_init    = init  && solveNode(init);

    const t_annot   = s_annot && s_annot.type;
    const t_init    = s_init  &&  s_init.type;

    const t_let     = t_annot || clear_refs(t_init || fail(
        'Variable declarations without explicit type annotations must be initialized.'));

    if (t_annot && t_init)
        isAssignable(t_annot, t_init) || fail(
            'Type annotation does not match init expression.');

    s_init = s_init && maybeCopyOrMove(
        maybePRValue(s_init), t_let);

    //
    const out       = SolvedNode(node, [s_annot || s_init, s_init], t_let);
    const id        = node.value || fail();

    if (node.flags & F_MUT)
        _current_fn || fail(
            'Mutable statics are not currently allowed.');

    //
    const overload  = out.flags & F_FIELD
        ? Field(out, _current_strt || fail(), t_let)
        : Binding(out, node.flags & F_MUT
            ? add_mutref(t_let)
            : add_ref(t_let));

    scope_add(id, overload);
    if (out.flags & F_USING)
        scope_using(overload);

    return out;
}


//

function evalTypeAnnot(node: Node): SolvedNode
{
    if (node.kind === 'call')
    {
        const items = node.items;
        if (items && items.length)
        {
            if (items.length === 1)
            {
                const T = evalTypeAnnot(items[0] || fail()) || fail();
                const t = T.type || fail();

                if (node.value === '&')
                    return SolvedNode(node, null, add_ref(t));

                if (node.value === '&mut')
                    return SolvedNode(node, null, add_mutref(t));

                if (node.value === '[]')
                    return SolvedNode(node, null, createArray(t));
            }
            else if (items.length === 2)
            {
                const a = evalTypeAnnot(items[0] || fail()).type || fail();
                const b = evalTypeAnnot(items[1] || fail()).type || fail();

                if (node.value === 'Map')
                    return SolvedNode(node, null, createMap(a, b));
            }
        }
        else
        {
            const id        = node.value || fail();
            const scope     = _scope || fail();
            const overloads = scope[id] || notDefined(id);

            for (let i = 0; i < overloads.length; i++)
            {
                const maybe = overloads[i];
                if (maybe.kind === 'type')
                    return SolvedNode(node, null, maybe.type || fail());
            }

            fail('No type `' + id + '` in scope.');
        }
    }
    else if (node.kind === 'typeparam')
    {
        const id = node.value || fail();
        _typeParams || fail(
            'Unexpected type param: `$' + id + '`.');

        const type = _typeParams && _typeParams[id] || fail(
            'No type param `$' + id + '` in scope.');

        return SolvedNode(node, null, type);
    }

    return fail('TODO');
}

function trySolveTypeParams(
    node: Node, type: Type, typeParams: TypeParams): boolean
{
    if (node.kind === 'call')
    {
        const items = node.items;
        if (items && items.length)
        {
            if (items.length === 1)
            {
                const t = node.value === '&'    ? tryClear_ref(type)
                        : node.value === '&mut' ? tryClear_mutref(type)
                        : node.value === '[]'   ? tryClear_array(type)
                        : fail('TODO');

                if (!t)
                    return false;

                return trySolveTypeParams(
                    items[0] || fail(), t, typeParams);
            }
            else if (items.length === 2)
            {
                if (node.value === 'Map')
                {
                    const kv = tryClear_map(type);
                    if (!kv)
                        return false;

                    return trySolveTypeParams(items[0] || fail(), kv[0], typeParams)
                        && trySolveTypeParams(items[1] || fail(), kv[1], typeParams);
                }
            }
        }
        else
        {
            const id        = node.value || fail();
            const scope     = _scope || fail();
            const overloads = scope[id] || notDefined(id);

            for (let i = 0; i < overloads.length; i++)
            {
                const maybe = overloads[i];
                if (maybe.kind === 'type')
                    return isAssignable(maybe.type || fail(), type);
            }

            fail('No type `' + id + '` in scope.');
        }
    }
    else if (node.kind === 'typeparam')
    {
        const id = node.value || fail();
        const prev = typeParams[id];
        if (prev)
        {
            const inter = type_tryInter(prev, type);
            if (!inter)
                return false;

            type = inter;
        }

        // TODO not here:
        //  we want to clear everything non-canonical from
        //   type params AFTER we solve & match the args,
        //    during the matching it shouldn't be necessary.
        //
        // After the match we need this to e.g. lift `non_zero`
        //  from integral results, etc.
        //
        typeParams[id] = clear_refs(type);

        return true;
    }

    return fail('TODO');
}

function evalTypePattern(node: Node, typeParams: TypeParams): boolean
{
    const items = node.items;
    if (node.kind === 'call' && items && items.length === 2)
    {
        const left  = items[0] || fail();
        const right = items[1] || fail();

        if (node.value === '->')
        {
            if (left.kind  === 'typeparam' &&
                right.kind === 'typetag')
            {
                const tag   = right.value || fail();
                const type  = left.value && typeParams[left.value] || fail(
                    'No type param `$' + left.value + '` in scope.');

                return type_has(type, tag);
            }
            else
            {
                ////////////////////////////////
                const typeParams0 = _typeParams;
                _typeParams       = typeParams;
                ////////////////////////////////

                const expect = evalTypeAnnot(left ).type;
                const actual = evalTypeAnnot(right).type;

                ////////////////////////////////
                _typeParams = typeParams0;
                ////////////////////////////////

                return isAssignable(expect, actual);
            }
        }
        else if (node.value === '&&')
        {
            return evalTypePattern(left,  typeParams)
                && evalTypePattern(right, typeParams);
        }
        else if (node.value === '||')
        {
            return evalTypePattern(left,  typeParams)
                && evalTypePattern(right, typeParams);
        }
    }

    return fail('TODO');
}


//

function createRead(id: string): Node
{
    return {
        kind:   'call',
        flags:  F_ID,
        value:  id,
        items:  null,
        token:  (_here || fail()).token,
    };
}

function solveCall(node: Node): SolvedNode
{
    const id        = node.value || fail();
    let args        = solveNodes(node.items) || [];

    // Implicit temporaries, all args are referable.
    for (let i = 0; i < args.length; i++)
        args[i] = maybePRValue(args[i] || fail());

    //
    let callTarg    = scope_match__mutargs(id, args, node.flags);

    // `using` codegen.
    while (callTarg.partial)
    {
        const unshift   = callTarg.kind === 'p-unshift';

        const partial   = callTarg.partial  || fail();
        const via       = partial[0]        || fail();
        callTarg        = partial[1]        || fail();

        // There's two things we can do here -
        //  -   either we're injecting an implicitly used local,
        //          e.g. the this pointer, or another `using` variable,
        //  -   or we're wrapping the head argument
        //          with another derefence or method call or whatever.

        // And that's all there is to `using`.
        const argNode   = CallerNode(
            createRead('__partial' as any),
            unshift ? null
                    : [ (args && args[0]) || fail() ],
            via.type || fail(),
            via);

        //
        if (!args)
            args = [];

        if (unshift)
            args.unshift(argNode);
        else
            args[0] = argNode;
    }

    //
    return CallerNode(
        node,
        args && args.length ? args : null,
        callTarg.type || fail(),
        callTarg);
}

function maybePRValue(node: SolvedNode)
{
    if (node.type.quals.indexOf(q_ref) < 0)
        node.type = add_prvalue_ref(node.type);

    return node;
}


// I feel this should be a fncall instead of this here.
//  It's varargs - so is it a template or what?

function solveArrayLiteral(node: Node)
{
    const items = solveNodes(node.items) || fail();
    const head  = items[0] || fail('TODO empty array literals');

    let itemType = head.type;
    for (let i = 1; i < items.length; i++)
        itemType = type_tryInter(itemType, (items[i] || fail()).type) || fail(
            '[array literal] No common supertype:', itemType, items[i]);

    return SolvedNode(node, items,
        createArray(itemType) || fail());
}


// This is a weird one,
//  in case this is the current fn we're solving,
//   we wont have overload yet, but we do have the node,
//    otherwise we have the overload and get the node from there.

function createLet(id: string, type: Type, flags: number = 0): SolvedNode
{
    return {
        kind:   'let',
        flags:  flags|0,
        value:  id,

        items:  null,
        token:  (_here || fail()).token,
        type:   type,
        target: null,
    };
}

function injectImplicitArg__mutfn(
    node: SolvedNode|null, fn: Overload|null,
    id: string, type: Type)
{
    if (!node)
        node = fn && fn.node || fail();

    const mut_argNodes = node.items || fail();
    const newArgIdx = mut_argNodes.length + FN_RET_BACK;

    // The new argnode.
    const newArgNode = createLet(id, type, F_IMPLICIT);

    mut_argNodes.splice(newArgIdx, 0, newArgNode);

    // If we dont have the overload yet,
    //  there's nothing else to do here.

    // TODO argname check should come first -
    //  the one below is too late,
    //   wont catch an argname dupe here.
    if (fn)
    {
        // We'll be mutating the overload.
        fn.kind === 'fn' || fail();
        const mut_args = fn.args || [];
        const mut_names = fn.names || [];
        mut_names.length === mut_args.length || fail();

        // We'll also mutate the fn SolvedNode.
        const node = fn.node || fail();
        node.kind === 'fn' && node.type || fail(); // isSolvedFnNode

        //
        mut_names.indexOf(id) < 0 || fail(
            'Implicit argument name collision.');

        mut_args .push(type);
        mut_names.push(id);

        fn.args  = mut_args;
        fn.names = mut_names;

        // Propagate to all callsites.
        const callsites = fn.callsites;
        if (callsites)
            for (let i = 0; i < callsites.length; i++)
            {
                atCallsite(callsites[i], callNode =>
                {
                    const args = callNode.items || [];
                    callNode.items = args;
                    bindImplicitArg(args, newArgIdx, id, type);
                });
            }
    }

    // TODO put in the original scope!
    return Binding(newArgNode, type);
}

function bindImplicitArg(
    args: SolvedNodes, argIdx: number,
    id: string, type: Type)
{
    args.length >= argIdx || fail();

    args[argIdx] = CallerNode(
        createRead(id), null, type,
        getImplicit(id, type));
}

function getImplicit(id: string, type: Type): Overload
{
    let matched = scope_tryMatch__mutargs(id, null, type, 0);
    if (!matched)
    {
        if (!_current_fn)
            return fail('No implicit `' + id + '` in scope.');

        const fnDecl = _current_fn.target || null;
        const fnNode = fnDecl ? fnDecl.node : _current_fn;
        matched = injectImplicitArg__mutfn(fnNode, fnDecl, id, type) || fail();
    }

    return matched;
}


//

function solveIf(node: Node): SolvedNode
{
    const items   = solveNodes(node.items) || fail();
    const [, cons, alt] = items;

    const priExpr = cons || alt || fail();
    const secExpr = cons && alt ? alt : cons;

    const priType = priExpr.type || fail();
    const secType = secExpr && (secExpr.type || fail());

    const outType: Type = !secType ? priType
        : type_tryInter(priType, secType) || fail(
            'No common supertype:', priType, secType);

    return SolvedNode(node, items, outType || fail());
}


//

function SolvedNode(
    node: Node, items: SolvedNodes|null, type: Type)
        : SolvedNode
{
    return {
        kind:  node.kind ,
        flags: node.flags,
        value: node.value,

        items,
        token: node.token,
        type,
        target: null,
    };
}

function wrap(kind: string, node: SolvedNode, flags: number)
{
    return {
        kind,
        flags:  flags,
        value:  null,

        items:  [ node ],
        token:  node.token,
        type:   node.type,
        target: null,
    };
}

function CallerNode(
    node: Node, items: SolvedNodes|null, type: Type, target: Overload)
        : SolvedNode
{
    // HACK -
    // TBD how we make this stuff work in real life.
    if (target.kind === 'field')
    {
        const head = items && items.length === 1 && items[0] || fail();
        const headType = head.type || fail();

        type = add_refs_from(headType, type);
    }

    // Tag copies and moves.
    else if (items)
    {
        const args = target.args || fail();
        for (let i = 0; i < items.length; i++)
            items[i] = maybeCopyOrMove(
                items[i] || fail(), args[i]);
    }

    //
    const out = SolvedNode(node, items, type);

    // Register callsite.
    {
        out.target = target;
        if (!target.callsites)
            target.callsites = [];

        // Pair<CallerNode, CallerScope>
        target.callsites.push(
            Callsite(out));
    }

    return out;
}

function maybeCopyOrMove(
    node: SolvedNode, slot: Type): SolvedNode
{
    const q = slot.quals;
    if (q.indexOf(q_ref) >= 0)
        return node;

    let op: 'move'|'copy' = 'copy';

    if (q.indexOf(q_copy) < 0)
    {
        if (q.indexOf(q_move) < 0)
            fail('Non-copy/non-move?');

        op = 'move';
    }

    return wrap(op, node,
        node.type.quals.indexOf(q_prvalue) >= 0
            ? F_ELISION
            : 0);
}


//

function solveNode(node: Node): SolvedNode
{
    return SOLVE[node.kind](node)
        || fail();
}

function solveNodes(nodes: Nodes|null, output?: SolvedNodes): SolvedNodes|null
{
    if (!nodes)
        return null;

    const here0                 = _here;
    const result: SolvedNodes   = output || [];

    let offset = 0;

    for (let i = 0; i < nodes.length; i++)
    {
        const node = nodes[i];
        if (!node)
        {
            result[i] = node;
            continue;
        }

        // Regular solve.
        const solver    = SOLVE[node.kind] || null;
        if (solver)
        {
            _here       = node;
            result[i]   = solver(node);
            continue;
        }

        // Unordered solve -
        //  batches multiple potentially recursive declarations,
        //   so we can expose them all in scope prior to solving types.

        // This allows us to have groups of mutually recursive types & functions,
        //  without risking stuff depending on constants & variables
        //   introduced halfway through.
        const i0 = i;
        let   i1 = nodes.length;

        // CLOSURE DETECTOR ////////////////////////////
        const cd0           = _closure_detect;
        const cds0          = _closure_detected;
        _closure_detect     = _scope;
        _closure_detected   = false;

        // Forward rootness, this is getting awkward.
        {
            const barrier       = scope_push();
            if (_scope_root === barrier)
                _scope_root = _scope;
        }
        ////////////////////////////////////////////////

        // First pass, expose stuff in scope
        //  without doing type checking when possible.
        for (let i = i0; i < nodes.length; i++)
        {
            const node = nodes[i];
            if (!node)
            {
                result[i] = node;
                continue;
            }

            if (SOLVE[node.kind])
            {
                i1 = i;
                break;
            }

            _here       = node;
            result[i]   = UNORDERED_PREP[node.kind](node);
        }

        // Second pass, do the remaining work.
        for (let i = i0; i < i1; i++)
        {
            const node = nodes[i];
            if (node)
            {
                _here       = node;
                result[i]   = UNORDERED_SOLVE[node.kind](node, result[i]);
            }
        }

        // Propagate closure detector results.
        if (_closure_detected)
            for (let i = i0; i < i1; i++)
            {
                const node = result[i];
                if (node)
                    node.flags |= F_CLOSURE;
            }

        // CLOSURE DETECTOR ////////////////////////////
        _closure_detect     = cd0;
        _closure_detected   = cds0;
        ////////////////////////////////////////////////

        // Continue from group end.
        i1 > i0 || fail();
        i = i1 - 1; // <- loop++
    }

    result.length === nodes.length + offset || fail();

    _here = here0;
    return result;
}


// Solve & cache the prelude.

import { lex, Source, Filename } from './lex';
import { parse } from './parse';
import { prelude_src } from './prelude';

let PRELUDE_SOLVED: Scope|null = null;

PRELUDE_SOLVED = solve(
    parse(lex(prelude_src as Source, '__prelude' as Filename)))
        .scope;

export function solve(parse: Node): SolveResult
{
    RESET();

    // Globals.
    {
        const scope = !PRELUDE_SOLVED
            ? listGlobals()
            : Object.create(PRELUDE_SOLVED);

        // Clone globals, we need this to track callsites for:
        //  - import usage (TODO)
        //  - implicit argument propagation
        scope_resetUsage(scope);

        //
        _scope = scope;
    }

    // Root scope used for closure detection.
    _scope_root = _scope;

    //
    const root  = solveNode(parse);
    const scope = _scope || fail();
    const ret   = { root, scope };

    //
    RESET();

    return ret;
}


//

function listGlobals(): Scope
{
    return {
        'i32':      [ Typedef(t_i32   ) ],
        'bool':     [ Typedef(t_bool  ) ],
        'void':     [ Typedef(t_void  ) ],
        'string':   [ Typedef(t_string) ],
    };
}
