import { ParseResult, Node, Nodes, LET_TYPE, LET_INIT, FN_RET_BACK, FN_BODY_BACK, F_NAMED_ARGS, F_FIELD, F_USING, createCall, F_FULLY_TYPED, F_CLOSURE } from './parse';
import { fail } from './fail';

import { Type, t_void, t_i32, t_bool, isAssignable, add_ref, add_mut, registerStruct, StructField } from './types';

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


//

type Overload =
{
    readonly kind: 'fn'|'var'|'field'|'type'|'defctor'|'p-unshift'|'p-wrap';
    readonly node: SolvedNode|null;
    readonly type: Type;

    // Arity.
    readonly min: number;
    readonly max: number;
    readonly args: Type[]|null;
    readonly names: string[]|null;
    readonly partial: Overload[]|null;

    // Usage.
    callsites: (SolvedNode|Scope)[]|null;
    // Actual type is Pair<CallerNode, CallerScope>.
};

function resetCallsites(o: Overload): Overload
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

        callsites:  null,
    };
}

function Binding(node: SolvedNode, type: Type): Overload
{
    node && node.items || fail();
    return { kind: 'var', node, type, min: 0, max: 0, args: null, names: null, partial: null, callsites: null };
}

function Field(node: SolvedNode, structType: Type, fieldType: Type): Overload
{
    node && node.items || fail();

    // const thisArg = SolvedNode(
    //     createLet('this' as any, F_IMPLICIT, null, null),
    //         null, structType);

    return { kind: 'field', node, type: fieldType, min: 1, max: 1, args: [ structType ], names: [ 'this' ], partial: null, callsites: null };
}

function Typedef(type: Type): Overload
{
    return { kind: 'type', node: null, type, min: 0, max: 0, args: null, names: null, partial: null, callsites: null };
}

function FnDecl(node: SolvedNode): Overload
{
    node && node.items || fail();

    const items: SolvedNodes = node.items || fail();
    const rnode = items[items.length + FN_RET_BACK];
    const ret   = rnode && rnode.type || fail();
    const arity = items.length + FN_RET_BACK;
    const args  = items.slice(0, arity);

    const arg_t = args.map(i => i && i.type  || fail());
    const arg_n = args.map(i => i && i.value || fail());

    return { kind: 'fn', node, type: ret, min: arity, max: arity, args: arg_t, names: arg_n, partial: null, callsites: null };
}

function DefaultCtor(type: Type, members: SolvedNode[]): Overload
{
    const arg_t = members.map(i => i && i.type  || fail());
    const arg_n = members.map(i => i && i.value || fail());

    const arity = members.length;

    return { kind: 'defctor', node: null, type, min: arity, max: arity, args: arg_t, names: arg_n, partial: null, callsites: null };
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
    return { kind, node: null, type: overload.type, min, max, args, names, partial: [ via, overload ], callsites: null };
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

const NO_ARGS: SolvedNodes = [];
Object.freeze(NO_ARGS);

function scope_match__mutargs(id: string, args: SolvedNodes|null, flags: number): Overload
{
    const scope     = _scope || fail();
    const overloads = scope[id] || notDefined(id);

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
            const overload = overloads[i];
            if (overload.min > arity || overload.max < arity)
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

            // Type check args.
            const expect = overload.args || fail();
            for (let i = 0; i < expect.length; i++)
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

    // Closure detector:
    //  -   for something to be a closure,
    //      it has to close over something from a parent scope
    //      that is not the root scope.
    if (matched
        && closureDetect
        && closureDetect !== rootScope // opti
        && (!rootScope ||
            closureDetect.indexOf(matched) >= 0
            &&  rootScope.indexOf(matched)  < 0))
    {
        _closure_detected = true;
    }

    // Done.
    return matched || fail(
        'No overload of `' + id + '` matches call signature.');
}


// Pseudo-keywords.

function notDefined(id: string): Overload[]
{
    switch (id)
    {
        case '__native_pure':
            return [ __native_pure() ];
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

const SCOPE_CURFN = '.fn';

function __solveFn(solve: boolean, node: Node, prep: SolvedNode|null): SolvedNode|null
{
    // Prep reject.
    if (!solve && !(node.flags & F_FULLY_TYPED))
        return null;

    let items       = node.items    || fail();
    items.length   >= FN_RET_BACK   || fail();

    const out       = prep || SolvedNode(node, null, t_void);

    // Skip over body during prep.
    if (!solve)
    {
        items = items.slice();
        items[items.length + FN_BODY_BACK] = null;
    }

    let fnScope: Scope;

    //////////////////////////
    {
        const current_fn0   = _current_fn;
        const scope0        = scope_push();
        fnScope             = _scope || fail();

        _current_fn         = out;

        solveNodes(
            items,
            out.items = items.map(() => null));

        _current_fn         = current_fn0;
        _scope              = scope0;
    }
    //////////////////////////

    if (!prep)
    {
        const id = node.value || fail('TODO anonymous fns');

        const fnDecl = FnDecl(out);
        scope_add(id, fnDecl);

        //
        fnScope[SCOPE_CURFN] = [ fnDecl ];
    }

    return out;
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
        testAssignable(
            prevType, nextType,
                'Non-assignable return types.');
    else
        items[retIdx] = nextExpr || fail();

    return out;
}

function testAssignable(host: Type, guest: Type, error: string)
{
    isAssignable(host, guest) || fail(error);
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

    annot && init && fail(
        'TODO validate init assigns to annot.');

    //
    const out       = SolvedNode(node, [s_annot || s_init, s_init], t_let);
    const id        = node.value || fail();

    const type      = add_mut(add_ref(t_let));

    const overload  = out.flags & F_FIELD
        ? Field(out, _current_strt || fail(), type)
        : Binding(out, type);

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

                if (node.value === 'mut')
                    return SolvedNode(node, null, add_mut(t));
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
                    return SolvedNode(node, null, maybe.type);
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
    let args        = solveNodes(node.items);
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
            createCall('__partial' as any, 0, null),
            unshift ? null
                    : [ (args && args[0]) || fail() ],
            via.type,
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
        node, args, callTarg.type,
        callTarg);
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
        testAssignable(priType, secType, "TODO");

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
    const out = SolvedNode(node, items, type);

    // Register callsite.
    {
        out.target = target;
        if (!target.callsites)
            target.callsites = [];

        // Pair<CallerNode, CallerScope>
        target.callsites.push(out, _scope || fail());
    }

    return out;
}


//

function solveNode(node: Node): SolvedNode
{
    const _in = [ node ];
    const out = solveNodes(_in);
    return out && out[0] || fail();
}

function solveNodes(nodes: Nodes|null, output?: SolvedNodes): SolvedNodes|null
{
    if (!nodes)
        return null;

    const here0                 = _here;
    const result: SolvedNodes   = output || [];

    for (let i = 0, n = nodes.length; i < n; i++)
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
        let   i1 = n;

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
        for (let i = i0; i < n; i++)
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

            result[i] = UNORDERED_PREP[node.kind](node);
        }

        // Second pass, do the remaining work.
        for (let i = i0; i < i1; i++)
        {
            const node = nodes[i];
            if (node)
                result[i] = UNORDERED_SOLVE[node.kind](node, result[i]);
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
    if (!PRELUDE_SOLVED)
        _scope = listGlobals();
    else
        _scope = Object.create(PRELUDE_SOLVED);

    // Clone globals, we need this to track callsites for:
    //  - import usage (TODO)
    //  - implicit argument propagation
    {
        const scope = _scope;
        for (const key in scope)
            scope[key] = scope[key].map(
                resetCallsites);
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
