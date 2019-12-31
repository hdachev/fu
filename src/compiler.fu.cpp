#include "../lib/env.h"
#include "../lib/io.h"
#include "../lib/map.h"
#include "../lib/never.h"
#include "../lib/now.h"
#include "../lib/shell.h"
#include "../lib/str.h"
#include "../lib/tea.h"
#include "../lib/vec.h"
#include "../lib/vec/find.h"
#include "../lib/vec/join.h"
#include "../lib/vec/replace.h"
#include <algorithm>
#include <iostream>
#include <utility>

struct s_LexerOutput;
struct s_MapFields;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStats;
struct s_Node;
struct s_Overload;
struct s_ParserOutput;
struct s_Partial;
struct s_Scope;
struct s_ScopeItem;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Struct;
struct s_StructField;
struct s_TEMP_Context;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
fu_STR compile_testcase(const fu_STR&);
s_Scope listGlobals(const s_Module&);
int ZERO();
s_TEMP_Context ZERO(const fu_STR&, fu_STR&&);
void runTestSuite();
int FAIL(const fu_STR&);
bool operator==(const s_Type&, const s_Type&);
int copyOrMove(const int&, const fu_VEC<s_StructField>&);
bool someFieldNonCopy(const fu_VEC<s_StructField>&);
s_LexerOutput lex(const fu_STR&, const fu_STR&);
fu_STR last(const fu_STR&);
bool hasIdentifierChars(const fu_STR&);
s_ParserOutput parse(const int&, const fu_STR&, const fu_VEC<s_Token>&);
void sayHello();
template <typename T>
struct fu_DEFAULT { static inline const T value {}; };

template <typename K, typename V>
fu_VEC<K> fu_KEYS(
    const fu_COW_MAP<K, V>& map)
{
    return map.m_keys;
}

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

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    fu_STR canon;
    int quals;
    int modid;
    explicit operator bool() const noexcept
    {
        return false
            || canon.size()
            || quals
            || modid
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
            || kind.size()
            || flags
            || value.size()
            || items
            || token
            || type
            || target
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
            || kind.size()
            || value.size()
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
            || fname.size()
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
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || flags
            || value.size()
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
            || src.size()
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
    s_Type type;
    explicit operator bool() const noexcept
    {
        return false
            || id.size()
            || type
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    fu_STR kind;
    fu_STR id;
    fu_VEC<s_StructField> fields;
    int flags;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || id.size()
            || fields
            || flags
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
            || id.size()
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
    s_Template tempatle;
    s_SolvedNode constant;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || name.size()
            || type
            || min
            || max
            || args
            || names
            || defaults
            || partial
            || tempatle
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
    fu_COW_MAP<fu_STR, s_Struct> types;
    fu_COW_MAP<fu_STR, s_SolvedNode> specs;
    s_SolverOutput solve;
    fu_STR cpp;
    explicit operator bool() const noexcept
    {
        return false
            || deps
            || types
            || specs
            || solve
            || cpp.size()
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleStats
                                #define DEF_s_ModuleStats
struct s_ModuleStats
{
    f64 s_lex;
    f64 s_parse;
    f64 s_solve;
    f64 s_cpp;
    explicit operator bool() const noexcept
    {
        return false
            || s_lex
            || s_parse
            || s_solve
            || s_cpp
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
            || fname.size()
            || in
            || out
            || stats
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TEMP_Context
                                #define DEF_s_TEMP_Context
struct s_TEMP_Context
{
    fu_VEC<s_Module> modules;
    fu_COW_MAP<fu_STR, fu_STR> files;
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

s_SolvedNode only(const fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("LEN != 1: "_fu + s.size())));
}

                                #ifndef DEF_WARN_ON_IMPLICIT_COPY
                                #define DEF_WARN_ON_IMPLICIT_COPY
inline const bool WARN_ON_IMPLICIT_COPY = false;
                                #endif

                                #ifndef DEF_WRITE_COMPILER
                                #define DEF_WRITE_COMPILER
inline const bool WRITE_COMPILER = true;
                                #endif

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
inline const int q_mutref = (1 << 0);
                                #endif

                                #ifndef DEF_q_ref
                                #define DEF_q_ref
inline const int q_ref = (1 << 1);
                                #endif

                                #ifndef DEF_q_copy
                                #define DEF_q_copy
inline const int q_copy = (1 << 2);
                                #endif

                                #ifndef DEF_q_trivial
                                #define DEF_q_trivial
inline const int q_trivial = (1 << 3);
                                #endif

                                #ifndef DEF_q_primitive
                                #define DEF_q_primitive
inline const int q_primitive = (1 << 4);
                                #endif

                                #ifndef DEF_q_arithmetic
                                #define DEF_q_arithmetic
inline const int q_arithmetic = (1 << 5);
                                #endif

                                #ifndef DEF_q_integral
                                #define DEF_q_integral
inline const int q_integral = (1 << 6);
                                #endif

                                #ifndef DEF_q_signed
                                #define DEF_q_signed
inline const int q_signed = (1 << 7);
                                #endif

                                #ifndef DEF_q_floating_pt
                                #define DEF_q_floating_pt
inline const int q_floating_pt = (1 << 8);
                                #endif

                                #ifndef DEF_TAGS
                                #define DEF_TAGS
inline const fu_VEC<fu_STR> TAGS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<9> { "mutref"_fu, "ref"_fu, "copy"_fu, "trivial"_fu, "primitive"_fu, "arithmetic"_fu, "integral"_fu, "signed"_fu, "floating_point"_fu } };
                                #endif

bool operator==(const s_Type& a, const s_Type& b)
{
    return ((a.modid == b.modid) && (a.canon == b.canon) && (a.quals == b.quals));
}

                                #ifndef DEF_Trivial
                                #define DEF_Trivial
inline const int Trivial = (q_copy | q_trivial);
                                #endif

                                #ifndef DEF_Primitive
                                #define DEF_Primitive
inline const int Primitive = (Trivial | q_primitive);
                                #endif

                                #ifndef DEF_Arithmetic
                                #define DEF_Arithmetic
inline const int Arithmetic = (Primitive | q_arithmetic);
                                #endif

                                #ifndef DEF_Integral
                                #define DEF_Integral
inline const int Integral = (Arithmetic | q_integral);
                                #endif

                                #ifndef DEF_SignedInt
                                #define DEF_SignedInt
inline const int SignedInt = (Integral | q_signed);
                                #endif

                                #ifndef DEF_UnsignedInt
                                #define DEF_UnsignedInt
inline const int& UnsignedInt = Integral;
                                #endif

                                #ifndef DEF_FloatingPt
                                #define DEF_FloatingPt
inline const int FloatingPt = ((Arithmetic | q_floating_pt) | q_signed);
                                #endif

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
inline const s_Type t_i8 = s_Type { "i8"_fu, int(SignedInt), 0 };
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
inline const s_Type t_i16 = s_Type { "i16"_fu, int(SignedInt), 0 };
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
inline const s_Type t_i32 = s_Type { "i32"_fu, int(SignedInt), 0 };
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
inline const s_Type t_i64 = s_Type { "i64"_fu, int(SignedInt), 0 };
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
inline const s_Type t_u8 = s_Type { "u8"_fu, int(UnsignedInt), 0 };
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
inline const s_Type t_u16 = s_Type { "u16"_fu, int(UnsignedInt), 0 };
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
inline const s_Type t_u32 = s_Type { "u32"_fu, int(UnsignedInt), 0 };
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
inline const s_Type t_u64 = s_Type { "u64"_fu, int(UnsignedInt), 0 };
                                #endif

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
inline const s_Type t_f32 = s_Type { "f32"_fu, int(FloatingPt), 0 };
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
inline const s_Type t_f64 = s_Type { "f64"_fu, int(FloatingPt), 0 };
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
inline const s_Type t_void = s_Type { "void"_fu, 0, 0 };
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
inline const s_Type t_bool = s_Type { "bool"_fu, int(Primitive), 0 };
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
inline const s_Type t_never = s_Type { "never"_fu, 0, 0 };
                                #endif

                                #ifndef DEF_t_template
                                #define DEF_t_template
inline const s_Type t_template = s_Type { "template"_fu, 0, 0 };
                                #endif

                                #ifndef DEF_t_string
                                #define DEF_t_string
inline const s_Type t_string = s_Type { "string"_fu, int(q_copy), 0 };
                                #endif

bool isAssignable(const s_Type& host, const s_Type& guest)
{
    return (((host.canon == guest.canon) && ((host.quals == guest.quals) || (!(host.quals & q_mutref) && ((host.quals & guest.quals) == host.quals)))) || ((guest == t_never) && (guest.quals == 0)));
}

bool isAssignableAsArgument(const s_Type& host, s_Type&& guest)
{
    guest.quals |= q_ref;
    return isAssignable(host, guest);
}

s_Type qadd(const s_Type& type, const int& q)
{
    return s_Type { fu_STR(type.canon), (type.canon.size() ? (type.quals | q) : 0), int(type.modid) };
}

s_Type qsub(const s_Type& type, const int& q)
{
    return s_Type { fu_STR(type.canon), (type.quals & ~q), int(type.modid) };
}

bool qhas(const s_Type& type, const int& q)
{
    return ((type.quals & q) == q);
}

s_Type tryClear(const s_Type& type, const int& q)
{
    if ((!type || !qhas(type, q)))
        return s_Type { fu_STR{}, int{}, int{} };

    return qsub(type, q);
}

s_Type add_ref(const s_Type& type)
{
    return qadd(type, q_ref);
}

s_Type add_mutref(const s_Type& type)
{
    return qadd(type, (q_ref | q_mutref));
}

s_Type tryClear_mutref(const s_Type& type)
{
    return tryClear(type, (q_ref | q_mutref));
}

s_Type tryClear_ref(const s_Type& type)
{
    s_Type t = tryClear(type, q_ref);
    return (t ? qsub(t, q_mutref) : s_Type(t));
}

s_Type clear_refs(const s_Type& type)
{
    return qsub(type, (q_ref | q_mutref));
}

s_Type clear_mutref(const s_Type& type)
{
    return qsub(type, q_mutref);
}

s_Type add_refs_from(const s_Type& src, const s_Type& dest)
{
    return qadd(dest, (src.quals & (q_ref | q_mutref)));
}

fu_STR serializeType(const s_Type& type)
{
    if (type.quals)
        return (((("("_fu + type.canon) + "{"_fu) + type.quals) + "})"_fu);

    return (("("_fu + type.canon) + ")"_fu);
}

bool type_has(const s_Type& type, const fu_STR& tag)
{
    const int idx = fu::lfind(TAGS, tag);
    ((idx >= 0) || fu::fail((("Unknown type tag: `"_fu + tag) + "`."_fu)));
    const int mask = (1 << idx);
    return ((type.quals & mask) == mask);
}

s_Type type_tryInter(const s_Type& a, const s_Type& b)
{
    if ((a.canon != b.canon))
        return ((a == t_never) ? s_Type(b) : ((b == t_never) ? s_Type(a) : s_Type { fu_STR{}, int{}, int{} }));

    return s_Type { fu_STR(a.canon), (a.quals & b.quals), int(a.modid) };
}

int MODID(const s_Module& module)
{
    return module.modid;
}

s_Token _token(const s_TokenIdx& idx, const s_TEMP_Context& ctx)
{
    return ctx.modules[idx.modid].in.lex.tokens[idx.tokidx];
}

fu_STR _fname(const s_TokenIdx& idx, const s_TEMP_Context& ctx)
{
    return ctx.modules[idx.modid].fname;
}

fu_STR& getFile(const fu_STR& path, s_TEMP_Context& ctx)
{
    return ([&](fu_STR& _) -> fu_STR& { if (!_.size()) _ = fu::file_read(path); return _; } (ctx.files.upsert(path)));
}

s_Module& getModule(const fu_STR& fname, s_TEMP_Context& ctx)
{
    for (int i = 0; (i < ctx.modules.size()); i++)
    {
        if ((ctx.modules.mutref(i).fname == fname))
            return ctx.modules.mutref(i);

    };
    const int i = ctx.modules.size();
    s_Module module = s_Module { int(i), fu_STR{}, s_ModuleInputs{}, s_ModuleOutputs{}, s_ModuleStats{} };
    module.fname = fname;
    ctx.modules.push(module);
    return ctx.modules.mutref(i);
}

void setModule(const s_Module& module, s_TEMP_Context& ctx)
{
    s_Module& current = ctx.modules.mutref(module.modid);
    ((current.fname == module.fname) || fu::fail("Assertion failed."));
    current = module;
}

void registerType(const fu_STR& canon, const s_Struct& def, s_Module& module)
{
    (module.out.types.upsert(canon) = def);
}

const s_Struct& lookupType(const s_Type& type, const s_Module& module, const s_TEMP_Context& ctx)
{
    if ((type.modid == module.modid))
        return ([&]() -> const s_Struct& { { const s_Struct& _ = module.out.types[type.canon]; if (_) return _; } fu::fail("Assertion failed."); }());

    return ([&]() -> const s_Struct& { { const s_Struct& _ = ctx.modules[type.modid].out.types[type.canon]; if (_) return _; } fu::fail("Assertion failed."); }());
}

s_Struct& lookupType_mut(const fu_STR& canon, s_Module& module)
{
    return ([&]() -> s_Struct& { { s_Struct& _ = module.out.types.mutref(canon); if (_) return _; } fu::fail("Assertion failed."); }());
}

s_Type initStruct(const fu_STR& id, const int& flags, s_Module& module)
{
    fu_STR canon = ("s_"_fu + id);
    s_Struct def = s_Struct { "struct"_fu, fu_STR(([&]() -> const fu_STR& { { const fu_STR& _ = id; if (_.size()) return _; } fu::fail("TODO anonymous structs?"_fu); }())), fu_VEC<s_StructField>{}, (flags | 0) };
    registerType(canon, def, module);
    return s_Type { fu_STR(canon), copyOrMove(flags, def.fields), MODID(module) };
}

void finalizeStruct(const fu_STR& id, const fu_VEC<s_StructField>& fields, s_Module& module)
{
    fu_STR canon = ("s_"_fu + id);
    s_Struct& def = lookupType_mut(canon, module);
    def.fields = ([&]() -> const fu_VEC<s_StructField>& { { const fu_VEC<s_StructField>& _ = fields; if (_) return _; } fu::fail("TODO empty structs?"_fu); }());
}

                                #ifndef DEF_F_DESTRUCTOR
                                #define DEF_F_DESTRUCTOR
inline const int F_DESTRUCTOR = (1 << 31);
                                #endif

int copyOrMove(const int& flags, const fu_VEC<s_StructField>& fields)
{
    if (((flags & F_DESTRUCTOR) || someFieldNonCopy(fields)))
        return 0;

    return q_copy;
}

bool someFieldNonCopy(const fu_VEC<s_StructField>& fields)
{
    for (int i = 0; (i < fields.size()); i++)
    {
        if (!(fields[i].type.quals & q_copy))
            return true;

    };
    return false;
}

bool someFieldNotTrivial(const fu_VEC<s_StructField>& fields)
{
    for (int i = 0; (i < fields.size()); i++)
    {
        if (!(fields[i].type.quals & q_trivial))
            return true;

    };
    return false;
}

s_Type createArray(const s_Type& item, s_Module& module)
{
    const int flags = 0;
    fu_VEC<s_StructField> fields = fu_VEC<s_StructField> { fu_VEC<s_StructField>::INIT<1> { s_StructField { "Item"_fu, s_Type(item) } } };
    fu_STR canon = (("Array("_fu + serializeType(item)) + ")"_fu);
    registerType(canon, s_Struct { "array"_fu, fu_STR(canon), fu_VEC<s_StructField>(fields), int(flags) }, module);
    return s_Type { fu_STR(canon), copyOrMove(flags, fields), MODID(module) };
}

bool type_isString(const s_Type& type)
{
    return (type.canon == "string"_fu);
}

bool type_isArray(const s_Type& type)
{
    return fu::lmatch(type.canon, "Array("_fu);
}

s_Type tryClear_array(const s_Type& type, const s_Module& module, const s_TEMP_Context& ctx)
{
    if (!type_isArray(type))
        return s_Type { fu_STR{}, int{}, int{} };

    const s_Struct& def = lookupType(type, module, ctx);
    return ([&]() -> const s_Type& { if ((def.kind == "array"_fu)) { const s_Type& _ = def.fields[0].type; if (_) return _; } fu::fail("Assertion failed."); }());
}

bool type_isMap(const s_Type& type)
{
    return fu::lmatch(type.canon, "Map("_fu);
}

s_Type createMap(const s_Type& key, const s_Type& value, s_Module& module)
{
    const int flags = 0;
    fu_VEC<s_StructField> fields = fu_VEC<s_StructField> { fu_VEC<s_StructField>::INIT<2> { s_StructField { "Key"_fu, s_Type(key) }, s_StructField { "Value"_fu, s_Type(value) } } };
    fu_STR canon = (((("Map("_fu + serializeType(key)) + ","_fu) + serializeType(value)) + ")"_fu);
    registerType(canon, s_Struct { "map"_fu, fu_STR(canon), fu_VEC<s_StructField>(fields), int(flags) }, module);
    return s_Type { fu_STR(canon), copyOrMove(flags, fields), MODID(module) };
}

s_MapFields tryClear_map(const s_Type& type, const s_Module& module, const s_TEMP_Context& ctx)
{
    if (!type_isMap(type))
        return s_MapFields { s_Type{}, s_Type{} };

    const s_Struct& def = lookupType(type, module, ctx);
    ((def.kind == "map"_fu) || fu::fail("Assertion failed."));
    return s_MapFields { s_Type(([&]() -> const s_Type& { { const s_Type& _ = def.fields[0].type; if (_) return _; } fu::fail("Assertion failed."); }())), s_Type(([&]() -> const s_Type& { { const s_Type& _ = def.fields[1].type; if (_) return _; } fu::fail("Assertion failed."); }())) };
}

fu_VEC<s_Target> Scope_lookup(const s_Scope& scope, const fu_STR& id)
{
    fu_VEC<s_Target> results = fu_VEC<s_Target>{};
    const fu_VEC<s_ScopeItem>& items = scope.items;
    for (int i = 0; (i < items.size()); i++)
    {
        const s_ScopeItem& item = items[i];
        if ((item.id == id))
            results.unshift(item.target);

    };
    return results;
}

int Scope_push(s_Scope& scope)
{
    return scope.items.size();
}

void Scope_pop(s_Scope& scope, const int& memo)
{
    scope.items.shrink(memo);
}

s_Target Scope_add(s_Scope& scope, const fu_STR& kind, const fu_STR& id, const s_Type& type, const int& min, const int& max, const fu_VEC<fu_STR>& arg_n, const fu_VEC<s_Type>& arg_t, const fu_VEC<s_SolvedNode>& arg_d, const s_Template& tempatle, const s_Partial& partial, const s_SolvedNode& constant, const s_Module& module)
{
    const int modid = MODID(module);
    s_Target target = s_Target { int(modid), (scope.overloads.size() + 1) };
    s_Overload item = s_Overload { fu_STR(kind), fu_STR(id), s_Type(type), int(min), int(max), fu_VEC<s_Type>(arg_t), fu_VEC<fu_STR>(arg_n), fu_VEC<s_SolvedNode>(arg_d), s_Partial(partial), s_Template(tempatle), s_SolvedNode(constant) };
    scope.items.push(s_ScopeItem { fu_STR(id), s_Target(target) });
    scope.overloads.push(item);
    return target;
}

s_Target Scope_Typedef(s_Scope& scope, const fu_STR& id, const s_Type& type, const s_Module& module)
{
    return Scope_add(scope, "type"_fu, id, type, 0, 0, fu_VEC<fu_STR>{}, fu_VEC<s_Type>{}, fu_VEC<s_SolvedNode>{}, s_Template{}, s_Partial{}, s_SolvedNode{}, module);
}

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline const int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
inline const int& FN_ARGS_BACK = FN_RET_BACK;
                                #endif

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline const int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline const int LET_INIT = 1;
                                #endif

                                #ifndef DEF_F_NAMED_ARGS
                                #define DEF_F_NAMED_ARGS
inline const int F_NAMED_ARGS = (1 << 25);
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

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline const int LET_TYPE = 0;
                                #endif

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline const int F_MUT = (1 << 16);
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

struct sf_solve
{
    const s_Node& parse;
    const s_TEMP_Context& ctx;
    s_Module& module;
    s_Scope _scope {};
    s_TokenIdx _here {};
    s_SolvedNode _current_fn {};
    fu_COW_MAP<fu_STR, s_Type> _typeParams {};
    bool TEST_expectImplicits = false;
    void Scope_import(const int& modid)
    {
        const fu_VEC<s_ScopeItem>& items = ctx.modules[modid].out.solve.scope.items;
        for (int i = 0; (i < items.size()); i++)
        {
            const s_ScopeItem& item = items[i];
            if ((item.target.modid == modid))
                _scope.items.push(items[i]);

        };
    };
    s_Overload GET(const s_Target& target, const s_Module& module, const s_TEMP_Context& ctx)
    {
        ((target.index > 0) || fu::fail("Assertion failed."));
        if ((target.modid == module.modid))
            return _scope.overloads.mutref((target.index - 1));

        return ctx.modules[target.modid].out.solve.scope.overloads[(target.index - 1)];
    };
    s_Overload& GET_mut(const s_Target& target)
    {
        (((target.index > 0) && (target.modid == MODID(module))) || fu::fail("Assertion failed."));
        return _scope.overloads.mutref((target.index - 1));
    };
    [[noreturn]] fu::never fail(fu_STR&& reason)
    {
        s_Token here = _token(_here, ctx);
        if (!reason.size())
            reason = (("Unexpected `"_fu + here.value) + "`."_fu);

        fu_STR fname = _fname(_here, ctx);
        const int& l0 = here.line;
        const int& c0 = here.col;
        fu_STR addr = ((("@"_fu + l0) + ":"_fu) + c0);
        fu::fail(((((fname + " "_fu) + addr) + ":\n\t"_fu) + reason));
    };
    s_Target Binding(const fu_STR& id, const s_Type& type, fu_STR&& kind, const s_SolvedNode& constant)
    {
        return Scope_add(_scope, kind, ([&]() -> const fu_STR& { { const fu_STR& _ = id; if (_.size()) return _; } fail(""_fu); }()), ([&]() -> const s_Type& { { const s_Type& _ = type; if (_) return _; } fail(""_fu); }()), 0, 0, fu_VEC<fu_STR>{}, fu_VEC<s_Type>{}, fu_VEC<s_SolvedNode>{}, s_Template{}, s_Partial{}, constant, module);
    };
    s_Target Field(const fu_STR& id, const s_Type& structType, const s_Type& fieldType)
    {
        return Scope_add(_scope, "field"_fu, ([&]() -> const fu_STR& { { const fu_STR& _ = id; if (_.size()) return _; } fail(""_fu); }()), ([&]() -> const s_Type& { { const s_Type& _ = fieldType; if (_) return _; } fail(""_fu); }()), 1, 1, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "this"_fu } }, fu_VEC<s_Type> { fu_VEC<s_Type>::INIT<1> { ([&]() -> const s_Type& { { const s_Type& _ = structType; if (_) return _; } fail(""_fu); }()) } }, fu_VEC<s_SolvedNode>{}, s_Template{}, s_Partial{}, s_SolvedNode{}, module);
    };
    s_Target TemplateDecl(const s_Node& node)
    {
        const fu_STR& id = node.value;
        ((node.kind == "fn"_fu) || fail("TODO"_fu));
        const int min = (node.items.size() + FN_ARGS_BACK);
        const int max = ((node.kind == "fn"_fu) ? 0xffffff : int(min));
        s_Template tempatle = s_Template { s_Node(node) };
        fu_VEC<fu_STR> arg_n {};
        if ((node.kind == "fn"_fu))
        {
            const fu_VEC<s_Node>& items = node.items;
            const int numArgs = (items.size() + FN_ARGS_BACK);
            for (int i = 0; (i < numArgs); i++)
            {
                const s_Node& arg = ([&]() -> const s_Node& { { const s_Node& _ = items[i]; if (_) return _; } fail(""_fu); }());
                ((arg.kind == "let"_fu) || fail(""_fu));
                const fu_STR& name = ([&]() -> const fu_STR& { { const fu_STR& _ = arg.value; if (_.size()) return _; } fail(""_fu); }());
                arg_n.push(name);
            };
        };
        return Scope_add(_scope, "template"_fu, id, t_template, min, max, arg_n, fu_VEC<s_Type>{}, fu_VEC<s_SolvedNode>{}, tempatle, s_Partial{}, s_SolvedNode{}, module);
    };
    s_Target FnDecl(const fu_STR& id, s_SolvedNode& node)
    {
        fu_VEC<s_SolvedNode> items { node.items };
        const s_SolvedNode& rnode = items[(items.size() + FN_RET_BACK)];
        const s_Type& ret = ([&]() -> const s_Type& { if (rnode) { const s_Type& _ = rnode.type; if (_) return _; } fail(""_fu); }());
        const int max = (items.size() + FN_RET_BACK);
        fu_VEC<s_SolvedNode> args = slice(items, 0, max);
        fu_VEC<s_Type> arg_t = fu_VEC<s_Type>{};
        fu_VEC<fu_STR> arg_n = fu_VEC<fu_STR>{};
        fu_VEC<s_SolvedNode> arg_d = fu_VEC<s_SolvedNode>{};
        int min = 0;
        for (int i = 0; (i < max); i++)
        {
            const s_SolvedNode& arg = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args[i]; if (_) return _; } fail(""_fu); }());
            ((arg.kind == "let"_fu) || fail(""_fu));
            arg_t.push(([&]() -> const s_Type& { { const s_Type& _ = arg.type; if (_) return _; } fail(""_fu); }()));
            arg_n.push(([&]() -> const fu_STR& { { const fu_STR& _ = arg.value; if (_.size()) return _; } fail(""_fu); }()));
            const bool isImplicit = !!(arg.flags & F_IMPLICIT);
            if (!isImplicit)
            {
                ((arg_d.size() >= i) || fail(""_fu));
                const s_SolvedNode& def = arg.items[LET_INIT];
                arg_d.push(def);
                if (!def)
                    min++;

            };
        };
        s_Target overload = Scope_add(_scope, "fn"_fu, id, ret, min, max, arg_n, arg_t, arg_d, s_Template{}, s_Partial{}, s_SolvedNode{}, module);
        node.target = overload;
        return overload;
    };
    s_Target DefaultCtor(const fu_STR& id, const s_Type& type, const fu_VEC<s_SolvedNode>& members)
    {
        fu_VEC<s_Type> arg_t = fu_VEC<s_Type>{};
        fu_VEC<fu_STR> arg_n = fu_VEC<fu_STR>{};
        for (int i = 0; (i < members.size()); i++)
        {
            const s_SolvedNode& member = members[i];
            arg_t.push(([&]() -> const s_Type& { { const s_Type& _ = member.type; if (_) return _; } fail(""_fu); }()));
            arg_n.push(([&]() -> const fu_STR& { { const fu_STR& _ = member.value; if (_.size()) return _; } fail(""_fu); }()));
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
        if ((type.quals & q_ref))
            return s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} };

        return createDefaultInit(type);
    };
    s_SolvedNode createDefaultInit(const s_Type& type)
    {
        return s_SolvedNode { "definit"_fu, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx(([&]() -> s_TokenIdx& { { s_TokenIdx& _ = _here; if (_) return _; } fail(""_fu); }())), s_Type(type), s_Target{} };
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
        (((min >= 0) && (max >= min)) || fail(""_fu));
        fu_VEC<s_Type> arg_t = (overload.args ? slice(overload.args, 1) : fu_VEC<s_Type>(overload.args));
        fu_VEC<fu_STR> arg_n = (overload.names ? slice(overload.names, 1) : fu_VEC<fu_STR>(overload.names));
        fu_VEC<s_SolvedNode> arg_d = (overload.defaults ? slice(overload.defaults, 1) : fu_VEC<s_SolvedNode>(overload.defaults));
        if (((via.kind != "var"_fu) && (via.kind != "global"_fu)))
        {
            kind = "p-wrap"_fu;
            min++;
            max++;
            const s_Type& via_t = ([&]() -> const s_Type& { if (via.args) { const s_Type& _ = via.args[0]; if (_) return _; } fail(""_fu); }());
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
        const s_Type& actual = ([&]() -> const s_Type& { { const s_Type& _ = via.type; if (_) return _; } fail(""_fu); }());
        for (int i = 0; (i < _scope.items.size()); i++)
        {
            s_ScopeItem item { _scope.items.mutref(i) };
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
            if (overload.tempatle)
            {
                continue;
            };
            const s_Type& expect = ([&]() -> const s_Type& { { const s_Type& _ = overload.args[0]; if (_) return _; } fail(""_fu); }());
            if (!isAssignableAsArgument(expect, s_Type(actual)))
            {
                continue;
            };
            if ((overload.min < 2))
            {
                for (int i = 0; (i < _scope.items.size()); i++)
                {
                    s_ScopeItem o { _scope.items.mutref(i) };
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
    fu_VEC<int> getNamedArgReorder(const fu_VEC<fu_STR>& names, const fu_VEC<fu_STR>& arg_n)
    {
        fu_VEC<int> result = fu_VEC<int>{};
        int offset = 0;
        for (int i = 0; (i < arg_n.size()); i++)
        {
            int idx = fu::lfind(names, arg_n[i]);
            if ((idx < 0))
            {
                for (int i = offset; (i < names.size()); i++)
                {
                    offset++;
                    if (!names[i].size())
                    {
                        idx = i;
                        break;
                    };
                };
            };
            result.push(idx);
        };
        while ((result && (result.mutref((result.size() - 1)) < 0)))
            result.pop();

        return result;
    };
    s_Target scope_tryMatch__mutargs(const fu_STR& id, fu_VEC<s_SolvedNode>& args, const int& flags, const s_Type& retType)
    {
        s_Target matchIdx {};
        fu_VEC<s_Target> overloads = Scope_lookup(_scope, id);
        if (!overloads)
            return matchIdx;

        if (!args)
        {
            for (int i = 0; (i < overloads.size()); i++)
            {
                const s_Target& headIdx = overloads[i];
                if ((GET(headIdx, module, ctx).min == 0))
                {
                    matchIdx = headIdx;
                    break;
                };
            };
        }
        else
        {
            const int arity = args.size();
            fu_VEC<fu_STR> names {};
            if ((flags & F_NAMED_ARGS))
            {
                bool some = false;
                for (int i = 0; (i < arity); i++)
                {
                    s_SolvedNode arg { args.mutref(i) };
                    names.push(((arg.kind == "label"_fu) ? fu_STR(([&]() -> const fu_STR& { { const fu_STR& _ = ((void)(some = true), arg.value); if (_.size()) return _; } fail(""_fu); }())) : ""_fu));
                };
                (some || fail(""_fu));
            };
            fu_VEC<int> reorder {};
            for (int i = 0; (i < overloads.size()); i++){
            {
                s_Target overloadIdx { overloads[i] };
                s_Overload overload = GET(overloadIdx, module, ctx);
                while (true){
                {
                    if (((overload.min > arity) || (overload.max < arity)))
                    {
                        goto L_NEXT_c;
                    };
                    if ((retType && !isAssignable(retType, ([&]() -> s_Type& { { s_Type& _ = overload.type; if (_) return _; } fail(""_fu); }()))))
                    {
                        goto L_NEXT_c;
                    };
                    if ((names && overload.names))
                        reorder = getNamedArgReorder(names, overload.names);
                    else
                        reorder.clear();

                    if (overload.tempatle)
                    {
                        if (reorder)
                            fail("TODO handle argument reorder in template specialization."_fu);

                        s_Overload o = GET(overloadIdx, module, ctx);
                        s_Target specIdx = trySpecialize(overloadIdx, o.tempatle, args);
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

                fu_VEC<s_Type> arg_t { ([&]() -> fu_VEC<s_Type>& { { fu_VEC<s_Type>& _ = overload.args; if (_) return _; } fail(""_fu); }()) };
                fu_VEC<s_SolvedNode> arg_d { overload.defaults };
                const int N = (reorder ? reorder.size() : args.size());
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
                    if (!isAssignableAsArgument(arg_t[i], s_Type(([&]() -> s_Type& { { s_Type& _ = args.mutref(callsiteIndex).type; if (_) return _; } fail(""_fu); }()))))
                    {
                        goto L_NEXT_c;
                    };
                };
                if (matchIdx)
                    fail((("Ambiguous callsite, matches multiple functions in scope: `"_fu + id) + "`."_fu));

                matchIdx = overloadIdx;
                if (reorder)
                {
                    fu_VEC<s_SolvedNode> new_args {};
                    new_args.resize(reorder.size());
                    for (int i = 0; (i < reorder.size()); i++)
                    {
                        const int idx = reorder.mutref(i);
                        if ((idx >= 0))
                            new_args.mutref(i) = args.mutref(idx);

                    };
                    args = new_args;
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
                    args.mutref(i) = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args.mutref(i); if (_) return _; } if (arg_d) { const s_SolvedNode& _ = arg_d[i]; if (_) return _; } fail(""_fu); }());

            };
            const fu_VEC<s_Type>& arg_t = matched.args;
            if ((arg_t && (args.size() < arg_t.size())))
            {
                const fu_VEC<fu_STR>& arg_n = ([&]() -> const fu_VEC<fu_STR>& { { const fu_VEC<fu_STR>& _ = matched.names; if (_) return _; } fail(""_fu); }());
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
    s_Target scope_match__mutargs(const fu_STR& id, fu_VEC<s_SolvedNode>& args, const int& flags)
    {
        s_Target ret = scope_tryMatch__mutargs(id, args, flags, s_Type{});
        if (ret)
            return ret;

        s_Target debug = scope_tryMatch__mutargs(id, args, flags, s_Type{});
        if (debug)
            return debug;

        NICERR_scopeMismatch(id, args);
    };
    [[noreturn]] fu::never NICERR_scopeMismatch(const fu_STR& id, const fu_VEC<s_SolvedNode>& args)
    {
        fu_VEC<s_Target> overloads = Scope_lookup(_scope, id);
        int min = 0xffffff;
        for (int i = 0; (i < overloads.size()); i++)
        {
            const int arity = GET(overloads[i], module, ctx).min;
            if ((min > arity))
                min = arity;

        };
        (overloads ? ((args.size() < min) ? fail((((((("`"_fu + id) + "` expects "_fu) + min) + " arguments, "_fu) + args.size()) + " provided."_fu)) : fail(((("`"_fu + id) + "` bad args, provided: "_fu) + TODO_memoize_mangler(args)))) : fail((("`"_fu + id) + "` is not defined."_fu)));
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
            return solveLet(node);

        if ((k == "call"_fu))
            return solveCall(node);

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
            return solveInt(node);

        if ((k == "str"_fu))
            return solveStr(node);

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
        return ((kind == "fn"_fu) || (kind == "struct"_fu));
    };
    s_SolvedNode unorderedPrep(const s_Node& node)
    {
        const fu_STR& k = node.kind;
        if ((k == "fn"_fu))
            return uPrepFn(node);

        if ((k == "struct"_fu))
            return uPrepStruct(node);

        fail(("TODO: "_fu + k));
    };
    s_SolvedNode unorderedSolve(const s_Node& node, const s_SolvedNode& prep)
    {
        const fu_STR& k = node.kind;
        if ((k == "fn"_fu))
            return uSolveFn(node, prep);

        if ((k == "struct"_fu))
            return uSolveStruct(node, prep);

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
        const s_SolvedNode& last = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() - 1)]; if (_) return _; } fail(""_fu); }());
        return solved(node, ([&]() -> const s_Type& { { const s_Type& _ = last.type; if (_) return _; } fail(""_fu); }()), items);
    };
    s_SolvedNode solveInt(const s_Node& node)
    {
        return solved(node, t_i32, fu_VEC<s_SolvedNode>{});
    };
    s_SolvedNode solveStr(const s_Node& node)
    {
        return solved(node, t_string, fu_VEC<s_SolvedNode>{});
    };
    s_SolvedNode createEmpty()
    {
        return s_SolvedNode { "empty"_fu, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type(t_void), s_Target{} };
    };
    s_Node createTypeParam(const fu_STR& value)
    {
        return s_Node { "typeparam"_fu, int{}, fu_STR(value), fu_VEC<s_Node>{}, s_TokenIdx(([&]() -> s_TokenIdx& { { s_TokenIdx& _ = _here; if (_) return _; } fail(""_fu); }())) };
    };
    s_SolvedNode uPrepFn(const s_Node& node)
    {
        return __solveFn(false, false, node, s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} }, -1);
    };
    s_SolvedNode uSolveFn(const s_Node& node, const s_SolvedNode& prep)
    {
        return __solveFn(true, false, node, prep, -1);
    };
    s_SolvedNode __solveFn(const bool& solve, const bool& spec, const s_Node& n_fn, const s_SolvedNode& prep, const int& caseIdx)
    {
        const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = n_fn.value; if (_.size()) return _; } fail("TODO anonymous fns"_fu); }());
        if (spec)
        {
            (solve || fail(""_fu));
        }
        else if ((n_fn.flags & F_TEMPLATE))
        {
            if (solve)
                return ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = prep; if (_) return _; } fail(""_fu); }());

            s_Target tDecl = TemplateDecl(n_fn);
            s_SolvedNode out = solved(n_fn, t_void, fu_VEC<s_SolvedNode>{});
            out.target = tDecl;
            return out;
        };
        if ((!solve && !(n_fn.flags & F_FULLY_TYPED)))
            return s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} };

        const fu_VEC<s_Node>& inItems = n_fn.items;
        ((inItems.size() >= FN_RET_BACK) || fail(""_fu));
        s_SolvedNode out = ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(prep); if (_) return _; } return solved(n_fn, t_void, fu_VEC<s_SolvedNode>{}); }());
        out.items.resize(inItems.size());
        if ((_current_fn && (id != "free"_fu)))
        {
            _current_fn.flags |= F_HAS_CLOSURE;
            out.flags |= F_CLOSURE;
        };
        
        {
            const int scope0 = Scope_push(_scope);
            std::swap(_current_fn, out);
            fu_VEC<s_SolvedNode>& outItems = _current_fn.items;
            for (int i = 0; (i < (inItems.size() + FN_ARGS_BACK)); i++)
            {
                const s_Node& n_arg = ([&]() -> const s_Node& { { const s_Node& _ = inItems[i]; if (_) return _; } fail(""_fu); }());
                ((n_arg.kind == "let"_fu) || fail(""_fu));
                if (spec)
                {
                    s_Node mut_arg { n_arg };
                    mut_arg.items.mutref(LET_TYPE) = createTypeParam(mut_arg.value);
                    s_Type type { _typeParams.mutref(mut_arg.value) };
                    if (!(type.quals & q_ref))
                        mut_arg.flags |= F_MUT;

                    outItems.mutref(i) = solveLet(mut_arg);
                }
                else
                    outItems.mutref(i) = solveLet(n_arg);

            };
            s_Node n_ret { inItems[(inItems.size() + FN_RET_BACK)] };
            s_Node n_body { ([&]() -> const s_Node& { { const s_Node& _ = inItems[(inItems.size() + FN_BODY_BACK)]; if (_) return _; } fail(""_fu); }()) };
            if ((caseIdx >= 0))
            {
                ((n_body.kind == "pattern"_fu) || fail(""_fu));
                s_Node branch { ([&]() -> s_Node& { { s_Node& _ = n_body.items.mutref(caseIdx); if (_) return _; } fail(""_fu); }()) };
                const fu_VEC<s_Node>& items = branch.items;
                n_ret = ([&]() -> const s_Node& { { const s_Node& _ = items[(items.size() + FN_RET_BACK)]; if (_) return _; } return n_ret; }());
                n_body = items[(items.size() + FN_BODY_BACK)];
            };
            
            {
                s_SolvedNode s_ret = (n_ret ? evalTypeAnnot(n_ret) : s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} });
                outItems.mutref((outItems.size() + FN_RET_BACK)) = s_ret;
            };
            if (solve)
            {
                s_SolvedNode s_body = solveNode(n_body, s_Type{});
                (s_body || fail(""_fu));
                outItems.mutref((outItems.size() + FN_BODY_BACK)) = s_body;
            };
            std::swap(_current_fn, out);
            Scope_pop(_scope, scope0);
        };
        if (!prep)
            FnDecl(id, out);

        (!solve || out.items.mutref((out.items.size() + FN_BODY_BACK)) || fail(""_fu));
        return out;
    };
    fu_STR TODO_memoize_mangler(const fu_VEC<s_SolvedNode>& args)
    {
        fu_STR mangle = ""_fu;
        for (int i = 0; (i < args.size()); i++)
            mangle += ("\v"_fu + serializeType(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args[i]; if (_) return _; } fail(""_fu); }()).type));

        return mangle;
    };
    s_Target trySpecialize(const s_Target& target, const s_Template& tempatle, const fu_VEC<s_SolvedNode>& args)
    {
        fu_STR mangle = ((target.modid + "#"_fu) + target.index);
        mangle += TODO_memoize_mangler(args);
        s_SolvedNode spec { ([&](s_SolvedNode& _) -> s_SolvedNode& { if (!_) _ = s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} }; return _; } (module.out.specs.upsert(mangle))) };
        if (!spec)
        {
            s_SolvedNode spec = doTrySpecialize(tempatle, args);
            (module.out.specs.upsert(mangle) = spec);
            return spec.target;
        };
        return spec.target;
    };
    s_SolvedNode doTrySpecialize(const s_Template& tempatle, const fu_VEC<s_SolvedNode>& args)
    {
        const s_Node& node = tempatle.node;
        ((node.kind == "fn"_fu) || fail("TODO"_fu));
        s_SolvedNode result = trySpecializeFn(node, args);
        if (!result)
            result.kind = "spec-fail"_fu;

        return result;
    };
    s_SolvedNode trySpecializeFn(const s_Node& node, const fu_VEC<s_SolvedNode>& args)
    {
        const fu_VEC<s_Node>& items = node.items;
        fu_COW_MAP<fu_STR, s_Type> typeParams {};
        const int numArgs = (items.size() + FN_ARGS_BACK);
        for (int i = 0; (i < numArgs); i++)
        {
            const s_Node& argNode = ([&]() -> const s_Node& { { const s_Node& _ = items[i]; if (_) return _; } fail(""_fu); }());
            ((argNode.kind == "let"_fu) || fail(""_fu));
            s_Type inType = ((args.size() > i) ? s_Type(args[i].type) : s_Type { fu_STR{}, int{}, int{} });
            if (inType)
            {
                const fu_STR& argName = ([&]() -> const fu_STR& { { const fu_STR& _ = argNode.value; if (_.size()) return _; } fail(""_fu); }());
                s_Type& argName_typeParam = ([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type { fu_STR{}, int{}, int{} }; return _; } (typeParams.upsert(argName)));
                ([&]() -> s_Type& { { s_Type& _ = argName_typeParam; if (!_) return _; } fail((("Type param name collision with argument: `"_fu + argName) + "`."_fu)); }()) = inType;
            };
            inType.quals |= q_ref;
            const s_Node& annot = argNode.items[LET_TYPE];
            if (annot)
            {
                const bool ok = (inType && trySolveTypeParams(annot, s_Type(inType), typeParams));
                if (!ok)
                    return s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} };

            };
        };
        int caseIdx = -1;
        const s_Node& pattern = ([&]() -> const s_Node& { { const s_Node& _ = items[(items.size() + FN_BODY_BACK)]; if (_) return _; } fail(""_fu); }());
        if ((pattern.kind == "pattern"_fu))
        {
            const fu_VEC<s_Node>& branches = pattern.items;
            for (int i = 0; (i < branches.size()); i++)
            {
                const s_Node& branch = branches[i];
                const fu_VEC<s_Node>& items = ([&]() -> const s_Node& { { const s_Node& _ = branch; if (_) return _; } fail(""_fu); }()).items;
                const s_Node& cond = ([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(""_fu); }());
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
        s_SolvedNode specialized = __solveFn(true, true, node, s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} }, caseIdx);
        (specialized || fail(""_fu));
        std::swap(_current_fn, current_fn0);
        std::swap(_typeParams, typeParams);
        Scope_pop(_scope, scope0);
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
    s_SolvedNode __solveStruct(const bool& solve, const s_Node& node, const s_SolvedNode& prep)
    {
        s_SolvedNode out = ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(prep); if (_) return _; } return solved(node, t_void, fu_VEC<s_SolvedNode>{}); }());
        const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail("TODO anonymous structs"_fu); }());
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
                    fields.push(s_StructField { fu_STR(([&]() -> const fu_STR& { { const fu_STR& _ = item.value; if (_.size()) return _; } fail(""_fu); }())), s_Type(([&]() -> const s_Type& { { const s_Type& _ = item.type; if (_) return _; } fail(""_fu); }())) });
                };
            };
            finalizeStruct(id, fields, module);
            DefaultCtor(id, structType, members);
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
        s_SolvedNode out = solved(node, t_void, solveNodes(node.items, s_Type{}));
        const s_SolvedNode& nextExpr = (out.items.size() ? out.items[0] : out);
        const s_Type& nextType = ([&]() -> const s_Type& { { const s_Type& _ = nextExpr.type; if (_) return _; } fail(""_fu); }());
        const int retIdx = (_current_fn.items.size() + FN_RET_BACK);
        s_SolvedNode prevExpr { _current_fn.items.mutref(retIdx) };
        const s_Type& prevType = prevExpr.type;
        if (prevType)
        {
            (isAssignable(prevType, nextType) || fail(((("Non-assignable return types: "_fu + serializeType(prevType)) + " <- "_fu) + serializeType(nextType))));
        }
        else
            _current_fn.items.mutref(retIdx) = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = nextExpr; if (_) return _; } fail(""_fu); }());

        return out;
    };
    s_SolvedNode solveJump(const s_Node& node)
    {
        return solved(node, t_void, fu_VEC<s_SolvedNode>{});
    };
    s_SolvedNode solveBinding(const s_Node& node)
    {
        const s_Node& annot = node.items[LET_TYPE];
        const s_Node& init = node.items[LET_INIT];
        s_SolvedNode s_annot = ([&]() -> s_SolvedNode { if (annot) return evalTypeAnnot(annot); else return s_SolvedNode{}; }());
        const s_Type& t_annot = s_annot.type;
        s_SolvedNode s_init = ([&]() -> s_SolvedNode { if (init) return solveNode(init, t_annot); else return s_SolvedNode{}; }());
        s_Type t_init { s_init.type };
        s_Type t_let = (t_annot ? (((node.flags & F_ARG) && !(node.flags & F_MUT)) ? add_ref(t_annot) : s_Type(t_annot)) : (((t_init.quals & q_mutref) || (node.flags & F_MUT)) ? clear_refs(t_init) : s_Type(([&]() -> const s_Type& { { const s_Type& _ = t_init; if (_) return _; } fail("Variable declarations without explicit type annotations must be initialized."_fu); }()))));
        if ((t_annot && t_init))
        {
            (isAssignable(t_annot, t_init) || fail("Type annotation does not match init expression."_fu));
        };
        if (s_init)
            s_init = maybeCopyOrMove(s_init, t_let);

        s_SolvedNode out = solved(node, t_let, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = s_annot; if (_) return _; } return s_init; }()), s_init } });
        if (!(_current_fn || (node.flags & F_FIELD)))
        {
            if (((out.flags & F_MUT) || (out.type.quals & q_mutref)))
                fail("Mutable statics are not currently allowed."_fu);

            out.kind = "global"_fu;
        };
        return out;
    };
    s_SolvedNode solveLet(const s_Node& node)
    {
        s_SolvedNode out = solveBinding(node);
        const bool global = (out.kind == "global"_fu);
        s_Target overload = Binding(out.value, ((node.flags & F_MUT) ? add_mutref(out.type) : add_ref(out.type)), (global ? "global"_fu : "var"_fu), ([&]() -> const s_SolvedNode& { if (global) return out; else return fu_DEFAULT<s_SolvedNode>::value; }()));
        if ((out.flags & F_USING))
            scope_using(overload);

        return out;
    };
    s_SolvedNode solveField(const s_Type& structType, const s_Node& node)
    {
        s_SolvedNode out = solveBinding(node);
        s_Target overload = Field(out.value, structType, out.type);
        if ((out.flags & F_USING))
            scope_using(overload);

        return out;
    };
    s_SolvedNode solveCatch(const s_Node& node)
    {
        ((node.items.size() == 3) || fail(""_fu));
        s_SolvedNode var_ok = solveNode(node.items[0], s_Type{});
        const int scope0 = Scope_push(_scope);
        s_SolvedNode var_err = solveNode(node.items[1], s_Type{});
        s_SolvedNode cahtch = solveNode(node.items[2], s_Type{});
        Scope_pop(_scope, scope0);
        (((var_err.kind == "let"_fu) && isAssignableAsArgument(var_err.type, s_Type(t_string))) || fail(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu)));
        return solved(node, var_ok.type, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { var_ok, var_err, cahtch } });
    };
    s_SolvedNode solveImport(const s_Node& node)
    {
        const fu_STR& fname = node.value;
        const fu_VEC<s_Module>& modules = ctx.modules;
        for (int i = 1; (i < modules.size()); i++)
        {
            if ((modules[i].fname == fname))
            {
                Scope_import(i);
                return createEmpty();
            };
        };
        fu::fail("Assertion failed.");
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
                    (t || fail(""_fu));
                    if ((node.value == "&"_fu))
                        return solved(node, add_ref(t), fu_VEC<s_SolvedNode>{});

                    if ((node.value == "&mut"_fu))
                        return solved(node, add_mutref(t), fu_VEC<s_SolvedNode>{});

                    if ((node.value == "[]"_fu))
                        return solved(node, createArray(t, module), fu_VEC<s_SolvedNode>{});

                }
                else if ((items.size() == 2))
                {
                    s_Type a = evalTypeAnnot(items[0]).type;
                    s_Type b = evalTypeAnnot(items[1]).type;
                    ((a && b) || fail(""_fu));
                    if ((node.value == "Map"_fu))
                        return solved(node, createMap(a, b, module), fu_VEC<s_SolvedNode>{});

                };
            }
            else
            {
                const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail(""_fu); }());
                fu_VEC<s_Target> overloads = Scope_lookup(_scope, id);
                if (overloads)
                {
                    for (int i = 0; (i < overloads.size()); i++)
                    {
                        s_Overload maybe = GET(overloads[i], module, ctx);
                        if ((maybe.kind == "type"_fu))
                            return solved(node, ([&]() -> const s_Type& { { const s_Type& _ = maybe.type; if (_) return _; } fail(""_fu); }()), fu_VEC<s_SolvedNode>{});

                    };
                };
                fail((("No type `"_fu + id) + "` in scope."_fu));
            };
        }
        else if ((node.kind == "typeparam"_fu))
        {
            const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail(""_fu); }());
            (_typeParams || fail((("Unexpected type param: `$"_fu + id) + "`."_fu)));
            s_Type type { ([&]() -> s_Type& { if (_typeParams) { s_Type& _ = _typeParams.mutref(id); if (_) return _; } fail((("No type param `$"_fu + id) + "` in scope."_fu)); }()) };
            return solved(node, type, fu_VEC<s_SolvedNode>{});
        };
        fail("TODO"_fu);
    };
    bool trySolveTypeParams(const s_Node& node, s_Type&& type, fu_COW_MAP<fu_STR, s_Type>& typeParams)
    {
        if ((node.kind == "call"_fu))
        {
            const fu_VEC<s_Node>& items = node.items;
            if (items.size())
            {
                if ((items.size() == 1))
                {
                    s_Type t = ((node.value == "&"_fu) ? tryClear_ref(type) : ((node.value == "&mut"_fu) ? tryClear_mutref(type) : ((node.value == "[]"_fu) ? tryClear_array(type, module, ctx) : ((void)fail("TODO"_fu), s_Type { fu_STR{}, int{}, int{} }))));
                    if (!t)
                        return false;

                    return trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(""_fu); }()), s_Type(t), typeParams);
                }
                else if ((items.size() == 2))
                {
                    if ((node.value == "Map"_fu))
                    {
                        s_MapFields kv = tryClear_map(type, module, ctx);
                        if (!kv)
                            return false;

                        return (trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(""_fu); }()), s_Type(kv.key), typeParams) && trySolveTypeParams(([&]() -> const s_Node& { { const s_Node& _ = items[1]; if (_) return _; } fail(""_fu); }()), s_Type(kv.value), typeParams));
                    };
                };
            }
            else
            {
                const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail(""_fu); }());
                fu_VEC<s_Target> overloads = Scope_lookup(_scope, id);
                if (overloads)
                {
                    for (int i = 0; (i < overloads.size()); i++)
                    {
                        s_Overload maybe = GET(overloads[i], module, ctx);
                        if ((maybe.kind == "type"_fu))
                            return isAssignable(([&]() -> const s_Type& { { const s_Type& _ = maybe.type; if (_) return _; } fail(""_fu); }()), type);

                    };
                };
                fail((("No type `"_fu + id) + "` in scope."_fu));
            };
        }
        else if ((node.kind == "typeparam"_fu))
        {
            const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail(""_fu); }());
            s_Type& _param = ([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type { fu_STR{}, int{}, int{} }; return _; } (typeParams.upsert(id)));
            if (_param)
            {
                s_Type inter = type_tryInter(_param, type);
                if (!inter)
                    return false;

                type = inter;
            };
            _param = clear_refs(type);
            return true;
        };
        fail("TODO"_fu);
    };
    bool evalTypePattern(const s_Node& node, const fu_COW_MAP<fu_STR, s_Type>& typeParams)
    {
        const fu_VEC<s_Node>& items = node.items;
        if (((node.kind == "call"_fu) && (items.size() == 2)))
        {
            const s_Node& left = ([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(""_fu); }());
            const s_Node& right = ([&]() -> const s_Node& { { const s_Node& _ = items[1]; if (_) return _; } fail(""_fu); }());
            if ((node.value == "->"_fu))
            {
                if (((left.kind == "typeparam"_fu) && (right.kind == "typetag"_fu)))
                {
                    const fu_STR& tag = ([&]() -> const fu_STR& { { const fu_STR& _ = right.value; if (_.size()) return _; } fail(""_fu); }());
                    const s_Type& type = ([&]() -> const s_Type& { if (left.value.size()) { const s_Type& _ = typeParams[left.value]; if (_) return _; } fail((("No type param `$"_fu + left.value) + "` in scope."_fu)); }());
                    return type_has(type, tag);
                }
                else
                {
                    fu_COW_MAP<fu_STR, s_Type> typeParams0 { _typeParams };
                    _typeParams = typeParams;
                    s_Type expect = evalTypeAnnot(right).type;
                    s_Type actual = evalTypeAnnot(left).type;
                    _typeParams = typeParams0;
                    return isAssignable(expect, actual);
                };
            }
            else if ((node.value == "&&"_fu))
                return (evalTypePattern(left, typeParams) && evalTypePattern(right, typeParams));
            else if ((node.value == "||"_fu))
                return (evalTypePattern(left, typeParams) && evalTypePattern(right, typeParams));

        };
        fail("TODO"_fu);
    };
    s_Node createRead(const fu_STR& id)
    {
        return s_Node { "call"_fu, int(F_ID), fu_STR(id), fu_VEC<s_Node>{}, s_TokenIdx(([&]() -> s_TokenIdx& { { s_TokenIdx& _ = _here; if (_) return _; } fail(""_fu); }())) };
    };
    s_SolvedNode solveCall(const s_Node& node)
    {
        const fu_STR& id = node.value;
        (id.size() || fail(""_fu));
        fu_VEC<s_SolvedNode> args = solveNodes(node.items, s_Type{});
        s_Target callTargIdx = scope_match__mutargs(id, args, node.flags);
        s_Overload callTarg = GET(callTargIdx, module, ctx);
        while (callTarg.partial)
        {
            const bool unshift = (callTarg.kind == "p-unshift"_fu);
            s_Partial partial { ([&]() -> s_Partial& { { s_Partial& _ = callTarg.partial; if (_) return _; } fail(""_fu); }()) };
            const s_Target& viaIdx = ([&]() -> const s_Target& { { const s_Target& _ = partial.via; if (_) return _; } fail(""_fu); }());
            callTargIdx = ([&]() -> const s_Target& { { const s_Target& _ = partial.target; if (_) return _; } fail(""_fu); }());
            s_Overload via = GET(viaIdx, module, ctx);
            callTarg = GET(callTargIdx, module, ctx);
            fu_VEC<s_SolvedNode> innerArgs {};
            if (!unshift)
                innerArgs = fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { ([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.mutref(0); if (_) return _; } fail(""_fu); }()) } };

            s_SolvedNode argNode = CallerNode(createRead("__partial"_fu), s_Type(([&]() -> const s_Type& { { const s_Type& _ = via.type; if (_) return _; } fail(""_fu); }())), viaIdx, fu_VEC<s_SolvedNode>(innerArgs));
            if (unshift)
                args.unshift(argNode);
            else
                args.mutref(0) = argNode;

        };
        return CallerNode(node, s_Type(([&]() -> s_Type& { { s_Type& _ = callTarg.type; if (_) return _; } fail(""_fu); }())), callTargIdx, fu_VEC<s_SolvedNode>(args));
    };
    s_SolvedNode solveArrayLiteral(const s_Node& node, const s_Type& type)
    {
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, s_Type{});
        s_Type itemType = (type ? tryClear_array(type, module, ctx) : s_Type { fu_STR{}, int{}, int{} });
        int startAt = 0;
        if ((!itemType && items.size()))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[startAt++]; if (_) return _; } fail(""_fu); }());
            itemType = clear_refs(head.type);
        };
        if (!itemType)
            fail("Cannot infer empty arraylit."_fu);

        for (int i = startAt; (i < items.size()); i++)
        {
            itemType = type_tryInter(itemType, ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(""_fu); }()).type);
            (itemType || fail("[array literal] No common supertype."_fu));
        };
        return solved(node, createArray(itemType, module), items);
    };
    s_SolvedNode createLet(const fu_STR& id, const s_Type& type, const int& flags)
    {
        return s_SolvedNode { "let"_fu, int(flags), fu_STR(id), fu_VEC<s_SolvedNode>{}, s_TokenIdx(([&]() -> s_TokenIdx& { { s_TokenIdx& _ = _here; if (_) return _; } fail(""_fu); }())), s_Type(type), s_Target{} };
    };
    s_Target injectImplicitArg__mutfn(s_SolvedNode& fnNode, const fu_STR& id, const s_Type& type)
    {
        const int scope0 = Scope_push(_scope);
        s_Target ret = Binding(id, type, "var"_fu, s_SolvedNode{});
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
            ((o.kind == "fn"_fu) || fail(""_fu));
            ((o.names.size() == o.args.size()) || fail(""_fu));
            o.args.push(type);
            o.names.push(id);
        };
        return ret;
    };
    void bindImplicitArg(fu_VEC<s_SolvedNode>& args, const int& argIdx, const fu_STR& id, const s_Type& type)
    {
        (TEST_expectImplicits || fail("Attempting to propagate implicit arguments."_fu));
        ((args.size() >= argIdx) || fail(""_fu));
        args.insert(argIdx, CallerNode(createRead(id), s_Type(type), getImplicit(id, type), fu_VEC<s_SolvedNode>{}));
    };
    s_Target getImplicit(const fu_STR& id, const s_Type& type)
    {
        fu_VEC<s_SolvedNode> args {};
        s_Target matched = scope_tryMatch__mutargs(id, args, 0, type);
        if (!matched)
        {
            if (!_current_fn)
                fail((("No implicit `"_fu + id) + "` in scope."_fu));

            matched = injectImplicitArg__mutfn(_current_fn, id, type);
            (matched || fail(""_fu));
        };
        return matched;
    };
    s_SolvedNode solveIf(const s_Node& node, s_Type&& type)
    {
        const s_Node& n0 = node.items[0];
        const s_Node& n1 = node.items[1];
        const s_Node& n2 = node.items[2];
        s_SolvedNode cond = solveNode(n0, t_bool);
        s_SolvedNode cons = (n1 ? solveNode(n1, s_Type{}) : s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} });
        s_SolvedNode alt = (n2 ? solveNode(n2, cons.type) : s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} });
        s_SolvedNode priExpr { ([&]() -> s_SolvedNode& { { s_SolvedNode& _ = cons; if (_) return _; } { s_SolvedNode& _ = alt; if (_) return _; } fail(""_fu); }()) };
        s_SolvedNode secExpr { ([&]() -> s_SolvedNode& { if (cons) { s_SolvedNode& _ = alt; if (_) return _; } return cons; }()) };
        const s_Type& priType = priExpr.type;
        const s_Type& secType = secExpr.type;
        if (!((type == t_void) || (type == t_bool)))
        {
            type = (!secType ? s_Type(priType) : type_tryInter(priType, secType));
            (type || fail("[if] No common supertype."_fu));
            if (cons)
                cons = maybeCopyOrMove(cons, type);

            if (alt)
                alt = maybeCopyOrMove(alt, type);

        };
        return solved(node, ([&]() -> s_Type& { { s_Type& _ = type; if (_) return _; } fail(""_fu); }()), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { cond, cons, alt } });
    };
    s_SolvedNode solveNot(const s_Node& node)
    {
        return solved(node, t_bool, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { solveNode(node.items[0], t_bool) } });
    };
    s_SolvedNode solveOr(const s_Node& node, s_Type&& type)
    {
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, type);
        if ((type == t_void))
            type = t_bool;

        if (!(type == t_bool))
        {
            s_Type sumType {};
            for (int i = 0; (i < items.size()); i++)
            {
                s_SolvedNode item { items.mutref(i) };
                if ((item.type == t_never))
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
                    sumType = item.type;

            };
            if (sumType)
            {
                for (int i = 0; (i < items.size()); i++)
                    items.mutref(i) = maybeCopyOrMove(items.mutref(i), sumType);

                type = sumType;
            }
            else
                type = t_bool;

        };
        return solved(node, type, items);
    };
    s_SolvedNode solveAnd(const s_Node& node, s_Type&& type)
    {
        fu_VEC<s_SolvedNode> items = solveNodes(node.items, s_Type{});
        if ((type == t_void))
            type = t_bool;

        if (!(type == t_bool))
        {
            s_Type sumType {};
            for (int i = items.size(); (i-- > 0); )
            {
                const s_SolvedNode& item = items[i];
                if ((item.type == t_never))
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
                break;
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
            s_SolvedNode head { ([&]() -> s_SolvedNode& { if ((args.size() == 1)) { s_SolvedNode& _ = args.mutref(0); if (_) return _; } fail(""_fu); }()) };
            const s_Type& headType = ([&]() -> const s_Type& { { const s_Type& _ = head.type; if (_) return _; } fail(""_fu); }());
            type = add_refs_from(headType, type);
        }
        else if (args.size())
        {
            const fu_VEC<s_Type>& arg_t = ([&]() -> const fu_VEC<s_Type>& { { const fu_VEC<s_Type>& _ = overload.args; if (_) return _; } fail(""_fu); }());
            for (int i = 0; (i < args.size()); i++)
                args.mutref(i) = maybeCopyOrMove(([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.mutref(i); if (_) return _; } fail(""_fu); }()), arg_t[i]);

        };
        s_SolvedNode out = solved(node, type, args);
        out.target = target;
        return out;
    };
    s_SolvedNode maybeCopyOrMove(const s_SolvedNode& node, const s_Type& slot)
    {
        const int& q = slot.quals;
        if ((q & q_ref))
            return node;

        if (!(node.type.quals & q_ref))
            return node;

        if (!(q & q_copy))
            fail("Needs an explicit STEAL or CLONE."_fu);

        if (WARN_ON_IMPLICIT_COPY)
        {
        };
        return s_SolvedNode { "copy"_fu, int{}, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { node } }, s_TokenIdx(node.token), clear_refs(node.type), s_Target{} };
    };
    fu_VEC<s_SolvedNode> solveNodes(const fu_VEC<s_Node>& nodes, const s_Type& type)
    {
        fu_VEC<s_SolvedNode> result {};
        s_TokenIdx here0 { _here };
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
                _here = ([&]() -> const s_TokenIdx& { { const s_TokenIdx& _ = node.token; if (_) return _; } return _here; }());
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
                _here = ([&]() -> const s_TokenIdx& { { const s_TokenIdx& _ = node.token; if (_) return _; } return _here; }());
                result.mutref(i) = unorderedPrep(node);
            };
            for (int i = i0; (i < i1); i++)
            {
                const s_Node& node = nodes[i];
                if (node)
                {
                    _here = ([&]() -> const s_TokenIdx& { { const s_TokenIdx& _ = node.token; if (_) return _; } return _here; }());
                    result.mutref(i) = unorderedSolve(node, result.mutref(i));
                };
            };
            ((i1 > i0) || fail(""_fu));
            i = (i1 - 1);
        };
        ((result.size() == nodes.size()) || fail(""_fu));
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
s_SolverOutput solve(const s_Node& parse, const s_TEMP_Context& ctx, s_Module& module)
{
    return (sf_solve { parse, ctx, module }).solve_EVAL();
}


s_Scope listGlobals(const s_Module& module)
{
    s_Scope scope {};
    Scope_Typedef(scope, "i8"_fu, t_i8, module);
    Scope_Typedef(scope, "i16"_fu, t_i16, module);
    Scope_Typedef(scope, "i32"_fu, t_i32, module);
    Scope_Typedef(scope, "i64"_fu, t_i64, module);
    Scope_Typedef(scope, "u8"_fu, t_u8, module);
    Scope_Typedef(scope, "u16"_fu, t_u16, module);
    Scope_Typedef(scope, "u32"_fu, t_u32, module);
    Scope_Typedef(scope, "u64"_fu, t_u64, module);
    Scope_Typedef(scope, "f32"_fu, t_f32, module);
    Scope_Typedef(scope, "f64"_fu, t_f64, module);
    Scope_Typedef(scope, "bool"_fu, t_bool, module);
    Scope_Typedef(scope, "void"_fu, t_void, module);
    Scope_Typedef(scope, "string"_fu, t_string, module);
    Scope_Typedef(scope, "never"_fu, t_never, module);
    return scope;
}

                                #ifndef DEF_prelude_src
                                #define DEF_prelude_src
inline const fu_STR prelude_src = "\n\n\n// Some lolcode.\n\nfn __native_pure(): never never;\nfn __native_pure(id: string): never never;\nfn __native_pure(id: string, opt: string): never never;\n\nfn STEAL (a: &mut $T): $T __native_pure;\nfn CLONE (a: &    $T): $T __native_pure;\n\nfn print(a: $A): void __native_pure;\nfn print(a: $A, b: $B): void __native_pure;\nfn print(a: $A, b: $B, c: $C): void __native_pure;\nfn print(a: $A, b: $B, c: $C, d: $D): void __native_pure;\nfn print(a: $A, b: $B, c: $C, d: $D, e: $E): void __native_pure;\nfn print(a: $A, b: $B, c: $C, d: $D, e: $E, f: $F): void __native_pure;\n\n\n// Arithmetics.\n\nfn +(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;\nfn +(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\n\nfn -(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;\nfn -(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\nfn *(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\n\nfn /(a: $T, b: $T)\n    // case ($T -> @floating_point):                       $T __native_pure;\n    // case ($T -> @integral && $b -> @non_zero):          $T __native_pure;\n    case ($T -> @arithmetic): $T __native_pure;\n\nfn %(a: $T, b: $T)\n    // case ($T -> @floating_point):                       $T __native_pure;\n    // case ($T -> @integral && $b -> @non_zero):          $T __native_pure;\n    case ($T -> @arithmetic): $T __native_pure;\n\nfn ++(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;\nfn --(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;\nfn +=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native_pure;\nfn -=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native_pure;\n\nfn ==(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn !=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn > (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn < (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn >=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn <=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\n\n\n// Bitwise.\n\nfn ~(a: $T)                 case ($T -> @integral):     $T __native_pure;\nfn &(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn |(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn ^(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn <<(a: $T, b: $T)         case ($T -> @integral):     $T __native_pure;\nfn >>(a: $T, b: $T)         case ($T -> @integral):     $T __native_pure;\n\nfn &=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\nfn |=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\nfn ^=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\n\n\n// Logic.\n\nfn true (): bool __native_pure;\nfn false(): bool __native_pure;\n\n\n// Assignment.\n\nfn   =(a: &mut $T, b: $T): &mut $T __native_pure;\nfn ||=(a: &mut $T, b: $T): &mut $T __native_pure;\n\nfn SWAP(a: &mut $T, b: &mut $T): void __native_pure;\n\n\n// Arrays.\n\nfn len (a: $T[]): i32 __native_pure;\nfn find(a: $T[], b: $T): i32 __native_pure;\nfn has (a: $T[], b: $T): bool __native_pure;\n\nfn [](a: $T[], i: i32)\n    case ($a -> &mut $T[]): &mut $T __native_pure;\n    case ($a -> &    $T[]): &    $T __native_pure;\n\nfn    push(a: &mut $T[], b: $T): void __native_pure;\nfn unshift(a: &mut $T[], b: $T): void __native_pure;\nfn  insert(a: &mut $T[], i: i32, b: $T): void __native_pure;\n\nfn  slice(a: $T[], i0: i32, i1: i32): $T[] __native_pure;\nfn  slice(a: $T[], i0: i32): $T[] __native_pure;\n\nfn splice(a: &mut $T[], i: i32, N: i32): void __native_pure;\nfn    pop(a: &mut $T[]): void __native_pure;\n\nfn  clear(a: &mut $T[]): void __native_pure;\nfn resize(a: &mut $T[], len: i32): void __native_pure;\nfn shrink(a: &mut $T[], len: i32): void __native_pure;\n\nfn move(a: &mut $T[], from: i32, to: i32): void __native_pure;\nfn sort(a: &mut $T[]): void __native_pure;\n\n\n// Concats.\n//\n//  flatten: str/arr a+b+c chains into a n-ary binop -\n//  adjoin : str/arr chain adjacent += for the same left-arg.\n//\n//      Currently just testing notations,\n//        but can we make this more generic?\n//          Will it be useful? Array ops are really\n//            the only thing we care about optimizing.\n\nfn +(a: $T[], b: $T[]): $T[] __native_pure( 'arr+', 'flatjoin' );\nfn +(a: $T[], b: $T  ): $T[] __native_pure( 'arr+', 'flatjoin' );\nfn +(a: $T  , b: $T[]): $T[] __native_pure( 'arr+', 'flatjoin' );\n\nfn +=(a: &mut string, b: string): &mut string __native_pure( 'arr+', 'flatjoin' );\nfn + (a:      string, b: string):      string __native_pure( 'arr+', 'flatjoin' );\n\n\n// Strings.\n\nfn len(a: string): i32 __native_pure;\nfn  [](a: string, i: i32): string __native_pure;\n\nfn ==(a: string, b: string): bool __native_pure;\nfn !=(a: string, b: string): bool __native_pure;\nfn  >(a: string, b: string): bool __native_pure;\nfn  <(a: string, b: string): bool __native_pure;\nfn >=(a: string, b: string): bool __native_pure;\nfn <=(a: string, b: string): bool __native_pure;\n\nfn   find(a: string, b: string): i32 __native_pure;\nfn    has(a: string, b: string): bool __native_pure;\nfn starts(a: string, with: string): bool __native_pure;\n\nfn slice (a: string, i0: i32, i1: i32): string __native_pure;\nfn slice (a: string, i0: i32): string __native_pure;\n\nfn substr(a: string, i0: i32, i1: i32): string __native_pure;\nfn char  (a: string, i0: i32): i32 __native_pure;\n\n\n// TODO: .replace() is a faster impl of .split().join().\n//  How do we express this so that .split.joins are automatically promoted?\n//   This would be generally useful, e.g.\n//    .map.maps and .map.filters could use this to skip allocs.\n\nfn   split(str: string, sep: string): string[] __native_pure;\nfn    join(a: string[], sep: string): string __native_pure;\nfn replace(in: string, all: string, with: string): string __native_pure;\n\n\n// Maps.\n\nfn [](a: Map($K, $V), b: &$K)\n    case ($a -> &mut Map($K, $V)): &mut $V __native_pure;\n    case ($a -> &    Map($K, $V)): &    $V __native_pure;\n\nfn keys  (a: Map($K, $V)): $K[] __native_pure;\nfn values(a: Map($K, $V)): $V[] __native_pure;\nfn has   (a: Map($K, $V), b: $K): bool __native_pure;\nfn count (a: Map($K, $V)): i32 __native_pure;\n\n\n// Assertions, bugs & fails.\n\nfn throw(reason: string): never __native_pure;\nfn assert(): never __native_pure;\n\n\n// Butt plugs.\n\n// TODO we should go for an any $B -> call stringify(b) macro.\nfn +(a: string, b: i32): string __native_pure;\nfn +(a: string, b: f64): string __native_pure;\nfn +(a: i32, b: string): string __native_pure;\nfn +(a: f64, b: string): string __native_pure;\n\n// TODO fix impure io.\nfn now_hr(): f64 __native_pure;\nfn now_utc(): f64 __native_pure;\n\nfn env_get(key: string): string __native_pure;\n\nfn file_size(path: string): i32 __native_pure;\nfn file_read(path: string): string __native_pure;\nfn file_write(path: string, body: string): bool __native_pure;\n\nfn shell_exec(cmd: string): i32 __native_pure;\nfn shell_exec(cmd: string, stdout: &mut string): i32 __native_pure;\n\nfn hash_tea(str: string): string __native_pure;\n\nfn i32(v: f64): i32 __native_pure;\n\nfn exit(code: i32): never __native_pure;\n\n"_fu;
                                #endif

s_TEMP_Context solvePrelude()
{
    s_TEMP_Context ctx {};
    s_Module module { getModule(""_fu, ctx) };
    s_LexerOutput lexed = lex(prelude_src, "__prelude"_fu);
    s_Node root = parse(0, "__prelude"_fu, lexed.tokens).root;
    s_SolverOutput solved = solve(root, ctx, module);
    module.out.solve = solved;
    setModule(module, ctx);
    return ctx;
}

                                #ifndef DEF_CTX_PROTO
                                #define DEF_CTX_PROTO
inline const s_TEMP_Context CTX_PROTO = solvePrelude();
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

                                #ifndef DEF_F_POSTFIX
                                #define DEF_F_POSTFIX
inline const int F_POSTFIX = (1 << 3);
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

struct sf_cpp_codegen
{
    const s_SolvedNode& root;
    const s_Scope& scope;
    const s_Module& module;
    const s_TEMP_Context& ctx;
    fu_COW_MAP<fu_STR, fu_STR> _libs {};
    fu_COW_MAP<fu_STR, fu_STR> _tfwd {};
    fu_COW_MAP<fu_STR, fu_STR> _ffwd {};
    fu_STR _tdef {};
    fu_STR _fdef {};
    fu_STR _indent = "\n"_fu;
    int _fnN {};
    int _clsrN {};
    int _faasN {};
    s_Overload GET(const s_Target& target, const s_Module& module, const s_TEMP_Context& ctx)
    {
        ((target.index > 0) || fu::fail("Assertion failed."));
        const s_Module& m = ((target.modid == module.modid) ? module : ctx.modules[target.modid]);
        return m.out.solve.scope.overloads[(target.index - 1)];
    };
    [[noreturn]] fu::never fail(fu_STR&& reason)
    {
        fu::fail(reason);
    };
    void include(const fu_STR& lib)
    {
        if (!fu::has(_libs, lib))
            (_libs.upsert(lib) = (("#include "_fu + lib) + "\n"_fu));

    };
    fu_STR typeAnnot(const s_Type& type, const int& mode)
    {
        fu_STR fwd = typeAnnotBase(type);
        if (((mode & M_RETVAL) && (type.canon == "never"_fu)))
            return ("[[noreturn]] "_fu + fwd);

        if ((type.quals & q_mutref))
            return (fwd + "&"_fu);

        if ((type.quals & q_ref))
            return (("const "_fu + fwd) + "&"_fu);

        if (((mode & M_CONST) && (type.quals & q_trivial)))
            return ("const "_fu + fwd);

        if (((mode & M_ARGUMENT) && !(type.quals & q_trivial)))
            return (fwd + "&&"_fu);

        return fwd;
    };
    fu_STR typeAnnotBase(const s_Type& type)
    {
        const fu_STR& c = type.canon;
        if ((c == "i8"_fu))
            return "i8"_fu;

        if ((c == "i16"_fu))
            return "i16"_fu;

        if ((c == "i32"_fu))
            return "int"_fu;

        if ((c == "i64"_fu))
            return "i64"_fu;

        if ((c == "u8"_fu))
            return "u8"_fu;

        if ((c == "u16"_fu))
            return "u16"_fu;

        if ((c == "u32"_fu))
            return "u32"_fu;

        if ((c == "u64"_fu))
            return "u64"_fu;

        if ((c == "f32"_fu))
            return "f32"_fu;

        if ((c == "f64"_fu))
            return "f64"_fu;

        if ((c == "bool"_fu))
            return "bool"_fu;

        if ((c == "void"_fu))
            return "void"_fu;

        if ((c == "string"_fu))
            return annotateString();

        if ((c == "never"_fu))
            return annotateNever();

        const s_Struct& tdef = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(type, module, ctx); if (_) return _; } fail(("TODO: "_fu + type.canon)); }());
        const fu_STR& k = tdef.kind;
        if ((k == "struct"_fu))
        {
            if (!fu::has(_tfwd, type.canon))
            {
                (_tfwd.upsert(type.canon) = (("\nstruct "_fu + type.canon) + ";"_fu));
                _tdef += declareStruct(type, tdef);
            };
            return type.canon;
        };
        if ((k == "array"_fu))
        {
            annotateVector();
            fu_STR item = typeAnnot(tdef.fields[0].type, 0);
            return (("fu_VEC<"_fu + item) + ">"_fu);
        };
        if ((k == "map"_fu))
        {
            fu_STR k = typeAnnot(tdef.fields[0].type, 0);
            fu_STR v = typeAnnot(tdef.fields[1].type, 0);
            annotateMap();
            return (((("fu_COW_MAP<"_fu + k) + ", "_fu) + v) + ">"_fu);
        };
        fail(("TODO: "_fu + tdef.kind));
    };
    fu_STR declareStruct(const s_Type& t, const s_Struct& s)
    {
        fu_STR def = (((((("\n                                #ifndef DEF_"_fu + t.canon) + "\n                                #define DEF_"_fu) + t.canon) + "\nstruct "_fu) + t.canon) + "\n{"_fu);
        fu_STR indent = "\n    "_fu;
        if ((s.flags & F_DESTRUCTOR))
        {
            def += "\n    struct Data\n    {"_fu;
            indent += "    "_fu;
        };
        const fu_VEC<s_StructField>& fields = s.fields;
        for (int i = 0; (i < fields.size()); i++)
        {
            const s_StructField& field = fields[i];
            def += ((((indent + typeAnnot(field.type, 0)) + " "_fu) + ID(field.id)) + ";"_fu);
        };
        if ((s.flags & F_DESTRUCTOR))
        {
            def += "\n    };"_fu;
            def += "\n"_fu;
            def += "\n    Data data;"_fu;
            def += "\n    bool dtor = false;"_fu;
            def += "\n"_fu;
            def += (("\n    ~"_fu + t.canon) + "() noexcept;"_fu);
            def += (("\n    inline "_fu + t.canon) + "(Data data) noexcept : data(data) {};"_fu);
            def += (((("\n    "_fu + t.canon) + "(const "_fu) + t.canon) + "&) = delete;"_fu);
            def += (((("\n    "_fu + t.canon) + "& operator=(const "_fu) + t.canon) + "&) = delete;"_fu);
            def += (((("\n    "_fu + t.canon) + "("_fu) + t.canon) + "&&) noexcept;"_fu);
            def += (((("\n    "_fu + t.canon) + "& operator=("_fu) + t.canon) + "&&) noexcept;"_fu);
        };
        def += "\n    explicit operator bool() const noexcept"_fu;
        def += "\n    {"_fu;
        def += "\n        return false"_fu;
        for (int i = 0; (i < fields.size()); i++)
            def += ("\n            || "_fu + boolWrap(fields[i].type, (((s.flags & F_DESTRUCTOR) ? "data."_fu : ""_fu) + ID(fields[i].id))));

        def += "\n        ;"_fu;
        def += "\n    }"_fu;
        return (def + "\n};\n                                #endif\n"_fu);
    };
    fu_STR collectDedupes(const fu_COW_MAP<fu_STR, fu_STR>& dedupes)
    {
        fu_STR out = ""_fu;
        fu_VEC<fu_STR> keys = fu_KEYS(dedupes);
        ([&](auto& _) { std::sort(_.mut_begin(), _.mut_end()); } (keys));
        for (int i = 0; (i < keys.size()); i++)
            out += dedupes[keys.mutref(i)];

        return out;
    };
    fu_STR cgSpecs()
    {
        fu_STR src = ""_fu;
        const fu_COW_MAP<fu_STR, s_SolvedNode>& specs = module.out.specs;
        fu_VEC<fu_STR> keys = fu_KEYS(specs);
        for (int i = 0; (i < keys.size()); i++)
        {
            const fu_STR& k = keys[i];
            if ((fu_TO_STR(k[0]) == "0"_fu))
            {
                continue;
            };
            const s_SolvedNode& s = specs[k];
            if (s.target)
                src += cgNode(s, 0);

        };
        return src;
    };
    fu_STR cgRoot(const s_SolvedNode& root)
    {
        fu_STR specs = cgSpecs();
        fu_STR src = cgStatements(root.items);
        fu_STR header = (((((collectDedupes(_libs) + collectDedupes(_tfwd)) + collectDedupes(_ffwd)) + specs) + _tdef) + _fdef);
        return (header + src);
    };
    fu_STR ID(const fu_STR& id)
    {
        if ((id == "this"_fu))
            return "_"_fu;

        if ((id == "template"_fu))
            return "tempatle"_fu;

        if ((id == "catch"_fu))
            return "cahtch"_fu;

        if ((id == "not"_fu))
            return "nott"_fu;

        if ((id == "and"_fu))
            return "andd"_fu;

        if ((id == "or"_fu))
            return "orr"_fu;

        return id;
    };
    fu_STR cgStatements(const fu_VEC<s_SolvedNode>& nodes)
    {
        fu_STR src = ""_fu;
        fu_VEC<fu_STR> lines = cgNodes(nodes, M_STMT);
        for (int i = 0; (i < lines.size()); i++)
        {
            const fu_STR& line = lines[i];
            if (line.size())
                src += ((_indent + line) + ((last(line) == ";"_fu) ? "\n"_fu : ";"_fu));

        };
        return src;
    };
    fu_STR blockWrap(const fu_VEC<s_SolvedNode>& nodes, const bool& skipCurlies)
    {
        fu_STR indent0 { _indent };
        _indent += "    "_fu;
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
            return items[0];

        fu_STR src = "("_fu;
        for (int i = 0; (i < items.size()); i++)
        {
            if (i)
                src += ", "_fu;

            if ((i < (items.size() - 1)))
                src += "(void)"_fu;

            src += items[i];
        };
        return (src + ")"_fu);
    };
    fu_STR try_cgFnAsStruct(const s_SolvedNode& fn)
    {
        const s_SolvedNode& body = fn.items[(fn.items.size() + FN_BODY_BACK)];
        if ((!body || (body.kind != "block"_fu)))
            return ""_fu;

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
            return ""_fu;

        fu_STR evalName = (fn.value + "_EVAL"_fu);
        s_SolvedNode restFn = s_SolvedNode { "fn"_fu, (fn.flags | F_CLOSURE), fu_STR(evalName), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { fn.items[(fn.items.size() - 2)], s_SolvedNode { "block"_fu, int{}, fu_STR{}, slice(items, end, items.size()), s_TokenIdx(fn.token), s_Type(t_void), s_Target{} } } }, s_TokenIdx(fn.token), s_Type(t_void), s_Target{} };
        fu_VEC<s_SolvedNode> head = ((slice(fn.items, 0, (fn.items.size() + FN_ARGS_BACK)) + slice(items, 0, end)) + fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { restFn } });
        ((_clsrN == 0) || fail(""_fu));
        _clsrN--;
        fu_STR structName = ("sf_"_fu + fn.value);
        fu_STR src = ((("\nstruct "_fu + structName) + blockWrap(head, false)) + ";"_fu);
        
        {
            fu_VEC<fu_STR> args {};
            for (int i = 0; (i < (fn.items.size() + FN_ARGS_BACK)); i++)
            {
                const s_SolvedNode& argNode = fn.items[i];
                const s_Type& argType = argNode.type;
                const fu_STR& arg = argNode.value;
                args.push(((argType.quals & q_ref) ? fu_STR(arg) : cgSteal(arg)));
            };
            src += "\n"_fu;
            src += cgFnSignature(fn);
            src += (((((("\n{\n    return ("_fu + structName) + " { "_fu) + fu::join(args, ", "_fu)) + " })."_fu) + evalName) + "();\n}\n\n"_fu);
        };
        _clsrN++;
        return src;
    };
    fu_STR cgFnSignature(const s_SolvedNode& fn)
    {
        const fu_VEC<s_SolvedNode>& items = fn.items;
        const s_SolvedNode& ret = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() + FN_RET_BACK)]; if (_) return _; } fail(""_fu); }());
        fu_STR annot = typeAnnot(([&]() -> const s_Type& { { const s_Type& _ = ret.type; if (_) return _; } fail(""_fu); }()), M_RETVAL);
        const int closure = ([&]() -> int { if (!!_clsrN) return (fn.flags & F_CLOSURE); else return int{}; }());
        fu_STR src = (closure ? (("const auto& "_fu + fn.value) + " = [&]("_fu) : (((annot + " "_fu) + fn.value) + "("_fu));
        if (!hasIdentifierChars(fn.value))
            src = (((annot + " operator"_fu) + fn.value) + "("_fu);

        for (int i = 0; (i < (items.size() + FN_ARGS_BACK)); i++)
        {
            if (i)
                src += ", "_fu;

            src += binding(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(""_fu); }()), false, false);
        };
        src += (closure ? (") -> "_fu + annot) : ")"_fu);
        return src;
    };
    void ensureFwdDecl(const s_Target& target)
    {
        s_Overload overload = GET(target, module, ctx);
        if ((overload.kind != "fn"_fu))
            return;

        fu_STR ffwdKey = ((target.modid + "#"_fu) + target.index);
        if (fu::has(_ffwd, ffwdKey))
            return;

        const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = overload.name; if (_.size()) return _; } fail(""_fu); }());
        const s_Type& ret = ([&]() -> const s_Type& { { const s_Type& _ = overload.type; if (_) return _; } fail(""_fu); }());
        fu_STR annot = typeAnnot(ret, M_RETVAL);
        const bool isOp = !hasIdentifierChars(id);
        if ((isOp && (id != "=="_fu)))
            return;

        fu_STR src = (isOp ? (((("\n"_fu + annot) + " operator"_fu) + id) + "("_fu) : (((("\n"_fu + annot) + " "_fu) + id) + "("_fu));
        const fu_VEC<s_Type>& arg_t = overload.args;
        for (int i = 0; (i < arg_t.size()); i++)
        {
            if (i)
                src += ", "_fu;

            src += typeAnnot(arg_t[i], M_ARGUMENT);
        };
        src += ");"_fu;
        (_ffwd.upsert(ffwdKey) = src);
        return;
    };
    fu_STR cgFn(const s_SolvedNode& fn)
    {
        if (!fn.items.size())
            return ""_fu;

        if (((_faasN == 0) && (fn.flags & F_HAS_CLOSURE)))
        {
            _faasN++;
            fu_STR src = try_cgFnAsStruct(fn);
            _faasN--;
            if (src.size())
            {
                _fdef += src;
                return ""_fu;
            };
        };
        const int f0 = _fnN;
        const int c0 = _clsrN;
        fu_STR indent0 { _indent };
        _fnN++;
        if ((fn.flags & F_CLOSURE))
            _clsrN++;

        const fu_VEC<s_SolvedNode>& items = fn.items;
        const s_SolvedNode& body = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() + FN_BODY_BACK)]; if (_) return _; } fail(""_fu); }());
        if (!(fn.flags & F_CLOSURE))
            _indent = "\n"_fu;

        fu_STR src = cgFnSignature(fn);
        if (((src != "int main()"_fu) && !(fn.flags & F_CLOSURE) && fu::has(_fdef, ([&]() -> const fu_STR& { { const fu_STR& _ = fn.value; if (_.size()) return _; } fail(""_fu); }()))))
            ensureFwdDecl(fn.target);

        if ((body.kind == "block"_fu))
            src += cgBlock(body);
        else
            src += blockWrap(fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { body } }, false);

        _fnN = f0;
        _clsrN = c0;
        _indent = indent0;
        if ((fn.flags & F_DESTRUCTOR))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[0]; if (_) return _; } fail(""_fu); }());
            const fu_STR& name = head.type.canon;
            src += (((("\n\n"_fu + name) + "::~"_fu) + name) + "() noexcept"_fu);
            src += "\n{"_fu;
            src += "\n    if (!dtor)"_fu;
            src += "\n    {"_fu;
            src += "\n        dtor = true;"_fu;
            src += "\n        free(*this);"_fu;
            src += "\n    }"_fu;
            src += "\n}"_fu;
            include("<cassert>"_fu);
            include("<utility>"_fu);
            src += (((((("\n\n"_fu + name) + "::"_fu) + name) + "("_fu) + name) + "&& src) noexcept"_fu);
            src += "\n    : data(std::move(src.data))"_fu;
            src += "\n{"_fu;
            src += "\n    assert(!src.dtor);"_fu;
            src += "\n    dtor = src.dtor;"_fu;
            src += "\n    src.dtor = true;"_fu;
            src += "\n}"_fu;
            include("<cstring>"_fu);
            src += (((((("\n\n"_fu + name) + "& "_fu) + name) + "::operator=("_fu) + name) + "&& src) noexcept"_fu);
            src += "\n{"_fu;
            src += "\n    if (&src != this)"_fu;
            src += "\n    {"_fu;
            src += (("\n        char temp[sizeof("_fu + name) + ")];"_fu);
            src += (("\n        std::memcpy(temp, this, sizeof("_fu + name) + "));"_fu);
            src += (("\n        std::memcpy(this, &src, sizeof("_fu + name) + "));"_fu);
            src += (("\n        std::memcpy(&src, temp, sizeof("_fu + name) + "));"_fu);
            src += "\n    }"_fu;
            src += "\n"_fu;
            src += "\n    return *this;"_fu;
            src += "\n}"_fu;
        };
        if ((fn.flags & F_CLOSURE))
            return src;

        _fdef += (("\n"_fu + src) + "\n"_fu);
        return ""_fu;
    };
    fu_STR binding(const s_SolvedNode& node, const bool doInit, const bool forceMut)
    {
        const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail(""_fu); }());
        fu_STR annot = typeAnnot(node.type, (((((node.flags & F_MUT) == 0) && !forceMut) ? int(M_CONST) : 0) | (((node.flags & F_ARG) == 0) ? 0 : int(M_ARGUMENT))));
        fu_STR head = ((([&]() -> const fu_STR& { { const fu_STR& _ = annot; if (_.size()) return _; } fail(""_fu); }()) + " "_fu) + ID(id));
        s_SolvedNode init = (node.items ? s_SolvedNode(node.items[LET_INIT]) : s_SolvedNode { fu_STR{}, int{}, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx{}, s_Type{}, s_Target{} });
        if ((!doInit || (node.flags & F_ARG)))
            return head;

        if (init)
        {
            if (((init.kind == "copy"_fu) && !(node.type.quals & q_ref)))
            {
                fu_STR expr = cgNode(only(init.items), 0);
                if ((node.type.quals & q_trivial))
                    return ((head + " = "_fu) + expr);

                return (((head + " { "_fu) + expr) + " }"_fu);
            };
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
            src = slice(src, 6);

        _fdef += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\ninline const "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);
        return ""_fu;
    };
    void cgForeignGlobal(const s_Target& target)
    {
        fu_STR key = ((target.modid + "#"_fu) + target.index);
        if (fu::has(_ffwd, key))
            return;

        (_ffwd.upsert(key) = ""_fu);
        s_Overload o = GET(target, module, ctx);
        cgGlobal(o.constant);
    };
    fu_STR cgReturn(const s_SolvedNode& node)
    {
        if (node.items)
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(""_fu); }());
            fu_STR src = cgNode(head, 0);
            if ((head.type == t_never))
                return src;

            return ("return "_fu + src);
        };
        return "return"_fu;
    };
    fu_STR cgJump(const s_SolvedNode& node)
    {
        if (node.value.size())
            return ((("goto L_"_fu + node.value) + "_"_fu) + fu_TO_STR(node.kind[0]));

        return node.kind;
    };
    fu_STR cgStringLiteral(const s_SolvedNode& node)
    {
        annotateString();
        fu_STR esc = ""_fu;
        for (int i = 0; (i < node.value.size()); i++)
        {
            fu_STR c = fu_TO_STR(node.value[i]);
            if ((c == "\n"_fu))
                esc += "\\n"_fu;
            else if ((c == "\r"_fu))
                esc += "\\r"_fu;
            else if ((c == "\t"_fu))
                esc += "\\t"_fu;
            else if ((c == "\v"_fu))
                esc += "\\v"_fu;
            else if ((c == "\\"_fu))
                esc += "\\\\"_fu;
            else if ((c == "\""_fu))
                esc += "\\\""_fu;
            else
                esc += c;

        };
        return (("\""_fu + esc) + "\"_fu"_fu);
    };
    fu_STR cgArrayLiteral(const s_SolvedNode& node)
    {
        fu_VEC<fu_STR> items = cgNodes(node.items, 0);
        if (!items.size())
            return cgDefault(node.type);

        s_Type itemType = ([&]() -> s_Type { { s_Type _ = tryClear_array(node.type, module, ctx); if (_) return _; } fail(""_fu); }());
        fu_STR itemAnnot = typeAnnot(itemType, 0);
        fu_STR arrayAnnot = typeAnnot(node.type, 0);
        return (((((((arrayAnnot + " { "_fu) + arrayAnnot) + "::INIT<"_fu) + items.size()) + "> { "_fu) + fu::join(items, ", "_fu)) + " } }"_fu);
    };
    fu_STR cgDefaultInit(const s_SolvedNode& node)
    {
        return cgArrayLiteral(node);
    };
    bool hasNonIdentifierChars(const fu_STR& id)
    {
        for (int i = 0; (i < id.size()); i++)
        {
            fu_STR c = fu_TO_STR(id[i]);
            if (((c == "_"_fu) || ((c >= "a"_fu) && (c <= "z"_fu)) || ((c >= "A"_fu) && (c <= "Z"_fu)) || ((c >= "0"_fu) && (c <= "9"_fu))))
            {
            }
            else
                return true;

        };
        return false;
    };
    fu_STR cgCall(const s_SolvedNode& node, const int& mode)
    {
        s_Overload target = ([&]() -> s_Overload { { s_Overload _ = GET(node.target, module, ctx); if (_) return _; } fail(""_fu); }());
        fu_VEC<fu_STR> items = cgNodes(node.items, 0);
        if ((target.kind == "defctor"_fu))
        {
            const s_Type& head = ([&]() -> const s_Type& { { const s_Type& _ = target.type; if (_) return _; } fail(""_fu); }());
            const s_Struct& type = ([&]() -> const s_Struct& { { const s_Struct& _ = lookupType(head, module, ctx); if (_) return _; } fail(""_fu); }());
            fu_STR open = " { "_fu;
            fu_STR close = " }"_fu;
            if ((type.flags & F_DESTRUCTOR))
            {
                open = ((" { "_fu + head.canon) + "::Data { "_fu);
                close = " }}"_fu;
            };
            return (((head.canon + open) + fu::join(items, ", "_fu)) + close);
        };
        const fu_STR& id = ([&]() -> const fu_STR& { { const fu_STR& _ = target.name; if (_.size()) return _; } fail(""_fu); }());
        if ((target.kind == "global"_fu))
        {
            if ((node.target.modid != module.modid))
                cgForeignGlobal(node.target);

            return ID(id);
        };
        if ((target.kind == "var"_fu))
            return ID(id);

        if ((target.kind == "field"_fu))
        {
            fu_STR sep = "."_fu;
            const s_Struct& parent = lookupType(node.items[0].type, module, ctx);
            if ((parent.flags & F_DESTRUCTOR))
                sep = ".data."_fu;

            return ((items.mutref(0) + sep) + ID(id));
        };
        if ((node.target.modid && (node.target.modid != module.modid)))
            ensureFwdDecl(node.target);

        if (hasNonIdentifierChars(id))
        {
            const fu_VEC<s_SolvedNode>& nodes = ([&]() -> const fu_VEC<s_SolvedNode>& { { const fu_VEC<s_SolvedNode>& _ = node.items; if (_) return _; } fail(""_fu); }());
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = nodes[0]; if (_) return _; } fail(""_fu); }());
            if ((items.size() == 1))
                return ((node.flags & F_POSTFIX) ? (items.mutref(0) + id) : (id + items.mutref(0)));

            if ((items.size() == 2))
            {
                if ((id == "[]"_fu))
                {
                    if ((head.type.canon == "string"_fu))
                        return (((("fu_TO_STR("_fu + items.mutref(0)) + "["_fu) + items.mutref(1)) + "])"_fu);

                    if ((head.type.quals & q_mutref))
                        return (((items.mutref(0) + ".mutref("_fu) + items.mutref(1)) + ")"_fu);

                    return (((items.mutref(0) + "["_fu) + items.mutref(1)) + "]"_fu);
                };
                if ((id == "="_fu))
                {
                    if (((head.kind == "call"_fu) && (head.value == "[]"_fu) && (head.items.size() == 2)))
                    {
                        if (type_isMap(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(""_fu); }()).type))
                            return (((((("("_fu + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(""_fu); }()), 0)) + ".upsert("_fu) + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[1]; if (_) return _; } fail(""_fu); }()), 0)) + ") = "_fu) + items.mutref(1)) + ")"_fu);

                    };
                };
                if ((id == "||="_fu))
                {
                    if (((head.kind == "call"_fu) && (head.value == "[]"_fu) && (head.items.size() == 2)))
                    {
                        if (type_isMap(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(""_fu); }()).type))
                            items.mutref(0) = (((cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[0]; if (_) return _; } fail(""_fu); }()), 0) + ".upsert("_fu) + cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = head.items[1]; if (_) return _; } fail(""_fu); }()), 0)) + ")"_fu);

                    };
                    fu_STR annot = typeAnnot(head.type, 0);
                    return (((((((((("([&]("_fu + annot) + " _) -> "_fu) + annot) + " { if (!"_fu) + boolWrap(head.type, "_"_fu)) + ") _ = "_fu) + items.mutref(1)) + "; return _; } ("_fu) + items.mutref(0)) + "))"_fu);
                };
                if ((mode & M_STMT))
                    return ((((items.mutref(0) + " "_fu) + id) + " "_fu) + items.mutref(1));
                else
                    return (((((("("_fu + items.mutref(0)) + " "_fu) + id) + " "_fu) + items.mutref(1)) + ")"_fu);

            };
        };
        if (((id == "len"_fu) && (items.size() == 1)))
            return (items.mutref(0) + ".size()"_fu);

        if (((id == "push"_fu) && (items.size() == 2)))
            return (((items.mutref(0) + ".push("_fu) + items.mutref(1)) + ")"_fu);

        if (((id == "pop"_fu) && (items.size() == 1)))
            return (items.mutref(0) + ".pop()"_fu);

        if (((id == "unshift"_fu) && (items.size() == 2)))
            return (((items.mutref(0) + ".unshift("_fu) + items.mutref(1)) + ")"_fu);

        if (((id == "insert"_fu) && (items.size() == 3)))
            return (((((items.mutref(0) + ".insert("_fu) + items.mutref(1)) + ", "_fu) + items.mutref(2)) + ")"_fu);

        if (((id == "splice"_fu) && (items.size() == 3)))
            return (((((items.mutref(0) + ".splice("_fu) + items.mutref(1)) + ", "_fu) + items.mutref(2)) + ")"_fu);

        if (((id == "grow"_fu) && (items.size() == 2)))
            return (((items.mutref(0) + ".grow("_fu) + items.mutref(1)) + ")"_fu);

        if (((id == "shrink"_fu) && (items.size() == 2)))
            return (((items.mutref(0) + ".shrink("_fu) + items.mutref(1)) + ")"_fu);

        if (((id == "resize"_fu) && (items.size() == 2)))
            return (((items.mutref(0) + ".resize("_fu) + items.mutref(1)) + ")"_fu);

        if (((id == "clear"_fu) && (items.size() == 1)))
            return (items.mutref(0) + ".clear()"_fu);

        if (((id == "find"_fu) && (items.size() == 2)))
        {
            include("\"../lib/vec/find.h\""_fu);
            return (("fu::lfind("_fu + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if (((id == "starts"_fu) && (items.size() == 2)))
        {
            include("\"../lib/vec/find.h\""_fu);
            return (("fu::lmatch("_fu + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if (((id == "has"_fu) && (items.size() == 2)))
        {
            include("\"../lib/vec/find.h\""_fu);
            return (("fu::has("_fu + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if (((id == "replace"_fu) && (items.size() == 3)))
        {
            include("\"../lib/vec/replace.h\""_fu);
            return (("fu::replace("_fu + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if (((id == "slice"_fu) && (items.size() == 2)))
            return (((("slice("_fu + items.mutref(0)) + ", "_fu) + items.mutref(1)) + ")"_fu);

        if (((id == "slice"_fu) && (items.size() == 3)))
            return (((((("slice("_fu + items.mutref(0)) + ", "_fu) + items.mutref(1)) + ", "_fu) + items.mutref(2)) + ")"_fu);

        if (((id == "substr"_fu) && (items.size() == 3)))
            return (((((("substr("_fu + items.mutref(0)) + ", "_fu) + items.mutref(1)) + ", "_fu) + items.mutref(2)) + ")"_fu);

        if (((id == "sort"_fu) && (items.size() == 1)))
        {
            include("<algorithm>"_fu);
            return (("([&](auto& _) { std::sort(_.mut_begin(), _.mut_end()); } ("_fu + items.mutref(0)) + "))"_fu);
        };
        if (((id == "char"_fu) && (items.size() == 2)))
        {
            const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(""_fu); }());
            if ((head.type.canon == "string"_fu))
                return (((("int("_fu + items.mutref(0)) + "["_fu) + items.mutref(1)) + "])"_fu);

        };
        if ((((id == "true"_fu) || (id == "false"_fu)) && !items.size()))
            return id;

        if (((id == "throw"_fu) && (items.size() == 1)))
            return cgThrow(id, items.mutref(0));

        if (((id == "assert"_fu) && (items.size() == 0)))
            return cgThrow(id, "\"Assertion failed.\""_fu);

        if (((id == "move"_fu) && (items.size() == 3)))
            return (((("([&]() { auto* _ = "_fu + items.mutref(0)) + ".mut_data(); "_fu) + cgSlide(("_ + "_fu + items.mutref(2)), ("_ + "_fu + items.mutref(1)), "sizeof(*_)"_fu)) + "; } ())"_fu);

        if (((id == "split"_fu) && (items.size() == 2)))
            return cgSplit(items);

        if (((id == "join"_fu) && (items.size() == 2)))
            return cgJoin(items);

        if (((id == "join"_fu) && (items.size() == 2)))
            return cgJoin(items);

        if (((id == "keys"_fu) && (items.size() == 1)))
            return cgKeys(items);

        if (((id == "CLONE"_fu) && (items.size() == 1)))
            return cgClone(node.type, items.mutref(0));

        if (((id == "STEAL"_fu) && (items.size() == 1)))
            return cgSteal(items.mutref(0));

        if (((id == "SWAP"_fu) && (items.size() == 2)))
            return cgSwap(items);

        if ((id == "print"_fu))
            return cgPrint(items);

        if (((id == "now_hr"_fu) || (id == "now_utc"_fu)))
        {
            include("\"../lib/now.h\""_fu);
            return (("fu::"_fu + id) + "()"_fu);
        };
        if (((id == "file_write"_fu) || (id == "file_read"_fu) || (id == "file_size"_fu)))
        {
            include("\"../lib/io.h\""_fu);
            return (((("fu::"_fu + id) + "("_fu) + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if ((id == "env_get"_fu))
        {
            include("\"../lib/env.h\""_fu);
            return (((("fu::"_fu + id) + "("_fu) + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if ((id == "hash_tea"_fu))
        {
            include("\"../lib/tea.h\""_fu);
            return (((("fu::"_fu + id) + "("_fu) + fu::join(items, ", "_fu)) + ")"_fu);
        };
        if ((id == "shell_exec"_fu))
        {
            include("\"../lib/shell.h\""_fu);
            return (((("fu::"_fu + id) + "("_fu) + fu::join(items, ", "_fu)) + ")"_fu);
        };
        ((id != "__native_pure"_fu) || fu::fail("Assertion failed."));
        return (((ID(id) + "("_fu) + fu::join(items, ", "_fu)) + ")"_fu);
    };
    fu_STR cgPrint(const fu_VEC<fu_STR>& items)
    {
        include("<iostream>"_fu);
        fu_STR src = "(std::cout"_fu;
        for (int i = 0; (i < items.size()); i++)
            src += (" << "_fu + items[i]);

        src += " << \"\\n\")"_fu;
        return src;
    };
    fu_STR cgSlide(const fu_STR& destExpr, const fu_STR& srcExpr, const fu_STR& numBytesExpr)
    {
        fu_STR SLIDE = "::slide"_fu;
        if (!fu::has(_tfwd, SLIDE))
        {
            include("<cstring>"_fu);
            (_tfwd.upsert(SLIDE) = "\ntemplate <size_t N>\ninline void fu_MEMSLIDE(void* dest, void* source)\n{\n    char swap_buffer[N];\n\n    std::memcpy(\n        swap_buffer, source, N);\n\n    if (source < dest)\n        std::memmove(\n            source, (char*)source + N,\n            (char*)dest - (char*)source);\n    else\n        std::memmove(\n            (char*)dest + N, dest,\n            (char*)source - (char*)dest);\n\n    std::memcpy(\n        dest, swap_buffer, N);\n}\n"_fu);
        };
        return (((((("fu_MEMSLIDE<"_fu + numBytesExpr) + ">("_fu) + destExpr) + ", "_fu) + srcExpr) + ")"_fu);
    };
    void annotateMap()
    {
        include("\"../lib/map.h\""_fu);
    };
    void annotateVector()
    {
        include("\"../lib/vec.h\""_fu);
    };
    fu_STR annotateString()
    {
        include("\"../lib/str.h\""_fu);
        return "fu_STR"_fu;
    };
    fu_STR annotateNever()
    {
        include("\"../lib/never.h\""_fu);
        return "fu::never"_fu;
    };
    fu_STR cgThrow(const fu_STR& kind, const fu_STR& item)
    {
        annotateNever();
        if ((kind == "assert"_fu))
        {
        };
        return (("fu::fail("_fu + item) + ")"_fu);
    };
    fu_STR cgJoin(const fu_VEC<fu_STR>& items)
    {
        include("\"../lib/vec/join.h\""_fu);
        return (("fu::join("_fu + fu::join(items, ", "_fu)) + ")"_fu);
    };
    fu_STR cgSplit(const fu_VEC<fu_STR>& items)
    {
        fu_STR SPLIT = "::SPLIT"_fu;
        if (!fu::has(_ffwd, SPLIT))
        {
            annotateString();
            annotateVector();
            include("\"../lib/vec/find.h\""_fu);
            (_ffwd.upsert(SPLIT) = "\ninline fu_VEC<fu_STR> fu_SPLIT(\n    fu_STR s,\n    const fu_STR& sep)\n{\n    fu_VEC<fu_STR> result;\n\n    int next;\n    while ((next = fu::lfind(s, sep)) >= 0)\n    {\n        result.push(slice(s, 0, next));\n        s = slice(s, next + sep.size());\n    }\n\n    result.push(static_cast<fu_STR&&>(s));\n    return result;\n}\n"_fu);
        };
        return (("fu_SPLIT("_fu + fu::join(items, ", "_fu)) + ")"_fu);
    };
    fu_STR cgKeys(const fu_VEC<fu_STR>& items)
    {
        fu_STR KEYS = "::KEYS"_fu;
        if (!fu::has(_ffwd, KEYS))
        {
            annotateMap();
            annotateVector();
            (_ffwd.upsert(KEYS) = "\ntemplate <typename K, typename V>\nfu_VEC<K> fu_KEYS(\n    const fu_COW_MAP<K, V>& map)\n{\n    return map.m_keys;\n}\n"_fu);
        };
        return (("fu_KEYS("_fu + fu::join(items, ", "_fu)) + ")"_fu);
    };
    fu_STR cgLiteral(const s_SolvedNode& node)
    {
        return ([&]() -> const fu_STR& { { const fu_STR& _ = node.value; if (_.size()) return _; } fail(""_fu); }());
    };
    fu_STR cgEmpty()
    {
        return ""_fu;
    };
    fu_STR cgIf(const s_SolvedNode& node, const int& mode)
    {
        const s_SolvedNode& n0 = node.items[0];
        const s_SolvedNode& n1 = node.items[1];
        const s_SolvedNode& n2 = node.items[2];
        const bool stmt = !!(mode & M_STMT);
        const auto& blockWrap_unlessIf = [&](const s_SolvedNode& node) -> fu_STR
        {
            return ((node.kind == "if"_fu) ? (" "_fu + cgNode(node, M_STMT)) : blockWrapSubstatement(node));
        };
        fu_STR cond = ([&]() -> fu_STR { if (n0) return boolWrap(n0.type, cgNode(n0, M_RETBOOL)); else return fu_STR{}; }());
        fu_STR cons = ([&]() -> fu_STR { if (n1) return (stmt ? blockWrapSubstatement(n1) : cgNode(n1, 0)); else return fu_STR{}; }());
        fu_STR alt = ([&]() -> fu_STR { if (n2) return (stmt ? blockWrap_unlessIf(n2) : cgNode(n2, 0)); else return fu_STR{}; }());
        if (stmt)
            return (((("if ("_fu + cond) + ")"_fu) + cons) + (alt.size() ? ((_indent + "else"_fu) + alt) : ""_fu));

        if ((cons.size() && alt.size()))
            return (((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu);

        if (cons.size())
            return (((("("_fu + cond) + " && "_fu) + cons) + ")"_fu);

        if (alt.size())
            return (((("("_fu + cond) + " || "_fu) + alt) + ")"_fu);

        fail("TODO"_fu);
    };
    fu_STR boolWrap(const s_Type& type, const fu_STR& src)
    {
        if (type_isString(type))
            return (src + ".size()"_fu);

        return src;
    };
    fu_STR cgDefault(const s_Type& type)
    {
        if (((type.quals & q_ref) && !(type.quals & q_mutref)))
        {
            fu_STR DEFAULT = "::DEFAULT"_fu;
            if (!fu::has(_ffwd, DEFAULT))
                (_ffwd.upsert(DEFAULT) = "\ntemplate <typename T>\nstruct fu_DEFAULT { static inline const T value {}; };\n"_fu);

            return (("fu_DEFAULT<"_fu + typeAnnot(clear_refs(type), 0)) + ">::value"_fu);
        };
        return (typeAnnot(type, 0) + "{}"_fu);
    };
    fu_STR cgAnd(const s_SolvedNode& node)
    {
        const s_Type& type = node.type;
        if (!(type == t_bool))
        {
            const fu_VEC<s_SolvedNode>& items = node.items;
            const bool retSecondLast = (items[(items.size() - 1)].type == t_never);
            const int condEnd = (retSecondLast ? (items.size() - 2) : (items.size() - 1));
            fu_STR src = ""_fu;
            if (condEnd)
            {
                src += "if ("_fu;
                for (int i = 0; (i < condEnd); i++)
                {
                    const s_SolvedNode& item = items[i];
                    if (i)
                        src += " && "_fu;

                    src += boolWrap(item.type, cgNode(item, M_RETBOOL));
                };
                src += ") "_fu;
            };
            fu_STR tail = cgNode(items[condEnd], 0);
            if (retSecondLast)
            {
                src += (((("{ "_fu + typeAnnot(type, 0)) + " _ = "_fu) + tail) + "; "_fu);
                src += (("if (!"_fu + boolWrap(type, "_"_fu)) + ") return _; } "_fu);
                src += (cgNode(items[(items.size() - 1)], 0) + ";"_fu);
            }
            else
            {
                src += (("return "_fu + tail) + ";"_fu);
                src += ((" else return "_fu + cgDefault(type)) + ";"_fu);
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
                src += " && "_fu;

            src += boolWrap(item.type, cgNode(item, M_RETBOOL));
        };
        return (src + ")"_fu);
    };
    fu_STR cgNot(const s_SolvedNode& node)
    {
        const s_SolvedNode& item = node.items[0];
        return ("!"_fu + boolWrap(item.type, cgNode(item, M_RETBOOL)));
    };
    fu_STR cgOr(const s_SolvedNode& node)
    {
        const s_Type& type = node.type;
        if (!(type == t_bool))
        {
            fu_STR annot = typeAnnot(type, 0);
            fu_STR src = (("([&]() -> "_fu + annot) + " {"_fu);
            const fu_VEC<s_SolvedNode>& items = node.items;
            for (int i = 0; (i < (items.size() - 1)); i++)
            {
                const s_SolvedNode& item = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(""_fu); }());
                s_SolvedNode tail { item };
                if ((item.kind == "and"_fu))
                {
                    const fu_VEC<s_SolvedNode>& items = item.items;
                    tail = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() - 1)]; if (_) return _; } fail(""_fu); }());
                    src += " if ("_fu;
                    for (int i = 0; (i < (items.size() - 1)); i++)
                    {
                        if (i)
                            src += " && "_fu;

                        const s_SolvedNode& item = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(""_fu); }());
                        src += boolWrap(item.type, cgNode(item, M_RETBOOL));
                    };
                    src += ")"_fu;
                };
                src += ((((((" { "_fu + annot) + " _ = "_fu) + cgNode(tail, 0)) + "; if ("_fu) + boolWrap(tail.type, "_"_fu)) + ") return _; }"_fu);
            };
            const s_SolvedNode& tail = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() - 1)]; if (_) return _; } fail(""_fu); }());
            if (!(tail.type == t_never))
                src += " return"_fu;

            src += ((" "_fu + cgNode(tail, 0)) + "; }())"_fu);
            return src;
        };
        fu_STR src = "("_fu;
        const fu_VEC<s_SolvedNode>& items = node.items;
        for (int i = 0; (i < items.size()); i++)
        {
            const s_SolvedNode& item = items[i];
            if (i)
                src += " || "_fu;

            src += boolWrap(item.type, cgNode(item, M_RETBOOL));
        };
        return (src + ")"_fu);
    };
    fu_STR postfixBlock(const fu_STR& src, const fu_STR& postfix)
    {
        ((fu_TO_STR(src[(src.size() - 1)]) == "}"_fu) || fail(""_fu));
        return ((slice(src, 0, (src.size() - 1)) + postfix) + "}"_fu);
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
        fu_STR cond = ([&]() -> fu_STR { if (n_cond) return boolWrap(n_cond.type, cgNode(n_cond, M_RETBOOL)); else return fu_STR{}; }());
        fu_STR post = ([&]() -> fu_STR { if (n_post) return cgNode(n_post, 0); else return fu_STR{}; }());
        fu_STR body = ([&]() -> fu_STR { if (n_body) return blockWrapSubstatement(n_body); else return fu_STR{}; }());
        fu_STR pcnd = ([&]() -> fu_STR { if (n_pcnd) return boolWrap(n_pcnd.type, cgNode(n_pcnd, M_RETBOOL)); else return fu_STR{}; }());
        fu_STR breakLabel = ""_fu;
        if ((body.size() && node.value.size()))
        {
            fu_STR brk = (("L_"_fu + node.value) + "_b"_fu);
            fu_STR cnt = (("L_"_fu + node.value) + "_c"_fu);
            if (fu::has(body, cnt))
                body = ("{"_fu + postfixBlock(body, (((_indent + "    }"_fu) + cnt) + ":;"_fu)));

            if (fu::has(body, brk))
                breakLabel = (((_indent + "    "_fu) + brk) + ":;"_fu);

        };
        if (pcnd.size())
        {
            if ((init.size() || post.size() || cond.size()))
                fail("TODO extended loop."_fu);

            return (((((("do"_fu + body) + _indent) + "while ("_fu) + pcnd) + ")"_fu) + breakLabel);
        };
        if ((init.size() || post.size() || !cond.size()))
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
        src += (_indent + "try"_fu);
        src += (_indent + "{"_fu);
        src += (((((_indent + "    "_fu) + let_main.value) + " = "_fu) + let_init) + ";"_fu);
        src += (_indent + "}"_fu);
        src += (_indent + "catch (const std::exception& o_0)"_fu);
        src += (_indent + "{"_fu);
        src += (((_indent + "    const fu_STR& "_fu) + err_id) + " = fu_TO_STR(o_0.what());"_fu);
        src += (_indent + catch_body);
        src += (_indent + "}\n"_fu);
        return src;
    };
    fu_STR cgNode(const s_SolvedNode& node, const int& mode)
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

        if ((k == "str"_fu))
            return cgStringLiteral(node);

        if ((k == "arrlit"_fu))
            return cgArrayLiteral(node);

        if ((k == "definit"_fu))
            return cgDefaultInit(node);

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

        if ((k == "catch"_fu))
            return cgCatch(node);

        fail(("TODO: "_fu + k));
    };
    fu_STR cgCopyMove(const s_SolvedNode& node)
    {
        fu_STR a = cgNode(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = node.items[0]; if (_) return _; } fail(""_fu); }()), 0);
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
    fu_VEC<fu_STR> cgNodes(const fu_VEC<s_SolvedNode>& nodes, const int& mode)
    {
        fu_VEC<fu_STR> result = fu_VEC<fu_STR>{};
        for (int i = 0; (i < nodes.size()); i++)
        {
            const s_SolvedNode& node = nodes[i];
            fu_STR src = (node ? cgNode(node, mode) : ""_fu);
            result.push(src);
        };
        return result;
    };
    fu_STR cpp_codegen_EVAL()
    {
        ((root.kind == "root"_fu) || fail(""_fu));
        fu_STR src = cgNode(root, 0);
        return src;
    };
};
fu_STR cpp_codegen(const s_SolvedNode& root, const s_Scope& scope, const s_Module& module, const s_TEMP_Context& ctx)
{
    return (sf_cpp_codegen { root, scope, module, ctx }).cpp_codegen_EVAL();
}


fu_STR compile(const fu_STR& fname, const fu_STR& via, s_TEMP_Context& ctx)
{
    s_Module module { getModule(fname, ctx) };
    if (!module.in)
    {
        module.out = s_ModuleOutputs { fu_VEC<int>{}, fu_COW_MAP<fu_STR, s_Struct>{}, fu_COW_MAP<fu_STR, s_SolvedNode>{}, s_SolverOutput{}, fu_STR{} };
        fu_STR src { ([&]() -> fu_STR& { { fu_STR& _ = getFile(fname, ctx); if (_.size()) return _; } fu::fail(((("#import badfile: `"_fu + via) + fname) + "`."_fu)); }()) };
        const f64 t0 = fu::now_hr();
        s_LexerOutput lexer_result = lex(src, fname);
        const f64 t1 = fu::now_hr();
        module.in = s_ModuleInputs { fu_STR(src), s_LexerOutput(lexer_result), parse(module.modid, fname, lexer_result.tokens) };
        const f64 t2 = fu::now_hr();
        module.stats.s_lex = (t1 - t0);
        module.stats.s_parse = (t2 - t1);
        setModule(module, ctx);
    }
    else
    {
        (module.out || fu::fail(((("#import circle: `"_fu + via) + fname) + "`."_fu)));
    };
    fu_VEC<fu_STR> imports { module.in.parse.imports };
    for (int i = 0; (i < imports.size()); i++)
        compile(imports[i], ((fname + " <- "_fu) + via), ctx);

    if (!module.out)
    {
        const f64 t0 = fu::now_hr();
        module.out.solve = solve(module.in.parse.root, ctx, module);
        const f64 t1 = fu::now_hr();
        module.out.cpp = cpp_codegen(module.out.solve.root, module.out.solve.scope, module, ctx);
        const f64 t2 = fu::now_hr();
        module.stats.s_solve = (t1 - t0);
        module.stats.s_cpp = (t2 - t1);
        setModule(module, ctx);
    };
    return module.out.cpp;
}

s_TEMP_Context compile_testcase(fu_STR&& src, const fu_STR& fname)
{
    if (!fu::has(src, "fn ZERO()"_fu))
        src = (("\n\nfn ZERO(): i32 {\n"_fu + src) + "\n}\n"_fu);

    src += "\nfn main(): i32 ZERO();\n\n"_fu;
    s_TEMP_Context ctx { CTX_PROTO };
    (ctx.files.upsert(fname) = src);
    compile(fname, ""_fu, ctx);
    return ctx;
}

fu_STR compile_testcase(const fu_STR& src)
{
    fu_STR fname = "testcase"_fu;
    s_TEMP_Context ctx = compile_testcase(fu_STR(src), fname);
    for (int i = 1; (i < ctx.modules.size()); i++)
    {
        if ((ctx.modules[i].fname == fname))
            return ctx.modules[i].out.cpp;

    };
    fu::fail("Assertion failed.");
}

                                #ifndef DEF_TEST_SRC
                                #define DEF_TEST_SRC
inline const fu_STR TEST_SRC = "\n\n    fn test(one: i32)\n    {\n        let zero = one - 1;\n        let two  = one * 2;\n\n        fn inner(i: i32): i32\n            i > zero ? outer(i - one) : zero;\n\n        fn outer(i: i32): i32\n            two * inner(i);\n\n        return outer(one) + (two - one) * 17;\n    }\n\n    fn ZERO(): i32\n    {\n        return test(1) - 17;\n    }\n\n"_fu;
                                #endif

int ZERO()
{
    fu_STR cpp = compile_testcase(TEST_SRC);
    return (fu::lfind(cpp, "main()"_fu) ? 0 : 101);
}

fu_STR absdir(const fu_STR& a)
{
    return ((last(a) == "/"_fu) ? fu_STR(a) : (a + "/"_fu));
}

                                #ifndef DEF_HOME
                                #define DEF_HOME
inline const fu_STR HOME = absdir(([]() -> fu_STR { { fu_STR _ = fu::env_get("HOME"_fu); if (_.size()) return _; } return "/Users/hdachev"_fu; }()));
                                #endif

fu_STR locate_PRJDIR()
{
    fu_STR dir = (HOME + "fu/"_fu);
    fu_STR fn = (dir + "src/compiler.fu"_fu);
    const int fs = fu::file_size(fn);
    ((fs > 10000) || fu::fail(((("Bad compiler.fu: "_fu + fn) + ": "_fu) + fs)));
    (std::cout << ("PRJDIR: "_fu + dir) << "\n");
    return dir;
}

                                #ifndef DEF_PRJDIR
                                #define DEF_PRJDIR
inline const fu_STR PRJDIR = locate_PRJDIR();
                                #endif

                                #ifndef DEF_GCC_CMD
                                #define DEF_GCC_CMD
inline const fu_STR GCC_CMD = (("g++ -std=c++1z -O3 "_fu + "-pedantic-errors -Wall -Wextra -Werror "_fu) + "-Wno-parentheses-equality "_fu);
                                #endif

fu_STR buildAndRun(const s_TEMP_Context& ctx)
{
    int code {};
    fu_STR stdout {};
    fu_VEC<fu_STR> Fs {};
    int len_all {};
    for (int i = 1; (i < ctx.modules.size()); i++)
    {
        const s_Module& module = ctx.modules[i];
        const fu_STR& cpp = module.out.cpp;
        fu_STR F = ((((PRJDIR + "build.cpp/o-"_fu) + fu::hash_tea(cpp)) + "-"_fu) + cpp.size());
        Fs.push(F);
        len_all += cpp.size();
    };
    fu_STR F_exe = ((((((PRJDIR + "build.cpp/b-"_fu) + fu::hash_tea(fu::join(Fs, "/"_fu))) + "-"_fu) + len_all) + "-"_fu) + Fs.size());
    const auto& ERR = [&](fu_STR&& cpp) -> fu_STR&
    {
        if (!cpp.size())
        {
            for (int i = Fs.size(); (i-- > 0); )
                cpp += (("#include \""_fu + Fs.mutref(i)) + ".cpp\"\n"_fu);

        };
        fu_STR fname = (PRJDIR + "build.cpp/failing-testcase.cpp"_fu);
        (std::cout << ("  WRITE "_fu + fname) << "\n");
        fu::file_write(fname, cpp);
        if (!stdout.size())
            stdout = (("[ EXIT CODE "_fu + code) + " ]"_fu);

        return stdout;
    };
    if ((fu::file_size(F_exe) < 1))
    {
        for (int i = 0; (i < Fs.size()); i++)
        {
            fu_STR F { Fs.mutref(i) };
            fu_STR F_cpp = (F + ".cpp"_fu);
            fu_STR F_tmp = (F + ".o.tmp"_fu);
            fu_STR F_obj = (F + ".o"_fu);
            if ((fu::file_size(F_obj) < 1))
            {
                const fu_STR& cpp = ctx.modules[(i + 1)].out.cpp;
                fu::file_write(F_cpp, cpp);
                (std::cout << "  BUILD "_fu << F_cpp << "\n");
                const f64 t0 = fu::now_hr();
                code = ([&]() -> int { { int _ = fu::shell_exec((((((GCC_CMD + "-c -o "_fu) + F_tmp) + " "_fu) + F_cpp) + " 2>&1"_fu), stdout); if (_) return _; } return fu::shell_exec((((("mv "_fu + F_tmp) + " "_fu) + F_obj) + " 2>&1"_fu), stdout); }());
                if (code)
                    return ERR(fu_STR(cpp));

                const f64 t1 = fu::now_hr();
                (std::cout << "     OK "_fu << (t1 - t0) << "s"_fu << "\n");
            };
        };
        fu_STR F_tmp = (F_exe + ".tmp"_fu);
        fu_STR cmd = (((GCC_CMD + "-o "_fu) + F_tmp) + " "_fu);
        for (int i = Fs.size(); (i-- > 0); )
            cmd += (Fs.mutref(i) + ".o "_fu);

        
        {
            (std::cout << "   LINK "_fu << F_exe << "\n");
            const f64 t0 = fu::now_hr();
            code = ([&]() -> int { { int _ = fu::shell_exec((cmd + " 2>&1"_fu), stdout); if (_) return _; } { int _ = fu::shell_exec((("chmod 755 "_fu + F_tmp) + " 2>&1"_fu), stdout); if (_) return _; } return fu::shell_exec((((("mv "_fu + F_tmp) + " "_fu) + F_exe) + " 2>&1"_fu), stdout); }());
            if (code)
            {
                (std::cout << ("   FAIL "_fu + fu::join(Fs, ("\n        "_fu + "\n"_fu))) << "\n");
                return ERR(""_fu);
            };
            const f64 t1 = fu::now_hr();
            (std::cout << "     OK "_fu << (t1 - t0) << "s"_fu << "\n");
        };
        if ((Fs.size() == 1))
            code = fu::shell_exec((("rm "_fu + Fs.mutref(0)) + ".o 2>&1"_fu), stdout);

        if (code)
            return ERR(""_fu);

    };
    code = fu::shell_exec(F_exe, stdout);
    if (code)
        return ERR(""_fu);

    return ""_fu;
}

                                #ifndef DEF_NICE_THINGS
                                #define DEF_NICE_THINGS
inline const fu_VEC<fu_STR> NICE_THINGS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<16> { "LOOKING GOOD TODAY !"_fu, "PASSING TESTS LIKE A BOSS !"_fu, "THIS IS SOME TOP NOTCH SHIT !"_fu, "VALUE ADDED !"_fu, "GOING STRONG !"_fu, "KILLIN IT !"_fu, "POWER LEVEL INCREASED !"_fu, "NOW MAKE ME BETTER AGAIN !"_fu, "NOW MAKE ME EVEN MORE BETTER !"_fu, "ALL CLEAR !"_fu, "UPGRADE ACCEPTED !"_fu, "YOU'RE THE BEST MAN !"_fu, "I LOVE YOU YOU !"_fu, "MORE IS MORE !"_fu, "THIS IS AWESOME !"_fu, "THIS IS AWESOME !"_fu } };
                                #endif

void saySomethingNice()
{
    const int sec = i32(fu::now_utc());
    const bool NEW_STUFF = false;
    if (((sec % 5) && !NEW_STUFF))
    {
        fu_STR str = ""_fu;
        for (int i = 0; (i < 3); i++)
        {
            if ((sec & (1 << i)))
                str += "🍒"_fu;
            else
                str += "🍊"_fu;

        };
        (std::cout << str << "\n");
    }
    else
        (std::cout << NICE_THINGS[((sec >> 6) & 0xf)] << "\n");

}

s_TEMP_Context ZERO(const fu_STR& src, fu_STR&& fname)
{
    if (!fname.size())
        fname = "testcase.ZERO"_fu;

    s_TEMP_Context ctx = compile_testcase(fu_STR(src), fname);
    fu_STR result = buildAndRun(ctx);
    if (result.size())
        fu::fail(result);

    return ctx;
}

int FAIL(const fu_STR& src)
{
    fu_STR cpp;
    try
    {
        cpp = compile_testcase(src);
    }
    catch (const std::exception& o_0)
    {
        const fu_STR& e = fu_TO_STR(o_0.what());
    
        return e.size();
    }
;
    fu::fail(("DID NOT THROW: "_fu + cpp));
}

void updateCPPFile(const s_Module& module)
{
    fu_STR fname = (module.fname + ".cpp"_fu);
    const fu_STR& cpp = module.out.cpp;
    if ((fu::file_read(fname) != cpp))
    {
        fu::file_write(fname, module.out.cpp);
        (std::cout << ("WROTE "_fu + fname) << "\n");
    };
}

void FU_FILE(fu_STR&& fname)
{
    fname = ((PRJDIR + "src/"_fu) + fname);
    (std::cout << "COMPILE "_fu << fname << "\n");
    fu_STR src = fu::file_read(fname);
    if (!src.size())
        fu::fail(("BAD FILE: "_fu + fname));

    const f64 t0 = fu::now_hr();
    s_TEMP_Context ctx = ZERO(src, fu_STR(fname));
    const f64 t1 = fu::now_hr();
    const f64 tt = (t1 - t0);
    (std::cout << "        "_fu << tt << "s\n"_fu << "\n");
    if (WRITE_COMPILER)
    {
        for (int i = 1; (i < ctx.modules.size()); i++)
            updateCPPFile(ctx.modules[i]);

    };
    
    {
        sayHello();
    };
}

void runTestSuiteAndBuildCompiler()
{
    runTestSuite();
    saySomethingNice();
    FU_FILE("compiler.fu"_fu);
}

void runTestSuite()
{
    ZERO("\n        return 1 - 1;\n    "_fu, ""_fu);
    ZERO("\n        fn sum(a: i32, b: i32): i32\n            a + b;\n\n        return sum(1, -1);\n    "_fu, ""_fu);
    ZERO("\n        fn sum(a: i32, b: i32)\n            a + b;\n\n        return sum(1, -1);\n    "_fu, ""_fu);
    ZERO("\n        fn sign(a: i32)\n            a > 0 ? 1 : a < 0 ? -1 : 0;\n\n        return sign(7) + sign(-3) + sign(0);\n    "_fu, ""_fu);
    ZERO("\n        fn sign(a: i32) {\n            if (a > 0)\n                return 1;\n\n            return -2;\n        }\n\n        return sign(10) * 2 + sign(-5);\n    "_fu, ""_fu);
    ZERO("\n        fn sign(a: i32) {\n            if (a > 0)\n                return 1;\n            else\n                return -2;\n        }\n\n        return sign(10) * 2 + sign(-5);\n    "_fu, ""_fu);
    ZERO("\n        mut sum = 0;\n        for (mut i = 0; i < 10; i++)\n            sum++;\n\n        return sum * 2 - 20;\n    "_fu, ""_fu);
    ZERO("\n        mut sum = 0;\n        for (mut i = 10; i --> 0; )\n            sum--;\n\n        return sum * 2 + 20;\n    "_fu, ""_fu);
    ZERO("\n        fn decr(num: &mut i32)\n            num--;\n\n        mut res = 0;\n        decr(res);\n        return res + 1;\n    "_fu, ""_fu);
    ZERO("\n        mut res = 0;\n        fn decr()\n            res--;\n\n        decr();\n        return res + 1;\n    "_fu, ""_fu);
    ZERO("\n        mut res = 0;\n        fn decr(num: &mut i32) { num--; } // ret void\n\n        decr(res);\n        return res + 1;\n    "_fu, ""_fu);
    ZERO("\n        mut sum = 0;\n        while (sum < 15)\n            sum++;\n\n        return sum - 15;\n    "_fu, ""_fu);
    FAIL("\n        let sum = 0;\n        while (sum < 15)\n            sum++; //ERR ++ overload\n\n        return sum - 15;\n    "_fu);
    ZERO("\n        mut sum = 0;\n        while (sum < 15)\n            sum += 2;\n\n        return sum - 16;\n    "_fu, ""_fu);
    ZERO("\n        fn named(a: i32, b: i32)\n            a - b * 2;\n\n        return named(b: 3, 6);\n    "_fu, ""_fu);
    ZERO("\n        fn named(a: i32, b: i32)\n            a - b * 2;\n\n        fn other(a: i32, b: i32)\n            named(:b, :a);\n\n        return other(b: 3, 6);\n    "_fu, ""_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(r: Range)\n            r.max - r.min;\n\n        return size(Range(14, 21)) - 7;\n    "_fu, ""_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        mut r = Range(1, 2);\n        r.min++;\n        return r.max - r.min;\n    "_fu, ""_fu);
    FAIL("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        let r = Range(1, 2);\n        r.min++; //ERR ++ overload\n        return r.max - r.min;\n    "_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using r: Range)\n            max - min;\n\n        return size(Range(14, 21)) - 7;\n    "_fu, ""_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n\n            fn size()\n                max - min;\n        }\n\n        let r = Range(14, 21);\n\n        return size(r) - 7;\n    "_fu, ""_fu);
    ZERO("\n        struct X {\n            a: i32;\n            fn test(b: i32) a + b;\n        }\n\n        return X(1).test(-1);\n    "_fu, ""_fu);
    ZERO("\n        struct X {\n            a: i32;\n            fn test(b: i32) a + b;\n        }\n\n        fn hey(using x: X) test(-1);\n\n        return X(1).hey;\n    "_fu, ""_fu);
    ZERO("\n        struct Pos {\n            x: i32;\n        }\n\n        struct Player {\n            using pos: Pos;\n        }\n\n        fn dist(using p: Player, other: Player)\n            x - other.x;\n\n        let a = Player(Pos(10));\n        let b = Player(Pos( 4));\n\n        return dist(a, b) - 6;\n    "_fu, ""_fu);
    ZERO("\n        struct Pos {\n            x: i32;\n        }\n\n        struct Player {\n            using pos: Pos;\n\n            fn dist(other: Player)\n                x - other.x;\n        }\n\n        let a = Player(Pos(10));\n        let b = Player(Pos( 4));\n\n        return dist(a, b) - 6;\n    "_fu, ""_fu);
    ZERO("\n        fn inner(i: i32): i32\n            i > 0 ? outer(i - 1) : 0;\n\n        fn outer(i: i32): i32\n            2 * inner(i);\n\n        return outer(1);\n    "_fu, ""_fu);
    ZERO("\n        fn test(one: i32)\n        {\n            let zero = one - 1;\n            let two  = one * 2;\n\n            fn inner(i: i32): i32\n                i > zero ? outer(i - one) : zero;\n\n            fn outer(i: i32): i32\n                two * inner(i);\n\n            return outer(one) + (two - one) * 17;\n        }\n\n        fn ZERO() test(1) - 17;\n    "_fu, ""_fu);
    ZERO("\n        fn inner(i: i32): i32\n            outer(i - 1);\n\n        fn outer(implicit x: i32, i: i32): i32\n            i > 0   ? inner(i)\n                    : x + i;\n\n        let implicit x = 7;\n        return outer(1) - 7;\n    "_fu, ""_fu);
    ZERO("\n        fn outer(i: i32): i32\n            i > 0   ? inner(i)\n                    : 2 * i;\n\n        fn inner(implicit x: i32, i: i32): i32\n            outer(i - 2 * x);\n\n        let implicit x = 3;\n        return outer(6);\n    "_fu, ""_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using implicit r: Range)\n            max - min;\n\n        fn test()\n            size();\n\n        let implicit r = Range(14, 21);\n\n        return test  - 7;\n    "_fu, ""_fu);
    ZERO("\n        struct Range {\n            min: i32;\n            max: i32;\n        }\n\n        fn size(using implicit r: Range)\n            max - min;\n\n        fn inner()\n            size();\n\n        fn outer()\n            inner();\n\n        let implicit r = Range(14, 21);\n\n        return outer() - 7;\n    "_fu, ""_fu);
    ZERO("\n        let x = 1;\n\n        fn test(): &i32\n            x;\n\n        return test - 1;\n    "_fu, ""_fu);
    ZERO("\n        let a = 1;\n        let x: &i32 = a;\n\n        return a - x;\n    "_fu, ""_fu);
    ZERO("\n        struct Test {\n            x: &i32;\n        }\n\n        let a = 1;\n        let test = Test(a);\n\n        return test.x - 1;\n    "_fu, ""_fu);
    ZERO("\n        mut a = 0;\n        mut b = a;\n        b++;\n        let c = a = b;\n\n        return a - c;\n    "_fu, ""_fu);
    ZERO("\n        let x = 3;\n        return x / 2 - 1;\n    "_fu, ""_fu);
    ZERO("\n        fn div3by(a: $T) 3 / a;\n        return div3by(2) - 1;\n    "_fu, ""_fu);
    fu_STR RAII = "\n        let mut i = 0;\n        struct S {\n            j: &mut i32;\n            fn free()\n                j += j + 1;\n        }\n    "_fu;
    ZERO((RAII + "\n        let s = S(i);\n        return i;\n        // <-destructor here\n    "_fu), ""_fu);
    ZERO((RAII + "\n        { let s = S(i); } // <-destructor here\n        return i - 1;\n    "_fu), ""_fu);
    ZERO((RAII + "\n        fn test(s: &S) { return s.j; }\n        test(S(i)); // <-destructor here\n        return i - 1;\n    "_fu), ""_fu);
    ZERO((RAII + "\n        fn test(s: &S) { return s.j; }\n        let s = S(i);\n        test(s);\n        return i;\n        // <-destructor here\n    "_fu), ""_fu);
    ZERO((RAII + "\n        fn test(s: S) { return s.j; } // <-destructor here\n        test(S(i));\n        return i - 1;\n    "_fu), ""_fu);
    FAIL((RAII + "\n        fn test(mut s: S) { return s.j; } // <-destructor here\n\n        mut s = S(i);\n        test( s ); //ERR explicit\n\n        return i - 1;\n    "_fu));
    ZERO((RAII + "\n        fn test(mut s: S) {\n            let x = STEAL (s);\n            return x.j; // <-destructor here\n        }\n\n        mut s = S(i);\n        test( STEAL(s) );\n\n        return i - 1;\n    "_fu), ""_fu);
    ZERO("\n        mut arr = [0, 1, 2, 3, 4];\n        arr.push(5);\n\n        fn test(view: &i32[]): i32 {\n            mut sum = 0;\n            for (mut i = 0; i < view.len; i++)\n                sum += view[i];\n\n            return sum - 15;\n        }\n\n        return test(arr);\n    "_fu, ""_fu);
    ZERO("\n        mut arr: i32[] = [1, 2, 3, 4];\n        arr.push(5);\n\n        fn test(view: &i32[]): i32 {\n            mut sum = 0;\n            for (mut i = 0; i < view.len; i++)\n                sum += view[i];\n\n            return sum - 15;\n        }\n\n        return test(arr);\n    "_fu, ""_fu);
    ZERO("\n        let x = 5;\n        mut arr = [ -5 ];\n        arr.push(x);\n        return arr[0] + arr[1];\n    "_fu, ""_fu);
    const auto& ARROPS = [&](const fu_STR& literal, const fu_STR& operation, fu_STR&& assertion) -> void
    {
        assertion = (("("_fu + assertion) + ")"_fu);
        const auto& EXPR = [&](const fu_STR& varname) -> fu_STR
        {
            return fu::replace(assertion, "@"_fu, varname);
        };
        fu_STR src {};
        src += "\n"_fu;
        src += "\n    {"_fu;
        src += (("\n        mut arr0 = ["_fu + literal) + "];"_fu);
        src += (("\n        arr0."_fu + operation) + "; // expect_lambda"_fu);
        src += (("\n        if ("_fu + EXPR("arr0"_fu)) + " != 0) return 13;"_fu);
        src += "\n    }"_fu;
        src += "\n"_fu;
        src += (("\n    mut orig = ["_fu + literal) + "];"_fu);
        src += "\n"_fu;
        src += "\n    {"_fu;
        src += "\n        mut arr1 = CLONE(orig);"_fu;
        src += (("\n        arr1."_fu + operation) + "; // expect_lambda"_fu);
        src += (("\n        if ("_fu + EXPR("arr1"_fu)) + " != 0) return 17;"_fu);
        src += "\n    }"_fu;
        src += "\n"_fu;
        src += "\n    {"_fu;
        src += "\n        mut arr2 = STEAL(orig);"_fu;
        src += "\n        if (orig.len) return 19;"_fu;
        src += (("\n        arr2."_fu + operation) + "; // expect_lambda"_fu);
        src += (("\n        if ("_fu + EXPR("arr2"_fu)) + " != 0) return 23;"_fu);
        src += "\n    }"_fu;
        src += "\n"_fu;
        src += "\n    return 0;"_fu;
        src += "\n"_fu;
        ZERO(src, ""_fu);
    };
    ARROPS("0,1,2,3,4"_fu, "push(5)"_fu, "@[1] + @[4] - @[5]"_fu);
    ARROPS("0,1,2,3,4"_fu, "insert(5, 5)"_fu, "@[1] + @[4] - @[5]"_fu);
    ARROPS("0,1,2,3,4"_fu, "pop()"_fu, "@[1] + @[3] - @.len"_fu);
    ARROPS("0,1,2,3,4"_fu, "splice(4, 1)"_fu, "@[1] + @[3] - @.len"_fu);
    ARROPS("0,1,2,3,4"_fu, "unshift(5)"_fu, "@[2] + @[5] - @[0]"_fu);
    ARROPS("0,1,2,3,4"_fu, "insert(0, 5)"_fu, "@[2] + @[5] - @[0]"_fu);
    ARROPS("0,1,2,3,4"_fu, "insert(1, 5)"_fu, "@[2] + @[5] - @[1]"_fu);
    ARROPS("0,1,2,3,100"_fu, "splice(1, 3)"_fu, "@.len + @[0] + @[1] - 102"_fu);
    ZERO("\n        let OPERATORS = [ '+', '-', '*', '/' ];\n\n        fn ZERO()\n            OPERATORS[2] == '*' ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        struct Y { b: bool; }\n        struct X { y: Y[]; }\n\n        mut x: X[];\n        x.push( X([ Y(true) ]) );\n\n        return x.len + x[0].y.len * 2 - 3;\n    "_fu, ""_fu);
    ZERO("\n        mut a = [7, 1, 5, 3, 99, -13]; // [-13, 1, 3, 5, 7, 99]\n        a.sort();\n        return a[0] + a[1] + a[3] + a[4];\n    "_fu, ""_fu);
    ZERO("\n        mut a = [0, 1, 2, 3, 4]; // [2, 0, 1, 3, 4]\n        a.move(2, 0);\n        return a[0] + a[3] - a[2] - a[4];\n    "_fu, ""_fu);
    ZERO("\n        mut a = [2, 0, 1, 3, 4]; // [0, 1, 2, 3, 4]\n        a.move(0, 2);\n        return a[1] + a[4] - a[2] - a[3];\n    "_fu, ""_fu);
    ZERO("\n        let a = [0, 1, 2, 3];\n        let b = a.slice(1, 3);\n        return b.len - b[1];\n    "_fu, ""_fu);
    ZERO("\n        let a = [0, 1, 2, 3];\n        let b = a.slice(1);\n        return b.len - b[2];\n    "_fu, ""_fu);
    ZERO("\n        mut str = 'hello ';\n        str += 'world';\n\n        return str.len - 11;\n    "_fu, ""_fu);
    ZERO("\n        let str = 'hello ' + 'world';\n\n        return str.starts(with: 'hel')\n             ? str.len - 11\n             : 171;\n    "_fu, ""_fu);
    ZERO("\n        let str = 'a' + 1710010;\n\n        return str == 'a1710010'\n             ? 0 : 101;\n    "_fu, ""_fu);
    ZERO("\n        let str = 'hello world';\n        mut cpy = '';\n        for (mut i = 0; i < str.len; i++)\n            cpy += str[i];\n\n        return (cpy.len - 11) + (cpy == str ? 0 : 1);\n    "_fu, ""_fu);
    ZERO("\n        return 'hello world'.find('world')\n             - 2 * [1, 7, 13, 14, 19].find(14); // expect_lambda\n    "_fu, ""_fu);
    ZERO("\n        return ('hello world'.has('world') ? 1 : 0) // expect_lambda\n             + ([1, 14, 96, 2].has(14)     ? 2 : 0)\n             - 3;\n    "_fu, ""_fu);
    ZERO("\n        let hw = 'hello world!';\n        let a = hw.slice(6, 6 + 5); // expect_lambda\n        let b = hw.substr(6, 5);\n        return a == b && a == 'world' ? a.len - 5 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let tests =\n        [\n            '',\n            ' ',\n            '  ',\n            'hey you duders',\n            ' hey you duders',\n            'hey you duders ',\n            '  hey you duders ',\n            '  hey you  duders ',\n            '  hey you  duders  '\n        ];\n\n        fn test(item: string)\n            item == item.split(' ').join(' ')\n                ? 0\n                : item.len;\n\n        mut sum = 0;\n        for (mut i = 0; i < tests.len; i++)\n            sum += test(tests[i]);\n\n        return sum;\n    "_fu, ""_fu);
    ZERO("\n        mut x: Map(string, i32);\n\n        x['hello'] = 1;\n        x['world'] = 2;\n\n        return x['hello'] - x['world'] + 1;\n    "_fu, ""_fu);
    ZERO("\n        mut x: Map(string, i32);\n\n        x['hello'] = 1;\n        x['world'] = 2;\n\n        let b = 'hello world';\n        mut offset = 0;\n\n        fn pop(): string { // expect_lambda\n            mut a = '';\n\n            while (offset < b.len) {\n                let c = b[offset++];\n                if (c == ' ')\n                    break;\n\n                a += c;\n            }\n\n            return a;\n        }\n\n        return x[pop()] - x[pop()] + 1;\n    "_fu, ""_fu);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test() - 3;\n    "_fu, ""_fu);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test(b: -1);\n    "_fu, ""_fu);
    ZERO("\n        fn test(a = 1, b = 2) a + b;\n        return test(-2);\n    "_fu, ""_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(1);\n        return t.a - 1 + t.b * 7;\n    "_fu, ""_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(1);\n        return t.b;\n    "_fu, ""_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(a: 1);\n        return t.a - 1 + t.b * 7;\n    "_fu, ""_fu);
    ZERO("\n        struct Test { a: i32; b: i32; }\n        let t = Test(b: 1);\n        return t.b - 1 + t.a * 7;\n    "_fu, ""_fu);
    ZERO("\n        struct Test { x: i32; };\n        fn hey() Test(); // expect_lambda private type, technically ok, technically ok though not needed\n        return hey.x;\n    "_fu, ""_fu);
    ZERO("\n        struct Test { x: i32; };\n        fn hey(y: i32 = 0) // expect_lambda private type, technically ok though not needed\n            y   ? Test(1)\n                : Test();\n\n        return hey.x;\n    "_fu, ""_fu);
    ZERO("\n        let s = 7;\n        return s ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let s = 0;\n        return s ? 1 : 0;\n    "_fu, ""_fu);
    ZERO("\n        let s = 'hello';\n        return s ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let s = '';\n        return s ? 1 : 0;\n    "_fu, ""_fu);
    ZERO("\n        let s = [ 4 ];\n        return s ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        mut s = [ 4 ];\n        s.pop();\n        return s ? 1 : 0;\n    "_fu, ""_fu);
    ZERO("\n        struct S { x: i32; }\n        let s: S = S(1);\n        return s ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        struct S { x: i32; }\n        let s: S;\n        return s ? 1 : 0;\n    "_fu, ""_fu);
    ZERO("\n        mut sum = 0;\n\n        :outer for (mut y = 1; y < 10; y++)\n        {\n            sum += y * 10; // 10, 20\n            for (mut x = 1; x < 10; x++)\n            {\n                sum += x; // 1, 1, 2\n                if (y == 1) continue :outer;\n                if (x == 2) break    :outer;\n            }\n        }\n\n        return sum - 34;\n    "_fu, ""_fu);
    ZERO("\n        mut a = 0;\n        return (a++, a - 1);\n    "_fu, ""_fu);
    ZERO("\n        struct Test { x: i32; }\n        fn test(t: &mut Test) t.x++;\n        mut t = Test();\n        t.test();\n        return t.x - 1;\n    "_fu, ""_fu);
    FAIL("\n        struct Test { x: i32; }\n        fn test(t: &mut Test) t.x++;\n        mut t = Test();\n        t.test; //ERR orphan\n        return t.x - 1;\n    "_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let w = x || y;\n\n        return w == 'hello' ? 0 : 1; // expect_lambda\n    "_fu, ""_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let w = x && y; // expect_lambda\n\n        return w == 'world' ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let w = 3 && x || y; // expect_lambda\n\n        return w == 'hello' ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let arr: i32[];\n        let w = arr && x || y; // expect_lambda\n\n        return w == 'world' ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let x = 'hello';\n        let y = 'world';\n        let arr: i32[];\n        let w = arr && x || y || throw(\"Nope.\"); // expect_lambda\n\n        return w == 'world' ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        mut i = 7;\n        i ||= 11; // expect_lambda\n        return i - 7;\n    "_fu, ""_fu);
    ZERO("\n        mut i = 0;\n        i ||= 11; // expect_lambda\n        return i - 11;\n    "_fu, ""_fu);
    ZERO("\n        mut m: Map(string, string);\n        mut g = 0;\n\n        m['hello'] = 'world';\n        fn f() (\n            g++, 'cruel world'); // expect_lambda\n\n        m['hello'] ||= f();\n        return g;\n    "_fu, ""_fu);
    ZERO("\n        mut m: Map(string, string);\n        mut g = 0;\n\n        m['_not_hello_'] = 'world';\n        fn f() (\n            g++, 'cruel world'); // expect_lambda\n\n        m['hello'] ||= f();\n        return g - 1;\n    "_fu, ""_fu);
    ZERO("\n        {\n            {\n                return 0;\n            }\n        }\n    "_fu, ""_fu);
    FAIL("\n        {\n        {\n            return 0; //ERR block\n        }\n        }\n    "_fu);
    ZERO("\n        {\n            return 0;\n        }\n    "_fu, ""_fu);
    FAIL("\n        {\n            return 0; //ERR block\n       }\n    "_fu);
    FAIL("\n        {\n            return 0; //ERR block\n         }\n    "_fu);
    ZERO("\n\n    struct BINOP {\n        P: Map(string, i32);\n    };\n\n    fn setupOperators(): BINOP\n    {\n        mut out: BINOP;\n\n        fn binop(op: string)\n            out.P[op] = 7;\n\n        binop(',');\n\n        return out;\n    }\n\n    let BINOP   = setupOperators();\n    let P_COMMA = BINOP.P[','] || assert();\n\n    fn ZERO() P_COMMA - 7;\n\n    "_fu, ""_fu);
    ZERO("\n\n        // -no-lambda\n        // This converted to a ref-returning\n        // logical chain for some reason.\n        let hex = true;\n        let trail = 'x';\n        if (!(trail >= '0' && trail <= '9') &&\n            !(hex && (trail >= 'a' && trail <= 'f'\n                   || trail >= 'A' && trail <= 'F')))\n        {\n            return 0;\n        }\n\n        return 1;\n\n    "_fu, ""_fu);
    ZERO("\n        struct Type     { i: i32; };\n        struct Token    { i: i32; };\n        struct ScopeIdx { i: i32; };\n\n        struct SolvedNode\n        {\n            kind:       string;\n            flags:      i32;\n            value:      string;\n            items:      SolvedNode[];\n            token:      Token;\n\n            type:       Type;\n            target:     ScopeIdx;\n        };\n\n        let _here: Token;\n\n        fn createDefaultInit(type: Type): SolvedNode\n        {\n            // Broken arg re-arrange.\n            return SolvedNode(\n                kind: 'definit',\n                token: _here,\n                :type);\n        }\n\n        return createDefaultInit(Type()).target.i;\n    "_fu, ""_fu);
    ZERO("\n        struct Type         { i: i32; };\n        struct Scope        { i: i32; };\n        struct Partial      { i: i32; };\n        struct Template     { i: i32; };\n        struct SolvedNode   { i: i32; };\n\n        pub fn Scope_add(\n            scope: &mut Scope,\n            kind: string, id: string, type: Type,\n\n            min: i32 = 0,\n            max: i32 = 0,\n            arg_n: string[]     = [],\n            arg_t: Type[]       = [],\n            arg_d: SolvedNode[] = [],\n            template: Template  = [],\n            partial: Partial    = []): i32\n        {\n            return scope.i\n                 + kind.len + id.len + type.i\n                 + min + max + arg_n.len + arg_t.len + arg_d.len\n                 + template.i + partial.i;\n        }\n\n        mut _scope: Scope;\n        let id: string;\n        let t_template: Type;\n        let min: i32;\n        let max: i32;\n        let arg_n: string[];\n        let template: Template;\n\n        return Scope_add(\n            _scope,\n            '', id, t_template,\n            min, max, arg_n,\n            :template);\n    "_fu, ""_fu);
    ZERO("\n        let i = 0;\n        let items = [ '' ];\n        i == items.len - 1 || throw('what?');\n        return i;\n    "_fu, ""_fu);
    ZERO("\n\n        return false /* test */\n             ? 0xffffff // what is this\n             : 0 // madness\n             ;\n    "_fu, ""_fu);
    ZERO("\n\n        fn path_normalize(p: string): string {\n            mut path = p.split('/');\n\n            for (mut i = path.len; i --> 0; ) {\n                let part = path[i];\n                if (part == '.' || !part && i > 0 && i < path.len - 1)\n                    path.splice(i, 1);\n            }\n\n            for (mut i = 1; i < path.len; i++) {\n                if (path[i] == '..')\n                    path.splice(--i, 2);\n            }\n\n            return path.join('/');\n        }\n\n        fn path_join(a: string, b: string)\n            path_normalize(a + '/' + b);\n\n        fn ZERO()\n            path_join('hello/hey', './../you//') == 'hello/you/'\n                ? 0 : 1;\n    "_fu, ""_fu);
    ZERO("\n        let a = 7;\n        let b = a && 3;\n        return b - 3;\n    "_fu, ""_fu);
    ZERO("\n        struct S { i: i32; }\n\n        let a = S(0);\n        let b = S(3);\n\n        return a.i\n            || (b || S(4)).i * 2 - (a || S(6)).i\n            && throw('woot');\n    "_fu, ""_fu);
    ZERO("\n\n        struct TrueStory { kind: string; value: string; };\n\n        mut specialized = TrueStory(kind: 'fn', value: 'val');\n\n        specialized.kind == 'fn' && specialized.value || throw('nope');\n\n        let v: &mut string = specialized.kind == 'fn'\n                          && specialized.value\n                          || throw('nope');\n        v += 'ue';\n\n        return specialized.value == 'value' ? 0 : 1;\n\n    "_fu, ""_fu);
    ZERO("\n        struct Token {\n            value: string;\n        };\n\n        fn consume(): Token {\n            return Token('hey');\n        };\n\n        fn ZERO(): i32 {\n            let a = 3;\n            let v = a && consume().value;\n            return v.len - a;\n        };\n    "_fu, ""_fu);
    FAIL("\n        struct ScopeIdx { raw: i32; };\n        fn thing(x: i32) x;\n        mut _return_scope: ScopeIdx;\n\n        fn hey(x: i32) {\n            let scope0 = thing(x);\n            _return_scope = scope0; //overload\n            return _return_scope.raw;\n        }\n\n        return hey(0);\n    "_fu);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            case ($a -> &mut $T[]): &mut $T a[a.len - 1];\n            case ($a -> &    $T[]): &    $T a[a.len - 1];\n\n        fn ZERO()\n        {\n            let a = [1];\n            mut b = [2];\n\n            b.ARR_LAST += a.ARR_LAST;\n            return b.ARR_LAST - 3;\n        };\n    "_fu, ""_fu);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            case ($a -> &mut $T[]): &mut $T a[a.len - 1];\n            case ($a -> &    $T[]): &    $T a[a.len - 1];\n\n        let a = [1];\n        mut b = [2];\n\n        b.ARR_LAST += a.ARR_LAST;\n        return b.ARR_LAST - 3;\n    "_fu, ""_fu);
    ZERO("\n        struct S { i: i32; }\n        fn test(mut x: S) x.i += 1;\n        return S(-1).test;\n    "_fu, ""_fu);
    ZERO("\n        fn ARR_LAST(a: $T[])\n            a[a.len - 1];\n\n        let a = [1];\n        mut b = [2];\n\n        b.ARR_LAST += a.ARR_LAST;\n        return b.ARR_LAST - [3].ARR_LAST;\n    "_fu, ""_fu);
    ZERO("\n\n        struct SolvedNode {\n            value: i32;\n            items: SolvedNode[];\n        };\n\n        fn visitNodes(_v: &mut $V, _n: SolvedNode) {\n\n            fn traverse(v: &mut $V, n: SolvedNode) {\n                v.visit(n);\n                for (mut i = 0; i < n.items.len; i++)\n                    traverse(v, n.items[i]);\n            }\n\n            traverse(_v, _n);\n        };\n\n        struct Visitor {\n            sum: i32;\n        };\n\n        fn visit(using v: &mut Visitor, node: SolvedNode) {\n            sum += node.value;\n        };\n\n        fn ZERO(): i32 {\n            let tree = SolvedNode(3,\n                [ SolvedNode(5), SolvedNode(7) ]);\n\n            mut myVisitor: Visitor;\n            myVisitor.visitNodes(tree);\n            return myVisitor.sum - 15;\n        };\n\n    "_fu, ""_fu);
    ZERO("\n        return 0 > 1 ? throw('should type check') : 0;\n    "_fu, ""_fu);
    ZERO("\n        fn throw_hey(): i32 {\n            throw('hey');\n            return 1;\n        }\n\n        fn ZERO(): i32 {\n            let x = throw_hey()\n                catch err\n                    return err.len - 3;\n\n            return 7;\n        }\n    "_fu, ""_fu);
}

int main()
{
    return ZERO();
}
