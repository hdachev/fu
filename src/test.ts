import { lex, Source, Filename } from './lex';
import { fail } from './fail';
import { parse } from './parse';
import { solve } from './solve';

import { cpp_codegen } from './cpp_codegen';
import * as cpp_builder from './cpp_builder';

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

    //
    if (!cpp_builder.available)
        return;

    //
    const FAIL = fail;
    {
        const fail = (...args: unknown[]) =>
        {
            FAIL(...args, '\n\t... in ' + fname + ':\n\n\t' + r_cppcg.src.replace(/\n/g, '\n\t'));
        };

        cpp_builder.build(r_cppcg.src, result =>
        {
            if (result.err)
                fail('BUILD', result.err);

            else cpp_builder.link([ result.data ], result =>
            {
                if (result.err)
                    fail('LINK', result.err);

                else cpp_builder.run(result.data, result =>
                {
                    if (result.err)
                        fail('RUN', result.err);

                    if (result.data !== 0)
                        fail('EXIT CODE != 0:', result.data);
                });
            });
        });
    }
}

ZERO(`
    return 1 - 1;
`);

ZERO(`
    fn sum(a: i32, b: i32): i32
        a + b;

    return sum(1, -1);
`);

ZERO(`
    fn sum(a: i32, b: i32)
        a + b;

    return sum(1, -1);
`);

ZERO(`
    fn sign(a: i32)
        a > 0 ? 1 : a < 0 ? -1 : 0;

    return sign(7) + sign(-3) + sign(0);
`);

ZERO(`
    fn sign(a: i32) {
        if (a > 0)
            return 1;

        return -2;
    }

    return sign(10) * 2 + sign(-5);
`);

ZERO(`
    fn sign(a: i32) {
        if (a > 0)
            return 1;
        else
            return -2;
    }

    return sign(10) * 2 + sign(-5);
`);

ZERO(`
    let sum = 0;
    for (let i = 0; i < 10; i++)
        sum++;

    return sum * 2 - 20;
`);

ZERO(`
    let sum = 0;
    for (let i = 10; i --> 0; )
        sum--;

    return sum * 2 + 20;
`);

ZERO(`
    let sum = 0;
    while (sum < 15)
        sum++;

    return sum - 15;
`);

console.log('ALL GOOD @', new Date());
