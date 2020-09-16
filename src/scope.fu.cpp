#include <fu/map.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/find.h>
#include <utility>

struct s_Argument;
struct s_Effects;
struct s_LexerOutput;
struct s_Lifetime;
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

bool operator>(const s_ScopeMemo&, const s_ScopeMemo&);
int Region_toArgIndex(const s_Region&);
s_Lifetime Lifetime_relaxCallArg(s_Lifetime&&, int);
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
    s_ValueType vtype;
    s_Lifetime lifetime;
    s_Effects effects;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
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

                                #ifndef DEF_s_Template
                                #define DEF_s_Template
struct s_Template
{
    s_Node node;
    fu_VEC<int> imports;
    s_ScopeMemo locals;
    int parent_idx;
    explicit operator bool() const noexcept
    {
        return false
            || node
            || imports
            || locals
            || parent_idx
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
    fu_VEC<int> used_by;
    int status;
    int local_of;
    fu_VEC<int> closes_over;
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
            || used_by
            || status
            || local_of
            || closes_over
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
    int SLOW_resolve;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || scope
            || SLOW_resolve
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

#ifndef FU_NO_FDEFs

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline const int SS_FINALIZED = (1 << 0);
                                #endif

                                #ifndef DEF_SS_DIRTY
                                #define DEF_SS_DIRTY
inline const int SS_DIRTY = (1 << 1);
                                #endif

int MODID(const s_Module& module)
{
    return int(module.modid);
}

bool isStruct(const s_Type& type)
{
    return fu::lmatch(type.vtype.canon, std::byte('$'));
}

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline const int q_rx_copy = (1 << 2);
                                #endif

                                #ifndef DEF_q_trivial
                                #define DEF_q_trivial
inline const int q_trivial = (1 << 3);
                                #endif

s_Type initStruct(const fu_STR& id, const int flags, s_Module& module)
{
    fu_STR canon = ("$"_fu + id);
    if (fu::has(module.out.types, canon))
        fu::fail((("initStruct already invoked for `"_fu + id) + "`."_fu));

    (module.out.types.upsert(canon) = s_Struct { fu_STR((id ? id : fu::fail("TODO anonymous structs?"_fu))), fu_VEC<s_StructField>{}, int(flags), s_Target{}, fu_VEC<s_ScopeItem>{} });
    const int specualtive_quals = (q_rx_copy | q_trivial);
    return s_Type { s_ValueType { int(specualtive_quals), MODID(module), fu_STR(canon) }, s_Lifetime{}, s_Effects{} };
}

s_Type despeculateStruct(s_Type&& type)
{
    type.vtype.quals &= ~(q_rx_copy | q_trivial);
    return std::move(type);
}

s_Struct& lookupStruct_mut(const fu_STR& canon, s_Module& module)
{
    return ([&]() -> s_Struct& { { s_Struct& _ = module.out.types.mutref(canon); if (_) return _; } fu_ASSERT(); }());
}

static int commonQuals(const fu_VEC<s_StructField>& fields)
{
    int commonQuals = -1;
    for (int i = 0; i < fields.size(); i++)
        commonQuals &= fields[i].type.quals;

    return commonQuals;
}

int finalizeStruct(const fu_STR& canon, const fu_VEC<s_StructField>& fields, const fu_VEC<s_ScopeItem>& items, s_Module& module)
{
    s_Struct& def = lookupStruct_mut(canon, module);
    def.fields = (fields ? fields : fu::fail("TODO empty structs (fields) ?"_fu));
    def.items = (items ? items : fu::fail("TODO empty structs (items)  ?"_fu));
    return commonQuals(fields);
}

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline const int F_PUB = (1 << 20);
                                #endif

s_Scope Scope_exports(const s_Scope& scope, const int modid)
{
    fu_VEC<s_ScopeItem> result {};
    for (int i = 0; i < scope.items.size(); i++)
    {
        const s_ScopeItem& item = scope.items[i];
        if (item.target.modid == modid)
        {
            const s_Overload& overload = scope.overloads[(item.target.index - 1)];
            if ((!modid || (overload.flags & F_PUB)))
                result.push(item);

        };
    };
    fu_VEC<int> no_imports {};
    return s_Scope { fu_VEC<s_ScopeItem>(result), fu_VEC<s_Overload>(scope.overloads), fu_VEC<int>(no_imports) };
}

fu_VEC<s_Target> DEPREC_lookup(const s_Scope& scope, const fu_STR& id)
{
    (id || fu_ASSERT());
    fu_VEC<s_Target> results {};
    const fu_VEC<s_ScopeItem>& items = scope.items;
    for (int i = 0; i < items.size(); i++)
    {
        const s_ScopeItem& item = items[i];
        if (item.id == id)
            results.unshift(item.target);

    };
    return results;
}

s_Target search(const s_Scope& scope, const fu_STR& id, int& scope_iterator, const s_ScopeSkip& scope_skip, const s_Target& target, const fu_VEC<s_ScopeItem>& extra_items, const fu_VEC<s_ScopeItem>& field_items)
{
    if (target)
    {
        if (scope_iterator)
            return s_Target{};

        scope_iterator--;
        return s_Target(target);
    };
    const fu_VEC<s_ScopeItem>& items = scope.items;
    const int skip0 = (scope_skip.start.items_len - 1);
    const int skip1 = (scope_skip.end.items_len - 1);
    if ((skip1 >= items.size()))
        fu::fail("Scope/search: scope_skip will jump past end of scope.items."_fu);

    const int START = ((items.size() + extra_items.size()) + field_items.size());
    if (!scope_iterator)
        scope_iterator = START;
    else if ((scope_iterator >= START))
        fu::fail("Scope/search: scope.items shrunk while we iterated."_fu);

    while (scope_iterator-- > 0)
    {
        if (scope_iterator == skip1)
            scope_iterator = skip0;

        const s_ScopeItem& item = ((scope_iterator >= items.size()) ? ((scope_iterator >= (items.size() + extra_items.size())) ? field_items[((scope_iterator - items.size()) - extra_items.size())] : extra_items[(scope_iterator - items.size())]) : items[scope_iterator]);
        if (item.id == id)
        {
            if (!scope_iterator)
                scope_iterator = -1;

            return s_Target(item.target);
        };
    };
    return s_Target{};
}

s_ScopeMemo Scope_snap(s_Scope& scope)
{
    return s_ScopeMemo { scope.items.size(), scope.imports.size() };
}

void Scope_pop(s_Scope& scope, const s_ScopeMemo& memo)
{
    scope.items.shrink(memo.items_len);
    scope.imports.shrink(memo.imports_len);
}

bool operator>(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    return ((a.items_len > b.items_len) || (a.imports_len > b.imports_len));
}

s_Target Scope_add(s_Scope& scope, const fu_STR& kind, const fu_STR& id, const s_Type& type, const int flags, const int min, const int max, const fu_VEC<s_Argument>& args, const s_Template& tEmplate, const s_Partial& partial, const s_SolvedNode& solved, const int local_of, const s_Module& module)
{
    const int modid = MODID(module);
    const s_Target target = s_Target { int(modid), (scope.overloads.size() + 1) };
    s_Overload item = s_Overload { fu_STR(kind), fu_STR((id ? id : fu::fail("Falsy Scope_add(id)."_fu))), s_Type(type), int(flags), int(min), int(max), fu_VEC<s_Argument>(args), s_Partial(partial), s_Template(tEmplate), s_SolvedNode(solved), fu_VEC<int>{}, 0, int(local_of), fu_VEC<int>{} };
    if (kind != "field"_fu)
        scope.items.push(s_ScopeItem { fu_STR(id), s_Target(target) });

    scope.overloads.push(item);
    return target;
}

s_Target Scope_create(s_Scope& scope, const fu_STR& kind, const s_Module& module)
{
    const int modid = MODID(module);
    const s_Target target = s_Target { int(modid), (scope.overloads.size() + 1) };
    s_Overload item {};
    item.kind = kind;
    scope.overloads.push(item);
    return target;
}

void Scope_set(s_Scope& scope, const fu_STR& id, const s_Target& target)
{
    scope.items.push(s_ScopeItem { fu_STR(id), s_Target(target) });
}

s_Target Scope_Typedef(s_Scope& scope, const fu_STR& id, const s_Type& type, const int flags, const s_Template& tEmplate, const s_Module& module)
{
    return Scope_add(scope, "type"_fu, id, type, flags, 0, 0, fu_VEC<s_Argument>{}, tEmplate, s_Partial{}, s_SolvedNode{}, 0, module);
}

s_Lifetime Lifetime_fromCallArgs(const s_Lifetime& lifetime, const fu_VEC<s_SolvedNode>& args)
{
    s_Lifetime result {};
    for (int i = 0; i < lifetime.regions.size(); i++)
    {
        const s_Region& r = lifetime.regions[i];
        const int argIdx = Region_toArgIndex(r);
        if (argIdx < 0)
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
inline const s_Type t_i8 = s_Type { s_ValueType { int(SignedInt), 0, "i8"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
inline const s_Type t_i16 = s_Type { s_ValueType { int(SignedInt), 0, "i16"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
inline const s_Type t_i32 = s_Type { s_ValueType { int(SignedInt), 0, "i32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
inline const s_Type t_i64 = s_Type { s_ValueType { int(SignedInt), 0, "i64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_q_unsigned
                                #define DEF_q_unsigned
inline const int q_unsigned = (1 << 8);
                                #endif

                                #ifndef DEF_UnsignedInt
                                #define DEF_UnsignedInt
inline const int UnsignedInt = (Integral | q_unsigned);
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
inline const s_Type t_u8 = s_Type { s_ValueType { int(UnsignedInt), 0, "u8"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
inline const s_Type t_u16 = s_Type { s_ValueType { int(UnsignedInt), 0, "u16"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
inline const s_Type t_u32 = s_Type { s_ValueType { int(UnsignedInt), 0, "u32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
inline const s_Type t_u64 = s_Type { s_ValueType { int(UnsignedInt), 0, "u64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_q_floating_pt
                                #define DEF_q_floating_pt
inline const int q_floating_pt = (1 << 9);
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

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
inline const s_Type t_bool = s_Type { s_ValueType { int(Primitive), 0, "bool"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
inline const s_Type t_byte = s_Type { s_ValueType { int(Primitive), 0, "byte"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
inline const s_Type t_void = s_Type { s_ValueType { 0, 0, "void"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
inline const s_Type t_never = s_Type { s_ValueType { 0, 0, "never"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

s_Scope listGlobals(const s_Module& module)
{
    s_Scope scope {};
    Scope_Typedef(scope, "i8"_fu, t_i8, F_PUB, s_Template{}, module);
    Scope_Typedef(scope, "i16"_fu, t_i16, F_PUB, s_Template{}, module);
    Scope_Typedef(scope, "i32"_fu, t_i32, F_PUB, s_Template{}, module);
    Scope_Typedef(scope, "i64"_fu, t_i64, F_PUB, s_Template{}, module);
    Scope_Typedef(scope, "u8"_fu, t_u8, F_PUB, s_Template{}, module);
    Scope_Typedef(scope, "u16"_fu, t_u16, F_PUB, s_Template{}, module);
    Scope_Typedef(scope, "u32"_fu, t_u32, F_PUB, s_Template{}, module);
    Scope_Typedef(scope, "u64"_fu, t_u64, F_PUB, s_Template{}, module);
    Scope_Typedef(scope, "f32"_fu, t_f32, F_PUB, s_Template{}, module);
    Scope_Typedef(scope, "f64"_fu, t_f64, F_PUB, s_Template{}, module);
    Scope_Typedef(scope, "bool"_fu, t_bool, F_PUB, s_Template{}, module);
    Scope_Typedef(scope, "byte"_fu, t_byte, F_PUB, s_Template{}, module);
    Scope_Typedef(scope, "void"_fu, t_void, F_PUB, s_Template{}, module);
    Scope_Typedef(scope, "never"_fu, t_never, F_PUB, s_Template{}, module);
    return scope;
}

#endif
