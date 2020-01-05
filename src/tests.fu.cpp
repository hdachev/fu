#include "../lib/map.h"
#include "../lib/str.h"
#include "../lib/vec.h"
#include "../lib/vec/find.h"
#include "../lib/vec/replace.h"

struct s_LexerOutput;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStats;
struct s_Node;
struct s_Overload;
struct s_ParserOutput;
struct s_Partial;
struct s_Scope;
struct s_ScopeItem;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Struct;
struct s_StructField;
struct s_TEMP_Context;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
s_TEMP_Context ZERO(const fu_STR&);
int FAIL(const fu_STR&);
fu_STR compile_snippet(const fu_STR&);
                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    fu_STR kind;
    fu_STR value;
    int idx0;
    int idx1;
    int line;
    int col;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || value.size()
            || idx0
            || idx1
            || line
            || col
        ;
    }
};
                                #endif

                                #ifndef DEF_s_LexerOutput
                                #define DEF_s_LexerOutput
struct s_LexerOutput
{
    fu_STR fname;
    fu_VEC<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || fname.size()
            || tokens
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TokenIdx
                                #define DEF_s_TokenIdx
struct s_TokenIdx
{
    int modid;
    int tokidx;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || tokidx
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    fu_STR kind;
    int flags;
    fu_STR value;
    fu_VEC<s_Node> items;
    s_TokenIdx token;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || flags
            || value.size()
            || items
            || token
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ParserOutput
                                #define DEF_s_ParserOutput
struct s_ParserOutput
{
    s_Node root;
    fu_VEC<fu_STR> imports;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || imports
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleInputs
                                #define DEF_s_ModuleInputs
struct s_ModuleInputs
{
    fu_STR src;
    s_LexerOutput lex;
    s_ParserOutput parse;
    explicit operator bool() const noexcept
    {
        return false
            || src.size()
            || lex
            || parse
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    fu_STR canon;
    int quals;
    int modid;
    explicit operator bool() const noexcept
    {
        return false
            || canon.size()
            || quals
            || modid
        ;
    }
};
                                #endif

                                #ifndef DEF_s_StructField
                                #define DEF_s_StructField
struct s_StructField
{
    fu_STR id;
    s_Type type;
    explicit operator bool() const noexcept
    {
        return false
            || id.size()
            || type
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    fu_STR kind;
    fu_STR id;
    fu_VEC<s_StructField> fields;
    int flags;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || id.size()
            || fields
            || flags
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
{
    int modid;
    int index;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || index
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    fu_STR kind;
    int flags;
    fu_STR value;
    fu_VEC<s_SolvedNode> items;
    s_TokenIdx token;
    s_Type type;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || flags
            || value.size()
            || items
            || token
            || type
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeItem
                                #define DEF_s_ScopeItem
struct s_ScopeItem
{
    fu_STR id;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || id.size()
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Partial
                                #define DEF_s_Partial
struct s_Partial
{
    s_Target via;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || via
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Template
                                #define DEF_s_Template
struct s_Template
{
    s_Node node;
    explicit operator bool() const noexcept
    {
        return false
            || node
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_STR kind;
    fu_STR name;
    s_Type type;
    int min;
    int max;
    fu_VEC<s_Type> args;
    fu_VEC<fu_STR> names;
    fu_VEC<s_SolvedNode> defaults;
    s_Partial partial;
    s_Template Q_template;
    s_SolvedNode constant;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || name.size()
            || type
            || min
            || max
            || args
            || names
            || defaults
            || partial
            || Q_template
            || constant
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Scope
                                #define DEF_s_Scope
struct s_Scope
{
    fu_VEC<s_ScopeItem> items;
    fu_VEC<s_Overload> overloads;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || overloads
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolverOutput
                                #define DEF_s_SolverOutput
struct s_SolverOutput
{
    s_SolvedNode root;
    s_Scope scope;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || scope
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleOutputs
                                #define DEF_s_ModuleOutputs
struct s_ModuleOutputs
{
    fu_VEC<int> deps;
    fu_COW_MAP<fu_STR, s_Struct> types;
    fu_COW_MAP<fu_STR, s_SolvedNode> specs;
    s_SolverOutput solve;
    fu_STR cpp;
    explicit operator bool() const noexcept
    {
        return false
            || deps
            || types
            || specs
            || solve
            || cpp.size()
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleStats
                                #define DEF_s_ModuleStats
struct s_ModuleStats
{
    f64 s_lex;
    f64 s_parse;
    f64 s_solve;
    f64 s_cpp;
    explicit operator bool() const noexcept
    {
        return false
            || s_lex
            || s_parse
            || s_solve
            || s_cpp
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Module
                                #define DEF_s_Module
struct s_Module
{
    int modid;
    fu_STR fname;
    s_ModuleInputs in;
    s_ModuleOutputs out;
    s_ModuleStats stats;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || fname.size()
            || in
            || out
            || stats
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TEMP_Context
                                #define DEF_s_TEMP_Context
struct s_TEMP_Context
{
    fu_VEC<s_Module> modules;
    fu_COW_MAP<fu_STR, fu_STR> files;
    explicit operator bool() const noexcept
    {
        return false
            || modules
            || files
        ;
    }
};
                                #endif

                                #ifndef DEF_TEST_SRC
                                #define DEF_TEST_SRC
inline const fu_STR TEST_SRC = "\n    fn test(one: i32) {\n        let zero = one - 1;\n        let two  = one * 2;\n\n        fn inner(i: i32): i32\n            i > zero ? outer(i - one) : zero;\n\n        fn outer(i: i32): i32\n            two * inner(i);\n\n        return outer(one) + (two - one) * 17;\n    }\n\n    fn main(): i32 {\n        return test(1) - 17;\n    }\n"_fu;
                                #endif

int self_test()
{
    fu_STR cpp = compile_snippet(TEST_SRC);
    return (fu::lfind(cpp, "int main()"_fu) ? 0 : 101);
}

void runTests()
{
    ZERO("\n        return 1 - 1;\n    "_fu);
    ZERO("\n        fn sum(a: i32, b: i32): i32\n            a + b;\n\n        return sum(1, -1);\n    "_fu);
    ZERO("\n        fn sum(a: i32, b: i32)\n            a + b;\n\n        return sum(1, -1);\n    "_fu);
    ZERO("\n        fn sign(a: i32)\n            a > 0 ? 1 : a < 0 ? -1 : 0;\n\n        return sign(7) + sign(-3) + sign(0);\n    "_fu);
    ZERO("\n        fn sign(a: i32) {\n            if (a > 0)\n                return 1;\n\n            return -2;\n        }\n\n        return sign(10) * 2 + sign(-5);\n    "_fu);
    ZERO("\n        fn sign(a: i32) {\n            if (a > 0)\n                return 1;\n            else\n                return -2;\n        }\n\n        return sign(10) * 2 + sign(-5);\n    "_fu);
    ZERO("\n        mut sum = 0;\n        for (mut i = 0; i < 10; i++)\n            sum++;\n\n        return sum * 2 - 20;\n    "_fu);
    ZERO("\n        mut sum = 0;\n        for (mut i = 10; i --> 0; )\n            sum--;\n\n        return sum * 2 + 20;\n    "_fu);
    ZERO("\n        fn decr(num: &mut i32)\n            num--;\n\n        mut res = 0;\n        decr(res);\n        return res + 1;\n    "_fu);
    ZERO("\n        mut res = 0;\n        fn decr()\n            res--;\n\n        decr();\n        return res + 1;\n    "_fu);
    ZERO("\n        mut res = 0;\n        fn decr(num: &mut i32) { num--; } // ret void\n\n        decr(res);\n        return res + 1;\n    "_fu);
    ZERO("\n        mut sum = 0;\n        while (sum < 15)\n            sum++;\n\n        return sum - 15;\n    "_fu);
    FAIL("\n        let sum = 0;\n        while (sum < 15)\n            sum++; //ERR ++ overload\n\n        return sum - 15;\n    "_fu);
    ZERO("\n        mut sum = 0;\n        while (sum < 15)\n            sum += 2;\n\n        return sum - 16;\n    "_fu);
    ZERO("\n        fn named(a: i32, b: i32)\n            a - b * 2;\n\n        return named(b: 3, 6);\n    "_fu);
    ZERO("\n        fn named(a: i32, b: i32)\n            a - b * 2;\n\n        fn other(a: i32, b: i32)\n            named(:b, :a);\n\n        return other(b: 3, 6);\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(r: Range)\n            r.max - r.min;\n\n        return size(Range(14, 21)) - 7;\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        mut r = Range(1, 2);\n        r.min++;\n        return r.max - r.min;\n    "_fu);
    FAIL("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        let r = Range(1, 2);\n        r.min++; //ERR ++ overload\n        return r.max - r.min;\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using r: Range)\n            max - min;\n\n        return size(Range(14, 21)) - 7;\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n\n            fn size()\n                max - min;\n        }\n\n        let r = Range(14, 21);\n\n        return size(r) - 7;\n    "_fu);
    ZERO("\n        struct X {\n            a: i32;\n            fn test(b: i32) a + b;\n        }\n\n        return X(1).test(-1);\n    "_fu);
    ZERO("\n        struct X {\n            a: i32;\n            fn test(b: i32) a + b;\n        }\n\n        fn hey(using x: X) test(-1);\n\n        return X(1).hey;\n    "_fu);
    ZERO("\n        struct Pos {\n            x: i32;\n        }\n\n        struct Player {\n            using pos: Pos;\n        }\n\n        fn dist(using p: Player, other: Player)\n            x - other.x;\n\n        let a = Player(Pos(10));\n        let b = Player(Pos( 4));\n\n        return dist(a, b) - 6;\n    "_fu);
    ZERO("\n        struct Pos {\n            x: i32;\n        }\n\n        struct Player {\n            using pos: Pos;\n\n            fn dist(other: Player)\n                x - other.x;\n        }\n\n        let a = Player(Pos(10));\n        let b = Player(Pos( 4));\n\n        return dist(a, b) - 6;\n    "_fu);
    ZERO("\n        fn inner(i: i32): i32\n            i > 0 ? outer(i - 1) : 0;\n\n        fn outer(i: i32): i32\n            2 * inner(i);\n\n        return outer(1);\n    "_fu);
    ZERO("\n        fn test(one: i32)\n        {\n            let zero = one - 1;\n            let two  = one * 2;\n\n            fn inner(i: i32): i32\n                i > zero ? outer(i - one) : zero;\n\n            fn outer(i: i32): i32\n                two * inner(i);\n\n            return outer(one) + (two - one) * 17;\n        }\n\n        fn main() test(1) - 17;\n    "_fu);
    ZERO("\n        fn inner(i: i32): i32\n            outer(i - 1);\n\n        fn outer(implicit x: i32, i: i32): i32\n            i > 0   ? inner(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer(1) - 7;\n    "_fu);
    ZERO("\n        fn outer(i: i32): i32\n            i > 0   ? inner(i)\n                    : 2 * i;\n\n        fn inner(implicit x: i32, i: i32): i32\n            outer(i - 2 * x);\n\n        let implicit x = 3;\n        return outer(6);\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using implicit r: Range)\n            max - min;\n\n        fn test()\n            size();\n\n        let implicit r = Range(14, 21);\n\n        return test  - 7;\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using implicit r: Range)\n            max - min;\n\n        fn inner()\n            size();\n\n        fn outer()\n            inner();\n\n        let implicit r = Range(14, 21);\n\n        return outer() - 7;\n    "_fu);
    ZERO("\n        let x = 1;\n\n        fn test(): &i32\n            x;\n\n        return test - 1;\n    "_fu);
    ZERO("\n        let a = 1;\n        let x: &i32 = a;\n\n        return a - x;\n    "_fu);
    ZERO("\n        struct Test {\n            x: &i32;\n        }\n\n        let a = 1;\n        let test = Test(a);\n\n        return test.x - 1;\n    "_fu);
    ZERO("\n        mut a = 0;\n        mut b = a;\n        b++;\n        let c = a = b;\n\n        return a - c;\n    "_fu);
    ZERO("\n        let x = 3;\n        return x / 2 - 1;\n    "_fu);
    ZERO("\n        fn div3by(a: $T) 3 / a;\n        return div3by(2) - 1;\n    "_fu);
    fu_STR RAII = "\n        let mut i = 0;\n        struct S {\n            j: &mut i32;\n            fn free()\n                j += j + 1;\n        }\n    "_fu;
    ZERO((RAII + "\n        let s = S(i);\n        return i;\n        // <-destructor here\n    "_fu));
    ZERO((RAII + "\n        { let s = S(i); } // <-destructor here\n        return i - 1;\n    "_fu));
    ZERO((RAII + "\n        fn test(s: &S) { return s.j; }\n        test(S(i)); // <-destructor here\n        return i - 1;\n    "_fu));
    ZERO((RAII + "\n        fn test(s: &S) { return s.j; }\n        let s = S(i);\n        test(s);\n        return i;\n        // <-destructor here\n    "_fu));
    ZERO((RAII + "\n        fn test(s: S) { return s.j; } // <-destructor here\n        test(S(i));\n        return i - 1;\n    "_fu));
    FAIL((RAII + "\n        fn test(mut s: S) { return s.j; } // <-destructor here\n\n        mut s = S(i);\n        test( s ); //ERR explicit\n\n        return i - 1;\n    "_fu));
    ZERO((RAII + "\n        fn test(mut s: S) {\n            let x = STEAL (s);\n            return x.j; // <-destructor here\n        }\n\n        mut s = S(i);\n        test( STEAL(s) );\n\n        return i - 1;\n    "_fu));
    ZERO("\n        mut arr = [0, 1, 2, 3, 4];\n        arr.push(5);\n\n        fn test(view: &i32[]): i32 {\n            mut sum = 0;\n            for (mut i = 0; i < view.len; i++)\n                sum += view[i];\n\n            return sum - 15;\n        }\n\n        return test(arr);\n    "_fu);
    ZERO("\n        mut arr: i32[] = [1, 2, 3, 4];\n        arr.push(5);\n\n        fn test(view: &i32[]): i32 {\n            mut sum = 0;\n            for (mut i = 0; i < view.len; i++)\n                sum += view[i];\n\n            return sum - 15;\n        }\n\n        return test(arr);\n    "_fu);
    ZERO("\n        let x = 5;\n        mut arr = [ -5 ];\n        arr.push(x);\n        return arr[0] + arr[1];\n    "_fu);
    const auto& ARROPS = [&](const fu_STR& literal, const fu_STR& operation, fu_STR&& assertion) -> void
    {
        assertion = (("("_fu + assertion) + ")"_fu);
        const auto& EXPR = [&](const fu_STR& varname) -> fu_STR
        {
            return fu::replace(assertion, "@"_fu, varname);
        };
        fu_STR src {};
        src += "\n"_fu;
        src += "\n    {"_fu;
        src += (("\n        mut arr0 = ["_fu + literal) + "];"_fu);
        src += (("\n        arr0."_fu + operation) + ";"_fu);
        src += (("\n        if ("_fu + EXPR("arr0"_fu)) + " != 0) return 13;"_fu);
        src += "\n    }"_fu;
        src += "\n"_fu;
        src += (("\n    mut orig = ["_fu + literal) + "];"_fu);
        src += "\n"_fu;
        src += "\n    {"_fu;
        src += "\n        mut arr1 = CLONE(orig);"_fu;
        src += (("\n        arr1."_fu + operation) + ";"_fu);
        src += (("\n        if ("_fu + EXPR("arr1"_fu)) + " != 0) return 17;"_fu);
        src += "\n    }"_fu;
        src += "\n"_fu;
        src += "\n    {"_fu;
        src += "\n        mut arr2 = STEAL(orig);"_fu;
        src += "\n        if (orig.len) return 19;"_fu;
        src += (("\n        arr2."_fu + operation) + ";"_fu);
        src += (("\n        if ("_fu + EXPR("arr2"_fu)) + " != 0) return 23;"_fu);
        src += "\n    }"_fu;
        src += "\n"_fu;
        src += "\n    return 0;"_fu;
        src += "\n"_fu;
        ZERO(src);
    };
    ARROPS("0,1,2,3,4"_fu, "push(5)"_fu, "@[1] + @[4] - @[5]"_fu);
    ARROPS("0,1,2,3,4"_fu, "insert(5, 5)"_fu, "@[1] + @[4] - @[5]"_fu);
    ARROPS("0,1,2,3,4"_fu, "pop()"_fu, "@[1] + @[3] - @.len"_fu);
    ARROPS("0,1,2,3,4"_fu, "splice(4, 1)"_fu, "@[1] + @[3] - @.len"_fu);
    ARROPS("0,1,2,3,4"_fu, "unshift(5)"_fu, "@[2] + @[5] - @[0]"_fu);
    ARROPS("0,1,2,3,4"_fu, "insert(0, 5)"_fu, "@[2] + @[5] - @[0]"_fu);
    ARROPS("0,1,2,3,4"_fu, "insert(1, 5)"_fu, "@[2] + @[5] - @[1]"_fu);
    ARROPS("0,1,2,3,100"_fu, "splice(1, 3)"_fu, "@.len + @[0] + @[1] - 102"_fu);
    ZERO("\n        let OPERATORS = [ '+', '-', '*', '/' ];\n\n        fn main()\n            OPERATORS[2] == '*' ? 0 : 1;\n    "_fu);
    ZERO("\n        struct Y { b: bool; }\n        struct X { y: Y[]; }\n\n        mut x: X[];\n        x.push( X([ Y(true) ]) );\n\n        return x.len + x[0].y.len * 2 - 3;\n    "_fu);
    ZERO("\n        mut a = [7, 1, 5, 3, 99, -13]; // [-13, 1, 3, 5, 7, 99]\n        a.sort();\n        return a[0] + a[1] + a[3] + a[4];\n    "_fu);
    ZERO("\n        mut a = [0, 1, 2, 3, 4]; // [2, 0, 1, 3, 4]\n        a.move(2, 0);\n        return a[0] + a[3] - a[2] - a[4];\n    "_fu);
    ZERO("\n        mut a = [2, 0, 1, 3, 4]; // [0, 1, 2, 3, 4]\n        a.move(0, 2);\n        return a[1] + a[4] - a[2] - a[3];\n    "_fu);
    ZERO("\n        let a = [0, 1, 2, 3];\n        let b = a.slice(1, 3);\n        return b.len - b[1];\n    "_fu);
    ZERO("\n        let a = [0, 1, 2, 3];\n        let b = a.slice(1);\n        return b.len - b[2];\n    "_fu);
    ZERO("\n        mut str = 'hello ';\n        str += 'world';\n\n        return str.len - 11;\n    "_fu);
    ZERO("\n        let str = 'hello ' + 'world';\n\n        return str.starts(with: 'hel')\n             ? str.len - 11\n             : 171;\n    "_fu);
    ZERO("\n        let str = 'a' + 1710010;\n\n        return str == 'a1710010'\n             ? 0 : 101;\n    "_fu);
    ZERO("\n        let str = 'hello world';\n        mut cpy = '';\n        for (mut i = 0; i < str.len; i++)\n            cpy += str[i];\n\n        return (cpy.len - 11) + (cpy == str ? 0 : 1);\n    "_fu);
    ZERO("\n        return 'hello world'.find('world')\n             - 2 * [1, 7, 13, 14, 19].find(14);\n    "_fu);
    ZERO("\n        return ('hello world'.has('world') ? 1 : 0)\n             + ([1, 14, 96, 2].has(14)     ? 2 : 0)\n             - 3;\n    "_fu);
    ZERO("\n        let hw = 'hello world!';\n        let a = hw.slice(6, 6 + 5);\n        let b = hw.substr(6, 5);\n        return a == b && a == 'world' ? a.len - 5 : 1;\n    "_fu);
    ZERO("\n        let tests =\n        [\n            '',\n            ' ',\n            '  ',\n            'hey you duders',\n            ' hey you duders',\n            'hey you duders ',\n            '  hey you duders ',\n            '  hey you  duders ',\n            '  hey you  duders  '\n        ];\n\n        fn test(item: string)\n            item == item.split(' ').join(' ')\n                ? 0\n                : item.len;\n\n        mut sum = 0;\n        for (mut i = 0; i < tests.len; i++)\n            sum += test(tests[i]);\n\n        return sum;\n    "_fu);
    ZERO("\n        mut x: Map(string, i32);\n\n        x['hello'] = 1;\n        x['world'] = 2;\n\n        return x['hello'] - x['world'] + 1;\n    "_fu);
    ZERO("\n        mut x: Map(string, i32);\n\n        x['hello'] = 1;\n        x['world'] = 2;\n\n        let b = 'hello world';\n        mut offset = 0;\n\n        fn pop(): string {\n            mut a = '';\n\n            while (offset < b.len) {\n                let c = b[offset++];\n                if (c == ' ')\n                    break;\n\n                a += c;\n            }\n\n            return a;\n        }\n\n        return x[pop()] - x[pop()] + 1;\n    "_fu);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test() - 3;\n    "_fu);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test(b: -1);\n    "_fu);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test(-2);\n    "_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(1);\n        return t.a - 1 + t.b * 7;\n    "_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(1);\n        return t.b;\n    "_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(a: 1);\n        return t.a - 1 + t.b * 7;\n    "_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(b: 1);\n        return t.b - 1 + t.a * 7;\n    "_fu);
    ZERO("\n        struct Test { x: i32; };\n        fn hey() Test();\n        return hey.x;\n    "_fu);
    ZERO("\n        struct Test { x: i32; };\n        fn hey(y: i32 = 0)\n            y   ? Test(1)\n                : Test();\n\n        return hey.x;\n    "_fu);
    ZERO("\n        let s = 7;\n        return s ? 0 : 1;\n    "_fu);
    ZERO("\n        let s = 0;\n        return s ? 1 : 0;\n    "_fu);
    ZERO("\n        let s = 'hello';\n        return s ? 0 : 1;\n    "_fu);
    ZERO("\n        let s = '';\n        return s ? 1 : 0;\n    "_fu);
    ZERO("\n        let s = [ 4 ];\n        return s ? 0 : 1;\n    "_fu);
    ZERO("\n        mut s = [ 4 ];\n        s.pop();\n        return s ? 1 : 0;\n    "_fu);
    ZERO("\n        struct S { x: i32; }\n        let s: S = S(1);\n        return s ? 0 : 1;\n    "_fu);
    ZERO("\n        struct S { x: i32; }\n        let s: S;\n        return s ? 1 : 0;\n    "_fu);
    ZERO("\n        mut sum = 0;\n\n        :outer for (mut y = 1; y < 10; y++)\n        {\n            sum += y * 10; // 10, 20\n            for (mut x = 1; x < 10; x++)\n            {\n                sum += x; // 1, 1, 2\n                if (y == 1) continue :outer;\n                if (x == 2) break    :outer;\n            }\n        }\n\n        return sum - 34;\n    "_fu);
    ZERO("\n        mut a = 0;\n        return (a++, a - 1);\n    "_fu);
    ZERO("\n        struct Test { x: i32; }\n        fn test(t: &mut Test) t.x++;\n        mut t = Test();\n        t.test();\n        return t.x - 1;\n    "_fu);
    FAIL("\n        struct Test { x: i32; }\n        fn test(t: &mut Test) t.x++;\n        mut t = Test();\n        t.test; //ERR orphan\n        return t.x - 1;\n    "_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let w = x || y;\n\n        return w == 'hello' ? 0 : 1;\n    "_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let w = x && y;\n\n        return w == 'world' ? 0 : 1;\n    "_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let w = 3 && x || y;\n\n        return w == 'hello' ? 0 : 1;\n    "_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let arr: i32[];\n        let w = arr && x || y;\n\n        return w == 'world' ? 0 : 1;\n    "_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let arr: i32[];\n        let w = arr && x || y || throw(\"Nope.\");\n\n        return w == 'world' ? 0 : 1;\n    "_fu);
    ZERO("\n        mut i = 7;\n        i ||= 11;\n        return i - 7;\n    "_fu);
    ZERO("\n        mut i = 0;\n        i ||= 11;\n        return i - 11;\n    "_fu);
    ZERO("\n        mut m: Map(string, string);\n        mut g = 0;\n\n        m['hello'] = 'world';\n        fn f() (\n            g++, 'cruel world');\n\n        m['hello'] ||= f();\n        return g;\n    "_fu);
    ZERO("\n        mut m: Map(string, string);\n        mut g = 0;\n\n        m['_not_hello_'] = 'world';\n        fn f() (\n            g++, 'cruel world');\n\n        m['hello'] ||= f();\n        return g - 1;\n    "_fu);
    ZERO("\n        {\n            {\n                return 0;\n            }\n        }\n    "_fu);
    FAIL("\n        {\n        {\n            return 0; //ERR block\n        }\n        }\n    "_fu);
    ZERO("\n        {\n            return 0;\n        }\n    "_fu);
    FAIL("\n        {\n            return 0; //ERR block\n       }\n    "_fu);
    FAIL("\n        {\n            return 0; //ERR block\n         }\n    "_fu);
    ZERO("\n\n    struct BINOP {\n        P: Map(string, i32);\n    };\n\n    fn setupOperators(): BINOP\n    {\n        mut out: BINOP;\n\n        fn binop(op: string)\n            out.P[op] = 7;\n\n        binop(',');\n\n        return out;\n    }\n\n    let BINOP   = setupOperators();\n    let P_COMMA = BINOP.P[','] || assert();\n\n    fn main() P_COMMA - 7;\n\n    "_fu);
    ZERO("\n\n        // -no-lambda\n        // This converted to a ref-returning\n        // logical chain for some reason.\n        let hex = true;\n        let trail = 'x';\n        if (!(trail >= '0' && trail <= '9') &&\n            !(hex && (trail >= 'a' && trail <= 'f'\n                   || trail >= 'A' && trail <= 'F')))\n        {\n            return 0;\n        }\n\n        return 1;\n\n    "_fu);
    ZERO("\n        struct Type     { i: i32; };\n        struct Token    { i: i32; };\n        struct ScopeIdx { i: i32; };\n\n        struct SolvedNode\n        {\n            kind:       string;\n            flags:      i32;\n            value:      string;\n            items:      SolvedNode[];\n            token:      Token;\n\n            type:       Type;\n            target:     ScopeIdx;\n        };\n\n        let _here: Token;\n\n        fn createDefaultInit(type: Type): SolvedNode\n        {\n            // Broken arg re-arrange.\n            return SolvedNode(\n                kind: 'definit',\n                token: _here,\n                :type);\n        }\n\n        return createDefaultInit(Type()).target.i;\n    "_fu);
    ZERO("\n        struct Type         { i: i32; };\n        struct Scope        { i: i32; };\n        struct Partial      { i: i32; };\n        struct Template     { i: i32; };\n        struct SolvedNode   { i: i32; };\n\n        pub fn Scope_add(\n            scope: &mut Scope,\n            kind: string, id: string, type: Type,\n\n            min: i32 = 0,\n            max: i32 = 0,\n            arg_n: string[]     = [],\n            arg_t: Type[]       = [],\n            arg_d: SolvedNode[] = [],\n            template: Template  = [],\n            partial: Partial    = []): i32\n        {\n            return scope.i\n                 + kind.len + id.len + type.i\n                 + min + max + arg_n.len + arg_t.len + arg_d.len\n                 + template.i + partial.i;\n        }\n\n        mut _scope: Scope;\n        let id: string;\n        let t_template: Type;\n        let min: i32;\n        let max: i32;\n        let arg_n: string[];\n        let template: Template;\n\n        return Scope_add(\n            _scope,\n            '', id, t_template,\n            min, max, arg_n,\n            :template);\n    "_fu);
    ZERO("\n        let i = 0;\n        let items = [ '' ];\n        i == items.len - 1 || throw('what?');\n        return i;\n    "_fu);
    ZERO("\n\n        return false /* test */\n             ? 0xffffff // what is this\n             : 0 // madness\n             ;\n    "_fu);
    ZERO("\n\n        fn path_normalize(p: string): string {\n            mut path = p.split('/');\n\n            for (mut i = path.len; i --> 0; ) {\n                let part = path[i];\n                if (part == '.' || !part && i > 0 && i < path.len - 1)\n                    path.splice(i, 1);\n            }\n\n            for (mut i = 1; i < path.len; i++) {\n                if (path[i] == '..')\n                    path.splice(--i, 2);\n            }\n\n            return path.join('/');\n        }\n\n        fn path_join(a: string, b: string)\n            path_normalize(a + '/' + b);\n\n        fn main()\n            path_join('hello/hey', './../you//') == 'hello/you/'\n                ? 0 : 1;\n    "_fu);
    ZERO("\n        let a = 7;\n        let b = a && 3;\n        return b - 3;\n    "_fu);
    ZERO("\n        struct S { i: i32; }\n\n        let a = S(0);\n        let b = S(3);\n\n        return a.i\n            || (b || S(4)).i * 2 - (a || S(6)).i\n            && throw('woot');\n    "_fu);
    ZERO("\n\n        struct TrueStory { kind: string; value: string; };\n\n        mut specialized = TrueStory(kind: 'fn', value: 'val');\n\n        specialized.kind == 'fn' && specialized.value || throw('nope');\n\n        let v: &mut string = specialized.kind == 'fn'\n                          && specialized.value\n                          || throw('nope');\n        v += 'ue';\n\n        return specialized.value == 'value' ? 0 : 1;\n\n    "_fu);
    ZERO("\n        struct Token {\n            value: string;\n        };\n\n        fn consume(): Token {\n            return Token('hey');\n        };\n\n        fn main(): i32 {\n            let a = 3;\n            let v = a && consume().value;\n            return v.len - a;\n        };\n    "_fu);
    FAIL("\n        struct ScopeIdx { raw: i32; };\n        fn thing(x: i32) x;\n        mut _return_scope: ScopeIdx;\n\n        fn hey(x: i32) {\n            let scope0 = thing(x);\n            _return_scope = scope0; //overload\n            return _return_scope.raw;\n        }\n\n        return hey(0);\n    "_fu);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            case ($a -> &mut $T[]): &mut $T a[a.len - 1];\n            case ($a -> &    $T[]): &    $T a[a.len - 1];\n\n        fn main()\n        {\n            let a = [1];\n            mut b = [2];\n\n            b.ARR_LAST += a.ARR_LAST;\n            return b.ARR_LAST - 3;\n        };\n    "_fu);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            case ($a -> &mut $T[]): &mut $T a[a.len - 1];\n            case ($a -> &    $T[]): &    $T a[a.len - 1];\n\n        let a = [1];\n        mut b = [2];\n\n        b.ARR_LAST += a.ARR_LAST;\n        return b.ARR_LAST - 3;\n    "_fu);
    ZERO("\n        struct S { i: i32; }\n        fn test(mut x: S) x.i += 1;\n        return S(-1).test;\n    "_fu);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            a[a.len - 1];\n\n        let a = [1];\n        mut b = [2];\n\n        b.ARR_LAST += a.ARR_LAST;\n        return b.ARR_LAST - [3].ARR_LAST;\n    "_fu);
    ZERO("\n\n        struct SolvedNode {\n            value: i32;\n            items: SolvedNode[];\n        };\n\n        fn visitNodes(_v: &mut $V, _n: SolvedNode) {\n\n            fn traverse(v: &mut $V, n: SolvedNode) {\n                v.visit(n);\n                for (mut i = 0; i < n.items.len; i++)\n                    traverse(v, n.items[i]);\n            }\n\n            traverse(_v, _n);\n        };\n\n        struct Visitor {\n            sum: i32;\n        };\n\n        fn visit(using v: &mut Visitor, node: SolvedNode) {\n            sum += node.value;\n        };\n\n        fn main(): i32 {\n            let tree = SolvedNode(3,\n                [ SolvedNode(5), SolvedNode(7) ]);\n\n            mut myVisitor: Visitor;\n            myVisitor.visitNodes(tree);\n            return myVisitor.sum - 15;\n        };\n\n    "_fu);
    ZERO("\n        return 0 > 1 ? throw('should type check') : 0;\n    "_fu);
    ZERO("\n        fn throw_hey(): i32 {\n            throw('hey');\n            return 1;\n        }\n\n        fn main(): i32 {\n            let x = throw_hey()\n                catch err\n                    return err.len - 3;\n\n            return 7;\n        }\n    "_fu);
    ZERO("\n\n        fn main()\n            cli_handle([ 'hello', 'you' ]);\n\n        fn cli_handle(args: string[]): i32\n        {\n            mut idx = 0;\n\n            fn next() {\n                let i = idx++;\n                if (i < args.len)\n                    return args[i];\n\n                return '';\n            }\n\n            // Router.\n            return next().len - 5;\n        }\n    "_fu);
}
