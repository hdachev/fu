import { lex, Source, Filename } from './lex';
import { fail } from './fail';
import { parse } from './parse';
import { solve } from './solve';
import { resetContext } from './context';

import { cpp_codegen } from './cpp_codegen';
import * as cpp_builder from './cpp_builder';

let TEST_ID = 0;

function ZERO(src: string): string
{
    resetContext();

    //
    src = 'fn main(): i32 {' + src.replace(/\n/g, '\n') + '\n}\n';

    const fname     = 'test_' + (TEST_ID++) as Filename;
    const r_lex     = lex(src as Source, fname);

    if (r_lex.errors.length)
        fail('Lex fail:', r_lex.errors);

    const r_parse   = parse(r_lex)              || fail('Parse fail.');
    const r_solve   = solve(r_parse)            || fail('Solve fail.');
    const r_cppcg   = cpp_codegen(r_solve.root) || fail('C++ Codegen fail.');

    //
    const gensrc = r_cppcg.src;
    if (src.indexOf('//PRINT') >= 0)
        console.log('PRINT ' + fname + ':\n\n\t' + gensrc.replace(/\n/g, '\n\t'));

    testCodegen(src, gensrc);

    //
    if (!cpp_builder.available)
        return gensrc;

    //
    const FAIL = fail;
    {
        const fail = (...args: unknown[]) =>
        {
            FAIL(...args, '\n\t... in ' + fname + ':\n\n\t' + gensrc.replace(/\n/g, '\n\t'));
        };

        cpp_builder.build(gensrc, result =>
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
                        fail('EXIT CODE', result.data);
                });
            });
        });
    }

    return gensrc;
}

function testCodegen(src: string, cpp: string)
{
    /expect_lambda/.test(src) === /\[&]/.test(cpp) || fail('LAMBDA');
}


//

function FAIL(src: string)
{
    const errors: string[][] = [];
    src.replace(/\/\/ERR(.+)/g, (_, keywords) =>
    {
        const kw = keywords.trim().split(/\s+/).filter((i: string) => !!i);
        kw.length || fail();
        errors.push(kw);
        return _;
    });

    errors.length || fail();

    let ok = false;
    let cpp: string = '';

    try {
        cpp = ZERO(src);
    }
    catch (e)
    {
        const msg = e.message || fail();
        for (let i = 0; i < errors.length; i++)
        {
            const kw = errors[i];
            for (let i = 0; i < kw.length; i++)
                msg.indexOf(kw[i]) >= 0 || fail(
                    'Missing error keyword:', kw, 'in message', e.message);
        }

        ok = true;
    }

    ok || fail('Did not error. Generated cpp:\n\n\t' + cpp.replace(/\n/g, '\n\t'));
}


// Basics.

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


// Mutation & references.

ZERO(`
    mut sum = 0;
    for (mut i = 0; i < 10; i++)
        sum++;

    return sum * 2 - 20;
`);

ZERO(`
    mut sum = 0;
    for (mut i = 10; i --> 0; )
        sum--;

    return sum * 2 + 20;
`);

ZERO(`
    fn decr(num: &mut i32)
        num--;

    mut res = 1;
    decr(res);
    return res;
`);

ZERO(`
    mut res = 1;
    fn decr() // expect_lambda
        res--;

    decr();
    return res;
`);

ZERO(`
    mut res = 1;
    fn decr(num: &mut i32) { num--; } // ret void

    decr(res);
    return res;
`);

ZERO(`
    mut sum = 0;
    while (sum < 15)
        sum++;

    return sum - 15;
`);

FAIL(`
    let sum = 0;
    while (sum < 15)
        sum++; //ERR ++ overload

    return sum - 15;
`);

ZERO(`
    mut sum = 0;
    while (sum < 15)
        sum += 2;

    return sum - 16;
`);

ZERO(`
    fn named(a: i32, b: i32)
        a - b * 2;

    return named(b: 3, 6);
`);


// Structs & using.

ZERO(`
    struct Range {
        min: i32;
        max: i32;
    }

    fn size(r: Range)
        r.max - r.min;

    return size(Range(14, 21)) - 7;
`);

ZERO(`
    struct Range {
        min: i32;
        max: i32;
    }

    mut r = Range(1, 2);
    r.min++;
    return r.max - r.min;
`);

FAIL(`
    struct Range {
        min: i32;
        max: i32;
    }

    let r = Range(1, 2);
    r.min++; //ERR ++ overload
    return r.max - r.min;
`);

ZERO(`
    struct Range {
        min: i32;
        max: i32;
    }

    fn size(using r: Range)
        max - min;

    return size(Range(14, 21)) - 7;
`);

ZERO(`
    struct Range {
        min: i32;
        max: i32;

        fn size()
            max - min;
    }

    let r = Range(14, 21);

    return size(r) - 7;
`);

ZERO(`
    struct Pos {
        x: i32;
    }

    struct Player {
        using pos: Pos;
    }

    fn dist(using p: Player, other: Player)
        x - other.x;

    let a = Player(Pos(10));
    let b = Player(Pos( 4));

    return dist(a, b) - 6;
`);

ZERO(`
    struct Pos {
        x: i32;
    }

    struct Player {
        using pos: Pos;

        fn dist(other: Player)
            x - other.x;
    }

    let a = Player(Pos(10));
    let b = Player(Pos( 4));

    return dist(a, b) - 6;
`);


// Recursion & implicit args.

ZERO(`
    fn inner(i: i32): i32
        i > 0 ? outer(i - 1) : 0;

    fn outer(i: i32): i32
        2 * inner(i);

    return outer(1);
`);

ZERO(`
    fn inner(i: i32): i32
        outer(i - 1);

    fn outer(implicit x: i32, i: i32): i32
        i > 0   ? inner(i)
                : x + i;

    let implicit x = 7;
    return outer(1) - 7;
`);

ZERO(`
    fn inner(implicit x: i32, i: i32): i32
        outer(i - 2 * x);

    fn outer(i: i32): i32
        i > 0   ? inner(i)
                : 2 * i;

    let implicit x = 3;
    return outer(6);
`);

ZERO(`
    struct Range {
        min: i32;
        max: i32;
    }

    fn size(using implicit r: Range)
        max - min;

    fn test()
        size();

    let implicit r = Range(14, 21);

    return test  - 7;
`);

ZERO(`
    struct Range {
        min: i32;
        max: i32;
    }

    fn size(using implicit r: Range)
        max - min;

    fn inner()
        size();

    fn outer()
        inner();

    let implicit r = Range(14, 21);

    return outer() - 7;
`);


//

ZERO(`
    let x = 1;

    fn test(): &i32 // expect_lambda
        x;

    return test - 1;
`);

ZERO(`
    let a = 1;
    let x: &i32 = a;

    return a - x;
`);

ZERO(`
    struct Test {
        x: &i32;
    }

    let a = 1;
    let test = Test(a);

    return test.x - 1;
`);

ZERO(`
    mut a = 0;
    mut b = a;
    b++;
    let c = a = b;

    return a - c;
`);


// Templating checks.

ZERO(`
    let x = 3;
    return x / 2 - 1;
`);

FAIL(`
    fn div3by(a: i32) 3 / a; //ERR overload
    return div3by(2) - 1;
`);

ZERO(`
    fn div3by(a: $T) 3 / a;
    return div3by(2) - 1;
`);

// It's too early for this test,
//  let's get everything else working first,
//   not smart working on supersugar so early.
//
// ZERO(`
//     fn div3by(a) 3 / a;
//     return div3by(2) - 1;
// `);


// RAII & move.

const RAII = `
    let mut i = 0;
    struct S {
        j: &mut i32;
        fn free()
            j += j + 1;
    }
`;

ZERO(RAII + `
    let s = S(i);
    return i;
    // <-destructor here
`);

ZERO(RAII + `
    { let s = S(i); } // <-destructor here
    return i - 1;
`);

ZERO(RAII + `
    fn test(s: S) {} // <-destructor here
    test(S(i));
    return i - 1;
`);

ZERO(RAII + `
    fn test(s: &S) {}
    test(S(i)); // <-destructor here
    return i - 1;
`);

ZERO(RAII + `
    fn test(s: &S) {}
    let s = S(i);
    test(s);
    return i;
    // <-destructor here
`);

ZERO(RAII + `
    fn test(s: S) {} // <-destructor here
    let s = S(i);
    test(s); // s is moved in
    return i - 1;
`);

FAIL(RAII + `
    fn test(s: S) {} // <-destructor here
    let s = S(i);
    test(s); // s is moved in
    test(s); //ERR moved
    return i - 1;
`);


// Borrow checker.

const BORROW = `
    struct Borrow {
        x: &i32;
    }
`;

FAIL(BORROW + `
    let mut b: Borrow;
    return b.x; //ERR initialize
`);

ZERO(BORROW + `
    let mut b: Borrow;
    let i = 0;
    b = Borrow(i);
    return b.x;
`);

FAIL(BORROW + `
    let b = Borrow(0); //ERR outlive
    return b.x;
`);

ZERO(BORROW + `
    let i = -1;
    let b = Borrow(i);
    b.x++;
    return i;
`);

FAIL(BORROW + `
    let b: Borrow;
    {
        let i = -1;
        b = Borrow(i); //ERR outlive
    }
    return ++b.x;
`);

FAIL(BORROW + `
    let b: Borrow;

    fn test() {
        let i = -1;
        b = Borrow(i); //ERR outlive
    }

    test();
    return ++b.x;
`);

FAIL(BORROW + `
    fn test() {
        let i = -1;
        return Borrow(i); //ERR outlive
    }

    let b = test();
    return ++b.x;
`);

console.log('ALL GOOD @', new Date());
