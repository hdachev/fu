
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/init_priority.h>
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

                                #ifndef DEF_q_rx_move
                                #define DEF_q_rx_move
inline constexpr int q_rx_move = (1 << 3);
                                #endif

static const fu_VEC<fu_STR> TAGS fu_INIT_PRIORITY(1008) = fu_VEC<fu_STR> { fu::slate<4, fu_STR> { "mutref"_fu, "copy"_fu, "resize"_fu, "move"_fu } };

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

s_Region Region_fromLocalIndex(const int index)
{
    return s_Region { int(index) };
}

bool Region_isArg(const s_Region& region)
{
    return region.index < 0;
}

int Region_toArgIndex(const s_Region& region)
{
    return -Region_toLocalIndex(region);
}

s_Region Region_fromArgIndex(const int index)
{
    return Region_fromLocalIndex(-index);
}

static const s_Region Region_TEMP fu_INIT_PRIORITY(1008) = Region_fromLocalIndex(int(0x7fffffffu));

static const s_Region Region_STATIC fu_INIT_PRIORITY(1008) = Region_fromLocalIndex(int(0x80000001u));

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

s_Lifetime Lifetime_makeShared(const s_Lifetime& lifetime)
{
    return Lifetime_union(lifetime, Lifetime_static());
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

                                #ifndef DEF_Primitive
                                #define DEF_Primitive
extern const int Primitive = q_rx_copy;
                                #endif

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
extern const s_Type t_i8 fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { int(Primitive), 0, "i8"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
extern const s_Type t_i16 fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { int(Primitive), 0, "i16"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
extern const s_Type t_i32 fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { int(Primitive), 0, "i32"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
extern const s_Type t_i64 fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { int(Primitive), 0, "i64"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8 fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { int(Primitive), 0, "u8"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
extern const s_Type t_u16 fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { int(Primitive), 0, "u16"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
extern const s_Type t_u32 fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { int(Primitive), 0, "u32"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
extern const s_Type t_u64 fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { int(Primitive), 0, "u64"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32 fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { int(Primitive), 0, "f32"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
extern const s_Type t_f64 fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { int(Primitive), 0, "f64"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { 0, 0, "void"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { int(Primitive), 0, "bool"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { 0, 0, "never"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_zeroes
                                #define DEF_t_zeroes
extern const s_Type t_zeroes fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { 0, 0, "zeroes"_fu }, s_Lifetime{} };
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte fu_INIT_PRIORITY(1008) = s_Type { s_ValueType { int(Primitive), 0, "byte"_fu }, s_Lifetime{} };
                                #endif

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

bool is_rx_resize(const s_Type& t)
{
    return !!(t.vtype.quals & q_rx_resize);
}

bool maybe_nonzero(const s_Type& t)
{
    return is_never(t) || is_void(t);
}

                                #ifndef DEF_CANNOT_definit_mutrefs
                                #define DEF_CANNOT_definit_mutrefs
extern const bool CANNOT_definit_mutrefs = true;
                                #endif

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

                                #ifndef DEF_q_mutref_or_move
                                #define DEF_q_mutref_or_move
inline constexpr int q_mutref_or_move = (q_mutref | q_rx_move);
                                #endif

bool is_ref(const s_Type& type)
{
    return !!type.lifetime;
}

bool is_mutref(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ const bool a = ((type.vtype.quals & q_mutref) != 0);
    const bool b = is_ref(type);
    if (a && !b)
        BUG("MutRef&&!Ref"_fu, _here, ctx);

    return /*NRVO*/ a;
}

s_Type add_ref(/*MOV*/ s_Type&& type, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Lifetime _0 {};
    type.lifetime = ((_0 = Lifetime_union(type.lifetime, lifetime)) ? static_cast<s_Lifetime&&>(_0) : BUG("add_ref: falsy lifetime"_fu, _here, ctx));
    return static_cast<s_Type&&>(type);
}

s_Type add_mutref(/*MOV*/ s_Type&& type, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    type.vtype.quals |= q_mutref;
    s_Lifetime _0 {};
    type.lifetime = ((_0 = Lifetime_union(type.lifetime, lifetime)) ? static_cast<s_Lifetime&&>(_0) : BUG("add_mutref: falsy lifetime"_fu, _here, ctx));
    return static_cast<s_Type&&>(type);
}

                                #ifndef DEFt_if_last_pdPA
                                #define DEFt_if_last_pdPA
inline const s_Region& if_last_pdPA(fu::view<s_Region> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_Region*)fu::NIL);
}
                                #endif

bool is_ref2temp(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (if_last_pdPA(type.lifetime.uni0n) == Region_TEMP) && (is_ref(type) || BUG("is_ref2temp: has lts but isnt ref"_fu, _here, ctx));
}

s_Type clear_refs(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_mutref_or_move;
    type.lifetime = s_Lifetime{};
    return static_cast<s_Type&&>(type);
}

s_Type clear_mutref(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_mutref;
    return static_cast<s_Type&&>(type);
}

static s_Type tryClearRefs(const s_Type& type, const bool mutref, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (mutref ? is_mutref(type, _here, ctx) : is_ref(type)) ? clear_refs(s_Type(type)) : s_Type{};
}

s_Type tryClear_mutref(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs(type, true, _here, ctx);
}

s_Type tryClear_ref(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs(type, bool{}, _here, ctx);
}

s_Type add_refs(const s_Type& from, /*MOV*/ s_Type&& to)
{
    to.vtype.quals |= (from.vtype.quals & q_mutref_or_move);
    to.lifetime = Lifetime_union(from.lifetime, to.lifetime);
    return static_cast<s_Type&&>(to);
}

s_Type make_copyable(/*MOV*/ s_Type&& type)
{
    type.vtype.quals |= q_rx_copy;
    return static_cast<s_Type&&>(type);
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

fu_STR serializeType(const s_Type& type, fu::view<char> debug, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!(type))
        BUG(("serializeType: Falsy type in: "_fu + debug), _here, ctx);

    fu_STR prefix {};
    if (type.vtype.modid)
        x7Ex3D_BWdE(prefix, fu::i64dec(type.vtype.modid));

    if (type.vtype.quals)
        prefix += x7E_OZkl("+"_fu, fu::i64dec(type.vtype.quals));

    return prefix + (type.vtype.canon ? type.vtype.canon : BUG(("serializeType: No type.canon in: "_fu + debug), _here, ctx));
}

fu_STR humanizeQuals(const s_Type& type)
{
    /*MOV*/ fu_STR result = ":"_fu;
    for (int i = 0; i < TAGS.size(); i++)
    {
        if (type.vtype.quals & (1 << i))
            result += (" "_fu + TAGS[i]);

    };
    return /*NRVO*/ result;
}

s_ValueType parseType(const fu_STR& str)
{
    int offset {};
    const int modid = parse10i32(offset, str);
    int quals = 0;
    if (str[offset] == '+')
    {
        offset++;
        quals = parse10i32(offset, str);
    };
    fu_STR canon = fu::slice(str, offset);
    return s_ValueType { int(quals), int(modid), fu_STR(canon) };
}

bool type_isArray(const s_Type& type)
{
    return (type.vtype.quals & (q_rx_resize | q_rx_copy)) && fu::lmatch(type.vtype.canon, "[]"_fu);
}

s_Type createArray(const s_Type& item, const s_TokenIdx& _here, const s_Context& ctx)
{
    fu_STR canon = ("[]"_fu + serializeType(item, "createArray"_fu, _here, ctx));
    const int quals = ((item.vtype.quals & q_rx_copy) | q_rx_resize);
    const int modid = 0;
    return s_Type { s_ValueType { int(quals), int(modid), fu_STR(canon) }, s_Lifetime(item.lifetime) };
}

s_Type tryClear_array(const s_Type& type)
{
    if (((type.vtype.quals & q_rx_resize) != q_rx_resize) || !type_isArray(type))
        return s_Type{};

    s_ValueType vtype = parseType(fu::slice(type.vtype.canon, 2));
    return s_Type { s_ValueType(vtype), s_Lifetime{} };
}

bool type_isSliceable(const s_Type& type)
{
    return fu::lmatch(type.vtype.canon, "[]"_fu);
}

s_Type createSlice(const s_Type& item, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Type out = createArray(item, _here, ctx);
    out.vtype.quals &= ~(q_rx_copy | q_rx_resize);
    return add_ref(s_Type(out), lifetime, _here, ctx);
}

s_Type tryClear_sliceable(const s_Type& type)
{
    if (!type_isSliceable(type))
        return s_Type{};

    s_ValueType vtype = parseType(fu::slice(type.vtype.canon, 2));
    return s_Type { s_ValueType(vtype), s_Lifetime{} };
}

s_Type clear_sliceable(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Type _0 {};
    return (_0 = tryClear_sliceable(type)) ? static_cast<s_Type&&>(_0) : BUG(("Not sliceable: "_fu + type.vtype.canon), _here, ctx);
}

s_Type type_trySuper(const s_Type& a, const s_Type& b)
{
    if ((a.vtype.canon != b.vtype.canon) || (a.vtype.modid != b.vtype.modid))
        return (is_never(a) ? s_Type(b) : (is_never(b) ? s_Type(a) : (is_zeroes(a) ? (CANNOT_definit_mutrefs ? clear_mutref(s_Type(b)) : s_Type(b)) : (is_zeroes(b) ? (CANNOT_definit_mutrefs ? clear_mutref(s_Type(a)) : s_Type(a)) : s_Type{}))));

    const int quals = (a.vtype.quals & b.vtype.quals);
    s_Lifetime lifetime = (a.lifetime && b.lifetime ? Lifetime_union(a.lifetime, b.lifetime) : s_Lifetime{});
    return s_Type { s_ValueType { int(quals), int(a.vtype.modid), fu_STR(a.vtype.canon) }, s_Lifetime(lifetime) };
}

s_Type type_tryIntersect(const s_Type& a, const s_Type& b)
{
    if ((a.vtype.canon != b.vtype.canon) || (a.vtype.modid != b.vtype.modid))
        return s_Type{};

    const int quals = (a.vtype.quals | b.vtype.quals);
    s_Lifetime lifetime = Lifetime_inter(a.lifetime, b.lifetime);
    if (!lifetime && (a.lifetime || b.lifetime))
        return s_Type{};

    return s_Type { s_ValueType { int(quals), int(a.vtype.modid), fu_STR(a.vtype.canon) }, s_Lifetime(lifetime) };
}

bool will_relax(const s_Type& type, const s_Type& slot, const int relax_mask)
{
    return ((type.vtype.quals & ~slot.vtype.quals) & relax_mask) != 0;
}

bool try_relax(s_Type& type, const s_Type& slot, const int relax_mask)
{
    if (!will_relax(type, slot, int(relax_mask)))
        return false;

    type.vtype.quals &= (slot.vtype.quals | ~relax_mask);
    return true;
}

s_Type relax_typeParam(s_Type&& type)
{
    return clear_refs(s_Type(type));
}

#endif
