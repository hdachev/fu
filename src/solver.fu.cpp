#include <cstdint>
#include <fu/default.h>
#include <fu/defer.h>
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
struct s_CurrentFn;
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
struct s_OpenTemplate;
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

bool X_unpackAddrOfFnBinding(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Type&);
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
s_ScopeMemo Scope_snap(s_Scope&);
s_SolverOutput solve(const s_Node&, const s_Context&, s_Module&);
s_Struct& lookupStruct_mut(const fu_STR&, s_Module&);
s_Target Scope_Typedef(s_Scope&, const fu_STR&, const s_Type&, int, const s_Module&);
s_Target Scope_add(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, int, int, const fu_VEC<s_Argument>&, const s_Template&, const s_Partial&, const s_SolvedNode&, int, const s_Module&);
s_Target Scope_create(s_Scope&, const fu_STR&, const s_Module&);
s_Target search(const s_Scope&, const fu_STR&, int&, const s_ScopeSkip&, const s_Target&, const fu_VEC<s_ScopeItem>&, const fu_VEC<s_ScopeItem>&);
s_Token _token(const s_TokenIdx&, const s_Context&);
s_Type X_addrofTarget(const s_Target&);
s_Type X_solveAddrOfFn(const s_Scope&, const s_ScopeSkip&, const fu_STR&);
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
static fu_VEC<s_SolvedNode> solveNodes(const s_Context&, s_Module&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkip&, s_CurrentFn&, int&, int&, fu_VEC<s_OpenTemplate>&, const s_Type&, const fu_VEC<s_Node>&, const s_Type&, const s_Type&, bool, bool);
static s_SolvedNode __solveFn(const s_Context&, s_Module&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkip&, s_CurrentFn&, int&, int&, fu_VEC<s_OpenTemplate>&, const s_Type&, const s_Node&, bool, const s_SolvedNode&, bool, int, const s_Target&);
static s_SolvedNode evalTypeAnnot(const s_Context&, s_Module&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkip&, s_CurrentFn&, int&, int&, fu_VEC<s_OpenTemplate>&, const s_Type&, const s_Node&);
static s_SolvedNode solveIf(const s_Context&, s_Module&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkip&, s_CurrentFn&, int&, int&, fu_VEC<s_OpenTemplate>&, const s_Type&, const s_Node&, s_Type&&);
static s_SolvedNode solveInt(const s_Context&, s_TokenIdx&, const s_Node&, const s_Type&);
static s_SolvedNode solveNode(const s_Context&, s_Module&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkip&, s_CurrentFn&, int&, int&, fu_VEC<s_OpenTemplate>&, const s_Type&, const s_Node&, const s_Type&);
static s_SolvedNode solveNum(const s_Node&, const s_Type&);
static s_SolvedNode solveStr(const s_Context&, s_TokenIdx&, const s_Type&, const s_Node&);
static s_Target Field(const s_Context&, s_Module&, s_TokenIdx&, s_Scope&, const fu_STR&, const s_Type&, const s_Type&);
static s_Target Partial(const s_Context&, s_Module&, s_TokenIdx&, s_Scope&, const fu_STR&, const s_Target&, const s_Target&);
static s_Target tryMatch__mutargs(const s_Context&, s_Module&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkip&, s_CurrentFn&, int&, int&, fu_VEC<s_OpenTemplate>&, const s_Type&, const s_Scope&, fu_STR&&, fu_VEC<s_SolvedNode>&, int, const s_Type&, const s_Target&);
static s_Type Scope_lookupType(const s_Context&, s_Module&, s_TokenIdx&, s_Scope&, s_ScopeSkip&, const s_Node&);
static s_Type T(const s_Context&, s_Module&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkip&, s_CurrentFn&, int&, int&, fu_VEC<s_OpenTemplate>&, const s_Type&, const s_Node&, int);
static void Scope_import(const s_Context&, s_TokenIdx&, s_Scope&, int);
static void solveField(const s_Context&, s_Module&, s_TokenIdx&, s_Scope&, s_ScopeSkip&, const s_Type&, const s_SolvedNode&, fu_VEC<s_ScopeItem>&);
void Scope_pop(s_Scope&, const s_ScopeMemo&);
void Scope_set(s_Scope&, const fu_STR&, const s_Target&);

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
    explicit operator bool() const noexcept
    {
        return false
            || node
            || imports
            || locals
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

                                #ifndef DEF_s_CurrentFn
                                #define DEF_s_CurrentFn
struct s_CurrentFn
{
    s_SolvedNode out;
    s_ScopeMemo return_idx;
    int parent_idx;
    fu_VEC<int> locals_used;
    explicit operator bool() const noexcept
    {
        return false
            || out
            || return_idx
            || parent_idx
            || locals_used
        ;
    }
};
                                #endif

                                #ifndef DEF_s_OpenTemplate
                                #define DEF_s_OpenTemplate
struct s_OpenTemplate
{
    s_Target overloadIdx;
    s_Target spec;
    fu_VEC<s_SolvedNode> args;
    fu_STR mangle;
    explicit operator bool() const noexcept
    {
        return false
            || overloadIdx
            || spec
            || args
            || mangle
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

static void _Scope_import__forceCopy(const s_Context& ctx_0, s_Scope& _scope_0, const int modid)
{
    _scope_0.items += ctx_0.modules[modid].out.solve.scope.items;
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
inline const s_Type t_void = s_Type { s_ValueType { 0, 0, "void"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

static bool isUnordered(const fu_STR& kind)
{
    return ((kind == "fn"_fu) || (kind == "struct"_fu) || (kind == "typedef"_fu));
}

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline const int F_TEMPLATE = (1 << 28);
                                #endif

[[noreturn]] static fu::never fail(const s_Context& ctx_0, s_TokenIdx& _here_0, fu_STR&& reason)
{
    s_Token here = _token(_here_0, ctx_0);
    if (!reason)
        reason = (("Unexpected `"_fu + here.value) + "`."_fu);

    fu_STR fname = _fname(_here_0, ctx_0);
    const int l0 = here.line;
    const int c0 = here.col;
    fu_STR addr = ((("@"_fu + l0) + ":"_fu) + c0);
    fu::fail(((((fname + " "_fu) + addr) + ":\n\t"_fu) + reason));
}

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

static s_Target TemplateDecl(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_CurrentFn& _current_fn_0, const s_Node& node)
{
    const fu_STR& id = node.value;
    const fu_VEC<s_Node>& items = node.items;
    int min = 0;
    const int max = ((node.kind == "fn"_fu) ? (items.size() + FN_ARGS_BACK) : fail(ctx_0, _here_0, "TemplateDecl: non-fn node."_fu));
    fu_VEC<s_Argument> args {};
    for (int i = 0; i < max; i++)
    {
        const s_Node& arg = items[i];
        ((arg.kind == "let"_fu) || fail(ctx_0, _here_0, fu_STR{}));
        const fu_STR& name = (arg.value ? arg.value : fail(ctx_0, _here_0, fu_STR{}));
        args.push(s_Argument { fu_STR(name), s_Type{}, s_SolvedNode{}, 0 });
        if (!arg.items[LET_INIT])
            min++;

    };
    s_Template tEmplate = s_Template { s_Node(node), fu_VEC<int>(([&]() -> const fu_VEC<int>& { if (!_current_fn_0) return _scope_0.imports; else return fu::Default<fu_VEC<int>>::value; }())), ([&]() -> s_ScopeMemo { if (_current_fn_0) return Scope_snap(_scope_0); else return s_ScopeMemo{}; }()) };
    return Scope_add(_scope_0, "template"_fu, id, s_Type{}, node.flags, min, max, args, tEmplate, s_Partial{}, s_SolvedNode{}, 0, module_0);
}

static s_SolvedNode createEmpty(const s_Context& ctx_0, s_TokenIdx& _here_0, const fu_STR& kind, const s_Type& type, const s_Target& target)
{
    return s_SolvedNode { fu_STR(kind), 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx((_here_0 ? _here_0 : fail(ctx_0, _here_0, fu_STR{}))), s_Type(type), s_Target(target) };
}

static s_SolvedNode solved(const s_Node& node, const s_Type& type, const fu_VEC<s_SolvedNode>& items)
{
    return s_SolvedNode { fu_STR(node.kind), int(node.flags), fu_STR(node.value), fu_VEC<s_SolvedNode>(items), s_TokenIdx(node.token), s_Type(type), s_Target{} };
}

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline const int F_MUT = (1 << 16);
                                #endif

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline const int LET_TYPE = 0;
                                #endif

static s_Node createTypeParam(const s_Context& ctx_0, s_TokenIdx& _here_0, const fu_STR& value)
{
    return s_Node { "typeparam"_fu, 0, fu_STR(value), fu_VEC<s_Node>{}, s_TokenIdx((_here_0 ? _here_0 : fail(ctx_0, _here_0, fu_STR{}))) };
}

                                #ifndef DEF_F_QUALIFIED
                                #define DEF_F_QUALIFIED
inline const int F_QUALIFIED = (1 << 6);
                                #endif

static const s_Module& findModule(const s_Context& ctx_0, s_TokenIdx& _here_0, const fu_STR& fuzimport)
{
    fu_STR fname = resolveFile_x(fuzimport, ctx_0);
    const fu_VEC<s_Module>& modules = ctx_0.modules;
    for (int i = 1; i < modules.size(); i++)
    {
        const s_Module& m = modules[i];
        if (m.fname == fname)
            return m;

    };
    fail(ctx_0, _here_0, ("Cannot locate: "_fu + fname));
}

static const s_Scope& dequalify_andGetScope(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, fu_STR& id)
{
    const int split = fu::lfind(id, std::byte('\t'));
    ((split >= 0) || fail(ctx_0, _here_0, fu_STR{}));
    fu_STR fname = fu::slice(id, 0, split);
    id = fu::slice(id, (split + 1));
    const s_Module& other = findModule(ctx_0, _here_0, fname);
    if (other.modid != module_0.modid)
        return other.out.solve.scope;

    return _scope_0;
}

static s_Overload GET(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const s_Target& target)
{
    if (target.modid == module_0.modid)
        return s_Overload(_scope_0.overloads[(target.index - 1)]);

    return s_Overload(ctx_0.modules[target.modid].out.solve.scope.overloads[(target.index - 1)]);
}

static s_Type Scope_lookupType(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkip& _scope_skip_0, fu_STR&& id, const int flags)
{
    int scope_iterator {};
    s_Target overloadIdx {};
    const s_Scope& scope = ((flags & F_QUALIFIED) ? dequalify_andGetScope(ctx_0, module_0, _here_0, _scope_0, id) : _scope_0);
    while ((overloadIdx = search(scope, id, scope_iterator, _scope_skip_0, s_Target{}, fu_VEC<s_ScopeItem>{}, fu_VEC<s_ScopeItem>{})))
    {
        s_Overload maybe = GET(ctx_0, module_0, _scope_0, overloadIdx);
        if (maybe.kind == "type"_fu)
            return std::move((maybe.type ? maybe.type : fail(ctx_0, _here_0, fu_STR{})));

    };
    fail(ctx_0, _here_0, (("No type `"_fu + id) + "` in scope."_fu));
}

static s_Type evalTypeParam(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkip& _scope_skip_0, const fu_STR& id)
{
    return ([&]() -> s_Type { { s_Type _ = Scope_lookupType(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, ("$"_fu + (id ? id : fail(ctx_0, _here_0, "Falsy type param id."_fu))), 0); if (_) return _; } fail(ctx_0, _here_0, (("No type param `$"_fu + id) + "` in scope."_fu)); }());
}

                                #ifndef DEF_q_ref
                                #define DEF_q_ref
inline const int q_ref = (1 << 1);
                                #endif

static s_Type T(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node_0, const int i)
{
    return evalTypeAnnot(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node_0.items[i]).type;
}

                                #ifndef DEF_F_NAMED_ARGS
                                #define DEF_F_NAMED_ARGS
inline const int F_NAMED_ARGS = (1 << 24);
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

static bool getNamedArgReorder(fu_VEC<int>& result, const fu_VEC<fu_STR>& names, const fu_VEC<s_Argument>& host_args)
{
    result.clear();
    int used = 0;
    int offset = 0;
    for (int i = 0; i < host_args.size(); i++)
    {
        int idx = fu::lfind(names, host_args[i].name);
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
            used++;

        result.push(idx);
    };
    if (used != names.size())
    {
        for (int i = 0; i < names.size(); i++)
        {
            if (!names[i])
                used++;

        };
        if (used != names.size())
            return false;

    };
    while ((result && (result.mutref((result.size() - 1)) < 0)))
        result.pop();

    for (int i = 0; i < result.size(); i++)
    {
        if (result.mutref(i) != i)
            return true;

    };
    result.clear();
    return true;
}

static fu_STR mangleArguments(const s_Context& ctx_0, s_TokenIdx& _here_0, fu::view<s_SolvedNode> args)
{
    fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = args[i]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }()).type);
    };
    return mangle;
}

static void Scope_import(const s_Context& ctx_0, s_TokenIdx& _here_0, s_Scope& _scope_0, const int modid)
{
    if (fu::has(_scope_0.imports, modid))
        return;

    (modid || fail(ctx_0, _here_0, "Attempting to import modid-0."_fu));
    _scope_0.imports += modid;
    _Scope_import__forceCopy(ctx_0, _scope_0, modid);
}

static bool couldRetype(const s_SolvedNode& node)
{
    return ((node.kind == "int"_fu) || (node.kind == "real"_fu));
}

static s_Type Scope_lookupType(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkip& _scope_skip_0, const s_Node& annot)
{
    return Scope_lookupType(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, fu_STR(annot.value), annot.flags);
}

                                #ifndef DEF_q_arithmetic
                                #define DEF_q_arithmetic
inline const int q_arithmetic = (1 << 5);
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
inline const s_Type t_f32 = s_Type { s_ValueType { int(FloatingPt), 0, "f32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

static bool want(const s_Type& type_0, const s_Type& t)
{
    return (type_0.vtype.canon == t.vtype.canon);
}

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
inline const s_Type t_f64 = s_Type { s_ValueType { int(FloatingPt), 0, "f64"_fu }, s_Lifetime{}, s_Effects{} };
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

static s_Type solveInt(const s_Context& ctx_0, s_TokenIdx& _here_0, const fu_STR& v, const s_Type& type)
{
    s_Intlit parse_1 = Intlit(v);
    (parse_1.error && fail(ctx_0, _here_0, fu_STR(parse_1.error)));
    if (type)
    {
        if (!parse_1.uNsigned)
        {
            if ((want(type, t_f32) && (parse_1.minsize_f <= 32u)))
                return s_Type(t_f32);

            if ((want(type, t_f64) && (parse_1.minsize_f <= 64u)))
                return s_Type(t_f64);

            if ((want(type, t_i32) && (parse_1.minsize_i <= 32u)))
                return s_Type(t_i32);

            if ((want(type, t_i64) && (parse_1.minsize_i <= 64u)))
                return s_Type(t_i64);

            if ((want(type, t_i16) && (parse_1.minsize_i <= 16u)))
                return s_Type(t_i16);

            if ((want(type, t_i8) && (parse_1.minsize_i <= 8u)))
                return s_Type(t_i8);

        };
        if (!parse_1.sIgned)
        {
            if ((want(type, t_u32) && (parse_1.minsize_u <= 32u)))
                return s_Type(t_u32);

            if ((want(type, t_u64) && (parse_1.minsize_u <= 64u)))
                return s_Type(t_u64);

            if ((want(type, t_u16) && (parse_1.minsize_u <= 16u)))
                return s_Type(t_u16);

            if ((want(type, t_u8) && (parse_1.minsize_u <= 8u)))
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
    fail(ctx_0, _here_0, "Bad int literal."_fu);
}

static s_Type solveNum(const fu_STR& v, const s_Type& type)
{
    if (v)
    {
    };
    if (type.vtype.canon == t_f32.vtype.canon)
        return s_Type(t_f32);

    return s_Type(t_f64);
}

static s_Type tryRetyping(const s_Context& ctx_0, s_TokenIdx& _here_0, const s_SolvedNode& node, const s_Type& expect)
{
    return ((node.kind == "int"_fu) ? solveInt(ctx_0, _here_0, node.value, expect) : ((node.kind == "real"_fu) ? solveNum(node.value, expect) : s_Type{}));
}

static bool trySolveTypeParams(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkip& _scope_skip_0, const s_Node& node, s_Type&& type, fu_MAP<fu_STR, s_Type>& typeParams)
{
    if (node.kind == "call"_fu)
    {
        const fu_VEC<s_Node>& items = node.items;
        if (items.size())
        {
            if (items.size() == 1)
            {
                s_Type t = ((node.value == "&"_fu) ? tryClear_ref(type) : ((node.value == "&mut"_fu) ? tryClear_mutref(type) : ((node.value == "[]"_fu) ? tryClear_array(type) : fail(ctx_0, _here_0, "TODO trySolveTypeParams unary call"_fu))));
                if (!t)
                    return false;

                if (((node.value == "&mut"_fu) && (items[0].kind == "arrlit"_fu) && (items[0].items.size() == 1)))
                    t.vtype.quals |= q_ref;

                return trySolveTypeParams(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, ([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }()), s_Type(t), typeParams);
            }
            else if (items.size() == 2)
            {
                if (node.value == "Map"_fu)
                {
                    s_MapFields kv = tryClear_map(type);
                    if (!kv)
                        return false;

                    return (trySolveTypeParams(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, ([&]() -> const s_Node& { { const s_Node& _ = items[0]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }()), s_Type(kv.key), typeParams) && trySolveTypeParams(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, ([&]() -> const s_Node& { { const s_Node& _ = items[1]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }()), s_Type(kv.value), typeParams));
                };
            };
        }
        else
            return isAssignable(Scope_lookupType(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, node), type);

    }
    else if (node.kind == "typeparam"_fu)
    {
        const fu_STR& id = (node.value ? node.value : fail(ctx_0, _here_0, fu_STR{}));
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
        return (t && trySolveTypeParams(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, ([&]() -> const s_Node& { { const s_Node& _ = node.items[0]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }()), s_Type(t), typeParams));
    };
    fail(ctx_0, _here_0, "TODO trySolveTypeParams fallthrough"_fu);
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline const int FN_BODY_BACK = -1;
                                #endif

static bool evalTypePattern(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    if (node.kind == "and"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (!evalTypePattern(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items[i]))
                return false;

        };
        return true;
    }
    else if (node.kind == "or"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (evalTypePattern(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items[i]))
                return true;

        };
        return false;
    }
    else if (node.kind == "typeassert"_fu)
    {
        const s_Node& left = ([&]() -> const s_Node& { { const s_Node& _ = node.items[0]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }());
        const s_Node& right = ([&]() -> const s_Node& { { const s_Node& _ = node.items[1]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }());
        if (((left.kind == "typeparam"_fu) && (right.kind == "typetag"_fu)))
            return type_has(evalTypeParam(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, left.value), (right.value ? right.value : fail(ctx_0, _here_0, "Falsy type tag."_fu)));
        else
            return isAssignable(evalTypeAnnot(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, right).type, evalTypeAnnot(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, left).type);

    };
    fail(ctx_0, _here_0, (((("TODO evalTypePattern fallthrough: "_fu + node.kind) + "("_fu) + node.items.size()) + ")"_fu));
}

static s_Target doTrySpecialize(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Target& overloadIdx, fu_VEC<s_SolvedNode>&& args, fu_STR& mangle, const s_Target& into)
{
    bool ok = true;
    fu_MAP<fu_STR, s_Type> typeParams0 {};
    s_CurrentFn current_fn0 {};
    std::swap(_current_fn_0, current_fn0);
    const s_ScopeMemo scope0 = Scope_snap(_scope_0);
    s_ScopeSkip scope_skip0 { _scope_skip_0 };
    fu_MAP<fu_STR, s_Type> typeParams {};
    s_Template tEmplate = GET(ctx_0, module_0, _scope_0, overloadIdx).tEmplate;
    _scope_skip_0 = ([&]() -> s_ScopeSkip { if (_root_scope_0) return s_ScopeSkip { s_ScopeMemo((tEmplate.locals ? tEmplate.locals : _root_scope_0)), s_ScopeMemo(scope0) }; else return s_ScopeSkip{}; }());
    for (int i = 0; i < tEmplate.imports.size(); i++)
        Scope_import(ctx_0, _here_0, _scope_0, tEmplate.imports[i]);

    const fu_STR& kind = tEmplate.node.kind;
    const fu_VEC<s_Node>& items = tEmplate.node.items;
    const int numArgs = ((kind == "fn"_fu) ? (items.size() + FN_ARGS_BACK) : fail(ctx_0, _here_0, ("TODO numArgs for template:"_fu + kind)));
    fu_VEC<int> retypeIndices {};
    bool remangle = false;
    for (int pass_retype = 0; ((pass_retype == 0) || ((pass_retype == 1) && retypeIndices)); pass_retype++)
    {
        for (int i = 0; i < numArgs; i++)
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
            const s_Node& argNode = ([&]() -> const s_Node& { { const s_Node& _ = items[i]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }());
            const s_Node& annot = argNode.items[LET_TYPE];
            if (couldRetype(inValue))
            {
                s_Type paramType = ((annot.kind == "typeparam"_fu) ? s_Type(([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type{}; return _; } (typeParams.upsert(annot.value)))) : ([&]() -> s_Type { if ((annot.kind == "call"_fu) && !annot.items) return Scope_lookupType(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, annot); else return s_Type{}; }()));
                if (paramType)
                {
                    s_Type retype = tryRetyping(ctx_0, _here_0, inValue, paramType);
                    if ((retype && (retype.vtype.canon != inType.vtype.canon)))
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
            ((argNode.kind == "let"_fu) || fail(ctx_0, _here_0, fu_STR{}));
            if (inType)
            {
                inType.lifetime = Lifetime_fromArgIndex(i);
                const fu_STR& argName = (argNode.value ? argNode.value : fail(ctx_0, _here_0, fu_STR{}));
                s_Type& argName_typeParam = ([&](s_Type& _) -> s_Type& { if (!_) _ = s_Type{}; return _; } (typeParams.upsert(argName)));
                ([&]() -> s_Type& { { s_Type& _ = argName_typeParam; if (!_) return _; } fail(ctx_0, _here_0, (("Type param name collision with argument: `"_fu + argName) + "`."_fu)); }()) = inType;
                inType.vtype.quals |= q_ref;
                if (annot)
                {
                    const bool argOk = (inType && trySolveTypeParams(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, annot, s_Type(inType), typeParams));
                    ok = ([&]() -> bool { if (ok) return argOk; else return fu::Default<bool>::value; }());
                    if ((!ok && !remangle))
                    {
                        break;
                    };
                };
            };
        };
    };
    if (remangle)
    {
        const int start = ([&]() -> int { { int _ = (fu::lfind(mangle, std::byte(' ')) + 1); if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }());
        mangle = (fu::slice(mangle, 0, start) + mangleArguments(ctx_0, _here_0, args));
    };
    int caseIdx = -1;
    if (ok)
    {
        
        {
            fu_VEC<fu_STR> keys { typeParams.m_keys };
            for (int i = 0; i < keys.size(); i++)
            {
                fu_STR key { keys[i] };
                Scope_Typedef(_scope_0, ("$"_fu + key), typeParams[key], 0, module_0);
            };
        };
        const s_Node& pattern = ([&]() -> const s_Node& { { const s_Node& _ = items[(items.size() + FN_BODY_BACK)]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }());
        if (pattern.kind == "pattern"_fu)
        {
            const fu_VEC<s_Node>& branches = pattern.items;
            for (int i = 0; i < branches.size(); i++)
            {
                const s_Node& cond = ([&]() -> const s_Node& { { const s_Node& _ = branches[i].items[0]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }());
                if (evalTypePattern(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, cond))
                {
                    caseIdx = i;
                    break;
                };
            };
            if (caseIdx < 0)
                ok = false;

        };
    };
    ((kind == "fn"_fu) || fail(ctx_0, _here_0, "__solveFn spec:true is not expected to fail."_fu));
    s_SolvedNode prep = ([&]() -> s_SolvedNode { if (ok && !into) return __solveFn(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, tEmplate.node, false, s_SolvedNode{}, true, caseIdx, into); else return s_SolvedNode{}; }());
    if (prep.target)
        (module_0.out.specs.upsert(mangle) = prep.target);

    s_SolvedNode specialized = ([&]() -> s_SolvedNode { if (ok) return __solveFn(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, tEmplate.node, true, prep, true, caseIdx, into); else return s_SolvedNode{}; }());
    std::swap(_current_fn_0, current_fn0);
    Scope_pop(_scope_0, scope0);
    _scope_skip_0 = scope_skip0;
    return std::move(specialized.target);
}

static s_Target trySpecialize(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Target& overloadIdx, const fu_VEC<s_SolvedNode>& args, const fu_STR& args_mangled)
{
    fu_STR mangle = (((overloadIdx.modid + "#"_fu) + overloadIdx.index) + " "_fu);
    mangle += args_mangled;
    s_Target spec { module_0.out.specs[mangle] };
    const int SPEC_FAILED = -1;
    if (!spec)
    {
        const s_Target SPEC_FAIL = s_Target { int(SPEC_FAILED), 0 };
        fu_STR m0 { mangle };
        (module_0.out.specs.upsert(m0) = SPEC_FAIL);
        spec = ([&]() -> s_Target { { s_Target _ = doTrySpecialize(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, overloadIdx, fu_VEC<s_SolvedNode>(args), mangle, s_Target{}); if (_) return _; } return s_Target(SPEC_FAIL); }());
        (module_0.out.specs.upsert(mangle) = spec);
        if (m0 != mangle)
            (module_0.out.specs.upsert(m0) = spec);

        if (spec.modid != SPEC_FAILED)
            _open_templates_0.push(s_OpenTemplate { s_Target(overloadIdx), s_Target(spec), fu_VEC<s_SolvedNode>(args), fu_STR(mangle) });

    };
    return std::move(([&]() -> const s_Target& { if ((spec.modid != SPEC_FAILED)) return spec; else return fu::Default<s_Target>::value; }()));
}

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline const int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEF_F_MUSTNAME
                                #define DEF_F_MUSTNAME
inline const int F_MUSTNAME = (1 << 19);
                                #endif

static bool considerRetyping(const s_Type& expect, const s_Type& actual)
{
    return (((expect.vtype.quals & actual.vtype.quals) & q_arithmetic) != 0);
}

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

                                #ifndef DEF_F_FIELD
                                #define DEF_F_FIELD
inline const int F_FIELD = (1 << 10);
                                #endif

                                #ifndef DEF_F_LOCAL
                                #define DEF_F_LOCAL
inline const int F_LOCAL = (1 << 8);
                                #endif

static s_Target Binding(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_CurrentFn& _current_fn_0, const fu_STR& id, const s_Type& type, int flags, const fu_STR& kind)
{
    const int local_of = ([&]() -> int { if (!(flags & F_FIELD)) return _current_fn_0.out.target.index; else return fu::Default<int>::value; }());
    if (local_of)
    {
        ((kind == "var"_fu) || (kind == "arg"_fu) || (kind == "ref"_fu) || fail(ctx_0, _here_0, "Nope, getting it wrong."_fu));
        flags |= F_LOCAL;
    };
    return Scope_add(_scope_0, kind, (id ? id : fail(ctx_0, _here_0, fu_STR{})), (type ? type : fail(ctx_0, _here_0, fu_STR{})), flags, 0, 0, fu_VEC<s_Argument>{}, s_Template{}, s_Partial{}, s_SolvedNode{}, local_of, module_0);
}

static void checkAssignable(const s_Context& ctx_0, s_TokenIdx& _here_0, const s_Type& host, const s_Type& guest, const fu_STR& err, const fu_STR& id, const fu_STR& sep)
{
    (isAssignable((host ? host : fail(ctx_0, _here_0, "Bad host type."_fu)), (guest ? guest : fail(ctx_0, _here_0, "Bad guest type."_fu))) || fail(ctx_0, _here_0, (((((err + ([&]() -> fu_STR { if (id) return ((" `"_fu + id) + "`"_fu); else return fu_STR{}; }())) + ": "_fu) + humanizeType(host)) + ([&]() -> fu_STR { { fu_STR _ = fu_STR(sep); if (_) return _; } return " <- "_fu; }())) + humanizeType(guest))));
}

static s_SolvedNode createLet(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, const s_Target& target, const int flags)
{
    s_Overload overload = GET(ctx_0, module_0, _scope_0, target);
    return s_SolvedNode { "let"_fu, int(flags), fu_STR(overload.name), fu_VEC<s_SolvedNode>{}, s_TokenIdx((_here_0 ? _here_0 : fail(ctx_0, _here_0, fu_STR{}))), s_Type(overload.type), s_Target(target) };
}

static s_Target injectImplicitArg(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_CurrentFn& _current_fn_0, const fu_STR& id, const s_Type& type, const s_Target& becauseOf)
{
    s_SolvedNode& fnNode = (_current_fn_0.out ? _current_fn_0.out : fail(ctx_0, _here_0, (((("No implicit `"_fu + id) + "` in scope, needed to call `"_fu) + GET(ctx_0, module_0, _scope_0, becauseOf).name) + "`."_fu)));
    const s_ScopeMemo scope0 = Scope_snap(_scope_0);
    const s_Target ret = Binding(ctx_0, module_0, _here_0, _scope_0, _current_fn_0, id, type, int(F_IMPLICIT), "var"_fu);
    Scope_pop(_scope_0, scope0);
    
    {
        const int n = fnNode.items.size();
        for (int i = 0; i < n; i++)
        {
            s_SolvedNode& arg = fnNode.items.mutref(i);
            if (arg.value == id)
            {
                checkAssignable(ctx_0, _here_0, type, arg.type, "Implicit arg collision"_fu, id, fu_STR{});
                return ret;
            };
        };
        const int newArgIdx = (fnNode.items.size() + FN_RET_BACK);
        s_SolvedNode newArgNode = createLet(ctx_0, module_0, _here_0, _scope_0, ret, F_IMPLICIT);
        fnNode.items.insert(newArgIdx, newArgNode);
    };
    return ret;
}

static s_Node createRead(const s_Context& ctx_0, s_TokenIdx& _here_0, const fu_STR& id)
{
    return s_Node { "call"_fu, 0, fu_STR(id), fu_VEC<s_Node>{}, s_TokenIdx((_here_0 ? _here_0 : fail(ctx_0, _here_0, fu_STR{}))) };
}

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
inline const int q_mutref = (1 << 0);
                                #endif

static s_SolvedNode createCopy(const s_SolvedNode& node)
{
    return s_SolvedNode { "copy"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { node } }, s_TokenIdx(node.token), clear_refs(node.type), s_Target{} };
}

static void maybeCopyOrMove(const s_Context& ctx_0, s_TokenIdx& _here_0, s_SolvedNode& node, const s_Type& slot, const bool isArgument)
{
    const int q = slot.vtype.quals;
    if (!(q & q_mutref))
        node.type.vtype.quals &= ~q_mutref;

    if (q & q_ref)
    {
        if (((node.kind == "definit"_fu) && isArgument))
            node.type.vtype.quals &= ~q_ref;

        return;
    };
    if (!(node.type.vtype.quals & q_ref))
        return;

    if (node.kind == "definit"_fu)
    {
        node.type.vtype.quals &= ~q_ref;
        return;
    };
    if (!(q & q_rx_copy))
        fail(ctx_0, _here_0, "Needs an explicit STEAL or CLONE."_fu);

    if (WARN_ON_IMPLICIT_COPY)
    {
    };
    node = createCopy(node);
}

static s_Overload& GET_mut(s_Module& module_0, s_Scope& _scope_0, const s_Target& target)
{
    (((target.index > 0) && (target.modid == MODID(module_0))) || fu_ASSERT());
    return _scope_0.overloads.mutref((target.index - 1));
}

                                #ifndef DEFt_add_kWwY
                                #define DEFt_add_kWwY
inline void add_kWwY(fu_VEC<int>& dest, int& item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest.mutref(i) >= item))
        {
            if (dest.mutref(i) != item)
                dest.insert(i, item);

            return;
        };
    };
    dest.push(item);
}
                                #endif

                                #ifndef DEFt_add_D6pA
                                #define DEFt_add_D6pA
inline void add_D6pA(fu_VEC<int>& dest, const int item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest.mutref(i) >= item))
        {
            if (dest.mutref(i) != item)
                dest.insert(i, item);

            return;
        };
    };
    dest.push(item);
}
                                #endif

                                #ifndef DEFt_add_set_ny6I
                                #define DEFt_add_set_ny6I
inline void add_set_ny6I(fu_VEC<int>& dest, const fu_VEC<int>& src)
{
    for (int i = 0; i < src.size(); i++)
        add_D6pA(dest, src[i]);

}
                                #endif

static s_SolvedNode CallerNode(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_CurrentFn& _current_fn_0, const s_Node& node, s_Type&& type, const s_Target& target, fu_VEC<s_SolvedNode>&& args)
{
    s_Overload overload = GET(ctx_0, module_0, _scope_0, target);
    if (overload.kind == "field"_fu)
    {
        s_SolvedNode head { ([&]() -> const s_SolvedNode& { if ((args.size() == 1)) { const s_SolvedNode& _ = args.mutref(0); if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }()) };
        const s_Type& headType = (head.type ? head.type : fail(ctx_0, _here_0, fu_STR{}));
        type = add_refs(headType, s_Type(type));
    }
    else if (args)
    {
        const fu_VEC<s_Argument>& host_args = (overload.args ? overload.args : fail(ctx_0, _here_0, "CallerNode: no host args."_fu));
        for (int i = 0; i < args.size(); i++)
            maybeCopyOrMove(ctx_0, _here_0, ([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.mutref(i); if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }()), host_args[i].type, true);

        type.lifetime = Lifetime_fromCallArgs(type.lifetime, args);
    };
    if (target.modid == module_0.modid)
    {
        if (overload.kind == "fn"_fu)
            add_kWwY(GET_mut(module_0, _scope_0, target).used_by, _current_fn_0.out.target.index);

        if (_current_fn_0)
        {
            s_Overload o = GET(ctx_0, module_0, _scope_0, target);
            if (o.flags & F_LOCAL)
                add_D6pA(_current_fn_0.locals_used, target.index);

            add_set_ny6I(_current_fn_0.locals_used, o.closes_over);
        };
    };
    s_SolvedNode out = solved(node, type, args);
    out.target = target;
    return out;
}

static s_SolvedNode bindImplicitArg(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const fu_STR& name, const s_Type& type, const s_Target& becauseOf)
{
    const fu_STR& id = name;
    fu_VEC<s_SolvedNode> args {};
    const s_Target target = ([&]() -> s_Target { { s_Target _ = tryMatch__mutargs(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, _scope_0, fu_STR(id), args, 0, type, s_Target{}); if (_) return _; } { s_Target _ = injectImplicitArg(ctx_0, module_0, _here_0, _scope_0, _current_fn_0, id, type, becauseOf); if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }());
    ((GET(ctx_0, module_0, _scope_0, target).flags & F_IMPLICIT) || fail(ctx_0, _here_0, (((("Matching a non-implicit item in scope: `"_fu + name) + "`, binds to call to `"_fu) + GET(ctx_0, module_0, _scope_0, becauseOf).name) + "`."_fu)));
    return CallerNode(ctx_0, module_0, _here_0, _scope_0, _current_fn_0, createRead(ctx_0, _here_0, "__implicit"_fu), s_Type(type), target, fu_VEC<s_SolvedNode>{});
}

static s_Target tryMatch__mutargs(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Scope& scope, fu_STR&& id, fu_VEC<s_SolvedNode>& args, const int flags, const s_Type& retType, const s_Target& target)
{
    s_Target matchIdx {};
    const int arity = args.size();
    fu_VEC<fu_STR> names {};
    if (flags & F_NAMED_ARGS)
    {
        bool some = false;
        for (int i = 0; i < arity; i++)
        {
            s_SolvedNode arg { args[i] };
            names.push(((arg.kind == "label"_fu) ? ([&]() -> const fu_STR& { { const fu_STR& _ = ((void)(some = true), arg.value); if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }()) : fu::Default<fu_STR>::value));
        };
        (some || fail(ctx_0, _here_0, fu_STR{}));
    };
    fu_VEC<int> reorder {};
    fu_STR args_mangled {};
    const int extra_modid = ([&]() -> int { if ((flags & F_ACCESS)) return if_first_fyyZ(args).type.vtype.modid; else return int{}; }());
    const fu_VEC<s_ScopeItem>& extra_items = ([&]() -> const fu_VEC<s_ScopeItem>& { if (extra_modid && !fu::has(_scope_0.imports, extra_modid)) return ctx_0.modules[extra_modid].out.solve.scope.items; else return fu::Default<fu_VEC<s_ScopeItem>>::value; }());
    const s_Type& unary_arg_t = ([&]() -> const s_Type& { if ((arity == 1)) return args.mutref(0).type; else return fu::Default<s_Type>::value; }());
    const fu_VEC<s_ScopeItem>& field_items = ([&]() -> const fu_VEC<s_ScopeItem>& { if (isStruct(unary_arg_t)) return lookupStruct(unary_arg_t, module_0, ctx_0).items; else return fu::Default<fu_VEC<s_ScopeItem>>::value; }());
    fu_VEC<fu_STR> alternate_ids {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        while ((overloadIdx = search(scope, id, scope_iterator, _scope_skip_0, target, extra_items, field_items))){
        {
            while (true){
            {
                s_Overload overload = GET(ctx_0, module_0, _scope_0, overloadIdx);
                if ((arity && (overload.kind == "type"_fu)))
                {
                    const fu_STR& alt = overload.type.vtype.canon;
                    if (alt != id)
                        alternate_ids.push(alt);

                };
                if (((overload.min > arity) || (overload.max < arity)))
                {
                    goto L_NEXT_c;
                };
                if ((retType && !isAssignable(retType, (overload.type ? overload.type : fail(ctx_0, _here_0, fu_STR{})))))
                {
                    goto L_NEXT_c;
                };
                if ((names && !getNamedArgReorder(reorder, names, overload.args)))
                {
                    goto L_NEXT_c;
                };
                if (overload.kind == "template"_fu)
                {
                    if (reorder)
                        fail(ctx_0, _here_0, "TODO handle argument reorder in template specialization."_fu);

                    const s_Target specIdx = trySpecialize(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, overloadIdx, args, ([&](fu_STR& _) -> fu_STR& { if (!_) _ = mangleArguments(ctx_0, _here_0, args); return _; } (args_mangled)));
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
                    for (int i = 0; i < N; i++)
                    {
                        const s_Argument& host_arg = host_args[i];
                        const int callsiteIndex = (reorder ? reorder.mutref(i) : i);
                        if (callsiteIndex < 0)
                        {
                            if ((!host_arg.dEfault && !(host_arg.flags & F_IMPLICIT)))
                            {
                                goto L_NEXT_c;
                            };
                            continue;
                        }
                        else if (host_arg.flags & F_MUSTNAME)
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
                            if (arg.kind == "label"_fu)
                            {
                                s_SolvedNode inner { only_o0k6(arg.items) };
                                arg = inner;
                            };
                            s_Type retype = tryRetyping(ctx_0, _here_0, arg, expect);
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
                        fail(ctx_0, _here_0, (("Ambiguous callsite, matches multiple functions in scope: `"_fu + id) + "`."_fu));

                    if (reorder)
                    {
                        fu_VEC<s_SolvedNode> new_args {};
                        new_args.resize(reorder.size());
                        for (int i = 0; i < reorder.size(); i++)
                        {
                            const int idx = reorder[i];
                            if ((idx >= 0))
                                new_args.mutref(i) = args.mutref(idx);

                        };
                        args = new_args;
                    };
                }
                else if (matchIdx)
                    fail(ctx_0, _here_0, (("Ambiguous callsite, matches multiple items in scope: `"_fu + id) + "`."_fu));

                matchIdx = overloadIdx;
                if (overload.flags & F_SHADOW)
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
        s_Overload matched = GET(ctx_0, module_0, _scope_0, matchIdx);
        const fu_VEC<s_Argument>& host_args = matched.args;
        if (host_args.size() > args.size())
            args.resize(host_args.size());

        for (int i = 0; i < args.size(); i++)
        {
            if (!args.mutref(i))
            {
                const s_Argument& host_arg = host_args[i];
                args.mutref(i) = ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(host_arg.dEfault); if (_) return _; } return bindImplicitArg(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, host_arg.name, host_arg.type, matchIdx); }());
            };
        };
    };
    return matchIdx;
}

static fu_STR expectedArgs(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const fu_VEC<s_Target>& targets)
{
    fu_STR result {};
    for (int i = 0; i < targets.size(); i++)
    {
        if (result)
            result += "\n\t\t"_fu;
        else if (targets.size() > 1)
            result += ", available overloads:\n\t\t"_fu;
        else
            result += ", expects: "_fu;

        s_Overload overload = GET(ctx_0, module_0, _scope_0, targets[i]);
        result += (overload.name + "("_fu);
        for (int i_1 = 0; i_1 < overload.args.size(); i_1++)
        {
            const s_Argument& arg = overload.args[i_1];
            if (i_1)
                result += ", "_fu;

            result += (((arg.name + ((arg.flags & F_MUSTNAME) ? "!"_fu : fu_STR{})) + (arg.dEfault ? "?: "_fu : ": "_fu)) + (arg.type ? humanizeType(arg.type) : "$"_fu));
        };
        result += ")"_fu;
    };
    return ([&]() -> fu_STR { { fu_STR _ = fu_STR(result); if (_) return _; } return "."_fu; }());
}

static fu_STR actualArgs(const fu_VEC<s_SolvedNode>& args_1)
{
    fu_STR result = "\nActual: ("_fu;
    for (int i = 0; i < args_1.size(); i++)
    {
        const s_SolvedNode& arg = args_1[i];
        if (i)
            result += ","_fu;

        result += "\n\t"_fu;
        if (arg.kind == "label"_fu)
            result += (arg.value + ": "_fu);

        result += humanizeType(arg.type);
    };
    return (result + ")."_fu);
}

[[noreturn]] static fu::never NICERR_mismatch(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, const s_Scope& scope, const fu_STR& id, const fu_VEC<s_SolvedNode>& args)
{
    fu_VEC<s_Target> overloads = DEPREC_lookup(scope, id);
    int min = int(0x7fffffffu);
    int max = 0;
    for (int i = 0; i < overloads.size(); i++)
    {
        s_Overload o = GET(ctx_0, module_0, _scope_0, overloads[i]);
        if (min > o.min)
            min = o.min;

        if (max < o.max)
            max = o.max;

    };
    (overloads ? ((args.size() < min) ? fail(ctx_0, _here_0, ((((((("`"_fu + id) + "` expects at least "_fu) + min) + " arguments, "_fu) + args.size()) + " provided"_fu) + expectedArgs(ctx_0, module_0, _scope_0, overloads))) : ((args.size() > max) ? fail(ctx_0, _here_0, ((((((("`"_fu + id) + "` expects at most "_fu) + max) + " arguments, "_fu) + args.size()) + " provided"_fu) + expectedArgs(ctx_0, module_0, _scope_0, overloads))) : fail(ctx_0, _here_0, (((("`"_fu + id) + "` bad args"_fu) + expectedArgs(ctx_0, module_0, _scope_0, overloads)) + actualArgs(args))))) : fail(ctx_0, _here_0, (("`"_fu + id) + "` is not defined in this scope."_fu)));
}

static s_Target match__mutargs(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Scope& scope, const fu_STR& id, fu_VEC<s_SolvedNode>& args, const int flags, const s_Target& target)
{
    const s_Target ret = tryMatch__mutargs(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, scope, fu_STR(id), args, flags, s_Type{}, target);
    if (ret)
        return ret;

    const s_Target debug = tryMatch__mutargs(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, scope, fu_STR(id), args, flags, s_Type{}, target);
    if (debug)
        return debug;

    NICERR_mismatch(ctx_0, module_0, _here_0, _scope_0, scope, id, args);
}

static s_SolvedNode solveCall(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node, const s_Target& target)
{
    fu_STR id { node.value };
    if (!id)
    {
        (target || fail(ctx_0, _here_0, fu_STR{}));
    };
    const s_Scope& scope = ((node.flags & F_QUALIFIED) ? dequalify_andGetScope(ctx_0, module_0, _here_0, _scope_0, id) : _scope_0);
    fu_VEC<s_SolvedNode> args = solveNodes(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items, s_Type{}, s_Type{}, bool{}, bool{});
    s_Target callTargIdx = match__mutargs(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, scope, id, args, node.flags, target);
    s_Overload callTarg = GET(ctx_0, module_0, _scope_0, callTargIdx);
    while (callTarg.partial)
    {
        const bool unshift = (callTarg.kind == "p-unshift"_fu);
        const s_Partial partial { (callTarg.partial ? callTarg.partial : fail(ctx_0, _here_0, fu_STR{})) };
        const s_Target& viaIdx = (partial.via ? partial.via : fail(ctx_0, _here_0, fu_STR{}));
        callTargIdx = (partial.target ? partial.target : fail(ctx_0, _here_0, fu_STR{}));
        s_Overload via = GET(ctx_0, module_0, _scope_0, viaIdx);
        callTarg = GET(ctx_0, module_0, _scope_0, callTargIdx);
        fu_VEC<s_SolvedNode> innerArgs {};
        if (!unshift)
            innerArgs = fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { ([&]() -> s_SolvedNode& { { s_SolvedNode& _ = args.mutref(0); if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }()) } };

        s_SolvedNode argNode = CallerNode(ctx_0, module_0, _here_0, _scope_0, _current_fn_0, createRead(ctx_0, _here_0, "__partial"_fu), s_Type((via.type ? via.type : fail(ctx_0, _here_0, fu_STR{}))), viaIdx, fu_VEC<s_SolvedNode>(innerArgs));
        if (unshift)
            args.unshift(argNode);
        else
            args.mutref(0) = argNode;

    };
    return CallerNode(ctx_0, module_0, _here_0, _scope_0, _current_fn_0, node, s_Type((callTarg.type ? callTarg.type : fail(ctx_0, _here_0, fu_STR{}))), callTargIdx, fu_VEC<s_SolvedNode>(args));
}

static s_SolvedNode evalTypeAnnot(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    if (node.kind == "call"_fu)
    {
        const fu_VEC<s_Node>& items = node.items;
        if (items.size() == 1)
        {
            if (node.value == "&"_fu)
                return solved(node, add_ref(T(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, 0), Lifetime_static()), fu_VEC<s_SolvedNode>{});

            if (node.value == "&mut"_fu)
                return solved(node, add_mutref(T(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, 0), Lifetime_static()), fu_VEC<s_SolvedNode>{});

            if (node.value == "[]"_fu)
                return solved(node, createArray(T(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, 0)), fu_VEC<s_SolvedNode>{});

        }
        else if (items.size() == 2)
        {
            if (node.value == "Map"_fu)
                return solved(node, createMap(T(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, 0), T(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, 1)), fu_VEC<s_SolvedNode>{});

        };
        return solveCall(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, s_Target{});
    }
    else if (node.kind == "typeparam"_fu)
        return solved(node, evalTypeParam(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, node.value), fu_VEC<s_SolvedNode>{});
    else if (((node.kind == "arrlit"_fu) && (node.items.size() == 1)))
        return solved(node, createSlice(T(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, 0)), fu_VEC<s_SolvedNode>{});

    fail(ctx_0, _here_0, "TODO evalTypeAnnot"_fu);
}

                                #ifndef DEF_F_REF
                                #define DEF_F_REF
inline const int F_REF = (1 << 22);
                                #endif

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline const int F_ARG = (1 << 9);
                                #endif

static s_SolvedNode solveBinding(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node, const s_Lifetime& lifetime)
{
    const s_Node& n_annot = node.items[LET_TYPE];
    const s_Node& n_init = node.items[LET_INIT];
    s_SolvedNode annot = ([&]() -> s_SolvedNode { if (n_annot) return evalTypeAnnot(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, n_annot); else return s_SolvedNode{}; }());
    if ((annot.type && (node.flags & F_REF)))
        annot.type = add_mutref(annot.type, lifetime);

    s_SolvedNode init = ([&]() -> s_SolvedNode { if (n_init) return solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, n_init, annot.type); else return s_SolvedNode{}; }());
    (annot.type || init.type || fail(ctx_0, _here_0, "Variable declarations without type annotations must be initialized."_fu));
    s_Type t_let = (annot.type ? (((node.flags & F_ARG) && !(node.flags & F_MUT)) ? add_ref(annot.type, lifetime) : s_Type(annot.type)) : (((init.type.vtype.quals & q_mutref) || (node.flags & F_MUT)) ? ((node.flags & F_REF) ? s_Type(init.type) : clear_refs(init.type)) : (((node.flags & F_ARG) && !(node.flags & F_MUT)) ? add_ref(init.type, lifetime) : s_Type(init.type))));
    if ((annot.type && init.type))
        checkAssignable(ctx_0, _here_0, annot.type, init.type, "Type annotation does not match init expression"_fu, node.value, "="_fu);

    if (node.flags & F_REF)
    {
        ((init.type.vtype.quals & q_mutref) || (!init && (node.flags & F_ARG)) || fail(ctx_0, _here_0, "`ref` variables must be initialized to a mutable reference."_fu));
    };
    if (init)
        maybeCopyOrMove(ctx_0, _here_0, init, t_let, false);

    s_SolvedNode out = solved(node, t_let, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { (annot ? annot : init), init } });
    if (!(_current_fn_0 || (node.flags & F_FIELD)))
    {
        if (((out.flags & F_MUT) || (out.type.vtype.quals & q_mutref)))
            fail(ctx_0, _here_0, "Mutable statics are not currently allowed."_fu);

        out.kind = "global"_fu;
    };
    return out;
}

static s_Lifetime Lifetime_next(s_Scope& _scope_0)
{
    return Lifetime_fromScopeIdx((_scope_0.items.size() + 1));
}

                                #ifndef DEF_F_USING
                                #define DEF_F_USING
inline const int F_USING = (1 << 18);
                                #endif

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline const int F_PUB = (1 << 20);
                                #endif

static s_Target Partial(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, const fu_STR& id, const s_Target& viaIdx, const s_Target& overloadIdx)
{
    s_Overload via = GET(ctx_0, module_0, _scope_0, viaIdx);
    s_Overload overload = GET(ctx_0, module_0, _scope_0, overloadIdx);
    fu_STR kind = "p-unshift"_fu;
    int min = (overload.min - 1);
    int max = (overload.max - 1);
    (((min >= 0) && (max >= min)) || fail(ctx_0, _here_0, fu_STR{}));
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
    return Scope_add(_scope_0, kind, id, overload.type, flags, min, max, args, s_Template{}, s_Partial { s_Target(viaIdx), s_Target(overloadIdx) }, s_SolvedNode{}, 0, module_0);
}

static void visit(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, const s_Target& viaIdx_0, const s_Type& actual_0, const s_ScopeItem& item)
{
    if (!hasIdentifierChars(item.id))
        return;

    const s_Target& overloadIdx = item.target;
    s_Overload overload = GET(ctx_0, module_0, _scope_0, overloadIdx);
    if (overload.min < 1)
        return;

    if (overload.kind == "template"_fu)
        return;

    if (overload.kind == "defctor"_fu)
        return;

    const s_Argument& expect = ([&]() -> const s_Argument& { { const s_Argument& _ = overload.args[0]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }());
    if (!isAssignableAsArgument(expect.type, s_Type(actual_0)))
        return;

    Partial(ctx_0, module_0, _here_0, _scope_0, item.id, viaIdx_0, overloadIdx);
}

static void scope_using(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkip& _scope_skip_0, const s_Target& viaIdx)
{
    s_Overload via = GET(ctx_0, module_0, _scope_0, viaIdx);
    const s_Type& actual = (via.type ? via.type : fail(ctx_0, _here_0, fu_STR{}));
    for (int i = 0; i < _scope_0.items.size(); i++)
    {
        if (i == _scope_skip_0.start.items_len)
            i = _scope_skip_0.end.items_len;

        visit(ctx_0, module_0, _here_0, _scope_0, viaIdx, actual, _scope_0.items[i]);
    };
    const int extra_modid = actual.vtype.modid;
    if (!fu::has(_scope_0.imports, extra_modid))
    {
        const fu_VEC<s_ScopeItem>& items = ctx_0.modules[extra_modid].out.solve.scope.items;
        for (int i = 0; i < items.size(); i++)
            visit(ctx_0, module_0, _here_0, _scope_0, viaIdx, actual, items[i]);

    };
    if (isStruct(actual))
    {
        const fu_VEC<s_ScopeItem>& items = lookupStruct(actual, module_0, ctx_0).items;
        for (int i = 0; i < items.size(); i++)
            visit(ctx_0, module_0, _here_0, _scope_0, viaIdx, actual, items[i]);

    };
}

static s_SolvedNode solveLet(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node, s_Lifetime&& lifetime)
{
    s_SolvedNode out = solveBinding(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, lifetime);
    const bool global = (out.kind == "global"_fu);
    if (!(out.type.vtype.quals & q_ref))
        lifetime = Lifetime_next(_scope_0);

    fu_STR kind = (global ? "global"_fu : ((node.flags & F_ARG) ? "arg"_fu : ((out.type.vtype.quals & q_ref) ? "ref"_fu : "var"_fu)));
    fu_STR id { out.value };
    if (!X_unpackAddrOfFnBinding(_scope_0.items, id, out.type))
    {
        const s_Target overload { (out.target = Binding(ctx_0, module_0, _here_0, _scope_0, _current_fn_0, id, ((node.flags & F_MUT) ? add_mutref(out.type, lifetime) : add_ref(out.type, lifetime)), int(node.flags), kind)) };
        if (_root_scope_0)
        {
            int any = 0;
            int same = 0;
            const int start = (_scope_skip_0.end.items_len ? _scope_skip_0.end.items_len : _root_scope_0.items_len);
            for (int i = start; i < (_scope_0.items.size() - 1); i++)
            {
                if (_scope_0.items.mutref(i).id == id)
                {
                    any++;
                    s_Overload o = GET(ctx_0, module_0, _scope_0, _scope_0.items.mutref(i).target);
                    if (((o.kind == "arg"_fu) || (o.kind == "ref"_fu) || (o.kind == "var"_fu)))
                        same++;

                };
            };
            if (same)
                GET_mut(module_0, _scope_0, overload).name += ("_"_fu + same);

            if ((!global && !any))
                out.flags |= F_SHADOW;

        };
        if (global)
            GET_mut(module_0, _scope_0, overload).solved = out;

        if (out.flags & F_USING)
            scope_using(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, overload);

    };
    return out;
}

static void FnDecl_init(s_Module& module_0, s_Scope& _scope_0, const s_Target& target, const fu_STR& kind, const fu_STR& id, const s_Template& tEmplate)
{
    s_Overload& overload = GET_mut(module_0, _scope_0, target);
    overload.name = id;
    overload.kind = kind;
    overload.tEmplate = tEmplate;
    Scope_set(_scope_0, id, target);
}

static s_Overload GET_local(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const int index)
{
    return GET(ctx_0, module_0, _scope_0, s_Target { int(module_0.modid), int(index) });
}

                                #ifndef DEF_SS_DIRTY
                                #define DEF_SS_DIRTY
inline const int SS_DIRTY = (1 << 1);
                                #endif

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline const int SS_FINALIZED = (1 << 0);
                                #endif

static void makeDirty(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, int& SLOW_resolve_0, const int index, const int parent_idx)
{
    const s_Target userIdx = s_Target { int(module_0.modid), int(index) };
    s_Overload& user = GET_mut(module_0, _scope_0, userIdx);
    if (!(user.status & SS_DIRTY))
    {
        const int their_parent = user.local_of;
        ((index >= parent_idx) || fail(ctx_0, _here_0, "makeDirty: climbed too far up."_fu));
        if (user.status & SS_FINALIZED)
        {
            if (their_parent)
                return makeDirty(ctx_0, module_0, _here_0, _scope_0, SLOW_resolve_0, their_parent, parent_idx);

            fail(ctx_0, _here_0, "Overload finalized, cannot make dirty."_fu);
        };
        user.status |= SS_DIRTY;
        SLOW_resolve_0++;
    };
}

static void FnDecl_update(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, int& SLOW_resolve_0, const s_SolvedNode& solved, const fu_VEC<int>& locals_used, const int parent_idx)
{
    const fu_VEC<s_SolvedNode>& items = solved.items;
    int min = 0;
    const int max = (items.size() + FN_RET_BACK);
    fu_VEC<s_Argument> args {};
    for (int i = 0; i < max; i++)
    {
        const s_SolvedNode& argNode = items[i];
        ((argNode.kind == "let"_fu) || fail(ctx_0, _here_0, fu_STR{}));
        const bool isImplicit = !!(argNode.flags & F_IMPLICIT);
        s_Argument arg = s_Argument { fu_STR((argNode.value ? argNode.value : fail(ctx_0, _here_0, fu_STR{}))), s_Type((argNode.type ? argNode.type : fail(ctx_0, _here_0, fu_STR{}))), s_SolvedNode(([&]() -> const s_SolvedNode& { if (!isImplicit) return argNode.items[LET_INIT]; else return fu::Default<s_SolvedNode>::value; }())), int(argNode.flags) };
        if ((!arg.dEfault && !isImplicit))
            min++;

        args.push(arg);
    };
    s_Overload& overload = GET_mut(module_0, _scope_0, solved.target);
    const int args_len0 = overload.args.size();
    const int closure0 = overload.closes_over.size();
    overload.type = ([&]() -> const s_Type& { { const s_Type& _ = items[(items.size() + FN_RET_BACK)].type; if (_) return _; } fail(ctx_0, _here_0, "FnDecl_update: no return type."_fu); }());
    overload.min = min;
    overload.max = max;
    overload.args = args;
    overload.flags = solved.flags;
    overload.solved = solved;
    
    {
        fu_VEC<int> closes_over {};
        for (int i = 0; i < locals_used.size(); i++)
        {
            s_Overload o = GET_local(ctx_0, module_0, _scope_0, locals_used[i]);
            if (o.local_of != solved.target.index)
                closes_over += locals_used[i];

        };
        overload.closes_over = closes_over;
        overload.local_of = parent_idx;
    };
    if (((args_len0 != overload.args.size()) || (closure0 != overload.closes_over.size())))
    {
        for (int i = 0; i < overload.used_by.size(); i++)
            makeDirty(ctx_0, module_0, _here_0, _scope_0, SLOW_resolve_0, overload.used_by[i], parent_idx);

    };
}

static s_SolvedNode createFnDef(const s_SolvedNode& fn)
{
    return s_SolvedNode { "fndef"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx(fn.token), s_Type(fn.type), s_Target(fn.target) };
}

static s_SolvedNode __solveFn(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& n_fn, const bool solve, const s_SolvedNode& prep, const bool spec, const int caseIdx, const s_Target& into)
{
    if (spec)
    {
    }
    else if (n_fn.flags & F_TEMPLATE)
    {
        if (solve)
            return s_SolvedNode((prep ? prep : fail(ctx_0, _here_0, fu_STR{})));

        const s_Target tDecl = TemplateDecl(ctx_0, module_0, _here_0, _scope_0, _current_fn_0, n_fn);
        return createEmpty(ctx_0, _here_0, "empty"_fu, X_addrofTarget(tDecl), s_Target{});
    };
    const fu_VEC<s_Node>& inItems = n_fn.items;
    if ((!solve && !inItems[(inItems.size() + FN_RET_BACK)]))
        return s_SolvedNode{};

    s_CurrentFn out = s_CurrentFn { ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(prep); if (_) return _; } return solved(n_fn, t_void, fu_VEC<s_SolvedNode>{}); }()), s_ScopeMemo{}, int(_current_fn_0.out.target.index), fu_VEC<int>{} };
    out.out.items.resize(inItems.size());
    if (!prep)
    {
        out.out.target = ([&]() -> s_Target { { s_Target _ = s_Target(into); if (_) return _; } return Scope_create(_scope_0, "_no_kind_yet_"_fu, module_0); }());
        out.out.type = X_addrofTarget(out.out.target);
    };
    if (_current_fn_0)
    {
        if (_current_fn_0.out.flags & F_TEMPLATE)
            out.out.flags |= F_TEMPLATE;

    };
    bool native = false;
    s_Node n_body {};
    
    {
        const s_ScopeMemo scope0 = Scope_snap(_scope_0);
        out.return_idx = scope0;
        const s_ScopeMemo root_scope0 { _root_scope_0 };
        if (!root_scope0)
            _root_scope_0 = out.return_idx;

        std::swap(_current_fn_0, out);
        fu_DEFER(((void)std::swap(_current_fn_0, out), (void)Scope_pop(_scope_0, scope0), (_root_scope_0 = root_scope0)));
        fu_VEC<s_SolvedNode>& outItems = _current_fn_0.out.items;
        for (int i = 0; i < (inItems.size() + FN_ARGS_BACK); i++)
        {
            const s_Node& n_arg = ([&]() -> const s_Node& { { const s_Node& _ = inItems[i]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }());
            ((n_arg.kind == "let"_fu) || fail(ctx_0, _here_0, fu_STR{}));
            s_Lifetime lifetime = Lifetime_fromArgIndex(i);
            if ((spec && !(n_arg.flags & F_MUT) && !n_arg.items[LET_INIT]))
            {
                s_Node mut_arg { n_arg };
                mut_arg.items.mutref(LET_TYPE) = createTypeParam(ctx_0, _here_0, mut_arg.value);
                s_Type type = evalTypeParam(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, mut_arg.value);
                if (!(type.vtype.quals & q_ref))
                    mut_arg.flags |= F_MUT;

                outItems.mutref(i) = solveLet(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, mut_arg, s_Lifetime(lifetime));
            }
            else
                outItems.mutref(i) = solveLet(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, n_arg, s_Lifetime(lifetime));

        };
        s_Node n_ret { inItems[(inItems.size() + FN_RET_BACK)] };
        n_body = ([&]() -> const s_Node& { { const s_Node& _ = inItems[(inItems.size() + FN_BODY_BACK)]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }());
        if ((caseIdx >= 0))
        {
            ((n_body.kind == "pattern"_fu) || fail(ctx_0, _here_0, fu_STR{}));
            s_Node branch { ([&]() -> const s_Node& { { const s_Node& _ = n_body.items.mutref(caseIdx); if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }()) };
            const fu_VEC<s_Node>& items = branch.items;
            n_ret = ([&]() -> const s_Node& { { const s_Node& _ = items[(items.size() + FN_RET_BACK)]; if (_) return _; } return n_ret; }());
            n_body = items[(items.size() + FN_BODY_BACK)];
        };
        if (((n_body.kind == "call"_fu) && (n_body.value == "__native"_fu)))
            native = true;

        
        {
            s_SolvedNode s_ret = (n_ret ? evalTypeAnnot(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, n_ret) : s_SolvedNode{});
            outItems.mutref((outItems.size() + FN_RET_BACK)) = s_ret;
        };
        if ((solve && !native))
        {
            s_SolvedNode s_body = solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, n_body, s_Type{});
            (s_body || fail(ctx_0, _here_0, fu_STR{}));
            outItems.mutref((outItems.size() + FN_BODY_BACK)) = (s_body ? s_body : fail(ctx_0, _here_0, fu_STR{}));
        };
    };
    if (!prep)
    {
        fu_STR name { (n_fn.value ? n_fn.value : fail(ctx_0, _here_0, "TODO anonymous fns"_fu)) };
        if ((spec && !native))
        {
            fu_STR sig = ([&]() -> fu_STR { { fu_STR _ = mangleArguments(ctx_0, _here_0, fu::get_view_mut(out.out.items, 0, (out.out.items.size() + FN_BODY_BACK))); if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }());
            fu_STR hash = hash62(sig, 4);
            name += ("_"_fu + hash);
        };
        fu_STR kind = (native ? "__native"_fu : "fn"_fu);
        fu_VEC<int> NO_IMPORTS {};
        const s_ScopeMemo NO_LOCALS {};
        s_Template tEmplate = s_Template { s_Node((native ? n_body : n_fn)), fu_VEC<int>(NO_IMPORTS), s_ScopeMemo(NO_LOCALS) };
        FnDecl_init(module_0, _scope_0, out.out.target, kind, name, tEmplate);
    };
    FnDecl_update(ctx_0, module_0, _here_0, _scope_0, SLOW_resolve_0, out.out, out.locals_used, out.parent_idx);
    if (solve)
        return createFnDef(out.out);

    return std::move(out.out);
}

static s_SolvedNode uPrepFn(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    return __solveFn(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, false, s_SolvedNode{}, bool{}, -1, s_Target{});
}

static s_SolvedNode solveField(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    (node.items[LET_INIT] && (node.items[LET_INIT].kind != "definit"_fu) && fail(ctx_0, _here_0, ((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node.value) + "`."_fu)));
    return solveBinding(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, Lifetime_fromArgIndex(0));
}

static s_Target Field(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, const fu_STR& id, const s_Type& structType, const s_Type& fieldType)
{
    return Scope_add(_scope_0, "field"_fu, (id ? id : fail(ctx_0, _here_0, fu_STR{})), (fieldType ? fieldType : fail(ctx_0, _here_0, fu_STR{})), F_PUB, 1, 1, fu_VEC<s_Argument> { fu_VEC<s_Argument>::INIT<1> { s_Argument { "this"_fu, s_Type(structType), s_SolvedNode{}, 0 } } }, s_Template{}, s_Partial{}, s_SolvedNode{}, 0, module_0);
}

static void solveField(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkip& _scope_skip_0, const s_Type& structType, const s_SolvedNode& node, fu_VEC<s_ScopeItem>& innerScope)
{
    const fu_STR& id = node.value;
    const s_Target target = Field(ctx_0, module_0, _here_0, _scope_0, id, structType, node.type);
    innerScope.push(s_ScopeItem { fu_STR(id), s_Target(target) });
    if (node.flags & F_USING)
        scope_using(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, target);

}

static fu_VEC<s_SolvedNode> solveStructMembers(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, fu_STR& id, const int flags, const fu_VEC<s_Node>& members, s_Type& structType, fu_VEC<s_ScopeItem>& innerScope)
{
    fu_VEC<s_SolvedNode> out {};
    for (int i = 0; i < members.size(); i++)
    {
        const s_Node& node = members[i];
        if (node.kind == "let"_fu)
            out.push(solveField(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node));
        else
            fail(ctx_0, _here_0, ("solveStructMembers_1: "_fu + node.kind));

    };
    if (!structType)
    {
        fu_STR sig = mangleArguments(ctx_0, _here_0, out);
        fu_STR hash = hash62(sig, 4);
        id += ("_"_fu + hash);
        structType = initStruct(id, flags, module_0);
    };
    for (int i = 0; i < out.size(); i++)
    {
        s_SolvedNode node { out[i] };
        if (node.kind == "let"_fu)
            solveField(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, structType, node, innerScope);
        else
            fail(ctx_0, _here_0, ("solveStructMembers_2: "_fu + node.kind));

    };
    return out;
}

static s_Target DefCtor(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, const fu_STR& id, const s_Type& type, const fu_VEC<s_SolvedNode>& members)
{
    const int max = members.size();
    int min = 0;
    fu_VEC<s_Argument> args {};
    for (int i = 0; i < members.size(); i++)
    {
        const s_SolvedNode& member = members[i];
        s_Argument arg = s_Argument { fu_STR((member.value ? member.value : fail(ctx_0, _here_0, fu_STR{}))), s_Type((member.type ? member.type : fail(ctx_0, _here_0, fu_STR{}))), s_SolvedNode(member.items[LET_INIT]), (member.flags & F_MUSTNAME) };
        if (!arg.dEfault)
            min++;

        args.push(arg);
    };
    if (!max)
        return s_Target{};

    if (!min)
        min++;

    return Scope_add(_scope_0, "defctor"_fu, id, type, F_PUB, min, max, args, s_Template{}, s_Partial{}, s_SolvedNode{}, 0, module_0);
}

static s_SolvedNode __solveStruct(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const bool solve, const s_Node& node, const s_SolvedNode& prep)
{
    s_SolvedNode out = ([&]() -> s_SolvedNode { { s_SolvedNode _ = s_SolvedNode(prep); if (_) return _; } return solved(node, t_void, fu_VEC<s_SolvedNode>{}); }());
    s_Type structType {};
    fu_STR id { node.value };
    fu_STR origId { id };
    if (!origId)
        id = ([&]() -> fu_STR { { fu_STR _ = fu_STR(_current_fn_0.out.value); if (_) return _; } return "Anon"_fu; }());

    if (!(_current_fn_0.out.flags & F_TEMPLATE))
    {
        structType = initStruct(id, node.flags, module_0);
        if ((!prep && origId))
            out.target = Scope_Typedef(_scope_0, origId, structType, node.flags, module_0);

    };
    if (!solve)
        return out;

    const fu_VEC<s_Node>& members = node.items;
    fu_VEC<s_ScopeItem> innerScope {};
    fu_VEC<s_SolvedNode> items = solveStructMembers(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, id, node.flags, members, structType, innerScope);
    out.items = items;
    if ((!out.target && origId))
        out.target = Scope_Typedef(_scope_0, origId, structType, node.flags, module_0);

    
    {
        fu_VEC<s_SolvedNode> members_1 {};
        fu_VEC<s_StructField> fields {};
        fu_VEC<s_SolvedNode> items_1 { out.items };
        for (int i = 0; i < items_1.size(); i++)
        {
            const s_SolvedNode& item = items_1[i];
            if ((item && (item.kind == "let"_fu) && (item.flags & F_FIELD)))
            {
                members_1.push(item);
                fields.push(s_StructField { fu_STR((item.value ? item.value : fail(ctx_0, _here_0, fu_STR{}))), s_ValueType((item.type.vtype ? item.type.vtype : fail(ctx_0, _here_0, fu_STR{}))) });
            };
        };
        structType.vtype.quals |= finalizeStruct(structType.vtype.canon, fields, innerScope, module_0);
        if (out.target)
            GET_mut(module_0, _scope_0, out.target).type.vtype.quals = structType.vtype.quals;

        const s_Target ctor = DefCtor(ctx_0, module_0, _here_0, _scope_0, id, structType, members_1);
        lookupStruct_mut(structType.vtype.canon, module_0).ctor = ctor;
    };
    out.type = structType;
    return out;
}

static s_SolvedNode uPrepStruct(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    return __solveStruct(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, false, node, s_SolvedNode{});
}

                                #ifndef DEFt_only_zET6
                                #define DEFt_only_zET6
inline const s_Node& only_zET6(const fu_VEC<s_Node>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_SolvedNode solveTypedef(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    s_SolvedNode annot = evalTypeAnnot(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, only_zET6(node.items));
    Scope_Typedef(_scope_0, node.value, annot.type, node.flags, module_0);
    return createEmpty(ctx_0, _here_0, "empty"_fu, t_void, s_Target{});
}

static s_SolvedNode unorderedPrep(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    const fu_STR& k = node.kind;
    if (k == "fn"_fu)
        return uPrepFn(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node);

    if (k == "struct"_fu)
        return uPrepStruct(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node);

    if (k == "typedef"_fu)
        return solveTypedef(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node);

    fail(ctx_0, _here_0, ("TODO: "_fu + k));
}

static s_SolvedNode uSolveFn(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node, const s_SolvedNode& prep)
{
    return __solveFn(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, true, prep, bool{}, -1, s_Target{});
}

static s_SolvedNode uSolveStruct(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node, const s_SolvedNode& prep)
{
    return __solveStruct(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, true, node, prep);
}

static s_SolvedNode unorderedSolve(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node, const s_SolvedNode& prep)
{
    const fu_STR& k = node.kind;
    if (k == "fn"_fu)
        return uSolveFn(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, prep);

    if (k == "struct"_fu)
        return uSolveStruct(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, prep);

    if (k == "typedef"_fu)
        return s_SolvedNode((prep ? prep : fail(ctx_0, _here_0, fu_STR{})));

    fail(ctx_0, _here_0, ("TODO: "_fu + k));
}

static bool resolveIfNeeded_nonTemplateFn(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Target& target)
{
    s_Overload overload = GET(ctx_0, module_0, _scope_0, target);
    if (!(overload.status & SS_DIRTY))
        return false;

    GET_mut(module_0, _scope_0, target).status &= ~SS_DIRTY;
    resolve_done_0++;
    const s_TokenIdx here0 { _here_0 };
    _here_0 = overload.tEmplate.node.token;
    unorderedSolve(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, overload.tEmplate.node, overload.solved);
    _here_0 = here0;
    return true;
}

static bool resolveIfNeeded_templateSpec(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_OpenTemplate& ot)
{
    s_Overload overload = GET(ctx_0, module_0, _scope_0, ot.spec);
    if (!(overload.status & SS_DIRTY))
        return false;

    GET_mut(module_0, _scope_0, ot.spec).status &= ~SS_DIRTY;
    resolve_done_0++;
    const s_TokenIdx here0 { _here_0 };
    _here_0 = overload.tEmplate.node.token;
    fu_STR mangle { ot.mangle };
    doTrySpecialize(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, ot.overloadIdx, fu_VEC<s_SolvedNode>(ot.args), mangle, ot.spec);
    _here_0 = here0;
    return true;
}

static fu_VEC<s_SolvedNode> solveNodes(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const fu_VEC<s_Node>& nodes, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const bool TEMP_open_templates)
{
    fu_VEC<s_SolvedNode> result {};
    const s_TokenIdx here0 { _here_0 };
    result.resize(nodes.size());
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_Node& node = nodes[i];
        if (!node)
        {
            continue;
        };
        if (!isUnordered(node.kind))
        {
            _here_0 = (node.token ? node.token : _here_0);
            result.mutref(i) = solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, (((i == (nodes.size() - 1)) && use_type_last) ? type_last : type_all));
            continue;
        };
        const int i0 = i;
        int i1 = nodes.size();
        int resolve0 = SLOW_resolve_0;
        for (int i_1 = i0; i_1 < nodes.size(); i_1++)
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
            _here_0 = (node_1.token ? node_1.token : _here_0);
            if (node_1.kind != "fn"_fu)
                result.mutref(i_1) = unorderedPrep(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node_1);

        };
        ((i1 > i0) || fail(ctx_0, _here_0, fu_STR{}));
        i = (i1 - 1);
        
        {
            for (int i_1 = i0; i_1 < i1; i_1++)
            {
                const s_Node& node_1 = nodes[i_1];
                if ((node_1 && (node_1.kind != "fn"_fu)))
                {
                    _here_0 = (node_1.token ? node_1.token : _here_0);
                    result.mutref(i_1) = unorderedSolve(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node_1, result[i_1]);
                };
            };
            for (int i_1 = i0; i_1 < i1; i_1++)
            {
                const s_Node& node_1 = nodes[i_1];
                if (node_1.kind == "fn"_fu)
                {
                    _here_0 = (node_1.token ? node_1.token : _here_0);
                    result.mutref(i_1) = unorderedPrep(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node_1);
                };
            };
            for (int i_1 = i0; i_1 < i1; i_1++)
            {
                const s_Node& node_1 = nodes[i_1];
                if (node_1.kind == "fn"_fu)
                {
                    _here_0 = (node_1.token ? node_1.token : _here_0);
                    result.mutref(i_1) = unorderedSolve(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node_1, result[i_1]);
                };
            };
        };
        
        {
            bool some = ((SLOW_resolve_0 != resolve0) && (SLOW_resolve_0 != resolve_done_0));
            while (some)
            {
                some = false;
                resolve0 = SLOW_resolve_0;
                for (int i_1 = i0; i_1 < i1; i_1++)
                {
                    s_SolvedNode r { result[i_1] };
                    if (((r.kind != "fndef"_fu) || !resolveIfNeeded_nonTemplateFn(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, r.target)))
                    {
                        continue;
                    };
                    some = ((SLOW_resolve_0 != resolve0) && (SLOW_resolve_0 != resolve_done_0));
                };
                if (TEMP_open_templates)
                {
                    for (int i_1 = 0; i_1 < _open_templates_0.size(); i_1++)
                    {
                        s_OpenTemplate r { _open_templates_0[i_1] };
                        if (!resolveIfNeeded_templateSpec(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, r))
                        {
                            continue;
                        };
                        some = ((SLOW_resolve_0 != resolve0) && (SLOW_resolve_0 != resolve_done_0));
                    };
                };
            };
        };
        for (int i_1 = i0; i_1 < i1; i_1++)
        {
            s_SolvedNode r { result[i_1] };
            if (r.kind == "fndef"_fu)
            {
                s_Overload& o = GET_mut(module_0, _scope_0, r.target);
                o.status |= SS_FINALIZED;
            };
        };
        if (TEMP_open_templates)
        {
            for (int i_1 = 0; i_1 < _open_templates_0.size(); i_1++)
            {
                s_OpenTemplate r { _open_templates_0[i_1] };
                s_Overload& o = GET_mut(module_0, _scope_0, r.spec);
                if (o.kind == "fn"_fu)
                    o.status |= SS_FINALIZED;

            };
            _open_templates_0.clear();
        };
    };
    ((result.size() == nodes.size()) || fail(ctx_0, _here_0, "solveNodes: result.len != nodes.len"_fu));
    _here_0 = here0;
    return result;
}

static s_SolvedNode solveRoot(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    return solved(node, t_void, solveNodes(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items, t_void, s_Type{}, bool{}, true));
}

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

static s_SolvedNode solveBlock(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node, const s_Type& type)
{
    const s_ScopeMemo scope0 = Scope_snap(_scope_0);
    fu_DEFER(Scope_pop(_scope_0, scope0));
    const bool expr = !!(if_last_zET6(node.items).flags & F_NODISCARD);
    fu_VEC<s_SolvedNode> items = solveNodes(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items, t_void, type, expr, bool{});
    const s_Type& type_1 = ((expr && items.size()) ? last_4UAi(items).type : t_void);
    return solved(node, type_1, items);
}

static s_SolvedNode solveComma(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    fu_VEC<s_SolvedNode> items = solveNodes(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items, s_Type{}, s_Type{}, bool{}, bool{});
    const s_SolvedNode& last = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[(items.size() - 1)]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }());
    return solved(node, (last.type ? last.type : fail(ctx_0, _here_0, fu_STR{})), items);
}

static s_SolvedNode solveArrayLiteral(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node, const s_Type& type)
{
    s_Type itemType = ([&]() -> s_Type { if (type) return tryClear_array(type); else return s_Type{}; }());
    if ((!itemType && isStruct(type)))
        return solveCall(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, lookupStruct(type, module_0, ctx_0).ctor);

    fu_VEC<s_SolvedNode> items = solveNodes(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items, itemType, s_Type{}, bool{}, bool{});
    int startAt = 0;
    if ((!itemType && items.size()))
    {
        const s_SolvedNode& head = ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[startAt++]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }());
        itemType = clear_refs(head.type);
    };
    if (!itemType)
        fail(ctx_0, _here_0, "Cannot infer empty arraylit."_fu);

    for (int i = startAt; i < items.size(); i++)
    {
        itemType = type_tryInter(itemType, ([&]() -> const s_SolvedNode& { { const s_SolvedNode& _ = items[i]; if (_) return _; } fail(ctx_0, _here_0, fu_STR{}); }()).type);
        (itemType || fail(ctx_0, _here_0, "[array literal] No common supertype."_fu));
    };
    return solved(node, createArray(itemType), items);
}

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
inline const s_Type t_bool = s_Type { s_ValueType { int(Primitive), 0, "bool"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

static s_SolvedNode solveIf(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node, s_Type&& type)
{
    const s_Node& n0 = node.items[0];
    const s_Node& n1 = node.items[1];
    const s_Node& n2 = node.items[2];
    s_SolvedNode cond = solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, n0, t_bool);
    s_SolvedNode cons = ([&]() -> s_SolvedNode { if (n1) return solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, n1, type); else return s_SolvedNode{}; }());
    s_SolvedNode alt = ([&]() -> s_SolvedNode { if (n2) return solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, n2, (cons.type ? cons.type : type)); else return s_SolvedNode{}; }());
    s_SolvedNode priExpr { (cons ? cons : alt ? alt : fail(ctx_0, _here_0, fu_STR{})) };
    s_SolvedNode secExpr { ([&]() -> const s_SolvedNode& { if (cons) { const s_SolvedNode& _ = alt; if (_) return _; } return cons; }()) };
    const s_Type& priType = priExpr.type;
    const s_Type& secType = secExpr.type;
    if ((!is_void(type) && !is_bool(type)))
    {
        type = (!secType ? s_Type(priType) : type_tryInter(priType, secType));
        (type || fail(ctx_0, _here_0, (((("[if] No common supertype: `"_fu + serializeType(priType)) + " : "_fu) + serializeType(secType)) + "`."_fu)));
        if (cons)
            maybeCopyOrMove(ctx_0, _here_0, cons, type, false);

        if (alt)
            maybeCopyOrMove(ctx_0, _here_0, alt, type, false);

    };
    return solved(node, (type ? type : fail(ctx_0, _here_0, fu_STR{})), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { cond, cons, alt } });
}

static s_SolvedNode solveOr(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node, s_Type&& type)
{
    fu_VEC<s_SolvedNode> items = solveNodes(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items, type, s_Type{}, bool{}, bool{});
    if (is_void(type))
        type = t_bool;

    if (!is_bool(type))
    {
        s_Type sumType {};
        bool hasNever = false;
        for (int i = items.size(); i-- > 0; )
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
            for (int i = 0; i < items.size(); i++)
                maybeCopyOrMove(ctx_0, _here_0, items.mutref(i), sumType, false);

            type = sumType;
        }
        else
            type = t_bool;

    };
    return solved(node, type, items);
}

static s_SolvedNode solveNot(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    return solved(node, t_bool, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items[0], t_bool) } });
}

static s_SolvedNode solveAnd(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node, s_Type&& type)
{
    fu_VEC<s_SolvedNode> items = solveNodes(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items, type, s_Type{}, bool{}, bool{});
    if (is_void(type))
        type = t_bool;

    if (!is_bool(type))
    {
        s_Type sumType {};
        for (int i = items.size(); i-- > 0; )
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
}

static int retIdx(s_CurrentFn& _current_fn_0)
{
    return (_current_fn_0.out.items.size() + FN_RET_BACK);
}

static s_SolvedNode createMove(const s_SolvedNode& node, const bool nrvo)
{
    return s_SolvedNode { (nrvo ? "nrvo"_fu : "move"_fu), 0, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { node } }, s_TokenIdx(node.token), clear_refs(node.type), s_Target{} };
}

static s_SolvedNode solveReturn(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    s_Type prevType { _current_fn_0.out.items.mutref(retIdx(_current_fn_0)).type };
    ((node.items.size() <= 1) || fail(ctx_0, _here_0, fu_STR{}));
    s_SolvedNode out = solved(node, t_void, solveNodes(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items, prevType, s_Type{}, bool{}, bool{}));
    s_SolvedNode& next = (out.items ? out.items.mutref(0) : out);
    if ((killedBy(next.type.lifetime, _current_fn_0.return_idx.items_len) && (next.type.vtype.quals & q_ref)))
    {
        const bool nrvo = ((next.kind == "call"_fu) && (next.items.size() == 0) && (GET(ctx_0, module_0, _scope_0, next.target).kind == "var"_fu));
        next = createMove(next, nrvo);
    };
    if (prevType)
        checkAssignable(ctx_0, _here_0, prevType, next.type, "Non-assignable return types"_fu, fu_STR{}, fu_STR{});
    else
        _current_fn_0.out.items.mutref(retIdx(_current_fn_0)) = (next ? next : fail(ctx_0, _here_0, fu_STR{}));

    if (out.items)
        maybeCopyOrMove(ctx_0, _here_0, out.items.mutref(0), (prevType ? prevType : next.type), false);

    return out;
}

static s_SolvedNode solveJump(const s_Node& node)
{
    return solved(node, t_void, fu_VEC<s_SolvedNode>{});
}

static s_SolvedNode solveInt(const s_Context& ctx_0, s_TokenIdx& _here_0, const s_Node& node, const s_Type& type)
{
    return solved(node, solveInt(ctx_0, _here_0, node.value, type), fu_VEC<s_SolvedNode>{});
}

static s_SolvedNode solveNum(const s_Node& node, const s_Type& type)
{
    return solved(node, solveNum(node.value, type), fu_VEC<s_SolvedNode>{});
}

static s_SolvedNode createDefinit(const s_Context& ctx_0, s_TokenIdx& _here_0, const s_Type& type)
{
    const s_TokenIdx token { (_here_0 ? _here_0 : fail(ctx_0, _here_0, fu_STR{})) };
    if (type.vtype.quals & q_integral)
        return s_SolvedNode { "int"_fu, 0, "0"_fu, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token), s_Type(type), s_Target{} };

    if (type.vtype.quals & q_floating_pt)
        return s_SolvedNode { "real"_fu, 0, "0"_fu, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token), s_Type(type), s_Target{} };

    return s_SolvedNode { "definit"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token), s_Type(type), s_Target{} };
}

static s_SolvedNode solveStr(const s_Context& ctx_0, s_TokenIdx& _here_0, const s_Type& t_string_0, const s_Node& node)
{
    if (!node.value)
        return createDefinit(ctx_0, _here_0, add_ref(t_string_0, Lifetime_static()));

    return solved(node, t_string_0, fu_VEC<s_SolvedNode>{});
}

static s_SolvedNode solveChar(const s_Node& node)
{
    return solved(node, t_byte, fu_VEC<s_SolvedNode>{});
}

static s_SolvedNode tryCreateDefinit(const s_Context& ctx_0, s_TokenIdx& _here_0, const s_Type& type)
{
    if (type.vtype.quals & q_mutref)
        return s_SolvedNode{};

    return createDefinit(ctx_0, _here_0, type);
}

static s_SolvedNode solveDefinit(const s_Context& ctx_0, s_TokenIdx& _here_0, const s_Type& type)
{
    if (!type)
        fail(ctx_0, _here_0, "Cannot solve definit, no inferred type."_fu);

    return ([&]() -> s_SolvedNode { { s_SolvedNode _ = tryCreateDefinit(ctx_0, _here_0, type); if (_) return _; } fail(ctx_0, _here_0, ("Cannot definit: "_fu + serializeType(type))); }());
}

static s_SolvedNode solveCatch(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    ((node.items.size() == 3) || fail(ctx_0, _here_0, fu_STR{}));
    s_SolvedNode var_ok = solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items[0], s_Type{});
    const s_ScopeMemo scope0 = Scope_snap(_scope_0);
    fu_DEFER(Scope_pop(_scope_0, scope0));
    s_SolvedNode var_err = solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items[1], s_Type{});
    s_SolvedNode cAtch = solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items[2], s_Type{});
    (((var_err.kind == "let"_fu) && isAssignableAsArgument(var_err.type, s_Type(t_string_0))) || fail(ctx_0, _here_0, ("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu)));
    return solved(node, var_ok.type, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { var_ok, var_err, cAtch } });
}

static s_SolvedNode solveImport(const s_Context& ctx_0, s_TokenIdx& _here_0, s_Scope& _scope_0, const s_Node& node)
{
    const s_Module& m = findModule(ctx_0, _here_0, node.value);
    Scope_import(ctx_0, _here_0, _scope_0, m.modid);
    return createEmpty(ctx_0, _here_0, "empty"_fu, t_void, s_Target{});
}

static s_SolvedNode solveDefer(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    s_SolvedNode item = solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, only_zET6(node.items), s_Type{});
    return solved(node, t_void, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { item } });
}

static s_SolvedNode solveTryCatch(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    ((node.items.size() == 3) || fail(ctx_0, _here_0, fu_STR{}));
    const s_ScopeMemo scope0 = Scope_snap(_scope_0);
    s_SolvedNode tRy = solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items[0], s_Type{});
    Scope_pop(_scope_0, scope0);
    const s_ScopeMemo scope0_1 = Scope_snap(_scope_0);
    s_SolvedNode err = solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items[1], s_Type{});
    s_SolvedNode cAtch = solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node.items[2], s_Type{});
    Scope_pop(_scope_0, scope0_1);
    (((err.kind == "let"_fu) && isAssignableAsArgument(err.type, s_Type(t_string_0))) || fail(ctx_0, _here_0, ("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu)));
    return solved(node, t_void, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { tRy, err, cAtch } });
}

static s_SolvedNode solveTypeAssert(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node)
{
    const s_Node& left = node.items[0];
    const s_Node& right = node.items[1];
    s_Type expect = evalTypeAnnot(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, right).type;
    s_SolvedNode actual = solveNode(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, left, expect);
    checkAssignable(ctx_0, _here_0, expect, actual.type, "Type assertion failed"_fu, fu_STR{}, fu_STR{});
    return actual;
}

static s_SolvedNode solveTypeParam(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkip& _scope_skip_0, const s_Node& node)
{
    return solved(node, evalTypeParam(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, node.value), fu_VEC<s_SolvedNode>{});
}

static s_SolvedNode solveAddrOfFn(const s_Context& ctx_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkip& _scope_skip_0, const s_Node& node)
{
    const fu_STR& id = node.value;
    s_Type type = X_solveAddrOfFn(_scope_0, _scope_skip_0, id);
    return createEmpty(ctx_0, _here_0, "empty"_fu, type, s_Target{});
}

static s_SolvedNode solveNode(const s_Context& ctx_0, s_Module& module_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkip& _scope_skip_0, s_CurrentFn& _current_fn_0, int& SLOW_resolve_0, int& resolve_done_0, fu_VEC<s_OpenTemplate>& _open_templates_0, const s_Type& t_string_0, const s_Node& node, const s_Type& type)
{
    const fu_STR& k = node.kind;
    if (k == "root"_fu)
        return solveRoot(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node);

    if (k == "block"_fu)
        return solveBlock(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, type);

    if (k == "label"_fu)
        return solveComma(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node);

    if (k == "let"_fu)
        return solveLet(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, Lifetime_static());

    if (k == "call"_fu)
        return solveCall(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, s_Target{});

    if (k == "arrlit"_fu)
        return solveArrayLiteral(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, type);

    if (k == "if"_fu)
        return solveIf(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, s_Type(type));

    if (k == "or"_fu)
        return solveOr(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, s_Type(type));

    if (k == "!"_fu)
        return solveNot(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node);

    if (k == "and"_fu)
        return solveAnd(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, s_Type(type));

    if (k == "return"_fu)
        return solveReturn(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node);

    if (k == "loop"_fu)
        return solveBlock(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node, s_Type{});

    if (k == "break"_fu)
        return solveJump(node);

    if (k == "continue"_fu)
        return solveJump(node);

    if (k == "int"_fu)
        return solveInt(ctx_0, _here_0, node, type);

    if (k == "real"_fu)
        return solveNum(node, type);

    if (k == "str"_fu)
        return solveStr(ctx_0, _here_0, t_string_0, node);

    if (k == "char"_fu)
        return solveChar(node);

    if (k == "empty"_fu)
        return createEmpty(ctx_0, _here_0, "empty"_fu, t_void, s_Target{});

    if (k == "definit"_fu)
        return solveDefinit(ctx_0, _here_0, type);

    if (k == "catch"_fu)
        return solveCatch(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node);

    if (k == "import"_fu)
        return solveImport(ctx_0, _here_0, _scope_0, node);

    if (k == "defer"_fu)
        return solveDefer(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node);

    if (k == "try"_fu)
        return solveTryCatch(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node);

    if (k == "typeassert"_fu)
        return solveTypeAssert(ctx_0, module_0, _here_0, _scope_0, _root_scope_0, _scope_skip_0, _current_fn_0, SLOW_resolve_0, resolve_done_0, _open_templates_0, t_string_0, node);

    if (k == "typeparam"_fu)
        return solveTypeParam(ctx_0, module_0, _here_0, _scope_0, _scope_skip_0, node);

    if (k == "addroffn"_fu)
        return solveAddrOfFn(ctx_0, _here_0, _scope_0, _scope_skip_0, node);

    fail(ctx_0, _here_0, ("TODO: "_fu + k));
}

s_SolverOutput solve(const s_Node& parse, const s_Context& ctx, s_Module& module)
{
    s_TokenIdx _here {};
    s_Scope _scope {};
    s_ScopeMemo _root_scope {};
    s_ScopeSkip _scope_skip {};
    s_CurrentFn _current_fn {};
    int SLOW_resolve {};
    int resolve_done {};
    fu_VEC<s_OpenTemplate> _open_templates {};
    s_Type t_string = createArray(t_byte);
    if (module.modid)
    {
        _scope.imports += module.modid;
        _Scope_import__forceCopy(ctx, _scope, 0);
    }
    else
        _scope = listGlobals(module);

    
    {
        s_SolvedNode root = solveNode(ctx, module, _here, _scope, _root_scope, _scope_skip, _current_fn, SLOW_resolve, resolve_done, _open_templates, t_string, parse, s_Type{});
        s_Scope scope = Scope_exports(_scope, module.modid);
        (_current_fn && fail(ctx, _here, "non-empty _current_fn."_fu));
        ((SLOW_resolve == resolve_done) || fail(ctx, _here, "Some overload was left dirty."_fu));
        return s_SolverOutput { s_SolvedNode(root), s_Scope(scope), int(SLOW_resolve) };
    };
}

#endif
