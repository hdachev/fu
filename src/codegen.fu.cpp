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
#include <fu/vec/join.h>
#include <fu/vec/replace.h>
#include <fu/vec/slice.h>
#include <fu/vec/sort.h>
#include <utility>

struct s_ModuleStat;
struct s_LexerOutput;
struct s_Token;
struct s_Node;
struct s_ParserOutput;
struct s_TokenIdx;
struct s_Argument;
struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStats;
struct s_Overload;
struct s_Partial;
struct s_Scope;
struct s_ScopeItem;
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
const s_Struct& lookupStruct(const s_Type&, const s_Module&, const s_Context&);
s_Type clear_refs(const s_Type&);
bool type_isArray(const s_Type&);
s_Type tryClear_array(const s_Type&);
s_Type tryClear_slice(const s_Type&);
bool type_isMap(const s_Type&);
s_MapFields tryClear_map(const s_Type&);
bool is_never(const s_Type&);
bool is_bool(const s_Type&);
bool operator==(const s_ValueType&, const s_ValueType&);
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
    fu_VEC<s_Argument> args;
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

                                #ifndef DEFt_2_6__1030___28byte
                                #define DEFt_2_6__1030___28byte
inline std::byte if_last(const fu_STR& s)
{
    return ([&]() -> std::byte { if (s.size()) return s[(s.size() - 1)]; else return fu::Default<std::byte>::value; }());
}
                                #endif

                                #ifndef DEFt_2_1__1030__7_4_7SolvedNode
                                #define DEFt_2_1__1030__7_4_7SolvedNode
inline const s_SolvedNode& only(const fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

                                #ifndef DEF_M_STMT
                                #define DEF_M_STMT
inline const int M_STMT = (1 << 0);
                                #endif

                                #ifndef DEF_M_RETBOOL
                                #define DEF_M_RETBOOL
inline const int M_RETBOOL = (1 << 1);
                                #endif

                                #ifndef DEF_M_CONST
                                #define DEF_M_CONST
inline const int M_CONST = (1 << 2);
                                #endif

                                #ifndef DEF_M_RETVAL
                                #define DEF_M_RETVAL
inline const int M_RETVAL = (1 << 3);
                                #endif

                                #ifndef DEF_M_ARGUMENT
                                #define DEF_M_ARGUMENT
inline const int M_ARGUMENT = (1 << 4);
                                #endif

                                #ifndef DEF_M_CLOSURE
                                #define DEF_M_CLOSURE
inline const int M_CLOSURE = (1 << 5);
                                #endif

                                #ifndef DEF_M_FWDECL
                                #define DEF_M_FWDECL
inline const int M_FWDECL = (1 << 6);
                                #endif

                                #ifndef DEF_q_ref
                                #define DEF_q_ref
inline const int q_ref = (1 << 1);
                                #endif

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
inline const int q_mutref = (1 << 0);
                                #endif

                                #ifndef DEF_q_primitive
                                #define DEF_q_primitive
inline const int q_primitive = (1 << 4);
                                #endif

                                #ifndef DEF_q_trivial
                                #define DEF_q_trivial
inline const int q_trivial = (1 << 3);
                                #endif

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline const int q_rx_copy = (1 << 2);
                                #endif

                                #ifndef DEF_Trivial
                                #define DEF_Trivial
inline const int Trivial = (q_rx_copy | q_trivial);
                                #endif

                                #ifndef DEF_Primitive
                                #define DEF_Primitive
inline const int Primitive = (Trivial | q_primitive);
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
inline const s_Type t_byte = s_Type { s_ValueType { int(Primitive), 0, "byte"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_F_DESTRUCTOR
                                #define DEF_F_DESTRUCTOR
inline const int F_DESTRUCTOR = (1 << 31);
                                #endif

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline const int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_F_CLOSURE
                                #define DEF_F_CLOSURE
inline const int F_CLOSURE = (1 << 27);
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
inline const int FN_ARGS_BACK = FN_RET_BACK;
                                #endif

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline const int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
inline const s_Type t_void = s_Type { s_ValueType { 0, 0, "void"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_F_HAS_CLOSURE
                                #define DEF_F_HAS_CLOSURE
inline const int F_HAS_CLOSURE = (1 << 28);
                                #endif

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline const int F_MUT = (1 << 16);
                                #endif

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline const int F_ARG = (1 << 9);
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline const int LET_INIT = 1;
                                #endif

                                #ifndef DEF_F_POSTFIX
                                #define DEF_F_POSTFIX
inline const int F_POSTFIX = (1 << 3);
                                #endif

                                #ifndef DEF_q_unsigned
                                #define DEF_q_unsigned
inline const int q_unsigned = (1 << 8);
                                #endif

                                #ifndef DEF_q_floating_pt
                                #define DEF_q_floating_pt
inline const int q_floating_pt = (1 << 9);
                                #endif

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline const int LOOP_INIT = 0;
                                #endif

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline const int LOOP_COND = 1;
                                #endif

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline const int LOOP_POST = 2;
                                #endif

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline const int LOOP_BODY = 3;
                                #endif

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline const int LOOP_POST_COND = 4;
                                #endif

namespace {

struct sf_cpp_codegen
{
    const s_SolvedNode& root;
    const s_Scope& scope;
    const s_Module& module;
    const s_Context& ctx;
    fu_MAP<fu_STR, fu_STR> _libs {};
    fu_MAP<fu_STR, fu_STR> _tfwd {};
    fu_MAP<fu_STR, fu_STR> _ffwd {};
    fu_STR _tdef {};
    fu_STR _fdef {};
    fu_STR _indent = "\n"_fu;
    int _fnN {};
    int _clsrN {};
    int _faasN {};
    int _hasMain {};
    int _isModuleSpecs {};
    s_Overload GET(const s_Target& target, const s_Module& module, const s_Context& ctx)
    {
        ((target.index > 0) || fu::fail());
        const s_Module& m = ((target.modid == module.modid) ? module : ctx.modules[target.modid]);
        return s_Overload(m.out.solve.scope.overloads[(target.index - 1)]);
    };
    [[noreturn]] fu::never fail(const fu_STR& reason)
    {
        fu::fail(reason);
    };
    void include(const fu_STR& lib)
    {
        if (!fu::has(_libs, lib))
            (_libs.upsert(lib) = (("#include "_fu + lib) + "\n"_fu));

    };
    fu_STR typeAnnot(const s_ValueType& value)
    {
        return typeAnnot(s_Type { s_ValueType(value), s_Lifetime{}, s_Effects{} }, 0);
    };
    fu_STR typeAnnot(const s_Type& type, const int mode)
    {
        fu_STR fwd = typeAnnotBase(type);
        if (((mode & M_RETVAL) && (type.value.canon == "never"_fu) && !(mode & M_CLOSURE)))
            return ("[[noreturn]] "_fu + fwd);

        if ((type.value.quals & q_ref))
        {
            if (fu::lmatch(fwd, "fu::view"_fu))
                return fwd;

            if ((type.value.quals & q_mutref))
                return (fwd + "&"_fu);

            if ((type.value.quals & q_primitive))
                return ((((mode & M_ARGUMENT) | (mode & M_CONST)) && !(mode & M_FWDECL)) ? ("const "_fu + fwd) : fu_STR(fwd));

            return (("const "_fu + fwd) + "&"_fu);
        };
        if (((mode & M_CONST) && (type.value.quals & q_trivial)))
            return ("const "_fu + fwd);

        if (((mode & M_ARGUMENT) && !(type.value.quals & q_primitive)))
            return (fwd + "&&"_fu);

        return fwd;
    };
    fu_STR typeAnnotBase(const s_Type& type)
    {
        const fu_STR& c = type.value.canon;
        if ((type.value.quals & q_primitive))
        {
            if ((c == "i32"_fu))
                return "int"_fu;

            if ((c == "i16"_fu))
                return "short"_fu;

            if ((c == "bool"_fu))
                return "bool"_fu;

            if ((c == "f32"_fu))
                return "float"_fu;

            if ((c == "f64"_fu))
                return "double"_fu;

            include("<cstdint>"_fu);
            if ((c == "i8"_fu))
                return "int8_t"_fu;

            if ((c == "i64"_fu))
                return "int64_t"_fu;

            if ((c == "u8"_fu))
                return "uint8_t"_fu;

            if ((c == "u16"_fu))
                return "uint16_t"_fu;

            if ((c == "u32"_fu))
                return "uint32_t"_fu;

            if ((c == "u64"_fu))
                return "uint64_t"_fu;

            if ((c == "byte"_fu))
                return "std::byte"_fu;

            fail("Unknown primitive."_fu);
        };
        if ((c == "void"_fu))
            return "void"_fu;

        if ((c == "never"_fu))
            return annotateNever();

        s_Type arrayItem = tryClear_array(type);
        if (arrayItem)
        {
            if ((arrayItem.value == t_byte.value))
                return annotateString();

            fu_STR itemAnnot = typeAnnot(arrayItem, 0);
            include("<fu/vec.h>"_fu);
            return (("fu_VEC<"_fu + itemAnnot) + ">"_fu);
        };
        s_Type sliceItem = tryClear_slice(type);
        if (sliceItem)
        {
            fu_STR itemAnnot = typeAnnot(sliceItem, 0);
            include("<fu/view.h>"_fu);
            if ((type.value.quals & q_mutref))
                return (("fu::view_mut<"_fu + itemAnnot) + ">"_fu);
            else
                return (("fu::view<"_fu + itemAnnot) + ">"_fu);

        };
        s_MapFields mapPair = tryClear_map(type);
        if (mapPair)
        {
            fu_STR k = typeAnnot(mapPair.key, 0);
            fu_STR v = typeAnnot(mapPair.value, 0);
            include("<fu/map.h>"_fu);
            return (((("fu_MAP<"_fu + k) + ", "_fu) + v) + ">"_fu);
        };
        const s_Struct& tdef = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupStruct(type, module, ctx); if (_) return _; } fail(("TODO: "_fu + type.value.canon)); }());
        fu_STR id = structId(type);
        if (!fu::has(_tfwd, c))
        {
            (_tfwd.upsert(c) = (("\nstruct "_fu + id) + ";"_fu));
            (_tdef += declareStruct(type, tdef));
        };
        return id;
    };
    fu_STR structId(const s_Type& t)
    {
        for (int i = 0; (i < t.value.canon.size()); i++)
        {
            const std::byte x = t.value.canon[i];
            if ((((x >= std::byte('a')) && (x <= std::byte('z'))) || ((x >= std::byte('A')) && (x <= std::byte('Z'))) || (x == std::byte('_'))))
            {
                return ("s_"_fu + fu::slice(t.value.canon, i));
                break;
            };
        };
        fail((("Bad structId: `"_fu + t.value.canon) + "`."_fu));
    };
    fu_STR declareStruct(const s_Type& t, const s_Struct& s)
    {
        fu_STR id = structId(t);
        fu_STR def = (((((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id) + "\nstruct "_fu) + id) + "\n{"_fu);
        fu_STR indent = "\n    "_fu;
        if ((s.flags & F_DESTRUCTOR))
        {
            (def += "\n    struct Data\n    {"_fu);
            (indent += "    "_fu);
        };
        const fu_VEC<s_StructField>& fields = s.fields;
        for (int i = 0; (i < fields.size()); i++)
        {
            const s_StructField& field = fields[i];
            (def += ((((indent + typeAnnot(field.type)) + " "_fu) + ID(field.id)) + ";"_fu));
        };
        if ((s.flags & F_DESTRUCTOR))
        {
            (def += "\n    };"_fu);
            (def += "\n"_fu);
            (def += "\n    Data data;"_fu);
            (def += "\n    bool dtor = false;"_fu);
            (def += "\n"_fu);
            (def += (("\n    ~"_fu + id) + "() noexcept;"_fu));
            (def += (("\n    inline "_fu + id) + "(Data data) noexcept : data(data) {};"_fu));
            (def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = delete;"_fu));
            (def += (((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "&) = delete;"_fu));
            (def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) noexcept;"_fu));
            (def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) noexcept;"_fu));
        };
        (def += "\n    explicit operator bool() const noexcept"_fu);
        (def += "\n    {"_fu);
        (def += "\n        return false"_fu);
        for (int i = 0; (i < fields.size()); i++)
            (def += (("\n            || "_fu + ((s.flags & F_DESTRUCTOR) ? "data."_fu : fu_STR{})) + ID(fields[i].id)));

        (def += "\n        ;"_fu);
        (def += "\n    }"_fu);
        return (def + "\n};\n                                #endif\n"_fu);
    };
    fu_STR collectDedupes(const fu_MAP<fu_STR, fu_STR>& dedupes)
    {
        fu_STR out {};
        fu_VEC<fu_STR> keys { dedupes.m_keys };
        fu::sort(keys);
        for (int i = 0; (i < keys.size()); i++)
            (out += dedupes[keys.mutref(i)]);

        return out;
    };
    void cgSpecs()
    {
        _isModuleSpecs++;
        const fu_MAP<fu_STR, s_SolvedNode>& specs = module.out.specs;
        const fu_VEC<fu_STR>& keys = specs.m_keys;
        for (int i = 0; (i < keys.size()); i++)
        {
            const fu_STR& k = keys[i];
            if ((k[0] == std::byte('0')))
            {
                continue;
            };
            const s_SolvedNode& s = specs[k];
            if (s.target)
            {
                fu_STR dedupe {};
                for (int i = 0; (i < k.size()); i++)
                {
                    const std::byte c = k[i];
                    if ((((c >= std::byte('0')) && (c <= std::byte('9'))) || ((c >= std::byte('a')) && (c <= std::byte('z'))) || ((c >= std::byte('A')) && (c <= std::byte('Z')))))
                        (dedupe += c);
                    else
                        (dedupe += std::byte('_'));

                };
                (_fdef += (((((("\n                                #ifndef DEFt_"_fu + dedupe) + "\n                                #define DEFt_"_fu) + dedupe) + "\n"_fu) + cgNode(s, 0)) + "\n                                #endif\n"_fu));
            };
        };
        _isModuleSpecs--;
    };
    fu_STR cgRoot(const s_SolvedNode& root)
    {
        cgSpecs();
        fu_STR src = cgStatements(root.items);
        fu_STR main = cgMain();
        fu_STR header = ((((collectDedupes(_libs) + collectDedupes(_tfwd)) + collectDedupes(_ffwd)) + _tdef) + ([&]() -> fu_STR { if (_fdef) return (("\n#ifndef FU_NO_FDEFs\n"_fu + _fdef) + "\n#endif\n"_fu); else return fu_STR{}; }()));
        return ((header + src) + main);
    };
    fu_STR cgMain()
    {
        if (!_hasMain)
            return fu_STR{};

        if ((_hasMain != 2))
            return "\n\nint main() { return fu_MAIN(); }\n"_fu;

        annotateString();
        return ((((((((("\n\nint main(int argc, char* argv[])"_fu + "\n{"_fu) + "\n    fu_VEC<fu_STR> args;"_fu) + "\n    args.reserve(argc);"_fu) + "\n"_fu) + "\n    for (int i = 0; i < argc; i++)"_fu) + "\n        args.push(fu_TO_STR(argv[i]));"_fu) + "\n"_fu) + "\n    return fu_MAIN(static_cast<fu_VEC<fu_STR>&&>(args));"_fu) + "\n}\n"_fu);
    };
    fu_STR ID(const fu_STR& id)
    {
        if ((id == "this"_fu))
            return "tHis"_fu;

        if ((id == "default"_fu))
            return "dEfault"_fu;

        if ((id == "template"_fu))
            return "tEmplate"_fu;

        if ((id == "catch"_fu))
            return "cAtch"_fu;

        if ((id == "not"_fu))
            return "nOt"_fu;

        if ((id == "and"_fu))
            return "aNd"_fu;

        if ((id == "or"_fu))
            return "oR"_fu;

        if ((id == "int"_fu))
            return "iNt"_fu;

        if ((id == "char"_fu))
            return "cHar"_fu;

        if ((id == "short"_fu))
            return "sHort"_fu;

        if ((id == "long"_fu))
            return "lOng"_fu;

        if ((id == "signed"_fu))
            return "sIgned"_fu;

        if ((id == "unsigned"_fu))
            return "uNsigned"_fu;

        if ((id == "assert"_fu))
            return "aSsert"_fu;

        return fu_STR(id);
    };
    fu_STR cgStatements(const fu_VEC<s_SolvedNode>& nodes)
    {
        fu_STR src {};
        fu_VEC<fu_STR> lines = cgNodes(nodes, M_STMT);
        for (int i = 0; (i < lines.size()); i++)
        {
            const fu_STR& line = lines[i];
            if (line)
                (src += ((_indent + line) + ((if_last(line) == std::byte(';')) ? std::byte('\n') : std::byte(';'))));

        };
        return src;
    };
    fu_STR blockWrap(const fu_VEC<s_SolvedNode>& nodes, const bool skipCurlies)
    {
        fu_STR indent0 { _indent };
        (_indent += "    "_fu);
        fu_STR src = cgStatements(nodes);
        if ((!skipCurlies || (nodes.size() != 1) || ((nodes[0].kind != "return"_fu) && (nodes[0].kind != "call"_fu))))
            src = ((((indent0 + "{"_fu) + src) + indent0) + "}"_fu);

        _indent = indent0;
        return src;
    };
    fu_STR blockWrapSubstatement(const s_SolvedNode& node)
    {
        return ((node.kind != "block"_fu) ? blockWrap(fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { node } }, true) : ((node.items.size() == 1) ? blockWrapSubstatement(node.items[0]) : cgBlock(node)));
    };
    fu_STR cgBlock(const s_SolvedNode& block)
    {
        return blockWrap(block.items, false);
    };
    fu_STR cgParens(const s_SolvedNode& node)
    {
        fu_VEC<fu_STR> items = cgNodes(node.items, 0);
        if (!items.size())
            return "(false /*empty parens*/)"_fu;

        if ((items.size() == 1))
            return std::move(items[0]);

        fu_STR src = "("_fu;
        for (int i = 0; (i < items.size()); i++)
        {
            if (i)
                (src += ", "_fu);

            if ((i < (items.size() - 1)))
                (src += "(void)"_fu);

            (src += items[i]);
        };
        return (src + ")"_fu);
    };
    fu_STR cgFnSignature(const s_SolvedNode& fn)
    {
        const fu_VEC<s_SolvedNode>& items = fn.items;
        const s_SolvedNode& ret = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() + FN_RET_BACK)]; if (_) return _; } fail(fu_STR{}); }());
        const int closure = ([&]() -> int { if (!!_clsrN) return (fn.flags & F_CLOSURE); else return int{}; }());
        fu_STR annot = typeAnnot((ret.type ? ret.type : fail(fu_STR{})), (M_RETVAL | (closure ? int(M_CLOSURE) : 0)));
        fu_STR id { fn.value };
        if (((id == "main"_fu) && !closure))
        {
            _hasMain = ((fn.items.size() + FN_ARGS_BACK) ? 2 : 1);
            id = "fu_MAIN"_fu;
        };
        fu_STR src = (closure ? (("const auto& "_fu + id) + " = [&]("_fu) : (((annot + " "_fu) + id) + "("_fu));
        if (!hasIdentifierChars(id))
            src = (((annot + " operator"_fu) + id) + "("_fu);

        if ((_isModuleSpecs && !closure))
            src = ("inline "_fu + src);

        for (int i = 0; (i < (items.size() + FN_ARGS_BACK)); i++)
        {
            if (i)
                (src += ", "_fu);

            (src += binding(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(fu_STR{}); }()), false, false));
        };
        (src += (closure ? (") -> "_fu + annot) : ")"_fu));
        return src;
    };
    void ensureFwdDecl(const s_Target& target)
    {
        s_Overload overload = GET(target, module, ctx);
        if (((overload.kind != "fn"_fu) || (overload.name == "main"_fu)))
            return;

        fu_STR ffwdKey = ((target.modid + "#"_fu) + target.index);
        if (fu::has(_ffwd, ffwdKey))
            return;

        const fu_STR& id = (overload.name ? overload.name : fail(fu_STR{}));
        const s_Type& ret = (overload.type ? overload.type : fail(fu_STR{}));
        fu_STR annot = typeAnnot(ret, M_RETVAL);
        const bool isOp = !hasIdentifierChars(id);
        fu_STR src = (isOp ? (((("\n"_fu + annot) + " operator"_fu) + id) + "("_fu) : (((("\n"_fu + annot) + " "_fu) + id) + "("_fu));
        const fu_VEC<s_Argument>& args = overload.args;
        for (int i = 0; (i < args.size()); i++)
        {
            if (i)
                (src += ", "_fu);

            (src += typeAnnot(args[i].type, (M_ARGUMENT | M_FWDECL)));
        };
        (src += ");"_fu);
        (_ffwd.upsert(ffwdKey) = src);
        return;
    };
    fu_STR try_cgFnAsStruct(const s_SolvedNode& fn)
    {
        const s_SolvedNode& body = fn.items[(fn.items.size() + FN_BODY_BACK)];
        if ((!body || (body.kind != "block"_fu)))
            return fu_STR{};

        const fu_VEC<s_SolvedNode>& items = body.items;
        bool hasClosuresInHeader = false;
        int end = 0;
        for (int i = 0; (i < items.size()); i++)
        {
            end = i;
            const s_SolvedNode& item = items[i];
            if ((item.kind == "fn"_fu))
            {
                if ((item.flags & F_CLOSURE))
                    hasClosuresInHeader = true;

            }
            else if (((item.kind != "let"_fu) && (item.kind != "struct"_fu)))
            {
                break;
            };
        };
        if (!hasClosuresInHeader)
            return fu_STR{};

        fu_STR evalName = (fn.value + "_EVAL"_fu);
        s_SolvedNode restFn = s_SolvedNode { "fn"_fu, (fn.flags | F_CLOSURE), fu_STR(evalName), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { fn.items[(fn.items.size() - 2)], s_SolvedNode { "block"_fu, int{}, fu_STR{}, fu::slice(items, end, items.size()), s_TokenIdx(fn.token), s_Type(t_void), s_Target{} } } }, s_TokenIdx(fn.token), s_Type(t_void), s_Target{} };
        fu_VEC<s_SolvedNode> head = ((fu::slice(fn.items, 0, (fn.items.size() + FN_ARGS_BACK)) + fu::slice(items, 0, end)) + fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { restFn } });
        ((_clsrN == 0) || fail(fu_STR{}));
        _clsrN--;
        fu_STR structName = ("sf_"_fu + fn.value);
        fu_STR src = ((("\nnamespace {\n\nstruct "_fu + structName) + blockWrap(head, false)) + ";\n"_fu);
        
        {
            fu_VEC<fu_STR> args {};
            for (int i = 0; (i < (fn.items.size() + FN_ARGS_BACK)); i++)
            {
                const s_SolvedNode& argNode = fn.items[i];
                const s_Type& argType = argNode.type;
                const fu_STR& arg = argNode.value;
                args.push(((argType.value.quals & q_ref) ? fu_STR(arg) : cgSteal(arg)));
            };
            (src += "\n} // namespace\n\n"_fu);
            (src += cgFnSignature(fn));
            (src += (((((("\n{\n    return ("_fu + structName) + " { "_fu) + fu::join(args, ", "_fu)) + " })."_fu) + evalName) + "();\n}\n\n"_fu));
        };
        if (fu::has(_fdef, (fn.value ? fn.value : fail(fu_STR{}))))
            ensureFwdDecl(fn.target);

        _clsrN++;
        return src;
    };
    fu_STR cgFn(const s_SolvedNode& fn)
    {
        if (!fn.items.size())
            return fu_STR{};

        if (((_faasN == 0) && (fn.flags & F_HAS_CLOSURE)))
        {
            _faasN++;
            fu_STR src = try_cgFnAsStruct(fn);
            _faasN--;
            if (src)
            {
                (_fdef += src);
                return fu_STR{};
            };
        };
        const int f0 = _fnN;
        const int c0 = _clsrN;
        fu_STR indent0 { _indent };
        _fnN++;
        if ((fn.flags & F_CLOSURE))
            _clsrN++;

        const fu_VEC<s_SolvedNode>& items = fn.items;
        const s_SolvedNode& body = items[(items.size() + FN_BODY_BACK)];
        if (!body)
            return (("\n// fn "_fu + fn.value) + " has no body.\n"_fu);

        if (!(fn.flags & F_CLOSURE))
            _indent = "\n"_fu;

        fu_STR src = cgFnSignature(fn);
        if ((!(fn.flags & F_CLOSURE) && fu::has(_fdef, (fn.value ? fn.value : fail(fu_STR{})))))
            ensureFwdDecl(fn.target);

        if ((body.kind == "block"_fu))
            (src += cgBlock(body));
        else
            (src += blockWrap(fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { body } }, false));

        _fnN = f0;
        _clsrN = c0;
        _indent = indent0;
        if ((fn.flags & F_DESTRUCTOR))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[0]; if (_) return _; } fail(fu_STR{}); }());
            fu_STR id = structId(head.type);
            (src += (((("\n\n"_fu + id) + "::~"_fu) + id) + "() noexcept"_fu));
            (src += "\n{"_fu);
            (src += "\n    if (!dtor)"_fu);
            (src += "\n    {"_fu);
            (src += "\n        dtor = true;"_fu);
            (src += "\n        free(*this);"_fu);
            (src += "\n    }"_fu);
            (src += "\n}"_fu);
            include("<cassert>"_fu);
            include("<utility>"_fu);
            (src += (((((("\n\n"_fu + id) + "::"_fu) + id) + "("_fu) + id) + "&& src) noexcept"_fu));
            (src += "\n    : data(std::move(src.data))"_fu);
            (src += "\n{"_fu);
            (src += "\n    assert(!src.dtor);"_fu);
            (src += "\n    dtor = src.dtor;"_fu);
            (src += "\n    src.dtor = true;"_fu);
            (src += "\n}"_fu);
            include("<cstring>"_fu);
            (src += (((((("\n\n"_fu + id) + "& "_fu) + id) + "::operator=("_fu) + id) + "&& src) noexcept"_fu));
            (src += "\n{"_fu);
            (src += (("\n    char temp[sizeof("_fu + id) + ")];"_fu));
            (src += "\n    char* a = (char*) this;"_fu);
            (src += "\n    char* b = (char*) &src;"_fu);
            (src += "\n"_fu);
            (src += (("\n    std::memcpy (temp, a, sizeof("_fu + id) + "));"_fu));
            (src += (("\n    std::memmove(a,    b, sizeof("_fu + id) + "));"_fu));
            (src += (("\n    std::memcpy (b, temp, sizeof("_fu + id) + "));"_fu));
            (src += "\n"_fu);
            (src += "\n    return *this;"_fu);
            (src += "\n}"_fu);
        };
        if (((fn.flags & F_CLOSURE) || _isModuleSpecs))
            return src;

        (_fdef += (("\n"_fu + src) + "\n"_fu));
        return fu_STR{};
    };
    fu_STR binding(const s_SolvedNode& node, const bool doInit, const bool forceMut)
    {
        const fu_STR& id = (node.value ? node.value : fail(fu_STR{}));
        fu_STR annot = typeAnnot(node.type, (((((node.flags & F_MUT) == 0) && !forceMut) ? int(M_CONST) : 0) | (((node.flags & F_ARG) == 0) ? 0 : int(M_ARGUMENT))));
        fu_STR head = (((annot ? annot : fail(fu_STR{})) + " "_fu) + ID(id));
        s_SolvedNode init = (node.items ? s_SolvedNode(node.items[LET_INIT]) : s_SolvedNode {  });
        if ((!doInit || (node.flags & F_ARG)))
            return head;

        if (init)
        {
            if (((init.kind == "copy"_fu) && !(node.type.value.quals & q_ref)))
            {
                fu_STR expr = cgNode(only(init.items), 0);
                if ((node.type.value.quals & q_primitive))
                    return ((head + " = "_fu) + expr);

                return (((head + " { "_fu) + expr) + " }"_fu);
            };
            if (((init.kind == "definit"_fu) && !(init.type.value.quals & q_ref) && (init.type.value == node.type.value)))
                return (head + " {}"_fu);

            return ((head + " = "_fu) + cgNode(init, 0));
        };
        return (head + " {}"_fu);
    };
    fu_STR cgLet(const s_SolvedNode& node)
    {
        return binding(node, true, false);
    };
    fu_STR cgGlobal(const s_SolvedNode& node)
    {
        fu_STR src = cgLet(node);
        src = fu::replace(src, "([&]("_fu, "([]("_fu);
        if (fu::lmatch(src, "const "_fu))
            src = fu::slice(src, 6);

        (_fdef += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\ninline const "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu));
        return fu_STR{};
    };
    void cgForeignGlobal(const s_Target& target)
    {
        fu_STR key = ((target.modid + "#"_fu) + target.index);
        if (fu::has(_ffwd, key))
            return;

        (_ffwd.upsert(key) = fu_STR{});
        s_Overload o = GET(target, module, ctx);
        cgGlobal(o.constant);
    };
    fu_STR cgReturn(const s_SolvedNode& node)
    {
        if (node.items)
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(fu_STR{}); }());
            fu_STR src = cgNode(head, 0);
            if (is_never(head.type))
                return src;

            return ("return "_fu + src);
        };
        return "return"_fu;
    };
    fu_STR cgJump(const s_SolvedNode& node)
    {
        if (node.value)
            return ((("goto L_"_fu + node.value) + "_"_fu) + node.kind[0]);

        return fu_STR(node.kind);
    };
    fu_STR cgStringLiteral(const s_SolvedNode& node)
    {
        annotateString();
        fu_STR esc {};
        for (int i = 0; (i < node.value.size()); i++)
        {
            const std::byte c = node.value[i];
            if ((c == std::byte('\n')))
                (esc += "\\n"_fu);
            else if ((c == std::byte('\r')))
                (esc += "\\r"_fu);
            else if ((c == std::byte('\t')))
                (esc += "\\t"_fu);
            else if ((c == std::byte('\v')))
                (esc += "\\v"_fu);
            else if ((c == std::byte('\\')))
                (esc += "\\\\"_fu);
            else if ((c == std::byte('"')))
                (esc += "\\\""_fu);
            else
                (esc += c);

        };
        return (("\""_fu + esc) + "\"_fu"_fu);
    };
    fu_STR cgCharLiteral(const s_SolvedNode& node)
    {
        fu_STR esc {};
        for (int i = 0; (i < node.value.size()); i++)
        {
            const std::byte c = node.value[i];
            if ((c == std::byte('\n')))
                (esc += "\\n"_fu);
            else if ((c == std::byte('\r')))
                (esc += "\\r"_fu);
            else if ((c == std::byte('\t')))
                (esc += "\\t"_fu);
            else if ((c == std::byte('\v')))
                (esc += "\\v"_fu);
            else if ((c == std::byte('\\')))
                (esc += "\\\\"_fu);
            else if ((c == std::byte('\'')))
                (esc += "\\'"_fu);
            else
                (esc += c);

        };
        return (("std::byte('"_fu + esc) + "')"_fu);
    };
    fu_STR cgArrayLiteral(const s_SolvedNode& node, const int mode)
    {
        if (node.target)
            return cgCall(node, mode);

        fu_VEC<fu_STR> items = cgNodes(node.items, 0);
        if (!items.size())
            return cgDefault(node.type);

        s_Type itemType = ([&]() -> s_Type { { s_Type _ = tryClear_array(node.type); if (_) return _; } fail(fu_STR{}); }());
        fu_STR itemAnnot = typeAnnot(itemType, 0);
        fu_STR arrayAnnot = typeAnnot(node.type, 0);
        return (((((((arrayAnnot + " { "_fu) + arrayAnnot) + "::INIT<"_fu) + items.size()) + "> { "_fu) + fu::join(items, ", "_fu)) + " } }"_fu);
    };
    fu_STR cgDefaultInit(const s_SolvedNode& node, const int mode)
    {
        return cgArrayLiteral(node, mode);
    };
    bool hasNonIdentifierChars(const fu_STR& id)
    {
        for (int i = 0; (i < id.size()); i++)
        {
            const std::byte c = id[i];
            if (((c == std::byte('_')) || ((c >= std::byte('a')) && (c <= std::byte('z'))) || ((c >= std::byte('A')) && (c <= std::byte('Z'))) || ((c >= std::byte('0')) && (c <= std::byte('9')))))
            {
            }
            else
                return true;

        };
        return false;
    };
    fu_STR cgCall(const s_SolvedNode& node, const int mode)
    {
        s_Overload target = ([&]() -> s_Overload { { s_Overload _ = GET(node.target, module, ctx); if (_) return _; } fail(fu_STR{}); }());
        fu_VEC<fu_STR> items = cgNodes(node.items, 0);
        if (((target.kind == "__native"_fu) && target.tEmplate.node.items))
        {
            fu_STR id { target.tEmplate.node.items[0].value };
            if ((target.tEmplate.node.items.size() > 1))
            {
                include(id);
                id = target.tEmplate.node.items[1].value;
            };
            if ((id.mutref(0) == std::byte('.')))
            {
                if ((items.size() > 1))
                    return ((((items.mutref(0) + id) + "("_fu) + fu::join(fu::slice(items, 1), ", "_fu)) + ")"_fu);

                return (items.mutref(0) + id);
            };
            if (items)
            {
                if (hasIdentifierChars(id))
                    return (((id + "("_fu) + fu::join(items, ", "_fu)) + ")"_fu);

                return (((((("("_fu + items.mutref(0)) + " "_fu) + id) + " "_fu) + items.mutref(1)) + ")"_fu);
            };
            return id;
        };
        if (((target.kind == "defctor"_fu) || (target.kind == "type"_fu)))
        {
            const s_Type& head = (target.type ? target.type : fail(fu_STR{}));
            const s_Struct& type = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupStruct(head, module, ctx); if (_) return _; } fail(fu_STR{}); }());
            fu_STR id = typeAnnotBase(head);
            fu_STR open = " { "_fu;
            fu_STR close = " }"_fu;
            if ((type.flags & F_DESTRUCTOR))
            {
                open = ((" { "_fu + id) + "::Data { "_fu);
                close = " }}"_fu;
            };
            return (((id + open) + fu::join(items, ", "_fu)) + close);
        };
        const fu_STR& id = (target.name ? target.name : fail(fu_STR{}));
        if ((target.kind == "global"_fu))
        {
            if ((node.target.modid != module.modid))
                cgForeignGlobal(node.target);

            return ID(id);
        };
        if (((target.kind == "var"_fu) || (target.kind == "arg"_fu) || (target.kind == "ref"_fu)))
            return ID(id);

        if ((target.kind == "field"_fu))
        {
            fu_STR sep = "."_fu;
            const s_Struct& parent = lookupStruct(node.items[0].type, module, ctx);
            if ((parent.flags & F_DESTRUCTOR))
                sep = ".data."_fu;

            return ((items.mutref(0) + sep) + ID(id));
        };
        if ((node.target.modid && (node.target.modid != module.modid)))
            ensureFwdDecl(node.target);

        if (hasNonIdentifierChars(id))
        {
            const fu_VEC<s_SolvedNode>& nodes = (node.items ? node.items : fail(fu_STR{}));
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = nodes[0]; if (_) return _; } fail(fu_STR{}); }());
            if ((items.size() == 1))
                return ((node.flags & F_POSTFIX) ? (items.mutref(0) + id) : (id + items.mutref(0)));

            if ((items.size() == 2))
            {
                if ((id == "[]"_fu))
                {
                    if ((node.type.value.quals & q_mutref))
                        return (((items.mutref(0) + ".mutref("_fu) + items.mutref(1)) + ")"_fu);

                    return (((items.mutref(0) + "["_fu) + items.mutref(1)) + "]"_fu);
                };
                if ((id == "="_fu))
                {
                    if (((head.kind == "call"_fu) && (head.value == "[]"_fu) && (head.items.size() == 2)))
                    {
                        if (type_isMap(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(fu_STR{}); }()).type))
                            return (((((("("_fu + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(fu_STR{}); }()), 0)) + ".upsert("_fu) + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[1]; if (_) return _; } fail(fu_STR{}); }()), 0)) + ") = "_fu) + items.mutref(1)) + ")"_fu);

                    };
                };
                if ((id == "||="_fu))
                {
                    if (((head.kind == "call"_fu) && (head.value == "[]"_fu) && (head.items.size() == 2)))
                    {
                        if (type_isMap(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(fu_STR{}); }()).type))
                            items.mutref(0) = (((cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(fu_STR{}); }()), 0) + ".upsert("_fu) + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[1]; if (_) return _; } fail(fu_STR{}); }()), 0)) + ")"_fu);

                    };
                    fu_STR annot = typeAnnot(head.type, 0);
                    return (((((((("([&]("_fu + annot) + " _) -> "_fu) + annot) + " { if (!_) _ = "_fu) + items.mutref(1)) + "; return _; } ("_fu) + items.mutref(0)) + "))"_fu);
                };
                if ((id == "+="_fu))
                {
                    if ((type_isArray(head.type) && isFieldChain(node.items[0])))
                    {
                        if (((node.items[1].value == "+"_fu) && (node.items[1].type.value.canon == head.type.value.canon)))
                            return cgAppend(node, items[0]);

                    };
                };
                if ((mode & M_STMT))
                    return ((((items.mutref(0) + " "_fu) + id) + " "_fu) + items.mutref(1));
                else
                    return (((((("("_fu + items.mutref(0)) + " "_fu) + id) + " "_fu) + items.mutref(1)) + ")"_fu);

            };
        };
        if (((id == "CLONE"_fu) && (items.size() == 1)))
            return cgClone(node.type, items[0]);

        if (((id == "STEAL"_fu) && (items.size() == 1)))
            return cgSteal(items[0]);

        if (((id == "SWAP"_fu) && (items.size() == 2)))
            return cgSwap(items);

        if ((id == "println"_fu))
            return cgPrint(items);

        ((id != "__native"_fu) || fu::fail());
        return (((ID(id) + "("_fu) + fu::join(items, ", "_fu)) + ")"_fu);
    };
    fu_STR cgAppend(const s_SolvedNode& node, const fu_STR& into)
    {
        fu_STR src = "("_fu;
        cgAppend_visit(node.type.value.canon, into, node.items[1], src);
        (src += ")"_fu);
        return src;
    };
    void cgAppend_visit(const fu_STR& canon, const fu_STR& into, const s_SolvedNode& stuff, fu_STR& src)
    {
        if (((stuff.kind != "call"_fu) || (stuff.value != "+"_fu) || (stuff.type.value.canon != canon) || (stuff.items.size() != 2)))
        {
            fu_STR val = cgNode(stuff, 0);
            if ((src.size() > 1))
                (src += ", "_fu);

            (src += ((into + " += "_fu) + val));
        }
        else
        {
            cgAppend_visit(canon, into, stuff.items[0], src);
            cgAppend_visit(canon, into, stuff.items[1], src);
        };
    };
    fu_STR cgPrint(const fu_VEC<fu_STR>& items)
    {
        include("<iostream>"_fu);
        fu_STR src = "(std::cout"_fu;
        for (int i = 0; (i < items.size()); i++)
            (src += (" << "_fu + items[i]));

        (src += " << '\\n')"_fu);
        return src;
    };
    fu_STR annotateString()
    {
        include("<fu/str.h>"_fu);
        return "fu_STR"_fu;
    };
    fu_STR annotateNever()
    {
        include("<fu/never.h>"_fu);
        return "fu::never"_fu;
    };
    fu_STR cgLiteral(const s_SolvedNode& node)
    {
        fu_STR src { node.value };
        if ((node.type.value.quals & q_unsigned))
        {
            if (!fu::has(src, std::byte('u')))
                (src += std::byte('u'));

        };
        if ((node.type.value.quals & q_floating_pt))
        {
            if (!fu::has(src, std::byte('.')))
                (src += ".0"_fu);

            if ((node.type.value.canon == "f32"_fu))
            {
                if (fu::has(src, std::byte('x')))
                    src = (("float("_fu + src) + ")"_fu);
                else
                    (src += "f"_fu);

            }
            else if ((node.type.value.canon != "f64"_fu))
                fu::fail();

        };
        if (fu::lmatch(src, "0o"_fu))
            src.splice(1, 1);

        return src;
    };
    fu_STR cgEmpty()
    {
        return fu_STR{};
    };
    fu_STR cgIf(const s_SolvedNode& node, const int mode)
    {
        const s_SolvedNode& n0 = node.items[0];
        const s_SolvedNode& n1 = node.items[1];
        const s_SolvedNode& n2 = node.items[2];
        const bool stmt = !!(mode & M_STMT);
        const auto& blockWrap_unlessIf = [&](const s_SolvedNode& node) -> fu_STR
        {
            return ((node.kind == "if"_fu) ? (" "_fu + cgNode(node, M_STMT)) : blockWrapSubstatement(node));
        };
        fu_STR cond = ([&]() -> fu_STR { if (n0) return cgNode(n0, M_RETBOOL); else return fu_STR{}; }());
        fu_STR cons = ([&]() -> fu_STR { if (n1) return (stmt ? blockWrapSubstatement(n1) : cgNode(n1, 0)); else return fu_STR{}; }());
        fu_STR alt = ([&]() -> fu_STR { if (n2) return (stmt ? blockWrap_unlessIf(n2) : cgNode(n2, 0)); else return fu_STR{}; }());
        if (stmt)
            return (((("if ("_fu + cond) + ")"_fu) + cons) + (alt ? ((_indent + "else"_fu) + alt) : fu_STR{}));

        if ((cons && alt))
            return (((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu);

        if (cons)
            return (((("("_fu + cond) + " && "_fu) + cons) + ")"_fu);

        if (alt)
            return (((("("_fu + cond) + " || "_fu) + alt) + ")"_fu);

        fail("TODO"_fu);
    };
    fu_STR cgDefault(const s_Type& type)
    {
        ((type.value.quals & q_mutref) && fail("Cannot definit mutrefs."_fu));
        if ((type.value.quals & q_ref))
        {
            include("<fu/default.h>"_fu);
            return (("fu::Default<"_fu + typeAnnot(clear_refs(type), 0)) + ">::value"_fu);
        };
        return (typeAnnot(type, 0) + "{}"_fu);
    };
    fu_STR cgAnd(const s_SolvedNode& node)
    {
        const s_Type& type = node.type;
        if (!is_bool(type))
        {
            const fu_VEC<s_SolvedNode>& items = node.items;
            const bool retSecondLast = is_never(items[(items.size() - 1)].type);
            const int condEnd = (retSecondLast ? (items.size() - 2) : (items.size() - 1));
            fu_STR src {};
            if (condEnd)
            {
                (src += "if ("_fu);
                for (int i = 0; (i < condEnd); i++)
                {
                    const s_SolvedNode& item = items[i];
                    if (i)
                        (src += " && "_fu);

                    (src += cgNode(item, M_RETBOOL));
                };
                (src += ") "_fu);
            };
            fu_STR tail = cgNode(items[condEnd], 0);
            if (retSecondLast)
            {
                (src += (((("{ "_fu + typeAnnot(type, 0)) + " _ = "_fu) + tail) + "; "_fu));
                (src += "if (!_) return _; } "_fu);
                (src += (cgNode(items[(items.size() - 1)], 0) + ";"_fu));
            }
            else
            {
                (src += (("return "_fu + tail) + ";"_fu));
                (src += ((" else return "_fu + cgDefault(type)) + ";"_fu));
            };
            src = (((("([&]() -> "_fu + typeAnnot(type, 0)) + " { "_fu) + src) + " }())"_fu);
            return src;
        };
        fu_STR src = "("_fu;
        const fu_VEC<s_SolvedNode>& items = node.items;
        for (int i = 0; (i < items.size()); i++)
        {
            const s_SolvedNode& item = items[i];
            if (i)
                (src += " && "_fu);

            (src += cgNode(item, M_RETBOOL));
        };
        return (src + ")"_fu);
    };
    fu_STR cgNot(const s_SolvedNode& node)
    {
        const s_SolvedNode& item = node.items[0];
        return ("!"_fu + cgNode(item, M_RETBOOL));
    };
    fu_STR cgOr(const s_SolvedNode& node)
    {
        const s_Type& type = node.type;
        if (!is_bool(type))
        {
            bool ternary = true;
            for (int i = 0; (i < (node.items.size() - 1)); i++)
            {
                if (!isFieldChain(node.items[i]))
                {
                    ternary = false;
                    break;
                };
                if (ternary)
                {
                    fu_STR src = "("_fu;
                    for (int i = 0; (i < (node.items.size() - 1)); i++)
                    {
                        const s_SolvedNode& n = node.items[i];
                        fu_STR item = cgNode(n, 0);
                        (src += (((item + " ? "_fu) + item) + " : "_fu));
                    };
                    (src += (cgNode(node.items[(node.items.size() - 1)], 0) + ")"_fu));
                    return src;
                };
            };
            fu_STR annot = typeAnnot(type, 0);
            fu_STR src = (("([&]() -> "_fu + annot) + " {"_fu);
            const fu_VEC<s_SolvedNode>& items = node.items;
            for (int i = 0; (i < (items.size() - 1)); i++)
            {
                const s_SolvedNode& item = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(fu_STR{}); }());
                s_SolvedNode tail { item };
                if ((item.kind == "and"_fu))
                {
                    const fu_VEC<s_SolvedNode>& items = item.items;
                    tail = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() - 1)]; if (_) return _; } fail(fu_STR{}); }());
                    (src += " if ("_fu);
                    for (int i = 0; (i < (items.size() - 1)); i++)
                    {
                        if (i)
                            (src += " && "_fu);

                        const s_SolvedNode& item = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(fu_STR{}); }());
                        (src += cgNode(item, M_RETBOOL));
                    };
                    (src += ")"_fu);
                };
                (src += ((((" { "_fu + annot) + " _ = "_fu) + cgNode(tail, 0)) + "; if (_) return _; }"_fu));
            };
            const s_SolvedNode& tail = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() - 1)]; if (_) return _; } fail(fu_STR{}); }());
            if (!is_never(tail.type))
                (src += " return"_fu);

            (src += ((" "_fu + cgNode(tail, 0)) + "; }())"_fu));
            return src;
        };
        fu_STR src = "("_fu;
        const fu_VEC<s_SolvedNode>& items = node.items;
        for (int i = 0; (i < items.size()); i++)
        {
            const s_SolvedNode& item = items[i];
            if (i)
                (src += " || "_fu);

            (src += cgNode(item, M_RETBOOL));
        };
        return (src + ")"_fu);
    };
    bool isFieldChain(const s_SolvedNode& node)
    {
        if ((node.kind != "call"_fu))
            return false;

        s_Overload t = GET(node.target, module, ctx);
        if ((t.kind == "field"_fu))
            return isFieldChain(only(node.items));

        if (((t.kind == "var"_fu) || (t.kind == "global"_fu) || (t.kind == "arg"_fu) || (t.kind == "ref"_fu)))
            return true;

        return false;
    };
    fu_STR postfixBlock(const fu_STR& src, const fu_STR& postfix)
    {
        ((src[(src.size() - 1)] == std::byte('}')) || fail(fu_STR{}));
        return ((fu::slice(src, 0, (src.size() - 1)) + postfix) + std::byte('}'));
    };
    fu_STR cgLoop(const s_SolvedNode& node)
    {
        const fu_VEC<s_SolvedNode>& items = node.items;
        const s_SolvedNode& n_init = items[LOOP_INIT];
        const s_SolvedNode& n_cond = items[LOOP_COND];
        const s_SolvedNode& n_post = items[LOOP_POST];
        const s_SolvedNode& n_body = items[LOOP_BODY];
        const s_SolvedNode& n_pcnd = items[LOOP_POST_COND];
        fu_STR init = ([&]() -> fu_STR { if (n_init) return cgNode(n_init, 0); else return fu_STR{}; }());
        fu_STR cond = ([&]() -> fu_STR { if (n_cond) return cgNode(n_cond, M_RETBOOL); else return fu_STR{}; }());
        fu_STR post = ([&]() -> fu_STR { if (n_post) return cgNode(n_post, 0); else return fu_STR{}; }());
        fu_STR body = ([&]() -> fu_STR { if (n_body) return blockWrapSubstatement(n_body); else return fu_STR{}; }());
        fu_STR pcnd = ([&]() -> fu_STR { if (n_pcnd) return cgNode(n_pcnd, M_RETBOOL); else return fu_STR{}; }());
        fu_STR breakLabel {};
        if ((body && node.value))
        {
            fu_STR brk = (("L_"_fu + node.value) + "_b"_fu);
            fu_STR cnt = (("L_"_fu + node.value) + "_c"_fu);
            if (fu::has(body, cnt))
                body = ("{"_fu + postfixBlock(body, (((_indent + "    }"_fu) + cnt) + ":;"_fu)));

            if (fu::has(body, brk))
                breakLabel = (((_indent + "    "_fu) + brk) + ":;"_fu);

        };
        if (pcnd)
        {
            if ((init || post || cond))
                fail("TODO extended loop."_fu);

            return (((((("do"_fu + body) + _indent) + "while ("_fu) + pcnd) + ")"_fu) + breakLabel);
        };
        if ((init || post || !cond))
            return (((((((("for ("_fu + init) + "; "_fu) + cond) + "; "_fu) + post) + ")"_fu) + body) + breakLabel);

        return (((("while ("_fu + cond) + ")"_fu) + body) + breakLabel);
    };
    fu_STR cgCatch(const s_SolvedNode& node)
    {
        const fu_VEC<s_SolvedNode>& items = node.items;
        const s_SolvedNode& let_main = items[0];
        fu_STR let_init = cgNode(items[0].items[LET_INIT], 0);
        const fu_STR& err_id = items[1].value;
        fu_STR catch_body = blockWrapSubstatement(items[2]);
        fu_STR src = (binding(let_main, false, true) + ";"_fu);
        (src += (_indent + "try"_fu));
        (src += (_indent + "{"_fu));
        (src += (((((_indent + "    "_fu) + let_main.value) + " = "_fu) + let_init) + ";"_fu));
        (src += (_indent + "}"_fu));
        (src += (_indent + "catch (const std::exception& o_0)"_fu));
        (src += (_indent + "{"_fu));
        (src += (((((_indent + "    const "_fu) + annotateString()) + "& "_fu) + err_id) + " = fu_TO_STR(o_0.what());"_fu));
        (src += (_indent + catch_body));
        (src += (_indent + "}\n"_fu));
        return src;
    };
    fu_STR cgNode(const s_SolvedNode& node, const int mode)
    {
        const fu_STR& k = node.kind;
        if ((k == "root"_fu))
            return cgRoot(node);

        if ((k == "block"_fu))
            return cgBlock(node);

        if ((k == "fn"_fu))
            return cgFn(node);

        if ((k == "return"_fu))
            return cgReturn(node);

        if ((k == "break"_fu))
            return cgJump(node);

        if ((k == "continue"_fu))
            return cgJump(node);

        if ((k == "call"_fu))
            return cgCall(node, mode);

        if ((k == "let"_fu))
            return cgLet(node);

        if ((k == "global"_fu))
            return cgGlobal(node);

        if ((k == "if"_fu))
            return cgIf(node, mode);

        if ((k == "!"_fu))
            return cgNot(node);

        if ((k == "or"_fu))
            return cgOr(node);

        if ((k == "and"_fu))
            return cgAnd(node);

        if ((k == "loop"_fu))
            return cgLoop(node);

        if ((k == "int"_fu))
            return cgLiteral(node);

        if ((k == "num"_fu))
            return cgLiteral(node);

        if ((k == "char"_fu))
            return cgCharLiteral(node);

        if ((k == "str"_fu))
            return cgStringLiteral(node);

        if ((k == "arrlit"_fu))
            return cgArrayLiteral(node, mode);

        if ((k == "definit"_fu))
            return cgDefaultInit(node, mode);

        if ((k == "empty"_fu))
            return cgEmpty();

        if ((k == "comma"_fu))
            return cgParens(node);

        if ((k == "parens"_fu))
            return cgParens(node);

        if ((k == "label"_fu))
            return cgParens(node);

        if ((k == "struct"_fu))
            return cgEmpty();

        if ((k == "copy"_fu))
            return cgCopyMove(node);

        if ((k == "move"_fu))
            return cgCopyMove(node);

        if ((k == "nrvo"_fu))
            return cgCopyMove(node);

        if ((k == "catch"_fu))
            return cgCatch(node);

        fail(("TODO: "_fu + k));
    };
    fu_STR cgCopyMove(const s_SolvedNode& node)
    {
        fu_STR a = cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(fu_STR{}); }()), 0);
        if ((node.kind == "nrvo"_fu))
            return a;

        if ((node.kind == "move"_fu))
            return cgSteal(a);

        return cgClone(node.type, a);
    };
    fu_STR cgSteal(const fu_STR& src)
    {
        include("<utility>"_fu);
        return (("std::move("_fu + src) + ")"_fu);
    };
    fu_STR cgSwap(const fu_VEC<fu_STR>& items)
    {
        include("<utility>"_fu);
        return (("std::swap("_fu + fu::join(items, ", "_fu)) + ")"_fu);
    };
    fu_STR cgClone(const s_Type& type, const fu_STR& src)
    {
        return (((typeAnnotBase(type) + "("_fu) + src) + ")"_fu);
    };
    fu_VEC<fu_STR> cgNodes(const fu_VEC<s_SolvedNode>& nodes, const int mode)
    {
        fu_VEC<fu_STR> result {};
        for (int i = 0; (i < nodes.size()); i++)
        {
            const s_SolvedNode& node = nodes[i];
            fu_STR src = (node ? cgNode(node, mode) : fu_STR{});
            result.push(src);
        };
        return result;
    };
    fu_STR cpp_codegen_EVAL()
    {
        ((root.kind == "root"_fu) || fail(fu_STR{}));
        fu_STR src = cgNode(root, 0);
        return ([&]() -> fu_STR { { fu_STR _ = fu_STR(src); if (_) return _; } return "\n"_fu; }());
    };
};

} // namespace

fu_STR cpp_codegen(const s_SolvedNode& root, const s_Scope& scope, const s_Module& module, const s_Context& ctx)
{
    return (sf_cpp_codegen { root, scope, module, ctx }).cpp_codegen_EVAL();
}


#endif
