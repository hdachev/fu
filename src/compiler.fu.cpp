
#include <cstdint>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/init_priority.h>
#include <fu/int.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

struct s_Argument;
struct s_BitSet;
struct s_CodegenOutput;
struct s_Context;
struct s_Extended;
struct s_Helpers;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Lint;
struct s_Map_JBAFFW0D;
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
struct s_SolverOutput;
struct s_Struct;
struct s_Target;
struct s_Template;
struct s_TestDiffs;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;

double hr_CPFg3qvV();
fu_STR getFile_JdJwrrbj(fu_STR&&, s_Context&);
fu_STR get_k88nYqFr(fu_STR&&);
fu_STR lower_Z2cjwPPO(fu_STR&&);
fu_STR qBAD_HIwg52Ja(const fu_STR&);
fu_STR resolveFile_JdJwrrbj(const fu_STR&, s_Context&);
int64_t size_1WaOntvF(fu_STR&&);
s_CodegenOutput cpp_codegen_2xq2c97A(const s_Module&, const s_Context&);
s_Context ZERO_0X4li7Vn(const fu_STR&, s_TestDiffs&);
s_Context ZERO_a6MPmkBY(fu_VEC<fu_STR>&&, const s_Options&, s_TestDiffs&);
s_LexerOutput lex_SxV1vceq(const fu_STR&, fu::view<char>);
s_Module& getModule_JdJwrrbj(const fu_STR&, s_Context&);
s_ModuleStat ModuleStat_now_pUbtfzLn();
s_ModuleStat operator-(const s_ModuleStat&, const s_ModuleStat&);
s_ParserOutput parse_p69A2qTI(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&);
s_SolverOutput solve_j5ptKWox(const s_Context&, s_Module&, const s_Options&);
static int compile_ivuwbXwC(const fu_STR&, const fu_STR&, s_Context&, const s_Options&);
void ModuleStat_print_WPxitUbE(const s_ModuleStat&, const fu_STR&, fu::view<char>);
void build_Ha3Hbin4(bool, fu_STR&&, const fu_STR&, const fu_STR&, fu_STR&&, fu_STR&&, fu_STR&&, const fu_STR&, fu::view<char>, const fu_STR&, const fu_VEC<fu_STR>&, const fu_VEC<fu_STR>&, const s_Context&);
void operator+=(s_ModuleStat&, const s_ModuleStat&);
void setModule_IgtJxUnL(const s_Module&, s_Context&);
void set_next_I8EoLloc(s_TestDiffs&, const fu_STR&, const fu_STR&);

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

                                #ifndef DEF_s_Helpers
                                #define DEF_s_Helpers
struct s_Helpers
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

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    fu_STR kind;
    s_Helpers helpers;
    int flags;
    fu_STR value;
    fu_VEC<s_SolvedNode> items;
    s_TokenIdx token;
    s_Type type;
    s_Target target;
    s_RWRanges rwr;
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
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
    fu_STR sighash;
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
    s_BitSet soft_risk;
    s_BitSet hard_risk;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || local
            || soft_risk
            || hard_risk
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
    fu_VEC<fu_STR> link;
    fu_VEC<fu_STR> include_dirs;
    fu_VEC<fu_STR> extra_sources;
    explicit operator bool() const noexcept
    {
        return false
            || src
            || link
            || include_dirs
            || extra_sources
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

                                #ifndef DEF_s_Map_JBAFFW0D
                                #define DEF_s_Map_JBAFFW0D
struct s_Map_JBAFFW0D
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
    s_Map_JBAFFW0D files;
    s_Map_JBAFFW0D fuzzy;
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

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_if_last_85KQkyE0
                                #define DEFt_if_last_85KQkyE0
inline char if_last_85KQkyE0(fu::view<char> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const char*)fu::NIL);
}
                                #endif

static fu_STR absdir_0X4li7Vn(const fu_STR& a)
{
    return ((if_last_85KQkyE0(a) == '/') ? fu_STR(a) : (a + '/'));
}

static const fu_STR HOME fu_INIT_PRIORITY(1006) = absdir_0X4li7Vn(get_k88nYqFr("HOME"_fu));

                                #ifndef DEFt_x7E_KclJlPSOsdf
                                #define DEFt_x7E_KclJlPSOsdf
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu_STR locate_PRJDIR_LI96RGZs()
{
    // Hoisted:
    fu_STR x;

    /*MOV*/ fu_STR dir = (HOME + "fu/"_fu);
    fu_STR fn = (dir + "src/compiler.fu"_fu);
    const int64_t fs = size_1WaOntvF(fu_STR(fn));
    if (!(fs > 1000ll))
        fu::fail(x7E((("Bad compiler.fu: "_fu + fn) + ": "_fu), fu::i64dec(fs)));

    const fu_STR* BL_2_v;
    fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
    {
        x = ("PRJDIR: "_fu + dir);
        BL_2_v = &(x);
    (void)0;}), *BL_2_v)) }));
    return /*NRVO*/ dir;
}

                                #ifndef DEF_PRJDIR
                                #define DEF_PRJDIR
extern const fu_STR PRJDIR fu_INIT_PRIORITY(1006) = locate_PRJDIR_LI96RGZs();
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu_STR DEFAULT_WORKSPACE fu_INIT_PRIORITY(1006) = (PRJDIR + "build-cpp/"_fu);
                                #endif

                                #ifndef DEF_FULIB
                                #define DEF_FULIB
extern const fu_STR FULIB fu_INIT_PRIORITY(1006) = (PRJDIR + "include/fu/_fulib.cpp"_fu);
                                #endif

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE;
                                #endif

                                #ifndef DEFt_clone_uFTeeyF6
                                #define DEFt_clone_uFTeeyF6
inline int clone_uFTeeyF6(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_85KQkyE0
                                #define DEFt_clone_85KQkyE0
inline const fu_STR& clone_85KQkyE0(const fu_STR& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_av5PxtCI
                                #define DEFt_clone_av5PxtCI
inline const s_ModuleInputs& clone_av5PxtCI(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_krBIyjUl
                                #define DEFt_clone_krBIyjUl
inline const fu_VEC<int>& clone_krBIyjUl(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_RKBsevnx
                                #define DEFt_clone_RKBsevnx
inline const fu_VEC<s_Struct>& clone_RKBsevnx(const fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_qVCYkPgh
                                #define DEFt_clone_qVCYkPgh
inline const s_SolvedNode& clone_qVCYkPgh(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_bjZCjfhl
                                #define DEFt_clone_bjZCjfhl
inline const fu_VEC<s_Overload>& clone_bjZCjfhl(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_fx1SDBUT
                                #define DEFt_clone_fx1SDBUT
inline const fu_VEC<s_Extended>& clone_fx1SDBUT(const fu_VEC<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_vOYHP1IT
                                #define DEFt_clone_vOYHP1IT
inline const fu_VEC<s_ScopeItem>& clone_vOYHP1IT(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_fnMFgrK3
                                #define DEFt_clone_fnMFgrK3
inline const fu_VEC<s_Target>& clone_fnMFgrK3(const fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_Aj8LNizZ
                                #define DEFt_clone_Aj8LNizZ
inline s_Scope clone_Aj8LNizZ(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_bjZCjfhl(a.overloads);
        res.extended = clone_fx1SDBUT(a.extended);
        res.items = clone_vOYHP1IT(a.items);
        res.implicits = clone_vOYHP1IT(a.implicits);
        res.imports = clone_krBIyjUl(a.imports);
        res.privates = clone_krBIyjUl(a.privates);
        res.usings = clone_fnMFgrK3(a.usings);
        res.converts = clone_fnMFgrK3(a.converts);
        res.pub_items = clone_uFTeeyF6(a.pub_items);
        res.pub_cnvrts = clone_uFTeeyF6(a.pub_cnvrts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_zyxQCvJi
                                #define DEFt_clone_zyxQCvJi
inline s_SolverOutput clone_zyxQCvJi(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_qVCYkPgh(a.root);
        res.scope = clone_Aj8LNizZ(a.scope);
        res.notes = clone_uFTeeyF6(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_G6pqsUn1
                                #define DEFt_clone_G6pqsUn1
inline const s_CodegenOutput& clone_G6pqsUn1(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_M6x1M0Mx
                                #define DEFt_clone_M6x1M0Mx
inline s_ModuleOutputs clone_M6x1M0Mx(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.deps = clone_krBIyjUl(a.deps);
        res.types = clone_RKBsevnx(a.types);
        res.solve = clone_zyxQCvJi(a.solve);
        res.cpp = clone_G6pqsUn1(a.cpp);
        res.init_prio = clone_uFTeeyF6(a.init_prio);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_plfOxjBD
                                #define DEFt_clone_plfOxjBD
inline const s_ModuleStats& clone_plfOxjBD(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_eixx2GVS
                                #define DEFt_clone_eixx2GVS
inline s_Module clone_eixx2GVS(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_uFTeeyF6(a.modid);
        res.fname = clone_85KQkyE0(a.fname);
        res.in = clone_av5PxtCI(a.in);
        res.out = clone_M6x1M0Mx(a.out);
        res.stats = clone_plfOxjBD(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_map_CTjNCNmP
                                #define DEFt_map_CTjNCNmP
inline fu_VEC<s_Module> map_CTjNCNmP(fu::view<s_Module> a)
{
    /*MOV*/ fu_VEC<s_Module> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_eixx2GVS(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_4RNMgCNW
                                #define DEFt_clone_4RNMgCNW
inline fu_VEC<s_Module> clone_4RNMgCNW(fu::view<s_Module> a)
{
    return map_CTjNCNmP(a);
}
                                #endif

                                #ifndef DEFt_clone_Ap8Zdan6
                                #define DEFt_clone_Ap8Zdan6
inline const s_Map_JBAFFW0D& clone_Ap8Zdan6(const s_Map_JBAFFW0D& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_5I3jTllN
                                #define DEFt_clone_5I3jTllN
inline s_Context clone_5I3jTllN(const s_Context& a)
{
    /*MOV*/ s_Context res {};

    {
        res.modules = clone_4RNMgCNW(a.modules);
        res.files = clone_Ap8Zdan6(a.files);
        res.fuzzy = clone_Ap8Zdan6(a.fuzzy);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_VGha2dKA
                                #define DEFt_clone_VGha2dKA
inline s_Scope clone_VGha2dKA(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_bjZCjfhl(a.overloads);
        res.extended = clone_fx1SDBUT(a.extended);
        res.items = clone_vOYHP1IT(a.items);
        res.implicits = clone_vOYHP1IT(a.implicits);
        res.imports = clone_krBIyjUl(a.imports);
        res.privates = clone_krBIyjUl(a.privates);
        res.usings = clone_fnMFgrK3(a.usings);
        res.converts = clone_fnMFgrK3(a.converts);
        res.pub_items = clone_uFTeeyF6(a.pub_items);
        res.pub_cnvrts = clone_uFTeeyF6(a.pub_cnvrts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_xQX8ydH9
                                #define DEFt_clone_xQX8ydH9
inline s_SolverOutput clone_xQX8ydH9(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_qVCYkPgh(a.root);
        res.scope = clone_VGha2dKA(a.scope);
        res.notes = clone_uFTeeyF6(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_aK06JrSd
                                #define DEFt_clone_aK06JrSd
inline s_ModuleOutputs clone_aK06JrSd(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.deps = clone_krBIyjUl(a.deps);
        res.types = clone_RKBsevnx(a.types);
        res.solve = clone_xQX8ydH9(a.solve);
        res.cpp = clone_G6pqsUn1(a.cpp);
        res.init_prio = clone_uFTeeyF6(a.init_prio);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_MVzrYodk
                                #define DEFt_clone_MVzrYodk
inline s_Module clone_MVzrYodk(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_uFTeeyF6(a.modid);
        res.fname = clone_85KQkyE0(a.fname);
        res.in = clone_av5PxtCI(a.in);
        res.out = clone_aK06JrSd(a.out);
        res.stats = clone_plfOxjBD(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_N_SD_HasStaticInit
                                #define DEF_N_SD_HasStaticInit
inline constexpr int N_SD_HasStaticInit = (1 << 30);
                                #endif

static int compile_ivuwbXwC(const fu_STR& fname, const fu_STR& via, s_Context& ctx, const s_Options& options)
{
    s_Module module = clone_MVzrYodk(getModule_JdJwrrbj(fname, ctx));
    if (!module.in)
    {
        module.out = s_ModuleOutputs{};
        fu_STR _0 {};
        fu_STR src = ((_0 = getFile_JdJwrrbj(fu_STR(fname), ctx)) ? static_cast<fu_STR&&>(_0) : fu::fail(((("import badfile: `"_fu + via) + fname) + "`."_fu)));
        const s_ModuleStat stat0 = ModuleStat_now_pUbtfzLn();
        s_LexerOutput lexer_result = lex_SxV1vceq(src, fname);
        const s_ModuleStat stat1 = ModuleStat_now_pUbtfzLn();
        s_ParserOutput parser_result = parse_p69A2qTI(module.modid, fname, src, lexer_result.tokens, options);
        const s_ModuleStat stat2 = ModuleStat_now_pUbtfzLn();
        module.in = s_ModuleInputs { fu_STR(src), s_LexerOutput(lexer_result), s_ParserOutput(parser_result) };
        module.stats.lex = (stat1 - stat0);
        module.stats.parse = (stat2 - stat1);
        setModule_IgtJxUnL(module, ctx);
    }
    else
    {
        if (!(module.out))
            fu::fail((((("import circle: `"_fu + fname) + "\n\t<- "_fu) + via) + "`."_fu));

    };
    if (!module.out)
    {
        module.out.init_prio = 1;
        fu_VEC<fu_STR> fuzimports { module.in.parse.fuzimports };
        for (int i = 0; i < fuzimports.size(); i++)
        {
            const int prio = compile_ivuwbXwC(resolveFile_JdJwrrbj(fuzimports[i], ctx), (fname + (via ? ("\n\t<- "_fu + via) : fu_STR{})), ctx, options);
            if (module.out.init_prio < prio)
                module.out.init_prio = prio;

        };
        const s_ModuleStat stat0 = ModuleStat_now_pUbtfzLn();
        module.out.solve = solve_j5ptKWox(ctx, module, options);
        const s_ModuleStat stat1 = ModuleStat_now_pUbtfzLn();
        module.out.cpp = cpp_codegen_2xq2c97A(module, ctx);
        const s_ModuleStat stat2 = ModuleStat_now_pUbtfzLn();
        module.stats.solve = (stat1 - stat0);
        module.stats.codegen = (stat2 - stat1);
        setModule_IgtJxUnL(module, ctx);
    };
    return module.out.init_prio + ((module.out.solve.notes & N_SD_HasStaticInit) ? 1 : int{});
}

void build_L8bvuAIR(const fu_STR& fname, const bool run, const fu_STR& dir_wrk, const fu_STR& bin, const fu_STR& dir_obj, const fu_STR& dir_src, const fu_STR& dir_cpp, fu::view<char> scheme, const fu_VEC<fu_STR>& flags_cc, const fu_VEC<fu_STR>& flags_ld)
{
    // Hoisted:
    fu_STR x;
    fu_STR x_1;
    fu_STR x_2;
    fu_STR x_3;

    s_Context ctx = clone_5I3jTllN(CTX_PRELUDE);
    const s_Options options {};

    {
        const fu_STR* BL_2_v;
        fu::println((fu::slate<2, fu_STR> { fu_STR((__extension__ (
        {
            x = "COMPILE "_fu;
            BL_2_v = &(x);
        (void)0;}), *BL_2_v)), fu_STR(((void)void(), fname)) }));
        const double t0 = hr_CPFg3qvV();
        compile_ivuwbXwC(fname, (*(const fu_STR*)fu::NIL), ctx, options);
        const double t1 = hr_CPFg3qvV();
        const double tt = (t1 - t0);
        if ((t1 - t0) > 0.025)
        {
            s_ModuleStat lex {};
            s_ModuleStat parse {};
            s_ModuleStat solve {};
            s_ModuleStat codegen {};
            fu::view<s_Module> m = ctx.modules;
            for (int i = 0; i < m.size(); i++)
            {
                lex += m[i].stats.lex;
                parse += m[i].stats.parse;
                solve += m[i].stats.solve;
                codegen += m[i].stats.codegen;
            };
            ModuleStat_print_WPxitUbE(lex, "\n    lex "_fu, fu::view<char>{});
            ModuleStat_print_WPxitUbE(parse, "  parse "_fu, fu::view<char>{});
            ModuleStat_print_WPxitUbE(solve, "  solve "_fu, fu::view<char>{});
            ModuleStat_print_WPxitUbE(codegen, "codegen "_fu, "\n"_fu);
        };
        const fu_STR* BL_6_v;
        const fu_STR* BL_7_v;
        const fu_STR* BL_8_v;
        fu::println((fu::slate<3, fu_STR> { fu_STR((__extension__ (
        {
            x_1 = "        "_fu;
            BL_6_v = &(x_1);
        (void)0;}), *BL_6_v)), fu_STR((__extension__ (
        {
            x_2 = fu::f64dec(tt);
            BL_7_v = &(x_2);
        (void)0;}), *BL_7_v)), fu_STR((__extension__ (
        {
            x_3 = "s\n"_fu;
            BL_8_v = &(x_3);
        (void)0;}), *BL_8_v)) }));
    };
    build_Ha3Hbin4(run, fu_STR(dir_wrk), FULIB, bin, fu_STR(dir_obj), fu_STR(dir_src), fu_STR(dir_cpp), fname, scheme, (*(const fu_STR*)fu::NIL), flags_ld, flags_cc, ctx);
}

static const fu_VEC<fu_STR> NOTES fu_INIT_PRIORITY(1006) = fu_VEC<fu_STR> { fu::slate<17, fu_STR> { "FN_recursion"_fu, "FN_resolve"_fu, "FN_reopen"_fu, "TYPE_recursion"_fu, "TYPE_resolve"_fu, "TYPE_reopen"_fu, "DEAD_code"_fu, "DEAD_call"_fu, "DEAD_let"_fu, "DEAD_if_cond"_fu, "DEAD_if_cons"_fu, "DEAD_arrlit"_fu, "DEAD_loop_init"_fu, "NONTRIV_autocopy"_fu, "RELAX_respec"_fu, "BCK_soft_risk"_fu, "BCK_must_seq"_fu } };

static fu_STR ensure_main_7vzPipqI(const fu_STR& src)
{
    return (fu::has(src, "fn main"_fu) ? fu_STR(src) : (("\n\nfn main(): i32 {\n"_fu + src) + "\n}\n"_fu));
}

                                #ifndef DEFt_x3Cx3E_gcxVH86X
                                #define DEFt_x3Cx3E_gcxVH86X
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_b25bS2EX
                                #define DEFt_x3Cx3E_b25bS2EX
inline int x3Cx3E_b25bS2EX(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_wtS8CFRs
                                #define DEFt_x3Cx3E_wtS8CFRs
inline int x3Cx3E_wtS8CFRs(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_b25bS2EX(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEFt_update_6p7BnchK
                                #define DEFt_update_6p7BnchK
inline bool update_6p7BnchK(const fu_STR& item, const fu_STR& extra, s_Map_JBAFFW0D& _)
{
    int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_wtS8CFRs(_.keys[i], item);
        if (cmp == 0)
        {
            _.vals.mutref(i) = extra;
            return false;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    _.keys.insert(lo, fu_STR(item));
    _.vals.insert(lo, fu_STR(extra));
    return true;
}
                                #endif

                                #ifndef DEFt_set_QiKLJrR8
                                #define DEFt_set_QiKLJrR8
inline bool set_QiKLJrR8(s_Map_JBAFFW0D& _, const fu_STR& key, const fu_STR& value)
{
    return update_6p7BnchK(key, value, _);
}
                                #endif

s_Context compile_snippets_zpq1Fbin(fu::view<fu_STR> sources, fu::view<fu_STR> fnames, fu::view<s_Options> options)
{
    /*MOV*/ s_Context ctx = clone_5I3jTllN(CTX_PRELUDE);
    for (int i = 0; i < sources.size(); i++)
    {
        const fu_STR& snippet = sources[i];
        fu_STR src = ((i == (sources.size() - 1)) ? ensure_main_7vzPipqI(snippet) : fu_STR(snippet));
        fu_STR fname = ((fnames.size() > i) ? fu_STR(fnames[i]) : (x7E((PRJDIR + "__tests__/_"_fu), fu::i64dec(i)) + ".fu"_fu));
        set_QiKLJrR8(ctx.files, fname, src);
        compile_ivuwbXwC(fname, (*(const fu_STR*)fu::NIL), ctx, ((options.size() > i) ? options[i] : (*(const s_Options*)fu::NIL)));
    };
    for (int i_1 = 0; i_1 < ctx.modules.size(); i_1++)
    {
        s_Module& module = ctx.modules.mutref(i_1);
        int notes = module.out.solve.notes;
        for (int bit = 0; (bit < NOTES.size()) && notes; bit++)
        {
            const int mask = (1 << bit);
            const int isset = (notes & mask);
            notes &= ~mask;
            if (isset)
                module.out.cpp.src += (("// "_fu + NOTES[bit]) + "\n"_fu);

        };
    };
    return /*NRVO*/ ctx;
}

fu_STR snippet2cpp_0X4li7Vn(const fu_STR& src)
{
    fu_STR fname = "/DIR/FILE.fu"_fu;
    s_Context ctx = compile_snippets_zpq1Fbin((fu::slate<1, fu_STR> { fu_STR(src) }), (fu::slate<1, fu_STR> { fu_STR(fname) }), fu::view<s_Options>{});
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        if (module.fname == fname)
            return fu_STR(module.out.cpp.src);

    };
    return fu_STR{};
}

static int unindent_left_PuuulSfl(fu::view<char> src, const int i0)
{
    int i1 = i0;
    while (i1--)
    {
        const char c = src[i1];
        if (c != ' ')
        {
            if (c == '\n')
                return i1 + 1;

            break;
        };
    };
    return int(i0);
}

                                #ifndef DEFt_split_znYgrcfc
                                #define DEFt_split_znYgrcfc
inline void split_znYgrcfc(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                fu_STR substr = fu::slice(str, last, next);
                result += fu_STR(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        fu_STR substr = fu::slice(str, last);
        result += fu_STR(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEFt_split_KclJlPSO
                                #define DEFt_split_KclJlPSO
inline fu_VEC<fu_STR> split_KclJlPSO(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_znYgrcfc(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEFt_split_1Bsz5ilw
                                #define DEFt_split_1Bsz5ilw
inline void split_1Bsz5ilw(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                fu_STR substr = fu::slice(str, last, next);
                result += fu_STR(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        fu_STR substr = fu::slice(str, last);
        result += fu_STR(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEFt_split_wtS8CFRs
                                #define DEFt_split_wtS8CFRs
inline fu_VEC<fu_STR> split_wtS8CFRs(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_1Bsz5ilw(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEFt_only_ZM5iCY9I
                                #define DEFt_only_ZM5iCY9I
inline const fu_STR& only_ZM5iCY9I(fu::view<fu_STR> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static fu_STR ERR_TRIM_0X4li7Vn(const fu_STR& e)
{
    int start = 0;
    bool startOK = false;
    for (int i = 0; i < e.size(); i++)
    {
        const char c = e[i];
        if (c == '/')
            start = (i + 1);
        else if (c == ':')
            startOK = true;
        else if (c == '\n')
            break;

    };
    if (!(startOK))
        fu::fail(("FAIL: Error does not start with an `dir/file.fu@line:col` marker:\n"_fu + e));

    return fu::slice(e, start);
}

static fu_STR ERR_STRIP_ANSI_0X4li7Vn(/*MOV*/ fu_STR&& e)
{
    for (int i = 0; i < e.size(); i++)
    {
        const char c = e[i];
        if (c == '\x1B')
        {
            const int i0 = i++;
            for (; i < e.size(); i++)
            {
                const char c_1 = e[i];
                if (c_1 == 'm')
                {
                    i++;
                    e.splice(i0, (i - i0));
                    i = i0;
                    i--;
                    break;
                };
            };
        };
    };
    return static_cast<fu_STR&&>(e);
}

static fu_STR ERR_STRIP_SNIPPETS_0X4li7Vn(/*MOV*/ fu_STR&& e)
{
    int i0 = 0;
    for (int i = 0; i < e.size(); i++)
    {
        const char c = e[i];
        if ((c == ' ') || (c == '\n'))
            continue;

        const bool snippet = (((c >= '0') && (c <= '9')) || (c == '|'));
        i++;
        for (; i < e.size(); i++)
        {
            const char c_1 = e[i];
            if (c_1 == '\n')
            {
                i++;
                if (snippet)
                {
                    e.splice(i0, (i - i0));
                    i = i0;
                }
                else
                    i0 = i;

                i--;
                break;
            };
        };
    };
    return static_cast<fu_STR&&>(e);
}

static fu_STR ERR_KEY_Ys7VTVTn(fu::view<fu_STR> sources)
{
    /*MOV*/ fu_STR key {};
    for (int i = 0; i < sources.size(); i++)
    {
        fu::view<char> src = sources[i];
        const int end = unindent_left_PuuulSfl(src, src.size());
        key += fu::get_view(src, 0, end);
    };
    return /*NRVO*/ key;
}

                                #ifndef DEFt_map_5f8Fg9cR
                                #define DEFt_map_5f8Fg9cR
inline fu_VEC<s_Options> map_5f8Fg9cR(fu::view<fu_STR> a, const s_Options& options)
{
    /*MOV*/ fu_VEC<s_Options> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        const s_Options* BL_3_v;
        res.mutref(i) = (__extension__ (
        {
            [[maybe_unused]] fu::view<char> _ = a[i];
            BL_3_v = &(options);
        (void)0;}), *BL_3_v);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_find_QuOA9X99
                                #define DEFt_find_QuOA9X99
inline int find_QuOA9X99(fu::view<char> a, const char b, int start)
{
    start = ((start > 0) ? int(start) : 0);
    for (/*MOV*/ int i = start; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEFt_find_IswWtOx1
                                #define DEFt_find_IswWtOx1
inline int find_IswWtOx1(fu::view<fu_STR> a, fu::view<char> b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEFt_grow_if_oob_LHD0ASOA
                                #define DEFt_grow_if_oob_LHD0ASOA
inline fu_VEC<fu_STR>& grow_if_oob_LHD0ASOA(fu_VEC<fu_VEC<fu_STR>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_find_3yRdKyg4
                                #define DEFt_find_3yRdKyg4
inline int find_3yRdKyg4(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

s_Context ZERO_a6MPmkBY(fu_VEC<fu_STR>&& sources, const s_Options& options, s_TestDiffs& testdiffs)
{
    for (int i = 0; i < sources.size(); i++)
    {
        for (; ; )
        {
            const fu_STR& src = sources[i];
            int start0 = fu::lfind(src, "<fail"_fu);
            if (start0 < 0)
                break;

            int end0 = fu::lfind(src, "</fail>"_fu, start0);
            if (!((end0 >= 0)))
                fu::fail("No closing `</fail>` for `<fail>`."_fu);

            int start1 = (start0 + 5);
            while (src[start1++] != '>')
            {
            };
            fu_STR msg = fu::slice(src, (start0 + 5), (start1 - 1));
            if (!(msg))
                fu::fail("No <fail keywords>."_fu);

            if (!(msg[0] == ' '))
                fu::fail((("Bad <fail keywords>: `<fail"_fu + msg) + ">`."_fu));

            const int end1 = (end0 + 7);
            start0 = unindent_left_PuuulSfl(src, start0);
            end0 = unindent_left_PuuulSfl(src, end0);
            fu_STR prefix = fu::slice(src, 0, start0);
            fu_STR suffix = fu::slice(src, end1, src.size());
            fu_VEC<fu_STR> split = split_KclJlPSO(fu::slice(src, start1, end0), "<pass/>"_fu);
            if (!(split.size() > 1))
                fu::fail("No `<pass/>` for `<fail>`."_fu);

            if (!(split.size() < 3))
                fu::fail("Multiple `<pass/>` blocks for `<fail>`."_fu);

            fu_VEC<fu_STR> fails = split_wtS8CFRs(split[0], "<fail/>"_fu);
            split.shift();
            fu::view<char> pass = only_ZM5iCY9I(split);
            for (int j = fails.size(); j-- > 0; )
            {
                fu::view<char> fail = fails[j];
                const int end = unindent_left_PuuulSfl(fail, fail.size());
                sources.mutref(i) = ((prefix + fu::get_view(fail, 0, end)) + suffix);

                try
                {
                    ZERO_a6MPmkBY(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
                }
                catch (const std::exception& o_0)
                {
                    fu_STR e = fu_TO_STR(o_0.what());

                {
                    fu_STR e_1 = ERR_TRIM_0X4li7Vn(e);
                    fu_STR actual = lower_Z2cjwPPO(ERR_STRIP_SNIPPETS_0X4li7Vn(ERR_STRIP_ANSI_0X4li7Vn(fu_STR(e_1))));
                    bool BUG_ok = false;
                    int m0 = -1;
                    for (int m1 = 0; (m1 <= msg.size()); m1++)
                    {
                        const char c = ((m1 < msg.size()) ? char(msg[m1]) : ' ');
                        if ((int(fu::u8(c)) <= 32))
                        {
                            if ((m0 >= 0))
                            {
                                fu_STR exact = fu::slice(msg, m0, m1);
                                if (exact == "BUG"_fu)
                                    BUG_ok = true;

                                fu_STR expect = lower_Z2cjwPPO(fu_STR(exact));
                                if (!fu::has(actual, expect))
                                    fu::fail((((((("<fail> mismatch:\n\n    Expected error keyword:\n        "_fu + qBAD_HIwg52Ja(expect)) + " from pattern <fail"_fu) + qBAD_HIwg52Ja(msg)) + ">"_fu) + "\n\n    ... not present in error message:\n\n"_fu) + e_1));

                            };
                            m0 = -1;
                        }
                        else if (m0 < 0)
                            m0 = m1;

                    };
                    if (!BUG_ok && fu::has(e_1, "BUG"_fu))
                        fu::fail(("<fail> error message contains BUG:\n\n"_fu + e_1));

                    set_next_I8EoLloc(testdiffs, ERR_KEY_Ys7VTVTn(sources), e_1);
                    continue;
                }
                }
;
                fu::fail(("<fail> does not throw:\n"_fu + sources[i]));
            };
            const int end = unindent_left_PuuulSfl(pass, pass.size());
            sources.mutref(i) = ((prefix + fu::get_view(pass, 0, end)) + suffix);
        };
    };
    for (int i_1 = 0; i_1 < sources.size(); i_1++)
    {
        for (; ; )
        {
            const fu_STR& src = sources[i_1];
            int start0 = fu::lfind(src, "<alt>"_fu);
            if (start0 < 0)
                break;

            int end0 = fu::lfind(src, "</alt>"_fu, start0);
            if (!((end0 >= 0)))
                fu::fail("No closing `</alt>` for `<alt>`."_fu);

            const int start1 = (start0 + 5);
            const int end1 = (end0 + 6);
            start0 = unindent_left_PuuulSfl(src, start0);
            end0 = unindent_left_PuuulSfl(src, end0);
            fu_STR prefix = fu::slice(src, 0, start0);
            fu_STR suffix = fu::slice(src, end1, src.size());
            fu_VEC<fu_STR> split = split_KclJlPSO(fu::slice(src, start1, end0), "<alt/>"_fu);
            if (split.size() < 2)
                split += fu_STR{};

            for (int j = split.size(); j-- > 0; )
            {
                fu::view<char> part = split[j];
                const int end = unindent_left_PuuulSfl(part, part.size());
                sources.mutref(i_1) = ((prefix + fu::get_view(part, 0, end)) + suffix);
                if (j)
                    ZERO_a6MPmkBY(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);

            };
        };
    };
    for (int i_2 = 0; i_2 < sources.size(); i_2++)
    {
        for (; ; )
        {
            const fu_STR& src = sources[i_2];
            int start0 = fu::lfind(src, "<split/>"_fu);
            const int start1 = (start0 + 8);
            if (start0 < 0)
                break;

            const int start00 = start0;
            while (start0 && (src[(start0 - 1)] == ' '))
                start0--;

            fu_STR moduleA = fu::slice(src, 0, start0);
            fu_STR moduleB = ((x7E((fu::get_view(src, start0, start00) + "import _"_fu), fu::i64dec(i_2)) + ";"_fu) + fu::get_view(src, start1, src.size()));
            fu_STR without = (fu::get_view(src, 0, start0) + fu::get_view(src, start1, src.size()));
            sources.mutref(i_2) = without;
            ZERO_a6MPmkBY(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
            sources.mutref(i_2) = moduleA;
            sources.insert((i_2 + 1), fu_STR(moduleB));
        };
    };
    fu_VEC<fu_VEC<fu_STR>> expectations {};
    fu_VEC<s_Options> options_1 = map_5f8Fg9cR(sources, options);
    for (int i_3 = 0; i_3 < sources.size(); i_3++)
    {
        fu_STR& src = sources.mutref(i_3);

        {
            int end = src.size();
            for (int r = src.size(); (r-- > 0) && (src[r] == ' '); )
                end = r;

            src.shrink(end);
        };
        int break_notes {};
        int start = 0;
        while (((start = fu::lfind(src, " ;; "_fu, start)) >= 0))
        {
            int end = find_QuOA9X99(src, '\n', (start + 4));
            if (end < 0)
                end = src.size();

            fu_STR annot = fu::slice(src, (start + 4), end);
            if (annot[0] == '!')
            {
                const int idx = find_IswWtOx1(NOTES, fu::slice(annot, 1, annot.size()));
                if (!((idx >= 0)))
                    fu::fail((("Bad break_note: `;; "_fu + annot) + "`."_fu));

                break_notes |= (1 << idx);
            }
            else
                grow_if_oob_LHD0ASOA(expectations, i_3) += fu_STR(annot);

            src.mutref((start + 1)) = '/';
            src.mutref((start + 2)) = '/';
            start = end;
        };
        options_1.mutref(i_3).break_notes = break_notes;
    };
    /*MOV*/ s_Context ctx = compile_snippets_zpq1Fbin(sources, fu::view<fu_STR>{}, options_1);
    fu_STR testdiff_prepend {};
    for (int i_4 = 0; i_4 < expectations.size(); i_4++)
    {
        fu::view<fu_STR> arr = expectations[i_4];
        fu::view<char> src = sources[i_4];
        const s_ModuleOutputs& out = ctx.modules[(i_4 + 1)].out;
        const s_CodegenOutput& cpp = out.cpp;
        for (int i_5 = 0; i_5 < arr.size(); i_5++)
        {
            const fu_STR& x = arr[i_5];
            const int noteBit = find_IswWtOx1(NOTES, x);
            if ((noteBit >= 0))
            {
                if (!(out.solve.notes & (1 << noteBit)))
                    fu::fail(((((("Expected note not listed: `"_fu + x) + "` in:\n"_fu) + src) + "\n\nOutput is:\n\n"_fu) + cpp.src));

                continue;
            };
            const int idx = find_3yRdKyg4(x, ' ');
            fu_STR cmd = fu::slice(x, 0, idx);
            fu_STR rest = fu::slice(x, (idx + 1));
            const bool found = fu::has(cpp.src, rest);
            if (cmd == "EXPECT"_fu)
            {
                if (!(found))
                    fu::fail(((((("EXPECT mismatch: `;; "_fu + x) + "` in:\n"_fu) + src) + "\n\nOutput is:\n\n"_fu) + cpp.src));

            }
            else if (cmd != "TODO"_fu)
                fu::fail(((("Unknown ;; CHECK: `;; "_fu + x) + "` in:\n"_fu) + src));
            else if (found)
                fu::fail(((((("TODO test is actually passing: `;; "_fu + x) + "` in:\n"_fu) + src) + "\n\nOutput is:\n\n"_fu) + cpp.src));
            else
                testdiff_prepend += ((";; "_fu + x) + "\n"_fu);

        };
    };
    const bool run = true;
    build_Ha3Hbin4(run, fu_STR(DEFAULT_WORKSPACE), FULIB, (*(const fu_STR*)fu::NIL), fu_STR{}, fu_STR{}, fu_STR{}, (*(const fu_STR*)fu::NIL), "debug"_fu, "print-src"_fu, (*(const fu_VEC<fu_STR>*)fu::NIL), (*(const fu_VEC<fu_STR>*)fu::NIL), ctx);
    build_Ha3Hbin4(run, fu_STR(DEFAULT_WORKSPACE), FULIB, (*(const fu_STR*)fu::NIL), fu_STR{}, fu_STR{}, fu_STR{}, (*(const fu_STR*)fu::NIL), fu::view<char>{}, "print-src"_fu, (*(const fu_VEC<fu_STR>*)fu::NIL), (*(const fu_VEC<fu_STR>*)fu::NIL), ctx);

    {
        if (testdiff_prepend)
            testdiff_prepend += "\n"_fu;

        fu_STR key {};
        for (int i_5 = 0; i_5 < sources.size(); i_5++)
        {
            key += sources[i_5];
            fu::view<char> actual = ctx.modules[((i_5 + ctx.modules.size()) - sources.size())].out.cpp.src;
            set_next_I8EoLloc(testdiffs, key, (testdiff_prepend + actual));
        };
    };
    return /*NRVO*/ ctx;
}

                                #ifndef DEFt_replace_lxKOEoJG
                                #define DEFt_replace_lxKOEoJG
inline fu_STR replace_lxKOEoJG(const fu_STR& str, fu::view<char> all, fu::view<char> with)
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

static fu_STR indent_0M2cSTu1(const fu_STR& src)
{
    return replace_lxKOEoJG(src, "\n"_fu, "\n\t"_fu);
}

void ZERO_SAME_VCIdMgOd(fu::view<fu_VEC<fu_STR>> alts, s_TestDiffs& testdiffs)
{
    fu_VEC<s_Module> expect = ZERO_a6MPmkBY(fu_VEC<fu_STR>(alts[0]), s_Options{}, testdiffs).modules;
    for (int i = 1; i < alts.size(); i++)
    {
        fu_VEC<s_Module> actual = compile_snippets_zpq1Fbin(alts[i], fu::view<fu_STR>{}, fu::view<s_Options>{}).modules;
        if (expect.size() != actual.size())
            fu::fail("ZERO_SAME: expect/actual len mismatch."_fu);

        for (int m = 0; m < actual.size(); m++)
        {
            const fu_STR& x = expect[m].out.cpp.src;
            const fu_STR& a = actual[m].out.cpp.src;
            if (x != a)
                fu::fail((((x7E((((x7E(((x7E("ZERO_SAME: alts["_fu, fu::i64dec(i)) + "] mismatch at:\n"_fu) + "\nexpect["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_0M2cSTu1(x)) + "\nactual["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_0M2cSTu1(a)) + "\n"_fu));

        };
    };
}

                                #ifndef DEFt_join_IswWtOx1
                                #define DEFt_join_IswWtOx1
inline fu_STR join_IswWtOx1(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (sep.size() + a[i].size());

    /*MOV*/ fu_STR res {};
    res.grow<false>(size);
    fu::view<char> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<char> range = a[i_1];
        fu::view_assign(fu::get_view_mut(res, size, (size + sep.size())), sep);
        size += sep.size();
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return /*NRVO*/ res;
}
                                #endif

void TODO_gbRYYHIW(const fu_VEC<fu_STR>& sources, s_TestDiffs& testdiffs)
{

    try
    {
        ZERO_a6MPmkBY(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

    {
        set_next_I8EoLloc(testdiffs, ERR_KEY_Ys7VTVTn(sources), ("TODO: "_fu + ERR_TRIM_0X4li7Vn(e)));
        return;
    }
    }
;
    fu::fail(("TODO test is actually passing: "_fu + join_IswWtOx1(sources, "\n\n"_fu)));
}

s_Context ZERO_0X4li7Vn(const fu_STR& src, s_TestDiffs& testdiffs)
{
    return ZERO_a6MPmkBY(fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR(src) } }, s_Options{}, testdiffs);
}

void TODO_0X4li7Vn(const fu_STR& src, s_TestDiffs& testdiffs)
{
    TODO_gbRYYHIW(fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR(src) } }, testdiffs);
}

void ZERO_SAME_Ys7VTVTn(fu::view<fu_STR> alts, s_TestDiffs& testdiffs)
{
    fu_VEC<fu_VEC<fu_STR>> wrap {};
    for (int i = 0; i < alts.size(); i++)
        wrap += fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR(alts[i]) } };

    ZERO_SAME_VCIdMgOd(wrap, testdiffs);
}

#endif
