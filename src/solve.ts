import { ParseResult } from './parse';
import { Scope } from './commons';

export type SolveResult =
{
    parse:      ParseResult;
    exports:    Scope;
};

function solveRoot(
    parse:      ParseResult,
    _scope:     Scope): SolveResult
{
    return { parse, exports: null as any };
}


// Solve & cache the prelude.

import { lex, Source, Filename } from './lex';
import { parse } from './parse';
import { prelude_src } from './prelude';

const prelude_solved = solveRoot(
    parse(lex(prelude_src as Source, '__prelude' as Filename)),
    null as any);

export function solve(parse: ParseResult): SolveResult
{
    return solveRoot(parse, prelude_solved.exports);
}
