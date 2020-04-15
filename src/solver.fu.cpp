#include <fu/default.h>
#include <fu/map.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <utility>

struct s_ModuleStat;
struct s_LexerOutput;
struct s_Token;
struct s_Node;
struct s_ParserOutput;
struct s_TokenIdx;
struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStats;
struct s_Overload;
struct s_Partial;
struct s_Scope;
struct s_ScopeItem;
struct s_ScopeSkip;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Template;
struct s_Effects;
struct s_MapFields;
struct s_Struct;
struct s_StructField;
struct s_Target;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
struct s_Region;
bool hasIdentifierChars(const fu_STR&);
const s_Node& only(const fu_VEC<s_Node>&);
s_Target search(const s_Scope&, const fu_STR&, int&, const s_ScopeSkip&, const s_Target&);
int Scope_push(s_Scope&);
void Scope_pop(s_Scope&, int);
s_Target Scope_add(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, int, const fu_VEC<fu_STR>&, const fu_VEC<s_Type>&, const fu_VEC<s_SolvedNode>&, const s_Template&, const s_Partial&, const s_SolvedNode&, const s_Module&);
s_Lifetime Lifetime_fromCallArgs(const s_Lifetime&, const fu_VEC<s_SolvedNode>&);
s_Scope listGlobals(const s_Module&);
const s_Struct& lookupStruct(const s_Type&, const s_Module&, const s_Context&);
s_Struct& lookupStruct_mut(const fu_STR&, s_Module&);
bool isStruct(const s_Type&);
s_Type initStruct(const fu_STR&, int, s_Module&);
bool isTemplate(const s_Overload&);
s_Target Scope_Typedef(s_Scope&, const fu_STR&, const s_Type&, const s_Module&);
int MODID(const s_Module&);
s_Token _token(const s_TokenIdx&, const s_Context&);
fu_STR _fname(const s_TokenIdx&, const s_Context&);
int finalizeStruct(const fu_STR&, const fu_VEC<s_StructField>&, s_Module&);
fu_VEC<s_Target> DEPREC_lookup(const s_Scope&, const fu_STR&);
s_Type add_ref(const s_Type&, const s_Lifetime&);
s_Type add_mutref(const s_Type&, const s_Lifetime&);
s_Type clear_refs(const s_Type&);
s_Type createArray(const s_Type&);
s_Type tryClear_array(const s_Type&);
s_Type createSlice(const s_Type&);
s_Type tryClear_slice(const s_Type&);
s_Type createMap(const s_Type&, const s_Type&);
s_MapFields tryClear_map(const s_Type&);
bool is_never(const s_Type&);
bool is_void(const s_Type&);
bool is_bool(const s_Type&);
bool isAssignable(const s_Type&, const s_Type&);
bool isAssignableAsArgument(const s_Type&, s_Type&&);
s_Type tryClear_mutref(const s_Type&);
s_Type tryClear_ref(const s_Type&);
s_Type clear_mutref(const s_Type&);
s_Type add_refs(const s_Type&, s_Type&&);
fu_STR serializeType(const s_Type&);
bool type_has(const s_Type&, const fu_STR&);
s_Type type_tryInter(const s_Type&, const s_Type&);
s_Lifetime Lifetime_fromArgIndex(int);
s_Lifetime Lifetime_fromScopeIdx(int);
bool killedBy(const s_Lifetime&, int);
s_Lifetime Lifetime_static();
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
            || src
            || lex
            || parse
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

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    fu_STR id;
    fu_VEC<s_StructField> fields;
    int flags;
    s_Target ctor;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || fields
            || flags
            || ctor
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
    s_Template tEmplate;
    s_SolvedNode constant;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || type
            || min
            || max
            || args
            || names
            || defaults
            || partial
            || tEmplate
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
    fu_MAP<fu_STR, s_Struct> types;
    fu_MAP<fu_STR, s_SolvedNode> specs;
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
    explicit operator bool() const noexcept
    {
        return false
            || modules
            || files
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

                                #ifndef DEFt_2_1__1031__7_4_7SolvedNode
                                #define DEFt_2_1__1031__7_4_7SolvedNode
inline s_SolvedNode& only(fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

                                #ifndef DEFt_2_1__1030__5_4_5Node
                                #define DEFt_2_1__1030__5_4_5Node
inline const s_Node& only(const fu_VEC<s_Node>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

                                #ifndef DEF_WARN_ON_IMPLICIT_COPY
                                #define DEF_WARN_ON_IMPLICIT_COPY
inline const bool WARN_ON_IMPLICIT_COPY = false;
                                #endif

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
inline const s_Type t_byte = s_Type { s_ValueType { int(Primitive), int{}, "byte"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline const int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
inline const int FN_ARGS_BACK = FN_RET_BACK;
                                #endif

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline const int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline const int LET_INIT = 1;
                                #endif

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
inline const int q_mutref = (1 << 0);
                                #endif

                                #ifndef DEF_F_NAMED_ARGS
                                #define DEF_F_NAMED_ARGS
inline const int F_NAMED_ARGS = (1 << 25);
                                #endif

                                #ifndef DEF_q_arithmetic
                                #define DEF_q_arithmetic
inline const int q_arithmetic = (1 << 5);
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
inline const s_Type t_void = s_Type { s_ValueType { 0, int{}, "void"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_Arithmetic
                                #define DEF_Arithmetic
inline const int Arithmetic = (Primitive | q_arithmetic);
                                #endif

                                #ifndef DEF_q_floating_pt
                                #define DEF_q_floating_pt
inline const int q_floating_pt = (1 << 9);
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
inline const s_Type t_f32 = s_Type { s_ValueType { int(FloatingPt), int{}, "f32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
inline const s_Type t_f64 = s_Type { s_ValueType { int(FloatingPt), int{}, "f64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_q_integral
                                #define DEF_q_integral
inline const int q_integral = (1 << 6);
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
inline const s_Type t_i32 = s_Type { s_ValueType { int(SignedInt), int{}, "i32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
inline const s_Type t_i64 = s_Type { s_ValueType { int(SignedInt), int{}, "i64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
inline const s_Type t_i16 = s_Type { s_ValueType { int(SignedInt), int{}, "i16"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
inline const s_Type t_i8 = s_Type { s_ValueType { int(SignedInt), int{}, "i8"_fu }, s_Lifetime{}, s_Effects{} };
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
inline const s_Type t_u32 = s_Type { s_ValueType { int(UnsignedInt), int{}, "u32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
inline const s_Type t_u64 = s_Type { s_ValueType { int(UnsignedInt), int{}, "u64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
inline const s_Type t_u16 = s_Type { s_ValueType { int(UnsignedInt), int{}, "u16"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
inline const s_Type t_u8 = s_Type { s_ValueType { int(UnsignedInt), int{}, "u8"_fu }, s_Lifetime{}, s_Effects{} };
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

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline const int F_ARG = (1 << 9);
                                #endif

                                #ifndef DEF_F_USING
                                #define DEF_F_USING
inline const int F_USING = (1 << 18);
                                #endif

                                #ifndef DEF_F_ID
                                #define DEF_F_ID
inline const int F_ID = (1 << 5);
                                #endif

                                #ifndef DEF_F_QUALIFIED
                                #define DEF_F_QUALIFIED
inline const int F_QUALIFIED = (1 << 7);
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
inline const s_Type t_bool = s_Type { s_ValueType { int(Primitive), int{}, "bool"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

namespace {

struct sf_solve
{
    const s_Node& parse;
    const s_Context& ctx;
    s_Module& module;
    s_Scope _scope {};
    s_TokenIdx _here {};
    int _return_idx {};
    s_SolvedNode _current_fn {};
    fu_MAP<fu_STR, s_Type> _typeParams {};
    int _root_scope {};
    s_ScopeSkip _scope_skip {};
    bool TEST_expectImplicits = false;
    s_Type t_string = createArray(t_byte);
    void Scope_import(const int modid)
    {
        const fu_VEC<s_ScopeItem>& items = ctx.modules[modid].out.solve.scope.items;
        for (int i = 0; (i < items.size()); i++)
        {
            const s_ScopeItem& item = items[i];
            if ((item.target.modid == modid))
                _scope.items.push(items[i]);

        };
    };
    s_Overload GET(const s_Target& target, const s_Module& module, const s_Context& ctx)
    {
        ((target.index > 0) || fu::fail());
        if ((target.modid == module.modid))
            return s_Overload(_scope.overloads[(target.index - 1)]);

        return s_Overload(ctx.modules[target.modid].out.solve.scope.overloads[(target.index - 1)]);
    };
    s_Overload& GET_mut(const s_Target& target)
    {
        (((target.index > 0) && (target.modid == MODID(module))) || fu::fail());
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
    s_Target Binding(const fu_STR& id, const s_Type& type, fu_STR&& kind, const s_SolvedNode& constant)
    {
        return Scope_add(_scope, kind, (id ? id : fail(fu_STR{})), (type ? type : fail(fu_STR{})), 0, 0, fu_VEC<fu_STR>{}, fu_VEC<s_Type>{}, fu_VEC<s_SolvedNode>{}, s_Template{}, s_Partial{}, constant, module);
    };
    s_Target Field(const fu_STR& id, const s_Type& structType, const s_Type& fieldType)
    {
        return Scope_add(_scope, "field"_fu, (id ? id : fail(fu_STR{})), (fieldType ? fieldType : fail(fu_STR{})), 1, 1, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "this"_fu } }, fu_VEC<s_Type> { fu_VEC<s_Type>::INIT<1> { (structType ? structType : fail(fu_STR{})) } }, fu_VEC<s_SolvedNode>{}, s_Template{}, s_Partial{}, s_SolvedNode{}, module);
    };
    s_Target TemplateDecl(const s_Node& node)
    {
        const fu_STR& id = node.value;
        ((node.kind == "fn"_fu) || fail("TODO"_fu));
        const int min = (node.items.size() + FN_ARGS_BACK);
        const int max = ((node.kind == "fn"_fu) ? int(0xffffffu) : int(min));
        s_Template tEmplate = s_Template { s_Node(node) };
        fu_VEC<fu_STR> arg_n {};
        if ((node.kind == "fn"_fu))
        {
            const fu_VEC<s_Node>& items = node.items;
            const int numArgs = (items.size() + FN_ARGS_BACK);
            for (int i = 0; (i < numArgs); i++)
            {
                const s_Node& arg = ([&]() -> const s_Node& { { const s_Node& _ = items[i]; if (_) return _; } fail(fu_STR{}); }());
                ((arg.kind == "let"_fu) || fail(fu_STR{}));
                const fu_STR& name = (arg.value ? arg.value : fail(fu_STR{}));
                arg_n.push(name);
            };
        };
        return Scope_add(_scope, "template"_fu, id, s_Type { s_ValueType{}, s_Lifetime{}, s_Effects{} }, min, max, arg_n, fu_VEC<s_Type>{}, fu_VEC<s_SolvedNode>{}, tEmplate, s_Partial{}, s_SolvedNode{}, module);
    };
    s_Target FnDecl(const fu_STR& kind, const fu_STR& id, s_SolvedNode& node, const s_Node& native)
    {
        fu_VEC<s_SolvedNode> items { node.items };
        const s_SolvedNode& rnode = items[(items.size() + FN_RET_BACK)];
        const s_Type& ret = ([&]() -> const s_Type& { if (rnode) { const s_Type& _ = rnode.type; if (_) return _; } fail(fu_STR{}); }());
        const int max = (items.size() + FN_RET_BACK);
        fu_VEC<s_SolvedNode> args = fu::slice(items, 0, max);
        fu_VEC<s_Type> arg_t {};
        fu_VEC<fu_STR> arg_n {};
        fu_VEC<s_SolvedNode> arg_d {};
        int min = 0;
        for (int i = 0; (i < max); i++)
        {
            const s_SolvedNode& arg = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args[i]; if (_) return _; } fail(fu_STR{}); }());
            ((arg.kind == "let"_fu) || fail(fu_STR{}));
            arg_t.push((arg.type ? arg.type : fail(fu_STR{})));
            arg_n.push((arg.value ? arg.value : fail(fu_STR{})));
            const bool isImplicit = !!(arg.flags & F_IMPLICIT);
            if (!isImplicit)
            {
                ((arg_d.size() >= i) || fail(fu_STR{}));
                const s_SolvedNode& def = arg.items[LET_INIT];
                arg_d.push(def);
                if (!def)
                    min++;

            };
        };
        s_Template tEmplate = s_Template { s_Node(native) };
        const s_Target overload = Scope_add(_scope, kind, id, ret, min, max, arg_n, arg_t, arg_d, tEmplate, s_Partial{}, s_SolvedNode{}, module);
        node.target = overload;
        return overload;
    };
    s_Target DefaultCtor(const fu_STR& id, const s_Type& type, const fu_VEC<s_SolvedNode>& members)
    {
        fu_VEC<s_Type> arg_t {};
        fu_VEC<fu_STR> arg_n {};
        for (int i = 0; (i < members.size()); i++)
        {
            const s_SolvedNode& member = members[i];
            arg_t.push((member.type ? member.type : fail(fu_STR{})));
            arg_n.push((member.value ? member.value : fail(fu_STR{})));
        };
        const int max = members.size();
        int min = 0;
        fu_VEC<s_SolvedNode> arg_d {};
        
        {
            for (int i = 0; (i < members.size()); i++)
            {
                const s_SolvedNode& member = members[i];
                s_SolvedNode init = ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(member.items[LET_INIT]); if (_) return _; } return tryDefaultInit(member.type); }());
                if (!init)
                {
                    min = max;
                    arg_d.clear();
                    break;
                };
                arg_d.push(init);
            };
        };
        return Scope_add(_scope, "defctor"_fu, id, type, min, max, arg_n, arg_t, arg_d, s_Template{}, s_Partial{}, s_SolvedNode{}, module);
    };
    s_SolvedNode tryDefaultInit(const s_Type& type)
    {
        if ((type.value.quals & q_mutref))
            return s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} };

        return createDefaultInit(type);
    };
    s_SolvedNode createDefaultInit(const s_Type& type)
    {
        return s_SolvedNode { "definit"_fu, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx((_here ? _here : fail(fu_STR{}))), s_Type(type), s_Target{} };
    };
    s_SolvedNode solveDefinit(const s_Type& type)
    {
        if (!type)
            fail("Cannot solve definit, no inferred type."_fu);

        return ([&]() -> s_SolvedNode { { s_SolvedNode _ = tryDefaultInit(type); if (_) return _; } fail(("Cannot definit: "_fu + serializeType(type))); }());
    };
    s_Target Partial(const fu_STR& id, const s_Target& viaIdx, const s_Target& overloadIdx)
    {
        s_Overload via = GET(viaIdx, module, ctx);
        s_Overload overload = GET(overloadIdx, module, ctx);
        fu_STR kind = "p-unshift"_fu;
        int min = (overload.min - 1);
        int max = (overload.max - 1);
        (((min >= 0) && (max >= min)) || fail(fu_STR{}));
        fu_VEC<s_Type> arg_t = (overload.args ? fu::slice(overload.args, 1) : fu_VEC<s_Type>(overload.args));
        fu_VEC<fu_STR> arg_n = (overload.names ? fu::slice(overload.names, 1) : fu_VEC<fu_STR>(overload.names));
        fu_VEC<s_SolvedNode> arg_d = (overload.defaults ? fu::slice(overload.defaults, 1) : fu_VEC<s_SolvedNode>(overload.defaults));
        if (((via.kind != "var"_fu) && (via.kind != "global"_fu) && (via.kind != "arg"_fu) && (via.kind != "ref"_fu)))
        {
            kind = "p-wrap"_fu;
            min++;
            max++;
            const s_Type& via_t = ([&]() -> const s_Type& { if (via.args) { const s_Type& _ = via.args[0]; if (_) return _; } fail(fu_STR{}); }());
            arg_t.unshift(via_t);
            if (arg_n)
                arg_n.unshift("using"_fu);

            if (arg_d)
                arg_d.unshift(s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} });

        };
        return Scope_add(_scope, kind, id, overload.type, min, max, arg_n, arg_t, arg_d, s_Template{}, s_Partial { s_Target(viaIdx), s_Target(overloadIdx) }, s_SolvedNode{}, module);
    };
    void scope_using(const s_Target& viaIdx)
    {
        s_Overload via = GET(viaIdx, module, ctx);
        const s_Type& actual = (via.type ? via.type : fail(fu_STR{}));
        for (int i = 0; (i < _scope.items.size()); i++)
        {
            s_ScopeItem item { _scope.items[i] };
            if (!hasIdentifierChars(item.id))
            {
                continue;
            };
            const s_Target& overloadIdx = item.target;
            s_Overload overload = GET(overloadIdx, module, ctx);
            if ((overload.min < 1))
            {
                continue;
            };
            if (isTemplate(overload))
            {
                continue;
            };
            const s_Type& expect = ([&]() -> const s_Type& { { const s_Type& _ = overload.args[0]; if (_) return _; } fail(fu_STR{}); }());
            if (!isAssignableAsArgument(expect, s_Type(actual)))
            {
                continue;
            };
            if ((overload.min < 2))
            {
                for (int i = 0; (i < _scope.items.size()); i++)
                {
                    if ((i == _scope_skip.start))
                    {
                        i = _scope_skip.end;
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
    };
    bool getNamedArgReorder(fu_VEC<int>& result, const fu_VEC<fu_STR>& names, const fu_VEC<fu_STR>& arg_n)
    {
        result.clear();
        int used = 0;
        int offset = 0;
        for (int i = 0; (i < arg_n.size()); i++)
        {
            int idx = fu::lfind(names, arg_n[i]);
            if ((idx < 0))
            {
                for (int i = offset; (i < names.size()); i++)
                {
                    offset++;
                    if (!names[i])
                    {
                        idx = i;
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
    s_Target tryMatch__mutargs(const s_Scope& scope, const fu_STR& id, fu_VEC<s_SolvedNode>& args, const int flags, const s_Type& retType, const s_Target& target)
    {
        s_Target matchIdx {};
        
        {
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
            int scope_iterator {};
            s_Target overloadIdx {};
            while ((overloadIdx = search(scope, id, scope_iterator, _scope_skip, target))){
            {
                s_Overload overload = GET(overloadIdx, module, ctx);
                while (true){
                {
                    if (((overload.min > arity) || (overload.max < arity)))
                    {
                        goto L_NEXT_c;
                    };
                    if ((retType && !isAssignable(retType, (overload.type ? overload.type : fail(fu_STR{})))))
                    {
                        goto L_NEXT_c;
                    };
                    if ((names && !getNamedArgReorder(reorder, names, overload.names)))
                    {
                        goto L_NEXT_c;
                    };
                    if (isTemplate(overload))
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
                        overload = GET(specIdx, module, ctx);
                        goto L_TEST_AGAIN_c;
                    };
                    goto L_TEST_AGAIN_b;
                
                    }L_TEST_AGAIN_c:;}
                    L_TEST_AGAIN_b:;

                if (args)
                {
                    fu_VEC<s_Type> arg_t { overload.args };
                    fu_VEC<s_SolvedNode> arg_d { overload.defaults };
                    const int N = (reorder ? reorder.size() : args.size());
                    fu_VEC<s_SolvedNode> undo_literal_fixup { args };
                    for (int i = 0; (i < N); i++)
                    {
                        const int callsiteIndex = (reorder ? reorder.mutref(i) : i);
                        if ((callsiteIndex < 0))
                        {
                            if (!(arg_d && arg_d[i]))
                            {
                                goto L_NEXT_c;
                            };
                            continue;
                        };
                        const s_Type& expect = arg_t[i];
                        s_Type actual { args.mutref(callsiteIndex).type };
                        bool ok = isAssignableAsArgument(expect, s_Type(actual));
                        if ((!ok && considerRetyping(expect, actual)))
                        {
                            s_SolvedNode& arg = args.mutref(callsiteIndex);
                            if ((arg.kind == "label"_fu))
                            {
                                s_SolvedNode inner { only(arg.items) };
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
                };
                matchIdx = overloadIdx;
                if (!arity)
                {
                    break;
                };
            
                }L_NEXT_c:;};
        };
        if (matchIdx)
        {
            s_Overload matched = GET(matchIdx, module, ctx);
            const fu_VEC<s_SolvedNode>& arg_d = matched.defaults;
            if (arg_d)
            {
                if ((args.size() < arg_d.size()))
                    args.resize(arg_d.size());

                for (int i = 0; (i < arg_d.size()); i++)
                    args.mutref(i) = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args[i]; if (_) return _; } if (arg_d) { const s_SolvedNode& _ = arg_d[i]; if (_) return _; } fail(fu_STR{}); }());

            };
            const fu_VEC<s_Type>& arg_t = matched.args;
            if ((arg_t && (args.size() < arg_t.size())))
            {
                const fu_VEC<fu_STR>& arg_n = (matched.names ? matched.names : fail(fu_STR{}));
                for (int i = args.size(); (i < arg_t.size()); i++)
                {
                    const fu_STR& id = arg_n[i];
                    const s_Type& type = arg_t[i];
                    bindImplicitArg(args, i, id, type);
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
        return ((node.kind == "int"_fu) || (node.kind == "num"_fu));
    };
    s_Type tryRetyping(const s_SolvedNode& node, const s_Type& expect)
    {
        return ((node.kind == "int"_fu) ? solveInt(node.value, expect) : ((node.kind == "num"_fu) ? solveNum(node.value, expect) : s_Type{}));
    };
    s_Target match__mutargs(const s_Scope& scope, const fu_STR& id, fu_VEC<s_SolvedNode>& args, const int flags, const s_Target& target)
    {
        const s_Target ret = tryMatch__mutargs(scope, id, args, flags, s_Type{}, target);
        if (ret)
            return ret;

        const s_Target debug = tryMatch__mutargs(scope, id, args, flags, s_Type{}, target);
        if (debug)
            return debug;

        NICERR_mismatch(scope, id, args);
    };
    [[noreturn]] fu::never NICERR_mismatch(const s_Scope& scope, const fu_STR& id, const fu_VEC<s_SolvedNode>& args)
    {
        fu_VEC<s_Target> overloads = DEPREC_lookup(scope, id);
        int min = int(0xffffffu);
        for (int i = 0; (i < overloads.size()); i++)
        {
            const int arity = GET(overloads[i], module, ctx).min;
            if ((min > arity))
                min = arity;

        };
        (overloads ? ((args.size() < min) ? fail((((((("`"_fu + id) + "` expects "_fu) + min) + " arguments, "_fu) + args.size()) + " provided."_fu)) : fail(((("`"_fu + id) + "` bad args, provided: "_fu) + mangleArguments(args)))) : fail((("`"_fu + id) + "` is not defined."_fu)));
    };
    s_SolvedNode solveNode(const s_Node& node, const s_Type& type)
    {
        const fu_STR& k = node.kind;
        if ((k == "root"_fu))
            return solveRoot(node);

        if ((k == "block"_fu))
            return solveBlock(node);

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
            return solveBlock(node);

        if ((k == "break"_fu))
            return solveJump(node);

        if ((k == "continue"_fu))
            return solveJump(node);

        if ((k == "int"_fu))
            return solveInt(node, type);

        if ((k == "num"_fu))
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
        TEST_expectImplicits = !!(node.flags & F_IMPLICIT);
        return solved(node, t_void, solveNodes(node.items, t_void));
    };
    s_SolvedNode solveBlock(const s_Node& node)
    {
        const int scope0 = Scope_push(_scope);
        s_SolvedNode out = solved(node, t_void, solveNodes(node.items, t_void));
        Scope_pop(_scope, scope0);
        return out;
    };
    s_SolvedNode solveComma(const s_Node& node)
    {
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, s_Type{});
        const s_SolvedNode& last = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() - 1)]; if (_) return _; } fail(fu_STR{}); }());
        return solved(node, (last.type ? last.type : fail(fu_STR{})), items);
    };
    s_Type solveInt(const fu_STR& v, const s_Type& type)
    {
        const bool U = (fu::lmatch(v, "0x"_fu) || fu::lmatch(v, "0o"_fu) || fu::lmatch(v, "0b"_fu) || fu::rmatch(v, std::byte('u')));
        const bool S = (fu::lmatch(v, std::byte('-')) || fu::lmatch(v, std::byte('+')) || fu::rmatch(v, std::byte('i')));
        (U && S && fail("Ambiguous int literal: cannot decide if signed or unsigned."_fu));
        const auto& want = [&](const s_Type& t) -> bool
        {
            return (type.value.canon == t.value.canon);
        };
        if (!U)
        {
            if (want(t_f32))
                return s_Type(t_f32);

            if (want(t_f64))
                return s_Type(t_f64);

            if (want(t_i32))
                return s_Type(t_i32);

            if (want(t_i64))
                return s_Type(t_i64);

            if (want(t_i16))
                return s_Type(t_i16);

            if (want(t_i8))
                return s_Type(t_i8);

        };
        if (!S)
        {
            if (want(t_u32))
                return s_Type(t_u32);

            if (want(t_u64))
                return s_Type(t_u64);

            if (want(t_u16))
                return s_Type(t_u16);

            if (want(t_u8))
                return s_Type(t_u8);

        };
        return s_Type((U ? t_u32 : t_i32));
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
            return createDefaultInit(add_ref(t_string, Lifetime_static()));

        return solved(node, t_string, fu_VEC<s_SolvedNode>{});
    };
    s_SolvedNode createEmpty()
    {
        return s_SolvedNode { "empty"_fu, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type(t_void), s_Target{} };
    };
    s_Node createTypeParam(const fu_STR& value)
    {
        return s_Node { "typeparam"_fu, int{}, fu_STR(value), fu_VEC<s_Node>{}, s_TokenIdx((_here ? _here : fail(fu_STR{}))) };
    };
    s_SolvedNode uPrepFn(const s_Node& node)
    {
        return __solveFn(false, false, node, s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} }, -1);
    };
    s_SolvedNode uSolveFn(const s_Node& node, const s_SolvedNode& prep)
    {
        return __solveFn(true, false, node, prep, -1);
    };
    s_SolvedNode __solveFn(const bool solve, const bool spec, const s_Node& n_fn, const s_SolvedNode& prep, const int caseIdx)
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
            return s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} };

        const fu_VEC<s_Node>& inItems = n_fn.items;
        ((inItems.size() >= FN_RET_BACK) || fail(fu_STR{}));
        s_SolvedNode out = ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(prep); if (_) return _; } return solved(n_fn, t_void, fu_VEC<s_SolvedNode>{}); }());
        out.items.resize(inItems.size());
        if ((_current_fn && (id != "free"_fu)))
        {
            _current_fn.flags |= F_HAS_CLOSURE;
            out.flags |= F_CLOSURE;
        };
        bool native = false;
        s_Node n_body {};
        
        {
            const int return_idx0 = _return_idx;
            _return_idx = Scope_push(_scope);
            const int root_scope0 = _root_scope;
            if (!root_scope0)
                _root_scope = _return_idx;

            std::swap(_current_fn, out);
            fu_VEC<s_SolvedNode>& outItems = _current_fn.items;
            for (int i = 0; (i < (inItems.size() + FN_ARGS_BACK)); i++)
            {
                const s_Node& n_arg = ([&]() -> const s_Node& { { const s_Node& _ = inItems[i]; if (_) return _; } fail(fu_STR{}); }());
                ((n_arg.kind == "let"_fu) || fail(fu_STR{}));
                s_Lifetime lifetime = Lifetime_fromArgIndex(i);
                if ((spec && !(n_arg.flags & F_MUT)))
                {
                    s_Node mut_arg { n_arg };
                    mut_arg.items.mutref(LET_TYPE) = createTypeParam(mut_arg.value);
                    s_Type type { _typeParams[mut_arg.value] };
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
                s_SolvedNode s_ret = (n_ret ? evalTypeAnnot(n_ret) : s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} });
                outItems.mutref((outItems.size() + FN_RET_BACK)) = s_ret;
            };
            if ((solve && !native))
            {
                s_SolvedNode s_body = solveNode(n_body, s_Type{});
                (s_body || fail(fu_STR{}));
                outItems.mutref((outItems.size() + FN_BODY_BACK)) = s_body;
            };
            std::swap(_current_fn, out);
            Scope_pop(_scope, _return_idx);
            _return_idx = return_idx0;
            _root_scope = root_scope0;
        };
        if (!prep)
        {
            fu_STR kind = (native ? "__native"_fu : "fn"_fu);
            FnDecl(kind, id, out, ([&]() -> const s_Node& { if (native) return n_body; else return fu::Default<s_Node>::value; }()));
        };
        if ((solve && !native))
        {
            (out.items.mutref((out.items.size() + FN_BODY_BACK)) || fail(fu_STR{}));
        };
        return out;
    };
    fu_STR mangleArguments(const fu_VEC<s_SolvedNode>& args)
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
        s_SolvedNode spec { ([&](s_SolvedNode& _) -> s_SolvedNode& { if (!_) _ = s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} }; return _; } (module.out.specs.upsert(mangle))) };
        if (!spec)
        {
            s_SolvedNode spec = doTrySpecialize(tEmplate, args, mangle);
            (module.out.specs.upsert(mangle) = spec);
            return std::move(spec.target);
        };
        return std::move(spec.target);
    };
    s_SolvedNode doTrySpecialize(const s_Template& tEmplate, const fu_VEC<s_SolvedNode>& args, fu_STR& mangle)
    {
        const s_Node& node = tEmplate.node;
        ((node.kind == "fn"_fu) || fail("TODO"_fu));
        s_SolvedNode result = trySpecializeFn(node, fu_VEC<s_SolvedNode>(args), mangle);
        if (result)
        {
            s_Overload o = GET(result.target, module, ctx);
            if (((o.min > args.size()) || (o.max < args.size())))
                result = s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} };

        };
        if (!result)
            result.kind = "spec-fail"_fu;

        return result;
    };
    s_SolvedNode trySpecializeFn(const s_Node& node, fu_VEC<s_SolvedNode>&& args, fu_STR& mangle)
    {
        bool ok = true;
        const fu_VEC<s_Node>& items = node.items;
        const int numArgs = (items.size() + FN_ARGS_BACK);
        fu_MAP<fu_STR, s_Type> typeParams {};
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
                    s_Type paramType = ((annot.kind == "typeparam"_fu) ? s_Type(([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type { s_ValueType{}, s_Lifetime{}, s_Effects{} }; return _; } (typeParams.upsert(annot.value)))) : ([&]() -> s_Type { if ((annot.kind == "call"_fu) && !annot.items) return Scope_lookupType(annot.value); else return s_Type{}; }()));
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
                    s_Type& argName_typeParam = ([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type { s_ValueType{}, s_Lifetime{}, s_Effects{} }; return _; } (typeParams.upsert(argName)));
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
        if (!ok)
            return s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} };

        int caseIdx = -1;
        const s_Node& pattern = ([&]() -> const s_Node& { { const s_Node& _ = items[(items.size() + FN_BODY_BACK)]; if (_) return _; } fail(fu_STR{}); }());
        if ((pattern.kind == "pattern"_fu))
        {
            const fu_VEC<s_Node>& branches = pattern.items;
            for (int i = 0; (i < branches.size()); i++)
            {
                const s_Node& branch = branches[i];
                const fu_VEC<s_Node>& items = (branch ? branch : fail(fu_STR{})).items;
                const s_Node& cond = ([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(fu_STR{}); }());
                if (evalTypePattern(cond, typeParams))
                {
                    caseIdx = i;
                    break;
                };
            };
            if ((caseIdx < 0))
                return s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} };

        };
        s_SolvedNode current_fn0 {};
        std::swap(_current_fn, current_fn0);
        std::swap(_typeParams, typeParams);
        const int scope0 = Scope_push(_scope);
        const s_ScopeSkip scope_skip0 { _scope_skip };
        _scope_skip = ([&]() -> s_ScopeSkip { if (_root_scope) return s_ScopeSkip { int(_root_scope), int(scope0) }; else return s_ScopeSkip{}; }());
        s_SolvedNode specialized = __solveFn(true, true, node, s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} }, caseIdx);
        (specialized || fail(fu_STR{}));
        std::swap(_current_fn, current_fn0);
        std::swap(_typeParams, typeParams);
        Scope_pop(_scope, scope0);
        _scope_skip = scope_skip0;
        return specialized;
    };
    s_SolvedNode uPrepStruct(const s_Node& node)
    {
        return __solveStruct(false, node, s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} });
    };
    s_SolvedNode uSolveStruct(const s_Node& node, const s_SolvedNode& prep)
    {
        return __solveStruct(true, node, prep);
    };
    s_SolvedNode __solveStruct(const bool solve, const s_Node& node, const s_SolvedNode& prep)
    {
        s_SolvedNode out = ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(prep); if (_) return _; } return solved(node, t_void, fu_VEC<s_SolvedNode>{}); }());
        const fu_STR& id = (node.value ? node.value : fail("TODO anonymous structs"_fu));
        s_Type structType = initStruct(id, node.flags, module);
        if (!prep)
            out.target = Scope_Typedef(_scope, id, structType, module);

        if (!solve)
            return out;

        out.items = solveStructMembers(node.items, structType);
        
        {
            fu_VEC<s_SolvedNode> members {};
            fu_VEC<s_SolvedNode> items { out.items };
            fu_VEC<s_StructField> fields {};
            for (int i = 0; (i < items.size()); i++)
            {
                const s_SolvedNode& item = items[i];
                if ((item && (item.kind == "let"_fu) && (item.flags & F_FIELD)))
                {
                    members.push(item);
                    fields.push(s_StructField { fu_STR((item.value ? item.value : fail(fu_STR{}))), s_ValueType((item.type.value ? item.type.value : fail(fu_STR{}))) });
                };
            };
            structType.value.quals |= finalizeStruct(structType.value.canon, fields, module);
            GET_mut(out.target).type.value.quals = structType.value.quals;
            const s_Target ctor = DefaultCtor(id, structType, members);
            lookupStruct_mut(structType.value.canon, module).ctor = ctor;
        };
        return out;
    };
    fu_VEC<s_SolvedNode> solveStructMembers(const fu_VEC<s_Node>& members, const s_Type& structType)
    {
        fu_VEC<s_SolvedNode> out {};
        for (int i = 0; (i < members.size()); i++)
        {
            const s_Node& node = members[i];
            if ((node.kind == "let"_fu))
                out.push(solveField(structType, node));
            else
                fail(("TODO: "_fu + node.kind));

        };
        return out;
    };
    s_SolvedNode solveReturn(const s_Node& node)
    {
        const auto& retIdx = [&]() -> int
        {
            return (_current_fn.items.size() + FN_RET_BACK);
        };
        s_Type prevType { _current_fn.items.mutref(retIdx()).type };
        ((node.items.size() <= 1) || fail(fu_STR{}));
        s_SolvedNode out = solved(node, t_void, solveNodes(node.items, prevType));
        s_SolvedNode& next = (out.items ? out.items.mutref(0) : out);
        if ((killedBy(next.type.lifetime, _return_idx) && (next.type.value.quals & q_ref)))
        {
            const bool nrvo = ((next.kind == "call"_fu) && (next.items.size() == 0) && (GET(next.target, module, ctx).kind == "var"_fu));
            next = createMove(next, bool(nrvo));
        };
        if (prevType)
        {
            (isAssignable(prevType, next.type) || fail(((("Non-assignable return types: "_fu + serializeType(prevType)) + " <- "_fu) + serializeType(next.type))));
        }
        else
            _current_fn.items.mutref(retIdx()) = (next ? next : fail(fu_STR{}));

        if (out.items)
            maybeCopyOrMove(out.items.mutref(0), (prevType ? prevType : next.type), false);

        return out;
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
        s_SolvedNode init = ([&]() -> s_SolvedNode { if (n_init) return solveNode(n_init, annot.type); else return s_SolvedNode{}; }());
        (annot.type || init.type || fail("Variable declarations without type annotations must be initialized."_fu));
        s_Type t_let = (annot.type ? (((node.flags & F_ARG) && !(node.flags & F_MUT)) ? add_ref(annot.type, lifetime) : s_Type(annot.type)) : (((init.type.value.quals & q_mutref) || (node.flags & F_MUT)) ? clear_refs(init.type) : s_Type(init.type)));
        if ((annot.type && init.type))
        {
            (isAssignable(annot.type, init.type) || fail((((((("Type annotation does not match init expression: `"_fu + node.value) + ": "_fu) + serializeType(annot.type)) + " = "_fu) + serializeType(init.type)) + "`."_fu)));
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
        s_SolvedNode annot = evalTypeAnnot(only(node.items));
        Scope_Typedef(_scope, node.value, annot.type, module);
        return createEmpty();
    };
    s_SolvedNode solveLet(const s_Node& node, s_Lifetime&& lifetime)
    {
        s_SolvedNode out = solveBinding(node, lifetime);
        const bool global = (out.kind == "global"_fu);
        if (!(out.type.value.quals & q_ref))
            lifetime = Lifetime_next();

        fu_STR kind = (global ? "global"_fu : ((node.flags & F_ARG) ? "arg"_fu : ((out.type.value.quals & q_ref) ? "ref"_fu : "var"_fu)));
        const s_Target overload = Binding(out.value, ((node.flags & F_MUT) ? add_mutref(out.type, lifetime) : add_ref(out.type, lifetime)), fu_STR(kind), ([&]() -> const s_SolvedNode& { if (global) return out; else return fu::Default<s_SolvedNode>::value; }()));
        if ((out.flags & F_USING))
            scope_using(overload);

        return out;
    };
    s_SolvedNode solveField(const s_Type& structType, const s_Node& node)
    {
        s_SolvedNode out = solveBinding(node, Lifetime_fromArgIndex(0));
        const s_Target overload = Field(out.value, structType, out.type);
        if ((out.flags & F_USING))
            scope_using(overload);

        return out;
    };
    s_SolvedNode solveCatch(const s_Node& node)
    {
        ((node.items.size() == 3) || fail(fu_STR{}));
        s_SolvedNode var_ok = solveNode(node.items[0], s_Type{});
        const int scope0 = Scope_push(_scope);
        s_SolvedNode var_err = solveNode(node.items[1], s_Type{});
        s_SolvedNode cAtch = solveNode(node.items[2], s_Type{});
        Scope_pop(_scope, scope0);
        (((var_err.kind == "let"_fu) && isAssignableAsArgument(var_err.type, s_Type(t_string))) || fail(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu)));
        return solved(node, var_ok.type, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { var_ok, var_err, cAtch } });
    };
    const s_Module& findModule(const fu_STR& fname)
    {
        const fu_VEC<s_Module>& modules = ctx.modules;
        for (int i = 1; (i < modules.size()); i++)
        {
            const s_Module& module = modules[i];
            if ((module.fname == fname))
                return module;

        };
        fu::fail();
    };
    s_SolvedNode solveImport(const s_Node& node)
    {
        const fu_STR& fname = node.value;
        const s_Module& module = findModule(fname);
        Scope_import(module.modid);
        return createEmpty();
    };
    s_Type Scope_tryLookupType(const fu_STR& id)
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        while ((overloadIdx = search(_scope, id, scope_iterator, _scope_skip, s_Target{})))
        {
            s_Overload maybe = GET(overloadIdx, module, ctx);
            if ((maybe.kind == "type"_fu))
                return std::move((maybe.type ? maybe.type : fail(fu_STR{})));

        };
        return s_Type { s_ValueType{}, s_Lifetime{}, s_Effects{} };
    };
    s_Type Scope_lookupType(const fu_STR& id)
    {
        return ([&]() -> s_Type { { s_Type _ = Scope_tryLookupType(id); if (_) return _; } fail((("No type `"_fu + id) + "` in scope."_fu)); }());
    };
    s_SolvedNode evalTypeAnnot(const s_Node& node)
    {
        if ((node.kind == "call"_fu))
        {
            const fu_VEC<s_Node>& items = node.items;
            if (items.size())
            {
                if ((items.size() == 1))
                {
                    s_Type t = evalTypeAnnot(items[0]).type;
                    (t || fail(fu_STR{}));
                    if ((node.value == "&"_fu))
                        return solved(node, add_ref(t, Lifetime_static()), fu_VEC<s_SolvedNode>{});

                    if ((node.value == "&mut"_fu))
                        return solved(node, add_mutref(t, Lifetime_static()), fu_VEC<s_SolvedNode>{});

                    if ((node.value == "[]"_fu))
                        return solved(node, createArray(t), fu_VEC<s_SolvedNode>{});

                }
                else if ((items.size() == 2))
                {
                    s_Type a = evalTypeAnnot(items[0]).type;
                    s_Type b = evalTypeAnnot(items[1]).type;
                    ((a && b) || fail(fu_STR{}));
                    if ((node.value == "Map"_fu))
                        return solved(node, createMap(a, b), fu_VEC<s_SolvedNode>{});

                };
            }
            else
                return solved(node, Scope_lookupType(node.value), fu_VEC<s_SolvedNode>{});

        }
        else if ((node.kind == "typeparam"_fu))
        {
            const fu_STR& id = (node.value ? node.value : fail(fu_STR{}));
            (_typeParams || fail((("Unexpected type param: `$"_fu + id) + "`."_fu)));
            s_Type type { ([&]() -> const s_Type& { if (_typeParams) { const s_Type& _ = _typeParams.mutref(id); if (_) return _; } fail((("No type param `$"_fu + id) + "` in scope."_fu)); }()) };
            return solved(node, type, fu_VEC<s_SolvedNode>{});
        }
        else if (((node.kind == "arrlit"_fu) && (node.items.size() == 1)))
        {
            s_Type t = evalTypeAnnot(node.items[0]).type;
            return solved(node, createSlice(t), fu_VEC<s_SolvedNode>{});
        };
        fail("TODO"_fu);
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
                    s_Type t = ((node.value == "&"_fu) ? tryClear_ref(type) : ((node.value == "&mut"_fu) ? tryClear_mutref(type) : ((node.value == "[]"_fu) ? tryClear_array(type) : ((void)fail("TODO"_fu), s_Type { s_ValueType{}, s_Lifetime{}, s_Effects{} }))));
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
                return isAssignable(Scope_lookupType(node.value), type);

        }
        else if ((node.kind == "typeparam"_fu))
        {
            const fu_STR& id = (node.value ? node.value : fail(fu_STR{}));
            s_Type& _param = ([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type { s_ValueType{}, s_Lifetime{}, s_Effects{} }; return _; } (typeParams.upsert(id)));
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
        fail("TODO"_fu);
    };
    bool evalTypePattern(const s_Node& node, const fu_MAP<fu_STR, s_Type>& typeParams)
    {
        const fu_VEC<s_Node>& items = node.items;
        if ((items.size() == 2))
        {
            const s_Node& left = ([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(fu_STR{}); }());
            const s_Node& right = ([&]() -> const s_Node& { { const s_Node& _ = items[1]; if (_) return _; } fail(fu_STR{}); }());
            if (((node.kind == "call"_fu) && (node.value == "->"_fu)))
            {
                if (((left.kind == "typeparam"_fu) && (right.kind == "typetag"_fu)))
                {
                    const fu_STR& tag = (right.value ? right.value : fail(fu_STR{}));
                    const s_Type& type = ([&]() -> const s_Type& { if (left.value) { const s_Type& _ = typeParams[left.value]; if (_) return _; } fail((("No type param `$"_fu + left.value) + "` in scope."_fu)); }());
                    return type_has(type, tag);
                }
                else
                {
                    fu_MAP<fu_STR, s_Type> typeParams0 { _typeParams };
                    _typeParams = typeParams;
                    s_Type expect = evalTypeAnnot(right).type;
                    s_Type actual = evalTypeAnnot(left).type;
                    _typeParams = typeParams0;
                    return isAssignable(expect, actual);
                };
            }
            else if ((node.kind == "and"_fu))
                return (evalTypePattern(left, typeParams) && evalTypePattern(right, typeParams));
            else if ((node.kind == "or"_fu))
                return (evalTypePattern(left, typeParams) && evalTypePattern(right, typeParams));

        };
        fail("TODO"_fu);
    };
    s_Node createRead(const fu_STR& id)
    {
        return s_Node { "call"_fu, int(F_ID), fu_STR(id), fu_VEC<s_Node>{}, s_TokenIdx((_here ? _here : fail(fu_STR{}))) };
    };
    fu_STR qualid_extractFName(fu_STR& id)
    {
        const int split = fu::lfind(id, std::byte('\v'));
        ((split >= 0) || fail(fu_STR{}));
        fu_STR fname = fu::slice(id, 0, split);
        id = fu::slice(id, (split + 1));
        return fname;
    };
    s_SolvedNode solveCall(const s_Node& node, const s_Target& target)
    {
        fu_STR id { node.value };
        if (!id)
        {
            (target || fail(fu_STR{}));
        };
        const s_Scope& scope = ((node.flags & F_QUALIFIED) ? findModule(qualid_extractFName(id)).out.solve.scope : _scope);
        fu_VEC<s_SolvedNode> args = solveNodes(node.items, s_Type{});
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

        fu_VEC<s_SolvedNode> items = solveNodes(node.items, itemType);
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
    s_SolvedNode createLet(const fu_STR& id, const s_Type& type, const int flags)
    {
        return s_SolvedNode { "let"_fu, int(flags), fu_STR(id), fu_VEC<s_SolvedNode>{}, s_TokenIdx((_here ? _here : fail(fu_STR{}))), s_Type(type), s_Target{} };
    };
    s_Target injectImplicitArg__mutfn(s_SolvedNode& fnNode, const fu_STR& id, const s_Type& type)
    {
        const int scope0 = Scope_push(_scope);
        const s_Target ret = Binding(id, type, "var"_fu, s_SolvedNode{});
        Scope_pop(_scope, scope0);
        
        {
            const int n = fnNode.items.size();
            for (int i = 0; (i < n); i++)
            {
                s_SolvedNode& arg = fnNode.items.mutref(i);
                if ((arg.value == id))
                {
                    (isAssignable(type, arg.type) || fail((("Implicit arg collision: `"_fu + id) + "`."_fu)));
                    return ret;
                };
            };
            const int newArgIdx = (fnNode.items.size() + FN_RET_BACK);
            s_SolvedNode newArgNode = createLet(id, type, F_IMPLICIT);
            fnNode.items.insert(newArgIdx, newArgNode);
        };
        if (fnNode.target)
        {
            s_Overload& o = GET_mut(fnNode.target);
            ((o.kind == "fn"_fu) || fail(fu_STR{}));
            ((o.names.size() == o.args.size()) || fail(fu_STR{}));
            o.args.push(type);
            o.names.push(id);
        };
        return ret;
    };
    void bindImplicitArg(fu_VEC<s_SolvedNode>& args, const int argIdx, const fu_STR& id, const s_Type& type)
    {
        (TEST_expectImplicits || fail("Attempting to propagate implicit arguments."_fu));
        ((args.size() >= argIdx) || fail(fu_STR{}));
        args.insert(argIdx, CallerNode(createRead(id), s_Type(type), getImplicit(id, type), fu_VEC<s_SolvedNode>{}));
    };
    s_Target getImplicit(const fu_STR& id, const s_Type& type)
    {
        fu_VEC<s_SolvedNode> args {};
        s_Target matched = tryMatch__mutargs(_scope, id, args, 0, type, s_Target{});
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
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, type);
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
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, type);
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
            const fu_VEC<s_Type>& arg_t = (overload.args ? overload.args : fail(fu_STR{}));
            for (int i = 0; (i < args.size()); i++)
                maybeCopyOrMove(([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.mutref(i); if (_) return _; } fail(fu_STR{}); }()), arg_t[i], true);

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
        return s_SolvedNode { "copy"_fu, int{}, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { node } }, s_TokenIdx(node.token), clear_refs(node.type), s_Target{} };
    };
    s_SolvedNode createMove(const s_SolvedNode& node, const bool nrvo)
    {
        return s_SolvedNode { (nrvo ? "nrvo"_fu : "move"_fu), int{}, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { node } }, s_TokenIdx(node.token), clear_refs(node.type), s_Target{} };
    };
    fu_VEC<s_SolvedNode> solveNodes(const fu_VEC<s_Node>& nodes, const s_Type& type)
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
                result.mutref(i) = solveNode(node, type);
                continue;
            };
            const int i0 = i;
            int i1 = nodes.size();
            for (int i = i0; (i < nodes.size()); i++)
            {
                const s_Node& node = nodes[i];
                if (!node)
                {
                    continue;
                };
                if (!isUnordered(node.kind))
                {
                    i1 = i;
                    break;
                };
                _here = (node.token ? node.token : _here);
                if ((node.kind != "fn"_fu))
                    result.mutref(i) = unorderedPrep(node);

            };
            
            {
                for (int i = i0; (i < i1); i++)
                {
                    const s_Node& node = nodes[i];
                    if ((node && (node.kind != "fn"_fu)))
                    {
                        _here = (node.token ? node.token : _here);
                        result.mutref(i) = unorderedSolve(node, result[i]);
                    };
                };
                for (int i = i0; (i < i1); i++)
                {
                    const s_Node& node = nodes[i];
                    if ((node.kind == "fn"_fu))
                    {
                        _here = (node.token ? node.token : _here);
                        result.mutref(i) = unorderedPrep(node);
                    };
                };
                for (int i = i0; (i < i1); i++)
                {
                    const s_Node& node = nodes[i];
                    if ((node.kind == "fn"_fu))
                    {
                        _here = (node.token ? node.token : _here);
                        result.mutref(i) = unorderedSolve(node, result[i]);
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
    s_SolverOutput solve_EVAL()
    {
        if (module.modid)
            Scope_import(0);
        else
            _scope = listGlobals(module);

        return s_SolverOutput { solveNode(parse, s_Type{}), s_Scope(_scope) };
    };
};

} // namespace

s_SolverOutput solve(const s_Node& parse, const s_Context& ctx, s_Module& module)
{
    return (sf_solve { parse, ctx, module }).solve_EVAL();
}


#endif
