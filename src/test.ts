import { lex, Source, Filename } from './lex';
import { fail } from './fail';
import { parse } from './parse';
import { solve } from './solve';
import { cpp_codegen } from './codegen_cpp';

let TEST_ID = 0;

function ZERO(src: string)
{
    src = 'fn main(): i32 {' + src.replace(/\n/g, '\n') + '\n}\n';

    const fname     = 'test_' + (TEST_ID++) as Filename;
    const r_lex     = lex(src as Source, fname);

    if (r_lex.errors.length)
        fail('Lex fail:', r_lex.errors);

    const r_parse   = parse(r_lex)              || fail('Parse fail.');
    const r_solve   = solve(r_parse)            || fail('Solve fail.');
    const r_cppcg   = cpp_codegen(r_solve.root) || fail('C++ Codegen fail.');

    // TODO: compile & eval.
    console.log(r_cppcg.src);
}

ZERO(`
    return 1 - 1;
`);

ZERO(`
    fn sum(a: i32, b: i32): i32 a + b;
    return sum(1, -1);
`);

console.log('ALL GOOD @', new Date());
