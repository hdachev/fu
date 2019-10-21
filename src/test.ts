import { lex, Source, Filename } from './lex';
import { fail } from './fail';
import { parse } from './parse';
import { solve } from './solve';
import { resetContext } from './context';

import { cpp_codegen } from './cpp_codegen';
import * as cpp_builder from './cpp_builder';

import * as fs from 'fs';
import * as path from 'path';

let TEST_ID = 0;

function ZERO(src: string, fname: Filename = 'test_' + (TEST_ID++) as Filename): string
{
    resetContext();

    //
    if (src.indexOf('fn ZERO()') < 0)
        src = '\n\nfn ZERO(): i32 {' + src + '}\n';
    else
        src = '\n' + src;

    src += '\nfn main(): i32 ZERO();\n\n';

    //
    const r_lex     = lex(
        src as Source,
        fname);

    if (r_lex.errors.length)
        fail('Lex fail:', r_lex.errors);

    const r_parse   = parse(r_lex)          || fail('Parse fail.');
    const r_solve   = solve(r_parse)        || fail('Solve fail.');
    const r_cppcg   = cpp_codegen(r_solve)  || fail('C++ Codegen fail.');

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
            let s = src + '\n======================\n' + gensrc;
            if (s.length > 1024 * 4)
                s = '[ TOO LONG ]';

            FAIL(...args, '\n\t... in ' + fname + ':\n\n\t' + s);
        };

        cpp_builder.build(gensrc, result =>
        {
            if (result.err)
            {
                fs.writeFileSync(
                    path.join(__dirname, '../build.cpp/fail.cpp'),
                    gensrc);

                fail('BUILD', result.err);
            }

            else cpp_builder.link([ result.data ], result =>
            {
                if (result.err)
                    fail('LINK', result.err);

                else cpp_builder.run(result.data, result =>
                {
                    if (result.err)
                        fail('RUN', result.err);

                    if (result.data !== 0)
                    {
                        fs.writeFileSync(
                            path.join(__dirname, '../build.cpp/fail.cpp'),
                            gensrc);

                        fail('EXIT CODE', result.data);
                    }

                    if (/\.fu$/.test(fname))
                        console.log('\t[ OK ]\t' + fname);
                });
            });
        });
    }

    return gensrc;
}

function testCodegen(src: string, cpp: string)
{
    src; cpp;
    // /expect_lambda/.test(src) === /\[&]/.test(cpp) || fail('LAMBDA');
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
        const msg = (e.message || fail()).toLowerCase();
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


//

function FILE(fname: string)
{
    fname = path.join(
        __dirname, '../src/fu', fname);

    function run()
    {
        const src = fs.readFileSync(fname, 'utf8');
        src || fail(fname, src);

        try
        {
            ZERO(src, fname as Filename);
        }
        catch (e)
        {
            console.log(e.message);
        }
    }

    fs.watchFile(fname, run);
    run();
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

    mut res = 0;
    decr(res);
    return res + 1;
`);

ZERO(`
    mut res = 0;
    fn decr()
        res--;

    decr();
    return res + 1;
`);

ZERO(`
    mut res = 0;
    fn decr(num: &mut i32) { num--; } // ret void

    decr(res);
    return res + 1;
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

ZERO(`
    fn named(a: i32, b: i32)
        a - b * 2;

    fn other(a: i32, b: i32)
        named(:b, :a);

    return other(b: 3, 6);
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
    struct X {
        a: i32;
        fn test(b: i32) a + b;
    }

    return X(1).test(-1);
`);

ZERO(`
    struct X {
        a: i32;
        fn test(b: i32) a + b;
    }

    fn hey(using x: X) test(-1);

    return X(1).hey;
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


// Recursion, closures & implicit args.

ZERO(`
    fn inner(i: i32): i32
        i > 0 ? outer(i - 1) : 0;

    fn outer(i: i32): i32
        2 * inner(i);

    return outer(1);
`);

ZERO(`
    fn test(one: i32)
    {
        let zero = one - 1;
        let two  = one * 2;

        fn inner(i: i32): i32
            i > zero ? outer(i - one) : zero;

        fn outer(i: i32): i32
            two * inner(i);

        return outer(one) + (two - one) * 17;
    }

    fn ZERO() test(1) - 17;
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
    fn outer(i: i32): i32
        i > 0   ? inner(i)
                : 2 * i;

    fn inner(implicit x: i32, i: i32): i32
        outer(i - 2 * x);

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

    fn test(): &i32
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

// FAIL(`
//     fn div3by(a: i32) 3 / a; //ERR overload
//     return div3by(2) - 1;
// `);

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


// Destructor basics.

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
    fn test(s: &S) { return s.j; }
    test(S(i)); // <-destructor here
    return i - 1;
`);

ZERO(RAII + `
    fn test(s: &S) { return s.j; }
    let s = S(i);
    test(s);
    return i;
    // <-destructor here
`);


// Move semantics.

ZERO(RAII + `
    fn test(s: S) { return s.j; } // <-destructor here
    {
        test(S(i));
    }
    return i - 1;
`);

ZERO(RAII + `
    fn test(s: S) { return s.j; } // <-destructor here
    {
        let s = S(i);
        test(s); // s is moved in
    }
    return i - 1;
`);

/*

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

// */

// Arrays.

ZERO(`
    mut arr = [0, 1, 2, 3, 4];
    arr.push(5);

    fn test(view: &i32[]): i32 {
        mut sum = 0;
        for (mut i = 0; i < view.len; i++)
            sum += view[i];

        return sum - 15;
    }

    return test(arr);
`);

ZERO(`
    mut arr: i32[] = [1, 2, 3, 4];
    arr.push(5);

    fn test(view: &i32[]): i32 {
        mut sum = 0;
        for (mut i = 0; i < view.len; i++)
            sum += view[i];

        return sum - 15;
    }

    return test(arr);
`);

ZERO(`
    mut arr = [0, 1, 2, 3, 4];
    arr.unshift(5); // expect_lambda

    return arr[2] + arr[5] - arr[0];
`);

ZERO(`
    mut arr = [0, 1, 2, 3, 4];
    arr.insert(1, 5); // expect_lambda

    return arr[2] + arr[5] - arr[1];
`);

ZERO(`
    mut arr = [0, 1, 2, 3, 100];
    arr.splice(1, 3); // expect_lambda

    return arr.len() + arr[0] + arr[1] - 102;
`);

ZERO(`
    let OPERATORS = [ '+', '-', '*', '/' ];

    fn ZERO()
        OPERATORS[2] == '*' ? 0 : 1;
`);

ZERO(`
    struct Y { b: bool; }
    struct X { y: Y[]; }

    mut x: X[];
    x.push( X([ Y(true) ]) );

    return x.len + x[0].y.len * 2 - 3;
`);

ZERO(`
    mut a = [7, 1, 5, 3, 99, -13]; // [-13, 1, 3, 5, 7, 99]
    a.sort();
    return a[0] + a[1] + a[3] + a[4];
`);

ZERO(`
    mut a = [0, 1, 2, 3, 4]; // [2, 0, 1, 3, 4]
    a.move(2, 0);
    return a[0] + a[3] - a[2] - a[4];
`);

ZERO(`
    mut a = [2, 0, 1, 3, 4]; // [0, 1, 2, 3, 4]
    a.move(0, 2);
    return a[1] + a[4] - a[2] - a[3];
`);


// Strings.

ZERO(`
    mut str = 'hello ';
    str += 'world';

    return str.len - 11;
`);

ZERO(`
    let str = 'hello ' + 'world';

    return str.len - 11;
`);

ZERO(`
    let str = 'hello world';
    mut cpy = '';
    for (mut i = 0; i < str.len; i++)
        cpy += str[i];

    return (cpy.len - 11) + (cpy == str ? 0 : 1);
`);

ZERO(`
    return 'hello world'.find('world')
         - 2 * [1, 7, 13, 14, 19].find(14); // expect_lambda
`);

ZERO(`
    return ('hello world'.has('world') ? 1 : 0) // expect_lambda
         + ([1, 14, 96, 2].has(14)     ? 2 : 0)
         - 3;
`);

ZERO(`
    let hw = 'hello world!';
    let a = hw.slice(6, 6 + 5); // expect_lambda
    let b = hw.substr(6, 5);
    return a == b && a == 'world' ? a.len - 5 : 1;
`);


// Maps.

ZERO(`
    mut x: Map(string, i32);

    x['hello'] = 1;
    x['world'] = 2;

    return x['hello'] - x['world'] + 1;
`);

ZERO(`
    mut x: Map(string, i32);

    x['hello'] = 1;
    x['world'] = 2;

    let b = 'hello world';
    mut offset = 0;

    fn pop(): string { // expect_lambda
        mut a = '';

        while (offset < b.len) {
            let c = b[offset++];
            if (c == ' ')
                break;

            a += c;
        }

        return a;
    }

    return x[pop()] - x[pop()] + 1;
`);


// Default arguments.

ZERO(`
    fn test(a = 1, b = 2) a + b;
    return test() - 3;
`);

ZERO(`
    fn test(a = 1, b = 2) a + b;
    return test(b: -1);
`);

ZERO(`
    fn test(a = 1, b = 2) a + b;
    return test(-2);
`);

ZERO(`
    struct Test { a: i32; b: i32; }
    let t = Test(1);
    return t.a - 1 + t.b * 7;
`);

ZERO(`
    struct Test { a: i32; b: i32; }
    let t = Test(1);
    return t.b;
`);

ZERO(`
    struct Test { a: i32; b: i32; }
    let t = Test(a: 1);
    return t.a - 1 + t.b * 7;
`);

ZERO(`
    struct Test { a: i32; b: i32; }
    let t = Test(b: 1);
    return t.b - 1 + t.a * 7;
`);

ZERO(`
    struct Test { x: i32; };
    fn hey() Test(); // expect_lambda private type, technically ok, technically ok though not needed
    return hey.x;
`);

ZERO(`
    struct Test { x: i32; };
    fn hey(y: i32 = 0) // expect_lambda private type, technically ok though not needed
        y   ? Test(1)
            : Test();

    return hey.x;
`);


// Truth tests.

ZERO(`
    let s = 7;
    return s ? 0 : 1;
`);

ZERO(`
    let s = 0;
    return s ? 1 : 0;
`);

ZERO(`
    let s = 'hello';
    return s ? 0 : 1;
`);

ZERO(`
    let s = '';
    return s ? 1 : 0;
`);

ZERO(`
    let s = [ 4 ];
    return s ? 0 : 1;
`);

ZERO(`
    mut s = [ 4 ];
    s.pop();
    return s ? 1 : 0;
`);

ZERO(`
    struct S { x: i32; }
    let s: S = S(1);
    return s ? 0 : 1;
`);

ZERO(`
    struct S { x: i32; }
    let s: S;
    return s ? 1 : 0;
`);


// Loop labels.

ZERO(`
    mut sum = 0;

    :outer for (mut y = 1; y < 10; y++)
    {
        sum += y * 10; // 10, 20
        for (mut x = 1; x < 10; x++)
        {
            sum += x; // 1, 1, 2
            if (y == 1) continue :outer;
            if (x == 2) break    :outer;
        }
    }

    return sum - 34;
`);


// Comma operator.

ZERO(`
    mut a = 0;
    return (a++, a - 1);
`);


// Lint.

ZERO(`
    struct Test { x: i32; }
    fn test(t: &mut Test) t.x++;
    mut t = Test();
    t.test();
    return t.x - 1;
`);

FAIL(`
    struct Test { x: i32; }
    fn test(t: &mut Test) t.x++;
    mut t = Test();
    t.test; //ERR orphan
    return t.x - 1;
`);


// Logical selectors.

ZERO(`
    let x = 'hello';
    let y = 'world';
    let w = x || y;

    return w == 'hello' ? 0 : 1; // expect_lambda
`);

ZERO(`
    let x = 'hello';
    let y = 'world';
    let w = x && y; // expect_lambda

    return w == 'world' ? 0 : 1;
`);

ZERO(`
    let x = 'hello';
    let y = 'world';
    let w = 3 && x || y; // expect_lambda

    return w == 'hello' ? 0 : 1;
`);

ZERO(`
    let x = 'hello';
    let y = 'world';
    let arr: i32[];
    let w = arr && x || y; // expect_lambda

    return w == 'world' ? 0 : 1;
`);

ZERO(`
    let x = 'hello';
    let y = 'world';
    let arr: i32[];
    let w = arr && x || y || throw("Nope."); // expect_lambda

    return w == 'world' ? 0 : 1;
`);


// Short-circuit assignment, esp. useful for maps
//  and the cpp `map[k] = v`,
//   which doesn't decompose safely.

ZERO(`
    mut i = 7;
    i ||= 11; // expect_lambda
    return i - 7;
`);

ZERO(`
    mut i = 0;
    i ||= 11; // expect_lambda
    return i - 11;
`);

ZERO(`
    mut m: Map(string, string);
    mut g = 0;

    m['hello'] = 'world';
    fn f() (
        g++, 'cruel world'); // expect_lambda

    m['hello'] ||= f();
    return g;
`);

ZERO(`
    mut m: Map(string, string);
    mut g = 0;

    m['_not_hello_'] = 'world';
    fn f() (
        g++, 'cruel world'); // expect_lambda

    m['hello'] ||= f();
    return g - 1;
`);


// Stuff that isn't working out quite right.

ZERO(`

struct BINOP {
    P: Map(string, i32);
};

fn setupOperators()
{
    mut out: BINOP;

    fn binop(op: string)
        out.P[op] = 7;

    binop(',');

    return out;
}

let BINOP   = setupOperators();
let P_COMMA = BINOP.P[','] || assert();

fn ZERO() P_COMMA - 7;

`);

ZERO(`

    // This converted to a ref-returning
    // logical chain for some reason.
    let hex = true;
    let trail = 'x';
    if (!(trail >= '0' && trail <= '9') &&
        !(hex && (trail >= 'a' && trail <= 'f'
               || trail >= 'A' && trail <= 'F')))
    {
        return 0;
    }

    return 1;

`);


// Let's get going.

FILE;

FILE(     'lex.fu');
FILE('compiler.fu');


//

process.on('exit',
    () => console.log('ALL GOOD @', new Date()));
