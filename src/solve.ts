import { ParseResult, Node, Nodes, LET_TYPE, LET_INIT } from './parse';
import { Type, t_void, t_i32 } from './commons';
import { fail } from './fail';

export type SolvedNodes = (SolvedNode|null)[];

export type SolvedNode = Node &
{
    type:       Type;
    items:      SolvedNodes|null;
};

export type SolveResult =
{
    root:       SolvedNode;
};


//

let _here:              Node|null           = null;
let _prelude_solved:    SolveResult|null    = null;


//

type Solver = (node: Node) => SolvedNode;

const SOLVE: { [nodeKind: string]: Solver } =
{
    'root':     solveBlock,
    'fn':       solveBlock,

    'let':      solveLet,
};

function solveBlock(node: Node): SolvedNode
{
    return SolvedNode(node, solveNodes(node.items), t_void);
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

    return SolvedNode(node, [s_annot, s_init], t_let);
}

function evalTypeAnnot(node: Node): SolvedNode
{
    node.kind === 'call' && node.value === 'i32' || fail(
        'TODO evalTypeAnnot', node);

    return node
        && SolvedNode(node, null, t_i32);
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

    //
    const root = solveNode(parse.root);

    return { root };
}
