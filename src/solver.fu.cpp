
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/int.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/view.h>

struct s_ArgWrite;
struct s_Argument;
struct s_BitSet;
struct s_CodegenOutput;
struct s_Context;
struct s_Extended;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Map_OZkl;
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
struct s_SolvedNodeData;
struct s_SolverOutput;
struct s_Struct;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;

[[noreturn]] fu::never BUG(fu_STR&&, const s_TokenIdx&, const s_Context&);
bool isAssignable(const s_Type&, const s_Type&);
bool operator==(const s_Lifetime&, const s_Lifetime&);
bool operator==(const s_Region&, const s_Region&);
bool operator==(const s_Type&, const s_Type&);
bool operator>(const s_Region&, const s_Region&);
int parse10i32(int&, fu::view<char>);
s_Lifetime Lifetime_static();
static bool operator==(const s_ValueType&, const s_ValueType&);

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
    s_Target nodeown;
    int nodeidx;
    explicit operator bool() const noexcept
    {
        return false
            || nodeown
            || nodeidx
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
    s_SolvedNode solved;
    unsigned status;
    int local_of;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || type
            || flags
            || solved
            || status
            || local_of
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

                                #ifndef DEF_s_ArgWrite
                                #define DEF_s_ArgWrite
struct s_ArgWrite
{
    int nodeidx;
    int arg_position;
    explicit operator bool() const noexcept
    {
        return false
            || nodeidx
            || arg_position
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
    s_BitSet risk_free;
    s_ArgWrite written_via;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || risk_free
            || written_via
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
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || helpers
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

                                #ifndef DEF_s_Extended
                                #define DEF_s_Extended
struct s_Extended
{
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Target spec_of;
    s_Template tEmplate;
    fu_VEC<s_SolvedNodeData> nodes;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_ScopeItem> extra_items;
    fu_VEC<s_SolvedNode> callsites;
    explicit operator bool() const noexcept
    {
        return false
            || min
            || max
            || args
            || spec_of
            || tEmplate
            || nodes
            || locals
            || extra_items
            || callsites
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
    fu_VEC<s_Extended> extended;
    fu_VEC<int> imports;
    fu_VEC<s_Target> usings;
    fu_VEC<s_Target> converts;
    int pub_count;
    s_Scope(const s_Scope&) = delete;
    s_Scope(s_Scope&&) = default;
    s_Scope& operator=(const s_Scope&) = delete;
    s_Scope& operator=(s_Scope&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || overloads
            || extended
            || imports
            || usings
            || converts
            || pub_count
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
    fu_VEC<int> unity;
    fu_VEC<int> unity_because;
    fu_STR src;
    explicit operator bool() const noexcept
    {
        return false
            || unity
            || unity_because
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

                                #ifndef DEF_s_Map_OZkl
                                #define DEF_s_Map_OZkl
struct s_Map_OZkl
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
    s_Map_OZkl files;
    s_Map_OZkl fuzzy;
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

static const int q_mutref = (1 << 0);

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline constexpr int q_rx_copy = (1 << 1);
                                #endif

static const int q_rx_resize = (1 << 2);

static const int q_rx_move = (1 << 3);

static const fu_VEC<fu_STR> TAGS = fu_VEC<fu_STR> { fu::slate<4, fu_STR> { "mutref"_fu, "copy"_fu, "resize"_fu, "move"_fu } };

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
inline constexpr int RELAX_before_bck = (q_mutref | q_rx_resize);
                                #endif

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
inline constexpr int RELAX_all = (((q_mutref | q_rx_copy) | q_rx_resize) | q_rx_move);
                                #endif

bool operator==(const s_Target& a, const s_Target& b)
{
    return (a.modid == b.modid) && (a.index == b.index);
}

bool operator>(const s_Region& a, const s_Region& b)
{
    return a.index > b.index;
}

bool operator>=(const s_Region& a, const s_Region& b)
{
    return (a.index >= b.index);
}

bool operator!=(const s_Region& a, const s_Region& b)
{
    return a.index != b.index;
}

bool operator==(const s_Region& a, const s_Region& b)
{
    return a.index == b.index;
}

int Region_toLocalIndex(const s_Region& region)
{
    return region.index;
}

s_Region Region_fromLocalIndex(const int index_2)
{
    return s_Region { int(index_2) };
}

bool Region_isArg(const s_Region& region)
{
    return region.index < 0;
}

int Region_toArgIndex(const s_Region& region)
{
    return -Region_toLocalIndex(region);
}

s_Region Region_fromArgIndex(const int index_2)
{
    return Region_fromLocalIndex(-index_2);
}

static const s_Region Region_TEMP = Region_fromLocalIndex(int(0x7fffffffu));

static const s_Region Region_STATIC = Region_fromLocalIndex(int(0x80000001u));

bool Region_isTemp(const s_Region& region)
{
    return region == Region_TEMP;
}

bool Region_isStatic(const s_Region& region)
{
    return region == Region_STATIC;
}

int Region_asIndex(const s_Region& r)
{
    return (((r == Region_TEMP) || (r == Region_STATIC)) ? 0 : ((r.index < 0) ? -r.index : int(r.index)));
}

int Region_asArgIndex(const s_Region& r)
{
    return (((r == Region_STATIC) || (r.index > 0)) ? 0 : -r.index);
}

                                #ifndef DEFt_add_EylT
                                #define DEFt_add_EylT
inline void add_EylT(fu_VEC<s_Region>& a, fu::view<s_Region> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        if ((X >= Y))
        {
            if (X != Y)
            {
                a.insert(x, Y);
                y++;
            }
            else
                y++;

        };
        x++;
    };
    if (y < b.size())
        a += fu::get_view(b, y, b.size());

}
                                #endif

                                #ifndef DEFt_union_JtMV
                                #define DEFt_union_JtMV
inline fu_VEC<s_Region> union_JtMV(const fu_VEC<s_Region>& a, const fu_VEC<s_Region>& b)
{
    if (a.size() < b.size())
        return union_JtMV(b, a);

    /*MOV*/ fu_VEC<s_Region> a_1 { a };
    add_EylT(a_1, b);
    return /*NRVO*/ a_1;
}
                                #endif

s_Lifetime Lifetime_union(const s_Lifetime& a, const s_Lifetime& b)
{
    return s_Lifetime { union_JtMV(a.uni0n, b.uni0n) };
}

                                #ifndef DEFt_keep_EylT
                                #define DEFt_keep_EylT
inline fu_VEC<s_Region>& keep_EylT(fu_VEC<s_Region>& a, fu::view<s_Region> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        if (X == Y)
        {
            x++;
            y++;
        }
        else if (X > Y)
            y++;
        else
            a.splice(x, 1);

    };
    if (x < a.size())
        a.shrink(x);

    return a;
}
                                #endif

                                #ifndef DEFt_inter_JtMV
                                #define DEFt_inter_JtMV
inline fu_VEC<s_Region> inter_JtMV(const fu_VEC<s_Region>& a, const fu_VEC<s_Region>& b)
{
    if (a.size() > b.size())
        return inter_JtMV(b, a);

    /*MOV*/ fu_VEC<s_Region> a_1 { a };
    keep_EylT(a_1, b);
    return /*NRVO*/ a_1;
}
                                #endif

s_Lifetime Lifetime_inter(const s_Lifetime& a, const s_Lifetime& b)
{
    return s_Lifetime { inter_JtMV(a.uni0n, b.uni0n) };
}

s_Lifetime Lifetime_makeShared(const s_Lifetime& lifetime_1)
{
    return Lifetime_union(lifetime_1, Lifetime_static());
}

s_Lifetime Lifetime_static()
{
    return s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(Region_STATIC) } } };
}

s_Lifetime Lifetime_temporary()
{
    return s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(Region_TEMP) } } };
}

s_Lifetime Lifetime_placeholder()
{
    return s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region { 0 } } } };
}

void Lifetime_placeholder_remove(s_Lifetime& lt)
{
    for (int i = 0; i < lt.uni0n.size(); i++)
    {
        const int r = lt.uni0n[i].index;
        if ((r >= 0))
        {
            if (r == 0)
                lt.uni0n.splice(i, 1);

            break;
        };
    };
}

bool operator==(const s_Lifetime& a, const s_Lifetime& b)
{
    return fu::view_of(a.uni0n, int{}) == fu::view_of(b.uni0n, int{});
}

static bool operator==(const s_ValueType& a, const s_ValueType& b)
{
    return (a.quals == b.quals) && (a.modid == b.modid) && (a.canon == b.canon);
}

bool operator==(const s_Type& a, const s_Type& b)
{
    return (a.vtype == b.vtype) && (a.lifetime == b.lifetime);
}

extern const int Primitive = q_rx_copy;

extern const s_Type t_i8 = s_Type { s_ValueType { int(Primitive), 0, "i8"_fu }, s_Lifetime{} };

extern const s_Type t_i16 = s_Type { s_ValueType { int(Primitive), 0, "i16"_fu }, s_Lifetime{} };

extern const s_Type t_i32 = s_Type { s_ValueType { int(Primitive), 0, "i32"_fu }, s_Lifetime{} };

extern const s_Type t_i64 = s_Type { s_ValueType { int(Primitive), 0, "i64"_fu }, s_Lifetime{} };

extern const s_Type t_u8 = s_Type { s_ValueType { int(Primitive), 0, "u8"_fu }, s_Lifetime{} };

extern const s_Type t_u16 = s_Type { s_ValueType { int(Primitive), 0, "u16"_fu }, s_Lifetime{} };

extern const s_Type t_u32 = s_Type { s_ValueType { int(Primitive), 0, "u32"_fu }, s_Lifetime{} };

extern const s_Type t_u64 = s_Type { s_ValueType { int(Primitive), 0, "u64"_fu }, s_Lifetime{} };

extern const s_Type t_f32 = s_Type { s_ValueType { int(Primitive), 0, "f32"_fu }, s_Lifetime{} };

extern const s_Type t_f64 = s_Type { s_ValueType { int(Primitive), 0, "f64"_fu }, s_Lifetime{} };

extern const s_Type t_void = s_Type { s_ValueType { 0, 0, "void"_fu }, s_Lifetime{} };

extern const s_Type t_bool = s_Type { s_ValueType { int(Primitive), 0, "bool"_fu }, s_Lifetime{} };

extern const s_Type t_never = s_Type { s_ValueType { 0, 0, "never"_fu }, s_Lifetime{} };

extern const s_Type t_zeroes = s_Type { s_ValueType { 0, 0, "zeroes"_fu }, s_Lifetime{} };

extern const s_Type t_byte = s_Type { s_ValueType { int(Primitive), 0, "byte"_fu }, s_Lifetime{} };

bool is_void(const s_Type& t)
{
    return t.vtype.canon == t_void.vtype.canon;
}

bool is_bool(const s_Type& t)
{
    return t.vtype.canon == t_bool.vtype.canon;
}

bool is_byte(const s_Type& t)
{
    return t.vtype.canon == t_byte.vtype.canon;
}

bool is_never(const s_Type& t)
{
    return t.vtype.canon == t_never.vtype.canon;
}

bool is_zeroes(const s_Type& t)
{
    return t.vtype.canon == t_zeroes.vtype.canon;
}

bool is_rx_copy(const s_Type& t)
{
    return !!(t.vtype.quals & q_rx_copy);
}

bool maybe_nonzero(const s_Type& t)
{
    return is_never(t) || is_void(t);
}

extern const bool CANNOT_definit_mutrefs = true;

static bool isCanonAssignable(fu::view<char> host, fu::view<char> guest)
{
    return host == guest;
}

static bool areQualsAssignable(const int host, const int guest)
{
    return (host & guest) == host;
}

bool isAssignableAsArgument(const s_Type& host, const s_Type& guest)
{
    return ((host.vtype.modid == guest.vtype.modid) && isCanonAssignable(host.vtype.canon, guest.vtype.canon) && areQualsAssignable(host.vtype.quals, guest.vtype.quals)) || is_never(guest) || (is_zeroes(guest) && !(CANNOT_definit_mutrefs ? (host.vtype.quals & q_mutref) : int{}));
}

static bool isLifetimeAssignable(const s_Lifetime& host, const s_Lifetime& guest)
{
    return !host || !!guest;
}

bool isAssignable(const s_Type& host, const s_Type& guest)
{
    return isAssignableAsArgument(host, guest) && isLifetimeAssignable(host.lifetime, guest.lifetime);
}

static const int q_mutref_or_move = (q_mutref | q_rx_move);

bool is_ref(const s_Type& type_3)
{
    return !!type_3.lifetime;
}

bool is_mutref(const s_Type& type_3, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ const bool a = ((type_3.vtype.quals & q_mutref) != 0);
    const bool b = is_ref(type_3);
    if (a && !b)
        BUG("MutRef&&!Ref"_fu, _here, ctx);

    return /*NRVO*/ a;
}

s_Type add_ref(/*MOV*/ s_Type&& type_3, const s_Lifetime& lifetime_1, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Lifetime _0 {};
    type_3.lifetime = ((_0 = Lifetime_union(type_3.lifetime, lifetime_1)) ? static_cast<s_Lifetime&&>(_0) : BUG("add_ref: falsy lifetime"_fu, _here, ctx));
    return static_cast<s_Type&&>(type_3);
}

s_Type add_mutref(/*MOV*/ s_Type&& type_3, const s_Lifetime& lifetime_1, const s_TokenIdx& _here, const s_Context& ctx)
{
    type_3.vtype.quals |= q_mutref;
    s_Lifetime _0 {};
    type_3.lifetime = ((_0 = Lifetime_union(type_3.lifetime, lifetime_1)) ? static_cast<s_Lifetime&&>(_0) : BUG("add_mutref: falsy lifetime"_fu, _here, ctx));
    return static_cast<s_Type&&>(type_3);
}

                                #ifndef DEFt_if_last_pdPA
                                #define DEFt_if_last_pdPA
inline const s_Region& if_last_pdPA(fu::view<s_Region> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_Region*)fu::NIL);
}
                                #endif

bool is_ref2temp(const s_Type& type_3, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (if_last_pdPA(type_3.lifetime.uni0n) == Region_TEMP) && (is_ref(type_3) || BUG("is_ref2temp: has lts but isnt ref"_fu, _here, ctx));
}

s_Type clear_refs(/*MOV*/ s_Type&& type_3)
{
    type_3.vtype.quals &= ~q_mutref_or_move;
    type_3.lifetime = s_Lifetime{};
    return static_cast<s_Type&&>(type_3);
}

s_Type clear_mutref(/*MOV*/ s_Type&& type_3)
{
    type_3.vtype.quals &= ~q_mutref;
    return static_cast<s_Type&&>(type_3);
}

static s_Type tryClearRefs(const s_Type& type_3, const bool mutref, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (mutref ? is_mutref(type_3, _here, ctx) : is_ref(type_3)) ? clear_refs(s_Type(type_3)) : s_Type{};
}

s_Type tryClear_mutref(const s_Type& type_3, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs(type_3, true, _here, ctx);
}

s_Type tryClear_ref(const s_Type& type_3, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs(type_3, bool{}, _here, ctx);
}

s_Type add_refs(const s_Type& from, /*MOV*/ s_Type&& to)
{
    to.vtype.quals |= (from.vtype.quals & q_mutref_or_move);
    to.lifetime = Lifetime_union(from.lifetime, to.lifetime);
    return static_cast<s_Type&&>(to);
}

s_Type make_copyable(/*MOV*/ s_Type&& type_3)
{
    type_3.vtype.quals |= q_rx_copy;
    return static_cast<s_Type&&>(type_3);
}

                                #ifndef DEFt_x7Ex3D_BWdE
                                #define DEFt_x7Ex3D_BWdE
inline fu_STR& x7Ex3D_BWdE(fu_STR& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu_STR serializeType(const s_Type& type_3, fu::view<char> debug, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!(type_3))
        BUG(("serializeType: Falsy type in: "_fu + debug), _here, ctx);

    fu_STR prefix {};
    if (type_3.vtype.modid)
        x7Ex3D_BWdE(prefix, fu::i64dec(type_3.vtype.modid));

    if (type_3.vtype.quals)
        prefix += x7E_OZkl("+"_fu, fu::i64dec(type_3.vtype.quals));

    return prefix + (type_3.vtype.canon ? type_3.vtype.canon : BUG(("serializeType: No type.canon in: "_fu + debug), _here, ctx));
}

fu_STR humanizeQuals(const s_Type& type_3)
{
    /*MOV*/ fu_STR result = ":"_fu;
    for (int i = 0; i < TAGS.size(); i++)
    {
        if (type_3.vtype.quals & (1 << i))
            result += (" "_fu + TAGS[i]);

    };
    return /*NRVO*/ result;
}

s_ValueType parseType(const fu_STR& str_1)
{
    int offset {};
    const int modid_4 = parse10i32(offset, str_1);
    int quals_1 = 0;
    if (str_1[offset] == '+')
    {
        offset++;
        quals_1 = parse10i32(offset, str_1);
    };
    fu_STR canon_1 = fu::slice(str_1, offset);
    return s_ValueType { int(quals_1), int(modid_4), fu_STR(canon_1) };
}

bool type_isArray(const s_Type& type_3)
{
    return (type_3.vtype.quals & (q_rx_resize | q_rx_copy)) && fu::lmatch(type_3.vtype.canon, "[]"_fu);
}

s_Type createArray(const s_Type& item, const s_TokenIdx& _here, const s_Context& ctx)
{
    fu_STR canon_1 = ("[]"_fu + serializeType(item, "createArray"_fu, _here, ctx));
    const int quals_1 = ((item.vtype.quals & q_rx_copy) | q_rx_resize);
    const int modid_4 = 0;
    return s_Type { s_ValueType { int(quals_1), int(modid_4), fu_STR(canon_1) }, s_Lifetime(item.lifetime) };
}

s_Type tryClear_array(const s_Type& type_3)
{
    if (((type_3.vtype.quals & q_rx_resize) != q_rx_resize) || !type_isArray(type_3))
        return s_Type{};

    s_ValueType vtype_1 = parseType(fu::slice(type_3.vtype.canon, 2));
    return s_Type { s_ValueType(vtype_1), s_Lifetime{} };
}

bool type_isSliceable(const s_Type& type_3)
{
    return fu::lmatch(type_3.vtype.canon, "[]"_fu);
}

s_Type createSlice(const s_Type& item, const s_Lifetime& lifetime_1, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Type out_1 = createArray(item, _here, ctx);
    out_1.vtype.quals &= ~(q_rx_copy | q_rx_resize);
    return add_ref(s_Type(out_1), lifetime_1, _here, ctx);
}

s_Type tryClear_sliceable(const s_Type& type_3)
{
    if (!type_isSliceable(type_3))
        return s_Type{};

    s_ValueType vtype_1 = parseType(fu::slice(type_3.vtype.canon, 2));
    return s_Type { s_ValueType(vtype_1), s_Lifetime{} };
}

s_Type clear_sliceable(const s_Type& type_3, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Type _0 {};
    return (_0 = tryClear_sliceable(type_3)) ? static_cast<s_Type&&>(_0) : BUG(("Not sliceable: "_fu + type_3.vtype.canon), _here, ctx);
}

s_Type type_trySuper(const s_Type& a, const s_Type& b)
{
    if ((a.vtype.canon != b.vtype.canon) || (a.vtype.modid != b.vtype.modid))
        return (is_never(a) ? s_Type(b) : (is_never(b) ? s_Type(a) : (is_zeroes(a) ? (CANNOT_definit_mutrefs ? clear_mutref(s_Type(b)) : s_Type(b)) : (is_zeroes(b) ? (CANNOT_definit_mutrefs ? clear_mutref(s_Type(a)) : s_Type(a)) : s_Type{}))));

    const int quals_1 = (a.vtype.quals & b.vtype.quals);
    s_Lifetime lifetime_1 = (a.lifetime && b.lifetime ? Lifetime_union(a.lifetime, b.lifetime) : s_Lifetime{});
    return s_Type { s_ValueType { int(quals_1), int(a.vtype.modid), fu_STR(a.vtype.canon) }, s_Lifetime(lifetime_1) };
}

s_Type type_tryIntersect(const s_Type& a, const s_Type& b)
{
    if ((a.vtype.canon != b.vtype.canon) || (a.vtype.modid != b.vtype.modid))
        return s_Type{};

    const int quals_1 = (a.vtype.quals | b.vtype.quals);
    s_Lifetime lifetime_1 = Lifetime_inter(a.lifetime, b.lifetime);
    if (!lifetime_1 && (a.lifetime || b.lifetime))
        return s_Type{};

    return s_Type { s_ValueType { int(quals_1), int(a.vtype.modid), fu_STR(a.vtype.canon) }, s_Lifetime(lifetime_1) };
}

bool will_relax(const s_Type& type_3, const s_Type& slot, const int relax_mask)
{
    return ((type_3.vtype.quals & ~slot.vtype.quals) & relax_mask) != 0;
}

bool try_relax(s_Type& type_3, const s_Type& slot, const int relax_mask)
{
    if (!will_relax(type_3, slot, int(relax_mask)))
        return false;

    type_3.vtype.quals &= (slot.vtype.quals | ~relax_mask);
    return true;
}

s_Type relax_typeParam(s_Type&& type_3)
{
    return clear_refs(s_Type(type_3));
}

#endif

#include <algorithm>
#include <cstdint>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/defer.h>
#include <fu/int.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/slice.h>
#include <fu/view.h>
#include <utility>

struct s_ArgWrite;
struct s_Argument;
struct s_BitSet;
struct s_CodegenOutput;
struct s_Context;
struct s_CurrentFn;
struct s_Events;
struct s_EventsSnap;
struct s_Extended;
struct s_Flow;
struct s_Helpers;
struct s_HelpersData;
struct s_Intlit;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Lint;
struct s_Map_Lvtq;
struct s_Map_OZkl;
struct s_Map_n2DH;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStat;
struct s_ModuleStats;
struct s_Node;
struct s_Options;
struct s_Overload;
struct s_ParserOutput;
struct s_RWEvent;
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
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_TypeParam;
struct s_ValueType;

[[noreturn]] fu::never BUG(fu_STR&&, const s_TokenIdx&, const s_Context&);
[[noreturn]] fu::never FAIL(fu_STR&&, const s_TokenIdx&, const s_Context&);
[[noreturn]] static fu::never err(fu::view<char>, fu::view<char>, const s_SolvedNode&, const s_Module&, const s_Scope&, const s_Context&, const s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
[[noreturn]] static fu::never fail(fu_STR&&, const s_TokenIdx&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&);
bool Region_isArg(const s_Region&);
bool Region_isStatic(const s_Region&);
bool Region_isTemp(const s_Region&);
bool X_unpackAddrOfFnBinding(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Type&, bool);
bool add_once(s_BitSet&, int);
bool has(const s_BitSet&, int);
bool hasAssignment(fu::view<char>);
bool isAssignable(const s_Type&, const s_Type&);
bool isAssignableAsArgument(const s_Type&, const s_Type&);
bool isStruct(const s_Type&);
bool is_arithmetic(const s_Type&);
bool is_bool(const s_Type&);
bool is_floating_pt(const s_Type&);
bool is_integral(const s_Type&);
bool is_mutref(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_never(const s_Type&);
bool is_primitive(const s_Type&);
bool is_ref(const s_Type&);
bool is_ref2temp(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_rx_copy(const s_Type&);
bool is_trivial(const s_Type&, const s_Module&, const s_Context&);
bool is_unsigned(const s_Type&);
bool is_void(const s_Type&);
bool operator!=(const s_Region&, const s_Region&);
bool operator==(const s_Region&, const s_Region&);
bool operator==(const s_Target&, const s_Target&);
bool operator==(const s_Type&, const s_Type&);
bool operator>(const s_Region&, const s_Region&);
bool operator>=(const s_Region&, const s_Region&);
bool try_relax(s_Type&, const s_Type&, int);
bool type_isAddrOfFn(const s_Type&);
const fu_STR& _fname(const s_TokenIdx&, const s_Context&);
const fu_VEC<int>& lookupTypeImports(const s_Type&, const s_Module&, const s_Context&);
const s_Struct& lookupStruct(const s_Type&, const s_Module&, const s_Context&);
const s_Struct& tryLookupStruct(const s_Type&, const s_Module&, const s_Context&);
const s_Token& _token(const s_TokenIdx&, const s_Context&);
fu_STR ClosureID(const s_Target&);
fu_STR formatCodeSnippet(const s_TokenIdx&, s_TokenIdx&&, int, const s_Context&);
fu_STR hash62(fu::view<char>, int);
fu_STR humanizeQuals(const s_Type&);
fu_STR packAddrOfFn(fu::view<s_Target>);
fu_STR qBAD(const fu_STR&);
fu_STR qID(const fu_STR&);
fu_STR qKW(const fu_STR&);
fu_STR resolveFile_x(const fu_STR&, const s_Context&);
fu_STR serializeType(const s_Type&, fu::view<char>, const s_TokenIdx&, const s_Context&);
inline const s_Region& first_pdPA(fu::view<s_Region>);
inline int find_VtCz(fu::view<fu_STR>, fu::view<char>);
inline s_ScopeSkip& last_usdD(fu_VEC<s_ScopeSkip>&);
inline s_SolvedNode& last_B9fx(fu_VEC<s_SolvedNode>&);
int MODID(const s_Module&);
int Region_asArgIndex(const s_Region&);
int Region_asIndex(const s_Region&);
int Region_toArgIndex(const s_Region&);
int Region_toLocalIndex(const s_Region&);
int compilerBreak();
int parse10i32(int&, fu::view<char>);
int popcount(const s_BitSet&);
s_BitSet ArgsAtRisk_listRiskFree(const s_Flow&, int);
s_Intlit Intlit(fu::view<char>);
s_Lifetime Lifetime_inter(const s_Lifetime&, const s_Lifetime&);
s_Lifetime Lifetime_makeShared(const s_Lifetime&);
s_Lifetime Lifetime_placeholder();
s_Lifetime Lifetime_static();
s_Lifetime Lifetime_temporary();
s_Lifetime Lifetime_union(const s_Lifetime&, const s_Lifetime&);
s_Region Region_fromArgIndex(int);
s_Region Region_fromLocalIndex(int);
s_Scope Scope_exports(const s_Scope&, int, const fu_VEC<s_ScopeItem>&);
s_Scope listGlobals(const s_Module&);
s_ScopeMemo Scope_snap(const s_Scope&, fu::view<s_Helpers>);
s_SolverOutput solve(const s_Options&, const s_Context&, s_Module&);
s_Struct& lookupStruct_mut(fu::view<char>, s_Module&);
s_Target Scope_Typedef(s_Scope&, const fu_STR&, const s_Type&, int, const fu_STR&, unsigned, const s_Module&);
s_Target Scope_create(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, const s_SolvedNode&, int, unsigned, bool, const s_Module&);
s_Target search(fu::view<s_ScopeItem>, const fu_STR&, int&, fu::view<s_ScopeSkip>, bool&, const s_Target&, fu::view<s_Target>, fu::view<s_ScopeItem>);
s_Target target(const s_ScopeItem&);
s_Target tryParseClosureID(fu::view<char>, int);
s_Type X_addrofTarget(const s_Target&);
s_Type add_mutref(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type add_ref(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type add_refs(const s_Type&, s_Type&&);
s_Type clear_mutref(s_Type&&);
s_Type clear_refs(s_Type&&);
s_Type clear_sliceable(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type createArray(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type createSlice(const s_Type&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type despeculateStruct(s_Type&&);
s_Type initStruct(const fu_STR&, int, bool, s_Module&);
s_Type make_copyable(s_Type&&);
s_Type relax_typeParam(s_Type&&);
s_Type tryClear_array(const s_Type&);
s_Type tryClear_mutref(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_ref(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_sliceable(const s_Type&);
s_Type type_tryIntersect(const s_Type&, const s_Type&);
s_Type type_trySuper(const s_Type&, const s_Type&);
static bool isRTL(const s_Overload&);
static bool lazySolveStart(const s_Target&, const s_Overload&, s_Scope&, s_Module&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Map_n2DH&, s_ScopeSkipMemos&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, fu_VEC<s_ScopeItem>&, const s_Type&);
static bool want(const s_Type&, const s_Type&);
static const s_Extended& EXT(const s_Target&, const s_Module&, const s_Scope&, const s_Context&);
static const s_Overload& GET(const s_Target&, const s_Scope&, const s_Module&, const s_Context&, const s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
static const s_Overload& fnd(int, const s_CurrentFn&, const s_Module&, const s_Scope&, const s_Context&, const s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
static const s_SolvedNodeData& SolvedNodeData(const s_SolvedNode&, const s_Module&, const s_Scope&, const s_Context&);
static const s_Type& Scope_lookupType(const s_Node&, const s_TokenIdx&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&, const s_ScopeSkipMemos&);
static fu_STR addr(const s_TokenIdx&, const s_Context&, const s_Module&);
static fu_STR mangleArguments(fu::view<s_SolvedNode>, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, int, const s_Type&, const s_Scope&, const s_Module&, const s_Context&, const s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
static fu_STR qSTACK(const s_ArgWrite&, const s_Target&, fu_VEC<s_Target>&&, const s_CurrentFn&, const s_Module&, const s_Scope&, const s_Context&, const s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
static fu_VEC<s_SolvedNode> solveNodes(fu::view<s_Node>, const s_Type&, const s_Type&, bool, int, s_TokenIdx&, s_Module&, s_Scope&, const s_Context&, s_Target&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_Map_n2DH&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_Events& events(s_CurrentFn&);
static s_Flow& flow(s_CurrentFn&);
static s_Helpers& h(fu_VEC<s_Helpers>&, int);
static s_SolvedNode CallerNode(const fu_STR&, s_Target&&, fu_VEC<s_SolvedNode>&&, int, const fu_VEC<int>&, fu::view<fu_VEC<s_Target>>, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Target&, s_CurrentFn&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_n2DH&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, const s_Type&);
static s_SolvedNode SolvedNode(const fu_STR&, const s_Type&, int, const fu_STR&, const fu_VEC<s_SolvedNode>&, const s_Target&, int, const s_TokenIdx&, const s_Target&, const s_Module&, s_Scope&);
static s_SolvedNode __solveStruct(bool, const s_Node&, const s_Target&, s_CurrentFn&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeSkipMemos&, s_Target&, s_Map_n2DH&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode callsite(const s_RWEvent&, const s_CurrentFn&, const s_Module&, const s_Scope&, const s_Context&);
static s_SolvedNode createLet(const fu_STR&, int, const s_SolvedNode&, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Options&, int&, const s_Target&, const s_CurrentFn&, const s_ScopeMemo&, const s_ScopeSkipMemos&);
static s_SolvedNode evalTypeAnnot(const s_Node&, const s_Map_Lvtq&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, s_Target&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_Map_n2DH&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveArrlit(const s_Node&, const s_Type&, s_Module&, const s_Context&, s_TokenIdx&, s_Scope&, s_Target&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_Map_n2DH&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveBlock(const s_Node&, const s_Type&, int, short, int, const fu_STR&, int, int, s_Scope&, fu_VEC<s_Helpers>&, s_Module&, s_CurrentFn&, const s_Context&, fu_VEC<s_HelpersData>&, s_TokenIdx&, s_Target&, s_Map_n2DH&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveInt(const s_Node&, const s_Type&, const s_TokenIdx&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, s_Scope&, const s_Module&, const s_Target&);
static s_SolvedNode solveJump(const s_Node&, int, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Context&, s_Scope&, s_Module&, s_Target&, s_CurrentFn&, s_Map_n2DH&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveLet(const s_Node&, const s_Type&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, s_Target&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_Map_n2DH&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveLetLike_dontTouchScope(const fu_STR&, int, s_SolvedNode&&, s_Type&&, const s_Type&, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Options&, int&, const s_Target&);
static s_SolvedNode solveLetLike_dontTouchScope(const s_Node&, const s_Type&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, s_Target&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_Map_n2DH&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveNode(const s_Node&, const s_Type&, int, s_TokenIdx&, s_Module&, s_Scope&, const s_Context&, s_Target&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_Map_n2DH&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveNum(const s_Node&, const s_Type&, const s_TokenIdx&, const s_Target&, const s_Module&, s_Scope&);
static s_SolvedNode solveStr(const s_Node&, const s_Type&, const s_TokenIdx&, const s_Context&, const s_Target&, const s_Module&, s_Scope&);
static s_Target Binding(const fu_STR&, s_Type&&, int, bool&, const s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, const s_ScopeMemo&, const s_ScopeSkipMemos&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_TokenIdx&);
static s_Target doTrySpecialize(const s_Target&, const s_Target&, fu::view<s_SolvedNode>, fu_STR&&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, int, const s_Type&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Map_n2DH&, s_ScopeSkipMemos&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_Target tryMatch__mutargs(fu_STR&&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, bool, const s_Scope&, fu::view<s_SolvedNode>, int, const s_Target&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_n2DH&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, const s_Type&);
static s_Type T(int, const s_Node&, const s_Map_Lvtq&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, s_Target&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_Map_n2DH&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_Type solveArrlit_itemType(fu::view<s_SolvedNode>, s_Type&&, int, const s_TokenIdx&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&);
static void BORROWCK_resolveByTempCopy(const s_SolvedNode&, int, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, const s_Target&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Options&, int&);
static void Events_merge(s_Events&, const s_EventsSnap&);
static void Lifetime_F_MOVED_FROM(const s_Lifetime&, const s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
static void Lifetime_F_TODO_FIX_RRET(const s_Lifetime&, int, const s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
static void Scope_import(int, bool, s_Scope&, const s_ScopeSkipMemos&, const s_TokenIdx&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Module&);
static void bck_node(const s_SolvedNode&, const s_Module&, s_Scope&, const s_Context&, s_CurrentFn&, s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&, const s_Options&, int&);
static void descend(const s_Type&, bool, bool, bool, bool, s_Scope&, const s_Scope&, s_ScopeSkipMemos&, fu_VEC<s_SolvedNode>&, s_Module&, const s_Context&, s_CurrentFn&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_SolvedNode&, s_Target&, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu_VEC<s_ScopeItem>&, s_Map_n2DH&, s_ScopeMemo&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, const s_Type&, int);
static void propagateType(const s_SolvedNode&, const s_Type&, int, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_Target&, s_Map_n2DH&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, fu_VEC<s_ScopeItem>&, const s_Type&);
static void test_node(const s_SolvedNode&, fu_STR&&, const s_Module&, const s_Scope&, const s_Context&, s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
void ArgsAtRisk_shake(s_Flow&);
void HERE(const s_TokenIdx&, s_TokenIdx&);
void Lifetime_placeholder_remove(s_Lifetime&);
void Reference_trackArgument(s_Flow&, int, int);
void Reference_trackLocalRef(s_Flow&, int, const s_Lifetime&);
void Scope_pop(s_Scope&, const s_ScopeMemo&, fu_VEC<s_Helpers>&);
void Scope_set(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);
void Scope_set(s_Scope&, const fu_STR&, const s_Target&, bool);
void add(s_BitSet&, int);
void rem(s_BitSet&, int);

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
    s_Target nodeown;
    int nodeidx;
    explicit operator bool() const noexcept
    {
        return false
            || nodeown
            || nodeidx
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
            || modid
            || packed
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
    s_SolvedNode solved;
    unsigned status;
    int local_of;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || type
            || flags
            || solved
            || status
            || local_of
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

                                #ifndef DEF_s_ArgWrite
                                #define DEF_s_ArgWrite
struct s_ArgWrite
{
    int nodeidx;
    int arg_position;
    explicit operator bool() const noexcept
    {
        return false
            || nodeidx
            || arg_position
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
    s_BitSet risk_free;
    s_ArgWrite written_via;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || risk_free
            || written_via
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
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || helpers
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

                                #ifndef DEF_s_Extended
                                #define DEF_s_Extended
struct s_Extended
{
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Target spec_of;
    s_Template tEmplate;
    fu_VEC<s_SolvedNodeData> nodes;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_ScopeItem> extra_items;
    fu_VEC<s_SolvedNode> callsites;
    explicit operator bool() const noexcept
    {
        return false
            || min
            || max
            || args
            || spec_of
            || tEmplate
            || nodes
            || locals
            || extra_items
            || callsites
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
    fu_VEC<s_Extended> extended;
    fu_VEC<int> imports;
    fu_VEC<s_Target> usings;
    fu_VEC<s_Target> converts;
    int pub_count;
    s_Scope(const s_Scope&) = delete;
    s_Scope(s_Scope&&) = default;
    s_Scope& operator=(const s_Scope&) = delete;
    s_Scope& operator=(s_Scope&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || overloads
            || extended
            || imports
            || usings
            || converts
            || pub_count
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

                                #ifndef DEF_s_CodegenOutput
                                #define DEF_s_CodegenOutput
struct s_CodegenOutput
{
    fu_VEC<int> unity;
    fu_VEC<int> unity_because;
    fu_STR src;
    explicit operator bool() const noexcept
    {
        return false
            || unity
            || unity_because
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

                                #ifndef DEF_s_Map_OZkl
                                #define DEF_s_Map_OZkl
struct s_Map_OZkl
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
    s_Map_OZkl files;
    s_Map_OZkl fuzzy;
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

                                #ifndef DEF_s_Flow
                                #define DEF_s_Flow
struct s_Flow
{
    fu_VEC<fu_VEC<int>> parents;
    fu_VEC<fu_VEC<int>> invalidates;
    s_BitSet is_arg;
    fu_VEC<int> arg_targets;
    fu_VEC<int> arg_positions;
    fu_VEC<fu_VEC<int>> arg_aliases;
    fu_VEC<fu_VEC<int>> args_at_risk;
    explicit operator bool() const noexcept
    {
        return false
            || parents
            || invalidates
            || is_arg
            || arg_targets
            || arg_positions
            || arg_aliases
            || args_at_risk
        ;
    }
};
                                #endif

                                #ifndef DEF_s_RWEvent
                                #define DEF_s_RWEvent
struct s_RWEvent
{
    int target;
    int nodeidx;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || nodeidx
        ;
    }
};
                                #endif

                                #ifndef DEF_s_EventsSnap
                                #define DEF_s_EventsSnap
struct s_EventsSnap
{
    fu_VEC<s_RWEvent> invalidated_by;
    fu_VEC<int> args_written;
    explicit operator bool() const noexcept
    {
        return false
            || invalidated_by
            || args_written
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Events
                                #define DEF_s_Events
struct s_Events
{
    s_EventsSnap snap;
    fu_VEC<s_RWEvent> used_in_a_loop;
    fu_VEC<int> args_in_a_loop;
    fu_VEC<s_ArgWrite> args_written_via;
    fu_VEC<s_RWEvent> reads;
    fu_VEC<s_RWEvent> writes;
    explicit operator bool() const noexcept
    {
        return false
            || snap
            || used_in_a_loop
            || args_in_a_loop
            || args_written_via
            || reads
            || writes
        ;
    }
};
                                #endif

                                #ifndef DEF_s_CurrentFn
                                #define DEF_s_CurrentFn
struct s_CurrentFn
{
    s_SolvedNode out;
    s_Flow flow;
    s_Events events;
    int loop_start;
    fu_VEC<s_Type> var_usage;
    explicit operator bool() const noexcept
    {
        return false
            || out
            || flow
            || events
            || loop_start
            || var_usage
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

                                #ifndef DEF_s_HelpersData
                                #define DEF_s_HelpersData
struct s_HelpersData
{
    s_Target target;
    fu_STR id;
    short mask;
    int local_of;
    int kills;
    int locals_start;
    s_Type ret_expect;
    s_Type ret_actual;
    fu_VEC<s_SolvedNode> returns;
    fu_VEC<int> vars;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || id
            || mask
            || local_of
            || kills
            || locals_start
            || ret_expect
            || ret_actual
            || returns
            || vars
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Map_n2DH
                                #define DEF_s_Map_n2DH
struct s_Map_n2DH
{
    fu_VEC<fu_STR> keys;
    fu_VEC<s_Target> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TypeParam
                                #define DEF_s_TypeParam
struct s_TypeParam
{
    s_Type matched;
    s_Type consumed;
    explicit operator bool() const noexcept
    {
        return false
            || matched
            || consumed
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Map_Lvtq
                                #define DEF_s_Map_Lvtq
struct s_Map_Lvtq
{
    fu_VEC<fu_STR> keys;
    fu_VEC<s_TypeParam> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Intlit
                                #define DEF_s_Intlit
struct s_Intlit
{
    fu::u8 base;
    fu::u8 minsize_i;
    fu::u8 minsize_u;
    fu::u8 minsize_f;
    bool sIgned;
    bool uNsigned;
    bool negative;
    uint64_t absval;
    fu_STR error;
    explicit operator bool() const noexcept
    {
        return false
            || base
            || minsize_i
            || minsize_u
            || minsize_f
            || sIgned
            || uNsigned
            || negative
            || absval
            || error
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEF_N_FnRecursion
                                #define DEF_N_FnRecursion
inline constexpr int N_FnRecursion = (1 << 0);
                                #endif

                                #ifndef DEF_N_FnResolve
                                #define DEF_N_FnResolve
inline constexpr int N_FnResolve = (1 << 1);
                                #endif

                                #ifndef DEF_N_FnReopen
                                #define DEF_N_FnReopen
inline constexpr int N_FnReopen = (1 << 2);
                                #endif

                                #ifndef DEF_N_TypeRecursion
                                #define DEF_N_TypeRecursion
inline constexpr int N_TypeRecursion = (1 << 3);
                                #endif

                                #ifndef DEF_N_TypeResolve
                                #define DEF_N_TypeResolve
inline constexpr int N_TypeResolve = (1 << 4);
                                #endif

                                #ifndef DEF_N_TypeReopen
                                #define DEF_N_TypeReopen
inline constexpr int N_TypeReopen = (1 << 5);
                                #endif

                                #ifndef DEF_N_DeadCode
                                #define DEF_N_DeadCode
inline constexpr int N_DeadCode = (1 << 6);
                                #endif

                                #ifndef DEF_N_DeadCall
                                #define DEF_N_DeadCall
inline constexpr int N_DeadCall = (1 << 7);
                                #endif

                                #ifndef DEF_N_DeadLet
                                #define DEF_N_DeadLet
inline constexpr int N_DeadLet = (1 << 8);
                                #endif

                                #ifndef DEF_N_DeadIfCond
                                #define DEF_N_DeadIfCond
inline constexpr int N_DeadIfCond = (1 << 9);
                                #endif

                                #ifndef DEF_N_DeadIfCons
                                #define DEF_N_DeadIfCons
inline constexpr int N_DeadIfCons = (1 << 10);
                                #endif

                                #ifndef DEF_N_DeadArrlit
                                #define DEF_N_DeadArrlit
inline constexpr int N_DeadArrlit = (1 << 11);
                                #endif

                                #ifndef DEF_N_DeadLoopInit
                                #define DEF_N_DeadLoopInit
inline constexpr int N_DeadLoopInit = (1 << 12);
                                #endif

                                #ifndef DEF_N_NonTrivAutoCopy
                                #define DEF_N_NonTrivAutoCopy
inline constexpr int N_NonTrivAutoCopy = (1 << 13);
                                #endif

                                #ifndef DEF_N_RelaxRespec
                                #define DEF_N_RelaxRespec
inline constexpr int N_RelaxRespec = (1 << 14);
                                #endif

                                #ifndef DEF_N_BckVarCopy
                                #define DEF_N_BckVarCopy
inline constexpr int N_BckVarCopy = (1 << 15);
                                #endif

                                #ifndef DEF_N_BckArgCopy
                                #define DEF_N_BckArgCopy
inline constexpr int N_BckArgCopy = (1 << 16);
                                #endif

                                #ifndef DEF_N_BckExplicitLTR
                                #define DEF_N_BckExplicitLTR
inline constexpr int N_BckExplicitLTR = (1 << 17);
                                #endif

static const bool OPTI_autoshadow = true;

static const bool OPTI_dedupe_vars = true;

static const bool OPTI_flatten_blocks = true;

static const bool USE_nontriv_autocopy = true;

static const bool SELF_TEST = true;

static void push(const s_HelpersData& data, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data)
{
    _helpers += s_Helpers { _helpers_data.size() };
    _helpers_data += data;
}

extern const s_Type t_byte;

                                #ifndef DEFt_grow_if_oob_ZXR1
                                #define DEFt_grow_if_oob_ZXR1
inline s_Extended& grow_if_oob_ZXR1(fu_VEC<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static s_Extended& EXT_mut(const s_Target& target_6, const s_Module& module, s_Scope& _scope)
{
    if (!(target_6.modid == module.modid))
        fu_ASSERT();

    return grow_if_oob_ZXR1(_scope.extended, (target_6.index - 1));
}

static s_SolvedNode SolvedNode_create(const s_SolvedNodeData& data, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    const s_Target& nodeown_1 = _current_fn_or_type;
    fu_VEC<s_SolvedNodeData>& nodes_1 = EXT_mut(nodeown_1, module, _scope).nodes;
    const int nodeidx_3 = nodes_1.size();
    nodes_1 += data;
    return s_SolvedNode { s_Target(nodeown_1), int(nodeidx_3) };
}

static s_SolvedNode SolvedNode(const fu_STR& kind_3, const s_Type& type_3, const int flags_4, const fu_STR& value_2, const fu_VEC<s_SolvedNode>& items_5, const s_Target& target_6, const int helpers_2, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    s_SolvedNodeData data = s_SolvedNodeData { fu_STR(kind_3), int(helpers_2), int(flags_4), fu_STR(value_2), fu_VEC<s_SolvedNode>(items_5), s_TokenIdx(_here), s_Type(type_3), s_Target(target_6) };
    return SolvedNode_create(data, _current_fn_or_type, module, _scope);
}

static void _Scope_import__forceCopy(const int modid_5, const bool pRivate, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid_5].out.solve.scope;
    _scope.items += fu::get_view(s.items, 0, (pRivate ? s.items.size() : int(s.pub_count)));
}

extern const s_Type t_void;

static int unorderedClassify(fu::view<char> kind_3)
{
    if (kind_3 == "fn"_fu)
        return 1;

    if (kind_3 == "struct"_fu)
        return 10;

    return 0;
}

                                #ifndef DEFt_unless_oob_cxd2
                                #define DEFt_unless_oob_cxd2
inline const s_Extended& unless_oob_cxd2(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT(const s_Target& target_6, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    if (target_6.modid == module.modid)
        return unless_oob_cxd2(_scope.extended, (target_6.index - 1));

    return (target_6.modid >= 0) ? unless_oob_cxd2(ctx.modules[target_6.modid].out.solve.scope.extended, (target_6.index - 1)) : (*(const s_Extended*)fu::NIL);
}

static const s_SolvedNodeData& SolvedNodeData(const s_SolvedNode& nid, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return nid.nodeown ? EXT(nid.nodeown, module, _scope, ctx).nodes[nid.nodeidx] : (*(const s_SolvedNodeData*)fu::NIL);
}

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_HM_Function
                                #define DEF_HM_Function
inline constexpr short HM_Function = (short(1) << short(3));
                                #endif

                                #ifndef DEF_HM_Struct
                                #define DEF_HM_Struct
inline constexpr short HM_Struct = (short(1) << short(5));
                                #endif

static bool isFnOrType(const s_Helpers& h, fu::view<s_HelpersData> _helpers_data)
{
    return !!(_helpers_data[h.index].mask & (HM_Function | HM_Struct));
}

static fu_STR human(const fu_STR& id_2, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Target t = tryParseClosureID(id_2, MODID(module));
    if (!t)
        return fu_STR(id_2);

    const s_Overload& o = GET(t, _scope, module, ctx, _here, _helpers, _helpers_data);
    return (GET(s_Target { int(module.modid), int(o.local_of) }, _scope, module, ctx, _here, _helpers, _helpers_data).name + ":"_fu) + o.name;
}

static fu_STR qWHAT(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return (qKW(o.kind) + " "_fu) + qID(human(o.name, module, _scope, ctx, _here, _helpers, _helpers_data));
}

static const s_Overload& GET(const s_Target& target_6, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (target_6.modid < 0)
        return _scope.extended[(-target_6.modid - 1)].locals[(target_6.index - 1)];

    if (target_6.modid == module.modid)
        return _scope.overloads[(target_6.index - 1)];

    const s_Overload& o = ctx.modules[target_6.modid].out.solve.scope.overloads[(target_6.index - 1)];
    if (o.local_of)
        fail((("Working with locals from other modules would "_fu + "prevent bucketing overloads within other overloads: "_fu) + qWHAT(o, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

    return o;
}

[[noreturn]] static fu::never fail(fu_STR&& reason, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!reason)
        reason = (("Unexpected `"_fu + _token(_here, ctx).value) + "`."_fu);

    int callstack = 0;
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (isFnOrType(h, _helpers_data))
        {
            if (!callstack++)
                reason += "\n\n        Solving "_fu;
            else
                reason += "\n                "_fu;

            const s_Overload& o = GET(_helpers_data[h.index].target, _scope, module, ctx, _here, _helpers, _helpers_data);
            reason += qWHAT(o, module, _scope, ctx, _here, _helpers, _helpers_data);
        };
    };
    FAIL(fu_STR(reason), _here, ctx);
}

static void makeNote(const int note, const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, int& _notes)
{
    if (note & options.break_notes)
        fail((x7E_OZkl("`break_notes`: Unwanted event: `"_fu, fu::i64dec(note)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    _notes |= note;
}

                                #ifndef DEF_SS_LAZY
                                #define DEF_SS_LAZY
inline constexpr unsigned SS_LAZY = (0x1u << 0u);
                                #endif

static s_Template createTemplate(const s_Node& node_1, const s_CurrentFn& _current_fn, const s_Scope& _scope, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss)
{
    return s_Template { s_Node(node_1), fu_VEC<int>((!_current_fn ? _scope.imports : (*(const fu_VEC<int>*)fu::NIL))), (_current_fn ? Scope_snap(_scope, _helpers) : s_ScopeMemo{}), s_ScopeSkipMemos((_current_fn ? _ss : (*(const s_ScopeSkipMemos*)fu::NIL))) };
}

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline constexpr int F_SHADOW = (1 << 23);
                                #endif

                                #ifndef DEF_F_CONVERSION
                                #define DEF_F_CONVERSION
inline constexpr int F_CONVERSION = (1 << 14);
                                #endif

static s_SolvedNode createFnDef(const s_Type& type_3, const s_Target& target_6, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode("fndef"_fu, type_3, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target_6, 0, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode uPrepFn_A(const s_Node& node_1, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Target& _current_fn_or_type)
{
    const fu_STR& id_2 = node_1.value;
    const int local_of_2 = SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index;
    const s_Target target_6 = Scope_create(_scope, "fn"_fu, "__prep__"_fu, (*(const s_Type*)fu::NIL), node_1.flags, s_SolvedNode{}, int(local_of_2), SS_LAZY, bool{}, module);
    s_Extended& ext = EXT_mut(target_6, module, _scope);
    ext.tEmplate = createTemplate(node_1, _current_fn, _scope, _helpers, _ss);
    ext.min = int(0x7fffffffu);
    ext.max = 0;
    Scope_set(_scope, id_2, target_6, !!(node_1.flags & F_SHADOW));
    if (node_1.flags & F_CONVERSION)
        _scope.converts.push(target_6);

    return createFnDef(X_addrofTarget(target_6), target_6, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createEmpty(const fu_STR& kind_3, const s_Type& type_3, const s_Target& target_6, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode(kind_3, type_3, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target_6, 0, _here, _current_fn_or_type, module, _scope);
}

static s_Overload& GET_mut(const s_Target& target_6, s_Scope& _scope, const s_Module& module)
{
    if (target_6.modid < 0)
        return _scope.extended.mutref((-target_6.modid - 1)).locals.mutref((target_6.index - 1));

    if (!((target_6.index > 0) && (target_6.modid == MODID(module))))
        fu_ASSERT();

    return _scope.overloads.mutref((target_6.index - 1));
}

                                #ifndef DEF_SS_DID_START
                                #define DEF_SS_DID_START
inline constexpr unsigned SS_DID_START = (0x1u << 1u);
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline constexpr int LET_TYPE = 0;
                                #endif

static s_Type T(const int i, const s_Node& node_1, const s_Map_Lvtq& typeParams, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    s_SolvedNode _0 {};
    /*MOV*/ s_Type danglefix { (_0 = evalTypeAnnot(node_1.items[i], typeParams, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string), SolvedNodeData(s_SolvedNode(_0), module, _scope, ctx)).type };
    return /*NRVO*/ danglefix;
}

static s_SolvedNode solved(const s_Node& node_1, const s_Type& type_3, const fu_VEC<s_SolvedNode>& items_5, const s_Target& target_6, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode(node_1.kind, type_3, node_1.flags, node_1.value, items_5, target_6, 0, _here, _current_fn_or_type, module, _scope);
}

                                #ifndef DEFt_if_last_B9fx
                                #define DEFt_if_last_B9fx
inline const s_SolvedNode& if_last_B9fx(fu::view<s_SolvedNode> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

extern const s_Type t_never;

                                #ifndef DEFt_last_B9fx
                                #define DEFt_last_B9fx
inline s_SolvedNode& last_B9fx(fu_VEC<s_SolvedNode>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode createBlock(const s_Type& type_3, /*MOV*/ fu_VEC<s_SolvedNode>&& items_5, const s_Target& label, const s_Helpers& h, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type)
{
    for (int x = 0; x < items_5.size(); x++)
    {
        if (!SolvedNodeData(items_5[x], module, _scope, ctx).kind)
            fu::fail(x7E_OZkl("createBlock.before-flatten.items: no kind on item #"_fu, fu::i64dec(x)));

    };
    if (_here && (_helpers.size() > 10000001))
        fu::fail(x7E_OZkl("woot: "_fu, fu::i64dec(_helpers.size())));

    if (OPTI_flatten_blocks && items_5.size())
    {
        for (; ; )
        {
            const s_SolvedNode& tail = last_B9fx(items_5);
            if ((SolvedNodeData(tail, module, _scope, ctx).kind != "block"_fu) || SolvedNodeData(tail, module, _scope, ctx).target)
                break;

            fu::view<s_SolvedNode> unwrap = SolvedNodeData(tail, module, _scope, ctx).items;
            items_5.pop();
            items_5 += unwrap;
        };
    };
    if (items_5.size())
    {
        bool ok = (!label && !(h ? _helpers_data[h.index].vars : (*(const fu_VEC<int>*)fu::NIL)));
        for (int i = 0; i < (items_5.size() - 1); i++)
        {
            if (SolvedNodeData(items_5[i], module, _scope, ctx).kind != "empty"_fu)
            {
                ok = false;
                break;
            };
        };
        if (ok)
            return s_SolvedNode(last_B9fx(items_5));

    };
    /*MOV*/ const s_SolvedNode block = SolvedNode("block"_fu, type_3, 0, (*(const fu_STR*)fu::NIL), items_5, label, h.index, _here, _current_fn_or_type, module, _scope);
    return /*NRVO*/ block;
}

                                #ifndef DEF_F_COMPOUND_ID
                                #define DEF_F_COMPOUND_ID
inline constexpr int F_COMPOUND_ID = (1 << 6);
                                #endif

                                #ifndef DEFt_find_WqUX
                                #define DEFt_find_WqUX
inline int find_WqUX(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static const s_Module& findModule(const fu_STR& fuzimport, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    fu_STR fname_1 = resolveFile_x(fuzimport, ctx);
    fu::view<s_Module> modules_1 = ctx.modules;
    for (int i = 1; i < modules_1.size(); i++)
    {
        const s_Module& m = modules_1[i];
        if (m.fname == fname_1)
            return m;

    };
    fail(("Cannot locate: "_fu + fname_1), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Scope& dequalify_andGetScope(fu_STR& id_2, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    const int split_4 = find_WqUX(id_2, '\t');
    if (!((split_4 >= 0)))
        fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    fu_STR fname_1 = fu::slice(id_2, 0, split_4);
    id_2 = fu::slice(id_2, (split_4 + 1));
    const s_Module& other = findModule(fname_1, ctx, _here, _helpers, _helpers_data, _scope, module);
    if (other.modid != module.modid)
        return other.out.solve.scope;

    fail((("Qualified "_fu + qBAD(id_2)) + ":: access current module."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEFt_each_676R
                                #define DEFt_each_676R
inline void each_676R(fu::view<s_Target> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, int& count, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_5.size(), items_5.size() };
    int i0 = start_1;
    for (int i = 0; i < (scope_skip_1.size() + 1); i++)
    {
        const s_ScopeSkip& ss = ((i < scope_skip_1.size()) ? scope_skip_1[i] : END_DUMMY);
        if ((ss.end <= i0))
            continue;

        const int i1 = ss.start;
        for (int i_1 = i0; i_1 < i1; i_1++)
        {
            const s_Target& u = items_5[i_1];
            if (u)
                count++;
            else
                fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        i0 = ss.end;
    };
}
                                #endif

static int countUsings(const bool local_scope, const s_Scope& _scope, const s_Scope& misc_scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Module& module)
{
    const s_Scope& scope_1 = (local_scope ? _scope : misc_scope);
    /*MOV*/ int count = 0;
    if (scope_1.usings)
        each_676R(scope_1.usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, 0, count, _here, ctx, _helpers, _helpers_data, _scope, module);

    return /*NRVO*/ count;
}

                                #ifndef DEF_F_NAMED_ARGS
                                #define DEF_F_NAMED_ARGS
inline constexpr int F_NAMED_ARGS = (1 << 24);
                                #endif

                                #ifndef DEF_F_OPT_ARG
                                #define DEF_F_OPT_ARG
inline constexpr int F_OPT_ARG = (1 << 15);
                                #endif

                                #ifndef DEFt_each_iySd
                                #define DEFt_each_iySd
inline void each_iySd(fu::view<int> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, s_BitSet& seen)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_5.size(), items_5.size() };
    int i0 = start_1;
    for (int i = 0; i < (scope_skip_1.size() + 1); i++)
    {
        const s_ScopeSkip& ss = ((i < scope_skip_1.size()) ? scope_skip_1[i] : END_DUMMY);
        if ((ss.end <= i0))
            continue;

        const int i1 = ss.start;
        for (int i_1 = i0; i_1 < i1; i_1++)
        {
            const int modid_6 = items_5[i_1];
            add(seen, modid_6);
        };
        i0 = ss.end;
    };
}
                                #endif

static void visitTypeImports(const s_Type& type_3, const s_Module& module, const s_Context& ctx, s_BitSet& seen, const s_Scope& _scope, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id_2, fu_VEC<s_Target>& extra_items_1)
{
    fu::view<int> visit = lookupTypeImports(type_3, module, ctx);
    for (int i = -1; i < visit.size(); i++)
    {
        const int modid_5 = ((i >= 0) ? visit[i] : type_3.vtype.modid);
        if (has(seen, modid_5))
            continue;

        if (!seen)
        {
            add(seen, 0);
            add(seen, module.modid);
            each_iySd(_scope.imports, (local_scope ? _ss.imports : fu::view<s_ScopeSkip>{}), 0, 0, seen);
        };
        if (!add_once(seen, modid_5))
            continue;

        fu::view<s_ScopeItem> items_5 = ctx.modules[modid_5].out.solve.scope.items;
        for (int i_1 = 0; i_1 < items_5.size(); i_1++)
        {
            if (items_5[i_1].id == id_2)
                extra_items_1.push(target(items_5[i_1]));

        };
    };
}

                                #ifndef DEFt_each_JmfV
                                #define DEFt_each_JmfV
inline void each_JmfV(fu::view<s_Target> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_BitSet& seen, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id_2, fu_VEC<s_Target>& extra_items_1)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_5.size(), items_5.size() };
    int i0 = start_1;
    for (int i = 0; i < (scope_skip_1.size() + 1); i++)
    {
        const s_ScopeSkip& ss = ((i < scope_skip_1.size()) ? scope_skip_1[i] : END_DUMMY);
        if ((ss.end <= i0))
            continue;

        const int i1 = ss.start;
        for (int i_1 = i0; i_1 < i1; i_1++)
        {
            const s_Target& u = items_5[i_1];
            visitTypeImports(GET(u, _scope, module, ctx, _here, _helpers, _helpers_data).type, module, ctx, seen, _scope, local_scope, _ss, id_2, extra_items_1);
        };
        i0 = ss.end;
    };
}
                                #endif

                                #ifndef DEF_F_ACCESS
                                #define DEF_F_ACCESS
inline constexpr int F_ACCESS = (1 << 4);
                                #endif

                                #ifndef DEF_F_METHOD
                                #define DEF_F_METHOD
inline constexpr int F_METHOD = (1 << 0);
                                #endif

                                #ifndef DEF_F_OPERATOR
                                #define DEF_F_OPERATOR
inline constexpr int F_OPERATOR = (1 << 21);
                                #endif

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline constexpr int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline constexpr unsigned SS_FINALIZED = (0x1u << 3u);
                                #endif

                                #ifndef DEF_SS_DIRTY
                                #define DEF_SS_DIRTY
inline constexpr unsigned SS_DIRTY = (0x1u << 2u);
                                #endif

                                #ifndef DEFt_last_ntxL
                                #define DEFt_last_ntxL
inline const s_Target& last_ntxL(fu::view<s_Target> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEF_F_SPREAD_INLINE
                                #define DEF_F_SPREAD_INLINE
inline constexpr int F_SPREAD_INLINE = (1 << 25);
                                #endif

                                #ifndef DEF_F_INLINE
                                #define DEF_F_INLINE
inline constexpr int F_INLINE = (1 << 29);
                                #endif

                                #ifndef DEFt_unpackAddrOfFn_qU1U
                                #define DEFt_unpackAddrOfFn_qU1U
inline void unpackAddrOfFn_qU1U(fu::view<char> canon_1, int, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Template& template_1, int& parent_idx)
{
    int i = 0;
    while (i < canon_1.size())
    {
        if (!(canon_1[i++] == '@'))
            fu::fail((("unpackAddrOfFn: bad canon [1]: `"_fu + canon_1) + "`."_fu));

        const int modid_5 = parse10i32(i, canon_1);
        if (!(canon_1[i++] == ':'))
            fu::fail((("unpackAddrOfFn: bad canon [2]: `"_fu + canon_1) + "`."_fu));

        const int index_3 = parse10i32(i, canon_1);
        const s_Target target_6 = s_Target { int(modid_5), int(index_3) };
        if ((target_6.modid < 0) || (target_6.modid == module.modid))
        {
            const s_Overload& overload = GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data);
            if (overload.flags & F_SPREAD_INLINE)
                template_1.node.flags |= F_INLINE;

            const int local_of_2 = overload.local_of;
            if (parent_idx < local_of_2)
                parent_idx = local_of_2;

        };
    };
}
                                #endif

                                #ifndef DEFt_ref_OTZq
                                #define DEFt_ref_OTZq
inline s_Target& ref_OTZq(int, const fu_STR& item, int, s_Map_n2DH& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, item);
                _.vals.insert(i, s_Target{});
            };
            return _.vals.mutref(i);
        };
    };
    _.keys.push(item);
    _.vals.push(s_Target{});
    return _.vals.mutref((_.vals.size() - 1));
}
                                #endif

                                #ifndef DEFt_ref_u1Xz
                                #define DEFt_ref_u1Xz
inline s_Target& ref_u1Xz(s_Map_n2DH& _, const fu_STR& key)
{
    return ref_OTZq(0, key, 0, _);
}
                                #endif

static bool is_SPECFAIL(const s_Target& target_6)
{
    return target_6.modid == 2147483647;
}

inline static fu_STR id_jaUg(const s_Target& target_7, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return (is_SPECFAIL(target_7) ? "SPEC_FAIL"_fu : (("`"_fu + GET(target_7, _scope, module, ctx, _here, _helpers, _helpers_data).name) + "`"_fu));
}

inline static fu_STR id_a4BR(const s_Target& target_7, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return (is_SPECFAIL(target_7) ? "SPEC_FAIL"_fu : (("`"_fu + GET(target_7, _scope, module, ctx, _here, _helpers, _helpers_data).name) + "`"_fu));
}

static void setSpec(const fu_STR& mangle_1, const s_Target& target_6, const bool nx, const bool isInline, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, s_Map_n2DH& _specs)
{
    if (isInline)
        fail("inline.setSpec"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    s_Target& t = ref_u1Xz(_specs, mangle_1);
    if (!((!t && nx) || (is_SPECFAIL(t) && !nx)))
        fail(((((((x7E_OZkl((x7E_OZkl("About to screw up royally, replacing spec: "_fu, fu::i64dec(t.index)) + " with "_fu), fu::i64dec(target_6.index)) + ", mangle: "_fu) + mangle_1) + ", that's: "_fu) + id_jaUg(t, _scope, module, ctx, _here, _helpers, _helpers_data)) + " becoming "_fu) + id_a4BR(target_6, _scope, module, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

    t = target_6;
}

                                #ifndef DEFt_last_CUmR
                                #define DEFt_last_CUmR
inline s_Helpers& last_CUmR(fu_VEC<s_Helpers>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEFt_if_last_usdD
                                #define DEFt_if_last_usdD
inline const s_ScopeSkip& if_last_usdD(fu::view<s_ScopeSkip> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_ScopeSkip*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_last_usdD
                                #define DEFt_last_usdD
inline s_ScopeSkip& last_usdD(fu_VEC<s_ScopeSkip>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static void ScopeSkip_push(fu_VEC<s_ScopeSkip>& scope_skip_1, const int start_1, const int end_1, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!((start_1 <= end_1)))
        fail("ScopeSkip_push: bad args."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (end_1 == start_1)
        return;

    const s_ScopeSkip& last_1 = if_last_usdD(scope_skip_1);
    if (!((last_1.end <= start_1)))
        fail("ScopeSkip_push: last.end > start."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (scope_skip_1 && (last_1.end == start_1))
        last_usdD(scope_skip_1).end = end_1;
    else
        scope_skip_1 += s_ScopeSkip { int(start_1), int(end_1) };

}

static void Scope_import(const int modid_5, const bool pRivate, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Module& module)
{

    {
        fu::view<int> items_5 = _scope.imports;
        fu::view<s_ScopeSkip> scope_skip_1 = _ss.imports;
        const int start_1 = 0;
        const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_5.size(), items_5.size() };
        int i0 = start_1;
        for (int i = 0; i < (scope_skip_1.size() + 1); i++)
        {
            const s_ScopeSkip& ss = ((i < scope_skip_1.size()) ? scope_skip_1[i] : END_DUMMY);
            if ((ss.end <= i0))
                continue;

            const int i1 = ss.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
            {
                const int import = items_5[i_1];
                if (import == modid_5)
                    return;

            };
            i0 = ss.end;
        };
    };
    if (!(modid_5))
        fail("Attempting to import modid-0."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    _scope.imports += modid_5;
    _Scope_import__forceCopy(modid_5, pRivate, ctx, _scope);
}

static void ScopeSkip_setup(const s_Template& template_1, const s_ScopeMemo& scope0, const bool isInline, const s_ScopeMemo& _root_scope, s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    if (_root_scope)
    {
        const s_ScopeMemo& start_1 = (template_1.scope_memo ? template_1.scope_memo : _root_scope);
        _ss = template_1.scope_skip;
        ScopeSkip_push(_ss.items, start_1.items_len, scope0.items_len, _here, ctx, _helpers, _helpers_data, _scope, module);
        if (!isInline)
            ScopeSkip_push(_ss.declash, start_1.items_len, scope0.items_len, _here, ctx, _helpers, _helpers_data, _scope, module);

        ScopeSkip_push(_ss.imports, start_1.imports_len, scope0.imports_len, _here, ctx, _helpers, _helpers_data, _scope, module);
        ScopeSkip_push(_ss.usings, start_1.usings_len, scope0.usings_len, _here, ctx, _helpers, _helpers_data, _scope, module);
        ScopeSkip_push(_ss.converts, start_1.converts_len, scope0.converts_len, _here, ctx, _helpers, _helpers_data, _scope, module);
        ScopeSkip_push(_ss.helpers, start_1.helpers_len, scope0.helpers_len, _here, ctx, _helpers, _helpers_data, _scope, module);
    };
    for (int i = 0; i < template_1.imports.size(); i++)
        Scope_import(template_1.imports[i], (i == 0), _scope, _ss, _here, ctx, _helpers, _helpers_data, module);

}

extern const int FN_ARGS_BACK;

                                #ifndef DEFt_has_zs1w
                                #define DEFt_has_zs1w
inline bool has_zs1w(fu::view<int> a, const int b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static bool couldRetype(const s_SolvedNode& node_1, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return (SolvedNodeData(node_1, module, _scope, ctx).kind == "int"_fu) || (SolvedNodeData(node_1, module, _scope, ctx).kind == "real"_fu) || (SolvedNodeData(node_1, module, _scope, ctx).kind == "definit"_fu);
}

                                #ifndef DEFt_ref_8j3G
                                #define DEFt_ref_8j3G
inline s_TypeParam& ref_8j3G(int, const fu_STR& item, int, s_Map_Lvtq& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, item);
                _.vals.insert(i, (*(const s_TypeParam*)fu::NIL));
            };
            return _.vals.mutref(i);
        };
    };
    _.keys.push(item);
    _.vals.push((*(const s_TypeParam*)fu::NIL));
    return _.vals.mutref((_.vals.size() - 1));
}
                                #endif

                                #ifndef DEFt_ref_Qfo1
                                #define DEFt_ref_Qfo1
inline s_TypeParam& ref_Qfo1(s_Map_Lvtq& _, const fu_STR& key)
{
    return ref_8j3G(0, key, 0, _);
}
                                #endif

static const s_Type& Scope_lookupType(fu_STR&& id_2, const int flags_4, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    int scope_iterator {};
    s_Target overloadIdx {};
    bool shadows {};
    const int qualified = (flags_4 & F_COMPOUND_ID);
    const s_Scope& scope_1 = (qualified ? dequalify_andGetScope(id_2, _here, ctx, _helpers, _helpers_data, _scope, module) : _scope);
    while ((overloadIdx = search(scope_1.items, id_2, scope_iterator, (!qualified ? _ss.items : fu::view<s_ScopeSkip>{}), shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
    {
        const s_Overload& maybe = GET(overloadIdx, _scope, module, ctx, _here, _helpers, _helpers_data);
        if (maybe.kind == "type"_fu)
            return maybe.type ? maybe.type : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    fail((("No type `"_fu + id_2) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Type& Scope_lookupType(const s_Node& annot, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    return Scope_lookupType(fu_STR(annot.value), annot.flags, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
}

extern const s_Type t_f32;

static bool want(const s_Type& t, const s_Type& type_3)
{
    return type_3.vtype.canon == t.vtype.canon;
}

extern const s_Type t_f64;

extern const s_Type t_i32;

extern const s_Type t_i64;

extern const s_Type t_i16;

extern const s_Type t_i8;

extern const s_Type t_u32;

extern const s_Type t_u64;

extern const s_Type t_u16;

extern const s_Type t_u8;

static const s_Type& solveInt(fu::view<char> v, const s_Type& type_3, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    s_Intlit parse_4 = Intlit(v);
    if (parse_4.error)
        fail(fu_STR(parse_4.error), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (type_3)
    {
        if (!parse_4.uNsigned)
        {
            if (want(t_f32, type_3) && (parse_4.minsize_f <= fu::u8(32u)))
                return t_f32;

            if (want(t_f64, type_3) && (parse_4.minsize_f <= fu::u8(64u)))
                return t_f64;

            if (want(t_i32, type_3) && (parse_4.minsize_i <= fu::u8(32u)))
                return t_i32;

            if (want(t_i64, type_3) && (parse_4.minsize_i <= fu::u8(64u)))
                return t_i64;

            if (want(t_i16, type_3) && (parse_4.minsize_i <= fu::u8(16u)))
                return t_i16;

            if (want(t_i8, type_3) && (parse_4.minsize_i <= fu::u8(8u)))
                return t_i8;

        };
        if (!parse_4.sIgned)
        {
            if (want(t_u32, type_3) && (parse_4.minsize_u <= fu::u8(32u)))
                return t_u32;

            if (want(t_u64, type_3) && (parse_4.minsize_u <= fu::u8(64u)))
                return t_u64;

            if (want(t_u16, type_3) && (parse_4.minsize_u <= fu::u8(16u)))
                return t_u16;

            if (want(t_u8, type_3) && (parse_4.minsize_u <= fu::u8(8u)))
                return t_u8;

        };
    };
    if (parse_4.uNsigned)
    {
        if ((parse_4.minsize_u <= fu::u8(32u)))
            return t_u32;

        if ((parse_4.minsize_u <= fu::u8(64u)))
            return t_u64;

    }
    else
    {
        if ((parse_4.minsize_i <= fu::u8(32u)))
            return t_i32;

        if ((parse_4.minsize_i <= fu::u8(64u)))
            return t_i64;

    };
    fail("Bad int literal."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Type& solveNum(const fu_STR& v, const s_Type& type_3)
{
    if (v)
    {
    };
    if (type_3.vtype.canon == t_f32.vtype.canon)
        return t_f32;

    return t_f64;
}

extern const s_Type t_zeroes;

static s_Type trySolveDefinit(const s_Type& type_3)
{
    if (!type_3)
        return s_Type(t_zeroes);

    return type_trySuper(t_zeroes, type_3);
}

static s_Type tryRetyping(const s_SolvedNode& node_1, const s_Type& expect, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (is_arithmetic(SolvedNodeData(node_1, module, _scope, ctx).type) && is_arithmetic(expect))
    {
        if (SolvedNodeData(node_1, module, _scope, ctx).kind == "int"_fu)
            return s_Type(solveInt(SolvedNodeData(node_1, module, _scope, ctx).value, expect, _here, ctx, _helpers, _helpers_data, _scope, module));

        if (SolvedNodeData(node_1, module, _scope, ctx).kind == "real"_fu)
            return s_Type(solveNum(SolvedNodeData(node_1, module, _scope, ctx).value, expect));

    };
    if (SolvedNodeData(node_1, module, _scope, ctx).kind == "definit"_fu)
        return trySolveDefinit(expect);

    return s_Type{};
}

static bool trySolveTypeParams(const s_Node& node_1, s_Type&& type_3, s_Map_Lvtq& typeParams, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    if (node_1.kind == "call"_fu)
    {
        fu::view<s_Node> items_5 = node_1.items;
        if (items_5.size())
        {
            if (items_5.size() == 1)
            {
                s_Type t = ((node_1.value == "&"_fu) ? tryClear_ref(type_3, _here, ctx) : ((node_1.value == "&mut"_fu) ? tryClear_mutref(type_3, _here, ctx) : ((node_1.value == "[]"_fu) ? tryClear_array(type_3) : fail("TODO trySolveTypeParams unary call"_fu, _here, ctx, _helpers, _helpers_data, _scope, module))));
                if (!t)
                    return false;

                const s_Node* _0;
                return trySolveTypeParams((*(_0 = &(items_5[0])) ? *_0 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), s_Type(t), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
            };
        }
        else
            return isAssignable(Scope_lookupType(node_1, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), type_3);

    }
    else if (node_1.kind == "typeparam"_fu)
    {
        const fu_STR& id_2 = (node_1.value ? node_1.value : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
        s_TypeParam& _param = ref_Qfo1(typeParams, id_2);
        if (_param)
        {
            s_Type uNion = type_trySuper(_param.matched, type_3);
            if (!uNion)
                return false;

            type_3 = uNion;
        };
        _param.matched = relax_typeParam(s_Type(type_3));
        return true;
    }
    else if ((node_1.kind == "arrlit"_fu) && (node_1.items.size() == 1))
    {
        s_Type t = tryClear_sliceable(type_3);
        const s_Node* _1;
        return t && trySolveTypeParams((*(_1 = &(node_1.items[0])) ? *_1 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), s_Type(t), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
    };
    fail("TODO trySolveTypeParams fallthrough"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

inline static fu_STR mangleArguments_gHql(fu::view<s_Type> args_1, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args_1.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(args_1[i], "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEFt_bfind_Bd7d
                                #define DEFt_bfind_Bd7d
inline int bfind_Bd7d(fu::view<fu_STR> keys_2, const fu_STR& item)
{
    for (/*MOV*/ int i = 0; i < keys_2.size(); i++)
    {
        if ((keys_2[i] >= item))
        {
            if (keys_2[i] != item)
                return -1;

            return /*NRVO*/ i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_get_1XRG
                                #define DEFt_get_1XRG
inline const s_Target& get_1XRG(const s_Map_n2DH& _, const fu_STR& key)
{
    const int idx = bfind_Bd7d(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const s_Target*)fu::NIL);
}
                                #endif

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEFt_bfind_VtCz
                                #define DEFt_bfind_VtCz
inline int bfind_VtCz(fu::view<fu_STR> keys_2, const fu_STR& item)
{
    for (/*MOV*/ int i = 0; i < keys_2.size(); i++)
    {
        if ((keys_2[i] >= item))
        {
            if (keys_2[i] != item)
                return -1;

            return /*NRVO*/ i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_get_dzEU
                                #define DEFt_get_dzEU
inline const s_TypeParam& get_dzEU(const s_Map_Lvtq& _, const fu_STR& key)
{
    const int idx = bfind_VtCz(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const s_TypeParam*)fu::NIL);
}
                                #endif

static const s_Type& evalTypeParam(const fu_STR& id_2, const s_Map_Lvtq& typeParams, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    const s_Type* _0;
    return *(_0 = &(get_dzEU(typeParams, id_2).matched)) ? *_0 : *(_0 = &(Scope_lookupType(("$"_fu + (id_2 ? id_2 : fail("Falsy type param id."_fu, _here, ctx, _helpers, _helpers_data, _scope, module))), 0, _here, ctx, _helpers, _helpers_data, _scope, module, _ss))) ? *_0 : fail((("No type param `$"_fu + id_2) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static bool type_has(const s_Type& type_3, fu::view<char> tag, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (tag == "trivial"_fu)
        return is_trivial(type_3, module, ctx);

    if (tag == "copy"_fu)
        return is_rx_copy(type_3);

    if (tag == "arithmetic"_fu)
        return is_arithmetic(type_3);

    if (tag == "primitive"_fu)
        return is_primitive(type_3);

    if (tag == "integral"_fu)
        return is_integral(type_3);

    if (tag == "unsigned"_fu)
        return is_unsigned(type_3);

    if (tag == "floating_point"_fu)
        return is_floating_pt(type_3);

    if (tag == "mutref"_fu)
        return is_mutref(type_3, _here, ctx);

    BUG((("Unknown type tag: `"_fu + tag) + "`."_fu), _here, ctx);
}

static bool evalTypePattern(const s_Node& node_1, s_Map_Lvtq& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (node_1.kind == "and"_fu)
    {
        for (int i = 0; i < node_1.items.size(); i++)
        {
            if (!evalTypePattern(node_1.items[i], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string))
                return false;

        };
        return true;
    }
    else if (node_1.kind == "or"_fu)
    {
        for (int i = 0; i < node_1.items.size(); i++)
        {
            if (evalTypePattern(node_1.items[i], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string))
                return true;

        };
        return false;
    }
    else if (node_1.kind == "typeassert"_fu)
    {
        const s_Node* _0;
        const s_Node& left = (*(_0 = &(node_1.items[0])) ? *_0 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
        const s_Node* _1;
        const s_Node& right = (*(_1 = &(node_1.items[1])) ? *_1 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
        if ((left.kind == "typeparam"_fu) && (right.kind == "typetag"_fu))
            return type_has(evalTypeParam(left.value, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (right.value ? right.value : fail("Falsy type tag."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)), module, ctx, _here);
        else
        {
            s_SolvedNode _2 {};
            const s_Type& actual = (_2 = evalTypeAnnot(left, typeParams, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string), SolvedNodeData(s_SolvedNode(_2), module, _scope, ctx)).type;
            /*MOV*/ const bool ok = trySolveTypeParams(right, s_Type(actual), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
            if (ok && (left.kind == "typeparam"_fu))
            {
                const fu_STR& id_2 = left.value;
                s_TypeParam& tp = ref_Qfo1(typeParams, id_2);
                s_Type _3 {};
                tp.consumed = (tp.consumed ? ((_3 = type_tryIntersect(tp.consumed, actual)) ? static_cast<s_Type&&>(_3) : fail("typeassert intersect fail."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) : s_Type(actual));
            };
            return /*NRVO*/ ok;
        };
    }
    else if (node_1.kind == "call"_fu)
    {
        fu::view<char> fn = node_1.value;
        if (node_1.items.size() == 1)
        {
            if (fn == "!"_fu)
                return !evalTypePattern(node_1.items[0], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

        };
    };
    fail((x7E_OZkl((("TODO evalTypePattern fallthrough: "_fu + node_1.kind) + "("_fu), fu::i64dec(node_1.items.size())) + ")"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

static bool isNativeBody(const s_Node& n_body)
{
    return (n_body.kind == "call"_fu) && (n_body.value == "__native"_fu);
}

                                #ifndef DEFt_if_ref_kvCu
                                #define DEFt_if_ref_kvCu
inline void if_ref_kvCu(int, const fu_STR& item, int, int, s_Map_Lvtq& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] == item)
            {
                /*RRET*/ s_TypeParam& tp = _.vals.mutref(i);
                tp.matched = tp.consumed;
            };
            return;
        };
    };
}
                                #endif

                                #ifndef DEFt_if_ref_zZyr
                                #define DEFt_if_ref_zZyr
inline void if_ref_zZyr(s_Map_Lvtq& _, const fu_STR& key, int)
{
    if_ref_kvCu(0, key, 0, 0, _);
}
                                #endif

static const s_Target& checkStruct(const s_Type& type_3, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Target& t = lookupStruct(type_3, module, ctx).target;
    return (GET(t, _scope, module, ctx, _here, _helpers, _helpers_data).type == type_3) ? t : (*(const s_Target*)fu::NIL);
}

                                #ifndef DEFt_pairs_as8f
                                #define DEFt_pairs_as8f
inline void pairs_as8f(const s_Map_Lvtq& _, int, const s_Module& module, const s_Context& ctx, s_Scope& _scope, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, fu_VEC<s_ScopeItem>& res)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        fu::view<char> id_2 = _.keys[i];
        const s_TypeParam& tp = _.vals[i];
        fu_STR name_3 = ("$"_fu + id_2);
        const s_Type& type_3 = tp.matched;
        s_Target _0 {};
        const s_Target target_6 = ((_0 = s_Target((isStruct(type_3) ? checkStruct(type_3, module, ctx, _scope, _here, _helpers, _helpers_data) : (*(const s_Target*)fu::NIL)))) ? _0 : Scope_create(_scope, "type"_fu, ("$"_fu + id_2), type_3, 0, s_SolvedNode{}, 0, 0u, bool{}, module));
        Scope_set(res, name_3, target_6, false);
    };
}
                                #endif

static fu_VEC<s_ScopeItem> intoScopeItems(const s_Map_Lvtq& typeParams, const s_Module& module, const s_Context& ctx, s_Scope& _scope, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    /*MOV*/ fu_VEC<s_ScopeItem> res {};
    pairs_as8f(typeParams, 0, module, ctx, _scope, _here, _helpers, _helpers_data, res);
    return /*NRVO*/ res;
}

static s_SolvedNodeData& MUT(const s_SolvedNode& nid, const s_Module& module, const s_Target& _current_fn_or_type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope)
{
    const s_Target& t = nid.nodeown;
    if ((t.modid != module.modid) || (t.index != _current_fn_or_type.index))
        fail("MUT(nid.nodeown) not current-fn."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    return EXT_mut(t, module, _scope).nodes.mutref(nid.nodeidx);
}

static fu_VEC<s_SolvedNode>& outItems(const s_CurrentFn& _current_fn, const s_Module& module, const s_Target& _current_fn_or_type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope)
{
    return MUT(_current_fn.out, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).items;
}

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline constexpr int F_TEMPLATE = (1 << 28);
                                #endif

                                #ifndef DEF_F_PURE
                                #define DEF_F_PURE
inline constexpr int F_PURE = (1 << 13);
                                #endif

static s_Type tryGetArgSpecType(fu::view<char> id_2, fu::view<s_ScopeItem> extra_items_1, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu_STR param = ("$"_fu + id_2);
    for (int i_1 = 0; i_1 < extra_items_1.size(); i_1++)
    {
        const s_ScopeItem& m = extra_items_1[i_1];
        if (m.id == param)
        {
            const s_Overload& o = GET(target(m), _scope, module, ctx, _here, _helpers, _helpers_data);
            if (!(o.kind == "type"_fu))
                fail((x7E_OZkl((((("tryGetArgSpecType: Not a typeparam: `"_fu + o.kind) + ":"_fu) + param) + "("_fu), fu::i64dec(EXT(target(m), module, _scope, ctx).max)) + ")`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

            return s_Type(o.type);
        };
    };
    return s_Type{};
}

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline constexpr int F_ARG = (1 << 9);
                                #endif

                                #ifndef DEFt_find_05eu
                                #define DEFt_find_05eu
inline int find_05eu(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline constexpr int F_PUB = (1 << 20);
                                #endif

                                #ifndef DEF_F_USING
                                #define DEF_F_USING
inline constexpr int F_USING = (1 << 18);
                                #endif

                                #ifndef DEFt_each_Lby0
                                #define DEFt_each_Lby0
inline void each_Lby0(fu::view<s_ScopeItem> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, const s_ScopeMemo& _root_scope, fu::view<char> id_2, int& autoshadow, int& id_clashes)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_5.size(), items_5.size() };
    int i0 = start_1;
    for (int i = 0; i < (scope_skip_1.size() + 1); i++)
    {
        const s_ScopeSkip& ss = ((i < scope_skip_1.size()) ? scope_skip_1[i] : END_DUMMY);
        if ((ss.end <= i0))
            continue;

        const int i1 = ss.start;
        for (int i_1 = i0; i_1 < i1; i_1++)
        {
            const s_ScopeItem& item = items_5[i_1];
            const bool root_2 = (i_1 <= _root_scope.items_len);
            if (item.id == id_2)
            {
                if (!root_2)
                    autoshadow++;

                id_clashes++;
            };
        };
        i0 = ss.end;
    };
}
                                #endif

static s_Target nested(const int index_3, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    int _0 {};
    return s_Target { ((_0 = -SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index) ? _0 : int(module.modid)), int(index_3) };
}

static const s_Overload& fnd(const int index_3, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return GET(nested(index_3, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _helpers, _helpers_data);
}

static const s_Lifetime& Lifetime_test(const s_Lifetime& lifetime_1, const bool tempsOK, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (SELF_TEST)
    {
        const s_Target& current_fn = SolvedNodeData(_current_fn.out, module, _scope, ctx).target;
        const s_Overload& debug_2 = (current_fn ? GET(current_fn, _scope, module, ctx, _here, _helpers, _helpers_data) : (*(const s_Overload*)fu::NIL));
        if (debug_2)
        {
        };
        if (!lifetime_1.uni0n.size())
            fail("Lifetime_test: no region set."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Region _last {};
        for (int i = 0; i < lifetime_1.uni0n.size(); i++)
        {
            const s_Region& region = lifetime_1.uni0n[i];

            {
                if (!(!i || (region > _last)))
                    fail("Lifetime_test: not a sorted set"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                _last = region;
            };
            if (Region_isArg(region))
                continue;

            if (Region_isTemp(region))
            {
                if (!((i == (lifetime_1.uni0n.size() - 1)) && tempsOK))
                    fail("Lifetime_test: unexpected temporary."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                continue;
            };
            const int index_3 = Region_toLocalIndex(region);
            const s_Overload& local = (index_3 ? fnd(index_3, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data) : (*(const s_Overload*)fu::NIL));
            const int local_of_2 = local.local_of;
            if (local_of_2)
            {
                int frame = current_fn.index;
                while (local_of_2 != frame)
                {
                    if (!((local_of_2 <= frame)))
                        fail((((((("Lifetime_test: `"_fu + local.name) + "` is not a local: `"_fu) + fnd(local_of_2, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data).name) + "` does not contain "_fu) + (frame ? (("`"_fu + fnd(frame, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data).name) + "`"_fu) : "global scope"_fu)) + ((current_fn.index != frame) ? ((", testing from `"_fu + fnd(current_fn.index, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data).name) + "`."_fu) : "."_fu)), _here, ctx, _helpers, _helpers_data, _scope, module);

                    if (!(frame))
                        fail("Lifetime_test: climbed up to root"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                    frame = fnd(frame, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data).local_of;
                };
            };
        };
    };
    return lifetime_1;
}

static s_Lifetime Lifetime_fromBinding(const s_Target& target_6, const int local_of_2, const int flags_4, const s_Type& type_3, const s_Module& module, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_CurrentFn& _current_fn)
{
    if (!((target_6.modid < 0) || (target_6.modid < 0) || (target_6.modid == module.modid)))
        fail("not from this module"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!local_of_2)
        return Lifetime_static();

    const int isArg = (flags_4 & F_ARG);
    const int index_3 = target_6.index;
    const s_Region region = ((isArg && is_ref(type_3)) ? Region_fromArgIndex(index_3) : Region_fromLocalIndex(index_3));
    /*MOV*/ s_Lifetime res { Lifetime_test(s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(region) } } }, bool{}, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data) };
    return /*NRVO*/ res;
}

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline constexpr int F_MUT = (1 << 16);
                                #endif

static s_Target Binding(const fu_STR& id_2, s_Type&& type_3, const int flags_4, bool& shadows, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_TokenIdx& _here)
{
    fu_STR name_3 { id_2 };
    const int local_of_2 = SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index;
    if (_root_scope)
    {
        int autoshadow = 0;
        int id_clashes = 0;
        each_Lby0(_scope.items, _ss.declash, 0, 0, _root_scope, id_2, autoshadow, id_clashes);
        if (id_clashes)
            name_3 += x7E_OZkl("_"_fu, fu::i64dec(id_clashes));

        if (OPTI_autoshadow && local_of_2 && !autoshadow)
            shadows = true;

    };
    /*MOV*/ const s_Target target_6 = Scope_create(_scope, "var"_fu, name_3, (*(const s_Type*)fu::NIL), flags_4, s_SolvedNode{}, int(local_of_2), 0u, true, module);
    s_HelpersData* _0;
    (__extension__ (
    {
        const s_Helpers& h = last_CUmR(_helpers);
        _0 = &(_helpers_data.mutref(h.index));
    (void)0;}), *_0).vars += target_6.index;
    s_Overload& overload = GET_mut(target_6, _scope, module);

    {
        s_Lifetime lifetime_1 = Lifetime_fromBinding(target_6, local_of_2, flags_4, type_3, module, _here, ctx, _helpers, _helpers_data, _scope, _current_fn);
        type_3.lifetime = s_Lifetime{};
        overload.type = ((flags_4 & F_MUT) ? add_mutref(s_Type(type_3), lifetime_1, _here, ctx) : add_ref(s_Type(type_3), lifetime_1, _here, ctx));
    };
    return /*NRVO*/ target_6;
}

static void solveLet(s_SolvedNode& out_1, const fu_STR& id_2, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fn_or_type, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss)
{
    if (SolvedNodeData(out_1, module, _scope, ctx).kind != "let"_fu)
    {
        if (SELF_TEST)
        {
            if (!(is_never(SolvedNodeData(out_1, module, _scope, ctx).type)))
                fail((((("solveLet: results in a `"_fu + SolvedNodeData(out_1, module, _scope, ctx).kind) + ": "_fu) + id_2) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        return;
    };
    if (!(!is_ref(SolvedNodeData(out_1, module, _scope, ctx).type) || SolvedNodeData(out_1, module, _scope, ctx).type.lifetime))
        fail((("solveLet: ref without lifetime: `"_fu + id_2) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    bool shadows = !!(SolvedNodeData(out_1, module, _scope, ctx).flags & F_SHADOW);
    const int isArg = (SolvedNodeData(out_1, module, _scope, ctx).flags & F_ARG);
    if (!(isArg || !(SolvedNodeData(out_1, module, _scope, ctx).flags & F_COMPOUND_ID)))
        fail("`let`: F_COMPOUND_ID on a non-F_ARG."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    const int autocall_1 = ((SolvedNodeData(out_1, module, _scope, ctx).flags & F_COMPOUND_ID) ? find_05eu(id_2, '.') : int{});
    if (!((autocall_1 >= 0)))
        fail("`let`: F_COMPOUND_ID but no `.` in id."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    fu_STR cleanID = (autocall_1 ? fu::slice(id_2, 0, find_05eu(id_2, '.')) : fu_STR{});
    const fu_STR& id_3 = (cleanID ? cleanID : id_2);
    if (!X_unpackAddrOfFnBinding(_scope.items, id_3, SolvedNodeData(out_1, module, _scope, ctx).type, shadows))
    {
        if (OPTI_dedupe_vars && !isArg && !(SolvedNodeData(out_1, module, _scope, ctx).flags & F_PUB))
        {
            const s_SolvedNode& init = SolvedNodeData(out_1, module, _scope, ctx).items[LET_INIT];
            if ((SolvedNodeData(init, module, _scope, ctx).kind == "call"_fu) && !SolvedNodeData(init, module, _scope, ctx).items)
            {
                const s_Target target_6 { SolvedNodeData(init, module, _scope, ctx).target };
                const s_Overload& other = GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data);
                if (other.kind == "var"_fu)
                {
                    if (isAssignable(other.type, SolvedNodeData(out_1, module, _scope, ctx).type))
                    {
                        Scope_set(_scope, id_3, target_6, shadows);
                        if (SolvedNodeData(out_1, module, _scope, ctx).flags & F_USING)
                            _scope.usings.push(target_6);

                        out_1 = createEmpty("empty"_fu, t_void, s_Target{}, _here, _current_fn_or_type, module, _scope);
                        return;
                    };
                };
            };
        };
        const s_Target target_6 { (MUT(out_1, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).target = Binding(id_3, s_Type(SolvedNodeData(out_1, module, _scope, ctx).type), int(SolvedNodeData(out_1, module, _scope, ctx).flags), shadows, _current_fn, module, _scope, ctx, _root_scope, _ss, _helpers, _helpers_data, _here)) };
        GET_mut(s_Target(target_6), _scope, module).solved = out_1;
        Scope_set(_scope, id_3, target_6, shadows);
        if (SolvedNodeData(out_1, module, _scope, ctx).flags & F_USING)
            _scope.usings.push(target_6);

    };
}

static s_SolvedNode solveLet(const s_Node& node_1, const s_Type& specType, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ s_SolvedNode out_1 = solveLetLike_dontTouchScope(node_1, specType, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    const fu_STR& id_2 = SolvedNodeData(out_1, module, _scope, ctx).value;
    solveLet(out_1, fu_STR(id_2), module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _root_scope, _ss);
    return /*NRVO*/ out_1;
}

                                #ifndef DEFt_only_R8Td
                                #define DEFt_only_R8Td
inline const s_Region& only_R8Td(fu::view<s_Region> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E_OZkl("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Lifetime Lifetime_fromNative(fu::view<s_Node> sig, fu::view<s_SolvedNode> args_1, const s_Type& actual, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!((sig.size() + FN_ARGS_BACK) == args_1.size()))
        fail("sig.len != args.len"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    const s_Node& ret = sig[(sig.size() + FN_RET_BACK)];
    bool mutref = ((ret.kind == "call"_fu) && (ret.items.size() == 1) && (ret.value == "&mut"_fu));
    /*MOV*/ s_Type res {};
    for (; ; )
    {
        for (int i = 0; i < args_1.size(); i++)
        {
            const s_Node& inArg = sig[i];
            const s_Node& annot = inArg.items[LET_TYPE];
            if ((annot.items.size() == 1) && (((annot.kind == "call"_fu) && ((!mutref && (annot.value == "&"_fu)) || (annot.value == "&mut"_fu))) || (!mutref && (annot.kind == "arrlit"_fu))))
            {
                if (res)
                    fail("Ambiguous __native lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                res = GET(SolvedNodeData(args_1[i], module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data).type;
                if (!(res.lifetime))
                    fail("Missing arg lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        if (!mutref || res.lifetime)
            break;

        mutref = false;
    };
    if (!(Region_isArg(only_R8Td(res.lifetime.uni0n))))
        fail("Non-single-arg __native lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!is_mutref(actual, _here, ctx) && !isAssignable(actual, res))
        return Lifetime_makeShared(res.lifetime);

    return static_cast<s_Lifetime&&>(res.lifetime);
}

inline static fu_STR mangleArguments_msdo(fu::view<s_SolvedNode> args_1, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args_1.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(SolvedNodeData(args_1[i], module, _scope, ctx).type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

static fu_STR HACK_nativeNameParts(const bool isNative, const s_Node& n_body)
{
    /*MOV*/ fu_STR name_4 {};
    if (isNative && n_body.items)
    {
        for (int i = 0; i < n_body.items.size(); i++)
            name_4 += ("\n"_fu + n_body.items[i].value);

    };
    return /*NRVO*/ name_4;
}

                                #ifndef DEF_SS_UPDATED
                                #define DEF_SS_UPDATED
inline constexpr unsigned SS_UPDATED = (0x1u << 4u);
                                #endif

static fu_STR Autocall_splice(fu_STR& name_3, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    for (int i = 0; i < name_3.size(); i++)
    {
        if (name_3[i] == '.')
        {
            /*MOV*/ fu_STR ret = fu::slice(name_3, (i + 1));
            name_3.shrink(i);
            return /*NRVO*/ ret;
        };
    };
    fail((("Autocall: no `.` in id `"_fu + name_3) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEFt_unless_oob_ZgtR
                                #define DEFt_unless_oob_ZgtR
inline const s_ArgWrite& unless_oob_ZgtR(fu::view<s_ArgWrite> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_ArgWrite*)fu::NIL);
}
                                #endif

static s_SolvedNode callsite(const s_ArgWrite& aw, const s_Target& nodeown_1)
{
    return s_SolvedNode { s_Target(nodeown_1), int(aw.nodeidx) };
}

                                #ifndef DEFt_has_ab8l
                                #define DEFt_has_ab8l
inline bool has_ab8l(fu::view<s_Target> a, const s_Target& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR qSTACK(const s_Target& target_6, const int position, fu_VEC<s_Target>&& seen, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_CurrentFn& _current_fn, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Argument& host_arg = EXT(target_6, module, _scope, ctx).args[position];
    if (host_arg.written_via)
        return qSTACK(host_arg.written_via, target_6, fu_VEC<s_Target>(seen), _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

    return fu_STR{};
}

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR addr(const s_TokenIdx& token_2, const s_Context& ctx, const s_Module& module)
{
    const s_Token& t = _token(token_2, ctx);
    if (token_2.modid != module.modid)
        return x7E_OZkl((x7E_OZkl((_fname(token_2, ctx) + "@"_fu), fu::i64dec(t.line)) + ":"_fu), fu::i64dec(t.col));

    return x7E_OZkl(x7E_OZkl(fu::i64dec(t.line), ":"_fu), fu::i64dec(t.col));
}

static fu_STR addr_and_snippet(const s_TokenIdx& token_2, const s_Context& ctx, const s_Module& module)
{
    return (addr(token_2, ctx, module) + ":\n\n"_fu) + formatCodeSnippet(token_2, s_TokenIdx{}, 2, ctx);
}

static fu_STR qSTACK(const s_ArgWrite& written_via_1, const s_Target& nodeown_1, fu_VEC<s_Target>&& seen, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if ((written_via_1.nodeidx < 0) || (seen.size() >= 8))
        return fu_STR{};

    const s_SolvedNode callsite_2 = callsite(written_via_1, (nodeown_1 ? nodeown_1 : SolvedNodeData(_current_fn.out, module, _scope, ctx).target));
    const s_Target& target_6 = SolvedNodeData(callsite_2, module, _scope, ctx).target;
    fu_STR rec = (has_ab8l(seen, target_6) ? "recursively "_fu : fu_STR{});
    seen += target_6;
    fu_STR via_1 = (rec ? fu_STR{} : qSTACK(target_6, written_via_1.arg_position, fu_VEC<s_Target>(seen), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data));
    return ((((("\n            "_fu + rec) + "via "_fu) + qWHAT(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)) + " at "_fu) + addr_and_snippet(SolvedNodeData(callsite_2, module, _scope, ctx).token, ctx, module)) + via_1;
}

                                #ifndef DEF_F_REST_ARG
                                #define DEF_F_REST_ARG
inline constexpr int F_REST_ARG = (1 << 26);
                                #endif

extern const int F_OOE_RTL;

static int& isRTL_set(s_Overload& o, const bool rtl)
{
    return (rtl ? (o.flags |= F_OOE_RTL) : (o.flags &= ~F_OOE_RTL));
}

static void updateScope(const s_CurrentFn& out_2, const s_Type& retval, const s_Target& target_6, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const bool isNative, const bool isUnspec, const int isPure, const s_CurrentFn& _current_fn, const bool isInline)
{
    if (GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).status & SS_DIRTY)
    {
        GET_mut(target_6, _scope, module).status |= SS_UPDATED;
        return;
    };
    fu::view<s_SolvedNode> items_6 = SolvedNodeData(out_2.out, module, _scope, ctx).items;
    const int N = (items_6.size() + FN_ARGS_BACK);
    int min_2 = 0;
    int max_2 = 0;
    fu_VEC<s_Argument> args_2 {};
    for (int i = 0; i < N; i++)
    {
        const s_SolvedNode& argNode = items_6[i];
        if (!(SolvedNodeData(argNode, module, _scope, ctx).kind == "let"_fu))
            fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

        fu_STR name_3 { SolvedNodeData(argNode, module, _scope, ctx).value };
        fu_STR autocall_1 = ((SolvedNodeData(argNode, module, _scope, ctx).flags & F_COMPOUND_ID) ? Autocall_splice(name_3, _here, ctx, _helpers, _helpers_data, _scope, module) : fu_STR{});
        const bool isImplicit = !!(SolvedNodeData(argNode, module, _scope, ctx).flags & F_IMPLICIT);
        s_BitSet risk_free_1 = (!isNative && !isUnspec ? ArgsAtRisk_listRiskFree(out_2.flow, i) : s_BitSet{});
        const s_Target& argTarget = SolvedNodeData(argNode, module, _scope, ctx).target;
        const s_ArgWrite written_via_1 = (is_mutref(SolvedNodeData(argNode, module, _scope, ctx).type, _here, ctx) ? (isNative ? s_ArgWrite { -1, -1 } : s_ArgWrite(unless_oob_ZgtR(out_2.events.args_written_via, argTarget.index))) : s_ArgWrite{});
        if (isPure && written_via_1)
            fail(((((qWHAT(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data) + " is not pure, writes to argument "_fu) + qID(human(name_3, module, _scope, ctx, _here, _helpers, _helpers_data))) + ":\n"_fu) + qSTACK(written_via_1, s_Target{}, fu_VEC<s_Target>{}, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Argument arg = s_Argument { fu_STR(name_3), fu_STR(autocall_1), s_Type(SolvedNodeData(argNode, module, _scope, ctx).type), s_SolvedNode((!isImplicit ? SolvedNodeData(argNode, module, _scope, ctx).items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), int(SolvedNodeData(argNode, module, _scope, ctx).flags), s_BitSet(risk_free_1), s_ArgWrite(written_via_1) };
        if (!(arg.type || isUnspec))
            fail((("Unexpected untyped argument: `"_fu + name_3) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        args_2.push(arg);
        if (!isImplicit)
        {
            if (max_2 != int(0x7fffffffu))
                max_2++;

            if (!arg.dEfault)
                min_2++;

        };
        if (arg.flags & F_REST_ARG)
            max_2 = int(0x7fffffffu);

    };
    s_Overload overload { GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data) };
    s_Extended& ext = EXT_mut(target_6, module, _scope);
    bool change = false;
    if (ext.callsites)
    {
        change = ((args_2.size() != ext.args.size()) || !(overload.type == retval));
        if (!change)
        {
            for (int i_1 = 0; i_1 < args_2.size(); i_1++)
            {
                const s_Argument& a = args_2[i_1];
                const s_Argument& b = ext.args[i_1];
                if (!((a.name == b.name) && (a.type == b.type)))
                {
                    change = true;
                    break;
                };
            };
        };
    };
    ext.min = min_2;
    ext.max = max_2;
    ext.args = args_2;
    s_Overload& overload_1 = GET_mut(target_6, _scope, module);
    overload_1.type = retval;
    if (isInline)
        return;

    if (!(retval))
        fail("FnDecl_update: no return type."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (is_ref(retval))
        Lifetime_test(retval.lifetime, bool{}, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

    overload_1.flags = SolvedNodeData(out_2.out, module, _scope, ctx).flags;
    overload_1.solved = (!isUnspec ? out_2.out : (*(const s_SolvedNode*)fu::NIL));

    {
        const bool rtl = ((args_2.size() == 2) && (overload_1.flags & F_OPERATOR) && hasAssignment(overload_1.name));
        isRTL_set(overload_1, rtl);
    };
    if (change)
        overload_1.status |= SS_UPDATED;

}

inline static fu_STR mangleArguments_YOPn(fu::view<s_Argument> args_1, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args_1.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(args_1[i].type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_HM_CanReturn
                                #define DEF_HM_CanReturn
inline constexpr short HM_CanReturn = (short(1) << short(1));
                                #endif

                                #ifndef DEF_HM_LabelUsed
                                #define DEF_HM_LabelUsed
inline constexpr short HM_LabelUsed = (short(1) << short(6));
                                #endif

                                #ifndef DEF_F_LAMBDA
                                #define DEF_F_LAMBDA
inline constexpr int F_LAMBDA = (1 << 30);
                                #endif

                                #ifndef DEF_HM_Lambda
                                #define DEF_HM_Lambda
inline constexpr short HM_Lambda = (short(1) << short(4));
                                #endif

static int GET_next_local_index(const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index ? (_scope.extended[(SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index - 1)].locals.size() + 1) : int{};
}

                                #ifndef DEFt_steal_UyPn
                                #define DEFt_steal_UyPn
inline fu_VEC<int> steal_UyPn(fu_VEC<int>& a, const int start_1, const int end_1)
{
    const int size = (end_1 - start_1);
    /*MOV*/ fu_VEC<int> ret {};
    ret.resize(size);
    for (int i = 0; i < size; i++)
        std::swap(ret.mutref(i), a.mutref((i + start_1)));

    a.splice(start_1, size);
    return /*NRVO*/ ret;
}
                                #endif

                                #ifndef DEFt_last_0oqA
                                #define DEFt_last_0oqA
inline const s_SolvedNode& last_0oqA(fu::view<s_SolvedNode> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode createJump(const s_Target& target_6, const s_SolvedNode& expr, const s_Helpers& h, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode("jump"_fu, t_never, 0, (*(const fu_STR*)fu::NIL), (expr ? fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } } : fu_VEC<s_SolvedNode>{}), target_6, h.index, _here, _current_fn_or_type, module, _scope);
}

                                #ifndef DEFt_only_Mzjf
                                #define DEFt_only_Mzjf
inline const s_SolvedNode& only_Mzjf(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E_OZkl("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static const s_Module& getModule(const int modid_5, const s_Module& module, const s_Context& ctx)
{
    if (modid_5 == module.modid)
        return module;

    return ctx.modules[modid_5];
}

static fu::view<char> trimmedName(const s_Module& module_1)
{
    fu::view<char> fname_1 = module_1.fname;
    int start_1 = 0;
    int end_1 = fname_1.size();
    for (int i = end_1; i-- > 0; )
    {
        const char c = fname_1[i];
        if (c == '/')
        {
            start_1 = (i + 1);
            break;
        };
        if (c == '.')
            end_1 = i;

    };
    return fu::get_view(fname_1, start_1, end_1);
}

static fu_STR humanizeType(const s_Type& type_3, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR result { (isStruct(type_3) ? lookupStruct(type_3, module, ctx).name : type_3.vtype.canon) };
    if (type_3.vtype.modid)
        result = ((trimmedName(getModule(type_3.vtype.modid, module, ctx)) + "::"_fu) + result);

    if (type_3.vtype.quals)
        result += humanizeQuals(type_3);

    return /*NRVO*/ result;
}

static void checkAssignable(const s_Type& host, const s_Type& guest, fu::view<char> err, const fu_STR& id_2, const fu_STR& sep, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!(isAssignable((host ? host : fail("Bad host type."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)), (guest ? guest : fail("Bad guest type."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)))))
        fail((((((err + (id_2 ? ((" `"_fu + id_2) + "`"_fu) : fu_STR{})) + ": "_fu) + humanizeType(host, module, ctx)) + (sep ? fu_STR(sep) : " <- "_fu)) + humanizeType(guest, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

}

static s_Type superType(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id_2, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_Type _0 {};
    return (_0 = type_trySuper(a, b)) ? static_cast<s_Type&&>(_0) : fail((((((((id_2 ? (("`"_fu + human(id_2, module, _scope, ctx, _here, _helpers, _helpers_data)) + "`: "_fu) : fu_STR{}) + reason) + "No common supertype: `"_fu) + humanizeType(a, module, ctx)) + "` | `"_fu) + humanizeType(b, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void reportReturnType(const s_Helpers& h, const s_Type& type_3, fu_VEC<s_HelpersData>& _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, const s_Scope& _scope, const s_Module& module)
{
    if (_helpers_data[h.index].ret_expect && (_helpers_data[h.index].mask & HM_Function))
        checkAssignable(_helpers_data[h.index].ret_expect, type_3, "Expression not assignable to return annotation"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);

    _helpers_data.mutref(h.index).ret_actual = (_helpers_data[h.index].ret_actual ? superType("Subsequent return: "_fu, _helpers_data[h.index].ret_actual, type_3, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data) : s_Type(type_3));
    if (!(_helpers_data[h.index].ret_actual))
        fail("Can't be null past this point."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

}

                                #ifndef DEF_F_REF
                                #define DEF_F_REF
inline constexpr int F_REF = (1 << 22);
                                #endif

static const s_Type& Lifetime_climbType(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (!(o.kind == "var"_fu))
        fail(("Lifetime_climbType: not a `var`: "_fu + qWHAT(o, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

    return is_ref(SolvedNodeData(o.solved, module, _scope, ctx).type) ? SolvedNodeData(SolvedNodeData(o.solved, module, _scope, ctx).items[LET_INIT], module, _scope, ctx).type : (*(const s_Type*)fu::NIL);
}

static bool Lifetime_allowsMutrefReturn(const s_Lifetime& lifetime_1, const int locals_start_1, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{

    {
        for (int i_2 = lifetime_1.uni0n.size(); i_2-- > 0; )
        {
            const s_Region& r = lifetime_1.uni0n[i_2];
            if (r.index < locals_start_1)
                break;

            if (Region_isTemp(r))
                continue;

            const s_Overload& o = GET_mut(nested(Region_toLocalIndex(r), _current_fn, module, _scope, ctx), _scope, module);
            if (!(is_mutref(o.type, _here, ctx)))
                fail(("Checking for mutref-return-ok found non-mutref: "_fu + qWHAT(o, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

            if ((o.kind == "var"_fu) && !(o.flags & F_REF))
                return false;

            const s_Type& init = Lifetime_climbType(o, module, _scope, ctx, _here, _helpers, _helpers_data);
            if (!Lifetime_allowsMutrefReturn(s_Lifetime(init.lifetime), locals_start_1, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data))
                return false;

        };
    };
    return true;
}

                                #ifndef DEF_F_TODO_FIX_RRET
                                #define DEF_F_TODO_FIX_RRET
inline constexpr int F_TODO_FIX_RRET = (1 << 27);
                                #endif

inline static void Lifetime_each_0adz(const s_Lifetime& lifetime_1, int, const int locals_start_1, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const int locals_start_1_1)
{
    for (int i = lifetime_1.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime_1.uni0n[i];
        if (r.index < locals_start_1)
            break;

        if (Region_isTemp(r))
            continue;

        s_Overload& o = GET_mut(nested(Region_toLocalIndex(r), _current_fn, module, _scope, ctx), _scope, module);
        o.flags |= F_TODO_FIX_RRET;
        const s_Type& init = Lifetime_climbType(o, module, _scope, ctx, _here, _helpers, _helpers_data);
        if (is_ref(init))
            Lifetime_F_TODO_FIX_RRET(s_Lifetime(init.lifetime), locals_start_1_1, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

    };
}

static void Lifetime_F_TODO_FIX_RRET(const s_Lifetime& lifetime_1, const int locals_start_1, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    Lifetime_each_0adz(lifetime_1, 0, locals_start_1, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, locals_start_1);
}

                                #ifndef DEFt_if_last_0oqA
                                #define DEFt_if_last_0oqA
inline const s_SolvedNode& if_last_0oqA(fu::view<s_SolvedNode> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

inline static void Lifetime_each_C8hj(s_Lifetime& lifetime_1, int, const int locals_start_1, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    for (int i = lifetime_1.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime_1.uni0n[i];
        if (r.index < locals_start_1)
            break;

        if (Region_isTemp(r))
            continue;

        const s_Overload& o = GET_mut(nested(Region_toLocalIndex(r), _current_fn, module, _scope, ctx), _scope, module);
        const s_Type& init = Lifetime_climbType(o, module, _scope, ctx, _here, _helpers, _helpers_data);
        if (!is_ref(init))
            continue;

        if (!(init.lifetime.uni0n.size()))
            fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

        lifetime_1.uni0n.splice(i, 1);
        const int N0 = lifetime_1.uni0n.size();
        lifetime_1 = Lifetime_union(lifetime_1, init.lifetime);
        const int N1 = lifetime_1.uni0n.size();
        i += (N1 - N0);
    };
}

static s_Lifetime Lifetime_unwind(/*MOV*/ s_Lifetime&& lifetime_1, const int locals_start_1, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    Lifetime_each_C8hj(lifetime_1, 0, locals_start_1, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);
    return static_cast<s_Lifetime&&>(lifetime_1);
}

                                #ifndef DEFt_if_first_pdPA
                                #define DEFt_if_first_pdPA
inline const s_Region& if_first_pdPA(fu::view<s_Region> s)
{
    return s.size() ? s[0] : (*(const s_Region*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_if_last_pdPA
                                #define DEFt_if_last_pdPA
inline const s_Region& if_last_pdPA(fu::view<s_Region> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_Region*)fu::NIL);
}
                                #endif

static int Lifetime_vs(const s_Lifetime& lifetime_1, const int locals_start_1)
{
    return ((Region_toLocalIndex(if_first_pdPA(lifetime_1.uni0n)) >= locals_start_1) ? +1 : ((Region_toLocalIndex(if_last_pdPA(lifetime_1.uni0n)) < locals_start_1) ? -1 : 0));
}

                                #ifndef DEF_F_MOVED_FROM
                                #define DEF_F_MOVED_FROM
inline constexpr int F_MOVED_FROM = (1 << 11);
                                #endif

inline static void Lifetime_each_VPQd(const s_Lifetime& lifetime_1, int, const int locals_start_1, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    for (int i = lifetime_1.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime_1.uni0n[i];
        if (r.index < locals_start_1)
            break;

        if (Region_isTemp(r))
            continue;

        s_Overload& o = GET_mut(nested(Region_toLocalIndex(r), _current_fn, module, _scope, ctx), _scope, module);
        if (o.flags & F_MOVED_FROM)
            continue;

        o.flags |= F_MOVED_FROM;
        const s_Type& init = Lifetime_climbType(o, module, _scope, ctx, _here, _helpers, _helpers_data);
        if (is_ref(init))
            Lifetime_F_MOVED_FROM(s_Lifetime(init.lifetime), _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

    };
}

static void Lifetime_F_MOVED_FROM(const s_Lifetime& lifetime_1, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    Lifetime_each_VPQd(lifetime_1, 0, 0, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);
}

static s_SolvedNode createMove(const s_SolvedNode& node_1, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_CurrentFn& _current_fn, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type)
{
    Lifetime_F_MOVED_FROM(s_Lifetime(SolvedNodeData(node_1, module, _scope, ctx).type.lifetime), _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);
    return SolvedNode("move"_fu, clear_refs(s_Type(SolvedNodeData(node_1, module, _scope, ctx).type)), 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node_1) } }, s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createCopy(const s_SolvedNode& node_1, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fn_or_type)
{
    return SolvedNode("copy"_fu, clear_refs(s_Type(SolvedNodeData(node_1, module, _scope, ctx).type)), 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node_1) } }, s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
}

                                #ifndef DEFt_only_yNXM
                                #define DEFt_only_yNXM
inline s_SolvedNode& only_yNXM(fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(x7E_OZkl("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static void mcom_BlockReturns_CopyOrMoveDecision(const s_Helpers& h, fu_VEC<s_HelpersData>& _helpers_data, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_CurrentFn& _current_fn, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, const s_Target& _current_fn_or_type)
{
    for (int i = 0; i < _helpers_data[h.index].returns.size(); i++)
    {
        s_SolvedNode expr { only_Mzjf(SolvedNodeData(_helpers_data[h.index].returns[i], module, _scope, ctx).items) };
        s_Type type_3 { SolvedNodeData(expr, module, _scope, ctx).type };
        if (is_ref(SolvedNodeData(expr, module, _scope, ctx).type))
        {
            type_3.lifetime = Lifetime_unwind(s_Lifetime(type_3.lifetime), _helpers_data[h.index].locals_start, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);
            int _0 {};
            const int ltCompare = Lifetime_vs(type_3.lifetime, ((_0 = _helpers_data[h.index].locals_start) ? _0 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)));
            if ((ltCompare >= 0))
            {
                if (ltCompare > 0)
                    expr = createMove(expr, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type);
                else
                    expr = createCopy(expr, module, _scope, ctx, _here, _current_fn_or_type);

                only_yNXM(MUT(_helpers_data[h.index].returns[i], module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).items) = expr;
                type_3 = SolvedNodeData(expr, module, _scope, ctx).type;
            };
        };
        reportReturnType(h, type_3, _helpers_data, _here, ctx, _helpers, _scope, module);
    };
    if (_helpers_data[h.index].ret_expect)
        checkAssignable(_helpers_data[h.index].ret_expect, _helpers_data[h.index].ret_actual, "Actual return type does not match annotation"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);

}

static void test_nodes(fu::view<s_SolvedNode> nodes_1, fu::view<char> debug, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    for (int i = 0; i < nodes_1.size(); i++)
        test_node(nodes_1[i], (x7E_OZkl((debug + "["_fu), fu::i64dec(i)) + "]"_fu), module, _scope, ctx, _here, _helpers, _helpers_data);

}

inline static fu_STR mangleArguments_0oqA(fu::view<s_SolvedNode> args_1, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args_1.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(SolvedNodeData(args_1[i], module, _scope, ctx).type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_F_MUSTNAME
                                #define DEF_F_MUSTNAME
inline constexpr int F_MUSTNAME = (1 << 19);
                                #endif

static fu_STR explainConversion(fu::view<s_Target> path, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    /*MOV*/ fu_STR res = "`"_fu;
    for (int i = 0; i < path.size(); i++)
    {
        if (i)
            res += "` -> `"_fu;

        const s_Overload& o = GET(path[i], _scope, module, ctx, _here, _helpers, _helpers_data);
        res += qWHAT(o, module, _scope, ctx, _here, _helpers, _helpers_data);
        if (i < path.size())
            res += (": "_fu + humanizeType(o.type, module, ctx));

    };
    res += "`"_fu;
    return /*NRVO*/ res;
}

static fu_STR explainWhichFn(const s_Target& overload, fu::view<fu_VEC<s_Target>> conversions, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    /*MOV*/ fu_STR result = ("`"_fu + GET(overload, _scope, module, ctx, _here, _helpers, _helpers_data).name);
    if (EXT(overload, module, _scope, ctx).args)
    {
        result += "("_fu;
        for (int i = 0; i < EXT(overload, module, _scope, ctx).args.size(); i++)
        {
            const s_Argument& arg = EXT(overload, module, _scope, ctx).args[i];
            if (i)
                result += ","_fu;

            result += (((("\n\t"_fu + qID(human(arg.name, module, _scope, ctx, _here, _helpers, _helpers_data))) + ((arg.flags & F_MUSTNAME) ? "!"_fu : fu_STR{})) + (arg.dEfault ? "?: "_fu : ": "_fu)) + (arg.type ? humanizeType(arg.type, module, ctx) : "$"_fu));
            const fu_VEC<s_Target>& c = ((conversions.size() > i) ? conversions[i] : (*(const fu_VEC<s_Target>*)fu::NIL));
            if (c)
                result += (" via "_fu + explainConversion(c, _scope, module, ctx, _here, _helpers, _helpers_data));

        };
        result += ")"_fu;
    };
    result += "`"_fu;
    return /*NRVO*/ result;
}

[[noreturn]] static fu::never err(fu::view<char> reason, fu::view<char> debug, const s_SolvedNode& callsite_2, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fail(((((debug + " "_fu) + qWHAT(GET(SolvedNodeData(callsite_2, module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)) + ": "_fu) + reason), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void test_CallSignature(const s_SolvedNode& callsite_2, fu::view<char> debug, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu::view<s_Argument> host_args = EXT(SolvedNodeData(callsite_2, module, _scope, ctx).target, module, _scope, ctx).args;
    fu::view<s_SolvedNode> args_1 = SolvedNodeData(callsite_2, module, _scope, ctx).items;
    if ((args_1.size() == 0) && (GET(SolvedNodeData(callsite_2, module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "type"_fu))
        return;

    if (!(host_args.size() == args_1.size()))
        err((((((x7E_OZkl((x7E_OZkl("host_args.len ("_fu, fu::i64dec(host_args.size())) + ") != args.len ("_fu), fu::i64dec(args_1.size())) + "):"_fu) + "\n\t\t"_fu) + mangleArguments_0oqA(args_1, module, _scope, ctx, _here)) + "\n\t\t"_fu) + explainWhichFn(SolvedNodeData(callsite_2, module, _scope, ctx).target, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx, _here, _helpers, _helpers_data)), debug, callsite_2, module, _scope, ctx, _here, _helpers, _helpers_data);

    for (int i = 0; i < host_args.size(); i++)
    {
        const s_Argument& host_arg = host_args[i];
        const s_SolvedNode& arg = args_1[i];
        if (!(isAssignableAsArgument(host_arg.type, SolvedNodeData(arg, module, _scope, ctx).type)))
            err(((((((x7E_OZkl("Arg #"_fu, fu::i64dec(i)) + ", "_fu) + qID(human(host_arg.name, module, _scope, ctx, _here, _helpers, _helpers_data))) + " not assignable to host_arg: "_fu) + humanizeType(host_arg.type, module, ctx)) + " <- "_fu) + humanizeType(SolvedNodeData(arg, module, _scope, ctx).type, module, ctx)), debug, callsite_2, module, _scope, ctx, _here, _helpers, _helpers_data);

    };
}

static void test_Statements(const s_SolvedNode& block, fu::view<char> debug, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu::view<s_SolvedNode> items_5 = SolvedNodeData(block, module, _scope, ctx).items;
    for (int i = 0; i < items_5.size(); i++)
    {
        const s_SolvedNode& n = items_5[i];
        if (!(SolvedNodeData(n, module, _scope, ctx).kind))
            fail((x7E_OZkl((debug + ": No .kind on item["_fu), fu::i64dec(i)) + "]."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    };
}

static void test_node(const s_SolvedNode& node_1, fu_STR&& debug, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    debug += ("/"_fu + SolvedNodeData(node_1, module, _scope, ctx).kind);
    if (SolvedNodeData(node_1, module, _scope, ctx).value)
        debug += (("["_fu + SolvedNodeData(node_1, module, _scope, ctx).value) + "]"_fu);

    test_nodes(SolvedNodeData(node_1, module, _scope, ctx).items, debug, module, _scope, ctx, _here, _helpers, _helpers_data);
    _here = SolvedNodeData(node_1, module, _scope, ctx).token;
    if (!(!is_ref(SolvedNodeData(node_1, module, _scope, ctx).type) == !SolvedNodeData(node_1, module, _scope, ctx).type.lifetime))
        fail(((debug + ": !!ref != !!lt: "_fu) + humanizeType(SolvedNodeData(node_1, module, _scope, ctx).type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    fu::view<char> k = SolvedNodeData(node_1, module, _scope, ctx).kind;
    if (k == "call"_fu)
        return test_CallSignature(node_1, debug, module, _scope, ctx, _here, _helpers, _helpers_data);

    if ((k == "block"_fu) || (k == "and"_fu) || (k == "or"_fu) || (k == "if"_fu))
    {
        if ((k == "and"_fu) || (k == "or"_fu))
        {
            if (!(SolvedNodeData(node_1, module, _scope, ctx).items.size() > 1))
                fail(x7E_OZkl((debug + ".len: "_fu), fu::i64dec(SolvedNodeData(node_1, module, _scope, ctx).items.size())), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        if (k == "if"_fu)
        {
            if (!(SolvedNodeData(node_1, module, _scope, ctx).items.size() == 3))
                fail(x7E_OZkl((debug + ".len: "_fu), fu::i64dec(SolvedNodeData(node_1, module, _scope, ctx).items.size())), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        return test_Statements(node_1, debug, module, _scope, ctx, _here, _helpers, _helpers_data);
    };
}

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
inline constexpr int RELAX_before_bck = (q_mutref | q_rx_resize);
                                #endif

                                #ifndef DEFt_unless_oob_f8UD
                                #define DEFt_unless_oob_f8UD
inline const s_Type& unless_oob_f8UD(fu::view<s_Type> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Type*)fu::NIL);
}
                                #endif

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline constexpr int q_rx_copy = (1 << 1);
                                #endif

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
inline constexpr int RELAX_all = (((q_mutref | q_rx_copy) | q_rx_resize) | q_rx_move);
                                #endif

                                #ifndef DEF_F_LAX
                                #define DEF_F_LAX
inline constexpr int F_LAX = (1 << 8);
                                #endif

                                #ifndef DEF_F_UNUSED
                                #define DEF_F_UNUSED
inline constexpr int F_UNUSED = (1 << 10);
                                #endif

static void relaxBlockVar(const s_Target& t, const int relax_mask, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Overload& var = GET(t, _scope, module, ctx, _here, _helpers, _helpers_data);
    s_Type usage { unless_oob_f8UD(_current_fn.var_usage, t.index) };
    if (!usage && (relax_mask == RELAX_all))
    {
        if (!(var.flags & F_LAX))
            fail((("Unused variable: `"_fu + var.name) + "`: make it `lax` if this is intentional."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        GET_mut(t, _scope, module).flags |= F_UNUSED;
    };
    s_Overload& o = GET_mut(t, _scope, module);
    try_relax(o.type, usage, int(relax_mask));
    if (!(SolvedNodeData(o.solved, module, _scope, ctx).type))
        fail("!var.solved.type, can`t propagateType"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);


    {
        const s_SolvedNode node_1 { o.solved };
        try_relax(MUT(s_SolvedNode(node_1), module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type, usage, int(relax_mask));
        const s_SolvedNode init { (SolvedNodeData(node_1, module, _scope, ctx).items ? SolvedNodeData(node_1, module, _scope, ctx).items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL)) };
        if (init)
        {
            propagateType(s_SolvedNode(SolvedNodeData(node_1, module, _scope, ctx).items[LET_INIT]), s_Type(SolvedNodeData(node_1, module, _scope, ctx).type), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
            if (is_ref(SolvedNodeData(node_1, module, _scope, ctx).type) && !(SolvedNodeData(node_1, module, _scope, ctx).flags & F_ARG))
                MUT(node_1, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type.lifetime = SolvedNodeData(init, module, _scope, ctx).type.lifetime;

        };
    };
    s_Overload& o_1 = GET_mut(t, _scope, module);
    if (o_1.flags & F_MUT)
    {
        if (is_mutref(usage, _here, ctx) || (o_1.flags & F_TODO_FIX_RRET))
        {
            s_Type type_3 = clear_refs(s_Type(SolvedNodeData(o_1.solved, module, _scope, ctx).type));
            MUT(s_SolvedNode(o_1.solved), module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = type_3;
        }
        else
            o_1.flags &= ~F_MUT;

    };
}

extern const bool CANNOT_definit_mutrefs;

extern const s_Type t_bool;

static bool isNested(const s_Target& target_6, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return target_6.modid == -SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index;
}

                                #ifndef DEFt_grow_if_oob_pqfD
                                #define DEFt_grow_if_oob_pqfD
inline s_Type& grow_if_oob_pqfD(fu_VEC<s_Type>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu::view<s_SolvedNode> arg_lets(const s_Overload& overload, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return fu::get_view(SolvedNodeData(overload.solved, module, _scope, ctx).items, 0, (SolvedNodeData(overload.solved, module, _scope, ctx).items.size() + FN_ARGS_BACK));
}

static bool TODO_FIX_has(fu::view<s_Region> a, const s_Region& b)
{
    for (int i_1 = 0; i_1 < a.size(); i_1++)
    {
        if (a[i_1] == b)
            return true;

    };
    return false;
}

static fu_STR mangleArguments(fu::view<s_SolvedNode> args_1, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    /*MOV*/ fu_STR mangle {};
    const int REST_END = (use_reorder ? reorder.size() : args_1.size());
    const int N = std::min(REST_END, REST_START);
    for (int i = 0; i < N; i++)
    {
        if (i)
            mangle += ","_fu;

        const int callsiteIndex = (use_reorder ? reorder[i] : i);
        if ((conversions.size() > i) && conversions[i].size())
            mangle += serializeType(GET(last_ntxL(conversions[i]), _scope, module, ctx, _here, _helpers, _helpers_data).type, "mangle.conv"_fu, _here, ctx);
        else if ((callsiteIndex >= 0) && (callsiteIndex <= args_1.size()))
            mangle += serializeType(SolvedNodeData(args_1[callsiteIndex], module, _scope, ctx).type, "mangle.no-conv"_fu, _here, ctx);

    };
    if (REST_START < REST_END)
    {
        if (REST_START)
            mangle += ","_fu;

        mangle += serializeType(REST_TYPE, "mangle[Nodes].rest"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEFt_get_JZBq
                                #define DEFt_get_JZBq
inline const s_Target& get_JZBq(const s_Map_n2DH& _, const fu_STR& key)
{
    const int idx = bfind_VtCz(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const s_Target*)fu::NIL);
}
                                #endif

static s_Target trySpecialize(const s_Target& overloadIdx, fu::view<s_SolvedNode> args_1, fu_STR& args_mangled, const int REST_START, const s_Type& REST_TYPE, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_STR* _0;
    (*(_0 = &(args_mangled)) ? *_0 : *_0 = mangleArguments(args_1, reorder, use_reorder, conversions, REST_START, REST_TYPE, _scope, module, ctx, _here, _helpers, _helpers_data));
    fu_STR mangle = ((x7E_OZkl(x7E_OZkl(fu::i64dec(overloadIdx.modid), "#"_fu), fu::i64dec(overloadIdx.index)) + " "_fu) + args_mangled);
    s_Target _1 {};
    const s_Target spec = ((_1 = s_Target(get_JZBq(_specs, mangle))) ? _1 : doTrySpecialize(s_Target{}, overloadIdx, args_1, fu_STR(mangle), reorder, use_reorder, conversions, REST_START, REST_TYPE, module, _scope, ctx, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string));
    return s_Target((!is_SPECFAIL(spec) ? spec : (*(const s_Target*)fu::NIL)));
}

static s_Lifetime Lifetime_replaceArgsAtCallsite(const s_Overload& overload, fu::view<s_SolvedNode> argNodes, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const fu_VEC<s_Region>& returned = overload.type.lifetime.uni0n;
    fu::view<s_SolvedNode> items_5 = arg_lets(overload, module, _scope, ctx);
    if (!Region_isArg(if_first_pdPA(returned)))
        return s_Lifetime { fu_VEC<s_Region>(returned) };

    s_Lifetime keep {};
    s_Lifetime replace_1 {};
    int offset = items_5.size();
    for (int i = 0; i < returned.size(); i++)
    { {
        const s_Region& region = returned[i];
        if (Region_isStatic(region))
        {
            keep.uni0n += region;
            continue;
        };
        if (!(Region_isArg(region)))
            fail(x7E_OZkl("Not an argument region: "_fu, fu::i64dec(region.index)), _here, ctx, _helpers, _helpers_data, _scope, module);

        const int index_3 = Region_toArgIndex(region);
        while (offset--)
        {
            const s_Target& here = SolvedNodeData(items_5[offset], module, _scope, ctx).target;
            if (here.index == index_3)
            {
                const s_SolvedNode& argNode = argNodes[offset];
                const s_Lifetime* _0;
                s_Lifetime argLt = (is_ref(SolvedNodeData(argNode, module, _scope, ctx).type) ? s_Lifetime((*(_0 = &(SolvedNodeData(argNode, module, _scope, ctx).type.lifetime)) ? *_0 : fail("refarg without lifetime"_fu, _here, ctx, _helpers, _helpers_data, _scope, module))) : Lifetime_temporary());
                replace_1 = Lifetime_union(replace_1, argLt);
                goto L_03;
            };
            if (!(!here.index || (here.index > index_3)))
                fail(("Nope, going backwards: "_fu + qWHAT(GET(here, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        fail(x7E_OZkl("Could not find argument region: "_fu, fu::i64dec(index_3)), _here, ctx, _helpers, _helpers_data, _scope, module);
      } L_03:;
    };
    return Lifetime_union(keep, replace_1);
}

static bool isRTL(const s_Overload& o)
{
    return !!(o.flags & F_OOE_RTL);
}

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline constexpr int LOOP_COND = 1;
                                #endif

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 2;
                                #endif

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 3;
                                #endif

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static void propagateType(const s_SolvedNode& node_1, const s_Type& slot, const int relax_mask, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_STR k { SolvedNodeData(node_1, module, _scope, ctx).kind };
    if (k == "let"_fu)
    {
        if (!SolvedNodeData(node_1, module, _scope, ctx).target)
            return;

        return relaxBlockVar(s_Target(SolvedNodeData(node_1, module, _scope, ctx).target), relax_mask, _scope, module, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    };
    const s_TokenIdx here0 { _here };
    _here = SolvedNodeData(node_1, module, _scope, ctx).token;
    fu_DEFER(_here = here0);
    try_relax(MUT(node_1, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type, slot, int(relax_mask));
    s_Type slot_1 { SolvedNodeData(node_1, module, _scope, ctx).type };
    const int LAST = (SolvedNodeData(node_1, module, _scope, ctx).items.size() - 1);
    if (k == "and"_fu)
    {
        s_Type rest { ((is_mutref(slot_1, _here, ctx) && CANNOT_definit_mutrefs) ? slot_1 : t_bool) };
        for (int i = SolvedNodeData(node_1, module, _scope, ctx).items.size(); i-- > 0; )
            propagateType(s_SolvedNode(SolvedNodeData(node_1, module, _scope, ctx).items[i]), s_Type(((i == LAST) ? slot_1 : rest)), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    }
    else if (k == "or"_fu)
    {
        for (int i = SolvedNodeData(node_1, module, _scope, ctx).items.size(); i-- > 0; )
            propagateType(s_SolvedNode(SolvedNodeData(node_1, module, _scope, ctx).items[i]), slot_1, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    }
    else if (k == "if"_fu)
    {
        for (int i = SolvedNodeData(node_1, module, _scope, ctx).items.size(); i-- > 0; )
            propagateType(s_SolvedNode(SolvedNodeData(node_1, module, _scope, ctx).items[i]), ((i != 0) ? slot_1 : t_bool), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    }
    else if (k == "call"_fu)
    {
        const s_Target t { SolvedNodeData(node_1, module, _scope, ctx).target };
        if (GET(t, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "field"_fu)
            return propagateType(s_SolvedNode(SolvedNodeData(node_1, module, _scope, ctx).items[0]), slot_1, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

        if (GET(t, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "var"_fu)
        {
            if (isNested(t, _current_fn, module, _scope, ctx))
            {
                s_Type& usage = grow_if_oob_pqfD(_current_fn.var_usage, t.index);
                if (!usage)
                    usage = slot_1;
                else
                {
                    s_Type _0 {};
                    usage = ((_0 = type_tryIntersect(usage, slot_1)) ? static_cast<s_Type&&>(_0) : fail((((((qWHAT(GET(t, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data) + ": Usage intersection failure: `"_fu) + humanizeType(usage, module, ctx)) + "` & `"_fu) + humanizeType(slot_1, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module));
                };
            };
            return;
        };
        if (EXT(t, module, _scope, ctx).spec_of && is_ref(GET(t, _scope, module, ctx, _here, _helpers, _helpers_data).type))
        {
            fu_VEC<s_SolvedNode> relaxed {};
            for (int i = 0; i < SolvedNodeData(node_1, module, _scope, ctx).items.size(); i++)
            {
                const s_SolvedNode orig { SolvedNodeData(node_1, module, _scope, ctx).items[i] };
                if (TODO_FIX_has(GET(t, _scope, module, ctx, _here, _helpers, _helpers_data).type.lifetime.uni0n, Region_fromArgIndex(SolvedNodeData(arg_lets(GET(t, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx)[i], module, _scope, ctx).target.index)))
                {
                    s_Type type_3 { SolvedNodeData(orig, module, _scope, ctx).type };
                    if (try_relax(type_3, slot_1, int(relax_mask)))
                    {
                        if (!relaxed)
                            relaxed = fu::slice(SolvedNodeData(node_1, module, _scope, ctx).items, 0, i);

                        relaxed += SolvedNode("__relaxed"_fu, type_3, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
                        continue;
                    };
                };
                if (relaxed)
                    relaxed += orig;

            };
            if (relaxed)
            {
                fu_STR args_mangled {};
                const s_Target spec = trySpecialize(s_Target(EXT(t, module, _scope, ctx).spec_of), relaxed, args_mangled, relaxed.size(), (*(const s_Type*)fu::NIL), fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
                if (spec && !(spec == EXT(t, module, _scope, ctx).spec_of))
                {
                    const s_Overload& o1 = GET(spec, _scope, module, ctx, _here, _helpers, _helpers_data);
                    checkAssignable(SolvedNodeData(node_1, module, _scope, ctx).type, o1.type, "Relaxed specialization does not return a subtype"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);
                    if (is_ref(SolvedNodeData(node_1, module, _scope, ctx).type))
                        MUT(node_1, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type.lifetime = Lifetime_test(Lifetime_replaceArgsAtCallsite(o1, relaxed, module, _scope, ctx, _here, _helpers, _helpers_data), true, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

                    MUT(node_1, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).target = spec;
                    makeNote(N_RelaxRespec, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                };
            };
        };
        if (SolvedNodeData(node_1, module, _scope, ctx).items)
        {
            fu_VEC<s_Argument> host_args { EXT(SolvedNodeData(node_1, module, _scope, ctx).target, module, _scope, ctx).args };
            const bool rtl = isRTL(GET(SolvedNodeData(node_1, module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data));
            const int N = SolvedNodeData(node_1, module, _scope, ctx).items.size();
            const int start_1 = (rtl ? 0 : (N - 1));
            const int end_1 = (rtl ? int(N) : (0 - 1));
            const int incr = (rtl ? +1 : -1);
            for (int i = start_1; i != end_1; i += incr)
                propagateType(s_SolvedNode(SolvedNodeData(node_1, module, _scope, ctx).items[i]), s_Type(host_args[i].type), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

        };
    }
    else if ((k == "int"_fu) || (k == "real"_fu) || (k == "char"_fu) || (k == "str"_fu) || (k == "definit"_fu))
    {
    }
    else if ((k == "typeparam"_fu) || (k == "empty"_fu) || (k == "fndef"_fu))
    {
    }
    else if ((k == "copy"_fu) || (k == "move"_fu))
    {
        propagateType(s_SolvedNode(only_Mzjf(SolvedNodeData(node_1, module, _scope, ctx).items)), ((k == "copy"_fu) ? make_copyable(s_Type(slot_1)) : s_Type(slot_1)), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
        if (!(is_ref(SolvedNodeData(only_Mzjf(SolvedNodeData(node_1, module, _scope, ctx).items), module, _scope, ctx).type)))
            fail("TODO: Relaxed a copy/move to a value, no point in keeping the outer node."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    }
    else if (k == "arrlit"_fu)
    {
        for (int i = 0; i < SolvedNodeData(node_1, module, _scope, ctx).items.size(); i++)
        {
            s_Type _1 {};
            propagateType(s_SolvedNode(SolvedNodeData(node_1, module, _scope, ctx).items[i]), ((_1 = tryClear_sliceable(slot_1)) ? static_cast<s_Type&&>(_1) : fail("propagateType(arrlit): Can't clear solve item type."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
        };
    }
    else if (k == "argid"_fu)
        propagateType(s_SolvedNode(only_Mzjf(SolvedNodeData(node_1, module, _scope, ctx).items)), slot_1, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    else if (k == "jump"_fu)
    {
        if (SolvedNodeData(node_1, module, _scope, ctx).items)
        {
            const s_Helpers h = s_Helpers { int(SolvedNodeData(node_1, module, _scope, ctx).helpers) };
            if (!(_helpers_data[h.index].ret_actual))
                fail("propagateType(jump): h.ret_actual not available."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            propagateType(s_SolvedNode(only_Mzjf(SolvedNodeData(node_1, module, _scope, ctx).items)), s_Type(_helpers_data[h.index].ret_actual), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
        };
    }
    else if (k == "block"_fu)
    {
        const s_Helpers h = s_Helpers { int(SolvedNodeData(node_1, module, _scope, ctx).helpers) };
        try_relax(_helpers_data.mutref(h.index).ret_actual, slot_1, int(relax_mask));
        for (int i = SolvedNodeData(node_1, module, _scope, ctx).items.size(); i-- > 0; )
        {
            const s_SolvedNode& node_2 = SolvedNodeData(node_1, module, _scope, ctx).items[i];
            const s_SolvedNode& node_3 = ((SolvedNodeData(node_2, module, _scope, ctx).kind == "defer"_fu) ? only_Mzjf(SolvedNodeData(node_2, module, _scope, ctx).items) : node_2);
            propagateType(s_SolvedNode(node_3), ((i != 0) ? slot_1 : t_void), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
        };
        if (_helpers_data[h.index].target == SolvedNodeData(_current_fn.out, module, _scope, ctx).target)
        {
            fu_VEC<s_SolvedNode> sig { SolvedNodeData(_current_fn.out, module, _scope, ctx).items };
            for (int i_1 = (sig.size() + FN_ARGS_BACK); i_1-- > 0; )
            {
                const s_Target& t = SolvedNodeData(sig[i_1], module, _scope, ctx).target;
                if (t && (GET(t, _scope, module, ctx, _here, _helpers, _helpers_data).flags & F_ARG))
                    relaxBlockVar(s_Target(t), relax_mask, _scope, module, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

            };
        };
    }
    else if (k == "loop"_fu)
    {
        const s_SolvedNode init { SolvedNodeData(node_1, module, _scope, ctx).items[LOOP_INIT] };
        const s_SolvedNode pre_cond { SolvedNodeData(node_1, module, _scope, ctx).items[LOOP_COND] };
        const s_SolvedNode body { SolvedNodeData(node_1, module, _scope, ctx).items[LOOP_BODY] };
        const s_SolvedNode post_cond { SolvedNodeData(node_1, module, _scope, ctx).items[LOOP_POST_COND] };
        const s_SolvedNode& post = SolvedNodeData(node_1, module, _scope, ctx).items[LOOP_POST];
        if (post)
            propagateType(s_SolvedNode(post), t_void, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

        if (post_cond)
            propagateType(post_cond, t_bool, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

        if (body)
            propagateType(body, t_void, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

        if (pre_cond)
            propagateType(pre_cond, t_bool, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

        if (init)
            propagateType(init, t_void, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    }
    else if (k == "try"_fu)
    {
        const s_SolvedNode attempt { SolvedNodeData(node_1, module, _scope, ctx).items[0] };
        const s_SolvedNode error { SolvedNodeData(node_1, module, _scope, ctx).items[1] };
        const s_SolvedNode& recover = SolvedNodeData(node_1, module, _scope, ctx).items[2];
        propagateType(s_SolvedNode(recover), t_void, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
        propagateType(error, t_string, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
        propagateType(attempt, t_void, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    }
    else if (k == "catch"_fu)
    {
        const s_SolvedNode trybind { SolvedNodeData(node_1, module, _scope, ctx).items[0] };
        const s_SolvedNode error { SolvedNodeData(node_1, module, _scope, ctx).items[1] };
        const s_SolvedNode& recover = SolvedNodeData(node_1, module, _scope, ctx).items[2];
        propagateType(s_SolvedNode(recover), t_void, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
        propagateType(error, t_string, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
        propagateType(trybind, slot_1, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    }
    else if (k == "root"_fu)
    {
    }
    else
        fail((("TODO: propagateType("_fu + k) + ")."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

}

                                #ifndef DEFt_grow_oob_BuI9
                                #define DEFt_grow_oob_BuI9
inline int& grow_oob_BuI9(fu_VEC<int>& a, const int i, const int fill)
{
    int l0 = a.size();
    if ((l0 <= i))
    {
        a.grow((i + 1));
        for (; l0 < i; l0++)
            a.mutref(l0) = fill;

    };
    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_grow_if_oob_aIXs
                                #define DEFt_grow_if_oob_aIXs
inline fu_VEC<int>& grow_if_oob_aIXs(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_add_xJq8
                                #define DEFt_add_xJq8
inline bool add_xJq8(fu_VEC<int>& dest, const int item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest[i] != item)
            {
                dest.insert(i, item);
                return true;
            };
            return false;
        };
    };
    dest.push(item);
    return true;
}
                                #endif

                                #ifndef DEFt_has_urEh
                                #define DEFt_has_urEh
inline bool has_urEh(fu::view<s_Region> a, const s_Region& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static void maybeCopyOrMove(const s_SolvedNode& node_1, const s_Type& slot, const bool isArgument, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    if ((slot.vtype.canon != SolvedNodeData(node_1, module, _scope, ctx).type.vtype.canon) && !is_never(SolvedNodeData(node_1, module, _scope, ctx).type))
    {
        if ((SolvedNodeData(node_1, module, _scope, ctx).kind == "definit"_fu) && !is_mutref(slot, _here, ctx))
        {
            MUT(node_1, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = slot;
            return;
        };
        fail(((("Considering copy or move for incompatible types: "_fu + humanizeType(slot, module, ctx)) + " <- "_fu) + humanizeType(SolvedNodeData(node_1, module, _scope, ctx).type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
    if (is_ref(slot))
    {
        if (is_trivial(SolvedNodeData(node_1, module, _scope, ctx).type, module, ctx))
        {
            if ((SolvedNodeData(node_1, module, _scope, ctx).kind == "definit"_fu) && isArgument)
                MUT(node_1, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = clear_refs(s_Type(SolvedNodeData(node_1, module, _scope, ctx).type));

        };
        return;
    };
    if (!is_ref(SolvedNodeData(node_1, module, _scope, ctx).type))
        return;

    if (SolvedNodeData(node_1, module, _scope, ctx).kind == "definit"_fu)
    {
        MUT(node_1, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = clear_refs(s_Type(SolvedNodeData(node_1, module, _scope, ctx).type));
        return;
    };
    if (!is_rx_copy(slot))
        fail(("Needs an explicit STEAL or CLONE: "_fu + humanizeType(slot, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!is_trivial(SolvedNodeData(node_1, module, _scope, ctx).type, module, ctx))
    {
        if (!(USE_nontriv_autocopy))
            fail("Non-trivial implicit copy."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        makeNote(N_NonTrivAutoCopy, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    };
    const s_SolvedNode newNode = createCopy(node_1, module, _scope, ctx, _here, _current_fn_or_type);
    s_SolvedNodeData temp {};
    s_SolvedNodeData& newNodeData = MUT(newNode, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope);
    std::swap(temp, newNodeData);
    s_SolvedNodeData& oldNodeData = MUT(node_1, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope);
    std::swap(temp, oldNodeData);
    only_yNXM(oldNodeData.items) = newNode;
    s_SolvedNodeData& newNodeData_1 = MUT(newNode, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope);
    std::swap(temp, newNodeData_1);
}

static void BORROWCK_resolveByTempCopy(const s_SolvedNode& node_1, const s_Type& slot, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    s_Type slot_1 = make_copyable(clear_refs(s_Type(slot)));
    maybeCopyOrMove(node_1, slot_1, false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
}

static void BORROWCK_resolveByTempCopy(const s_SolvedNode& callsite_2, const int idx, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    fu::view<s_Argument> host_args = EXT(SolvedNodeData(callsite_2, module, _scope, ctx).target, module, _scope, ctx).args;
    BORROWCK_resolveByTempCopy(s_SolvedNode(SolvedNodeData(callsite_2, module, _scope, ctx).items[idx]), host_args[idx].type, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
}

                                #ifndef DEF_DEV_DisableBCK
                                #define DEF_DEV_DisableBCK
inline constexpr unsigned DEV_DisableBCK = (0x1u << 0u);
                                #endif

static const s_Overload& Region_GET(const s_Region& r, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const int idx = (Region_isArg(r) ? Region_toArgIndex(r) : int(Region_toLocalIndex(r)));
    return GET(nested(idx, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _helpers, _helpers_data);
}

static void validate(const int i, const s_Argument& host_arg, fu::view<s_Lifetime> bck_unwound, const int i0, const int arg_first, const int arg_last, const s_Lifetime& unwound, s_CurrentFn& _current_fn, fu::view<s_Argument> host_args, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_SolvedNode> args_1, const s_Module& module, s_Scope& _scope, const s_Target& target_6, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_SolvedNode& callsite_2, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    if (has(host_arg.risk_free, i))
        return;

    const s_Lifetime& unwound1 = bck_unwound[i];
    if ((i0 >= arg_first) && (i0 <= arg_last) && (i >= arg_first) && (i <= arg_last))
    {
        for (int i_1 = 0; i_1 < unwound.uni0n.size(); i_1++)
        {
            const int arg0 = Region_asArgIndex(unwound.uni0n[i_1]);
            if (arg0 > 0)
            {
                for (int i_2 = 0; i_2 < unwound1.uni0n.size(); i_2++)
                {
                    const int arg1 = Region_asArgIndex(unwound1.uni0n[i_2]);
                    if (arg1 < arg0)
                        add_xJq8(grow_if_oob_aIXs(_current_fn.flow.args_at_risk, arg0), arg1);

                };
            };
        };
    };
    s_Lifetime inter = Lifetime_inter(unwound, unwound1);
    if (!inter)
        return;

    const s_Argument& other = host_args[i];

    {
        int which = -1;
        if (!(is_mutref(host_arg.type, _here, ctx) || (host_arg.flags & F_IMPLICIT)))
            which = i0;
        else if (!(is_mutref(other.type, _here, ctx) || (other.flags & F_IMPLICIT)))
            which = i;

        if ((which >= 0))
        {
            if (is_rx_copy(SolvedNodeData(args_1[which], module, _scope, ctx).type))
            {
                const s_SolvedNode& argLet = arg_lets(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx)[which];
                const s_Region argLt = Region_fromArgIndex(SolvedNodeData(argLet, module, _scope, ctx).target.index);
                const bool isReturned = has_urEh(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).type.lifetime.uni0n, argLt);
                if (!isReturned)
                    return BORROWCK_resolveByTempCopy(callsite_2, which, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

            };
        };
    };
    if (!(options.dev & DEV_DisableBCK))
    {
        fu_STR err = qWHAT(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data);
        err += (((host_args.size() == 2) && (GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).flags & F_OPERATOR)) ? ": Both operands refer to:\n"_fu : (x7E_OZkl((x7E_OZkl(((((": Arguments "_fu + qBAD(human(host_args[i0].name, module, _scope, ctx, _here, _helpers, _helpers_data))) + " and "_fu) + qBAD(human(host_args[i].name, module, _scope, ctx, _here, _helpers, _helpers_data))) + " (args #"_fu), fu::i64dec(i0)) + " and #"_fu), fu::i64dec(i)) + ") both refer to:\n"_fu));
        for (int i_1 = 0; i_1 < inter.uni0n.size(); i_1++)
        {
            const s_Region& o = inter.uni0n[i_1];
            err += "\n                "_fu;
            err += qWHAT(Region_GET(o, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data);
        };
        fail(fu_STR(err), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

                                #ifndef DEFt_add_EZEO
                                #define DEFt_add_EZEO
inline void add_EZEO(fu_VEC<s_Region>& a, fu::view<s_Region> b, fu_VEC<int>& extras, const int extra)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        if ((X >= Y))
        {
            if (X != Y)
            {
                a.insert(x, Y);
                extras.insert(x, extra);
                y++;
            }
            else
                y++;

        };
        x++;
    };
    if (y < b.size())
    {
        a += fu::get_view(b, y, b.size());
        while (y++ < b.size())
            extras += extra;

    };
}
                                #endif

static s_Flow& flow(s_CurrentFn& _current_fn)
{
    return _current_fn.flow;
}

                                #ifndef DEFt_unless_oob_fSHT
                                #define DEFt_unless_oob_fSHT
inline const fu_VEC<int>& unless_oob_fSHT(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

static s_Events& events(s_CurrentFn& _current_fn)
{
    return _current_fn.events;
}

                                #ifndef DEFt_unless_oob_YNdz
                                #define DEFt_unless_oob_YNdz
inline const s_RWEvent& unless_oob_YNdz(fu::view<s_RWEvent> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_RWEvent*)fu::NIL);
}
                                #endif

static bool BORROWCK_resolveByMutvar(const int target_6, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type)
{
    s_Overload& o = GET_mut(nested(target_6, _current_fn, module, _scope, ctx), _scope, module);
    if ((o.flags & (F_TODO_FIX_RRET | F_REF)) || is_mutref(o.type, _here, ctx) || !is_rx_copy(o.type))
        return false;

    if (!(o.kind == "var"_fu))
        fail("BUG: Not a variable."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!(o.type.lifetime.uni0n.size() == 1))
        fail("BUG: lt.len != 1"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!(o.flags & F_MUT))
    {
        o.flags |= F_MUT;
        s_Type t_let = clear_refs(s_Type(o.type));
        MUT(s_SolvedNode(o.solved), module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = t_let;
    };
    return true;
}

static fu_STR bck_name(const int target_6, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return human(GET(nested(target_6, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _helpers, _helpers_data).name, module, _scope, ctx, _here, _helpers, _helpers_data);
}

static s_SolvedNode callsite(const s_RWEvent& rw, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return s_SolvedNode { s_Target(SolvedNodeData(_current_fn.out, module, _scope, ctx).target), int(rw.nodeidx) };
}

                                #ifndef DEFt_grow_if_oob_umWd
                                #define DEFt_grow_if_oob_umWd
inline s_RWEvent& grow_if_oob_umWd(fu_VEC<s_RWEvent>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_grow_if_oob_xZrd
                                #define DEFt_grow_if_oob_xZrd
inline s_ArgWrite& grow_if_oob_xZrd(fu_VEC<s_ArgWrite>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_grow_if_oob_xvHU
                                #define DEFt_grow_if_oob_xvHU
inline fu_VEC<int>& grow_if_oob_xvHU(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void bck_trackWrites(const s_SolvedNode& callsite_2, fu::view<s_Region> regions, fu::view<int> positions, s_TokenIdx& _here, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options)
{
    _here = SolvedNodeData(callsite_2, module, _scope, ctx).token;
    const int loop_start = _current_fn.loop_start;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target_6 = Region_asIndex(regions[i]);
        if (!target_6)
            continue;

        const int position = positions[i];
        fu_VEC<int> invalidates_1 { unless_oob_fSHT(flow(_current_fn).invalidates, target_6) };
        for (int i_1 = 0; i_1 < invalidates_1.size(); i_1++)
        {
            const int other = invalidates_1[i_1];
            const s_RWEvent& u = unless_oob_YNdz(events(_current_fn).used_in_a_loop, other);
            if (u.target)
            {
                if (!(BORROWCK_resolveByMutvar(other, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type) || (options.dev & DEV_DisableBCK)))
                    fail(((((((((("Write to "_fu + qBAD(bck_name(target_6, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data))) + " at call to "_fu) + qWHAT(GET(SolvedNodeData(callsite_2, module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)) + " invalidates the use of "_fu) + qBAD(bck_name(other, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data))) + " at "_fu) + addr_and_snippet(SolvedNodeData(callsite(u, _current_fn, module, _scope, ctx), module, _scope, ctx).token, ctx, module)) + "\n\t... on next loop iteration.\n\n\tWritten"_fu) + qSTACK(SolvedNodeData(callsite_2, module, _scope, ctx).target, position, fu_VEC<s_Target>{}, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        const s_RWEvent write = s_RWEvent { int(target_6), int(callsite_2.nodeidx) };
        for (int i_1_1 = 0; i_1_1 < invalidates_1.size(); i_1_1++)
        {
            s_RWEvent& u = grow_if_oob_umWd(events(_current_fn).snap.invalidated_by, int(invalidates_1[i_1_1]));
            if (!u.target)
                u = write;

        };
        if (has(flow(_current_fn).is_arg, target_6))
        {
            add_xJq8(events(_current_fn).snap.args_written, target_6);
            s_ArgWrite* _0;
            (*(_0 = &(grow_if_oob_xZrd(events(_current_fn).args_written_via, target_6))) ? *_0 : *_0 = s_ArgWrite { int(callsite_2.nodeidx), int(position) });
            if (loop_start)
            {
                for (int i_1_2 = 0; i_1_2 < events(_current_fn).args_in_a_loop.size(); i_1_2++)
                    add_xJq8(grow_if_oob_xvHU(flow(_current_fn).args_at_risk, int(events(_current_fn).args_in_a_loop[i_1_2])), target_6);

            };
        };
        events(_current_fn).writes += write;
    };
}

                                #ifndef DEFt_unless_oob_HoLq
                                #define DEFt_unless_oob_HoLq
inline const fu_VEC<int>& unless_oob_HoLq(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_add_k3Ch
                                #define DEFt_add_k3Ch
inline void add_k3Ch(fu_VEC<s_Region>& a, fu::view<s_Region> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        if ((X >= Y))
        {
            if (X != Y)
            {
                a.insert(x, Y);
                y++;
            }
            else
                y++;

        };
        x++;
    };
    if (y < b.size())
        a += fu::get_view(b, y, b.size());

}
                                #endif

                                #ifndef DEFt_keep_EylT
                                #define DEFt_keep_EylT
inline fu_VEC<s_Region>& keep_EylT(fu_VEC<s_Region>& a, fu::view<s_Region> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        if (X == Y)
        {
            x++;
            y++;
        }
        else if (X > Y)
            y++;
        else
            a.splice(x, 1);

    };
    if (x < a.size())
        a.shrink(x);

    return a;
}
                                #endif

                                #ifndef DEFt_inter_JtMV
                                #define DEFt_inter_JtMV
inline fu_VEC<s_Region> inter_JtMV(const fu_VEC<s_Region>& a, const fu_VEC<s_Region>& b)
{
    if (a.size() > b.size())
        return inter_JtMV(b, a);

    /*MOV*/ fu_VEC<s_Region> a_1 { a };
    keep_EylT(a_1, b);
    return /*NRVO*/ a_1;
}
                                #endif

                                #ifndef DEFt_first_pdPA
                                #define DEFt_first_pdPA
inline const s_Region& first_pdPA(fu::view<s_Region> s)
{
    return (s.size() ? s[0] : fu::fail("len == 0"_fu));
}
                                #endif

static fu_STR RWEvent_stack(const int nodeidx_3, const int target_6, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Target* _0;
    const s_Target& nodeown_1 = (*(_0 = &(SolvedNodeData(_current_fn.out, module, _scope, ctx).target)) ? *_0 : fail("RWEvent_stack: no current fn."_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
    const s_SolvedNode node_1 = s_SolvedNode { s_Target(nodeown_1), int(nodeidx_3) };
    if (SolvedNodeData(node_1, module, _scope, ctx).kind != "call"_fu)
        return "\n\tVia "_fu + qKW(SolvedNodeData(node_1, module, _scope, ctx).kind);

    fu_STR stack {};
    if (target_6)
    {
        const fu_VEC<s_Region>& uni0n_1 = GET(nested(target_6, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _helpers, _helpers_data).type.lifetime.uni0n;
        if (uni0n_1)
        {
            for (int i = 0; i < SolvedNodeData(node_1, module, _scope, ctx).items.size(); i++)
            {
                const s_SolvedNode& arg = SolvedNodeData(node_1, module, _scope, ctx).items[i];
                if (inter_JtMV(SolvedNodeData(arg, module, _scope, ctx).type.lifetime.uni0n, uni0n_1))
                {
                    const s_ArgWrite& written_via_1 = EXT(SolvedNodeData(node_1, module, _scope, ctx).target, module, _scope, ctx).args[i].written_via;
                    if (written_via_1)
                    {
                        stack = qSTACK(written_via_1, SolvedNodeData(node_1, module, _scope, ctx).target, fu_VEC<s_Target>{}, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);
                        break;
                    };
                };
            };
        };
    };
    const s_Overload& o = GET(SolvedNodeData(node_1, module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data);
    return ("\n\tAt call to "_fu + qID(o.name)) + stack;
}

                                #ifndef DEFt_add_9KMC
                                #define DEFt_add_9KMC
inline void add_9KMC(fu_VEC<int>& a, fu::view<int> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const int X = a[x];
        const int Y = b[y];
        if ((X >= Y))
        {
            if (X != Y)
            {
                a.insert(x, Y);
                y++;
            }
            else
                y++;

        };
        x++;
    };
    if (y < b.size())
        a += fu::get_view(b, y, b.size());

}
                                #endif

static void bck_trackRead(const s_SolvedNode& callsite_2, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options)
{
    if (!is_ref(SolvedNodeData(callsite_2, module, _scope, ctx).type) || !SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index)
        return;

    _here = SolvedNodeData(callsite_2, module, _scope, ctx).token;
    fu_VEC<s_Region> regions { SolvedNodeData(callsite_2, module, _scope, ctx).type.lifetime.uni0n };
    const int loop_start = _current_fn.loop_start;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target_6 = Region_asIndex(regions[i]);
        if (!target_6)
            continue;

        if (events(_current_fn).snap.invalidated_by.size() > target_6)
        {
            const s_RWEvent& u = events(_current_fn).snap.invalidated_by[target_6];
            if (u.target)
            {
                if (!(BORROWCK_resolveByMutvar(target_6, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type) || (options.dev & DEV_DisableBCK)))
                    fail((((((((("Cannot access"_fu + " "_fu) + qBAD(bck_name(target_6, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data))) + ", reference invalidated by write to"_fu) + " "_fu) + qBAD(bck_name(u.target, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data))) + " at "_fu) + addr_and_snippet(SolvedNodeData(callsite(u, _current_fn, module, _scope, ctx), module, _scope, ctx).token, ctx, module)) + RWEvent_stack(u.nodeidx, u.target, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        if (events(_current_fn).snap.args_written && has(flow(_current_fn).is_arg, target_6))
        {
            fu_VEC<int>* _0;
            (_0 = &(grow_if_oob_aIXs(flow(_current_fn).args_at_risk, target_6)), add_9KMC(*_0, fu_VEC<int>(events(_current_fn).snap.args_written)));
        };
        events(_current_fn).reads += s_RWEvent { int(target_6), int(callsite_2.nodeidx) };
    };
    if (loop_start)
    {
        for (int i_1 = 0; i_1 < regions.size(); i_1++)
        {
            const int target_6 = Region_asIndex(regions[i_1]);
            if (!target_6)
                continue;

            if (target_6 < loop_start)
            {
                s_RWEvent& u = grow_if_oob_umWd(events(_current_fn).used_in_a_loop, target_6);
                if (!u.target)
                    u = s_RWEvent { int(loop_start), int(callsite_2.nodeidx) };

            };
            if (has(flow(_current_fn).is_arg, target_6))
                add_xJq8(events(_current_fn).args_in_a_loop, target_6);

        };
    };
}

static void bck_call(const s_SolvedNode& callsite_2, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    const s_Target target_6 { SolvedNodeData(callsite_2, module, _scope, ctx).target };
    fu_VEC<s_SolvedNode> args_1 { SolvedNodeData(callsite_2, module, _scope, ctx).items };
    if (args_1)
    {
        fu_VEC<s_Argument> host_args { EXT(target_6, module, _scope, ctx).args };
        const int ooe_read0 = _current_fn.events.reads.size();
        const int ooe_write0 = _current_fn.events.writes.size();
        fu_VEC<int> ooe_reads {};
        fu_VEC<int> ooe_writes {};
        const bool ooe_isRTL = isRTL(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data));
        const int ooe_START = (ooe_isRTL ? (args_1.size() - 1) : 0);

        {
            int ooe_read0_1 = ooe_read0;
            int ooe_write0_1 = ooe_write0;
            for (int ooe_i = 0; ooe_i < args_1.size(); ooe_i++)
            {
                bck_node(s_SolvedNode(args_1[(ooe_isRTL ? (ooe_START - ooe_i) : int(ooe_i))]), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
                const int r1 = _current_fn.events.reads.size();
                const int w1 = _current_fn.events.writes.size();
                if (r1 > ooe_read0_1)
                    grow_oob_BuI9(ooe_reads, ooe_i, ooe_read0_1) = r1;

                if (w1 > ooe_write0_1)
                    grow_oob_BuI9(ooe_writes, ooe_i, ooe_write0_1) = w1;

                ooe_read0_1 = r1;
                ooe_write0_1 = w1;
            };
        };
        fu_VEC<s_Region> bck_writes {};
        fu_VEC<int> bck_positions {};
        int mutref_first = -1;
        int mutref_last = -1;
        int ref_first = -1;
        int ref_last = -1;
        fu_VEC<s_Lifetime> bck_unwound {};
        int arg_first = -1;
        int arg_last = -1;
        for (int i0 = 0; i0 < args_1.size(); i0++)
        {
            s_Argument host_arg { host_args[i0] };
            s_Type expect { host_arg.type };
            if (is_ref(expect))
            {
                if (!bck_unwound)
                {
                    if ((mutref_first >= 0) || ((ref_first >= 0) && is_mutref(expect, _here, ctx)))
                    {
                        bck_unwound.resize(args_1.size());
                        for (int i0_1 = ref_first; (i0_1 <= ref_last); i0_1++)
                        {
                            const s_Lifetime& unwound = (bck_unwound.mutref(i0_1) = Lifetime_unwind(s_Lifetime(SolvedNodeData(args_1[i0_1], module, _scope, ctx).type.lifetime), 0, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data));
                            for (int i = 0; i < unwound.uni0n.size(); i++)
                            {
                                if (Region_asIndex(unwound.uni0n[i]) > 0)
                                {
                                    arg_first = ((arg_first < 0) ? i0_1 : arg_first);
                                    arg_last = i0_1;
                                    continue;
                                };
                            };
                        };
                    };
                };
                if (bck_unwound)
                {
                    const s_Lifetime& unwound = (bck_unwound.mutref(i0) = Lifetime_unwind(s_Lifetime(SolvedNodeData(args_1[i0], module, _scope, ctx).type.lifetime), 0, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data));
                    for (int i = 0; i < unwound.uni0n.size(); i++)
                    {
                        if (Region_asIndex(unwound.uni0n[i]) > 0)
                        {
                            arg_first = ((arg_first < 0) ? i0 : arg_first);
                            arg_last = i0;
                            continue;
                        };
                    };
                    if (is_mutref(expect, _here, ctx))
                    {
                        for (int i_1 = ref_first; (i_1 <= ref_last); i_1++)
                        {
                            if (is_ref(host_args[i_1].type))
                                validate(i_1, host_arg, bck_unwound, i0, arg_first, arg_last, unwound, _current_fn, host_args, _here, ctx, args_1, module, _scope, target_6, _helpers, _helpers_data, callsite_2, _current_fn_or_type, options, _notes);

                        };
                    }
                    else if (bck_unwound)
                    {
                        for (int i_1 = mutref_first; (i_1 <= mutref_last); i_1++)
                        {
                            if (is_mutref(host_args[i_1].type, _here, ctx))
                                validate(i_1, host_arg, bck_unwound, i0, arg_first, arg_last, unwound, _current_fn, host_args, _here, ctx, args_1, module, _scope, target_6, _helpers, _helpers_data, callsite_2, _current_fn_or_type, options, _notes);

                        };
                    };
                };

                {
                    if (ref_first < 0)
                        ref_first = i0;

                    ref_last = i0;
                };
                if (is_mutref(expect, _here, ctx))
                {
                    if (mutref_first < 0)
                        mutref_first = i0;

                    mutref_last = i0;
                    if (host_arg.written_via)
                    {
                        const s_SolvedNode& arg = args_1[i0];
                        if (!(is_mutref(host_arg.type, _here, ctx)))
                            fail((qID(human(host_arg.name, module, _scope, ctx, _here, _helpers, _helpers_data)) + ": host_arg.written but !host_arg.is_mutref"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

                        if (!(is_mutref(SolvedNodeData(arg, module, _scope, ctx).type, _here, ctx)))
                            fail((qID(human(host_arg.name, module, _scope, ctx, _here, _helpers, _helpers_data)) + ": host_arg.written but !arg.is_mutref"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

                        add_EZEO(bck_writes, SolvedNodeData(arg, module, _scope, ctx).type.lifetime.uni0n, bck_positions, i0);
                    };
                };
            };
        };
        if (bck_writes)
        {
            if (!(bck_positions.size() == bck_writes.size()))
                fail("bck_position.len is off"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            bck_trackWrites(callsite_2, bck_writes, bck_positions, _here, module, _scope, ctx, _current_fn, _helpers, _helpers_data, _current_fn_or_type, options);
        };
        int MUSTSEQ_mask = 0;

        {
            int ooe_write0_1 = ooe_write0;
            for (int ooe_iw = 0; ooe_iw < ooe_writes.size(); ooe_iw++)
            {
                const int ooe_write1 = ooe_writes[ooe_iw];
                if (ooe_write1 == ooe_write0_1)
                    continue;

                for (int w = ooe_write0_1; w < ooe_write1; w++)
                {
                    const s_RWEvent& write = _current_fn.events.writes[w];
                    fu_VEC<s_Region> written { GET(nested(write.target, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _helpers, _helpers_data).type.lifetime.uni0n };
                    const bool iw_evalsFirst = (ooe_iw == 0);
                    fu_VEC<s_Region> written_and_invalidated {};
                    if (!iw_evalsFirst)
                    {
                        written_and_invalidated = written;
                        for (int i = 0; i < written.size(); i++)
                        {
                            const int index_3 = Region_asIndex(written[i]);
                            if (!index_3)
                                continue;

                            fu::view<int> invalidates_1 = unless_oob_HoLq(flow(_current_fn).invalidates, index_3);
                            add_k3Ch(written_and_invalidated, fu::view_of(invalidates_1, s_Region{}));
                        };
                    };
                    int ooe_read0_1 = ooe_read0;
                    for (int ooe_ir = 0; ooe_ir < ooe_reads.size(); ooe_ir++)
                    {
                        const int ooe_read1 = ooe_reads[ooe_ir];
                        if (ooe_ir != ooe_iw)
                        {
                            const bool ooe_ir_evalsBefore_iw = (ooe_ir < ooe_iw);
                            fu_VEC<s_Region> written_1 { (ooe_ir_evalsBefore_iw ? written_and_invalidated : written) };
                            if (!(written_1))
                                fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

                            for (int r = ooe_read0_1; r < ooe_read1; r++)
                            {
                                const s_RWEvent& read = _current_fn.events.reads[r];
                                const fu_VEC<s_Region>& regions = GET(nested(read.target, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _helpers, _helpers_data).type.lifetime.uni0n;
                                if (!inter_JtMV(regions, written_1))
                                    continue;

                                const int r_1 = (ooe_isRTL ? (ooe_START - ooe_ir) : int(ooe_ir));
                                const int w_1 = (ooe_isRTL ? (ooe_START - ooe_iw) : int(ooe_iw));
                                if (ooe_ir_evalsBefore_iw)
                                {
                                    const s_SolvedNode& arg = args_1[r_1];
                                    const fu_VEC<s_Region>& bound = SolvedNodeData(arg, module, _scope, ctx).type.lifetime.uni0n;
                                    fu_VEC<s_Region> inter = inter_JtMV(bound, written_1);
                                    if (inter)
                                    {
                                        if (is_mutref(host_args[r_1].type, _here, ctx) || !is_rx_copy(SolvedNodeData(arg, module, _scope, ctx).type))
                                        {
                                            _here = SolvedNodeData(callsite_2, module, _scope, ctx).token;
                                            fail((((x7E_OZkl((((((((x7E_OZkl((((("At call to "_fu + qWHAT(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)) + ", argument binding "_fu) + qBAD(human(host_args[r_1].name, module, _scope, ctx, _here, _helpers, _helpers_data))) + " (arg #"_fu), fu::i64dec(r_1)) + ") at "_fu) + addr_and_snippet(SolvedNodeData(arg, module, _scope, ctx).token, ctx, module)) + "\n\t... invalidated by subsequent write to "_fu) + qWHAT(Region_GET(first_pdPA(inter), _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)) + " upon evaluation of argument "_fu) + qBAD(human(host_args[w_1].name, module, _scope, ctx, _here, _helpers, _helpers_data))) + " (arg #"_fu), fu::i64dec(w_1)) + ") at "_fu) + addr_and_snippet(SolvedNodeData(callsite(write, _current_fn, module, _scope, ctx), module, _scope, ctx).token, ctx, module)) + RWEvent_stack(write.nodeidx, write.target, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);
                                        };
                                        BORROWCK_resolveByTempCopy(callsite_2, r_1, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
                                    };
                                };
                                if (!ooe_isRTL)
                                {
                                    const int mustSeq = (ooe_ir_evalsBefore_iw ? r_1 : w_1);
                                    MUSTSEQ_mask |= (1 << (mustSeq & 31));
                                };
                                break;
                            };
                        };
                        ooe_read0_1 = ooe_read1;
                    };
                };
                ooe_write0_1 = ooe_write1;
            };
        };
        int* _0;
        (!*(_0 = &(MUT(callsite_2, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).helpers)) ? *_0 : fail("helpers already contain something"_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) = MUSTSEQ_mask;
    }
    else if (GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "var"_fu)
        bck_trackRead(callsite_2, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options);

}

static void bck_loop(const s_SolvedNode& node_1, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    fu_VEC<s_SolvedNode> items_5 { SolvedNodeData(node_1, module, _scope, ctx).items };
    bck_node(s_SolvedNode(items_5[0]), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    const int loop_start0 = _current_fn.loop_start;
    const int loop_start = GET_next_local_index(_current_fn, module, _scope, ctx);
    fu_VEC<s_RWEvent> events0 { _current_fn.events.used_in_a_loop };
    _current_fn.loop_start = loop_start;
    fu_DEFER(_current_fn.loop_start = loop_start0);
    for (int i = 1; i < items_5.size(); i++)
        bck_node(items_5[i], module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    _current_fn.events.used_in_a_loop = events0;
}

static void bck_nodes(fu::view<s_SolvedNode> items_5, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    for (int i = 0; i < items_5.size(); i++)
        bck_node(items_5[i], module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

}

static void bck_trackInit(const s_Target& target_6, s_CurrentFn& _current_fn)
{
    const int index_3 = target_6.index;
    if (!index_3)
        return;

    if (unless_oob_YNdz(events(_current_fn).snap.invalidated_by, index_3))
        events(_current_fn).snap.invalidated_by.mutref(index_3) = s_RWEvent{};

    if (_current_fn.loop_start > index_3)
        _current_fn.loop_start = index_3;

}

static void bck_let(const s_SolvedNode& node_1, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    bck_nodes(fu_VEC<s_SolvedNode>(SolvedNodeData(node_1, module, _scope, ctx).items), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    if (is_ref(SolvedNodeData(node_1, module, _scope, ctx).type))
    {
        if (SolvedNodeData(node_1, module, _scope, ctx).flags & F_ARG)
            fail("bck_let: Found an argument!"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        const s_SolvedNode& init = SolvedNodeData(node_1, module, _scope, ctx).items[LET_INIT];
        if (!(is_ref(SolvedNodeData(init, module, _scope, ctx).type)))
            fail("What!"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        Reference_trackLocalRef(_current_fn.flow, SolvedNodeData(node_1, module, _scope, ctx).target.index, SolvedNodeData(init, module, _scope, ctx).type.lifetime);
    };
    bck_trackInit(SolvedNodeData(node_1, module, _scope, ctx).target, _current_fn);
}

inline static void Events_merge_CAZ7(fu_VEC<s_RWEvent>& dest, fu::view<s_RWEvent> src_2)
{
    if (dest.size() < src_2.size())
        dest.grow(src_2.size());

    for (int i = 0; i < src_2.size(); i++)
    {
        s_RWEvent* _0;
        (*(_0 = &(dest.mutref(i))) ? *_0 : *_0 = s_RWEvent(src_2[i]));
    };
}

inline static void Events_merge_p8Tz(fu_VEC<int>& dest, fu::view<int> src_2)
{
    if (dest.size() < src_2.size())
        dest.grow(src_2.size());

    for (int i = 0; i < src_2.size(); i++)
    {
        int* _0;
        (*(_0 = &(dest.mutref(i))) ? *_0 : *_0 = int(src_2[i]));
    };
}

static void Events_merge(s_Events& events, const s_EventsSnap& snap)
{
    Events_merge_CAZ7(events.snap.invalidated_by, snap.invalidated_by);
    Events_merge_p8Tz(events.snap.args_written, snap.args_written);
}

static void bck_if(const s_SolvedNode& node_1, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    fu_VEC<s_SolvedNode> items_5 { SolvedNodeData(node_1, module, _scope, ctx).items };
    bck_node(s_SolvedNode(items_5[0]), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    s_EventsSnap e_Restore_AfterCond { _current_fn.events.snap };
    bck_node(items_5[1], module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    s_EventsSnap e_Merge_AfterCons { _current_fn.events.snap };
    _current_fn.events.snap = e_Restore_AfterCond;
    bck_node(items_5[2], module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    Events_merge(_current_fn.events, e_Merge_AfterCons);
}

static void bck_block(const s_SolvedNode& node_1, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    fu_VEC<s_SolvedNode> defers {};
    fu_VEC<s_SolvedNode> items_5 { SolvedNodeData(node_1, module, _scope, ctx).items };
    for (int i = 0; i < items_5.size(); i++)
    {
        const s_SolvedNode& node_2 = items_5[i];
        if (SolvedNodeData(node_2, module, _scope, ctx).kind == "defer"_fu)
            defers += only_Mzjf(SolvedNodeData(node_2, module, _scope, ctx).items);
        else
            bck_node(s_SolvedNode(node_2), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    };
    for (int i_1 = defers.size(); i_1-- > 0; )
        bck_node(defers[i_1], module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

}

static void bck_node(const s_SolvedNode& node_1, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    fu_STR k { SolvedNodeData(node_1, module, _scope, ctx).kind };
    if (k == "call"_fu)
        return bck_call(node_1, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    if (k == "loop"_fu)
        return bck_loop(node_1, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    if (k == "let"_fu)
        return bck_let(node_1, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    if (k == "if"_fu)
        return bck_if(node_1, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    if (k == "block"_fu)
        return bck_block(node_1, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    bck_nodes(fu_VEC<s_SolvedNode>(SolvedNodeData(node_1, module, _scope, ctx).items), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
}

static void mcom_node(const s_SolvedNode& node_1, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    fu_VEC<s_SolvedNode> items_5 { SolvedNodeData(node_1, module, _scope, ctx).items };
    for (int i = 0; i < items_5.size(); i++)
        mcom_node(s_SolvedNode(items_5[i]), module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    _here = SolvedNodeData(node_1, module, _scope, ctx).token;
    fu::view<char> k = SolvedNodeData(node_1, module, _scope, ctx).kind;
    s_Type t { SolvedNodeData(node_1, module, _scope, ctx).type };
    if (k == "call"_fu)
    {
        const s_Target& target_6 = SolvedNodeData(node_1, module, _scope, ctx).target;
        if (GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).kind != "field"_fu)
        {
            fu_VEC<s_Argument> host_args { EXT(target_6, module, _scope, ctx).args };
            for (int i_1 = 0; i_1 < items_5.size(); i_1++)
                maybeCopyOrMove(items_5[i_1], s_Type(host_args[i_1].type), true, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

        };
    }
    else if (k == "block"_fu)
    {
        if (SolvedNodeData(node_1, module, _scope, ctx).helpers)
        {
            const s_Helpers h = s_Helpers { int(SolvedNodeData(node_1, module, _scope, ctx).helpers) };
            for (int i_1 = 0; i_1 < _helpers_data[h.index].returns.size(); i_1++)
                maybeCopyOrMove(s_SolvedNode(only_Mzjf(SolvedNodeData(_helpers_data[h.index].returns[i_1], module, _scope, ctx).items)), _helpers_data[h.index].ret_actual, false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

        };
    }
    else if (k == "let"_fu)
    {
        if (SolvedNodeData(node_1, module, _scope, ctx).items && !is_ref(SolvedNodeData(node_1, module, _scope, ctx).type))
        {
            const s_SolvedNode& init = SolvedNodeData(node_1, module, _scope, ctx).items[LET_INIT];
            if (init && is_ref(SolvedNodeData(init, module, _scope, ctx).type))
                maybeCopyOrMove(s_SolvedNode(init), s_Type(SolvedNodeData(node_1, module, _scope, ctx).type), false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

        };
    }
    else if (k == "if"_fu)
    {
        if (!is_void(t) && !is_ref(t))
        {
            maybeCopyOrMove(items_5[1], s_Type(t), false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
            maybeCopyOrMove(items_5[2], t, false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
        };
    }
    else if (k == "or"_fu)
    {
        if (!is_bool(t) && !is_ref(t))
        {
            for (int i_1 = 0; i_1 < items_5.size(); i_1++)
                maybeCopyOrMove(items_5[i_1], t, false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

        };
    }
    else if (k == "arrlit"_fu)
    {
        s_Type t_1 = clear_sliceable(t, _here, ctx);
        for (int i_1 = 0; i_1 < items_5.size(); i_1++)
            maybeCopyOrMove(items_5[i_1], t_1, false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

    };
}

static void runAllPasses(const s_SolvedNode& node_1, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (SELF_TEST)
        test_node(node_1, "PASS.0 "_fu, module, _scope, ctx, _here, _helpers, _helpers_data);

    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType(node_1, s_Type(SolvedNodeData(node_1, module, _scope, ctx).type), RELAX_before_bck, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    if (SELF_TEST)
        test_node(node_1, "PASS.0.relax "_fu, module, _scope, ctx, _here, _helpers, _helpers_data);

    bck_node(node_1, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    if (SELF_TEST)
        test_node(node_1, "PASS.1 "_fu, module, _scope, ctx, _here, _helpers, _helpers_data);

    mcom_node(node_1, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    if (SELF_TEST)
        test_node(node_1, "PASS.2 "_fu, module, _scope, ctx, _here, _helpers, _helpers_data);

    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType(node_1, s_Type(SolvedNodeData(node_1, module, _scope, ctx).type), RELAX_all, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    if (SELF_TEST)
        test_node(node_1, "PASS.2.relax "_fu, module, _scope, ctx, _here, _helpers, _helpers_data);

}

static s_SolvedNode solveBlock(const fu_VEC<s_SolvedNode>& items_5, const int helpers_idx, const bool expr, const short mask_1, const int fnbody_of, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Helpers& h = _helpers[helpers_idx];
    if (!(mask_1 & HM_CanReturn))
        _helpers_data.mutref(h.index).ret_expect = s_Type{};

    if (expr && items_5 && !is_void(SolvedNodeData(last_0oqA(items_5), module, _scope, ctx).type))
        _helpers_data.mutref(h.index).returns += createJump(s_Target{}, last_0oqA(items_5), h, _here, _current_fn_or_type, module, _scope);

    if (_helpers_data[h.index].returns)
    {
        for (int i = 0; i < _helpers_data[h.index].returns.size(); i++)
        {
            const s_SolvedNode expr_1 { only_Mzjf(SolvedNodeData(_helpers_data[h.index].returns[i], module, _scope, ctx).items) };
            reportReturnType(h, SolvedNodeData(expr_1, module, _scope, ctx).type, _helpers_data, _here, ctx, _helpers, _scope, module);
        };
        if (is_mutref(_helpers_data[h.index].ret_actual, _here, ctx))
        {
            for (int i_1 = 0; i_1 < _helpers_data[h.index].returns.size(); i_1++)
            {
                const s_SolvedNode expr_1 { only_Mzjf(SolvedNodeData(_helpers_data[h.index].returns[i_1], module, _scope, ctx).items) };
                if (!Lifetime_allowsMutrefReturn(s_Lifetime(SolvedNodeData(expr_1, module, _scope, ctx).type.lifetime), _helpers_data[h.index].locals_start, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data))
                {
                    reportReturnType(h, clear_mutref(s_Type(SolvedNodeData(expr_1, module, _scope, ctx).type)), _helpers_data, _here, ctx, _helpers, _scope, module);
                    break;
                };
            };
        };
        for (int i_1 = 0; i_1 < _helpers_data[h.index].returns.size(); i_1++)
        {
            const s_SolvedNode expr_1 { only_Mzjf(SolvedNodeData(_helpers_data[h.index].returns[i_1], module, _scope, ctx).items) };
            if (is_ref(SolvedNodeData(expr_1, module, _scope, ctx).type) && !fnbody_of)
                Lifetime_F_TODO_FIX_RRET(s_Lifetime(SolvedNodeData(expr_1, module, _scope, ctx).type.lifetime), _helpers_data[h.index].locals_start, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

        };
        if (_helpers_data[h.index].ret_actual.lifetime)
            _helpers_data.mutref(h.index).ret_actual.lifetime = Lifetime_placeholder();

        is_ref(_helpers_data[h.index].ret_actual);
    };

    {
        if (is_never(SolvedNodeData(if_last_0oqA(items_5), module, _scope, ctx).type))
        {
            if (!_helpers_data[h.index].ret_actual)
                _helpers_data.mutref(h.index).ret_actual = t_never;

        }
        else if (fnbody_of)
        {
            if (_helpers_data[h.index].ret_actual)
            {
                if (!(isAssignable(t_void, _helpers_data[h.index].ret_actual)))
                    fail("Non-void returning fn missing a final return."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        if (!_helpers_data[h.index].ret_actual)
            _helpers_data.mutref(h.index).ret_actual = t_void;

    };
    mcom_BlockReturns_CopyOrMoveDecision(h, _helpers_data, module, _scope, ctx, _current_fn, _here, _helpers, _current_fn_or_type);
    Lifetime_placeholder_remove(_helpers_data.mutref(h.index).ret_actual.lifetime);
    const s_Type* _0;
    /*MOV*/ const s_SolvedNode block = createBlock((*(_0 = &(_helpers_data[h.index].ret_actual)) ? *_0 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), fu_VEC<s_SolvedNode>(items_5), ((_helpers_data[h.index].mask & HM_LabelUsed) ? _helpers_data[h.index].target : (*(const s_Target*)fu::NIL)), h, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);
    if (fnbody_of)
    {
        const unsigned status_1 = GET(s_Target { int(module.modid), int(fnbody_of) }, _scope, module, ctx, _here, _helpers, _helpers_data).status;
        if (!(status_1 & SS_DIRTY))
            runAllPasses(block, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    };
    return /*NRVO*/ block;
}

static s_SolvedNode solveBlock(const s_Node& node_1, const s_Type& type_3, const int fnbody_of, const short mask_1, const int kills_1, const fu_STR& id_2, const int steal_1, const int locals_start_1, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_Target& _current_fn_or_type, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_Node> nodes_1 = ((node_1.kind == "block"_fu) ? fu_VEC<s_Node>(node_1.items) : fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(node_1) } });
    const fu_STR& id_3 = (id_2 ? id_2 : ((node_1.kind == "block"_fu) ? node_1.value : (*(const fu_STR*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
    fu_DEFER(Scope_pop(_scope, scope0, _helpers));
    const int helpers_idx = _helpers.size();
    push(s_HelpersData { (fnbody_of ? s_Target { int(module.modid), int(fnbody_of) } : s_Target{}), fu_STR(id_3), short(mask_1), (fnbody_of ? -1 : int(SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index)), int(kills_1), (fnbody_of ? +1 : (locals_start_1 ? int(locals_start_1) : GET_next_local_index(_current_fn, module, _scope, ctx))), s_Type(type_3), s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} }, _helpers, _helpers_data);
    if (steal_1)
    {
        s_HelpersData* _0;
        fu_VEC<int>& old = (__extension__ (
        {
            const s_Helpers& h = _helpers[(helpers_idx - 1)];
            _0 = &(_helpers_data.mutref(h.index));
        (void)0;}), *_0).vars;
        fu_VEC<int> vars_1 = steal_UyPn(old, (old.size() - steal_1), old.size());
        s_HelpersData* _1;
        fu_VEC<int>& nEw = (__extension__ (
        {
            const s_Helpers& h = _helpers[helpers_idx];
            _1 = &(_helpers_data.mutref(h.index));
        (void)0;}), *_1).vars;
        nEw += vars_1;
    };
    const bool expr = (!fnbody_of && !is_void(type_3));
    fu_VEC<s_SolvedNode> items_5 = solveNodes(nodes_1, t_void, type_3, expr, (helpers_idx + 1), _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    return solveBlock(items_5, helpers_idx, expr, mask_1, fnbody_of, _helpers, _helpers_data, module, _scope, ctx, _here, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
}

                                #ifndef DEFt_ArgsWritten_shake_N8hJ
                                #define DEFt_ArgsWritten_shake_N8hJ
inline void ArgsWritten_shake_N8hJ(const s_Flow& flow, fu_VEC<s_ArgWrite>& args_1)
{
    for (int i = std::min(args_1.size(), flow.arg_aliases.size()); i-- > 0; )
    {
        const s_ArgWrite x { args_1[i] };
        if (x)
        {
            fu::view<int> aliases = flow.arg_aliases[i];
            for (int i_1 = 0; i_1 < aliases.size(); i_1++)
            {
                s_ArgWrite& y = args_1.mutref(aliases[i_1]);
                if (!y)
                    y = x;

            };
        };
    };
}
                                #endif

static void lazySolveEnd(const s_Target& t, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Options& options, int& _notes, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    s_Overload& o = GET_mut(t, _scope, module);
    fu_VEC<int> reopen {};
    const int parent = o.local_of;
    if (o.status & SS_UPDATED)
    {
        o.status &= ~SS_UPDATED;
        s_Target dedupe {};
        fu_VEC<s_SolvedNode> callsites_1 { EXT(t, module, _scope, ctx).callsites };
        for (int i = 0; i < callsites_1.size(); i++)
        { {
            const s_Target& callsite_2 = callsites_1[i].nodeown;
            if (callsite_2 == dedupe)
                continue;

            dedupe = callsite_2;
            int index_3 = callsite_2.index;
            for (; ; )
            {
                s_Overload& o_1 = GET_mut(s_Target { int(module.modid), int(index_3) }, _scope, module);
                if ((o_1.status & (SS_DID_START | SS_DIRTY)) != SS_DID_START)
                    goto L_0172;

                if (!(o_1.status & SS_FINALIZED))
                {
                    o_1.status |= SS_DIRTY;
                    goto L_0172;
                };
                const int up = o_1.local_of;
                if (up != parent)
                {
                    if (!(up > parent))
                        fail("lazySolveEnd: about to climb up the wrong tree."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                    index_3 = up;
                    continue;
                };
                makeNote(((o_1.kind == "type"_fu) ? N_TypeReopen : N_FnReopen), options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                o_1.status &= ~((SS_DID_START | SS_DIRTY) | SS_FINALIZED);
                reopen += index_3;
                goto L_0172;
            };
          } L_0172:;
        };
    };
    s_Overload& o_1 = GET_mut(t, _scope, module);
    if (!(o_1.status & SS_DIRTY))
        o_1.status |= SS_FINALIZED;
    else
    {
        if (o_1.status & SS_FINALIZED)
            fail("Stray SS_FINALIZED."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        o_1.status &= ~(SS_DID_START | SS_DIRTY);
        makeNote(((o_1.kind == "type"_fu) ? N_TypeResolve : N_FnResolve), options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t_1 = s_Target { int(module.modid), int(reopen[i]) };
        lazySolveStart(t_1, s_Overload(GET(t_1, _scope, module, ctx, _here, _helpers, _helpers_data)), _scope, module, _here, ctx, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    };
}

static s_Target doTrySpecialize(const s_Target& into, const s_Target& overloadIdx, fu::view<s_SolvedNode> args_in, fu_STR&& mangle, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_Type> args_1 {};
    if (use_reorder)
    {
        for (int i = 0; i < reorder.size(); i++)
        {
            const int callsiteIndex = reorder[i];
            args_1.push(((callsiteIndex >= 0) && (callsiteIndex < args_in.size()) ? SolvedNodeData(args_in[callsiteIndex], module, _scope, ctx).type : (*(const s_Type*)fu::NIL)));
        };
    }
    else
    {
        for (int i = 0; i < args_in.size(); i++)
            args_1.push(SolvedNodeData(args_in[i], module, _scope, ctx).type);

    };
    for (int i = 0; i < conversions.size(); i++)
    {
        const fu_VEC<s_Target>& c = conversions[i];
        if (c)
            args_1.mutref(i) = GET(last_ntxL(c), _scope, module, ctx, _here, _helpers, _helpers_data).type;

    };
    if (REST_TYPE)
        args_1.mutref(REST_START) = REST_TYPE;

    fu_STR mangle00 { mangle };
    /*MOV*/ const s_Target SPECFAIL = s_Target { 2147483647, 0 };
    const s_Target& original = (overloadIdx ? overloadIdx : into ? into : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
    s_Template template_1 { EXT(original, module, _scope, ctx).tEmplate };
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    _here = EXT(original, module, _scope, ctx).tEmplate.node.token;
    int parent_idx = GET(original, _scope, module, ctx, _here, _helpers, _helpers_data).local_of;
    for (int i_1 = 0; i_1 < args_1.size(); i_1++)
    {
        const s_Type& arg_t = args_1[i_1];
        if (type_isAddrOfFn(arg_t))
            unpackAddrOfFn_qU1U(arg_t.vtype.canon, 0, module, _scope, ctx, _here, _helpers, _helpers_data, template_1, parent_idx);

    };
    const bool isInline = !!(template_1.node.flags & F_INLINE);
    if (!into && !isInline)
        setSpec(mangle, SPECFAIL, true, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);

    /*MOV*/ s_Target target_6 {};

    {
        const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
        s_ScopeSkipMemos ss0 { _ss };
        const s_HelpersData* _0;
        const int helpers0vars = (__extension__ (
        {
            const s_Helpers& h = last_CUmR(_helpers);
            _0 = &(_helpers_data[h.index]);
        (void)0;}), *_0).vars.size();
        const int helpers_data0 = _helpers_data.size();
        fu_DEFER(
        {
            Scope_pop(_scope, scope0, _helpers);
            _ss = ss0;
            if (_helpers)
            {
                s_HelpersData* _1;
                (__extension__ (
                {
                    const s_Helpers& h = last_CUmR(_helpers);
                    _1 = &(_helpers_data.mutref(h.index));
                (void)0;}), *_1).vars.shrink(helpers0vars);
            };
            _helpers_data.shrink(helpers_data0);
        });
        ScopeSkip_setup(template_1, scope0, isInline, _root_scope, _ss, _here, ctx, _helpers, _helpers_data, _scope, module);
        fu_VEC<s_Node> items_5 { template_1.node.items };
        s_Node& n_fn = template_1.node;
        if (!(n_fn.kind == "fn"_fu))
            fail("n_fn not a `fn`."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        bool ok = true;
        bool remangle = false;
        s_Map_Lvtq typeParams {};
        if (!into)
        {
            fu::view<char> kind_3 = template_1.node.kind;
            const int numArgs = ((kind_3 == "fn"_fu) ? (items_5.size() + FN_ARGS_BACK) : fail(("TODO numArgs for template:"_fu + kind_3), _here, ctx, _helpers, _helpers_data, _scope, module));
            fu_VEC<int> retypeIndices {};
            for (int pass_retype = 0; (pass_retype == 0) || ((pass_retype == 1) && retypeIndices); pass_retype++)
            {
                for (int i_2 = 0; i_2 < numArgs; i_2++)
                {
                    if (pass_retype)
                    {
                        if (!has_zs1w(retypeIndices, i_2))
                            continue;

                    };
                    s_Type inType { ((args_1.size() > i_2) ? args_1[i_2] : (*(const s_Type*)fu::NIL)) };
                    const s_SolvedNode& inValue = (reorder ? ((reorder.size() > i_2) && (reorder[i_2] >= 0) ? args_in[reorder[i_2]] : (*(const s_SolvedNode*)fu::NIL)) : ((args_in.size() > i_2) ? args_in[i_2] : (*(const s_SolvedNode*)fu::NIL)));
                    const s_Node* _2;
                    const s_Node& argNode = (*(_2 = &(items_5[i_2])) ? *_2 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                    const s_Node& annot = argNode.items[LET_TYPE];
                    if (couldRetype(inValue, module, _scope, ctx))
                    {
                        const s_Type& paramType = ((annot.kind == "typeparam"_fu) ? ref_Qfo1(typeParams, annot.value).matched : ((annot.kind == "call"_fu) && !annot.items ? Scope_lookupType(annot, _here, ctx, _helpers, _helpers_data, _scope, module, _ss) : (*(const s_Type*)fu::NIL)));
                        if (paramType)
                        {
                            s_Type retype = tryRetyping(inValue, paramType, module, _scope, ctx, _here, _helpers, _helpers_data);
                            if (retype && (retype.vtype.canon != inType.vtype.canon))
                            {
                                inType = (args_1.mutref(i_2) = retype);
                                remangle = true;
                            };
                        }
                        else if (!pass_retype)
                        {
                            retypeIndices.push(i_2);
                            continue;
                        };
                    };
                    if (!(argNode.kind == "let"_fu))
                        fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

                    if (inType)
                    {
                        const s_Type& exactType = EXT(original, module, _scope, ctx).args[i_2].type;
                        if (exactType)
                        {
                            args_1.mutref(i_2) = exactType;
                            continue;
                        };
                        const fu_STR& argName = (argNode.value ? argNode.value : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                        s_TypeParam& argName_typeParam = ref_Qfo1(typeParams, argName);
                        inType = add_ref(s_Type(inType), Lifetime_temporary(), _here, ctx);
                        (!argName_typeParam ? argName_typeParam : fail((("Type param name collision with argument: `"_fu + argName) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)).matched = inType;
                        if (annot)
                        {
                            const bool argOk = (inType && trySolveTypeParams(annot, s_Type(inType), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss));
                            ok = (ok && argOk);
                            if (!ok && !remangle)
                                break;

                        };
                    };
                };
            };
            if (remangle && !isInline)
            {
                int _3 {};
                const int start_1 = ((_3 = (find_WqUX(mangle, ' ') + 1)) ? _3 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                mangle = (fu::slice(mangle, 0, start_1) + mangleArguments_gHql(args_1, _here, ctx));
                if (mangle00 != mangle)
                {
                    /*MOV*/ const s_Target preexisting { get_1XRG(_specs, mangle) };
                    if (preexisting)
                    {
                        setSpec(mangle00, preexisting, bool{}, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);
                        return /*NRVO*/ preexisting;
                    };
                    if (!into)
                        setSpec(mangle, SPECFAIL, true, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);

                };
            };
            if (!ok)
                return /*NRVO*/ SPECFAIL;

            const s_Node* _4;
            const s_Node& body = (*(_4 = &(items_5[(items_5.size() + FN_BODY_BACK)])) ? *_4 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
            if (body.kind == "pattern"_fu)
            {
                s_Map_Lvtq undo { typeParams };
                fu_VEC<s_Node> branches { body.items };
                bool did_match = false;
                for (int i_2 = 0; i_2 < branches.size(); i_2++)
                {
                    const s_Node& cond = branches[i_2].items[0];
                    if (cond && !evalTypePattern(cond, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string))
                    {
                        typeParams = undo;
                        continue;
                    };
                    fu_VEC<s_Node> cons { branches[i_2].items };
                    fu_VEC<s_Node>& sig = n_fn.items;

                    {
                        const s_Node& n_ret = cons[(cons.size() + FN_RET_BACK)];
                        if (n_ret)
                            sig.mutref((sig.size() + FN_RET_BACK)) = n_ret;

                        const s_Node& n_body = cons[(cons.size() + FN_BODY_BACK)];
                        sig.mutref((sig.size() + FN_BODY_BACK)) = (n_body ? n_body : fail("doTrySpec: no case/body."_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
                    };
                    did_match = true;
                    break;
                };
                if (!did_match)
                    return /*NRVO*/ SPECFAIL;

            };
            const s_Node& n_body = n_fn.items[(n_fn.items.size() + FN_BODY_BACK)];
            if (isNativeBody(n_body))
            {
                for (int i_2 = 0; i_2 < numArgs; i_2++)
                {
                    const s_Node* _5;
                    const s_Node& argNode = (*(_5 = &(items_5[i_2])) ? *_5 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                    const fu_STR& id_2 = argNode.value;
                    if_ref_zZyr(typeParams, id_2, 0);
                };
            };
        };
        fu_STR mangle0 { mangle };
        target_6 = (into ? s_Target(into) : Scope_create(_scope, "_no_kind_yet_"_fu, (*(const fu_STR*)fu::NIL), (*(const s_Type*)fu::NIL), 0, s_SolvedNode{}, parent_idx, (SS_DID_START | SS_LAZY), bool{}, module));
        fu_VEC<s_ScopeItem> extra_items_1 { (into ? EXT(original, module, _scope, ctx).extra_items : (EXT_mut(target_6, module, _scope).extra_items = intoScopeItems(typeParams, module, ctx, _scope, _here, _helpers, _helpers_data))) };
        const s_Target current_fn_or_type0 { _current_fn_or_type };
        fu_DEFER(_current_fn_or_type = current_fn_or_type0);
        _current_fn_or_type = target_6;
        if (!SolvedNodeData(_current_fn.out, module, _scope, ctx).target)
            _anons = 0;


        {
            s_Extended& o = EXT_mut(target_6, module, _scope);
            o.locals.clear();
            o.nodes.clear();
            for (int i_2 = 0; i_2 < o.args.size(); i_2++)
            {
                s_ArgWrite& written_via_1 = o.args.mutref(i_2).written_via;
                if (written_via_1)
                    written_via_1.nodeidx = -1;

            };
        };
        fu_VEC<s_SolvedNode> TODO_FIX_convert_args0 { TODO_FIX_convert_args };
        TODO_FIX_convert_args.mutref(0) = SolvedNode("__convert"_fu, s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
        fu_DEFER(TODO_FIX_convert_args = TODO_FIX_convert_args0);
        s_CurrentFn out_1 = s_CurrentFn { solved(n_fn, X_addrofTarget(target_6), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target_6, _here, _current_fn_or_type, module, _scope), s_Flow{}, s_Events{}, 0, fu_VEC<s_Type>{} };
        const s_ScopeMemo root_scope0 { _root_scope };
        if (!root_scope0)
            _root_scope = scope0;

        std::swap(_current_fn, out_1);
        fu_DEFER(
        {
            std::swap(_current_fn, out_1);
            _root_scope = root_scope0;
        });
        fu::view<s_Node> inItems = n_fn.items;
        outItems(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).resize(inItems.size());
        _scope.items += extra_items_1;
        const bool isFirst = !GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).solved;
        const int isTemplate = (template_1.node.flags & F_TEMPLATE);
        const bool isSpec = (isTemplate && (!into || !isFirst));
        const bool isUnspec = (isTemplate && !isSpec);
        const int isPure = (template_1.node.flags & F_PURE);
        for (int i_2 = 0; i_2 < (inItems.size() + FN_ARGS_BACK); i_2++)
        {
            const s_Node& n_arg = inItems[i_2];
            if (isUnspec && ((n_arg.flags & F_TEMPLATE) || !n_arg.items[LET_TYPE]))
            {
                outItems(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).mutref(i_2) = SolvedNode("let"_fu, s_Type{}, n_arg.flags, n_arg.value, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode((n_arg.items[LET_INIT] ? TODO_FIX_template_defarg : (*(const s_SolvedNode*)fu::NIL))) } }, s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
                continue;
            };
            s_Type specType = (isSpec ? tryGetArgSpecType(n_arg.value, extra_items_1, _scope, module, ctx, _here, _helpers, _helpers_data) : s_Type{});
            const s_SolvedNode arg = solveLet(n_arg, specType, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
            outItems(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).mutref(i_2) = arg;
            if (!isUnspec && SolvedNodeData(arg, module, _scope, ctx).target)
                Reference_trackArgument(_current_fn.flow, SolvedNodeData(arg, module, _scope, ctx).target.index, i_2);

        };
        const s_Node& n_ret = (!isUnspec ? inItems[(inItems.size() + FN_RET_BACK)] : (*(const s_Node*)fu::NIL));
        const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
        if (!(n_body))
            fail("solveFn: no body."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        const bool isNative = isNativeBody(n_body);
        if (!isNative && !isUnspec)
        {
            if (!(n_body.kind == "block"_fu))
                fail((("solveFn: Body not a block: `"_fu + n_body.kind) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        s_SolvedNode _6 {};
        s_Type ret_expect_1 { (n_ret ? (_6 = evalTypeAnnot(n_ret, (*(const s_Map_Lvtq*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string), SolvedNodeData(s_SolvedNode(_6), module, _scope, ctx)).type : (*(const s_Type*)fu::NIL)) };
        s_Type ret_seed { (n_ret ? (ret_expect_1 ? ret_expect_1 : fail(("falsy ret_expect: "_fu + n_fn.value), _here, ctx, _helpers, _helpers_data, _scope, module)) : t_never) };
        if (ret_seed.lifetime)
            ret_seed.lifetime = (isNative ? Lifetime_fromNative(inItems, fu::get_view(SolvedNodeData(_current_fn.out, module, _scope, ctx).items, 0, (SolvedNodeData(_current_fn.out, module, _scope, ctx).items.size() + FN_ARGS_BACK)), ret_seed, _here, ctx, _helpers, _helpers_data, _scope, module) : Lifetime_static());
        else if (is_ref(ret_seed))
            fail("fn.ret_actual is a ref without a lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        if (isFirst)
        {

            {
                fu_STR name_3 { (n_fn.value ? n_fn.value : fail("TODO anonymous fns"_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) };
                if (isSpec && !isNative && !isInline)
                {
                    const int idx_end = (outItems(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).size() + FN_ARGS_BACK);
                    fu::view<s_SolvedNode> _7 {};
                    fu_STR sig = (_7 = fu::get_view(outItems(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope), 0, idx_end), mangleArguments_msdo(static_cast<fu::view<s_SolvedNode>&&>(_7), module, _scope, ctx, _here));
                    if (sig)
                    {
                        fu_STR _8 {};
                        fu_STR hash = ((_8 = hash62(sig, 4)) ? static_cast<fu_STR&&>(_8) : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                        name_3 += ("_"_fu + hash);
                    };
                };
                s_Overload& overload = GET_mut(target_6, _scope, module);
                fu_STR _9 {};
                overload.name = ((_9 = HACK_nativeNameParts(isNative, n_body)) ? static_cast<fu_STR&&>(_9) : name_3 ? fu_STR(name_3) : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                overload.kind = (isUnspec ? "template"_fu : (isNative ? "__native"_fu : (isInline ? "inline"_fu : "fn"_fu)));
                s_Extended& ext = EXT_mut(target_6, module, _scope);
                ext.tEmplate = template_1;
                ext.spec_of = overloadIdx;
            };
            updateScope(_current_fn, (isInline ? ret_expect_1 : ret_seed), target_6, _scope, module, ctx, _here, _helpers, _helpers_data, isNative, isUnspec, isPure, _current_fn, isInline);
            if (!into && !isInline)
            {
                int _10 {};
                const int start_1 = ((_10 = (find_05eu(mangle0, ' ') + 1)) ? _10 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                mangle = (fu::slice(mangle0, 0, start_1) + mangleArguments_YOPn(EXT(target_6, module, _scope, ctx).args, _here, ctx));
                /*MOV*/ s_Target preexisting {};
                const bool nx0 = (mangle0 != mangle);
                if (nx0)
                {
                    preexisting = get_1XRG(_specs, mangle);
                    setSpec(mangle0, (preexisting ? preexisting : target_6), bool{}, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);
                };
                const bool nx00 = (mangle00 != mangle);
                if (nx00 && (mangle00 != mangle0))
                    setSpec(mangle00, (preexisting ? preexisting : target_6), bool{}, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);

                if (preexisting)
                    return /*NRVO*/ preexisting;

                setSpec(mangle, target_6, (nx0 && nx00), isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);
            };
        };
        bool didSetBody = false;
        if (!isInline && !isUnspec)
        {
            s_Type retval { ret_seed };
            if (!isNative)
            {
                const s_HelpersData* _11;
                int _12 {};
                const s_SolvedNode s_body = (_12 = ((__extension__ (
                {
                    const s_Helpers& h = last_CUmR(_helpers);
                    _11 = &(_helpers_data[h.index]);
                (void)0;}), *_11).vars.size() - helpers0vars), solveBlock(n_body, ret_expect_1, target_6.index, short((((HM_Function | HM_CanReturn) | HM_LabelUsed) | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL)))), 0, n_fn.value, int(_12), 0, _scope, _helpers, module, _current_fn, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string));
                retval = SolvedNodeData(s_body, module, _scope, ctx).type;
                const int idx_body = (outItems(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).size() + FN_BODY_BACK);
                outItems(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).mutref(idx_body) = (s_body ? s_body : fail("falsy body"_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
                didSetBody = true;
                ArgsAtRisk_shake(_current_fn.flow);
                ArgsWritten_shake_N8hJ(s_Flow(_current_fn.flow), _current_fn.events.args_written_via);
            };
            updateScope(_current_fn, retval, target_6, _scope, module, ctx, _here, _helpers, _helpers_data, isNative, isUnspec, isPure, _current_fn, isInline);
        };
        if (!didSetBody)
        {
            const s_Overload& o = GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data);
            if (!(o.kind != "fn"_fu))
                fail(((("did not set body on "_fu + qWHAT(o, module, _scope, ctx, _here, _helpers, _helpers_data)) + ": "_fu) + humanizeType(o.type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
    };
    lazySolveEnd(target_6, _scope, module, ctx, _here, _helpers, _helpers_data, options, _notes, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, _field_items, t_string);
    return /*NRVO*/ target_6;
}

static bool lazySolveStart(const s_Target& target_6, const s_Overload& overload, s_Scope& _scope, s_Module& module, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if ((overload.status & (SS_DID_START | SS_LAZY)) != SS_LAZY)
        return false;


    {
        s_Overload& o = GET_mut(target_6, _scope, module);
        if (o.status & ((SS_FINALIZED | SS_DID_START) | SS_DIRTY))
            fail(x7E_OZkl("SS_DID_START: non-zero solver status: "_fu, fu::u64dec(overload.status)), _here, ctx, _helpers, _helpers_data, _scope, module);

        o.status |= SS_DID_START;
        if (o.kind == "fn"_fu)
            doTrySpecialize(target_6, s_Target{}, fu::view<s_SolvedNode>{}, fu_STR{}, fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, 0, (*(const s_Type*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
        else if (o.kind == "type"_fu)
            __solveStruct(true, s_Node(EXT(target_6, module, _scope, ctx).tEmplate.node), target_6, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _current_fn_or_type, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
        else
            fail((("lazySolveStart: kind is `"_fu + o.kind) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    return true;
}

static void reorderByNumUsings(bool& use_reorder, fu_VEC<int>& reorder, fu::view<s_Argument> host_args, const int num_args, const int num_usings)
{
    reorder.clear();
    if (num_usings)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const int x = (i - num_usings);
            reorder.push((((x >= 0) && (x < num_args)) ? int(x) : -1));
        };
    };
    use_reorder = !!reorder;
}

                                #ifndef DEFt_find_VtCz
                                #define DEFt_find_VtCz
inline int find_VtCz(fu::view<fu_STR> a, fu::view<char> b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static bool reorderByArgIDs(bool& use_reorder, fu_VEC<int>& reorder, fu::view<fu_STR> names, s_BitSet&& optional, fu::view<s_Argument> host_args, const int num_usings)
{
    use_reorder = true;
    reorder.clear();
    int used = 0;
    int offset = num_usings;
    for (int i = 0; i < host_args.size(); i++)
    {
        int idx = find_VtCz(names, host_args[i].name);
        if (idx < 0)
        {
            for (int i_1 = offset; i_1 < names.size(); i_1++)
            {
                offset++;
                if (!names[i_1])
                {
                    idx = i_1;
                    break;
                };
            };
        }
        else
        {
            used++;
            rem(optional, i);
        };
        reorder.push(idx);
    };
    if (used != names.size())
    {
        for (int i_1 = 0; i_1 < names.size(); i_1++)
        {
            if (!names[i_1])
                used++;

        };
        if ((used + popcount(optional)) != names.size())
            return false;

    };
    while (reorder && (reorder[(reorder.size() - 1)] < 0))
        reorder.pop();

    if (reorder.size() != names.size())
        return true;

    for (int i_1 = 0; i_1 < reorder.size(); i_1++)
    {
        if (reorder[i_1] != i_1)
            return true;

    };
    reorder.clear();
    use_reorder = false;
    return true;
}

static int findRestStart(const s_Extended& ext)
{
    for (/*MOV*/ int i = ext.args.size(); i-- > 0; )
    {
        const s_Argument& arg = ext.args[i];
        if (arg.flags & F_REST_ARG)
            return /*NRVO*/ i;

        if (!(arg.flags & F_IMPLICIT))
            break;

    };
    return ext.args.size();
}

static void foreach(const s_Target& t, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool nullary, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const bool root_2, const s_SolvedNode& retype, s_Target& _current_fn_or_type, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
{
    s_Type arg0type0 { SolvedNodeData(TODO_FIX_convert_args[0], module, _scope, ctx).type };
    if (!nullary)
    {
        const int here = SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index;
        if (here && (t.index > here) && (t.modid == module.modid) && (GET(t, _scope, module, ctx, _here, _helpers, _helpers_data).local_of != here))
            return;

        if (root_2 && retype)
            TODO_FIX_convert_args.mutref(0) = retype;
        else
            MUT(TODO_FIX_convert_args[0], module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = from;

    };
    fu_DEFER(if (!nullary)
    {
        if (root_2 && retype)
            TODO_FIX_convert_args.mutref(0) = arg0;
        else
            MUT(TODO_FIX_convert_args[0], module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = arg0type0;

    });
    s_Target candidate {};
    if (nullary || (candidate = tryMatch__mutargs(fu_STR{}, TODO_FIX_reorder, TODO_FIX_conversions, bool{}, (*(const s_Scope*)fu::NIL), fu_VEC<s_SolvedNode>(TODO_FIX_convert_args), F_CONVERSION, t, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, t_string)))
    {
        const s_Target& t_1 = (nullary ? t : candidate);
        const s_Overload& convert = GET(t_1, _scope, module, ctx, _here, _helpers, _helpers_data);
        if (!(convert.type))
            fail((("No convert.type, perhaps a `using inline fn` without a return type annotation: `"_fu + qWHAT(convert, module, _scope, ctx, _here, _helpers, _helpers_data)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Type convertType = ((convert.kind == "field"_fu) ? add_refs((from ? from : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), s_Type(convert.type)) : s_Type(convert.type));
        const bool isStruct_2 = isStruct(convertType);
        if ((convert.status & (SS_DID_START | SS_FINALIZED)) == SS_DID_START)
        {
        }
        else
        {
            if (isAssignableAsArgument(expect, convertType))
            {
                if (match)
                {
                    fu_STR suffix = (((("\n\t"_fu + explainConversion(match, _scope, module, ctx, _here, _helpers, _helpers_data)) + "\n\tand:"_fu) + "\n\t"_fu) + explainConversion((path + t_1), _scope, module, ctx, _here, _helpers, _helpers_data));
                    if (actual)
                        fail(((((("Conversion ambiguity, multiple ways to convert `"_fu + humanizeType(actual, module, ctx)) + "` into `"_fu) + humanizeType(expect, module, ctx)) + "`: "_fu) + suffix), _here, ctx, _helpers, _helpers_data, _scope, module);
                    else
                        fail(((("`using` ambiguity, multiple ways to obtain a `"_fu + humanizeType(expect, module, ctx)) + "` in this scope: "_fu) + suffix), _here, ctx, _helpers, _helpers_data, _scope, module);

                };
                match = (path + t_1);
            }
            else
            {
                const bool mightHaveConversion = (isStruct_2 || (local_scope ? _scope : misc_scope).converts);
                if (mightHaveConversion)
                {
                    if (path.size() > 10)
                    {
                        for (int i = path.size(); i-- > 0; )
                        {
                            if (path[i] == t_1)
                            {
                                fu_STR err = "Conversion loop:"_fu;
                                for (int i_1 = i; i_1 < path.size(); i_1++)
                                {
                                    if (!i_1)
                                        err += "\n\t`"_fu;
                                    else
                                        err += " `"_fu;

                                    const s_Overload& convert_1 = GET(path[i_1], _scope, module, ctx, _here, _helpers, _helpers_data);
                                    err += (((qWHAT(convert_1, module, _scope, ctx, _here, _helpers, _helpers_data) + ": "_fu) + humanizeType(convertType, module, ctx)) + "` ->"_fu);
                                };
                                err += (("\n\t\t`"_fu + qWHAT(convert, module, _scope, ctx, _here, _helpers, _helpers_data)) + "`."_fu);
                                fail(fu_STR(err), _here, ctx, _helpers, _helpers_data, _scope, module);
                            };
                        };
                    };
                    path.push(t_1);
                    fu_DEFER(path.pop());
                    descend(convertType, false, isStruct_2, bool{}, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, module, ctx, _current_fn, _here, _helpers, _helpers_data, retype, _current_fn_or_type, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, has_converts);
                };
            };
        };
    };
}

                                #ifndef DEFt_each_JtDV
                                #define DEFt_each_JtDV
inline void each_JtDV(fu::view<s_Target> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool nullary, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const bool root_2, const s_SolvedNode& retype, s_Target& _current_fn_or_type, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_5.size(), items_5.size() };
    int i0 = start_1;
    for (int i = 0; i < (scope_skip_1.size() + 1); i++)
    {
        const s_ScopeSkip& ss = ((i < scope_skip_1.size()) ? scope_skip_1[i] : END_DUMMY);
        if ((ss.end <= i0))
            continue;

        const int i1 = ss.start;
        for (int i_1 = i0; i_1 < i1; i_1++)
        {
            const s_Target& u = items_5[i_1];
            foreach(u, TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _helpers, _helpers_data, root_2, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);
        };
        i0 = ss.end;
    };
}
                                #endif

                                #ifndef DEFt_each_PnnG
                                #define DEFt_each_PnnG
inline void each_PnnG(fu::view<s_Target> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool nullary, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const bool root_2, const s_SolvedNode& retype, s_Target& _current_fn_or_type, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_5.size(), items_5.size() };
    int i0 = start_1;
    for (int i = 0; i < (scope_skip_1.size() + 1); i++)
    {
        const s_ScopeSkip& ss = ((i < scope_skip_1.size()) ? scope_skip_1[i] : END_DUMMY);
        if ((ss.end <= i0))
            continue;

        const int i1 = ss.start;
        for (int i_1 = i0; i_1 < i1; i_1++)
            foreach(items_5[i_1], TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _helpers, _helpers_data, root_2, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

        i0 = ss.end;
    };
}
                                #endif

static void descend(const s_Type& from, const bool nullary, const bool isStruct_1, const bool root_2, const bool local_scope, s_Scope& _scope, const s_Scope& misc_scope, s_ScopeSkipMemos& _ss, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Module& module, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_SolvedNode& retype, s_Target& _current_fn_or_type, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, fu_VEC<s_ScopeItem>& _field_items, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const int has_converts)
{
    if (nullary)
        each_JtDV(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).usings), fu_VEC<s_ScopeSkip>((local_scope ? _ss.usings : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, 0, TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _helpers, _helpers_data, root_2, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);
    else
    {
        if (isStruct_1)
        {
            fu_VEC<s_Target> inner { lookupStruct(from, module, ctx).converts };
            for (int i = 0; i < inner.size(); i++)
                foreach(s_Target(inner[i]), TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _helpers, _helpers_data, root_2, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

        };
        if (has_converts)
            each_PnnG(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).converts), fu_VEC<s_ScopeSkip>((local_scope ? _ss.converts : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, 0, TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _helpers, _helpers_data, root_2, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

    };
}

static fu_VEC<s_Target> tryConvert(const s_Scope& misc_scope, const bool local_scope, const s_Type& expect, const s_Type& actual, const s_SolvedNode& retype, s_Scope& _scope, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, s_Module& module, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Target& _current_fn_or_type, fu_VEC<s_ScopeItem>& _field_items, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_Target> match {};
    fu_VEC<s_Target> path {};
    const int has_converts = (local_scope ? _scope : misc_scope).converts.size();
    const s_SolvedNode arg0 { TODO_FIX_convert_args[0] };
    fu_VEC<int> TODO_FIX_reorder {};
    fu_VEC<fu_VEC<s_Target>> TODO_FIX_conversions {};
    descend(actual, !actual, isStruct(actual), true, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, module, ctx, _current_fn, _here, _helpers, _helpers_data, retype, _current_fn_or_type, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, has_converts);
    return /*NRVO*/ match;
}

                                #ifndef DEFt_grow_if_oob_hcTU
                                #define DEFt_grow_if_oob_hcTU
inline fu_VEC<s_Target>& grow_if_oob_hcTU(fu_VEC<fu_VEC<s_Target>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_only_IX1w
                                #define DEFt_only_IX1w
inline const fu_VEC<s_Target>& only_IX1w(fu::view<fu_VEC<s_Target>> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E_OZkl("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

                                #ifndef DEFt_last_Vag4
                                #define DEFt_last_Vag4
inline s_Target& last_Vag4(fu_VEC<s_Target>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static s_Type solveArrlit_itemType_init(const s_Type& head, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    s_Type _0 {};
    return (_0 = clear_refs(s_Type(head))) ? static_cast<s_Type&&>(_0) : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_Type solveArrlit_done(const s_Type& itemType, const s_TokenIdx& _here, const s_Context& ctx)
{
    return createArray(itemType, _here, ctx);
}

static const s_Overload& GETfn(const int idx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return GET(s_Target { int(module.modid), int(idx) }, _scope, module, ctx, _here, _helpers, _helpers_data);
}

static fu_STR fnName(const int idx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return (idx ? (("`"_fu + GETfn(idx, module, _scope, ctx, _here, _helpers, _helpers_data).name) + "`"_fu) : "global scope"_fu);
}

static void disambig(const s_Target& matchIdx, const s_Target& overloadIdx, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_CurrentFn& _current_fn, fu::view<char> id_2, fu::view<fu_VEC<s_Target>> conversions, fu::view<fu_VEC<s_Target>> conversions_1)
{
    if (matchIdx)
    {
        const s_Target& PREV = matchIdx;
        const s_Target& NEXT = overloadIdx;
        const int inner = GET(PREV, _scope, module, ctx, _here, _helpers, _helpers_data).local_of;
        const int outer = GET(NEXT, _scope, module, ctx, _here, _helpers, _helpers_data).local_of;
        const int callsite_2 = SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index;
        if (SELF_TEST)
        {
            int _c = callsite_2;
            while (_c > inner)
                _c = GETfn(_c, module, _scope, ctx, _here, _helpers, _helpers_data).local_of;

            if (!(_c == inner))
                fail(((((("BUG! Leaking `"_fu + id_2) + "` between functions [inner/callsite]: "_fu) + fnName(inner, module, _scope, ctx, _here, _helpers, _helpers_data)) + " is seen from "_fu) + fnName(callsite_2, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

            int _i = inner;
            while (_i > outer)
                _i = GETfn(_i, module, _scope, ctx, _here, _helpers, _helpers_data).local_of;

            if (!(_i == outer))
                fail(((((((("BUG! Leaking `"_fu + id_2) + "` between functions [inner/outer]: "_fu) + fnName(inner, module, _scope, ctx, _here, _helpers, _helpers_data)) + " and "_fu) + fnName(outer, module, _scope, ctx, _here, _helpers, _helpers_data)) + " as seen from "_fu) + fnName(callsite_2, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        fail((((((((((("Ambiguous callsite, matches multiple items in scope: "_fu + explainWhichFn(PREV, conversions, _scope, module, ctx, _here, _helpers, _helpers_data)) + " from "_fu) + fnName(inner, module, _scope, ctx, _here, _helpers, _helpers_data)) + " and "_fu) + explainWhichFn(NEXT, conversions_1, _scope, module, ctx, _here, _helpers, _helpers_data)) + " from "_fu) + fnName(outer, module, _scope, ctx, _here, _helpers, _helpers_data)) + ", as seen from "_fu) + fnName(callsite_2, module, _scope, ctx, _here, _helpers, _helpers_data)) + "."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

                                #ifndef DEFt_last_b8iG
                                #define DEFt_last_b8iG
inline const fu_STR& last_b8iG(fu::view<fu_STR> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_Target tryMatch__mutargs(fu_STR&& id_2, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, const bool local_scope, const s_Scope& misc_scope, fu::view<s_SolvedNode> args_1, const int flags_4, const s_Target& target_6, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string)
{
    if (SELF_TEST)
    {
        for (int i = 0; i < args_1.size(); i++)
        {
            if (!SolvedNodeData(args_1[i], module, _scope, ctx).kind)
                fail("Falsy arg.kind!"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        };
    };
    /*MOV*/ s_Target matchIdx {};
    s_Target DEBUG_assertMatch {};
    int minArity = args_1.size();
    const int numUsings = countUsings(local_scope, _scope, misc_scope, _ss, _here, ctx, _helpers, _helpers_data, module);
    const int explicitArity = minArity;
    const int maxArity = (explicitArity + numUsings);
    fu_VEC<fu_STR> names {};
    s_BitSet optional {};
    if (flags_4 & F_NAMED_ARGS)
    {
        bool some = false;
        for (int i = 0; i < args_1.size(); i++)
        {
            const s_SolvedNode& arg = args_1[i];
            const fu_STR* _0;
            names.push(((SolvedNodeData(arg, module, _scope, ctx).kind == "argid"_fu) ? (*(_0 = &(((void)(some = true), SolvedNodeData(arg, module, _scope, ctx).value))) ? *_0 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)) : (*(const fu_STR*)fu::NIL)));
            if (SolvedNodeData(arg, module, _scope, ctx).flags & F_OPT_ARG)
            {
                minArity--;
                add(optional, i);
            };
        };
        if (!(some))
            fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    fu_STR reusable_mangle {};
    fu_VEC<s_Target> extra_items_1 {};
    if (local_scope && !target_6)
    {
        s_BitSet seen {};
        if (numUsings)
            each_JmfV((local_scope ? _scope : misc_scope).usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, 0, _scope, module, ctx, _here, _helpers, _helpers_data, seen, local_scope, _ss, id_2, extra_items_1);

        if (flags_4 & ((F_ACCESS | F_METHOD) | F_OPERATOR))
        {
            for (int i = 0; i < args_1.size(); i++)
                visitTypeImports(SolvedNodeData(args_1[i], module, _scope, ctx).type, module, ctx, seen, _scope, local_scope, _ss, id_2, extra_items_1);

        };
    };
    fu_VEC<s_ScopeItem> field_items { (local_scope && ((flags_4 & F_ACCESS) || !minArity) && (minArity <= 1) && maxArity ? _field_items : (*(const fu_VEC<s_ScopeItem>*)fu::NIL)) };
    fu_VEC<fu_STR> alternate_ids {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        bool shadows {};
        while ((overloadIdx = search((local_scope ? _scope : misc_scope).items, id_2, scope_iterator, (local_scope ? ((flags_4 & F_IMPLICIT) ? _ss.declash : _ss.items) : fu::view<s_ScopeSkip>{}), shadows, target_6, extra_items_1, field_items)))
        { {
            fu_VEC<fu_VEC<s_Target>> conversions_1 {};
            fu_VEC<int> reorder_1 {};
            bool TODO_FIX_skip_autocalls = false;
            while (true)
            {
                s_Overload overload { GET(overloadIdx, _scope, module, ctx, _here, _helpers, _helpers_data) };
                if (lazySolveStart(overloadIdx, s_Overload(overload), _scope, module, _here, ctx, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string))
                    continue;

                fu_STR kind_3 { overload.kind };
                const bool isType = (kind_3 == "type"_fu);
                if (minArity && isType && !target_6)
                {
                    const fu_STR& alt = overload.type.vtype.canon;
                    if (alt != id_2)
                        alternate_ids.push(alt);

                };
                const s_Extended& arity = EXT(overloadIdx, module, _scope, ctx);
                const bool isZeroInit = (isType && !explicitArity);
                if (!isZeroInit && ((arity.max < minArity) || (arity.min > maxArity)))
                    goto L_0182;

                fu_VEC<s_Argument> host_args { arity.args };
                const int num_usings = (!isZeroInit && (arity.min > explicitArity) ? (arity.min - explicitArity) : int{});
                bool use_reorder = false;
                if (!names)
                    reorderByNumUsings(use_reorder, reorder_1, host_args, args_1.size(), num_usings);
                else if (!reorderByArgIDs(use_reorder, reorder_1, names, s_BitSet(optional), host_args, num_usings))
                    goto L_0182;

                if (optional && reorder_1 && (reorder_1.size() < args_1.size()) && (reorder_1.size() < arity.max))
                    goto L_0182;

                s_Type REST_TYPE {};
                s_Type REST_EXPECT {};
                const int REST_START = findRestStart(arity);
                const int N = std::max((use_reorder ? reorder_1.size() : args_1.size()), (!isZeroInit ? arity.min : (*(const int*)fu::NIL)));
                if (REST_START < N)
                {
                    const s_Type& expect = host_args[REST_START].type;
                    if (expect)
                    {
                        s_Type _1 {};
                        REST_EXPECT = ((_1 = tryClear_sliceable(expect)) ? static_cast<s_Type&&>(_1) : fail(((GET(overloadIdx, _scope, module, ctx, _here, _helpers, _helpers_data).name + ": Rest argument annotation is not an array: "_fu) + humanizeType(expect, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module));
                    };
                };
                if (N)
                {
                    if (!((reorder_1.size() >= args_1.size()) || !reorder_1 || optional))
                        fail("reorder < args."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                    for (int i = 0; i < N; i++)
                    {
                        const bool rest = (i >= REST_START);
                        s_Argument host_arg { host_args[(rest ? REST_START : i)] };
                        s_Type expect { (rest ? REST_EXPECT : host_arg.type) };
                        if (TODO_FIX_skip_autocalls && rest)
                            continue;

                        const int callsiteIndex = (use_reorder ? int(reorder_1[i]) : ((i < args_1.size()) ? int(i) : -1));
                        if (callsiteIndex < 0)
                        {
                            if (host_arg.dEfault || (host_arg.flags & F_IMPLICIT))
                                continue;

                            int _2 {};
                            if (!((_2 = (host_arg.flags & F_MUSTNAME)) ? _2 : (flags_4 & F_CONVERSION)))
                            {
                                const s_Type& expect_1 = (expect ? expect : SolvedNodeData(host_arg.dEfault, module, _scope, ctx).type);
                                if (expect_1)
                                {
                                    fu_VEC<s_Target> conversion = tryConvert(misc_scope, local_scope, expect_1, (*(const s_Type*)fu::NIL), s_SolvedNode{}, _scope, TODO_FIX_convert_args, _ss, module, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string);
                                    if (conversion)
                                    {
                                        grow_if_oob_hcTU(conversions_1, i) = conversion;
                                        continue;
                                    };
                                };
                            };
                            goto L_0182;
                        };
                        if (host_arg.flags & F_MUSTNAME)
                        {
                            if ((names.size() <= callsiteIndex) || !names[callsiteIndex])
                                goto L_0182;

                        };
                        if (host_arg.autocall && !TODO_FIX_skip_autocalls)
                        {
                            fu_VEC<s_SolvedNode> autocall_args {};
                            fu_VEC<int> autocall_reorder {};
                            fu_VEC<fu_VEC<s_Target>> autocall_conversions {};
                            autocall_args.resize(1);
                            autocall_args.mutref(0) = args_1[callsiteIndex];
                            const s_Target t = tryMatch__mutargs(fu_STR(host_arg.autocall), autocall_reorder, autocall_conversions, local_scope, misc_scope, autocall_args, 0, s_Target{}, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, t_string);
                            if (!t)
                                goto L_0182;

                            if (autocall_conversions)
                                grow_if_oob_hcTU(conversions_1, i) += only_IX1w(autocall_conversions);

                            grow_if_oob_hcTU(conversions_1, i) += t;
                            if (!(autocall_reorder.size() < 2))
                                fail("autocall: reorder"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                        };
                        if (!expect)
                            continue;

                        const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                        const s_Type& actual = (hasConv ? GET(last_Vag4(conversions_1.mutref(i)), _scope, module, ctx, _here, _helpers, _helpers_data).type : SolvedNodeData(args_1[callsiteIndex], module, _scope, ctx).type);
                        if (isAssignableAsArgument(expect, (actual ? actual : fail("tryMatch: !actual"_fu, _here, ctx, _helpers, _helpers_data, _scope, module))))
                            continue;

                        if (!hasConv)
                        {
                            const s_SolvedNode& arg = args_1[callsiteIndex];
                            const s_SolvedNode& arg_1 = ((SolvedNodeData(arg, module, _scope, ctx).kind == "argid"_fu) ? only_Mzjf(SolvedNodeData(arg, module, _scope, ctx).items) : arg);
                            s_Type retype = tryRetyping(arg_1, expect, module, _scope, ctx, _here, _helpers, _helpers_data);
                            if (isAssignableAsArgument(expect, retype))
                                continue;

                        };
                        if (!(flags_4 & F_CONVERSION))
                        {
                            fu_VEC<s_Target> conversion = tryConvert(misc_scope, local_scope, expect, s_Type(actual), (!hasConv ? args_1[callsiteIndex] : (*(const s_SolvedNode*)fu::NIL)), _scope, TODO_FIX_convert_args, _ss, module, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string);
                            if (conversion)
                            {
                                grow_if_oob_hcTU(conversions_1, i) += conversion;
                                continue;
                            };
                        };
                        goto L_0182;
                    };
                };
                if (REST_START < N)
                {
                    for (int i = REST_START; i < N; i++)
                    {
                        const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                        const int callsiteIndex = (use_reorder ? reorder_1[i] : i);
                        const s_Type& actual = (hasConv ? GET(last_Vag4(conversions_1.mutref(i)), _scope, module, ctx, _here, _helpers, _helpers_data).type : SolvedNodeData(args_1[callsiteIndex], module, _scope, ctx).type);
                        REST_TYPE = ((i == REST_START) ? solveArrlit_itemType_init(actual, _here, ctx, _helpers, _helpers_data, _scope, module) : type_trySuper(REST_TYPE, actual));
                        if (!REST_TYPE)
                            goto L_0182;

                    };
                    REST_TYPE = solveArrlit_done(REST_TYPE, _here, ctx);
                };
                if (kind_3 == "template"_fu)
                {
                    fu_STR cant_reuse {};
                    fu_STR& args_mangled = ((use_reorder || conversions_1) ? cant_reuse : reusable_mangle);
                    const s_Target specIdx = trySpecialize(overloadIdx, args_1, args_mangled, REST_START, REST_TYPE, reorder_1, use_reorder, conversions_1, _scope, module, ctx, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
                    if (!specIdx)
                        goto L_0182;

                    overloadIdx = specIdx;
                    DEBUG_assertMatch = specIdx;
                    TODO_FIX_skip_autocalls = true;
                    continue;
                };
                disambig(matchIdx, overloadIdx, _scope, module, ctx, _here, _helpers, _helpers_data, _current_fn, id_2, conversions, conversions_1);
                std::swap(reorder_1, reorder);
                std::swap(conversions_1, conversions);
                matchIdx = overloadIdx;
                if (shadows)
                    goto L_NEXT;

                break;
            };
          } L_0182:;
        } L_NEXT:;

        if (!alternate_ids)
            break;

        id_2 = last_b8iG(alternate_ids);
        alternate_ids.pop();
    };
    if (DEBUG_assertMatch)
    {
        if (!(DEBUG_assertMatch == matchIdx))
            fail((("Specialized `"_fu + GET(DEBUG_assertMatch, _scope, module, ctx, _here, _helpers, _helpers_data).name) + "` but ended up not using it."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    return /*NRVO*/ matchIdx;
}

static fu_STR expectedArgs(fu::view<s_Target> targets, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu_STR result {};
    for (int i = 0; i < targets.size(); i++)
    {
        if (result)
            result += "\n\t\t"_fu;
        else if (targets.size() > 1)
            result += ", available overloads:\n\t\t"_fu;
        else
            result += ".\nExpect: "_fu;

        result += explainWhichFn(targets[i], fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx, _here, _helpers, _helpers_data);
    };
    return result ? fu_STR(result) : "."_fu;
}

static fu_STR actualArgs(fu::view<s_SolvedNode> args_2, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    fu_STR result = "\nActual: ("_fu;
    for (int i = 0; i < args_2.size(); i++)
    {
        const s_SolvedNode& arg = args_2[i];
        if (i)
            result += ","_fu;

        result += "\n\t"_fu;
        if (SolvedNodeData(arg, module, _scope, ctx).kind == "argid"_fu)
            result += (SolvedNodeData(arg, module, _scope, ctx).value + ": "_fu);

        result += humanizeType(SolvedNodeData(arg, module, _scope, ctx).type, module, ctx);
    };
    return result + ")."_fu;
}

[[noreturn]] static fu::never NICERR_mismatch(const s_Scope& misc_scope, const bool local_scope, const fu_STR& id_2, fu::view<s_SolvedNode> args_1, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, fu::view<s_ScopeItem> _field_items, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_CurrentFn& _current_fn)
{
    fu_VEC<s_Target> overloads_1 {};
    int scope_iterator {};
    s_Target target_6 {};
    bool shadows {};
    while ((target_6 = search((local_scope ? _scope : misc_scope).items, id_2, scope_iterator, (local_scope ? _ss.items : fu::view<s_ScopeSkip>{}), shadows, s_Target{}, fu::view<s_Target>{}, (local_scope ? _field_items : fu::view<s_ScopeItem>{}))))
        overloads_1.push(target_6);

    int min_2 = int(0x7fffffffu);
    int max_2 = 0;
    for (int i = 0; i < overloads_1.size(); i++)
    {
        const s_Target& o = overloads_1[i];
        if (min_2 > EXT(o, module, _scope, ctx).min)
            min_2 = EXT(o, module, _scope, ctx).min;

        if (max_2 < EXT(o, module, _scope, ctx).max)
            max_2 = EXT(o, module, _scope, ctx).max;

    };
    if (overloads_1)
    {
        if (args_1.size() < min_2)
            fail(((x7E_OZkl((x7E_OZkl((("`"_fu + id_2) + "` expects at least "_fu), fu::i64dec(min_2)) + " arguments, "_fu), fu::i64dec(args_1.size())) + " provided"_fu) + expectedArgs(overloads_1, _scope, module, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);
        else if (args_1.size() > max_2)
            fail(((x7E_OZkl((x7E_OZkl((("`"_fu + id_2) + "` expects at most "_fu), fu::i64dec(max_2)) + " arguments, "_fu), fu::i64dec(args_1.size())) + " provided"_fu) + expectedArgs(overloads_1, _scope, module, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);
        else
            fail((((("`"_fu + id_2) + "` bad args"_fu) + expectedArgs(overloads_1, _scope, module, ctx, _here, _helpers, _helpers_data)) + actualArgs(args_1, module, _scope, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    }
    else
    {
        fu_STR _0 {};
        fail(((("`"_fu + id_2) + "` is not defined in this scope: "_fu) + ((_0 = (("`"_fu + SolvedNodeData(_current_fn.out, module, _scope, ctx).value) + "`."_fu)) ? static_cast<fu_STR&&>(_0) : "root scope."_fu)), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

static s_Target match__mutargs(const s_Scope& misc_scope, const bool local_scope, const fu_STR& id_2, fu::view<s_SolvedNode> args_1, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, const int flags_4, const s_Target& target_6, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string)
{
    /*MOV*/ const s_Target ret = tryMatch__mutargs(fu_STR(id_2), reorder, conversions, local_scope, misc_scope, args_1, flags_4, target_6, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, t_string);
    if (ret)
        return /*NRVO*/ ret;

    /*MOV*/ const s_Target debug = tryMatch__mutargs(fu_STR(id_2), reorder, conversions, local_scope, misc_scope, args_1, flags_4, target_6, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, t_string);
    if (debug)
        return /*NRVO*/ debug;

    NICERR_mismatch(misc_scope, local_scope, id_2, args_1, _scope, _ss, _field_items, module, ctx, _here, _helpers, _helpers_data, _current_fn);
}

static s_Type solveArrlit_itemType(fu::view<s_SolvedNode> items_5, /*MOV*/ s_Type&& itemType, int start_1, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!itemType)
    {
        if (start_1 == items_5.size())
            fail("Cannot infer empty arraylit."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        itemType = solveArrlit_itemType_init(SolvedNodeData(items_5[start_1++], module, _scope, ctx).type, _here, ctx, _helpers, _helpers_data, _scope, module);
    }
    else if (is_ref(itemType))
        fail("Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    for (int i = start_1; i < items_5.size(); i++)
        itemType = superType("Array literal: "_fu, itemType, SolvedNodeData(items_5[i], module, _scope, ctx).type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data);

    return static_cast<s_Type&&>(itemType);
}

static s_SolvedNode createArrlit(fu_VEC<s_SolvedNode>&& items_5, const s_Type& itemType, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fn_or_type)
{
    s_Type itemType_1 = solveArrlit_itemType(items_5, s_Type(itemType), 0, _here, ctx, _helpers, _helpers_data, _scope, module);
    return SolvedNode("arrlit"_fu, solveArrlit_done(itemType_1, _here, ctx), 0, (*(const fu_STR*)fu::NIL), items_5, s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode SolvedNode_deepClone(s_SolvedNodeData&& data, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_Target& _current_fn_or_type)
{
    fu_VEC<s_SolvedNode>& items_5 = data.items;
    for (int i = 0; i < items_5.size(); i++)
        items_5.mutref(i) = SolvedNode_deepClone(s_SolvedNodeData(SolvedNodeData(items_5[i], module, _scope, ctx)), module, _scope, ctx, _current_fn_or_type);

    return SolvedNode_create(data, _current_fn_or_type, module, _scope);
}

static s_Type intersectionType(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id_2, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_Type _0 {};
    return (_0 = type_tryIntersect(a, b)) ? static_cast<s_Type&&>(_0) : fail((((((((id_2 ? (("`"_fu + human(id_2, module, _scope, ctx, _here, _helpers, _helpers_data)) + "`: "_fu) : fu_STR{}) + reason) + "Cannot intersect a common subtype: `"_fu) + humanizeType(a, module, ctx)) + "` & `"_fu) + humanizeType(b, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode createLet(const fu_STR& id_2, const s_Type& type_3, const int flags_4, bool& shadows, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_TokenIdx& _here, const s_Target& _current_fn_or_type)
{
    const s_Target target_6 = Binding(id_2, s_Type(type_3), flags_4, shadows, _current_fn, module, _scope, ctx, _root_scope, _ss, _helpers, _helpers_data, _here);
    /*MOV*/ const s_SolvedNode ret = SolvedNode("let"_fu, GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).type, flags_4, GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).name, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target_6, 0, _here, _current_fn_or_type, module, _scope);
    GET_mut(target_6, _scope, module).solved = ret;
    return /*NRVO*/ ret;
}

static const s_Target& injectImplicitArg(const fu_STR& id_2, const s_Type& type_3, const s_Target& becauseOf, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fn_or_type, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss)
{
    if (!(SolvedNodeData(_current_fn.out, module, _scope, ctx).items))
        fail((((("No implicit `"_fu + id_2) + "` in scope, needed to call `"_fu) + GET(becauseOf, _scope, module, ctx, _here, _helpers, _helpers_data).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    for (int i = 0; i < (SolvedNodeData(_current_fn.out, module, _scope, ctx).items.size() + FN_ARGS_BACK); i++)
    {
        const s_SolvedNode arg { SolvedNodeData(_current_fn.out, module, _scope, ctx).items[i] };
        if (SolvedNodeData(arg, module, _scope, ctx).value == id_2)
        {
            s_Type super = intersectionType("Implicit argument collision: "_fu, add_ref(s_Type(type_3), SolvedNodeData(arg, module, _scope, ctx).type.lifetime, _here, ctx), SolvedNodeData(arg, module, _scope, ctx).type, id_2, module, _scope, ctx, _here, _helpers, _helpers_data);
            MUT(s_SolvedNode(arg), module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = super;
            GET_mut(s_Target(SolvedNodeData(arg, module, _scope, ctx).target), _scope, module).type = super;
            const s_Target* _0;
            return *(_0 = &(SolvedNodeData(arg, module, _scope, ctx).target)) ? *_0 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);
        };
    };
    bool shadows {};
    const int flags_4 = (F_IMPLICIT | F_ARG);
    const s_SolvedNode newArgNode = createLet(id_2, type_3, flags_4, shadows, _current_fn, module, _scope, ctx, _root_scope, _ss, _helpers, _helpers_data, _here, _current_fn_or_type);
    const int newArgIdx = (SolvedNodeData(_current_fn.out, module, _scope, ctx).items.size() + FN_ARGS_BACK);
    MUT(_current_fn.out, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).items.insert(newArgIdx, newArgNode);
    Reference_trackArgument(_current_fn.flow, SolvedNodeData(newArgNode, module, _scope, ctx).target.index, newArgIdx);
    return SolvedNodeData(newArgNode, module, _scope, ctx).target;
}

static s_SolvedNode bindImplicitArg(const fu_STR& name_3, const s_Type& type_3, const s_Target& becauseOf, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string)
{

    {
        const s_Target target_6 = tryParseClosureID(name_3, MODID(module));
        if (target_6)
        {
            const s_Overload& o = GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data);
            if (o.local_of == SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index)
            {
                if (!(o.kind == "var"_fu))
                    fail("CLOSURE-ID-HACK #2"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                return CallerNode("__closure"_fu, s_Target(target_6), fu_VEC<s_SolvedNode>{}, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, t_string);
            };
        };
    };
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    s_Target _0 {};
    const s_Target target_6 = ((_0 = tryMatch__mutargs(fu_STR(name_3), reorder, conversions, true, (*(const s_Scope*)fu::NIL), fu::view<s_SolvedNode>{}, F_IMPLICIT, s_Target{}, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, t_string)) ? _0 : (_0 = s_Target(injectImplicitArg(name_3, type_3, becauseOf, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _root_scope, _ss))) ? _0 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
    const s_Overload& o = GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data);
    if (!(o.flags & F_IMPLICIT))
        fail((((("Matching a non-implicit item in scope: `"_fu + name_3) + "`, binds to call to `"_fu) + GET(becauseOf, _scope, module, ctx, _here, _helpers, _helpers_data).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    checkAssignable(type_3, o.type, (("Implicit `"_fu + name_3) + "` type mismatch"_fu), (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);
    return CallerNode("__implicit"_fu, s_Target(target_6), fu_VEC<s_SolvedNode>{}, 0, reorder, conversions, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, t_string);
}

                                #ifndef DEFt_last_7jk3
                                #define DEFt_last_7jk3
inline const s_Node& last_7jk3(fu::view<s_Node> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode solveLetLike_dontTouchScope(const fu_STR& id_2, int flags_4, /*MOV*/ s_SolvedNode&& init, s_Type&& annot, const s_Type& specType, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    if (!(annot || SolvedNodeData(init, module, _scope, ctx).type))
        fail((("Variable declarations without type annotations must be initialized: `"_fu + id_2) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (annot && SolvedNodeData(init, module, _scope, ctx).type)
    {
        if (specType)
        {
            if (!isAssignable(annot, SolvedNodeData(init, module, _scope, ctx).type))
                init = s_SolvedNode{};

        };
        if (SolvedNodeData(init, module, _scope, ctx).type)
            checkAssignable(annot, SolvedNodeData(init, module, _scope, ctx).type, "Type annotation does not match init expression"_fu, id_2, "="_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    const s_Type& t_init = SolvedNodeData(init, module, _scope, ctx).type;
    const bool killref = is_ref2temp(t_init, _here, ctx);
    if (!(flags_4 & F_ARG) && is_never(t_init))
    {
        makeNote(N_DeadLet, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return s_SolvedNode(init);
    };
    if (is_mutref(annot, _here, ctx))
        flags_4 |= F_REF;

    if (flags_4 & F_REF)
    {
        if (!(is_mutref(t_init, _here, ctx) || (is_never(t_init) && annot) || (!init && (flags_4 & F_ARG))))
            fail(((("`ref` variables must be initialized to a mutable reference: `"_fu + id_2) + "`"_fu) + (t_init ? (" = "_fu + humanizeType(t_init, module, ctx)) : "."_fu)), _here, ctx, _helpers, _helpers_data, _scope, module);

        if (killref)
            fail("`ref` varibles cannot bind to temporaries."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    s_Type t_let = ((annot && ((flags_4 & (F_ARG | F_MUT)) || !t_init)) ? s_Type(annot) : ((is_mutref(t_init, _here, ctx) || (flags_4 & F_MUT) || killref) ? (((flags_4 & F_REF) && (!killref || fail("redundant, see above, refs cant bind to temps"_fu, _here, ctx, _helpers, _helpers_data, _scope, module))) ? s_Type(t_init) : (((flags_4 & F_MUT) || killref) ? clear_refs(s_Type(t_init)) : clear_mutref(s_Type(t_init)))) : s_Type(t_init)));
    if ((flags_4 & F_ARG) && !(flags_4 & F_MUT))
        t_let = add_ref(s_Type(t_let), Lifetime_temporary(), _here, ctx);

    return SolvedNode("let"_fu, t_let, flags_4, id_2, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createLet(const fu_STR& id_2, const int flags_4, const s_SolvedNode& init, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss)
{
    /*MOV*/ s_SolvedNode out_1 = solveLetLike_dontTouchScope(id_2, int(flags_4), s_SolvedNode(init), s_Type{}, (*(const s_Type*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data, options, _notes, _current_fn_or_type);
    solveLet(out_1, id_2, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _root_scope, _ss);
    return /*NRVO*/ out_1;
}

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline constexpr unsigned SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

                                #ifndef DEF_SS_FN_RECUR
                                #define DEF_SS_FN_RECUR
inline constexpr unsigned SS_FN_RECUR = (0x1u << 17u);
                                #endif

static void detectRecursion(const s_Target& target_6, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    s_Overload overload { GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data) };
    if ((overload.status & (SS_FINALIZED | SS_LAZY)) != SS_LAZY)
        return;

    const int note = ((overload.kind == "type"_fu) ? N_TypeRecursion : N_FnRecursion);
    const unsigned status_1 = ((overload.kind == "type"_fu) ? SS_TYPE_RECUR : SS_FN_RECUR);
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (!isFnOrType(h, _helpers_data))
            continue;

        if (_helpers_data[h.index].mask & HM_Lambda)
            fail("Recursive lambda, what happened here?"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        GET_mut(_helpers_data[h.index].target, _scope, module).status |= status_1;
        makeNote(note, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        if (_helpers_data[h.index].target == target_6)
            return;

    };
    fail((x7E_OZkl((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu), fu::u64dec(overload.status)) + ")`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode CallerNode(const fu_STR& debug, s_Target&& target_6, fu_VEC<s_SolvedNode>&& args_1, const int kills_1, const fu_VEC<int>& reorder, fu::view<fu_VEC<s_Target>> conversions, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string)
{
    if (reorder)
    {
        fu_VEC<s_SolvedNode> args_out {};
        args_out.resize(reorder.size());
        for (int i = 0; i < reorder.size(); i++)
        {
            const int idx = reorder[i];
            if ((idx >= 0))
                args_out.mutref(i) = args_1[idx];

        };
        args_1 = args_out;
    };
    for (int argIdx = 0; argIdx < conversions.size(); argIdx++)
    {
        fu::view<s_Target> conversion = conversions[argIdx];
        for (int i = 0; i < conversion.size(); i++)
        {
            const s_Target& t = conversion[i];
            if (EXT(t, module, _scope, ctx).min || (EXT(t, module, _scope, ctx).max && args_1[argIdx]))
            {
                args_1.mutref(argIdx) = CallerNode("__using.a"_fu, s_Target(t), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(args_1[argIdx]) } }, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, t_string);
                continue;
            };
            if (i)
                fail((("Bad conversion chain, non-leading nullary: `"_fu + GET(t, _scope, module, ctx, _here, _helpers, _helpers_data).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

            if (args_1[argIdx])
                fail("Bad conversion chain, about to throw away an argnode."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            args_1.mutref(argIdx) = CallerNode("__using.b"_fu, s_Target(t), fu_VEC<s_SolvedNode>{}, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, t_string);
        };
    };
    const int REST_START = findRestStart(EXT(target_6, module, _scope, ctx));
    if (REST_START < args_1.size())
    {
        fu_VEC<s_SolvedNode> rest {};
        rest.resize((args_1.size() - REST_START));
        for (int i = args_1.size(); i-- > REST_START; )
        {
            std::swap(rest.mutref((i - REST_START)), args_1.mutref(i));
            if (i > REST_START)
                args_1.splice(i, 1);
            else
                args_1.mutref(i) = createArrlit(fu_VEC<s_SolvedNode>(rest), (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);

        };
    };
    const bool isZeroInit = ((GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "type"_fu) && !args_1.size());
    if (!isZeroInit)
    {
        fu_VEC<s_Argument> host_args { EXT(target_6, module, _scope, ctx).args };
        args_1.resize(host_args.size());
        for (int i = 0; i < args_1.size(); i++)
        {
            if (!args_1[i])
            {
                const s_Argument& host_arg = host_args[i];
                args_1.mutref(i) = (host_arg.dEfault ? SolvedNode_deepClone(s_SolvedNodeData(SolvedNodeData(host_arg.dEfault, module, _scope, ctx)), module, _scope, ctx, _current_fn_or_type) : ((void)((host_arg.flags & F_IMPLICIT) || fail((((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + humanizeType(host_arg.type, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)), bindImplicitArg(host_arg.name, host_arg.type, target_6, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, t_string)));
            };
        };
    };
    s_Type type_3 { GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).type };
    if (GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "field"_fu)
    {
        const s_Type* _0;
        type_3 = add_refs((*(_0 = &(SolvedNodeData(only_Mzjf(args_1), module, _scope, ctx).type)) ? *_0 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), s_Type(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).type));
    }
    else if (GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "var"_fu)
    {
        if (!(type_3.lifetime.uni0n.size() == 1))
            fail((("CallerNode: var "_fu + GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).name) + " type.lifetime.len != 1"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        if (GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).local_of && (GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).local_of != SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index))
        {
            s_Target _1 {};
            target_6 = injectImplicitArg(ClosureID(((_1 = tryParseClosureID(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).name, MODID(module))) ? _1 : s_Target(target_6))), s_Type(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).type), target_6, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _root_scope, _ss);
            const s_Type* _2;
            type_3 = (*(_2 = &(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).type)) ? *_2 : fail(("CallerNode: !type on var "_fu + GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).name), _here, ctx, _helpers, _helpers_data, _scope, module));
        };
    }
    else
    {
        if (args_1)
        {
            const fu_VEC<s_Argument>* _3;
            fu_VEC<s_Argument> host_args { (*(_3 = &(EXT(target_6, module, _scope, ctx).args)) ? *_3 : fail(("CallerNode: no host args: "_fu + qWHAT(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module)) };
            if (!((host_args.size() >= args_1.size())))
                fail(("CallerNode: host_arg.len mismatch: "_fu + qWHAT(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

            for (int i0 = 0; i0 < args_1.size(); i0++)
            {
                const s_Argument& host_arg = host_args[i0];
                s_SolvedNode& arg = args_1.mutref(i0);
                if (SolvedNodeData(arg, module, _scope, ctx).kind == "argid"_fu)
                    arg = only_Mzjf(SolvedNodeData(arg, module, _scope, ctx).items);

                const s_Type& expect = host_arg.type;
                s_Type retype = tryRetyping(arg, expect, module, _scope, ctx, _here, _helpers, _helpers_data);
                if (isAssignableAsArgument(expect, retype))
                    MUT(arg, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = retype;

            };
            if (is_ref(type_3))
                type_3.lifetime = Lifetime_test(Lifetime_replaceArgsAtCallsite(GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data), args_1, module, _scope, ctx, _here, _helpers, _helpers_data), true, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

        };
        if (GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "inline"_fu)
        {
            const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
            s_ScopeSkipMemos ss0 { _ss };
            const s_HelpersData* _4;
            const int helpers0vars = (__extension__ (
            {
                const s_Helpers& h = last_CUmR(_helpers);
                _4 = &(_helpers_data[h.index]);
            (void)0;}), *_4).vars.size();
            fu_DEFER(
            {
                Scope_pop(_scope, scope0, _helpers);
                _ss = ss0;
            });
            s_Template template_1 { EXT(target_6, module, _scope, ctx).tEmplate };
            ScopeSkip_setup(s_Template(template_1), scope0, true, _root_scope, _ss, _here, ctx, _helpers, _helpers_data, _scope, module);
            _scope.items += fu_VEC<s_ScopeItem>(EXT(target_6, module, _scope, ctx).extra_items);
            s_Node n_fn { template_1.node };
            s_Node n_body { last_7jk3(n_fn.items) };
            s_Type ret_expect_1 { GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).type };
            fu_VEC<s_Argument> host_args { EXT(target_6, module, _scope, ctx).args };
            fu_VEC<s_SolvedNode> result {};
            if (!(host_args.size() == args_1.size()))
                fail("inline: arglen mismatch"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            result.resize((args_1.size() + 1));
            const int locals_start_1 = (args_1 ? GET_next_local_index(_current_fn, module, _scope, ctx) : int{});
            for (int i = 0; i < args_1.size(); i++)
            {
                const s_Argument& slot = host_args[i];
                result.mutref(i) = createLet(fu_STR(slot.name), (slot.flags & ~(F_ARG | F_COMPOUND_ID)), args_1[i], module, _scope, ctx, _here, _helpers, _helpers_data, options, _notes, _current_fn_or_type, _current_fn, _root_scope, _ss);
            };
            const s_HelpersData* _5;
            int _6 {};
            const s_SolvedNode s_body = (_6 = ((__extension__ (
            {
                const s_Helpers& h = last_CUmR(_helpers);
                _5 = &(_helpers_data[h.index]);
            (void)0;}), *_5).vars.size() - helpers0vars), solveBlock(n_body, ret_expect_1, 0, short((HM_CanReturn | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL)))), kills_1, n_fn.value, int(_6), locals_start_1, _scope, _helpers, module, _current_fn, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string));
            const s_HelpersData* _7;
            if (!((__extension__ (
            {
                const s_Helpers& h = last_CUmR(_helpers);
                _7 = &(_helpers_data[h.index]);
            (void)0;}), *_7).vars.size() == helpers0vars))
                fail("inline: _helpers.len != helpers0vars"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            if (!(SolvedNodeData(s_body, module, _scope, ctx).kind))
                fail("inline: no s_body.kind"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            last_B9fx(result) = s_body;
            /*MOV*/ const s_SolvedNode block = createBlock(SolvedNodeData(s_body, module, _scope, ctx).type, fu_VEC<s_SolvedNode>(result), s_Target{}, s_Helpers{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);
            if (!(SolvedNodeData(block, module, _scope, ctx).kind))
                fail("inline: no createBlock().kind"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            return /*NRVO*/ block;
        };
    };
    /*MOV*/ const s_SolvedNode callsite_2 = SolvedNode("call"_fu, type_3, 0, debug, args_1, target_6, 0, _here, _current_fn_or_type, module, _scope);
    if ((target_6.modid < 0) || (target_6.modid == module.modid))
    {
        fu::view<char> k = GET(target_6, _scope, module, ctx, _here, _helpers, _helpers_data).kind;
        if ((k == "fn"_fu) || (k == "type"_fu))
        {
            EXT_mut(target_6, module, _scope).callsites += callsite_2;
            detectRecursion(target_6, _scope, module, ctx, _here, _helpers, _helpers_data, options, _notes);
        };
    };
    return /*NRVO*/ callsite_2;
}

static s_SolvedNode solveCall(const s_Node& node_1, const s_Target& target_6, const int kills_1, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> args_1 = solveNodes(node_1.items, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    if (is_never(SolvedNodeData(if_last_B9fx(args_1), module, _scope, ctx).type))
    {
        makeNote(N_DeadCall, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return createBlock(t_never, fu_VEC<s_SolvedNode>(args_1), s_Target{}, s_Helpers{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);
    };
    fu_STR id_2 { node_1.value };
    if (!id_2)
    {
        if (!(target_6))
            fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    const int qualified = (node_1.flags & F_COMPOUND_ID);
    const s_Scope& misc_scope = (qualified ? dequalify_andGetScope(id_2, _here, ctx, _helpers, _helpers_data, _scope, module) : (*(const s_Scope*)fu::NIL));
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    const s_Target callTargIdx = match__mutargs(misc_scope, !qualified, id_2, args_1, reorder, conversions, node_1.flags, target_6, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, t_string);
    return CallerNode(node_1.value, s_Target(callTargIdx), fu_VEC<s_SolvedNode>(args_1), kills_1, reorder, conversions, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, t_string);
}

static s_SolvedNode evalTypeAnnot(const s_Node& node_1, const s_Map_Lvtq& typeParams, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (node_1.kind == "call"_fu)
    {
        fu::view<s_Node> items_5 = node_1.items;
        if (items_5.size() == 1)
        {
            if (node_1.value == "&"_fu)
            {
                s_Type _0 {};
                s_Type _1 {};
                return (_1 = (_0 = T(0, node_1, typeParams, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string), add_ref(static_cast<s_Type&&>(_0), Lifetime_temporary(), _here, ctx)), solved(node_1, static_cast<s_Type&&>(_1), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope));
            };
            if (node_1.value == "&mut"_fu)
            {
                s_Type _2 {};
                s_Type _3 {};
                return (_3 = (_2 = T(0, node_1, typeParams, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string), add_mutref(static_cast<s_Type&&>(_2), Lifetime_temporary(), _here, ctx)), solved(node_1, static_cast<s_Type&&>(_3), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope));
            };
            if (node_1.value == "[]"_fu)
            {
                s_Type _4 {};
                s_Type _5 {};
                return (_5 = (_4 = T(0, node_1, typeParams, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string), createArray(static_cast<s_Type&&>(_4), _here, ctx)), solved(node_1, static_cast<s_Type&&>(_5), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope));
            };
        };
        return solveCall(node_1, s_Target{}, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    }
    else if (node_1.kind == "typeparam"_fu)
        return solved(node_1, evalTypeParam(node_1.value, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope);
    else if ((node_1.kind == "arrlit"_fu) && (node_1.items.size() == 1))
    {
        s_Type _6 {};
        s_Type _7 {};
        return (_7 = (_6 = T(0, node_1, typeParams, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string), createSlice(static_cast<s_Type&&>(_6), Lifetime_temporary(), _here, ctx)), solved(node_1, static_cast<s_Type&&>(_7), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope));
    };
    fail((x7E_OZkl((("TODO evalTypeAnnot: "_fu + node_1.kind) + "["_fu), fu::i64dec(node_1.items.size())) + "]"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode solveLetLike_dontTouchScope(const s_Node& node_1, const s_Type& specType, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Node& n_annot = node_1.items[LET_TYPE];
    s_SolvedNode _0 {};
    s_Type annot { (specType ? specType : (n_annot ? (_0 = evalTypeAnnot(n_annot, (*(const s_Map_Lvtq*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string), SolvedNodeData(s_SolvedNode(_0), module, _scope, ctx)).type : (*(const s_Type*)fu::NIL))) };
    if (annot && (node_1.flags & F_REF))
        annot = add_mutref(s_Type(annot), Lifetime_temporary(), _here, ctx);

    const s_Node& n_init = node_1.items[LET_INIT];
    const s_SolvedNode init = (n_init ? solveNode(n_init, annot, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string) : s_SolvedNode{});
    return solveLetLike_dontTouchScope(node_1.value, int(node_1.flags), s_SolvedNode(init), s_Type(annot), specType, module, _scope, ctx, _here, _helpers, _helpers_data, options, _notes, _current_fn_or_type);
}

static s_SolvedNode solveMember(const s_Node& node_2, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(node_2.kind == "let"_fu))
        fail(("solveStructMembers_1: "_fu + node_2.kind), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (node_2.items[LET_INIT] && (node_2.items[LET_INIT].kind != "definit"_fu))
        fail(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node_2.value) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return solveLetLike_dontTouchScope(node_2, (*(const s_Type*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
}

                                #ifndef DEFt_map_RXDe
                                #define DEFt_map_RXDe
inline fu_VEC<s_SolvedNode> map_RXDe(fu::view<s_Node> a, int, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember(a[i], _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_add_zs1w
                                #define DEFt_add_zs1w
inline bool add_zs1w(fu_VEC<int>& dest, const int item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest[i] != item)
            {
                dest.insert(i, item);
                return true;
            };
            return false;
        };
    };
    dest.push(item);
    return true;
}
                                #endif

                                #ifndef DEFt_add_p8Tz
                                #define DEFt_add_p8Tz
inline void add_p8Tz(fu_VEC<int>& a, fu::view<int> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const int X = a[x];
        const int Y = b[y];
        if ((X >= Y))
        {
            if (X != Y)
            {
                a.insert(x, Y);
                y++;
            }
            else
                y++;

        };
        x++;
    };
    if (y < b.size())
        a += fu::get_view(b, y, b.size());

}
                                #endif

static s_SolvedNode __solveStruct(const bool solve_3, const s_Node& node_1, const s_Target& into, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const fu_STR& origId = node_1.value;
    fu_STR _0 {};
    fu_STR name_3 = (origId ? fu_STR(origId) : (_0 = fu_STR((SolvedNodeData(_current_fn.out, module, _scope, ctx).target ? GET(SolvedNodeData(_current_fn.out, module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data).name : (*(const fu_STR*)fu::NIL)))) ? static_cast<fu_STR&&>(_0) : "Anon"_fu);
    s_Target out_target { into };
    s_Type out_type {};
    if (out_target)
        out_type = GET(out_target, _scope, module, ctx, _here, _helpers, _helpers_data).type;
    else
    {
        out_type = initStruct(name_3, node_1.flags, SELF_TEST, module);
        out_target = Scope_Typedef(_scope, origId, out_type, node_1.flags, name_3, SS_LAZY, module);
        EXT_mut(out_target, module, _scope).tEmplate = createTemplate(node_1, _current_fn, _scope, _helpers, _ss);
    };
    if (!solve_3)
        return createEmpty("empty"_fu, out_type, out_target, _here, _current_fn_or_type, module, _scope);

    const s_Target current_fn_or_type0 { _current_fn_or_type };
    fu_DEFER(_current_fn_or_type = current_fn_or_type0);
    _current_fn_or_type = out_target;
    GET_mut(out_target, _scope, module).status |= SS_DID_START;
    const int helpers0 = _helpers.size();
    const int helpers_data0 = _helpers_data.size();
    fu_DEFER(
    {
        _helpers.shrink(helpers0);
        _helpers_data.shrink(helpers_data0);
    });
    push(s_HelpersData { s_Target((out_target ? out_target : fail((("solveStruct: no out_target: `"_fu + origId) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module))), fu_STR{}, short(HM_Struct), 0, 0, 0, s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} }, _helpers, _helpers_data);
    fu_VEC<s_Target> structConverts {};
    fu_VEC<int> structImports {};
    int flat_cnt_1 {};
    bool all_triv_1 = true;
    fu_VEC<s_SolvedNode> members = map_RXDe(node_1.items, 0, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    {
        fu_VEC<s_ScopeItem>& innerScope = lookupStruct_mut(out_type.vtype.canon, module).items;
        if (!innerScope && members)
        {
            fu_VEC<s_Argument> args_1 = fu_VEC<s_Argument> { fu::slate<1, s_Argument> { s_Argument { "this"_fu, fu_STR{}, despeculateStruct(s_Type(out_type)), s_SolvedNode{}, 0, s_BitSet{}, s_ArgWrite{} } } };
            for (int i = 0; i < members.size(); i++)
            {
                const fu_STR& id_2 = node_1.items[i].value;
                const s_Target target_6 = Scope_create(_scope, "field"_fu, (id_2 ? id_2 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), (*(const s_Type*)fu::NIL), F_PUB, s_SolvedNode{}, 0, 0u, bool{}, module);
                s_Extended& ext = EXT_mut(target_6, module, _scope);
                ext.args = args_1;
                ext.min = 1;
                ext.max = 1;
                Scope_set(innerScope, id_2, target_6, false);
            };
            _field_items += innerScope;
        };
        if (!(innerScope.size() == members.size()))
            fail((((x7E_OZkl((x7E_OZkl((x7E_OZkl("solveStructMembers_3: field lens mismatch: "_fu, fu::i64dec(innerScope.size())) + " vs "_fu), fu::i64dec(members.size())) + "/"_fu), fu::i64dec(node_1.items.size())) + ": `struct "_fu) + name_3) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        for (int i = 0; i < innerScope.size(); i++)
        {
            const s_ScopeItem& item = innerScope[i];
            const s_SolvedNode& member = members[i];
            if (!(item.id == SolvedNodeData(member, module, _scope, ctx).value))
                fail("solveStructMembers_4: field id mismatch."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            s_Overload& field = GET_mut(target(item), _scope, module);
            field.type = SolvedNodeData(member, module, _scope, ctx).type;
            int _1 {};
            flat_cnt_1 += ((_1 = int(tryLookupStruct(SolvedNodeData(member, module, _scope, ctx).type, module, ctx).flat_cnt)) ? _1 : 1);
            if (all_triv_1)
                all_triv_1 = is_trivial(SolvedNodeData(member, module, _scope, ctx).type, module, ctx);

            if (SolvedNodeData(member, module, _scope, ctx).flags & F_USING)
            {
                structConverts.push(target(item));
                if (field.type.vtype.modid != module.modid)
                    add_zs1w(structImports, field.type.vtype.modid);

                add_p8Tz(structImports, lookupTypeImports(field.type, module, ctx));
            };
        };
    };

    {
        bool CHANGE = false;
        int commonQuals = -1;
        for (int i = 0; i < members.size(); i++)
            commonQuals &= SolvedNodeData(members[i], module, _scope, ctx).type.vtype.quals;

        const int quals0 = out_type.vtype.quals;
        const int quals1 = (out_type.vtype.quals &= commonQuals);
        bool* _2;
        (*(_2 = &(CHANGE)) ? *_2 : *_2 = (quals0 != quals1));

        {
            s_Struct& s = lookupStruct_mut(out_type.vtype.canon, module);
            s.target = (out_target ? out_target : fail("No struct/out_target."_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
            s.converts = structConverts;
            s.imports = structImports;
            const int flat0 = s.flat_cnt;
            const bool triv0 = s.all_triv;
            s.flat_cnt = flat_cnt_1;
            s.all_triv = all_triv_1;
            bool* _3;
            (*(_3 = &(CHANGE)) ? *_3 : *_3 = ((flat0 != flat_cnt_1) || (triv0 != all_triv_1)));
            if (!(GET(s.target, _scope, module, ctx, _here, _helpers, _helpers_data).status & SS_DID_START))
                fail("Setting stuff but missing SS_DID_START."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        const int max_2 = members.size();
        int min_2 = 0;
        fu_VEC<s_Argument> args_1 {};
        for (int i_1 = 0; i_1 < members.size(); i_1++)
        {
            const s_SolvedNode& member = members[i_1];
            const fu_STR* _4;
            const s_Type* _5;
            s_Argument arg = s_Argument { fu_STR((*(_4 = &(SolvedNodeData(member, module, _scope, ctx).value)) ? *_4 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module))), fu_STR{}, s_Type((*(_5 = &(SolvedNodeData(member, module, _scope, ctx).type)) ? *_5 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module))), s_SolvedNode(SolvedNodeData(member, module, _scope, ctx).items[LET_INIT]), (SolvedNodeData(member, module, _scope, ctx).flags & F_MUSTNAME), s_BitSet{}, s_ArgWrite{} };
            if (!arg.dEfault)
                min_2++;

            args_1.push(arg);
        };
        if (max_2 && !min_2)
            min_2++;

        s_Extended& ext = EXT_mut(out_target, module, _scope);
        ext.min = min_2;
        ext.max = max_2;
        ext.args = args_1;
        fu_VEC<s_SolvedNode> mustUpdate { (CHANGE ? ext.callsites : (*(const fu_VEC<s_SolvedNode>*)fu::NIL)) };
        s_Overload& overload = GET_mut(out_target, _scope, module);
        overload.type = out_type;
        if (mustUpdate)
            overload.status |= SS_UPDATED;

    };
    lazySolveEnd(out_target, _scope, module, ctx, _here, _helpers, _helpers_data, options, _notes, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, _field_items, t_string);
    return s_SolvedNode{};
}

static s_SolvedNode uPrepStruct(const s_Node& node_1, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    return __solveStruct(false, node_1, s_Target{}, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _current_fn_or_type, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
}

static s_SolvedNode unorderedPrep_A(const s_Node& node_1, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_HelpersData>& _helpers_data, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu::view<char> k = node_1.kind;
    if (k == "fn"_fu)
        return uPrepFn_A(node_1, _current_fn, module, _scope, ctx, _helpers, _ss, _here, _current_fn_or_type);

    if (k == "struct"_fu)
        return uPrepStruct(node_1, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _current_fn_or_type, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    fail(("TODO: "_fu + k), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void uPrepFn_B(const s_Target& target_6, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    s_Template& template_1 = EXT_mut(target_6, module, _scope).tEmplate;
    if (template_1.scope_memo)
        template_1.scope_memo = Scope_snap(_scope, _helpers);

}

static void unorderedPrep_B(const s_Node& node_1, const s_Target& into, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    fu::view<char> k = node_1.kind;
    if (k == "fn"_fu)
        uPrepFn_B(into, module, _scope, _helpers);

}

static fu_VEC<s_SolvedNode> solveNodes(fu::view<s_Node> nodes_1, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const int kills_1, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_SolvedNode> result {};
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    for (int i = 0; i < nodes_1.size(); i++)
    {
        const s_Node& node_1 = nodes_1[i];
        if (!node_1)
            continue;

        const int unorderedClass = unorderedClassify(node_1.kind);
        if (!unorderedClass)
        {
            HERE(node_1.token, _here);
            const bool last_1 = (i == (nodes_1.size() - 1));
            const s_Type& type_3 = ((last_1 && use_type_last) ? type_last : type_all);
            const int kills_2 = (last_1 ? kills_1 : (*(const int*)fu::NIL));
            const s_SolvedNode solved_2 = solveNode(node_1, type_3, kills_2, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
            result += solved_2;
            if (is_never(SolvedNodeData(solved_2, module, _scope, ctx).type))
            {
                if (i < (nodes_1.size() - 1))
                    makeNote(N_DeadCode, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

                break;
            };
            continue;
        };
        const int i0 = i;
        int i1 = nodes_1.size();
        const int offset = (result.size() - i0);
        for (int i_1 = i0; i_1 < nodes_1.size(); i_1++)
        {
            const s_Node* _0;
            const s_Node& node_2 = (*(_0 = &(nodes_1[i_1])) ? *_0 : fail("solveNodes, prep-a: falsy node"_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
            if (unorderedClassify(node_2.kind) != unorderedClass)
            {
                i1 = i_1;
                break;
            };
            HERE(node_2.token, _here);
            result += unorderedPrep_A(node_2, _current_fn, module, _scope, ctx, _helpers, _ss, _here, _current_fn_or_type, _helpers_data, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
        };
        if (!(i1 > i0))
            fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

        i = (i1 - 1);
        for (int i_1_1 = i0; i_1_1 < i1; i_1_1++)
        {
            const s_Node* _1;
            const s_Node& node_2 = (*(_1 = &(nodes_1[i_1_1])) ? *_1 : fail("solveNodes, prep-b: falsy node"_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
            HERE(node_2.token, _here);
            unorderedPrep_B(node_2, SolvedNodeData(result[(i_1_1 + offset)], module, _scope, ctx).target, module, _scope, _helpers);
        };
        bool repeat = true;
        while (repeat)
        {
            repeat = false;
            for (int i_1_2 = i0; i_1_2 < i1; i_1_2++)
            {
                const s_Node* _2;
                const s_Node& node_2 = (*(_2 = &(nodes_1[i_1_2])) ? *_2 : fail("solveNodes, solve: falsy node"_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
                HERE(node_2.token, _here);
                const s_Target& into = SolvedNodeData(result[(i_1_2 + offset)], module, _scope, ctx).target;
                if (lazySolveStart(s_Target(into), s_Overload(GET(into, _scope, module, ctx, _here, _helpers, _helpers_data)), _scope, module, _here, ctx, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string))
                    repeat = true;

            };
        };
    };
    return /*NRVO*/ result;
}

static s_SolvedNode solveRoot(const s_Node& node_1, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> items_5 = solveNodes(node_1.items, t_void, (*(const s_Type*)fu::NIL), bool{}, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    if (!is_never(SolvedNodeData(last_0oqA(items_5), module, _scope, ctx).type))
    {
        /*MOV*/ const s_SolvedNode root_2 = solved(node_1, t_void, items_5, s_Target{}, _here, _current_fn_or_type, module, _scope);
        runAllPasses(root_2, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
        return /*NRVO*/ root_2;
    };
    _here = SolvedNodeData(last_0oqA(items_5), module, _scope, ctx).token;
    fail("Noreturn during static init: this program will never finish booting."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_HM_CanBreak
                                #define DEF_HM_CanBreak
inline constexpr short HM_CanBreak = (short(1) << short(0));
                                #endif

                                #ifndef DEFt_only_gZi1
                                #define DEFt_only_gZi1
inline const s_Node& only_gZi1(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E_OZkl("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_SolvedNode solveArgID(const s_Node& node_1, const s_Type& type_3, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_SolvedNode expr = solveNode(only_gZi1(node_1.items), type_3, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    return solved(node_1, SolvedNodeData(expr, module, _scope, ctx).type, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveArrlit(const s_Node& node_1, const s_Type& type_3, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Scope& _scope, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    s_Type itemType = (type_3 ? tryClear_sliceable(type_3) : s_Type{});
    if (!itemType && isStruct(type_3))
        return solveCall(node_1, s_Target(lookupStruct(type_3, module, ctx).target), 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    fu_VEC<s_SolvedNode> args_1 = solveNodes(node_1.items, itemType, (*(const s_Type*)fu::NIL), bool{}, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    if (is_never(SolvedNodeData(if_last_B9fx(args_1), module, _scope, ctx).type))
    {
        makeNote(N_DeadArrlit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return createBlock(t_never, fu_VEC<s_SolvedNode>(args_1), s_Target{}, s_Helpers{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);
    };
    return createArrlit(fu_VEC<s_SolvedNode>(args_1), itemType, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);
}

static s_SolvedNode popAndOr(s_SolvedNode& node_1, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_Target& _current_fn_or_type, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const int N = SolvedNodeData(node_1, module, _scope, ctx).items.size();
    /*MOV*/ const s_SolvedNode pop_1 { MUT(node_1, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).items[(N - 1)] };
    if (N > 2)
        MUT(node_1, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).items.pop();
    else
    {
        const s_SolvedNode& head = SolvedNodeData(node_1, module, _scope, ctx).items[0];
        node_1 = head;
    };
    return /*NRVO*/ pop_1;
}

static s_SolvedNode if_A_and_NEVER_then_B_else_C(const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, int& _notes, s_SolvedNode& cond, const s_Target& _current_fn_or_type)
{
    makeNote(N_DeadIfCons, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    return popAndOr(cond, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _helpers_data);
}

static s_SolvedNode solveIf(const s_Node& node_1, s_Type&& type_3, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ s_SolvedNode cond = solveNode(node_1.items[0], t_bool, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    if (is_never(SolvedNodeData(cond, module, _scope, ctx).type))
    {
        makeNote(N_DeadIfCond, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return /*NRVO*/ cond;
    };
    const s_SolvedNode cons = (((SolvedNodeData(cond, module, _scope, ctx).kind == "and"_fu) && is_never(SolvedNodeData(last_0oqA(SolvedNodeData(cond, module, _scope, ctx).items), module, _scope, ctx).type)) ? if_A_and_NEVER_then_B_else_C(options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes, cond, _current_fn_or_type) : solveBlock(node_1.items[1], type_3, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, 0, _scope, _helpers, module, _current_fn, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string));
    const s_SolvedNode alt = solveBlock(node_1.items[2], s_Type((type_3 ? type_3 : SolvedNodeData(cons, module, _scope, ctx).type)), 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, 0, _scope, _helpers, module, _current_fn, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    if (!is_void(type_3))
        type_3 = superType("if/else: "_fu, SolvedNodeData(cons, module, _scope, ctx).type, SolvedNodeData(alt, module, _scope, ctx).type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data);

    if (is_never(SolvedNodeData(cons, module, _scope, ctx).type) && is_never(SolvedNodeData(alt, module, _scope, ctx).type))
        type_3 = t_never;

    return solved(node_1, (type_3 ? type_3 : fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(cond), s_SolvedNode(cons), s_SolvedNode(alt) } }, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveOr(const s_Node& node_1, s_Type&& type_3, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_SolvedNode> items_5 = solveNodes(node_1.items, (is_void(type_3) ? t_bool : type_3), type_3, true, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    if (items_5.size() < 2)
        return s_SolvedNode(only_Mzjf(items_5));

    if (is_void(type_3))
        type_3 = t_bool;

    if (!is_bool(type_3))
    {
        s_Type sumType {};
        bool hasNever = false;
        for (int i = items_5.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items_5[i];
            if (is_never(SolvedNodeData(item, module, _scope, ctx).type))
            {
                hasNever = true;
                continue;
            };
            const s_SolvedNode& andLast = (hasNever && (SolvedNodeData(item, module, _scope, ctx).kind == "and"_fu) && SolvedNodeData(item, module, _scope, ctx).items ? SolvedNodeData(item, module, _scope, ctx).items[(SolvedNodeData(item, module, _scope, ctx).items.size() - 1)] : (*(const s_SolvedNode*)fu::NIL));
            const s_Type& itemType = ((andLast && !is_never(SolvedNodeData(andLast, module, _scope, ctx).type)) ? SolvedNodeData(andLast, module, _scope, ctx).type : SolvedNodeData(item, module, _scope, ctx).type);
            if (sumType)
            {
                sumType = type_trySuper(sumType, itemType);
                if (!sumType)
                    break;

            }
            else
                sumType = itemType;

        };
        if (!sumType)
            type_3 = t_bool;
        else
            type_3 = sumType;

    };
    return solved(node_1, type_3, items_5, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveAnd(const s_Node& node_1, s_Type&& type_3, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> items_5 = solveNodes(node_1.items, (is_void(type_3) ? t_bool : type_3), type_3, true, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    if (items_5.size() < 2)
        return s_SolvedNode(only_Mzjf(items_5));

    if (is_void(type_3))
        type_3 = t_bool;

    if (!is_bool(type_3))
    {
        s_Type sumType {};
        for (int i = items_5.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items_5[i];
            if (is_never(SolvedNodeData(item, module, _scope, ctx).type))
                continue;

            if (sumType)
            {
                sumType = type_trySuper(sumType, SolvedNodeData(item, module, _scope, ctx).type);
                if (!is_ref(sumType))
                    break;

            }
            else
            {
                type_3 = SolvedNodeData(item, module, _scope, ctx).type;
                sumType = SolvedNodeData(item, module, _scope, ctx).type;
            };
        };
        if (!is_ref(sumType))
        {
            if (is_ref(type_3))
            {
                if (CANNOT_definit_mutrefs)
                    type_3 = clear_mutref(s_Type(type_3));

                type_3.lifetime = Lifetime_makeShared(type_3.lifetime);
            };
        }
        else
            type_3 = sumType;

    };
    return solved(node_1, type_3, items_5, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

                                #ifndef DEF_HM_Anon
                                #define DEF_HM_Anon
inline constexpr short HM_Anon = (short(1) << short(2));
                                #endif

static s_SolvedNode solveLetStatement(const s_Node& node_1, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(node_1.kind == "let"_fu))
        fail((("Expected a `let` statement, got: `"_fu + node_1.kind) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return solveNode(node_1, t_void, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
}

static s_SolvedNode solveLoop(const s_Node& node_1, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, s_Module& module, const s_Context& ctx, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_Target& _current_fn_or_type, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
    fu_DEFER(Scope_pop(_scope, scope0, _helpers));
    const int brk_idx = _helpers.size();
    push(s_HelpersData { s_Target{}, fu_STR(node_1.value), (HM_Anon | HM_CanBreak), int(SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index), 0, GET_next_local_index(_current_fn, module, _scope, ctx), s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} }, _helpers, _helpers_data);
    const s_Node& n_init = node_1.items[LOOP_INIT];
    const s_Node& n_pre_cond = node_1.items[LOOP_COND];
    const s_Node& n_body = node_1.items[LOOP_BODY];
    const s_Node& n_post_cond = node_1.items[LOOP_POST_COND];
    const s_Node& n_post = node_1.items[LOOP_POST];
    /*MOV*/ const s_SolvedNode init = (n_init ? solveLetStatement(n_init, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string) : s_SolvedNode{});
    if (is_never(SolvedNodeData(init, module, _scope, ctx).type))
    {
        makeNote(N_DeadLoopInit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return /*NRVO*/ init;
    };
    const s_SolvedNode pre_cond = (n_pre_cond ? solveNode(n_pre_cond, t_bool, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string) : s_SolvedNode{});
    const s_SolvedNode body = (n_body ? solveBlock(n_body, t_void, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, 0, _scope, _helpers, module, _current_fn, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string) : s_SolvedNode{});
    const s_SolvedNode post_cond = (n_post_cond ? solveNode(n_post_cond, t_bool, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string) : s_SolvedNode{});
    const s_SolvedNode post = (n_post ? solveNode(n_post, t_void, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string) : s_SolvedNode{});
    const s_Helpers& h = _helpers[brk_idx];
    const short label_used = (_helpers_data[h.index].mask & HM_LabelUsed);
    const s_Type& type_3 = ((!pre_cond && !post_cond && !label_used) ? t_never : t_void);
    return solved(node_1, type_3, fu_VEC<s_SolvedNode> { fu::slate<5, s_SolvedNode> { s_SolvedNode(init), s_SolvedNode(pre_cond), s_SolvedNode(body), s_SolvedNode(post_cond), s_SolvedNode(post) } }, (label_used ? _helpers_data[h.index].target : (*(const s_Target*)fu::NIL)), _here, _current_fn_or_type, module, _scope);
}

                                #ifndef DEF_F_SINGLE_STMT
                                #define DEF_F_SINGLE_STMT
inline constexpr int F_SINGLE_STMT = (1 << 31);
                                #endif

static int Scope_lookupReturn(const fu_STR& id_2, const bool lambdaOK, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Scope& _scope, const s_Module& module)
{

    {
        fu::view<s_ScopeSkip> ss = _ss.helpers;
        int ssi = (ss.size() - 1);
        int ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
        for (/*MOV*/ int i_1 = _helpers.size(); i_1-- > 0; )
        {
            if ((ssi >= 0) && (i_1 == ssN))
            {
                i_1 = ss[ssi--].start;
                ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
                continue;
            };
            const s_Helpers& item = _helpers[i_1];
            const s_HelpersData* _0;
            if (!((__extension__ (
            {
                const s_Helpers& h = item;
                _0 = &(_helpers_data[h.index]);
            (void)0;}), *_0).mask & HM_CanReturn))
                continue;

            const s_HelpersData* _1;
            if (((__extension__ (
            {
                const s_Helpers& h = item;
                _1 = &(_helpers_data[h.index]);
            (void)0;}), *_1).mask & HM_Lambda) && !lambdaOK)
                continue;

            const s_HelpersData* _2;
            if (id_2 && ((__extension__ (
            {
                const s_Helpers& h = item;
                _2 = &(_helpers_data[h.index]);
            (void)0;}), *_2).id != id_2))
                continue;

            return /*NRVO*/ i_1;
        };
    };
    fail((("No return `"_fu + id_2) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static int Scope_lookupLabel(const fu_STR& id_2, const bool cont, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Scope& _scope, const s_Module& module)
{
    int CONTINUE_BELOW {};

    {
        fu::view<s_ScopeSkip> ss = _ss.helpers;
        int ssi = (ss.size() - 1);
        int ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
        for (/*MOV*/ int i_1 = _helpers.size(); i_1-- > 0; )
        {
            if ((ssi >= 0) && (i_1 == ssN))
            {
                i_1 = ss[ssi--].start;
                ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
                continue;
            };
            const s_Helpers& item = _helpers[i_1];
            if (i_1 < (CONTINUE_BELOW - 1))
                i_1++;

            const s_HelpersData* _0;
            if (!((__extension__ (
            {
                const s_Helpers& h = item;
                _0 = &(_helpers_data[h.index]);
            (void)0;}), *_0).mask & HM_CanBreak))
            {
                if (!CONTINUE_BELOW)
                {
                    const s_HelpersData* _1;
                    if (id_2 || !((__extension__ (
                    {
                        const s_Helpers& h = item;
                        _1 = &(_helpers_data[h.index]);
                    (void)0;}), *_1).mask & HM_Lambda))
                        continue;

                    if (!cont)
                    {
                        CONTINUE_BELOW = i_1;
                        continue;
                    };
                };
                return /*NRVO*/ i_1;
            };
            if (!CONTINUE_BELOW)
            {
                const s_HelpersData* _2;
                const s_HelpersData* _3;
                if (!(id_2 ? ((__extension__ (
                {
                    const s_Helpers& h = item;
                    _2 = &(_helpers_data[h.index]);
                (void)0;}), *_2).id == id_2) : (((__extension__ (
                {
                    const s_Helpers& h = item;
                    _3 = &(_helpers_data[h.index]);
                (void)0;}), *_3).mask & HM_Anon) != short(0))))
                    continue;

                if (cont)
                {
                    i_1++;
                    if (!(i_1 < _helpers.size()))
                        fail((("Cannot continue to label `"_fu + id_2) + "` from here, did you mean to `break`?"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

                };
            };
            return /*NRVO*/ i_1;
        };
    };
    fail((("No label `"_fu + id_2) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_Helpers& h(fu_VEC<s_Helpers>& _helpers, const int helpers_idx)
{
    return _helpers.mutref(helpers_idx);
}

                                #ifndef DEFt_only_JIxD
                                #define DEFt_only_JIxD
inline const s_Node& only_JIxD(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E_OZkl("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static fu_STR ANON(int& _anons)
{
    return x7E_OZkl("0"_fu, fu::i64dec(_anons++));
}

static s_Target Scope_addLabel(const fu_STR& id_2, const int local_of_2, s_Scope& _scope, int& _anons, const s_Module& module)
{
    return Scope_create(_scope, "label"_fu, (id_2 ? fu_STR(id_2) : ANON(_anons)), s_Type{}, F_SHADOW, s_SolvedNode{}, local_of_2, 0u, true, module);
}

static s_SolvedNode solveJump(int helpers_idx, fu::view<s_Node> items_5, const int kills_1, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_HelpersData* _0;
    const s_Type* _1;
    const s_HelpersData* _2;
    const s_Type& type_3 = (*(_1 = &((__extension__ (
    {
        const s_Helpers& h_1 = h(_helpers, helpers_idx);
        _0 = &(_helpers_data[h_1.index]);
    (void)0;}), *_0).ret_actual)) ? *_1 : (__extension__ (
    {
        const s_Helpers& h_1 = h(_helpers, helpers_idx);
        _2 = &(_helpers_data[h_1.index]);
    (void)0;}), *_2).ret_expect);
    /*MOV*/ const s_SolvedNode expr = (items_5 ? solveNode(only_JIxD(items_5), s_Type(type_3), (helpers_idx + 1), _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string) : s_SolvedNode{});
    if (is_never(SolvedNodeData(expr, module, _scope, ctx).type))
        return /*NRVO*/ expr;

    const bool redundant = (kills_1 == (helpers_idx + 1));
    if (redundant && is_void(SolvedNodeData(expr, module, _scope, ctx).type))
        return /*NRVO*/ expr;

    const s_HelpersData* _3;
    while ((__extension__ (
    {
        const s_Helpers& h_1 = h(_helpers, helpers_idx);
        _3 = &(_helpers_data[h_1.index]);
    (void)0;}), *_3).kills)
    {
        const s_HelpersData* _4;
        helpers_idx = ((__extension__ (
        {
            const s_Helpers& h_1 = h(_helpers, helpers_idx);
            _4 = &(_helpers_data[h_1.index]);
        (void)0;}), *_4).kills - 1);
    };
    const s_HelpersData* _5;
    if (redundant && !((__extension__ (
    {
        const s_Helpers& h_1 = h(_helpers, helpers_idx);
        _5 = &(_helpers_data[h_1.index]);
    (void)0;}), *_5).mask & HM_Function))
        return /*NRVO*/ expr;

    s_HelpersData* _6;
    s_Target* _7;
    const s_HelpersData* _8;
    const fu_STR* _9;
    const s_HelpersData* _10;
    s_Target* _11;
    const s_Target target_6 { (_7 = &((__extension__ (
    {
        const s_Helpers& h_1 = h(_helpers, helpers_idx);
        _6 = &(_helpers_data.mutref(h_1.index));
    (void)0;}), *_6).target), (*(_11 = &(*_7)) ? *_11 : *_11 = (_9 = &((__extension__ (
    {
        const s_Helpers& h_1 = h(_helpers, helpers_idx);
        _8 = &(_helpers_data[h_1.index]);
    (void)0;}), *_8).id), Scope_addLabel(*_9, (__extension__ (
    {
        const s_Helpers& h_1 = h(_helpers, helpers_idx);
        _10 = &(_helpers_data[h_1.index]);
    (void)0;}), *_10).local_of, _scope, _anons, module)))) };
    s_HelpersData* _12;
    (__extension__ (
    {
        const s_Helpers& h_1 = h(_helpers, helpers_idx);
        _12 = &(_helpers_data.mutref(h_1.index));
    (void)0;}), *_12).mask |= HM_LabelUsed;
    if (!items_5)
    {
        const s_Helpers* _13;
        (_13 = &(h(_helpers, helpers_idx)), reportReturnType(*_13, t_void, _helpers_data, _here, ctx, _helpers, _scope, module));
        return createJump(target_6, s_SolvedNode{}, h(_helpers, helpers_idx), _here, _current_fn_or_type, module, _scope);
    };
    /*MOV*/ const s_SolvedNode jump = createJump(target_6, expr, h(_helpers, helpers_idx), _here, _current_fn_or_type, module, _scope);
    s_HelpersData* _14;
    (__extension__ (
    {
        const s_Helpers& h_1 = h(_helpers, helpers_idx);
        _14 = &(_helpers_data.mutref(h_1.index));
    (void)0;}), *_14).returns += jump;
    return /*NRVO*/ jump;
}

static s_SolvedNode solveJump(const s_Node& node_1, const int kills_1, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const int helpers_idx = ((node_1.kind == "return"_fu) ? Scope_lookupReturn(node_1.value, !!(node_1.flags & F_SINGLE_STMT), _helpers, _ss, _helpers_data, _here, ctx, _scope, module) : Scope_lookupLabel(node_1.value, (node_1.kind == "continue"_fu), _helpers, _ss, _helpers_data, _here, ctx, _scope, module));
    return solveJump(int(helpers_idx), node_1.items, kills_1, _helpers, _helpers_data, _here, module, _scope, ctx, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
}

static s_SolvedNode solveInt(const s_Node& node_1, const s_Type& type_3, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fn_or_type)
{
    return solved(node_1, solveInt(node_1.value, type_3, _here, ctx, _helpers, _helpers_data, _scope, module), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveNum(const s_Node& node_1, const s_Type& type_3, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return solved(node_1, solveNum(node_1.value, type_3), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createDefinit(s_Type&& type_3, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    if (is_ref(type_3))
        type_3.lifetime = Lifetime_static();

    if (is_integral(type_3))
        return SolvedNode("int"_fu, type_3, 0, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope);

    if (is_floating_pt(type_3))
        return SolvedNode("real"_fu, type_3, 0, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope);

    return SolvedNode("definit"_fu, type_3, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveStr(const s_Node& node_1, const s_Type& t_string, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    if (!node_1.value)
        return createDefinit(add_ref(s_Type(t_string), Lifetime_temporary(), _here, ctx), _here, _current_fn_or_type, module, _scope);

    return solved(node_1, t_string, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveChar(const s_Node& node_1, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return solved(node_1, t_byte, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDefinit(const s_Type& type_3, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Target& _current_fn_or_type)
{
    s_Type _0 {};
    return createDefinit(((_0 = trySolveDefinit(type_3)) ? static_cast<s_Type&&>(_0) : fail(("Cannot definit type: "_fu + humanizeType(type_3, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module)), _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveCatch(const s_Node& node_1, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(node_1.items.size() == 3))
        fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    const s_SolvedNode var_ok = solveLetStatement(node_1.items[0], _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
    fu_DEFER(Scope_pop(_scope, scope0, _helpers));
    const s_SolvedNode var_err = solveLetStatement(node_1.items[1], _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    const s_SolvedNode cAtch = solveNode(node_1.items[2], t_void, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    const s_Type& type_3 = SolvedNodeData(var_ok, module, _scope, ctx).type;
    if (!(is_never(SolvedNodeData(cAtch, module, _scope, ctx).type)))
        fail("[let catch]: catch clause must exit local scope."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!((SolvedNodeData(var_err, module, _scope, ctx).kind == "let"_fu) && isAssignableAsArgument(SolvedNodeData(var_err, module, _scope, ctx).type, t_string)))
        fail(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return solved(node_1, type_3, fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(var_ok), s_SolvedNode(var_err), s_SolvedNode(cAtch) } }, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveImport(const s_Node& node_1, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss, const s_Target& _current_fn_or_type)
{
    const s_Module& m = findModule(node_1.value, ctx, _here, _helpers, _helpers_data, _scope, module);
    Scope_import(m.modid, bool{}, _scope, _ss, _here, ctx, _helpers, _helpers_data, module);
    return createEmpty("empty"_fu, t_void, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDefer(const s_Node& node_1, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_SolvedNode item = solveNode(only_gZi1(node_1.items), t_void, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    return solved(node_1, t_void, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(item) } }, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTryCatch(const s_Node& node_1, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(node_1.items.size() == 3))
        fail(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
    const s_SolvedNode tRy = solveNode(node_1.items[0], t_void, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    Scope_pop(_scope, scope0, _helpers);
    const s_ScopeMemo scope0_1 = Scope_snap(_scope, _helpers);
    const s_SolvedNode err = solveLetStatement(node_1.items[1], _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    const s_SolvedNode cAtch = solveNode(node_1.items[2], t_void, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    Scope_pop(_scope, scope0_1, _helpers);
    if (!((SolvedNodeData(err, module, _scope, ctx).kind == "let"_fu) && isAssignableAsArgument(SolvedNodeData(err, module, _scope, ctx).type, t_string)))
        fail(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    const s_Type& type_3 = ((is_never(SolvedNodeData(tRy, module, _scope, ctx).type) && is_never(SolvedNodeData(cAtch, module, _scope, ctx).type)) ? t_never : t_void);
    return solved(node_1, type_3, fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(tRy), s_SolvedNode(err), s_SolvedNode(cAtch) } }, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTypedef(const s_Node& node_1, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_SolvedNode annot = evalTypeAnnot(only_gZi1(node_1.items), (*(const s_Map_Lvtq*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    if (isStruct(SolvedNodeData(annot, module, _scope, ctx).type))
        Scope_set(_scope, node_1.value, lookupStruct(SolvedNodeData(annot, module, _scope, ctx).type, module, ctx).target, false);
    else
        Scope_Typedef(_scope, node_1.value, s_Type(SolvedNodeData(annot, module, _scope, ctx).type), node_1.flags, (*(const fu_STR*)fu::NIL), 0u, module);

    return createEmpty("empty"_fu, t_void, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTypeAssert(const s_Node& node_1, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Node& left = node_1.items[0];
    const s_Node& right = node_1.items[1];
    s_SolvedNode _0 {};
    s_Type expect { (_0 = evalTypeAnnot(right, (*(const s_Map_Lvtq*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string), SolvedNodeData(s_SolvedNode(_0), module, _scope, ctx)).type };
    /*MOV*/ const s_SolvedNode actual = solveNode(left, s_Type(expect), 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    checkAssignable(expect, SolvedNodeData(actual, module, _scope, ctx).type, "Type assertion failed"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);
    return /*NRVO*/ actual;
}

static s_SolvedNode solveTypeParam(const s_Node& node_1, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss, const s_Target& _current_fn_or_type)
{
    return solved(node_1, evalTypeParam(node_1.value, (*(const s_Map_Lvtq*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static void visitScope(fu::view<s_ScopeItem> items_5, const bool shadow, const fu_STR& id_2, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    int scope_iterator {};
    s_Target target_6 {};
    bool shadows {};
    while (!shadow && (target_6 = search(items_5, id_2, scope_iterator, _ss.items, shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
        result.push(target_6);

}

                                #ifndef DEFt_each_6Swk
                                #define DEFt_each_6Swk
inline void each_6Swk(fu::view<s_Struct> a, int, const bool shadow, const fu_STR& id_2, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Struct& sTruct = a[i];
        visitScope(sTruct.items, shadow, id_2, _ss, result);
    };
}
                                #endif

static void visitTypes(const s_Module& module_1, const bool shadow, const fu_STR& id_2, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    each_6Swk(module_1.out.types, 0, shadow, id_2, _ss, result);
}

                                #ifndef DEFt_each_T1VS
                                #define DEFt_each_T1VS
inline void each_T1VS(fu::view<int> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, const s_Context& ctx, const bool shadow, const fu_STR& id_2, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_5.size(), items_5.size() };
    int i0 = start_1;
    for (int i = 0; i < (scope_skip_1.size() + 1); i++)
    {
        const s_ScopeSkip& ss = ((i < scope_skip_1.size()) ? scope_skip_1[i] : END_DUMMY);
        if ((ss.end <= i0))
            continue;

        const int i1 = ss.start;
        for (int i_1 = i0; i_1 < i1; i_1++)
        {
            const int import = items_5[i_1];
            visitTypes(ctx.modules[import], shadow, id_2, _ss, result);
        };
        i0 = ss.end;
    };
}
                                #endif

static s_SolvedNode solveAddrOfFn(const s_Node& node_1, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type)
{
    const fu_STR& id_2 = node_1.value;
    const bool shadow = false;
    fu_VEC<s_Target> result {};
    visitScope(_scope.items, shadow, id_2, _ss, result);
    if (node_1.flags & F_ACCESS)
    {
        visitTypes(module, shadow, id_2, _ss, result);
        each_T1VS(_scope.imports, _ss.imports, 0, 0, ctx, shadow, id_2, _ss, result);
    };
    if (!(result))
        fail((("No `fn "_fu + id_2) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    s_Type type_3 = s_Type { s_ValueType { 0, 0, packAddrOfFn(result) }, s_Lifetime{} };
    return createEmpty("empty"_fu, type_3, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDeclExpr(const s_Node& node_1, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    return s_SolvedNode(only_Mzjf(solveNodes((fu::slate<1, s_Node> { s_Node(node_1) }), (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string)));
}

static void walk(s_Node& node_3, fu::view<char> placeholder, const s_ScopeItem& field)
{
    for (int i = 0; i < node_3.items.size(); i++)
        walk(node_3.items.mutref(i), placeholder, field);

    if (node_3.value == placeholder)
    {
        if ((node_3.items.size() == 1) && (node_3.kind == "call"_fu))
            node_3.value = field.id;
        else if (node_3.kind == "str"_fu)
            node_3.value = field.id;

    };
}

inline static s_Node astReplace_u2TO(const s_Node& node_2, int, fu::view<char> placeholder, const s_ScopeItem& field)
{
    /*MOV*/ s_Node node_3 { node_2 };
    walk(node_3, placeholder, field);
    return /*NRVO*/ node_3;
}

static s_SolvedNode solveForFieldsOf(const s_Node& node_1, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu::view<char> placeholder = node_1.value;
    const s_Node& body_template = node_1.items[1];
    s_SolvedNode _0 {};
    const s_Type& fields_of = (_0 = evalTypeAnnot(node_1.items[0], (*(const s_Map_Lvtq*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string), SolvedNodeData(s_SolvedNode(_0), module, _scope, ctx)).type;
    if (!(isStruct(fields_of)))
        fail((("[for fieldname]: This is not a struct: `"_fu + humanizeType(fields_of, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    fu::view<s_ScopeItem> fields = lookupStruct(fields_of, module, ctx).items;
    fu_VEC<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        if (GET(target(field), _scope, module, ctx, _here, _helpers, _helpers_data).kind == "field"_fu)
            items_ast += astReplace_u2TO(body_template, 0, placeholder, field);

    };
    fu_VEC<s_SolvedNode> items_5 = solveNodes(items_ast, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    const s_Type& type_3 = (is_never(SolvedNodeData(last_0oqA(items_5), module, _scope, ctx).type) ? t_never : t_void);
    return createBlock(type_3, fu_VEC<s_SolvedNode>(items_5), s_Target{}, s_Helpers{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);
}

static void compilerBreak(const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu_STR debug = "\nCompiler break:"_fu;
    if (SolvedNodeData(_current_fn.out, module, _scope, ctx).target)
    {
        const s_Target& t = SolvedNodeData(_current_fn.out, module, _scope, ctx).target;
        debug += (x7E_OZkl((x7E_OZkl((("\n    Current fn: "_fu + qWHAT(GET(t, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)) + " at ("_fu), fu::i64dec(t.modid)) + ", "_fu), fu::i64dec(t.index)) + "):"_fu);
        fu::view<s_Overload> locals_1 = EXT(t, module, _scope, ctx).locals;
        for (int i = 0; i < locals_1.size(); i++)
        {
            const s_Overload& item = locals_1[i];
            debug += ("\n        "_fu + qWHAT(item, module, _scope, ctx, _here, _helpers, _helpers_data));
        };
    };
    if (debug)
    {
        const fu_STR* _0;
        fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
        {
            /*RRET*/ const fu_STR& x = debug;
            _0 = &(x);
        (void)0;}), *_0)) }));
    };
    compilerBreak();
}

static s_SolvedNode executeCompilerPragma(const s_Node& node_1, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type)
{
    if (node_1.value == "break"_fu)
        compilerBreak(_current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);
    else
        fail((("Unknown compiler pragma: `"_fu + node_1.value) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return createEmpty("empty"_fu, t_void, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveNode(const s_Node& node_1, const s_Type& type_3, const int kills_1, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_n2DH& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    HERE(node_1.token, _here);
    fu::view<char> k = node_1.kind;
    if (k == "root"_fu)
        return solveRoot(node_1, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "block"_fu)
        return solveBlock(node_1, type_3, 0, HM_CanBreak, kills_1, (*(const fu_STR*)fu::NIL), 0, 0, _scope, _helpers, module, _current_fn, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "argid"_fu)
        return solveArgID(node_1, type_3, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "let"_fu)
        return solveLet(node_1, (*(const s_Type*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "call"_fu)
        return solveCall(node_1, s_Target{}, kills_1, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "arrlit"_fu)
        return solveArrlit(node_1, type_3, module, ctx, _here, _scope, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "if"_fu)
        return solveIf(node_1, s_Type(type_3), _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "or"_fu)
        return solveOr(node_1, s_Type(type_3), _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "and"_fu)
        return solveAnd(node_1, s_Type(type_3), _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "loop"_fu)
        return solveLoop(node_1, _scope, _helpers, _current_fn, module, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "break"_fu)
        return solveJump(node_1, kills_1, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "return"_fu)
        return solveJump(node_1, kills_1, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "continue"_fu)
        return solveJump(node_1, kills_1, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "int"_fu)
        return solveInt(node_1, type_3, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);

    if (k == "real"_fu)
        return solveNum(node_1, type_3, _here, _current_fn_or_type, module, _scope);

    if (k == "str"_fu)
        return solveStr(node_1, t_string, _here, ctx, _current_fn_or_type, module, _scope);

    if (k == "char"_fu)
        return solveChar(node_1, _here, _current_fn_or_type, module, _scope);

    if (k == "definit"_fu)
        return solveDefinit(type_3, module, ctx, _here, _helpers, _helpers_data, _scope, _current_fn_or_type);

    if (k == "catch"_fu)
        return solveCatch(node_1, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "import"_fu)
        return solveImport(node_1, ctx, _here, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type);

    if (k == "defer"_fu)
        return solveDefer(node_1, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "try"_fu)
        return solveTryCatch(node_1, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "typedef"_fu)
        return solveTypedef(node_1, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "typeassert"_fu)
        return solveTypeAssert(node_1, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "typeparam"_fu)
        return solveTypeParam(node_1, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type);

    if (k == "addroffn"_fu)
        return solveAddrOfFn(node_1, _scope, _ss, module, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);

    if (k == "fn"_fu)
        return solveDeclExpr(node_1, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "struct"_fu)
        return solveDeclExpr(node_1, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "forfieldsof"_fu)
        return solveForFieldsOf(node_1, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);

    if (k == "compiler"_fu)
        return executeCompilerPragma(node_1, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);

    fail(("TODO: "_fu + k), _here, ctx, _helpers, _helpers_data, _scope, module);
}

s_SolverOutput solve(const s_Options& options, const s_Context& ctx, s_Module& module)
{
    const s_Node& parse_3 = module.in.parse.root;
    s_TokenIdx _here {};
    s_Scope _scope {};
    s_ScopeMemo _root_scope {};
    s_ScopeSkipMemos _ss {};
    fu_VEC<s_ScopeItem> _field_items {};
    int _notes {};
    s_CurrentFn _current_fn {};
    fu_VEC<s_Helpers> _helpers {};
    fu_VEC<s_HelpersData> _helpers_data {};
    int _anons {};
    const s_Target MODULE_TOP = Scope_create(_scope, "_module_top_"_fu, (*(const fu_STR*)fu::NIL), (*(const s_Type*)fu::NIL), 0, s_SolvedNode{}, 0, 0u, bool{}, module);
    push(s_HelpersData { s_Target(MODULE_TOP), "_module_top_"_fu, short(0), 0, 0, 0, s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} }, _helpers, _helpers_data);
    s_Target _current_fn_or_type { MODULE_TOP };
    s_Map_n2DH _specs {};
    s_Type t_string = createArray(t_byte, _here, ctx);
    fu_VEC<s_SolvedNode> TODO_FIX_convert_args = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { SolvedNode((*(const fu_STR*)fu::NIL), s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope) } };
    const s_SolvedNode TODO_FIX_template_defarg = SolvedNode("__defarg"_fu, s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
    if (module.modid)
    {
        _scope.imports += module.modid;
        _Scope_import__forceCopy(0, bool{}, ctx, _scope);
    }
    else
        _scope = listGlobals(module);

    const s_SolvedNode root_2 = solveNode(s_Node(parse_3), (*(const s_Type*)fu::NIL), 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, _field_items, t_string);
    if (_current_fn.out)
        fail("non-empty _current_fn."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    return s_SolverOutput { s_SolvedNode(root_2), Scope_exports(_scope, module.modid, _field_items), int(_notes) };
}

#endif
