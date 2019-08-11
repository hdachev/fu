import { ParseResult, Node, Nodes, LET_TYPE, LET_INIT } from './parse';
import { Type, t_void, t_i32 } from './commons';
import { fail } from './fail';

export type SolvedNodes = (SolvedNode|null)[];

export type SolvedNode = Node &
{
    type:       Type;
    items:      SolvedNodes|null;
    target:     Overload|null;
};

export type SolveResult =
{
    root:       SolvedNode;
};


//

let _here:              Node|null           = null;
let _prelude_solved:    SolveResult|null    = null;


//

type Overload =
{
    kind: 'fn'|'var'|'type';
    node: SolvedNode;
    type: Type;

    // Arity.
    min: number;
    max: number;
    args: Type[]|null;
};

function Binding(node: SolvedNode, type: Type): Overload
{
    return { kind: 'var', node, type, min: 0, max: 0, args: null };
}

type Scope =
{
    [id: string]: Overload[];
};


//

let _scope: Scope|null = null;

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

function scope_match(id: string, args: SolvedNodes|null): Overload
{
    const scope = _scope || fail();
    const overloads = scope[id] || fail(
        '`' + id + '` is not defined.');

    // Arity 0 - blind head match.
    // Allows simple redefinition of variables and such.
    if (!args || !args.length)
    {
        const head = overloads[0];
        head.min === 0 || fail(
            '`' + id + '` expects ' + head.min + ' arguments, none provided.');

        return head;
    }

    const arity = args.length;

    //
    let matched: Overload|null = null;

    for (let i = 0; i < overloads.length; i++)
    {
        const overload = overloads[i];
        if (overload.min > arity || overload.max < arity)
            continue;

        const expect = overload.args || fail();
        for (let i = 0; i < expect.length; i++)
        {
            if (expect[i] !== args[i])
                continue;
        }

        if (matched)
            fail('Ambiguous callsite, matches multiple functions in scope: `' + id + '`.');

        matched = overload;
    }

    return matched || fail(
        'No overload of `' + id + '` matches call signature.');
}


//

type Solver = (node: Node) => SolvedNode;

const SOLVE: { [nodeKind: string]: Solver } =
{
    'root':     solveBlock,
    'fn':       solveBlock,

    'let':      solveLet,
    'call':     solveCall,
};

function solveBlock(node: Node): SolvedNode
{
    const scope0 = scope_push();
    const out = SolvedNode(node, solveNodes(node.items), t_void);
    _scope = scope0;
    return out;
}

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
    const out       = SolvedNode(node, [s_annot, s_init], t_let);
    const id        = node.value || fail();

    scope_add(id, Binding(out, t_let));
    return out;
}

function evalTypeAnnot(node: Node): SolvedNode
{
    node.kind === 'call' && node.value === 'i32' || fail(
        'TODO evalTypeAnnot', node);

    return node
        && SolvedNode(node, null, t_i32);
}


//

function solveCall(node: Node): SolvedNode
{
    const id        = node.value || fail();
    const args      = solveNodes(node.items);
    const callTarg  = scope_match(id, args);

    return SolvedNode(
        node, args, callTarg.type, callTarg);
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

function solveNodes(nodes: Nodes|null): SolvedNodes|null
{
    if (!nodes)
        return null;

    const here0 = _here;
    const result: SolvedNodes = [];

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
    parse(lex(prelude_src as Source, '__prelude' as Filename)));

export function solve(parse: ParseResult): SolveResult
{
    // TODO merge in all imports + prelude.
    _prelude_solved;

    _scope = null;

    //
    const root = solveNode(parse.root);

    return { root };
}
