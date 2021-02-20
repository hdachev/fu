#include <cstdint>
#include <fu/io.h>
#include <fu/map.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/vec/find.h>
#include <fu/vec/join.h>
#include <fu/vec/replace.h>
#include <iostream>

struct s_Argument;
struct s_Context;
struct s_Effects;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStat;
struct s_ModuleStats;
struct s_Node;
struct s_Overload;
struct s_ParserOutput;
struct s_Region;
struct s_Scope;
struct s_ScopeItem;
struct s_ScopeMemo;
struct s_ScopeSkip;
struct s_ScopeSkipMemos;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Struct;
struct s_Target;
struct s_Template;
struct s_TestDiffs;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;

fu_STR FAIL(const fu_STR&, s_TestDiffs&);
fu_STR FAIL(const fu_VEC<fu_STR>&, s_TestDiffs&);
fu_STR locate_PRJDIR();
fu_STR serialize(const s_TestDiffs&);
fu_STR snippet2cpp(const fu_STR&);
s_Context ZERO(const fu_STR&, s_TestDiffs&);
s_Context ZERO(fu_VEC<fu_STR>&&, s_TestDiffs&);
s_TestDiffs parse(const fu_STR&);
static void TODO(const fu_STR&, s_TestDiffs&);
void ZERO_SAME(const fu_VEC<fu_STR>&, s_TestDiffs&);

                                #ifndef DEF_s_TestDiffs
                                #define DEF_s_TestDiffs
struct s_TestDiffs
{
    fu_MAP<fu_STR, fu_STR> _current;
    fu_MAP<fu_STR, fu_STR> _next;
    explicit operator bool() const noexcept
    {
        return false
            || _current
            || _next
        ;
    }
};
                                #endif

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
            || kind
            || value
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
            || fname
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
    s_Node(const s_Node&) = default;
    s_Node(s_Node&&) = default;
    s_Node& operator=(s_Node&&) = default;
    s_Node& operator=(const s_Node& selfrec) { return *this = s_Node(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || flags
            || value
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
    fu_VEC<fu_STR> fuzimports;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || fuzimports
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
            || src
            || lex
            || parse
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

                                #ifndef DEF_s_ScopeItem
                                #define DEF_s_ScopeItem
struct s_ScopeItem
{
    fu_STR id;
    int modid;
    uint32_t packed;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || modid
            || packed
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    fu_STR name;
    s_Target target;
    fu_VEC<s_ScopeItem> items;
    fu_VEC<int> imports;
    fu_VEC<s_Target> converts;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || target
            || items
            || imports
            || converts
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    int quals;
    int modid;
    fu_STR canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
            || modid
            || canon
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Region
                                #define DEF_s_Region
struct s_Region
{
    int index;
    explicit operator bool() const noexcept
    {
        return false
            || index
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu_VEC<s_Region> uni0n;
    explicit operator bool() const noexcept
    {
        return false
            || uni0n
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Effects
                                #define DEF_s_Effects
struct s_Effects
{
    int raw;
    explicit operator bool() const noexcept
    {
        return false
            || raw
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    s_ValueType vtype;
    s_Lifetime lifetime;
    s_Effects effects;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
            || effects
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
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || flags
            || value
            || items
            || token
            || type
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu_STR name;
    s_Type type;
    s_SolvedNode dEfault;
    int flags;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || type
            || dEfault
            || flags
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeMemo
                                #define DEF_s_ScopeMemo
struct s_ScopeMemo
{
    int items_len;
    int imports_len;
    int usings_len;
    int converts_len;
    int helpers_len;
    explicit operator bool() const noexcept
    {
        return false
            || items_len
            || imports_len
            || usings_len
            || converts_len
            || helpers_len
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeSkip
                                #define DEF_s_ScopeSkip
struct s_ScopeSkip
{
    int start;
    int end;
    explicit operator bool() const noexcept
    {
        return false
            || start
            || end
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeSkipMemos
                                #define DEF_s_ScopeSkipMemos
struct s_ScopeSkipMemos
{
    fu_VEC<s_ScopeSkip> items;
    fu_VEC<s_ScopeSkip> declash;
    fu_VEC<s_ScopeSkip> imports;
    fu_VEC<s_ScopeSkip> usings;
    fu_VEC<s_ScopeSkip> converts;
    fu_VEC<s_ScopeSkip> helpers;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || declash
            || imports
            || usings
            || converts
            || helpers
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Template
                                #define DEF_s_Template
struct s_Template
{
    s_Node node;
    fu_VEC<int> imports;
    s_ScopeMemo scope_memo;
    s_ScopeSkipMemos scope_skip;
    explicit operator bool() const noexcept
    {
        return false
            || node
            || imports
            || scope_memo
            || scope_skip
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
    int flags;
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Template tEmplate;
    s_SolvedNode solved;
    fu_VEC<int> used_by;
    uint32_t status;
    int local_of;
    fu_VEC<int> closes_over;
    fu_VEC<s_ScopeItem> extra_items;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || type
            || flags
            || min
            || max
            || args
            || tEmplate
            || solved
            || used_by
            || status
            || local_of
            || closes_over
            || extra_items
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
    fu_VEC<int> imports;
    fu_VEC<s_Target> usings;
    fu_VEC<s_Target> converts;
    s_Scope(const s_Scope&) = delete;
    s_Scope(s_Scope&&) = default;
    s_Scope& operator=(const s_Scope&) = delete;
    s_Scope& operator=(s_Scope&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || overloads
            || imports
            || usings
            || converts
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
    int notes;
    s_SolverOutput(const s_SolverOutput&) = delete;
    s_SolverOutput(s_SolverOutput&&) = default;
    s_SolverOutput& operator=(const s_SolverOutput&) = delete;
    s_SolverOutput& operator=(s_SolverOutput&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || scope
            || notes
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleOutputs
                                #define DEF_s_ModuleOutputs
struct s_ModuleOutputs
{
    fu_VEC<int> deps;
    fu_VEC<s_Struct> types;
    fu_MAP<fu_STR, s_Target> specs;
    s_SolverOutput solve;
    fu_STR cpp;
    s_ModuleOutputs(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs(s_ModuleOutputs&&) = default;
    s_ModuleOutputs& operator=(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs& operator=(s_ModuleOutputs&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || deps
            || types
            || specs
            || solve
            || cpp
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleStat
                                #define DEF_s_ModuleStat
struct s_ModuleStat
{
    double time;
    int alloc_count;
    int alloc_bytes;
    explicit operator bool() const noexcept
    {
        return false
            || time
            || alloc_count
            || alloc_bytes
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleStats
                                #define DEF_s_ModuleStats
struct s_ModuleStats
{
    s_ModuleStat lex;
    s_ModuleStat parse;
    s_ModuleStat solve;
    s_ModuleStat codegen;
    explicit operator bool() const noexcept
    {
        return false
            || lex
            || parse
            || solve
            || codegen
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
    s_Module(const s_Module&) = delete;
    s_Module(s_Module&&) = default;
    s_Module& operator=(const s_Module&) = delete;
    s_Module& operator=(s_Module&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || fname
            || in
            || out
            || stats
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu_VEC<s_Module> modules;
    fu_MAP<fu_STR, fu_STR> files;
    fu_MAP<fu_STR, fu_STR> fuzzy;
    s_Context(const s_Context&) = delete;
    s_Context(s_Context&&) = default;
    s_Context& operator=(const s_Context&) = delete;
    s_Context& operator=(s_Context&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || modules
            || files
            || fuzzy
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const fu_STR TEST_SRC = "\n    fn test(one: i32) {\n        let zero = one - 1;\n        let two  = one * 2;\n\n        fn inner(i: i32): i32\n            i > zero ? outer(i - one) : zero; //! FN_recursion //! FN_reopen\n\n        fn outer(i: i32): i32\n            two * inner(i);\n\n        return outer(one) + (two - one) * 17;\n    }\n\n    fn main(): i32 {\n        return test(1) - 17;\n    }\n"_fu;

int self_test()
{
    fu_STR cpp = snippet2cpp(TEST_SRC);
    return (fu::lfind(cpp, "int main()"_fu, 0) ? 0 : 101);
}

                                #ifndef DEF_PRJDIR
                                #define DEF_PRJDIR
inline const fu_STR PRJDIR = locate_PRJDIR();
                                #endif

static fu_STR EXPR(fu_STR& assertion_0, const fu_STR& varname)
{
    return fu::replace(assertion_0, "@"_fu, varname);
}

static void ARROPS(s_TestDiffs& testdiffs_0, const fu_STR& literal, const fu_STR& operation, fu_STR&& assertion)
{
    assertion = (("("_fu + assertion) + ")"_fu);
    fu_STR src {};
    src += "\n"_fu;
    src += "\n    {"_fu;
    src += (("\n        mut arr0 = ["_fu + literal) + "];"_fu);
    src += (("\n        arr0."_fu + operation) + ";"_fu);
    src += (("\n        if ("_fu + EXPR(assertion, "arr0"_fu)) + " != 0) return 13;"_fu);
    src += "\n    }"_fu;
    src += "\n"_fu;
    src += (("\n    mut orig = ["_fu + literal) + "];"_fu);
    src += "\n"_fu;
    src += "\n    {"_fu;
    src += "\n        mut arr1 = CLONE(orig);"_fu;
    src += (("\n        arr1."_fu + operation) + ";"_fu);
    src += (("\n        if ("_fu + EXPR(assertion, "arr1"_fu)) + " != 0) return 17;"_fu);
    src += "\n    }"_fu;
    src += "\n"_fu;
    src += "\n    {"_fu;
    src += "\n        mut arr2 = STEAL(orig);"_fu;
    src += "\n        if (orig.len) return 19;"_fu;
    src += (("\n        arr2."_fu + operation) + ";"_fu);
    src += (("\n        if ("_fu + EXPR(assertion, "arr2"_fu)) + " != 0) return 23;"_fu);
    src += "\n    }"_fu;
    src += "\n"_fu;
    src += "\n    return 0;"_fu;
    src += "\n"_fu;
    ZERO(src, testdiffs_0);
}

static void TODO(const fu_VEC<fu_STR>& src, s_TestDiffs& testdiffs)
{

    try
    {
        ZERO(fu_VEC<fu_STR>(src), testdiffs);
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

    {
        (std::cout << "  TODO: "_fu << e << "\n"_fu << fu::join(src, "\n\n"_fu) << '\n');
        return;
    }
    }
;
    fu::fail(("TODO test is actually passing: "_fu + fu::join(src, "\n\n"_fu)));
}

static void TODO(const fu_STR& src, s_TestDiffs& testdiffs)
{

    try
    {
        ZERO(src, testdiffs);
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

    {
        (std::cout << "  TODO: "_fu << e << "\n"_fu << src << '\n');
        return;
    }
    }
;
    fu::fail(("TODO test is actually passing: "_fu + src));
}

void runTests()
{
    fu_STR TESTDIFFS_FILE = (PRJDIR + "testdiff/now.td"_fu);
    s_TestDiffs testdiffs = parse(fu::file_read(TESTDIFFS_FILE));
    ZERO("\n        return 1 - 1;\n    "_fu, testdiffs);
    ZERO("\n        fn sum(a: i32, b: i32): i32\n            a + b;\n\n        return sum(1, -1);\n    "_fu, testdiffs);
    ZERO("\n        fn sum(a: i32, b: i32)\n            a + b;\n\n        return sum(1, -1);\n    "_fu, testdiffs);
    ZERO("\n        fn sign(a: i32)\n            a > 0 ? 1 : a < 0 ? -1 : 0;\n\n        return sign(7) + sign(-3) + sign(0);\n    "_fu, testdiffs);
    ZERO("\n        fn sign(a: i32) {\n            if (a > 0)\n                return 1;\n\n            return -2;\n        }\n\n        return sign(10) * 2 + sign(-5);\n    "_fu, testdiffs);
    ZERO("\n        fn sign(a: i32) {\n            if (a > 0)\n                return 1;\n            else\n                return -2;\n        }\n\n        return sign(10) * 2 + sign(-5);\n    "_fu, testdiffs);
    ZERO("\n        mut sum = 0;\n        for (mut i = 0; i < 10; i++)\n            sum++;\n\n        return sum * 2 - 20;\n    "_fu, testdiffs);
    ZERO("\n        mut sum = 0;\n        for (mut i = 10; i --> 0; )\n            sum--;\n\n        return sum * 2 + 20;\n    "_fu, testdiffs);
    ZERO("\n        fn decr(num: &mut i32)\n            num--;\n\n        mut res = 0;\n        decr(res);\n        return res + 1;\n    "_fu, testdiffs);
    ZERO("\n        fn decr(ref num: i32)\n            num--;\n\n        mut res = 0;\n        decr(res);\n        return res + 1;\n    "_fu, testdiffs);
    ZERO("\n        mut res = 0;\n        fn decr()\n            res--;\n\n        decr();\n        return res + 1;\n    "_fu, testdiffs);
    ZERO("\n        mut res = 0;\n        fn decr(num: &mut i32) { num--; } // ret void\n\n        decr(res);\n        return res + 1;\n    "_fu, testdiffs);
    ZERO("\n        mut sum = 0;\n        while (sum < 15)\n            sum++;\n\n        return sum - 15;\n    "_fu, testdiffs);
    FAIL("\n        //*F\n        let sum = 0;\n        /*/\n        mut sum = 0;\n        //*/\n        while (sum < 15)\n            sum++; //ERR ++ overload\n\n        return sum - 15;\n    "_fu, testdiffs);
    ZERO("\n        mut sum = 0;\n        while (sum < 15)\n            sum += 2;\n\n        return sum - 16;\n    "_fu, testdiffs);
    ZERO("\n        fn named(a: i32, b: i32)\n            a - b * 2;\n\n        return named(b: 3, 6);\n    "_fu, testdiffs);
    ZERO("\n        fn named(a: i32, b: i32)\n            a - b * 2;\n\n        fn other(a: i32, b: i32)\n            named(:b, :a);\n\n        return other(b: 3, 6);\n    "_fu, testdiffs);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(r: Range)\n            r.max - r.min;\n\n        return size(Range(14, 21)) - 7;\n    "_fu, testdiffs);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        mut r = Range(1, 2);\n        r.min++;\n        return r.max - r.min;\n    "_fu, testdiffs);
    FAIL("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        //*F\n        let r =\n        /*/\n        mut r =\n        //*/\n        Range(1, 2);\n\n        r.min++; //ERR ++ overload\n        return r.max - r.min;\n    "_fu, testdiffs);
    ZERO("\n        struct Range {\n            r_min: i32;\n            r_max: i32;\n        }\n\n        fn size(using r: Range)\n            r_max - r_min;\n\n        return size(Range(14, 21)) - 7;\n    "_fu, testdiffs);
    ZERO("\n        struct X {\n            a: i32;\n        }\n\n        fn test(using x: X, b: i32) a + b;\n        fn hey(using x: X) test(-1);\n\n        return X(1).hey;\n    "_fu, testdiffs);
    ZERO("\n        struct Pos {\n            x: i32;\n        }\n\n        struct Player {\n            using pos: Pos;\n        }\n\n        fn dist(using p: Player, other: Player)\n            x - other.x;\n\n        let a = Player(Pos(10));\n        let b = Player(Pos( 4));\n\n        return dist(a, b) - 6;\n    "_fu, testdiffs);
    FAIL("\n        struct A { x: i32; y: i32; };\n        struct B { x: i32; z: i32; };\n        fn test(using a: A, using b: B)\n            //*F\n            x + z;\n            /*/\n            y + z;\n            //*/\n\n        fn main() test(A(1, 1), B(-1, -1));\n    "_fu, testdiffs);
    ZERO("\n        struct CurrentFn {\n            parent_idx: i32;\n            using RoR?: CurrentFn_ResetOnResolve; // not yet populated\n        };\n\n        struct CurrentFn_ResetOnResolve {\n            ret_count: i32;\n        };\n\n        fn test(f: CurrentFn) f.parent_idx - f.ret_count;\n        fn main() test(CurrentFn(1, CurrentFn_ResetOnResolve(1)));\n    "_fu, testdiffs);
    ZERO("\n        let x = 3;\n        return x / 2 - 1;\n    "_fu, testdiffs);
    ZERO("\n        fn hey(a) a * a;\n        fn main() 0.hey;\n    "_fu, testdiffs);
    ZERO("\n        fn div3by(a: $T) 3 / a;\n        return div3by(2) - 1;\n    "_fu, testdiffs);
    ZERO("\n        fn div3by(a) 3 / a;\n        return div3by(2) - 1;\n    "_fu, testdiffs);
    ZERO("\n        fn add3(a: $T, b = 3) a + b;\n        struct v1 { x: i32; };\n        fn +(a: v1, b: i32) v1(a.x + b);\n        fn main() add3(2.v1).x - 5;\n    "_fu, testdiffs);
    ZERO("\n        fn mul_ab_init(a: $T, b = 0) a*b;\n        fn main() mul_ab_init(1);\n    "_fu, testdiffs);
    ZERO("\n        fn mul_ab_annot_init(a: $T, b: $T = 0) a*b;\n        fn main() mul_ab_annot_init(1);\n    "_fu, testdiffs);
    ZERO("\n        fn mul_ab_opt(a: $T, b?: $T) a*b;\n        fn main() mul_ab_opt(1);\n    "_fu, testdiffs);
    ZERO("\n        fn ab(a, b) a + b*2;\n        fn main() ab(b: 1, a: -2);\n    "_fu, testdiffs);
    ZERO("\n        struct yi32 { y: i32; };\n        fn add_s_vy(v, s) s + v.y;\n        fn main() add_s_vy(v: yi32(1), -1);\n    "_fu, testdiffs);
    ZERO("\n        struct xi32 { x: i32; };\n        fn add_s_vx(s, v) s + v.x; // <- args reordered\n        fn main() add_s_vx(v: xi32(1), -1);\n    "_fu, testdiffs);
    ZERO("\n        fn ab(a, b = 0, c = 0) a + b*2 + c*3;\n        fn main() ab(3, c: -1);\n    "_fu, testdiffs);
    ZERO("\n        fn ab(a, b = -1) a + b*2;\n        fn main() ab(3.0, -1.5).i32;\n    "_fu, testdiffs);
    ZERO("\n        let NEG_ONE_FIVE = -1.5;\n        fn ab(a: $T, b: $T = -1) a + b*2;\n        fn main() ab(3, NEG_ONE_FIVE).i32;\n    "_fu, testdiffs);
    ZERO("\n        let TWO = 2.0;\n        fn ab(a: $T, b: $T = -1) a + b*2;\n        fn main() ab(TWO).i32;\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion\n        fn self_rec_template(x: $T): $T\n            x > 0 ? self_rec_template(x / 2 - 5) : x;\n\n        fn main()\n            self_rec_template(7) + 2;\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion\n        fn ab_rec(a: $T): $T = a ? ba_rec(a - 2) : -100;\n        fn ba_rec(a: $T): $T = a ? ab_rec(a - 7) : -200;\n        fn main() ab_rec(11) + 200;\n    "_fu, testdiffs);
    ZERO("\n        fn main() {\n            let a = 1;\n            fn add1(b) a + b;\n            return 2.add1 - 3;\n        }\n    "_fu, testdiffs);
    ZERO("\n        pub fn map(a: [$T], fn) {\n            mut res: fn($T)[];\n            res.grow_junk(a.len);\n            for (mut i = 0; i < a.len; i++) res[i] = fn(a[i]);\n            return res;\n        }\n\n        pub fn clone(a: $T)\n        case ($T -> @copy) a;\n        case ($T -> [$U]) a.map(fn clone);\n        default {\n            mut res: $T;\n            for (fieldname i: $T) res.i = a.i.clone();\n            return res;\n        }\n\n        pub nocopy struct Scope { x: i32; };\n        pub struct ModuleOutputs { deps: Scope[]; };\n\n        pub fn test(a: ModuleOutputs) {\n            let b = a.clone();\n            return a.deps.len - b.deps.len;\n        }\n\n        pub fn main() test(ModuleOutputs);\n    "_fu, testdiffs);
    ZERO("\n        struct X { a: i32; };\n        inline fn add_uxa_b_inline(using x: X, b: i32) a + b;\n        fn hey(using x: X) add_uxa_b_inline(-1);\n        return X(1).hey;\n    "_fu, testdiffs);
    ZERO("\n        struct X { a: i32; };\n        fn add_uxa_b_template(using x: X, b /* untyped */) a + b;\n        fn hey(using x: X) add_uxa_b_template(-1);\n        return X(1).hey;\n    "_fu, testdiffs);
    ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "\n        pub fn identity(dont_leak_me) dont_leak_me;\n    "_fu, "\n        let dont_leak_me = 1;\n        fn main() _0::identity(dont_leak_me * 2) - 2;\n    "_fu } }, testdiffs);
    ZERO("\n        let static = 1;\n        fn template(arg) static + arg;\n        let arg = 7;                        // <- template shouldn't see this\n        let result = template(arg / -4);    // <- when specializing here\n        fn main() result;\n    "_fu, testdiffs);
    ZERO("\n        fn main() {\n            let static = 1;\n            fn template(arg) static + arg;\n            let arg = 7; // same here, except we're in a fn.\n            return template(arg / -4);\n        }\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion\n        fn inner(i: i32): i32\n            i > 0 ? outer(i - 1) : 0;\n\n        fn outer(i: i32): i32\n            2 * inner(i);\n\n        return outer(1);\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        fn test(one: i32)\n        {\n            let zero = one - 1;\n            let two  = one * 2;\n\n            fn inner(i: i32): i32\n                i > zero ? outer(i - one) : zero;\n\n            fn outer(i: i32): i32\n                two * inner(i);\n\n            return outer(one) + (two - one) * 17;\n        }\n\n        fn main() test(1) - 17;\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        fn inner(i: i32): i32\n            outer(i - 1);\n\n        fn outer(implicit x: i32, i: i32): i32\n            i > 0   ? inner(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer(1) - 7;\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        fn inner_noret(i: i32)\n            outer_noret(i - 1);\n\n        fn outer_noret(implicit x: i32, i: i32)\n            i > 0   ? inner_noret(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer_noret(1) - 7;\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        inline fn inner_inl(i: i32): i32\n            outer_inl(i - 1);\n\n        /*TODO inline tailrec*/\n        fn outer_inl(implicit x: i32, i: i32): i32\n            i > 0   ? inner_inl(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer_inl(1) - 7;\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        fn inner_templ(i): i32\n            outer_templ(i - 1);\n\n        fn outer_templ(implicit x: i32, i): i32\n            i > 0   ? inner_templ(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer_templ(1) - 7;\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        fn inner_templ_noret(i)\n            outer_templ_noret(i - 1);\n\n        fn outer_templ_noret(implicit x: i32, i)\n            i > 0   ? inner_templ_noret(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer_templ_noret(1) - 7;\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        fn outer(i: i32): i32\n            i > 0   ? inner(i)\n                    : 2 * i;\n\n        fn inner(implicit x: i32, i: i32): i32\n            outer(i - 2 * x);\n\n        let implicit x = 3;\n        return outer(6);\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        inline fn outer_inl(i: i32): i32\n            i > 0   ? inner_inl(i)\n                    : 2 * i;\n\n        /*TODO inline tailrec*/\n        fn inner_inl(implicit x: i32, i: i32): i32\n            outer_inl(i - 2 * x);\n\n        let implicit x = 3;\n        return outer_inl(6);\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        fn outer_templ(i): i32\n            i > 0   ? inner_templ(i)\n                    : 2 * i;\n\n        fn inner_templ(implicit x: i32, i): i32\n            outer_templ(i - 2 * x);\n\n        let implicit x = 3;\n        return outer_templ(6);\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        fn outer(implicit x: i32, i: i32): i32\n            i > 0   ? inner(i)\n                    : x + i;\n\n        fn inner(i: i32): i32\n            outer(i - 1);\n\n        let implicit x = 7;\n        return outer(1) - 7;\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        fn outer(implicit x: i32, i: i32)\n            i > 0   ? inner(i)\n                    : x + i;\n\n        fn noret(i: i32) = outer(i);\n\n        fn template(i) = i & 1 ? outer(i) : noret(i);\n\n        fn inner(i: i32): i32\n            template(i - 1);\n\n        fn main() {\n            let implicit x = 7;\n            return outer(1) - 7;\n        }\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_resolve FN_reopen\n        fn returns_x(implicit x: i32): i32\n            = x;\n\n        fn calls_self_1(call_self = false): i32\n            = !call_self ? returns_x : calls_self_1 * 2;\n\n        let implicit x = 7;\n        return calls_self_1(true) - 14;\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_resolve FN_reopen\n        fn returns_x(implicit x: i32): i32\n            = x;\n\n        fn calls_self_2(call_self = false): i32\n            = call_self ? calls_self_2 * 3 : returns_x;\n\n        let implicit x = 7;\n        return calls_self_2(true) - 21;\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_resolve FN_reopen\n        fn returns_x(implicit x: i32): i32\n            = x;\n\n        fn calls_self_3(call_self = false): i32\n        {\n            let add = 1; // <- this wasnt visible\n            fn do_call_self(mul: i32 = 0)\n                = calls_self_3 * mul + add;\n\n            return call_self ? do_call_self(4) : returns_x;\n        }\n\n        let implicit x = 7;\n        return calls_self_3(true) - 29;\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_resolve FN_reopen\n        fn noret_x(implicit x: i32) x;\n\n        fn templ_calls_self_2(call_self): i32\n            = call_self ? templ_calls_self_2(false) * 3 : noret_x;\n\n        fn main() {\n            let implicit x = 7;\n            return templ_calls_self_2(true) - 21;\n        }\n    "_fu, testdiffs);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using implicit r: Range)\n            max - min;\n\n        fn test()\n            size();\n\n        let implicit r = Range(14, 21);\n\n        return test  - 7;\n    "_fu, testdiffs);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using implicit r: Range)\n            max - min;\n\n        fn inner()\n            size();\n\n        fn outer()\n            inner();\n\n        let implicit r = Range(14, 21);\n\n        return outer() - 7;\n    "_fu, testdiffs);
    ZERO("\n        fn main() {\n            let a = 1;\n            let b = 2;\n            let c = 3;\n\n            fn depth1(x: i32) {\n                fn depth2(y: i32) {\n                    return sibling1(x + y + b);\n                }\n\n                return depth2(x + a);\n            }\n\n            fn sibling1(z: i32): i32 {\n                return z + c;\n            }\n\n            return depth1(0) - 6;\n        }\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion\n        fn goto0(x): i32 = x ? goto0(x / 2) : 0;\n        fn main() goto0(1);\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_resolve\n        fn goto0(x) x ? goto0(x / 2) : 0;\n        fn main() goto0(1);\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_resolve\n        fn goto0(x) x ? goto0(x / 2) : x; // ideally same as above\n        fn main() goto0(1);\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_resolve\n        fn goto0(x) x && goto0(x / 2); // ideally same as above [again]\n        fn main() goto0(1);\n    "_fu, testdiffs);
    ZERO("\n        fn impl(implicit ref _impl: i32) _impl;\n        fn arg_or_impl(ref arg: i32) arg || impl;\n        fn main() {\n            let implicit mut _impl: i32;\n            mut arg: i32;\n            ref ref = arg_or_impl(arg);\n            return arg - ref;\n        }\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_resolve\n        fn hello(ref a: i32[], ref b: i32[], x: i32): &mut i32[] {\n            if (x == 0) return a;\n            if (x == 1) return b;\n            return hello(b, a, x / 17);\n        }\n\n        fn main() {\n            mut a = [1, 2, 3];\n            mut b = [4, 5, 6];\n            hello(a, b, 397)[1] *= 5;\n            return b[1] - 25;\n        }\n    "_fu, testdiffs);
    ZERO("\n        let x = 1;\n\n        fn test(): &i32\n            x;\n\n        return test - 1;\n    "_fu, testdiffs);
    ZERO("\n        let a = 1;\n        let x: &i32 = a;\n\n        return a - x;\n    "_fu, testdiffs);
    ZERO("\n        struct Test {\n            x: &i32;\n        }\n\n        let a = 1;\n        let test = Test(a);\n\n        return test.x - 1;\n    "_fu, testdiffs);
    ZERO("\n        mut a = 0;\n        mut b = a;\n        b++;\n        let c = a = b;\n\n        return a - c;\n    "_fu, testdiffs);
    ZERO("\n        mut arr = [0, 1, 2, 3, 4];\n        arr.push(5);\n\n        fn test(view: &i32[]): i32 {\n            mut sum = 0;\n            for (mut i = 0; i < view.len; i++)\n                sum += view[i];\n\n            return sum - 15;\n        }\n\n        return test(arr);\n    "_fu, testdiffs);
    ZERO("\n        mut arr: i32[] = [1, 2, 3, 4];\n        arr.push(5);\n\n        fn test(view: &i32[]): i32 {\n            mut sum = 0;\n            for (mut i = 0; i < view.len; i++)\n                sum += view[i];\n\n            return sum - 15;\n        }\n\n        return test(arr);\n    "_fu, testdiffs);
    ZERO("\n        let x = 5;\n        mut arr = [ -5 ];\n        arr.push(x);\n        return arr[0] + arr[1];\n    "_fu, testdiffs);
    ARROPS(testdiffs, "0,1,2,3,4"_fu, "push(5)"_fu, "@[1] + @[4] - @[5]"_fu);
    ARROPS(testdiffs, "0,1,2,3,4"_fu, "insert(5, 5)"_fu, "@[1] + @[4] - @[5]"_fu);
    ARROPS(testdiffs, "0,1,2,3,4"_fu, "pop()"_fu, "@[1] + @[3] - @.len"_fu);
    ARROPS(testdiffs, "0,1,2,3,4"_fu, "splice(4, 1)"_fu, "@[1] + @[3] - @.len"_fu);
    ARROPS(testdiffs, "0,1,2,3,4"_fu, "unshift(5)"_fu, "@[2] + @[5] - @[0]"_fu);
    ARROPS(testdiffs, "0,1,2,3,4"_fu, "insert(0, 5)"_fu, "@[2] + @[5] - @[0]"_fu);
    ARROPS(testdiffs, "0,1,2,3,4"_fu, "shift()"_fu, "@[0] + @[2] - @[3]"_fu);
    ARROPS(testdiffs, "0,1,2,3,4"_fu, "insert(1, 5)"_fu, "@[2] + @[5] - @[1]"_fu);
    ARROPS(testdiffs, "0,1,2,3,100"_fu, "splice(1, 3)"_fu, "@.len + @[0] + @[1] - 102"_fu);
    ZERO("\n        let OPERATORS = [ \"+\", \"-\", \"*\", \"/\" ];\n\n        fn main()\n            OPERATORS[2] == \"*\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        struct Y { b: bool; }\n        struct X { y: Y[]; }\n\n        mut x: X[];\n        x.push( X([ Y(true) ]) );\n\n        return x.len + x[0].y.len * 2 - 3;\n    "_fu, testdiffs);
    ZERO("\n        struct SelfRec { x: SelfRec[]; }; //! TYPE_recursion TYPE_resolve\n        fn main() SelfRec( [ SelfRec() ] ).x.len - 1; // <- solved with a dirty selfrec & defctor\n    "_fu, testdiffs);
    ZERO("\n        struct ABRec { x: BARec[]; }; //! TYPE_recursion TYPE_reopen\n        struct BARec { x: ABRec[]; }; //! TYPE_recursion TYPE_reopen\n        fn main() ABRec( [ BARec() ] ).x.len - 1; // <- solved with a dirty selfrec & defctor\n    "_fu, testdiffs);
    ZERO("\n        struct ABRec { x: BARec[]; y: ABBARec[]; }; //! TYPE_recursion TYPE_reopen\n        struct BARec { x: ABRec[]; y: ABBARec[]; }; //! TYPE_recursion TYPE_reopen\n        struct ABBARec { x: ABRec[]; y: BARec[]; }; //! TYPE_recursion TYPE_reopen\n        fn main() ABRec( [ BARec() ], [ ABBARec() ] ).x.len - 1; // <- solved with a dirty selfrec & defctor\n    "_fu, testdiffs);
    ZERO("\n        mut a = [7, 1, 5, 3, 99, -13]; // [-13, 1, 3, 5, 7, 99]\n        a.sort();\n        return a[0] + a[1] + a[3] + a[4];\n    "_fu, testdiffs);
    ZERO("\n        let a = [0, 1, 2, 3];\n        let b = a.slice(1, 3);\n        return b.len - b[1];\n    "_fu, testdiffs);
    ZERO("\n        let a = [0, 1, 2, 3];\n        let b = a.slice(1);\n        return b.len - b[2];\n    "_fu, testdiffs);
    ZERO("\n        mut str = \"hello \";\n        str ~= \"world\";\n\n        return str.len - 11;\n    "_fu, testdiffs);
    ZERO("\n        let str = \"hello \" ~ \"world\";\n\n        return str.starts(with: \"hel\")\n             ? str.len - 11\n             : 171;\n    "_fu, testdiffs);
    ZERO("\n        let str = \"a\" ~ 1710010;\n\n        return str == \"a1710010\"\n             ? 0 : 101;\n    "_fu, testdiffs);
    ZERO("\n        let str = \"hello world\";\n        mut cpy = \"\";\n        for (mut i = 0; i < str.len; i++)\n            cpy ~= str[i];\n\n        return (cpy.len - 11) + (cpy == str ? 0 : 1);\n    "_fu, testdiffs);
    ZERO("\n        return \"hello world\".find(\"world\")\n             - 2 * [1, 7, 13, 14, 19].find(14);\n    "_fu, testdiffs);
    ZERO("\n        return (\"hello world\".has(\"world\") ? 1 : 0)\n             + ([1, 14, 96, 2].has(14)     ? 2 : 0)\n             - 3;\n    "_fu, testdiffs);
    ZERO("\n        let hw = \"hello world!\";\n        let a = hw.slice(6, 6 + 5);\n        let b = hw.substr(6, 5);\n        return a == b && a == \"world\" ? a.len - 5 : 1;\n    "_fu, testdiffs);
    ZERO("\n        let tests =\n        [\n            \"\",\n            \" \",\n            \"  \",\n            \"hey you duders\",\n            \" hey you duders\",\n            \"hey you duders \",\n            \"  hey you duders \",\n            \"  hey you  duders \",\n            \"  hey you  duders  \"\n        ];\n\n        fn test(item: string)\n            item == item.split(\" \").join(\" \")\n                ? 0\n                : item.len;\n\n        mut sum = 0;\n        for (mut i = 0; i < tests.len; i++)\n            sum += test(tests[i]);\n\n        return sum;\n    "_fu, testdiffs);
    ZERO("\n        let strA = \"0123456789abcdef0123456789ABCDEF\";\n\n        fn main()\n        {\n            let a0 = alloc::STAT_COUNT();\n            strA.slice(0, 26) == \"0123456789abcdef0123456789\" || throw(\"bad slice\");\n\n            let a1 = alloc::STAT_COUNT();\n            a0 == a1 || throw(\"did alloc\");\n\n            return 0;\n        }\n    "_fu, testdiffs);
    ZERO("\n        let strA = \"0123456789abcdef0123456789ABCDEF\";\n\n        fn main()\n            strA.slice(26, 32) == \"ABCDEF\"\n                ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        mut x: Map(string, i32);\n\n        x[\"hello\"] = 1;\n        x[\"world\"] = 2;\n\n        return x[\"hello\"] - x[\"world\"] + 1;\n    "_fu, testdiffs);
    ZERO("\n        mut x: Map(string, i32);\n\n        x[\"hello\"] = 1;\n        x[\"world\"] = 2;\n\n        let b = \"hello world\";\n        mut offset = 0;\n\n        fn pop(): string {\n            mut a = \"\";\n\n            while (offset < b.len) {\n                let c = b[offset++];\n                if (c == ' ')\n                    break;\n\n                a ~= c;\n            }\n\n            return a;\n        }\n\n        return x[pop()] - x[pop()] + 1;\n    "_fu, testdiffs);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test() - 3;\n    "_fu, testdiffs);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test(b: -1);\n    "_fu, testdiffs);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test(-2);\n    "_fu, testdiffs);
    ZERO("\n        struct Test { a?: i32; b?: i32; }\n        let t = Test(1);\n        return t.a - 1 + t.b * 7;\n    "_fu, testdiffs);
    ZERO("\n        struct Test { a?: i32; b?: i32; }\n        let t = Test(1);\n        return t.b;\n    "_fu, testdiffs);
    ZERO("\n        struct Test { a?: i32; b?: i32; }\n        let t = Test(a: 1);\n        return t.a - 1 + t.b * 7;\n    "_fu, testdiffs);
    ZERO("\n        struct Test { a?: i32; b?: i32; }\n        let t = Test(b: 1);\n        return t.b - 1 + t.a * 7;\n    "_fu, testdiffs);
    ZERO("\n        struct Test { x?: i32; };\n        fn hey() Test();\n        return hey.x;\n    "_fu, testdiffs);
    ZERO("\n        struct Test { x?: i32; };\n        fn hey(y: i32 = 0)\n            y   ? Test(1)\n                : Test();\n\n        return hey.x;\n    "_fu, testdiffs);
    FAIL("\n        //*F\n        fn test(a = \"hello\") a.len; //ERR assign\n        /*/\n        fn test(a = 0) a + 1;\n        //*/\n        fn main() test(-1);\n    "_fu, testdiffs);
    ZERO("\n        let s = 7;\n        return s ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        let s = 0;\n        return s ? 1 : 0;\n    "_fu, testdiffs);
    ZERO("\n        let s = \"hello\";\n        return s ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        let s = \"\";\n        return s ? 1 : 0;\n    "_fu, testdiffs);
    ZERO("\n        let s = [ 4 ];\n        return s ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        mut s = [ 4 ];\n        s.pop();\n        return s ? 1 : 0;\n    "_fu, testdiffs);
    ZERO("\n        struct S { x: i32; }\n        let s: S = S(1);\n        return s ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        struct S { x: i32; }\n        let s: S;\n        return s ? 1 : 0;\n    "_fu, testdiffs);
    ZERO("\n        mut sum = 0;\n        outer: for (mut y = 1; y < 10; y++)\n        {\n            sum += y * 10; // 10, 20\n            for (mut x = 1; x < 10; x++)\n            {\n                sum += x; // 1, 1, 2\n                if (y == 1) continue :outer;\n                if (x == 2) break    :outer;\n            }\n        }\n\n        return sum - 34;\n    "_fu, testdiffs);
    ZERO("\n        mut sum = 0;\n        outer: for (mut x = 0;; x++) {\n            for (mut y = 0; y < x; y++) {\n                if (y & 1 && !(x & 1))\n                    continue :outer;\n\n                sum += x;\n            }\n\n            sum += x * 1000 + 100;\n            if (x > 1)\n                break; // anon\n        }\n\n        // x=0:           + 0100\n        // x=1: 1         + 1100\n        // x=2: 2\n        // x=3: 3 + 3 + 3 + 3100 break\n        return sum - 4312;\n    "_fu, testdiffs);
    FAIL("\n        struct Test { x: i32; }\n        fn test(t: &mut Test) t.x++;\n        mut t = Test();\n        //*F\n        t.test; //ERR orphan\n        /*/\n        t.test();\n        //*/\n\n        return t.x - 1;\n    "_fu, testdiffs);
    ZERO("\n        let x = \"hello\";\n        let y = \"world\";\n        let w = x || y;\n\n        return w == \"hello\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        let x = \"hello\";\n        let y = \"world\";\n        let w = x && y;\n\n        return w == \"world\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        let x = \"hello\";\n        let y = \"world\";\n        let w = 3 && x || y;\n\n        return w == \"hello\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        let x = \"hello\";\n        let y = \"world\";\n        let arr: i32[];\n        let w = arr && x || y;\n\n        return w == \"world\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        let x = \"hello\";\n        let y = \"world\";\n        let arr: i32[];\n        let w = arr && x || y || throw(\"Nope.\");\n\n        return w == \"world\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        fn what(a: i32) {\n            a == 2 || a & 1 || throw(\"what1\");\n            a  > 1 && a & 1 && throw(\"what2\");\n            a  > 0 && a & 3 || throw(\"what3\");\n            return a + 4;\n        }\n        fn main() 1.what - 2.what + 1;\n    "_fu, testdiffs);
    ZERO("\n        fn gen(len: i32) {\n            mut res: i32[];\n            for (mut i = 0; i < len; i++) res ~= i;\n            return res;\n        }\n        fn test(len: i32) {\n            let x = [-5, +5];\n            let y = len.gen && x;\n            return x[y.len / 2];\n        }\n        fn main() 0.test + 1.test;\n    "_fu, testdiffs);
    ZERO("\n        mut i = 7;\n        i ||= 11;\n        return i - 7;\n    "_fu, testdiffs);
    ZERO("\n        mut i = 0;\n        i ||= 11;\n        return i - 11;\n    "_fu, testdiffs);
    ZERO("\n        mut m: Map(string, string);\n        mut g = 0;\n\n        m[\"hello\"] = \"world\";\n        fn f() {\n            g++;\n            return \"cruel world\";\n        }\n\n        m[\"hello\"] ||= f();\n        return g;\n    "_fu, testdiffs);
    ZERO("\n        mut m: Map(string, string);\n        mut g = 0;\n\n        m[\"_not_hello_\"] = \"world\";\n        fn f() {\n            g++;\n            return \"cruel world\";\n        }\n\n        m[\"hello\"] ||= f();\n        return g - 1;\n    "_fu, testdiffs);
    ZERO("\n        {\n            {\n                return 0;\n            }\n        }\n    "_fu, testdiffs);
    FAIL("\n        {\n        //*F\n        {\n            return 0; //ERR block\n        }\n        /*/\n            {\n                return 0;\n            }\n        }\n        //*/\n    "_fu, testdiffs);
    ZERO("\n        {\n            return 0;\n        }\n    "_fu, testdiffs);
    FAIL("\n        {\n            return 0; //ERR block\n        //*F\n       }\n        /*/\n        }\n        //*/\n    "_fu, testdiffs);
    FAIL("\n        {\n            return 0; //ERR block\n        //*F\n         }\n        /*/\n        }\n        //*/\n    "_fu, testdiffs);
    ZERO("\n\n    struct BINOP {\n        P: Map(string, i32);\n    };\n\n    fn setupOperators(): BINOP\n    {\n        mut out: BINOP;\n\n        fn binop(op: string)\n            out.P[op] = 7;\n\n        binop(\",\");\n\n        return out;\n    }\n\n    shadow let BINOP = setupOperators();\n    let P_COMMA = BINOP.P[\",\"] || assert();\n\n    fn main() P_COMMA - 7;\n\n    "_fu, testdiffs);
    ZERO("\n\n        // -no-lambda\n        // This converted to a ref-returning\n        // logical chain for some reason.\n        let hex = true;\n        let trail = \"x\";\n        if (!(trail >= \"0\" && trail <= \"9\") &&\n            !(hex && (trail >= \"a\" && trail <= \"f\"\n                   || trail >= \"A\" && trail <= \"F\")))\n        {\n            return 0;\n        }\n\n        return 1;\n\n    "_fu, testdiffs);
    ZERO("\n        struct Type     { i: i32; };\n        struct Token    { i: i32; };\n        struct ScopeIdx { i: i32; };\n\n        struct SolvedNode\n        {\n            kind:       string;\n            flags?:     i32;\n            value?:     string;\n            items?:     SolvedNode[]; //! TYPE_recursion TYPE_resolve\n            token:      Token;\n\n            type:       Type;\n            target?:    ScopeIdx;\n        };\n\n        let _here: Token;\n\n        fn createDefaultInit(type: Type): SolvedNode\n        {\n            // Broken arg re-arrange.\n            return SolvedNode(\n                kind: \"definit\",\n                token: _here,\n                :type);\n        }\n\n        return createDefaultInit(Type()).target.i;\n    "_fu, testdiffs);
    ZERO("\n        struct Type         { i: i32; };\n        struct Scope        { i: i32; };\n        struct Partial      { i: i32; };\n        struct Template     { i: i32; };\n        struct SolvedNode   { i: i32; };\n\n        fn Scope_add(\n            scope: &mut Scope,\n            kind: string, id: string, type: Type,\n\n            min: i32 = 0,\n            max: i32 = 0,\n            arg_n: string[]     = [],\n            arg_t: Type[]       = [],\n            arg_d: SolvedNode[] = [],\n            template: Template  = [],\n            partial: Partial    = []): i32\n        {\n            return scope.i\n                 + kind.len + id.len + type.i\n                 + min + max + arg_n.len + arg_t.len + arg_d.len\n                 + template.i + partial.i;\n        }\n\n        mut _scope: Scope;\n        let id: string;\n        let t_template: Type;\n        let min: i32;\n        let max: i32;\n        let arg_n: string[];\n        let template: Template;\n\n        return Scope_add(\n            _scope,\n            \"\", id, t_template,\n            min, max, arg_n,\n            :template);\n    "_fu, testdiffs);
    ZERO("\n        let i = 0;\n        let items = [ \"\" ];\n        i == items.len - 1 || throw(\"what?\");\n        return i;\n    "_fu, testdiffs);
    ZERO("\n\n        return false /* test */\n             ? 0xffffff.i32 // what is this\n             : 0 // madness\n             ;\n    "_fu, testdiffs);
    ZERO("\n        fn test(id: i32) id;\n        return test(/*id*/0); // <- bad parse\n    "_fu, testdiffs);
    ZERO("\n        return 0b101.i32 - 5;\n    "_fu, testdiffs);
    ZERO("\n        return 0o101.i32 - 65;\n    "_fu, testdiffs);
    ZERO("\n\n        fn path_normalize(p: string): string {\n            mut path = p.split(\"/\");\n\n            for (mut i = path.len; i --> 0; ) {\n                let part = path[i];\n                if (part == \".\" || !part && i > 0 && i < path.len - 1)\n                    path.splice(i, 1);\n            }\n\n            for (mut i = 1; i < path.len; i++) {\n                if (path[i] == \"..\")\n                    path.splice(--i, 2);\n            }\n\n            return path.join(\"/\");\n        }\n\n        fn path_join(a: string, b: string)\n            path_normalize(a ~ \"/\" ~ b);\n\n        fn main()\n            path_join(\"hello/hey\", \"./../you//\") == \"hello/you/\"\n                ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        pub struct Template { locals: ScopeMemo; }; // <- used ahead of the def, was missing q_trivial\n        pub struct ScopeMemo { x: i32; }; // <- trivial, discovered on solve here after Template is done\n        pub fn +(a: ScopeMemo, b: ScopeMemo) a.x + b.x; // <- used here after both structs are done\n\n        pub fn main() {\n            let a = Template(ScopeMemo(+3));\n            let b = Template(ScopeMemo(-3));\n            return a.locals + b.locals; // <- fails to match.\n        }\n    "_fu, testdiffs);
    ZERO("\n        pub struct MeshBuilder\n        {\n            verts?:     byte[];\n            indices?:   byte[];\n            vert_bytes: i32;\n            num_verts?: i32;\n        };\n\n        pub fn alloc(\n            using mb: &mut MeshBuilder,\n            new_verts: i32,\n            new_indices: i32)\n        {\n            verts.resize_junk((verts.len + new_verts) * vert_bytes);\n\n            let index_bytes = 4;\n            indices.resize_junk((indices.len + new_indices) * index_bytes);\n        }\n\n        pub fn setup_quads(\n            using mb: &mut MeshBuilder, // <- the 'using' introduced more bindings,\n            num_quads: i32)             // <-  advancing the target index number of this arg,\n                : &mut [byte]           // <-   confusing the callsite lifetime of this view.\n        {\n            let b0 = verts.len;\n            let v0 = num_verts;\n            let i0 = indices.len;\n\n            alloc(num_quads * 4, num_quads * 6);\n\n            mut v1 = v0;\n\n            let indices_i32: &mut [i32] =\n                indices[i0, indices.len]\n                    .view(i32);\n\n            for (mut i = 0; i < indices_i32.len; i += 6)\n            {\n                indices_i32[i    ] = v1;\n                indices_i32[i + 1] = v1 + 1;\n                indices_i32[i + 2] = v1 + 2;\n\n                indices_i32[i + 3] = v1;\n                indices_i32[i + 4] = v1 + 2;\n                indices_i32[i + 5] = v1 + 3;\n\n                v1 += 4;\n            }\n\n            num_verts = v1;\n\n            return verts[b0, verts.len];\n        }\n\n        let QUAD_VBO: f32[] =\n        [\n            -1, -1, 0,      0, 0, 1,    0, 0,\n            +1, -1, 0,      0, 0, 1,    1, 0,\n            +1, +1, 0,      0, 0, 1,    1, 1,\n            -1, +1, 0,      0, 0, 1,    0, 1,\n        ];\n\n        pub fn main()\n        {\n            mut mb = MeshBuilder(\n                vert_bytes: 4 * (3+3+2));\n\n            mb.setup_quads(1).view(f32) .= QUAD_VBO;\n\n            return mb.num_verts - 4;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn target(implicit ref _target: i32) _target;\n\n        // this suddenly reported that it doesn't see __solveStruct\n        fn GET_mut(ref x: i32) x || target;\n\n        // while i was trying to reproduce an ambig \"o\" fail here\n        fn __solveStruct(mut arg: i32): i32 {\n            if (arg) {\n                ref o = GET_mut(arg);\n                o++;\n                checkRecursions(o, o);\n            }\n            return arg;\n        }\n\n        fn checkRecursions(ref o: i32, incr: i32): void { GET_mut(o) += incr; }\n\n        fn main()\n        {\n            let implicit mut _target = 0;\n\n            return __solveStruct(1) - 4;\n        }\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_resolve FN_reopen\n        fn main()\n        {\n            mut target = 0;\n            fn GET_mut(ref x: i32) x || GET_mut(target += 1);\n            return GET_mut(target) - 1;\n        }\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_resolve FN_reopen\n        fn main()\n        {\n            mut target = 0;\n            fn GET_mut(ref x: i32) x || GET_mut(++target);\n            return GET_mut(target) - 1;\n        }\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        fn main()\n        {\n            mut target = 0;\n            fn __solveStruct(mut arg: i32): i32 {\n                ref o = GET_mut(arg); o += target;\n                return target;\n            }\n\n            fn GET_mut(ref x: i32) x || (target = __solveStruct(target += 1));\n            return __solveStruct(0) - 2;\n        }\n    "_fu, testdiffs);
    FAIL("\n        //! FN_recursion FN_resolve DEAD_call\n        fn incr(ref a: i32) ++a;\n        fn A(ref a: i32) a || //*F\n                              a = A(incr(a))    /*/         // Lint should complain here,\n                             (a = A(incr(a))); //*/         //  this was an honest mistake.\n        fn main() { mut v = 0; return A(v) - 1; }\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen DEAD_call\n        fn incr(ref a: i32) ++a;\n        fn A(ref a: i32) a || (a = B(incr(a)));\n        fn B(ref b: i32) b || (b = A(incr(b)));\n        fn main() { mut v = 0; return A(v) - 1; }\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen DEAD_call\n        fn incr(ref a: i32) ++a;\n        fn A(ref a: i32) { ref aa = a || (a = B(incr(a))); return aa; }\n        fn B(ref b: i32) { ref bb = b || (b = A(incr(b))); return bb; }\n        fn main() { mut v = 0; return A(v) - 1; }\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen DEAD_let DEAD_code\n        fn main()\n        {\n            mut target = 0;\n\n            fn each(cond, cons) cond && cons();\n\n            fn GET_mut(ref x: i32) x || (target = __solveStruct(target));\n\n            fn __solveStruct(mut arg: i32, x = 0): i32 {\n                each(arg, || arg += x);\n                if (arg) {\n                    ref o = GET_mut(arg);\n                    o++;\n                    checkRecursions(o, o);\n                }\n                return arg;\n            }\n\n            fn checkRecursions(ref o: i32, incr: i32): void { GET_mut(o) += incr; }\n\n            return __solveStruct(1) - 4;\n        }\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        fn main()\n        {\n            mut target = 0;\n\n            // this suddenly reported that it doesn't see __solveStruct\n            fn GET_mut(ref x) x || (target = __solveStruct(target));\n\n            // while i was trying to reproduce an ambig \"o\" fail here\n            fn __solveStruct(mut arg: i32): i32 {\n                if (arg) {\n                    ref o = GET_mut(arg);\n                    o++;\n                    checkRecursions(o, o);\n                }\n                return arg;\n            }\n\n            fn checkRecursions(ref o: i32, incr: i32): void { GET_mut(o) += incr; }\n\n            return __solveStruct(1) - 4;\n        }\n    "_fu, testdiffs);
    FAIL("\n        struct ValueType { modid: i32; };\n        struct Type { using vtype: ValueType; };\n        struct Target { modid: i32; index: i32; };\n        struct Overload { name: string; id: string; };\n\n        fn GET(target: Target): Overload =\n            Overload(\n                name: \"N\" ~ target.index,\n                  id: \"I\" ~ target.index);\n\n        fn main() {\n            mut specs: Map(string, Target);\n\n            fn setSpec(mangle: string) {\n                ref t = specs[mangle] ||= Target;\n\n                // This template should start expanding on GET(target).name,\n                //  which should conflict with overload name.\n                fn name(shadow target)\n                    GET(target) //*F\n                        .name; /*/ .id; //*/\n\n                return t.name;\n            }\n\n            return setSpec(\"hey\").len - 2;\n        }\n    "_fu, testdiffs);
    ZERO("\n        pub struct ScopeSkip { start: i32; end: i32; };\n\n        pub fn each(items: [$T], scope_skip: ScopeSkip[], fn, start = 0) {\n            let END_DUMMY = ScopeSkip(start: items.len, end: items.len);\n\n            mut i0 = start;\n            for (mut i = 0; i < scope_skip.len + 1; i++) {\n                let ss = i < scope_skip.len ? scope_skip[i] : END_DUMMY;\n                if (ss.end <= i0)\n                    continue;\n\n                let i1 = ss.start;\n                for (shadow mut i = i0; i < i1; i++)\n                    fn(items[i]);\n\n                i0 = ss.end;\n            }\n        }\n\n        pub fn test(items?: i32[]) {\n            mut sum = 0;\n            let ss: ScopeSkip[];\n            items.each(ss, |item| sum += item, start: sum);\n            return sum;\n        }\n\n        pub fn main() test();\n    "_fu, testdiffs);
    ZERO("\n        fn setupOperators(P_PREFIX_UNARY) // <- template\n        {\n            struct BINOP {\n                PRECEDENCE:     Map(string, i32);\n                RIGHT_TO_LEFT:  Map(i32,   bool);\n            };\n\n            mut out: BINOP; // <- no BINOP in scope\n            mut precedence = P_PREFIX_UNARY;\n            mut rightToLeft = false;\n\n            fn binop(ops: string[]) {\n                precedence++;\n                out.RIGHT_TO_LEFT[precedence] = rightToLeft;\n                for (mut i = 0; i < ops.len; i++)\n                    out.PRECEDENCE[ops[i]] = precedence;\n            }\n\n            binop([ \"|>\" ]);\n\n            //\n            return out;\n        }\n\n        let BINOP = setupOperators(-1);\n\n        fn main() {\n            let precedence = BINOP.PRECEDENCE[\"|>\"];\n            return precedence;\n        }\n    "_fu, testdiffs);
    TODO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "\n        let OPTOKENS = \"{}[]()!?~@#$%^&*/-+<=>,.;:|\";\n\n        pub fn lex(src) // <- template\n        {\n            let end = src.len;\n            mut idx = 0;\n\n            while (idx < end) {\n                let c = src[idx++];\n                if (OPTOKENS.has(c)) // <- no OPTOKENS in scope\n                    return idx;\n            }\n\n            return src.len;\n        }\n    "_fu, "\n        fn main() _0::lex(\"3 - 3\") - 2; // <- from here\n    "_fu } }, testdiffs);
    ZERO("\n        fn each(a: [$T], fn, start?!: i32)\n            for (mut i = start; i < a.len; i++)\n                fn(a[i]);\n\n        fn main() {\n            mut sum = 0;\n            let a = [ 1, 2, 3 ];\n            a.each(|i| sum += i, start: sum);   // <- start inferred to ref i32, which couldnt definit\n            return sum - 6;                     //     perhaps we can use the optionality to infer constness\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn ScopeSkip_push(ref scope_skip: i32[]) {\n            if (scope_skip) scope_skip[0]++;\n            else            scope_skip ~= 1;\n        }\n\n        fn main() {\n            mut scope_skip = [ 1 ];\n            ScopeSkip_push(scope_skip);\n            return scope_skip[0] - 2;\n        }\n    "_fu, testdiffs);
    ZERO("\n        struct Module  { cpp:    string; };\n        struct Context { module: Module; };     // Simplification of next test, no need to consider COW here\n\n        fn snippet2cpp(cpp: string): string {\n            let ctx = Context( Module(cpp) );\n            {\n                let module = ctx.module;        // This was const Module& =  ... which can't be moved from.\n                if (module.cpp)\n                    return module.cpp;          ;; EXPECT return static_cast<fu_STR&&>\n            }\n\n            return \"\";\n        }\n\n        fn main() snippet2cpp(\"1\").len - 1;\n    "_fu, testdiffs);
    ZERO("\n        struct Module  { cpp:     string;   };\n        struct Context { modules: Module[]; };  // Module[] is COW-capable -\n                                                //  - either prove there's no COW,\n        fn snippet2cpp(cpp: string): string {   //  - or don't attempt to move out the item.\n            let ctx = Context([ Module(cpp) ]);\n            for (mut i = 0; i < ctx.modules.len; i++)\n            {\n                let module = ctx.modules[i];    ;; TODO .unique(i)\n                if (module.cpp)\n                    return module.cpp;          ;; TODO return static_cast<fu_STR&&>\n            }\n\n            return \"\";\n        }\n\n        fn main() snippet2cpp(\"1\").len - 1;\n    "_fu, testdiffs);
    ZERO("\n        //! DEAD_code, TODO FIX no dead code here really, noticed before reopen.\n        //  Perhaps we want to \"undo\" these markers somehow?\n        //   Or have them per scope entry and discard?\n\n        fn test(x: string) {\n            // cg fail: fwd annots of the two fns where unconsting hey to \"enable move\",\n            //          basically the decision was made in the wrong scope.\n            let hey = \"hey\";\n            fn inner(you: string) you && hey ~ you || outer(\"what#1\");\n            fn outer(arg: string) inner(arg && \" \" ~ arg) || inner(\"what#2\");\n            return outer(x); //! FN_recursion FN_reopen\n        }\n\n        fn main() test(\"you\").len - 7;\n    "_fu, testdiffs);
    TODO("\n        struct Arg { i: i32; };\n\n        // A mutref fail.\n        fn mutargs(args: &mut Arg[])\n        {\n            // This miscompiles to ref into args,\n            //  after which we invalidate the reference.\n            //\n            // Notice the \"let\" would bind cleanly,\n            //  if it weren't for the \"&&\", which loses the mutrefsness.\n            //\n            let badref = args.len && args[0];   -----------------\n            args = [ Arg(11) ];                 INVALID REFERENCE\n            return badref;                      -----------------\n        }\n\n        fn main()\n        {\n            mut args = [ Arg(7) ];\n            return mutargs(args).i - 7;\n        }\n    "_fu, testdiffs);
    ZERO("\n        pub struct Target { modid!: i32; packed!: i32; };\n        pub inline fn index(a: Target) a.packed;\n\n        //////////////////////////////////////////////////////////////////\n        // TODO module autosplit, we need to generate import variations //\n        //////////////////////////////////////////////////////////////////\n\n        struct CurrentFn { using target: Target; };\n        fn hello(c?: CurrentFn) c.index;\n        fn main() hello;\n    "_fu, testdiffs);
    ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "\n        pub struct Target { modid!: i32; packed!: i32; };\n        pub inline fn index(a: Target) a.packed;\n    "_fu, "\n        import _0;\n        struct CurrentFn { using target: Target; };\n        fn hello(c?: CurrentFn) c.index;\n        fn main() hello;\n    "_fu } }, testdiffs);
    ZERO("\n        let a = 7;\n        let b = a && 3;\n        return b - 3;\n    "_fu, testdiffs);
    ZERO("\n        struct S { i: i32; }\n\n        let a = S(0);\n        let b = S(3);\n\n        return a.i\n            || (b || S(4)).i * 2 - (a || S(6)).i\n            && throw(\"woot\");\n    "_fu, testdiffs);
    ZERO("\n\n        struct TrueStory { kind: string; value: string; };\n\n        mut specialized = TrueStory(kind: \"fn\", value: \"val\");\n\n        specialized.kind == \"fn\" && specialized.value || throw(\"nope\");\n\n        let v: &mut string = specialized.kind == \"fn\"\n                          && specialized.value\n                          || throw(\"nope\");\n        v ~= \"ue\";\n\n        return specialized.value == \"value\" ? 0 : 1;\n\n    "_fu, testdiffs);
    ZERO("\n        struct Token {\n            value: string;\n        };\n\n        fn consume(): Token {\n            return Token(\"hey\");\n        };\n\n        fn main(): i32 {\n            let a = 3;\n            let v = a && consume().value;\n            return v.len - a;\n        };\n    "_fu, testdiffs);
    FAIL("\n        struct ScopeIdx { raw: i32; };\n        //*F\n        fn thing(x: i32) x;\n        /*/\n        fn thing(x: i32) ScopeIdx(x);\n        //*/\n        mut _return_scope: ScopeIdx;\n\n        fn hey(x: i32) {\n            let scope0 = thing(x);\n            _return_scope = scope0; //overload\n            return _return_scope.raw;\n        }\n\n        return hey(0);\n    "_fu, testdiffs);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            case ($a -> &mut $T[]): &mut $T a[a.len - 1];\n            case ($a -> &    $T[]): &    $T a[a.len - 1];\n\n        fn main()\n        {\n            let a = [1];\n            mut b = [2];\n\n            b.ARR_LAST += a.ARR_LAST;\n            return b.ARR_LAST - 3;\n        };\n    "_fu, testdiffs);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            case ($a -> &mut $T[]): &mut $T a[a.len - 1];\n            case ($a -> &    $T[]): &    $T a[a.len - 1];\n\n        let a = [1];\n        mut b = [2];\n\n        b.ARR_LAST += a.ARR_LAST;\n        return b.ARR_LAST - 3;\n    "_fu, testdiffs);
    ZERO("\n        struct S { i: i32; }\n        fn test(mut x: S) x.i += 1;\n        return S(-1).test;\n    "_fu, testdiffs);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            a[a.len - 1];\n\n        let a = [1];\n        mut b = [2];\n\n        b.ARR_LAST += a.ARR_LAST;\n        return b.ARR_LAST - [3].ARR_LAST;\n    "_fu, testdiffs);
    ZERO("\n        struct mat4 { i: i32; };\n        struct RenderFrame { u_mat4_VP: mat4; };\n\n        inline fn mat4_identity() mat4(1);\n\n        fn test(output: &mut RenderFrame) {\n            output.u_mat4_VP = mat4_identity;\n        }\n\n        fn main() {\n            mut ret: RenderFrame;\n            test(ret);\n            return ret.u_mat4_VP.i - 1;\n        }\n    "_fu, testdiffs);
    FAIL("\n        pub struct ScopeSkip {\n            start: i32;\n            end:   i32;\n        };\n\n        pub fn search(skip: ScopeSkip = [])\n            skip.end - skip.start;\n\n        pub fn main()\n            //*F\n            ScopeSkip(min: -1, max: +1)\n            /*/\n            ScopeSkip(start: -1, end: +1)\n            //*/\n                .end - 1;\n    "_fu, testdiffs);
    ZERO("\n        struct vec3 { x?: f32; y?: f32; z?: f32; };\n\n        struct mat34 {\n            mx: vec3; my: vec3; mz: vec3;\n            mo: vec3;\n        };\n\n        inline fn mat34_identity()\n            mat34(\n                vec3(x: 1),\n                vec3(y: 1),\n                vec3(z: 1), vec3 /*point3*/);\n\n        // What broke is this using reports a conflict,\n        //  because 'determinant' got expanded within 'inverse',\n        //   and there's another using mat34 there.\n        //    Basically we totally don't want it to expand there.\n        inline fn determinant(using _: mat34): f32\n            - mz.x * my.y * mx.z + my.x * mz.y * mx.z + mz.x * mx.y * my.z\n            - mx.x * mz.y * my.z - my.x * mx.y * mz.z + mx.x * my.y * mz.z;\n\n        fn inverse(using mat: mat34): mat34\n        {\n            let idet = 1 / mat.determinant;\n\n            let i_mx = vec3(\n                idet * (- mz.y * my.z + my.y * mz.z),\n                idet * (+ mz.y * mx.z - mx.y * mz.z),\n                idet * (- my.y * mx.z + mx.y * my.z));\n\n            let i_my = vec3(\n                idet * (+ mz.x * my.z - my.x * mz.z),\n                idet * (- mz.x * mx.z + mx.x * mz.z),\n                idet * (+ my.x * mx.z - mx.x * my.z));\n\n            let i_mz = vec3(\n                idet * (- mz.x * my.y + my.x * mz.y),\n                idet * (+ mz.x * mx.y - mx.x * mz.y),\n                idet * (- my.x * mx.y + mx.x * my.y));\n\n            return mat34(\n                i_mx, i_my, i_mz,\n\n                vec3( // point3\n                      mo.x * -i_mx.x\n                    + mo.y * -i_my.x\n                    + mo.z * -i_mz.x,\n\n                      mo.x * -i_mx.y\n                    + mo.y * -i_my.y\n                    + mo.z * -i_mz.y,\n\n                      mo.x * -i_mx.z\n                    + mo.y * -i_my.z\n                    + mo.z * -i_mz.z));\n        }\n\n        fn main() i32 <|\n            mat34_identity.inverse.determinant - 1;\n    "_fu, testdiffs);
    ZERO("\n        struct TEA\n        {\n            v0: u32;\n            v1: u32;\n        }\n\n        inline fn r4(using _: &mut TEA, sum: &mut u32)\n        {\n            mut delta: u32 = 0x9e3779b9;\n\n            for (mut i = 0; i < 4; i++) {\n                sum += delta;\n\n                v0 += ((v1<<4) + 0xA341316C) ^ (v1 + sum) ^ ((v1>>5) + 0xC8013EA4);\n                v1 += ((v0<<4) + 0xAD90777D) ^ (v0 + sum) ^ ((v0>>5) + 0x7E95761E);\n            }\n        }\n\n        // Stack overflow solving this,\n        //  argmax is +inf, and it just\n        //   re-enters and re-enters.\n        inline fn r4(tea: &mut TEA) {\n            mut sum: u32; tea.r4(sum);\n        }\n\n        fn main() {\n            mut tea: TEA;\n            tea.r4();\n            return (tea.v0 ^ tea.v0).i32;\n        }\n    "_fu, testdiffs);
    TODO("\n        struct ScopeSkip {\n            min: i32;\n            max: i32;\n        };\n\n        fn main() {\n            let a = 1;\n            mut x: ScopeSkip; x = [ -2, 0 ]; // Inference fail.\n            mut t: ScopeSkip; t = x.min && [ x.min, a ];\n            return a + t.min + t.max;\n        }\n    "_fu, testdiffs);
    ZERO("\n        // Same as below, but avoids the $T call, which is also broken somehow.\n        //  DONT DELETE ME after you fix the $T, its a great example of stupid codegen -\n        //   we emit useless overloads for mutrefs when its clearly useless.\n\n        //! FN_recursion FN_resolve\n        fn rec_cases(a: $T)\n        case ($T -> @primitive) {\n            if (a)      return rec_cases(a / 2);\n            else        return a;\n        }\n        default {\n            if (a.i) {\n                shadow mut a = a;\n                a.i /= 2;\n                return rec_cases(a);\n            }\n            else        return rec_cases(a.i);\n        }\n\n        struct X { i: i32; };\n        fn main() X(1).rec_cases;\n    "_fu, testdiffs);
    TODO("\n        //! FN_recursion FN_resolve\n        fn rec_cases(a: $T)\n        case ($T -> @primitive) {\n            if (a)      return rec_cases(a / 2);\n            else        return a;\n        }\n        default {\n            if (a.i)    return rec_cases($T(i: a.i / 2));\n            else        return rec_cases(a.i);\n        }\n\n        struct X { i: i32; };\n        fn main() X(1).rec_cases;\n    "_fu, testdiffs);
    ZERO("\n        struct SolvedNode {\n            value: i32;\n            items?: SolvedNode[]; //! TYPE_recursion TYPE_resolve\n        };\n\n        fn visitNodes(_v: &mut $V, _n: SolvedNode) {\n\n            fn traverse(v: &mut $V, n: SolvedNode) {\n                v.visit(n);\n                for (mut i = 0; i < n.items.len; i++)\n                    traverse(v, n.items[i]); //! FN_recursion FN_resolve\n            }\n\n            traverse(_v, _n);\n        };\n\n        struct Visitor {\n            sum: i32;\n        };\n\n        fn visit(using v: &mut Visitor, node: SolvedNode) {\n            sum += node.value;\n        };\n\n        fn main(): i32 {\n            let tree = SolvedNode(3,\n                [ SolvedNode(5), SolvedNode(7) ]);\n\n            // This is an aside, managed to lose the copy qual when working structs\n            // Initially noticed it because visitNodes tried to change its sighash\n            mut cpy = tree; if (cpy) {} // <- but this fails cleanly when tree is nocopy\n\n            mut myVisitor: Visitor;\n            myVisitor.visitNodes(tree);\n            return myVisitor.sum - 15;\n        };\n\n    "_fu, testdiffs);
    ZERO("\n        return 0 > 1 ? throw(\"should type check\") : 0;\n    "_fu, testdiffs);
    ZERO("\n        fn throw_hey(): i32 {\n            throw(\"hey\");\n            return 1; //! DEAD_code\n        }\n\n        fn main(): i32 {\n            let x = throw_hey()\n                catch err\n                    return err.len - 3;\n\n            return x || 7;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn throw_hey() {\n            throw(\"hey\");\n        }\n\n        fn main(): i32 {\n            let x = throw_hey() //! DEAD_code\n                catch err\n                    return err.len - 3;\n\n            return x || 7;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn throw_hey(): i32 {\n            throw(\"hey\");\n            return 1; //! DEAD_code\n        }\n\n        fn main(): i32 {\n            try {\n                return throw_hey();\n            }\n            catch (e) {\n                return e.len - 3;\n            }\n\n            return 11;\n        }\n    "_fu, testdiffs);
    ZERO("\n\n        fn main()\n            cli_handle([ \"hello\", \"you\" ]);\n\n        fn cli_handle(args: string[]): i32\n        {\n            mut idx = 0;\n\n            fn next() {\n                let i = idx++;\n                if (i < args.len)\n                    return args[i];\n\n                return \"\";\n            }\n\n            // Router.\n            return next().len - 5;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn test() {\n            mut x = 5;\n            return x;\n        }\n\n        fn main()\n            test() - 5;\n    "_fu, testdiffs);
    ZERO("\n        struct Test { i: i32; };\n\n        fn test() {\n            mut x = Test(5);\n            return x;\n        }\n\n        fn main()\n            test().i - 5;\n    "_fu, testdiffs);
    ZERO("\n        struct Test { a: i32; b: i32; };\n\n        fn test() {\n            mut x = Test(5, -5);\n            return x;\n        }\n\n        fn main()\n            test().a + test().b;\n    "_fu, testdiffs);
    ZERO("\n        struct X { x: i32; };\n        fn ref2arg(x: X) = x;\n\n        fn main() {\n            let NOTREF = ref2arg(X(101));\n            return NOTREF.x - 101;\n        }\n    "_fu, testdiffs);
    FAIL("\n        //*F\n        nocopy\n        /*/\n        //*/\n        struct Copied { x: i32; };\n\n        fn main() {\n            let a = Copied(1);\n            mut b = a;\n            b.x++;\n            return b.x - a.x * 2;\n        }\n    "_fu, testdiffs);
    ZERO("\n        struct XY { x: i32; y: i32; };\n        fn ref2arg(v: XY) = v;\n\n        fn main() {\n            let a = XY(99, 2);\n            let ref2a = ref2arg(a);\n            return mem::ptr_eq(a, ref2a) ? 0 : 1;\n        }\n    "_fu, testdiffs);
    ZERO("\n        nocopy struct NoCopy { i: i32; };\n        fn retmutref(ref nc: NoCopy) nc;\n\n        fn main() {\n            mut nc: NoCopy;\n            nc.retmutref.retmutref.i++;\n            return nc.i - 1;\n        }\n    "_fu, testdiffs);
    ZERO("\n        nocopy struct NoCopy { i: i32; };\n        fn mutrefself(ref nc: NoCopy) {\n            nc.i++;\n            return nc;\n        }\n\n        fn main() {\n            mut nc: NoCopy;\n            nc.mutrefself().mutrefself();\n            return nc.i - 2;\n        }\n    "_fu, testdiffs);
    ZERO("\n        nocopy struct NoCopy { i: i32; };\n\n        fn      retarg(a: NoCopy) a;\n        fn  retargs_if(a: NoCopy, b: NoCopy) a.i ? b : a;\n        fn  retargs_or(a: NoCopy, b: NoCopy) a || b;\n        fn retargs_and(a: NoCopy, b: NoCopy) a && b;\n\n        fn main() {\n            let a: NoCopy;\n            let b: NoCopy;\n            return retarg(retargs_if(a, retargs_and(a, retargs_or(a, b)))).i;\n        }\n    "_fu, testdiffs);
    ZERO("\n        nocopy struct NoCopy { i: i32; };\n\n        fn      retarg(a: NoCopy) a;\n        fn  retargs_if(a: NoCopy, b: NoCopy) a.i ? b : a;\n        fn  retargs_or(a: NoCopy, b: NoCopy) a || b;\n        fn retargs_and(a: NoCopy, b: NoCopy) a && b;\n\n        fn main() {\n            let a: NoCopy;                      // <- b now temp\n\n            return retarg(retargs_if(a, retargs_and(a, retargs_or(a, NoCopy)))).i;\n        }\n    "_fu, testdiffs);
    ZERO("\n        nocopy struct NoCopy { i: i32; };\n\n        fn      retarg(a) a;                    // <- now templates\n        fn  retargs_if(a, b) a.i ? b : a;\n        fn  retargs_or(a, b) a || b;\n        fn retargs_and(a, b) a && b;\n\n        fn main() {\n            mut a: NoCopy;                      // <- now muts\n            mut b: NoCopy;\n            retarg(retargs_if(a, retargs_and(a, retargs_or(a, b)))).i++;\n            return a.i + b.i - 1;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn as_blocks_after(x: i32) {\n            mut zero = 0;\n            if (x > 2) // a broken stmt emit lifted the loop out of the conditional\n                for (mut i = 0; i < x; i++)\n                    zero = i + i*zero;\n\n            return zero;\n        }\n\n        fn main() 2.as_blocks_after;\n    "_fu, testdiffs);
    TODO("\n        struct Lifetime { woot: Lifetime[]; }; //! TYPE_recursion TYPE_resolve\n\n        fn Lifetime_test(x: Lifetime) {\n            x.woot.len & 1 && throw(\"This is very important.\");\n            for (mut i = 0; i < x.woot.len; i++) Lifetime_test(x.woot[i]); //! FN_recursion FN_resolve\n            return x;\n        }\n\n        fn Lifetime_fromBinding(x: i32) {\n            mut woot: Lifetime[];\n            for (mut i = 0; i < x; i++) woot[i] = Lifetime();\n            return Lifetime_test(Lifetime(:woot));\n        }\n\n        fn main() 0.Lifetime_fromBinding.woot.len;\n    "_fu, testdiffs);
    ZERO("\n        fn test(x: i32) {\n            let c = [10007];\n            let a = [7, 11];\n            let b = {\n                BRK: {\n                    if (x & 2) break :BRK c;\n                    if (x & 1) break :BRK [ x ]; // a val\n                    a; // a ref\n                }\n            };\n            return a[0] - b[0] * a[1];\n        }\n\n        fn main() 1.test + 4;\n    "_fu, testdiffs);
    ZERO("\n        struct Test { i: i32[]; };\n\n        fn test(mut x: Test) {\n            x.i[0] += x.i[1];\n            return x;\n        }\n\n        fn main() {\n            let s = Test([ 1, 2 ]);\n            return test(s).i[0] - s.i[0] * 3;\n        }\n    "_fu, testdiffs);
    ZERO("\n        struct Test { i: i32[]; };\n\n        fn test(mut x: Test): Test {\n            x.i[0] += x.i[1];\n            return x;\n        }\n\n        fn main() {\n            let s = Test([ 1, 2 ]);\n            return test(s).i[0] - s.i[0] * 3;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn compile_snippets(x: string) x.find('a') && throw(\"throw#1\");\n        fn ZERO(x: string) x.find('b') && throw(\"throw#2\");\n\n        fn FAIL(x: string): string {\n            let ctx = compile_snippets(x) && \"hey\"\n                catch e return ZERO(x) && e;\n\n            return ctx;\n        }\n\n        fn main() FAIL(\"a\").len;\n    "_fu, testdiffs);
    ZERO("\n        // The thing below but shorter:\n        //  the '|| throw' introduces a bullshit lambda during codegen,\n        //   which misreturns a dangling reference to its own frame.\n        fn test(x: string) [x][0] || throw(\"nope!\");\n        fn main() \"what\".test.len - 4;\n    "_fu, testdiffs);
    ZERO("\n        fn only(s: $T[]) s.len == 1 ? s[0] : throw (\"len != 1: \" ~ s.len);\n\n        struct Node       { kind: string; };\n        struct SolvedNode { kind: string; };\n\n        fn solveNodes(n: Node[]) {\n            mut r: SolvedNode[];\n            for (mut i = 0; i < n.len; i++) r ~= SolvedNode(n[i].kind);\n            return r;\n        }\n\n        // the '|| throw' introduces a bullshit lambda during codegen,\n        //  which misreturns a dangling reference to its own frame.\n        fn solveDeclExpr(n: Node) solveNodes([ n ]).only || throw (\"!only\");\n\n        fn main() solveDeclExpr(Node(\"a\")).kind.len - 1;\n    "_fu, testdiffs);
    ZERO("\n        fn incr_x_to_1(ref x: i32) {\n            x && throw(\"this reports return t_never\");\n            fn incr_x() { return x++; }\n            incr_x();\n        }\n        fn main() {\n            mut x = 0;\n            incr_x_to_1(x);\n            return x - 1;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn main() {\n            mut x = 0;\n            fn incr_x_to_1() {\n                x && throw(\"this reports return t_never\");\n                fn incr_x() { return x++; }\n                incr_x();\n            }\n            incr_x_to_1();\n            return x - 1;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn apply(fn, v) fn(v);\n        fn main() {\n            mut x = 0;\n            fn scope_using(via: i32) {\n                x && throw(\"this reports return t_never\");\n                // which messed up retcount for scope_using\n                fn visit(item: i32) {\n                    if (item) return item;\n                    return x++;\n                }\n                apply(fn visit, via);\n            }\n\n            scope_using(x);\n            return x - 1;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn main()\n            i32(PI * 2.0) - 6;\n    "_fu, testdiffs);
    ZERO("\n        fn main()\n            i32(PI * 2 - 6);\n    "_fu, testdiffs);
    ZERO("\n        fn main()\n            PI * 2 - 6 |> i32;\n    "_fu, testdiffs);
    ZERO("\n        fn main()\n            i32 <| PI * 2 - 6;\n    "_fu, testdiffs);
    ZERO("\n        let x: f32 = 1; fn main() 1 - x.i32;\n    "_fu, testdiffs);
    ZERO("\n        let x: f32 = 1.0; fn main() 1 - x.i32;\n    "_fu, testdiffs);
    ZERO("\n        let x: u8 = 1; fn main() 1 - x.i32;\n    "_fu, testdiffs);
    ZERO("\n        let x = 1.f32; fn main() 1 - x.i32;\n    "_fu, testdiffs);
    ZERO("\n        fn gt0(x: f32) x > 0;\n        fn main() gt0(1.f32) ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        struct Hey { x: f32; };\n        fn hey() Hey(1);\n        fn main() hey.x.i32 - 1;\n    "_fu, testdiffs);
    ZERO("\n        struct vec3 { x?: f32; y?: f32; z?: f32; };\n        fn test(i: i32) vec3(x: (i - 2).f32, z: 1);\n        fn main() {\n            let v = test(1);\n            return (v.x + v.z).i32;\n        }\n    "_fu, testdiffs);
    ZERO("\n        struct vec3 { x?: f32; y?: f32; z?: f32; };\n        fn test(f: f32) vec3(x: f, z: -1);\n        fn main() {\n            let v = test(-1);\n            return (v.x - v.z).i32;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn hey(i: f32) i.f32 + 0.5;\n        fn main() hey(1).i32 - 1;\n    "_fu, testdiffs);
    ZERO("\n        fn lin2srgb(l: f32): f32\n            l <= 0.0031308\n                ? l * 12.92\n                : 1.055 * pow(l, 1/2.4.f32) - 0.055;\n\n        fn lin255(v: f32) u32 <|\n            v.lin2srgb.max(0).min(1) * 255.99;\n\n        fn main() i32 <|\n            lin255(1) - 255;\n    "_fu, testdiffs);
    ZERO("\n        struct vec3 { x?: f32; y?: f32; z?: f32; };\n\n        inline fn /(a: f32, b: vec3)\n            vec3(a / b.x, a / b.y, a / b.z);\n\n        fn main() i32 <|\n            (1/vec3(x: 1)).x - 1;\n    "_fu, testdiffs);
    ZERO("\n        let QUAD_DATA: f32[] =\n        [\n            -1, -1, 0,      0, 0, 1,    0, 0, 0,\n            +1, +1, 0,      0, 0, 1,    1, 1, 0,\n            -1, +1, 0,      0, 0, 1,    0, 1, 0,\n\n            -1, -1, 0,      0, 0, 1,    0, 0, 0,\n            +1, -1, 0,      0, 0, 1,    1, 0, 0,\n            +1, +1, 0,      0, 0, 1,    1, 1, 0,\n        ];\n\n        fn main() QUAD_DATA.len - 6 * 9;\n    "_fu, testdiffs);
    ZERO("\n        fn test(a: bool): u8 = a ? 1 : 0;\n\n        fn main() test(false).i32;\n    "_fu, testdiffs);
    ZERO("\n        fn test(a: bool): u8 = a && 1;\n\n        fn main() test(false).i32;\n    "_fu, testdiffs);
    ZERO("\n        pub let A_u8: u8 = 0x0;\n\n        fn ATTRIB(type: u8, count: i32, srgb = false): u8\n            = type & 0x3 | count.u8 << 2\n\n            // TODO can't deep-retype the last cast unfortunately:\n            //  we need another hint to drive typing here,\n            //   perhaps monogenous signatures, or else.\n            | (srgb && 0x80.u8);\n\n        fn main() ATTRIB(A_u8, 4).i32 - 16;\n    "_fu, testdiffs);
    ZERO("\n        pub struct Geometry    { g: i32; };\n        pub struct Texture     { t: i32; };\n        pub struct RenderFrame { r: i32; };\n\n        pub struct LogicFrame_in\n        {\n            lastLogic:  LogicFrame;\n        };\n\n        pub struct LogicFrame\n        {\n            DATA_fbx:   Geometry;\n            TEX_A:      Texture;\n            TEX_AO:     Texture;\n            TEX_M:      Texture;\n            TEX_N:      Texture;\n            TEX_R:      Texture;\n            HDR:        Texture;\n        };\n\n        pub struct RenderFrame_in\n        {\n            w:          i16;\n            h:          i16;\n            frame:      i32;\n\n            mouseX:     f32;\n            mouseY:     f32;\n            mouseBtns:  i32;\n\n            using logic:    LogicFrame;\n            lastRender:     RenderFrame;\n        };\n\n        pub fn APP_renderFrame(using args: RenderFrame_in): RenderFrame\n        {\n            return RenderFrame(args.HDR.t);\n        }\n\n        fn main() 0;\n    "_fu, testdiffs);
    ZERO("\n        fn leadingDigit(name: string) name[0].u8 - '0'.u8 < 10;\n        fn main() \"hello\".leadingDigit.i32;\n    "_fu, testdiffs);
    ZERO("\n        type Test = i32[];\n        fn yo(t: Test) t[0] + t[1];\n        fn main() yo([-1, +1]);\n    "_fu, testdiffs);
    ZERO("\n        fn if_first(a: $T[]) a && a[0];\n        fn hello(a: i32[]) a.if_first;\n        fn main() hello([ 3 ]) - 3;\n    "_fu, testdiffs);
    ZERO("\n        fn if_first(a: $T[]) a && a[0];\n        type X = i32[];\n        fn hello(a: X) a.if_first;\n        fn main() hello([ 3 ]) - 3;\n    "_fu, testdiffs);
    ZERO("\n        fn if_first(a: $T[]) a && a[0];\n\n        fn list(): i32[][] {\n            return [[ 3 ]];\n        }\n\n        fn hello() list.if_first.if_first;\n        fn main() hello - 3;\n    "_fu, testdiffs);
    ZERO("\n        fn if_first(a: $T[]) a && a[0];\n        type X = i32[];\n\n        fn list(): X[] {\n            return [[ 3 ]];\n        }\n\n        fn hello() list.if_first.if_first;\n        fn main() hello - 3;\n    "_fu, testdiffs);
    ZERO("\n        let arr = [1, 2];\n        fn eq(a: i32[], b: i32[]) a == b;\n        fn main() eq(arr, arr) ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        let arr = [1, 2];\n        fn eq(a: $T[], b: $T[]) a == b;\n        fn main() eq(arr, arr) ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        fn test(hey: [i32])\n            hey[0] + hey[1];\n\n        fn main()\n            test([-1, +1]);\n    "_fu, testdiffs);
    ZERO("\n        fn test(hey: &mut [i32])\n            hey[0] += hey[1];\n\n        fn main() {\n            mut hey = [-1, +1];\n            return hey.test();\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn test(i: i32) [ i, i + 1 ];\n        fn main() test(0)[1] - 1;\n    "_fu, testdiffs);
    ZERO("\n        fn test(hey: byte[])\n            hey.view(u32)[0];\n\n        fn main() {\n            mut hey: byte[] = [ byte(1), byte(1), byte(1), byte(1) ];\n            return (hey.test - 0x1010101).i32;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn test(hey: [i32])\n            hey[0] + hey[1];\n\n        fn main() {\n            let hey = [7, -1, +1];\n            return test(hey[1, 3]);\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn test(hey: &mut [i32])\n            hey[0] += hey[1];\n\n        fn main() {\n            mut hey = [7, -1, +1];\n            return hey[1, 3].test();\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn test(hey: &mut [i32])\n            hey.= [2, -3];\n\n        fn main() {\n            mut hey = [1, 0, 0];\n            test(hey[1, 3]);\n            return hey[0] + hey[1] + hey[2];\n        }\n    "_fu, testdiffs);
    ZERO("\n        struct Hey {\n            i: i32;\n        };\n\n        fn test(out: &mut [Hey]) {\n            out.view(u8) .= [ 1.u8, 1.u8, 1.u8, 1.u8 ];\n        }\n\n        fn main() {\n            mut a = [ Hey ];\n            a.test();\n            return a[0].i - 16843009;\n        }\n    "_fu, testdiffs);
    ZERO("\n        struct Hey {\n            i: i32;\n        };\n\n        fn test(x: &mut [i32], y: [ Hey ])\n            x .= y.view(i32);\n\n        fn main() {\n            mut a = [ 0 ];\n            test(a, [ Hey(13) ]);\n            return a[0] - 13;\n        }\n    "_fu, testdiffs);
    ZERO("\n        struct Hey {\n            i: i32;\n        };\n\n        fn main() {\n            mut a = [ 0 ];\n            a .= [ Hey(13) ].view(i32);\n            return a[0] - 13;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn test(a: [byte], b?: [byte]) a == b;\n        fn main() test(\"\") ? 0 : 1;\n    "_fu, testdiffs);
    ZERO("\n        struct Hey { i: i32; }\n\n        fn main() {\n            let a = 1;\n            let r: Hey = a && [ a ];\n            return r.i - 1;\n        }\n    "_fu, testdiffs);
    ZERO("\n        struct Hey { i: i32; }\n\n        fn main() {\n            let a: Hey[] = [ [ -1 ], [ +1 ] ];\n            return a[0].i + a[1].i;\n        }\n    "_fu, testdiffs);
    ZERO("\n        struct Hey { i: i32; }\n\n        fn test(): Hey {\n            return [ 0 ];\n        }\n\n        fn main() test.i;\n    "_fu, testdiffs);
    FAIL("\n        struct Test {\n        //*F\n            a: i32;\n        /*/\n            a?: i32;\n        //*/\n            b: i32;\n        };\n\n        return Test(b: 1).a;\n    "_fu, testdiffs);
    FAIL("\n        struct Test {\n            b: i32;\n        //*F\n            a: i32;\n        /*/\n            a?: i32;\n        //*/\n        };\n\n        return Test(1).a;\n    "_fu, testdiffs);
    ZERO("\n        struct Node {\n            items?: Node[]; //! TYPE_recursion TYPE_resolve\n            stuff?: Node[];\n        };\n\n        fn rec_copy(ref a: Node) {\n            // If implemented naively,\n            //  by the time you copy stuff it's no longer there.\n            a = a.items[0];\n        }\n\n        fn main() {\n            mut a = Node(items: [ Node(stuff: [ Node ]) ]);\n            rec_copy(a);\n            return a.stuff.len - 1;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn test(a: i32, b!: i32 = 1) a + b;\n        return test(-1);\n    "_fu, testdiffs);
    FAIL("\n        fn test(a: i32, b!: i32 = 1) a + b;\n        //*F\n        return test(-2, +2);\n        /*/\n        return test(-2, b: +2);\n        //*/\n    "_fu, testdiffs);
    FAIL("\n        struct Test { a: i32; b!: i32; };\n        fn test(t: Test) t.a + t.b;\n        //*F\n        return Test(-2, +2).test;\n        /*/\n        return Test(-2, b: +2).test;\n        //*/\n    "_fu, testdiffs);
    FAIL("\n        struct Test { a?: i32; b?!: i32; };\n        fn test(t: Test) t.a + t.b;\n        //*F\n        return Test(-2, +2).test;\n        /*/\n        return Test(b: +2).test - 2;\n        //*/\n    "_fu, testdiffs);
    ZERO("\n        let _precedence = 0;\n        fn parseExpression(p1 = _precedence, mode! = 0) p1 + mode;\n        fn main() parseExpression();\n    "_fu, testdiffs);
    ZERO_SAME(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "\n        fn A(x!: i32 = 0) x;\n        fn B(x: i32 = 0) A(:x);\n        fn main() A + B;\n    "_fu, "\n        fn A(x?!: i32) x;\n        fn B(x?: i32) A(:x);\n        fn main() A + B;\n    "_fu, "\n        fn A(x! = 0) x;\n        fn B(x = 0) A(:x);\n        fn main() A + B;\n    "_fu } }, testdiffs);
    FAIL("\n        fn a0o0() 0;\n        fn a1o0(a : i32) a;\n        fn a2o1(a : i32, b?: i32) a + b;\n        fn a2o2(a?: i32, b?: i32) a + b;\n        fn main() a0o0(a?: 1, b?: 2) *      1   //      .\n                + a1o0(a?: 1, b?: 2) *     10   //     10\n                + a2o1(a?: 1, b?: 2) *    100   //    300\n                + a2o2(a?: 1, b?: 2) *   1000   //   3000\n                + a2o1(a : 1, //*F\n                              c\n                              /*/\n                              b\n                              //*/\n                               ?: 2) *  10000   //  30000\n                + a2o1(a : 1)        * 100000   // 100000\n                                // ----------------------\n                                     - 133310;\n    "_fu, testdiffs);
    ZERO("\n        pub fn reveach(items: [$T], fn)\n            for (mut i = items.len; i --> 0; )\n                fn(items[i], i?: i);\n\n        pub fn main() {\n            mut sum = 0;\n            [1, 2, 3].reveach(|x   | sum += x          );\n            [1, 2, 3].reveach(|x, i| sum += x * i * 100);\n            return sum - 806;\n        }\n    "_fu, testdiffs);
    FAIL("\n        fn main() {\n            let ret: i8 =\n            //*F\n            128\n            /*/\n            127\n            //*/\n            ;\n\n            return (ret - 100).i32 - 27;\n        }\n    "_fu, testdiffs);
    FAIL("\n        fn main() {\n            let ret: i16 =\n            //*F\n            32768\n            /*/\n            32767\n            //*/\n            ;\n\n            return (ret - 32700).i32 - 67;\n        }\n    "_fu, testdiffs);
    FAIL("\n        fn main() {\n            let ret: i32 =\n            //*F\n            2147483648\n            /*/\n            2147483647\n            //*/\n            ;\n\n            return (ret - 2147483600).i32 - 47;\n        }\n    "_fu, testdiffs);
    FAIL("\n        fn main() {\n            let ret: i64 =\n            //*F\n            9223372036854775808\n            /*/\n            9223372036854775807\n            //*/\n            ;\n\n            return (ret - 9223372036854775800).i32 - 7;\n        }\n    "_fu, testdiffs);
    FAIL("\n        fn main() {\n            let ret: i8 =\n            //*F\n            -129\n            /*/\n            -128\n            //*/\n            ;\n\n            return (ret + 100).i32 + 28;\n        }\n    "_fu, testdiffs);
    FAIL("\n        fn main() {\n            let ret: i16 =\n            //*F\n            -32769\n            /*/\n            -32768\n            //*/\n            ;\n\n            return (ret + 32700).i32 + 68;\n        }\n    "_fu, testdiffs);
    FAIL("\n        fn main() {\n            let ret: i32 =\n            //*F\n            -2147483649\n            /*/\n            -2147483648\n            //*/\n            ;\n\n            return (ret + 2147483600).i32 + 48;\n        }\n    "_fu, testdiffs);
    FAIL("\n        fn main() {\n            let ret: i64 =\n            //*F\n            -9223372036854775809\n            /*/\n            -9223372036854775808\n            //*/\n            ;\n\n            return (ret + 9223372036854775800).i32 + 8;\n        }\n    "_fu, testdiffs);
    FAIL("\n        fn main() {\n            let ret: u8 =\n            //*F\n            256\n            /*/\n            255\n            //*/\n            ;\n\n            return (ret - 0xff).i32;\n        }\n    "_fu, testdiffs);
    FAIL("\n        fn main() {\n            let ret: u16 =\n            //*F\n            65536\n            /*/\n            65535\n            //*/\n            ;\n\n            return (ret - 0xffff).i32;\n        }\n    "_fu, testdiffs);
    FAIL("\n        fn main() {\n            let ret: u32 =\n            //*F\n            4294967296\n            /*/\n            4294967295\n            //*/\n            ;\n\n            return (ret - 0xffffffff).i32;\n        }\n    "_fu, testdiffs);
    FAIL("\n        fn main() {\n            let ret: u64 =\n            //*F\n            18446744073709551616\n            /*/\n            18446744073709551615\n            //*/\n            ;\n\n            return (ret - 0xffffffffffffffff).i32;\n        }\n    "_fu, testdiffs);
    ZERO("\n        pub fn set_once(ref entry, bit: i32): bool\n        {\n            let mask = 1 << bit.u64;    // cg'd into '1u << uint64_t(bit)'\n            if (entry & mask)           //  which doesnt work for some reason\n                return false;\n\n            entry |= mask;\n            return true;\n        }\n\n        fn main() {\n            mut entry: u64;\n            let a = set_once(entry, 32);\n            let b = set_once(entry, 32);\n            return a && !b ? 0 : 101;\n        }\n    "_fu, testdiffs);
    FAIL(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "\n        //*F\n        /*/\n        pub\n        //*/\n        fn hello() 3;\n    "_fu, "\n        import _0;\n        fn main() 6 - hello * 2;\n    "_fu } }, testdiffs);
    ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "\n        pub struct Hey { i: i32; };\n    "_fu, "\n        fn main() 1._0::Hey.i - 1;\n    "_fu } }, testdiffs);
    ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "\n        pub struct Hey { i: i32; };\n    "_fu, "\n        import _0;\n        pub inline fn test(h: Hey) h.i + 2;\n    "_fu, "\n        import _1;\n        fn main() 1._0::Hey.test - 3;\n    "_fu } }, testdiffs);
    ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "\n        pub struct Hey { i: i32; };\n    "_fu, "\n        pub inline fn test(h: _0::Hey) h.i + 2;\n    "_fu, "\n        import _1;\n        fn main() 1._0::Hey.test - 3;\n    "_fu } }, testdiffs);
    ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "\n        pub struct Hey { i: i32; };\n    "_fu, "\n        pub inline fn test(h: _0::Hey) h.i + 2;\n    "_fu, "\n        fn main() 1._0::Hey._1::test - 3;\n    "_fu } }, testdiffs);
    ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<4> { "\n        pub struct You { i: i32; };\n    "_fu, "\n        pub struct Hey { using you: _0::You; };\n        pub fn init3(): Hey = [ _0::You(3) ];\n    "_fu, "\n        pub inline fn test(using h = _1::init3) i + 7;\n    "_fu, "\n        fn main() _2::test - 10;\n    "_fu } }, testdiffs);
    ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<4> { "\n        pub struct vec3 {\n            x?: f32;\n            y?: f32;\n            z?: f32;\n        };\n    "_fu, "\n        import _0;\n\n        pub struct mat34 {\n            mx: vec3;\n            my: vec3;\n            mz: vec3;\n            mo: vec3;\n        };\n\n        pub inline fn mat34_identity()\n            mat34(\n                vec3(x: 1),\n                vec3(y: 1),\n                vec3(z: 1), vec3 /*point3*/);\n    "_fu, "\n        pub struct mat4 {\n            m0: f32; m1: f32; m2: f32; m3: f32;\n            m4: f32; m5: f32; m6: f32; m7: f32;\n            m8: f32; m9: f32; mA: f32; mB: f32;\n            mC: f32; mD: f32; mE: f32; mF: f32;\n        };\n\n        pub inline fn mat4(using m: _1::mat34)\n            mat4(\n                mx.x, mx.y, mx.z, 0,\n                my.x, my.y, my.z, 0,\n                mz.x, mz.y, mz.z, 0,\n                mo.x, mo.y, mo.z, 1);\n\n        pub fn determinant(using _: mat4)\n            + mC * m9 * m6 * m3 - m8 * mD * m6 * m3 - mC * m5 * mA * m3\n            + m4 * mD * mA * m3 + m8 * m5 * mE * m3 - m4 * m9 * mE * m3\n            - mC * m9 * m2 * m7 + m8 * mD * m2 * m7 + mC * m1 * mA * m7\n            - m0 * mD * mA * m7 - m8 * m1 * mE * m7 + m0 * m9 * mE * m7\n            + mC * m5 * m2 * mB - m4 * mD * m2 * mB - mC * m1 * m6 * mB\n            + m0 * mD * m6 * mB + m4 * m1 * mE * mB - m0 * m5 * mE * mB\n            - m8 * m5 * m2 * mF + m4 * m9 * m2 * mF + m8 * m1 * m6 * mF\n            - m0 * m9 * m6 * mF - m4 * m1 * mA * mF + m0 * m5 * mA * mF;\n    "_fu, "\n        pub fn main()\n        {\n            let m34 = _1::mat34_identity;\n            let m44 = _2::mat4(m34);\n\n            return m44.determinant.i32 - 1;\n        }\n    "_fu } }, testdiffs);
    ZERO("\n        import vec3;\n\n        fn main() vec3.maxc.i32;\n    "_fu, testdiffs);
    ZERO("\n        fn main() ::vec3.maxc.i32;\n    "_fu, testdiffs);
    ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "\n        pub fn _0(i: i32) i + 1;\n    "_fu, "\n        fn main() (-1).::_0;\n    "_fu } }, testdiffs);
    ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "\n        pub fn add(ref to: $T[], item: $T) {\n            for (mut i = 0; i < to.len; i++) {\n                if (to[i] >= item) {\n                    if (to[i] != item)\n                        to.insert(i, item);\n\n                    return;\n                }\n            }\n\n            to.push(item);\n        }\n    "_fu, "\n        fn main() {\n            mut x = [1, 2, 3];\n            x._0::add(3); if (x.len != 3) return 33;\n            x._0::add(4); return x.len - x[3];\n        }\n    "_fu } }, testdiffs);
    ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "\n        pub let pad0 = 0; pub let pad1 = 1; pub let pad2 = 2; pub let pad3 = 3; pub let pad4 = 4; pub let pad5 = 5; pub let pad6 = 6; pub let pad7 = 7; pub let pad8 = 8; pub let pad9 = 9;\n        pub let PAD0 = 0; pub let PAD1 = 1; pub let PAD2 = 2; pub let PAD3 = 3; pub let PAD4 = 4; pub let PAD5 = 5; pub let PAD6 = 6; pub let PAD7 = 7; pub let PAD8 = 8; pub let PAD9 = 9;\n\n        pub let A = \"hello\";\n        pub let B = \"world\";\n    "_fu, "\n        import _0;\n        fn test(i: i32) {\n            let v = i & 1 ? A : B;\n            return v.len;\n        }\n\n        fn main() 0.test - 1.test;\n    "_fu } }, testdiffs);
    ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "\n        pub fn clone(a: $T)\n        case ($T -> @copy) a;\n        case ($T -> $T) {\n            mut res: $T;\n            for (fieldname i: $T) res.i = a.i.clone();\n            return res;\n        }\n    "_fu, "\n        pub nocopy struct Scope { x: i32; };\n\n        pub struct ModuleOutputs {\n            deps: i32[];\n            scope: Scope;\n        };\n\n        pub fn test(a: ModuleOutputs) {\n            let b = a._0::clone();\n            return a.deps.len - b.deps.len;\n        }\n\n        pub fn main() test(ModuleOutputs);\n    "_fu } }, testdiffs);
    TODO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "\n        // a private fn\n        fn createShader(src: string) = src;\n\n        // inits a public let\n        pub let GEOMETRY_PASS_TEST = createShader(\"source code\");\n    "_fu, "\n        pub fn main() _0::GEOMETRY_PASS_TEST.len - 11;\n    "_fu } }, testdiffs);
    ZERO("\n        let a = 1;\n        shadow let a = a + 1;\n        return a - 2;\n    "_fu, testdiffs);
    ZERO("\n        inline fn outer() inner(); // <- this reset root-scope\n        inline fn inner() {\n            // <- so main::i was visible here\n            for (mut i = 0; i < 10; i++) return i;\n            return 1;\n        }\n        fn main() {\n            for (mut i = 0; i < 10; i++) return outer();\n            return 1;\n        }\n    "_fu, testdiffs);
    ZERO("\n        struct HasInt { i: i32; };\n\n        fn test(s: HasInt): &i32 {\n            let i = s.i;\n            return i;\n        }\n\n        fn main() HasInt(-1).test + 1;\n    "_fu, testdiffs);
    ZERO("\n        fn test(implicit x: i32): &i32 = x;\n        fn main() test(3) - 3;\n    "_fu, testdiffs);
    ZERO("\n        fn test(implicit x: i32): &i32 {\n            fn inner() x;\n            return inner;\n        }\n\n        fn main() test(3) - 3;\n    "_fu, testdiffs);
    ZERO("\n        struct I { v: i32; };\n\n        fn test(implicit x: I): &i32 {\n            fn inner() x.v;\n            return inner;\n        }\n\n        fn main() test(I(3)) - 3;\n    "_fu, testdiffs);
    ZERO("\n        struct I { v: i32[]; };\n\n        fn test(implicit x: I): &i32 {\n            fn inner() x.v[0];\n            return inner;\n        }\n\n        fn main() test(I([3])) - 3;\n    "_fu, testdiffs);
    ZERO("\n        struct I { v: i32[]; };\n\n        fn test(implicit x: I): &i32 {\n            fn inner() {\n                let v = x.v;\n                return v[0];\n            }\n\n            return inner;\n        }\n\n        fn main() test(I([3])) - 3;\n    "_fu, testdiffs);
    ZERO("\n        fn noReturn() throw (\"ex\");\n\n        fn doesReturn(a: i32) {\n            if (a > 0) return noReturn();\n            return a;\n        }\n\n        fn main() doesReturn(-3) + 3;\n    "_fu, testdiffs);
    ZERO("\n        struct Context { modules: Module[]; };\n        struct Module  { fname: i32; };\n\n        fn test(implicit ctx: Context) {\n            fn findModule(fname: i32): &Module {\n                let modules = ctx.modules;\n                for (mut i = 0; i < modules.len; i++) {\n                    let module = modules[i];\n                    if (module.fname == fname)\n                        return module;\n                }\n\n                throw(\"Cannot locate: \" ~ fname);\n            }\n\n            return findModule(0);\n        }\n\n        fn main() {\n            let implicit ctx = Context([ Module ]);\n            return test.fname;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn noReturn() throw (\"ex\");\n\n        fn returnVoid(a: i32): void {\n            if (a > 0) return noReturn();\n        }\n\n        fn main() {\n            returnVoid(0);\n            return 0;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn parseQualifierChain(mut i: i32): i32 {\n            for (;;) {\n                if !(i & 15) return i;\n                i--;\n            }\n        }\n\n        fn main() parseQualifierChain(15);\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_resolve\n        fn main()\n        {\n            mut sum = 0;\n            fn compile(x: i32)\n            {\n                // 1. this throw contributed a 'never' ret_count.\n                x || throw (\"x=0\");\n                if (x & 1) compile(x + 1); // 2. then this recursion did something.\n                sum += x; // <- also this must be a closure.\n                // 3. finally no ret_actual but non-zero ret_count.\n            }\n\n            compile(2);\n            return sum - 2;\n        }\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_resolve\n        fn main()\n        {\n            mut sum = 0;\n            fn getModule(fname: string) fname.len;\n            fn compile(fname: string, via: string = \"\")\n            {\n                let module = getModule(fname) || throw (\"import circle: '\" ~ via ~ fname ~ \"'.\");\n                if (module & 1) {\n                    let fuzimports = fname.split(\"a\");\n                    for (mut i = 0; i < fuzimports.len; i++)\n                        compile(\n                            fname: fuzimports[i],\n                              via: fname ~ \" <- \" ~ via);\n                }\n\n                sum += module;\n            }\n\n            compile(\"ab\");\n            return sum - 2;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn if0_ret101(x: i32) {\n            if      (x > 2) return x * 2;\n            else if (x > 1) return x + 1; // <- left branch seeded right with never\n            return x + 101;\n        }\n\n        fn main() 0.if0_ret101 - 101;\n    "_fu, testdiffs);
    FAIL("\n        fn hello(x: i32) {\n            if (x & 1)\n                return x * 2;\n            //*F\n            x; //ERR return\n            /*/\n            return x;\n            //*/\n        }\n\n        fn main() 0.hello;\n    "_fu, testdiffs);
    ZERO("\n        struct X { i: i32; };\n\n        fn         ++(using x: &mut X) ++i;\n        postfix fn ++(using x: &mut X) i++;\n\n        fn main() {\n            mut x: X;\n            let a = x++;\n            let b = ++x;\n            return a || b - 2;\n        }\n    "_fu, testdiffs);
    FAIL("\n        //\n        // The -1.abs problem.\n        //\n        // Ruby lexes the minus into the numeric literal.\n        //  This is kinda inconsistent, altough it does make sense.\n        //\n        // Rust & all c-likes lex to -abs(1).\n        //  Rust linters warn about this.\n        //\n        // One thing we can do is change the precedence of some unaries\n        //  to above method call - others, like ! benefit from usual precedence.\n        //   In my experience, the unary * op in c/cpp always disappoints re: precedence,\n        //    but the & op usually works the way you want it to.\n        //     So introducing more precedence rules is a really questionable idea.\n        //\n        // We'll go the rust way for starters,\n        //  this will be a compile time error for now.\n        //\n        fn test()\n        //*F\n            -1.0\n        /*/\n            (-1.0)\n        //*/\n                .abs;\n\n        fn main() test ? 0 : 7;\n    "_fu, testdiffs);
    ZERO("\n        fn test(s: $T) {\n            mut sum = 0;\n            for (fieldname i: $T) sum += s.i;\n            return sum;\n        }\n\n        struct XY { x: i32; y: i32; };\n\n        fn main() {\n            let thing = XY(1, 2);\n            let sum = test(thing);\n            return sum - 3;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn test() [] -> i32;\n        fn main() test;\n    "_fu, testdiffs);
    ZERO("\n        fn main() {\n            mut a = 1;\n            mut b = 0;\n            {\n                defer a++;\n                b = a;\n            }\n            return (b+1) - a;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn main() {\n            mut a = 1;\n            mut b = 0;\n            mut c = 0;\n            {\n                defer a++;\n                defer c = a;\n                b = a;\n            }\n            return (b*27) - (a*11 + c*5);\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn test_defer_if_errok(throw_err: bool) {\n            mut x      = 1;\n            mut if_err = 0;\n            mut if_ok  = 0;\n            try {\n                defer x++;\n                defer:err if_err += x;\n                defer:ok  if_ok  += x;\n\n                if (throw_err)\n                    throw(\"len=5\");\n\n                x += 8; // 9 defer++ = 10\n            }\n            catch (e) {\n                x += e.len; // 6 defer++ = 7\n            }\n\n            return x * 3 + if_err * 5 + if_ok * 7;\n        }\n\n        fn main()   (test_defer_if_errok(true)  - 7 *3 - 1*5 - 0*7)\n            + 100 * (test_defer_if_errok(false) - 10*3 - 0*5 - 9*7);\n    "_fu, testdiffs);
    ZERO("\n        type Test = i8;\n        fn main() 256.Test.i32;\n    "_fu, testdiffs);
    FAIL("\n        fn test(a: $A, b: $B) b + //*F\n            a;\n            /*/\n            $B(a);\n            //*/\n        fn main() i8(-1).test(+1);\n    "_fu, testdiffs);
    ZERO("\n        let x = { mut z = 0; z++; z };\n        return x - 1;\n    "_fu, testdiffs);
    ZERO("\n        fn mul2(a) a*2;\n        fn test(b, fn) fn(1 + fn(b));\n        fn main() 14 - test(3, fn mul2);\n    "_fu, testdiffs);
    ZERO("\n        fn map(items: $T[], fn) {\n            mut result: fn(items[0])[];\n            for (mut i = 0; i < items.len; i++)\n                result.push(fn(items[i]));\n\n            return result;\n        }\n\n        fn sqr(x) x*x;\n\n        fn main() [2].map(fn sqr)[0] - 4;\n    "_fu, testdiffs);
    ZERO("\n        fn reduce(items: $T[], fn, init?: $T) {\n            mut result = init;\n            for (mut i = 0; i < items.len; i++)\n                result = fn(result, items[i]);\n\n            return result;\n        }\n\n        fn main() [1, 2].reduce(|a, b| a + b) - 3;\n    "_fu, testdiffs);
    ZERO("\n        fn each(items: $T[], fn) {\n            for (mut i = 0; i < items.len; i++) // <- one i\n                fn(items[i]);\n        }\n\n        fn main() {\n            mut i = 0;                  // <- another i, i got them to shadow each other\n            [1, 2].each(|x| i += x);    //      in the everything-a-free-function\n            return i - 3;               //      impl of closures\n        }\n    "_fu, testdiffs);
    ZERO("\n        mut sum = 2;\n\n        fn FnDecl_update(parent_idx: i32) {\n            fn each(fn) fn();\n            each(|| makeDirty(:parent_idx));\n        }\n\n        fn makeDirty(parent_idx: i32): void {\n            sum += parent_idx;\n        }\n\n        FnDecl_update(1);\n\n        return sum - 3;\n    "_fu, testdiffs);
    ZERO("\n        struct A { a: i32; };\n        struct B { b: i32; };\n\n        using fn bananas(a: A) B(a.a * 2);\n\n        fn main() 1.A.b - 2;\n    "_fu, testdiffs);
    ZERO("\n        fn fn_v(fn, v) fn(v);\n        struct XY { x: i32; y: i32; };  // fields weren't visible to addroffns\n        fn main() {\n            let v = XY(11, 13);\n            return fn_v(.x, v) + fn_v(.y, v) - 24;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn fn_v(x, v) x(v);             // same but name conflict - x arg and .x field\n        struct XY { x: i32; y: i32; };\n        fn main() {\n            let v = XY(11, 13);\n            return fn_v(.x, v) + fn_v(.y, v) - 24;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn fn_w(x, y) x(y);             // same thing but\n        fn fn_v(y, x) fn_w(fn y, x);    // extra nasty\n        struct XY { x: i32; y: i32; };\n        fn main() {\n            let v = XY(11, 13);\n            return fn_v(.x, v) + fn_v(.y, v) - 24;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn identity(x) x;\n        fn main() {\n            fn outer(depth1) {\n                let sum = depth1; return identity(|| sum);\n            }\n            let sum = 0; return outer(sum);\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn identity(x) x;\n        fn test(depth0) {\n            fn outer(depth1) {\n                let sum = depth1; inline fn lambda1() sum; return identity(fn lambda1);\n            }\n            let sum = depth0; inline fn lambda0() sum; return outer(fn lambda0);\n        }\n        fn main() test(0);\n    "_fu, testdiffs);
    ZERO("\n        fn test(depth0) {\n            fn identity(x) x;\n            fn outer(depth1) {\n                fn inner(depth2) {\n                    let sum = depth2; inline fn lambda2() sum; return identity(fn lambda2);\n                }\n                let sum = depth1; inline fn lambda1() sum; return inner(fn lambda1);\n            }\n            let sum = depth0; inline fn lambda0() sum; return outer(fn lambda0);\n        }\n        fn main() test(0);\n    "_fu, testdiffs);
    ZERO("\n        fn test(depth0)\n        {\n            fn first(depth1) {\n                fn first_inner(depth2) {\n                    let sum = depth0 + depth1 + depth2;\n                    return sum;\n                }\n\n                let sum = depth0 + depth1;\n                return first_inner(|| sum);\n            }\n\n            fn second(depth1) {\n                fn second_inner(depth2) {\n                    let sum = depth0 + depth1 + depth2;\n                    return sum + first(|| sum);\n                }\n\n                let sum = depth0 + depth1;\n                return second_inner(|| sum);\n            }\n\n            let sum = depth0 + depth0;\n            return second(|| sum);\n        }\n\n        fn main() test(0);\n    "_fu, testdiffs);
    ZERO("\n        //! FN_recursion FN_reopen\n        //! DEAD_code DEAD_call\n        fn use_a(implicit a: i32) a * a;\n        fn use_b(implicit b: i32) b * b;\n        fn use_c(implicit c: i32) c * c;\n\n        fn parseStuff(x: i32) {\n            fn doStuff(y: i32) doSomething(y * y);\n            return doStuff(x * x);\n        }\n\n        fn doSomething(x: i32) {\n            fn doSomething_inner(y: i32) y * use_a * descend(y * y);\n            return doSomething_inner(x * x);\n        }\n\n        fn descend(x: i32) { // <- x here\n            fn descend_inner(y: i32)\n                y & 1 ? parseStuff(y / 2) * parseStuff(x) // x not defined here?\n                      : doSomethingElse(y * y) * use_c;\n\n            return descend_inner(x * x);\n        }\n\n        fn doSomethingElse(x: i32) {\n            fn doSomethingElse_inner(y: i32) y * use_b;\n            return doSomethingElse_inner(x * x);\n        }\n\n        fn main() {\n            let implicit a = 0;\n            let implicit b = 0;\n            let implicit c = 0;\n            return parseStuff(0);\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn sA(t: $T) struct { hey: $T; };\n\n        fn fA(a: $T): sA($T) = [ a + 2 ];\n        fn main() 1.fA.hey - 3;\n    "_fu, testdiffs);
    FAIL("\n        fn sB(t: $T) struct { hey: $T; };\n\n        fn fB(a: $T): sB($T) = [ a + 2 ];\n        fn main() 1.fB.hey - 1.u32.fB.hey //*F\n            ; /*/ .i32; //*/\n    "_fu, testdiffs);
    TODO("\n        fn sB(t: $T) struct { hey: $T; };\n\n        // Pattern & partial spec, how?\n        fn test(x: sB($T)): $T =\n            x.hey - 1;\n\n        type a = sB(i32);\n        fn main() a(1).test;\n    "_fu, testdiffs);
    ZERO("\n        fn test(x: i32) {\n            outer: {\n                inner: {\n                    if (x > 1) break: outer;\n                    if (x > 0) break: inner;\n                    return 2;\n                }\n                return 1;\n            }\n            return 0;\n        }\n\n        fn main() 2.test * 11 + (1.test - 1) * 13 + (0.test - 2) * 17;\n    "_fu, testdiffs);
    ZERO("\n        fn test(x: i32) {\n            return {\n                BLOCK: {\n                    if (x & 1) break :BLOCK 1;\n                    if (x & 2) return 2;\n                    3\n                }\n            };\n        }\n\n        fn main() 4.test - 5.test - 6.test; // 3-1-2\n    "_fu, testdiffs);
    ZERO("\n        fn test(a: i32) {\n            mut w = 3;\n            OUTER: w += {\n                INNER: {\n                    if (a & 1)  break: INNER;\n                    else        break: OUTER;\n                };\n                5\n            };\n            return w;\n        }\n        fn main() 0.test + 1.test - 11;\n    "_fu, testdiffs);
    ZERO("\n        fn v(x: i32) {\n            return {\n                BLOCK:                          5000 + { // *2:\n                    if (x == 9) continue :BLOCK 2000;    //   - here\n                    if (x == 8) return           300;\n                    if (x == 7) break :BLOCK      40;\n                    else                           5;    //   - and here!\n                };\n            }; // -----------------------------------\n        }\n        fn main() 9.v + 8.v + 7.v + 6.v      - 12345;\n    "_fu, testdiffs);
    ZERO("\n        fn each(arr, fn)\n            for (mut i = 0; i < arr.len; i++)\n                fn(arr[i]);\n\n        fn some(arr, fn) {\n            arr.each(|x| { if (fn(x)) return x; });\n            return 0;\n        }\n\n        fn main() [ 1, 2, 3 ].some(|v| v & 1 == 0) - 2;\n    "_fu, testdiffs);
    TODO("\n        fn outer() {\n            mut sum = 0;\n\n            fn inner(v: i32) {\n                for (mut i = 0; i < 10; i++) {\n                    sum += v;\n                    if (sum > 40)\n                        return :outer sum;\n                }\n\n                return v * 2;\n            }\n\n            mut x = 1;\n            for (;;) x = inner(x);\n        }\n\n        fn main() outer - 42; // extra points for style\n    "_fu, testdiffs);
    ZERO("\n        inline fn each(arr, fn)\n            for (mut i = 0; i < arr.len; i++)\n                fn(arr[i]);\n\n        fn main() {\n            mut sum = 0;\n            OUTER: [1, 2, 3, 4].each(|x| {\n                sum += x;\n                for (mut i = 1; i--; ) // once\n                    if (sum == 6) break :OUTER;\n            });\n            return sum - 6;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn loop1d(i0, i1, fn)\n            for (mut i = i0; i < i1; i++)\n                fn(i);\n\n        fn main() {\n            mut x = 0;\n            loop1d(0, 10, |i| { if (x += i) break; });\n            return x - 1;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn loop1d(i0, i1, fn)\n            for (mut i = i0; i < i1; i++)\n                fn(i);\n\n        fn main() {\n            mut x = 0;\n            loop1d(0, 10, |i| { if (x += i) return x - 1; });\n            return 101;\n        }\n    "_fu, testdiffs);
    ZERO("\n        fn loop2d(x0, x1, y0, y1, fn) {\n            for (mut y = y0; y < y1; y++)\n            for (mut x = x0; x < x1; x++) fn(x, y);\n        }\n\n        fn main() {\n            mut sum = 0;\n            loop2d( x0:  0, x1: 10,\n                    y0: 10, y1: 12, |x, y|\n            {\n                if (y < 11) {\n                    sum++;          // for (x: 0, 10) so 10 times\n                    continue;       // <- inner loop\n                }\n\n                if (x == 1) break;  // <- outer loop\n                sum += (x + 1) * y; // once: (0+1)*(y=11)\n            });\n\n            return sum - 21;\n        }\n    "_fu, testdiffs);
    ZERO("\n        inline fn loop1d(i0, i1, fn)\n            for (mut i = i0; i < i1; i++)\n                fn(i);\n\n        fn loop2d(x0, x1, y0, y1, fn)\n            loop1d(y0, y1, |y|\n                loop1d(x0, x1, |x|\n                    fn (x, y)));\n\n        fn main() {\n            mut sum = 0;\n            loop2d( x0:  0, x1: 10,\n                    y0: 10, y1: 12, |x, y|\n            {\n                if (y < 11) {\n                    sum++;          // for (x: 0, 10) so 10 times\n                    continue;       // <- inner loop\n                }\n\n                if (x == 1) break;  // <- outer loop\n                sum += (x + 1) * y; // once: (0+1)*(y=11)\n            });\n\n            return sum - 21;\n        }\n    "_fu, testdiffs);
    fu::file_write(TESTDIFFS_FILE, serialize(testdiffs));
}

#endif
