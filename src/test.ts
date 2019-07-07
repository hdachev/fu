import { lex, Source, Filename } from './lex';
import { fail } from './fail';
import { parse } from './parse';

let TEST_ID = 0;

function ZERO(src: string)
{
    const fname = 'test.' + (TEST_ID++) as Filename;
    const lexer = lex(src as Source, fname);

    if (lexer.errors.length)
        fail('Lex fail:', lexer.errors);

    parse(lexer) || fail('Parse fail.');
}

ZERO(`
    fn add(a: i32, b: i32) a + b;
    return add(1, -1);
`);
