#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/process.h>
#include <fu/vec/cmp.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <par/parfor.hpp>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
struct s_ParserOutput;
struct s_Node;
struct s_TokenIdx;
struct s_ModuleOutputs;
struct s_Struct;
struct s_Target;
struct s_ScopeItem;
struct s_SolverOutput;
struct s_SolvedNode;
struct s_Helpers;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
struct s_Region;
struct s_RWRanges;
struct s_Scope;
struct s_Overload;
struct s_Extended;
struct s_Argument;
struct s_BitSet;
struct s_Template;
struct s_ScopeMemo;
struct s_ScopeSkipMemos;
struct s_ScopeSkip;
struct s_CodegenOutput;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Map_gb6sFwC7;
struct s_ModuleSortHelper;
struct s_BuildError;
fu_STR join_Lfq50XKd(fu::view<char>, const fu_STR&);
fu_STR read_ny0gyQ9a(fu_STR&&);
fu_STR hash16_EhsXBDGJ(fu::view<char>, int);
int mkdir_p_dj7lmmQl(fu_STR&&, unsigned);
fu_STR dirname_KqRBcvmh(const fu_STR&);
int64_t size_ny0gyQ9a(fu_STR&&);
fu_STR filename_KqRBcvmh(const fu_STR&);
int write_Aym1I4GS(fu_STR&&, fu::view<char>, unsigned);
double hr_CPFg3qvV();
int spawn_udHzgmR4(fu_VEC<fu_STR>&&, fu_STR&, fu_STR&, int&);
int rename_PYp4QGaF(fu_STR&&, fu_STR&&);
int chmod_yDMGZlvP(fu_STR&&, unsigned);
fu_STR relative_Lfq50XKd(fu::view<char>, const fu_STR&);
fu_STR noext_KqRBcvmh(const fu_STR&);

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
    fu_STR base;
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
            || base
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
    fu_VEC<int> live;
    explicit operator bool() const noexcept
    {
        return false
            || src
            || link
            || include_dirs
            || extra_sources
            || live
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

                                #ifndef DEF_s_Map_gb6sFwC7
                                #define DEF_s_Map_gb6sFwC7
struct s_Map_gb6sFwC7
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
    s_Map_gb6sFwC7 files;
    s_Map_gb6sFwC7 fuzzy;
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

                                #ifndef DEF_s_ModuleSortHelper
                                #define DEF_s_ModuleSortHelper
struct s_ModuleSortHelper
{
    int compile_index;
    explicit operator bool() const noexcept
    {
        return false
            || compile_index
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BuildError
                                #define DEF_s_BuildError
struct s_BuildError
{
    int code;
    fu_STR cpp;
    fu_STR stdout;
    explicit operator bool() const noexcept
    {
        return false
            || code
            || cpp
            || stdout
        ;
    }
};
                                #endif
#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

                                #ifndef DEF_if_last_ZCtM7908
                                #define DEF_if_last_ZCtM7908
inline char if_last_ZCtM7908(fu::view<char> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const char*)fu::NIL);
}
                                #endif

                                #ifndef DEF_grow_if_oob_OIqyCFrK
                                #define DEF_grow_if_oob_OIqyCFrK
inline fu_VEC<s_ModuleSortHelper>& grow_if_oob_OIqyCFrK(fu_VEC<fu_VEC<s_ModuleSortHelper>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static const s_Module& GET_A8xorxE9(const s_ModuleSortHelper& _, fu::view<s_Module> modules)
{
    return modules[_.compile_index];
}

                                #ifndef DEF_grow_if_oob_KwtPedk9
                                #define DEF_grow_if_oob_KwtPedk9
inline fu_STR& grow_if_oob_KwtPedk9(fu_VEC<fu_STR>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_x7E_PEYL9mMAprj
                                #define DEF_x7E_PEYL9mMAprj
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_RWX_RWX_RWX
                                #define DEF_RWX_RWX_RWX
inline constexpr unsigned RWX_RWX_RWX = (((0x7u << 6u) | (0x7u << 3u)) | (0x7u << 0u));
                                #endif

                                #ifndef DEF_starts_cnCAmU7Y
                                #define DEF_starts_cnCAmU7Y
inline bool starts_cnCAmU7Y(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_x3Cx3E_gcxVH86X
                                #define DEF_x3Cx3E_gcxVH86X
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_D0yPwEUc
                                #define DEF_x3Cx3E_D0yPwEUc
inline int x3Cx3E_D0yPwEUc(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_pN4jXVBE
                                #define DEF_x3Cx3E_pN4jXVBE
inline int x3Cx3E_pN4jXVBE(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_D0yPwEUc(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_add_wAuMmv6B
                                #define DEF_add_wAuMmv6B
inline bool add_wAuMmv6B(fu_VEC<fu_STR>& keys, const fu_STR& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_pN4jXVBE(keys[i], item);
        if (cmp == 0)
        {
            return false;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, fu_STR(item));
    return true;
}
                                #endif

                                #ifndef DEF_each_W4UgwPZP
                                #define DEF_each_W4UgwPZP
inline void each_W4UgwPZP(fu::view<fu_STR> a, fu_VEC<fu_STR>& HACK_include_dirs, fu::view<char> dir)
{
    for (int i = 0; i < a.size(); i++)
    {
        const fu_STR& incl = a[i];
        add_wAuMmv6B(HACK_include_dirs, (starts_cnCAmU7Y(incl, '.') ? join_Lfq50XKd(dir, incl) : fu_STR(incl)));
    };
}
                                #endif

                                #ifndef DEF_starts_pN4jXVBE
                                #define DEF_starts_pN4jXVBE
inline bool starts_pN4jXVBE(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEF_x3Cx3E_H7FTk5fm
                                #define DEF_x3Cx3E_H7FTk5fm
inline int x3Cx3E_H7FTk5fm(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_tnHnbbM0
                                #define DEF_x3Cx3E_tnHnbbM0
inline int x3Cx3E_tnHnbbM0(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_H7FTk5fm(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_add_pI22xlke
                                #define DEF_add_pI22xlke
inline bool add_pI22xlke(fu_VEC<fu_STR>& keys, const fu_STR& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_tnHnbbM0(keys[i], item);
        if (cmp == 0)
        {
            return false;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, fu_STR(item));
    return true;
}
                                #endif

                                #ifndef DEF_join_5naEayDv
                                #define DEF_join_5naEayDv
inline fu_STR join_5naEayDv(fu::view<fu_STR> a, const char sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    const int N = 1;
    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (N + a[i].size());

    /*MOV*/ fu_STR res {};
    res.grow<false>(size);
    fu::view<char> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<char> range = a[i_1];
        res.mutref(size) = sep;
        size += N;
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_join_xAlmFa4a
                                #define DEF_join_xAlmFa4a
inline fu_STR join_xAlmFa4a(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    const int N = sep.size();
    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (N + a[i].size());

    /*MOV*/ fu_STR res {};
    res.grow<false>(size);
    fu::view<char> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<char> range = a[i_1];
        fu::view_assign(fu::get_view_mut(res, size, (size + N)), sep);
        size += N;
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return /*NRVO*/ res;
}
                                #endif

static bool CACHE_objFileAvailable_ZF4k9XtZ(const fu_STR& F_obj)
{
    return size_ny0gyQ9a(fu_STR(F_obj)) > 0ll;
}

                                #ifndef DEF_RW_RW_RW
                                #define DEF_RW_RW_RW
inline constexpr unsigned RW_RW_RW = (((0x6u << 6u) | (0x6u << 3u)) | (0x6u << 0u));
                                #endif

                                #ifndef DEF_unless_oob_n8hIsDQN
                                #define DEF_unless_oob_n8hIsDQN
inline const fu_STR& unless_oob_n8hIsDQN(fu::view<fu_STR> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_STR*)fu::NIL);
}
                                #endif

                                #ifndef DEF_find_yd8BAtiL
                                #define DEF_find_yd8BAtiL
inline int find_yd8BAtiL(fu::view<char> a, const char b, int start)
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

                                #ifndef DEF_split_eKtWJ5tU
                                #define DEF_split_eKtWJ5tU
inline void split_eKtWJ5tU(const fu_STR& str, const char sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = 1;
    if (N)
    {
        while (((next = find_yd8BAtiL(str, sep, int(last))) >= 0))
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

                                #ifndef DEF_split_cnCAmU7Y
                                #define DEF_split_cnCAmU7Y
inline fu_VEC<fu_STR> split_cnCAmU7Y(const fu_STR& str, const char sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_eKtWJ5tU(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

static s_BuildError buildFile_buhuhjJy(const fu_STR& F, const int i, fu::view<s_ModuleSortHelper> modules, fu::view<s_Module> modules_1, fu::view<fu_STR> units, fu::view<char> INCLUDE, fu::view<fu_STR> HACK_pkgConfig_cflags, fu::view<char> GCC_CMD)
{
    // Hoisted:
    fu_STR x;
    fu_STR x_1;
    fu_STR x_2;
    fu_STR x_3;
    fu_STR x_4;
    fu_STR x_5;
    fu_STR x_6;

    if (!F)
        return s_BuildError{};

    fu_STR F_cpp = (F + ".cpp"_fu);
    fu_STR F_tmp = (F + ".o.tmp"_fu);
    fu_STR F_obj = (F + ".o"_fu);
    if (CACHE_objFileAvailable_ZF4k9XtZ(F_obj))
        return s_BuildError{};

    const fu_STR& original_fname = (i ? GET_A8xorxE9(modules[i], modules_1).fname : (*(const fu_STR*)fu::NIL));
    fu_STR human = (original_fname ? filename_KqRBcvmh(original_fname) : "fulib runtime"_fu);
    const fu_STR& cpp = units[i];
    write_Aym1I4GS(fu_STR(F_cpp), cpp, RW_RW_RW);
    const fu_STR* BL_3_v;
    const fu_STR* BL_4_v;
    fu::println((fu::slate<4, fu_STR> { fu_STR((__extension__ (
    {
        x = "  BUILD "_fu;
        BL_3_v = &(x);
    (void)0;}), *BL_3_v)), fu_STR(((void)void(), human)), fu_STR((__extension__ (
    {
        x_1 = " "_fu;
        BL_4_v = &(x_1);
    (void)0;}), *BL_4_v)), fu_STR(((void)void(), F_cpp)) }));
    const double t0 = hr_CPFg3qvV();
    fu_STR INCLUDE_1 = (INCLUDE + unless_oob_n8hIsDQN(HACK_pkgConfig_cflags, i));
    fu_STR INCLUDE_2 = (INCLUDE_1 + (original_fname ? (" -iquote "_fu + dirname_KqRBcvmh(original_fname)) : fu_STR{}));
    fu_STR CMD = ((((((GCC_CMD + "-c"_fu) + INCLUDE_2) + " -o "_fu) + F_tmp) + " "_fu) + F_cpp);
    fu_STR stdout {};
    int status {};
    int _0 {};
    const int code = ((_0 = spawn_udHzgmR4(split_cnCAmU7Y(CMD, ' '), stdout, stdout, status)) ? _0 : status ? int(status) : rename_PYp4QGaF(fu_STR(F_tmp), fu_STR(F_obj)));
    if (code)
    {
        if (CACHE_objFileAvailable_ZF4k9XtZ(F_obj))
        {
            const fu_STR* BL_7_v;
            fu::println((fu::slate<2, fu_STR> { fu_STR((__extension__ (
            {
                x_2 = "RACE OK "_fu;
                BL_7_v = &(x_2);
            (void)0;}), *BL_7_v)), fu_STR(((void)void(), human)) }));
            return s_BuildError{};
        };
        return s_BuildError { int(code), fu_STR(cpp), fu_STR(stdout) };
    };
    const double t1 = hr_CPFg3qvV();
    const fu_STR* BL_8_v;
    const fu_STR* BL_9_v;
    const fu_STR* BL_10_v;
    const fu_STR* BL_11_v;
    fu::println((fu::slate<5, fu_STR> { fu_STR((__extension__ (
    {
        x_3 = "     OK "_fu;
        BL_8_v = &(x_3);
    (void)0;}), *BL_8_v)), fu_STR(((void)void(), human)), fu_STR((__extension__ (
    {
        x_4 = " "_fu;
        BL_9_v = &(x_4);
    (void)0;}), *BL_9_v)), fu_STR((__extension__ (
    {
        x_5 = fu::f64dec((t1 - t0));
        BL_10_v = &(x_5);
    (void)0;}), *BL_10_v)), fu_STR((__extension__ (
    {
        x_6 = "s"_fu;
        BL_11_v = &(x_6);
    (void)0;}), *BL_11_v)) }));
    return s_BuildError{};
}

inline static void parallel_for_JarN9e2P(const int min, int end, fu::view_mut<s_BuildError> result, fu::view<fu_STR> arr, fu::view<s_ModuleSortHelper> modules, fu::view<s_Module> modules_1, fu::view<fu_STR> units, fu::view<char> INCLUDE, fu::view<fu_STR> HACK_pkgConfig_cflags, fu::view<char> GCC_CMD)
{
    int start = (end & 0);

        (void) start;

        typedef decltype(start) start_t;
        typedef decltype(end) end_t;

        fu::parallel_for(size_t(end), size_t(min > 1 ? min : 1), [&](size_t Start, size_t End)
        {
            auto start = (start_t) Start;
            auto end   = (end_t  ) End;
    ;
    for (int i = start; i < end; i++)
        result.mutref(i) = buildFile_buhuhjJy(arr[i], i, modules, modules_1, units, INCLUDE, HACK_pkgConfig_cflags, GCC_CMD);


        });
    ;
}

                                #ifndef DEF_map_Xe1JoywW
                                #define DEF_map_Xe1JoywW
inline fu_VEC<s_BuildError> map_Xe1JoywW(fu::view<fu_STR> arr, const int min, fu::view<s_ModuleSortHelper> modules, fu::view<s_Module> modules_1, fu::view<fu_STR> units, fu::view<char> INCLUDE, fu::view<fu_STR> HACK_pkgConfig_cflags, fu::view<char> GCC_CMD)
{
    /*MOV*/ fu_VEC<s_BuildError> result {};
    result.grow<false>(arr.size());
    parallel_for_JarN9e2P(min, arr.size(), result, arr, modules, modules_1, units, INCLUDE, HACK_pkgConfig_cflags, GCC_CMD);
    return /*NRVO*/ result;
}
                                #endif

[[noreturn]] static fu::never ERR_AxG0e6d5(fu_STR&& cpp, fu::view<fu_STR> Fs, fu::view<char> dir_wrk, fu_STR& stdout, const int code, const fu_STR& onfail, fu::view<s_ModuleSortHelper> modules, fu::view<s_Module> modules_1)
{
    // Hoisted:
    fu_STR x;

    if (!cpp)
    {
        for (int i = Fs.size(); i-- > 0; )
        {
            if (Fs[i])
                cpp += (("#include \""_fu + Fs[i]) + ".cpp\"\n"_fu);

        };
    };
    fu_STR fname = (dir_wrk + "failing-testcase.cpp"_fu);
    const fu_STR* BL_5_v;
    fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
    {
        x = ("  WRITE "_fu + fname);
        BL_5_v = &(x);
    (void)0;}), *BL_5_v)) }));
    write_Aym1I4GS(fu_STR(fname), cpp, RW_RW_RW);
    if (stdout)
        stdout += "\n\n"_fu;

    stdout += x7E("   EXIT code: "_fu, fu::i64dec(code));
    fu_STR explain {};
    if (onfail)
    {
        explain = "\nFailing testcase:\n\n"_fu;
        for (int i = 1; i < modules.size(); i++)
            explain += ((onfail == "print-src"_fu) ? fu_STR(GET_A8xorxE9(modules[i], modules_1).in.src) : (GET_A8xorxE9(modules[i], modules_1).fname + "\n"_fu));

        if (onfail == "print-src"_fu)
        {
            explain += "\nSources:\n"_fu;
            for (int i_1 = 1; i_1 < modules.size(); i_1++)
                explain += GET_A8xorxE9(modules[i_1], modules_1).out.cpp.src;

        };
    };
    fu::fail((stdout + explain));
}

                                #ifndef DEF_RWX_RX_RX
                                #define DEF_RWX_RX_RX
inline constexpr unsigned RWX_RX_RX = (((0x7u << 6u) | (0x5u << 3u)) | (0x5u << 0u));
                                #endif

                                #ifndef DEF_only_80Mq0iZv
                                #define DEF_only_80Mq0iZv
inline int only_80Mq0iZv(fu::view<int> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static int READ_StatusCode_f459MePV(const fu_STR& F_exe)
{
    return int(only_80Mq0iZv(fu::view_of(read_ny0gyQ9a(fu_STR(F_exe)), int{})));
}

static int WRITE_StatusCode_2ZNyNdeL(const int code, const fu_STR& F_exe)
{
    return write_Aym1I4GS(fu_STR(F_exe), fu::view_of((fu::slate<1, int> { int(code) }), char{}), RW_RW_RW);
}

                                #ifndef DEF_starts_PEYL9mMA
                                #define DEF_starts_PEYL9mMA
inline bool starts_PEYL9mMA(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEF_replace_S3uxuNYS
                                #define DEF_replace_S3uxuNYS
inline fu_STR replace_S3uxuNYS(const fu_STR& str, fu::view<char> all, fu::view<char> with)
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

static fu_STR ensure_local_fname_brvpjPdg(const fu_STR& fname, fu::view<char> dir_src)
{
    if (starts_PEYL9mMA(fname, dir_src))
        return fu_STR(fname);

    fu_STR foreign = (dir_src + ".foreign/"_fu);
    mkdir_p_dj7lmmQl(fu_STR(foreign), RWX_RWX_RWX);
    fu_STR rel = replace_S3uxuNYS(replace_S3uxuNYS(relative_Lfq50XKd(dir_src, fname), "../"_fu, "up__"_fu), "/"_fu, "__"_fu);
    return foreign + rel;
}

static fu_STR update_file_202fjzr4(const fu_STR& fname, fu::view<char> data, fu::view<char> dir_src, fu::view<char> dir_out)
{
    // Hoisted:
    fu_STR x;

    fu_STR fname_1 = ensure_local_fname_brvpjPdg(fname, dir_src);
    if (!(starts_PEYL9mMA(fname_1, dir_src)))
        fu::fail("ensure_local_fname broken"_fu);

    /*MOV*/ fu_STR fname_2 = (dir_out + fu::slice(fname_1, dir_src.size()));
    if (read_ny0gyQ9a(fu_STR(fname_2)) != data)
    {
        const int err = write_Aym1I4GS(fu_STR(fname_2), data, RW_RW_RW);
        if (err)
            fu::fail(x7E((("Failed to write `"_fu + fname_2) + "`, error: #"_fu), fu::i64dec(err)));

        const fu_STR* BL_4_v;
        fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
        {
            x = ("  WROTE "_fu + fname_2);
            BL_4_v = &(x);
        (void)0;}), *BL_4_v)) }));
    };
    return /*NRVO*/ fname_2;
}

void build_FI2mnMFN(fu_STR&& dir_wrk, fu::view<char> fudir, fu_STR&& fulib, fu_STR&& bin, fu_STR&& dir_obj, fu_STR&& dir_src, fu_STR&& dir_cpp, const fu_STR& unity, fu::view<char> scheme, const fu_STR& onfail, const bool run, const bool shared, const bool hotswap, const fu_VEC<fu_STR>& flags_cc, const fu_VEC<fu_STR>& flags_ld, const s_Context& ctx)
{
    // Hoisted:
    fu_VEC<s_ModuleSortHelper> result;
    fu_STR x;
    fu_STR x_1;
    fu_STR x_2;
    fu_STR x_3;
    fu_STR x_4;
    fu_STR x_5;
    fu_STR x_6;
    fu_STR x_7;
    fu_STR x_8;

    if (if_last_ZCtM7908(dir_wrk) != '/')
    {
        if (!(dir_wrk))
            fu::fail("No workspace directory provided."_fu);

        dir_wrk += '/';
    };
    if (dir_obj && (if_last_ZCtM7908(dir_obj) != '/'))
        dir_obj += '/';

    if (dir_src && (if_last_ZCtM7908(dir_src) != '/'))
        dir_src += '/';

    if (dir_cpp && (if_last_ZCtM7908(dir_cpp) != '/'))
        dir_cpp += '/';

    fu_STR O_lvl = ((scheme != "debug"_fu) ? "-O3 -DNDEBUG -fno-math-errno "_fu : "-Og "_fu);
    if ((scheme == "debug"_fu) || (scheme == "reldeb"_fu))
        O_lvl += "-g "_fu;

    if (scheme == "retail"_fu)
        O_lvl += "-Dfu_RETAIL "_fu;

    if (shared)
        O_lvl += "-fPIC "_fu;

    if (hotswap)
        O_lvl += "-Dfu_HOTSWAP "_fu;

    fu_STR GCChash = ("g++ -std=c++1z "_fu + O_lvl);
    fu_STR GCC_CMD = ((((((GCChash + "-pedantic-errors -Wall -Wextra -Werror "_fu) + "-Wdouble-promotion "_fu) + "-Wconversion -Wsign-conversion "_fu) + "-Wno-float-conversion "_fu) + (hotswap && fu::APPLE ? "-Wno-return-type-c-linkage "_fu : fu_STR{})) + (fu::LINUX ? "-pthread -ldl "_fu : fu_STR{}));

    {
        if (!(fulib))
            fulib = join_Lfq50XKd(fudir, (hotswap ? "include/fu/_sharedlib.cpp"_fu : "include/fu/_fulib.cpp"_fu));

    };
    s_CodegenOutput fulib_cpp = s_CodegenOutput { read_ny0gyQ9a(fu_STR(fulib)), fu_VEC<fu_STR>{}, fu_VEC<fu_STR>{}, fu_VEC<fu_STR>{}, fu_VEC<int>{} };
    fu_VEC<int> unit_mapping {};
    fu_VEC<fu_STR> unit_fnames {};
    fu::view<s_Module> modules = ctx.modules;
    fu::view<s_ModuleSortHelper> BL_12_v {};
    fu::view<s_ModuleSortHelper> modules_1 = (__extension__ (
    {
        fu_VEC<fu_VEC<s_ModuleSortHelper>> buckets {};
        for (int i = 0; i < modules.size(); i++)
        {
            const s_Module& module = modules[i];
            grow_if_oob_OIqyCFrK(buckets, module.out.init_prio) += s_ModuleSortHelper { int(i) };
        };
        result =  {};
        for (int i_1 = 0; i_1 < buckets.size(); i_1++)
            result += buckets[i_1];

        BL_12_v = (result);
    (void)0;}), static_cast<fu::view<s_ModuleSortHelper>&&>(BL_12_v));
    for (int i_2 = 0; i_2 < modules_1.size(); i_2++)
    {
        const s_ModuleSortHelper& module = modules_1[i_2];
        const s_CodegenOutput& cpp = (i_2 ? GET_A8xorxE9(module, modules).out.cpp : fulib_cpp);
        if (!cpp.src)
        {
            unit_mapping += -1;
            continue;
        };
        const int unit = i_2;
        unit_mapping += int(unit);
        grow_if_oob_KwtPedk9(unit_fnames, unit) = (i_2 ? fu_STR(GET_A8xorxE9(module, modules).fname) : "fulib runtime"_fu);
    };
    fu_VEC<fu_STR> units {};
    for (int i_3 = 0; i_3 < modules_1.size(); i_3++)
    {
        const s_ModuleSortHelper& module_1 = modules_1[i_3];
        const s_CodegenOutput& cpp_1 = (i_3 ? GET_A8xorxE9(module_1, modules).out.cpp : fulib_cpp);
        if (cpp_1.src)
            grow_if_oob_KwtPedk9(units, unit_mapping[i_3]) += cpp_1.src;

    };
    fu_VEC<fu_STR> Fs {};
    int len_all {};
    for (int i_4 = 0; i_4 < units.size(); i_4++)
    {
        const fu_STR& cpp_2 = units[i_4];
        if (!cpp_2)
            continue;

        fu_STR F = x7E((((dir_wrk + "o-"_fu) + hash16_EhsXBDGJ((GCChash + cpp_2), 16)) + "-"_fu), fu::i64dec(cpp_2.size()));
        grow_if_oob_KwtPedk9(Fs, i_4) = F;
        len_all += cpp_2.size();
    };
    mkdir_p_dj7lmmQl(fu_STR(dir_wrk), RWX_RWX_RWX);
    int code {};
    fu_STR stdout {};
    fu_VEC<fu_STR> HACK_linkFlags {};
    fu_VEC<fu_STR> HACK_pkgConfig_libs {};
    fu_VEC<fu_STR> HACK_pkgConfig_cflags {};
    fu_VEC<fu_STR> HACK_include_dirs {};
    for (int i_5 = 0; i_5 < modules_1.size(); i_5++)
    {
        const s_ModuleSortHelper& module_2 = modules_1[i_5];
        const fu_VEC<fu_STR>& include_dirs = GET_A8xorxE9(module_2, modules).out.cpp.include_dirs;
        if (include_dirs)
        {
            fu_STR dir = dirname_KqRBcvmh(GET_A8xorxE9(module_2, modules).fname);
            each_W4UgwPZP(include_dirs, HACK_include_dirs, dir);
        };
        fu_STR cflags {};
        fu::view<fu_STR> libs = GET_A8xorxE9(module_2, modules).out.cpp.link;
        for (int i_6 = 0; i_6 < libs.size(); i_6++)
        {
            const fu_STR& lib = libs[i_6];
            if (starts_pN4jXVBE(lib, "-"_fu))
                add_pI22xlke(HACK_linkFlags, lib);
            else
            {
                cflags += lib;
                add_pI22xlke(HACK_pkgConfig_libs, lib);
            };
        };
        if (cflags)
            grow_if_oob_KwtPedk9(HACK_pkgConfig_cflags, i_5) = ((" $(pkg-config --cflags "_fu + cflags) + ")"_fu);

    };
    fu_STR INCLUDE = (((((flags_cc ? (" "_fu + join_5naEayDv(flags_cc, ' ')) : fu_STR{}) + " -I "_fu) + fudir) + "include"_fu) + (HACK_include_dirs ? (" -I "_fu + join_xAlmFa4a(HACK_include_dirs, " -I "_fu)) : fu_STR{}));
    fu_STR LIBS = (((flags_ld ? (" "_fu + join_5naEayDv(flags_ld, ' ')) : fu_STR{}) + (HACK_linkFlags ? (" "_fu + join_xAlmFa4a(HACK_linkFlags, " "_fu)) : fu_STR{})) + (HACK_pkgConfig_libs ? ((" $(pkg-config --libs "_fu + join_xAlmFa4a(HACK_pkgConfig_libs, " "_fu)) + ")"_fu) : fu_STR{}));
    fu_STR F_exe = x7E((x7E((((dir_wrk + "b-"_fu) + hash16_EhsXBDGJ((join_xAlmFa4a(Fs, "/"_fu) + LIBS), 16)) + "-"_fu), fu::i64dec(len_all)) + "-"_fu), fu::i64dec(Fs.size()));
    const int64_t old_size = size_ny0gyQ9a(fu_STR(F_exe));
    if ((old_size < 1ll) && (bin || run))
    {
        fu_VEC<s_BuildError> buildErrors = map_Xe1JoywW(Fs, 0, modules_1, modules, units, INCLUDE, HACK_pkgConfig_cflags, GCC_CMD);
        for (int i_7 = 0; i_7 < buildErrors.size(); i_7++)
        {
            const s_BuildError& err = buildErrors[i_7];
            if ((code = err.code))
            {
                stdout = err.stdout;
                ERR_AxG0e6d5(fu_STR(err.cpp), Fs, dir_wrk, stdout, code, onfail, modules_1, modules);
            };
        };
        fu_STR F_tmp = (F_exe + ".tmp"_fu);
        fu_STR cmd = ((GCC_CMD + "-o "_fu) + F_tmp);
        if (shared)
        {
            cmd += " -shared"_fu;
            fu_STR soname = filename_KqRBcvmh(bin);
            if (fu::APPLE)
                cmd += (" -Wl,-install_name,"_fu + soname);
            else
                cmd += (" -Wl,-soname,"_fu + soname);

        };
        for (int i_8 = 0; i_8 < Fs.size(); i_8++)
        {
            const fu_STR& F_1 = Fs[i_8];
            if (F_1)
                cmd += ((" "_fu + F_1) + ".o"_fu);

        };

        {
            const fu_STR* BL_45_v;
            fu::println((fu::slate<3, fu_STR> { fu_STR((__extension__ (
            {
                x = "   LINK "_fu;
                BL_45_v = &(x);
            (void)0;}), *BL_45_v)), fu_STR(((void)void(), F_exe)), fu_STR(((void)void(), LIBS)) }));
            const double t0 = hr_CPFg3qvV();
            fu_STR CMD = (cmd + LIBS);
            int status {};
            int _0 {};
            code = ((_0 = spawn_udHzgmR4(split_cnCAmU7Y(CMD, ' '), stdout, stdout, status)) ? _0 : status ? int(status) : (_0 = chmod_yDMGZlvP(fu_STR(F_tmp), RWX_RX_RX)) ? _0 : rename_PYp4QGaF(fu_STR(F_tmp), fu_STR(F_exe)));
            if (code)
            {
                const fu_STR* BL_47_v;
                fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
                {
                    x_1 = ((x7E((("   FAIL "_fu + CMD) + " EXIT="_fu), fu::i64dec(code)) + "\n"_fu) + stdout);
                    BL_47_v = &(x_1);
                (void)0;}), *BL_47_v)) }));
                ERR_AxG0e6d5(fu_STR{}, Fs, dir_wrk, stdout, code, onfail, modules_1, modules);
            };
            const double t1 = hr_CPFg3qvV();
            const fu_STR* BL_48_v;
            const fu_STR* BL_49_v;
            const fu_STR* BL_50_v;
            fu::println((fu::slate<3, fu_STR> { fu_STR((__extension__ (
            {
                x_2 = "     OK "_fu;
                BL_48_v = &(x_2);
            (void)0;}), *BL_48_v)), fu_STR((__extension__ (
            {
                x_3 = fu::f64dec((t1 - t0));
                BL_49_v = &(x_3);
            (void)0;}), *BL_49_v)), fu_STR((__extension__ (
            {
                x_4 = "s"_fu;
                BL_50_v = &(x_4);
            (void)0;}), *BL_50_v)) }));
        };
        if (code)
            ERR_AxG0e6d5(fu_STR{}, Fs, dir_wrk, stdout, code, onfail, modules_1, modules);

    };
    if (run)
    {
        const bool OPTI_StatusCode = true;
        if (OPTI_StatusCode && (old_size == 4ll))
            code = READ_StatusCode_f459MePV(F_exe);
        else
        {
            const fu_STR* BL_55_v;
            fu::println((fu::slate<2, fu_STR> { fu_STR((__extension__ (
            {
                x_5 = "    RUN "_fu;
                BL_55_v = &(x_5);
            (void)0;}), *BL_55_v)), fu_STR(((void)void(), F_exe)) }));
            const double t0_1 = hr_CPFg3qvV();
            int status_1 {};
            int _1 {};
            code = ((_1 = spawn_udHzgmR4(fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR(F_exe) } }, stdout, stdout, status_1)) ? _1 : int(status_1));
            const double t1_1 = hr_CPFg3qvV();
            const fu_STR* BL_56_v;
            const fu_STR* BL_57_v;
            const fu_STR* BL_58_v;
            fu::println((fu::slate<3, fu_STR> { fu_STR((__extension__ (
            {
                x_6 = "     OK "_fu;
                BL_56_v = &(x_6);
            (void)0;}), *BL_56_v)), fu_STR((__extension__ (
            {
                x_7 = fu::f64dec((t1_1 - t0_1));
                BL_57_v = &(x_7);
            (void)0;}), *BL_57_v)), fu_STR((__extension__ (
            {
                x_8 = "s"_fu;
                BL_58_v = &(x_8);
            (void)0;}), *BL_58_v)) }));
            if (OPTI_StatusCode)
            {
                const int64_t new_size = size_ny0gyQ9a(fu_STR(F_exe));
                if (new_size > 4ll)
                    WRITE_StatusCode_2ZNyNdeL(code, F_exe);
                else if (new_size == 4ll)
                    code = READ_StatusCode_f459MePV(F_exe);

            };
        };
    };
    if (code)
        ERR_AxG0e6d5(fu_STR{}, Fs, dir_wrk, stdout, code, onfail, modules_1, modules);

    if (dir_cpp && dir_src)
    {
        mkdir_p_dj7lmmQl(fu_STR(dir_cpp), RWX_RWX_RWX);
        fu_VEC<fu_STR> cpp_files {};
        for (int i_9 = 1; i_9 < units.size(); i_9++)
        {
            const fu_STR& data = units[i_9];
            fu_STR fname = (data ? (unit_fnames[i_9] + ".cpp"_fu) : fu_STR{});
            fu_STR fname_1 = (fname ? update_file_202fjzr4(fname, data, dir_src, dir_cpp) : fu_STR{});
            cpp_files.push(fu_STR(fname_1));
        };
        const bool cmake = false;
        fu_STR CMakeLists = (cmake ? join_Lfq50XKd(dirname_KqRBcvmh(unity), "CMakeLists.txt"_fu) : fu_STR{});
        if (unity || CMakeLists)
        {
            if (unity)
            {
                fu_STR data_1 = (("#ifdef fu_UNITY_FULIB\n"_fu + "#include <fu/_fulib.cpp>\n"_fu) + "#endif\n\n"_fu);
                for (int i_10 = 0; i_10 < cpp_files.size(); i_10++)
                {
                    const fu_STR& incl = cpp_files[i_10];
                    if (incl)
                        data_1 += (("#include \""_fu + relative_Lfq50XKd(unity, incl)) + "\"\n"_fu);

                };
                update_file_202fjzr4((unity + ".unity.cpp"_fu), data_1, dir_src, dir_cpp);
            };
            if (CMakeLists)
            {
                fu_STR data_2 = "cmake_minimum_required(VERSION 3.6)\n\n"_fu;
                fu_VEC<fu_STR> inputs {};
                fu_VEC<fu_STR> outputs {};
                fu_STR main {};
                fu_STR includes {};
                for (int i_11 = 1; i_11 < modules_1.size(); i_11++)
                {
                    const s_ModuleSortHelper& module_3 = modules_1[i_11];
                    fu_STR input = relative_Lfq50XKd(CMakeLists, GET_A8xorxE9(module_3, modules).fname);
                    if (module_3.compile_index == 1)
                        main = input;

                    inputs.push(fu_STR(input));
                    fu_STR custom = (GET_A8xorxE9(module_3, modules).fname + ".cmake"_fu);
                    if (size_ny0gyQ9a(fu_STR(custom)) > 0ll)
                        includes += (("include("_fu + relative_Lfq50XKd(CMakeLists, custom)) + ")\n"_fu);

                };
                for (int i_12 = 0; i_12 < cpp_files.size(); i_12++)
                {
                    const fu_STR& cpp_file = cpp_files[i_12];
                    if (cpp_file)
                        outputs.push(("${CMAKE_CURRENT_SOURCE_DIR}/"_fu + relative_Lfq50XKd(CMakeLists, cpp_file)));

                };
                fu_STR libname = noext_KqRBcvmh(filename_KqRBcvmh(main));
                data_2 += (("set(FU_TARGET "_fu + libname) + ")\n\n"_fu);
                data_2 += (("set(FU_MAIN "_fu + main) + ")\n\n"_fu);
                data_2 += (("set(FU_INPUTS\n    "_fu + join_xAlmFa4a(inputs, "\n    "_fu)) + ")\n\n"_fu);
                if (unity)
                    data_2 += ((("set(FU_OUTPUTS\n    "_fu + "${CMAKE_CURRENT_SOURCE_DIR}/"_fu) + relative_Lfq50XKd(CMakeLists, unity)) + ".unity.cpp)\n\n"_fu);
                else
                    data_2 += (("set(FU_OUTPUTS\n    "_fu + join_xAlmFa4a(outputs, "\n    "_fu)) + ")\n\n"_fu);

                data_2 += (((((("add_custom_command(\n"_fu + "    OUTPUT ${FU_OUTPUTS}\n"_fu) + "    COMMAND $ENV{HOME}/fu/bin/fu\n"_fu) + "    ARGS -c ${FU_MAIN}\n"_fu) + "    DEPENDS ${FU_INPUTS}\n"_fu) + "    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}\n"_fu) + "    VERBATIM)\n\n"_fu);
                data_2 += "add_library(${FU_TARGET} ${FU_OUTPUTS})\n\n"_fu;
                data_2 += (("add_library(fulib SHARED $ENV{HOME}/fu/include/fu/_fulib.cpp)\n"_fu + "target_include_directories(fulib PUBLIC $ENV{HOME}/fu/include/)\n"_fu) + "target_link_libraries(${FU_TARGET} PUBLIC fulib)\n\n"_fu);
                if (includes)
                    data_2 += (includes + "\n"_fu);

                update_file_202fjzr4(CMakeLists, data_2, dir_src, dir_cpp);
            };
        };
    };
    if (bin)
    {
        mkdir_p_dj7lmmQl(dirname_KqRBcvmh(bin), RWX_RWX_RWX);
        code = rename_PYp4QGaF(fu_STR(F_exe), fu_STR(bin));
    };
    if (code)
        ERR_AxG0e6d5(fu_STR{}, Fs, dir_wrk, stdout, code, onfail, modules_1, modules);

}

#endif

#pragma GCC diagnostic pop
