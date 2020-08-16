#include <cstdint>
#include <fu/default.h>
#include <fu/map.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/view.h>
#include <utility>

struct s_Argument;
struct s_Context;
struct s_Effects;
struct s_Intlit;
struct s_LexerOutput;
struct s_Lifetime;
struct s_MapFields;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStat;
struct s_ModuleStats;
struct s_Node;
struct s_Overload;
struct s_ParserOutput;
struct s_Partial;
struct s_Region;
struct s_Scope;
struct s_ScopeItem;
struct s_ScopeMemo;
struct s_ScopeSkip;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Struct;
struct s_StructField;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;
bool hasIdentifierChars(const fu_STR&);
bool isAssignable(const s_Type&, const s_Type&);
bool isAssignableAsArgument(const s_Type&, s_Type&&);
bool isStruct(const s_Type&);
bool is_bool(const s_Type&);
bool is_never(const s_Type&);
bool is_void(const s_Type&);
bool killedBy(const s_Lifetime&, int);
bool type_has(const s_Type&, const fu_STR&);
const s_Struct& lookupStruct(const s_Type&, const s_Module&, const s_Context&);
fu_STR _fname(const s_TokenIdx&, const s_Context&);
fu_STR hash62(fu::view<std::byte>, int);
fu_STR humanizeType(const s_Type&);
fu_STR resolveFile_x(const fu_STR&, const s_Context&);
fu_STR serializeType(const s_Type&);
fu_VEC<s_Target> DEPREC_lookup(const s_Scope&, const fu_STR&);
inline const s_Node& if_last_zET6(const fu_VEC<s_Node>&);
inline const s_Node& only_zET6(const fu_VEC<s_Node>&);
inline const s_SolvedNode& if_first_fyyZ(fu_VEC<s_SolvedNode>&);
inline const s_SolvedNode& last_4UAi(const fu_VEC<s_SolvedNode>&);
inline fu_STR& last_Kz6K(fu_VEC<fu_STR>&);
inline s_SolvedNode& only_o0k6(fu_VEC<s_SolvedNode>&);
int MODID(const s_Module&);
int finalizeStruct(const fu_STR&, const fu_VEC<s_StructField>&, const fu_VEC<s_ScopeItem>&, s_Module&);
s_Intlit Intlit(fu::view<std::byte>);
s_Lifetime Lifetime_fromArgIndex(int);
s_Lifetime Lifetime_fromCallArgs(const s_Lifetime&, const fu_VEC<s_SolvedNode>&);
s_Lifetime Lifetime_fromScopeIdx(int);
s_Lifetime Lifetime_static();
s_MapFields tryClear_map(const s_Type&);
s_Scope Scope_exports(const s_Scope&, int);
s_Scope listGlobals(const s_Module&);
s_ScopeMemo Scope_push(s_Scope&);
s_Struct& lookupStruct_mut(const fu_STR&, s_Module&);
s_Target Scope_Typedef(s_Scope&, const fu_STR&, const s_Type&, int, const s_Module&);
s_Target Scope_add(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, int, int, const fu_VEC<s_Argument>&, const s_Template&, const s_Partial&, const s_SolvedNode&, const s_Module&);
s_Target search(const s_Scope&, const fu_STR&, int&, const s_ScopeSkip&, const s_Target&, const fu_VEC<s_ScopeItem>&, const fu_VEC<s_ScopeItem>&);
s_Token _token(const s_TokenIdx&, const s_Context&);
s_Type add_mutref(const s_Type&, const s_Lifetime&);
s_Type add_ref(const s_Type&, const s_Lifetime&);
s_Type add_refs(const s_Type&, s_Type&&);
s_Type clear_mutref(const s_Type&);
s_Type clear_refs(const s_Type&);
s_Type createArray(const s_Type&);
s_Type createMap(const s_Type&, const s_Type&);
s_Type createSlice(const s_Type&);
s_Type initStruct(const fu_STR&, int, s_Module&);
s_Type tryClear_array(const s_Type&);
s_Type tryClear_mutref(const s_Type&);
s_Type tryClear_ref(const s_Type&);
s_Type tryClear_slice(const s_Type&);
s_Type type_tryInter(const s_Type&, const s_Type&);
void Scope_pop(s_Scope&, const s_ScopeMemo&);
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
            || kind
            || flags
            || value
            || items
            || token
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

                                #ifndef DEF_s_StructField
                                #define DEF_s_StructField
struct s_StructField
{
    fu_STR id;
    s_ValueType type;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || type
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
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    fu_STR id;
    fu_VEC<s_StructField> fields;
    int flags;
    s_Target ctor;
    fu_VEC<s_ScopeItem> items;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || fields
            || flags
            || ctor
            || items
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Region
                                #define DEF_s_Region
struct s_Region
{
    int index;
    int relax;
    explicit operator bool() const noexcept
    {
        return false
            || index
            || relax
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu_VEC<s_Region> regions;
    explicit operator bool() const noexcept
    {
        return false
            || regions
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
    s_ValueType value;
    s_Lifetime lifetime;
    s_Effects effects;
    explicit operator bool() const noexcept
    {
        return false
            || value
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
    fu_VEC<int> imports;
    explicit operator bool() const noexcept
    {
        return false
            || node
            || imports
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
    s_Partial partial;
    s_Template tEmplate;
    s_SolvedNode solved;
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
            || partial
            || tEmplate
            || solved
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
    explicit operator bool() const noexcept
    {
        return false
            || items
            || overloads
            || imports
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
    fu_MAP<fu_STR, s_Struct> types;
    fu_MAP<fu_STR, s_Target> specs;
    s_SolverOutput solve;
    fu_STR cpp;
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

                                #ifndef DEF_s_ScopeMemo
                                #define DEF_s_ScopeMemo
struct s_ScopeMemo
{
    int items_len;
    int imports_len;
    explicit operator bool() const noexcept
    {
        return false
            || items_len
            || imports_len
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeSkip
                                #define DEF_s_ScopeSkip
struct s_ScopeSkip
{
    s_ScopeMemo start;
    s_ScopeMemo end;
    explicit operator bool() const noexcept
    {
        return false
            || start
            || end
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Intlit
                                #define DEF_s_Intlit
struct s_Intlit
{
    uint8_t base;
    uint8_t minsize_i;
    uint8_t minsize_u;
    uint8_t minsize_f;
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

                                #ifndef DEF_s_MapFields
                                #define DEF_s_MapFields
struct s_MapFields
{
    s_Type key;
    s_Type value;
    explicit operator bool() const noexcept
    {
        return false
            || key
            || value
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const bool WARN_ON_IMPLICIT_COPY = false;

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline const int q_rx_copy = (1 << 2);
                                #endif

                                #ifndef DEF_q_trivial
                                #define DEF_q_trivial
inline const int q_trivial = (1 << 3);
                                #endif

                                #ifndef DEF_Trivial
                                #define DEF_Trivial
inline const int Trivial = (q_rx_copy | q_trivial);
                                #endif

                                #ifndef DEF_q_primitive
                                #define DEF_q_primitive
inline const int q_primitive = (1 << 4);
                                #endif

                                #ifndef DEF_Primitive
                                #define DEF_Primitive
inline const int Primitive = (Trivial | q_primitive);
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
inline const s_Type t_byte = s_Type { s_ValueType { int(Primitive), 0, "byte"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline const int F_PUB = (1 << 20);
                                #endif

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline const int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
inline const int FN_ARGS_BACK = FN_RET_BACK;
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline const int LET_INIT = 1;
                                #endif

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline const int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEF_F_MUSTNAME
                                #define DEF_F_MUSTNAME
inline const int F_MUSTNAME = (1 << 19);
                                #endif

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
inline const int q_mutref = (1 << 0);
                                #endif

                                #ifndef DEF_q_integral
                                #define DEF_q_integral
inline const int q_integral = (1 << 6);
                                #endif

                                #ifndef DEF_q_floating_pt
                                #define DEF_q_floating_pt
inline const int q_floating_pt = (1 << 9);
                                #endif

                                #ifndef DEF_F_NAMED_ARGS
                                #define DEF_F_NAMED_ARGS
inline const int F_NAMED_ARGS = (1 << 25);
                                #endif

                                #ifndef DEF_F_ACCESS
                                #define DEF_F_ACCESS
inline const int F_ACCESS = (1 << 4);
                                #endif

                                #ifndef DEFt_if_first_fyyZ
                                #define DEFt_if_first_fyyZ
inline const s_SolvedNode& if_first_fyyZ(fu_VEC<s_SolvedNode>& s)
{
    return ([&]() -> const s_SolvedNode& { if (s.size()) return s.mutref(0); else return fu::Default<s_SolvedNode>::value; }());
}
                                #endif

                                #ifndef DEFt_only_o0k6
                                #define DEFt_only_o0k6
inline s_SolvedNode& only_o0k6(fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline const int F_SHADOW = (1 << 23);
                                #endif

                                #ifndef DEFt_last_Kz6K
                                #define DEFt_last_Kz6K
inline fu_STR& last_Kz6K(fu_VEC<fu_STR>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEF_q_arithmetic
                                #define DEF_q_arithmetic
inline const int q_arithmetic = (1 << 5);
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
inline const s_Type t_void = s_Type { s_ValueType { 0, 0, "void"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEFt_if_last_zET6
                                #define DEFt_if_last_zET6
inline const s_Node& if_last_zET6(const fu_VEC<s_Node>& s)
{
    return ([&]() -> const s_Node& { if (s.size()) return s[(s.size() - 1)]; else return fu::Default<s_Node>::value; }());
}
                                #endif

                                #ifndef DEF_F_NODISCARD
                                #define DEF_F_NODISCARD
inline const int F_NODISCARD = (1 << 11);
                                #endif

                                #ifndef DEFt_last_4UAi
                                #define DEFt_last_4UAi
inline const s_SolvedNode& last_4UAi(const fu_VEC<s_SolvedNode>& s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEF_Arithmetic
                                #define DEF_Arithmetic
inline const int Arithmetic = (Primitive | q_arithmetic);
                                #endif

                                #ifndef DEF_q_signed
                                #define DEF_q_signed
inline const int q_signed = (1 << 7);
                                #endif

                                #ifndef DEF_FloatingPt
                                #define DEF_FloatingPt
inline const int FloatingPt = ((Arithmetic | q_floating_pt) | q_signed);
                                #endif

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
inline const s_Type t_f32 = s_Type { s_ValueType { int(FloatingPt), 0, "f32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
inline const s_Type t_f64 = s_Type { s_ValueType { int(FloatingPt), 0, "f64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_Integral
                                #define DEF_Integral
inline const int Integral = (Arithmetic | q_integral);
                                #endif

                                #ifndef DEF_SignedInt
                                #define DEF_SignedInt
inline const int SignedInt = (Integral | q_signed);
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
inline const s_Type t_i32 = s_Type { s_ValueType { int(SignedInt), 0, "i32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
inline const s_Type t_i64 = s_Type { s_ValueType { int(SignedInt), 0, "i64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
inline const s_Type t_i16 = s_Type { s_ValueType { int(SignedInt), 0, "i16"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
inline const s_Type t_i8 = s_Type { s_ValueType { int(SignedInt), 0, "i8"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_q_unsigned
                                #define DEF_q_unsigned
inline const int q_unsigned = (1 << 8);
                                #endif

                                #ifndef DEF_UnsignedInt
                                #define DEF_UnsignedInt
inline const int UnsignedInt = (Integral | q_unsigned);
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
inline const s_Type t_u32 = s_Type { s_ValueType { int(UnsignedInt), 0, "u32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
inline const s_Type t_u64 = s_Type { s_ValueType { int(UnsignedInt), 0, "u64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
inline const s_Type t_u16 = s_Type { s_ValueType { int(UnsignedInt), 0, "u16"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
inline const s_Type t_u8 = s_Type { s_ValueType { int(UnsignedInt), 0, "u8"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline const int F_TEMPLATE = (1 << 30);
                                #endif

                                #ifndef DEF_F_FULLY_TYPED
                                #define DEF_F_FULLY_TYPED
inline const int F_FULLY_TYPED = (1 << 26);
                                #endif

                                #ifndef DEF_F_HAS_CLOSURE
                                #define DEF_F_HAS_CLOSURE
inline const int F_HAS_CLOSURE = (1 << 28);
                                #endif

                                #ifndef DEF_F_CLOSURE
                                #define DEF_F_CLOSURE
inline const int F_CLOSURE = (1 << 27);
                                #endif

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline const int F_MUT = (1 << 16);
                                #endif

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline const int LET_TYPE = 0;
                                #endif

                                #ifndef DEF_q_ref
                                #define DEF_q_ref
inline const int q_ref = (1 << 1);
                                #endif

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline const int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_F_FIELD
                                #define DEF_F_FIELD
inline const int F_FIELD = (1 << 10);
                                #endif

                                #ifndef DEF_F_USING
                                #define DEF_F_USING
inline const int F_USING = (1 << 18);
                                #endif

                                #ifndef DEF_F_REF
                                #define DEF_F_REF
inline const int F_REF = (1 << 22);
                                #endif

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline const int F_ARG = (1 << 9);
                                #endif

                                #ifndef DEFt_only_zET6
                                #define DEFt_only_zET6
inline const s_Node& only_zET6(const fu_VEC<s_Node>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

                                #ifndef DEF_F_QUALIFIED
                                #define DEF_F_QUALIFIED
inline const int F_QUALIFIED = (1 << 7);
                                #endif

                                #ifndef DEF_F_ID
                                #define DEF_F_ID
inline const int F_ID = (1 << 5);
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
inline const s_Type t_bool = s_Type { s_ValueType { int(Primitive), 0, "bool"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

namespace {

struct sf_solve
{
    const s_Node& parse;
    const s_Context& ctx;
    s_Module& module;
    s_TokenIdx _here {};
    s_Scope _scope {};
    s_ScopeMemo _root_scope {};
    s_ScopeMemo _return_idx {};
    s_ScopeSkip _scope_skip {};
    s_SolvedNode _current_fn {};
    s_Type t_string = createArray(t_byte);
    void _Scope_import__forceCopy(const int modid)
    {
        (_scope.items += ctx.modules[modid].out.solve.scope.items);
    };
    void Scope_import(const int modid)
    {
        if (fu::has(_scope.imports, modid))
            return;

        (modid || fail("Attempting to import modid-0."_fu));
        (_scope.imports += modid);
        _Scope_import__forceCopy(modid);
    };
    s_Overload GET(const s_Target& target, const s_Module& module_1, const s_Context& ctx_1)
    {
        if ((target.modid == module_1.modid))
            return s_Overload(_scope.overloads[(target.index - 1)]);

        return s_Overload(ctx_1.modules[target.modid].out.solve.scope.overloads[(target.index - 1)]);
    };
    s_Overload& GET_mut(const s_Target& target)
    {
        (((target.index > 0) && (target.modid == MODID(module))) || fu_ASSERT());
        return _scope.overloads.mutref((target.index - 1));
    };
    [[noreturn]] fu::never fail(fu_STR&& reason)
    {
        s_Token here = _token(_here, ctx);
        if (!reason)
            reason = (("Unexpected `"_fu + here.value) + "`."_fu);

        fu_STR fname = _fname(_here, ctx);
        const int l0 = here.line;
        const int c0 = here.col;
        fu_STR addr = ((("@"_fu + l0) + ":"_fu) + c0);
        fu::fail(((((fname + " "_fu) + addr) + ":\n\t"_fu) + reason));
    };
    s_Lifetime Lifetime_next()
    {
        return Lifetime_fromScopeIdx((_scope.items.size() + 1));
    };
    s_Target Binding(const fu_STR& id, const s_Type& type, const int flags, const fu_STR& kind)
    {
        return Scope_add(_scope, kind, (id ? id : fail(fu_STR{})), (type ? type : fail(fu_STR{})), flags, 0, 0, fu_VEC<s_Argument>{}, s_Template{}, s_Partial{}, s_SolvedNode{}, module);
    };
    s_Target Field(const fu_STR& id, const s_Type& structType, const s_Type& fieldType)
    {
        return Scope_add(_scope, "field"_fu, (id ? id : fail(fu_STR{})), (fieldType ? fieldType : fail(fu_STR{})), F_PUB, 1, 1, fu_VEC<s_Argument> { fu_VEC<s_Argument>::INIT<1> { s_Argument { "this"_fu, s_Type(structType), s_SolvedNode{}, 0 } } }, s_Template{}, s_Partial{}, s_SolvedNode{}, module);
    };
    s_Target TemplateDecl(const s_Node& node)
    {
        const fu_STR& id = node.value;
        const fu_VEC<s_Node>& items = node.items;
        int min = 0;
        const int max = ((node.kind == "fn"_fu) ? (items.size() + FN_ARGS_BACK) : fail("TemplateDecl: non-fn node."_fu));
        fu_VEC<s_Argument> args {};
        for (int i = 0; (i < max); i++)
        {
            const s_Node& arg = items[i];
            ((arg.kind == "let"_fu) || fail(fu_STR{}));
            const fu_STR& name = (arg.value ? arg.value : fail(fu_STR{}));
            args.push(s_Argument { fu_STR(name), s_Type{}, s_SolvedNode{}, 0 });
            if (!arg.items[LET_INIT])
                min++;

        };
        fu_STR kind = "template"_fu;
        s_Template tEmplate = s_Template { s_Node(node), fu_VEC<int>(_scope.imports) };
        return Scope_add(_scope, kind, id, s_Type{}, node.flags, min, max, args, tEmplate, s_Partial{}, s_SolvedNode{}, module);
    };
    s_Target FnDecl(const fu_STR& kind, const fu_STR& id, s_SolvedNode& node, const s_Node& native)
    {
        fu_VEC<s_SolvedNode> items { node.items };
        const s_SolvedNode& rnode = items[(items.size() + FN_RET_BACK)];
        const s_Type& ret = ([&]() -> const s_Type& { if (rnode) { const s_Type& _ = rnode.type; if (_) return _; } fail(fu_STR{}); }());
        int min = 0;
        const int max = (items.size() + FN_RET_BACK);
        fu_VEC<s_SolvedNode> argNodes = fu::slice(items, 0, max);
        fu_VEC<s_Argument> args {};
        for (int i = 0; (i < max); i++)
        {
            const s_SolvedNode& node_1 = argNodes[i];
            ((node_1.kind == "let"_fu) || fail(fu_STR{}));
            const bool isImplicit = !!(node_1.flags & F_IMPLICIT);
            s_Argument arg = s_Argument { fu_STR((node_1.value ? node_1.value : fail(fu_STR{}))), s_Type((node_1.type ? node_1.type : fail(fu_STR{}))), s_SolvedNode(([&]() -> const s_SolvedNode& { if (!isImplicit) return node_1.items[LET_INIT]; else return fu::Default<s_SolvedNode>::value; }())), int(node_1.flags) };
            if ((!arg.dEfault && !isImplicit))
                min++;

            args.push(arg);
        };
        fu_VEC<int> NO_IMPORTS {};
        s_Template tEmplate = s_Template { s_Node(native), fu_VEC<int>(NO_IMPORTS) };
        const s_Target overload = Scope_add(_scope, kind, id, ret, node.flags, min, max, args, tEmplate, s_Partial{}, s_SolvedNode{}, module);
        node.target = overload;
        GET_mut(overload).solved = node;
        return overload;
    };
    s_Target DefCtor(const fu_STR& id, const s_Type& type, const fu_VEC<s_SolvedNode>& members)
    {
        const int max = members.size();
        int min = 0;
        fu_VEC<s_Argument> args {};
        for (int i = 0; (i < members.size()); i++)
        {
            const s_SolvedNode& member = members[i];
            s_Argument arg = s_Argument { fu_STR((member.value ? member.value : fail(fu_STR{}))), s_Type((member.type ? member.type : fail(fu_STR{}))), s_SolvedNode(member.items[LET_INIT]), (member.flags & F_MUSTNAME) };
            if (!arg.dEfault)
                min++;

            args.push(arg);
        };
        if (!max)
            return s_Target{};

        if (!min)
            min++;

        return Scope_add(_scope, "defctor"_fu, id, type, F_PUB, min, max, args, s_Template{}, s_Partial{}, s_SolvedNode{}, module);
    };
    s_SolvedNode tryCreateDefinit(const s_Type& type)
    {
        if ((type.value.quals & q_mutref))
            return s_SolvedNode{};

        return createDefinit(type);
    };
    s_SolvedNode createDefinit(const s_Type& type)
    {
        const s_TokenIdx token { (_here ? _here : fail(fu_STR{})) };
        if ((type.value.quals & q_integral))
            return s_SolvedNode { "int"_fu, 0, "0"_fu, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token), s_Type(type), s_Target{} };

        if ((type.value.quals & q_floating_pt))
            return s_SolvedNode { "real"_fu, 0, "0"_fu, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token), s_Type(type), s_Target{} };

        return s_SolvedNode { "definit"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token), s_Type(type), s_Target{} };
    };
    s_SolvedNode solveDefinit(const s_Type& type)
    {
        if (!type)
            fail("Cannot solve definit, no inferred type."_fu);

        return ([&]() -> s_SolvedNode { { s_SolvedNode _ = tryCreateDefinit(type); if (_) return _; } fail(("Cannot definit: "_fu + serializeType(type))); }());
    };
    s_SolvedNode solveTypeAssert(const s_Node& node)
    {
        const s_Node& left = node.items[0];
        const s_Node& right = node.items[1];
        s_Type expect = evalTypeAnnot(right).type;
        s_SolvedNode actual = solveNode(left, expect);
        checkAssignable(expect, actual.type, "Type assertion failed"_fu, fu_STR{}, fu_STR{});
        return actual;
    };
    s_Target Partial(const fu_STR& id, const s_Target& viaIdx, const s_Target& overloadIdx)
    {
        s_Overload via = GET(viaIdx, module, ctx);
        s_Overload overload = GET(overloadIdx, module, ctx);
        fu_STR kind = "p-unshift"_fu;
        int min = (overload.min - 1);
        int max = (overload.max - 1);
        (((min >= 0) && (max >= min)) || fail(fu_STR{}));
        fu_VEC<s_Argument> args = fu::slice(overload.args, 1);
        int flags = 0;
        if (((via.kind != "var"_fu) && (via.kind != "global"_fu) && (via.kind != "arg"_fu) && (via.kind != "ref"_fu)))
        {
            kind = "p-wrap"_fu;
            min++;
            max++;
            flags |= F_PUB;
            s_Argument arg = s_Argument { "using"_fu, s_Type(via.args[0].type), s_SolvedNode{}, 0 };
            args.unshift(arg);
        };
        return Scope_add(_scope, kind, id, overload.type, flags, min, max, args, s_Template{}, s_Partial { s_Target(viaIdx), s_Target(overloadIdx) }, s_SolvedNode{}, module);
    };
    void scope_using(const s_Target& viaIdx)
    {
        s_Overload via = GET(viaIdx, module, ctx);
        const s_Type& actual = (via.type ? via.type : fail(fu_STR{}));
        const auto& visit = [&](const s_ScopeItem& item) -> void
        {
            if (!hasIdentifierChars(item.id))
                return;

            const s_Target& overloadIdx = item.target;
            s_Overload overload = GET(overloadIdx, module, ctx);
            if ((overload.min < 1))
                return;

            if ((overload.kind == "template"_fu))
                return;

            if ((overload.kind == "defctor"_fu))
                return;

            const s_Argument& expect = ([&]() -> const s_Argument& { { const s_Argument& _ = overload.args[0]; if (_) return _; } fail(fu_STR{}); }());
            if (!isAssignableAsArgument(expect.type, s_Type(actual)))
                return;

            if ((overload.min < 2))
            {
                for (int i = 0; (i < _scope.items.size()); i++)
                {
                    if ((i == _scope_skip.start.items_len))
                    {
                        i = _scope_skip.end.items_len;
                        if ((i >= _scope.items.size()))
                        {
                            break;
                        };
                    };
                    s_ScopeItem o { _scope.items[i] };
                    if ((o.id == item.id))
                    {
                        s_Overload other = GET(o.target, module, ctx);
                        if ((other.min < 1))
                            fail((("`using` ambiguity: `"_fu + item.id) + "`."_fu));

                    };
                };
            };
            Partial(item.id, viaIdx, overloadIdx);
        };
        for (int i = 0; (i < _scope.items.size()); i++)
            visit(_scope.items[i]);

        const int extra_modid = actual.value.modid;
        if (!fu::has(_scope.imports, extra_modid))
        {
            const fu_VEC<s_ScopeItem>& items = ctx.modules[extra_modid].out.solve.scope.items;
            for (int i = 0; (i < items.size()); i++)
                visit(items[i]);

        };
        if (isStruct(actual))
        {
            const fu_VEC<s_ScopeItem>& items = lookupStruct(actual, module, ctx).items;
            for (int i = 0; (i < items.size()); i++)
                visit(items[i]);

        };
    };
    bool getNamedArgReorder(fu_VEC<int>& result, const fu_VEC<fu_STR>& names, const fu_VEC<s_Argument>& host_args)
    {
        result.clear();
        int used = 0;
        int offset = 0;
        for (int i = 0; (i < host_args.size()); i++)
        {
            int idx = fu::lfind(names, host_args[i].name);
            if ((idx < 0))
            {
                for (int i_1 = offset; (i_1 < names.size()); i_1++)
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
                used++;

            result.push(idx);
        };
        if ((used != names.size()))
        {
            for (int i = 0; (i < names.size()); i++)
            {
                if (!names[i])
                    used++;

            };
            if ((used != names.size()))
                return false;

        };
        while ((result && (result.mutref((result.size() - 1)) < 0)))
            result.pop();

        for (int i = 0; (i < result.size()); i++)
        {
            if ((result.mutref(i) != i))
                return true;

        };
        result.clear();
        return true;
    };
    s_Target tryMatch__mutargs(const s_Scope& scope, fu_STR&& id, fu_VEC<s_SolvedNode>& args, const int flags, const s_Type& retType, const s_Target& target)
    {
        s_Target matchIdx {};
        const int arity = args.size();
        fu_VEC<fu_STR> names {};
        if ((flags & F_NAMED_ARGS))
        {
            bool some = false;
            for (int i = 0; (i < arity); i++)
            {
                s_SolvedNode arg { args[i] };
                names.push(((arg.kind == "label"_fu) ? ([&]() -> const fu_STR& { { const fu_STR& _ = ((void)(some = true), arg.value); if (_) return _; } fail(fu_STR{}); }()) : fu::Default<fu_STR>::value));
            };
            (some || fail(fu_STR{}));
        };
        fu_VEC<int> reorder {};
        fu_STR args_mangled {};
        const int extra_modid = ([&]() -> int { if ((flags & F_ACCESS)) return if_first_fyyZ(args).type.value.modid; else return int{}; }());
        const fu_VEC<s_ScopeItem>& extra_items = ([&]() -> const fu_VEC<s_ScopeItem>& { if (extra_modid && !fu::has(_scope.imports, extra_modid)) return ctx.modules[extra_modid].out.solve.scope.items; else return fu::Default<fu_VEC<s_ScopeItem>>::value; }());
        const s_Type& unary_arg_t = ([&]() -> const s_Type& { if ((arity == 1)) return args.mutref(0).type; else return fu::Default<s_Type>::value; }());
        const fu_VEC<s_ScopeItem>& field_items = ([&]() -> const fu_VEC<s_ScopeItem>& { if (isStruct(unary_arg_t)) return lookupStruct(unary_arg_t, module, ctx).items; else return fu::Default<fu_VEC<s_ScopeItem>>::value; }());
        fu_VEC<fu_STR> alternate_ids {};
        for (; ; )
        {
            int scope_iterator {};
            s_Target overloadIdx {};
            while ((overloadIdx = search(scope, id, scope_iterator, _scope_skip, target, extra_items, field_items))){
            {
                while (true){
                {
                    s_Overload overload = GET(overloadIdx, module, ctx);
                    if ((arity && (overload.kind == "type"_fu)))
                    {
                        const fu_STR& alt = overload.type.value.canon;
                        if ((alt != id))
                            alternate_ids.push(alt);

                    };
                    if (((overload.min > arity) || (overload.max < arity)))
                    {
                        goto L_NEXT_c;
                    };
                    if ((retType && !isAssignable(retType, (overload.type ? overload.type : fail(fu_STR{})))))
                    {
                        goto L_NEXT_c;
                    };
                    if ((names && !getNamedArgReorder(reorder, names, overload.args)))
                    {
                        goto L_NEXT_c;
                    };
                    if ((overload.kind == "template"_fu))
                    {
                        if (reorder)
                            fail("TODO handle argument reorder in template specialization."_fu);

                        s_Overload o = GET(overloadIdx, module, ctx);
                        const s_Target specIdx = trySpecialize(overloadIdx, o.tEmplate, args, ([&](fu_STR& _) -> fu_STR& { if (!_) _ = mangleArguments(args); return _; } (args_mangled)));
                        if (!specIdx)
                        {
                            goto L_NEXT_c;
                        };
                        overloadIdx = specIdx;
                        goto L_TEST_AGAIN_c;
                    };
                    if (args)
                    {
                        const fu_VEC<s_Argument>& host_args = overload.args;
                        const int N = (reorder ? reorder.size() : args.size());
                        fu_VEC<s_SolvedNode> undo_literal_fixup { args };
                        for (int i = 0; (i < N); i++)
                        {
                            const s_Argument& host_arg = host_args[i];
                            const int callsiteIndex = (reorder ? reorder.mutref(i) : i);
                            if ((callsiteIndex < 0))
                            {
                                if ((!host_arg.dEfault && !(host_arg.flags & F_IMPLICIT)))
                                {
                                    goto L_NEXT_c;
                                };
                                continue;
                            }
                            else if ((host_arg.flags & F_MUSTNAME))
                            {
                                if (((names.size() <= callsiteIndex) || !names.mutref(callsiteIndex)))
                                {
                                    goto L_NEXT_c;
                                };
                            };
                            const s_Type& expect = host_arg.type;
                            s_Type actual { args.mutref(callsiteIndex).type };
                            bool ok = isAssignableAsArgument(expect, s_Type(actual));
                            if ((!ok && considerRetyping(expect, actual)))
                            {
                                s_SolvedNode& arg = args.mutref(callsiteIndex);
                                if ((arg.kind == "label"_fu))
                                {
                                    s_SolvedNode inner { only_o0k6(arg.items) };
                                    arg = inner;
                                };
                                s_Type retype = tryRetyping(arg, expect);
                                ok = isAssignableAsArgument(expect, s_Type(retype));
                                if (ok)
                                    arg.type = retype;

                            };
                            if (!ok)
                            {
                                args = undo_literal_fixup;
                                goto L_NEXT_c;
                            };
                        };
                        if (matchIdx)
                            fail((("Ambiguous callsite, matches multiple functions in scope: `"_fu + id) + "`."_fu));

                        if (reorder)
                        {
                            fu_VEC<s_SolvedNode> new_args {};
                            new_args.resize(reorder.size());
                            for (int i = 0; (i < reorder.size()); i++)
                            {
                                const int idx = reorder[i];
                                if ((idx >= 0))
                                    new_args.mutref(i) = args.mutref(idx);

                            };
                            args = new_args;
                        };
                    }
                    else if (matchIdx)
                        fail((("Ambiguous callsite, matches multiple items in scope: `"_fu + id) + "`."_fu));

                    matchIdx = overloadIdx;
                    if ((overload.flags & F_SHADOW))
                    {
                        goto L_NEXT_b;
                    };
                    goto L_TEST_AGAIN_b;
                
                    }L_TEST_AGAIN_c:;}
                    L_TEST_AGAIN_b:;

            
                }L_NEXT_c:;}
                L_NEXT_b:;

            if (!alternate_ids)
            {
                break;
            };
            id = last_Kz6K(alternate_ids);
            alternate_ids.pop();
        };
        if (matchIdx)
        {
            s_Overload matched = GET(matchIdx, module, ctx);
            const fu_VEC<s_Argument>& host_args = matched.args;
            if ((host_args.size() > args.size()))
                args.resize(host_args.size());

            for (int i = 0; (i < args.size()); i++)
            {
                if (!args.mutref(i))
                {
                    const s_Argument& host_arg = host_args[i];
                    args.mutref(i) = ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(host_arg.dEfault); if (_) return _; } return bindImplicitArg(host_arg.name, host_arg.type); }());
                };
            };
        };
        return matchIdx;
    };
    bool considerRetyping(const s_Type& expect, const s_Type& actual)
    {
        return (((expect.value.quals & actual.value.quals) & q_arithmetic) != 0);
    };
    bool couldRetype(const s_SolvedNode& node)
    {
        return ((node.kind == "int"_fu) || (node.kind == "real"_fu));
    };
    s_Type tryRetyping(const s_SolvedNode& node, const s_Type& expect)
    {
        return ((node.kind == "int"_fu) ? solveInt(node.value, expect) : ((node.kind == "real"_fu) ? solveNum(node.value, expect) : s_Type{}));
    };
    s_Target match__mutargs(const s_Scope& scope, const fu_STR& id, fu_VEC<s_SolvedNode>& args, const int flags, const s_Target& target)
    {
        const s_Target ret = tryMatch__mutargs(scope, fu_STR(id), args, flags, s_Type{}, target);
        if (ret)
            return ret;

        const s_Target debug = tryMatch__mutargs(scope, fu_STR(id), args, flags, s_Type{}, target);
        if (debug)
            return debug;

        NICERR_mismatch(scope, id, args);
    };
    [[noreturn]] fu::never NICERR_mismatch(const s_Scope& scope, const fu_STR& id, const fu_VEC<s_SolvedNode>& args)
    {
        fu_VEC<s_Target> overloads = DEPREC_lookup(scope, id);
        int min = int(0x7fffffffu);
        int max = 0;
        for (int i = 0; (i < overloads.size()); i++)
        {
            s_Overload o = GET(overloads[i], module, ctx);
            if ((min > o.min))
                min = o.min;

            if ((max < o.max))
                max = o.max;

        };
        const auto& expectedArgs = [&](const fu_VEC<s_Target>& targets) -> fu_STR
        {
            fu_STR result {};
            for (int i = 0; (i < targets.size()); i++)
            {
                if (result)
                    (result += "\n\t\t"_fu);
                else if ((targets.size() > 1))
                    (result += ", available overloads:\n\t\t"_fu);
                else
                    (result += ", expects: "_fu);

                s_Overload overload = GET(targets[i], module, ctx);
                (result += (overload.name + "("_fu));
                for (int i_1 = 0; (i_1 < overload.args.size()); i_1++)
                {
                    const s_Argument& arg = overload.args[i_1];
                    if (i_1)
                        (result += ", "_fu);

                    (result += (((arg.name + ((arg.flags & F_MUSTNAME) ? "!"_fu : fu_STR{})) + (arg.dEfault ? "?: "_fu : ": "_fu)) + (arg.type ? humanizeType(arg.type) : "$"_fu)));
                };
                (result += ")"_fu);
            };
            return ([&]() -> fu_STR { { fu_STR _ = fu_STR(result); if (_) return _; } return "."_fu; }());
        };
        const auto& actualArgs = [&](const fu_VEC<s_SolvedNode>& args_1) -> fu_STR
        {
            fu_STR result = "\nActual: ("_fu;
            for (int i = 0; (i < args_1.size()); i++)
            {
                const s_SolvedNode& arg = args_1[i];
                if (i)
                    (result += ","_fu);

                (result += "\n\t"_fu);
                if ((arg.kind == "label"_fu))
                    (result += (arg.value + ": "_fu));

                (result += humanizeType(arg.type));
            };
            return (result + ")."_fu);
        };
        (overloads ? ((args.size() < min) ? fail(((((((("`"_fu + id) + "` expects at least "_fu) + min) + " arguments, "_fu) + args.size()) + " provided"_fu) + expectedArgs(overloads))) : ((args.size() > max) ? fail(((((((("`"_fu + id) + "` expects at most "_fu) + max) + " arguments, "_fu) + args.size()) + " provided"_fu) + expectedArgs(overloads))) : fail((((("`"_fu + id) + "` bad args"_fu) + expectedArgs(overloads)) + actualArgs(args))))) : fail((("`"_fu + id) + "` is not defined in this scope."_fu)));
    };
    s_SolvedNode solveNode(const s_Node& node, const s_Type& type)
    {
        const fu_STR& k = node.kind;
        if ((k == "root"_fu))
            return solveRoot(node);

        if ((k == "block"_fu))
            return solveBlock(node, type);

        if ((k == "label"_fu))
            return solveComma(node);

        if ((k == "comma"_fu))
            return solveComma(node);

        if ((k == "let"_fu))
            return solveLet(node, Lifetime_static());

        if ((k == "call"_fu))
            return solveCall(node, s_Target{});

        if ((k == "arrlit"_fu))
            return solveArrayLiteral(node, type);

        if ((k == "if"_fu))
            return solveIf(node, s_Type(type));

        if ((k == "or"_fu))
            return solveOr(node, s_Type(type));

        if ((k == "!"_fu))
            return solveNot(node);

        if ((k == "and"_fu))
            return solveAnd(node, s_Type(type));

        if ((k == "return"_fu))
            return solveReturn(node);

        if ((k == "loop"_fu))
            return solveBlock(node, s_Type{});

        if ((k == "break"_fu))
            return solveJump(node);

        if ((k == "continue"_fu))
            return solveJump(node);

        if ((k == "int"_fu))
            return solveInt(node, type);

        if ((k == "real"_fu))
            return solveNum(node, type);

        if ((k == "str"_fu))
            return solveStr(node);

        if ((k == "char"_fu))
            return solveChar(node);

        if ((k == "empty"_fu))
            return createEmpty();

        if ((k == "definit"_fu))
            return solveDefinit(type);

        if ((k == "catch"_fu))
            return solveCatch(node);

        if ((k == "import"_fu))
            return solveImport(node);

        if ((k == "typeassert"_fu))
            return solveTypeAssert(node);

        if ((k == "typeparam"_fu))
            return solveTypeParam(node);

        fail(("TODO: "_fu + k));
    };
    bool isUnordered(const fu_STR& kind)
    {
        return ((kind == "fn"_fu) || (kind == "struct"_fu) || (kind == "typedef"_fu));
    };
    s_SolvedNode unorderedPrep(const s_Node& node)
    {
        const fu_STR& k = node.kind;
        if ((k == "fn"_fu))
            return uPrepFn(node);

        if ((k == "struct"_fu))
            return uPrepStruct(node);

        if ((k == "typedef"_fu))
            return solveTypedef(node);

        fail(("TODO: "_fu + k));
    };
    s_SolvedNode unorderedSolve(const s_Node& node, const s_SolvedNode& prep)
    {
        const fu_STR& k = node.kind;
        if ((k == "fn"_fu))
            return uSolveFn(node, prep);

        if ((k == "struct"_fu))
            return uSolveStruct(node, prep);

        if ((k == "typedef"_fu))
            return s_SolvedNode((prep ? prep : fail(fu_STR{})));

        fail(("TODO: "_fu + k));
    };
    s_SolvedNode solveRoot(const s_Node& node)
    {
        return solved(node, t_void, solveNodes(node.items, t_void, s_Type{}, bool{}));
    };
    s_SolvedNode solveBlock(const s_Node& node, const s_Type& type)
    {
        const s_ScopeMemo scope0 = Scope_push(_scope);
        const bool expr = !!(if_last_zET6(node.items).flags & F_NODISCARD);
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, t_void, type, expr);
        const s_Type& type_1 = ((expr && items.size()) ? last_4UAi(items).type : t_void);
        s_SolvedNode out = solved(node, type_1, items);
        Scope_pop(_scope, scope0);
        return out;
    };
    s_SolvedNode solveComma(const s_Node& node)
    {
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, s_Type{}, s_Type{}, bool{});
        const s_SolvedNode& last = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() - 1)]; if (_) return _; } fail(fu_STR{}); }());
        return solved(node, (last.type ? last.type : fail(fu_STR{})), items);
    };
    s_Type solveInt(const fu_STR& v, const s_Type& type)
    {
        s_Intlit parse_1 = Intlit(v);
        (parse_1.error && fail(fu_STR(parse_1.error)));
        if (type)
        {
            const auto& want = [&](const s_Type& t) -> bool
            {
                return (type.value.canon == t.value.canon);
            };
            if (!parse_1.uNsigned)
            {
                if ((want(t_f32) && (parse_1.minsize_f <= 32u)))
                    return s_Type(t_f32);

                if ((want(t_f64) && (parse_1.minsize_f <= 64u)))
                    return s_Type(t_f64);

                if ((want(t_i32) && (parse_1.minsize_i <= 32u)))
                    return s_Type(t_i32);

                if ((want(t_i64) && (parse_1.minsize_i <= 64u)))
                    return s_Type(t_i64);

                if ((want(t_i16) && (parse_1.minsize_i <= 16u)))
                    return s_Type(t_i16);

                if ((want(t_i8) && (parse_1.minsize_i <= 8u)))
                    return s_Type(t_i8);

            };
            if (!parse_1.sIgned)
            {
                if ((want(t_u32) && (parse_1.minsize_u <= 32u)))
                    return s_Type(t_u32);

                if ((want(t_u64) && (parse_1.minsize_u <= 64u)))
                    return s_Type(t_u64);

                if ((want(t_u16) && (parse_1.minsize_u <= 16u)))
                    return s_Type(t_u16);

                if ((want(t_u8) && (parse_1.minsize_u <= 8u)))
                    return s_Type(t_u8);

            };
        };
        if (parse_1.uNsigned)
        {
            if ((parse_1.minsize_u <= 32u))
                return s_Type(t_u32);

            if ((parse_1.minsize_u <= 64u))
                return s_Type(t_u64);

        }
        else
        {
            if ((parse_1.minsize_i <= 32u))
                return s_Type(t_i32);

            if ((parse_1.minsize_i <= 64u))
                return s_Type(t_i64);

        };
        fail("Bad int literal."_fu);
    };
    s_Type solveNum(const fu_STR& v, const s_Type& type)
    {
        if (v)
        {
        };
        const auto& want = [&](const s_Type& t) -> bool
        {
            return (type.value.canon == t.value.canon);
        };
        if (want(t_f32))
            return s_Type(t_f32);

        return s_Type(t_f64);
    };
    s_SolvedNode solveInt(const s_Node& node, const s_Type& type)
    {
        return solved(node, solveInt(node.value, type), fu_VEC<s_SolvedNode>{});
    };
    s_SolvedNode solveNum(const s_Node& node, const s_Type& type)
    {
        return solved(node, solveNum(node.value, type), fu_VEC<s_SolvedNode>{});
    };
    s_SolvedNode solveChar(const s_Node& node)
    {
        return solved(node, t_byte, fu_VEC<s_SolvedNode>{});
    };
    s_SolvedNode solveStr(const s_Node& node)
    {
        if (!node.value)
            return createDefinit(add_ref(t_string, Lifetime_static()));

        return solved(node, t_string, fu_VEC<s_SolvedNode>{});
    };
    s_SolvedNode createEmpty()
    {
        return s_SolvedNode { "empty"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx((_here ? _here : fail(fu_STR{}))), s_Type(t_void), s_Target{} };
    };
    s_Node createTypeParam(const fu_STR& value)
    {
        return s_Node { "typeparam"_fu, 0, fu_STR(value), fu_VEC<s_Node>{}, s_TokenIdx((_here ? _here : fail(fu_STR{}))) };
    };
    s_SolvedNode uPrepFn(const s_Node& node)
    {
        return __solveFn(node, false, s_SolvedNode{}, bool{}, -1);
    };
    s_SolvedNode uSolveFn(const s_Node& node, const s_SolvedNode& prep)
    {
        return __solveFn(node, true, prep, bool{}, -1);
    };
    s_SolvedNode __solveFn(const s_Node& n_fn, const bool solve, const s_SolvedNode& prep, const bool spec, const int caseIdx)
    {
        const fu_STR& id = (n_fn.value ? n_fn.value : fail("TODO anonymous fns"_fu));
        if (spec)
        {
            (solve || fail(fu_STR{}));
        }
        else if ((n_fn.flags & F_TEMPLATE))
        {
            if (solve)
                return s_SolvedNode((prep ? prep : fail(fu_STR{})));

            const s_Target tDecl = TemplateDecl(n_fn);
            s_SolvedNode out = solved(n_fn, t_void, fu_VEC<s_SolvedNode>{});
            out.target = tDecl;
            return out;
        };
        if ((!solve && !(n_fn.flags & F_FULLY_TYPED)))
            return s_SolvedNode{};

        const fu_VEC<s_Node>& inItems = n_fn.items;
        ((inItems.size() >= FN_RET_BACK) || fail(fu_STR{}));
        s_SolvedNode out = ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(prep); if (_) return _; } return solved(n_fn, t_void, fu_VEC<s_SolvedNode>{}); }());
        out.items.resize(inItems.size());
        if (_current_fn)
        {
            _current_fn.flags |= F_HAS_CLOSURE;
            out.flags |= F_CLOSURE;
            if ((_current_fn.flags & F_TEMPLATE))
                out.flags |= F_TEMPLATE;

        };
        bool native = false;
        s_Node n_body {};
        
        {
            const s_ScopeMemo return_idx0 { _return_idx };
            const s_ScopeMemo scope0 = Scope_push(_scope);
            _return_idx = scope0;
            const s_ScopeMemo root_scope0 { _root_scope };
            if (!root_scope0)
                _root_scope = _return_idx;

            std::swap(_current_fn, out);
            fu_VEC<s_SolvedNode>& outItems = _current_fn.items;
            for (int i = 0; (i < (inItems.size() + FN_ARGS_BACK)); i++)
            {
                const s_Node& n_arg = ([&]() -> const s_Node& { { const s_Node& _ = inItems[i]; if (_) return _; } fail(fu_STR{}); }());
                ((n_arg.kind == "let"_fu) || fail(fu_STR{}));
                s_Lifetime lifetime = Lifetime_fromArgIndex(i);
                if ((spec && !(n_arg.flags & F_MUT) && !n_arg.items[LET_INIT]))
                {
                    s_Node mut_arg { n_arg };
                    mut_arg.items.mutref(LET_TYPE) = createTypeParam(mut_arg.value);
                    s_Type type = evalTypeParam(mut_arg.value);
                    if (!(type.value.quals & q_ref))
                        mut_arg.flags |= F_MUT;

                    outItems.mutref(i) = solveLet(mut_arg, s_Lifetime(lifetime));
                }
                else
                    outItems.mutref(i) = solveLet(n_arg, s_Lifetime(lifetime));

            };
            s_Node n_ret { inItems[(inItems.size() + FN_RET_BACK)] };
            n_body = ([&]() -> const s_Node& { { const s_Node& _ = inItems[(inItems.size() + FN_BODY_BACK)]; if (_) return _; } fail(fu_STR{}); }());
            if ((caseIdx >= 0))
            {
                ((n_body.kind == "pattern"_fu) || fail(fu_STR{}));
                s_Node branch { ([&]() -> const s_Node& { { const s_Node& _ = n_body.items.mutref(caseIdx); if (_) return _; } fail(fu_STR{}); }()) };
                const fu_VEC<s_Node>& items = branch.items;
                n_ret = ([&]() -> const s_Node& { { const s_Node& _ = items[(items.size() + FN_RET_BACK)]; if (_) return _; } return n_ret; }());
                n_body = items[(items.size() + FN_BODY_BACK)];
            };
            if (((n_body.kind == "block"_fu) && (n_body.items.size() == 1)))
            {
                s_Node ret { n_body.items[0] };
                if (((ret.kind == "return"_fu) && (ret.items.size() == 1)))
                {
                    const s_Node& expr = ret.items[0];
                    if (((expr.kind == "call"_fu) && (expr.value == "__native"_fu)))
                    {
                        native = true;
                        n_body = expr;
                    };
                };
            };
            
            {
                s_SolvedNode s_ret = (n_ret ? evalTypeAnnot(n_ret) : s_SolvedNode{});
                outItems.mutref((outItems.size() + FN_RET_BACK)) = s_ret;
            };
            if ((solve && !native))
            {
                s_SolvedNode s_body = solveNode(n_body, s_Type{});
                (s_body || fail(fu_STR{}));
                outItems.mutref((outItems.size() + FN_BODY_BACK)) = s_body;
            };
            std::swap(_current_fn, out);
            Scope_pop(_scope, scope0);
            _return_idx = return_idx0;
            _root_scope = root_scope0;
        };
        if (!prep)
        {
            fu_STR kind = (native ? "__native"_fu : "fn"_fu);
            fu_STR name { id };
            if ((spec && !native))
            {
                fu_STR sig = ([&]() -> fu_STR { { fu_STR _ = mangleArguments(fu::get_view_mut(out.items, 0, (out.items.size() + FN_BODY_BACK))); if (_) return _; } fail(fu_STR{}); }());
                fu_STR hash = hash62(sig, 4);
                (name += ("_"_fu + hash));
            };
            FnDecl(kind, name, out, ([&]() -> const s_Node& { if (native) return n_body; else return fu::Default<s_Node>::value; }()));
        };
        if ((solve && !native))
        {
            (out.items.mutref((out.items.size() + FN_BODY_BACK)) || fail(fu_STR{}));
        };
        return out;
    };
    fu_STR mangleArguments(fu::view<s_SolvedNode> args)
    {
        fu_STR mangle {};
        for (int i = 0; (i < args.size()); i++)
        {
            if (i)
                (mangle += ","_fu);

            (mangle += serializeType(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args[i]; if (_) return _; } fail(fu_STR{}); }()).type));
        };
        return mangle;
    };
    s_Target trySpecialize(const s_Target& target, const s_Template& tEmplate, const fu_VEC<s_SolvedNode>& args, const fu_STR& args_mangled)
    {
        fu_STR mangle = (((target.modid + "#"_fu) + target.index) + " "_fu);
        (mangle += args_mangled);
        const s_Target spec { module.out.specs[mangle] };
        const int SPEC_FAILED = -1;
        if (!spec)
        {
            const s_Target spec_1 = doTrySpecialize(tEmplate, fu_VEC<s_SolvedNode>(args), mangle);
            (module.out.specs.upsert(mangle) = (spec_1 ? s_Target(spec_1) : s_Target { int(SPEC_FAILED), 0 }));
            return spec_1;
        };
        return ((spec.modid != SPEC_FAILED) ? s_Target(spec) : s_Target{});
    };
    s_Target doTrySpecialize(const s_Template& tEmplate, fu_VEC<s_SolvedNode>&& args, fu_STR& mangle)
    {
        bool ok = true;
        fu_MAP<fu_STR, s_Type> typeParams0 {};
        s_SolvedNode current_fn0 {};
        std::swap(_current_fn, current_fn0);
        const s_ScopeMemo scope0 = Scope_push(_scope);
        s_ScopeSkip scope_skip0 { _scope_skip };
        const s_ScopeMemo root_scope0 { _root_scope };
        fu_MAP<fu_STR, s_Type> typeParams {};
        _scope_skip = ([&]() -> s_ScopeSkip { if (_root_scope) return s_ScopeSkip { s_ScopeMemo(_root_scope), s_ScopeMemo(scope0) }; else return s_ScopeSkip{}; }());
        _root_scope = s_ScopeMemo{};
        for (int i = 0; (i < tEmplate.imports.size()); i++)
            Scope_import(tEmplate.imports[i]);

        const fu_STR& kind = tEmplate.node.kind;
        const fu_VEC<s_Node>& items = tEmplate.node.items;
        const int numArgs = ((kind == "fn"_fu) ? (items.size() + FN_ARGS_BACK) : fail(("TODO numArgs for template:"_fu + kind)));
        fu_VEC<int> retypeIndices {};
        bool remangle = false;
        for (int pass_retype = 0; ((pass_retype == 0) || ((pass_retype == 1) && retypeIndices)); pass_retype++)
        {
            for (int i = 0; (i < numArgs); i++)
            {
                if (pass_retype)
                {
                    if (!fu::has(retypeIndices, i))
                    {
                        continue;
                    };
                };
                const s_SolvedNode& inValue = ([&]() -> const s_SolvedNode& { if ((args.size() > i)) return args.mutref(i); else return fu::Default<s_SolvedNode>::value; }());
                s_Type inType { inValue.type };
                const s_Node& argNode = ([&]() -> const s_Node& { { const s_Node& _ = items[i]; if (_) return _; } fail(fu_STR{}); }());
                const s_Node& annot = argNode.items[LET_TYPE];
                if (couldRetype(inValue))
                {
                    s_Type paramType = ((annot.kind == "typeparam"_fu) ? s_Type(([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type{}; return _; } (typeParams.upsert(annot.value)))) : ([&]() -> s_Type { if ((annot.kind == "call"_fu) && !annot.items) return Scope_lookupType(annot); else return s_Type{}; }()));
                    if (paramType)
                    {
                        s_Type retype = tryRetyping(inValue, paramType);
                        if ((retype && (retype.value.canon != inType.value.canon)))
                        {
                            inType = (args.mutref(i).type = retype);
                            remangle = true;
                        };
                    }
                    else if (!pass_retype)
                    {
                        retypeIndices.push(i);
                        continue;
                    };
                };
                ((argNode.kind == "let"_fu) || fail(fu_STR{}));
                if (inType)
                {
                    inType.lifetime = Lifetime_fromArgIndex(i);
                    const fu_STR& argName = (argNode.value ? argNode.value : fail(fu_STR{}));
                    s_Type& argName_typeParam = ([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type{}; return _; } (typeParams.upsert(argName)));
                    ([&]() -> s_Type& { { s_Type& _ = argName_typeParam; if (!_) return _; } fail((("Type param name collision with argument: `"_fu + argName) + "`."_fu)); }()) = inType;
                    inType.value.quals |= q_ref;
                };
                if (annot)
                {
                    const bool argOk = (inType && trySolveTypeParams(annot, s_Type(inType), typeParams));
                    ok = ([&]() -> bool { if (ok) return argOk; else return fu::Default<bool>::value; }());
                    if ((!ok && !remangle))
                    {
                        break;
                    };
                };
            };
        };
        if (remangle)
        {
            const int start = ([&]() -> int { { int _ = (fu::lfind(mangle, std::byte(' ')) + 1); if (_) return _; } fail(fu_STR{}); }());
            mangle = (fu::slice(mangle, 0, start) + mangleArguments(args));
        };
        int caseIdx = -1;
        if (ok)
        {
            
            {
                fu_VEC<fu_STR> keys { typeParams.m_keys };
                for (int i = 0; (i < keys.size()); i++)
                {
                    fu_STR key { keys[i] };
                    Scope_Typedef(_scope, ("$"_fu + key), typeParams[key], 0, module);
                };
            };
            const s_Node& pattern = ([&]() -> const s_Node& { { const s_Node& _ = items[(items.size() + FN_BODY_BACK)]; if (_) return _; } fail(fu_STR{}); }());
            if ((pattern.kind == "pattern"_fu))
            {
                const fu_VEC<s_Node>& branches = pattern.items;
                for (int i = 0; (i < branches.size()); i++)
                {
                    const s_Node& branch = branches[i];
                    const fu_VEC<s_Node>& items_1 = (branch ? branch : fail(fu_STR{})).items;
                    const s_Node& cond = ([&]() -> const s_Node& { { const s_Node& _ = items_1[0]; if (_) return _; } fail(fu_STR{}); }());
                    if (evalTypePattern(cond))
                    {
                        caseIdx = i;
                        break;
                    };
                };
                if ((caseIdx < 0))
                    ok = false;

            };
        };
        ((kind == "fn"_fu) || fail("__solveFn spec:true is not expected to fail."_fu));
        s_SolvedNode specialized = ([&]() -> s_SolvedNode { if (ok) return __solveFn(tEmplate.node, true, s_SolvedNode{}, true, caseIdx); else return s_SolvedNode{}; }());
        std::swap(_current_fn, current_fn0);
        Scope_pop(_scope, scope0);
        _scope_skip = scope_skip0;
        _root_scope = root_scope0;
        return std::move(specialized.target);
    };
    s_SolvedNode solveTypeCtor(const s_Node& node)
    {
        const s_Target tDecl = TemplateDecl(node);
        s_SolvedNode out = solved(node, t_void, fu_VEC<s_SolvedNode>{});
        out.target = tDecl;
        return out;
    };
    s_SolvedNode uPrepStruct(const s_Node& node)
    {
        return __solveStruct(false, node, s_SolvedNode{});
    };
    s_SolvedNode uSolveStruct(const s_Node& node, const s_SolvedNode& prep)
    {
        return __solveStruct(true, node, prep);
    };
    s_SolvedNode __solveStruct(const bool solve, const s_Node& node, const s_SolvedNode& prep)
    {
        s_SolvedNode out = ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(prep); if (_) return _; } return solved(node, t_void, fu_VEC<s_SolvedNode>{}); }());
        s_Type structType {};
        fu_STR id { node.value };
        fu_STR origId { id };
        if (!origId)
            id = ([&]() -> fu_STR { { fu_STR _ = fu_STR(_current_fn.value); if (_) return _; } return "Anon"_fu; }());

        if (!(_current_fn.flags & F_TEMPLATE))
        {
            structType = initStruct(id, node.flags, module);
            if ((!prep && origId))
                out.target = Scope_Typedef(_scope, origId, structType, node.flags, module);

        };
        if (!solve)
            return out;

        const fu_VEC<s_Node>& members = node.items;
        fu_VEC<s_ScopeItem> innerScope {};
        fu_VEC<s_SolvedNode> items = solveStructMembers(id, node.flags, members, structType, innerScope);
        out.items = items;
        if ((!out.target && origId))
            out.target = Scope_Typedef(_scope, origId, structType, node.flags, module);

        
        {
            fu_VEC<s_SolvedNode> members_1 {};
            fu_VEC<s_StructField> fields {};
            fu_VEC<s_SolvedNode> items_1 { out.items };
            for (int i = 0; (i < items_1.size()); i++)
            {
                const s_SolvedNode& item = items_1[i];
                if ((item && (item.kind == "let"_fu) && (item.flags & F_FIELD)))
                {
                    members_1.push(item);
                    fields.push(s_StructField { fu_STR((item.value ? item.value : fail(fu_STR{}))), s_ValueType((item.type.value ? item.type.value : fail(fu_STR{}))) });
                };
            };
            structType.value.quals |= finalizeStruct(structType.value.canon, fields, innerScope, module);
            if (out.target)
                GET_mut(out.target).type.value.quals = structType.value.quals;

            const s_Target ctor = DefCtor(id, structType, members_1);
            lookupStruct_mut(structType.value.canon, module).ctor = ctor;
        };
        out.type = structType;
        return out;
    };
    fu_VEC<s_SolvedNode> solveStructMembers(fu_STR& id, const int flags, const fu_VEC<s_Node>& members, s_Type& structType, fu_VEC<s_ScopeItem>& innerScope)
    {
        fu_VEC<s_SolvedNode> out {};
        for (int i = 0; (i < members.size()); i++)
        {
            const s_Node& node = members[i];
            if ((node.kind == "let"_fu))
                out.push(solveField(node));
            else
                fail(("solveStructMembers_1: "_fu + node.kind));

        };
        if (!structType)
        {
            fu_STR sig = mangleArguments(out);
            fu_STR hash = hash62(sig, 4);
            (id += ("_"_fu + hash));
            structType = initStruct(id, flags, module);
        };
        for (int i = 0; (i < out.size()); i++)
        {
            s_SolvedNode node { out[i] };
            if ((node.kind == "let"_fu))
                solveField(structType, node, innerScope);
            else
                fail(("solveStructMembers_2: "_fu + node.kind));

        };
        return out;
    };
    s_SolvedNode solveField(const s_Node& node)
    {
        (node.items[LET_INIT] && (node.items[LET_INIT].kind != "definit"_fu) && fail(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node.value) + "`."_fu)));
        return solveBinding(node, Lifetime_fromArgIndex(0));
    };
    void solveField(const s_Type& structType, const s_SolvedNode& node, fu_VEC<s_ScopeItem>& innerScope)
    {
        const fu_STR& id = node.value;
        const s_Target target = Field(id, structType, node.type);
        innerScope.push(s_ScopeItem { fu_STR(id), s_Target(target) });
        if ((node.flags & F_USING))
            scope_using(target);

    };
    s_SolvedNode solveReturn(const s_Node& node)
    {
        const auto& retIdx = [&]() -> int
        {
            return (_current_fn.items.size() + FN_RET_BACK);
        };
        s_Type prevType { _current_fn.items.mutref(retIdx()).type };
        ((node.items.size() <= 1) || fail(fu_STR{}));
        s_SolvedNode out = solved(node, t_void, solveNodes(node.items, prevType, s_Type{}, bool{}));
        s_SolvedNode& next = (out.items ? out.items.mutref(0) : out);
        if ((killedBy(next.type.lifetime, _return_idx.items_len) && (next.type.value.quals & q_ref)))
        {
            const bool nrvo = ((next.kind == "call"_fu) && (next.items.size() == 0) && (GET(next.target, module, ctx).kind == "var"_fu));
            next = createMove(next, nrvo);
        };
        if (prevType)
            checkAssignable(prevType, next.type, "Non-assignable return types"_fu, fu_STR{}, fu_STR{});
        else
            _current_fn.items.mutref(retIdx()) = (next ? next : fail(fu_STR{}));

        if (out.items)
            maybeCopyOrMove(out.items.mutref(0), (prevType ? prevType : next.type), false);

        return out;
    };
    void checkAssignable(const s_Type& host, const s_Type& guest, const fu_STR& err, const fu_STR& id, const fu_STR& sep)
    {
        (isAssignable((host ? host : fail("Bad host type."_fu)), (guest ? guest : fail("Bad guest type."_fu))) || fail((((((err + ([&]() -> fu_STR { if (id) return ((" `"_fu + id) + "`"_fu); else return fu_STR{}; }())) + ": "_fu) + humanizeType(host)) + ([&]() -> fu_STR { { fu_STR _ = fu_STR(sep); if (_) return _; } return " <- "_fu; }())) + humanizeType(guest))));
    };
    s_SolvedNode solveJump(const s_Node& node)
    {
        return solved(node, t_void, fu_VEC<s_SolvedNode>{});
    };
    s_SolvedNode solveBinding(const s_Node& node, const s_Lifetime& lifetime)
    {
        const s_Node& n_annot = node.items[LET_TYPE];
        const s_Node& n_init = node.items[LET_INIT];
        s_SolvedNode annot = ([&]() -> s_SolvedNode { if (n_annot) return evalTypeAnnot(n_annot); else return s_SolvedNode{}; }());
        if ((annot.type && (node.flags & F_REF)))
            annot.type = add_mutref(annot.type, lifetime);

        s_SolvedNode init = ([&]() -> s_SolvedNode { if (n_init) return solveNode(n_init, annot.type); else return s_SolvedNode{}; }());
        (annot.type || init.type || fail("Variable declarations without type annotations must be initialized."_fu));
        s_Type t_let = (annot.type ? (((node.flags & F_ARG) && !(node.flags & F_MUT)) ? add_ref(annot.type, lifetime) : s_Type(annot.type)) : (((init.type.value.quals & q_mutref) || (node.flags & F_MUT)) ? ((node.flags & F_REF) ? s_Type(init.type) : clear_refs(init.type)) : (((node.flags & F_ARG) && !(node.flags & F_MUT)) ? add_ref(init.type, lifetime) : s_Type(init.type))));
        if ((annot.type && init.type))
            checkAssignable(annot.type, init.type, "Type annotation does not match init expression"_fu, node.value, "="_fu);

        if ((node.flags & F_REF))
        {
            ((init.type.value.quals & q_mutref) || (!init && (node.flags & F_ARG)) || fail("`ref` variables must be initialized to a mutable reference."_fu));
        };
        if (init)
            maybeCopyOrMove(init, t_let, false);

        s_SolvedNode out = solved(node, t_let, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { (annot ? annot : init), init } });
        if (!(_current_fn || (node.flags & F_FIELD)))
        {
            if (((out.flags & F_MUT) || (out.type.value.quals & q_mutref)))
                fail("Mutable statics are not currently allowed."_fu);

            out.kind = "global"_fu;
        };
        return out;
    };
    s_SolvedNode solveTypedef(const s_Node& node)
    {
        s_SolvedNode annot = evalTypeAnnot(only_zET6(node.items));
        Scope_Typedef(_scope, node.value, annot.type, node.flags, module);
        return createEmpty();
    };
    s_SolvedNode solveLet(const s_Node& node, s_Lifetime&& lifetime)
    {
        s_SolvedNode out = solveBinding(node, lifetime);
        const bool global = (out.kind == "global"_fu);
        if (!(out.type.value.quals & q_ref))
            lifetime = Lifetime_next();

        fu_STR kind = (global ? "global"_fu : ((node.flags & F_ARG) ? "arg"_fu : ((out.type.value.quals & q_ref) ? "ref"_fu : "var"_fu)));
        fu_STR id { out.value };
        const s_Target overload { (out.target = Binding(id, ((node.flags & F_MUT) ? add_mutref(out.type, lifetime) : add_ref(out.type, lifetime)), node.flags, kind)) };
        if (_root_scope)
        {
            int same = 0;
            for (int i = _root_scope.items_len; (i < (_scope.items.size() - 1)); i++)
            {
                if ((_scope.items.mutref(i).id == id))
                    same++;

            };
            if (same)
                (GET_mut(overload).name += ("_"_fu + same));

        };
        if (global)
            GET_mut(overload).solved = out;

        if ((out.flags & F_USING))
            scope_using(overload);

        return out;
    };
    s_SolvedNode solveCatch(const s_Node& node)
    {
        ((node.items.size() == 3) || fail(fu_STR{}));
        s_SolvedNode var_ok = solveNode(node.items[0], s_Type{});
        const s_ScopeMemo scope0 = Scope_push(_scope);
        s_SolvedNode var_err = solveNode(node.items[1], s_Type{});
        s_SolvedNode cAtch = solveNode(node.items[2], s_Type{});
        Scope_pop(_scope, scope0);
        (((var_err.kind == "let"_fu) && isAssignableAsArgument(var_err.type, s_Type(t_string))) || fail(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu)));
        return solved(node, var_ok.type, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { var_ok, var_err, cAtch } });
    };
    const s_Module& findModule(const fu_STR& fuzimport)
    {
        fu_STR fname = resolveFile_x(fuzimport, ctx);
        const fu_VEC<s_Module>& modules = ctx.modules;
        for (int i = 1; (i < modules.size()); i++)
        {
            const s_Module& module_1 = modules[i];
            if ((module_1.fname == fname))
                return module_1;

        };
        fail(("Cannot locate: "_fu + fname));
    };
    s_SolvedNode solveImport(const s_Node& node)
    {
        const s_Module& module_1 = findModule(node.value);
        Scope_import(module_1.modid);
        return createEmpty();
    };
    s_Type Scope_lookupType(fu_STR&& id, const int flags)
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        const s_Scope& scope = ((flags & F_QUALIFIED) ? dequalify_andGetScope(id) : _scope);
        while ((overloadIdx = search(scope, id, scope_iterator, _scope_skip, s_Target{}, fu_VEC<s_ScopeItem>{}, fu_VEC<s_ScopeItem>{})))
        {
            s_Overload maybe = GET(overloadIdx, module, ctx);
            if ((maybe.kind == "type"_fu))
                return std::move((maybe.type ? maybe.type : fail(fu_STR{})));

        };
        fail((("No type `"_fu + id) + "` in scope."_fu));
    };
    s_Type Scope_lookupType(const s_Node& annot)
    {
        return Scope_lookupType(fu_STR(annot.value), annot.flags);
    };
    s_Type evalTypeParam(const fu_STR& id)
    {
        return ([&]() -> s_Type { { s_Type _ = Scope_lookupType(("$"_fu + (id ? id : fail("Falsy type param id."_fu))), 0); if (_) return _; } fail((("No type param `$"_fu + id) + "` in scope."_fu)); }());
    };
    s_SolvedNode solveTypeParam(const s_Node& node)
    {
        return solved(node, evalTypeParam(node.value), fu_VEC<s_SolvedNode>{});
    };
    s_SolvedNode evalTypeAnnot(const s_Node& node)
    {
        const auto& T = [&](const int i) -> s_Type
        {
            return evalTypeAnnot(node.items[i]).type;
        };
        if ((node.kind == "call"_fu))
        {
            const fu_VEC<s_Node>& items = node.items;
            if ((items.size() == 1))
            {
                if ((node.value == "&"_fu))
                    return solved(node, add_ref(T(0), Lifetime_static()), fu_VEC<s_SolvedNode>{});

                if ((node.value == "&mut"_fu))
                    return solved(node, add_mutref(T(0), Lifetime_static()), fu_VEC<s_SolvedNode>{});

                if ((node.value == "[]"_fu))
                    return solved(node, createArray(T(0)), fu_VEC<s_SolvedNode>{});

            }
            else if ((items.size() == 2))
            {
                if ((node.value == "Map"_fu))
                    return solved(node, createMap(T(0), T(1)), fu_VEC<s_SolvedNode>{});

            };
            return solveCall(node, s_Target{});
        }
        else if ((node.kind == "typeparam"_fu))
            return solved(node, evalTypeParam(node.value), fu_VEC<s_SolvedNode>{});
        else if (((node.kind == "arrlit"_fu) && (node.items.size() == 1)))
            return solved(node, createSlice(T(0)), fu_VEC<s_SolvedNode>{});

        fail("TODO evalTypeAnnot"_fu);
    };
    bool trySolveTypeParams(const s_Node& node, s_Type&& type, fu_MAP<fu_STR, s_Type>& typeParams)
    {
        if ((node.kind == "call"_fu))
        {
            const fu_VEC<s_Node>& items = node.items;
            if (items.size())
            {
                if ((items.size() == 1))
                {
                    s_Type t = ((node.value == "&"_fu) ? tryClear_ref(type) : ((node.value == "&mut"_fu) ? tryClear_mutref(type) : ((node.value == "[]"_fu) ? tryClear_array(type) : ((void)fail("TODO trySolveTypeParams unary call"_fu), s_Type{}))));
                    if (!t)
                        return false;

                    if (((node.value == "&mut"_fu) && (items[0].kind == "arrlit"_fu) && (items[0].items.size() == 1)))
                        t.value.quals |= q_ref;

                    return trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(fu_STR{}); }()), s_Type(t), typeParams);
                }
                else if ((items.size() == 2))
                {
                    if ((node.value == "Map"_fu))
                    {
                        s_MapFields kv = tryClear_map(type);
                        if (!kv)
                            return false;

                        return (trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(fu_STR{}); }()), s_Type(kv.key), typeParams) && trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items[1]; if (_) return _; } fail(fu_STR{}); }()), s_Type(kv.value), typeParams));
                    };
                };
            }
            else
                return isAssignable(Scope_lookupType(node), type);

        }
        else if ((node.kind == "typeparam"_fu))
        {
            const fu_STR& id = (node.value ? node.value : fail(fu_STR{}));
            s_Type& _param = ([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type{}; return _; } (typeParams.upsert(id)));
            if (_param)
            {
                s_Type inter = type_tryInter(_param, type);
                if (!inter)
                    return false;

                type = inter;
            };
            _param = clear_refs(type);
            return true;
        }
        else if (((node.kind == "arrlit"_fu) && (node.items.size() == 1)))
        {
            s_Type t = tryClear_slice(type);
            return (t && trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = node.items[0]; if (_) return _; } fail(fu_STR{}); }()), s_Type(t), typeParams));
        };
        fail("TODO trySolveTypeParams fallthrough"_fu);
    };
    bool evalTypePattern(const s_Node& node)
    {
        if ((node.kind == "and"_fu))
        {
            for (int i = 0; (i < node.items.size()); i++)
            {
                if (!evalTypePattern(node.items[i]))
                    return false;

            };
            return true;
        }
        else if ((node.kind == "or"_fu))
        {
            for (int i = 0; (i < node.items.size()); i++)
            {
                if (evalTypePattern(node.items[i]))
                    return true;

            };
            return false;
        }
        else if ((node.kind == "typeassert"_fu))
        {
            const s_Node& left = ([&]() -> const s_Node& { { const s_Node& _ = node.items[0]; if (_) return _; } fail(fu_STR{}); }());
            const s_Node& right = ([&]() -> const s_Node& { { const s_Node& _ = node.items[1]; if (_) return _; } fail(fu_STR{}); }());
            if (((left.kind == "typeparam"_fu) && (right.kind == "typetag"_fu)))
                return type_has(evalTypeParam(left.value), (right.value ? right.value : fail("Falsy type tag."_fu)));
            else
                return isAssignable(evalTypeAnnot(right).type, evalTypeAnnot(left).type);

        };
        fail((((("TODO evalTypePattern fallthrough: "_fu + node.kind) + "("_fu) + node.items.size()) + ")"_fu));
    };
    s_Node createRead(const fu_STR& id)
    {
        return s_Node { "call"_fu, int(F_ID), fu_STR(id), fu_VEC<s_Node>{}, s_TokenIdx((_here ? _here : fail(fu_STR{}))) };
    };
    const s_Scope& dequalify_andGetScope(fu_STR& id)
    {
        const int split = fu::lfind(id, std::byte('\t'));
        ((split >= 0) || fail(fu_STR{}));
        fu_STR fname = fu::slice(id, 0, split);
        id = fu::slice(id, (split + 1));
        const s_Module& other = findModule(fname);
        if ((other.modid != module.modid))
            return other.out.solve.scope;

        return _scope;
    };
    s_SolvedNode solveCall(const s_Node& node, const s_Target& target)
    {
        fu_STR id { node.value };
        if (!id)
        {
            (target || fail(fu_STR{}));
        };
        const s_Scope& scope = ((node.flags & F_QUALIFIED) ? dequalify_andGetScope(id) : _scope);
        fu_VEC<s_SolvedNode> args = solveNodes(node.items, s_Type{}, s_Type{}, bool{});
        s_Target callTargIdx = match__mutargs(scope, id, args, node.flags, target);
        s_Overload callTarg = GET(callTargIdx, module, ctx);
        while (callTarg.partial)
        {
            const bool unshift = (callTarg.kind == "p-unshift"_fu);
            const s_Partial partial { (callTarg.partial ? callTarg.partial : fail(fu_STR{})) };
            const s_Target& viaIdx = (partial.via ? partial.via : fail(fu_STR{}));
            callTargIdx = (partial.target ? partial.target : fail(fu_STR{}));
            s_Overload via = GET(viaIdx, module, ctx);
            callTarg = GET(callTargIdx, module, ctx);
            fu_VEC<s_SolvedNode> innerArgs {};
            if (!unshift)
                innerArgs = fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { ([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.mutref(0); if (_) return _; } fail(fu_STR{}); }()) } };

            s_SolvedNode argNode = CallerNode(createRead("__partial"_fu), s_Type((via.type ? via.type : fail(fu_STR{}))), viaIdx, fu_VEC<s_SolvedNode>(innerArgs));
            if (unshift)
                args.unshift(argNode);
            else
                args.mutref(0) = argNode;

        };
        return CallerNode(node, s_Type((callTarg.type ? callTarg.type : fail(fu_STR{}))), callTargIdx, fu_VEC<s_SolvedNode>(args));
    };
    s_SolvedNode solveArrayLiteral(const s_Node& node, const s_Type& type)
    {
        s_Type itemType = ([&]() -> s_Type { if (type) return tryClear_array(type); else return s_Type{}; }());
        if ((!itemType && isStruct(type)))
            return solveCall(node, lookupStruct(type, module, ctx).ctor);

        fu_VEC<s_SolvedNode> items = solveNodes(node.items, itemType, s_Type{}, bool{});
        int startAt = 0;
        if ((!itemType && items.size()))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[startAt++]; if (_) return _; } fail(fu_STR{}); }());
            itemType = clear_refs(head.type);
        };
        if (!itemType)
            fail("Cannot infer empty arraylit."_fu);

        for (int i = startAt; (i < items.size()); i++)
        {
            itemType = type_tryInter(itemType, ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(fu_STR{}); }()).type);
            (itemType || fail("[array literal] No common supertype."_fu));
        };
        return solved(node, createArray(itemType), items);
    };
    s_SolvedNode createLet(const s_Target& target, const int flags)
    {
        s_Overload overload = GET(target, module, ctx);
        return s_SolvedNode { "let"_fu, int(flags), fu_STR(overload.name), fu_VEC<s_SolvedNode>{}, s_TokenIdx((_here ? _here : fail(fu_STR{}))), s_Type(overload.type), s_Target(target) };
    };
    s_Target injectImplicitArg__mutfn(s_SolvedNode& fnNode, const fu_STR& id, const s_Type& type)
    {
        const s_ScopeMemo scope0 = Scope_push(_scope);
        const s_Target ret = Binding(id, type, F_IMPLICIT, "var"_fu);
        Scope_pop(_scope, scope0);
        
        {
            const int n = fnNode.items.size();
            for (int i = 0; (i < n); i++)
            {
                s_SolvedNode& arg = fnNode.items.mutref(i);
                if ((arg.value == id))
                {
                    checkAssignable(type, arg.type, "Implicit arg collision"_fu, id, fu_STR{});
                    return ret;
                };
            };
            const int newArgIdx = (fnNode.items.size() + FN_RET_BACK);
            s_SolvedNode newArgNode = createLet(ret, F_IMPLICIT);
            fnNode.items.insert(newArgIdx, newArgNode);
        };
        if (fnNode.target)
        {
            s_Overload& o = GET_mut(fnNode.target);
            ((o.kind == "fn"_fu) || fail(fu_STR{}));
            o.args.push(s_Argument { fu_STR(id), s_Type(type), s_SolvedNode{}, int(F_IMPLICIT) });
        };
        return ret;
    };
    s_SolvedNode bindImplicitArg(const fu_STR& name, const s_Type& type)
    {
        return CallerNode(createRead(name), s_Type(type), getImplicit(name, type), fu_VEC<s_SolvedNode>{});
    };
    s_Target getImplicit(const fu_STR& id, const s_Type& type)
    {
        fu_VEC<s_SolvedNode> args {};
        s_Target matched = tryMatch__mutargs(_scope, fu_STR(id), args, 0, type, s_Target{});
        if (!matched)
        {
            if (!_current_fn)
                fail((("No implicit `"_fu + id) + "` in scope."_fu));

            matched = injectImplicitArg__mutfn(_current_fn, id, type);
            (matched || fail(fu_STR{}));
        };
        return matched;
    };
    s_SolvedNode solveIf(const s_Node& node, s_Type&& type)
    {
        const s_Node& n0 = node.items[0];
        const s_Node& n1 = node.items[1];
        const s_Node& n2 = node.items[2];
        s_SolvedNode cond = solveNode(n0, t_bool);
        s_SolvedNode cons = ([&]() -> s_SolvedNode { if (n1) return solveNode(n1, type); else return s_SolvedNode{}; }());
        s_SolvedNode alt = ([&]() -> s_SolvedNode { if (n2) return solveNode(n2, (cons.type ? cons.type : type)); else return s_SolvedNode{}; }());
        s_SolvedNode priExpr { (cons ? cons : alt ? alt : fail(fu_STR{})) };
        s_SolvedNode secExpr { ([&]() -> const s_SolvedNode& { if (cons) { const s_SolvedNode& _ = alt; if (_) return _; } return cons; }()) };
        const s_Type& priType = priExpr.type;
        const s_Type& secType = secExpr.type;
        if ((!is_void(type) && !is_bool(type)))
        {
            type = (!secType ? s_Type(priType) : type_tryInter(priType, secType));
            (type || fail((((("[if] No common supertype: `"_fu + serializeType(priType)) + " : "_fu) + serializeType(secType)) + "`."_fu)));
            if (cons)
                maybeCopyOrMove(cons, type, false);

            if (alt)
                maybeCopyOrMove(alt, type, false);

        };
        return solved(node, (type ? type : fail(fu_STR{})), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { cond, cons, alt } });
    };
    s_SolvedNode solveNot(const s_Node& node)
    {
        return solved(node, t_bool, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { solveNode(node.items[0], t_bool) } });
    };
    s_SolvedNode solveOr(const s_Node& node, s_Type&& type)
    {
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, type, s_Type{}, bool{});
        if (is_void(type))
            type = t_bool;

        if (!is_bool(type))
        {
            s_Type sumType {};
            bool hasNever = false;
            for (int i = items.size(); (i-- > 0); )
            {
                s_SolvedNode item { items[i] };
                if (is_never(item.type))
                {
                    hasNever = true;
                    continue;
                };
                const s_SolvedNode& andLast = ([&]() -> const s_SolvedNode& { if (hasNever && (item.kind == "and"_fu) && item.items) return item.items[(item.items.size() - 1)]; else return fu::Default<s_SolvedNode>::value; }());
                const s_Type& itemType = ((andLast && !is_never(andLast.type)) ? andLast.type : item.type);
                if (sumType)
                {
                    sumType = type_tryInter(sumType, itemType);
                    if (!sumType)
                    {
                        break;
                    };
                }
                else
                    sumType = itemType;

            };
            if (sumType)
            {
                for (int i = 0; (i < items.size()); i++)
                    maybeCopyOrMove(items.mutref(i), sumType, false);

                type = sumType;
            }
            else
                type = t_bool;

        };
        return solved(node, type, items);
    };
    s_SolvedNode solveAnd(const s_Node& node, s_Type&& type)
    {
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, type, s_Type{}, bool{});
        if (is_void(type))
            type = t_bool;

        if (!is_bool(type))
        {
            s_Type sumType {};
            for (int i = items.size(); (i-- > 0); )
            {
                const s_SolvedNode& item = items[i];
                if (is_never(item.type))
                {
                    continue;
                };
                if (sumType)
                {
                    sumType = type_tryInter(sumType, item.type);
                    if (!sumType)
                    {
                        break;
                    };
                }
                else
                {
                    type = item.type;
                    sumType = item.type;
                };
            };
            if (sumType)
                type = sumType;
            else
                type = clear_mutref(type);

        };
        return solved(node, type, items);
    };
    s_SolvedNode solved(const s_Node& node, const s_Type& type, const fu_VEC<s_SolvedNode>& items)
    {
        return s_SolvedNode { fu_STR(node.kind), int(node.flags), fu_STR(node.value), fu_VEC<s_SolvedNode>(items), s_TokenIdx(node.token), s_Type(type), s_Target{} };
    };
    s_SolvedNode CallerNode(const s_Node& node, s_Type&& type, const s_Target& target, fu_VEC<s_SolvedNode>&& args)
    {
        s_Overload overload = GET(target, module, ctx);
        if ((overload.kind == "field"_fu))
        {
            s_SolvedNode head { ([&]() -> const s_SolvedNode& { if ((args.size() == 1)) { const s_SolvedNode& _ = args.mutref(0); if (_) return _; } fail(fu_STR{}); }()) };
            const s_Type& headType = (head.type ? head.type : fail(fu_STR{}));
            type = add_refs(headType, s_Type(type));
        }
        else if (args.size())
        {
            const fu_VEC<s_Argument>& host_args = (overload.args ? overload.args : fail("CallerNode: no host args."_fu));
            for (int i = 0; (i < args.size()); i++)
                maybeCopyOrMove(([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.mutref(i); if (_) return _; } fail(fu_STR{}); }()), host_args[i].type, true);

            type.lifetime = Lifetime_fromCallArgs(type.lifetime, args);
        };
        s_SolvedNode out = solved(node, type, args);
        out.target = target;
        return out;
    };
    void maybeCopyOrMove(s_SolvedNode& node, const s_Type& slot, const bool isArgument)
    {
        const int q = slot.value.quals;
        if (!(q & q_mutref))
            node.type.value.quals &= ~q_mutref;

        if ((q & q_ref))
        {
            if (((node.kind == "definit"_fu) && isArgument))
                node.type.value.quals &= ~q_ref;

            return;
        };
        if (!(node.type.value.quals & q_ref))
            return;

        if ((node.kind == "definit"_fu))
        {
            node.type.value.quals &= ~q_ref;
            return;
        };
        if (!(q & q_rx_copy))
            fail("Needs an explicit STEAL or CLONE."_fu);

        if (WARN_ON_IMPLICIT_COPY)
        {
        };
        node = createCopy(node);
    };
    s_SolvedNode createCopy(const s_SolvedNode& node)
    {
        return s_SolvedNode { "copy"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { node } }, s_TokenIdx(node.token), clear_refs(node.type), s_Target{} };
    };
    s_SolvedNode createMove(const s_SolvedNode& node, const bool nrvo)
    {
        return s_SolvedNode { (nrvo ? "nrvo"_fu : "move"_fu), 0, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { node } }, s_TokenIdx(node.token), clear_refs(node.type), s_Target{} };
    };
    fu_VEC<s_SolvedNode> solveNodes(const fu_VEC<s_Node>& nodes, const s_Type& type_all, const s_Type& type_last, const bool use_type_last)
    {
        fu_VEC<s_SolvedNode> result {};
        const s_TokenIdx here0 { _here };
        result.resize(nodes.size());
        for (int i = 0; (i < nodes.size()); i++)
        {
            const s_Node& node = nodes[i];
            if (!node)
            {
                continue;
            };
            if (!isUnordered(node.kind))
            {
                _here = (node.token ? node.token : _here);
                result.mutref(i) = solveNode(node, (((i == (nodes.size() - 1)) && use_type_last) ? type_last : type_all));
                continue;
            };
            const int i0 = i;
            int i1 = nodes.size();
            for (int i_1 = i0; (i_1 < nodes.size()); i_1++)
            {
                const s_Node& node_1 = nodes[i_1];
                if (!node_1)
                {
                    continue;
                };
                if (!isUnordered(node_1.kind))
                {
                    i1 = i_1;
                    break;
                };
                _here = (node_1.token ? node_1.token : _here);
                if ((node_1.kind != "fn"_fu))
                    result.mutref(i_1) = unorderedPrep(node_1);

            };
            
            {
                for (int i_1 = i0; (i_1 < i1); i_1++)
                {
                    const s_Node& node_1 = nodes[i_1];
                    if ((node_1 && (node_1.kind != "fn"_fu)))
                    {
                        _here = (node_1.token ? node_1.token : _here);
                        result.mutref(i_1) = unorderedSolve(node_1, result[i_1]);
                    };
                };
                for (int i_1 = i0; (i_1 < i1); i_1++)
                {
                    const s_Node& node_1 = nodes[i_1];
                    if ((node_1.kind == "fn"_fu))
                    {
                        _here = (node_1.token ? node_1.token : _here);
                        result.mutref(i_1) = unorderedPrep(node_1);
                    };
                };
                for (int i_1 = i0; (i_1 < i1); i_1++)
                {
                    const s_Node& node_1 = nodes[i_1];
                    if ((node_1.kind == "fn"_fu))
                    {
                        _here = (node_1.token ? node_1.token : _here);
                        result.mutref(i_1) = unorderedSolve(node_1, result[i_1]);
                    };
                };
            };
            ((i1 > i0) || fail(fu_STR{}));
            i = (i1 - 1);
        };
        ((result.size() == nodes.size()) || fail(fu_STR{}));
        _here = here0;
        return result;
    };
    s_SolverOutput solve()
    {
        if (module.modid)
        {
            (_scope.imports += module.modid);
            _Scope_import__forceCopy(0);
        }
        else
            _scope = listGlobals(module);

        
        {
            s_SolvedNode root = solveNode(parse, s_Type{});
            s_Scope scope = Scope_exports(_scope, module.modid);
            return s_SolverOutput { s_SolvedNode(root), s_Scope(scope) };
        };
    };
};

} // namespace

s_SolverOutput solve(const s_Node& parse, const s_Context& ctx, s_Module& module)
{
    return (sf_solve { parse, ctx, module }).solve();
}


#endif
