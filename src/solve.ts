import { ParseResult, Node, Nodes, createRead, createLet, LET_TYPE, LET_INIT, FN_RET_BACK, FN_BODY_BACK, FN_ARGS_BACK, F_NAMED_ARGS, F_FIELD, F_USING, F_FULLY_TYPED, F_CLOSURE, F_IMPLICIT, F_MUT, F_TEMPLATE } from './parse';
import { fail } from './fail';

import { Type, t_template, t_void, t_i32, t_bool, isAssignable, add_ref, add_mutref, add_refs_from, registerStruct, StructField, serializeType } from './types';

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
    readonly specializations:
        { [mangle: string]: Overload|null };
};

function Template(node: Node)
{
    return { node, specializations: Object.create(null) };
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
        partial:    o.partial,

        // Reset usage.
        callsites:  null,
        template:   o.template && Template(o.template.node) || null,
    };
}

function Binding(node: SolvedNode, type: Type): Overload
{
    return { kind: 'var', node, type, min: 0, max: 0, args: null, names: null, partial: null, callsites: null, template: null };
}

function Field(node: SolvedNode, structType: Type, fieldType: Type): Overload
{
    node && node.items || fail();

    return { kind: 'field', node, type: fieldType, min: 1, max: 1, args: [ structType ], names: [ 'this' ], partial: null, callsites: null, template: null };
}

function Typedef(type: Type): Overload
{
    return { kind: 'type', node: null, type, min: 0, max: 0, args: null, names: null, partial: null, callsites: null, template: null };
}

function TemplateDecl(node: Node): Overload
{
    const min = node.kind === 'fn'
        ? (node.items || fail()).length + FN_ARGS_BACK
        : fail('TODO');

    const max = node.kind === 'fn'
        ? 0xffffff // implicit args etc, dunno whats happening, allow it all
        : min;

    const template = Template(node);

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

    return { kind: 'template', node: null, type: t_template, min, max, args: null, names, partial: null, callsites: null, template };
}

function FnDecl(node: SolvedNode): Overload
{
    node && node.items || fail();

    const items: SolvedNodes = node.items || fail();
    const rnode = items[items.length + FN_RET_BACK];
    const ret   = rnode && rnode.type || fail();

    const max   = items.length + FN_RET_BACK;
    const args  = items.slice(0, max);

    const arg_t: Type[]   = [];
    const arg_n: string[] = [];

    let min = 0;
    for (let i = 0; i < max; i++)
    {
        const arg = args[i]  || fail();
        arg.kind === 'let'   || fail();
        arg_t[i] = arg.type  || fail();
        arg_n[i] = arg.value || fail();

        // Non-implicit, non-defaulted argument?
        if (!(arg.flags & F_IMPLICIT) && !(arg.items && arg.items[LET_INIT]))
            min++;
    }

    return { kind: 'fn', node, type: ret, min, max, args: arg_t, names: arg_n, partial: null, callsites: null, template: null };
}

function DefaultCtor(type: Type, members: SolvedNode[]): Overload
{
    const arg_t = members.map(i => i && i.type  || fail());
    const arg_n = members.map(i => i && i.value || fail());

    const arity = members.length;

    return { kind: 'defctor', node: null, type, min: arity, max: arity, args: arg_t, names: arg_n, partial: null, callsites: null, template: null };
}

function Partial(via: Overload, overload: Overload): Overload
{
    let kind: 'p-unshift'|'p-wrap' = 'p-unshift';
    let min = overload.min - 1;
    let max = overload.max - 1;
    min >= 0 && max >= min || fail();

    const o_args  = overload.args || fail();
    const o_names = overload.names;

    let args  = o_args  && o_args .length > 1 ? o_args .slice(0, -1) : null;
    let names = o_names && o_names.length > 1 ? o_names.slice(0, -1) : null;

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
    }

    //
    return { kind, node: null, type: overload.type, min, max, args, names, partial: [ via, overload ], callsites: null, template: null };
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
            if (overload.min > arity || overload.max < arity)
                continue NEXT;

            // Match by return.
            if (retType && !isAssignable(retType, overload.type || fail()))
                continue NEXT;

            // Remap named arguments.
            let actual: SolvedNodes = args;
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
            while (overload.template)
            {
                const spec = trySpecialize(overload.template, args);
                if (!spec)
                    continue NEXT;

                overload = spec;
            }

            // Type check args.
            const expect = overload.args || fail();
            for (let i = 0; i < actual.length; i++)
                if (!isAssignable(expect[i], (actual[i] || fail()).type))
                    continue NEXT;

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
            mut_args.length === args.length || fail();
            for (let i = 0; i < mut_args.length; i++)
                args[i] = mut_args[i];
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
        const args_t = matched.args;
        if (args && args_t && args.length < args_t.length)
        {
            const args_n = matched.names || fail();
            for (let i = args.length; i < args_t.length; i++)
            {
                const id   = args_n[i];
                const type = args_t[i];
                bindImplicitArg(args, i, id, type);
            }
        }
    }

    return matched;
}

function scope_match__mutargs(id: string, args: SolvedNodes|null, flags: number): Overload
{
    return scope_tryMatch__mutargs(id, args, null, flags)
        || _scope && _scope[id] && fail('No overload of `' + id + '` matches call signature.')
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
    preludeOnly();

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
    'if':       solveIf,
    'loop':     solveBlock, // TODO

    'return':   solveReturn,

    'int':      solveInt,
    'empty':    solveEmpty,
};

type UnorderedPreper = (node: Node) => SolvedNode|null;
type UnorderedSolver = (node: Node, solved: SolvedNode|null) => SolvedNode;

const UNORDERED_PREP: { [nodeKind: string]: UnorderedPreper } =
{
    'fn':       uPrepFn,
    'struct':   uPrep_TODO,
};

const UNORDERED_SOLVE: { [nodeKind: string]: UnorderedSolver } =
{
    'fn':       uSolveFn,
    'struct':   uSolveStruct,
};

function uPrep_TODO()
{
    return null;
}

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
        return SolvedNode(node, null, t_i32);

    return fail(
        'Out of range for an i32 literal.');
}

function solveEmpty(node: Node): SolvedNode
{
    return SolvedNode(node, null, t_void);
}


//

function uPrepFn(node: Node): SolvedNode|null
{
    return __solveFn(false, node, null);
}

function uSolveFn(node: Node, prep: SolvedNode|null): SolvedNode
{
    return __solveFn(true, node, prep) || fail();
}

function __solveFn(solve: boolean, n_fn: Node, prep: SolvedNode|null): SolvedNode|null
{
    const id = n_fn.value || fail('TODO anonymous fns');

    // Template early exit.
    if (n_fn.flags & F_TEMPLATE)
    {
        if (solve)
            return prep || fail();

        scope_add(id, TemplateDecl(n_fn));
        return SolvedNode(n_fn, null, t_void);
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
        //
        // Return type annot.
        {
            const n_ret = inItems[inItems.length + FN_RET_BACK];
            const s_ret = n_ret && evalTypeAnnot(n_ret) || null;

            // MUT DURING SOLVE,
            //  implicit args splice in
            outItems[outItems.length + FN_RET_BACK] = s_ret;
        }

        // Only if actually solving the fn, the fn body.
        if (solve)
        {
            const n_body = inItems[inItems.length + FN_BODY_BACK] || fail();
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

        scope_add(id, fnDecl);
    }

    !solve || out.items[out.items.length + FN_BODY_BACK] || fail();

    return out;
}


//

function trySpecialize(
    template: Template, args: SolvedNodes)
        : Overload|null
{
    let mangle = '';
    for (let i = 0; i < args.length; i++)
        mangle += '\v' + serializeType((args[i] || fail()).type);

    //
    let match = template.specializations[mangle];
    if (match === undefined)
        match = template.specializations[mangle] = doTrySpecialize(template, args) || null;

    return match;
}

function doTrySpecialize(
    template: Template, args: SolvedNodes)
        : Overload|null
{
    template; args;

    return null;
}


//

function uSolveStruct(node: Node): SolvedNode
{
    const out           = SolvedNode(node, null, t_void);

    const fields: StructField[] = [];

    const id            = node.value || fail('TODO anonymous structs');
    const type          = registerStruct(id, fields);

    // Add the arity-0 type entry.
    scope_add(id, Typedef(type));

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


//

function solveLet(node: Node): SolvedNode
{
    const annot     = node.items && node.items[LET_TYPE];
    const init      = node.items && node.items[LET_INIT];

    const s_annot   = annot && evalTypeAnnot(annot);
    const s_init    = init  && solveNode(init);

    const t_annot   = s_annot && s_annot.type;
    const t_init    = s_init  &&  s_init.type;

    const t_let     = t_annot || t_init || fail(
        'Variable declarations without explicit type annotations must be initialized.');

    if (t_annot && t_init)
        isAssignable(t_annot, t_init) || fail(
            'Type annotation does not match init expression.');

    //
    const out       = SolvedNode(node, [s_annot || s_init, s_init], t_let);
    const id        = node.value || fail();

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

    return fail('TODO');
}


//

function solveCall(node: Node): SolvedNode
{
    const id        = node.value || fail();
    let args        = solveNodes(node.items) || [];
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


// This is a weird one,
//  in case this is the current fn we're solving,
//   we wont have overload yet, but we do have the node,
//    otherwise we have the overload and get the node from there.

function injectImplicitArg__mutfn(
    node: SolvedNode|null, fn: Overload|null,
    id: string, type: Type)
{
    if (!node)
        node = fn && fn.node || fail();

    const mut_argNodes = node.items || fail();
    const newArgIdx = mut_argNodes.length + FN_RET_BACK;

    // The new argnode.
    const newArgNode = SolvedNode(
        createLet(id, F_IMPLICIT, null, null),
            null, type);

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

    const priType = priExpr.type;
    const secType = secExpr && secExpr.type;

    if (secType)
        isAssignable(priType, secType) || fail(
            'TODO two way type union for conditionals');

    return SolvedNode(node, items, priType);
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

function preludeOnly()
{
    if (PRELUDE_SOLVED)
        fail('Only allowable in prelude.');
}

export function solve(parse: ParseResult): SolveResult
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
    const root  = solveNode(parse.root);
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
        'i32':  [ Typedef(t_i32 ) ],
        'bool': [ Typedef(t_bool) ],
        'void': [ Typedef(t_void) ],
    };
}
