#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>

#include <iostream>
#include <string>

#include <time.h>


//

struct TEA
{
    unsigned int v0 = 0;
    unsigned int v1 = 0;

    void encrypt()
    {
        unsigned int sum    = 0u;
        unsigned int delta  = 0x9e3779b9u;

        for (int i = 0; i < 16; i++)
        {
            sum += delta;
            v0 += ((v1<<4) + 0xA341316Cu) ^ (v1 + sum) ^ ((v1>>5) + 0xC8013EA4u);
            v1 += ((v0<<4) + 0xAD90777Du) ^ (v0 + sum) ^ ((v0>>5) + 0x7E95761Eu);
        }
    }
};

TEA hash_src(const std::string& src)
{
    TEA result;

    for (size_t i = 0; i < src.size(); i++)
    {
        result.v0 ^= src[i];
        result.encrypt();
    }

    return result;
}


//

template <typename F>
struct fu_DEFER
{
    F fn;
    ~fu_DEFER() { fn(); }

    fu_DEFER(F fn) : fn(fn) {}
    fu_DEFER(const fu_DEFER&) = delete;
    void operator=(const fu_DEFER&) = delete;
};


//

int getFileSize(const std::string& path)
{
    struct stat sb;
    if (stat(path.c_str(), &sb) == 0)
        return int(sb.st_size);

    return -1;
}

std::string readFile(const std::string& path)
{
    errno = 0;

    FILE* file = fopen(path.c_str(), "r");
    fu_DEFER _file { [&]() { fclose(file); } };

    auto code = strerror(errno);

    std::string output;
    if (file)
    {
        char buffer[256];
        while (fgets(buffer, 256, file) != nullptr)
            output += buffer;
    }

    return output;
}

bool writeFile(const std::string& path, const std::string& src)
{
    auto ok = false;

    errno = 0;
    FILE* file = fopen(path.c_str(), "w");
    auto code = strerror(errno);

    if (file)
    {
        size_t expect = src.size();
        size_t actual = fwrite(src.data(), 1, expect, file);

        ok = actual == expect;

        fclose(file);
    }
    else
    {

        // So?
    }

    return ok;
}


//

void str_replace_all(
    std::string& subject,
    const std::string search,
    const std::string replace)
{
    size_t pos = 0;
    while (int(pos = subject.find(search, pos)) >= 0)
        subject.replace(pos, search.size(), replace);
}


//

void ensure_trailing_slash(std::string& path)
{
    if (!path.size() || path[0] != '/')
    {
        std::cout << "Bad path: `" << path << "`." << std::endl;
        exit(1);
    }

    if (path.size() && path[path.size() - 1] != '/')
        path += '/';
}

std::string get_HOME()
{
    std::string result = "/Users/hdachev";

    const char* home = getenv("HOME");
    if (home)
        result = home;

    ensure_trailing_slash(result);
    return result;
}

static const std::string HOME = get_HOME();


//

std::string get_PRJDIR()
{
    std::string path = HOME;
    path += "fu/";

    auto bytes = getFileSize(path + "src/fu/compiler.fu");
    if (bytes < 10000)
    {
        std::cout << "Bad compiler.fu: " << bytes << std::endl;
        exit(1);
    }

    return path;
}

static const std::string PRJDIR = get_PRJDIR();


//

class fu_EXEC
{
    FILE* m_pipe = nullptr;
    std::string output;
    int code = 0;

    void run(const char* cmd)
    {
        close();
        code = -1;
        m_pipe = popen(cmd, "r");
    }

public:
    fu_EXEC(const fu_EXEC&) = delete;
    void operator=(const fu_EXEC&) = delete;

    fu_EXEC(fu_EXEC&& v)
    {
        output = std::move(v.output);
        code = v.code;
        m_pipe = v.m_pipe; v.m_pipe = nullptr;
    };

    fu_EXEC& operator=(fu_EXEC&& v)
    {
        output = std::move(v.output);
        code = v.code;
        m_pipe = v.m_pipe; v.m_pipe = nullptr;
        return *this;
    }

    fu_EXEC() = default;

    fu_EXEC(const std::string& cmd)
    {
        run(cmd.c_str());
    }

    fu_EXEC(const char* cmd)
    {
        run(cmd);
    }

    ~fu_EXEC()
    {
        close();
    }

    int close()
    {
        auto f = m_pipe;
        m_pipe = nullptr;
        if (f) code = pclose(f);
        return code;
    }

    std::string&& wait(int& code)
    {
        if (m_pipe)
        {
            char buffer[256];
            while (fgets(buffer, 256, m_pipe) != nullptr)
                output += buffer;
        }

        code = close();
        return std::move(output);
    }
};


//

static const std::string GCC_CMD = "g++ -std=c++1z -O3 -pedantic-errors -Wall -Wextra -Werror -Wno-parentheses-equality ";

static bool NEW_STUFF = false;

std::string build_and_run(const std::string& cpp)
{
    int code = 0;
    std::string out;

    const auto& ERROR = [&]()
    {
        if (out.empty())
            out = "[ EXIT CODE " + std::to_string(code) + " ]";

        return std::move(out);
    };

    auto hash = hash_src(cpp);
    std::string F = PRJDIR
        + "build.cpp/tea-"  + std::to_string(hash.v0)
        + "-"               + std::to_string(hash.v1)
        + "-"               + std::to_string(cpp.size());

    if (getFileSize(F + ".exe") <= 0)
    {
        NEW_STUFF = true;

        writeFile((F + ".cpp").c_str(), cpp);

        out = fu_EXEC(GCC_CMD + "-c -o " + F + ".o " + F + ".cpp 2>&1").wait(code);
        if (code) return ERROR();

        out = fu_EXEC(GCC_CMD + "-o " + F + ".tmp " + F + ".o 2>&1").wait(code);
        if (code) return ERROR();

        out = fu_EXEC("chmod 755 " + F + ".tmp").wait(code);
        if (code) return ERROR();

        out = fu_EXEC("mv " + F + ".tmp " + F + ".exe").wait(code);
        if (code) return ERROR();

        out = fu_EXEC("rm " + F + ".o").wait(code);
        if (code) return ERROR();
    }

    out = fu_EXEC(F + ".exe").wait(code);
    if (code) return ERROR();

    return "";
}


// #define MUTE

#ifdef MUTE
#include "../../build.cpp/fail.cpp"
#endif

#ifndef MUTE
#include "../../src/fu/compiler.fu.cpp"


// So lets go.

void RUN();

int main(int argc, const char * argv[])
{
    auto_main();

    // insert code here...
    std::cout << "SO LETS GO!"      << std::endl;
    std::cout << PRJDIR             << std::endl;

    // insert code here...
    std::cout << "Hello, World!\n"  << std::endl;

    // do some bs
    // int code;
    // auto output = fu_EXEC("gcc -v").wait(code);

    // getting ready
    RUN();

    //
    return 0;
}

void saySomethingNice()
{
    auto sec = time(nullptr);

    if (sec % 5 && !NEW_STUFF)
    {
        for (int i = 0; i < 3; i++)
            if (sec & (1 << i))
                std::cout << "🍒";
            else
                std::cout << "🍊";
    }
    else switch ((sec >> 6) & 0xf)
    {
        case 0x0: std::cout << "LOOKING GOOD TODAY !" << std::endl; break;
        case 0x1: std::cout << "PASSING TESTS LIKE A BOSS !" << std::endl; break;
        case 0x2: std::cout << "THIS IS SOME TOP NOTCH SHIT !" << std::endl; break;
        case 0x3: std::cout << "VALUE ADDED !" << std::endl; break;

        case 0x4: std::cout << "GOING STRONG !" << std::endl; break;
        case 0x5: std::cout << "KILLIN IT !" << std::endl; break;
        case 0x6: std::cout << "POWER LEVEL INCREASED !" << std::endl; break;
        case 0x7: std::cout << "NOW MAKE ME BETTER AGAIN !" << std::endl; break;

        case 0x8: std::cout << "NOW MAKE ME EVEN MORE BETTER !" << std::endl; break;
        case 0x9: std::cout << "ALL CLEAR !" << std::endl; break;
        case 0xa: std::cout << "UPGRADE ACCEPTED !" << std::endl; break;
        case 0xb: std::cout << "YOU'RE THE BEST MAN !" << std::endl; break;

        case 0xc: std::cout << "I LOVE YOU YOU !" << std::endl; break;
        case 0xd: std::cout << "MORE IS MORE !" << std::endl; break;
        case 0xe: std::cout << "THIS IS AWESOME !" << std::endl; break;
        case 0xf: std::cout << "THIS IS AWESOME !" << std::endl; break;
    }

    std::cout << std::endl;
}


// Tests.

std::string ZERO(const std::string& src)
{
    auto cpp = compile_testcase(src);

    // ...
    auto result = build_and_run(cpp);
    if (result.size())
    {
        std::cout << result << std::endl;
        exit(1);
    }

    // std::cout << "PASS" << std::endl;
    return cpp;
}

void FAIL(const std::string& src)
{
    try {
        auto cpp = compile_testcase(src);
    }
    catch (const std::exception& e) {
        // TODO check error message.
        return;
    }

    std::cout << "DID NOT THROW" << std::endl;
    exit(1);
}

void FU_FILE(const std::string& fname)
{
    std::string path = PRJDIR;
    path += "src/fu/" + fname;

    std::cout << "COMPILE " << fname << std::endl;

    auto fu = readFile(path);
    if (!fu.size())
    {
        std::cout << "BAD FILE: " << path << std::endl;
        exit(1);
    }

    auto cpp = ZERO(fu);

    str_replace_all(cpp,
        "int main()", "int auto_main()");

    auto out_fname = path + ".cpp";

    if (readFile(out_fname) != cpp)
    {
        writeFile(out_fname, cpp);
        std::cout << "WROTE " << out_fname << std::endl;
    }
}


// Basics.

void RUN()
{

    ZERO(R"(
        return 1 - 1;
    )");

    ZERO(R"(
        fn sum(a: i32, b: i32): i32
            a + b;

        return sum(1, -1);
    )");

    ZERO(R"(
        fn sum(a: i32, b: i32)
            a + b;

        return sum(1, -1);
    )");

    ZERO(R"(
        fn sign(a: i32)
            a > 0 ? 1 : a < 0 ? -1 : 0;

        return sign(7) + sign(-3) + sign(0);
    )");

    ZERO(R"(
        fn sign(a: i32) {
            if (a > 0)
                return 1;

            return -2;
        }

        return sign(10) * 2 + sign(-5);
    )");

    ZERO(R"(
        fn sign(a: i32) {
            if (a > 0)
                return 1;
            else
                return -2;
        }

        return sign(10) * 2 + sign(-5);
    )");


    // Mutation & references.

    ZERO(R"(
        mut sum = 0;
        for (mut i = 0; i < 10; i++)
            sum++;

        return sum * 2 - 20;
    )");

    ZERO(R"(
        mut sum = 0;
        for (mut i = 10; i --> 0; )
            sum--;

        return sum * 2 + 20;
    )");

    ZERO(R"(
        fn decr(num: &mut i32)
            num--;

        mut res = 0;
        decr(res);
        return res + 1;
    )");

    ZERO(R"(
        mut res = 0;
        fn decr()
            res--;

        decr();
        return res + 1;
    )");

    ZERO(R"(
        mut res = 0;
        fn decr(num: &mut i32) { num--; } // ret void

        decr(res);
        return res + 1;
    )");

    ZERO(R"(
        mut sum = 0;
        while (sum < 15)
            sum++;

        return sum - 15;
    )");

    FAIL(R"(
        let sum = 0;
        while (sum < 15)
            sum++; //ERR ++ overload

        return sum - 15;
    )");

    ZERO(R"(
        mut sum = 0;
        while (sum < 15)
            sum += 2;

        return sum - 16;
    )");

    ZERO(R"(
        fn named(a: i32, b: i32)
            a - b * 2;

        return named(b: 3, 6);
    )");

    ZERO(R"(
        fn named(a: i32, b: i32)
            a - b * 2;

        fn other(a: i32, b: i32)
            named(:b, :a);

        return other(b: 3, 6);
    )");


    // Structs & using.

    ZERO(R"(
        struct Range {
            min: i32;
            max: i32;
        }

        fn size(r: Range)
            r.max - r.min;

        return size(Range(14, 21)) - 7;
    )");

    ZERO(R"(
        struct Range {
            min: i32;
            max: i32;
        }

        mut r = Range(1, 2);
        r.min++;
        return r.max - r.min;
    )");

    FAIL(R"(
        struct Range {
            min: i32;
            max: i32;
        }

        let r = Range(1, 2);
        r.min++; //ERR ++ overload
        return r.max - r.min;
    )");

    ZERO(R"(
        struct Range {
            min: i32;
            max: i32;
        }

        fn size(using r: Range)
            max - min;

        return size(Range(14, 21)) - 7;
    )");

    ZERO(R"(
        struct Range {
            min: i32;
            max: i32;

            fn size()
                max - min;
        }

        let r = Range(14, 21);

        return size(r) - 7;
    )");

    ZERO(R"(
        struct X {
            a: i32;
            fn test(b: i32) a + b;
        }

        return X(1).test(-1);
    )");

    ZERO(R"(
        struct X {
            a: i32;
            fn test(b: i32) a + b;
        }

        fn hey(using x: X) test(-1);

        return X(1).hey;
    )");

    ZERO(R"(
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
    )");

    ZERO(R"(
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
    )");


    // Recursion, closures & implicit args.

    ZERO(R"(
        fn inner(i: i32): i32
            i > 0 ? outer(i - 1) : 0;

        fn outer(i: i32): i32
            2 * inner(i);

        return outer(1);
    )");

    ZERO(R"(
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
    )");

    ZERO(R"(
        fn inner(i: i32): i32
            outer(i - 1);

        fn outer(implicit x: i32, i: i32): i32
            i > 0   ? inner(i)
                    : x + i;

        let implicit x = 7;
        return outer(1) - 7;
    )");

    ZERO(R"(
        fn outer(i: i32): i32
            i > 0   ? inner(i)
                    : 2 * i;

        fn inner(implicit x: i32, i: i32): i32
            outer(i - 2 * x);

        let implicit x = 3;
        return outer(6);
    )");

    ZERO(R"(
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
    )");

    ZERO(R"(
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
    )");


    //

    ZERO(R"(
        let x = 1;

        fn test(): &i32
            x;

        return test - 1;
    )");

    ZERO(R"(
        let a = 1;
        let x: &i32 = a;

        return a - x;
    )");

    ZERO(R"(
        struct Test {
            x: &i32;
        }

        let a = 1;
        let test = Test(a);

        return test.x - 1;
    )");

    ZERO(R"(
        mut a = 0;
        mut b = a;
        b++;
        let c = a = b;

        return a - c;
    )");


    // Templating checks.

    ZERO(R"(
        let x = 3;
        return x / 2 - 1;
    )");

    // FAIL(R"(
    //     fn div3by(a: i32) 3 / a; //ERR overload
    //     return div3by(2) - 1;
    // )");

    ZERO(R"(
        fn div3by(a: $T) 3 / a;
        return div3by(2) - 1;
    )");

    // It's too early for this test,
    //  let's get everything else working first,
    //   not smart working on supersugar so early.
    //
    // ZERO(R"(
    //     fn div3by(a) 3 / a;
    //     return div3by(2) - 1;
    // )");


    // Destructor basics.

    static const std::string RAII = R"(
        let mut i = 0;
        struct S {
            j: &mut i32;
            fn free()
                j += j + 1;
        }
    )";

    ZERO(RAII + R"(
        let s = S(i);
        return i;
        // <-destructor here
    )");

    ZERO(RAII + R"(
        { let s = S(i); } // <-destructor here
        return i - 1;
    )");

    ZERO(RAII + R"(
        fn test(s: &S) { return s.j; }
        test(S(i)); // <-destructor here
        return i - 1;
    )");

    ZERO(RAII + R"(
        fn test(s: &S) { return s.j; }
        let s = S(i);
        test(s);
        return i;
        // <-destructor here
    )");


    // Move semantics.

    ZERO(RAII + R"(
        fn test(s: S) { return s.j; } // <-destructor here
        {
            test(S(i));
        }
        return i - 1;
    )");

    ZERO(RAII + R"(
        fn test(s: S) { return s.j; } // <-destructor here
        {
            let s = S(i);
            test(s); // s is moved in
        }
        return i - 1;
    )");

    /*

    FAIL(RAII + R"(
        fn test(s: S) {} // <-destructor here
        let s = S(i);
        test(s); // s is moved in
        test(s); //ERR moved
        return i - 1;
    )");


    // Borrow checker.

    const BORROW = R"(
        struct Borrow {
            x: &i32;
        }
    )");

    FAIL(BORROW + R"(
        let mut b: Borrow;
        return b.x; //ERR initialize
    )");

    ZERO(BORROW + R"(
        let mut b: Borrow;
        let i = 0;
        b = Borrow(i);
        return b.x;
    )");

    FAIL(BORROW + R"(
        let b = Borrow(0); //ERR outlive
        return b.x;
    )");

    ZERO(BORROW + R"(
        let i = -1;
        let b = Borrow(i);
        b.x++;
        return i;
    )");

    FAIL(BORROW + R"(
        let b: Borrow;
        {
            let i = -1;
            b = Borrow(i); //ERR outlive
        }
        return ++b.x;
    )");

    FAIL(BORROW + R"(
        let b: Borrow;

        fn test() {
            let i = -1;
            b = Borrow(i); //ERR outlive
        }

        test();
        return ++b.x;
    )");

    FAIL(BORROW + R"(
        fn test() {
            let i = -1;
            return Borrow(i); //ERR outlive
        }

        let b = test();
        return ++b.x;
    )");

    // */

    // Arrays.

    ZERO(R"(
        mut arr = [0, 1, 2, 3, 4];
        arr.push(5);

        fn test(view: &i32[]): i32 {
            mut sum = 0;
            for (mut i = 0; i < view.len; i++)
                sum += view[i];

            return sum - 15;
        }

        return test(arr);
    )");

    ZERO(R"(
        mut arr: i32[] = [1, 2, 3, 4];
        arr.push(5);

        fn test(view: &i32[]): i32 {
            mut sum = 0;
            for (mut i = 0; i < view.len; i++)
                sum += view[i];

            return sum - 15;
        }

        return test(arr);
    )");

    ZERO(R"(
        mut arr = [0, 1, 2, 3, 4];
        arr.unshift(5); // expect_lambda

        return arr[2] + arr[5] - arr[0];
    )");

    ZERO(R"(
        mut arr = [0, 1, 2, 3, 4];
        arr.insert(1, 5); // expect_lambda

        return arr[2] + arr[5] - arr[1];
    )");

    ZERO(R"(
        mut arr = [0, 1, 2, 3, 100];
        arr.splice(1, 3); // expect_lambda

        return arr.len() + arr[0] + arr[1] - 102;
    )");

    ZERO(R"(
        let OPERATORS = [ '+', '-', '*', '/' ];

        fn ZERO()
            OPERATORS[2] == '*' ? 0 : 1;
    )");

    ZERO(R"(
        struct Y { b: bool; }
        struct X { y: Y[]; }

        mut x: X[];
        x.push( X([ Y(true) ]) );

        return x.len + x[0].y.len * 2 - 3;
    )");

    ZERO(R"(
        mut a = [7, 1, 5, 3, 99, -13]; // [-13, 1, 3, 5, 7, 99]
        a.sort();
        return a[0] + a[1] + a[3] + a[4];
    )");

    ZERO(R"(
        mut a = [0, 1, 2, 3, 4]; // [2, 0, 1, 3, 4]
        a.move(2, 0);
        return a[0] + a[3] - a[2] - a[4];
    )");

    ZERO(R"(
        mut a = [2, 0, 1, 3, 4]; // [0, 1, 2, 3, 4]
        a.move(0, 2);
        return a[1] + a[4] - a[2] - a[3];
    )");

    ZERO(R"(
        let a = [0, 1, 2, 3];
        let b = a.slice(1, 3);
        return b.len - b[1];
    )");

    ZERO(R"(
        let a = [0, 1, 2, 3];
        let b = a.slice(1);
        return b.len - b[2];
    )");


    // Strings.

    ZERO(R"(
        mut str = 'hello ';
        str += 'world';

        return str.len - 11;
    )");

    ZERO(R"(
        let str = 'hello ' + 'world';

        return str.len - 11;
    )");

    ZERO(R"(
        let str = 'hello world';
        mut cpy = '';
        for (mut i = 0; i < str.len; i++)
            cpy += str[i];

        return (cpy.len - 11) + (cpy == str ? 0 : 1);
    )");

    ZERO(R"(
        return 'hello world'.find('world')
             - 2 * [1, 7, 13, 14, 19].find(14); // expect_lambda
    )");

    ZERO(R"(
        return ('hello world'.has('world') ? 1 : 0) // expect_lambda
             + ([1, 14, 96, 2].has(14)     ? 2 : 0)
             - 3;
    )");

    ZERO(R"(
        let hw = 'hello world!';
        let a = hw.slice(6, 6 + 5); // expect_lambda
        let b = hw.substr(6, 5);
        return a == b && a == 'world' ? a.len - 5 : 1;
    )");

    ZERO(R"(
        let tests =
        [
            '',
            ' ',
            '  ',
            'hey you duders',
            ' hey you duders',
            'hey you duders ',
            '  hey you duders ',
            '  hey you  duders ',
            '  hey you  duders  '
        ];

        fn test(item: string)
            item == item.split(' ').join(' ')
                ? 0
                : item.len;

        mut sum = 0;
        for (mut i = 0; i < tests.len; i++)
            sum += test(tests[i]);

        return sum;
    )");


    // Maps.

    ZERO(R"(
        mut x: Map(string, i32);

        x['hello'] = 1;
        x['world'] = 2;

        return x['hello'] - x['world'] + 1;
    )");

    ZERO(R"(
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
    )");


    // Default arguments.

    ZERO(R"(
        fn test(a = 1, b = 2) a + b;
        return test() - 3;
    )");

    ZERO(R"(
        fn test(a = 1, b = 2) a + b;
        return test(b: -1);
    )");

    ZERO(R"(
        fn test(a = 1, b = 2) a + b;
        return test(-2);
    )");

    ZERO(R"(
        struct Test { a: i32; b: i32; }
        let t = Test(1);
        return t.a - 1 + t.b * 7;
    )");

    ZERO(R"(
        struct Test { a: i32; b: i32; }
        let t = Test(1);
        return t.b;
    )");

    ZERO(R"(
        struct Test { a: i32; b: i32; }
        let t = Test(a: 1);
        return t.a - 1 + t.b * 7;
    )");

    ZERO(R"(
        struct Test { a: i32; b: i32; }
        let t = Test(b: 1);
        return t.b - 1 + t.a * 7;
    )");

    ZERO(R"(
        struct Test { x: i32; };
        fn hey() Test(); // expect_lambda private type, technically ok, technically ok though not needed
        return hey.x;
    )");

    ZERO(R"(
        struct Test { x: i32; };
        fn hey(y: i32 = 0) // expect_lambda private type, technically ok though not needed
            y   ? Test(1)
                : Test();

        return hey.x;
    )");


    // Truth tests.

    ZERO(R"(
        let s = 7;
        return s ? 0 : 1;
    )");

    ZERO(R"(
        let s = 0;
        return s ? 1 : 0;
    )");

    ZERO(R"(
        let s = 'hello';
        return s ? 0 : 1;
    )");

    ZERO(R"(
        let s = '';
        return s ? 1 : 0;
    )");

    ZERO(R"(
        let s = [ 4 ];
        return s ? 0 : 1;
    )");

    ZERO(R"(
        mut s = [ 4 ];
        s.pop();
        return s ? 1 : 0;
    )");

    ZERO(R"(
        struct S { x: i32; }
        let s: S = S(1);
        return s ? 0 : 1;
    )");

    ZERO(R"(
        struct S { x: i32; }
        let s: S;
        return s ? 1 : 0;
    )");


    // Loop labels.

    ZERO(R"(
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
    )");


    // Comma operator.

    ZERO(R"(
        mut a = 0;
        return (a++, a - 1);
    )");


    // Lint.

    ZERO(R"(
        struct Test { x: i32; }
        fn test(t: &mut Test) t.x++;
        mut t = Test();
        t.test();
        return t.x - 1;
    )");

    FAIL(R"(
        struct Test { x: i32; }
        fn test(t: &mut Test) t.x++;
        mut t = Test();
        t.test; //ERR orphan
        return t.x - 1;
    )");


    // Logical selectors.

    ZERO(R"(
        let x = 'hello';
        let y = 'world';
        let w = x || y;

        return w == 'hello' ? 0 : 1; // expect_lambda
    )");

    ZERO(R"(
        let x = 'hello';
        let y = 'world';
        let w = x && y; // expect_lambda

        return w == 'world' ? 0 : 1;
    )");

    ZERO(R"(
        let x = 'hello';
        let y = 'world';
        let w = 3 && x || y; // expect_lambda

        return w == 'hello' ? 0 : 1;
    )");

    ZERO(R"(
        let x = 'hello';
        let y = 'world';
        let arr: i32[];
        let w = arr && x || y; // expect_lambda

        return w == 'world' ? 0 : 1;
    )");

    ZERO(R"(
        let x = 'hello';
        let y = 'world';
        let arr: i32[];
        let w = arr && x || y || throw("Nope."); // expect_lambda

        return w == 'world' ? 0 : 1;
    )");


    // Short-circuit assignment, esp. useful for maps
    //  and the cpp `map[k] = v`,
    //   which doesn't decompose safely.

    ZERO(R"(
        mut i = 7;
        i ||= 11; // expect_lambda
        return i - 7;
    )");

    ZERO(R"(
        mut i = 0;
        i ||= 11; // expect_lambda
        return i - 11;
    )");

    ZERO(R"(
        mut m: Map(string, string);
        mut g = 0;

        m['hello'] = 'world';
        fn f() (
            g++, 'cruel world'); // expect_lambda

        m['hello'] ||= f();
        return g;
    )");

    ZERO(R"(
        mut m: Map(string, string);
        mut g = 0;

        m['_not_hello_'] = 'world';
        fn f() (
            g++, 'cruel world'); // expect_lambda

        m['hello'] ||= f();
        return g - 1;
    )");


    // Lint checks.

    ZERO(R"(
        {
            {
                return 0;
            }
        }
    )");

    FAIL(R"(
        {
        {
            return 0; //ERR block
        }
        }
    )");

    ZERO(R"(
        {
            return 0;
        }
    )");

    FAIL(R"(
        {
            return 0; //ERR block
       }
    )");

    FAIL(R"(
        {
            return 0; //ERR block
         }
    )");


    // Stuff that isn't working out quite right -
    //  Keep those around, there's no principle to these tests,
    //   they just stressed our stuff in weird ways.

    ZERO(R"(

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

    )");

    ZERO(R"(

        // -no-lambda
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

    )");

    ZERO(R"(
        struct Type     { i: i32; };
        struct Token    { i: i32; };
        struct ScopeIdx { i: i32; };

        struct SolvedNode
        {
            kind:       string;
            flags:      i32;
            value:      string;
            items:      SolvedNode[];
            token:      Token;

            type:       Type;
            target:     ScopeIdx;
        };

        let _here: Token;

        fn createDefaultInit(type: Type): SolvedNode
        {
            // Broken arg re-arrange.
            return SolvedNode(
                kind: 'definit',
                token: _here,
                :type);
        }

        return createDefaultInit(Type()).target.i;
    )");

    ZERO(R"(
        struct Type         { i: i32; };
        struct Scope        { i: i32; };
        struct Partial      { i: i32; };
        struct Template     { i: i32; };
        struct SolvedNode   { i: i32; };

        pub fn Scope_add(
            scope: &mut Scope,
            kind: string, id: string, type: Type,

            min: i32 = 0,
            max: i32 = 0,
            arg_n: string[]     = [],
            arg_t: Type[]       = [],
            arg_d: SolvedNode[] = [],
            template: Template  = [],
            partial: Partial    = []): i32
        {
            return scope.i
                 + kind.len + id.len + type.i
                 + min + max + arg_n.len + arg_t.len + arg_d.len
                 + template.i + partial.i;
        }

        mut _scope: Scope;
        let id: string;
        let t_template: Type;
        let min: i32;
        let max: i32;
        let arg_n: string[];
        let template: Template;

        return Scope_add(
            _scope,
            '', id, t_template,
            min, max, arg_n,
            :template);
    )");

    ZERO(R"(
        let i = 0;
        let items = [ '' ];
        i == items.len - 1 || throw('what?');
        return i;
    )");

    ZERO(R"(

        return false /* test */
             ? 0xffffff // what is this
             : 0 // madness
             ;
    )");


    // Let's move on to some cooler quality of life shit.

    ZERO(R"(
        let a = 7;
        let b = a && 3;
        return b - 3;
    )");

    ZERO(R"(
        struct S { i: i32; }

        let a = S(0);
        let b = S(3);

        return a.i
            || (b || S(4)).i * 2 - (a || S(6)).i
            && throw('woot');
    )");

    ZERO(R"(

        struct TrueStory { kind: string; value: string; };

        mut specialized = TrueStory(kind: 'fn', value: 'val');

        specialized.kind == 'fn' && specialized.value || throw('nope');

        let v: &mut string = specialized.kind == 'fn'
                          && specialized.value
                          || throw('nope');
        v += 'ue';

        return specialized.value == 'value' ? 0 : 1;

    )");

    ZERO(R"(
        struct Token {
            value: string;
        };

        fn consume(): Token {
            return Token('hey');
        };

        fn ZERO(): i32 {
            let a = 3;
            let v = a && consume().value;
            return v.len - a;
        };
    )");

    // ZERO(R"(
    //     fn ARR_LAST(a: &$T[])
    //         case ($a -> &mut $T[]): &mut $T a[a.len - 1];
    //         case ($a -> &    $T[]): &    $T a[a.len - 1];

    //     let a = [1];
    //     mut b = [2];

    //     b.ARR_LAST += a.ARR_LAST;
    //     return b.ARR_LAST - [3].ARR_LAST;
    // )");


    //

    saySomethingNice();

    FU_FILE("compiler.fu");
}


#endif
