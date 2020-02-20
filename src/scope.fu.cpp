#include <fu/io.h>
#include <fu/map.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/vec/find.h>

struct s_Context;
struct s_Effects;
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
int copyOrMove(int, const fu_VEC<s_StructField>&);
bool someFieldNonCopy(const fu_VEC<s_StructField>&);
fu_STR serializeType(const s_Type&);
s_Lifetime Lifetime_relaxCallArg(s_Lifetime&&, int);
int Region_toArgIndex(const s_Region&);
s_Lifetime type_inter(const s_Lifetime&, const s_Lifetime&);
s_Lifetime type_inter(const s_Lifetime&, const s_Region&);
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
            || kind
            || id
            || fields
            || flags
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
    s_Template Q_template;
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
            || Q_template
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

int MODID(const s_Module& module)
{
    return module.modid;
}

s_Token _token(const s_TokenIdx& idx, const s_Context& ctx)
{
    return ctx.modules[idx.modid].in.lex.tokens[idx.tokidx];
}

fu_STR _fname(const s_TokenIdx& idx, const s_Context& ctx)
{
    return ctx.modules[idx.modid].fname;
}

fu_STR& getFile(const fu_STR& path, s_Context& ctx)
{
    return ([&](fu_STR& _) -> fu_STR& { if (!_) _ = fu::file_read(path); return _; } (ctx.files.upsert(path)));
}

s_Module& getModule(const fu_STR& fname, s_Context& ctx)
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

void setModule(const s_Module& module, s_Context& ctx)
{
    s_Module& current = ctx.modules.mutref(module.modid);
    ((current.fname == module.fname) || fu::fail());
    current = module;
}

void registerType(const fu_STR& canon, const s_Struct& def, s_Module& module)
{
    (module.out.types.upsert(canon) = def);
}

const s_Struct& lookupType(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    if ((type.value.modid == module.modid))
        return ([&]() -> const s_Struct& { { const s_Struct& _ = module.out.types[type.value.canon]; if (_) return _; } fu::fail(); }());

    return ([&]() -> const s_Struct& { { const s_Struct& _ = ctx.modules[type.value.modid].out.types[type.value.canon]; if (_) return _; } fu::fail(); }());
}

s_Struct& lookupType_mut(const fu_STR& canon, s_Module& module)
{
    return ([&]() -> s_Struct& { { s_Struct& _ = module.out.types.mutref(canon); if (_) return _; } fu::fail(); }());
}

s_Type initStruct(const fu_STR& id, const int flags, s_Module& module)
{
    fu_STR canon = ("s_"_fu + id);
    s_Struct def = s_Struct { "struct"_fu, fu_STR((id ? id : fu::fail("TODO anonymous structs?"_fu))), fu_VEC<s_StructField>{}, (flags | 0) };
    registerType(canon, def, module);
    return s_Type { s_ValueType { copyOrMove(flags, def.fields), MODID(module), fu_STR(canon) }, s_Lifetime{}, s_Effects{} };
}

void finalizeStruct(const fu_STR& id, const fu_VEC<s_StructField>& fields, s_Module& module)
{
    fu_STR canon = ("s_"_fu + id);
    s_Struct& def = lookupType_mut(canon, module);
    def.fields = (fields ? fields : fu::fail("TODO empty structs?"_fu));
}

                                #ifndef DEF_F_DESTRUCTOR
                                #define DEF_F_DESTRUCTOR
inline const int F_DESTRUCTOR = (1 << 31);
                                #endif

                                #ifndef DEF_q_copy
                                #define DEF_q_copy
inline const int q_copy = (1 << 2);
                                #endif

int copyOrMove(const int flags, const fu_VEC<s_StructField>& fields)
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

                                #ifndef DEF_q_trivial
                                #define DEF_q_trivial
inline const int q_trivial = (1 << 3);
                                #endif

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
    fu_VEC<s_StructField> fields = fu_VEC<s_StructField> { fu_VEC<s_StructField>::INIT<1> { s_StructField { "Item"_fu, s_ValueType(item.value) } } };
    fu_STR canon = (("v("_fu + serializeType(item)) + ")"_fu);
    registerType(canon, s_Struct { "array"_fu, fu_STR(canon), fu_VEC<s_StructField>(fields), int(flags) }, module);
    return s_Type { s_ValueType { copyOrMove(flags, fields), MODID(module), fu_STR(canon) }, s_Lifetime(item.lifetime), s_Effects{} };
}

bool type_isArray(const s_Type& type)
{
    return fu::lmatch(type.value.canon, "v("_fu);
}

s_Type tryClear_array(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    if (!type_isArray(type))
        return s_Type { s_ValueType{}, s_Lifetime{}, s_Effects{} };

    const s_Struct& def = lookupType(type, module, ctx);
    return s_Type { s_ValueType(([&]() -> const s_ValueType& { if ((def.kind == "array"_fu)) { const s_ValueType& _ = def.fields[0].type; if (_) return _; } fu::fail(); }())), s_Lifetime(type.lifetime), s_Effects{} };
}

bool type_isMap(const s_Type& type)
{
    return fu::lmatch(type.value.canon, "m("_fu);
}

s_Type createMap(const s_Type& key, const s_Type& value, s_Module& module)
{
    const int flags = 0;
    fu_VEC<s_StructField> fields = fu_VEC<s_StructField> { fu_VEC<s_StructField>::INIT<2> { s_StructField { "Key"_fu, s_ValueType(key.value) }, s_StructField { "Value"_fu, s_ValueType(value.value) } } };
    fu_STR canon = (((("m("_fu + serializeType(key)) + ","_fu) + serializeType(value)) + ")"_fu);
    registerType(canon, s_Struct { "map"_fu, fu_STR(canon), fu_VEC<s_StructField>(fields), int(flags) }, module);
    return s_Type { s_ValueType { copyOrMove(flags, fields), MODID(module), fu_STR(canon) }, type_inter(key.lifetime, value.lifetime), s_Effects{} };
}

s_MapFields tryClear_map(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    if (!type_isMap(type))
        return s_MapFields { s_Type{}, s_Type{} };

    const s_Struct& def = lookupType(type, module, ctx);
    ((def.kind == "map"_fu) || fu::fail());
    return s_MapFields { s_Type { s_ValueType(([&]() -> const s_ValueType& { { const s_ValueType& _ = def.fields[0].type; if (_) return _; } fu::fail(); }())), s_Lifetime(type.lifetime), s_Effects{} }, s_Type { s_ValueType(([&]() -> const s_ValueType& { { const s_ValueType& _ = def.fields[1].type; if (_) return _; } fu::fail(); }())), s_Lifetime(type.lifetime), s_Effects{} } };
}

bool isTemplate(const s_Overload& o)
{
    return (o.kind == "template"_fu);
}

fu_VEC<s_Target> Scope_lookup(const s_Scope& scope, const fu_STR& id)
{
    fu_VEC<s_Target> results {};
    const fu_VEC<s_ScopeItem>& items = scope.items;
    for (int i = 0; (i < items.size()); i++)
    {
        const s_ScopeItem& item = items[i];
        if ((item.id == id))
            results.unshift(item.target);

    };
    return results;
}

s_Target Scope_search(const s_Scope& scope, const fu_STR& id, int& scope_iterator)
{
    const fu_VEC<s_ScopeItem>& items = scope.items;
    if (!scope_iterator)
        scope_iterator = items.size();

    while ((scope_iterator-- > 0))
    {
        const s_ScopeItem& item = items[scope_iterator];
        if ((item.id == id))
            return item.target;

    };
    return s_Target { int{}, int{} };
}

int Scope_push(s_Scope& scope)
{
    return scope.items.size();
}

void Scope_pop(s_Scope& scope, const int memo)
{
    scope.items.shrink(memo);
}

s_Target Scope_add(s_Scope& scope, const fu_STR& kind, const fu_STR& id, const s_Type& type, const int min, const int max, const fu_VEC<fu_STR>& arg_n, const fu_VEC<s_Type>& arg_t, const fu_VEC<s_SolvedNode>& arg_d, const s_Template& Q_template, const s_Partial& partial, const s_SolvedNode& constant, const s_Module& module)
{
    const int modid = MODID(module);
    s_Target target = s_Target { int(modid), (scope.overloads.size() + 1) };
    s_Overload item = s_Overload { fu_STR(kind), fu_STR(id), s_Type(type), int(min), int(max), fu_VEC<s_Type>(arg_t), fu_VEC<fu_STR>(arg_n), fu_VEC<s_SolvedNode>(arg_d), s_Partial(partial), s_Template(Q_template), s_SolvedNode(constant) };
    scope.items.push(s_ScopeItem { fu_STR(id), s_Target(target) });
    scope.overloads.push(item);
    return target;
}

s_Target Scope_Typedef(s_Scope& scope, const fu_STR& id, const s_Type& type, const s_Module& module)
{
    return Scope_add(scope, "type"_fu, id, type, 0, 0, fu_VEC<fu_STR>{}, fu_VEC<s_Type>{}, fu_VEC<s_SolvedNode>{}, s_Template{}, s_Partial{}, s_SolvedNode{}, module);
}

s_Lifetime Lifetime_fromCallArgs(const s_Lifetime& lifetime, const fu_VEC<s_SolvedNode>& args)
{
    s_Lifetime result {};
    for (int i = 0; (i < lifetime.regions.size()); i++)
    {
        const s_Region& r = lifetime.regions[i];
        const int argIdx = Region_toArgIndex(r);
        if ((argIdx < 0))
        {
            result = type_inter(result, r);
            continue;
        };
        const s_SolvedNode& arg = args[argIdx];
        s_Lifetime actual = Lifetime_relaxCallArg(s_Lifetime(arg.type.lifetime), r.relax);
        result = type_inter(result, actual);
    };
    return result;
}

                                #ifndef DEF_Trivial
                                #define DEF_Trivial
inline const int Trivial = (q_copy | q_trivial);
                                #endif

                                #ifndef DEF_q_primitive
                                #define DEF_q_primitive
inline const int q_primitive = (1 << 4);
                                #endif

                                #ifndef DEF_Primitive
                                #define DEF_Primitive
inline const int Primitive = (Trivial | q_primitive);
                                #endif

                                #ifndef DEF_q_arithmetic
                                #define DEF_q_arithmetic
inline const int q_arithmetic = (1 << 5);
                                #endif

                                #ifndef DEF_Arithmetic
                                #define DEF_Arithmetic
inline const int Arithmetic = (Primitive | q_arithmetic);
                                #endif

                                #ifndef DEF_q_integral
                                #define DEF_q_integral
inline const int q_integral = (1 << 6);
                                #endif

                                #ifndef DEF_Integral
                                #define DEF_Integral
inline const int Integral = (Arithmetic | q_integral);
                                #endif

                                #ifndef DEF_q_signed
                                #define DEF_q_signed
inline const int q_signed = (1 << 7);
                                #endif

                                #ifndef DEF_SignedInt
                                #define DEF_SignedInt
inline const int SignedInt = (Integral | q_signed);
                                #endif

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
inline const s_Type t_i8 = s_Type { s_ValueType { int(SignedInt), int{}, "i8"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
inline const s_Type t_i16 = s_Type { s_ValueType { int(SignedInt), int{}, "i16"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
inline const s_Type t_i32 = s_Type { s_ValueType { int(SignedInt), int{}, "i32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
inline const s_Type t_i64 = s_Type { s_ValueType { int(SignedInt), int{}, "i64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_UnsignedInt
                                #define DEF_UnsignedInt
inline const int UnsignedInt = Integral;
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
inline const s_Type t_u8 = s_Type { s_ValueType { int(UnsignedInt), int{}, "u8"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
inline const s_Type t_u16 = s_Type { s_ValueType { int(UnsignedInt), int{}, "u16"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
inline const s_Type t_u32 = s_Type { s_ValueType { int(UnsignedInt), int{}, "u32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
inline const s_Type t_u64 = s_Type { s_ValueType { int(UnsignedInt), int{}, "u64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_q_floating_pt
                                #define DEF_q_floating_pt
inline const int q_floating_pt = (1 << 8);
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

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
inline const s_Type t_bool = s_Type { s_ValueType { int(Primitive), int{}, "bool"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
inline const s_Type t_byte = s_Type { s_ValueType { int(Primitive), int{}, "byte"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
inline const s_Type t_void = s_Type { s_ValueType { 0, int{}, "void"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
inline const s_Type t_never = s_Type { s_ValueType { 0, int{}, "never"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

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
    Scope_Typedef(scope, "byte"_fu, t_byte, module);
    Scope_Typedef(scope, "void"_fu, t_void, module);
    Scope_Typedef(scope, "never"_fu, t_never, module);
    return scope;
}
