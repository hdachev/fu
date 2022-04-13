#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/cmp.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_Target;
struct s_Region;
struct s_Lifetime;
struct s_ValueType;
struct s_Type;
struct s_TokenIdx;
struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
struct s_ParserOutput;
struct s_Node;
struct s_ModuleOutputs;
struct s_Struct;
struct s_ScopeItem;
struct s_SolverOutput;
struct s_SolvedNode;
struct s_Helpers;
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
inline fu_VEC<s_Region> union_2hwZIj1v(const fu_VEC<s_Region>&, const fu_VEC<s_Region>&);
inline fu_VEC<s_Region> inter_2hwZIj1v(const fu_VEC<s_Region>&, const fu_VEC<s_Region>&);
[[noreturn]] fu::never BUG_XksxYQ3i(fu_STR&&, const s_TokenIdx&, const s_Context&);
unsigned parse10u32_mPp6Ulzh(int&, fu::view<char>);
void appendMi_KujYnsPj(fu_STR&, int, int);

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

#ifndef fu_NO_fdefs

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
inline constexpr int q_mutref = (1 << 0);
                                #endif

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline constexpr int q_rx_copy = (1 << 1);
                                #endif

                                #ifndef DEF_q_rx_resize
                                #define DEF_q_rx_resize
inline constexpr int q_rx_resize = (1 << 2);
                                #endif

                                #ifndef DEF_TAGS
                                #define DEF_TAGS
extern const fu_VEC<fu_STR> TAGS fu_INIT_PRIORITY(1002) = fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "mutref"_fu, "copy"_fu, "resize"_fu } };
                                #endif

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
extern const int RELAX_before_bck = q_mutref;
                                #endif

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
extern const int RELAX_all = ((q_mutref | q_rx_copy) | q_rx_resize);
                                #endif

bool operator==(const s_Target& a, const s_Target& b)
{
    return (a.modid == b.modid) && (a.index == b.index);
}

bool operator!=(const s_Region& a, const s_Region& b)
{
    return a.index != b.index;
}

bool operator==(const s_Region& a, const s_Region& b)
{
    return a.index == b.index;
}

int Region_toLocal_MvT8pzW6(const s_Region& region)
{
    return region.index;
}

s_Region Region_fromLocal_BaKYka79(const int index)
{
    return s_Region { int(index) };
}

                                #ifndef DEF_Region_TEMP
                                #define DEF_Region_TEMP
extern const s_Region Region_TEMP fu_INIT_PRIORITY(1002) = Region_fromLocal_BaKYka79(int(0x7fffffffu));
                                #endif

                                #ifndef DEF_Region_STATIC
                                #define DEF_Region_STATIC
extern const s_Region Region_STATIC fu_INIT_PRIORITY(1002) = Region_fromLocal_BaKYka79(int(0x80000001u));
                                #endif

bool Region_isTemp_MvT8pzW6(const s_Region& region)
{
    return region == Region_TEMP;
}

bool Region_isStatic_MvT8pzW6(const s_Region& region)
{
    return region == Region_STATIC;
}

bool Region_isArgPosition_MvT8pzW6(const s_Region& region)
{
    return region.index < 0;
}

int Region_toArgPosition_MvT8pzW6(const s_Region& region)
{
    return -(region.index + 1);
}

s_Region Region_fromArgPosition_BaKYka79(const int position)
{
    return s_Region { -(position + 1) };
}

int Region_asLocal_MvT8pzW6(const s_Region& r)
{
    return (((r == Region_TEMP) || (r.index < 0)) ? 0 : int(r.index));
}

                                #ifndef DEF_x3Cx3E_gcxVH86X
                                #define DEF_x3Cx3E_gcxVH86X
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_PsqHNzQD
                                #define DEF_x3Cx3E_PsqHNzQD
inline int x3Cx3E_PsqHNzQD(const s_Region& a, const s_Region& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_gcxVH86X(a.index, b.index);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

inline static void merge_d6uPbUBU(fu::view<s_Region> l, fu::view<s_Region> r, bool& useResult, fu_VEC<s_Region>& result, fu::view<s_Region> l_1)
{
    int li = 0;
    int ri = 0;
    for (; ; )
    {
        const bool l_done = (li == l.size());
        const bool r_done = (ri == r.size());
        fu::never BL_3_v {};
        const int cmp = (l_done ? (r_done ? (__extension__ (
        {
            return;
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : +1) : (r_done ? -1 : x3Cx3E_PsqHNzQD(l[li], r[ri])));
        if ((cmp <= 0))
        {

            {
                const s_Region& item = l[li];
                if (useResult)
                    result += s_Region(item);

            };
            li++;
            ri += int((cmp == 0));
        }
        else
        {

            {
                const s_Region& item = r[ri];
                if (!useResult)
                {
                    useResult = true;
                    result += fu::get_view(l_1, 0, li);
                };
                result += s_Region(item);
            };
            ri++;
        };
    };
}

                                #ifndef DEF_union_2hwZIj1v
                                #define DEF_union_2hwZIj1v
inline fu_VEC<s_Region> union_2hwZIj1v(const fu_VEC<s_Region>& l, const fu_VEC<s_Region>& r)
{
    if (r.size() > l.size())
        return union_2hwZIj1v(r, l);

    fu_VEC<s_Region> result {};
    bool useResult = false;
    merge_d6uPbUBU(l, r, useResult, result, l);
    return fu_VEC<s_Region>((useResult ? result : l));
}
                                #endif

s_Lifetime Lifetime_union_87LkAOV4(const s_Lifetime& a, const s_Lifetime& b)
{
    return s_Lifetime { union_2hwZIj1v(a.uni0n, b.uni0n) };
}

inline static void merge_wFlkVBim(fu::view<s_Region> l, fu::view<s_Region> r, bool& useResult, fu_VEC<s_Region>& result, const fu_VEC<s_Region>& l_1)
{
    int li = 0;
    int ri = 0;
    for (; ; )
    {
        const bool l_done = (li == l.size());
        const bool r_done = (ri == r.size());
        fu::never BL_3_v {};
        const int cmp = (l_done ? (r_done ? (__extension__ (
        {
            return;
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : +1) : (r_done ? -1 : x3Cx3E_PsqHNzQD(l[li], r[ri])));
        if (cmp == 0)
        {

            {
                const s_Region& item = l[li];
                if (useResult)
                    result += s_Region(item);

            };
            li++;
            ri++;
        }
        else if (cmp < 0)
        {

            {
                [[maybe_unused]] const s_Region& _ = l[li];
                if (!useResult)
                {
                    useResult = true;
                    result = fu::slice(l_1, 0, li);
                };
            };
            li++;
        }
        else
        {

            {
                [[maybe_unused]] const s_Region& _ = r[ri];
            };
            ri++;
        };
    };
}

                                #ifndef DEF_inter_2hwZIj1v
                                #define DEF_inter_2hwZIj1v
inline fu_VEC<s_Region> inter_2hwZIj1v(const fu_VEC<s_Region>& l, const fu_VEC<s_Region>& r)
{
    if (r.size() < l.size())
        return inter_2hwZIj1v(r, l);

    fu_VEC<s_Region> result {};
    bool useResult = false;
    merge_wFlkVBim(l, r, useResult, result, l);
    return fu_VEC<s_Region>((useResult ? result : l));
}
                                #endif

s_Lifetime Lifetime_inter_87LkAOV4(const s_Lifetime& a, const s_Lifetime& b)
{
    return s_Lifetime { inter_2hwZIj1v(a.uni0n, b.uni0n) };
}

s_Lifetime Lifetime_static_8nlJDPX0()
{
    return s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(Region_STATIC) } } };
}

s_Lifetime Lifetime_makeShared_4X1iL0ll(const s_Lifetime& lifetime)
{
    return Lifetime_union_87LkAOV4(lifetime, Lifetime_static_8nlJDPX0());
}

s_Lifetime Lifetime_temporary_8nlJDPX0()
{
    return s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(Region_TEMP) } } };
}

bool operator==(const s_ValueType& a, const s_ValueType& b)
{
    return (a.quals == b.quals) && (a.canon == b.canon);
}

bool operator==(const s_Lifetime& a, const s_Lifetime& b)
{
    return fu::view_of(a.uni0n, int{}) == fu::view_of(b.uni0n, int{});
}

bool operator==(const s_Type& a, const s_Type& b)
{
    return (a.vtype == b.vtype) && (a.lifetime == b.lifetime);
}

s_Type Primitive_pTOG72Sa(const fu_STR& canon)
{
    return s_Type { s_ValueType { int(q_rx_copy), fu_STR(canon) }, s_Lifetime{} };
}

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
extern const s_Type t_i8 fu_INIT_PRIORITY(1002) = Primitive_pTOG72Sa("i8"_fu);
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
extern const s_Type t_i16 fu_INIT_PRIORITY(1002) = Primitive_pTOG72Sa("i16"_fu);
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
extern const s_Type t_i32 fu_INIT_PRIORITY(1002) = Primitive_pTOG72Sa("i32"_fu);
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
extern const s_Type t_i64 fu_INIT_PRIORITY(1002) = Primitive_pTOG72Sa("i64"_fu);
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8 fu_INIT_PRIORITY(1002) = Primitive_pTOG72Sa("u8"_fu);
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
extern const s_Type t_u16 fu_INIT_PRIORITY(1002) = Primitive_pTOG72Sa("u16"_fu);
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
extern const s_Type t_u32 fu_INIT_PRIORITY(1002) = Primitive_pTOG72Sa("u32"_fu);
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
extern const s_Type t_u64 fu_INIT_PRIORITY(1002) = Primitive_pTOG72Sa("u64"_fu);
                                #endif

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32 fu_INIT_PRIORITY(1002) = Primitive_pTOG72Sa("f32"_fu);
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
extern const s_Type t_f64 fu_INIT_PRIORITY(1002) = Primitive_pTOG72Sa("f64"_fu);
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool fu_INIT_PRIORITY(1002) = Primitive_pTOG72Sa("b8"_fu);
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte fu_INIT_PRIORITY(1002) = Primitive_pTOG72Sa("c8"_fu);
                                #endif

s_Type NotSure_pTOG72Sa(const fu_STR& canon)
{
    return s_Type { s_ValueType { 0, fu_STR(canon) }, s_Lifetime{} };
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void fu_INIT_PRIORITY(1002) = NotSure_pTOG72Sa("void"_fu);
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never fu_INIT_PRIORITY(1002) = NotSure_pTOG72Sa("never"_fu);
                                #endif

                                #ifndef DEF_t_zeroes
                                #define DEF_t_zeroes
extern const s_Type t_zeroes fu_INIT_PRIORITY(1002) = NotSure_pTOG72Sa("zeroes"_fu);
                                #endif

bool is_void_zJCUz9W3(const s_Type& t)
{
    return t.vtype.canon == t_void.vtype.canon;
}

bool is_never_zJCUz9W3(const s_Type& t)
{
    return t.vtype.canon == t_never.vtype.canon;
}

bool is_zeroes_zJCUz9W3(const s_Type& t)
{
    return t.vtype.canon == t_zeroes.vtype.canon;
}

bool is_rx_copy_zJCUz9W3(const s_Type& t)
{
    return !!(t.vtype.quals & q_rx_copy);
}

bool is_rx_resize_zJCUz9W3(const s_Type& t)
{
    return !!(t.vtype.quals & q_rx_resize);
}

bool isCanonAssignable_B0Gh4GVM(fu::view<char> host, fu::view<char> guest)
{
    return host == guest;
}

bool areQualsAssignable_enHeEoeE(const int host, const int guest)
{
    return (host & guest) == host;
}

bool isLifetimeAssignable_87LkAOV4(const s_Lifetime& host, const s_Lifetime& guest)
{
    return !host || !!guest;
}

                                #ifndef DEF_CANNOT_definit_mutrefs
                                #define DEF_CANNOT_definit_mutrefs
extern const bool CANNOT_definit_mutrefs = true;
                                #endif

bool isAssignableAsArgument_AGveG7WH(const s_Type& host, const s_Type& guest, const bool DONT_match_zeroes)
{
    return (areQualsAssignable_enHeEoeE(host.vtype.quals, guest.vtype.quals) && isCanonAssignable_B0Gh4GVM(host.vtype.canon, guest.vtype.canon)) || is_never_zJCUz9W3(guest) || (is_zeroes_zJCUz9W3(guest) && !DONT_match_zeroes && !(CANNOT_definit_mutrefs ? (host.vtype.quals & q_mutref) : int{}));
}

bool isAssignable_0meCKYxP(const s_Type& host, const s_Type& guest, const bool DONT_match_zeroes, const bool asArgument)
{
    return isAssignableAsArgument_AGveG7WH(host, guest, DONT_match_zeroes) && (asArgument || isLifetimeAssignable_87LkAOV4(host.lifetime, guest.lifetime));
}

bool is_ref_zJCUz9W3(const s_Type& type)
{
    return !!type.lifetime;
}

bool is_mutref_zJCUz9W3(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ const bool a = ((type.vtype.quals & q_mutref) != 0);
    const bool b = is_ref_zJCUz9W3(type);
    if (a && !b)
        BUG_XksxYQ3i("MutRef&&!Ref"_fu, _here, ctx);

    return /*NRVO*/ a;
}

s_Type add_ref_EgWfyCPW(/*MOV*/ s_Type&& type, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Lifetime _0 {};
    type.lifetime = ((_0 = Lifetime_union_87LkAOV4(type.lifetime, lifetime)) ? static_cast<s_Lifetime&&>(_0) : BUG_XksxYQ3i("add_ref: falsy lifetime"_fu, _here, ctx));
    return static_cast<s_Type&&>(type);
}

s_Type add_mutref_EgWfyCPW(/*MOV*/ s_Type&& type, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    type.vtype.quals |= q_mutref;
    s_Lifetime _0 {};
    type.lifetime = ((_0 = Lifetime_union_87LkAOV4(type.lifetime, lifetime)) ? static_cast<s_Lifetime&&>(_0) : BUG_XksxYQ3i("add_mutref: falsy lifetime"_fu, _here, ctx));
    return static_cast<s_Type&&>(type);
}

                                #ifndef DEF_if_last_tZvRQ2Ac
                                #define DEF_if_last_tZvRQ2Ac
inline const s_Region& if_last_tZvRQ2Ac(fu::view<s_Region> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_Region*)fu::NIL);
}
                                #endif

bool is_ref2temp_zJCUz9W3(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (if_last_tZvRQ2Ac(type.lifetime.uni0n) == Region_TEMP) && (is_ref_zJCUz9W3(type) || BUG_XksxYQ3i("is_ref2temp: has lts but isnt ref"_fu, _here, ctx));
}

s_Type clear_refs_zJCUz9W3(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_mutref;
    type.lifetime = s_Lifetime{};
    return static_cast<s_Type&&>(type);
}

s_Type clear_mutref_zJCUz9W3(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_mutref;
    return static_cast<s_Type&&>(type);
}

s_Type tryClearRefs_S1kyINNV(const s_Type& type, const bool mutref, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (mutref ? is_mutref_zJCUz9W3(type, _here, ctx) : is_ref_zJCUz9W3(type)) ? clear_refs_zJCUz9W3(s_Type(type)) : s_Type{};
}

s_Type tryClear_mutref_zJCUz9W3(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs_S1kyINNV(type, true, _here, ctx);
}

s_Type tryClear_ref_zJCUz9W3(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs_S1kyINNV(type, bool{}, _here, ctx);
}

s_Type add_refs_yRJeU5dj(const s_Type& from, /*MOV*/ s_Type&& to)
{
    to.vtype.quals |= (from.vtype.quals & q_mutref);
    to.lifetime = Lifetime_union_87LkAOV4(from.lifetime, to.lifetime);
    return static_cast<s_Type&&>(to);
}

s_Type make_copyable_zJCUz9W3(/*MOV*/ s_Type&& type)
{
    type.vtype.quals |= q_rx_copy;
    return static_cast<s_Type&&>(type);
}

                                #ifndef DEF_x7Ex3D_pN4jXVBE
                                #define DEF_x7Ex3D_pN4jXVBE
inline fu_STR& x7Ex3D_pN4jXVBE(fu_STR& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

fu_STR serializeType_CChJJaQk(const s_Type& type, fu::view<char> debug, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!(type))
        BUG_XksxYQ3i(("serializeType: Falsy type in: "_fu + debug), _here, ctx);

    fu_STR prefix {};
    if (type.vtype.quals)
        x7Ex3D_pN4jXVBE(prefix, fu::i64dec(type.vtype.quals));

    return prefix + (type.vtype.canon ? type.vtype.canon : BUG_XksxYQ3i(("serializeType: No type.canon in: "_fu + debug), _here, ctx));
}

fu_STR humanizeQuals_zJCUz9W3(const s_Type& type)
{
    /*MOV*/ fu_STR result = ":"_fu;
    for (int i = 0; i < TAGS.size(); i++)
    {
        if (type.vtype.quals & (1 << i))
            result += (" "_fu + TAGS[i]);

    };
    return /*NRVO*/ result;
}

s_ValueType parseType_pTOG72Sa(const fu_STR& str)
{
    int offset {};
    const int quals = int(parse10u32_mPp6Ulzh(offset, str));
    fu_STR canon = fu::slice(str, offset);
    return s_ValueType { int(quals), fu_STR(canon) };
}

                                #ifndef DEF_starts_cnCAmU7Y
                                #define DEF_starts_cnCAmU7Y
inline bool starts_cnCAmU7Y(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

bool type_isSliceable_zJCUz9W3(const s_Type& type)
{
    return starts_cnCAmU7Y(type.vtype.canon, '[');
}

s_Type createArray_zJCUz9W3(const s_Type& item, const s_TokenIdx& _here, const s_Context& ctx)
{
    fu_STR canon = (("["_fu + serializeType_CChJJaQk(item, "createArray"_fu, _here, ctx)) + "]"_fu);
    const int quals = ((item.vtype.quals & q_rx_copy) | q_rx_resize);
    return s_Type { s_ValueType { int(quals), fu_STR(canon) }, s_Lifetime(item.lifetime) };
}

s_Type createSlice_EgWfyCPW(const s_Type& item, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Type out = createArray_zJCUz9W3(item, _here, ctx);
    out.vtype.quals &= ~(q_rx_copy | q_rx_resize);
    return add_ref_EgWfyCPW(s_Type(out), lifetime, _here, ctx);
}

s_Type tryClear_sliceable_zJCUz9W3(const s_Type& type)
{
    if (!type_isSliceable_zJCUz9W3(type))
        return s_Type{};

    s_ValueType vtype = parseType_pTOG72Sa(fu::slice(type.vtype.canon, 1, (type.vtype.canon.size() - 1)));
    return s_Type { s_ValueType(vtype), s_Lifetime{} };
}

s_Type clear_sliceable_zJCUz9W3(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Type _0 {};
    return (_0 = tryClear_sliceable_zJCUz9W3(type)) ? static_cast<s_Type&&>(_0) : BUG_XksxYQ3i(("Not sliceable: "_fu + type.vtype.canon), _here, ctx);
}

s_Type tryClear_array_zJCUz9W3(const s_Type& type)
{
    if ((type.vtype.quals & q_rx_resize) != q_rx_resize)
        return s_Type{};

    return tryClear_sliceable_zJCUz9W3(type);
}

bool TODO_FIX_isArray_zJCUz9W3(const s_Type& type)
{
    return (type.vtype.quals & (q_rx_resize | q_rx_copy)) && type_isSliceable_zJCUz9W3(type);
}

s_Type type_trySuper_AGveG7WH(const s_Type& a, const s_Type& b, const bool DONT_match_zeroes)
{
    if (a.vtype.canon != b.vtype.canon)
        return (is_never_zJCUz9W3(a) ? s_Type(b) : (is_never_zJCUz9W3(b) ? s_Type(a) : ((is_zeroes_zJCUz9W3(a) && !DONT_match_zeroes) ? (CANNOT_definit_mutrefs ? clear_mutref_zJCUz9W3(s_Type(b)) : s_Type(b)) : ((is_zeroes_zJCUz9W3(b) && !DONT_match_zeroes) ? (CANNOT_definit_mutrefs ? clear_mutref_zJCUz9W3(s_Type(a)) : s_Type(a)) : s_Type{}))));

    const int quals = (a.vtype.quals & b.vtype.quals);
    s_Lifetime lifetime = (a.lifetime && b.lifetime ? Lifetime_union_87LkAOV4(a.lifetime, b.lifetime) : s_Lifetime{});
    return s_Type { s_ValueType { int(quals), fu_STR(a.vtype.canon) }, s_Lifetime(lifetime) };
}

s_Type type_tryIntersect_yRJeU5dj(const s_Type& a, const s_Type& b)
{
    if (a.vtype.canon != b.vtype.canon)
        return s_Type{};

    const int quals = (a.vtype.quals | b.vtype.quals);
    s_Lifetime lifetime = Lifetime_inter_87LkAOV4(a.lifetime, b.lifetime);
    if (!lifetime && (a.lifetime || b.lifetime))
        return s_Type{};

    return s_Type { s_ValueType { int(quals), fu_STR(a.vtype.canon) }, s_Lifetime(lifetime) };
}

bool type_isAddrOfFn_zJCUz9W3(const s_Type& type)
{
    return starts_cnCAmU7Y(type.vtype.canon, '@');
}

bool type_isZST_zJCUz9W3(const s_Type& type)
{
    return type_isAddrOfFn_zJCUz9W3(type) || is_void_zJCUz9W3(type) || is_zeroes_zJCUz9W3(type);
}

fu_STR packAddrOfFn_wA8no8pa(fu::view<s_Target> targets)
{
    /*MOV*/ fu_STR res = "@"_fu;
    for (int i = 0; i < targets.size(); i++)
    {
        const s_Target& target = targets[i];
        appendMi_KujYnsPj(res, int(target.modid), int(target.index));
    };
    return /*NRVO*/ res;
}

bool will_relax_2CttqzuO(const s_Type& type, const s_Type& slot, const int relax_mask)
{
    return ((type.vtype.quals & ~slot.vtype.quals) & relax_mask) != 0;
}

bool try_relax_2CttqzuO(s_Type& type, const s_Type& slot, const int relax_mask)
{
    if (!will_relax_2CttqzuO(type, slot, int(relax_mask)))
        return false;

    type.vtype.quals &= (slot.vtype.quals | ~relax_mask);
    return true;
}

s_Type relax_typeParam_zJCUz9W3(s_Type&& type)
{
    return clear_refs_zJCUz9W3(s_Type(type));
}

#endif
