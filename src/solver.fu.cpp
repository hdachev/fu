#include <algorithm>
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
struct s_BitSet;
struct s_CodegenOutput;
struct s_Context;
struct s_CurrentFn;
struct s_Effects;
struct s_Helpers;
struct s_Info;
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
struct s_Region;
struct s_Scope;
struct s_ScopeItem;
struct s_ScopeMemo;
struct s_ScopeSkip;
struct s_ScopeSkipMemos;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Struct;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;

bool Region_isArg(const s_Region&);
bool Region_isTemp(const s_Region&);
bool X_unpackAddrOfFnBinding(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Type&, bool);
bool add_once(s_BitSet&, int);
bool has(const s_BitSet&, int);
bool isAssignable(const s_Type&, const s_Type&);
bool isAssignableAsArgument(const s_Type&, const s_Type&);
bool isStruct(const s_Type&);
bool is_bool(const s_Type&);
bool is_mutref(const s_Type&);
bool is_never(const s_Type&);
bool is_ref(const s_Type&);
bool is_ref2temp(const s_Type&);
bool is_void(const s_Type&);
bool operator==(const s_Target&, const s_Target&);
bool operator==(const s_Type&, const s_Type&);
bool operator>(const s_Region&, const s_Region&);
bool type_has(const s_Type&, const fu_STR&);
bool type_isAddrOfFn(const s_Type&);
const fu_VEC<int>& lookupTypeImports(const s_Type&, const s_Module&, const s_Context&);
const s_Struct& lookupStruct(const s_Type&, const s_Module&, const s_Context&);
fu_STR _fname(const s_TokenIdx&, const s_Context&);
fu_STR hash62(fu::view<std::byte>, int);
fu_STR humanizeType(const s_Type&);
fu_STR packAddrOfFn(const fu_VEC<s_Target>&);
fu_STR resolveFile_x(const fu_STR&, const s_Context&);
fu_STR serializeType(const s_Type&);
inline s_ScopeSkip& last_9II5(fu_VEC<s_ScopeSkip>&);
inline s_SolvedNode& last_FnNW(fu_VEC<s_SolvedNode>&);
int Lifetime_compareToIndex(const s_Lifetime&, int);
int MODID(const s_Module&);
int Region_toArgIndex(const s_Region&);
int Region_toLocalIndex(const s_Region&);
int is_floating_pt(const s_Type&);
int is_integral(const s_Type&);
int is_rx_copy(const s_Type&);
int is_trivial(const s_Type&);
int parse10i32(int&, const fu_STR&);
int popcount(const s_BitSet&);
s_Intlit Intlit(fu::view<std::byte>);
s_Lifetime Lifetime_makeShared(const s_Lifetime&);
s_Lifetime Lifetime_static();
s_Lifetime Lifetime_temporary();
s_Lifetime Lifetime_union(const s_Lifetime&, const s_Lifetime&);
s_MapFields tryClear_map(const s_Type&);
s_Region Region_fromArgIndex(int);
s_Region Region_fromLocalIndex(int);
s_Scope Scope_exports(const s_Scope&, int, const fu_VEC<s_ScopeItem>&);
s_Scope listGlobals(const s_Module&);
s_ScopeMemo Scope_snap(const s_Scope&, const fu_VEC<s_Helpers>&);
s_SolverOutput solve(const s_Node&, const s_Context&, s_Module&);
s_Struct& lookupStruct_mut(const fu_STR&, s_Module&);
s_Target Scope_Typedef(s_Scope&, const fu_STR&, const s_Type&, int, const s_Template&, const fu_STR&, unsigned, const s_Module&);
s_Target Scope_add(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, int, int, const fu_VEC<s_Argument>&, const s_Template&, const s_SolvedNode&, int, const fu_STR&, unsigned, const s_Module&);
s_Target Scope_create(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, int, int, const fu_VEC<s_Argument>&, const s_SolvedNode&, int, unsigned, const fu_VEC<s_ScopeItem>&, const s_Module&);
s_Target search(fu::view<s_ScopeItem>, const fu_STR&, int&, const fu_VEC<s_ScopeSkip>&, bool&, const s_Target&, fu::view<s_Target>, fu::view<s_ScopeItem>);
s_Target target(const s_ScopeItem&);
s_Token _token(const s_TokenIdx&, const s_Context&);
s_Type X_addrofTarget(const s_Target&);
s_Type add_mutref(s_Type&&, const s_Lifetime&);
s_Type add_ref(s_Type&&, const s_Lifetime&);
s_Type add_refs(const s_Type&, s_Type&&);
s_Type clear_mutref(s_Type&&);
s_Type clear_refs(s_Type&&);
s_Type createArray(const s_Type&);
s_Type createMap(const s_Type&, const s_Type&);
s_Type createSlice(const s_Type&, const s_Lifetime&);
s_Type despeculateStruct(s_Type&&);
s_Type initStruct(const fu_STR&, int, bool, s_Module&);
s_Type tryClear_array(const s_Type&);
s_Type tryClear_mutref(const s_Type&);
s_Type tryClear_ref(const s_Type&);
s_Type tryClear_sliceable(const s_Type&);
s_Type type_trySuper(const s_Type&, const s_Type&);
static bool lazySolveStart(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, fu_MAP<fu_STR, s_Target>&, const s_Type&, const s_Target&, const s_Overload&);
static fu_STR mangleArguments(const s_Context&, s_Module&, s_Scope&, fu::view<s_SolvedNode>, fu::view<int>, bool, const fu_VEC<fu_VEC<s_Target>>&, int, const s_Type&);
static fu_VEC<s_SolvedNode> solveNodes(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, fu_MAP<fu_STR, s_Target>&, const s_Type&, const fu_VEC<s_Node>&, const s_Type&, const s_Type&, bool, bool, int, int);
static int& left(s_Target&);
static int& right(s_Target&);
static s_Helpers& h(fu_VEC<s_Helpers>&, int&);
static s_Overload GET(const s_Context&, s_Module&, s_Scope&, const s_Target&);
static s_Overload fnd(const s_Context&, s_Module&, s_Scope&, int);
static s_SolvedNode CallerNode(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, fu_MAP<fu_STR, s_Target>&, const s_Type&, const s_Node&, const s_Target&, fu_VEC<s_SolvedNode>&&, int);
static s_SolvedNode createLet(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, int&, s_CurrentFn&, const fu_STR&, int, const s_SolvedNode&);
static s_SolvedNode evalTypeAnnot(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, fu_MAP<fu_STR, s_Target>&, const s_Type&, const s_Node&, const fu_MAP<fu_STR, s_Type>&);
static s_SolvedNode solveArrlit(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, fu_MAP<fu_STR, s_Target>&, const s_Type&, const s_Node&, const s_Type&);
static s_SolvedNode solveInt(const s_Context&, fu_VEC<s_Info>&, s_TokenIdx&, const s_Node&, const s_Type&);
static s_SolvedNode solveLet(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, fu_MAP<fu_STR, s_Target>&, const s_Type&, const s_Node&, const s_Type&, const s_Target&, bool);
static s_SolvedNode solveLetLike_dontTouchScope(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, fu_MAP<fu_STR, s_Target>&, const s_Type&, const s_Node&, const s_Type&, bool);
static s_SolvedNode solveNode(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, fu_MAP<fu_STR, s_Target>&, const s_Type&, const s_Node&, const s_Type&, bool, int);
static s_SolvedNode solveNum(const s_Node&, const s_Type&);
static s_SolvedNode solveStr(const s_Context&, fu_VEC<s_Info>&, s_TokenIdx&, const s_Type&, const s_Node&);
static s_Target Binding(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, s_CurrentFn&, const fu_STR&, s_Type&&, int, bool&, const s_Target&);
static s_Target tryMatch__mutargs(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, fu_MAP<fu_STR, s_Target>&, const s_Type&, const s_Scope&, bool, fu_STR&&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&, int, const s_Target&);
static s_Type Scope_lookupType(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeSkipMemos&, const s_Node&);
static s_Type T(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, fu_MAP<fu_STR, s_Target>&, const s_Type&, const s_Node&, const fu_MAP<fu_STR, s_Type>&, int);
static s_Type solveArrlit_itemType(const s_Context&, fu_VEC<s_Info>&, s_TokenIdx&, fu::view<s_SolvedNode>, s_Type&&, int);
static void Scope_import(const s_Context&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeSkipMemos&, int, bool);
static void descend(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, fu_MAP<fu_STR, s_Target>&, const s_Type&, const s_Scope&, bool, const s_Type&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, int, const fu_VEC<s_ScopeSkip>&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&, const s_Type&, bool, bool);
static void solveLet(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, s_CurrentFn&, s_SolvedNode&, const fu_STR&, const s_Target&, bool);
void Scope_pop(s_Scope&, const s_ScopeMemo&, fu_VEC<s_Helpers>&);
void Scope_set(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);
void Scope_set(s_Scope&, const fu_STR&, const s_Target&, bool);
void add(s_BitSet&, int);
void rem(s_BitSet&, int);

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
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
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

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu_STR name;
    fu_STR autocall;
    s_Type type;
    s_SolvedNode dEfault;
    int flags;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
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
    s_Template tEmplate;
    s_SolvedNode solved;
    fu_VEC<int> used_by;
    unsigned status;
    int local_of;
    fu_VEC<int> closes_over;
    fu_VEC<s_ScopeItem> extra_items;
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
            || tEmplate
            || solved
            || used_by
            || status
            || local_of
            || closes_over
            || extra_items
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
    explicit operator bool() const noexcept
    {
        return false
            || name
            || target
            || items
            || imports
            || converts
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

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu_VEC<s_Module> modules;
    fu_MAP<fu_STR, fu_STR> files;
    fu_MAP<fu_STR, fu_STR> fuzzy;
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

                                #ifndef DEF_s_Info
                                #define DEF_s_Info
struct s_Info
{
    s_TokenIdx here;
    fu_STR text;
    explicit operator bool() const noexcept
    {
        return false
            || here
            || text
        ;
    }
};
                                #endif

                                #ifndef DEF_s_CurrentFn
                                #define DEF_s_CurrentFn
struct s_CurrentFn
{
    s_SolvedNode out;
    fu_VEC<int> locals_used;
    explicit operator bool() const noexcept
    {
        return false
            || out
            || locals_used
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Helpers
                                #define DEF_s_Helpers
struct s_Helpers
{
    int target;
    fu_STR id;
    short mask;
    int local_of;
    int kills;
    s_Type ret_expect;
    s_Type ret_actual;
    fu_VEC<int> returns;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || id
            || mask
            || local_of
            || kills
            || ret_expect
            || ret_actual
            || returns
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BitSet
                                #define DEF_s_BitSet
struct s_BitSet
{
    fu_VEC<uint8_t> _data;
    explicit operator bool() const noexcept
    {
        return false
            || _data
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

                                #ifndef DEF_N_DeadIf
                                #define DEF_N_DeadIf
inline constexpr int N_DeadIf = (1 << 9);
                                #endif

                                #ifndef DEF_N_NonTrivAutoCopy
                                #define DEF_N_NonTrivAutoCopy
inline constexpr int N_NonTrivAutoCopy = (1 << 10);
                                #endif

static const bool OPTI_autoshadow = true;

static const bool OPTI_dedupe_vars = true;

static const bool OPTI_flatten_blocks = true;

static const bool USE_nontriv_autocopy = true;

static const bool USE_retval_narrowing = false;

static const bool USE_ref_to_mutref = false;

static const bool SELF_TEST = true;

static const bool CANNOT_definit_mutrefs = true;

extern const s_Type t_byte;

static void _Scope_import__forceCopy(const s_Context& ctx_0, s_Scope& _scope_0, const int modid_5, const bool pRivate)
{
    const s_Scope& s = ctx_0.modules[modid_5].out.solve.scope;
    _scope_0.items += fu::get_view(s.items, 0, (pRivate ? s.items.size() : int(s.pub_count)));
}

static s_SolvedNode solved(const s_Node& node_1, const s_Type& type_3, const fu_VEC<s_SolvedNode>& items_5, const s_Target& target_5)
{
    return s_SolvedNode { fu_STR(node_1.kind), int(node_1.flags), fu_STR(node_1.value), fu_VEC<s_SolvedNode>(items_5), s_TokenIdx(node_1.token), s_Type(type_3), s_Target(target_5) };
}

extern const s_Type t_void;

static int unorderedClassify(const fu_STR& kind_3)
{
    if (kind_3 == "fn"_fu)
        return 1;

    if (kind_3 == "struct"_fu)
        return 10;

    return 0;
}

                                #ifndef DEFt_if_last_FnNW
                                #define DEFt_if_last_FnNW
inline const s_SolvedNode& if_last_FnNW(fu_VEC<s_SolvedNode>& s)
{
    return s.size() ? s.mutref((s.size() - 1)) : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

extern const s_Type t_never;

[[noreturn]] static fu::never fail(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, fu_STR&& reason)
{
    s_Token here = _token(_here_0, ctx_0);
    if (!reason)
        reason = (("Unexpected `"_fu + here.value) + "`."_fu);

    fu_STR fname_1 = _fname(_here_0, ctx_0);
    fu_STR addr = ((("@"_fu + here.line) + ":"_fu) + here.col);
    for (int i = _info_0.size(); i-- > 0; )
    {
        s_Info info { _info_0[i] };
        s_Token here_1 = _token(info.here, ctx_0);
        reason += (here_1 ? ((((("\n\t@"_fu + here_1.line) + ":"_fu) + here_1.col) + ": "_fu) + info.text) : ("\n\t"_fu + info.text));
    };
    fu::fail(((((fname_1 + " "_fu) + addr) + ":\n\t"_fu) + reason));
}

                                #ifndef DEF_HM_Function
                                #define DEF_HM_Function
inline constexpr short HM_Function = (short(1) << short(3));
                                #endif

static void checkAssignable(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_Type& host, const s_Type& guest, const fu_STR& err, const fu_STR& id_2, const fu_STR& sep)
{
    if (!(isAssignable((host ? host : fail(ctx_0, _info_0, _here_0, "Bad host type."_fu)), (guest ? guest : fail(ctx_0, _info_0, _here_0, "Bad guest type."_fu)))))
        fail(ctx_0, _info_0, _here_0, (((((err + (id_2 ? ((" `"_fu + id_2) + "`"_fu) : fu_STR{})) + ": "_fu) + humanizeType(host)) + (sep ? fu_STR(sep) : " <- "_fu)) + humanizeType(guest)));

}

static s_Type superType(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const fu_STR& reason, const s_Type& a, const s_Type& b)
{
    s_Type _0 {};
    return (_0 = type_trySuper(a, b)) ? static_cast<s_Type&&>(_0) : fail(ctx_0, _info_0, _here_0, (((((reason + "No common supertype: `"_fu) + serializeType(a)) + "` <-> `"_fu) + serializeType(b)) + "`."_fu));
}

static void reportReturnType(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, fu_VEC<s_Helpers>& _helpers_0, const int helpers_idx, const s_Type& type_3)
{
    s_Helpers& h = _helpers_0.mutref(helpers_idx);
    if (h.ret_expect && (h.mask & HM_Function))
        checkAssignable(ctx_0, _info_0, _here_0, h.ret_expect, type_3, "Expression not assignable to return annotation"_fu, fu_STR{}, fu_STR{});

    h.ret_actual = (h.ret_actual ? superType(ctx_0, _info_0, _here_0, "Subsequent return: "_fu, h.ret_actual, type_3) : s_Type(type_3));
    if (!(h.ret_actual))
        fail(ctx_0, _info_0, _here_0, "Can't be null past this point."_fu);

}

                                #ifndef DEFt_last_FnNW
                                #define DEFt_last_FnNW
inline s_SolvedNode& last_FnNW(fu_VEC<s_SolvedNode>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static s_Overload& GET_mut(s_Module& module_0, s_Scope& _scope_0, const s_Target& target_5)
{
    if (!((target_5.index > 0) && (target_5.modid == MODID(module_0))))
        fu_ASSERT();

    return _scope_0.overloads.mutref((target_5.index - 1));
}

static s_SolvedNode createCopy(const s_SolvedNode& node_1)
{
    return s_SolvedNode { "copy"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(node_1) } }, s_TokenIdx(node_1.token), clear_refs(s_Type(node_1.type)), s_Target{} };
}

static void maybeCopyOrMove(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, int& _notes_0, s_SolvedNode& node_1, const s_Type& slot, const bool isArgument)
{
    if (!is_mutref(slot))
        node_1.type = clear_mutref(s_Type(node_1.type));

    if (is_ref(slot))
    {
        if ((node_1.kind == "definit"_fu) && isArgument)
            node_1.type = clear_refs(s_Type(node_1.type));

        return;
    };
    if (!is_ref(node_1.type))
        return;

    if (node_1.kind == "definit"_fu)
    {
        node_1.type = clear_refs(s_Type(node_1.type));
        return;
    };
    if (!is_rx_copy(slot))
        fail(ctx_0, _info_0, _here_0, "Needs an explicit STEAL or CLONE."_fu);

    if (!is_trivial(node_1.type))
    {
        if (!(USE_nontriv_autocopy))
            fail(ctx_0, _info_0, _here_0, "Non-trivial implicit copy."_fu);

        _notes_0 |= N_NonTrivAutoCopy;
    };
    node_1 = createCopy(node_1);
}

                                #ifndef DEFt_last_Vh3M
                                #define DEFt_last_Vh3M
inline const s_SolvedNode& last_Vh3M(const fu_VEC<s_SolvedNode>& s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode createBlock(const s_TokenIdx& token_2, const s_Type& type_3, const fu_VEC<s_SolvedNode>& items_5, const s_Target& label)
{
    if (!label && items_5.size())
    {
        bool ok = true;
        for (int i = 0; i < (items_5.size() - 1); i++)
        {
            if (items_5[i].kind != "empty"_fu)
            {
                ok = false;
                break;
            };
        };
        if (ok)
            return s_SolvedNode(last_Vh3M(items_5));

    };
    return s_SolvedNode { "block"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>(items_5), s_TokenIdx(token_2), s_Type(type_3), s_Target(label) };
}

                                #ifndef DEF_HM_LabelUsed
                                #define DEF_HM_LabelUsed
inline constexpr short HM_LabelUsed = (short(1) << short(6));
                                #endif

static s_SolvedNode solveBlock(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, const s_Type& type_3, const int fnbody_of, const short mask_1, const int kills_1, const fu_STR& id_2)
{
    const s_TokenIdx& token_2 = node_1.token;
    fu_VEC<s_Node> nodes = ((node_1.kind == "block"_fu) ? fu_VEC<s_Node>(node_1.items) : fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(node_1) } });
    const fu_STR& id_3 = (id_2 ? id_2 : ((node_1.kind == "block"_fu) ? node_1.value : (*(const fu_STR*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap(_scope_0, _helpers_0);
    fu_DEFER(Scope_pop(_scope_0, scope0, _helpers_0));
    const int helpers_idx = _helpers_0.size();
    _helpers_0 += s_Helpers { int(fnbody_of), fu_STR(id_3), short(mask_1), (fnbody_of ? -1 : int(_current_fn_0.out.target.index)), int(kills_1), s_Type(type_3), s_Type{}, fu_VEC<int>{} };
    const bool expr = (!fnbody_of && !is_void(type_3));
    fu_VEC<s_SolvedNode> items_5 = solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, nodes, t_void, type_3, expr, true, -1, (helpers_idx + 1));
    s_Helpers& h = _helpers_0.mutref(helpers_idx);
    if (fnbody_of)
    {
        if (is_never(if_last_FnNW(items_5).type))
        {
            if (!h.ret_actual)
                h.ret_actual = t_never;

        }
        else
        {
            if (h.ret_actual)
            {
                if (!(isAssignable(t_void, h.ret_actual)))
                    fail(ctx_0, _info_0, _here_0, "Non-void returning fn missing a final return."_fu);

            };
            h.ret_actual = t_void;
        };
        if (!USE_retval_narrowing && h.ret_expect)
        {
            s_Lifetime lt0 { h.ret_actual.lifetime };
            h.ret_actual = h.ret_expect;
            if (is_ref(h.ret_actual))
                h.ret_actual.lifetime = (lt0 ? lt0 : fail(ctx_0, _info_0, _here_0, "expected ref, got no lt0"_fu));

        };
    };
    if (!fnbody_of && items_5 && !is_void(h.ret_actual))
        reportReturnType(ctx_0, _info_0, _here_0, _helpers_0, helpers_idx, last_FnNW(items_5).type);

    if (!is_ref(h.ret_actual))
    {
        for (int i = 0; i < h.returns.size(); i++)
        {
            s_Overload& ret = GET_mut(module_0, _scope_0, s_Target { int(module_0.modid), int(h.returns.mutref(i)) });
            maybeCopyOrMove(ctx_0, _info_0, _here_0, _notes_0, ret.solved, h.ret_actual, false);
        };
        if (!fnbody_of && items_5 && !is_void(h.ret_actual))
            maybeCopyOrMove(ctx_0, _info_0, _here_0, _notes_0, last_FnNW(items_5), h.ret_actual, false);

    };
    if (OPTI_flatten_blocks && items_5.size())
    {
        for (; ; )
        {
            s_SolvedNode tail { last_FnNW(items_5) };
            if ((tail.kind != "block"_fu) || tail.target)
                break;

            fu_VEC<s_SolvedNode> unwrap { tail.items };
            items_5.pop();
            items_5 += unwrap;
        };
    };
    return createBlock(token_2, (h.ret_actual ? h.ret_actual : t_void), items_5, ((h.mask & HM_LabelUsed) ? s_Target { int(module_0.modid), int(h.target) } : s_Target{}));
}

                                #ifndef DEF_HM_CanBreak
                                #define DEF_HM_CanBreak
inline constexpr short HM_CanBreak = (short(1) << short(0));
                                #endif

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline constexpr int F_TEMPLATE = (1 << 28);
                                #endif

                                #ifndef DEF_SS_LAZY
                                #define DEF_SS_LAZY
inline constexpr unsigned SS_LAZY = (0x1u << 0u);
                                #endif

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_F_COMPOUND_ID
                                #define DEF_F_COMPOUND_ID
inline constexpr int F_COMPOUND_ID = (1 << 6);
                                #endif

static fu_STR Autocall_splice(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, fu_STR& name_3)
{
    for (int i = 0; i < name_3.size(); i++)
    {
        if (name_3.mutref(i) == std::byte('.'))
        {
            fu_STR ret = fu::slice(name_3, (i + 1));
            name_3.shrink(i);
            return ret;
        };
    };
    fail(ctx_0, _info_0, _here_0, (("Autocall: no `.` in id `"_fu + name_3) + "`."_fu));
}

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline constexpr int LET_TYPE = 0;
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

static s_Type T(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1_0, const fu_MAP<fu_STR, s_Type>& typeParams_0, const int i)
{
    return evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1_0.items[i], typeParams_0).type;
}

static const s_Module& findModule(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const fu_STR& fuzimport)
{
    fu_STR fname_1 = resolveFile_x(fuzimport, ctx_0);
    const fu_VEC<s_Module>& modules_1 = ctx_0.modules;
    for (int i = 1; i < modules_1.size(); i++)
    {
        const s_Module& m = modules_1[i];
        if (m.fname == fname_1)
            return m;

    };
    fail(ctx_0, _info_0, _here_0, ("Cannot locate: "_fu + fname_1));
}

static const s_Scope& dequalify_andGetScope(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, fu_STR& id_2)
{
    const int split_1 = fu::lfind(id_2, std::byte('\t'), 0);
    if (!((split_1 >= 0)))
        fail(ctx_0, _info_0, _here_0, fu_STR{});

    fu_STR fname_1 = fu::slice(id_2, 0, split_1);
    id_2 = fu::slice(id_2, (split_1 + 1));
    const s_Module& other = findModule(ctx_0, _info_0, _here_0, fname_1);
    if (other.modid != module_0.modid)
        return other.out.solve.scope;

    return _scope_0;
}

                                #ifndef DEFt_each_DG3V
                                #define DEFt_each_DG3V
inline void each_DG3V(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, int& count_0, const fu_VEC<s_Target>& items_5, const fu_VEC<s_ScopeSkip>& scope_skip_1, int, const int start_1)
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
                count_0++;
            else
                fail(ctx_0, _info_0, _here_0, fu_STR{});

        };
        i0 = ss.end;
    };
}
                                #endif

static int countUsings(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_ScopeSkipMemos& _ss_0, const s_Scope& scope_1, const bool local_scope)
{
    const fu_VEC<s_ScopeSkip>& scope_skip_1 = (local_scope ? _ss_0.usings : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL));
    int count = 0;
    each_DG3V(ctx_0, _info_0, _here_0, count, scope_1.usings, scope_skip_1, 0, 0);
    return count;
}

                                #ifndef DEF_F_NAMED_ARGS
                                #define DEF_F_NAMED_ARGS
inline constexpr int F_NAMED_ARGS = (1 << 24);
                                #endif

                                #ifndef DEF_F_OPT_ARG
                                #define DEF_F_OPT_ARG
inline constexpr int F_OPT_ARG = (1 << 16);
                                #endif

                                #ifndef DEFt_each_T3Pe
                                #define DEFt_each_T3Pe
inline void each_T3Pe(s_BitSet& seen_0, const fu_VEC<int>& items_5, const fu_VEC<s_ScopeSkip>& scope_skip_1, int, const int start_1)
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
            add(seen_0, modid_6);
        };
        i0 = ss.end;
    };
}
                                #endif

static void visitTypeImports(const s_Context& ctx_0, s_Module& module_0, s_ScopeSkipMemos& _ss_0, const s_Scope& scope_1_0, bool local_scope_0, fu_STR& id_2_0, fu_VEC<s_Target>& extra_items_1_0, s_BitSet& seen_0, const s_Type& type_3)
{
    const fu_VEC<int>& visit = lookupTypeImports(type_3, module_0, ctx_0);
    for (int i = -1; i < visit.size(); i++)
    {
        const int modid_5 = ((i >= 0) ? visit[i] : type_3.vtype.modid);
        if (has(seen_0, modid_5))
            continue;

        if (!seen_0)
        {
            add(seen_0, 0);
            add(seen_0, module_0.modid);
            each_T3Pe(seen_0, scope_1_0.imports, (local_scope_0 ? _ss_0.imports : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL)), 0, 0);
        };
        if (!add_once(seen_0, modid_5))
            continue;

        const fu_VEC<s_ScopeItem>& items_5 = ctx_0.modules[modid_5].out.solve.scope.items;
        for (int i_1 = 0; i_1 < items_5.size(); i_1++)
        {
            if (items_5[i_1].id == id_2_0)
                extra_items_1_0.push(target(items_5[i_1]));

        };
    };
}

static s_Overload GET(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const s_Target& target_5)
{
    if (target_5.modid == module_0.modid)
        return s_Overload(_scope_0.overloads[(target_5.index - 1)]);

    return s_Overload(ctx_0.modules[target_5.modid].out.solve.scope.overloads[(target_5.index - 1)]);
}

                                #ifndef DEFt_each_XmwJ
                                #define DEFt_each_XmwJ
inline void each_XmwJ(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Scope& scope_1_0, bool local_scope_0, fu_STR& id_2_0, fu_VEC<s_Target>& extra_items_1_0, s_BitSet& seen_0, const fu_VEC<s_Target>& items_5, const fu_VEC<s_ScopeSkip>& scope_skip_1, int, const int start_1)
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
            visitTypeImports(ctx_0, module_0, _ss_0, scope_1_0, local_scope_0, id_2_0, extra_items_1_0, seen_0, GET(ctx_0, module_0, _scope_0, u).type);
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

                                #ifndef DEF_F_INFIX
                                #define DEF_F_INFIX
inline constexpr int F_INFIX = (1 << 1);
                                #endif

                                #ifndef DEF_F_PREFIX
                                #define DEF_F_PREFIX
inline constexpr int F_PREFIX = (1 << 2);
                                #endif

                                #ifndef DEF_F_POSTFIX
                                #define DEF_F_POSTFIX
inline constexpr int F_POSTFIX = (1 << 3);
                                #endif

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline constexpr int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEF_SS_DID_START
                                #define DEF_SS_DID_START
inline constexpr unsigned SS_DID_START = (0x1u << 1u);
                                #endif

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline constexpr unsigned SS_FINALIZED = (0x1u << 3u);
                                #endif

                                #ifndef DEF_SS_DIRTY
                                #define DEF_SS_DIRTY
inline constexpr unsigned SS_DIRTY = (0x1u << 2u);
                                #endif

                                #ifndef DEFt_last_mnBR
                                #define DEFt_last_mnBR
inline const s_Target& last_mnBR(const fu_VEC<s_Target>& s)
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

                                #ifndef DEFt_unpackAddrOfFn_yVJh
                                #define DEFt_unpackAddrOfFn_yVJh
inline void unpackAddrOfFn_yVJh(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, s_Template& template_1_0, int& parent_idx_0, const fu_STR& canon_1, int)
{
    int i = 0;
    while (i < canon_1.size())
    {
        if (!(canon_1[i++] == std::byte('@')))
            fu::fail((("unpackAddrOfFn: bad canon [1]: `"_fu + canon_1) + "`."_fu));

        const int modid_5 = parse10i32(i, canon_1);
        if (!(canon_1[i++] == std::byte(':')))
            fu::fail((("unpackAddrOfFn: bad canon [2]: `"_fu + canon_1) + "`."_fu));

        const int index_2 = parse10i32(i, canon_1);
        const s_Target target_5 = s_Target { int(modid_5), int(index_2) };
        if (target_5.modid == module_0.modid)
        {
            s_Overload overload = GET(ctx_0, module_0, _scope_0, target_5);
            if (overload.flags & F_SPREAD_INLINE)
                template_1_0.node.flags |= F_INLINE;

            const int local_of_2 = overload.local_of;
            if (parent_idx_0 < local_of_2)
                parent_idx_0 = local_of_2;

        };
    };
}
                                #endif

static bool is_SPECFAIL(const s_Target& target_5)
{
    return target_5.modid == -1;
}

inline static fu_STR id_TesV(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, s_Target& target_6)
{
    return ((target_6.modid != -1) ? (("\""_fu + GET(ctx_0, module_0, _scope_0, target_6).name) + "\""_fu) : "SPEC_FAIL"_fu);
}

inline static fu_STR id_xKN9(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const s_Target& target_6)
{
    return ((target_6.modid != -1) ? (("\""_fu + GET(ctx_0, module_0, _scope_0, target_6).name) + "\""_fu) : "SPEC_FAIL"_fu);
}

static void setSpec(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, fu_MAP<fu_STR, s_Target>& _specs_0, bool isInline_0, const fu_STR& mangle_1, const s_Target& target_5, const bool nx)
{
    if (isInline_0)
        fail(ctx_0, _info_0, _here_0, "inline.setSpec"_fu);

    s_Target* _0;
    s_Target& t = (*(_0 = &(_specs_0.upsert(mangle_1))) ? *_0 : *_0 = s_Target{});
    if (!((!t && nx) || (is_SPECFAIL(t) && !nx)))
        fail(ctx_0, _info_0, _here_0, ((((((((("About to screw up royally, replacing spec: "_fu + t.index) + " with "_fu) + target_5.index) + ", mangle: "_fu) + mangle_1) + ", that's: "_fu) + id_TesV(ctx_0, module_0, _scope_0, t)) + " becoming "_fu) + id_xKN9(ctx_0, module_0, _scope_0, target_5)));

    t = target_5;
}

                                #ifndef DEFt_if_last_9II5
                                #define DEFt_if_last_9II5
inline const s_ScopeSkip& if_last_9II5(fu_VEC<s_ScopeSkip>& s)
{
    return s.size() ? s.mutref((s.size() - 1)) : (*(const s_ScopeSkip*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_last_9II5
                                #define DEFt_last_9II5
inline s_ScopeSkip& last_9II5(fu_VEC<s_ScopeSkip>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static void ScopeSkip_push(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, fu_VEC<s_ScopeSkip>& scope_skip_1, const int start_1, const int end_1)
{
    if (!((start_1 <= end_1)))
        fail(ctx_0, _info_0, _here_0, "ScopeSkip_push: bad args."_fu);

    if (end_1 == start_1)
        return;

    const s_ScopeSkip& last_1 = if_last_9II5(scope_skip_1);
    if (!((last_1.end <= start_1)))
        fail(ctx_0, _info_0, _here_0, "ScopeSkip_push: last.end > start."_fu);

    if (scope_skip_1 && (last_1.end == start_1))
        last_9II5(scope_skip_1).end = end_1;
    else
        scope_skip_1 += s_ScopeSkip { int(start_1), int(end_1) };

}

static void Scope_import(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const int modid_5, const bool pRivate)
{

    {
        fu_VEC<int>& items_5 = _scope_0.imports;
        fu_VEC<s_ScopeSkip>& scope_skip_1 = _ss_0.imports;
        const int start_1 = 0;

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
                    int& import = items_5.mutref(i_1);
                    if (import == modid_5)
                        return;

                };
                i0 = ss.end;
            };
        };
    };
    if (!(modid_5))
        fail(ctx_0, _info_0, _here_0, "Attempting to import modid-0."_fu);

    _scope_0.imports += modid_5;
    _Scope_import__forceCopy(ctx_0, _scope_0, modid_5, pRivate);
}

static void ScopeSkip_setup(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, const s_Template& template_1, const s_ScopeMemo& scope0, const bool isInline)
{
    if (_root_scope_0)
    {
        const s_ScopeMemo& start_1 = (template_1.scope_memo ? template_1.scope_memo : _root_scope_0);
        _ss_0 = template_1.scope_skip;
        ScopeSkip_push(ctx_0, _info_0, _here_0, _ss_0.items, start_1.items_len, scope0.items_len);
        if (!isInline)
            ScopeSkip_push(ctx_0, _info_0, _here_0, _ss_0.declash, start_1.items_len, scope0.items_len);

        ScopeSkip_push(ctx_0, _info_0, _here_0, _ss_0.imports, start_1.imports_len, scope0.imports_len);
        ScopeSkip_push(ctx_0, _info_0, _here_0, _ss_0.usings, start_1.usings_len, scope0.usings_len);
        ScopeSkip_push(ctx_0, _info_0, _here_0, _ss_0.converts, start_1.converts_len, scope0.converts_len);
        ScopeSkip_push(ctx_0, _info_0, _here_0, _ss_0.helpers, start_1.helpers_len, scope0.helpers_len);
    };
    for (int i = 0; i < template_1.imports.size(); i++)
        Scope_import(ctx_0, _info_0, _here_0, _scope_0, _ss_0, template_1.imports[i], (i == 0));

}

static bool couldRetype(const s_SolvedNode& node_1)
{
    return (node_1.kind == "int"_fu) || (node_1.kind == "real"_fu);
}

static s_Type Scope_lookupType(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, fu_STR&& id_2, const int flags_4)
{
    int scope_iterator {};
    s_Target overloadIdx {};
    bool shadows {};
    const int qualified = (flags_4 & F_COMPOUND_ID);
    const s_Scope& scope_1 = (qualified ? dequalify_andGetScope(ctx_0, module_0, _info_0, _here_0, _scope_0, id_2) : _scope_0);
    while ((overloadIdx = search(scope_1.items, id_2, scope_iterator, (!qualified ? _ss_0.items : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL)), shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
    {
        s_Overload maybe = GET(ctx_0, module_0, _scope_0, overloadIdx);
        if (maybe.kind == "type"_fu)
            return static_cast<s_Type&&>((maybe.type ? maybe.type : fail(ctx_0, _info_0, _here_0, fu_STR{})));

    };
    fail(ctx_0, _info_0, _here_0, (("No type `"_fu + id_2) + "` in scope."_fu));
}

static s_Type Scope_lookupType(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Node& annot)
{
    return Scope_lookupType(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, fu_STR(annot.value), annot.flags);
}

static bool want(const s_Type& type_3_0, const s_Type& t)
{
    return type_3_0.vtype.canon == t.vtype.canon;
}

extern const s_Type t_f32;

extern const s_Type t_f64;

extern const s_Type t_i32;

extern const s_Type t_i64;

extern const s_Type t_i16;

extern const s_Type t_i8;

extern const s_Type t_u32;

extern const s_Type t_u64;

extern const s_Type t_u16;

extern const s_Type t_u8;

static s_Type solveInt(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const fu_STR& v, const s_Type& type_3)
{
    s_Intlit parse_4 = Intlit(v);
    if (parse_4.error)
        fail(ctx_0, _info_0, _here_0, fu_STR(parse_4.error));

    if (type_3)
    {
        if (!parse_4.uNsigned)
        {
            if (want(type_3, t_f32) && (parse_4.minsize_f <= uint8_t(32u)))
                return s_Type(t_f32);

            if (want(type_3, t_f64) && (parse_4.minsize_f <= uint8_t(64u)))
                return s_Type(t_f64);

            if (want(type_3, t_i32) && (parse_4.minsize_i <= uint8_t(32u)))
                return s_Type(t_i32);

            if (want(type_3, t_i64) && (parse_4.minsize_i <= uint8_t(64u)))
                return s_Type(t_i64);

            if (want(type_3, t_i16) && (parse_4.minsize_i <= uint8_t(16u)))
                return s_Type(t_i16);

            if (want(type_3, t_i8) && (parse_4.minsize_i <= uint8_t(8u)))
                return s_Type(t_i8);

        };
        if (!parse_4.sIgned)
        {
            if (want(type_3, t_u32) && (parse_4.minsize_u <= uint8_t(32u)))
                return s_Type(t_u32);

            if (want(type_3, t_u64) && (parse_4.minsize_u <= uint8_t(64u)))
                return s_Type(t_u64);

            if (want(type_3, t_u16) && (parse_4.minsize_u <= uint8_t(16u)))
                return s_Type(t_u16);

            if (want(type_3, t_u8) && (parse_4.minsize_u <= uint8_t(8u)))
                return s_Type(t_u8);

        };
    };
    if (parse_4.uNsigned)
    {
        if ((parse_4.minsize_u <= uint8_t(32u)))
            return s_Type(t_u32);

        if ((parse_4.minsize_u <= uint8_t(64u)))
            return s_Type(t_u64);

    }
    else
    {
        if ((parse_4.minsize_i <= uint8_t(32u)))
            return s_Type(t_i32);

        if ((parse_4.minsize_i <= uint8_t(64u)))
            return s_Type(t_i64);

    };
    fail(ctx_0, _info_0, _here_0, "Bad int literal."_fu);
}

static s_Type solveNum(const fu_STR& v, const s_Type& type_3)
{
    if (v)
    {
    };
    if (type_3.vtype.canon == t_f32.vtype.canon)
        return s_Type(t_f32);

    return s_Type(t_f64);
}

static s_Type tryRetyping(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_SolvedNode& node_1, const s_Type& expect)
{
    return ((node_1.kind == "int"_fu) ? solveInt(ctx_0, _info_0, _here_0, node_1.value, expect) : ((node_1.kind == "real"_fu) ? solveNum(node_1.value, expect) : s_Type{}));
}

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline constexpr int F_MUT = (1 << 16);
                                #endif

static bool trySolveTypeParams(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Node& node_1, s_Type&& type_3, fu_MAP<fu_STR, s_Type>& typeParams)
{
    if (node_1.kind == "call"_fu)
    {
        const fu_VEC<s_Node>& items_5 = node_1.items;
        if (items_5.size())
        {
            if (items_5.size() == 1)
            {
                s_Type t = ((node_1.value == "&"_fu) ? tryClear_ref(type_3) : ((node_1.value == "&mut"_fu) ? tryClear_mutref(type_3) : ((node_1.value == "[]"_fu) ? tryClear_array(type_3) : fail(ctx_0, _info_0, _here_0, "TODO trySolveTypeParams unary call"_fu))));
                if (!t)
                    return false;

                const s_Node* _0;
                return trySolveTypeParams(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, (*(_0 = &(items_5[0])) ? *_0 : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type(t), typeParams);
            }
            else if (items_5.size() == 2)
            {
                if (node_1.value == "Map"_fu)
                {
                    s_MapFields kv = tryClear_map(type_3);
                    if (!kv)
                        return false;

                    const s_Node* _1;
                    const s_Node* _2;
                    return trySolveTypeParams(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, (*(_1 = &(items_5[0])) ? *_1 : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type(kv.key), typeParams) && trySolveTypeParams(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, (*(_2 = &(items_5[1])) ? *_2 : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type(kv.value), typeParams);
                };
            };
        }
        else
            return isAssignable(Scope_lookupType(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, node_1), type_3);

    }
    else if (node_1.kind == "typeparam"_fu)
    {
        const fu_STR& id_2 = (node_1.value ? node_1.value : fail(ctx_0, _info_0, _here_0, fu_STR{}));
        s_Type* _3;
        s_Type& _param = (*(_3 = &(typeParams.upsert(id_2))) ? *_3 : *_3 = s_Type{});
        if (_param)
        {
            s_Type inter = type_trySuper(_param, type_3);
            if (!inter)
                return false;

            type_3 = inter;
        };
        _param = clear_refs(s_Type(type_3));
        return true;
    }
    else if ((node_1.kind == "arrlit"_fu) && (node_1.items.size() == 1))
    {
        s_Type t = tryClear_sliceable(type_3);
        const s_Node* _4;
        return t && trySolveTypeParams(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, (*(_4 = &(node_1.items[0])) ? *_4 : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type(t), typeParams);
    };
    fail(ctx_0, _info_0, _here_0, "TODO trySolveTypeParams fallthrough"_fu);
}

inline static fu_STR mangleArguments_FnNW(fu_VEC<s_SolvedNode>& args_1)
{
    fu_STR mangle {};
    for (int i = 0; i < args_1.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(args_1.mutref(i).type);
    };
    return mangle;
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

static s_Type evalTypeParam(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const fu_STR& id_2, const fu_MAP<fu_STR, s_Type>& typeParams)
{
    s_Type _0 {};
    return (_0 = s_Type(typeParams[id_2])) ? static_cast<s_Type&&>(_0) : (_0 = Scope_lookupType(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, ("$"_fu + (id_2 ? id_2 : fail(ctx_0, _info_0, _here_0, "Falsy type param id."_fu))), 0)) ? static_cast<s_Type&&>(_0) : fail(ctx_0, _info_0, _here_0, (("No type param `$"_fu + id_2) + "` in scope."_fu));
}

static bool evalTypePattern(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, fu_MAP<fu_STR, s_Type>& typeParams)
{
    if (node_1.kind == "and"_fu)
    {
        for (int i = 0; i < node_1.items.size(); i++)
        {
            if (!evalTypePattern(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items[i], typeParams))
                return false;

        };
        return true;
    }
    else if (node_1.kind == "or"_fu)
    {
        for (int i = 0; i < node_1.items.size(); i++)
        {
            if (evalTypePattern(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items[i], typeParams))
                return true;

        };
        return false;
    }
    else if (node_1.kind == "typeassert"_fu)
    {
        const s_Node* _0;
        const s_Node& left_1 = (*(_0 = &(node_1.items[0])) ? *_0 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
        const s_Node* _1;
        const s_Node& right_1 = (*(_1 = &(node_1.items[1])) ? *_1 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
        if ((left_1.kind == "typeparam"_fu) && (right_1.kind == "typetag"_fu))
            return type_has(evalTypeParam(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, left_1.value, typeParams), (right_1.value ? right_1.value : fail(ctx_0, _info_0, _here_0, "Falsy type tag."_fu)));
        else
        {
            s_Type actual = evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, left_1, typeParams).type;
            return trySolveTypeParams(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, right_1, s_Type(actual), typeParams);
        };
    };
    fail(ctx_0, _info_0, _here_0, (((("TODO evalTypePattern fallthrough: "_fu + node_1.kind) + "("_fu) + node_1.items.size()) + ")"_fu));
}

static const s_Target& checkStruct(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const s_Type& type_4)
{
    const s_Target& t = lookupStruct(type_4, module_0, ctx_0).target;
    return (GET(ctx_0, module_0, _scope_0, t).type == type_4) ? t : (*(const s_Target*)fu::NIL);
}

                                #ifndef DEFt_pairs_qKe2
                                #define DEFt_pairs_qKe2
inline void pairs_qKe2(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, fu_VEC<s_ScopeItem>& res_0, const fu_MAP<fu_STR, s_Type>& a, int)
{
    const fu_VEC<fu_STR>& k = a.m_keys;
    const fu_VEC<s_Type>& v = a.m_values;
    for (int i = 0; i < k.size(); i++)
    {
        const fu_STR& id_2 = k[i];
        const s_Type& type_3 = v[i];
        fu_STR name_3 = ("$"_fu + id_2);
        s_Target _0 {};
        const s_Target target_5 = ((_0 = s_Target((isStruct(type_3) ? checkStruct(ctx_0, module_0, _scope_0, type_3) : (*(const s_Target*)fu::NIL)))) ? _0 : Scope_Typedef(_scope_0, (*(const fu_STR*)fu::NIL), type_3, 0, s_Template{}, ("$"_fu + id_2), 0u, module_0));
        Scope_set(res_0, name_3, target_5, false);
    };
}
                                #endif

static fu_VEC<s_ScopeItem> intoScopeItems(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const fu_MAP<fu_STR, s_Type>& typeParams)
{
    fu_VEC<s_ScopeItem> res {};
    pairs_qKe2(ctx_0, module_0, _scope_0, res, typeParams, 0);
    return res;
}

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline constexpr int F_ARG = (1 << 9);
                                #endif

static s_Type tryGetArgSpecType(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, const fu_VEC<s_ScopeItem>& extra_items_1_0, const fu_STR& id_2)
{
    fu_STR param = ("$"_fu + id_2);
    for (int i_1 = 0; i_1 < extra_items_1_0.size(); i_1++)
    {
        const s_ScopeItem& m = extra_items_1_0[i_1];
        if (m.id == param)
        {
            s_Overload o = GET(ctx_0, module_0, _scope_0, target(m));
            if (!(o.kind == "type"_fu))
                fail(ctx_0, _info_0, _here_0, (((((("tryGetArgSpecType: Not a typeparam: `"_fu + o.kind) + ":"_fu) + param) + "("_fu) + o.max) + ")`."_fu));

            return static_cast<s_Type&&>(o.type);
        };
    };
    return s_Type{};
}

                                #ifndef DEF_F_REF
                                #define DEF_F_REF
inline constexpr int F_REF = (1 << 22);
                                #endif

static s_SolvedNode solveLetLike_dontTouchScope(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, int& _notes_0, const s_TokenIdx& token_2, const fu_STR& id_2, int flags_4, s_SolvedNode&& init, s_Type&& annot, const s_Type& specType, const bool deadcode_on_never)
{
    if (!(annot || init.type))
        fail(ctx_0, _info_0, _here_0, (("Variable declarations without type annotations must be initialized: `"_fu + id_2) + "`."_fu));

    if (annot && init.type)
    {
        if (specType)
        {
            if (is_mutref(specType) && !is_mutref(init.type))
                annot = clear_mutref(s_Type(annot));

            if (!isAssignable(annot, init.type))
                init = s_SolvedNode{};

        };
        if (init.type)
        {
            checkAssignable(ctx_0, _info_0, _here_0, annot, init.type, "Type annotation does not match init expression"_fu, id_2, "="_fu);
            annot.lifetime = init.type.lifetime;
        };
    };
    const bool killref = is_ref2temp(init.type);
    if (deadcode_on_never && is_never(init.type))
    {
        _notes_0 |= N_DeadLet;
        return static_cast<s_SolvedNode&&>(init);
    };
    if (flags_4 & F_REF)
    {
        if (!(is_mutref(init.type) || (is_never(init.type) && annot) || (!init && (flags_4 & F_ARG))))
            fail(ctx_0, _info_0, _here_0, ((("`ref` variables must be initialized to a mutable reference: `"_fu + id_2) + "`"_fu) + (init.type ? (" = "_fu + humanizeType(init.type)) : "."_fu)));

        if (killref)
            fail(ctx_0, _info_0, _here_0, "`ref` varibles cannot bind to temporaries."_fu);

    };
    s_Type t_let = (annot ? (((flags_4 & F_ARG) && !(flags_4 & F_MUT)) ? add_ref(s_Type(annot), Lifetime_temporary()) : s_Type(annot)) : ((is_mutref(init.type) || (flags_4 & F_MUT) || killref) ? (((flags_4 & F_REF) && !killref) ? s_Type(init.type) : ((USE_ref_to_mutref && !(flags_4 & F_MUT) && !killref) ? clear_mutref(s_Type(init.type)) : clear_refs(s_Type(init.type)))) : (((flags_4 & F_ARG) && !(flags_4 & F_MUT)) ? add_ref(s_Type(init.type), Lifetime_temporary()) : s_Type(init.type))));
    if (is_mutref(t_let))
        flags_4 |= F_REF;

    if (init)
        maybeCopyOrMove(ctx_0, _info_0, _here_0, _notes_0, init, t_let, false);

    return s_SolvedNode { "let"_fu, int(flags_4), fu_STR(id_2), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { s_SolvedNode{}, s_SolvedNode(init) } }, s_TokenIdx(token_2), s_Type(t_let), s_Target{} };
}

static s_SolvedNode solveLetLike_dontTouchScope(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, const s_Type& specType, const bool deadcode_on_never)
{
    const s_Node& n_annot = node_1.items[LET_TYPE];
    s_Type annot = (specType ? s_Type(specType) : (n_annot ? evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, n_annot, fu_MAP<fu_STR, s_Type>{}).type : s_Type{}));
    if (annot && (node_1.flags & F_REF))
        annot = add_mutref(s_Type(annot), Lifetime_temporary());

    const s_Node& n_init = node_1.items[LET_INIT];
    s_SolvedNode init = (n_init ? solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, n_init, annot, bool{}, 0) : s_SolvedNode{});
    return solveLetLike_dontTouchScope(ctx_0, _info_0, _here_0, _notes_0, node_1.token, node_1.value, int(node_1.flags), s_SolvedNode(init), s_Type(annot), specType, deadcode_on_never);
}

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline constexpr int F_SHADOW = (1 << 23);
                                #endif

                                #ifndef DEF_F_USING
                                #define DEF_F_USING
inline constexpr int F_USING = (1 << 18);
                                #endif

static s_SolvedNode createEmpty(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const fu_STR& kind_3, const s_Type& type_3, const s_Target& target_5)
{
    return s_SolvedNode { fu_STR(kind_3), 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx((_here_0 ? _here_0 : fail(ctx_0, _info_0, _here_0, fu_STR{}))), s_Type(type_3), s_Target(target_5) };
}

                                #ifndef DEFt_each_j68I
                                #define DEFt_each_j68I
inline void each_j68I(s_ScopeMemo& _root_scope_0, const fu_STR& id_2_0, int& autoshadow_0, int& id_clashes_0, fu_VEC<s_ScopeItem>& items_5, fu_VEC<s_ScopeSkip>& scope_skip_1, int, const int start_1)
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
            s_ScopeItem& item = items_5.mutref(i_1);
            int& index_2 = i_1;
            const bool root_2 = (index_2 <= _root_scope_0.items_len);
            if (item.id == id_2_0)
            {
                if (!root_2)
                    autoshadow_0++;

                id_clashes_0++;
            };
        };
        i0 = ss.end;
    };
}
                                #endif

static s_Overload fnd(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const int index_2)
{
    return GET(ctx_0, module_0, _scope_0, s_Target { int(module_0.modid), int(index_2) });
}

static s_Lifetime Lifetime_test(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_CurrentFn& _current_fn_0, const s_Lifetime& lifetime_1, const bool tempsOK)
{
    if (SELF_TEST)
    {
        const s_Target current_fn { _current_fn_0.out.target };
        s_Overload debug_2 = (current_fn ? GET(ctx_0, module_0, _scope_0, current_fn) : s_Overload{});
        if (debug_2)
        {
        };
        if (!lifetime_1.uni0n.size())
            fail(ctx_0, _info_0, _here_0, "Lifetime_test: no region set."_fu);

        s_Region _last {};
        for (int i = 0; i < lifetime_1.uni0n.size(); i++)
        {
            const s_Region& region = lifetime_1.uni0n[i];

            {
                if (!(!i || (region > _last)))
                    fail(ctx_0, _info_0, _here_0, "Lifetime_test: not a sorted set"_fu);

                _last = region;
            };
            if (Region_isArg(region))
                continue;

            if (Region_isTemp(region))
            {
                if (!((i == (lifetime_1.uni0n.size() - 1)) && tempsOK))
                    fail(ctx_0, _info_0, _here_0, "Lifetime_test: unexpected temporary."_fu);

                continue;
            };
            const int index_2 = Region_toLocalIndex(region);
            s_Overload local = (index_2 ? fnd(ctx_0, module_0, _scope_0, index_2) : s_Overload{});
            const int local_of_2 = local.local_of;
            if (local_of_2)
            {
                int frame = current_fn.index;
                while (local_of_2 != frame)
                {
                    if (!((local_of_2 <= frame)))
                        fail(ctx_0, _info_0, _here_0, (((((("Lifetime_test: `"_fu + local.name) + "` is not a local: `"_fu) + fnd(ctx_0, module_0, _scope_0, local_of_2).name) + "` does not contain "_fu) + (frame ? (("`"_fu + fnd(ctx_0, module_0, _scope_0, frame).name) + "`"_fu) : "global scope"_fu)) + ((current_fn.index != frame) ? ((", testing from `"_fu + fnd(ctx_0, module_0, _scope_0, current_fn.index).name) + "`."_fu) : "."_fu)));

                    if (!(frame))
                        fail(ctx_0, _info_0, _here_0, "Lifetime_test: climbed up to root"_fu);

                    frame = fnd(ctx_0, module_0, _scope_0, frame).local_of;
                };
            };
        };
    };
    return s_Lifetime(lifetime_1);
}

static s_Lifetime Lifetime_fromBinding(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_CurrentFn& _current_fn_0, const s_Target& target_5, const int local_of_2, const int flags_4, const s_Type& type_3)
{
    if (!(target_5.modid == module_0.modid))
        fail(ctx_0, _info_0, _here_0, "not from this module"_fu);

    if (!local_of_2)
        return Lifetime_static();

    const int isArg = (flags_4 & F_ARG);
    if (!isArg && is_ref(type_3))
        return Lifetime_test(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, type_3.lifetime, bool{});

    const int index_2 = target_5.index;
    const s_Region region = ((isArg && is_ref(type_3)) ? Region_fromArgIndex(index_2) : Region_fromLocalIndex(index_2));
    return Lifetime_test(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, s_Lifetime { fu_VEC<s_Region> { fu_VEC<s_Region>::INIT<1> { s_Region(region) } } }, bool{});
}

static s_Target Binding(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, s_CurrentFn& _current_fn_0, const fu_STR& id_2, s_Type&& type_3, const int flags_4, bool& shadows, const s_Target& reuse)
{
    fu_STR name_3 { id_2 };
    const int local_of_2 = _current_fn_0.out.target.index;
    if (_root_scope_0)
    {
        int autoshadow = 0;
        int id_clashes = 0;
        each_j68I(_root_scope_0, id_2, autoshadow, id_clashes, _scope_0.items, _ss_0.declash, 0, 0);
        if (id_clashes)
            name_3 += ("_"_fu + id_clashes);

        if (OPTI_autoshadow && local_of_2 && !autoshadow)
            shadows = true;

    };
    const s_Target target_5 = (reuse ? s_Target(reuse) : Scope_create(_scope_0, "var"_fu, name_3, s_Type{}, flags_4, 0, 0, fu_VEC<s_Argument>{}, s_SolvedNode{}, local_of_2, 0u, fu_VEC<s_ScopeItem>{}, module_0));
    if (SELF_TEST && reuse)
    {
        s_Overload preexisting = GET(ctx_0, module_0, _scope_0, reuse);
        if (!((preexisting.name == name_3) && (preexisting.kind == "var"_fu) && (preexisting.flags == flags_4) && (preexisting.local_of == local_of_2)))
            fail(ctx_0, _info_0, _here_0, "Binding reuse mismatch."_fu);

    };
    s_Overload& overload = GET_mut(module_0, _scope_0, target_5);

    {
        s_Lifetime lifetime_1 = Lifetime_fromBinding(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, target_5, local_of_2, flags_4, type_3);
        if (flags_4 & F_ARG)
            type_3.lifetime = s_Lifetime{};

        overload.type = ((flags_4 & F_MUT) ? add_mutref(s_Type(type_3), lifetime_1) : add_ref(s_Type(type_3), lifetime_1));
    };
    return target_5;
}

static void solveLet(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, s_CurrentFn& _current_fn_0, s_SolvedNode& out_1, const fu_STR& id_2, const s_Target& reuse, const bool deadcode_on_never)
{
    if (out_1.kind != "let"_fu)
    {
        if (SELF_TEST)
        {
            if (!(deadcode_on_never && is_never(out_1.type)))
                fail(ctx_0, _info_0, _here_0, (((("solveLet: results in a `"_fu + out_1.kind) + ": "_fu) + id_2) + "`."_fu));

        };
        return;
    };
    if (!(!is_ref(out_1.type) || out_1.type.lifetime))
        fail(ctx_0, _info_0, _here_0, (("solveLet: ref without lifetime: `"_fu + id_2) + "`."_fu));

    bool shadows = !!(out_1.flags & F_SHADOW);
    fu_STR cleanID = ((out_1.flags & F_COMPOUND_ID) ? fu::slice(id_2, 0, fu::lfind(id_2, std::byte('.'), 0)) : fu_STR{});
    const fu_STR& id_3 = (cleanID ? cleanID : id_2);
    if (!X_unpackAddrOfFnBinding(_scope_0.items, id_3, out_1.type, shadows))
    {
        if (OPTI_dedupe_vars && !(out_1.flags & F_ARG))
        {
            s_SolvedNode init { out_1.items[LET_INIT] };
            if ((init.kind == "call"_fu) && !init.items)
            {
                const s_Target& target_5 = init.target;
                s_Overload other = GET(ctx_0, module_0, _scope_0, target_5);
                if (other.kind == "var"_fu)
                {
                    if (isAssignable(other.type, out_1.type))
                    {
                        Scope_set(_scope_0, id_3, target_5, shadows);
                        if (out_1.flags & F_USING)
                            _scope_0.usings.push(target_5);

                        out_1 = createEmpty(ctx_0, _info_0, _here_0, "empty"_fu, t_void, s_Target{});
                        return;
                    };
                };
            };
        };
        const s_Target target_5 { (out_1.target = Binding(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _current_fn_0, id_3, s_Type(out_1.type), out_1.flags, shadows, reuse)) };
        s_Overload& overload = GET_mut(module_0, _scope_0, target_5);
        if (!overload.local_of)
            overload.solved = out_1;

        Scope_set(_scope_0, id_3, target_5, shadows);
        if (out_1.flags & F_USING)
            _scope_0.usings.push(target_5);

    };
}

static s_SolvedNode solveLet(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, const s_Type& specType, const s_Target& reuse, const bool deadcode_on_never)
{
    s_SolvedNode out_1 = solveLetLike_dontTouchScope(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, specType, deadcode_on_never);
    fu_STR id_2 { out_1.value };
    solveLet(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _current_fn_0, out_1, id_2, reuse, deadcode_on_never);
    return out_1;
}

                                #ifndef DEFt_only_ORsa
                                #define DEFt_only_ORsa
inline s_Region& only_ORsa(fu_VEC<s_Region>& s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_Lifetime Lifetime_fromNative(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, fu::view<s_Node> sig, fu::view<s_SolvedNode> args_1, const s_Type& actual)
{
    if (!((sig.size() + FN_RET_BACK) == args_1.size()))
        fail(ctx_0, _info_0, _here_0, "sig.len != args.len"_fu);

    const s_Node& ret = sig[(sig.size() + FN_RET_BACK)];
    bool mutref = ((ret.kind == "call"_fu) && (ret.items.size() == 1) && (ret.value == "&mut"_fu));
    s_Type res {};
    for (; ; )
    {
        for (int i = 0; i < args_1.size(); i++)
        {
            const s_Node& inArg = sig[i];
            const s_Node& annot = inArg.items[LET_TYPE];
            if ((annot.items.size() == 1) && (((annot.kind == "call"_fu) && ((!mutref && (annot.value == "&"_fu)) || (annot.value == "&mut"_fu))) || (!mutref && (annot.kind == "arrlit"_fu))))
            {
                if (res)
                    fail(ctx_0, _info_0, _here_0, "Ambiguous __native lifetime."_fu);

                const s_SolvedNode& arg = args_1[i];
                s_Overload o = GET(ctx_0, module_0, _scope_0, arg.target);
                res = o.type;
                if (!(res.lifetime))
                    fail(ctx_0, _info_0, _here_0, "Missing arg lifetime."_fu);

            };
        };
        if (!mutref || res.lifetime)
            break;

        mutref = false;
    };
    if (!(Region_isArg(only_ORsa(res.lifetime.uni0n))))
        fail(ctx_0, _info_0, _here_0, "Non-single-arg __native lifetime."_fu);

    if (!is_mutref(actual) && !isAssignable(actual, res))
        return Lifetime_makeShared(res.lifetime);

    return static_cast<s_Lifetime&&>(res.lifetime);
}

inline static fu_STR mangleArguments_Nwkr(fu::view_mut<s_SolvedNode> args_1)
{
    fu_STR mangle {};
    for (int i = 0; i < args_1.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(args_1.mutref(i).type);
    };
    return mangle;
}

static fu_STR ANON(int& _anons_0)
{
    return "0"_fu + _anons_0++;
}

static s_Template createTemplate(s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, const s_Node& node_1)
{
    return s_Template { s_Node(node_1), fu_VEC<int>((!_current_fn_0 ? _scope_0.imports : (*(const fu_VEC<int>*)fu::NIL))), (_current_fn_0 ? Scope_snap(_scope_0, _helpers_0) : s_ScopeMemo{}), s_ScopeSkipMemos((_current_fn_0 ? _ss_0 : (*(const s_ScopeSkipMemos*)fu::NIL))) };
}

                                #ifndef DEF_F_REST_ARG
                                #define DEF_F_REST_ARG
inline constexpr int F_REST_ARG = (1 << 26);
                                #endif

static s_Overload GET_local(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const int index_2)
{
    return GET(ctx_0, module_0, _scope_0, s_Target { int(module_0.modid), int(index_2) });
}

                                #ifndef DEF_SS_UPDATED
                                #define DEF_SS_UPDATED
inline constexpr unsigned SS_UPDATED = (0x1u << 4u);
                                #endif

static void updateScope(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_CurrentFn& _current_fn_0, bool isInline_0, s_Target& target_5_0, const s_CurrentFn& out_2, const s_Type& retval)
{
    const fu_VEC<s_SolvedNode>& items_6 = out_2.out.items;
    const int N = (items_6.size() + FN_RET_BACK);
    int min_2 = 0;
    int max_2 = N;
    fu_VEC<s_Argument> args_2 {};
    for (int i = 0; i < N; i++)
    {
        const s_SolvedNode& argNode = items_6[i];
        if (!(argNode.kind == "let"_fu))
            fail(ctx_0, _info_0, _here_0, fu_STR{});

        fu_STR name_3 { argNode.value };
        fu_STR autocall_1 = ((argNode.flags & F_COMPOUND_ID) ? Autocall_splice(ctx_0, _info_0, _here_0, name_3) : fu_STR{});
        const bool isImplicit = !!(argNode.flags & F_IMPLICIT);
        s_Argument arg = s_Argument { fu_STR(name_3), fu_STR(autocall_1), s_Type((argNode.type ? argNode.type : fail(ctx_0, _info_0, _here_0, fu_STR{}))), s_SolvedNode((!isImplicit ? argNode.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), int(argNode.flags) };
        if (!arg.dEfault && !isImplicit)
            min_2++;

        if (arg.flags & F_REST_ARG)
            max_2 = int(0x7fffffffu);

        args_2.push(arg);
    };
    s_Overload& overload = GET_mut(module_0, _scope_0, target_5_0);
    s_Type retval0 { overload.type };
    const int args_len0 = overload.args.size();
    const int closure0 = overload.closes_over.size();
    overload.min = min_2;
    overload.max = max_2;
    overload.args = args_2;
    overload.type = retval;
    if (isInline_0)
        return;

    if (!(retval))
        fail(ctx_0, _info_0, _here_0, "FnDecl_update: no return type."_fu);

    if (is_ref(retval))
        Lifetime_test(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, retval.lifetime, bool{});

    overload.flags = out_2.out.flags;
    overload.solved = out_2.out;

    {
        fu_VEC<int> closes_over_1 {};
        for (int i = 0; i < out_2.locals_used.size(); i++)
        {
            s_Overload o = GET_local(ctx_0, module_0, _scope_0, out_2.locals_used[i]);
            if (o.local_of != target_5_0.index)
                closes_over_1 += out_2.locals_used[i];

        };
        overload.closes_over = closes_over_1;
    };
    if (overload.used_by)
    {
        if ((args_len0 != overload.args.size()) || (closure0 != overload.closes_over.size()) || !(retval0 == overload.type))
            overload.status |= SS_UPDATED;

    };
}

inline static fu_STR mangleArguments_IFrN(const fu_VEC<s_Argument>& args_1)
{
    fu_STR mangle {};
    for (int i = 0; i < args_1.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(args_1[i].type);
    };
    return mangle;
}

                                #ifndef DEF_HM_CanReturn
                                #define DEF_HM_CanReturn
inline constexpr short HM_CanReturn = (short(1) << short(1));
                                #endif

                                #ifndef DEF_F_LAMBDA
                                #define DEF_F_LAMBDA
inline constexpr int F_LAMBDA = (1 << 30);
                                #endif

                                #ifndef DEF_HM_Lambda
                                #define DEF_HM_Lambda
inline constexpr short HM_Lambda = (short(1) << short(4));
                                #endif

static void lazySolveEnd(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, s_Overload& o)
{
    fu_VEC<int> reopen {};
    const int parent = o.local_of;
    if (o.status & SS_UPDATED)
    {
        o.status &= ~SS_UPDATED;
        for (int i = 0; i < o.used_by.size(); i++)
        { {
            int index_2 = o.used_by[i];
            for (; ; )
            {
                s_Overload& o_1 = GET_mut(module_0, _scope_0, s_Target { int(module_0.modid), int(index_2) });
                if ((o_1.status & (SS_DID_START | SS_DIRTY)) != SS_DID_START)
                    goto L_042;

                if (!(o_1.status & SS_FINALIZED))
                {
                    o_1.status |= SS_DIRTY;
                    goto L_042;
                };
                const int up = o_1.local_of;
                if (up != parent)
                {
                    if (!(up > parent))
                        fail(ctx_0, _info_0, _here_0, "lazySolveEnd: about to climb up the wrong tree."_fu);

                    index_2 = up;
                    continue;
                };
                _notes_0 |= ((o_1.kind == "type"_fu) ? N_TypeReopen : N_FnReopen);
                o_1.status &= ~((SS_DID_START | SS_DIRTY) | SS_FINALIZED);
                reopen += index_2;
                goto L_042;
            };
          } L_042:;
        };
    };
    if (!(o.status & SS_DIRTY))
        o.status |= SS_FINALIZED;
    else
    {
        if (o.status & SS_FINALIZED)
            fail(ctx_0, _info_0, _here_0, "Stray SS_FINALIZED."_fu);

        o.status &= ~(SS_DID_START | SS_DIRTY);
        _notes_0 |= ((o.kind == "type"_fu) ? N_TypeResolve : N_FnResolve);
    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t = s_Target { int(module_0.modid), int(reopen.mutref(i)) };
        lazySolveStart(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, t, GET(ctx_0, module_0, _scope_0, t));
    };
}

static s_Target doTrySpecialize(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Target& into, const s_Target& overloadIdx, fu_VEC<s_SolvedNode>&& args_1, fu_STR&& mangle, fu::view<int> reorder, const bool use_reorder, const fu_VEC<fu_VEC<s_Target>>& conversions, const int REST_START, const s_Type& REST_TYPE)
{
    if (use_reorder)
    {
        fu_VEC<s_SolvedNode> reordered {};
        for (int i = 0; i < reorder.size(); i++)
        {
            const int callsiteIndex = reorder[i];
            reordered.push(((callsiteIndex >= 0) && (callsiteIndex < args_1.size()) ? args_1.mutref(callsiteIndex) : (*(const s_SolvedNode*)fu::NIL)));
        };
        std::swap(args_1, reordered);
    };
    for (int i = 0; i < conversions.size(); i++)
    {
        const fu_VEC<s_Target>& c = conversions[i];
        if (c)
        {
            s_SolvedNode& a = args_1.mutref(i);
            a.kind = "__conv"_fu;
            a.type = GET(ctx_0, module_0, _scope_0, last_mnBR(c)).type;
        };
    };
    if (REST_TYPE)
    {
        s_SolvedNode& a = args_1.mutref(REST_START);
        a.kind = "__rest"_fu;
        a.type = REST_TYPE;
    };
    fu_VEC<s_SolvedNode> args00 { args_1 };
    fu_STR mangle00 { mangle };
    const s_Target SPECFAIL = s_Target { -1, 0 };
    s_Overload original = GET(ctx_0, module_0, _scope_0, (overloadIdx ? overloadIdx : into ? into : fail(ctx_0, _info_0, _here_0, fu_STR{})));
    s_Template template_1 { original.tEmplate };
    int parent_idx = original.local_of;
    for (int i = 0; i < args_1.size(); i++)
    {
        s_Type arg_t { args_1.mutref(i).type };
        if (type_isAddrOfFn(arg_t))
            unpackAddrOfFn_yVJh(ctx_0, module_0, _scope_0, template_1, parent_idx, arg_t.vtype.canon, 0);

    };
    const bool isInline = !!(template_1.node.flags & F_INLINE);
    if (!into && !isInline)
        setSpec(ctx_0, module_0, _info_0, _here_0, _scope_0, _specs_0, isInline, mangle, SPECFAIL, true);

    s_Target target_5 {};

    {
        const s_ScopeMemo scope0 = Scope_snap(_scope_0, _helpers_0);
        s_ScopeSkipMemos ss0 { _ss_0 };
        fu_DEFER(
        {
            Scope_pop(_scope_0, scope0, _helpers_0);
            _ss_0 = ss0;
        });
        ScopeSkip_setup(ctx_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, template_1, scope0, isInline);
        fu_VEC<s_Node> items_5 { template_1.node.items };
        s_Node& n_fn = template_1.node;
        if (!(n_fn.kind == "fn"_fu))
            fail(ctx_0, _info_0, _here_0, "n_fn not a `fn`."_fu);

        bool ok = true;
        fu_MAP<fu_STR, s_Type> typeParams {};
        if (!into)
        {
            fu_STR kind_3 { template_1.node.kind };
            const int numArgs = ((kind_3 == "fn"_fu) ? (items_5.size() + FN_RET_BACK) : fail(ctx_0, _info_0, _here_0, ("TODO numArgs for template:"_fu + kind_3)));
            fu_VEC<int> retypeIndices {};
            bool remangle = false;
            for (int pass_retype = 0; (pass_retype == 0) || ((pass_retype == 1) && retypeIndices); pass_retype++)
            {
                for (int i = 0; i < numArgs; i++)
                {
                    if (pass_retype)
                    {
                        if (!fu::has(retypeIndices, i))
                            continue;

                    };
                    const s_SolvedNode& inValue = ((args_1.size() > i) ? args_1.mutref(i) : (*(const s_SolvedNode*)fu::NIL));
                    s_Type inType { inValue.type };
                    const s_Node* _0;
                    const s_Node& argNode = (*(_0 = &(items_5[i])) ? *_0 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
                    const s_Node& annot = argNode.items[LET_TYPE];
                    if (CANNOT_definit_mutrefs && is_mutref(inType) && argNode.items[LET_INIT])
                        inType = clear_mutref(s_Type(inType));

                    if (couldRetype(inValue))
                    {
                        s_Type* _1;
                        s_Type paramType = ((annot.kind == "typeparam"_fu) ? s_Type((*(_1 = &(typeParams.upsert(annot.value))) ? *_1 : *_1 = s_Type{})) : ((annot.kind == "call"_fu) && !annot.items ? Scope_lookupType(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, annot) : s_Type{}));
                        if (paramType)
                        {
                            s_Type retype = tryRetyping(ctx_0, _info_0, _here_0, inValue, paramType);
                            if (retype && (retype.vtype.canon != inType.vtype.canon))
                            {
                                inType = (args_1.mutref(i).type = retype);
                                remangle = true;
                            };
                        }
                        else if (!pass_retype)
                        {
                            retypeIndices.push(i);
                            continue;
                        };
                    };
                    if (!(argNode.kind == "let"_fu))
                        fail(ctx_0, _info_0, _here_0, fu_STR{});

                    if (inType)
                    {
                        const s_Type& exactType = original.args[i].type;
                        if (exactType)
                        {
                            args_1.mutref(i).type = exactType;
                            continue;
                        };
                        const fu_STR& argName = (argNode.value ? argNode.value : fail(ctx_0, _info_0, _here_0, fu_STR{}));
                        s_Type* _2;
                        s_Type& argName_typeParam = (*(_2 = &(typeParams.upsert(argName))) ? *_2 : *_2 = s_Type{});
                        if (argNode.flags & F_MUT)
                            inType = clear_refs(s_Type(inType));
                        else
                            inType = add_ref(s_Type(inType), Lifetime_temporary());

                        (!argName_typeParam ? argName_typeParam : fail(ctx_0, _info_0, _here_0, (("Type param name collision with argument: `"_fu + argName) + "`."_fu))) = inType;
                        if (annot)
                        {
                            const bool argOk = (inType && trySolveTypeParams(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, annot, s_Type(inType), typeParams));
                            ok = (ok ? argOk : (*(const bool*)fu::NIL));
                            if (!ok && !remangle)
                                break;

                        };
                    };
                };
            };
            if (remangle && !isInline)
            {
                int _3 {};
                const int start_1 = ((_3 = (fu::lfind(mangle, std::byte(' '), 0) + 1)) ? _3 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
                mangle = (fu::slice(mangle, 0, start_1) + mangleArguments_FnNW(args_1));
                if (mangle00 != mangle)
                {
                    s_Target _4 {};
                    const s_Target preexisting = ((_4 = s_Target(_specs_0[mangle])) ? _4 : s_Target{});
                    if (preexisting)
                    {
                        setSpec(ctx_0, module_0, _info_0, _here_0, _scope_0, _specs_0, isInline, mangle00, preexisting, bool{});
                        return preexisting;
                    };
                    if (!into)
                        setSpec(ctx_0, module_0, _info_0, _here_0, _scope_0, _specs_0, isInline, mangle, SPECFAIL, true);

                };
            };
            if (!ok)
                return SPECFAIL;

            const s_Node* _5;
            const s_Node& body = (*(_5 = &(items_5[(items_5.size() + FN_BODY_BACK)])) ? *_5 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
            if (body.kind == "pattern"_fu)
            {
                fu_MAP<fu_STR, s_Type> undo { typeParams };
                const fu_VEC<s_Node>& branches = body.items;
                bool did_match = false;
                for (int i = 0; i < branches.size(); i++)
                {
                    const s_Node& cond = branches[i].items[0];
                    if (cond && !evalTypePattern(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, cond, typeParams))
                    {
                        typeParams = undo;
                        continue;
                    };
                    const fu_VEC<s_Node>& cons = branches[i].items;
                    fu_VEC<s_Node>& sig = n_fn.items;

                    {
                        const s_Node& n_ret = cons[(cons.size() + FN_RET_BACK)];
                        if (n_ret)
                            sig.mutref((sig.size() + FN_RET_BACK)) = n_ret;

                        const s_Node& n_body = cons[(cons.size() + FN_BODY_BACK)];
                        sig.mutref((sig.size() + FN_BODY_BACK)) = (n_body ? n_body : fail(ctx_0, _info_0, _here_0, "doTrySpec: no case/body."_fu));
                    };
                    did_match = true;
                    break;
                };
                if (!did_match)
                    return SPECFAIL;

            };
        };
        fu_STR mangle0 { mangle };
        fu_VEC<s_ScopeItem> extra_items_1 = (into ? fu_VEC<s_ScopeItem>(original.extra_items) : intoScopeItems(ctx_0, module_0, _scope_0, typeParams));
        target_5 = (into ? s_Target(into) : Scope_create(_scope_0, "_no_kind_yet_"_fu, fu_STR{}, s_Type{}, 0, 0, 0, fu_VEC<s_Argument>{}, s_SolvedNode{}, parent_idx, (SS_DID_START | SS_LAZY), extra_items_1, module_0));
        if (!_current_fn_0.out.target)
            _anons_0 = 0;

        s_CurrentFn out_1 = s_CurrentFn { solved(n_fn, X_addrofTarget(target_5), fu_VEC<s_SolvedNode>{}, target_5), fu_VEC<int>{} };
        const s_ScopeMemo root_scope0 { _root_scope_0 };
        if (!root_scope0)
            _root_scope_0 = scope0;

        std::swap(_current_fn_0, out_1);
        fu_DEFER(
        {
            std::swap(_current_fn_0, out_1);
            _root_scope_0 = root_scope0;
        });
        fu_VEC<s_SolvedNode>& outItems = _current_fn_0.out.items;
        if (into)
            outItems = GET(ctx_0, module_0, _scope_0, into).solved.items;

        fu_VEC<s_Node> inItems { n_fn.items };
        outItems.resize(inItems.size());
        _scope_0.items += extra_items_1;
        const int spec = (template_1.node.flags & F_TEMPLATE);
        for (int i = 0; i < (inItems.size() + FN_RET_BACK); i++)
        {
            s_SolvedNode& preexisting = outItems.mutref(i);
            const s_Target reuse { preexisting.target };
            if (reuse)
            {
                if (!((preexisting.kind == "let"_fu) && (preexisting.flags & F_ARG)))
                    fail(ctx_0, _info_0, _here_0, "__solveFn: arg target reuse: something is looking off."_fu);

            };
            const s_Node& n_arg = inItems[i];
            s_Type specType = (spec ? tryGetArgSpecType(ctx_0, module_0, _info_0, _here_0, _scope_0, extra_items_1, n_arg.value) : s_Type{});
            outItems.mutref(i) = solveLet(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, n_arg, specType, reuse, bool{});
        };
        const s_Node& n_ret = inItems[(inItems.size() + FN_RET_BACK)];
        const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
        if (!(n_body))
            fail(ctx_0, _info_0, _here_0, "solveFn: no body."_fu);

        const bool native = ((n_body.kind == "call"_fu) && (n_body.value == "__native"_fu));
        if (!native)
        {
            if (!(n_body.kind == "block"_fu))
                fail(ctx_0, _info_0, _here_0, (("solveFn: Body not a block: `"_fu + n_body.kind) + "`."_fu));

        };
        s_Type ret_expect_1 = (n_ret ? evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, n_ret, fu_MAP<fu_STR, s_Type>{}).type : s_Type{});
        s_Type ret_seed { (n_ret ? (ret_expect_1 ? ret_expect_1 : fail(ctx_0, _info_0, _here_0, ("falsy ret_expect: "_fu + n_fn.value))) : t_never) };
        if (ret_seed.lifetime)
            ret_seed.lifetime = (native ? Lifetime_fromNative(ctx_0, module_0, _info_0, _here_0, _scope_0, inItems, fu::get_view_mut(_current_fn_0.out.items, 0, (_current_fn_0.out.items.size() + FN_RET_BACK)), ret_seed) : Lifetime_static());
        else if (is_ref(ret_seed))
            fail(ctx_0, _info_0, _here_0, "fn.ret_actual is a ref without a lifetime."_fu);

        const bool firstIteration = !GET(ctx_0, module_0, _scope_0, target_5).solved;
        if (firstIteration)
        {

            {
                fu_STR name_3 { (n_fn.value ? n_fn.value : fail(ctx_0, _info_0, _here_0, "TODO anonymous fns"_fu)) };
                if (spec && !native && !isInline)
                {
                    fu_STR sig = mangleArguments_Nwkr(fu::get_view_mut(outItems, 0, (outItems.size() + FN_RET_BACK)));
                    if (sig)
                    {
                        fu_STR _6 {};
                        fu_STR hash = ((_6 = hash62(sig, 4)) ? static_cast<fu_STR&&>(_6) : fail(ctx_0, _info_0, _here_0, fu_STR{}));
                        name_3 += ("_"_fu + hash);
                    };
                };
                s_Overload& overload = GET_mut(module_0, _scope_0, target_5);
                overload.name = (isInline ? ANON(_anons_0) : fu_STR(name_3));
                overload.kind = (native ? "__native"_fu : (isInline ? "inline"_fu : "fn"_fu));
                overload.tEmplate = (native ? createTemplate(_scope_0, _ss_0, _current_fn_0, _helpers_0, n_body) : s_Template(template_1));
            };
            updateScope(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, isInline, target_5, _current_fn_0, (isInline ? ret_expect_1 : ret_seed));
            if (!into && !isInline)
            {
                int _7 {};
                const int start_1 = ((_7 = (fu::lfind(mangle0, std::byte(' '), 0) + 1)) ? _7 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
                mangle = (fu::slice(mangle0, 0, start_1) + mangleArguments_IFrN(GET(ctx_0, module_0, _scope_0, target_5).args));
                s_Target preexisting {};
                if (mangle0 != mangle)
                {
                    s_Target _8 {};
                    preexisting = ((_8 = s_Target(_specs_0[mangle])) ? _8 : s_Target{});
                    setSpec(ctx_0, module_0, _info_0, _here_0, _scope_0, _specs_0, isInline, mangle0, (preexisting ? preexisting : target_5), bool{});
                };
                const bool nx = (mangle00 != mangle);
                if (nx && (mangle00 != mangle0))
                    setSpec(ctx_0, module_0, _info_0, _here_0, _scope_0, _specs_0, isInline, mangle00, (preexisting ? preexisting : target_5), bool{});

                if (preexisting)
                    return preexisting;

                setSpec(ctx_0, module_0, _info_0, _here_0, _scope_0, _specs_0, isInline, mangle, target_5, nx);
            };
        };
        if (!isInline)
        {
            s_Type retval { ret_seed };
            if (!native)
            {
                s_SolvedNode s_body = solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, n_body, ret_expect_1, target_5.index, short((((HM_Function | HM_CanReturn) | HM_LabelUsed) | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL)))), 0, n_fn.value);
                retval = s_body.type;
                outItems.mutref((outItems.size() + FN_BODY_BACK)) = (s_body ? s_body : fail(ctx_0, _info_0, _here_0, "falsy body"_fu));
            };
            outItems.mutref((outItems.size() + FN_RET_BACK)) = createEmpty(ctx_0, _info_0, _here_0, "empty"_fu, retval, s_Target{});
            updateScope(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, isInline, target_5, _current_fn_0, retval);
        };
    };
    s_Overload& o = GET_mut(module_0, _scope_0, target_5);
    lazySolveEnd(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, o);
    return target_5;
}

                                #ifndef DEF_HM_Struct
                                #define DEF_HM_Struct
inline constexpr short HM_Struct = (short(1) << short(5));
                                #endif

static s_SolvedNode solveMember(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_2)
{
    if (!(node_2.kind == "let"_fu))
        fail(ctx_0, _info_0, _here_0, ("solveStructMembers_1: "_fu + node_2.kind));

    if (node_2.items[LET_INIT] && (node_2.items[LET_INIT].kind != "definit"_fu))
        fail(ctx_0, _info_0, _here_0, ((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node_2.value) + "`."_fu));

    return solveLetLike_dontTouchScope(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_2, s_Type{}, bool{});
}

                                #ifndef DEFt_map_luHt
                                #define DEFt_map_luHt
inline fu_VEC<s_SolvedNode> map_luHt(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, fu_VEC<s_Node>& a, int)
{
    fu_VEC<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, a[i]);

    return res;
}
                                #endif

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline constexpr int F_PUB = (1 << 20);
                                #endif

                                #ifndef DEFt_add_2vji
                                #define DEFt_add_2vji
inline bool add_2vji(fu_VEC<int>& dest, int& item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest.mutref(i) >= item))
        {
            if (dest.mutref(i) != item)
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

                                #ifndef DEFt_add_7gVc
                                #define DEFt_add_7gVc
inline bool add_7gVc(fu_VEC<int>& dest, const int item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest.mutref(i) >= item))
        {
            if (dest.mutref(i) != item)
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

                                #ifndef DEFt_add_DNSI
                                #define DEFt_add_DNSI
inline bool add_DNSI(fu_VEC<int>& dest, const fu_VEC<int>& src_2)
{
    bool some = false;
    for (int i = 0; i < src_2.size(); i++)
        some = (add_7gVc(dest, src_2[i]) || bool(some));

    return some;
}
                                #endif

                                #ifndef DEF_F_MUSTNAME
                                #define DEF_F_MUSTNAME
inline constexpr int F_MUSTNAME = (1 << 19);
                                #endif

static s_SolvedNode __solveStruct(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const bool solve_3, s_Node&& node_1, const s_Target& into)
{
    s_SolvedNode out_1 = solved(node_1, (into ? GET(ctx_0, module_0, _scope_0, into).type : s_Type{}), fu_VEC<s_SolvedNode>{}, into);
    fu_STR origId { node_1.value };
    fu_STR _0 {};
    fu_STR name_3 = (origId ? fu_STR(origId) : _current_fn_0.out.target && (_0 = GET(ctx_0, module_0, _scope_0, _current_fn_0.out.target).name) ? static_cast<fu_STR&&>(_0) : "Anon"_fu);
    if (!out_1.target)
    {
        s_Template template_1 = createTemplate(_scope_0, _ss_0, _current_fn_0, _helpers_0, node_1);
        if (out_1.type)
            fu_ASSERT();

        out_1.type = initStruct(name_3, node_1.flags, SELF_TEST, module_0);
        out_1.target = Scope_Typedef(_scope_0, origId, out_1.type, node_1.flags, template_1, name_3, SS_LAZY, module_0);
    };
    if (!solve_3)
        return out_1;

    GET_mut(module_0, _scope_0, out_1.target).status |= SS_DID_START;
    const int helpers0 = _helpers_0.size();
    fu_DEFER(_helpers_0.shrink(helpers0));
    _helpers_0 += s_Helpers { int((out_1.target.index ? out_1.target.index : fail(ctx_0, _info_0, _here_0, (("solveStruct: no out.target: `"_fu + origId) + "`."_fu)))), fu_STR{}, short(HM_Struct), 0, 0, s_Type{}, s_Type{}, fu_VEC<int>{} };
    fu_VEC<s_Target> structConverts {};
    fu_VEC<int> structImports {};
    fu_VEC<s_SolvedNode> members = map_luHt(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items, 0);

    {
        fu_VEC<s_ScopeItem>& innerScope = lookupStruct_mut(out_1.type.vtype.canon, module_0).items;
        if (!innerScope && members)
        {
            fu_VEC<s_Argument> args_1 = fu_VEC<s_Argument> { fu_VEC<s_Argument>::INIT<1> { s_Argument { "this"_fu, fu_STR{}, despeculateStruct(s_Type(out_1.type)), s_SolvedNode{}, 0 } } };
            for (int i = 0; i < members.size(); i++)
            {
                fu_STR id_2 { node_1.items.mutref(i).value };
                const s_Target target_5 = Scope_create(_scope_0, "field"_fu, (id_2 ? id_2 : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type{}, F_PUB, 1, 1, args_1, s_SolvedNode{}, 0, 0u, fu_VEC<s_ScopeItem>{}, module_0);
                Scope_set(innerScope, id_2, target_5, false);
            };
            _field_items_0 += innerScope;
        };
        if (!(innerScope.size() == members.size()))
            fail(ctx_0, _info_0, _here_0, (((((((("solveStructMembers_3: field lens mismatch: "_fu + innerScope.size()) + " vs "_fu) + members.size()) + "/"_fu) + node_1.items.size()) + ": `struct "_fu) + name_3) + "`."_fu));

        for (int i = 0; i < innerScope.size(); i++)
        {
            s_ScopeItem item { innerScope[i] };
            const s_SolvedNode& member = members[i];
            if (!(item.id == member.value))
                fail(ctx_0, _info_0, _here_0, "solveStructMembers_4: field id mismatch."_fu);

            s_Overload& field = GET_mut(module_0, _scope_0, target(item));
            field.type = member.type;
            if (member.flags & F_USING)
            {
                structConverts.push(target(item));
                if (field.type.vtype.modid != module_0.modid)
                    add_2vji(structImports, field.type.vtype.modid);

                add_DNSI(structImports, lookupTypeImports(field.type, module_0, ctx_0));
            };
        };
    };

    {
        int commonQuals = -1;
        for (int i = 0; i < members.size(); i++)
            commonQuals &= members[i].type.vtype.quals;

        const int quals0 = out_1.type.vtype.quals;
        const int quals1 = (out_1.type.vtype.quals &= commonQuals);

        {
            s_Struct& s = lookupStruct_mut(out_1.type.vtype.canon, module_0);
            s.target = (out_1.target ? out_1.target : fail(ctx_0, _info_0, _here_0, "No struct/out.target."_fu));
            s.converts = structConverts;
            s.imports = structImports;
            if (!(GET(ctx_0, module_0, _scope_0, s.target).status & SS_DID_START))
                fail(ctx_0, _info_0, _here_0, "Setting stuff but missing SS_DID_START."_fu);

        };
        const int max_2 = members.size();
        int min_2 = 0;
        fu_VEC<s_Argument> args_1 {};
        for (int i = 0; i < members.size(); i++)
        {
            const s_SolvedNode& member = members[i];
            s_Argument arg = s_Argument { fu_STR((member.value ? member.value : fail(ctx_0, _info_0, _here_0, fu_STR{}))), fu_STR{}, s_Type((member.type ? member.type : fail(ctx_0, _info_0, _here_0, fu_STR{}))), s_SolvedNode(member.items[LET_INIT]), (member.flags & F_MUSTNAME) };
            if (!arg.dEfault)
                min_2++;

            args_1.push(arg);
        };
        if (max_2 && !min_2)
            min_2++;

        s_Overload& overload = GET_mut(module_0, _scope_0, out_1.target);
        overload.min = min_2;
        overload.max = max_2;
        overload.args = args_1;
        overload.type = out_1.type;
        if (overload.used_by && (quals0 != quals1))
            overload.status |= SS_UPDATED;

    };
    lazySolveEnd(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, GET_mut(module_0, _scope_0, out_1.target));
    return s_SolvedNode{};
}

static bool lazySolveStart(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Target& target_5, const s_Overload& overload)
{
    if ((overload.status & (SS_DID_START | SS_LAZY)) != SS_LAZY)
        return false;


    {
        s_Overload& o = GET_mut(module_0, _scope_0, target_5);
        if (o.status & ((SS_FINALIZED | SS_DID_START) | SS_DIRTY))
            fail(ctx_0, _info_0, _here_0, ("SS_DID_START: non-zero solver status: "_fu + overload.status));

        o.status |= SS_DID_START;
        if ((o.kind == "template"_fu) || (o.kind == "fn"_fu))
            doTrySpecialize(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, target_5, s_Target{}, fu_VEC<s_SolvedNode>{}, fu_STR{}, fu::view<int>{}, bool{}, fu_VEC<fu_VEC<s_Target>>{}, 0, s_Type{});
        else if (o.kind == "type"_fu)
            __solveStruct(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, true, s_Node(o.tEmplate.node), target_5);
        else
            fail(ctx_0, _info_0, _here_0, (("lazySolveStart: kind is `"_fu + o.kind) + "`."_fu));

    };
    return true;
}

static void reorderByNumUsings(bool& use_reorder, fu_VEC<int>& reorder, const fu_VEC<s_Argument>& host_args, const int num_args, const int num_usings)
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

static bool reorderByArgIDs(bool& use_reorder, fu_VEC<int>& reorder, const fu_VEC<fu_STR>& names, s_BitSet&& optional, const fu_VEC<s_Argument>& host_args, const int num_usings)
{
    use_reorder = true;
    reorder.clear();
    int used = 0;
    int offset = num_usings;
    for (int i = 0; i < host_args.size(); i++)
    {
        int idx = fu::lfind(names, host_args[i].name, 0);
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
        for (int i = 0; i < names.size(); i++)
        {
            if (!names[i])
                used++;

        };
        if ((used + popcount(optional)) != names.size())
            return false;

    };
    while (reorder && (reorder.mutref((reorder.size() - 1)) < 0))
        reorder.pop();

    if (reorder.size() != names.size())
        return true;

    for (int i = 0; i < reorder.size(); i++)
    {
        if (reorder.mutref(i) != i)
            return true;

    };
    reorder.clear();
    use_reorder = false;
    return true;
}

static int findRestStart(const s_Overload& overload)
{
    for (int i = overload.args.size(); i-- > 0; )
    {
        const s_Argument& arg = overload.args[i];
        if (arg.flags & F_REST_ARG)
            return i;

        if (!(arg.flags & F_IMPLICIT))
            break;

    };
    return overload.args.size();
}

                                #ifndef DEF_F_CONVERSION
                                #define DEF_F_CONVERSION
inline constexpr int F_CONVERSION = (1 << 15);
                                #endif

static fu_STR explain(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, fu::view<s_Target> path_1)
{
    fu_STR res = "`"_fu;
    for (int i = 0; i < path_1.size(); i++)
    {
        if (i)
            res += "` -> `"_fu;

        s_Overload o = GET(ctx_0, module_0, _scope_0, path_1[i]);
        res += ((o.kind + " "_fu) + o.name);
        if (i < path_1.size())
            res += (": "_fu + serializeType(o.type));

    };
    res += "`"_fu;
    return res;
}

static void foreach(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Scope& scope_1_0, bool local_scope_0, const s_Type& expect_0, const s_Type& actual_0, fu_VEC<s_Target>& match_0, fu_VEC<s_Target>& path_0, int has_converts_0, const fu_VEC<s_ScopeSkip>& ss_converts_0, fu_VEC<s_SolvedNode>& _args_0, fu_VEC<fu_VEC<s_Target>>& _conversions_0, const s_Type& from_0, bool nullary_0, const s_Target& t)
{
    if (!nullary_0)
    {
        _args_0.resize(1);
        _args_0.mutref(0).type = from_0;
    };
    s_Target candidate {};
    if (nullary_0 || (candidate = tryMatch__mutargs(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, s_Scope{}, false, fu_STR((*(const fu_STR*)fu::NIL)), _args_0, _conversions_0, F_CONVERSION, t)))
    {
        const s_Target& t_1 = (nullary_0 ? t : candidate);
        s_Overload convert = GET(ctx_0, module_0, _scope_0, t_1);
        s_Type convertType = ((convert.kind == "field"_fu) ? add_refs((from_0 ? from_0 : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type(convert.type)) : s_Type(convert.type));
        const bool isStruct_2 = isStruct(convertType);
        if (isAssignableAsArgument(expect_0, convertType))
        {
            if (match_0)
            {
                fu_STR suffix = (((("\n\t"_fu + explain(ctx_0, module_0, _scope_0, match_0)) + "\n\tand:"_fu) + "\n\t"_fu) + explain(ctx_0, module_0, _scope_0, (path_0 + t_1)));
                if (actual_0)
                    fail(ctx_0, _info_0, _here_0, ((((("Conversion ambiguity, multiple ways to convert `"_fu + serializeType(actual_0)) + "` into `"_fu) + serializeType(expect_0)) + "`: "_fu) + suffix));
                else
                    fail(ctx_0, _info_0, _here_0, ((("`using` ambiguity, multiple ways to obtain a `"_fu + serializeType(expect_0)) + "` in this scope: "_fu) + suffix));

            };
            match_0 = (path_0 + t_1);
        }
        else
        {
            const bool mightHaveConversion = (isStruct_2 || scope_1_0.converts);
            if (mightHaveConversion)
            {
                if (path_0.size() > 10)
                {
                    for (int i = path_0.size(); i-- > 0; )
                    {
                        if (path_0[i] == t_1)
                        {
                            fu_STR err = "Conversion loop:"_fu;
                            for (int i_1 = i; i_1 < path_0.size(); i_1++)
                            {
                                if (!i_1)
                                    err += "\n\t`"_fu;
                                else
                                    err += " `"_fu;

                                s_Overload convert_1 = GET(ctx_0, module_0, _scope_0, path_0[i_1]);
                                err += (((((convert_1.kind + " "_fu) + convert_1.name) + ": "_fu) + serializeType(convertType)) + "` ->"_fu);
                            };
                            err += (((("\n\t\t`"_fu + convert.kind) + " "_fu) + convert.name) + "`."_fu);
                            fail(ctx_0, _info_0, _here_0, fu_STR(err));
                        };
                    };
                };
                path_0.push(t_1);
                fu_DEFER(path_0.pop());
                descend(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, scope_1_0, local_scope_0, expect_0, actual_0, match_0, path_0, has_converts_0, ss_converts_0, _args_0, _conversions_0, convertType, false, isStruct_2);
            };
        };
    };
}

                                #ifndef DEFt_each_m2TZ
                                #define DEFt_each_m2TZ
inline void each_m2TZ(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Scope& scope_1_0, bool local_scope_0, const s_Type& expect_0, const s_Type& actual_0, fu_VEC<s_Target>& match_0, fu_VEC<s_Target>& path_0, int has_converts_0, const fu_VEC<s_ScopeSkip>& ss_converts_0, fu_VEC<s_SolvedNode>& _args_0, fu_VEC<fu_VEC<s_Target>>& _conversions_0, const s_Type& from_0, bool nullary_0, const fu_VEC<s_Target>& items_5, const fu_VEC<s_ScopeSkip>& scope_skip_1, int, const int start_1)
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
            foreach(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, scope_1_0, local_scope_0, expect_0, actual_0, match_0, path_0, has_converts_0, ss_converts_0, _args_0, _conversions_0, from_0, nullary_0, u);
        };
        i0 = ss.end;
    };
}
                                #endif

                                #ifndef DEFt_each_qX8e
                                #define DEFt_each_qX8e
inline void each_qX8e(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Scope& scope_1_0, bool local_scope_0, const s_Type& expect_0, const s_Type& actual_0, fu_VEC<s_Target>& match_0, fu_VEC<s_Target>& path_0, int has_converts_0, const fu_VEC<s_ScopeSkip>& ss_converts_0, fu_VEC<s_SolvedNode>& _args_0, fu_VEC<fu_VEC<s_Target>>& _conversions_0, const s_Type& from_0, bool nullary_0, const fu_VEC<s_Target>& items_5, const fu_VEC<s_ScopeSkip>& scope_skip_1, int, const int start_1)
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
            foreach(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, scope_1_0, local_scope_0, expect_0, actual_0, match_0, path_0, has_converts_0, ss_converts_0, _args_0, _conversions_0, from_0, nullary_0, items_5[i_1]);

        i0 = ss.end;
    };
}
                                #endif

static void descend(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Scope& scope_1_0, bool local_scope_0, const s_Type& expect_0, const s_Type& actual_0, fu_VEC<s_Target>& match_0, fu_VEC<s_Target>& path_0, int has_converts_0, const fu_VEC<s_ScopeSkip>& ss_converts_0, fu_VEC<s_SolvedNode>& _args_0, fu_VEC<fu_VEC<s_Target>>& _conversions_0, const s_Type& from, const bool nullary, const bool isStruct_1)
{
    if (nullary)
        each_m2TZ(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, scope_1_0, local_scope_0, expect_0, actual_0, match_0, path_0, has_converts_0, ss_converts_0, _args_0, _conversions_0, from, nullary, scope_1_0.usings, (local_scope_0 ? _ss_0.usings : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL)), 0, 0);
    else
    {
        if (isStruct_1)
        {
            const fu_VEC<s_Target>& inner = lookupStruct(from, module_0, ctx_0).converts;
            for (int i = 0; i < inner.size(); i++)
                foreach(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, scope_1_0, local_scope_0, expect_0, actual_0, match_0, path_0, has_converts_0, ss_converts_0, _args_0, _conversions_0, from, nullary, inner[i]);

        };
        if (has_converts_0)
            each_qX8e(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, scope_1_0, local_scope_0, expect_0, actual_0, match_0, path_0, has_converts_0, ss_converts_0, _args_0, _conversions_0, from, nullary, scope_1_0.converts, ss_converts_0, 0, 0);

    };
}

static fu_VEC<s_Target> tryConvert(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Scope& scope_1, const bool local_scope, const s_Type& expect, const s_Type& actual)
{
    fu_VEC<s_Target> match {};
    fu_VEC<s_Target> path {};
    const int has_converts = scope_1.converts.size();
    const fu_VEC<s_ScopeSkip>& ss_converts = (local_scope ? _ss_0.converts : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL));
    fu_VEC<s_SolvedNode> _args {};
    fu_VEC<fu_VEC<s_Target>> _conversions {};
    descend(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, scope_1, local_scope, expect, actual, match, path, has_converts, ss_converts, _args, _conversions, actual, !actual, isStruct(actual));
    return match;
}

                                #ifndef DEFt_grow_if_oob_kcit
                                #define DEFt_grow_if_oob_kcit
inline fu_VEC<s_Target>& grow_if_oob_kcit(fu_VEC<fu_VEC<s_Target>>& a, int& i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_only_FnNW
                                #define DEFt_only_FnNW
inline s_SolvedNode& only_FnNW(fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

                                #ifndef DEFt_only_BM0n
                                #define DEFt_only_BM0n
inline fu_VEC<s_Target>& only_BM0n(fu_VEC<fu_VEC<s_Target>>& s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

                                #ifndef DEFt_last_uIm6
                                #define DEFt_last_uIm6
inline s_Target& last_uIm6(fu_VEC<s_Target>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEF_q_arithmetic
                                #define DEF_q_arithmetic
inline constexpr int q_arithmetic = (1 << 5);
                                #endif

static bool considerRetyping(const s_Type& expect, const s_Type& actual)
{
    return ((expect.vtype.quals & actual.vtype.quals) & q_arithmetic) != 0;
}

static s_Type solveArrlit_itemType_init(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_Type& head)
{
    s_Type _0 {};
    return (_0 = clear_refs(s_Type(head))) ? static_cast<s_Type&&>(_0) : fail(ctx_0, _info_0, _here_0, fu_STR{});
}

static s_Type solveArrlit_done(const s_Type& itemType)
{
    return createArray(itemType);
}

static fu_STR mangleArguments(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, fu::view<s_SolvedNode> args_1, fu::view<int> reorder, const bool use_reorder, const fu_VEC<fu_VEC<s_Target>>& conversions, const int REST_START, const s_Type& REST_TYPE)
{
    fu_STR mangle {};
    const int REST_END = (use_reorder ? reorder.size() : args_1.size());
    const int N = std::min(REST_END, REST_START);
    for (int i = 0; i < N; i++)
    {
        if (i)
            mangle += ","_fu;

        const int callsiteIndex = (use_reorder ? reorder[i] : i);
        if ((conversions.size() > i) && conversions[i].size())
            mangle += serializeType(GET(ctx_0, module_0, _scope_0, last_mnBR(conversions[i])).type);
        else if ((callsiteIndex >= 0) && (callsiteIndex <= args_1.size()))
            mangle += serializeType(args_1[callsiteIndex].type);

    };
    if (REST_START < REST_END)
    {
        if (REST_START)
            mangle += ","_fu;

        mangle += serializeType(REST_TYPE);
    };
    return mangle;
}

static s_Target trySpecialize(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Target& overloadIdx, const fu_VEC<s_SolvedNode>& args_1, const fu_STR& args_mangled, fu::view<int> reorder, const bool use_reorder, const fu_VEC<fu_VEC<s_Target>>& conversions, const int REST_START, const s_Type& REST_TYPE)
{
    fu_STR mangle = ((((overloadIdx.modid + "#"_fu) + overloadIdx.index) + " "_fu) + args_mangled);
    s_Target _0 {};
    const s_Target spec = ((_0 = s_Target(_specs_0[mangle])) ? _0 : doTrySpecialize(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, s_Target{}, overloadIdx, fu_VEC<s_SolvedNode>(args_1), fu_STR(mangle), reorder, use_reorder, conversions, REST_START, REST_TYPE));
    return s_Target((!is_SPECFAIL(spec) ? spec : (*(const s_Target*)fu::NIL)));
}

static s_Overload GETfn(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const int idx)
{
    return GET(ctx_0, module_0, _scope_0, s_Target { int(module_0.modid), int(idx) });
}

static fu_STR fnName(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const int idx)
{
    return (idx ? (("`"_fu + GETfn(ctx_0, module_0, _scope_0, idx).name) + "`"_fu) : "global scope"_fu);
}

static void disambig(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_CurrentFn& _current_fn_0, fu_STR& id_2_0, s_Target& matchIdx_0, s_Target& overloadIdx_0)
{
    if (matchIdx_0)
    {
        const int inner = GET(ctx_0, module_0, _scope_0, matchIdx_0).local_of;
        const int outer = GET(ctx_0, module_0, _scope_0, overloadIdx_0).local_of;
        const int callsite = _current_fn_0.out.target.index;
        if (SELF_TEST)
        {
            int _c = callsite;
            while (_c > inner)
                _c = GETfn(ctx_0, module_0, _scope_0, _c).local_of;

            if (!(_c == inner))
                fail(ctx_0, _info_0, _here_0, ((((("BUG! Leaking `"_fu + id_2_0) + "` between functions [inner/callsite]: "_fu) + fnName(ctx_0, module_0, _scope_0, inner)) + " is seen from "_fu) + fnName(ctx_0, module_0, _scope_0, callsite)));

            int _i = inner;
            while (_i > outer)
                _i = GETfn(ctx_0, module_0, _scope_0, _i).local_of;

            if (!(_i == outer))
                fail(ctx_0, _info_0, _here_0, ((((((("BUG! Leaking `"_fu + id_2_0) + "` between functions [inner/outer]: "_fu) + fnName(ctx_0, module_0, _scope_0, inner)) + " and "_fu) + fnName(ctx_0, module_0, _scope_0, outer)) + " as seen from "_fu) + fnName(ctx_0, module_0, _scope_0, callsite)));

        };
        fail(ctx_0, _info_0, _here_0, (((((((("Ambiguous callsite, matches multiple items in scope: `"_fu + id_2_0) + "` from "_fu) + fnName(ctx_0, module_0, _scope_0, inner)) + " and "_fu) + fnName(ctx_0, module_0, _scope_0, outer)) + ", as seen from "_fu) + fnName(ctx_0, module_0, _scope_0, callsite)) + "."_fu));
    };
}

                                #ifndef DEFt_last_Y3Ia
                                #define DEFt_last_Y3Ia
inline fu_STR& last_Y3Ia(fu_VEC<fu_STR>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static s_Target tryMatch__mutargs(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Scope& scope_1, const bool local_scope, fu_STR&& id_2, fu_VEC<s_SolvedNode>& args_1, fu_VEC<fu_VEC<s_Target>>& conversions, const int flags_4, const s_Target& target_5)
{
    s_Target matchIdx {};
    s_Target DEBUG_assertMatch {};
    int minArity = args_1.size();
    const int numUsings = (scope_1.usings ? countUsings(ctx_0, _info_0, _here_0, _ss_0, scope_1, local_scope) : int{});
    const int explicitArity = minArity;
    const int maxArity = (explicitArity + numUsings);
    fu_VEC<fu_STR> names {};
    s_BitSet optional {};
    if (flags_4 & F_NAMED_ARGS)
    {
        bool some = false;
        for (int i = 0; i < args_1.size(); i++)
        {
            s_SolvedNode arg { args_1[i] };
            const fu_STR* _0;
            names.push(((arg.kind == "argid"_fu) ? (*(_0 = &(((void)(some = true), arg.value))) ? *_0 : fail(ctx_0, _info_0, _here_0, fu_STR{})) : (*(const fu_STR*)fu::NIL)));
            if (arg.flags & F_OPT_ARG)
            {
                minArity--;
                add(optional, i);
            };
        };
        if (!(some))
            fail(ctx_0, _info_0, _here_0, fu_STR{});

    };
    fu_VEC<int> reorder {};
    fu_STR reusable_mangle {};
    fu_VEC<s_Target> extra_items_1 {};
    if (local_scope && !target_5)
    {
        s_BitSet seen {};
        if (numUsings)
            each_XmwJ(ctx_0, module_0, _scope_0, _ss_0, scope_1, local_scope, id_2, extra_items_1, seen, scope_1.usings, (local_scope ? _ss_0.usings : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL)), 0, 0);

        if (flags_4 & ((((F_ACCESS | F_METHOD) | F_INFIX) | F_PREFIX) | F_POSTFIX))
        {
            for (int i = 0; i < args_1.size(); i++)
                visitTypeImports(ctx_0, module_0, _ss_0, scope_1, local_scope, id_2, extra_items_1, seen, args_1.mutref(i).type);

        };
    };
    const fu_VEC<s_ScopeItem>& field_items = (local_scope && ((flags_4 & F_ACCESS) || !minArity) && (minArity <= 1) && maxArity ? _field_items_0 : (*(const fu_VEC<s_ScopeItem>*)fu::NIL));
    fu_VEC<fu_STR> alternate_ids {};
    fu_VEC<s_SolvedNode> args_out {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        bool shadows {};
        while ((overloadIdx = search(scope_1.items, id_2, scope_iterator, (local_scope ? ((flags_4 & F_IMPLICIT) ? _ss_0.declash : _ss_0.items) : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL)), shadows, target_5, extra_items_1, field_items)))
        { {
            fu_VEC<fu_VEC<s_Target>> conversions_1 {};
            fu_VEC<s_SolvedNode> args_2 { args_1 };
            bool TODO_FIX_skip_autocalls = false;
            while (true)
            {
                s_Overload overload = GET(ctx_0, module_0, _scope_0, overloadIdx);
                if (lazySolveStart(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, overloadIdx, overload))
                    continue;

                const bool isType = (overload.kind == "type"_fu);
                if (minArity && isType && !target_5)
                {
                    const fu_STR& alt = overload.type.vtype.canon;
                    if (alt != id_2)
                        alternate_ids.push(alt);

                };
                const bool isZeroInit = (isType && !explicitArity);
                if (!isZeroInit && ((overload.max < minArity) || (overload.min > maxArity)))
                    goto L_0112;

                const fu_VEC<s_Argument>& host_args = overload.args;
                const int num_usings = (!isZeroInit && (overload.min > explicitArity) ? (overload.min - explicitArity) : int{});
                bool use_reorder = false;
                if (!names)
                    reorderByNumUsings(use_reorder, reorder, host_args, args_2.size(), num_usings);
                else if (!reorderByArgIDs(use_reorder, reorder, names, s_BitSet(optional), host_args, num_usings))
                    goto L_0112;

                if (optional && reorder && (reorder.size() < args_2.size()) && (reorder.size() < overload.max))
                    goto L_0112;

                s_Type REST_TYPE {};
                const int REST_START = findRestStart(overload);
                const int N = std::max((use_reorder ? reorder.size() : args_2.size()), (!isZeroInit ? overload.min : (*(const int*)fu::NIL)));
                if (N)
                {
                    if (!((reorder.size() >= args_2.size()) || !reorder || optional))
                        fail(ctx_0, _info_0, _here_0, "reorder < args."_fu);

                    for (int i = 0; i < N; i++)
                    {
                        const bool rest = (i >= REST_START);
                        const s_Argument& host_arg = host_args[(rest ? REST_START : i)];
                        const s_Type& expect = host_arg.type;
                        if (TODO_FIX_skip_autocalls && rest)
                            continue;

                        const int callsiteIndex = (use_reorder ? int(reorder[i]) : ((i < args_2.size()) ? int(i) : -1));
                        if (callsiteIndex < 0)
                        {
                            if (host_arg.dEfault || (host_arg.flags & F_IMPLICIT))
                                continue;

                            int _1 {};
                            if (!((_1 = (host_arg.flags & F_MUSTNAME)) ? _1 : (flags_4 & F_CONVERSION)))
                            {
                                const s_Type& expect_1 = (expect ? expect : host_arg.dEfault.type);
                                if (expect_1)
                                {
                                    fu_VEC<s_Target> conversion = tryConvert(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, scope_1, local_scope, expect_1, s_Type{});
                                    if (conversion)
                                    {
                                        grow_if_oob_kcit(conversions_1, i) = conversion;
                                        continue;
                                    };
                                };
                            };
                            goto L_0112;
                        };
                        if (host_arg.flags & F_MUSTNAME)
                        {
                            if ((names.size() <= callsiteIndex) || !names.mutref(callsiteIndex))
                                goto L_0112;

                        };
                        if (host_arg.autocall && !TODO_FIX_skip_autocalls)
                        {
                            fu_VEC<s_SolvedNode> autocall_args {};
                            fu_VEC<fu_VEC<s_Target>> autocall_conversions {};
                            autocall_args.resize(1);
                            std::swap(args_2.mutref(callsiteIndex), only_FnNW(autocall_args));
                            const s_Target t = tryMatch__mutargs(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, scope_1, local_scope, fu_STR(host_arg.autocall), autocall_args, autocall_conversions, 0, s_Target{});
                            if (!t)
                                goto L_0112;

                            std::swap(args_2.mutref(callsiteIndex), only_FnNW(autocall_args));
                            if (autocall_conversions)
                                grow_if_oob_kcit(conversions_1, i) += only_BM0n(autocall_conversions);

                            grow_if_oob_kcit(conversions_1, i) += t;
                        };
                        if (!expect)
                            continue;

                        const int hasConv = ((conversions_1.size() > i) ? conversions_1.mutref(i).size() : int{});
                        s_Type actual = (hasConv ? GET(ctx_0, module_0, _scope_0, last_uIm6(conversions_1.mutref(i))).type : s_Type(args_2.mutref(callsiteIndex).type));
                        if (isAssignableAsArgument(expect, actual))
                            continue;

                        if (!hasConv && considerRetyping(expect, actual))
                        {
                            s_SolvedNode& arg = args_2.mutref(callsiteIndex);
                            s_SolvedNode& arg_1 = ((arg.kind == "argid"_fu) ? only_FnNW(arg.items) : arg);
                            s_Type retype = tryRetyping(ctx_0, _info_0, _here_0, arg_1, expect);
                            if (isAssignableAsArgument(expect, retype))
                            {
                                arg_1.type = retype;
                                continue;
                            };
                        };
                        if (!(flags_4 & F_CONVERSION))
                        {
                            fu_VEC<s_Target> conversion = tryConvert(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, scope_1, local_scope, expect, actual);
                            if (conversion)
                            {
                                grow_if_oob_kcit(conversions_1, i) += conversion;
                                continue;
                            };
                        };
                        goto L_0112;
                    };
                };
                if (REST_START < N)
                {
                    for (int i = REST_START; i < N; i++)
                    {
                        const int hasConv = ((conversions_1.size() > i) ? conversions_1.mutref(i).size() : int{});
                        const int callsiteIndex = (use_reorder ? reorder.mutref(i) : i);
                        s_Type actual = (hasConv ? GET(ctx_0, module_0, _scope_0, last_uIm6(conversions_1.mutref(i))).type : s_Type(args_2.mutref(callsiteIndex).type));
                        REST_TYPE = ((i == REST_START) ? solveArrlit_itemType_init(ctx_0, _info_0, _here_0, actual) : type_trySuper(REST_TYPE, actual));
                        if (!REST_TYPE)
                            goto L_0112;

                    };
                    REST_TYPE = solveArrlit_done(REST_TYPE);
                };
                if (overload.kind == "template"_fu)
                {
                    fu_STR cant_reuse {};
                    fu_STR* _2;
                    fu_STR& args_mangled = (*(_2 = &(((use_reorder || conversions_1) ? cant_reuse : reusable_mangle))) ? *_2 : *_2 = mangleArguments(ctx_0, module_0, _scope_0, args_2, reorder, use_reorder, conversions_1, REST_START, REST_TYPE));
                    const s_Target specIdx = trySpecialize(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, overloadIdx, args_2, args_mangled, reorder, use_reorder, conversions_1, REST_START, REST_TYPE);
                    if (!specIdx)
                        goto L_0112;

                    overloadIdx = specIdx;
                    DEBUG_assertMatch = specIdx;
                    TODO_FIX_skip_autocalls = true;
                    continue;
                };
                disambig(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, id_2, matchIdx, overloadIdx);
                if (use_reorder)
                {
                    args_out.resize(reorder.size());
                    for (int i = 0; i < reorder.size(); i++)
                    {
                        const int idx = reorder[i];
                        if ((idx >= 0))
                            args_out.mutref(i) = args_2[idx];

                    };
                }
                else
                    std::swap(args_2, args_out);

                std::swap(conversions_1, conversions);
                matchIdx = overloadIdx;
                if (shadows)
                    goto L_NEXT;

                break;
            };
          } L_0112:;
        } L_NEXT:;

        if (!alternate_ids)
            break;

        id_2 = last_Y3Ia(alternate_ids);
        alternate_ids.pop();
    };
    if (matchIdx)
        std::swap(args_1, args_out);

    if (DEBUG_assertMatch)
    {
        if (!(DEBUG_assertMatch == matchIdx))
            fail(ctx_0, _info_0, _here_0, "Did specialize something but ended up not using it."_fu);

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
            result += ".\nExpect: "_fu;

        s_Overload overload = GET(ctx_0, module_0, _scope_0, targets[i]);
        result += (overload.name + "("_fu);
        for (int i_1 = 0; i_1 < overload.args.size(); i_1++)
        {
            const s_Argument& arg = overload.args[i_1];
            if (i_1)
                result += ","_fu;

            result += (((("\n\t"_fu + arg.name) + ((arg.flags & F_MUSTNAME) ? "!"_fu : fu_STR{})) + (arg.dEfault ? "?: "_fu : ": "_fu)) + (arg.type ? humanizeType(arg.type) : "$"_fu));
        };
        result += ")"_fu;
    };
    return result ? fu_STR(result) : "."_fu;
}

static fu_STR actualArgs(const fu_VEC<s_SolvedNode>& args_2)
{
    fu_STR result = "\nActual: ("_fu;
    for (int i = 0; i < args_2.size(); i++)
    {
        const s_SolvedNode& arg = args_2[i];
        if (i)
            result += ","_fu;

        result += "\n\t"_fu;
        if (arg.kind == "argid"_fu)
            result += (arg.value + ": "_fu);

        result += humanizeType(arg.type);
    };
    return result + ")."_fu;
}

[[noreturn]] static fu::never NICERR_mismatch(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, s_CurrentFn& _current_fn_0, const s_Scope& scope_1, const bool local_scope, const fu_STR& id_2, const fu_VEC<s_SolvedNode>& args_1)
{
    fu_VEC<s_Target> overloads_1 {};
    int scope_iterator {};
    s_Target target_5 {};
    bool shadows {};
    while ((target_5 = search(scope_1.items, id_2, scope_iterator, (local_scope ? _ss_0.items : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL)), shadows, s_Target{}, fu::view<s_Target>{}, (local_scope ? _field_items_0 : (*(const fu_VEC<s_ScopeItem>*)fu::NIL)))))
        overloads_1.push(target_5);

    int min_2 = int(0x7fffffffu);
    int max_2 = 0;
    for (int i = 0; i < overloads_1.size(); i++)
    {
        s_Overload o = GET(ctx_0, module_0, _scope_0, overloads_1[i]);
        if (min_2 > o.min)
            min_2 = o.min;

        if (max_2 < o.max)
            max_2 = o.max;

    };
    if (overloads_1)
    {
        if (args_1.size() < min_2)
            fail(ctx_0, _info_0, _here_0, ((((((("`"_fu + id_2) + "` expects at least "_fu) + min_2) + " arguments, "_fu) + args_1.size()) + " provided"_fu) + expectedArgs(ctx_0, module_0, _scope_0, overloads_1)));
        else if (args_1.size() > max_2)
            fail(ctx_0, _info_0, _here_0, ((((((("`"_fu + id_2) + "` expects at most "_fu) + max_2) + " arguments, "_fu) + args_1.size()) + " provided"_fu) + expectedArgs(ctx_0, module_0, _scope_0, overloads_1)));
        else
            fail(ctx_0, _info_0, _here_0, (((("`"_fu + id_2) + "` bad args"_fu) + expectedArgs(ctx_0, module_0, _scope_0, overloads_1)) + actualArgs(args_1)));

    }
    else
    {
        fu_STR _0 {};
        fail(ctx_0, _info_0, _here_0, ((("`"_fu + id_2) + "` is not defined in this scope: "_fu) + ((_0 = (("`"_fu + _current_fn_0.out.value) + "`."_fu)) ? static_cast<fu_STR&&>(_0) : "root scope."_fu)));
    };
}

static s_Target match__mutargs(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Scope& scope_1, const bool local_scope, const fu_STR& id_2, fu_VEC<s_SolvedNode>& args_1, fu_VEC<fu_VEC<s_Target>>& conversions, const int flags_4, const s_Target& target_5)
{
    const s_Target ret = tryMatch__mutargs(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, scope_1, local_scope, fu_STR(id_2), args_1, conversions, flags_4, target_5);
    if (ret)
        return ret;

    const s_Target debug = tryMatch__mutargs(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, scope_1, local_scope, fu_STR(id_2), args_1, conversions, flags_4, target_5);
    if (debug)
        return debug;

    NICERR_mismatch(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, _field_items_0, _current_fn_0, scope_1, local_scope, id_2, args_1);
}

static s_Node createRead(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const fu_STR& id_2)
{
    return s_Node { "call"_fu, 0, fu_STR(id_2), fu_VEC<s_Node>{}, s_TokenIdx((_here_0 ? _here_0 : fail(ctx_0, _info_0, _here_0, fu_STR{}))) };
}

static s_Type solveArrlit_itemType(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, fu::view<s_SolvedNode> items_5, s_Type&& itemType, int start_1)
{
    if (!itemType)
    {
        if (start_1 == items_5.size())
            fail(ctx_0, _info_0, _here_0, "Cannot infer empty arraylit."_fu);

        itemType = solveArrlit_itemType_init(ctx_0, _info_0, _here_0, items_5[start_1++].type);
    }
    else if (is_ref(itemType))
        fail(ctx_0, _info_0, _here_0, "Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu);

    for (int i = start_1; i < items_5.size(); i++)
        itemType = superType(ctx_0, _info_0, _here_0, "Array literal: "_fu, itemType, items_5[i].type);

    return static_cast<s_Type&&>(itemType);
}

static s_SolvedNode createArrlit(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, int& _notes_0, const s_TokenIdx& token_2, fu_VEC<s_SolvedNode>&& items_5, const s_Type& itemType)
{
    s_Type itemType_1 = solveArrlit_itemType(ctx_0, _info_0, _here_0, items_5, s_Type(itemType), 0);
    for (int i = 0; i < items_5.size(); i++)
        maybeCopyOrMove(ctx_0, _info_0, _here_0, _notes_0, items_5.mutref(i), itemType_1, false);

    return s_SolvedNode { "arrlit"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>(items_5), s_TokenIdx(token_2), solveArrlit_done(itemType_1), s_Target{} };
}

                                #ifndef DEFt_first_FnNW
                                #define DEFt_first_FnNW
inline s_SolvedNode& first_FnNW(fu_VEC<s_SolvedNode>& s)
{
    return (s.size() ? s.mutref(0) : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode createLet(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, const s_Target& target_5, const int flags_4)
{
    s_Overload overload = GET(ctx_0, module_0, _scope_0, target_5);
    return s_SolvedNode { "let"_fu, int(flags_4), fu_STR(overload.name), fu_VEC<s_SolvedNode>{}, s_TokenIdx((_here_0 ? _here_0 : fail(ctx_0, _info_0, _here_0, fu_STR{}))), s_Type(overload.type), s_Target(target_5) };
}

static s_Target injectImplicitArg(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, s_CurrentFn& _current_fn_0, const fu_STR& id_2, const s_Type& type_3, const s_Target& becauseOf)
{
    if (!(_current_fn_0.out.items))
        fail(ctx_0, _info_0, _here_0, (((("No implicit `"_fu + id_2) + "` in scope, needed to call `"_fu) + GET(ctx_0, module_0, _scope_0, becauseOf).name) + "`."_fu));

    for (int i = 0; i < (_current_fn_0.out.items.size() + FN_RET_BACK); i++)
    {
        s_SolvedNode arg { _current_fn_0.out.items[i] };
        if (arg.value == id_2)
        {
            checkAssignable(ctx_0, _info_0, _here_0, type_3, arg.type, "Implicit arg collision"_fu, id_2, fu_STR{});
            return s_Target((arg.target ? arg.target : fail(ctx_0, _info_0, _here_0, fu_STR{})));
        };
    };
    bool shadows {};
    int flags_4 = (F_IMPLICIT | F_ARG);
    const s_Target ret = Binding(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _current_fn_0, id_2, s_Type(type_3), flags_4, shadows, s_Target{});
    s_SolvedNode newArgNode = createLet(ctx_0, module_0, _info_0, _here_0, _scope_0, ret, F_IMPLICIT);
    const int newArgIdx = (_current_fn_0.out.items.size() + FN_RET_BACK);
    _current_fn_0.out.items.insert(newArgIdx, newArgNode);
    return ret;
}

static s_SolvedNode bindImplicitArg(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const fu_STR& name_3, const s_Type& type_3, const s_Target& becauseOf)
{
    fu_VEC<s_SolvedNode> args_1 {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    s_Target _0 {};
    const s_Target target_5 = ((_0 = tryMatch__mutargs(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, _scope_0, true, fu_STR(name_3), args_1, conversions, F_IMPLICIT, s_Target{})) ? _0 : (_0 = injectImplicitArg(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _current_fn_0, name_3, type_3, becauseOf)) ? _0 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
    if ((args_1.size() != 0) || (conversions.size() != 0))
        fail(ctx_0, _info_0, _here_0, "dunno what happened here"_fu);

    s_Overload o = GET(ctx_0, module_0, _scope_0, target_5);
    if (!(o.flags & F_IMPLICIT))
        fail(ctx_0, _info_0, _here_0, (((("Matching a non-implicit item in scope: `"_fu + name_3) + "`, binds to call to `"_fu) + GET(ctx_0, module_0, _scope_0, becauseOf).name) + "`."_fu));

    checkAssignable(ctx_0, _info_0, _here_0, type_3, o.type, (("Implicit `"_fu + name_3) + "` type mismatch"_fu), fu_STR{}, fu_STR{});
    return CallerNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, createRead(ctx_0, _info_0, _here_0, "__implicit"_fu), target_5, fu_VEC<s_SolvedNode>{}, 0);
}

                                #ifndef DEFt_if_first_tWdF
                                #define DEFt_if_first_tWdF
inline const s_Region& if_first_tWdF(const fu_VEC<s_Region>& s)
{
    return s.size() ? s[0] : (*(const s_Region*)fu::NIL);
}
                                #endif

static s_Lifetime Lifetime_replaceArgsAtCallsite(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_Overload& overload, fu::view<s_SolvedNode> argNodes)
{
    const fu_VEC<s_Region>& returned = overload.type.lifetime.uni0n;
    const fu_VEC<s_SolvedNode>& items_5 = overload.solved.items;
    if (!Region_isArg(if_first_tWdF(returned)))
        return s_Lifetime { fu_VEC<s_Region>(returned) };

    const int head = items_5[0].target.index;
    const int tail = items_5[((items_5.size() + FN_RET_BACK) - 1)].target.index;
    s_Lifetime keep {};
    s_Lifetime replace_1 {};
    int offset = (items_5.size() + FN_RET_BACK);
    for (int i = 0; i < returned.size(); i++)
    {
        const s_Region& region = returned[i];
        const int index_2 = Region_toArgIndex(region);
        if ((index_2 < head) || (index_2 > tail))
        {
            keep.uni0n += region;
            continue;
        };
        while (offset--)
        {
            const int here = items_5[offset].target.index;
            if (here == index_2)
            {
                const s_SolvedNode& argNode = argNodes[offset];
                s_Lifetime argLt = (is_ref(argNode.type) ? s_Lifetime((argNode.type.lifetime ? argNode.type.lifetime : fail(ctx_0, _info_0, _here_0, "refarg without lifetime"_fu))) : Lifetime_temporary());
                replace_1 = Lifetime_union(replace_1, argLt);
                break;
            };
            if (!(here > index_2))
                fail(ctx_0, _info_0, _here_0, "nope, going backwards"_fu);

        };
    };
    return Lifetime_union(keep, replace_1);
}

static bool isFnOrType(const s_Helpers& h)
{
    return !!(h.mask & (HM_Function | HM_Struct));
}

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline constexpr unsigned SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

                                #ifndef DEF_SS_FN_RECUR
                                #define DEF_SS_FN_RECUR
inline constexpr unsigned SS_FN_RECUR = (0x1u << 17u);
                                #endif

static void detectRecursion(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, int& _notes_0, fu_VEC<s_Helpers>& _helpers_0, const s_Target& target_5, const s_Overload& overload)
{
    if ((overload.status & (SS_FINALIZED | SS_LAZY)) != SS_LAZY)
        return;

    const int note = ((overload.kind == "type"_fu) ? N_TypeRecursion : N_FnRecursion);
    const unsigned status_1 = ((overload.kind == "type"_fu) ? SS_TYPE_RECUR : SS_FN_RECUR);
    for (int i = _helpers_0.size(); i-- > 0; )
    {
        s_Helpers h { _helpers_0[i] };
        if (!isFnOrType(h))
            continue;

        if (h.mask & HM_Lambda)
            fail(ctx_0, _info_0, _here_0, "Recursive lambda, what happened here?"_fu);

        GET_mut(module_0, _scope_0, s_Target { int(module_0.modid), int(h.target) }).status |= status_1;
        _notes_0 |= note;
        if (h.target == target_5.index)
            return;

    };
    fail(ctx_0, _info_0, _here_0, (((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu) + overload.status) + ")`."_fu));
}

                                #ifndef DEFt_last_ZDQv
                                #define DEFt_last_ZDQv
inline const s_Node& last_ZDQv(const fu_VEC<s_Node>& s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode createLet(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, int& _notes_0, s_CurrentFn& _current_fn_0, const fu_STR& id_2, const int flags_4, const s_SolvedNode& init)
{
    s_SolvedNode out_1 = solveLetLike_dontTouchScope(ctx_0, _info_0, _here_0, _notes_0, init.token, id_2, int(flags_4), s_SolvedNode(init), s_Type{}, s_Type{}, bool{});
    solveLet(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _current_fn_0, out_1, id_2, s_Target{}, bool{});
    return out_1;
}

static s_SolvedNode CallerNode(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, const s_Target& target_5, fu_VEC<s_SolvedNode>&& args_1, const int kills_1)
{
    s_Overload overload = GET(ctx_0, module_0, _scope_0, target_5);
    const int REST_START = findRestStart(overload);
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
                args_1.mutref(i) = createArrlit(ctx_0, _info_0, _here_0, _notes_0, first_FnNW(rest).token, fu_VEC<s_SolvedNode>(rest), s_Type{});

        };
    };
    const bool isZeroInit = ((overload.kind == "type"_fu) && !args_1.size());
    if (!isZeroInit)
    {
        fu_VEC<s_Argument>& host_args = overload.args;
        args_1.resize(host_args.size());
        for (int i = 0; i < args_1.size(); i++)
        {
            if (!args_1.mutref(i))
            {
                const s_Argument& host_arg = host_args[i];
                args_1.mutref(i) = (host_arg.dEfault ? s_SolvedNode(host_arg.dEfault) : ((void)((host_arg.flags & F_IMPLICIT) || fail(ctx_0, _info_0, _here_0, (((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + serializeType(host_arg.type)) + "`."_fu))), bindImplicitArg(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, host_arg.name, host_arg.type, target_5)));
            };
        };
    };
    s_Type type_3 { overload.type };
    if (overload.kind == "field"_fu)
    {
        s_Type* _0;
        type_3 = add_refs((*(_0 = &(only_FnNW(args_1).type)) ? *_0 : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type(overload.type));
    }
    else if (args_1)
    {
        fu_VEC<s_Argument>& host_args = (overload.args ? overload.args : fail(ctx_0, _info_0, _here_0, "CallerNode: no host args."_fu));
        for (int i = 0; i < args_1.size(); i++)
        {
            s_SolvedNode* _1;
            maybeCopyOrMove(ctx_0, _info_0, _here_0, _notes_0, (*(_1 = &(args_1.mutref(i))) ? *_1 : fail(ctx_0, _info_0, _here_0, fu_STR{})), host_args[i].type, true);
        };
        if (is_ref(type_3))
            type_3.lifetime = Lifetime_test(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, Lifetime_replaceArgsAtCallsite(ctx_0, _info_0, _here_0, overload, args_1), true);

    };
    if (target_5.modid == module_0.modid)
    {
        if ((overload.kind == "fn"_fu) || (overload.kind == "type"_fu))
        {
            for (int i = _helpers_0.size(); i-- > 0; )
            {
                s_Helpers& h = _helpers_0.mutref(i);
                if (isFnOrType(h))
                {
                    s_Overload& o = GET_mut(module_0, _scope_0, target_5);
                    add_2vji(o.used_by, h.target);
                    detectRecursion(ctx_0, module_0, _info_0, _here_0, _scope_0, _notes_0, _helpers_0, target_5, o);
                    break;
                };
            };
        };
        if (_current_fn_0)
        {
            s_Overload o = GET(ctx_0, module_0, _scope_0, target_5);
            if ((o.kind == "var"_fu) && o.local_of)
                add_7gVc(_current_fn_0.locals_used, target_5.index);

            add_DNSI(_current_fn_0.locals_used, o.closes_over);
        };
    };
    if (overload.kind == "inline"_fu)
    {
        const s_ScopeMemo scope0 = Scope_snap(_scope_0, _helpers_0);
        s_ScopeSkipMemos ss0 { _ss_0 };
        fu_DEFER(
        {
            Scope_pop(_scope_0, scope0, _helpers_0);
            _ss_0 = ss0;
        });
        ScopeSkip_setup(ctx_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, overload.tEmplate, scope0, true);
        _scope_0.items += overload.extra_items;
        s_Node& n_fn = overload.tEmplate.node;
        const s_Node& n_body = last_ZDQv(n_fn.items);
        s_Type& ret_expect_1 = overload.type;
        fu_VEC<s_SolvedNode> result {};
        if (!(overload.args.size() == args_1.size()))
            fail(ctx_0, _info_0, _here_0, "inline: arglen mismatch"_fu);

        result.resize((args_1.size() + 1));
        for (int i = 0; i < args_1.size(); i++)
        {
            const s_Argument& slot = overload.args[i];
            result.mutref(i) = createLet(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _notes_0, _current_fn_0, slot.name, (slot.flags & ~F_ARG), args_1.mutref(i));
        };
        s_SolvedNode s_body = solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, n_body, ret_expect_1, 0, short((HM_CanReturn | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL)))), kills_1, n_fn.value);
        last_FnNW(result) = s_body;
        return createBlock(node_1.token, s_body.type, result, s_Target{});
    };
    s_SolvedNode out_1 = solved(node_1, type_3, args_1, s_Target{});
    out_1.target = target_5;
    return out_1;
}

static s_SolvedNode solveCall(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, const s_Target& target_5, const int kills_1)
{
    fu_STR id_2 { node_1.value };
    if (!id_2)
    {
        if (!(target_5))
            fail(ctx_0, _info_0, _here_0, fu_STR{});

    };
    const int qualified = (node_1.flags & F_COMPOUND_ID);
    const s_Scope& scope_1 = (qualified ? dequalify_andGetScope(ctx_0, module_0, _info_0, _here_0, _scope_0, id_2) : _scope_0);
    fu_VEC<s_SolvedNode> args_1 = solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items, s_Type{}, s_Type{}, bool{}, true, -1, 0);
    if (is_never(if_last_FnNW(args_1).type))
    {
        _notes_0 |= N_DeadCall;
        return createBlock(node_1.token, t_never, args_1, s_Target{});
    };
    fu_VEC<fu_VEC<s_Target>> conversions {};
    const s_Target callTargIdx = match__mutargs(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, scope_1, !qualified, id_2, args_1, conversions, node_1.flags, target_5);
    for (int argIdx = 0; argIdx < conversions.size(); argIdx++)
    {
        fu_VEC<s_Target> conversion { conversions[argIdx] };
        s_Node convRead = (conversion ? createRead(ctx_0, _info_0, _here_0, "__using"_fu) : s_Node{});
        for (int i = 0; i < conversion.size(); i++)
        {
            const s_Target& t = conversion[i];
            s_Overload o = GET(ctx_0, module_0, _scope_0, t);
            if (o.min || (o.max && args_1.mutref(argIdx)))
            {
                args_1.mutref(argIdx) = CallerNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, convRead, t, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(args_1[argIdx]) } }, 0);
                continue;
            };
            if (i)
                fail(ctx_0, _info_0, _here_0, (("Bad conversion chain, non-leading nullary: `"_fu + o.name) + "`."_fu));

            if (args_1.mutref(argIdx))
                fail(ctx_0, _info_0, _here_0, "Bad conversion chain, about to throw away an argnode."_fu);

            args_1.mutref(argIdx) = CallerNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, convRead, t, fu_VEC<s_SolvedNode>{}, 0);
        };
    };
    return CallerNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, callTargIdx, fu_VEC<s_SolvedNode>(args_1), kills_1);
}

static s_SolvedNode evalTypeAnnot(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, const fu_MAP<fu_STR, s_Type>& typeParams)
{
    if (node_1.kind == "call"_fu)
    {
        const fu_VEC<s_Node>& items_5 = node_1.items;
        if (items_5.size() == 1)
        {
            if (node_1.value == "&"_fu)
                return solved(node_1, add_ref(T(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, typeParams, 0), Lifetime_temporary()), fu_VEC<s_SolvedNode>{}, s_Target{});

            if (node_1.value == "&mut"_fu)
                return solved(node_1, add_mutref(T(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, typeParams, 0), Lifetime_temporary()), fu_VEC<s_SolvedNode>{}, s_Target{});

            if (node_1.value == "[]"_fu)
                return solved(node_1, createArray(T(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, typeParams, 0)), fu_VEC<s_SolvedNode>{}, s_Target{});

        }
        else if (items_5.size() == 2)
        {
            if (node_1.value == "Map"_fu)
                return solved(node_1, createMap(T(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, typeParams, 0), T(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, typeParams, 1)), fu_VEC<s_SolvedNode>{}, s_Target{});

        };
        return solveCall(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, s_Target{}, 0);
    }
    else if (node_1.kind == "typeparam"_fu)
        return solved(node_1, evalTypeParam(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, node_1.value, typeParams), fu_VEC<s_SolvedNode>{}, s_Target{});
    else if ((node_1.kind == "arrlit"_fu) && (node_1.items.size() == 1))
        return solved(node_1, createSlice(T(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, typeParams, 0), Lifetime_temporary()), fu_VEC<s_SolvedNode>{}, s_Target{});

    fail(ctx_0, _info_0, _here_0, (((("TODO evalTypeAnnot: "_fu + node_1.kind) + "["_fu) + node_1.items.size()) + "]"_fu));
}

static s_SolvedNode createFnDef(const s_TokenIdx& token_2, const s_Type& type_3, const s_Target& target_5)
{
    return s_SolvedNode { "fndef"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token_2), s_Type(type_3), s_Target(target_5) };
}

static s_SolvedNode uPrepFn_A(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1)
{
    const fu_STR& id_2 = node_1.value;
    const int local_of_2 = _current_fn_0.out.target.index;
    const bool isTemplate = !!(node_1.flags & F_TEMPLATE);
    const unsigned status_1 = (!isTemplate ? SS_LAZY : (*(const unsigned*)fu::NIL));
    const int N = (node_1.items.size() + FN_RET_BACK);
    int min_2 = 0;
    int max_2 = N;
    fu_VEC<s_Argument> args_1 {};
    for (int i = 0; i < N; i++)
    {
        const s_Node& arg = node_1.items[i];
        fu_STR name_3 { (arg.value ? arg.value : fail(ctx_0, _info_0, _here_0, "TemplateDecl: no argname."_fu)) };
        fu_STR autocall_1 = ((arg.flags & F_COMPOUND_ID) ? Autocall_splice(ctx_0, _info_0, _here_0, name_3) : fu_STR{});
        const s_Node& annot = arg.items[LET_TYPE];
        const s_Node& init = arg.items[LET_INIT];
        const bool typed = !(arg.flags & F_TEMPLATE);
        s_Type type_3 = (typed && annot ? evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, annot, fu_MAP<fu_STR, s_Type>{}).type : s_Type{});
        s_SolvedNode default_1 = (typed && init ? solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, init, type_3, bool{}, 0) : s_SolvedNode{});
        args_1.push(s_Argument { fu_STR(name_3), fu_STR(autocall_1), s_Type(type_3), s_SolvedNode(default_1), int(arg.flags) });
        if (!arg.items[LET_INIT] && !(arg.flags & F_IMPLICIT))
            min_2++;

        if (arg.flags & F_REST_ARG)
            max_2 = int(0x7fffffffu);

    };
    s_Template template_1 = createTemplate(_scope_0, _ss_0, _current_fn_0, _helpers_0, node_1);
    const s_Target tDecl = Scope_add(_scope_0, "template"_fu, id_2, s_Type{}, node_1.flags, min_2, max_2, args_1, template_1, s_SolvedNode{}, local_of_2, fu_STR{}, status_1, module_0);
    if (node_1.flags & F_CONVERSION)
        _scope_0.converts.push(tDecl);

    return createFnDef(node_1.token, X_addrofTarget(tDecl), tDecl);
}

static s_SolvedNode uPrepStruct(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1)
{
    return __solveStruct(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, false, s_Node(node_1), s_Target{});
}

static s_SolvedNode unorderedPrep_A(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1)
{
    const fu_STR& k = node_1.kind;
    if (k == "fn"_fu)
        return uPrepFn_A(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1);

    if (k == "struct"_fu)
        return uPrepStruct(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1);

    fail(ctx_0, _info_0, _here_0, ("TODO: "_fu + k));
}

static void uPrepFn_B(s_Module& module_0, s_Scope& _scope_0, fu_VEC<s_Helpers>& _helpers_0, const s_Target& target_5)
{
    s_Template& template_1 = GET_mut(module_0, _scope_0, target_5).tEmplate;
    if (template_1.scope_memo)
        template_1.scope_memo = Scope_snap(_scope_0, _helpers_0);

}

static void unorderedPrep_B(s_Module& module_0, s_Scope& _scope_0, fu_VEC<s_Helpers>& _helpers_0, const s_Node& node_1, const s_Target& into)
{
    const fu_STR& k = node_1.kind;
    if (k == "fn"_fu)
        uPrepFn_B(module_0, _scope_0, _helpers_0, into);

}

static fu_VEC<s_SolvedNode> solveNodes(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const fu_VEC<s_Node>& nodes, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const bool deadcode_on_never, const int as_blocks_after, const int kills_1)
{
    fu_VEC<s_SolvedNode> result {};
    const s_TokenIdx here0 { _here_0 };
    fu_DEFER(_here_0 = here0);
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_Node& node_1 = nodes[i];
        if (!node_1)
            continue;

        int unorderedClass = unorderedClassify(node_1.kind);
        if (!unorderedClass)
        {
            _here_0 = (node_1.token ? node_1.token : _here_0);
            const s_Type& type_3 = (((i == (nodes.size() - 1)) && use_type_last) ? type_last : type_all);
            s_SolvedNode solved_2 = (((as_blocks_after >= 0) && (as_blocks_after <= i)) ? solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, type_3, 0, HM_CanBreak, 0, fu_STR{}) : solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, type_3, deadcode_on_never, ((i == (nodes.size() - 1)) ? kills_1 : (*(const int*)fu::NIL))));
            result += solved_2;
            if (deadcode_on_never && is_never(solved_2.type))
            {
                if (i < (nodes.size() - 1))
                    _notes_0 |= N_DeadCode;

                break;
            };
            continue;
        };
        const int i0 = i;
        int i1 = nodes.size();
        const int offset = (result.size() - i0);
        for (int i_1 = i0; i_1 < nodes.size(); i_1++)
        {
            const s_Node* _0;
            const s_Node& node_2 = (*(_0 = &(nodes[i_1])) ? *_0 : fail(ctx_0, _info_0, _here_0, "solveNodes, prep-a: falsy node"_fu));
            if (unorderedClassify(node_2.kind) != unorderedClass)
            {
                i1 = i_1;
                break;
            };
            _here_0 = (node_2.token ? node_2.token : _here_0);
            result += unorderedPrep_A(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_2);
        };
        if (!(i1 > i0))
            fail(ctx_0, _info_0, _here_0, fu_STR{});

        i = (i1 - 1);
        for (int i_1 = i0; i_1 < i1; i_1++)
        {
            const s_Node* _1;
            const s_Node& node_2 = (*(_1 = &(nodes[i_1])) ? *_1 : fail(ctx_0, _info_0, _here_0, "solveNodes, prep-b: falsy node"_fu));
            _here_0 = (node_2.token ? node_2.token : _here_0);
            unorderedPrep_B(module_0, _scope_0, _helpers_0, node_2, result.mutref((i_1 + offset)).target);
        };
        bool repeat = true;
        while (repeat)
        {
            repeat = false;
            for (int i_1 = i0; i_1 < i1; i_1++)
            {
                const s_Node* _2;
                const s_Node& node_2 = (*(_2 = &(nodes[i_1])) ? *_2 : fail(ctx_0, _info_0, _here_0, "solveNodes, solve: falsy node"_fu));
                _here_0 = (node_2.token ? node_2.token : _here_0);
                const s_Target into { result.mutref((i_1 + offset)).target };
                if (lazySolveStart(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, into, GET(ctx_0, module_0, _scope_0, into)))
                    repeat = true;

            };
        };
    };
    return result;
}

static s_SolvedNode solveRoot(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1)
{
    return solved(node_1, t_void, solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items, t_void, s_Type{}, bool{}, bool{}, -1, 0), s_Target{});
}

                                #ifndef DEFt_only_ZDQv
                                #define DEFt_only_ZDQv
inline const s_Node& only_ZDQv(const fu_VEC<s_Node>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_SolvedNode solveArgID(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, const s_Type& type_3)
{
    s_SolvedNode expr = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, only_ZDQv(node_1.items), type_3, bool{}, 0);
    return solved(node_1, expr.type, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(expr) } }, s_Target{});
}

static s_SolvedNode solveArrlit(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, const s_Type& type_3)
{
    s_Type itemType = (type_3 ? tryClear_array(type_3) : s_Type{});
    if (!itemType && isStruct(type_3))
        return solveCall(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, lookupStruct(type_3, module_0, ctx_0).target, 0);

    return createArrlit(ctx_0, _info_0, _here_0, _notes_0, node_1.token, solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items, itemType, s_Type{}, bool{}, bool{}, -1, 0), itemType);
}

extern const s_Type t_bool;

static s_SolvedNode solveIf(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, s_Type&& type_3)
{
    s_SolvedNode cond = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items[0], t_bool, bool{}, 0);
    if (is_never(cond.type))
    {
        _notes_0 |= N_DeadIf;
        return cond;
    };
    s_SolvedNode cons = solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items[1], type_3, 0, HM_CanBreak, 0, fu_STR{});
    s_SolvedNode alt = solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items[2], (type_3 ? type_3 : cons.type), 0, HM_CanBreak, 0, fu_STR{});
    if (!is_void(type_3))
    {
        type_3 = superType(ctx_0, _info_0, _here_0, "if/else: "_fu, cons.type, alt.type);
        if (!(is_ref(type_3) || !type_3.lifetime))
            fail(ctx_0, _info_0, _here_0, "[if] stray lifetime"_fu);

        maybeCopyOrMove(ctx_0, _info_0, _here_0, _notes_0, cons, type_3, false);
        maybeCopyOrMove(ctx_0, _info_0, _here_0, _notes_0, alt, type_3, false);
    };
    if (is_never(cons.type) && is_never(alt.type))
        type_3 = t_never;

    return solved(node_1, (type_3 ? type_3 : fail(ctx_0, _info_0, _here_0, fu_STR{})), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { s_SolvedNode(cond), s_SolvedNode(cons), s_SolvedNode(alt) } }, s_Target{});
}

static s_SolvedNode solveOr(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, s_Type&& type_3)
{
    fu_VEC<s_SolvedNode> items_5 = solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items, (is_void(type_3) ? t_bool : type_3), type_3, true, true, 1, 0);
    if (items_5.size() < 2)
        return static_cast<s_SolvedNode&&>(only_FnNW(items_5));

    if (is_void(type_3))
        type_3 = t_bool;

    if (!is_bool(type_3))
    {
        s_Type sumType {};
        bool hasNever = false;
        for (int i = items_5.size(); i-- > 0; )
        {
            s_SolvedNode item { items_5[i] };
            if (is_never(item.type))
            {
                hasNever = true;
                continue;
            };
            const s_SolvedNode& andLast = (hasNever && (item.kind == "and"_fu) && item.items ? item.items[(item.items.size() - 1)] : (*(const s_SolvedNode*)fu::NIL));
            const s_Type& itemType = ((andLast && !is_never(andLast.type)) ? andLast.type : item.type);
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
        {
            type_3 = sumType;
            for (int i = 0; i < items_5.size(); i++)
                maybeCopyOrMove(ctx_0, _info_0, _here_0, _notes_0, items_5.mutref(i), sumType, false);

        };
    };
    return solved(node_1, type_3, items_5, s_Target{});
}

                                #ifndef DEFt_only_Vh3M
                                #define DEFt_only_Vh3M
inline const s_SolvedNode& only_Vh3M(const fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_SolvedNode solveAnd(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, s_Type&& type_3)
{
    fu_VEC<s_SolvedNode> items_5 = solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items, (is_void(type_3) ? t_bool : type_3), type_3, true, true, 1, 0);
    if (items_5.size() < 2)
        return s_SolvedNode(only_Vh3M(items_5));

    if (is_void(type_3))
        type_3 = t_bool;

    if (!is_bool(type_3))
    {
        s_Type sumType {};
        for (int i = items_5.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items_5[i];
            if (is_never(item.type))
                continue;

            if (sumType)
            {
                sumType = type_trySuper(sumType, item.type);
                if (!is_ref(sumType))
                    break;

            }
            else
            {
                type_3 = item.type;
                sumType = item.type;
            };
        };
        if (!is_ref(sumType))
        {
            if (is_ref(type_3))
            {
                type_3 = clear_mutref(s_Type(type_3));
                type_3.lifetime = Lifetime_makeShared(type_3.lifetime);
            };
        }
        else
            type_3 = sumType;

    };
    return solved(node_1, type_3, items_5, s_Target{});
}

                                #ifndef DEF_HM_Anon
                                #define DEF_HM_Anon
inline constexpr short HM_Anon = (short(1) << short(2));
                                #endif

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

static s_SolvedNode solveLetStatement(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1)
{
    if (!(node_1.kind == "let"_fu))
        fail(ctx_0, _info_0, _here_0, (("Expected a `let` statement, got: `"_fu + node_1.kind) + "`."_fu));

    return solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, t_void, bool{}, 0);
}

static s_SolvedNode solveLoop(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1)
{
    const s_ScopeMemo scope0 = Scope_snap(_scope_0, _helpers_0);
    fu_DEFER(Scope_pop(_scope_0, scope0, _helpers_0));
    const int brk_idx = _helpers_0.size();
    _helpers_0 += s_Helpers { 0, fu_STR(node_1.value), (HM_Anon | HM_CanBreak), int(_current_fn_0.out.target.index), 0, s_Type{}, s_Type{}, fu_VEC<int>{} };
    const s_Node& n_init = node_1.items[LOOP_INIT];
    const s_Node& n_pre_cond = node_1.items[LOOP_COND];
    const s_Node& n_body = node_1.items[LOOP_BODY];
    const s_Node& n_post_cond = node_1.items[LOOP_POST_COND];
    const s_Node& n_post = node_1.items[LOOP_POST];
    s_SolvedNode init = (n_init ? solveLetStatement(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, n_init) : s_SolvedNode{});
    s_SolvedNode pre_cond = (n_pre_cond ? solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, n_pre_cond, t_bool, bool{}, 0) : s_SolvedNode{});
    s_SolvedNode body = (n_body ? solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, n_body, t_void, 0, HM_CanBreak, 0, fu_STR{}) : s_SolvedNode{});
    s_SolvedNode post_cond = (n_post_cond ? solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, n_post_cond, t_bool, bool{}, 0) : s_SolvedNode{});
    s_SolvedNode post = (n_post ? solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, n_post, t_void, bool{}, 0) : s_SolvedNode{});
    s_Helpers h { _helpers_0[brk_idx] };
    const short label_used = (h.mask & HM_LabelUsed);
    const s_Type& type_3 = ((!pre_cond && !post_cond && !label_used) ? t_never : t_void);
    return solved(node_1, type_3, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<5> { s_SolvedNode(init), s_SolvedNode(pre_cond), s_SolvedNode(body), s_SolvedNode(post_cond), s_SolvedNode(post) } }, (label_used ? s_Target { int(module_0.modid), int(h.target) } : s_Target{}));
}

static int Scope_lookupReturn(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_Helpers>& _helpers_0, const fu_STR& id_2, const bool lambdaOK)
{

    {
        fu_VEC<s_ScopeSkip>& ss = _ss_0.helpers;

        {
            int ssi = (ss.size() - 1);
            int ssN = ((ssi >= 0) ? (ss.mutref(ssi).end - 1) : int{});
            for (int i_1 = _helpers_0.size(); i_1-- > 0; )
            {
                if ((ssi >= 0) && (i_1 == ssN))
                {
                    i_1 = ss.mutref(ssi--).start;
                    ssN = ((ssi >= 0) ? (ss.mutref(ssi).end - 1) : int{});
                    continue;
                };
                s_Helpers& item = _helpers_0.mutref(i_1);
                if (!(item.mask & HM_CanReturn))
                    continue;

                if ((item.mask & HM_Lambda) && !lambdaOK)
                    continue;

                if (id_2 && (item.id != id_2))
                    continue;

                return i_1;
            };
        };
    };
    fail(ctx_0, _info_0, _here_0, (("No return `"_fu + id_2) + "` in scope."_fu));
}

                                #ifndef DEF_F_SINGLE_STMT
                                #define DEF_F_SINGLE_STMT
inline constexpr int F_SINGLE_STMT = (1 << 31);
                                #endif

static int Scope_lookupLabel(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_Helpers>& _helpers_0, const fu_STR& id_2, const bool cont)
{
    int CONTINUE_BELOW {};

    {
        fu_VEC<s_ScopeSkip>& ss = _ss_0.helpers;

        {
            int ssi = (ss.size() - 1);
            int ssN = ((ssi >= 0) ? (ss.mutref(ssi).end - 1) : int{});
            for (int i_1 = _helpers_0.size(); i_1-- > 0; )
            {
                if ((ssi >= 0) && (i_1 == ssN))
                {
                    i_1 = ss.mutref(ssi--).start;
                    ssN = ((ssi >= 0) ? (ss.mutref(ssi).end - 1) : int{});
                    continue;
                };
                s_Helpers& item = _helpers_0.mutref(i_1);
                if (i_1 < (CONTINUE_BELOW - 1))
                    i_1++;

                if (!(item.mask & HM_CanBreak))
                {
                    if (!CONTINUE_BELOW)
                    {
                        if (id_2 || !(item.mask & HM_Lambda))
                            continue;

                        if (!cont)
                        {
                            CONTINUE_BELOW = i_1;
                            continue;
                        };
                    };
                    return i_1;
                };
                if (!CONTINUE_BELOW)
                {
                    if (!(id_2 ? (item.id == id_2) : ((item.mask & HM_Anon) != short(0))))
                        continue;

                    if (cont)
                    {
                        i_1++;
                        if (!(i_1 < _helpers_0.size()))
                            fail(ctx_0, _info_0, _here_0, (("Cannot continue to label `"_fu + id_2) + "` from here, did you mean to `break`?"_fu));

                    };
                };
                return i_1;
            };
        };
    };
    fail(ctx_0, _info_0, _here_0, (("No label `"_fu + id_2) + "` in scope."_fu));
}

static s_Helpers& h(fu_VEC<s_Helpers>& _helpers_0, int& helpers_idx_0)
{
    return _helpers_0.mutref(helpers_idx_0);
}

static int& left(s_Target& target_5)
{
    return target_5.modid;
}

static s_Target Scope_addLabel(s_Module& module_0, s_Scope& _scope_0, int& _anons_0, const fu_STR& id_2, const int local_of_2)
{
    return Scope_create(_scope_0, "label"_fu, (id_2 ? fu_STR(id_2) : ANON(_anons_0)), s_Type{}, F_SHADOW, 0, 0, fu_VEC<s_Argument>{}, s_SolvedNode{}, local_of_2, 0u, fu_VEC<s_ScopeItem>{}, module_0);
}

static s_SolvedNode createJump(const s_TokenIdx& token_2, const s_Target& target_5)
{
    return s_SolvedNode { "jump"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token_2), s_Type(t_never), s_Target(target_5) };
}

static s_SolvedNode createMove(const s_SolvedNode& node_1)
{
    return s_SolvedNode { "move"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(node_1) } }, s_TokenIdx(node_1.token), clear_refs(s_Type(node_1.type)), s_Target{} };
}

static int& right(s_Target& target_5)
{
    return target_5.index;
}

static s_SolvedNode solveJump(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, const int kills_1)
{
    int helpers_idx = ((node_1.kind == "return"_fu) ? Scope_lookupReturn(ctx_0, _info_0, _here_0, _ss_0, _helpers_0, node_1.value, !!(node_1.flags & F_SINGLE_STMT)) : Scope_lookupLabel(ctx_0, _info_0, _here_0, _ss_0, _helpers_0, node_1.value, (node_1.kind == "continue"_fu)));
    s_Type* _0;
    s_SolvedNode expr = (node_1.items ? solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, only_ZDQv(node_1.items), (*(_0 = &(h(_helpers_0, helpers_idx).ret_actual)) ? *_0 : h(_helpers_0, helpers_idx).ret_expect), bool{}, (helpers_idx + 1)) : s_SolvedNode{});
    if (is_never(expr.type))
        return expr;

    const bool redundant = (kills_1 == (helpers_idx + 1));
    if (redundant && is_void(expr.type))
        return expr;

    while (h(_helpers_0, helpers_idx).kills)
        helpers_idx = (h(_helpers_0, helpers_idx).kills - 1);

    if (redundant && !(h(_helpers_0, helpers_idx).mask & HM_Function))
        return expr;

    s_Target target_5 {};
    int* _1;
    left(target_5) = (*(_1 = &(h(_helpers_0, helpers_idx).target)) ? *_1 : *_1 = Scope_addLabel(module_0, _scope_0, _anons_0, h(_helpers_0, helpers_idx).id, h(_helpers_0, helpers_idx).local_of).index);
    h(_helpers_0, helpers_idx).mask |= HM_LabelUsed;
    if (!node_1.items)
    {
        reportReturnType(ctx_0, _info_0, _here_0, _helpers_0, helpers_idx, t_void);
        return createJump(node_1.token, target_5);
    };
    if (is_ref(expr.type))
    {
        const int ltCompare = Lifetime_compareToIndex(expr.type.lifetime, left(target_5));
        if ((ltCompare >= 0))
        {
            if (ltCompare > 0)
                expr = createMove(expr);
            else
                expr = createCopy(expr);

        };
    };
    reportReturnType(ctx_0, _info_0, _here_0, _helpers_0, helpers_idx, expr.type);
    int* _2;
    right(target_5) = Scope_create(_scope_0, "jump"_fu, fu_STR{}, s_Type{}, 0, 0, 0, fu_VEC<s_Argument>{}, expr, (*(_2 = &(left(target_5))) ? *_2 : fail(ctx_0, _info_0, _here_0, fu_STR{})), 0u, fu_VEC<s_ScopeItem>{}, module_0).index;
    h(_helpers_0, helpers_idx).returns += right(target_5);
    return createJump(node_1.token, target_5);
}

static s_SolvedNode solveInt(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_Node& node_1, const s_Type& type_3)
{
    return solved(node_1, solveInt(ctx_0, _info_0, _here_0, node_1.value, type_3), fu_VEC<s_SolvedNode>{}, s_Target{});
}

static s_SolvedNode solveNum(const s_Node& node_1, const s_Type& type_3)
{
    return solved(node_1, solveNum(node_1.value, type_3), fu_VEC<s_SolvedNode>{}, s_Target{});
}

static s_SolvedNode createDefinit(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Type&& type_3)
{
    const s_TokenIdx token_2 { (_here_0 ? _here_0 : fail(ctx_0, _info_0, _here_0, fu_STR{})) };
    if (is_ref(type_3))
        type_3.lifetime = Lifetime_static();

    if (is_integral(type_3))
        return s_SolvedNode { "int"_fu, 0, "0"_fu, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token_2), s_Type(type_3), s_Target{} };

    if (is_floating_pt(type_3))
        return s_SolvedNode { "real"_fu, 0, "0"_fu, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token_2), s_Type(type_3), s_Target{} };

    return s_SolvedNode { "definit"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token_2), s_Type(type_3), s_Target{} };
}

static s_SolvedNode solveStr(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_Type& t_string_0, const s_Node& node_1)
{
    if (!node_1.value)
        return createDefinit(ctx_0, _info_0, _here_0, add_ref(s_Type(t_string_0), Lifetime_temporary()));

    return solved(node_1, t_string_0, fu_VEC<s_SolvedNode>{}, s_Target{});
}

static s_SolvedNode solveChar(const s_Node& node_1)
{
    return solved(node_1, t_byte, fu_VEC<s_SolvedNode>{}, s_Target{});
}

static s_SolvedNode tryCreateDefinit(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_Type& type_3)
{
    if (CANNOT_definit_mutrefs && is_mutref(type_3))
        return s_SolvedNode{};

    return createDefinit(ctx_0, _info_0, _here_0, s_Type(type_3));
}

static s_SolvedNode solveDefinit(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_Type& type_3)
{
    if (!type_3)
        fail(ctx_0, _info_0, _here_0, "Cannot solve definit, no inferred type."_fu);

    s_SolvedNode _0 {};
    return (_0 = tryCreateDefinit(ctx_0, _info_0, _here_0, type_3)) ? static_cast<s_SolvedNode&&>(_0) : fail(ctx_0, _info_0, _here_0, ("Cannot definit: "_fu + serializeType(type_3)));
}

static s_SolvedNode solveCatch(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1)
{
    if (!(node_1.items.size() == 3))
        fail(ctx_0, _info_0, _here_0, fu_STR{});

    s_SolvedNode var_ok = solveLetStatement(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items[0]);
    const s_ScopeMemo scope0 = Scope_snap(_scope_0, _helpers_0);
    fu_DEFER(Scope_pop(_scope_0, scope0, _helpers_0));
    s_SolvedNode var_err = solveLetStatement(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items[1]);
    s_SolvedNode cAtch = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items[2], s_Type{}, bool{}, 0);
    s_Type& type_3 = var_ok.type;
    if (!(is_never(cAtch.type)))
        fail(ctx_0, _info_0, _here_0, "[let catch]: catch clause must exit local scope."_fu);

    if (!((var_err.kind == "let"_fu) && isAssignableAsArgument(var_err.type, t_string_0)))
        fail(ctx_0, _info_0, _here_0, ("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu));

    return solved(node_1, type_3, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { s_SolvedNode(var_ok), s_SolvedNode(var_err), s_SolvedNode(cAtch) } }, s_Target{});
}

static s_SolvedNode solveImport(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Node& node_1)
{
    const s_Module& m = findModule(ctx_0, _info_0, _here_0, node_1.value);
    Scope_import(ctx_0, _info_0, _here_0, _scope_0, _ss_0, m.modid, bool{});
    return createEmpty(ctx_0, _info_0, _here_0, "empty"_fu, t_void, s_Target{});
}

static s_SolvedNode solveDefer(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1)
{
    s_SolvedNode item = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, only_ZDQv(node_1.items), s_Type{}, bool{}, 0);
    return solved(node_1, t_void, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(item) } }, s_Target{});
}

static s_SolvedNode solveTryCatch(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1)
{
    if (!(node_1.items.size() == 3))
        fail(ctx_0, _info_0, _here_0, fu_STR{});

    const s_ScopeMemo scope0 = Scope_snap(_scope_0, _helpers_0);
    s_SolvedNode tRy = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items[0], s_Type{}, bool{}, 0);
    Scope_pop(_scope_0, scope0, _helpers_0);
    const s_ScopeMemo scope0_1 = Scope_snap(_scope_0, _helpers_0);
    s_SolvedNode err = solveLetStatement(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items[1]);
    s_SolvedNode cAtch = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items[2], s_Type{}, bool{}, 0);
    Scope_pop(_scope_0, scope0_1, _helpers_0);
    if (!((err.kind == "let"_fu) && isAssignableAsArgument(err.type, t_string_0)))
        fail(ctx_0, _info_0, _here_0, ("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu));

    const s_Type& type_3 = ((is_never(tRy.type) && is_never(cAtch.type)) ? t_never : t_void);
    return solved(node_1, type_3, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { s_SolvedNode(tRy), s_SolvedNode(err), s_SolvedNode(cAtch) } }, s_Target{});
}

static s_SolvedNode solveTypedef(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1)
{
    s_SolvedNode annot = evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, only_ZDQv(node_1.items), fu_MAP<fu_STR, s_Type>{});
    if (isStruct(annot.type))
        Scope_set(_scope_0, node_1.value, lookupStruct(annot.type, module_0, ctx_0).target, false);
    else
        Scope_Typedef(_scope_0, node_1.value, annot.type, node_1.flags, s_Template{}, fu_STR{}, 0u, module_0);

    return createEmpty(ctx_0, _info_0, _here_0, "empty"_fu, t_void, s_Target{});
}

static s_SolvedNode solveTypeAssert(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1)
{
    const s_Node& left_1 = node_1.items[0];
    const s_Node& right_1 = node_1.items[1];
    s_Type expect = evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, right_1, fu_MAP<fu_STR, s_Type>{}).type;
    s_SolvedNode actual = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, left_1, expect, bool{}, 0);
    checkAssignable(ctx_0, _info_0, _here_0, expect, actual.type, "Type assertion failed"_fu, fu_STR{}, fu_STR{});
    return actual;
}

static s_SolvedNode solveTypeParam(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Node& node_1)
{
    return solved(node_1, evalTypeParam(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, node_1.value, fu_MAP<fu_STR, s_Type>{}), fu_VEC<s_SolvedNode>{}, s_Target{});
}

static void visitScope(s_ScopeSkipMemos& _ss_0, const fu_STR& id_2_0, bool& shadow_0, fu_VEC<s_Target>& result_0, fu::view<s_ScopeItem> items_5)
{
    int scope_iterator {};
    s_Target target_5 {};
    bool shadows {};
    while (!shadow_0 && (target_5 = search(items_5, id_2_0, scope_iterator, _ss_0.items, shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
        result_0.push(target_5);

}

                                #ifndef DEFt_each_tojR
                                #define DEFt_each_tojR
inline void each_tojR(s_ScopeSkipMemos& _ss_0, const fu_STR& id_2_0, bool& shadow_0, fu_VEC<s_Target>& result_0, const fu_VEC<s_Struct>& a, int)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Struct& sTruct = a[i];
        visitScope(_ss_0, id_2_0, shadow_0, result_0, sTruct.items);
    };
}
                                #endif

static void visitTypes(s_ScopeSkipMemos& _ss_0, const fu_STR& id_2_0, bool& shadow_0, fu_VEC<s_Target>& result_0, const s_Module& module_1)
{
    each_tojR(_ss_0, id_2_0, shadow_0, result_0, module_1.out.types, 0);
}

                                #ifndef DEFt_each_fb8Q
                                #define DEFt_each_fb8Q
inline void each_fb8Q(const s_Context& ctx_0, s_ScopeSkipMemos& _ss_0, const fu_STR& id_2_0, bool& shadow_0, fu_VEC<s_Target>& result_0, fu_VEC<int>& items_5, fu_VEC<s_ScopeSkip>& scope_skip_1, int, const int start_1)
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
            int& import = items_5.mutref(i_1);
            visitTypes(_ss_0, id_2_0, shadow_0, result_0, ctx_0.modules[import]);
        };
        i0 = ss.end;
    };
}
                                #endif

static s_SolvedNode solveAddrOfFn(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Node& node_1)
{
    const fu_STR& id_2 = node_1.value;
    bool shadow = false;
    fu_VEC<s_Target> result {};
    visitScope(_ss_0, id_2, shadow, result, _scope_0.items);
    if (node_1.flags & F_ACCESS)
    {
        visitTypes(_ss_0, id_2, shadow, result, module_0);
        each_fb8Q(ctx_0, _ss_0, id_2, shadow, result, _scope_0.imports, _ss_0.imports, 0, 0);
    };
    if (!(result))
        fail(ctx_0, _info_0, _here_0, (("No `fn "_fu + id_2) + "` in scope."_fu));

    s_Type type_3 = s_Type { s_ValueType { 0, 0, packAddrOfFn(result) }, s_Lifetime{}, s_Effects{} };
    return createEmpty(ctx_0, _info_0, _here_0, "empty"_fu, type_3, s_Target{});
}

static s_SolvedNode solveDeclExpr(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1)
{
    return s_SolvedNode(only_Vh3M(solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(node_1) } }, s_Type{}, s_Type{}, bool{}, bool{}, -1, 0)));
}

static void walk(const fu_STR& placeholder_0, const s_ScopeItem& field_0, s_Node& node_3)
{
    for (int i = 0; i < node_3.items.size(); i++)
        walk(placeholder_0, field_0, node_3.items.mutref(i));

    if (node_3.value == placeholder_0)
    {
        if ((node_3.items.size() == 1) && (node_3.kind == "call"_fu))
            node_3.value = field_0.id;
        else if (node_3.kind == "str"_fu)
            node_3.value = field_0.id;

    };
}

inline static s_Node astReplace_dyAE(const fu_STR& placeholder_0, const s_ScopeItem& field_0, const s_Node& node_2, int)
{
    s_Node node_3 { node_2 };
    walk(placeholder_0, field_0, node_3);
    return node_3;
}

static s_SolvedNode solveForFieldsOf(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1)
{
    const fu_STR& placeholder = node_1.value;
    const s_Node& body_template = node_1.items[1];
    s_Type fields_of = evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1.items[0], fu_MAP<fu_STR, s_Type>{}).type;
    if (!(isStruct(fields_of)))
        fail(ctx_0, _info_0, _here_0, (("[for fieldname]: This is not a struct: `"_fu + serializeType(fields_of)) + "`."_fu));

    const fu_VEC<s_ScopeItem>& fields = lookupStruct(fields_of, module_0, ctx_0).items;
    fu_VEC<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        if (GET(ctx_0, module_0, _scope_0, target(field)).kind == "field"_fu)
            items_ast += astReplace_dyAE(placeholder, field, body_template, 0);

    };
    fu_VEC<s_SolvedNode> items_5 = solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, items_ast, s_Type{}, s_Type{}, bool{}, true, -1, 0);
    const s_Type& type_3 = (is_never(last_Vh3M(items_5).type) ? t_never : t_void);
    return createBlock(node_1.token, type_3, items_5, s_Target{});
}

static s_SolvedNode solveNode(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, fu_MAP<fu_STR, s_Target>& _specs_0, const s_Type& t_string_0, const s_Node& node_1, const s_Type& type_3, const bool deadcode_on_never, const int kills_1)
{
    const fu_STR& k = node_1.kind;
    if (k == "root"_fu)
        return solveRoot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1);

    if (k == "block"_fu)
        return solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, type_3, 0, HM_CanBreak, kills_1, fu_STR{});

    if (k == "argid"_fu)
        return solveArgID(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, type_3);

    if (k == "let"_fu)
        return solveLet(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, s_Type{}, s_Target{}, deadcode_on_never);

    if (k == "call"_fu)
        return solveCall(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, s_Target{}, kills_1);

    if (k == "arrlit"_fu)
        return solveArrlit(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, type_3);

    if (k == "if"_fu)
        return solveIf(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, s_Type(type_3));

    if (k == "or"_fu)
        return solveOr(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, s_Type(type_3));

    if (k == "and"_fu)
        return solveAnd(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, s_Type(type_3));

    if (k == "loop"_fu)
        return solveLoop(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1);

    if (k == "break"_fu)
        return solveJump(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, kills_1);

    if (k == "return"_fu)
        return solveJump(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, kills_1);

    if (k == "continue"_fu)
        return solveJump(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1, kills_1);

    if (k == "int"_fu)
        return solveInt(ctx_0, _info_0, _here_0, node_1, type_3);

    if (k == "real"_fu)
        return solveNum(node_1, type_3);

    if (k == "str"_fu)
        return solveStr(ctx_0, _info_0, _here_0, t_string_0, node_1);

    if (k == "char"_fu)
        return solveChar(node_1);

    if (k == "definit"_fu)
        return solveDefinit(ctx_0, _info_0, _here_0, type_3);

    if (k == "catch"_fu)
        return solveCatch(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1);

    if (k == "import"_fu)
        return solveImport(ctx_0, _info_0, _here_0, _scope_0, _ss_0, node_1);

    if (k == "defer"_fu)
        return solveDefer(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1);

    if (k == "try"_fu)
        return solveTryCatch(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1);

    if (k == "typedef"_fu)
        return solveTypedef(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1);

    if (k == "typeassert"_fu)
        return solveTypeAssert(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1);

    if (k == "typeparam"_fu)
        return solveTypeParam(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, node_1);

    if (k == "addroffn"_fu)
        return solveAddrOfFn(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, node_1);

    if (k == "fn"_fu)
        return solveDeclExpr(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1);

    if (k == "struct"_fu)
        return solveDeclExpr(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1);

    if (k == "forfieldsof"_fu)
        return solveForFieldsOf(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, _specs_0, t_string_0, node_1);

    fail(ctx_0, _info_0, _here_0, ("TODO: "_fu + k));
}

s_SolverOutput solve(const s_Node& parse_3, const s_Context& ctx, s_Module& module)
{
    fu_VEC<s_Info> _info {};
    s_TokenIdx _here {};
    s_Scope _scope {};
    s_ScopeMemo _root_scope {};
    s_ScopeSkipMemos _ss {};
    fu_VEC<s_ScopeItem> _field_items {};
    int _notes {};
    s_CurrentFn _current_fn {};
    fu_VEC<s_Helpers> _helpers {};
    int _anons {};
    fu_MAP<fu_STR, s_Target> _specs {};
    s_Type t_string = createArray(t_byte);
    if (module.modid)
    {
        _scope.imports += module.modid;
        _Scope_import__forceCopy(ctx, _scope, 0, bool{});
    }
    else
        _scope = listGlobals(module);

    s_SolvedNode root_2 = solveNode(ctx, module, _info, _here, _scope, _root_scope, _ss, _field_items, _notes, _current_fn, _helpers, _anons, _specs, t_string, parse_3, s_Type{}, bool{}, 0);
    if (_current_fn)
        fail(ctx, _info, _here, "non-empty _current_fn."_fu);

    return s_SolverOutput { s_SolvedNode(root_2), Scope_exports(_scope, module.modid, _field_items), int(_notes) };
}

#endif
