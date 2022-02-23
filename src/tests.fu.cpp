
#include <fu/defer.h>
#include <fu/init_priority.h>
#include <fu/int.h>
#include <fu/io.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/view.h>

struct s_Argument;
struct s_BitSet;
struct s_CodegenOutput;
struct s_Context;
struct s_Extended;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Lint;
struct s_Map_EmVtl5Qe;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStat;
struct s_ModuleStats;
struct s_Node;
struct s_Options;
struct s_Overload;
struct s_ParserOutput;
struct s_RWRanges;
struct s_Region;
struct s_Scope;
struct s_ScopeItem;
struct s_ScopeMemo;
struct s_ScopeSkip;
struct s_ScopeSkipMemos;
struct s_SolvedNode;
struct s_SolvedNodeData;
struct s_SolverOutput;
struct s_Struct;
struct s_Target;
struct s_Template;
struct s_TestDiffs;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;

fu_STR serialize_0fZoGkc4(const s_TestDiffs&);
fu_STR snippet2cpp_0X4li7Vn(const fu_STR&);
s_Context ZERO_0ErTzBWG(fu_VEC<fu_STR>&&, const s_Options&, s_TestDiffs&);
s_Context ZERO_0X4li7Vn(const fu_STR&, s_TestDiffs&);
void TODO_0X4li7Vn(const fu_STR&, s_TestDiffs&);
void TODO_YxitWGqo(const fu_VEC<fu_STR>&, s_TestDiffs&);
void ZERO_SAME_Ys7VTVTn(fu::view<fu_STR>, s_TestDiffs&);

                                #ifndef DEF_s_TestDiffs
                                #define DEF_s_TestDiffs
struct s_TestDiffs
{
    fu_VEC<fu_STR> keys;
    fu_VEC<fu_STR> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
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
        ;
    }
};
                                #endif

                                #ifndef DEF_s_LexerOutput
                                #define DEF_s_LexerOutput
struct s_LexerOutput
{
    fu_VEC<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
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
    fu_VEC<fu_STR> warnings;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || fuzimports
            || warnings
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
    unsigned packed;
    explicit operator bool() const noexcept
    {
        return false
            || id
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
    int flat_cnt;
    bool all_triv;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || target
            || items
            || imports
            || converts
            || flat_cnt
            || all_triv
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    int signedidx;
    explicit operator bool() const noexcept
    {
        return false
            || signedidx
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    int quals;
    fu_STR canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
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

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    s_ValueType vtype;
    s_Lifetime lifetime;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
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
    unsigned status;
    s_SolvedNode solved;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BitSet
                                #define DEF_s_BitSet
struct s_BitSet
{
    fu_VEC<fu::u8> _data;
    explicit operator bool() const noexcept
    {
        return false
            || _data
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu_STR name;
    fu_STR autocall;
    s_Type type;
    s_SolvedNode dEfault;
    int flags;
    int local;
    s_BitSet risk_free;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || local
            || risk_free
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeMemo
                                #define DEF_s_ScopeMemo
struct s_ScopeMemo
{
    int items_len;
    int implicits_len;
    int imports_len;
    int privates_len;
    int usings_len;
    int converts_len;
    int helpers_len;
    explicit operator bool() const noexcept
    {
        return false
            || items_len
            || implicits_len
            || imports_len
            || privates_len
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
    fu_VEC<s_ScopeSkip> implicits;
    fu_VEC<s_ScopeSkip> imports;
    fu_VEC<s_ScopeSkip> privates;
    fu_VEC<s_ScopeSkip> usings;
    fu_VEC<s_ScopeSkip> converts;
    fu_VEC<s_ScopeSkip> helpers;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || implicits
            || imports
            || privates
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
        ;
    }
};
                                #endif

                                #ifndef DEF_s_RWRanges
                                #define DEF_s_RWRanges
struct s_RWRanges
{
    int reads0;
    int reads1;
    int writes0;
    int writes1;
    explicit operator bool() const noexcept
    {
        return false
            || reads0
            || reads1
            || writes0
            || writes1
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNodeData
                                #define DEF_s_SolvedNodeData
struct s_SolvedNodeData
{
    fu_STR kind;
    int helpers;
    int flags;
    fu_STR value;
    fu_VEC<s_SolvedNode> items;
    s_TokenIdx token;
    s_Type type;
    s_Target target;
    s_RWRanges rwr;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Extended
                                #define DEF_s_Extended
struct s_Extended
{
    int local_of;
    int revision;
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Target spec_of;
    s_Template tEmplate;
    fu_VEC<s_SolvedNodeData> nodes;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_ScopeItem> extra_items;
    fu_VEC<int> callers;
    explicit operator bool() const noexcept
    {
        return false
            || local_of
            || revision
            || min
            || max
            || args
            || spec_of
            || tEmplate
            || nodes
            || locals
            || extra_items
            || callers
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Scope
                                #define DEF_s_Scope
struct s_Scope
{
    fu_VEC<s_Overload> overloads;
    fu_VEC<s_Extended> extended;
    fu_VEC<s_ScopeItem> items;
    fu_VEC<s_ScopeItem> implicits;
    fu_VEC<int> imports;
    fu_VEC<int> privates;
    fu_VEC<s_Target> usings;
    fu_VEC<s_Target> converts;
    int pub_items;
    int pub_cnvrts;
    s_Scope(const s_Scope&) = delete;
    s_Scope(s_Scope&&) = default;
    s_Scope& operator=(const s_Scope&) = delete;
    s_Scope& operator=(s_Scope&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || overloads
            || extended
            || items
            || implicits
            || imports
            || privates
            || usings
            || converts
            || pub_items
            || pub_cnvrts
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

                                #ifndef DEF_s_CodegenOutput
                                #define DEF_s_CodegenOutput
struct s_CodegenOutput
{
    fu_STR src;
    explicit operator bool() const noexcept
    {
        return false
            || src
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
    s_SolverOutput solve;
    s_CodegenOutput cpp;
    int init_prio;
    s_ModuleOutputs(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs(s_ModuleOutputs&&) = default;
    s_ModuleOutputs& operator=(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs& operator=(s_ModuleOutputs&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || deps
            || types
            || solve
            || cpp
            || init_prio
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

                                #ifndef DEF_s_Map_EmVtl5Qe
                                #define DEF_s_Map_EmVtl5Qe
struct s_Map_EmVtl5Qe
{
    fu_VEC<fu_STR> keys;
    fu_VEC<fu_STR> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu_VEC<s_Module> modules;
    s_Map_EmVtl5Qe files;
    s_Map_EmVtl5Qe fuzzy;
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

                                #ifndef DEF_s_Lint
                                #define DEF_s_Lint
struct s_Lint
{
    int maxwarn;
    explicit operator bool() const noexcept
    {
        return false
            || maxwarn
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Options
                                #define DEF_s_Options
struct s_Options
{
    s_Lint lint;
    int break_notes;
    unsigned dev;
    explicit operator bool() const noexcept
    {
        return false
            || lint
            || break_notes
            || dev
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const fu_STR TEST_SRC fu_INIT_PRIORITY(1007) = "\n    fn test(one: i32) {\n        let zero = one - 1;\n        let two  = one * 2;\n\n        fn inner(i: i32): i32\n            i > zero ? outer(i - one) : zero;\n\n        fn outer(i: i32): i32\n            two * inner(i);\n\n        return outer(one) + (two - one) * 17;\n    }\n\n    fn main(): i32 {\n        return test(1) - 17;\n    }\n"_fu;

int self_test_n07RecyR()
{
    fu_STR cpp = snippet2cpp_0X4li7Vn(TEST_SRC);
    return (fu::lfind(cpp, "int main()"_fu) ? 0 : 101);
}

                                #ifndef DEF_PRJDIR
                                #define DEF_PRJDIR
extern const fu_STR PRJDIR;
                                #endif

                                #ifndef DEFt_replace_2qp5gcGE
                                #define DEFt_replace_2qp5gcGE
inline fu_STR replace_2qp5gcGE(const fu_STR& str, fu::view<char> all, fu::view<char> with)
{
    /*MOV*/ fu_STR result {};

    {
        int last = 0;
        int next = 0;
        const int N = all.size();
        if (N)
        {
            while (((next = fu::lfind(str, all, last)) >= 0))
            {

                {
                    fu_STR substr = fu::slice(str, last, next);
                    const bool first = !last;
                    const bool last_1 = false;
                    if (!first)
                        result += with;
                    else if (last_1)
                        return fu_STR(str);

                    result += substr;
                };
                last = (next + N);
            };
        };
        if (last)
        {
            fu_STR substr = fu::slice(str, last);
            const bool first = false;
            const bool last_1 = true;
            if (!first)
                result += with;
            else if (last_1)
                return fu_STR(str);

            result += substr;
        }
        else
        {
            const bool first = true;
            const bool last_1 = true;
            if (!first)
                result += with;
            else if (last_1)
                return fu_STR(str);

            result += str;
        };
    };
    return /*NRVO*/ result;
}
                                #endif

static fu_STR EXPR_1cEbCgwY(fu::view<char> varname, const fu_STR& assertion)
{
    return replace_2qp5gcGE(assertion, "@"_fu, varname);
}

static void ARROPS_dWJteHej(fu::view<char> literal, fu::view<char> operation, fu_STR&& assertion, s_TestDiffs& testdiffs)
{
    assertion = (("("_fu + assertion) + ")"_fu);
    fu_STR src {};
    src += "\n"_fu;
    src += "\n    {"_fu;
    src += (("\n        mut arr0 = ["_fu + literal) + "];"_fu);
    src += (("\n        arr0."_fu + operation) + ";"_fu);
    src += (("\n        if ("_fu + EXPR_1cEbCgwY("arr0"_fu, assertion)) + " != 0) return 13;"_fu);
    src += "\n    }"_fu;
    src += "\n"_fu;
    src += (("\n    mut orig = ["_fu + literal) + "];"_fu);
    src += "\n"_fu;
    src += "\n    {"_fu;
    src += "\n        mut arr1 = orig;"_fu;
    src += (("\n        arr1."_fu + operation) + ";"_fu);
    src += (("\n        if ("_fu + EXPR_1cEbCgwY("arr1"_fu, assertion)) + " != 0) return 17;"_fu);
    src += "\n    }"_fu;
    src += "\n"_fu;
    src += "\n    {"_fu;
    src += "\n        ref arr2 = orig;"_fu;
    src += "\n        if (arr2.len != 5) return 38;"_fu;
    src += (("\n        arr2."_fu + operation) + ";"_fu);
    src += (("\n        if ("_fu + EXPR_1cEbCgwY("arr2"_fu, assertion)) + " != 0) return 23;"_fu);
    src += "\n    }"_fu;
    src += "\n"_fu;
    src += "\n    return 0;"_fu;
    src += "\n"_fu;
    ZERO_0X4li7Vn(src, testdiffs);
}

void runTests_n07RecyR()
{
    fu_STR TESTDIFFS_FILE = (PRJDIR + "testdiff/now.td"_fu);
    s_TestDiffs testdiffs = s_TestDiffs{};
    fu_DEFER_IF_OK(fu::file_write(TESTDIFFS_FILE, serialize_0fZoGkc4(testdiffs)));
    ZERO_0X4li7Vn("\n        <fail return>\n        fn main(): i32 {}               <pass/>\n        fn main(): i32 { return 0; }    </fail>\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail return>\n        fn test(): i32 {}               <pass/>\n        fn test(): i32 { return 0; }    </fail>\n        fn main() test();\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        return 1 - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn sum(a: i32, b: i32): i32\n            a + b;\n\n        return sum(1, -1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn sum(a: i32, b: i32)\n            a + b;\n\n        return sum(1, -1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn sign(a: i32)\n            a > 0 ? 1 : a < 0 ? -1 : 0;\n\n        return sign(7) + sign(-3) + sign(0);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn sign(a: i32) {\n            if (a > 0)\n                return 1;\n\n            return -2;\n        }\n\n        return sign(10) * 2 + sign(-5);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn sign(a: i32) {\n            if (a > 0)\n                return 1;\n            else\n                return -2;\n        }\n\n        return sign(10) * 2 + sign(-5);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let  i = -1;\n            let sb = i.i8;\n            let  b = i.u8;\n\n            return sb == -1 && b == 255 ? 0 : 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let sb = (-1).i8;\n            let  i =  sb.i32;\n            let  u =  sb.u32;\n\n            return i == -1 && u.i32 == 255 ? 0 : 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let b = byte(200);\n            let i = b.i32;\n            return i == 200 ? 0 : 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let a = 3;\n        mut b = a;\n        b++;\n        return b - (a + 1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut sum = 0;\n        for (mut i = 0; i < 10; i++)\n            sum++;\n\n        return sum * 2 - 20;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut sum = 0;\n        for (mut i = 10; i --> 0; )\n            sum--;\n\n        return sum * 2 + 20;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn decr(num: &mut i32)\n            num--;\n\n        mut res = 0;\n        decr(res);\n        return res + 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn decr(ref num: i32)\n            num--;\n\n        mut res = 0;\n        decr(res);\n        return res + 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut res = 0;\n        fn decr()\n            res--;\n\n        decr();\n        return res + 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut res = 0;\n        fn decr(num: &mut i32) { num--; } // ret void\n\n        decr(res);\n        return res + 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut sum = 0;\n        while (sum < 15)\n            sum++;\n\n        return sum - 15;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail ++>\n        let sum = 0;        <pass/>\n        mut sum = 0;        </fail>\n        while (sum < 15)\n            sum++;\n\n        return sum - 15;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut sum = 0;\n        while (sum < 15)\n            sum += 2;\n\n        return sum - 16;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut i = 5;\n        mut sum = 0;\n        while (let x = i--) sum += x - i;\n        return sum - 5;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn named(a: i32, b: i32)\n            a - b * 2;\n\n        return named(b: 3, 6);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn named(a: i32, b: i32)\n            a - b * 2;\n\n        fn other(a: i32, b: i32)\n            named(:b, :a);\n\n        return other(b: 3, 6);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn ret_only_arg(a) a;\n        <split/>\n        fn main() 0.ret_only_arg;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(r: Range)\n            r.max - r.min;\n\n        return size(Range(14, 21)) - 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        mut r = Range(1, 2);\n        r.min++;\n        return r.max - r.min;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        <fail ++>\n        let r =             <pass/>\n        mut r =             </fail>\n            Range(1, 2);\n\n        r.min++;\n        return r.max - r.min;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Range {\n            r_min: i32;\n            r_max: i32;\n        }\n\n        fn size(using r: Range)\n            r_max - r_min;\n\n        return size(Range(14, 21)) - 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct X {\n            a: i32;\n        }\n\n        fn test(using x: X, b: i32) a + b;\n        fn hey(using x: X) test(-1);\n\n        return X(1).hey;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Pos {\n            x: i32;\n        }\n\n        struct Player {\n            using pos: Pos;\n        }\n\n        fn dist(using p: Player, other: Player)\n            x - other.x;\n\n        let a = Player(Pos(10));\n        let b = Player(Pos( 4));\n\n        return dist(a, b) - 6;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct A { x: i32; y: i32; };\n        struct B { x: i32; z: i32; };\n        fn test(using a: A, using b: B)\n            <fail ambig>\n            x + z; <pass/>\n            y + z; </fail>\n\n        fn main() test(A(1, 1), B(-1, -1));\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct CurrentFn {\n            parent_idx: i32;\n            using RoR?: CurrentFn_ResetOnResolve; // not yet populated\n        };\n\n        struct CurrentFn_ResetOnResolve {\n            ret_count: i32;\n        };\n\n        fn test(f: CurrentFn) f.parent_idx - f.ret_count;\n        fn main() test(CurrentFn(1, CurrentFn_ResetOnResolve(1)));\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct HasPredicate {\n            true kind   : string;\n            items       : i32;\n        };\n\n        fn main() {\n            let isTrue  = HasPredicate(\"let\", 0);\n            let isFalse = HasPredicate(\"\",    1);\n            return isTrue && !isFalse ? 0 : 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let x = 3;\n        return x / 2 - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn hey(a) a * a;\n        fn main = 0.hey;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn div3by(a: $T) 3 / a;\n        return div3by(2) - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn div3by(a) 3 / a;\n        return div3by(2) - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn add3(a: i32, b = 3) a + b;\n        fn main() add3(-3);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn add3(a: $T, b = 3) a + b;\n        struct v1 { x: i32; };\n        fn +(a: v1, b: i32) v1(a.x + b);\n        fn main() add3(2.v1).x - 5;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn mul_ab_init(a: $T, b = 0) a*b;\n        fn main() mul_ab_init(1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn mul_ab_annot_init(a: $T, b: $T = 0) a*b;\n        fn main() mul_ab_annot_init(1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn mul_ab_opt(a: $T, b?: $T) a*b;\n        fn main() mul_ab_opt(1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn ab(a, b) a + b*2;\n        fn main() ab(b: 1, a: -2);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct yi32 { y: i32; };\n        fn add_s_vy(v, s) s + v.y;\n        fn main() add_s_vy(v: yi32(1), -1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct xi32 { x: i32; };\n        fn add_s_vx(s, v) s + v.x; // <- args reordered\n        fn main() add_s_vx(v: xi32(1), -1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn ab(a, b = 0, c = 0) a + b*2 + c*3;\n        fn main() ab(3, c: -1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn ab(a, b = -1) a + b*2;\n        fn main() ab(3.0, -1.5).i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let NEG_ONE_FIVE = -1.5;\n        fn ab(a: $T, b: $T = -1) a + b*2;\n        fn main() ab(3, NEG_ONE_FIVE).i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let TWO = 2.0;\n        fn ab(a: $T, b: $T = -1) a + b*2;\n        fn main() ab(TWO).i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn self_rec_template(x: $T): $T                     ;; !FN_resolve\n            x > 0 ? self_rec_template(x / 2 - 5) : x;\n\n        fn main()\n            self_rec_template(7) + 2;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn ab_rec(a: $T): $T = a ? ba_rec(a - 2) : -100;\n        fn ba_rec(a: $T): $T = a ? ab_rec(a - 7) : -200;\n        fn main() ab_rec(11) + 200;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let a = 1;\n            fn add1(b) a + b;\n            return 2.add1 - 3;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub fn map(a: [$T], fn) {               ;; !DEAD_code\n            mut res: fn($T)[];\n            res.grow_junk(a.len);\n            for (mut i = 0; i < a.len; i++) res[i] = fn(a[i]);\n            return res;\n        }\n\n        pub fn clone(a: $T)\n        case ($T.is::copy) a;\n        case ($T -> [$U]) a.map(fn clone);\n        default {\n            mut res: $T;\n            for (fieldname i: $T) res.i = a.i.clone();\n            return res;\n        }\n\n        pub nocopy struct Scope { x: i32; };\n        pub struct ModuleOutputs { deps: Scope[]; };\n\n        pub fn test(a: ModuleOutputs) {\n            let b = a.clone();\n            return a.deps.len - b.deps.len;\n        }\n\n        pub fn main() test(ModuleOutputs);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct X { a: i32; };\n        inline fn add_uxa_b_inline(using x: X, b: i32) a + b;\n        fn hey(using x: X) add_uxa_b_inline(-1);\n        return X(1).hey;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct X { a: i32; };\n        fn add_uxa_b_template(using x: X, b /* untyped */) a + b;\n        fn hey(using x: X) add_uxa_b_template(-1);\n        return X(1).hey;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn incr(a) a++;\n        fn main() {\n            mut a = 1;\n            incr: || a;\n            return a - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        inline fn inl_lies(x: u32)<fail actual return match annot>: i32<pass/></fail> = x;\n        fn main() 0.inl_lies ? 1 : 0;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn what(ref x: i32, ref y: i32) {\n            <fail bad call swap>\n            let z = y;   <pass/>\n            ref z = y;   </fail>\n            swap(x, z);  // swap is defined(ref x: $T, ref y: $T),\n        }                //  we ignore the 'ref' part in type patterns,\n                         //   so we only notice later when checking the spec\n        fn main() {\n            mut a = 1; mut b = 0; what(a, b);\n            return a;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn any(a, b) a || b;\n        fn main() any(0, []);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn both(a, b) a && b;\n        fn main() both(1, []);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn either(a, b) a ? a : b;\n        fn main() either(0, []);\n    "_fu, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        pub fn identity(dont_leak_me) dont_leak_me;\n    "_fu, "\n        let dont_leak_me = 1;\n        fn main() _0::identity(dont_leak_me * 2) - 2;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0X4li7Vn("\n        pub inline fn inl_id_leak(dont_leak_me) dont_leak_me;\n        let dont_leak_me = 1;\n        fn main() inl_id_leak(dont_leak_me * 2) - 2;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let static = 1;\n        fn template(arg) static + arg;\n        let arg = 7;                        // <- template shouldn't see this\n        let result = template(arg / -4);    // <- when specializing here\n        fn main() result;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let static = 1;\n            fn template(arg) static + arg;\n            let arg = 7; // same here, except we're in a fn.\n            return template(arg / -4);\n        }\n    "_fu, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        fn template_add(a, b) a + b;\n    "_fu, "\n        struct HasInt { i: i32 };\n        <split/>\n        fn +(a: HasInt, b: HasInt) HasInt(a.i + b.i);\n        fn main() _0::template_add(HasInt(1), HasInt(2)).i - 3;\n    "_fu } }, s_Options{}, testdiffs);
    TODO_YxitWGqo(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        fn template_add(a, b) a + b;\n    "_fu, "\n        struct HasInt { i: i32 };\n        fn main() {\n            infix fn +(a: HasInt, b: HasInt) HasInt(a.i + b.i); // its hard to defend this -\n            _0::template_add(HasInt(1), HasInt(2)).i - 3;       //  the thing above works but this doesn't.\n        }                                                       //   given the autoshadowing, we might just want to allow everything.\n    "_fu } }, testdiffs);
    ZERO_0X4li7Vn("\n        fn inner(i: i32): i32\n            i > 0 ? outer(i - 1) : 0;\n\n        fn outer(i: i32): i32\n            2 * inner(i);\n\n        return outer(1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(one: i32)\n        {\n            let zero = one - 1;\n            let two  = one * 2;\n\n            fn inner(i: i32): i32\n                i > zero ? outer(i - one) : zero;\n\n            fn outer(i: i32): i32\n                two * inner(i);\n\n            return outer(one) + (two - one) * 17;\n        }\n\n        fn main() test(1) - 17;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn inner(i: i32): i32\n            outer(i - 1);\n\n        fn outer(implicit x: i32, i: i32): i32\n            i > 0   ? inner(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer(1) - 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn inner_noret(i: i32)\n            outer_noret(i - 1);\n\n        fn outer_noret(implicit x: i32, i: i32)\n            i > 0   ? inner_noret(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer_noret(1) - 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        inline fn inner_inl(i: i32): i32\n            outer_inl(i - 1);\n\n        fn outer_inl(implicit x: i32, i: i32): i32\n            i > 0   ? inner_inl(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer_inl(1) - 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn inner_templ(i): i32\n            outer_templ(i - 1);\n\n        fn outer_templ(implicit x: i32, i): i32\n            i > 0   ? inner_templ(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer_templ(1) - 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn inner_templ_noret(i)\n            outer_templ_noret(i - 1);\n\n        fn outer_templ_noret(implicit x: i32, i)\n            i > 0   ? inner_templ_noret(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer_templ_noret(1) - 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn outer(i: i32): i32\n            i > 0   ? inner(i)\n                    : 2 * i;\n\n        fn inner(implicit x: i32, i: i32): i32\n            outer(i - 2 * x);\n\n        let implicit x = 3;\n        return outer(6);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn has_implicit(implicit i: i32, add: i32): i32\n            i + add;\n\n        inline fn injects_implicit_while_inlined(): i32\n            has_implicit(1); // broken by no ss.declash\n\n        fn main() {\n            let implicit i = 2;\n            return injects_implicit_while_inlined() - 3;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        inline fn outer_inl(i: i32): i32\n            i > 0   ? inner_inl(i)\n                    : 2 * i;\n\n        fn inner_inl(implicit x: i32, i: i32): i32\n            outer_inl(i - 2 * x); // broken by no ss.declash\n\n        let implicit x = 3;\n        return outer_inl(6);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn outer_templ(i): i32\n            i > 0   ? inner_templ(i)\n                    : 2 * i;\n\n        fn inner_templ(implicit x: i32, i): i32\n            outer_templ(i - 2 * x);\n\n        let implicit x = 3;\n        return outer_templ(6);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn outer(implicit x: i32, i: i32): i32\n            i > 0   ? inner(i)\n                    : x + i;\n\n        fn inner(i: i32): i32\n            outer(i - 1);\n\n        let implicit x = 7;\n        return outer(1) - 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn outer(implicit x: i32, i: i32)\n            i > 0   ? inner(i)\n                    : x + i;\n\n        fn noret(i: i32) = outer(i);\n\n        fn template(i) = i & 1 ? outer(i) : noret(i);\n\n        fn inner(i: i32): i32\n            template(i - 1);\n\n        fn main() {\n            let implicit x = 7;\n            return outer(1) - 7;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn returns_x(implicit x: i32): i32\n            = x;\n\n        fn calls_self_1(call_self = false): i32\n            = !call_self ? returns_x : calls_self_1 * 2;\n\n        let implicit x = 7;\n        return calls_self_1(true) - 14;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn returns_x(implicit x: i32): i32\n            = x;\n\n        fn calls_self_2(call_self = false): i32\n            = call_self ? calls_self_2 * 3 : returns_x;\n\n        let implicit x = 7;\n        return calls_self_2(true) - 21;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn returns_x(implicit x: i32): i32\n            = x;\n\n        fn calls_self_3(call_self = false): i32\n        {\n            let add = 1; // <- this wasnt visible\n            fn do_call_self(mul: i32 = 0)\n                = calls_self_3 * mul + add;\n\n            return call_self ? do_call_self(4) : returns_x;\n        }\n\n        let implicit x = 7;\n        return calls_self_3(true) - 29;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn noret_x(implicit x: i32) x;\n\n        fn templ_calls_self_2(call_self): i32\n            = call_self ? templ_calls_self_2(false) * 3 : noret_x;\n\n        fn main() {\n            let implicit x = 7;\n            return templ_calls_self_2(true) - 21;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using implicit r: Range)\n            max - min;\n\n        fn test()\n            size();\n\n        let implicit r = Range(14, 21);\n\n        return test  - 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using implicit r: Range)\n            max - min;\n\n        fn inner()\n            size();\n\n        fn outer()\n            inner();\n\n        let implicit r = Range(14, 21);\n\n        return outer() - 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let a = 1;\n            let b = 2;\n            let c = 3;\n\n            fn depth1(x: i32) {\n                fn depth2(y: i32) {\n                    return sibling1(x + y + b);\n                }\n\n                return depth2(x + a);\n            }\n\n            fn sibling1(z: i32): i32 {\n                return z + c;\n            }\n\n            return depth1(0) - 6;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn goto0(x): i32 = x ? goto0(x / 2) : 0;\n        fn main() goto0(1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn goto0(x) x ? goto0(x / 2) : 0;\n        fn main() goto0(1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn goto0(x) x ? goto0(x / 2) : x; // ideally same as above\n        fn main() goto0(1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn goto0(x) x && goto0(x / 2); // ideally same as above [again]\n        fn main() goto0(1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn ref_a(ref a: i32) a;\n\n        fn main() {\n            mut a: i32;\n            ref r = ref_a(a);\n            r++;\n            return a - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn ref_a_or_ref_b(ref a: i32, ref b: i32)\n            a || b;\n\n        fn main() {\n            mut a: i32;\n            mut b: i32;\n            ref a_or_b = ref_a_or_ref_b(a, b);\n            a_or_b++;\n            return b - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn impl(implicit ref _impl: i32) _impl;\n        fn arg_or_impl(ref arg: i32) arg || impl;\n        fn main() {\n            let implicit mut _impl: i32;\n            mut arg: i32;\n            ref ref = arg_or_impl(arg);\n            return arg - ref;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn hello(ref a: i32[], ref b: i32[], x: i32): &mut i32[] {\n            if (x == 0) return a;\n            if (x == 1) return b;\n            return hello(b, a, x / 17);\n        }\n\n        fn main() {\n            mut a = [1, 2, 3];\n            mut b = [4, 5, 6];\n            hello(a, b, 397)[1] *= 5;\n            return b[1] - 25;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub fn ZERO(implicit ref sum: i32, mut x: i32) {\n            while (x) {\n                ZERO( --x ); // Same as below but without the unused 'y' thing,\n                sum += x;    //  everything works because the call to ZERO isnt really unconditional,\n            }                //   and if it were, then the never return would actually be correct.\n        }\n\n        fn main() {\n            let implicit mut sum = 0;\n            ZERO(4);\n            return sum - 11;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub fn ZERO(implicit ref sum: i32, mut x: i32) {\n            while (x) {\n                let y = x / 2;\n                ZERO( --x ); // Unconditional self recursion, initially hinted as t_never,\n                ZERO(   y ); //  meaning y remains unused here on first solve.\n                sum += x;\n            }\n        }\n\n        fn main() {\n            let implicit mut sum = 0;\n            ZERO(4);\n            return sum - 12;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Node {\n            items: Node[];\n        }\n\n        fn solve(root: Node)\n        {\n            fn solveBlock(node: Node) {\n                let items = solveNodes(node.items);\n                //*\n                return solveBlock(items);\n            }\n\n            fn solveBlock(items: i32[]) {\n                //*/\n                if (!Lifetime_allowsMutrefReturn(items))\n                    throw(\"Nope!\");\n\n                return items;\n            }\n\n            fn solveNode(node: Node, implicit ref next: i32) {\n                if (!node.items)\n                    return [ next++ ];\n\n                let implicit CTX = node.items.len; // <- this shows up as an closure-arg with an outdated revision\n                return solveBlock(node);\n            }\n\n            fn Lifetime_each(items, visit)\n                for (mut i = items.len; i --> 0; )\n                    visit(items[i]);\n\n            fn Lifetime_allowsMutrefReturn(items: i32[]) {\n                Lifetime_each(:items, visit: |item, implicit CTX: i32| {\n                    if (item == CTX)\n                        return false;\n                });\n\n                return true;\n            }\n\n            fn solveNodes(nodes: Node[]) {\n                mut result: i32[];\n                for (mut i = 0; i < nodes.len; i++)\n                    result ~= solveNode(nodes[i]);\n\n                return result;\n            }\n\n            return solveNode(root);\n        }\n\n        fn main() {\n            let implicit mut next = 0;\n\n            let solve = solve(Node([\n                Node([ Node ]),\n                Node(),\n            ]));\n\n            return solve.len - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn woot(implicit x: i32) = x;\n\n        fn main() {\n            <fail no implicit x>\n            <pass/>\n            let implicit x = 2;\n            </fail>\n            return woot() - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail no implicit y>\n        fn woot(implicit y: i32) = y;\n        <pass/>\n        fn woot(implicit x: i32) = x;\n        </fail>\n\n        fn hey() {\n            let implicit x = 2;\n            return woot() - 2;\n        }\n\n        let here = hey();\n        fn main() = here;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let x = 1;\n\n        fn test(): &i32\n            x;\n\n        return test - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let a = 1;\n        let x: &i32 = a;\n\n        return a - x;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test {\n            x: &i32;\n        }\n\n        let a = 1;\n        let test = Test(a);\n\n        return test.x - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut a = 0;\n        mut b = a;\n        b++;\n        let c = a = b;\n\n        return a - c;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut arr = [0, 1, 2, 3, 4];\n        arr.push(5);\n\n        fn test(view: &i32[]): i32 {\n            mut sum = 0;\n            for (mut i = 0; i < view.len; i++)\n                sum += view[i];\n\n            return sum - 15;\n        }\n\n        return test(arr);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut arr: i32[] = [1, 2, 3, 4];\n        arr.push(5);\n\n        fn test(view: &i32[]): i32 {\n            mut sum = 0;\n            for (mut i = 0; i < view.len; i++)\n                sum += view[i];\n\n            return sum - 15;\n        }\n\n        return test(arr);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let x = 5;\n        mut arr = [ -5 ];\n        arr.push(x);\n        return arr[0] + arr[1];\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail name>\n        let x = [ named: 0 ]; <pass/>\n        let x = [        0 ]; </fail>\n        return x[0];\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut other: i32[][];\n        mut arr:   i32[][];\n        for (mut i = 4; i --> 0; )\n        {\n            arr.resize(i);\n\n            // fill up with non small vecs so we can check alloc counts\n            for (shadow mut i = 0; i < arr.len; i++)\n                arr[i] ||= [ i, i, i, i, i, i, i, i ]; // defeat small vec\n\n            // now this convers the \"Last chance to do nothing\" opti -\n            //  noop resize a shared vec.\n            other = arr;\n            arr.resize(other.len || i);\n        }\n        return other.len;\n    "_fu, testdiffs);
    ARROPS_dWJteHej("0,1,2,3,4"_fu, "push(5)"_fu, "@[1] + @[4] - @[5]"_fu, testdiffs);
    ARROPS_dWJteHej("0,1,2,3,4"_fu, "insert(5, 5)"_fu, "@[1] + @[4] - @[5]"_fu, testdiffs);
    ARROPS_dWJteHej("0,1,2,3,4"_fu, "pop()"_fu, "@[1] + @[3] - @.len"_fu, testdiffs);
    ARROPS_dWJteHej("0,1,2,3,4"_fu, "splice(4, 1)"_fu, "@[1] + @[3] - @.len"_fu, testdiffs);
    ARROPS_dWJteHej("0,1,2,3,4"_fu, "unshift(5)"_fu, "@[2] + @[5] - @[0]"_fu, testdiffs);
    ARROPS_dWJteHej("0,1,2,3,4"_fu, "insert(0, 5)"_fu, "@[2] + @[5] - @[0]"_fu, testdiffs);
    ARROPS_dWJteHej("0,1,2,3,4"_fu, "shift()"_fu, "@[0] + @[2] - @[3]"_fu, testdiffs);
    ARROPS_dWJteHej("0,1,2,3,4"_fu, "insert(1, 5)"_fu, "@[2] + @[5] - @[1]"_fu, testdiffs);
    ARROPS_dWJteHej("0,1,2,3,100"_fu, "splice(1, 3)"_fu, "@.len + @[0] + @[1] - 102"_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let OPERATORS = [ \"+\", \"-\", \"*\", \"/\" ];\n\n        fn main()\n            OPERATORS[2] == \"*\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Y { b: bool; }\n        struct X { y: Y[]; }\n\n        mut x: X[];\n        x.push( X([ Y(true) ]) );\n\n        return x.len + x[0].y.len * 2 - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct SelfRec { x: SelfRec[]; };\n        fn main() SelfRec( [ SelfRec() ] ).x.len - 1; // <- solved with a dirty selfrec & defctor\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct ABRec { x: BARec[]; };\n        struct BARec { x: ABRec[]; };\n        fn main() ABRec( [ BARec() ] ).x.len - 1; // <- solved with a dirty selfrec & defctor\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct ABRec { x: BARec[]; y: ABBARec[]; };\n        struct BARec { x: ABRec[]; y: ABBARec[]; };\n        struct ABBARec { x: ABRec[]; y: BARec[]; };\n        fn main() ABRec( [ BARec() ], [ ABBARec() ] ).x.len - 1; // <- solved with a dirty selfrec & defctor\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut a = [7, 1, 5, 3, 99, -13]; // [-13, 1, 3, 5, 7, 99]\n        a.sort();\n        return a[0] + a[1] + a[3] + a[4];\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let a = [0, 1, 2, 3];\n        let b = a.slice(1, 3);\n        return b.len - b[1];\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let a = [0, 1, 2, 3];\n        let b = a.slice(1);\n        return b.len - b[2];\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn collectDedupes(mut vals<alt>: i32[]</alt>) {\n            vals.sort();\n            return vals[0];\n        }\n\n        fn main() {\n            let vals = [ 1, 0 ];\n            return collectDedupes(vals);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn sort01(ref arr: [$T]) {\n            mut tmp: $T;\n            if (arr[0] > arr[1]) {\n                swap(arr[0], tmp);\n                swap(arr[1], tmp);\n            }\n        }\n\n        fn collectDedupes(mut vals) {\n            vals.sort01();\n            return vals[0];\n        }\n\n        fn main() {\n            let vals = [ 1, 0 ];\n            return collectDedupes(vals);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut str = \"hello \";\n        str ~= \"world\";\n\n        return str.len - 11;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let str = \"hello \" ~ \"world\";\n\n        return str.starts(with: \"hel\")\n             ? str  .ends(with: \"rld\")\n             ? str.len - 11\n             : 171\n             : 173;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let str = \"a\" ~ 1710010;\n\n        return str == \"a1710010\"\n             ? 0 : 101;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let str = \"hello world\";\n        mut cpy = \"\";\n        for (mut i = 0; i < str.len; i++)\n            cpy ~= str[i];\n\n        return (cpy.len - 11) + (cpy == str ? 0 : 1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        return \"hello world\".find(\"world\")\n             - 2 * [1, 7, 13, 14, 19].find(14);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        return (\"hello world\".has(\"world\") ? 1 : 0)\n             + ([1, 14, 96, 2].has(14)     ? 2 : 0)\n             - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let hw = \"hello world!\";\n        let a = hw.slice(6, 6 + 5);\n        let b = hw.substr(6, 5);\n        return a == b && a == \"world\" ? a.len - 5 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let tests =\n        [\n            \"\",\n            \" \",\n            \"  \",\n            \"hey you duders\",\n            \" hey you duders\",\n            \"hey you duders \",\n            \"  hey you duders \",\n            \"  hey you  duders \",\n            \"  hey you  duders  \"\n        ];\n\n        fn test(item: string)\n            item == item.split(\" \").join(\" \")\n                ? 0\n                : item.len;\n\n        mut sum = 0;\n        for (mut i = 0; i < tests.len; i++)\n            sum += test(tests[i]);\n\n        return sum;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() '\\e'.i32 - 27\n             ||   '\\0'.i32\n             || '\\x11'.i32 - 17\n             || '\\xaA'.i32 - 170;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()                           <fail invalid code point>\n            \"\\u{ffffff}\".u32               <pass/>\n            \"\\u{042e}\" == \"\xD0\xAE\"  ? 0 : 1     </fail>\n            ;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let strA = \"0123456789abcdef0123456789ABCDEF\";\n\n        fn main()\n        {\n            let a0 = alloc::STAT_COUNT();\n            strA.slice(0, 26) == \"0123456789abcdef0123456789\" || throw(\"bad slice\");\n\n            let a1 = alloc::STAT_COUNT();\n            a0 == a1 || throw(\"did alloc\");\n\n            return 0;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let strA = \"0123456789abcdef0123456789ABCDEF\";\n\n        fn main()\n            strA.slice(26, 32) == \"ABCDEF\"\n                ? 0 : 1;\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        mut x: Map(string, i32);\n\n        x[\"hello\"] = 1;\n        x[\"world\"] = 2;\n\n        return x[\"hello\"] - x[\"world\"] + 1;\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        mut x: Map(string, i32);\n\n        x[\"hello\"] = 1;\n        x[\"world\"] = 2;\n\n        let b = \"hello world\";\n        mut offset = 0;\n\n        fn pop(): string {\n            mut a = \"\";\n\n            while (offset < b.len) {\n                let c = b[offset++];\n                if (c == ' ')\n                    break;\n\n                a ~= c;\n            }\n\n            return a;\n        }\n\n        return x[pop()] - x[pop()] + 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(a = 1, b = 2) a + b;\n        return test() - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(a = 1, b = 2) a + b;\n        return test(b: -1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(a = 1, b = 2) a + b;\n        return test(-2);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test { a?: i32; b?: i32; }\n        let t = Test(1);\n        return t.a - 1 + t.b * 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test { a?: i32; b?: i32; }\n        let t = Test(1);\n        return t.b;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test { a?: i32; b?: i32; }\n        let t = Test(a: 1);\n        return t.a - 1 + t.b * 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test { a?: i32; b?: i32; }\n        let t = Test(b: 1);\n        return t.b - 1 + t.a * 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test { x?: i32; };\n        fn hey() Test();\n        return hey.x;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test { x?: i32; };\n        fn hey(y: i32 = 0)\n            y   ? Test(1)\n                : Test();\n\n        return hey.x;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail bad call>\n        fn test(a = \"hello\") a.len;     <pass/>\n        fn test(a = 0) a + 1;           </fail>\n        fn main() test(-1);\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn test(a = 3, b = a * 2) a + b;\n        fn main() test + test(a: -1) * 3;\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn test(ref a: i32, incr: i32) {\n            fn woot(x, ref b: i32 = a) {\n                if (x & 1) {\n                    x /= 2;\n                    return test(x, b);\n                }\n                b += x;\n            }\n            return woot(incr, a);\n        }\n\n        fn main() {\n            mut x = 10;\n            test(x, 5);\n            return x - 12;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let s = 7;\n        return s ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let s = 0;\n        return s ? 1 : 0;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let s = \"hello\";\n        return s ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let s = \"\";\n        return s ? 1 : 0;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let s = [ 4 ];\n        return s ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut s = [ 4 ];\n        s.pop();\n        return s ? 1 : 0;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct S { x: i32; }\n        let s: S = S(1);\n        return s ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct S { x: i32; }\n        let s: S;\n        return s ? 1 : 0;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut sum = 0;\n        :OUTER for (mut y = 1; y < 10; y++)\n        {\n            sum += y * 10; // 10, 20\n            for (mut x = 1; x < 10; x++)\n            {\n                sum += x; // 1, 1, 2\n                if (y == 1) continue :OUTER;\n                if (x == 2) break    :OUTER;\n            }\n        }\n\n        return sum - 34;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut sum = 0;\n        :OUTER for (mut x = 0;; x++) {\n            for (mut y = 0; y < x; y++) {\n                if (y & 1 && !(x & 1))\n                    continue :OUTER;\n\n                sum += x;\n            }\n\n            sum += x * 1000 + 100;\n            if (x > 1) ;; EXPECT break;\n                break; // anon\n        }\n\n        // x=0:           + 0100\n        // x=1: 1         + 1100\n        // x=2: 2\n        // x=3: 3 + 3 + 3 + 3100 break\n        return sum - 4312;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(ref sum: i32) {\n            :FIRST {\n                if (sum & 1)\n                    break:\n                        FIRST;\n                sum++;\n            }\n            :SECOND {\n                if (sum & 1)\n                    break:\n                        <fail label>\n                        FIRST;      <pass/>\n                        SECOND;     </fail>\n                sum++;\n\n                if (sum & 2)\n                    break:\n                        SECOND;\n                sum++;\n            }\n        }\n\n        fn main() {\n            mut sum = 0;\n            test(sum);\n            return sum - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let x = \"hello\";\n        let y = \"world\";\n        let w = x || y;\n\n        return w == \"hello\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let x = \"hello\";\n        let y = \"world\";\n        let w = x && y;\n\n        return w == \"world\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let x = \"hello\";\n        let y = \"world\";\n        let w = 3 && x || y;\n\n        return w == \"hello\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let x = \"hello\";\n        let y = \"world\";\n        let arr: i32[];\n        let w = arr && x || y;\n\n        return w == \"world\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let x = \"hello\";\n        let y = \"world\";\n        let arr: i32[];\n        let w = arr && x || y || throw(\"Nope.\");\n\n        return w == \"world\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn what(a: i32) {\n            a == 2 || a & 1 || throw(\"what1\");\n            a  > 1 && a & 1 && throw(\"what2\");\n            a  > 0 && a & 3 || throw(\"what3\");\n            return a + 4;\n        }\n        fn main() 1.what - 2.what + 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn gen(len: i32) {\n            mut res: i32[];\n            for (mut i = 0; i < len; i++) res ~= i;\n            return res;\n        }\n        fn test(len: i32) {\n            let x = [-5, +5];\n            let y = len.gen && x;\n            return x[y.len / 2];\n        }\n        fn main() 0.test + 1.test;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn is_mutref(t: string)     t.len == 6;\n        fn is_never(t: string)      t.len == 5;\n\n        fn test(ref init: string, ref annot: string)\n            init.is_mutref && annot ||\n            init.is_never  && annot || throw(\"noreturn\");\n\n        fn main() {\n            mut annot = \"hey!\";\n            mut init = \"woot!\";\n            return test(:init, :annot).len - 4;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(mut init: string) {\n            init.len && init || throw(\"noreturn\");\n            return init.len;\n        }\n\n        fn main() test(\"woot!\") - 5;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn is_mutref(t: string)     t.len == 6;\n        fn is_never(t: string)      t.len == 5;\n        let F_ARG = 1;\n\n        fn test(ref init: string, ref annot: string, mut flags: i32) {\n            init.is_mutref  || init.is_never  && annot\n                            || !init && flags & F_ARG\n                            || throw(\"noreturn\");\n            return flags;\n        }\n\n        fn main() {\n            mut annot = \"hey!\";\n            mut init = \"woot!\";\n            return test(:init, :annot, 0);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn a(a)  a ?  a : [];   // ifs used cons-type to seed alt-type\n        fn b(b) !b ? [] : b;    //  which works for 'a', but not for 'b'.\n        fn main() 1.a - 1.b;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Type { i: i32 };\n        fn is_mutref (t: Type) !!(t.i & 3);\n        fn is_ref    (t: Type) !!(t.i & 1);\n        fn clear_refs(t: Type) Type(t.i &~ 3);\n\n        fn tryClearRefs(t: Type, mutref?: bool): Type =     // type-hints vs type-assertions:\n            (mutref ? t.is_mutref : t.is_ref)               //  solveBlocks used within '&&' and '?'\n                && clear_refs(t);                           //   so the '?' complained 'bool' doesnt assign to 'Type'\n\n        fn main() {\n            let a = tryClearRefs(Type(6), true);\n            let b = tryClearRefs(Type(6), false);\n            return a.i + b.i - 4;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut i = 7;\n        i ||= 11;\n        return i - 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut i = 0;\n        i ||= 11;\n        return i - 11;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut a = 1;\n        mut b = 0;\n        a ||= ++b;\n        return  b;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut CHANGE = false;\n        CHANGE ||= true;\n        return CHANGE.i32 - 1;\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        mut m: Map(string, string);\n        mut g = 0;\n\n        m[\"hello\"] = \"world\";\n        fn f() {\n            g++;\n            return \"cruel world\";\n        }\n\n        m[\"hello\"] ||= f();\n        return g;\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        mut m: Map(string, string);\n        mut g = 0;\n\n        m[\"_not_hello_\"] = \"world\";\n        fn f() {\n            g++;\n            return \"cruel world\";\n        }\n\n        m[\"hello\"] ||= f();\n        return g - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test { x: i32; }\n        fn test(t: &mut Test) t.x++;\n        mut t = Test();\n        <fail orphan>\n        t.test;             <pass/>\n        t.test();           </fail>\n        return t.x - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        {\n            {\n                return 0;\n            }\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        {\n        <fail block>\n        {\n            return 0;\n        }\n        <pass/>\n            {\n                return 0;\n            }\n        </fail>\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        {\n            return 0;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        {\n            return 0;\n        <fail block>\n       }\n        <pass/>\n        }\n        </fail>\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        {\n            return 0;\n        <fail block>\n         }\n        <pass/>\n        }\n        </fail>\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let y = [ 1 ];              ;; TODO fu::slate<1, int> y\n        let <fail unused><pass/>lax</fail>\n            z = [ 2 ];              ;; TODO fu::slate<1, int> z\n\n        return y[0] - 1\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn fail(a: string) throw(\"hey: \" ~ a);\n        fn hello(a: string,\n            <fail unused><pass/>lax</fail>\n            b: string)\n                a && fail(a) ? b : a;\n\n        fn main() hello(\"\", \"nope\").len;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn incr(ref x: i32) x++;\n        fn lints_ambig_expr_indent(ref a: i32, ref b: i32) {\n            return a.incr\n            <fail indent>\n            +\n            <pass/>\n              +\n            </fail>\n                b.incr;\n        }\n\n        fn main() {\n            mut a = 0; mut b = 0;\n            lints_ambig_expr_indent(a, b);\n            return a - b;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn lints_ambig_jump_semis(mut x: i32) {\n            <fail indent>\n            return\n            x;\n            <pass/>\n            return x;\n            </fail>\n        }\n\n        fn main() 0.lints_ambig_jump_semis;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn incr(ref a: i32) ++a;\n        fn A(ref a: i32) a || <fail parenthes left side>\n                              a = A(incr(a));    <pass/> // Lint should complain here,\n                             (a = A(incr(a)));   </fail> //  this was an honest mistake.\n\n        fn main() { mut v = 0; return A(v) - 1; }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(is_mutref: bool, args: i32[], ref sum: i32) {\n            <fail indent else>\n            if (is_mutref)\n                for (mut i = 0; i < args.len; i++)\n                    if (args[i] & 1)\n                        sum += args[i];\n            <pass/>\n            if (is_mutref) {\n                for (mut i = 0; i < args.len; i++)\n                    if (args[i] & 1)\n                        sum += args[i];\n            }\n            </fail>\n            else\n                for (mut i = 0; i < args.len; i++)\n                    if (args[i] & 2)\n                        sum += args[i];\n        }\n\n        fn main() {\n            mut sum = 0;\n            test(true , [ 1,  2,  3  ], sum);\n            test(false, [ 11, 22, 33 ], sum);\n            return sum - 1 - 3 - 11 - 22;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        //\n        // The -1.abs problem.\n        //\n        // Ruby lexes the minus into the numeric literal.\n        //  This is kinda inconsistent, altough it does make sense.\n        //\n        // Rust & all c-likes lex to -abs(1).\n        //  Rust linters warn about this.\n        //\n        // One thing we can do is change the precedence of some unaries\n        //  to above method call - others, like ! benefit from usual precedence.\n        //   In my experience, the unary * op in c/cpp always disappoints re: precedence,\n        //    but the & op usually works the way you want it to.\n        //     So introducing more precedence rules is a really questionable idea.\n        //\n        // We'll go the rust way for starters,\n        //  this will be a compile time error for now.\n        //\n        fn test()   <fail parenthes explicit>\n            -1.0    <pass/>\n            (-1.0)  </fail>\n                .abs;\n\n        fn main() test ? 0 : 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(ref a: i32, ref b: i32) {\n            return (++a) + (++b);\n        }\n\n        fn main() {\n            mut x = 0;\n\n            <fail alias>\n            ref y = x; <pass/>\n            mut y = x; </fail>\n\n            let z = test(x, y);\n            return x+y - z;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub fn test_inner(ref a: i32, ref b: i32)\n            (++a) + (++b);\n\n        pub fn test_outer(ref a: i32, ref b: i32)\n            test_inner(a, b);\n\n        fn main() {\n            mut x = 0;\n\n            <fail alias>\n            ref y = x; <pass/>\n            mut y = x; </fail>\n\n            let z = test_outer(x, y);\n            return x+y - z;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(ref a: i32[]) {\n            ref b = a[0];\n            if (a.len & 1) {\n                <fail invalidate 9:13 6:19>\n                a ~= 1; // Invalidates 'b'.\n                <pass/>\n                b++;\n                </fail>\n            }\n            b++;\n        }\n\n        fn main() {\n            mut arr = [ 1 ]; test(arr);\n            mut sum = 0;\n            for (mut i = 0; i < arr.len; i++) sum += arr[i];\n            return sum - 3;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        nocopy struct nci32 { i: i32; };\n\n        fn test(ref a: nci32, b: nci32) a.i++ || b.i;\n        fn main() {\n            mut x = nci32(0);\n            <fail alias>\n            ref y = x;          <pass/>\n            let y = nci32(0);   </fail>\n\n            return test(x, y);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(ref a: i32[]) {\n            ref b = a[0];\n            if (a.len & 1) { // Lets be extra sure here.\n                <fail invalidate 7:17 6:19>\n                a ~= 1; // Invalidates 'b'.\n                b++;\n                <pass/>\n                b++;\n                a ~= 1;\n                </fail>\n            }\n        }\n\n        fn main() {\n            mut arr = [ 1 ]; test(arr);\n            mut sum = 0;\n            for (mut i = 0; i < arr.len; i++) sum += arr[i];\n            return sum - 3;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(ref a: i32[]) {\n            ref b = a[0];\n            for (mut i = 2; i --> 0; )\n            {\n                b++; // Same thing but reordered as a loop.\n                if (a.len & 3) {\n                    <fail inval next iter 9:23 6:17>\n                    a ~= 1; // Invalidates 'b'.\n                    <pass/>\n                    b++;\n                    </fail>\n                }\n            }\n            a ~= 100; // Invalidates 'b' but that's fine!\n        }\n\n        fn main() {\n            mut arr = [ 1 ]; test(arr);\n            mut sum = 0;\n            for (mut i = 0; i < arr.len; i++) sum += arr[i];\n            return sum - 105;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        // both args alias, but there's no risk of inval.\n        fn incr_a_or_b(ref a: i32, ref b: i32)\n            (a || b)++;\n\n        fn main() {\n            mut Z = 0;\n            mut A = 1;\n            mut B = 0;\n\n            incr_a_or_b(Z, B); // incr B, now 1\n            incr_a_or_b(A, B); // incr A, now 2\n            incr_a_or_b(B, B); // incr _target, now 2 // alias!\n\n            return (100*A + B) - 202;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct V { v: i32; };\n\n        fn main() {\n            mut A: V = [ 1 ];\n            ref a = A.v;\n            ref b = A.v;\n            ref c = a || b;\n            return ++++c - 3; // double mutation of a union\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct V { v: i32; };\n\n        fn main() {\n            mut A: V = [ 1 ];\n            ref a = A.v;\n            ref b = A.v;\n            return ++++(a || b) - 3; // same, without a helper var\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct V { v: i32; w?: i32; ww?: i32; };\n\n        fn main() {\n            mut A: V = [ 1 ];\n            mut B: V = [ 1 ];\n\n            <fail invalidate 20:20 18:15>\n            ref aa = A.v || A.w; <pass/>\n            fn  aa = A.v || A.w; </fail>\n\n            ref bb = B.v || B.w;\n            ++++bb;\n\n            ref a = A.v || A.ww;\n            ref b = B.v || B.ww;\n\n            ref c = a || b;\n            ++++c;\n\n            return aa - 3; // same, without a helper var\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        // a can alias b\n        // c can alias d\n        pub fn ab_cd (ref a: i32, ref b: i32, ref c: i32, ref d: i32) {\n            ref ab = a || b;\n            ref cd = c || d;\n            ++++ab;\n            ++++cd;\n        }\n\n        fn main() {\n            mut ab = 0;\n            mut cd = 0;\n\n            <fail alias>\n            ab_cd(ab, cd, ab, cd); <pass/>\n            ab_cd(ab, ab, cd, cd); </fail>\n\n            return ab - cd;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct X { i: i32; j: i32; };\n        // a can alias b\n        // c can alias d\n        pub fn ab_cd_defer(ref a: X, ref b: X, ref c: X, ref d: X, j?: bool) {\n            defer {\n                ref ab = a || b;\n                ref abi = j ? ab.j : ab.i;\n                ++++abi;\n            }\n            ref cd = c || d;\n            ref cdi = j ? cd.j : cd.i;\n            ++++cdi;\n        }\n\n        fn main() {\n            mut ab = X(0, 0);\n            mut cd = X(0, 0);\n\n            <fail alias>\n            ab_cd_defer(ab, cd, ab, cd); <pass/>\n            ab_cd_defer(ab, ab, cd, cd); </fail>\n\n            return ab.i - cd.i;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        // a can alias b\n        // c can alias d\n        pub fn ab_cd_inner (ref a: i32, ref b: i32, ref c: i32, ref d: i32) {\n            ref ab = a || b;\n            ref cd = c || d;\n            ++++ab;\n            ++++cd;\n        }\n\n        pub fn ab_cd_outer (ref a: i32, ref b: i32, ref c: i32, ref d: i32)\n            ab_cd_inner(a, b, c, d);\n\n        fn main() {\n            mut ab = 0;\n            mut cd = 0;\n\n            <fail alias>\n            ab_cd_outer(ab, cd, ab, cd); <pass/>\n            ab_cd_outer(ab, ab, cd, cd); </fail>\n\n            return ab - cd;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        // a can alias b\n        // c can alias d\n        // e can alias f\n        // g can alias h\n        pub fn abcd_efgh(ref a: i32, ref b: i32, ref c: i32, ref d: i32,\n                         ref e: i32, ref f: i32, ref g: i32, ref h: i32)\n        {\n            ref ab = a || b; ref cd = c || d; ref abcd = ab || cd;\n            ref ef = e || f; ref gh = g || h; ref efgh = ef || gh;\n            ++++abcd; ++++ab; ++++cd;\n            ++++efgh; ++++ef; ++++gh;\n        }\n\n        fn main() {\n            mut ab = 0; mut cd = 0;\n            mut ef = 0; mut gh = 0;\n\n            <fail alias>\n            abcd_efgh(ab, ab, cd, gh, ef, ef, cd, gh); <pass/>\n            abcd_efgh(ab, ab, cd, cd, ef, ef, gh, gh); </fail>\n\n            return (ab + cd) - (ef + gh);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        // a cannot alias b\n        pub fn incr_a_or_b_and_b_or_a(ref a: i32, ref b: i32) {\n            ref x = a || b; ++x;\n            ref y = b || a; ++y;\n        }\n\n        fn main() {\n            mut a = 0;\n            mut b = 0;\n\n            <fail alias>\n            incr_a_or_b_and_b_or_a(a, a); <pass/>\n            incr_a_or_b_and_b_or_a(a, b); </fail>\n\n            return a + b - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        // same as below -\n        //  but using a helper variable\n        //   which provides a \"name\" for the outcome of a|b.\n        fn incr_a_or_b_by2_via_x(ref a: i32, ref b: i32) {\n            ref x = a || b;\n            ++++x;\n        }\n\n        fn main() {\n            mut Z = 0;\n            mut A = 2;\n            mut B = 0;\n\n            incr_a_or_b_by2_via_x(Z, B); // incr B, now 2\n            incr_a_or_b_by2_via_x(A, B); // incr A, now 4\n            incr_a_or_b_by2_via_x(B, B); // incr _target, now 4 // alias!\n\n            return (100*A + B) - 404;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        // same as above -\n        //  but notice we increment twice, which breaks current setup.\n        fn incr_a_or_b_by2(ref a: i32, ref b: i32)\n            ++++(a || b);\n\n        fn main() {\n            mut Z = 0;\n            mut A = 2;\n            mut B = 0;\n\n            incr_a_or_b_by2(Z, B); // incr B, now 2\n            incr_a_or_b_by2(A, B); // incr A, now 4\n            incr_a_or_b_by2(B, B); // incr _target, now 4 // alias!\n\n            return (100*A + B) - 404;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn alias(ref arr: i32[], ref item: i32) {\n            arr ~= 1;\n            return item;\n        }\n\n        fn main() {\n            mut a = [ 0 ];\n            <fail alias>\n            ref c = alias(a, a[0]);\n            <pass/>\n            mut b = [ 0 ];\n            ref c = alias(a, b[0]);\n            </fail>\n            return c++;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(ref a: i32[], ref b: i32[]) {\n            <fail invalidate 7:28 6:30>\n            ref aa = a[0]; <pass/>\n            fn  aa() a[0]; </fail>\n\n            ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.\n            ref cc = bb || aa;     // Mustn't compile.\n            return cc;\n        }\n\n        fn main() { mut a = [ 0 ]; mut b = [ 0 ]; return test(a, b); }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(ref a: i32[], ref b: i32[]) {\n            <fail invalidate 7:26 6:30>\n            ref aa = a[0]; <pass/>\n            fn  aa() a[0]; </fail>\n\n            ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.\n            return bb || aa;       // Same as above, but no explicit binding.\n        }\n\n        fn main() { mut a = [ 0 ]; mut b = [ 0 ]; return test(a, b); }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn noop(x) x;\n        fn test(ref a: i32[], ref b: i32[]) {\n            <fail invalidate 8:31 7:30>\n            ref aa = a[0]; <pass/>\n            fn  aa() a[0]; </fail>\n\n            ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.\n            return noop(bb || aa); // Same as above, but bound at callsite.\n        }\n\n        fn main() { mut a = [ 0 ]; mut b = [ 0 ]; return test(a, b); }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn either(a, b) a || b;\n        fn test(ref a: i32[], ref b: i32[]) {\n            <fail invalidate 8:31 7:30>\n            ref aa = a[0]; <pass/>\n            fn aa()  a[0]; </fail>\n\n            ref bb = b[0]; a ~= 1; // Invalidates 'aa' if ref.\n            return either(bb, aa); // For completeness.\n        }\n\n        fn main() { mut a = [ 0 ]; mut b = [ 0 ]; return test(a, b); }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn what(ref cond: i32, ref cons: i32)\n            cond && (cons += 1);\n\n        fn main() {\n            mut x = 1;\n            return what(x, x) - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Target {\n            overload: i32[];\n            extended: i32[];\n        };\n\n        fn which(ref t: Target, i: i32) i & 1\n            ? t.overload\n            : t.extended;\n\n        fn test(ref target: Target)\n        {\n            ref overload = target.which(target.overload.len);\n            ref extended = target.which(target.overload.len + 1);\n\n            mut change = false;\n            if (overload)\n            {\n                for (mut i = 0; i < overload.len; i++)\n                {\n                    let a = overload[i];\n                    let b = extended[i];\n                    if (a != b)\n                    {\n                        change = true;\n                        break;\n                    }\n                }\n            }\n\n            if (change)\n            {\n                extended[0] = 3;\n\n                shadow ref overload = target.which(target.overload.len);\n                overload[0] = 5; // Said write to overload invalidates ext on next loop iter.\n            }\n        }\n\n        fn main()\n        {\n            mut target = Target([ 0 ], [ 1 ]);\n            target.test();\n            return target.overload[0] * 10 + target.extended[0] * 100 - 350;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn test(ref a: i32, ref b: i32) {\n            a += b;\n            b += a;\n        }\n\n        struct AB { a: i32; b: i32 };\n\n        fn main() {\n            mut ab = AB(1, 2);\n            <alt>\n            ref a = ab.a;\n            ref b = ab.b;\n            test(a, b);\n            <alt/>\n            ref a = ab.a;\n            test(a, ab.b);\n            <alt/>\n            test(ab.a, ab.b);\n            </alt>\n            return ab.b - 5;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        struct Helper { vars: i32[]; };\n\n        fn test(ref _helpers: Helper[], helpers_idx: i32) {\n            ref old = _helpers[helpers_idx - 1].vars;\n            ref new = _helpers[helpers_idx    ].vars;\n            new    ~= old[helpers_idx];\n        }\n\n        fn main() {\n            mut helpers = [ Helpers([ 1, 2 ]), Helpers([ 4, 8 ]) ];\n            test(helpers, 1);\n            return helpers[1][2] - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn outer() {\n            mut sum = 0;\n            mut x = 1;\n            for (;;) {      // bck complained that the write to 'x' at the end\n                let v = x;  //  invalidates use of 'v' on next loop iter here, which is not true\n                for (mut i = 0; i < 10; i++) {\n                    sum += v;\n                    if (sum > 40)\n                        return sum;\n                }\n\n                x = v * 2;\n            }\n        }\n\n        fn main() outer - 42;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn append_self(ref a: i32[])\n        {\n            let b = a;\n            a ~= b; // b narrowed down to a slice which is non-copyable\n                    //  but it (unfortunately) wanted to copy to a temp.\n        }\n\n        fn main() {\n            mut arr = [1, 2];\n            arr.append_self();\n            return arr[2] + arr[3] - 3;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn but_is_it_pure(ref x: i32) {\n            <fail not pure 6:9 8:34 4:21>\n            return x++; <pass/>\n            return x;   </fail>\n        }\n        pure fn pure_fn(ref a: i32, ref b: i32) {\n            ref x = a || b;\n            return but_is_it_pure(x);\n        }\n        fn main() {\n            mut x = 0;\n            mut y = 0;\n            return pure_fn(x, y);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            mut _info: string[];\n\n            pure fn fail(mut reason: string = \"\") {\n                for (mut i = _info.len; i --> 0; ) {\n                    ref info = _info[i]; // notice the ref, has to relax away\n                    reason ~= info<alt> && i<alt/> ? i : []</alt>;\n                }\n\n                return reason;\n            }\n\n            return fail.len;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            mut _info = [ 101 ];\n\n            pure fn fail(mut reason: string = \"\") {\n                ref info = _info[0]; // <- notice the ref, has to relax away\n                reason ~= info<alt> && (\"\" ~ info)<alt/> ? (\"\" ~ info) : []</alt>;\n                return reason;\n            }\n\n            return fail.len - 3; // \"101\".len is 3.\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Helpers { row: i32[]; };\n\n        fn test(ref _helpers: Helpers[], mut N: i32, row: i32)\n        {\n            fn solveNode_H(h: Helpers) {\n                while (N % h.row[h.row.len - 1]) {\n                    N--;\n                    _helpers.grow(_helpers.len * 2);\n                }\n            }\n\n            fn solveJump() {\n                solveNode_H(_helpers[row]);\n                return _helpers.len;\n            }\n\n            return solveJump() - 1 * 2*2*2*2;\n        }\n\n        fn main()\n        {\n            mut _helpers = [ Helpers([ 1, 2, 3, 4, 5 ]) ];\n            return test(_helpers, row: 0, N: 4)\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Helpers { row: i32[]; };\n\n        fn test(ref _helpers: Helpers[], mut N: i32, row: i32)\n        {\n            fn solveNode_HH_inner(h: Helpers) {\n                while (N % h.row[h.row.len - 1]) {\n                    N--;\n                    _helpers.grow(_helpers.len * 2);\n                }\n            }\n\n            fn solveNode_HH(h: Helpers) {\n                return solveNode_HH_inner(h);\n            }\n\n            fn solveJump() {\n                solveNode_HH(_helpers[row]);\n                return _helpers.len;\n            }\n\n            return solveJump() - 1 * 2*2*2*2;\n        }\n\n        fn main()\n        {\n            mut _helpers = [ Helpers([ 1, 2, 3, 4, 5 ]) ];\n            return test(_helpers, row: 0, N: 4)\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(ref _helpers: i32[][], mut N: i32, row: i32)\n        {\n            fn solveNode_a(h: i32[]) {\n                while (N % h[h.len - 1]) {\n                    N--;\n                    _helpers.grow(_helpers.len * 2);\n                }\n            }\n\n            fn solveJump() {\n                solveNode_a(_helpers[row]); // We've relaxed to a view, which bck can't copy\n                return _helpers.len;\n            }\n\n            return solveJump() - 1 * 2*2*2*2;\n        }\n\n        fn main()\n        {\n            mut _helpers = [[ 1, 2, 3, 4, 5 ]];\n            return test(_helpers, row: 0, N: 4)\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Arg { i: i32; };\n\n        // A mutref fail.\n        fn mutargs(args: &mut Arg[])\n        {\n            // This miscompiles to ref into args,\n            //  after which we invalidate the reference.\n            //\n            <fail inval badref>\n            ref <pass/>\n            mut </fail> badref = args[0];\n\n            args = [ Arg(11) ]; // INVALIDATE badref.\n            return badref;\n        }       // oct2021: now latest issue here is that\n                //  this gets bcked AFTER jump lifetimes are unwound\n                //   and it all looks as if everything's fine (lt badref == lt args).\n\n        fn main()\n        {\n            mut args = [ Arg(7) ];\n            return mutargs(args).i - 7;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Arg { i: i32[]; };\n\n        fn witharg(using a: Arg)\n            i[i.len - 1] * 4;\n\n        fn mutargs(args: &mut Arg[]) {\n            <fail invalidate badref>\n            ref <pass/>\n            let </fail> badref = args[0];\n\n            args = [ Arg([ 11 ]) ]; // INVALIDATE badref.\n            return witharg(badref);\n        }\n\n        fn main() {\n            mut args = [ Arg([ 7 ]) ];\n            return mutargs(args) - 28;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Arg { i: i32[]; };\n\n        fn witharg(using a: Arg, x: i32)\n            i[i.len - 1] * x;\n\n        fn mutargs(args: &mut Arg[]) {\n            <fail inval badref>\n            ref <pass/>\n            let </fail> badref = args[0];\n\n            for (mut i = 0;; i++) {\n                let ret = witharg(badref, i * 4);\n                if (ret)\n                    return ret;\n\n                args = [ Arg([ 11 ]) ]; // INVALIDATE badref.\n            }\n        }\n\n        fn main() {\n            mut args = [ Arg([ 7 ]) ];\n            return mutargs(args) - 28;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(ref woot: i32[], x: i32, y: i32) {\n            ref b = woot[y];\n            ref a = woot[x]; // the 'shadow ref' below ...\n            if (a == 1) {\n                <fail invalidate>\n                <pass/>\n                shadow ref a = woot[x]; // ... should relax 'ref a' above to a let ...\n                </fail>\n                a += 1;\n            }\n            else {\n                b += 1; // ... and this should ignore cond write above.\n            }\n        }\n\n        fn main() {\n            mut x = [ -1, +1 ];\n            test(x, 0, 1);\n            return x[1] - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(ref a: i32[], ref b: i32[]) {\n            <fail alias>\n            if (a[0] += 1) <pass/>\n            if (a[0] == 1) </fail>\n                a ~= 1;\n            else\n                b ~= 1;\n        }\n\n        fn main() {\n            mut x = [ 1 ];\n            test(x, x);\n            return x.len - 2;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        nocopy struct Woot {\n            x: i32[];\n            y: i32[];\n        };\n\n        fn test(ref w: Woot) {\n            ref x = w.x;\n            //*F\n            ref y = w.x;\n            /*/\n            ref y = w.y;\n            //*/\n            y ~= y; // <- DONT RESOLVE BY COPY! ref can relax to let\n            x ~= y;\n        }\n\n        fn main() {\n            mut w: Woot;\n            test(w);\n            return w.x.len;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        nocopy struct Woot {\n            x: i32[];\n            y: i32[];\n        };\n\n        fn test(ref w0: Woot, ref w1: Woot) {\n            ref x = w0.x;\n            //*F\n            ref y = w1.x;\n            /*/\n            ref y = w1.y;\n            //*/\n            y ~= y; // <- DONT RESOLVE BY COPY! ref can relax to let\n            x ~= y;\n        }\n\n        fn main() {\n            mut w: Woot;\n            test(w, w);\n            return w.x.len;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn indexIntoImplicit(j: i32, implicit strings: string[]) strings[j];\n\n        fn selfRecurBeforeImplicitDep(x: i32)\n        {\n            // On second solve we're talking about a region, but the argnode is gone.\n            fn T(i: i32) selfRecurBeforeImplicitDep(i / 2);\n            if (x > 1) return T(x);\n            return indexIntoImplicit(x);\n        }\n\n        fn main() {\n            let implicit strings = [ \"a\", \"b\" ];\n            return selfRecurBeforeImplicitDep(2) == \"b\" ? 0 : 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail arg invalidated by subseq eval>\n        nocopy                 <pass/></fail>\n        struct Type       { canon: string; };\n        struct SolvedNode {  type: Type;   };\n\n        fn solved(type: Type, implicit ref out: SolvedNode[]) {\n            out.grow(out.len * 100 + 1);\n\n            ref tail = out[out.len - 1];\n            tail.type.canon = type.canon;\n            return tail;\n        }\n\n        fn createMap(a: Type, b: Type): Type {\n            return Type(a.canon ~ b.canon);\n        }\n\n        fn evalTypeAnnot(nodes: string[]): SolvedNode\n        {\n            // Each T() call should invalidate the results from previous T() calls -\n            //  so this shouldn't compile if Type is nocopy.\n            fn T(i: i32)\n                evalTypeAnnot([ nodes[i] ]).type;\n\n            if (nodes.len > 1)\n                return solved(createMap(T(0), T(1))); // <<< HERE >>>\n\n            return solved(Type(nodes[0]));\n        }\n\n        fn main() {\n            let implicit mut out: SolvedNode[];\n            let annot = evalTypeAnnot([ \"a\", \"b\" ]);\n            return out.len == 10101 && annot.type.canon.len == 2 ? 0 : 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            mut x = 0;\n            let s = ++x + ++x;\n            return s - 3; // Not 4! one arg must invalidate\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail arg inval subsequent write 14:23 14:25 14:33 8:16>\n        nocopy                                    <pass/></fail>\n        struct X { x: i32; }\n        fn sum(a: X, b: X) a.x + b.x;\n\n        fn incr(ref x: X) {\n            x.x++;\n            return x;\n        }\n\n        fn main() {\n            mut x: X;\n            return sum(x.incr, x.incr) - 3; // Not 4! one arg must invalidate\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail arg inval subsequent write 23:23 23:25 23:33 16:18>\n        nocopy                                     <pass/></fail>\n        struct X { x: i32; }\n        struct Y { y: X;   }\n\n        fn x(y: Y) y.y.x;\n        fn sum(a, b) a.x + b.x;\n\n        fn incr(ref x: X) {\n            x.x++;\n            return x;\n        }\n\n        fn incr(ref y: Y) {\n            y.y.x++;\n            return y;\n        }\n\n        fn main() {\n            mut x: Y;\n            ref y = x.y;\n            return sum(y.incr, x.incr) - 3; // Not 4! one arg must invalidate\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail arg inval subsequent write 19:27 19:32 19:21 7:16>\n        nocopy                                    <pass/></fail>\n        struct X { x: i32; };\n\n        fn incr(ref x: X) {\n            x.x++;\n            return x;\n        }\n\n        fn +=(a: X, b: X) {\n            // Notice, this is not a real +=,\n            //  just checking the order of eval here.\n            return a.x + b.x;\n        }\n\n        fn test(ref x: X, ref y: X) {\n            ref xy = y || x;\n            return x.incr += xy.incr; // <- xy invalidated by x.incr\n        }\n\n        fn main() {\n            mut x: X;\n            mut y: X;\n            return test(x, y) - 3;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        <alt>\n        nocopy\n        </alt>\n        struct X { items: i32[]; };\n        fn popfirst(mut arr: X[]) arr[0]; // mcom_BlockReturn after relax: arr[] adds 'static\n        fn main() popfirst([ X() ]).items.len;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct AB { a: i32[][]; b: i32[][]; };\n\n        fn problematic_moves(mut ab: AB) {\n            ref ra = ab.a;\n            return ra.len & 1 ? ra[0] : ab.b[0];\n        }\n\n        fn main() {\n            mut ab = AB(\n                [[ 0,  1,  2,  3,  4,  5,  6,  7,  8,  9]],\n                [[10, 11, 12, 13, 14, 15, 16, 17, 18, 19]]);\n\n            mut pick = ab.problematic_moves;\n            return pick[9] - ab.a[0][9];\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        nocopy struct SolvedNode {\n            items: SolvedNode[];\n        };\n\n        fn test(mut a: SolvedNode, mut b: SolvedNode) {\n            <alt>\n            ref n = a || b;\n            <alt/>\n            ref n = a.items ? a : b;\n            </alt>\n            return n;\n        }\n\n        fn main() test([], []).items.len;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail cannot access invalidated>\n        nocopy            <pass/></fail>\n        struct SolvedNode { len: i32; }\n\n        fn createBlock(mut last: SolvedNode) {\n            let tail     = last || last;\n            let unwrap   = tail || tail;\n            last.len--;\n            return unwrap;\n        }\n\n        fn main() {\n            return createBlock([]).len;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail cannot access invalidated>\n        nocopy            <pass/></fail>\n        struct SolvedNode { items: SolvedNode[] };\n\n        fn popAndOr(ref node: SolvedNode) {\n            let N = node.items.len;\n\n            let pop = node.items[N - 1];\n            if (N > 2) {\n                node.items.pop();\n            }\n            else {\n                let head = node.items[0];\n                node = head;\n            }\n\n            return pop;\n        }\n\n        fn main() {\n            mut a = SolvedNode([ SolvedNode, SolvedNode ]);\n            let b = a.popAndOr();\n            return a.items.len + b.items.len;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail cannot access invalidated>\n        nocopy            <pass/></fail>\n        struct Items {\n            len: i32;\n        }\n\n        struct SolvedNode {\n            items: Items;\n        }\n\n        struct Nodes {\n            last: SolvedNode;\n        }\n\n        fn pop(ref n: Nodes) {\n            n.last.items.len--;\n        }\n\n        fn createBlock(mut items: Nodes) {\n            let tail = items.last;\n            let unwrap = tail.items;\n            items.pop();\n            return unwrap;\n        }\n\n        fn main() {\n            return createBlock(Nodes(SolvedNode([]))).len;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail cannot access invalidated>\n        nocopy            <pass/></fail>\n        struct SolvedNode {\n            items: SolvedNode[];\n        };\n\n        // Reducing the thing below.\n        fn createBlock(mut items: SolvedNode[]) {\n            let tail = items[items.len - 1];\n            let unwrap = tail.items;\n            items.pop();\n            return unwrap;\n        }\n\n        fn main() {\n            return createBlock([ SolvedNode ]).len;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail cannot access invalidated>\n        nocopy            <pass/></fail>\n        struct SolvedNode {\n            kind: string;\n            items: SolvedNode[];\n        };\n\n        // Same as below but mut.\n        fn createBlock(mut items: SolvedNode[]) {\n            if (items.len) for (;;) {\n                let tail = items[items.len - 1]; // const-indexed but generated mutref tail, must be F_RRET?\n                if (tail.kind != \"block\")\n                    break;\n\n                let unwrap = tail.items;\n                items.pop();\n                return unwrap;\n            }\n\n            return [];\n        }\n\n        fn main() {\n            return createBlock([]).len;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail cannot access invalidated>\n        nocopy            <pass/></fail>\n        struct SolvedNode {\n            kind: string;\n            items: SolvedNode[];\n        };\n\n        // Same as above but ref.\n        fn createBlock(ref items: SolvedNode[]) {\n            if (items.len) for (;;) {\n                let tail = items[items.len - 1];\n                if (tail.kind != \"block\")\n                    break;\n\n                let unwrap = tail.items; // unwrap needs to copy here\n                items.pop(); ////////////// <- nuked here, but ignored!\n                return unwrap;\n            }\n\n            return [];\n        }\n\n        fn main() {\n            mut items: SolvedNode[];\n            return createBlock(items).len;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(ref a: i32[]) = a.swap(0, 1);\n\n        fn main() {\n            mut nums = [1, 2];\n            nums.test();\n            return nums.len == 2 && nums[0] == 2 && nums[1] == 1\n                 ? 0\n                 : 1;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn Swap(ref a: i32[], x: i32, y: i32)\n            swap(a[x], a[y]);\n\n        fn main() {\n            mut a = [ 1, 2 ];\n            a.Swap(0, 1);\n            return a[0] - 2 == 0 && a[1] - 1 == 0 ? 0 : 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(ref arg: i32[]) {\n            let encloses_unchanged = arg;\n\n            fn closure()\n                for (mut i = 0; i < arg.len; i++)\n                    arg[i] += encloses_unchanged[i];\n\n            closure();\n            if (arg.len & 1)\n                closure();\n        }\n\n        fn main() {\n            mut a = [ 3 ];\n            test(a);\n            return a[0] - 9;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        inline fn must_not_return_ref_or_view(ref x: i32[][]) {\n            let y = x[100];\n            x.shrink(y.len);\n            return y;\n        }\n\n        fn main() {\n            mut arr: i32[][];\n            arr.grow(101);\n            arr[100] = [ 7 ]\n            return arr.must_not_return_ref_or_view()[0] - 7;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct HasVec { x: i32[] };\n        inline fn last(x: i32[]) x[x.len - 1];\n\n        <alt>\n        inline\n        </alt>\n        fn will_return_value(ref x: HasVec) {\n            let bck_will_cpy = x;\n\n            let vec0 = bck_will_cpy.x;\n            if (bck_will_cpy.x.len & 1)\n                return vec0;\n\n            x.x ~= x.x.len;\n            let vec1 = bck_will_cpy.x;\n            return vec1;\n        }\n\n        fn main() {\n            mut x = HasVec([ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 ]);\n            return will_return_value(x).last/*9*/ - x.x.last/*10*/ + 1;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn PASS_borrowCheck_incr_a_ret_b(ref a: i32, ref b: i32) {\n            a++;        // we're done writing to a before\n            return b;   //  EXTRA DRAMA: we dont cg const refs for primitives right now\n        }\n\n        fn main() {\n            mut x = 5;\n            PASS_borrowCheck_incr_a_ret_b(x, x);\n            return x - 6;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn PASS_borrowCheck_reduct(ref a: i32, ref b: i32[])\n        {\n            // If this were (ref!b a, ref b):\n            //\n            // When a points into b:\n            //  - a++ read ok, write ok\n            //   - b read ok, write ok + invalidates a\n            //    - a not usable from here on\n            //\n            // The point is we should be able to deduce this automatically,\n            //  if nothing a-related is used after b gets used for the first time,\n            //   then we're fine if b aliases a ...\n            //\n            // ... EXCEPT that's if b doesn't acceptTempCopies -\n            //  meaning it's either F_IMPLICIT or F_REF -\n            //   otherwise there's ambiguity.\n            //\n            a++;\n            b ~= 10;\n        }\n\n        fn main() {\n            mut arr = [ 9 ];\n            PASS_borrowCheck_reduct(arr[0], arr);\n            return arr[0] - arr[1];\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        struct Node { id: i32; items?: Node[]; };\n\n        fn traverse(node: Node, visit): bool {\n            if !(visit(node))\n                return false;\n\n            for (mut i = 0; i < node.items.len; i++)\n                if !(traverse(node.items[i], fn visit))\n                    return false;\n\n            return true;\n        }\n\n        fn PASS_borrowCheck(ref root: Node)\n        {\n            mut n: i32;\n            fn count(id: i32) {\n                traverse(root): |i|\n                    if (i.id == id)\n                        n++;\n            }\n\n            fn check(ref node: Node) {\n                if (node.items)\n                    for (mut i = 0; i < node.items.len; i++)\n                        check(node.items[i]);\n                else\n                    count(node.id++);\n            }\n\n            check(root);\n            return n;\n        }\n\n        fn main() {\n            mut tree = Node(0, [ Node(2), Node(2) ]);\n            return PASS_borrowCheck(tree) - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub fn grow_if_oob(ref a: $T[], i: i32) {\n            if (a.len <= i) a.grow(i + 1);\n            return a[i];\n        }\n\n        fn grow_if_oob_to_len_from_self(ref arr: i32[], idx: i32)\n            arr.grow_if_oob(arr[idx]); // i was F_REF for some reason\n\n        fn main() {\n            mut arr = [3];\n            arr.grow_if_oob_to_len_from_self(0) = 2;\n\n            mut sum = 0;\n            for (mut i = 0; i < arr.len; i++) sum += arr[i];\n            return sum - 5;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        struct BINOP {\n            P: Map(string, i32);\n        };\n\n        fn setupOperators(): BINOP\n        {\n            mut out: BINOP;\n\n            fn binop(op: string)\n                out.P[op] = 7;\n\n            binop(\",\");\n\n            return out;\n        }\n\n        shadow let BINOP = setupOperators();\n        let P_COMMA = BINOP.P[\",\"] || assert();\n\n        fn main() P_COMMA - 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        // -no-lambda\n        // This converted to a ref-returning\n        // logical chain for some reason.\n        let hex = true;\n        let trail = \"x\";\n        if (!(trail >= \"0\" && trail <= \"9\") &&\n            !(hex && (trail >= \"a\" && trail <= \"f\"\n                   || trail >= \"A\" && trail <= \"F\")))\n        {\n            return 0;\n        }\n\n        return 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Type     { i: i32; };\n        struct Token    { i: i32; };\n        struct ScopeIdx { i: i32; };\n\n        struct SolvedNode\n        {\n            kind:       string;\n            flags?:     i32;\n            value?:     string;\n            items?:     SolvedNode[];\n            token:      Token;\n\n            type:       Type;\n            target?:    ScopeIdx;\n        };\n\n        let _here: Token;\n\n        fn createDefaultInit(type: Type): SolvedNode\n        {\n            // Broken arg re-arrange.\n            return SolvedNode(\n                kind: \"definit\",\n                token: _here,\n                :type);\n        }\n\n        return createDefaultInit(Type()).target.i;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Type         { i: i32; };\n        struct Scope        { i: i32; };\n        struct Partial      { i: i32; };\n        struct Template     { i: i32; };\n        struct SolvedNode   { i: i32; };\n\n        fn Scope_add(\n            scope: &mut Scope,\n            kind: string, id: string, type: Type,\n\n            min: i32 = 0,\n            max: i32 = 0,\n            arg_n: string[]     = [],\n            arg_t: Type[]       = [],\n            arg_d: SolvedNode[] = [],\n            template: Template  = [],\n            partial: Partial    = []): i32\n        {\n            return scope.i\n                 + kind.len + id.len + type.i\n                 + min + max + arg_n.len + arg_t.len + arg_d.len\n                 + template.i + partial.i;\n        }\n\n        mut _scope: Scope;\n        let id: string;\n        let t_template: Type;\n        let min: i32;\n        let max: i32;\n        let arg_n: string[];\n        let template: Template;\n\n        return Scope_add(\n            _scope,\n            \"\", id, t_template,\n            min, max, arg_n,\n            :template);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let i = 0;\n        let items = [ \"\" ];\n        i == items.len - 1 || throw(\"what?\");\n        return i;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        return false /* test */\n             ? 0xffffff.i32 // what is this\n             : 0 // madness\n             ;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(id: i32) id;\n        return test(/*id*/0); // <- bad parse\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        return 0b101.i32 - 5;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        return 0o101.i32 - 65;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn path_normalize(p: string): string {\n            mut path = p.split(\"/\");\n\n            for (mut i = path.len; i --> 0; ) {\n                let part: &string = path[i];\n                if (part == \".\" || !part && i > 0 && i < path.len - 1)\n                    path.splice(i, 1);\n            }\n\n            return path.join(\"/\");\n        }\n\n        fn main() path_normalize(\"./hello///hey\") == \"hello/hey\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn path_normalize(p: string): string {\n            mut path = p.split(\"/\");\n\n            for (mut i = path.len; i --> 0; ) {\n                let part = path[i];\n                if (part == \".\" || !part && i > 0 && i < path.len - 1)\n                    path.splice(i, 1);\n            }\n\n            for (mut i = 1; i < path.len; i++) {\n                if (path[i] == \"..\")\n                    path.splice(--i, 2);\n            }\n\n            return path.join(\"/\");\n        }\n\n        fn path_join(a: string, b: string)\n            path_normalize(a ~ \"/\" ~ b);\n\n        fn main()\n            path_join(\"hello/hey\", \"./../you//\") == \"hello/you/\"\n                ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub struct Template { locals: ScopeMemo; }; // <- used ahead of the def, was missing q_trivial\n        pub struct ScopeMemo { x: i32; }; // <- trivial, discovered on solve here after Template is done\n        pub fn +(a: ScopeMemo, b: ScopeMemo) a.x + b.x; // <- used here after both structs are done\n\n        pub fn main() {\n            let a = Template(ScopeMemo(+3));\n            let b = Template(ScopeMemo(-3));\n            return a.locals + b.locals; // <- fails to match.\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn each(a: [$T], fn)\n            for (mut i = 0; i < a.len; i++)\n                fn(a[i]);\n\n        struct Node { kind: string; items: Node[]; flags: i32; };\n\n        let F_PREDICATE = 2;\n\n        fn parse(tokens: byte[]): Node {\n            mut _idx = 0;\n\n            fn parseStructDecl(flags! = 0): Node {\n                mut items = parseBlockLike('}');\n\n                :F_PREDICATE {\n                    items.each: |item|\n                        if (item.kind == \"let\")\n                            if (item.flags & F_PREDICATE)\n                                break :F_PREDICATE;\n\n                    items.each: |item|\n                        if (item.kind == \"let\")\n                            item.flags |= F_PREDICATE;\n                }\n\n                return Node(\"struct\", items, :flags);\n            }\n\n            fn parseBlockLike(endToken: byte): Node[] {\n                mut items: Node[] = [];\n                for (;;) {\n                    let token = tokens[_idx++];\n                    if (token == endToken)\n                        break;\n\n                    items ~= Node(\"let\", [], flags: token == '+' && F_PREDICATE);\n                }\n\n                return items;\n            }\n\n            return parseStructDecl();\n        }\n\n        fn main() {\n            let tokens = \"+-}\";\n            let p = parse(tokens).items;\n            return p.len - p[0].flags\n                         + p[1].flags * 17;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub struct MeshBuilder\n        {\n            verts?:     byte[];\n            indices?:   byte[];\n            vert_bytes: i32;\n            num_verts?: i32;\n        };\n\n        pub fn alloc(\n            using mb: &mut MeshBuilder,\n            new_verts: i32,\n            new_indices: i32)\n        {\n            verts.resize_junk((verts.len + new_verts) * vert_bytes);\n\n            let index_bytes = 4;\n            indices.resize_junk((indices.len + new_indices) * index_bytes);\n        }\n\n        pub fn setup_quads(\n            using mb: &mut MeshBuilder, // <- the 'using' introduced more bindings,\n            num_quads: i32)             // <-  advancing the target index number of this arg,\n                : &mut [byte]           // <-   confusing the callsite lifetime of this view.\n        {\n            let b0 = verts.len;\n            let v0 = num_verts;\n            let i0 = indices.len;\n\n            mut v1 = v0;\n\n            alloc(num_quads * 4, num_quads * 6);\n\n            let indices_i32: &mut [i32] =\n                indices[i0, indices.len]\n                    .view(i32);\n\n            for (mut i = 0; i < indices_i32.len; i += 6)\n            {\n                indices_i32[i    ] = v1;\n                indices_i32[i + 1] = v1 + 1;\n                indices_i32[i + 2] = v1 + 2;\n\n                indices_i32[i + 3] = v1;\n                indices_i32[i + 4] = v1 + 2;\n                indices_i32[i + 5] = v1 + 3;\n\n                v1 += 4;\n            }\n\n            num_verts = v1;\n\n            return verts[b0, verts.len];\n        }\n\n        let QUAD_VBO: f32[] =\n        [\n            -1, -1, 0,      0, 0, 1,    0, 0,\n            +1, -1, 0,      0, 0, 1,    1, 0,\n            +1, +1, 0,      0, 0, 1,    1, 1,\n            -1, +1, 0,      0, 0, 1,    0, 1,\n        ];\n\n        pub fn main()\n        {\n            mut mb = MeshBuilder(\n                vert_bytes: 4 * (3+3+2));\n\n            mb.setup_quads(1).view(f32) .= QUAD_VBO;\n\n            return mb.num_verts - 4;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn target(implicit ref _target: i32) _target;\n\n        // this suddenly reported that it doesn't see __solveStruct\n        fn GET_mut(ref x: i32) x || target;\n\n        // while i was trying to reproduce an ambig \"o\" fail here\n        fn __solveStruct(mut arg: i32): i32 {\n            if (arg) {\n                ref o = GET_mut(arg);\n                o++;\n                checkRecursions(o, o);\n            }\n            return arg;\n        }\n\n        fn checkRecursions(ref o: i32, incr: i32): void { GET_mut(o) += incr; }\n\n        fn main()\n        {\n            let implicit mut _target = 0;\n\n            return __solveStruct(1) - 4;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()\n        {\n            mut target = 0;\n            fn GET_mut(ref x: i32) x || GET_mut(target += 1);\n            return GET_mut(target) - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn target(implicit ref _itarg: i32) _itarg;\n\n        fn main()\n        {\n            let implicit mut _itarg = 0;\n            fn GET_mut(ref x: i32) x || GET_mut(target += 1);\n            return GET_mut(target) - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn target(implicit ref _itarg: i32) _itarg;\n        fn GET_mut(ref x: i32) x || GET_mut(target += 1);\n\n        fn main()\n        {\n            let implicit mut _itarg = 0;\n            return GET_mut(target) - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()\n        {\n            mut target = 0;\n            fn GET_mut(ref x: i32) x || GET_mut(++target);\n            return GET_mut(target) - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()\n        {\n            mut target = 0;\n            fn __solveStruct(mut arg: i32): i32 {\n                ref o = GET_mut(arg); o += target;\n                return target;\n            }\n\n            fn GET_mut(ref x: i32) x || (target = __solveStruct(target += 1));\n            return __solveStruct(0) - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn incr(ref a: i32) ++a;\n        fn A(ref a: i32) a || (a = B(incr(a)));\n        fn B(ref b: i32) b || (b = A(incr(b)));\n        fn main() { mut v = 0; return A(v) - 1; }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn incr(ref a: i32) ++a;\n        fn A(ref a: i32) { ref aa = a || (a = B(incr(a))); return aa; }\n        fn B(ref b: i32) { ref bb = b || (b = A(incr(b))); return bb; }\n        fn main() { mut v = 0; return A(v) - 1; }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()\n        {\n            fn each(cond, cons) cond && cons();\n            fn arg(implicit ref __arg: i32) __arg;\n            fn __solveStruct(x = 3) each(arg, || arg += x);\n            let implicit mut __arg = 1;\n            return __solveStruct - 4;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            fn each(cond, cons)                     cond && cons();\n            fn arg_incr_x(mut arg: i32)             each(arg, || arg);\n            return arg_incr_x(+7) - 7;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            fn each(cond, cons)                     cond && cons();\n            fn arg_incr_x(mut arg: i32, x = 0)      each(arg, || arg += x);\n            return arg_incr_x(+7, -11) + 4;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            fn each(cond, cons)                     cond && cons();\n            fn arg_incr_x(mut arg: i32, x = 0): i32 {\n                each(arg, || arg += x);\n                return arg;\n            }\n            return arg_incr_x(+7, -11) + 4;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()\n        {\n            mut target = 0;\n\n            fn each(cond, cons) cond && cons();\n\n            fn GET_mut(ref x: i32) x || (target = __solveStruct(target));\n\n            fn __solveStruct(mut arg: i32, x = 0): i32 {\n                each(arg, || arg += x);\n                if (arg) {\n                    ref o = GET_mut(arg);\n                    o++;\n                    checkRecursions(o, o);\n                }\n                return arg;\n            }\n\n            fn checkRecursions(ref o: i32, incr: i32): void { GET_mut(o) += incr; }\n\n            return __solveStruct(1) - 4;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()\n        {\n            mut target = 0;\n\n            // this suddenly reported that it doesn't see __solveStruct\n            fn GET_mut(ref x) x || (target = __solveStruct(target));\n\n            // while i was trying to reproduce an ambig \"o\" fail here\n            fn __solveStruct(mut arg: i32): i32 {\n                if (arg) {\n                    ref o = GET_mut(arg);\n                    o++;\n                    checkRecursions(o, o);\n                }\n                return arg;\n            }\n\n            fn checkRecursions(ref o: i32, incr: i32): void { GET_mut(o) += incr; }\n\n            return __solveStruct(1) - 4;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        struct ValueType { modid: i32; };\n        struct Type { using vtype: ValueType; };\n        struct Target { modid: i32; index: i32; };\n        struct Overload { name: string; id: string; };\n\n        fn GET(target: Target): Overload =\n            Overload(\n                name: \"N\" ~ target.index,\n                  id: \"I\" ~ target.index);\n\n        fn main() {\n            mut specs: Map(string, Target);\n\n            fn setSpec(mangle: string) {\n                ref t = specs[mangle] ||= Target;\n\n                // This template should start expanding on GET(target).name,\n                //  which should conflict with overload name.\n                fn name(shadow target)\n                    GET(target) <fail ambig>\n                        .name;  <pass/>\n                        .id;    </fail>\n\n                return t.name;\n            }\n\n            return setSpec(\"hey\").len - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub struct ScopeSkip { start: i32; end: i32; };\n\n        pub fn each(items: [$T], scope_skip: ScopeSkip[], fn, start = 0) {\n            let END_DUMMY = ScopeSkip(start: items.len, end: items.len);\n\n            mut i0 = start;\n            for (mut i = 0; i < scope_skip.len + 1; i++) {\n                let ss = i < scope_skip.len ? scope_skip[i] : END_DUMMY;\n                if (ss.end <= i0)\n                    continue;\n\n                let i1 = ss.start;\n                for (shadow mut i = i0; i < i1; i++)\n                    fn(items[i]);\n\n                i0 = ss.end;\n            }\n        }\n\n        pub fn test(items?: i32[]) {\n            mut sum = 0;\n            let ss: ScopeSkip[];\n            items.each(ss, |item| sum += item, start: sum);\n            return sum;\n        }\n\n        pub fn main() test();\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn setupOperators(P_PREFIX_UNARY) // <- template\n        {\n            struct BINOP {\n                PRECEDENCE:     Map(string, i32);\n                RIGHT_TO_LEFT:  Map(i32,   bool);\n            };\n\n            mut out: BINOP; // <- no BINOP in scope\n            mut precedence = P_PREFIX_UNARY;\n            mut rightToLeft = false;\n\n            fn binop(ops: string[]) {\n                precedence++;\n                out.RIGHT_TO_LEFT[precedence] = rightToLeft;\n                for (mut i = 0; i < ops.len; i++)\n                    out.PRECEDENCE[ops[i]] = precedence;\n            }\n\n            binop([ \"|>\" ]);\n\n            //\n            return out;\n        }\n\n        let BINOP = setupOperators(-1);\n\n        fn main() {\n            let precedence = BINOP.PRECEDENCE[\"|>\"];\n            return precedence;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn each(a: [$T], fn, start!?: i32)\n            for (mut i = start; i < a.len; i++)\n                fn(a[i]);\n\n        fn main() {\n            mut sum = 0;\n            let a = [ 1, 2, 3 ];\n            a.each(|i| sum += i, start: sum);   // <- start inferred to ref i32, which couldnt definit\n            return sum - 6;                     //     perhaps we can use the optionality to infer constness\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail novec>\n        novec // Abusing to test novec, unrelated to the test\n        <pass/></fail>\n        fn ScopeSkip_push(ref scope_skip: i32[]) {\n            if (scope_skip) scope_skip[0]++;\n            else            scope_skip ~= 1;\n        }\n\n        fn main() {\n            mut scope_skip = [ 1 ];\n            ScopeSkip_push(scope_skip);\n            return scope_skip[0] - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Module  { cpp:    string; };\n        struct Context { module: Module; };     // Simplification of next test, no need to consider COW here\n\n        fn snippet2cpp(cpp: string): string {\n            let ctx = Context( Module(cpp) );\n            {\n                let module = ctx.module;        // This was const Module& =  ... which can't be moved from.\n                if (module.cpp)\n                    return module.cpp;          ;; EXPECT return static_cast<fu_STR&&>\n            }\n\n            return \"\";\n        }\n\n        fn main() snippet2cpp(\"1\").len - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Module  { cpp:     string;   };\n        struct Context { modules: Module[]; };  // Module[] is COW-capable -\n                                                //  - either prove there's no COW,\n        fn snippet2cpp(cpp: string): string {   //  - or don't attempt to move out the item.\n            let ctx = Context([ Module(cpp) ]);\n            for (mut i = 0; i < ctx.modules.len; i++)\n            {\n                let module = ctx.modules[i];    ;; TODO .unique(i)\n                if (module.cpp)\n                    return module.cpp;          ;; TODO return static_cast<fu_STR&&>\n            }\n\n            return \"\";\n        }\n\n        fn main() snippet2cpp(\"1\").len - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(x: string) {\n            // cg fail: fwd annots of the two fns where unconsting hey to \"enable move\",\n            //          basically the decision was made in the wrong scope.\n            let hey = \"hey\";\n            fn inner(you: string) you && hey ~ you || outer(\"what#1\");\n            fn outer(arg: string) inner(arg && \" \" ~ arg) || inner(\"what#2\");\n            return outer(x);\n        }\n\n        fn main() test(\"you\").len - 7;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Target { modid!: i32; packed!: i32; };\n        inline fn index(a: Target) a.packed;\n\n        <split/>\n\n        struct CurrentFn { using target: Target; };\n        fn hello(c?: CurrentFn) c.index;\n        fn main() hello;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct ID   { offset: i32;  };\n        struct Data { items:  ID[]; };\n\n        using fn Data(implicit all: Data[], nid: ID): Data {\n            return all[nid.offset];\n        }\n\n        fn test(node: ID) {\n            let init = node.items[0];\n            return init.items.len;\n        }\n\n        fn main() {\n            let implicit all =  [ Data([ ID(1)      ])\n                                , Data([ ID, ID, ID ]) ];\n\n            return 0.ID.test - 3;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        struct Context\n        {\n            fuzzy: Map(string, string);\n            files: string[];\n        }\n\n        fn resolveFile(\n            implicit ctx: &mut Context,\n            from: string, name: string): string\n        {\n            let path    = from ~ name;\n            let cached  = ctx.fuzzy[path];\n            if (cached)\n                return cached == \"\v\" ? \"\" : cached;\n\n            fn tryResolve(): string\n            {\n                let exists = file::size(path) >= 0;\n                if (exists)\n                    return path;\n\n                return \"\";\n            };\n\n            let resolve = tryResolve();\n            ctx.fuzzy[path] = resolve || \"\v\";\n            return resolve;\n        }\n\n        pub fn resolveFile(\n            implicit ctx: &mut Context,\n            path: string): string\n        {\n            let fuzzy = path.find('\v');\n            if (fuzzy > 0)\n            {\n                let from = path.slice(0, fuzzy);\n                let name = path.slice(fuzzy + 1);\n                if (from && name && !name.has('\v'))\n                {\n                    let res = resolveFile(:from, :name);\n                    if (res)\n                        return res;\n\n                    // Tests have the files prepopulated,\n                    //  we only pay the cost of lookup when about to fail compile.\n                    let prepopulated = from ~ name;\n                    if (ctx.files.has(prepopulated))\n                        return prepopulated;\n                }\n            }\n\n            return path;\n        }\n\n        fn main() {\n            let implicit mut ctx: Context;\n            return resolveFile(\"a\").len - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct S { i: i32; };\n\n        fn hello(ref s: S, w: i32) {\n            infix fn |=(ref s: S, v: i32)\n                s.i |= v << w;\n\n            s |= 2;\n        }\n\n        fn main() {\n            mut s = 1.S;\n            s.hello(3);\n            return s.i - 17;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn lex(src: string) {\n            let end = src.len;\n            mut idx = 0;\n\n            fn err_str(idx1: i32) {\n                while (idx < end && src[idx] == ' ') idx++;\n                return src.slice(idx, idx1);\n            }\n\n            fn err(idx1_x2: i32) err_str(idx1_x2 /2);\n            return err(end *2);\n        }\n\n        fn main() lex(\"    hello\").len - 5;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub fn ZERO(implicit ref sum: i32, mut sources: string[]): void\n        {\n            // Fuzzing module splits.\n            for (mut i = 0; i < sources.len; i++)\n            {\n                for (;;)\n                {\n                    ref src     = sources[i];\n\n                    mut start0  = src.find(\"[split/]\");\n                    if (start0 < 0)\n                        break;\n\n                    let start00 = start0;\n                    let start1  = start0 + 8;\n                    while (start0 && src[start0 - 1] == ' ') start0--;\n\n                    let moduleA = src.slice(0, start0);\n                    let moduleB = src[start0, start00] ~ \"import _\" ~ i ~ \";\" ~ src[start1, src.len];\n                    let without = src[0, start0] ~ src[start1, src.len];\n\n                    sources[i]  = without;\n                    ZERO(:sources);\n\n                    sources[i]  = moduleA;\n                    sources.insert(i + 1, moduleB);\n                }\n\n                sum += sources[i].len;\n            }\n        }\n\n        fn main() {\n            let implicit mut sum: i32;\n\n            ZERO( \"AAAA|BB[split/]CC\".split(\"|\") );\n            let expect = 4+2+2 + 4+2+2 + 10; // 10 = \"import _0;\"\n\n            return sum - expect;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct SolvedNode {\n            bli: i32;\n        };\n\n        // --> [2] ... triggered the solve of this fn, ...\n        fn SolvedNode(blah: string) {\n            return SolvedNode(blah.len.NOT_PREPPED_YET);\n        }\n\n        // [1] During prep, this type annotation ...\n        fn ARG_ANNOT_TRIGGERS_SOLVE(node: SolvedNode) {\n            return node.bli + 2;\n        }\n\n        // --> --> [3] ... which couldnt yet see this fn (prep didnt reach here).\n        fn NOT_PREPPED_YET(x: i32) {\n            return x * 2;\n        }\n\n        fn main() {\n            return ARG_ANNOT_TRIGGERS_SOLVE(SolvedNode(\"hello\")) - (2*5+2);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct SolvedNode       { nodeidx: i32; };\n        struct CurrentFn        { using out: SolvedNode; };\n\n        struct Target           { index: i32; };\n        struct SolvedNodeData   { target: Target; };\n        struct Overload         { nodes: SolvedNodeData[]; };\n\n        fn test(ref overloads: Overload[],\n                ref _current_fn: CurrentFn)\n        {\n            using fn GET(target: Target) {\n                let o = overloads[target.index];\n                return o;\n            }\n\n            using fn SolvedNodeData(nid: SolvedNode) {\n                let nodes = overloads[nid.nodeidx].nodes;\n                return nodes[nid.nodeidx];\n            }\n\n            let current_fn  = _current_fn.target;               // <- this is a ref into overloads\n            let debug_2     = current_fn && GET(current_fn);    // <- this is the perceived write to overloads\n            return debug_2 && current_fn.index;                 // <- which invalidates this read\n        }\n\n        fn main() {\n            mut _current_fn = CurrentFn(SolvedNode(0));\n            mut overloads   = [ Overload([ SolvedNodeData(Target(0)) ]) ];\n\n            return test(overloads, _current_fn);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct SolvedNode       { nodeidx: i32; };\n        struct CurrentFn        { using out: SolvedNode; };\n\n        struct Target           { index: i32; };\n        struct SolvedNodeData   { target: Target; };\n        struct Overload         { nodes: SolvedNodeData[]; };\n\n        fn test(ref overloads: Overload[],\n                ref _current_fn: CurrentFn)\n        {\n            using fn GET(target: Target) {\n                if (target.index != 303) // Same as above, different setup.\n                    return overloads[target.index];\n\n                return []; // Also this fails to solve: cannot definit mutref\n            }\n\n            using fn SolvedNodeData(nid: SolvedNode) {\n                return nid.nodeidx != 303 // Same as above, rewording as a logical.\n                    && overloads[nid.nodeidx].nodes[nid.nodeidx];\n            }\n\n            let current_fn  = _current_fn.target;               // <- this is a ref into overloads\n            let debug_2     = current_fn && GET(current_fn);    // <- this is the perceived write to overloads\n            return debug_2 && current_fn.index;                 // <- which invalidates this read\n        }\n\n        fn main() {\n            mut _current_fn = CurrentFn(SolvedNode(0));\n            mut overloads   = [ Overload([ SolvedNodeData(Target(0)) ]) ];\n\n            return test(overloads, _current_fn);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Token {\n            col: i32;\n            line: i32;\n            value: string;\n        };\n\n        fn parse(tokens: Token[]) {\n            mut _idx = 0;\n            mut _loc = 0;\n\n            fn fail(mut reason = \"\") {\n                let loc  = tokens[_loc];\n                let here = tokens[_idx];\n                if (!reason)\n                    reason = \"Unexpected '\" ~ here.value ~ \"'.\";\n\n                let l0 = loc.line;  let c0 = loc.col;\n                let l1 = here.line; let c1 = here.col;\n\n                let addr = l1 == l0\n                    ? \"@\" ~ l1 ~ \":\" ~ c1\n                    : \"@\" ~ l0 ~ \":\" ~ c0 ~ \"..\" ~ l1 ~ \":\" ~ c1;\n\n                return throw(addr ~ \":\\n\\t\" ~ reason);\n            }\n\n            fn consume(value: [byte], err = \"\") {\n                let token = tokens[_idx];\n                if (token.value == value) {\n                    _idx++;\n                    return token;\n                }\n\n                return fail((err || \"Expected\") ~ \" '\" ~ value ~ \"', got '\" ~ token.value ~ \"'.\");\n            }\n\n            fn parseRoot() {\n                let ret = consume(\"sof\");\n                _loc = _idx;\n                return ret;\n            }\n\n            return parseRoot();\n        }\n\n        fn main() {\n            return parse([ Token(1, 1, \"sof\") ]).value.len - 3;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn CallerNode(mut t?: i32, arr?: i32[])\n        {\n            for (mut i = 0; i < arr.len; i++) {\n                return CallerNode(arr[i]);\n                //     ^^^^^^^^^^\n                // fn CallerNode: Arg #1, arr not assignable to host_arg:\n                //      expect: []+252i32: ref copy resize\n                //      actual: []+252i32: ref\n            }\n\n            return t;\n        }\n\n        fn main() = CallerNode();\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Target       { index: i32; };\n        struct SolvedNode   { target: Target; args: SolvedNode[]; };\n\n        fn CallerNode(\n            mut target: Target,\n            mut args: SolvedNode[] = [],\n            reorder?: i32[],\n            conversions?: Target[][]): SolvedNode\n        {\n            if (reorder) {\n                mut args_out: SolvedNode[]; args_out.resize(reorder.len);\n                for (mut i = 0; i < reorder.len; i++) {\n                    let idx = reorder[i];\n                    if (idx >= 0)\n                        args_out[i] = args[idx];\n                }\n\n                args = args_out;\n            }\n\n            for (mut argIdx = 0; argIdx < conversions.len; argIdx++) {\n                let conversion = conversions[argIdx];\n                for (mut i = 0; i < conversion.len; i++) {\n                    args[argIdx] = CallerNode(conversion[i]);\n                    //             ^^^^^^^^^^\n                    // fn CallerNode: Arg #2, reorder not assignable to host_arg:\n                    //      expect: []+252i32: ref copy resize\n                    //      actual: []+252i32: ref copy\n                }\n            }\n\n            return SolvedNode(:target, :args);\n        }\n\n        fn main() {\n            return CallerNode(Target(0)).target.index;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn qSTACK(x: i32) {\n            let rec = x & 1 && \"rec \";\n            let via = !rec && qSTACK(x / 2);\n            return \"\\n\" ~ rec ~ \"at #\" ~ x ~ via;\n        }\n\n        fn main() qSTACK(2).len - 2 - 4 - 8 - 2;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn path_relative(from: string, to: string): string {\n            let min = from.len < to.len ? from.len : to.len;\n\n            mut same = 0;\n            for (mut i = 0; i < min; i++) {\n                let a = from[i];\n                let b = to[i];\n\n                if (b != a)\n                    break;\n\n                if (b == '/')\n                    same = i + 1;\n            }\n\n            mut res: string;\n            for (mut i = same; i < from.len; i++)\n                if (from[i] == '/')\n                    res ~= \"../\";\n\n            res ~= to.slice(same);\n            return res;\n        }\n\n        fn main() {\n            let from    = \"/a/b/c\";\n            let to      = \"/a/e/f\";\n            let rel     = path_relative(:from, :to);\n\n            return rel == \"../e/f\" ? 0 : 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        inline fn test(ref a: i32[]) {\n            if ((a[0] + a[2]) & 1) {\n                shadow ref a = a[0, 2];\n                return a;\n            }\n            else {\n                shadow ref a = a[2, 4];\n                return a;\n            }\n        }\n\n        inline fn sum(ref a: [i32]) {\n            mut sum = 0;\n            for (mut i = 0; i < a.len; i++) sum += a[i];\n            for (mut i = 0; i < a.len; i++) a[i] = sum;\n            return a;\n        }\n\n        fn main() {\n            mut a = [ 1, 2, 3, 4 ];\n            return sum(test(a))[0] - 7;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        inline fn test(ref a: i32[], ref b: i32[]) {\n            if ((a[0] + b[0]) & 1)\n                return a;\n\n            return b;\n        }\n\n        inline fn sum(ref a: i32[]) {\n            mut sum = 0;\n            for (mut i = 0; i < a.len; i++) sum += a[i];\n            a.shrink(1);\n            a[0] = sum;\n            return a;\n        }\n\n        fn main() {\n            mut a = [ 1, 2 ];\n            mut b = [ 3, 4 ];\n            return sum(test(a, b))[0] - 7;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        inline fn grow_if_oob(ref a: $T[], i: i32): &mut $T {\n            if (a.len <= i)\n                a.grow(i + 1);\n\n            return a[i];\n        }\n\n        inline fn hey(ref arr: i32[], a: i32) {\n            if (a & 1) {\n                arr.grow_if_oob(a)++;\n                <alt>\n                return arr[0, a + 1];\n                </alt>\n            }\n\n            return arr;\n        }\n\n        fn main() {\n            mut a = [ 1 ];\n            return a[0] - hey(a, 1)[1];\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn serializeType(type: string, debug: string)\n            debug ~ \":\" ~ type;\n\n        fn mangleArguments(args: [$T]): string {\n            mut mangle = \"\";\n            for (mut i = 0; i < args.len; i++) {\n                if (i) mangle ~= \",\";\n                mangle ~= serializeType(args[i], debug: \"M\");\n            }\n            return mangle;\n        }\n\n        fn trySpecialize(args: string[], ref args_mangled: string) {\n            args_mangled ||= mangleArguments(args);\n            return args_mangled.len;\n        }\n\n        fn main() {\n            mut args_mangled: string;\n            return trySpecialize([ \"a\", \"b\" ], args_mangled) - 7;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let EMIT_CPP = 1 << 0;\n        let EMIT_OBJ = 1 << 1;\n        let EMIT_BIN = 1 << 2;\n\n        struct Cmd { self: string; options: i32 };\n\n        inline fn unlessHasExt(str: string) {\n            let idx = str.find('.');\n            if (idx > 0)\n                return [];\n\n            return str;\n        }\n\n        fn parseOptions(argv: string[]) {\n            mut idx = 0;\n            fn next(): string {\n                let i = idx++;\n                if (i < argv.len) return argv[i];\n                return \"\";\n            }\n\n            let self = next();\n            if (argv.len == 1) // Exit 0 on no command, else we fail build-checks.\n                return [];\n\n            mut options: i32;\n            mut val = next();\n            while (val.len > 1 && val[0] == '-') {\n                mut opt = val;\n                if (opt[1] != '-') {\n                    opt = [ opt[1] ];\n                    val = '-' ~ val.slice(2);\n                    if (val == \"-\")\n                        val = next();\n                }\n                else\n                    val = next();\n\n                fn option(short: string, o: i32) {\n                    if (opt == short) {\n                        options |= o;\n                        opt = \"\";\n                    }\n                }\n\n                option(\"c\", EMIT_CPP);\n                option(\"o\", EMIT_OBJ);\n                option(\"b\", EMIT_BIN);\n\n                if (opt)\n                    throw(\"Unknown option: '\" ~ opt ~ \"'.\");\n            }\n\n            return Cmd(unlessHasExt(self), options);\n        }\n\n        fn main() = parseOptions([ \"./hey\", \"-c\", \"-b\" ]).options - (EMIT_CPP | EMIT_BIN);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn withPrefixed(b: byte, view: [byte], fn) {\n            mut tmp: string;\n            return fn(view.len > 1 ? view : tmp = b ~ view);\n        }\n\n        fn main() withPrefixed('a', \"b\"): |ab| return ab.len - 2;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn tryIntersect(left: [byte], right: [byte], withMatch) {\n            let l =  left[0];\n            let r = right[0];\n            let lq = l > '0' && l < '8';\n            let rq = r > '0' && r < '8';\n\n            if (left[lq && 1, left.len] != right[rq && 1, right.len])\n                return false;\n\n            let ll = lq && l.i32 - '0'.i32;\n            let rr = rq && r.i32 - '0'.i32;\n            let qq = ll | rr;\n\n            <alt>\n            mut tmp: string;\n            return withMatch(qq == ll ? left\n                           : qq == rr ? right\n                           : tmp = (qq.byte ~ left[lq && 1, left.len]),\n            <alt/>\n            return withMatch(qq == ll ? left\n                           : qq == rr ? right\n                           : qq.byte ~ left[lq && 1, left.len],\n            </alt>\n                left?:  qq == ll,\n                right?: qq == rr);\n        }\n\n        fn main() {\n            tryIntersect(\"7a012345678900123456789001234567890\"\n                       , \"5a012345678900123456789001234567890\"): |m, left!|\n            {\n                return m == \"7a012345678900123456789001234567890\" && left ? 0 : 100;\n            }\n\n            return 101;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn tryIntersect(left: [byte], right: [byte], ifLeft, ifNotLeft) {\n            let l =  left[0];\n            let r = right[0];\n            let lq = l > '0' && l < '8';\n            let rq = r > '0' && r < '8';\n\n            if (left[lq && 1, left.len] != right[rq && 1, right.len])\n                return false;\n\n            let ll = lq && l.i32 - '0'.i32;\n            let rr = rq && r.i32 - '0'.i32;\n            let qq = ll | rr;\n\n            if (qq == ll)   ifLeft();\n            else            ifNotLeft(qq == rr ? right : right[rq && 1, right.len]);\n\n            return true;\n        }\n\n        fn TP_upsert(ref typeParams!: string, id!: string, canon: string) {\n            let start = TP_get(:typeParams, :id);\n            if (start < 0) {\n                typeParams ~= id;\n                typeParams ~= canon;\n                typeParams ~= '\t';\n                return true;\n            }\n\n            let end = typeParams.find('\t', :start);\n            return tryIntersect(typeParams[start, end], canon,\n                ifLeft: ||\n                {\n                    return true;\n                },                  // <- Lint complained about the nested curlies here ...\n                ifNotLeft: |inter|\n                {\n                    typeParams.splice(start, end - start, inter);\n                    return true;\n                }); // <-  ... and here.\n\n            return false;\n        }\n\n        fn main() {\n            mut typeParams = \"$T 3hey\t\";\n            return TP_upsert(:typeParams, \"$T\", \"4hey\")\n                && typeParams == \"$T 7hey\t\" ? 0 : 101;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let a = 7;\n        let b = a && 3;\n        return b - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct S { i: i32; }\n\n        let a = S(0);\n        let b = S(3);\n\n        return a.i\n            || (b || S(4)).i * 2 - (a || S(6)).i\n            && throw(\"woot\");\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct TrueStory { kind: string; value: string; };\n\n        mut specialized = TrueStory(kind: \"fn\", value: \"val\");\n\n        specialized.kind == \"fn\" && specialized.value || throw(\"nope\");\n\n        let v: &mut string = specialized.kind == \"fn\"\n                          && specialized.value\n                          || throw(\"nope\");\n        v ~= \"ue\";\n\n        return specialized.value == \"value\" ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Token {\n            value: string;\n        };\n\n        fn consume(): Token {\n            return Token(\"hey\");\n        };\n\n        fn main(): i32 {\n            let a = 3;\n            let v = a && consume().value;\n            return v.len - a;\n        };\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct ScopeIdx { raw: i32; };\n        <fail bad call>\n        fn thing(x: i32) x;             <pass/>\n        fn thing(x: i32) ScopeIdx(x);   </fail>\n        mut _return_scope: ScopeIdx;\n\n        fn hey(x: i32) {\n            let scope0 = thing(x);\n            _return_scope = scope0; //overload\n            return _return_scope.raw;\n        }\n\n        return hey(0);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn maybe_empty(N: i32) {\n            mut res: string[];\n            for (mut i = 0; i < N; i++) res ~= [ \"world!\" ]; // same as below but wrapped\n            return res;\n        }\n        fn main() {\n            mut arr = [ \"Hello\" ];\n            for (mut i = 0; i < 2; i++) arr ~= maybe_empty(i); // will append empty\n            return arr.join(\" \") == \"Hello world!\" ? 0 : 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn maybe_empty(N: i32) {\n            mut res: string[];\n            for (mut i = 0; i < N; i++) res ~= \"world!\"; // cpp template issue here\n            return res;\n        }\n        fn main() {\n            mut arr = [ \"Hello\" ];\n            for (mut i = 0; i < 2; i++) arr ~= maybe_empty(i); // will append empty\n            return arr.join(\" \") == \"Hello world!\" ? 0 : 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            mut _info = \"abc\";\n\n            pure fn fail(mut reason: string = \"\") {\n                ref info = _info[0]; // <- notice the ref, has to relax away\n                reason ~= info && info.i32;\n                return reason;\n            }\n\n            return fail.len - 2; // 'a' is 97, \"97\".len is 2.\n        }\n    "_fu, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        let q_mutref = 1;\n        pub let RELAX_mutref_only = q_mutref;\n        pub fn what(relax_mask: i32) relax_mask -1;\n    "_fu, "\n        import _0;\n        fn main() what(RELAX_mutref_only);\n    "_fu } }, s_Options{}, testdiffs);
    TODO_0X4li7Vn("\n        pub fn pairs(a: Map($K, $V), fn) {\n            let k = a.keys;\n            let v = a.values;\n            for (mut i = 0; i < k.len; i++)\n                fn(k[i], v[i]);\n        }\n\n        fn main() {\n            mut map: Map(i32, i32);\n            map[1] = 2;\n            map[3] = 4;\n\n            mut sum = 0;\n            map.pairs(|k, v| sum += k + v * 100);\n            return sum - 604;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            try         { return 0; }\n            catch (e)   { return e == \"x=2: even!\" ? 11 : 22; }\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn fail(str: string)\n            throw(str ~ \"!\");\n\n        fn test(x: i32)\n        {\n            // We want to override fail but\n            //  we want to call it within the override,\n            //   so we can do this i guess?\n            //\n            shadow let fail = |mut str: string| {\n                str = \"x=\" ~ x ~ \": \" ~ str;\n                fail(str);\n            };\n\n            return x & 1 || fail(\"even\");\n        }\n\n        fn main() {\n            try {\n                return test(2);\n            }\n            catch (e) {\n                <alt>\n                return e == \"x=2: even!\" ? 0 : 10;\n                <alt/>\n                shadow let e = \"hello \" ~ e;\n                return e == \"hello x=2: even!\" ? 0 : 10;\n                </alt>\n            }\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn ARR_LAST(a: $T[])\n            case ($a -> &mut $T[]): &mut $T a[a.len - 1];\n            case ($a -> &    $T[]): &    $T a[a.len - 1];\n\n        fn main()\n        {\n            let a = [1];\n            mut b = [2];\n\n            b.ARR_LAST += a.ARR_LAST;\n            return b.ARR_LAST - 3;\n        };\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn ARR_LAST(a: $T[])\n            case ($a -> &mut $T[]): &mut $T a[a.len - 1];\n            case ($a -> &    $T[]): &    $T a[a.len - 1];\n\n        let a = [1];\n        mut b = [2];\n\n        b.ARR_LAST += a.ARR_LAST;\n        return b.ARR_LAST - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct S { i: i32; }\n        fn test(mut x: S) x.i += 1;\n        return S(-1).test;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn ARR_LAST(a: $T[])\n            a[a.len - 1];\n\n        let a = [1];\n        mut b = [2];\n\n        b.ARR_LAST += a.ARR_LAST;\n        return b.ARR_LAST - [3].ARR_LAST;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct mat4 { i: i32; };\n        struct RenderFrame { u_mat4_VP: mat4; };\n\n        inline fn mat4_identity() mat4(1);\n\n        fn test(output: &mut RenderFrame) {\n            output.u_mat4_VP = mat4_identity;\n        }\n\n        fn main() {\n            mut ret: RenderFrame;\n            test(ret);\n            return ret.u_mat4_VP.i - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub struct ScopeSkip {\n            start: i32;\n            end:   i32;\n        };\n\n        pub fn search(skip: ScopeSkip = [])\n            skip.end - skip.start;\n\n        pub fn main()\n            <fail bad call>\n            ScopeSkip(min: -1, max: +1)     <pass/>\n            ScopeSkip(start: -1, end: +1)   </fail>\n                .end - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct vec3 { x?: f32; y?: f32; z?: f32; };\n\n        struct mat34 {\n            mx: vec3; my: vec3; mz: vec3;\n            mo: vec3;\n        };\n\n        inline fn mat34_identity()\n            mat34(\n                vec3(x: 1),\n                vec3(y: 1),\n                vec3(z: 1), vec3 /*point3*/);\n\n        // What broke is this using reports a conflict,\n        //  because 'determinant' got expanded within 'inverse',\n        //   and there's another using mat34 there.\n        //    Basically we totally don't want it to expand there.\n        inline fn determinant(using _: mat34): f32\n            - mz.x * my.y * mx.z + my.x * mz.y * mx.z + mz.x * mx.y * my.z\n            - mx.x * mz.y * my.z - my.x * mx.y * mz.z + mx.x * my.y * mz.z;\n\n        fn inverse(using mat: mat34): mat34\n        {\n            let idet = 1 / mat.determinant;\n\n            let i_mx = vec3(\n                idet * (- mz.y * my.z + my.y * mz.z),\n                idet * (+ mz.y * mx.z - mx.y * mz.z),\n                idet * (- my.y * mx.z + mx.y * my.z));\n\n            let i_my = vec3(\n                idet * (+ mz.x * my.z - my.x * mz.z),\n                idet * (- mz.x * mx.z + mx.x * mz.z),\n                idet * (+ my.x * mx.z - mx.x * my.z));\n\n            let i_mz = vec3(\n                idet * (- mz.x * my.y + my.x * mz.y),\n                idet * (+ mz.x * mx.y - mx.x * mz.y),\n                idet * (- my.x * mx.y + mx.x * my.y));\n\n            return mat34(\n                i_mx, i_my, i_mz,\n\n                vec3( // point3\n                      mo.x * -i_mx.x\n                    + mo.y * -i_my.x\n                    + mo.z * -i_mz.x,\n\n                      mo.x * -i_mx.y\n                    + mo.y * -i_my.y\n                    + mo.z * -i_mz.y,\n\n                      mo.x * -i_mx.z\n                    + mo.y * -i_my.z\n                    + mo.z * -i_mz.z));\n        }\n\n        fn main() i32 <|\n            mat34_identity.inverse.determinant - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct TEA\n        {\n            v0: u32;\n            v1: u32;\n        }\n\n        inline fn r4(using _: &mut TEA, sum: &mut u32)\n        {\n            mut delta: u32 = 0x9e3779b9;\n\n            for (mut i = 0; i < 4; i++) {\n                sum += delta;\n\n                v0 += ((v1<<4) + 0xA341316C) ^ (v1 + sum) ^ ((v1>>5) + 0xC8013EA4);\n                v1 += ((v0<<4) + 0xAD90777D) ^ (v0 + sum) ^ ((v0>>5) + 0x7E95761E);\n            }\n        }\n\n        // Stack overflow solving this,\n        //  argmax is +inf, and it just\n        //   re-enters and re-enters.\n        inline fn r4(tea: &mut TEA) {\n            mut sum: u32; tea.r4(sum);\n        }\n\n        fn main() {\n            mut tea: TEA;\n            tea.r4();\n            return (tea.v0 ^ tea.v0).i32;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        struct ScopeSkip {\n            min: i32;\n            max: i32;\n        };\n\n        fn main() {\n            let a = 1;\n            mut x: ScopeSkip; x = []; x = [ -2, 0 ]; // Inference fail.\n            mut t: ScopeSkip; t = x.min && [ x.min, a ];\n            return a + t.min + t.max;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        // Same as below, but avoids the $T call, which is also broken somehow.\n        //  DONT DELETE ME after you fix the $T, its a great example of stupid codegen -\n        //   we emit useless overloads for mutrefs when its clearly useless.\n\n        fn rec_cases(a: $T)\n        case ($T.is::primitive) {\n            if (a)      return rec_cases(a / 2);\n            else        return a;\n        }\n        default {\n            if (a.i) {\n                shadow mut a = a;\n                a.i /= 2;\n                return rec_cases(a);\n            }\n            else        return rec_cases(a.i);\n        }\n\n        struct X { i: i32; };\n        fn main() X(1).rec_cases;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn rec_cases(a: $T)\n        case ($T.is::primitive) {\n            if (a)      return rec_cases(a / 2);\n            else        return a;\n        }\n        default {\n            if (a.i)    return rec_cases($T(i: a.i / 2));\n            else        return rec_cases(a.i);\n        }\n\n        struct X { i: i32; };\n        fn main() X(1).rec_cases;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct X { i: i32; };\n        type Y = X;\n        fn main() Y(1).i / 2;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Node {\n            kind  ?: string;\n            items ?: Node[];\n            value ?: string;\n        };\n\n        fn astReplace(node: Node, mutate): Node {\n            fn walk(shadow ref node: Node) {\n                for (mut i = 0; i < node.items.len; i++)\n                    walk(node.items[i]);\n\n                mutate(node);\n            }\n\n            shadow mut node = node;\n            walk(node);\n            return node;\n        }\n\n        fn test(n: Node, a: string, b: string) {\n            return astReplace(n, |ref item: Node| {\n                if (item.value == a) {\n                    if (item.items.len == 1 && item.kind == \"call\")\n                        item.value = b;\n                    else if (item.kind == \"str\")\n                        item.value = b;\n                }\n            });\n        }\n\n        fn main() {\n            let v0 = Node(kind: \"str\", value: \"woot\");\n            let v1 = v0.test(\"woot\", \"who\");\n            return v1.value.len - 3;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct SolvedNode {\n            value: i32;\n            items?: SolvedNode[];\n        };\n\n        fn visitNodes(_v: &mut $V, _n: SolvedNode) {\n\n            fn traverse(v: &mut $V, n: SolvedNode) {\n                v.visit(n);\n                for (mut i = 0; i < n.items.len; i++)\n                    traverse(v, n.items[i]);\n            }\n\n            traverse(_v, _n);\n        };\n\n        struct Visitor {\n            sum: i32;\n        };\n\n        fn visit(using v: &mut Visitor, node: SolvedNode) {\n            sum += node.value;\n        };\n\n        fn main(): i32 {\n            let tree = SolvedNode(3,\n                [ SolvedNode(5), SolvedNode(7) ]);\n\n            <alt>\n            // This is an aside, managed to lose the copy qual when working structs\n            //  Initially noticed it because visitNodes tried to change its sighash\n            mut cpy = tree; if (cpy) {} // <- but this fails cleanly when tree is nocopy\n            </alt>\n\n            mut myVisitor: Visitor;\n            myVisitor.visitNodes(tree);\n            return myVisitor.sum - 15;\n        };\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        return 0 > 1 ? throw(\"should type check\") : 0;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn throw_hey(): i32 {\n            throw(\"hey\");\n            return 1;\n        }\n\n        fn main(): i32 {\n            try {\n                let _x = throw_hey();\n                return _x || 7;\n            }\n            catch (err) {\n                return err.len - 3;\n            }\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn throw_hey() {\n            throw(\"hey\");\n        }\n\n        fn main(): i32 {\n            try {\n                let _x = throw_hey();\n                return _x || 7;\n            }\n            catch (err) {\n                return err.len - 3;\n            }\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn throw_hey(): i32 {\n            throw(\"hey\");\n            return 1;\n        }\n\n        fn main(): i32 {\n            try {\n                return throw_hey();\n            }\n            catch (e) {\n                return e.len - 3;\n            }\n\n            return 11;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()\n            cli_handle([ \"hello\", \"you\" ]);\n\n        fn cli_handle(args: string[]): i32\n        {\n            mut idx = 0;\n\n            fn next() {\n                let i = idx++;\n                if (i < args.len)\n                    return args[i];\n\n                return \"\";\n            }\n\n            // Router.\n            return next().len - 5;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test() {\n            mut x = 5;\n            return x;\n        }\n\n        fn main()\n            test() - 5;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test { i: i32; };\n\n        fn test() {\n            mut x = Test(5);\n            return x;\n        }\n\n        fn main()\n            test().i - 5;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test { a: i32; b: i32; };\n\n        fn test() {\n            mut x = Test(5, -5);\n            return x;\n        }\n\n        fn main()\n            test().a + test().b;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct X { x: i32; };\n        fn ref2arg(x: X) = x;\n\n        fn main() {\n            let NOTREF = ref2arg(X(101));\n            return NOTREF.x - 101;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        <fail explicit>\n        nocopy <pass/></fail>\n        struct Copied { x: i32; };\n\n        fn main() {\n            let a = Copied(1);\n            mut b = a;\n            b.x++;\n            return b.x - a.x * 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct XY { x: i32; y: i32; };\n        fn ref2arg(v: XY) = v;\n\n        fn main() {\n            let a = XY(99, 2);\n            let ref2a = ref2arg(a);\n            return mem::ptr_eq(a, ref2a) ? 0 : 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        nocopy struct NoCopy { i: i32; };\n        fn retmutref(ref nc: NoCopy) nc;\n\n        fn main() {\n            mut nc: NoCopy;\n            nc.retmutref.retmutref.i++;\n            return nc.i - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        nocopy struct NoCopy { i: i32; };\n        fn mutrefself(ref nc: NoCopy) {\n            nc.i++;\n            return nc;\n        }\n\n        fn main() {\n            mut nc: NoCopy;\n            nc.mutrefself().mutrefself();\n            return nc.i - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        nocopy struct NoCopy { i: i32; };\n\n        fn      retarg(a: NoCopy) a;\n        fn  retargs_if(a: NoCopy, b: NoCopy) a.i ? b : a;\n        fn  retargs_or(a: NoCopy, b: NoCopy) a || b;\n        fn retargs_and(a: NoCopy, b: NoCopy) a && b;\n\n        fn main() {\n            let a: NoCopy;\n            let b: NoCopy;\n            return retarg(retargs_if(a, retargs_and(a, retargs_or(a, b)))).i;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        nocopy struct NoCopy { i: i32; };\n\n        fn      retarg(a: NoCopy) a;\n        fn  retargs_if(a: NoCopy, b: NoCopy) a.i ? b : a;\n        fn  retargs_or(a: NoCopy, b: NoCopy) a || b;\n        fn retargs_and(a: NoCopy, b: NoCopy) a && b;\n\n        fn main() {\n            let a: NoCopy;                      // <- b now temp\n\n            return retarg(retargs_if(a, retargs_and(a, retargs_or(a, NoCopy)))).i;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        nocopy struct NoCopy { i: i32; };\n\n        fn      retarg(a) a;                    // <- now templates\n        fn  retargs_if(a, b) a.i ? b : a;\n        fn  retargs_or(a, b) a || b;\n        fn retargs_and(a, b) a && b;\n\n        fn main() {\n            mut a: NoCopy;                      // <- now muts\n            mut b: NoCopy;\n            retarg(retargs_if(a, retargs_and(a, retargs_or(a, b)))).i++;\n            return a.i + b.i - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn as_blocks_after(x: i32) {\n            mut zero = 0;\n            if (x > 2) // a broken stmt emit lifted the loop out of the conditional\n                for (mut i = 0; i < x; i++)\n                    zero = i + i*zero;\n\n            return zero;\n        }\n\n        fn main() 2.as_blocks_after;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Lifetime { woot: Lifetime[]; };\n\n        // We could codegen this as a cpp template!\n        //  We'd need to auto& all inner locals too.\n        //\n        fn Lifetime_test(x: Lifetime) {\n            x.woot.len & 1 && throw(\"This is very important.\");\n            for (mut i = 0; i < x.woot.len; i++) Lifetime_test(x.woot[i]);\n            return x;\n        }\n\n        fn Lifetime_fromBinding(x: i32) {\n            mut woot: Lifetime[];\n            for (mut i = 0; i < x; i++) woot[i] = Lifetime();\n\n            // Or we can just add const_casts at such callsites,\n            //  so that things end up working as if the call was inlined,\n            //   which weakens the validation we get but is way cleaner.\n            //\n            // TODO: needs to track uniqueness for that to work.\n            //\n            return Lifetime_test(Lifetime(:woot));\n        }\n\n        fn main() 0.Lifetime_fromBinding.woot.len;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(x: i32) {                       // none of these need vecs\n            let c = [10007];                    ;; TODO fu::slate<1, int> c\n            let a = [7, 11];                    ;; TODO fu::slate<2, int> a\n            let b = {                           ;; TODO fu::slate<1, int> b\n                :BRK {                          ;; !NONTRIV_autocopy\n                    if (x & 2) break :BRK c;\n                    if (x & 1) break :BRK [ x ]; // a val\n                    a; // a ref\n                }\n            };\n            return a[0] - b[0] * a[1];\n        }\n\n        fn main() 1.test + 4;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test { i: i32[]; };\n\n        fn test(mut x: Test) {\n            x.i[0] += x.i[1];\n            return x;\n        }\n\n        fn main() {\n            let s = Test([ 1, 2 ]);\n            return test(s).i[0] - s.i[0] * 3;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test { i: i32[]; };\n\n        fn test(mut x: Test): Test {\n            x.i[0] += x.i[1];\n            return x;\n        }\n\n        fn main() {\n            let s = Test([ 1, 2 ]);\n            return test(s).i[0] - s.i[0] * 3;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn compile_snippets(x0: string) x0.find('a') && throw(\"throw#1\");\n        fn ZERO(x1: string) x1.find('b') && throw(\"throw#2\");\n\n        fn FAIL(x2: string): string {                   ;; EXPECT fu::view<char> x2\n            try {\n                let ctx = compile_snippets(x2) && \"hey\";\n                return ctx;\n            }\n            catch (e) {\n                return ZERO(x2) && e;\n            }\n        }\n\n        fn main() FAIL(\"a\").len;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        // The thing below but shorter:\n        //  the '|| throw' introduces a bullshit lambda during codegen,\n        //   which misreturns a dangling reference to its own frame.\n        fn test(x: string) [x][0] || throw(\"nope!\");\n        fn main() \"what\".test.len - 4;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn only(s: $T[]) s.len == 1 ? s[0] : throw (\"len != 1: \" ~ s.len);\n\n        struct Node       { kind: string; };\n        struct SolvedNode { kind: string; };\n\n        fn solveNodes(n: Node[]) {\n            mut r: SolvedNode[];\n            for (mut i = 0; i < n.len; i++) r ~= SolvedNode(n[i].kind);\n            return r;\n        }\n\n        // the '|| throw' introduces a bullshit lambda during codegen,\n        //  which misreturns a dangling reference to its own frame.\n        fn solveDeclExpr(n: Node) solveNodes([ n ]).only || throw (\"!only\");\n\n        fn main() solveDeclExpr(Node(\"a\")).kind.len - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub fn test(x: i32): i32[] { ;; !NONTRIV_autocopy\n            mut a = [ 4 ];\n            mut b = [ 5 ];\n            mut c = [ 6 ];\n\n            for (mut i = 0; i < x; i++) {\n                a.unshift(x);\n                b.unshift(x);\n                c.unshift(x);\n            }\n\n            inline fn which() {\n                return :test x & 1 ? a : b;\n            }\n\n            if !(x & 2)\n                return which();\n\n            return c;\n        }\n\n        fn main() test(2)[2] + test(1)[1] - 2 * test(0)[0];\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn incr_x_to_1(ref x: i32) {\n            x && throw(\"this reports return t_never\");\n            fn incr_x() { return x++; }\n            incr_x();\n        }\n        fn main() {\n            mut x = 0;\n            incr_x_to_1(x);\n            return x - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            mut x = 0;\n            fn incr_x_to_1() {\n                x && throw(\"this reports return t_never\");\n                fn incr_x() { return x++; }\n                incr_x();\n            }\n            incr_x_to_1();\n            return x - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn apply(fn, v) fn(v);\n        fn main() {\n            mut x = 0;\n            fn scope_using(via: i32) {\n                x && throw(\"this reports return t_never\");\n                // which messed up retcount for scope_using\n                fn visit(item: i32) {\n                    if (item) return item;\n                    return x++;\n                }\n                apply(fn visit, via);\n            }\n\n            scope_using(x);\n            return x - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()\n            i32(PI * 2.0) - 6;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()\n            i32(PI * 2 - 6);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()\n            PI * 2 - 6 |> i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()\n            i32 <| PI * 2 - 6;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let x: f32 = 1; fn main() 1 - x.i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let x: f32 = 1.0; fn main() 1 - x.i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let x: u8 = 1; fn main() 1 - x.i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let x = 1.f32; fn main() 1 - x.i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn gt0(x: f32) x > 0;\n        fn main() gt0(1.f32) ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Hey { x: f32; };\n        fn hey() Hey(1);\n        fn main() hey.x.i32 - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct vec3 { x?: f32; y?: f32; z?: f32; };\n        fn test(i: i32) vec3(x: (i - 2).f32, z: 1);\n        fn main() {\n            let v = test(1);\n            return (v.x + v.z).i32;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct vec3 { x?: f32; y?: f32; z?: f32; };\n        fn test(f: f32) vec3(x: f, z: -1);\n        fn main() {\n            let v = test(-1);\n            return (v.x - v.z).i32;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn hey(i: f32) i.f32 + 0.5;\n        fn main() hey(1).i32 - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn lin2srgb(l: f32): f32\n            l <= 0.0031308\n                ? l * 12.92\n                : 1.055 * pow(l, 1/2.4.f32) - 0.055;\n\n        fn lin255(v: f32) u32 <|\n            v.lin2srgb.max(0).min(1) * 255.99;\n\n        fn main() i32 <|\n            lin255(1) - 255;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct vec3 { x?: f32; y?: f32; z?: f32; };\n\n        inline fn /(a: f32, b: vec3)\n            vec3(a / b.x, a / b.y, a / b.z);\n\n        fn main() i32 <|\n            (1/vec3(x: 1)).x - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let QUAD_DATA: f32[] =\n        [\n            -1, -1, 0,      0, 0, 1,    0, 0, 0,\n            +1, +1, 0,      0, 0, 1,    1, 1, 0,\n            -1, +1, 0,      0, 0, 1,    0, 1, 0,\n\n            -1, -1, 0,      0, 0, 1,    0, 0, 0,\n            +1, -1, 0,      0, 0, 1,    1, 0, 0,\n            +1, +1, 0,      0, 0, 1,    1, 1, 0,\n        ];\n\n        fn main() QUAD_DATA.len - 6 * 9;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(a: bool): u8 = a ? 1 : 0;\n\n        fn main() test(false).i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(a: bool): u8 = a && 1;\n\n        fn main() test(false).i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub let A_u8: u8 = 0x0;\n\n        fn ATTRIB(type: u8, count: i32, srgb = false): u8\n            = type & 0x3 | count.u8 << 2\n\n            // TODO can't deep-retype the last cast unfortunately:\n            //  we need another hint to drive typing here,\n            //   perhaps monogenous signatures, or else.\n            | (srgb && 0x80.u8);\n\n        fn main() ATTRIB(A_u8, 4).i32 - 16;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub struct Geometry    { g: i32; };\n        pub struct Texture     { t: i32; };\n        pub struct RenderFrame { r: i32; };\n\n        pub struct LogicFrame_in\n        {\n            lastLogic:  LogicFrame;\n        };\n\n        pub struct LogicFrame\n        {\n            DATA_fbx:   Geometry;\n            TEX_A:      Texture;\n            TEX_AO:     Texture;\n            TEX_M:      Texture;\n            TEX_N:      Texture;\n            TEX_R:      Texture;\n            HDR:        Texture;\n        };\n\n        pub struct RenderFrame_in\n        {\n            w:          i16;\n            h:          i16;\n            frame:      i32;\n\n            mouseX:     f32;\n            mouseY:     f32;\n            mouseBtns:  i32;\n\n            using logic:    LogicFrame;\n            lastRender:     RenderFrame;\n        };\n\n        pub fn APP_renderFrame(using args: RenderFrame_in): RenderFrame\n        {\n            return RenderFrame(args.HDR.t);\n        }\n\n        fn main() 0;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn leadingDigit(name: string) name[0].u8 - '0'.u8 < 10;\n        fn main() \"hello\".leadingDigit.i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() 1_000_000 - 1000000\n               || 0xffff_ffff.i32 - 0xffffffff.i32\n               || 123_456.789.i32 - 123456.789.i32;\n    "_fu, testdiffs);
    TODO_0X4li7Vn("                             // litfix through && /////\n        fn test(a: u32, shadows: bool)      (a << 1) | (shadows && 1);\n        fn main()                           1.test.i32 - 2;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        type Test = i32[];\n        fn yo(t: Test) t[0] + t[1];\n        fn main() yo([-1, +1]);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn if_first(a: $T[]) a && a[0];\n        fn hello(a: i32[]) a.if_first;\n        fn main() hello([ 3 ]) - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn if_first(a: $T[]) a && a[0];\n        type X = i32[];\n        fn hello(a: X) a.if_first;\n        fn main() hello([ 3 ]) - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn if_first(a: $T[]) a && a[0];\n\n        fn list(): i32[][] {\n            return [[ 3 ]];\n        }\n\n        fn hello() list.if_first.if_first;\n        fn main() hello - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn if_first(a: $T[]) a && a[0];\n        type X = i32[];\n\n        fn list(): X[] {\n            return [[ 3 ]];\n        }\n\n        fn hello() list.if_first.if_first;\n        fn main() hello - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let arr = [1, 2];\n        fn eq(a: i32[], b: i32[]) a == b;\n        fn main() eq(arr, arr) ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let arr = [1, 2];\n        fn eq(a: $T[], b: $T[]) a == b;\n        fn main() eq(arr, arr) ? 0 : 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(hey: [i32])\n            hey[0] + hey[1];\n\n        fn main()\n            test([-1, +1]);\n\n        ;; EXPECT fu::slate<2, int> { -1, +1 }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(hey: &mut [i32])\n            hey[0] += hey[1];\n\n        fn main() {\n            mut hey = [-1, +1];\n            return hey.test();\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(i: i32) [ i, i + 1 ];\n        fn main() test(0)[1] - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(hey: byte[])\n            hey.view(u32)[0];\n\n        fn main() {\n            mut hey: byte[] = [ byte(1), byte(1), byte(1), byte(1) ];\n            return (hey.test - 0x1010101).i32;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(hey: [i32])\n            hey[0] + hey[1];\n\n        fn main() {\n            let hey = [7, -1, +1];\n            return test(hey[1, 3]);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(hey: &mut [i32])\n            hey[0] += hey[1];\n\n        fn main() {\n            mut hey = [7, -1, +1];\n            return hey[1, 3].test();\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(hey: &mut [i32])\n            hey.= [2, -3];\n\n        fn main() {\n            mut hey = [1, 0, 0];\n            test(hey[1, 3]);\n            return hey[0] + hey[1] + hey[2];\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Hey {\n            i: i32;\n        };\n\n        fn test(out: &mut [Hey]) {\n            out.view(u8) .= [ 1.u8, 1.u8, 1.u8, 1.u8 ];\n        }\n\n        fn main() {\n            mut a = [ Hey ];\n            a.test();\n            return a[0].i - 16843009;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Hey {\n            i: i32;\n        };\n\n        fn test(x: &mut [i32], y: [ Hey ])\n            x .= y.view(i32);\n\n        fn main() {\n            mut a = [ 0 ];\n            test(a, [ Hey(13) ]);\n            return a[0] - 13;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Hey {\n            i: i32;\n        };\n\n        fn main() {\n            mut a = [ 0 ];\n            a .= [ Hey(13) ].view(i32);\n            return a[0] - 13;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(a: [byte], b?: [byte]) a == b;\n        fn main() test(\"\") ? 0 : 1;\n\n        ;; EXPECT (fu::view<char>{}, fu::view<char>{})\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        // When we spec find(), the second arg is a view, not an array, so the $T specs to a less than array:\n        //  next thing that happens is that the first argument, which is $T[] specs to an array of views except they're not even refs for some reason.\n        //   so then we try to use the spec but quals matching doesn't descend through the type cannon, so they mismatch with:\n        //\n        // First arg of find(), the $T[] to search:\n        //\n        // ACTUAL CANON: []+1028[]+28byte\n        //                        ^^^^^^^ of bytes\n        //                 ^^^^^^^ of arrays (resize + copy)\n        //               ^^ view of\n        //\n        // EXPECT CANON: [][]+28byte\n        //                   ^^^^^^^ of bytes\n        //                 ^^ not a view (not a ref), nor an array - no resize/copy\n        //               ^^ view of\n        //\n        let NOTES = [ \"AAA\", \"BBB\", \"CCC\" ];\n        fn what(annot: string) NOTES.find(annot[1, annot.len]);\n        fn main() what(\"!BBB\") - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Hey { i: i32; }\n\n        fn main() {\n            let a = 1;\n            let r: Hey = a && [ a ];\n            return r.i - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Hey { i: i32; }\n\n        fn main() {\n            let a: Hey[] = [ [ -1 ], [ +1 ] ];\n            return a[0].i + a[1].i;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Hey { i: i32; }\n\n        fn test(): Hey {\n            return [ 0 ];\n        }\n\n        fn main() test.i;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test {\n        <fail expects 2 arg>\n            a: i32;  <pass/>\n            a?: i32; </fail>\n            b: i32;\n        };\n\n        return Test(b: 1).a;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test {\n            b: i32;\n        <fail expects 2 arg>\n            a: i32;  <pass/>\n            a?: i32; </fail>\n        };\n\n        return Test(1).a;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Node {\n            items?: Node[];\n            stuff?: Node[];\n        };\n\n        fn rec_copy(ref a: Node) {\n            // If implemented naively,\n            //  by the time you copy stuff it's no longer there.\n            a = a.items[0];\n        }\n\n        fn main() {\n            mut a = Node(items: [ Node(stuff: [ Node ]) ]);\n            rec_copy(a);\n            return a.stuff.len - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(a: i32, b!: i32 = 1) a + b;\n        return test(-1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(a: i32, b!: i32 = 1) a + b;\n        <fail bad call>\n        return test(-2, +2);    <pass/>\n        return test(-2, b: +2); </fail>\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test { a: i32; b!: i32; };\n        fn test(t: Test) t.a + t.b;\n        <fail bad call>\n        return Test(-2, +2).test;    <pass/>\n        return Test(-2, b: +2).test; </fail>\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Test { a?: i32; b!?: i32; };\n        fn test(t: Test) t.a + t.b;\n        <fail bad call>\n        return Test(-2, +2).test;    <pass/>\n        return Test(b: +2).test - 2; </fail>\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let _precedence = 0;\n        fn parseExpression(p1 = _precedence, mode! = 0) p1 + mode;\n        fn main() parseExpression();\n    "_fu, testdiffs);
    ZERO_SAME_Ys7VTVTn((fu::slate<3, fu_STR> { "\n        fn A(x!: i32 = 0) x;\n        fn B(x: i32 = 0) A(:x);\n        fn main() A + B;\n    "_fu, "\n        fn A(x!?: i32) x;\n        fn B(x?: i32) A(:x);\n        fn main() A + B;\n    "_fu, "\n        fn A(x! = 0) x;\n        fn B(x = 0) A(:x);\n        fn main() A + B;\n    "_fu }), testdiffs);
    ZERO_0X4li7Vn("\n        fn what(a = -1, b!: i32) a + b; // Trailing explicit args.\n        fn main() what(b: +1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn greet(with!greeting: string)     greeting.len;\n        fn main()                           greet(with: \"Hello!\") - 6;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn a0o0() 0;\n        fn a1o0(a : i32) a;\n        fn a2o1(a : i32, b?: i32) a + b;\n        fn a2o2(a?: i32, b?: i32) a + b;\n        fn main() a0o0(a?: 1, b?: 2) *      1   //      .\n                + a1o0(a?: 1, b?: 2) *     10   //     10\n                + a2o1(a?: 1, b?: 2) *    100   //    300\n                + a2o2(a?: 1, b?: 2) *   1000   //   3000\n                + a2o1(a : 1, <fail bad call>\n                              c       <pass/>\n                              b       </fail>\n                               ?: 2) *  10000   //  30000\n                + a2o1(a : 1)        * 100000   // 100000\n                                // ----------------------\n                                     - 133310;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub fn reveach(items: [$T], fn)\n            for (mut i = items.len; i --> 0; )\n                fn(items[i], i?: i);\n\n        pub fn main() {\n            mut sum = 0;\n            [1, 2, 3].reveach(|x   | sum += x          );\n            [1, 2, 3].reveach(|x, i| sum += x * i * 100);\n            return sum - 806;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub fn noop() 0;\n        pub fn woot(ref i: i32, fn) i += fn(i?: i += 1); // Will not add 1.\n\n        fn main() {\n            mut sum = 0;\n            woot(sum, fn noop);\n            return sum;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let ret: i8 = <fail annot match>\n                128 <pass/>\n                127 </fail>;\n\n            return (ret - 100).i32 - 27;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let ret: i16 = <fail annot match>\n                32768 <pass/>\n                32767 </fail>;\n\n            return (ret - 32700).i32 - 67;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let ret: i32 = <fail annot match>\n                2147483648 <pass/>\n                2147483647 </fail>;\n\n            return (ret - 2147483600).i32 - 47;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() { // weird error, see the other two below\n            let ret: i64 = <fail bad int literal>\n                9223372036854775808 <pass/>\n                9223372036854775807 </fail>;\n\n            return (ret - 9223372036854775800).i32 - 7;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let ret: i8 = <fail annot match>\n                -129 <pass/>\n                -128 </fail>;\n\n            return (ret + 100).i32 + 28;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let ret: i16 = <fail annot match>\n                -32769 <pass/>\n                -32768 </fail>;\n\n            return (ret + 32700).i32 + 68;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let ret: i32 = <fail annot match>\n                -2147483649 <pass/>\n                -2147483648 </fail>;\n\n            return (ret + 2147483600).i32 + 48;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() { // wording different from the ones above and below\n            let ret: i64 = <fail oversized signed int literal>\n                -9223372036854775809 <pass/>\n                -9223372036854775808 </fail>;\n\n            return (ret + 9223372036854775800).i32 + 8;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let ret: u8 = <fail annot match>\n                256 <pass/>\n                255 </fail>;\n\n            return (ret - 0xff).i32;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let ret: u16 = <fail annot match>\n                65536 <pass/>\n                65535 </fail>;\n\n            return (ret - 0xffff).i32;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            let ret: u32 = <fail annot match>\n                4294967296 <pass/>\n                4294967295 </fail>;\n\n            return (ret - 0xffffffff).i32;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() { // this is the best of the weird ones\n            let ret: u64 = <fail integer overflows u64>\n                18446744073709551616 <pass/>\n                18446744073709551615 </fail>;\n\n            return (ret - 0xffffffffffffffff).i32;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub fn set_once(ref entry, bit: i32): bool\n        {\n            let mask = 1 << bit.u64;    // cg'd into '1u << uint64_t(bit)'\n            if (entry & mask)           //  which doesnt work for some reason\n                return false;\n\n            entry |= mask;\n            return true;\n        }\n\n        fn main() {\n            mut entry: u64;\n            let a = set_once(entry, 32);\n            let b = set_once(entry, 32);\n            return a && !b ? 0 : 101;\n        }\n    "_fu, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        pub fn noop() {} // AUTOPUB\n        <fail hello is not defined><pass/>\n        pub\n        </fail>\n        fn hello() 3;\n    "_fu, "\n        import _0;\n        fn main() 6 - hello * 2;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        pub struct Hey { i: i32; };\n    "_fu, "\n        fn main() 1._0::Hey.i - 1;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "\n        pub struct Hey { i: i32; };\n    "_fu, "\n        import _0;\n        pub inline fn test(h: Hey) h.i + 2;\n    "_fu, "\n        import _1;\n        fn main() 1._0::Hey.test - 3;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "\n        pub struct Hey { i: i32; };\n    "_fu, "\n        pub inline fn test(h: _0::Hey) h.i + 2;\n    "_fu, "\n        import _1;\n        fn main() 1._0::Hey.test - 3;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "\n        pub struct Hey { i: i32; };\n    "_fu, "\n        pub inline fn test(h: _0::Hey) h.i + 2;\n    "_fu, "\n        fn main() 1._0::Hey._1::test - 3;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<4, fu_STR> { "\n        pub struct You { i: i32; };\n    "_fu, "\n        pub struct Hey { using you: _0::You; };\n        pub fn init3(): Hey = [ _0::You(3) ];\n    "_fu, "\n        pub inline fn test(using h = _1::init3) i + 7;\n    "_fu, "\n        fn main() _2::test - 10;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<4, fu_STR> { "\n        pub struct vec3 {\n            x?: f32;\n            y?: f32;\n            z?: f32;\n        };\n    "_fu, "\n        import _0;\n\n        pub struct mat34 {\n            mx: vec3;\n            my: vec3;\n            mz: vec3;\n            mo: vec3;\n        };\n\n        pub inline fn mat34_identity()\n            mat34(\n                vec3(x: 1),\n                vec3(y: 1),\n                vec3(z: 1), vec3 /*point3*/);\n    "_fu, "\n        pub struct mat4 {\n            m0: f32; m1: f32; m2: f32; m3: f32;\n            m4: f32; m5: f32; m6: f32; m7: f32;\n            m8: f32; m9: f32; mA: f32; mB: f32;\n            mC: f32; mD: f32; mE: f32; mF: f32;\n        };\n\n        pub inline fn mat4(using m: _1::mat34)\n            mat4(\n                mx.x, mx.y, mx.z, 0,\n                my.x, my.y, my.z, 0,\n                mz.x, mz.y, mz.z, 0,\n                mo.x, mo.y, mo.z, 1);\n\n        pub fn determinant(using _: mat4)\n            + mC * m9 * m6 * m3 - m8 * mD * m6 * m3 - mC * m5 * mA * m3\n            + m4 * mD * mA * m3 + m8 * m5 * mE * m3 - m4 * m9 * mE * m3\n            - mC * m9 * m2 * m7 + m8 * mD * m2 * m7 + mC * m1 * mA * m7\n            - m0 * mD * mA * m7 - m8 * m1 * mE * m7 + m0 * m9 * mE * m7\n            + mC * m5 * m2 * mB - m4 * mD * m2 * mB - mC * m1 * m6 * mB\n            + m0 * mD * m6 * mB + m4 * m1 * mE * mB - m0 * m5 * mE * mB\n            - m8 * m5 * m2 * mF + m4 * m9 * m2 * mF + m8 * m1 * m6 * mF\n            - m0 * m9 * m6 * mF - m4 * m1 * mA * mF + m0 * m5 * mA * mF;\n    "_fu, "\n        pub fn main()\n        {\n            let m34 = _1::mat34_identity;\n            let m44 = _2::mat4(m34);\n\n            return m44.determinant.i32 - 1;\n        }\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0X4li7Vn("\n        import vec3;\n\n        fn main() vec3.maxc.i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() ::vec3.maxc.i32;\n    "_fu, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        pub fn _0(i: i32) i + 1;\n    "_fu, "\n        fn main() (-1).::_0;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        pub fn add(ref to: $T[], item: $T) {\n            for (mut i = 0; i < to.len; i++) {\n                if (to[i] >= item) {\n                    if (to[i] != item)\n                        to.insert(i, item);\n\n                    return;\n                }\n            }\n\n            to.push(item);\n        }\n    "_fu, "\n        fn main() {\n            mut x = [1, 2, 3];\n            x._0::add(3); if (x.len != 3) return 33;\n            x._0::add(4); return x.len - x[3];\n        }\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        pub let pad0 = 0; pub let pad1 = 1; pub let pad2 = 2; pub let pad3 = 3; pub let pad4 = 4; pub let pad5 = 5; pub let pad6 = 6; pub let pad7 = 7; pub let pad8 = 8; pub let pad9 = 9;\n        pub let PAD0 = 0; pub let PAD1 = 1; pub let PAD2 = 2; pub let PAD3 = 3; pub let PAD4 = 4; pub let PAD5 = 5; pub let PAD6 = 6; pub let PAD7 = 7; pub let PAD8 = 8; pub let PAD9 = 9;\n\n        pub let A = \"hello\";\n        pub let B = \"world\";\n    "_fu, "\n        import _0;\n        fn test(i: i32) {\n            let v = i & 1 ? A : B;\n            return v.len;\n        }\n\n        fn main() 0.test - 1.test;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        pub fn clone(a: $T)\n        case ($T.is::copy) a;\n        case ($T -> $T) {\n            mut res: $T;\n            for (fieldname i: $T) res.i = a.i.clone();\n            return res;\n        }\n    "_fu, "\n        pub nocopy struct Scope { x: i32; };\n\n        pub struct ModuleOutputs {\n            deps: i32[];\n            scope: Scope;\n        };\n\n        pub fn test(a: ModuleOutputs) {\n            let b = a._0::clone();\n            return a.deps.len - b.deps.len;\n        }\n\n        pub fn main() test(ModuleOutputs);\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        // a private fn\n        fn createShader(src: string) = src;\n\n        // inits a public let\n        pub let GEOMETRY_PASS_TEST = createShader(\"source code\");\n    "_fu, "\n        pub fn main() _0::GEOMETRY_PASS_TEST.len - 11;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        struct List {\n            vals: string[];\n        };\n\n        fn add(using ref _: List, val: string)\n            vals ~= val;\n\n        fn [](using _: List, val: string) {\n            mut count = 0;\n            for (mut i = 0; i < vals.len; i++)\n                if (vals[i] == val)\n                    count++;\n\n            return count;\n        }\n    "_fu, "\n        fn main() {\n            mut list: _0::List;\n            for (mut i = 0; i < 3; i++)\n                list.add(i & 1 ? \"a\" : \"b\");\n\n            return list[\"b\"] - 2;\n        }\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        struct Int { i: i32; };\n        fn -(a: Int) Int(-a.i);\n        fn +(a: Int, b: Int) Int(a.i + b.i);\n        fn +=(ref a: Int, b: Int) { a.i += b.i; return a; };\n        postfix fn ++(ref a: Int) { a.i++; };\n    "_fu, "\n        fn main() {\n            mut x: _0::Int = [ 1 ];\n            x += -(x + x);\n            x++;\n            return x.i;\n        }\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "\n        fn private(x)           x * 3;              // Scope_import is broken,\n        pub fn public(y)        private(y) * 2;     //  doesnt always import privates.\n        <split/>\n        fn main()               1.public - 6;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        fn private(x: i32)      x * 3;              // cg fail:\n        pub fn public(y)        private(y) * 2;     //  fn private hidden in first translation unit.\n    "_fu, "\n        fn main()               1._0::public - 6;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        let OPTOKENS = \"{}[]()!?~@#$%^&*/-+<=>,.;:|\";   // nowadays problem is OPTOKENS cgs to static in first translation unit\n\n        pub fn lex(src) // <- template\n        {\n            let end = src.len;\n            mut idx = 0;\n\n            while (idx < end) {\n                let c = src[idx++];\n                if (OPTOKENS.has(c)) // <- originally, no OPTOKENS in scope ...\n                    return idx - 1;\n            }\n\n            return src.len;\n        }\n    "_fu, "\n        fn main() _0::lex(\"3 - 3\") - 2; // <- from here\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        pub fn pubbed(a: i32) a * 2;\n        <fail not_pubbed not defined><pass/>\n        pub                          </fail>\n        fn not_pubbed(b: i32) b * 3;\n    "_fu, "\n        fn main() 1._0::pubbed._0::not_pubbed - 6;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        let SELF_TEST           = true;\n        let NODEIDX_signbits    = SELF_TEST && 4;\n        let NODEIDX_signmask    = (1 << NODEIDX_signbits) - 1;\n    "_fu, "\n        fn main() _0::NODEIDX_signmask - 15;\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0X4li7Vn("\n        let a = 1;\n        shadow let a = a + 1;\n        return a - 2;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        inline fn outer() inner(); // <- this reset root-scope\n        inline fn inner() {\n            // <- so main::i was visible here\n            for (mut i = 0; i < 10; i++) return i;\n            return 1;\n        }\n        fn main() {\n            for (mut i = 0; i < 10; i++) return outer();\n            return 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub struct Target { modid: i32; packed: u32; };\n\n        pub fn index(t: Target) i32(t.packed & 0x7fffffff);\n\n        pub fn local_eq(t: Target, index: i32, implicit modid: i32)\n            modid - t.modid || index - t.index;\n\n        fn main() {\n            let implicit modid = 1;\n            return local_eq(Target(1, 0x80000002), 7) - 5;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct HasInt { i: i32; };\n\n        fn test(s: HasInt): &i32 {\n            let i = s.i;\n            return i;\n        }\n\n        fn main() HasInt(-1).test + 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(x: i32): &i32 = x;\n        fn main() test(3) - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(x: i32): &i32 {\n            fn inner() x;\n            return inner;\n        }\n\n        fn main() test(3) - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct I { v: i32; };\n\n        fn test(x: I): &i32 {\n            fn inner() x.v;\n            return inner;\n        }\n\n        fn main() test(I(3)) - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct I { v: i32[]; };\n\n        fn test(x: I): &i32 {\n            fn inner() x.v[0];\n            return inner;\n        }\n\n        fn main() test(I([3])) - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct I { v: i32[]; };\n\n        fn test(x: I): &i32 {\n            fn inner() {\n                let v = x.v;\n                return v[0];\n            }\n\n            return inner;\n        }\n\n        fn main() test(I([3])) - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn noReturn() throw (\"ex\");\n\n        fn doesReturn(a: i32) {\n            if (a > 0) return noReturn();\n            return a;\n        }\n\n        fn main() doesReturn(-3) + 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Context { modules: Module[]; };\n        struct Module  { fname: i32; };\n\n        fn test(implicit ctx: Context) {\n            fn findModule(fname: i32): &Module {\n                let modules = ctx.modules;\n                for (mut i = 0; i < modules.len; i++) {\n                    let module = modules[i];\n                    if (module.fname == fname)\n                        return module;\n                }\n\n                throw(\"Cannot locate: \" ~ fname);\n            }\n\n            return findModule(0);\n        }\n\n        fn main() {\n            let implicit ctx = Context([ Module ]);\n            return test.fname;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn noReturn() throw (\"ex\");\n\n        fn returnVoid(a: i32): void {\n            if (a > 0) return noReturn();\n        }\n\n        fn main() {\n            returnVoid(0);\n            return 0;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn parseQualifierChain(mut i: i32): i32 {\n            for (;;) {\n                if !(i & 15) return i;\n                i--;\n            }\n        }\n\n        fn main() parseQualifierChain(15);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()\n        {\n            mut sum = 0;\n            fn compile(x: i32)\n            {\n                // 1. this throw contributed a 'never' ret_count.\n                x || throw (\"x=0\");\n                if (x & 1) compile(x + 1); // 2. then this recursion did something.\n                sum += x; // <- also this must be a closure.\n                // 3. finally no ret_actual but non-zero ret_count.\n            }\n\n            compile(2);\n            return sum - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main()\n        {\n            mut sum = 0;\n            fn getModule(fname: string) fname.len;\n            fn compile(fname: string, via: string = \"\")\n            {\n                let module = getModule(fname) || throw (\"import circle: '\" ~ via ~ fname ~ \"'.\");\n                if (module & 1) {\n                    let fuzimports = fname.split(\"a\");\n                    for (mut i = 0; i < fuzimports.len; i++)\n                        compile(\n                            fname: fuzimports[i],\n                              via: fname ~ \" <- \" ~ via);\n                }\n\n                sum += module;\n            }\n\n            compile(\"ab\");\n            return sum - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn A(implicit _A: i32[]) _A;\n        fn B(implicit _B:  u8[]) _B;\n\n        fn AB(x: i32) A[x] - B[x].i32;\n        fn BA(x: i32) B[x].i32 - A[x];\n\n        fn cycleA_inner(x: i32)\n            x & 1   ? either(x + 1) + AB(x)\n                    : BA(x);\n\n        fn cycleA_outer(x: i32)\n            x & 1   ? cycleA_inner(x + 1) + AB(x)\n                    : BA(x);\n\n        fn cycleB_inner(x: i32)\n            x & 2   ? either(x + 1) + BA(x)\n                    : AB(x);\n\n        fn cycleB_outer(x: i32)\n            x & 2   ? cycleB_inner(x + 1) + BA(x)\n                    : AB(x);\n\n        fn either(x: i32)\n            x & 4   ? cycleA_outer(x)\n                    : cycleB_outer(x);\n\n        fn main() {\n            let implicit _A = [ 0,    1,    2    ];\n            let implicit _B = [ 0.u8, 1.u8, 2.u8 ];\n\n            return either(0);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn if0_ret101(x: i32) {\n            if      (x > 2) return x * 2;\n            else if (x > 1) return x + 1; // <- left branch seeded right with never\n            return x + 101;\n        }\n\n        fn main() 0.if0_ret101 - 101;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn hello(x: i32) {\n            if (x & 1)\n                return x * 2;\n\n            <fail missing return>\n            x;            <pass/>\n            return x;     </fail>\n        }\n\n        fn main() 0.hello;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn throws()         { throw(\"WHAT!\");   }\n        fn myfn(a = throws) { return a;         } // never in default argument position!\n        fn main() {\n            try             { return myfn();                }\n            catch (e)       { return e == \"WHAT!\" ? 0 : 1;  }\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct X { i: i32; };\n\n        fn         ++(using x: &mut X) ++i;\n        postfix fn ++(using x: &mut X) i++;\n\n        fn main() {\n            mut x: X;\n            let a = x++;\n            let b = ++x;\n            return a || b - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(s: $T) {\n            mut sum = 0;\n            for (fieldname i: $T) sum += s.i;\n            return sum;\n        }\n\n        struct XY { x: i32; y: i32; };\n\n        fn main() {\n            let thing = XY(1, 2);\n            let sum = test(thing);\n            return sum - 3;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        struct ScopeSkip     { imports:     i32[]; implicits:     i32[]; }\n        struct ScopeSkipMemo { imports_len: i32;   implicits_len: i32[]; }\n\n        fn snap(ss: SS) {\n            mut r: ScopeSkipMemo;       // imports wouldn't work -\n            for (fieldname i: ss)       //  we need to know what to import much earlier.\n                r.i::_len = ss.i.len;   //   <- which frees up this syntax\n\n            return r;\n        }\n\n        fn check(v) {\n            mut sum = 0; mut mul = 1;\n            for (fieldname i: v) {\n                sum += v.i * mul; mul *= 10;\n            }\n\n            return sum;\n        }\n\n        fn main() check(snap(ScopeSkip([ 1 ], [ 2, 2 ]))) - 21;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test() [] -> i32;\n        fn main() test;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            mut a = 1;\n            mut b = 0;\n            {\n                defer a++;\n                b = a;\n            }\n            return (b+1) - a;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            mut a = 1;\n            mut b = 0;\n            mut c = 0;\n            {\n                defer a++;\n                defer c = a;\n                b = a;\n            }\n            return (b*27) - (a*11 + c*5);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test_defer_if_errok(throw_err: bool) {\n            mut x      = 1;\n            mut if_err = 0;\n            mut if_ok  = 0;\n            try {\n                defer x++;\n                defer:err if_err += x;\n                defer:ok  if_ok  += x;\n\n                if (throw_err)\n                    throw(\"len=5\");\n\n                x += 8; // 9 defer++ = 10\n            }\n            catch (e) {\n                x += e.len; // 6 defer++ = 7\n            }\n\n            return x * 3 + if_err * 5 + if_ok * 7;\n        }\n\n        fn main()   (test_defer_if_errok(true)  - 7 *3 - 1*5 - 0*7)\n            + 100 * (test_defer_if_errok(false) - 10*3 - 0*5 - 9*7);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn sum_amulb(a: i32[], b: i32[], ref sum: i32)\n            for (mut i = 0; i < a.len; i++)\n                sum += a[i] * b[i];\n\n        fn incrarr_by1(ref a: i32[])\n            for (mut i = 0; i < a.len; i++)\n                a[i] += 1;\n\n        fn test(ref a: i32[], ref sum: i32) {\n            let b = a;\n            defer sum_amulb(:a, :b, :sum);\n\n            <alt>\n            for (mut i = 0; i < a.len; i++) a[i] += 1;\n            return a[0] - 2;\n            <alt/>\n            defer for (mut i = 0; i < a.len; i++) a[i] += 1;\n            return a[0] - 1;\n            <alt/>\n            incrarr_by1(:a);\n            return a[0] - 2;\n            <alt/>\n            defer incrarr_by1(:a);\n            return a[0] - 1;\n            </alt>\n        }\n\n        fn main() {\n            mut a = [ 1 ];\n            mut sum = 0;\n            let ret = 100 * test(:a, :sum);\n            return sum - 2 + ret;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        type Test = i8;\n        fn main() 256.Test.i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(a: $A, b: $B) b +   <fail bad call>\n            a;                      <pass/>\n            $B(a);                  </fail>\n\n        fn main() i8(-1).test(+1);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let x = { mut z = 0; z++; z };\n        return x - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn mul2(a) a*2;\n        fn test(b, fn) fn(1 + fn(b));\n        fn main() 14 - test(3, fn mul2);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        let overloaded = 1;\n        fn overloaded(a) a*2;\n        fn test(b, fn) fn(fn + fn(b));\n        fn main() 14 - test(3, fn overloaded);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn overloaded(a) a*2;\n        fn test(b, fn) fn(fn + fn(b));\n        fn main() {\n            let overloaded = 1;\n            return 14 - test(3, fn overloaded);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn map(items: $T[], fn) {\n            mut result: fn(items[0])[];\n            for (mut i = 0; i < items.len; i++)\n                result.push(fn(items[i]));\n\n            return result;\n        }\n\n        fn sqr(x) x*x;\n\n        fn main() [2].map(fn sqr)[0] - 4;\n\n        ;; EXPECT (fu::slate<1, int> { 2 })\n        //  During the propagateType rework\n        //   the 'mut result: fn(items[0])[]' type annot\n        //    was found listed as a callsite for items,\n        //     but wasn't reachable for relax.\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn reduce(items: $T[], fn, init?: $T) {\n            mut result = init;\n            for (mut i = 0; i < items.len; i++)\n                result = fn(result, items[i]);\n\n            return result;\n        }\n\n        fn main() [1, 2].reduce(|a, b| a + b) - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn each(items: $T[], fn) {\n            for (mut i = 0; i < items.len; i++) // <- one i\n                fn(items[i]);\n        }\n\n        fn main() {\n            mut i = 0;                  // <- another i, i got them to shadow each other\n            [1, 2].each: |x| i += x;    //      in the everything-a-free-function\n            return i - 3;               //      impl of closures\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        mut sum = 2;\n\n        fn FnDecl_update(parent_idx: i32) {\n            fn each(fn) fn();\n            each(|| makeDirty(:parent_idx));\n        }\n\n        fn makeDirty(parent_idx: i32): void {\n            sum += parent_idx;\n        }\n\n        FnDecl_update(1);\n\n        return sum - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct A { a: i32; };\n        struct B { b: i32; };\n        using fn bananas(a: A) B(a.a * 2);\n\n        <split/>\n        fn main() 1.A.b - 2;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct A { a: i32; };\n        struct B { b: i32; };\n        using fn bananas(a) B(a.a * 2); // <- template\n\n        <split/>\n        fn main() 1.A.b - 2;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn sqr(a: i32) a * a;\n        fn woot(a.sqr) a + 1;\n        fn main() 2.woot - 5;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct A0 { a0: i32; };\n        struct A1 { a1: i32; };\n        struct B  { b:  i32; };\n\n        fn a0(a1: A1) a1.a1 * 100;\n        fn bananas(a) B(a.a0 * 2); // <- template\n        fn woot(a.bananas: B) a.b; // <- check\n\n        fn main() 1.A0.woot + 1.A1.woot - 202;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct A0 { a0: i32; };\n        struct A1 { a1: i32; };\n        struct B0 { b0: i32; };\n        struct B1 { b1: i32; };\n        struct C  { c:  i32; };\n\n        fn bananas(using _: A0) B0(a0 * 2);\n        fn bananas(using _: A1) B1(a1 * 3);\n        using fn c0(using _: B0) C(c: b0 * 5);\n        using fn c1(using _: B1) C(c: b1 * 7);\n        fn woot(using a.bananas: C) c; // extra conversion\n\n        fn main() 1.A0.woot + 1.A1.woot - 31;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct A0 { a0: i32; };\n        struct A1 { a1: i32; };\n        struct B0 { b:  i32; };\n        struct B1 { b:  i32; };\n\n        fn bananas(a0: A0) B0(a0.a0 * 2);\n        fn bananas(a1: A1) B1(a1.a1 * 3);\n        fn woot(a.bananas) a.b; // <- template\n\n        fn main() 1.A0.woot + 1.A1.woot - 5;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn times_implicit(x: i32, implicit y: i32) x * y;\n        fn times7(x: i32) x * 7;\n\n        fn woot(a.times_implicit, b: u32) a * b.i32;\n        fn woot(a: i32, b.times7: i32) a * b;\n\n        fn test0() 3.woot(2.i32);\n\n        fn test1() {\n            let implicit y = 7;\n            return 3.woot(2.u32);\n        }\n\n        fn main() test0 + test1 * 1000 - 42042;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct X { str: string; };\n        fn ~(a: X, b: X) X(a.str ~ b.str);          // currently: invalid operator~ cg\n        inline fn ~(a: X, b.to_debug_str) a ~ b;    // currently: pointless blocks\n\n        fn to_debug_str(a: i32) X(\"i\" ~ a);\n\n        fn main() {\n            let hey = X(\"Hey! \") ~ 5;\n            return hey.str == \"Hey! i5\" ? 0 : 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct vec32  { x: f32; };\n        struct conv32 { v: f32; };\n\n        using inline fn convert(v: i32): conv32 = [ v.f32 ]; // no litfix\n        inline fn /(a: conv32, b: vec32) vec32(a.v / b.x);\n\n        fn main() i32 <| (1/vec32(1)).x - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct vec32  { x: f32; };\n        struct conv32 { v: f32; };\n\n        using inline fn convert(v: f32): conv32 = [ v ]; // litfix in a conv: i32 -> f32\n        inline fn /(a: conv32, b: vec32) vec32(a.v / b.x);\n\n        fn main() i32 <| (1/vec32(1)).x - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct vec_u  { x: u32; };\n        struct vec32  { x: f32; };\n        struct vec64  { x: f64; };\n\n        struct conv_u { v: u32; };\n        struct conv32 { v: f32; };\n        struct conv64 { v: f64; };\n\n        using inline fn convert(v: u32): conv_u = [ v ]; // matchfail before\n        using inline fn convert(v: f32): conv32 = [ v ];\n        using inline fn convert(v: f64): conv64 = [ v ]; // matchfail after\n\n        inline fn /(a: conv_u, b: vec_u) vec_u(a.v / b.x);\n        inline fn /(a: conv32, b: vec32) vec32(a.v / b.x);\n        inline fn /(a: conv64, b: vec64) vec64(a.v / b.x);\n\n        fn main() i32 <| (1/vec32(1)).x - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub struct Module       { modid: i32; };\n        pub struct Target       { modid: i32; index: i32; };\n        pub struct Type         { using vtype: ValueType; };\n        pub struct ValueType    { modid: i32; canon: string; };\n        pub struct Overload     { kind: string; locals?: Overload[]; };\n\n        fn main() {\n            let implicit mut overloads: Overload[];\n\n            using fn GET(target: Target, implicit overloads: Overload[]) {\n                target.index > 0 || assert();\n                if (target.modid < 0)\n                    return overloads[-target.modid - 1].locals[target.index - 1];\n                else\n                    return overloads[target.index - 1];\n            }\n\n            fn try_GET(target: Target)\n                target && GET(target);\n\n            overloads ~= Overload(\"What\");\n            return try_GET(Target(0, 1)).kind.len - 4;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct RWEvent { rw_target!: i32 };\n        struct ReadID  { id: i32 };\n\n        fn main()\n        {\n            <fail ambig rw_target>\n            using   <pass/></fail>\n            fn RWEvent(read: ReadID)    RWEvent(rw_target: read.id);\n\n            fn rw_target(read: ReadID)  read.id;\n\n            return ReadID(0).rw_target;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn a_len(a: [$T]) a.len; // a conversion could navigate this here\n        struct Test { using a: i32[]; };\n        fn main() Test.a_len;\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        struct CodegenOutput { using src: string; };\n\n        fn test(ref str: string, out: CodegenOutput) {\n            str ~= out && \"b\";\n            return str ~ out;\n        }\n\n        fn main() {\n            mut str = \"a\";\n            return str.test(CodegenOutput(\"what\")).len - 6; // \"abwhat\".len;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn varargs(a[]) a[0] + a[1];\n        fn main() varargs(1, 2) - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn to_debug_str(a: i32) a     * 2;\n        fn to_debug_str(b: u32) b.i32 * 3;\n\n        <alt>\n        inline\n        </alt>\n        fn inspect(items.to_debug_str[]) // <- varargs!\n        {\n            mut a = 0;\n            for (mut i = 0; i < items.len; i++)\n                a += items[i];\n\n            return a;\n        }\n\n        fn main() inspect(5.i32, 7.u32) - 31;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn va(args[]: i32[]) {\n            mut sum = 0;\n            for (mut i = 0; i < args.len; i++) sum += args[i];\n            return sum;\n        }\n\n        fn main() va(1, 2) - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn Stringy(i: i32) \"i:\" ~ i;\n\n        inline fn Printy(x: string): string = x;\n        inline fn Printy(x.Stringy): string = x;\n\n        fn Println(parts.Printy[]<alt>: [string]</alt>) {\n            mut total = 0;\n            for (mut i = 0; i < parts.len; i++) total += parts[i].len;\n            return total;\n        }\n\n        fn main() Println(\"str\", 10) - 7; // 'stri:10'.len\n    "_fu, testdiffs);
    TODO_0X4li7Vn(" // inline fn empty retval on autocall\n        inline fn concatable(a: bool)               a ? \"yes\" : \"no\";\n        inline fn concat(a.concatable, b: string)   a.concatable ~ b;\n        fn main()                                   concat(true, \"!\").len - 4;\n    "_fu, testdiffs);
    TODO_0X4li7Vn(" // inline fn empty retval on autocall\n        inline fn inl_print(a: byte)                a;\n        fn inl_println(a.inl_print[]: [string])     a.len;\n        fn main()                                   inl_println('a', 'b') - 2;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn fn_v(fn, v) fn(v);\n        struct XY { x: i32; y: i32; };  // fields weren't visible to addroffns\n        fn main() {\n            let v = XY(11, 13);\n            return fn_v(.x, v) + fn_v(.y, v) - 24;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn fn_v(x, v) x(v);             // same but name conflict - x arg and .x field\n        struct XY { x: i32; y: i32; };\n        fn main() {\n            let v = XY(11, 13);\n            return fn_v(.x, v) + fn_v(.y, v) - 24;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn fn_w(x, y) x(y);             // same thing but\n        fn fn_v(y, x) fn_w(fn y, x);    // extra nasty\n        struct XY { x: i32; y: i32; };\n        fn main() {\n            let v = XY(11, 13);\n            return fn_v(.x, v) + fn_v(.y, v) - 24;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn identity(x) x;\n        fn main() {\n            fn outer(depth1) {\n                let sum = depth1; return identity(|| sum);\n            }\n            let sum = 0; return outer(sum);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn identity(x) x;\n        fn test(depth0) {\n            fn outer(depth1) {\n                let sum = depth1; inline fn lambda1() sum; return identity(fn lambda1);\n            }\n            let sum = depth0; inline fn lambda0() sum; return outer(fn lambda0);\n        }\n        fn main() test(0);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(depth0) {\n            fn identity(x) x;\n            fn outer(depth1) {\n                fn inner(depth2) {\n                    let sum = depth2; inline fn lambda2() sum; return identity(fn lambda2);\n                }\n                let sum = depth1; inline fn lambda1() sum; return inner(fn lambda1);\n            }\n            let sum = depth0; inline fn lambda0() sum; return outer(fn lambda0);\n        }\n        fn main() test(0);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(depth0)\n        {\n            fn first(depth1) {\n                fn first_inner(depth2) {\n                    let sum = depth0 + depth1 + depth2;\n                    return sum;\n                }\n\n                let sum = depth0 + depth1;\n                return first_inner(|| sum);\n            }\n\n            fn second(depth1) {\n                fn second_inner(depth2) {\n                    let sum = depth0 + depth1 + depth2;\n                    return sum + first(|| sum);\n                }\n\n                let sum = depth0 + depth1;\n                return second_inner(|| sum);\n            }\n\n            let sum = depth0 + depth0;\n            return second(|| sum);\n        }\n\n        fn main() test(0);\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn use_a(implicit a: i32) a * a;\n        fn use_b(implicit b: i32) b * b;\n        fn use_c(implicit c: i32) c * c;\n\n        fn parseStuff(x: i32) {\n            fn doStuff(y: i32) doSomething(y * y);\n            return doStuff(x * x);\n        }\n\n        fn doSomething(x: i32) {\n            fn doSomething_inner(y: i32) y * use_a * descend(y * y);\n            return doSomething_inner(x * x);\n        }\n\n        fn descend(x: i32) { // <- x here\n            fn descend_inner(y: i32)\n                y & 1 ? parseStuff(y / 2) * parseStuff(x) // x not defined here?\n                      : doSomethingElse(y * y) * use_c;\n\n            return descend_inner(x * x);\n        }\n\n        fn doSomethingElse(x: i32) {\n            fn doSomethingElse_inner(y: i32) y * use_b;\n            return doSomethingElse_inner(x * x);\n        }\n\n        fn main() {\n            let implicit a = 0;\n            let implicit b = 0;\n            let implicit c = 0;\n            return parseStuff(0);\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn sA(_: $T) struct { hey: $T; };\n\n        fn fA(a: $T): sA($T) = [ a + 2 ];\n        fn main() 1.fA.hey - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn sB(_: $T) struct { hey: $T; };\n\n        fn fB(a: $T): sB($T) = [ a + 2 ];\n        fn main() 1.fB.hey - 1.u32.fB.hey <fail bad call><pass/> .i32 </fail> ;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn sB(_: $T) struct { hey: $T; };\n\n        // Prep for the thing below.\n        fn test(x) x.hey - 1;\n\n        // 'a' must be callable.\n        type a = sB(i32);\n        fn main() a(1).test;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn setupOperators(i: i32) {\n            struct BINOP { i: i32; };\n            return BINOP(:i);\n        }\n\n        fn main() setupOperators(0).i;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn sB(_: $T) struct { hey: $T; };\n\n        fn setupOperators(i: i32) {\n            struct BINOP { i: sB(i32); };\n            mut s: sB(i32) = [ i ];\n            return BINOP(s);\n        }\n\n        fn main() setupOperators(0).i.hey;\n    "_fu, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        fn Hey = struct { i: i32 }; // fn Hey generated nonsense code\n        fn get(s: Hey) s.i;\n    "_fu, "\n        fn main() {\n            mut s: _0::Hey();\n            return s.get();\n        }\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        fn Hey(_: $T) = struct { i: $T };\n        fn get(s) s.i;\n    "_fu, "\n        fn main() {\n            mut s: _0::Hey(i32);\n            return s.get(); // get(): wasn't visible, the struct didnt remember its template origin module.\n        }\n    "_fu } }, s_Options{}, testdiffs);
    TODO_0X4li7Vn("\n        fn sB(_: $T) struct { hey: $T; };\n\n        // Pattern & partial spec, how?\n        fn test(x: sB($T)): $T = x.hey - 1;\n\n        type a = sB(i32);\n        fn main() a(1).test;\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn setupOperators(i: i32) {\n            struct sB { hey: i32; }; // same as below\n            struct BINOP { i: sB; }; //  but no templates\n            return BINOP([ i ]);\n        }\n\n        fn main() setupOperators(0).i.hey;\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn setupOperators(i: i32) {\n            fn sB(_: $T) struct { hey: $T; }; // same as above\n            struct BINOP { i: sB(i32); };     //  but template\n            return BINOP([ i ]);\n        }\n\n        fn main() setupOperators(0).i.hey;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(x: i32) {\n            :OUTER {\n                :INNER {\n                    if (x > 1) break :OUTER;\n                    if (x > 0) break :INNER;\n                    return 2;\n                }\n                return 1;\n            }\n            return 0;\n        }\n\n        fn main() 2.test * 11 + (1.test - 1) * 13 + (0.test - 2) * 17;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(x: i32) {\n            return {\n                :BLOCK {\n                    if (x & 1) break :BLOCK 1;\n                    if (x & 2) return 2;\n                    3\n                }\n            };\n        }\n\n        fn main() 4.test - 5.test - 6.test; // 3-1-2\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(a: i32) {\n            mut w = 3;\n            :OUTER w += {\n                :INNER {\n                    if (a & 1)  break :INNER;\n                    else        break :OUTER;\n                };\n                5\n            };\n            return w;\n        }\n        fn main() 0.test + 1.test - 11;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn v(x: i32) {\n            return {\n                :BLOCK                          5000 + { // *2:\n                    if (x == 9) continue :BLOCK 2000;    //   - here\n                    if (x == 8) return           300;\n                    if (x == 7) break :BLOCK      40;\n                    else                           5;    //   - and here!\n                };\n            }; // -----------------------------------\n        }\n        fn main() 9.v + 8.v + 7.v + 6.v      - 12345;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        pub fn test(x: i32[], y: i32[]) {\n            let z = {\n                :BLOCK {\n                    mut w: i32[] = x;\n                    if (y[0]) w ~= y;\n                    if (w[0] != 17)\n                        break :BLOCK w;\n                    x;\n                };\n            };\n\n            return z[0] + z[z.len - 1];\n        }\n\n        fn main() test([ 1 ], [ 2 ]) - 3;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(mut x: i32) {\n            {\n                x++;\n                :CANT_FLATTEN { // naive block flattening\n                                //  can damage this label\n                    if (x & 1) break :CANT_FLATTEN;\n                    return x;\n                }\n            }\n            return x * 2;\n        }\n\n        fn main() test(1) + test(2) - 8;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn each(arr, fn)\n            for (mut i = 0; i < arr.len; i++)\n                fn(arr[i]);\n\n        fn some(arr, fn) {\n            arr.each: |x| if (fn(x)) return x;\n\n            return 0;\n        }\n\n        fn main() [ 1, 2, 3 ].some(|v| v & 1 == 0) - 2;\n\n        ;; EXPECT (fu::slate<3, int> { 1, 2, 3 })\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn outer() {\n            mut sum = 0;\n\n            inline fn inner(v: i32) {\n                for (mut i = 0; i < 10; i++) {\n                    sum += v;\n                    if (sum > 40)\n                        return :outer sum;\n                }\n\n                return v * 2;\n            }\n\n            mut x = 1;\n            for (;;) x = inner(x);\n        }\n\n        fn main() outer - 42; // extra points for style\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        inline fn each(arr, fn)\n            for (mut i = 0; i < arr.len; i++)\n                fn(arr[i]);\n\n        fn main() {\n            mut sum = 0;\n            :OUTER [1, 2, 3, 4].each(|x| {\n                sum += x;\n                for (mut i = 1; i--; ) // once\n                    if (sum == 6) break :OUTER;\n            });\n            return sum - 6;\n        }\n\n        ;; !NONTRIV_autocopy\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        inline fn hello(ref sum) {  //     when inlined into woot\n            if (sum > 2) return;    //      the hello block now looks like an expr\n            sum += 2;               // <-    with a diverging tail return here\n        }\n\n        fn woot(ref sum) hello(sum);\n\n        fn main() {\n            mut sum = -2;\n            sum.woot();\n            return sum;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn loop1d(i0, i1, fn)\n            for (mut i = i0; i < i1; i++)\n                fn(i);\n\n        fn main() {\n            mut x = 0;\n            loop1d(0, 10, |i| { if (x += i) break; });\n            return x - 1;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn loop1d(i0, i1, fn)\n            for (mut i = i0; i < i1; i++)\n                fn(i);\n\n        fn main() {\n            mut x = 0;\n            loop1d(0, 10, |i| { if (x += i) return x - 1; });\n            return 101;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn loop2d(x0, x1, y0, y1, fn) {\n            for (mut y = y0; y < y1; y++)\n            for (mut x = x0; x < x1; x++) fn(x, y);\n        }\n\n        fn main() {\n            mut sum = 0;\n            loop2d( x0:  0, x1: 10,\n                    y0: 10, y1: 12, |x, y|\n            {\n                if (y < 11) {\n                    sum++;          // for (x: 0, 10) so 10 times\n                    continue;       // <- inner loop\n                }\n\n                if (x == 1) break;  // <- outer loop\n                sum += (x + 1) * y; // once: (0+1)*(y=11)\n            });\n\n            return sum - 21;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn loop1d(i0, i1, fn)\n            for (mut i = i0; i < i1; i++)\n                fn(i);\n\n        fn loop2d(x0, x1, y0, y1, fn)\n            loop1d(y0, y1, |y|\n                loop1d(x0, x1, |x|\n                    fn (x, y)));\n\n        fn main() {\n            mut sum = 0;\n            loop2d( x0:  0, x1: 10,\n                    y0: 10, y1: 12, |x, y|\n            {\n                if (y < 11) {\n                    sum++;          // for (x: 0, 10) so 10 times\n                    continue;       // <- inner loop\n                }\n\n                if (x == 1) break;  // <- outer loop\n                sum += (x + 1) * y; // once: (0+1)*(y=11)\n            });\n\n            return sum - 21;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn next(implicit ref sum: i32, lifetime: [i32], locals_start: i32) {\n            sum += lifetime.len;\n            return lifetime[locals_start, lifetime.len];\n        }\n\n        fn Lifetime_each(lifetime: [i32], visit) {\n            for (mut i = 0; i < lifetime.len; i++)\n                visit(lifetime[i, lifetime.len]);\n        }\n\n        fn Lifetime_F_TODO_FIX_RRET(lifetime: [i32], locals_start: i32) {\n            Lifetime_each(:lifetime, visit: |l| {\n                if (l)\n                    Lifetime_F_TODO_FIX_RRET(l.next(locals_start), locals_start);\n            });\n        }\n\n        fn main() {\n            let lifetime = [ 1, 2 ];\n            let implicit mut sum = 0;\n            Lifetime_F_TODO_FIX_RRET(lifetime, locals_start: 1);\n            return sum - 4;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn hello(a) a * a;          ;; EXPECT (const int a)\n        fn main() {\n            mut a = 3;\n            let b = hello(a);\n            return b - 9;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct AB { a: i32; b: i32; };\n        fn sqr   (ref x: i32) x * x;\n        fn outer (ref ab: AB) sqr(ab.a) + sqr(ab.b);        ;; EXPECT const s_AB&\n        fn main() {\n            mut ab = AB(3, 5);\n            return ab.outer - 34;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn ascii_lower(a: string): string\n        {\n            let offset = 'a'.i32 - 'A'.i32;\n\n            mut res = a;\n            for (mut i = 0; i < res.len; i++)\n            {\n                let c = res[i];\n                if (c >= 'A' && c <= 'Z')\n                    res[i] = byte(c.i32 + offset);\n            }\n\n            return res;\n        }\n\n        <split/>\n\n        fn main() \"WORLD!\".ascii_lower[2].i32 - 'r'.i32;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn main() {\n            mut a = [[ 7 ]];\n            return a[0][0] - 7;        ;; EXPECT a[0][0]\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Overload     { args: Argument[]; };\n        struct SolvedNode   { x: i32; };\n        struct Argument     { default: SolvedNode; };\n\n        pub fn test(overload: Overload, ref args: SolvedNode[])\n        {\n            let host_args = overload.args;          ;; EXPECT fu::view<s_Argument> host_args\n\n            args.resize(host_args.len);             // .len didnt relax its arg\n            for (mut i = 0; i < args.len; i++)\n            {\n                if (!args[i])\n                {\n                    let host_arg = host_args[i];\n                    args[i] = host_arg.default;\n                }\n            }\n        }\n\n        fn main() {\n            mut o: Overload;\n            for (mut i = 0; i < 3; i++)\n                o.args ~= Argument(default: SolvedNode(x: i));\n\n            mut args: SolvedNode[];\n            test(o, args);\n            return args.len - args[args.len - 1].x - 1;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        struct S { hey: i32[]; };\n\n        fn m_and_c_cant_alias_001(ref m!: S, c!: S) {\n            m.hey.clear();\n            return c.hey; // noalias\n        }\n\n        fn test(ref mc: S) {\n            return m_and_c_cant_alias_001(m:mc, c:mc);  // Can't return a ref into c!\n        }                                               //  But can be made to work by creating an intermediate copyvar\n                                                        //   and move-returning from there.\n        fn main() {\n            mut mc  = S([ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]);\n            let hey = test(mc);\n            return hey.len - 10;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        // !!!! The m_and_c_cant_alias_001 test obsoletes this,\n        // !!!!  this is just detects what we definitely don't want to see -\n        // !!!!   returning a reference into a temporary copy.\n        //\n        struct S { hey: i32[]; };\n\n        fn m_and_c_cant_alias_002(ref m: S, c: S) {\n            m.hey.clear();\n            return c.hey; // noalias\n        }\n\n        fn main() {\n            mut mc  = S([ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]);\n            <fail alias>\n            let hey = m_and_c_cant_alias_002(mc, mc);\n            <pass/>\n            mut bc  = mc;\n            let hey = m_and_c_cant_alias_002(mc, bc);\n            </fail>\n            return hey.len - 10;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn grow_if_oob(a: &mut $T[], i: i32): &mut $T {\n            if (a.len <= i)\n                a.grow(i + 1);\n\n            return a[i];\n        }\n\n        struct BitSet { _data: u8[]; }\n\n        fn add_once(using _: &mut BitSet, idx: i32): bool {\n            let no_neg = idx < 0 ? -1 : 0;\n            let bucket = idx / 8 | no_neg;\n            let bit    = idx % 8;\n            let mask   = 1 << bit.u8;\n\n            ref entry = _data.grow_if_oob(bucket);\n            if !(entry & mask) {\n                entry |= mask;\n                return true;\n            }\n\n            // Already there.\n            return false;\n        }\n\n        type BitSet2D = BitSet[];\n\n        fn add_once(ref bs: BitSet2D, i: i32, j: i32): bool {\n            return bs\n                .grow_if_oob(i)\n                .add_once(j);\n        }\n\n        fn main() {\n            mut bs: BitSet2D;\n            bs.add_once(9, 9);\n            return bs.len + 1000 * bs[9]._data.len - 2010;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(mut _precedence = 0)\n        {\n            fn parseExpression(p1?: i32): i32 {\n                if !(_precedence = p1)\n                    return parseExpressionHead();\n\n                return _precedence;\n            }\n\n            fn parseExpressionHead()\n                parseExpression(_precedence * 101 + 1);\n\n            return parseExpression();\n        }\n\n        fn main() = test() - 1;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Overload {\n            is_var?: bool;\n            lifetime?: i32[];\n        }\n\n        fn GET(implicit overloads: Overload[], idx: i32) {\n            return overloads[idx];\n        }\n\n        // Uncommenting the inline passes this,\n        //  this is shit, we can't leave this like this.\n        //\n        // inline\n        fn Lifetime_each(mut lifetime: i32[], visit) {\n            for (mut i = 0; i < lifetime.len; i++) {\n                let r = lifetime[i];\n                let o = GET(r);\n                visit(:o, i?: i, lifetime?: lifetime);\n            }\n        }\n\n        fn Lifetime_ascend(mut lifetime: i32[], visit) {\n            Lifetime_each(:lifetime, visit: |o, shadow lifetime| {\n                visit(o);\n                lifetime ~= o.lifetime; // set::add\n            });\n        }\n\n        fn Lifetime_allowsMutrefReturn(lifetime: i32[]): bool {\n            Lifetime_ascend(:lifetime, visit: |o| {\n                if (o.is_var)\n                    return false; // ERR: propagateType(jump): h.ret_actual not available.\n            });\n\n            return true;\n        }\n\n        fn main() {\n            let implicit overloads = [\n                Overload,\n                Overload(lifetime: [ 0 ]),\n                Overload(lifetime: [ 1 ], is_var: true),\n                Overload(lifetime: [ 1 ]),\n                Overload(lifetime: [ 2 ]), /* the isvar */\n                Overload(lifetime: [ 3 ]), /* the non-isvar */\n            ];\n\n            let expect_false = Lifetime_allowsMutrefReturn([ 4 ]);\n            let expect_true  = Lifetime_allowsMutrefReturn([ 5 ]);\n\n            if (expect_false) return 20;\n            if (!expect_true) return 10;\n            return 0;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        struct Overload { items: string[]; };\n\n        // This is a bit borderline -\n        //  the problem here is that a: $T[] doesn't relax to a: [$T] (not during prep) -\n        //   so we don't match at all. Still, that's what's written -\n        //    perhaps regular fns are what doesn't behave correctly,\n        //     since their relax can create ambiguity?\n        //\n        fn last(a: $T[])                    a[a.len - 1];\n        fn arg_lets(overload: Overload)     overload.items[0, overload.items.len - 2];\n        fn test(overload: Overload)         overload.arg_lets.last.len;\n        fn main()                           Overload([ \"hello\", \"cruel\", \"world!\" ]).test - 5;\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Helpers      { index: i32; };\n        struct HelpersData  { mask!: i16; };\n\n        let HM_Function     = 1.i16 << 3;\n        let HM_Struct       = 1.i16 << 5;\n\n        using inline fn GET(h: Helpers, implicit ref _helpers_data: HelpersData[]): HelpersData\n            _helpers_data[h.index];\n                                                            //////////////////\n        fn isFnOrType(h: Helpers): bool                     ;; EXPECT fu::view\n            !!(h.mask & (HM_Function | HM_Struct));         //////////////////\n\n        fn main() {\n            let implicit mut _helpers_data = [ HelpersData(mask: 0) ];\n            return Helpers(0).isFnOrType.i32;\n        }\n    "_fu, testdiffs);
    ZERO_0X4li7Vn("\n        struct Helpers      { index: i32; };\n        struct HelpersData  { mask!: i16; };\n\n        let HM_Function     = 1.i16 << 3;\n        let HM_Struct       = 1.i16 << 5;\n\n        fn main() {\n            let implicit mut _helpers_data = [ HelpersData(mask: 0) ];\n\n            using inline fn GET(h: Helpers): HelpersData\n                _helpers_data[h.index];\n                                                            //////////////////\n            fn isFnOrType(h: Helpers): bool                 ;; EXPECT fu::view\n                !!(h.mask & (HM_Function | HM_Struct));     //////////////////\n\n            return Helpers(0).isFnOrType.i32;\n        }\n    "_fu, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "\n        pub fn ref(dest, item: $T, extras) {\n            for (mut i = 0; i < dest.len; i++) {\n                if (dest[i] >= item) {\n                    if (dest[i] != item) {\n                        dest.insert(i, item);\n                        extras.insert(i, []);\n                    }\n                    return extras[i];\n                }\n            }\n\n            dest.push(item);\n            extras.push([]);\n            return extras[extras.len - 1];\n        }\n    "_fu, "\n        fn Map(lax k: $K, lax v: $V) struct {\n            keys: $K[];\n            vals: $V[];\n        };\n\n        fn ref(using ref _, key)\n            _0::ref(\n                || keys, key,\n                || vals);\n    "_fu, "\n        fn main() {\n            mut _map: _1::Map(string, string);\n\n            fn upsert(k: string, v: string) _map._1::ref(k) = v;\n            upsert(\"hello\", \"world\");\n\n            // Relaxer failed here while I was trying to get rid of F_REFs from specTypes.\n            fn check(k: string) _map._1::ref(k) == \"world\" ? 0 : 1;\n            return check(\"hello\");\n        }\n    "_fu } }, s_Options{}, testdiffs);
    TODO_0X4li7Vn("\n        fn useless_ref_lambda(ref sources: string[]) {\n            fn src = sources[sources.len / 2]; // didn't relax the ref, failed bck\n            return src[1, src.len] ~ src[0, 1];\n        }\n        fn main() {\n            mut sources = [ \"ab\" ];\n            return useless_ref_lambda(sources) == \"ba\" ? 0 : 1;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        struct Node { items: Node[]; };\n\n        pure fn rec_useless_ref(ref n: Node) {\n            mut ret = n.items.len;\n            for (mut i = 0; i < n.items.len; i++)\n                ret += rec_useless_ref(n.items[i]);\n\n            return ret;\n        }\n\n        fn main() {\n            mut tree = Node([ Node(), Node() ]);\n            return rec_useless_ref(tree) - 2;\n        }\n    "_fu, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "\n        fn each(y<alt>: i32</alt>)\n            y & 1   ? y\n                    : y / 2 + each(y / 2);\n    "_fu, "\n        fn each(y<alt>: i32</alt>)\n            y & 1   ? y / 2\n                    : y / 2 + each(y / 2);\n    "_fu, "\n        fn main() {\n            let a = _0::each(100);\n            let b = _1::each(8);\n\n            return a+b - 107;\n        }\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "\n        fn find(keys: $T[], item: $T) {\n            for (mut i = 0; i < keys.len; i++) {\n                if (keys[i] >= item) {\n                    if (keys[i] != item)\n                        return -1;\n\n                    return i;\n                }\n            }\n\n            return -1;\n        }\n    "_fu, "\n        fn Set(_: $K) struct { keys: $K[]; };\n\n        fn has(using _, key)\n            _0::find(keys, key) >= 0;\n    "_fu, "\n        fn use_Set(a: string) {\n            mut set: _1::Set(string);\n            set.keys ~= a;\n            return set._1::has(a);\n        }\n\n        fn dont_use_Set(a: string, b: string) {\n            mut keys: string[];\n            keys ~= b;\n            keys ~= a;\n            return keys.find(a);\n        }\n\n        fn main() {\n            if (!use_Set(\"a\"))\n                return -1;\n\n            return dont_use_Set(\"a\", \"b\") - 1;\n        }\n    "_fu } }, s_Options{}, testdiffs);
    ZERO_0X4li7Vn("\n        fn test(tokens: i32[]) {\n            mut lidx = 0;\n            mut sum  = 0;\n\n            fn token(idx: i32, col!: i32)       = sum += idx * col;\n            fn token(idx: i32)                  = token(:idx, col: lidx - idx);\n\n            for (mut i = 0; i < tokens.len; i++)\n                token(tokens[i]);\n\n            return sum;\n        }\n\n        fn main() [ 1 ].test + 1;\n    "_fu, testdiffs);
    ZERO_0ErTzBWG(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        fn sum_each(a, b, each)     a.each + b.each;\n\n        fn hello(x) {\n            if (x & 1) {\n                fn each(y) y    ? y * each(y - 1)\n                                : 100;\n\n                return sum_each(x, x, fn each);\n            }\n            else {\n                fn each(y) y    ? y * each(y - 1)\n                                : 10000;\n\n                return sum_each(x, x, fn each);\n            }\n        }\n    "_fu, "\n        fn each(y) y & 1    ? y\n                            : y / 2 + each(y / 2);\n\n        fn main() _0::hello(1) - 2 * each(100)\n                + _0::hello(2) - 2 * each(20000);\n    "_fu } }, s_Options{}, testdiffs);
    TODO_YxitWGqo(fu_VEC<fu_STR> { fu::slate<2, fu_STR> { "\n        fn sum_each(a, b)       // Same as above,\n            a.each + b.each;    //  but we don't explicitly pass the fn each in.\n\n        fn hello(x) {\n            if (x & 1) {\n                fn each(a) a    ? a * each(a - 1)   // These get ignored?\n                                : 100;              //  sum_each goes and selects the one from _1.\n\n                return sum_each(x, x);\n            }\n            else {\n                fn each(b) b    ? b * each(b - 1)\n                                : 10000;\n\n                return sum_each(x, x);\n            }\n        }\n    "_fu, "\n        fn each(c) c & 1    ? c\n                            : c / 2 + each(c / 2);\n\n        fn main() _0::hello(1) - 2 * each(100)\n                + _0::hello(2) - 2 * each(20000);\n    "_fu } }, testdiffs);
    ZERO_0X4li7Vn("\n        fn a        = \"aaa\";\n        fn shorter  = \"bb\";\n        fn greater  = \"aac\";\n\n        return a <> shorter == +1\n            && a <> greater == -1 ? 0 : 101;\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn apply(num: i32, func: fn (i32): i32) = func(num);\n        fn main()                               = apply([1], |i| i - 1);\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn desc(a: i32, b: i32) b < a;\n\n        fn main() {\n            mut vals = [ 1, 2 ];\n            vals.sort(fn desc);\n            return vals[0] - 2;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn main() {\n            mut vals = [ 1, 2 ];\n            vals.sort(|a: i32, b: i32| b < a);\n            return vals[0] - 2;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn main() {\n            mut vals = [ 1, 2 ];\n            vals.sort(|a, b| b < a);\n            return vals[0] - 2;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn test(ref vals: i32[], xor: i32)\n            vals.sort(\n                |a: i32, b: i32|\n                    a^xor < b^xor);\n\n        fn main() {\n            mut vals = [ 1, 2 ];\n            vals.test(xor: 3); // xor:3 descs 1 and 2.\n            return vals[0] - 2;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        fn test(ref aa: i32[], bb: i32[])\n            for (ref a, b in aa, bb) a += b;\n        /*\n            Technically the same as:\n            for (aa, bb, |ref a, b| a += b);\n        */\n\n        fn main() {\n            mut aa = [ 1, 2, 3 ];\n            test(aa, [ 10, 20, 30 ]);\n            return aa[1] - 22;\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        primitive s32: i32;\n\n        fn main() {\n            let i: s32 = 0;\n            <fail return type annot>\n            return i;        <pass/>\n            return i.i32;    </fail>\n        }\n    "_fu, testdiffs);
    TODO_0X4li7Vn("\n        enum E { None };\n\n        fn main() {\n            let e = None;\n            <fail return type annot>\n            return e;        <pass/>\n            return e.i32;    </fail>\n        }\n    "_fu, testdiffs);
}

#endif
