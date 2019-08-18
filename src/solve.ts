import { ParseResult, Node, Nodes, LET_TYPE, LET_INIT, FN_RET_BACK, F_NAMED_ARGS } from './parse';
import { fail } from './fail';

import { Type, t_void, t_i32, t_bool, isAssignable, add_ref, add_mut } from './types';

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

type Overload =
{
    kind: 'fn'|'var'|'type';
    node: SolvedNode|null;
    type: Type;

    // Arity.
    min: number;
    max: number;
    args: Type[]|null;
    names: string[]|null;
};

function Binding(node: SolvedNode, type: Type): Overload
{
    node && node.items || fail();

    return { kind: 'var', node, type, min: 0, max: 0, args: null, names: null };
}

function Typedef(type: Type): Overload
{
    return { kind: 'type', node: null, type, min: 0, max: 0, args: null, names: null };
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

    return { kind: 'fn', node, type: ret, min: arity, max: arity, args: arg_t, names: arg_n };
}

type Scope =
{
    [id: string]: Overload[];
};


//

let _here:              Node|null           = null;
let _prelude_solved:    Scope|null          = null;
let _scope:             Scope|null          = null;
let _current_fn:        SolvedNode|null     = null;


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

function scope_match__mutargs(id: string, args: SolvedNodes|null, flags: number): Overload
{
    const scope = _scope || fail();
    const overloads = scope[id] || notDefined(id);

    // Arity 0 - blind head match.
    // Allows simple shadowing of variables and such, latest wins.
    if (!args || !args.length)
    {
        const head = overloads[0];
        head.min === 0 || fail(
            '`' + id + '` expects ' + head.min + ' arguments, none provided.');

        return head;
    }

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
    let matched: Overload|null  = null;
    let mut_args                = args;

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
    'root':     solveBlock,
    'block':    solveBlock,
    'label':    solveComma,

    'fn':       solveFn,
    'return':   solveReturn,
    'empty':    solveEmpty,

    'let':      solveLet,
    'call':     solveCall,

    'if':       solveIf,
    'loop':     solveBlock, // TODO

    'int':      solveInt,
};

function solveBlock(node: Node): SolvedNode
{
    const scope0 = node.kind === 'root'
        ? _scope
        : scope_push();

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

function solveFn(node: Node): SolvedNode
{
    const out           = SolvedNode(node, null, t_void);

    //////////////////////////
    const current_fn0   = _current_fn;
    const scope0        = scope_push();

    _current_fn         = out;

    solveNodes(
        node.items,
        out.items = (node.items || fail()).map(() => null));

    _current_fn         = current_fn0;
    _scope              = scope0;
    //////////////////////////

    const id = node.value || fail();
    scope_add(id, FnDecl(out));

    return out;
}

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

    scope_add(id, Binding(out, add_mut(add_ref(t_let))));
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
    const args      = solveNodes(node.items);
    const callTarg  = scope_match__mutargs(id, args, node.flags);

    return SolvedNode(
        node, args, callTarg.type, callTarg);
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
    node: Node, items: SolvedNodes|null, type: Type, target?: Overload)
        : SolvedNode
{
    return {
        kind:  node.kind ,
        flags: node.flags,
        value: node.value,

        items,
        token: node.token,
        type,
        target: target || null,
    };
}


//

function solveNode(node: Node): SolvedNode
{
    const here0 = _here;

    _here = node;
    const result = SOLVE[node.kind](node /*, expect, allowGuards*/ );

    _here = here0;
    return result;
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

        _here = node;
        result[i] = SOLVE[node.kind](node);
    }

    _here = here0;
    return result;
}


// Solve & cache the prelude.

import { lex, Source, Filename } from './lex';
import { parse } from './parse';
import { prelude_src } from './prelude';

_prelude_solved = solve(
    parse(lex(prelude_src as Source, '__prelude' as Filename)))
        .scope;

function preludeOnly()
{
    if (_prelude_solved)
        fail('Only allowable in prelude.');
}

export function solve(parse: ParseResult): SolveResult
{
    // Globals.
    if (!_prelude_solved)
        _scope = listGlobals();
    else
        _scope = Object.create(_prelude_solved);

    const scope = _scope || fail();
    const root  = solveNode(parse.root);
    _scope = null;

    return { root, scope };
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
