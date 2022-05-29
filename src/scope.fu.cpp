#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/default.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_Target;
struct s_ScopeItem;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
enum s_kind: int;
struct s_ParserOutput;
struct s_Node;
typedef int s_DeclAsserts;
typedef int s_ParseSyntax;
typedef unsigned s_Flags;
struct s_TokenIdx;
struct s_ModuleOutputs;
struct s_Struct;
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
typedef uint16_t s_SolverStatus;
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
fu_STR createStructCanon_ku8KcJ4A(s_kind, const fu_STR&, int, int, fu::view<char>);

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

                                #ifndef DEF_s_kind
                                #define DEF_s_kind
enum s_kind: int
{
    s_kind_sof = 1,
    s_kind_id = 2,
    s_kind_op = 3,
    s_kind_int = 4,
    s_kind_real = 5,
    s_kind_char = 6,
    s_kind_str = 7,
    s_kind_err = 8,
    s_kind_eof = 9,
    s_kind_root = 10,
    s_kind_block = 11,
    s_kind_argid = 12,
    s_kind_let = 13,
    s_kind_call = 14,
    s_kind_arrlit = 15,
    s_kind_if = 16,
    s_kind_or = 17,
    s_kind_and = 18,
    s_kind_loop = 19,
    s_kind_break = 20,
    s_kind_return = 21,
    s_kind_continue = 22,
    s_kind_bool = 23,
    s_kind_definit = 24,
    s_kind_import = 25,
    s_kind_defer = 26,
    s_kind_try = 27,
    s_kind_typedef = 28,
    s_kind_typecast = 29,
    s_kind_typeassert = 30,
    s_kind_typeparam = 31,
    s_kind_addroffn = 32,
    s_kind_forfieldsof = 33,
    s_kind_pragma = 34,
    s_kind_void = 35,
    s_kind_struct = 36,
    s_kind_union = 37,
    s_kind_primitive = 38,
    s_kind_flags = 39,
    s_kind_enum = 40,
    s_kind_members = 41,
    s_kind_fn = 42,
    s_kind_fnbranch = 43,
    s_kind_pattern = 44,
    s_kind_typeunion = 45,
    s_kind_typetag = 46,
    s_kind_jump = 47,
    s_kind_empty = 48,
    s_kind_letdef = 49,
    s_kind___relaxed = 50,
    s_kind___convert = 51,
    s_kind_fndef = 52,
    s_kind_copy = 53,
    s_kind_move = 54,
    s_kind___far_jump = 55,
    s_kind___no_kind_yet = 56,
    s_kind_type = 57,
    s_kind_var = 58,
    s_kind_field = 59,
    s_kind_enumv = 60,
    s_kind_template = 61,
    s_kind___native = 62,
    s_kind_inline = 63,
};
                                #endif

                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    s_kind kind;
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

                                #ifndef DEF_s_DeclAsserts
                                #define DEF_s_DeclAsserts
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCOPY = 1;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC = 2;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC_MUT = 4;
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE = 8;
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_CTX = 16;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOFLOW = 32;
                                #endif

                                #ifndef DEF_s_ParseSyntax
                                #define DEF_s_ParseSyntax
inline constexpr s_ParseSyntax s_ParseSyntax_PS_ID = 1;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_PARENS = 2;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_SEMI = 4;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_DISCARD = 8;
                                #endif

                                #ifndef DEF_s_Flags
                                #define DEF_s_Flags
inline constexpr s_Flags s_Flags_F_METHOD = 1;
inline constexpr s_Flags s_Flags_F_INFIX = 2;
inline constexpr s_Flags s_Flags_F_PREFIX = 4;
inline constexpr s_Flags s_Flags_F_POSTFIX = 8;
inline constexpr s_Flags s_Flags_F_ACCESS = 16;
inline constexpr s_Flags s_Flags_F_COMPOUND_ID = 32;
inline constexpr s_Flags s_Flags_F_WRITTEN_TO = 64;
inline constexpr s_Flags s_Flags_F_LAX = 128;
inline constexpr s_Flags s_Flags_F_ARG = 256;
inline constexpr s_Flags s_Flags_F_OPERATOR = 512;
inline constexpr s_Flags s_Flags_F_MOVED_FROM = 1024;
inline constexpr s_Flags s_Flags_F_CONVERSION = 2048;
inline constexpr s_Flags s_Flags_F_OPT_ARG = 4096;
inline constexpr s_Flags s_Flags_F_MUT = 8192;
inline constexpr s_Flags s_Flags_F_REF = 16384;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 32768;
inline constexpr s_Flags s_Flags_F_USING = 65536;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 131072;
inline constexpr s_Flags s_Flags_F_SHADOW = 262144;
inline constexpr s_Flags s_Flags_F_PUB = 524288;
inline constexpr s_Flags s_Flags_F_EXTERN = 1048576;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 2097152;
inline constexpr s_Flags s_Flags_F_PREDICATE = 4194304;
inline constexpr s_Flags s_Flags_F_NAMED_ARGS = 8388608;
inline constexpr s_Flags s_Flags_F_OOE_RTL = 16777216;
inline constexpr s_Flags s_Flags_F_REST_ARG = 33554432;
inline constexpr s_Flags s_Flags_F_RELAXABLE_REF = 67108864;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 134217728;
inline constexpr s_Flags s_Flags_F_INLINE = 268435456;
inline constexpr s_Flags s_Flags_F_LAMBDA = 536870912;
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
    s_kind kind;
    s_DeclAsserts asserts;
    s_ParseSyntax syntax;
    s_Flags flags;
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

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    s_kind kind;
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
            || kind
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
    s_kind kind;
    s_Helpers helpers;
    s_Flags flags;
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

                                #ifndef DEF_s_SolverStatus
                                #define DEF_s_SolverStatus
inline constexpr s_SolverStatus s_SolverStatus_SS_LAZY = 1;
inline constexpr s_SolverStatus s_SolverStatus_SS_DID_START = 2;
inline constexpr s_SolverStatus s_SolverStatus_SS_DIRTY = 4;
inline constexpr s_SolverStatus s_SolverStatus_SS_FINALIZED = 8;
inline constexpr s_SolverStatus s_SolverStatus_SS_UPDATED = 16;
inline constexpr s_SolverStatus s_SolverStatus_SS_TYPE_RECUR = 32;
inline constexpr s_SolverStatus s_SolverStatus_SS_FN_RECUR = 64;
inline constexpr s_SolverStatus s_SolverStatus_SS_HOIST = 128;
inline constexpr s_SolverStatus s_SolverStatus_SS_UNUSED = 256;
                                #endif

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    s_kind kind;
    s_Flags flags;
    s_SolverStatus status;
    fu_STR name;
    fu_STR sighash;
    s_Type type;
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
    s_Flags flags;
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

#ifndef fu_NO_fdefs

s_Target target_wh65lsPu(const s_ScopeItem& si)
{
    return s_Target { int(si.modid), int((si.packed & ~(0x1u << 31u))) };
}

bool ScopeItem_shadows_wh65lsPu(const s_ScopeItem& si)
{
    return !!(si.packed & (0x1u << 31u));
}

s_ScopeItem ScopeItem_QU5YFfTi(const fu_STR& id, const s_Target& target, const bool shadows)
{
    return s_ScopeItem { fu_STR(id), int(target.modid), (unsigned(target.index) | (shadows ? (0x1u << 31u) : unsigned{})) };
}

s_ScopeItem& target_TODOFIX_pzhnE2ba(s_ScopeItem& si, const s_Target& target)
{
    si.modid = target.modid;
    si.packed = unsigned(target.index);
    return si;
}

int MODID_l8HfNDzr(const s_Module& module)
{
    return module.modid;
}

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline constexpr int q_rx_copy = (1 << 1);
                                #endif

s_Type initStruct_2K4k4ce4(const s_kind kind, const fu_STR& baseprim, const fu_STR& name, const s_DeclAsserts asserts, s_Module& module)
{
    if (!(fu::u8((fu::u8(fu::u8(name[0])) - fu::u8(fu::u8('0')))) > fu::u8(unsigned(9))))
        fu::fail((("Bad struct name, leading digit: `"_fu + name) + "`."_fu));

    const int index = module.out.types.size();
    module.out.types += s_Struct { s_kind(kind), fu_STR(name), s_Target{}, fu_VEC<s_ScopeItem>{}, fu_VEC<int>{}, fu_VEC<s_Target>{}, fu_STR(baseprim), 0, bool{} };
    fu_STR canon = createStructCanon_ku8KcJ4A(kind, baseprim, module.modid, index, name);
    const int specualtive_quals = (!(asserts & s_DeclAsserts_A_NOCOPY) ? q_rx_copy : (*(const int*)fu::NIL));
    return s_Type { s_ValueType { int(specualtive_quals), fu_STR(canon) }, s_Lifetime{} };
}

s_Type despeculateStruct_CPSh38G1(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_rx_copy;
    return static_cast<s_Type&&>(type);
}

s_Scope Scope_exports_3xUYpXMb(const s_Scope& scope, const int modid, const fu_VEC<s_ScopeItem>& field_items)
{
    fu_VEC<s_ScopeItem> items { field_items };
    fu_VEC<s_ScopeItem> prv_items {};
    fu_VEC<s_Target> converts {};
    fu_VEC<s_Target> prv_converts {};
    for (int i = 0; i < scope.items.size(); i++)
    {
        const s_ScopeItem& item = scope.items[i];
        if (target_wh65lsPu(item).modid == modid)
        {
            const s_Overload& overload = scope.overloads[(target_wh65lsPu(item).index - 1)];
            ((overload.flags & s_Flags_F_PUB) ? items : prv_items) += s_ScopeItem(item);
        };
    };
    for (int i_1 = 0; i_1 < scope.converts.size(); i_1++)
    {
        const s_Target& item = scope.converts[i_1];
        if (item.modid == modid)
        {
            const s_Overload& overload = scope.overloads[(item.index - 1)];
            ((overload.flags & s_Flags_F_PUB) ? converts : prv_converts) += s_Target(item);
        };
    };
    const int pub_items = items.size();
    items += prv_items;
    const int pub_cnvrts = converts.size();
    converts += prv_converts;
    return s_Scope { fu_VEC<s_Overload>(scope.overloads), fu_VEC<s_Extended>(scope.extended), fu_VEC<s_ScopeItem>(items), fu_VEC<s_ScopeItem>{}, fu_VEC<int>{}, fu_VEC<int>{}, fu_VEC<s_Target>{}, fu_VEC<s_Target>(converts), int(pub_items), int(pub_cnvrts) };
}

static void nextSkip_ym6ttuuT(fu::view<s_ScopeSkip> scope_skip, int& scope_iterator, int& skiptrap, fu::view<s_ScopeItem> items)
{
    for (int i = scope_skip.size(); i-- > 0; )
    {
        const s_ScopeSkip& ss = scope_skip[i];
        const int s1 = (ss.end - 1);
        if (scope_iterator > s1)
        {
            skiptrap = s1;
            break;
        };
        const int s0 = (ss.start - 1);
        if (scope_iterator > s0)
            scope_iterator = s0;
    };
    if ((skiptrap >= items.size()))
        fu::fail("Scope/search: scope_skip will jump past end of items."_fu);

}

s_Target search_7gDKHCyh(fu::view<s_ScopeItem> items, const fu_STR& id, int& scope_iterator, fu::view<s_ScopeSkip> scope_skip, bool& shadows, const s_Target& dont_search_just_return, fu::view<s_Target> extra_items, fu::view<s_ScopeItem> field_items)
{
    if (dont_search_just_return)
    {
        if (scope_iterator)
            return s_Target{};

        scope_iterator--;
        return s_Target(dont_search_just_return);
    };
    const int START = ((items.size() + extra_items.size()) + field_items.size());
    if (!scope_iterator)
        scope_iterator = START;
    else if ((scope_iterator >= START))
        fu::fail("Scope/search: items shrunk while we iterated."_fu);

    int skiptrap = -1;
    scope_iterator--;
    nextSkip_ym6ttuuT(scope_skip, scope_iterator, skiptrap, items);
    scope_iterator++;
    s_ScopeItem TODO_FIX = s_ScopeItem{};
    if (extra_items)
        TODO_FIX.id = id;

    while (scope_iterator-- > 0)
    {
        if (scope_iterator == skiptrap)
        {
            nextSkip_ym6ttuuT(scope_skip, scope_iterator, skiptrap, items);
            if (scope_iterator == -1)
                break;
        }

        const s_ScopeItem& item = ((scope_iterator >= items.size()) ? ((scope_iterator >= (items.size() + extra_items.size())) ? field_items[((scope_iterator - items.size()) - extra_items.size())] : target_TODOFIX_pzhnE2ba(TODO_FIX, extra_items[(scope_iterator - items.size())])) : items[scope_iterator]);
        if (item.id == id)
        {
            if (!scope_iterator)
                scope_iterator = -1;

            shadows = ScopeItem_shadows_wh65lsPu(item);
            return target_wh65lsPu(item);
        };
    };
    return s_Target{};
}

s_ScopeMemo Scope_snap_WgJlFXyy(const s_Scope& scope, fu::view<s_Helpers> _helpers)
{
    return s_ScopeMemo { scope.items.size(), scope.implicits.size(), scope.imports.size(), scope.privates.size(), scope.usings.size(), scope.converts.size(), _helpers.size() };
}

void Scope_pop_pJmZr7lr(s_Scope& scope, const s_ScopeMemo& memo, fu_VEC<s_Helpers>& _helpers)
{
    scope.items.shrink(memo.items_len);
    scope.implicits.shrink(memo.implicits_len);
    scope.imports.shrink(memo.imports_len);
    scope.privates.shrink(memo.privates_len);
    scope.usings.shrink(memo.usings_len);
    scope.converts.shrink(memo.converts_len);
    _helpers.shrink(memo.helpers_len);
}

int cmp_dl5ghMes(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    int _0 {};
    return (_0 = (a.items_len - b.items_len)) ? _0 : (_0 = (a.implicits_len - b.implicits_len)) ? _0 : (_0 = (a.imports_len - b.imports_len)) ? _0 : (_0 = (a.privates_len - b.privates_len)) ? _0 : (_0 = (a.usings_len - b.usings_len)) ? _0 : (_0 = (a.converts_len - b.converts_len)) ? _0 : (a.helpers_len - b.helpers_len);
}

bool operator>(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    return cmp_dl5ghMes(a, b) > 0;
}

bool operator<(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    return cmp_dl5ghMes(a, b) < 0;
}

bool operator==(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    return cmp_dl5ghMes(a, b) == 0;
}

bool operator==(const s_Helpers& a, const s_Helpers& b)
{
    return a.index == b.index;
}

                                #ifndef DEF_grow_if_oob_h4z4Xr0k
                                #define DEF_grow_if_oob_h4z4Xr0k
inline s_Extended& grow_if_oob_h4z4Xr0k(fu_VEC<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

s_Target Scope_create_8vkRC1Ki(s_Scope& scope, const s_kind kind, const fu_STR& name, const s_Type& type, const s_Flags flags, const s_SolverStatus status, const int nest, const s_Module& module)
{
    fu_VEC<s_Overload>& overloads = (nest ? grow_if_oob_h4z4Xr0k(scope.extended, nest).locals : scope.overloads);
    /*MOV*/ const s_Target target = s_Target { (nest ? -nest : int(MODID_l8HfNDzr(module))), (overloads.size() + 1) };
    s_Overload item {};
    item.name = name;
    item.kind = kind;
    item.flags = flags;
    item.type = type;
    item.status = status;
    overloads.push(s_Overload(item));
    return /*NRVO*/ target;
}

void Scope_set_hPlkl1cj(fu_VEC<s_ScopeItem>& items, const fu_STR& id, const s_Target& target, const bool shadows)
{
    items.push(ScopeItem_QU5YFfTi(id, target, shadows));
}

void Scope_set_BU3HNW7T(s_Scope& scope, const fu_STR& id, const s_Target& target, const bool shadows)
{
    Scope_set_hPlkl1cj(scope.items, id, target, shadows);
}

s_Target Scope_Typedef_gq0kpTD8(s_Scope& scope, const fu_STR& id, const s_Type& type, const s_Flags flags, const fu_STR& name, const s_SolverStatus status, const s_Module& module)
{
    /*MOV*/ const s_Target target = Scope_create_8vkRC1Ki(scope, s_kind_type, name, type, flags, status, 0, module);
    if (id)
        Scope_set_BU3HNW7T(scope, id, target, !!(flags & s_Flags_F_SHADOW));

    return /*NRVO*/ target;
}

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
extern const s_Type t_i8;
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
extern const s_Type t_i16;
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
extern const s_Type t_i32;
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
extern const s_Type t_i64;
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8;
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
extern const s_Type t_u16;
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
extern const s_Type t_u32;
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
extern const s_Type t_u64;
                                #endif

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32;
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
extern const s_Type t_f64;
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void;
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never;
                                #endif

s_Scope listGlobals_l8HfNDzr(const s_Module& module)
{
    /*MOV*/ s_Scope scope {};
    Scope_Typedef_gq0kpTD8(scope, "i8"_fu, t_i8, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    Scope_Typedef_gq0kpTD8(scope, "i16"_fu, t_i16, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    Scope_Typedef_gq0kpTD8(scope, "i32"_fu, t_i32, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    Scope_Typedef_gq0kpTD8(scope, "i64"_fu, t_i64, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    Scope_Typedef_gq0kpTD8(scope, "u8"_fu, t_u8, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    Scope_Typedef_gq0kpTD8(scope, "u16"_fu, t_u16, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    Scope_Typedef_gq0kpTD8(scope, "u32"_fu, t_u32, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    Scope_Typedef_gq0kpTD8(scope, "u64"_fu, t_u64, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    Scope_Typedef_gq0kpTD8(scope, "f32"_fu, t_f32, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    Scope_Typedef_gq0kpTD8(scope, "f64"_fu, t_f64, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    Scope_Typedef_gq0kpTD8(scope, "bool"_fu, t_bool, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    Scope_Typedef_gq0kpTD8(scope, "byte"_fu, t_byte, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    Scope_Typedef_gq0kpTD8(scope, "void"_fu, t_void, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    Scope_Typedef_gq0kpTD8(scope, "never"_fu, t_never, s_Flags_F_PUB, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    return /*NRVO*/ scope;
}

#endif
