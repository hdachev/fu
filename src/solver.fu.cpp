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
inline s_ScopeSkip& last_314q(fu_VEC<s_ScopeSkip>&);
inline s_SolvedNode& last_kEWY(fu_VEC<s_SolvedNode>&);
int Lifetime_compareToIndex(const s_Lifetime&, int);
int MODID(const s_Module&);
int Region_toArgIndex(const s_Region&);
int Region_toLocalIndex(const s_Region&);
int parse10i32(int&, const fu_STR&);
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
s_Target Scope_Typedef(s_Scope&, const fu_STR&, const s_Type&, int, const s_Template&, const fu_STR&, uint32_t, const s_Module&);
s_Target Scope_add(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, int, int, const fu_VEC<s_Argument>&, const s_Template&, const s_SolvedNode&, int, const fu_STR&, uint32_t, const s_Module&);
s_Target Scope_create(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, int, int, const fu_VEC<s_Argument>&, const s_SolvedNode&, int, uint32_t, const fu_VEC<s_ScopeItem>&, const s_Module&);
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
static bool lazySolveStart(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, const s_Type&, const s_Target&, const s_Overload&);
static fu_STR mangleArguments(const s_Context&, fu_VEC<s_Info>&, s_TokenIdx&, fu::view<s_SolvedNode>, fu::view<int>);
static fu_VEC<s_SolvedNode> solveNodes(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, const s_Type&, const fu_VEC<s_Node>&, const s_Type&, const s_Type&, bool, bool, int, int);
static int& left(s_Target&);
static int& right(s_Target&);
static s_Helpers& h(fu_VEC<s_Helpers>&, int&);
static s_Overload GET(const s_Context&, s_Module&, s_Scope&, const s_Target&);
static s_Overload fnd(const s_Context&, s_Module&, s_Scope&, int);
static s_SolvedNode createLet(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, int&, s_CurrentFn&, const fu_STR&, int, const s_SolvedNode&);
static s_SolvedNode evalTypeAnnot(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, const s_Type&, const s_Node&, const fu_MAP<fu_STR, s_Type>&);
static s_SolvedNode solveInt(const s_Context&, fu_VEC<s_Info>&, s_TokenIdx&, const s_Node&, const s_Type&);
static s_SolvedNode solveLet(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, const s_Type&, const s_Node&, const s_Type&, const s_Target&, bool);
static s_SolvedNode solveLet(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, s_CurrentFn&, s_SolvedNode&&, const fu_STR&, const s_Target&, bool);
static s_SolvedNode solveLetLike_dontTouchScope(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, const s_Type&, const s_Node&, const s_Type&, bool);
static s_SolvedNode solveNode(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, const s_Type&, const s_Node&, const s_Type&, bool, int);
static s_SolvedNode solveNum(const s_Node&, const s_Type&);
static s_SolvedNode solveStr(const s_Context&, fu_VEC<s_Info>&, s_TokenIdx&, const s_Type&, const s_Node&);
static s_Target Binding(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, s_CurrentFn&, const fu_STR&, s_Type&&, int&, bool&, const s_Target&);
static s_Target tryMatch__mutargs(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, const s_Type&, const s_Scope&, bool, fu_STR&&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&, int, const s_Target&);
static s_Type Scope_lookupType(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeSkipMemos&, const s_Node&);
static s_Type T(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, int&, s_CurrentFn&, fu_VEC<s_Helpers>&, int&, const s_Type&, const s_Node&, const fu_MAP<fu_STR, s_Type>&, int);
static void Scope_import(const s_Context&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeSkipMemos&, int);
static void descend(const s_Context&, s_Module&, fu_VEC<s_Info>&, s_TokenIdx&, s_Scope&, s_ScopeSkipMemos&, const s_Scope&, bool, const s_Type&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, int, const fu_VEC<s_ScopeSkip>&, const s_Type&, bool, bool);
void Scope_pop(s_Scope&, const s_ScopeMemo&, fu_VEC<s_Helpers>&);
void Scope_set(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);
void Scope_set(s_Scope&, const fu_STR&, const s_Target&, bool);
void add(s_BitSet&, int);

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
    uint32_t packed;
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
    uint32_t status;
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

                                #ifndef DEF_s_ModuleOutputs
                                #define DEF_s_ModuleOutputs
struct s_ModuleOutputs
{
    fu_VEC<int> deps;
    fu_VEC<s_Struct> types;
    fu_MAP<fu_STR, s_Target> specs;
    s_SolverOutput solve;
    fu_STR cpp;
    s_ModuleOutputs(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs(s_ModuleOutputs&&) = default;
    s_ModuleOutputs& operator=(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs& operator=(s_ModuleOutputs&&) = default;
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
inline const int N_FnRecursion = (1 << 0);
                                #endif

                                #ifndef DEF_N_FnResolve
                                #define DEF_N_FnResolve
inline const int N_FnResolve = (1 << 1);
                                #endif

                                #ifndef DEF_N_FnReopen
                                #define DEF_N_FnReopen
inline const int N_FnReopen = (1 << 2);
                                #endif

                                #ifndef DEF_N_TypeRecursion
                                #define DEF_N_TypeRecursion
inline const int N_TypeRecursion = (1 << 3);
                                #endif

                                #ifndef DEF_N_TypeResolve
                                #define DEF_N_TypeResolve
inline const int N_TypeResolve = (1 << 4);
                                #endif

                                #ifndef DEF_N_TypeReopen
                                #define DEF_N_TypeReopen
inline const int N_TypeReopen = (1 << 5);
                                #endif

                                #ifndef DEF_N_DeadCode
                                #define DEF_N_DeadCode
inline const int N_DeadCode = (1 << 6);
                                #endif

                                #ifndef DEF_N_DeadCall
                                #define DEF_N_DeadCall
inline const int N_DeadCall = (1 << 7);
                                #endif

                                #ifndef DEF_N_DeadLet
                                #define DEF_N_DeadLet
inline const int N_DeadLet = (1 << 8);
                                #endif

                                #ifndef DEF_N_DeadIf
                                #define DEF_N_DeadIf
inline const int N_DeadIf = (1 << 9);
                                #endif

static const bool OPTI_autoshadow = true;

static const bool OPTI_dedupe_vars = true;

static const bool OPTI_flatten_blocks = true;

static const bool USE_nontriv_autocopy = true;

static const bool USE_retval_narrowing = false;

static const bool USE_ref_to_mutref = false;

static const bool SELF_TEST = true;

static const bool CANNOT_definit_mutrefs = true;

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

static s_SolvedNode solved(const s_Node& node, const s_Type& type, const fu_VEC<s_SolvedNode>& items, const s_Target& target)
{
    return s_SolvedNode { fu_STR(node.kind), int(node.flags), fu_STR(node.value), fu_VEC<s_SolvedNode>(items), s_TokenIdx(node.token), s_Type(type), s_Target(target) };
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
inline const s_Type t_void = s_Type { s_ValueType { 0, 0, "void"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

static int unorderedClassify(const fu_STR& kind)
{
    if (kind == "fn"_fu)
        return 1;

    if (kind == "struct"_fu)
        return 10;

    return 0;
}

                                #ifndef DEFt_if_last_kEWY
                                #define DEFt_if_last_kEWY
inline const s_SolvedNode& if_last_kEWY(fu_VEC<s_SolvedNode>& s)
{
    return s.size() ? s.mutref((s.size() - 1)) : fu::Default<s_SolvedNode>::value;
}
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
inline const s_Type t_never = s_Type { s_ValueType { 0, 0, "never"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

[[noreturn]] static fu::never fail(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, fu_STR&& reason)
{
    s_Token here = _token(_here_0, ctx_0);
    if (!reason)
        reason = (("Unexpected `"_fu + here.value) + "`."_fu);

    fu_STR fname = _fname(_here_0, ctx_0);
    fu_STR addr = ((("@"_fu + here.line) + ":"_fu) + here.col);
    for (int i = _info_0.size(); i-- > 0; )
    {
        s_Info info { _info_0[i] };
        s_Token here_1 = _token(info.here, ctx_0);
        reason += (here_1 ? ((((("\n\t@"_fu + here_1.line) + ":"_fu) + here_1.col) + ": "_fu) + info.text) : ("\n\t"_fu + info.text));
    };
    fu::fail(((((fname + " "_fu) + addr) + ":\n\t"_fu) + reason));
}

                                #ifndef DEF_HM_Function
                                #define DEF_HM_Function
inline const short HM_Function = (short(1) << short(3));
                                #endif

static void checkAssignable(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_Type& host, const s_Type& guest, const fu_STR& err, const fu_STR& id, const fu_STR& sep)
{
    if (!(isAssignable((host ? host : fail(ctx_0, _info_0, _here_0, "Bad host type."_fu)), (guest ? guest : fail(ctx_0, _info_0, _here_0, "Bad guest type."_fu)))))
        fail(ctx_0, _info_0, _here_0, (((((err + (id ? ((" `"_fu + id) + "`"_fu) : fu_STR{})) + ": "_fu) + humanizeType(host)) + (sep ? fu_STR(sep) : " <- "_fu)) + humanizeType(guest)));

}

static s_Type superType(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const fu_STR& reason, const s_Type& a, const s_Type& b)
{
    s_Type _0 {};
    return (_0 = type_trySuper(a, b)) ? static_cast<s_Type&&>(_0) : fail(ctx_0, _info_0, _here_0, (((((reason + "No common supertype: `"_fu) + serializeType(a)) + "` <-> `"_fu) + serializeType(b)) + "`."_fu));
}

static void reportReturnType(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, fu_VEC<s_Helpers>& _helpers_0, const int helpers_idx, const s_Type& type)
{
    s_Helpers& h = _helpers_0.mutref(helpers_idx);
    if (h.ret_expect && (h.mask & HM_Function))
        checkAssignable(ctx_0, _info_0, _here_0, h.ret_expect, type, "Expression not assignable to return annotation"_fu, fu_STR{}, fu_STR{});

    h.ret_actual = (h.ret_actual ? superType(ctx_0, _info_0, _here_0, "Subsequent return: "_fu, h.ret_actual, type) : s_Type(type));
    if (!(h.ret_actual))
        fail(ctx_0, _info_0, _here_0, "Can't be null past this point."_fu);

}

                                #ifndef DEFt_last_kEWY
                                #define DEFt_last_kEWY
inline s_SolvedNode& last_kEWY(fu_VEC<s_SolvedNode>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static s_Overload& GET_mut(s_Module& module_0, s_Scope& _scope_0, const s_Target& target)
{
    if (!((target.index > 0) && (target.modid == MODID(module_0))))
        fu_ASSERT();

    return _scope_0.overloads.mutref((target.index - 1));
}

static s_SolvedNode createCopy(const s_SolvedNode& node)
{
    return s_SolvedNode { "copy"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(node) } }, s_TokenIdx(node.token), clear_refs(s_Type(node.type)), s_Target{} };
}

static void maybeCopyOrMove(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_SolvedNode& node, const s_Type& slot, const bool isArgument)
{
    if (!is_mutref(slot))
        node.type = clear_mutref(s_Type(node.type));

    if (is_ref(slot))
    {
        if ((node.kind == "definit"_fu) && isArgument)
            node.type = clear_refs(s_Type(node.type));

        return;
    };
    if (!is_ref(node.type))
        return;

    if (node.kind == "definit"_fu)
    {
        node.type = clear_refs(s_Type(node.type));
        return;
    };
    if (!(slot.vtype.quals & q_rx_copy))
        fail(ctx_0, _info_0, _here_0, "Needs an explicit STEAL or CLONE."_fu);

    if (!USE_nontriv_autocopy && !(node.type.vtype.quals & q_trivial))
        fail(ctx_0, _info_0, _here_0, "Non-trivial implicit copy."_fu);

    node = createCopy(node);
}

                                #ifndef DEFt_last_XB32
                                #define DEFt_last_XB32
inline const s_SolvedNode& last_XB32(const fu_VEC<s_SolvedNode>& s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode createBlock(const s_TokenIdx& token, const s_Type& type, const fu_VEC<s_SolvedNode>& items, const s_Target& label)
{
    if (!label && items.size())
    {
        bool ok = true;
        for (int i = 0; i < (items.size() - 1); i++)
        {
            if (items[i].kind != "empty"_fu)
            {
                ok = false;
                break;
            };
        };
        if (ok)
            return s_SolvedNode(last_XB32(items));

    };
    return s_SolvedNode { "block"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>(items), s_TokenIdx(token), s_Type(type), s_Target(label) };
}

                                #ifndef DEF_HM_LabelUsed
                                #define DEF_HM_LabelUsed
inline const short HM_LabelUsed = (short(1) << short(6));
                                #endif

static s_SolvedNode solveBlock(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, const s_Type& type, const int fnbody_of, const short mask, const int kills)
{
    const s_TokenIdx& token = node.token;
    fu_VEC<s_Node> nodes = ((node.kind == "block"_fu) ? fu_VEC<s_Node>(node.items) : fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(node) } });
    const fu_STR& id = ((node.kind == "block"_fu) ? node.value : fu::Default<fu_STR>::value);
    const s_ScopeMemo scope0 = Scope_snap(_scope_0, _helpers_0);
    fu_DEFER(Scope_pop(_scope_0, scope0, _helpers_0));
    const int helpers_idx = _helpers_0.size();
    _helpers_0 += s_Helpers { int(fnbody_of), fu_STR(id), short(mask), (fnbody_of ? -1 : int(_current_fn_0.out.target.index)), int(kills), s_Type(type), s_Type{}, fu_VEC<int>{} };
    const bool expr = (!fnbody_of && !is_void(type));
    fu_VEC<s_SolvedNode> items = solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, nodes, t_void, type, expr, true, -1, (helpers_idx + 1));
    s_Helpers& h = _helpers_0.mutref(helpers_idx);
    if (fnbody_of)
    {
        if (is_never(if_last_kEWY(items).type))
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
    if (!fnbody_of && items && !is_void(h.ret_actual))
        reportReturnType(ctx_0, _info_0, _here_0, _helpers_0, helpers_idx, last_kEWY(items).type);

    if (!is_ref(h.ret_actual))
    {
        for (int i = 0; i < h.returns.size(); i++)
        {
            s_Overload& ret = GET_mut(module_0, _scope_0, s_Target { int(module_0.modid), int(h.returns.mutref(i)) });
            maybeCopyOrMove(ctx_0, _info_0, _here_0, ret.solved, h.ret_actual, false);
        };
        if (!fnbody_of && items && !is_void(h.ret_actual))
            maybeCopyOrMove(ctx_0, _info_0, _here_0, last_kEWY(items), h.ret_actual, false);

    };
    if (OPTI_flatten_blocks && items.size())
    {
        for (; ; )
        {
            s_SolvedNode tail { last_kEWY(items) };
            if ((tail.kind != "block"_fu) || tail.target)
                break;

            fu_VEC<s_SolvedNode> unwrap { tail.items };
            items.pop();
            items += unwrap;
        };
    };
    return createBlock(token, (h.ret_actual ? h.ret_actual : t_void), items, ((h.mask & HM_LabelUsed) ? s_Target { int(module_0.modid), int(h.target) } : s_Target{}));
}

                                #ifndef DEF_HM_CanBreak
                                #define DEF_HM_CanBreak
inline const short HM_CanBreak = (short(1) << short(0));
                                #endif

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline const int F_TEMPLATE = (1 << 28);
                                #endif

                                #ifndef DEF_SS_LAZY
                                #define DEF_SS_LAZY
inline const uint32_t SS_LAZY = (0x1u << 0u);
                                #endif

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline const int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline const int LET_TYPE = 0;
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline const int LET_INIT = 1;
                                #endif

static s_Type T(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node_0, const fu_MAP<fu_STR, s_Type>& typeParams_0, const int i)
{
    return evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node_0.items[i], typeParams_0).type;
}

                                #ifndef DEF_F_QUALIFIED
                                #define DEF_F_QUALIFIED
inline const int F_QUALIFIED = (1 << 6);
                                #endif

static const s_Module& findModule(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const fu_STR& fuzimport)
{
    fu_STR fname = resolveFile_x(fuzimport, ctx_0);
    const fu_VEC<s_Module>& modules = ctx_0.modules;
    for (int i = 1; i < modules.size(); i++)
    {
        const s_Module& m = modules[i];
        if (m.fname == fname)
            return m;

    };
    fail(ctx_0, _info_0, _here_0, ("Cannot locate: "_fu + fname));
}

static const s_Scope& dequalify_andGetScope(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, fu_STR& id)
{
    const int split = fu::lfind(id, std::byte('\t'), 0);
    if (!((split >= 0)))
        fail(ctx_0, _info_0, _here_0, fu_STR{});

    fu_STR fname = fu::slice(id, 0, split);
    id = fu::slice(id, (split + 1));
    const s_Module& other = findModule(ctx_0, _info_0, _here_0, fname);
    if (other.modid != module_0.modid)
        return other.out.solve.scope;

    return _scope_0;
}

static int countUsings(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_ScopeSkipMemos& _ss_0, const s_Scope& scope, const bool local_scope)
{
    const fu_VEC<s_ScopeSkip>& scope_skip = (local_scope ? _ss_0.usings : fu::Default<fu_VEC<s_ScopeSkip>>::value);
    int count = 0;

    {
        const fu_VEC<s_Target>& items_1 = scope.usings;
        const int start = 0;

        {
            const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_1.size(), items_1.size() };
            int i0 = start;
            for (int i = 0; i < (scope_skip.size() + 1); i++)
            {
                const s_ScopeSkip& ss = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
                if ((ss.end <= i0))
                    continue;

                const int i1 = ss.start;
                for (int i_1 = i0; i_1 < i1; i_1++)
                {
                    const s_Target& u = items_1[i_1];
                    if (u)
                        count++;
                    else
                        fail(ctx_0, _info_0, _here_0, fu_STR{});

                };
                i0 = ss.end;
            };
        };
    };
    return count;
}

                                #ifndef DEF_F_NAMED_ARGS
                                #define DEF_F_NAMED_ARGS
inline const int F_NAMED_ARGS = (1 << 24);
                                #endif

                                #ifndef DEF_F_ACCESS
                                #define DEF_F_ACCESS
inline const int F_ACCESS = (1 << 4);
                                #endif

static void visitTypeImports(const s_Context& ctx_0, s_Module& module_0, s_ScopeSkipMemos& _ss_0, const s_Scope& scope_0, bool local_scope_0, fu_STR& id_0, fu_VEC<s_Target>& extra_items_0, s_BitSet& seen_0, const s_Type& type)
{
    const fu_VEC<int>& visit = lookupTypeImports(type, module_0, ctx_0);
    for (int i = -1; i < visit.size(); i++)
    {
        const int modid = ((i >= 0) ? visit[i] : type.vtype.modid);
        if (has(seen_0, modid))
            continue;

        if (!seen_0)
        {
            add(seen_0, 0);
            add(seen_0, module_0.modid);
            const fu_VEC<int>& items_1 = scope_0.imports;
            const fu_VEC<s_ScopeSkip>& scope_skip = (local_scope_0 ? _ss_0.imports : fu::Default<fu_VEC<s_ScopeSkip>>::value);
            const int start = 0;
            const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_1.size(), items_1.size() };
            int i0 = start;
            for (int i_1 = 0; i_1 < (scope_skip.size() + 1); i_1++)
            {
                const s_ScopeSkip& ss = ((i_1 < scope_skip.size()) ? scope_skip[i_1] : END_DUMMY);
                if ((ss.end <= i0))
                    continue;

                const int i1 = ss.start;
                for (int i_2 = i0; i_2 < i1; i_2++)
                {
                    const int modid_1 = items_1[i_2];
                    add(seen_0, modid_1);
                };
                i0 = ss.end;
            };
        };
        if (!add_once(seen_0, modid))
            continue;

        const fu_VEC<s_ScopeItem>& items = ctx_0.modules[modid].out.solve.scope.items;
        for (int i_1 = 0; i_1 < items.size(); i_1++)
        {
            if (items[i_1].id == id_0)
                extra_items_0.push(target(items[i_1]));

        };
    };
}

static s_Overload GET(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const s_Target& target)
{
    if (target.modid == module_0.modid)
        return s_Overload(_scope_0.overloads[(target.index - 1)]);

    return s_Overload(ctx_0.modules[target.modid].out.solve.scope.overloads[(target.index - 1)]);
}

                                #ifndef DEF_F_METHOD
                                #define DEF_F_METHOD
inline const int F_METHOD = (1 << 0);
                                #endif

                                #ifndef DEF_F_INFIX
                                #define DEF_F_INFIX
inline const int F_INFIX = (1 << 1);
                                #endif

                                #ifndef DEF_F_PREFIX
                                #define DEF_F_PREFIX
inline const int F_PREFIX = (1 << 2);
                                #endif

                                #ifndef DEF_F_POSTFIX
                                #define DEF_F_POSTFIX
inline const int F_POSTFIX = (1 << 3);
                                #endif

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline const int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEF_SS_DID_START
                                #define DEF_SS_DID_START
inline const uint32_t SS_DID_START = (0x1u << 1u);
                                #endif

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline const uint32_t SS_FINALIZED = (0x1u << 3u);
                                #endif

                                #ifndef DEF_SS_DIRTY
                                #define DEF_SS_DIRTY
inline const uint32_t SS_DIRTY = (0x1u << 2u);
                                #endif

                                #ifndef DEF_F_SPREAD_INLINE
                                #define DEF_F_SPREAD_INLINE
inline const int F_SPREAD_INLINE = (1 << 25);
                                #endif

                                #ifndef DEF_F_INLINE
                                #define DEF_F_INLINE
inline const int F_INLINE = (1 << 29);
                                #endif

                                #ifndef DEFt_unpackAddrOfFn_fUiU
                                #define DEFt_unpackAddrOfFn_fUiU
inline void unpackAddrOfFn_fUiU(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, s_Template& tEmplate_0, int& parent_idx_0, const fu_STR& canon, int)
{
    int i = 0;
    while (i < canon.size())
    {
        if (!(canon[i++] == std::byte('@')))
            fu::fail((("unpackAddrOfFn: bad canon [1]: `"_fu + canon) + "`."_fu));

        const int modid = parse10i32(i, canon);
        if (!(canon[i++] == std::byte(':')))
            fu::fail((("unpackAddrOfFn: bad canon [2]: `"_fu + canon) + "`."_fu));

        const int index = parse10i32(i, canon);
        const s_Target target = s_Target { int(modid), int(index) };
        if (target.modid == module_0.modid)
        {
            s_Overload overload = GET(ctx_0, module_0, _scope_0, target);
            if (overload.flags & F_SPREAD_INLINE)
                tEmplate_0.node.flags |= F_INLINE;

            const int local_of = overload.local_of;
            if (parent_idx_0 < local_of)
                parent_idx_0 = local_of;

        };
    };
}
                                #endif

static bool is_SPECFAIL(const s_Target& target)
{
    return target.modid == -1;
}

inline static fu_STR id_Hlhp(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, s_Target& target_1)
{
    return ((target_1.modid != -1) ? (("\""_fu + GET(ctx_0, module_0, _scope_0, target_1).name) + "\""_fu) : "SPEC_FAIL"_fu);
}

inline static fu_STR id_CEnz(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const s_Target& target_1)
{
    return ((target_1.modid != -1) ? (("\""_fu + GET(ctx_0, module_0, _scope_0, target_1).name) + "\""_fu) : "SPEC_FAIL"_fu);
}

static void setSpec(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, bool isInline_0, const fu_STR& mangle_1, const s_Target& target, const bool nx)
{
    if (isInline_0)
        fail(ctx_0, _info_0, _here_0, "inline.setSpec"_fu);

    s_Target* _0;
    s_Target& t = (*(_0 = &(module_0.out.specs.upsert(mangle_1))) ? *_0 : *_0 = s_Target{});
    if (!((!t && nx) || (is_SPECFAIL(t) && !nx)))
        fail(ctx_0, _info_0, _here_0, ((((((((("About to screw up royally, replacing spec: "_fu + t.index) + " with "_fu) + target.index) + ", mangle: "_fu) + mangle_1) + ", that's: "_fu) + id_Hlhp(ctx_0, module_0, _scope_0, t)) + " becoming "_fu) + id_CEnz(ctx_0, module_0, _scope_0, target)));

    t = target;
}

                                #ifndef DEFt_if_last_314q
                                #define DEFt_if_last_314q
inline const s_ScopeSkip& if_last_314q(fu_VEC<s_ScopeSkip>& s)
{
    return s.size() ? s.mutref((s.size() - 1)) : fu::Default<s_ScopeSkip>::value;
}
                                #endif

                                #ifndef DEFt_last_314q
                                #define DEFt_last_314q
inline s_ScopeSkip& last_314q(fu_VEC<s_ScopeSkip>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static void ScopeSkip_push(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, fu_VEC<s_ScopeSkip>& scope_skip, const int start, const int end)
{
    if (!((start <= end)))
        fail(ctx_0, _info_0, _here_0, "ScopeSkip_push: bad args."_fu);

    if (end == start)
        return;

    const s_ScopeSkip& last = if_last_314q(scope_skip);
    if (!((last.end <= start)))
        fail(ctx_0, _info_0, _here_0, "ScopeSkip_push: last.end > start."_fu);

    if (scope_skip && (last.end == start))
        last_314q(scope_skip).end = end;
    else
        scope_skip += s_ScopeSkip { int(start), int(end) };

}

static void Scope_import(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const int modid)
{

    {
        fu_VEC<int>& items = _scope_0.imports;
        fu_VEC<s_ScopeSkip>& scope_skip = _ss_0.imports;
        const int start = 0;

        {
            const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
            int i0 = start;
            for (int i = 0; i < (scope_skip.size() + 1); i++)
            {
                const s_ScopeSkip& ss = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
                if ((ss.end <= i0))
                    continue;

                const int i1 = ss.start;
                for (int i_1 = i0; i_1 < i1; i_1++)
                {
                    int& import = items.mutref(i_1);
                    if (import == modid)
                        return;

                };
                i0 = ss.end;
            };
        };
    };
    if (!(modid))
        fail(ctx_0, _info_0, _here_0, "Attempting to import modid-0."_fu);

    _scope_0.imports += modid;
    _Scope_import__forceCopy(ctx_0, _scope_0, modid);
}

static void ScopeSkip_setup(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, const s_Template& tEmplate, const s_ScopeMemo& scope0, const bool isInline)
{
    if (_root_scope_0)
    {
        const s_ScopeMemo& start = (tEmplate.scope_memo ? tEmplate.scope_memo : _root_scope_0);
        _ss_0 = tEmplate.scope_skip;
        ScopeSkip_push(ctx_0, _info_0, _here_0, _ss_0.items, start.items_len, scope0.items_len);
        if (!isInline)
            ScopeSkip_push(ctx_0, _info_0, _here_0, _ss_0.declash, start.items_len, scope0.items_len);

        ScopeSkip_push(ctx_0, _info_0, _here_0, _ss_0.imports, start.imports_len, scope0.imports_len);
        ScopeSkip_push(ctx_0, _info_0, _here_0, _ss_0.usings, start.usings_len, scope0.usings_len);
        ScopeSkip_push(ctx_0, _info_0, _here_0, _ss_0.converts, start.converts_len, scope0.converts_len);
        ScopeSkip_push(ctx_0, _info_0, _here_0, _ss_0.helpers, start.helpers_len, scope0.helpers_len);
    };
    for (int i = 0; i < tEmplate.imports.size(); i++)
        Scope_import(ctx_0, _info_0, _here_0, _scope_0, _ss_0, tEmplate.imports[i]);

}

static bool couldRetype(const s_SolvedNode& node)
{
    return (node.kind == "int"_fu) || (node.kind == "real"_fu);
}

static s_Type Scope_lookupType(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, fu_STR&& id, const int flags)
{
    int scope_iterator {};
    s_Target overloadIdx {};
    bool shadows {};
    const int qualified = (flags & F_QUALIFIED);
    const s_Scope& scope = (qualified ? dequalify_andGetScope(ctx_0, module_0, _info_0, _here_0, _scope_0, id) : _scope_0);
    while ((overloadIdx = search(scope.items, id, scope_iterator, (!qualified ? _ss_0.items : fu::Default<fu_VEC<s_ScopeSkip>>::value), shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
    {
        s_Overload maybe = GET(ctx_0, module_0, _scope_0, overloadIdx);
        if (maybe.kind == "type"_fu)
            return static_cast<s_Type&&>((maybe.type ? maybe.type : fail(ctx_0, _info_0, _here_0, fu_STR{})));

    };
    fail(ctx_0, _info_0, _here_0, (("No type `"_fu + id) + "` in scope."_fu));
}

static s_Type Scope_lookupType(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Node& annot)
{
    return Scope_lookupType(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, fu_STR(annot.value), annot.flags);
}

static bool want(const s_Type& type_0, const s_Type& t)
{
    return type_0.vtype.canon == t.vtype.canon;
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

static s_Type solveInt(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const fu_STR& v, const s_Type& type)
{
    s_Intlit parse_1 = Intlit(v);
    if (parse_1.error)
        fail(ctx_0, _info_0, _here_0, fu_STR(parse_1.error));

    if (type)
    {
        if (!parse_1.uNsigned)
        {
            if (want(type, t_f32) && (parse_1.minsize_f <= uint8_t(32u)))
                return s_Type(t_f32);

            if (want(type, t_f64) && (parse_1.minsize_f <= uint8_t(64u)))
                return s_Type(t_f64);

            if (want(type, t_i32) && (parse_1.minsize_i <= uint8_t(32u)))
                return s_Type(t_i32);

            if (want(type, t_i64) && (parse_1.minsize_i <= uint8_t(64u)))
                return s_Type(t_i64);

            if (want(type, t_i16) && (parse_1.minsize_i <= uint8_t(16u)))
                return s_Type(t_i16);

            if (want(type, t_i8) && (parse_1.minsize_i <= uint8_t(8u)))
                return s_Type(t_i8);

        };
        if (!parse_1.sIgned)
        {
            if (want(type, t_u32) && (parse_1.minsize_u <= uint8_t(32u)))
                return s_Type(t_u32);

            if (want(type, t_u64) && (parse_1.minsize_u <= uint8_t(64u)))
                return s_Type(t_u64);

            if (want(type, t_u16) && (parse_1.minsize_u <= uint8_t(16u)))
                return s_Type(t_u16);

            if (want(type, t_u8) && (parse_1.minsize_u <= uint8_t(8u)))
                return s_Type(t_u8);

        };
    };
    if (parse_1.uNsigned)
    {
        if ((parse_1.minsize_u <= uint8_t(32u)))
            return s_Type(t_u32);

        if ((parse_1.minsize_u <= uint8_t(64u)))
            return s_Type(t_u64);

    }
    else
    {
        if ((parse_1.minsize_i <= uint8_t(32u)))
            return s_Type(t_i32);

        if ((parse_1.minsize_i <= uint8_t(64u)))
            return s_Type(t_i64);

    };
    fail(ctx_0, _info_0, _here_0, "Bad int literal."_fu);
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

static s_Type tryRetyping(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_SolvedNode& node, const s_Type& expect)
{
    return ((node.kind == "int"_fu) ? solveInt(ctx_0, _info_0, _here_0, node.value, expect) : ((node.kind == "real"_fu) ? solveNum(node.value, expect) : s_Type{}));
}

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline const int F_MUT = (1 << 16);
                                #endif

static bool trySolveTypeParams(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Node& node, s_Type&& type, fu_MAP<fu_STR, s_Type>& typeParams)
{
    if (node.kind == "call"_fu)
    {
        const fu_VEC<s_Node>& items = node.items;
        if (items.size())
        {
            if (items.size() == 1)
            {
                s_Type t = ((node.value == "&"_fu) ? tryClear_ref(type) : ((node.value == "&mut"_fu) ? tryClear_mutref(type) : ((node.value == "[]"_fu) ? tryClear_array(type) : fail(ctx_0, _info_0, _here_0, "TODO trySolveTypeParams unary call"_fu))));
                if (!t)
                    return false;

                const s_Node* _0;
                return trySolveTypeParams(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, (*(_0 = &(items[0])) ? *_0 : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type(t), typeParams);
            }
            else if (items.size() == 2)
            {
                if (node.value == "Map"_fu)
                {
                    s_MapFields kv = tryClear_map(type);
                    if (!kv)
                        return false;

                    const s_Node* _1;
                    const s_Node* _2;
                    return trySolveTypeParams(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, (*(_1 = &(items[0])) ? *_1 : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type(kv.key), typeParams) && trySolveTypeParams(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, (*(_2 = &(items[1])) ? *_2 : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type(kv.value), typeParams);
                };
            };
        }
        else
            return isAssignable(Scope_lookupType(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, node), type);

    }
    else if (node.kind == "typeparam"_fu)
    {
        const fu_STR& id = (node.value ? node.value : fail(ctx_0, _info_0, _here_0, fu_STR{}));
        s_Type* _3;
        s_Type& _param = (*(_3 = &(typeParams.upsert(id))) ? *_3 : *_3 = s_Type{});
        if (_param)
        {
            s_Type inter = type_trySuper(_param, type);
            if (!inter)
                return false;

            type = inter;
        };
        _param = clear_refs(s_Type(type));
        return true;
    }
    else if ((node.kind == "arrlit"_fu) && (node.items.size() == 1))
    {
        s_Type t = tryClear_sliceable(type);
        const s_Node* _4;
        return t && trySolveTypeParams(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, (*(_4 = &(node.items[0])) ? *_4 : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type(t), typeParams);
    };
    fail(ctx_0, _info_0, _here_0, "TODO trySolveTypeParams fallthrough"_fu);
}

inline static fu_STR mangleArguments_kEWY(fu_VEC<s_SolvedNode>& args)
{
    fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(args.mutref(i).type);
    };
    return mangle;
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline const int FN_BODY_BACK = -1;
                                #endif

static s_Type evalTypeParam(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const fu_STR& id, const fu_MAP<fu_STR, s_Type>& typeParams)
{
    s_Type _0 {};
    return (_0 = s_Type(typeParams[id])) ? static_cast<s_Type&&>(_0) : (_0 = Scope_lookupType(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, ("$"_fu + (id ? id : fail(ctx_0, _info_0, _here_0, "Falsy type param id."_fu))), 0)) ? static_cast<s_Type&&>(_0) : fail(ctx_0, _info_0, _here_0, (("No type param `$"_fu + id) + "` in scope."_fu));
}

static bool evalTypePattern(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, fu_MAP<fu_STR, s_Type>& typeParams)
{
    if (node.kind == "and"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (!evalTypePattern(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items[i], typeParams))
                return false;

        };
        return true;
    }
    else if (node.kind == "or"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (evalTypePattern(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items[i], typeParams))
                return true;

        };
        return false;
    }
    else if (node.kind == "typeassert"_fu)
    {
        const s_Node* _0;
        const s_Node& left = (*(_0 = &(node.items[0])) ? *_0 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
        const s_Node* _1;
        const s_Node& right = (*(_1 = &(node.items[1])) ? *_1 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
        if ((left.kind == "typeparam"_fu) && (right.kind == "typetag"_fu))
            return type_has(evalTypeParam(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, left.value, typeParams), (right.value ? right.value : fail(ctx_0, _info_0, _here_0, "Falsy type tag."_fu)));
        else
        {
            s_Type actual = evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, left, typeParams).type;
            return trySolveTypeParams(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, right, s_Type(actual), typeParams);
        };
    };
    fail(ctx_0, _info_0, _here_0, (((("TODO evalTypePattern fallthrough: "_fu + node.kind) + "("_fu) + node.items.size()) + ")"_fu));
}

                                #ifndef DEFt_pairs_SQxU
                                #define DEFt_pairs_SQxU
inline void pairs_SQxU(s_Module& module_0, s_Scope& _scope_0, fu_VEC<s_ScopeItem>& res_0, const fu_MAP<fu_STR, s_Type>& a, int)
{
    const fu_VEC<fu_STR>& k = a.m_keys;
    const fu_VEC<s_Type>& v = a.m_values;
    for (int i = 0; i < k.size(); i++)
    {
        const fu_STR& id = k[i];
        const s_Type& type = v[i];
        fu_STR name = ("$"_fu + id);
        const s_Target target = Scope_Typedef(_scope_0, fu::Default<fu_STR>::value, type, 0, s_Template{}, ("$"_fu + id), 0u, module_0);
        Scope_set(res_0, name, target, false);
    };
}
                                #endif

static fu_VEC<s_ScopeItem> intoScopeItems(s_Module& module_0, s_Scope& _scope_0, const fu_MAP<fu_STR, s_Type>& typeParams)
{
    fu_VEC<s_ScopeItem> res {};
    pairs_SQxU(module_0, _scope_0, res, typeParams, 0);
    return res;
}

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline const int F_ARG = (1 << 9);
                                #endif

static s_Type tryGetArgSpecType(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, const fu_VEC<s_ScopeItem>& extra_items_0, const fu_STR& id)
{
    fu_STR param = ("$"_fu + id);
    for (int i_1 = 0; i_1 < extra_items_0.size(); i_1++)
    {
        const s_ScopeItem& m = extra_items_0[i_1];
        if (m.id == param)
        {
            s_Overload o = GET(ctx_0, module_0, _scope_0, target(m));
            if (!((o.kind == "type"_fu) && (o.max == 0)))
                fail(ctx_0, _info_0, _here_0, (((((("tryGetArgSpecType: Not a typeparam: `"_fu + o.kind) + ":"_fu) + param) + "("_fu) + o.max) + ")`."_fu));

            return static_cast<s_Type&&>(o.type);
        };
    };
    return s_Type{};
}

                                #ifndef DEF_F_FIELD
                                #define DEF_F_FIELD
inline const int F_FIELD = (1 << 10);
                                #endif

                                #ifndef DEF_F_REF
                                #define DEF_F_REF
inline const int F_REF = (1 << 22);
                                #endif

static s_SolvedNode solveLetLike_dontTouchScope(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, int& _notes_0, const s_TokenIdx& token, const fu_STR& id, int flags, s_SolvedNode&& init, s_Type&& annot, const s_Type& specType, const bool deadcode_on_never)
{
    if (!(annot || init.type))
        fail(ctx_0, _info_0, _here_0, (("Variable declarations without type annotations must be initialized: `"_fu + id) + "`."_fu));

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
            checkAssignable(ctx_0, _info_0, _here_0, annot, init.type, "Type annotation does not match init expression"_fu, id, "="_fu);
            annot.lifetime = init.type.lifetime;
        };
    };
    const bool killref = is_ref2temp(init.type);
    if (deadcode_on_never && is_never(init.type))
    {
        _notes_0 |= N_DeadLet;
        return static_cast<s_SolvedNode&&>(init);
    };
    if (flags & F_REF)
    {
        if (!(is_mutref(init.type) || (is_never(init.type) && annot) || (!init && (flags & F_ARG))))
            fail(ctx_0, _info_0, _here_0, ((("`ref` variables must be initialized to a mutable reference: `"_fu + id) + "`"_fu) + (init.type ? (" = "_fu + humanizeType(init.type)) : "."_fu)));

        if (killref)
            fail(ctx_0, _info_0, _here_0, "`ref` varibles cannot bind to temporaries."_fu);

    };
    s_Type t_let = (annot ? (((flags & F_ARG) && !(flags & F_MUT)) ? add_ref(s_Type(annot), Lifetime_temporary()) : s_Type(annot)) : ((is_mutref(init.type) || (flags & F_MUT) || killref) ? (((flags & F_REF) && !killref) ? s_Type(init.type) : ((USE_ref_to_mutref && !(flags & F_MUT) && !killref) ? clear_mutref(s_Type(init.type)) : clear_refs(s_Type(init.type)))) : (((flags & F_ARG) && !(flags & F_MUT)) ? add_ref(s_Type(init.type), Lifetime_temporary()) : s_Type(init.type))));
    if (is_mutref(t_let))
        flags |= F_REF;

    if (init)
        maybeCopyOrMove(ctx_0, _info_0, _here_0, init, t_let, false);

    return s_SolvedNode { "let"_fu, int(flags), fu_STR(id), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { s_SolvedNode{}, s_SolvedNode(init) } }, s_TokenIdx(token), s_Type(t_let), s_Target{} };
}

static s_SolvedNode solveLetLike_dontTouchScope(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, const s_Type& specType, const bool deadcode_on_never)
{
    const s_Node& n_annot = node.items[LET_TYPE];
    s_Type annot = (specType ? s_Type(specType) : (n_annot ? evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, n_annot, fu_MAP<fu_STR, s_Type>{}).type : s_Type{}));
    if (annot && (node.flags & F_REF))
        annot = add_mutref(s_Type(annot), Lifetime_temporary());

    const s_Node& n_init = node.items[LET_INIT];
    s_SolvedNode init = (n_init ? solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, n_init, annot, bool{}, 0) : s_SolvedNode{});
    return solveLetLike_dontTouchScope(ctx_0, _info_0, _here_0, _notes_0, node.token, node.value, int(node.flags), s_SolvedNode(init), s_Type(annot), specType, deadcode_on_never);
}

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline const int F_SHADOW = (1 << 23);
                                #endif

                                #ifndef DEF_F_GLOBAL
                                #define DEF_F_GLOBAL
inline const int F_GLOBAL = (1 << 11);
                                #endif

                                #ifndef DEF_F_USING
                                #define DEF_F_USING
inline const int F_USING = (1 << 18);
                                #endif

static s_SolvedNode createEmpty(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const fu_STR& kind, const s_Type& type, const s_Target& target)
{
    return s_SolvedNode { fu_STR(kind), 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx((_here_0 ? _here_0 : fail(ctx_0, _info_0, _here_0, fu_STR{}))), s_Type(type), s_Target(target) };
}

                                #ifndef DEF_F_LOCAL
                                #define DEF_F_LOCAL
inline const int F_LOCAL = (1 << 8);
                                #endif

static s_Overload fnd(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const int index)
{
    return GET(ctx_0, module_0, _scope_0, s_Target { int(module_0.modid), int(index) });
}

static s_Lifetime Lifetime_test(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_CurrentFn& _current_fn_0, const s_Lifetime& lifetime, const bool tempsOK)
{
    if (SELF_TEST)
    {
        const s_Target current_fn { _current_fn_0.out.target };
        s_Overload debug_2 = (current_fn ? GET(ctx_0, module_0, _scope_0, current_fn) : s_Overload{});
        if (debug_2)
        {
        };
        if (!lifetime.uni0n.size())
            fail(ctx_0, _info_0, _here_0, "Lifetime_test: no region set."_fu);

        s_Region _last {};
        for (int i = 0; i < lifetime.uni0n.size(); i++)
        {
            const s_Region& region = lifetime.uni0n[i];

            {
                if (!(!i || (region > _last)))
                    fail(ctx_0, _info_0, _here_0, "Lifetime_test: not a sorted set"_fu);

                _last = region;
            };
            if (Region_isArg(region))
                continue;

            if (Region_isTemp(region))
            {
                if (!((i == (lifetime.uni0n.size() - 1)) && tempsOK))
                    fail(ctx_0, _info_0, _here_0, "Lifetime_test: unexpected temporary."_fu);

                continue;
            };
            const int index = Region_toLocalIndex(region);
            s_Overload local = (index ? fnd(ctx_0, module_0, _scope_0, index) : s_Overload{});
            const int local_of = local.local_of;
            if (local_of)
            {
                int frame = current_fn.index;
                while (local_of != frame)
                {
                    if (!((local_of <= frame)))
                        fail(ctx_0, _info_0, _here_0, (((((("Lifetime_test: `"_fu + local.name) + "` is not a local: `"_fu) + fnd(ctx_0, module_0, _scope_0, local_of).name) + "` does not contain "_fu) + (frame ? (("`"_fu + fnd(ctx_0, module_0, _scope_0, frame).name) + "`"_fu) : "global scope"_fu)) + ((current_fn.index != frame) ? ((", testing from `"_fu + fnd(ctx_0, module_0, _scope_0, current_fn.index).name) + "`."_fu) : "."_fu)));

                    if (!(frame))
                        fail(ctx_0, _info_0, _here_0, "Lifetime_test: climbed up to root"_fu);

                    frame = fnd(ctx_0, module_0, _scope_0, frame).local_of;
                };
            };
        };
    };
    return s_Lifetime(lifetime);
}

static s_Lifetime Lifetime_fromBinding(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_CurrentFn& _current_fn_0, const s_Target& target, const int flags, const s_Type& type)
{
    if (!(target.modid == module_0.modid))
        fail(ctx_0, _info_0, _here_0, "not from this module"_fu);

    if (flags & F_GLOBAL)
        return Lifetime_static();

    const int isArg = (flags & F_ARG);
    if (!isArg && is_ref(type))
        return Lifetime_test(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, type.lifetime, bool{});

    const int index = target.index;
    const s_Region region = ((isArg && is_ref(type)) ? Region_fromArgIndex(index) : Region_fromLocalIndex(index));
    return Lifetime_test(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, s_Lifetime { fu_VEC<s_Region> { fu_VEC<s_Region>::INIT<1> { s_Region(region) } } }, bool{});
}

static s_Target Binding(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, s_CurrentFn& _current_fn_0, const fu_STR& id, s_Type&& type, int& flags, bool& shadows, const s_Target& reuse)
{
    fu_STR name { id };
    const int global = (flags & F_GLOBAL);
    if (_root_scope_0)
    {
        int any = 0;
        int same = 0;

        {
            fu_VEC<s_ScopeItem>& items = _scope_0.items;
            fu_VEC<s_ScopeSkip>& scope_skip = _ss_0.declash;
            const int start = _root_scope_0.items_len;

            {
                const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
                int i0 = start;
                for (int i = 0; i < (scope_skip.size() + 1); i++)
                {
                    const s_ScopeSkip& ss = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
                    if ((ss.end <= i0))
                        continue;

                    const int i1 = ss.start;
                    for (int i_1 = i0; i_1 < i1; i_1++)
                    {
                        s_ScopeItem& item = items.mutref(i_1);
                        if (item.id == id)
                        {
                            any++;
                            s_Overload o = GET(ctx_0, module_0, _scope_0, target(item));
                            if (o.kind == "var"_fu)
                                same++;

                        };
                    };
                    i0 = ss.end;
                };
            };
        };
        if (same)
            name += ("_"_fu + same);

        if (OPTI_autoshadow && !global && !any)
        {
            shadows = true;
            flags |= F_SHADOW;
        };
    };
    const int local_of = (!(flags & F_FIELD) ? _current_fn_0.out.target.index : fu::Default<int>::value);
    if (local_of)
    {
        if (!(!global))
            fail(ctx_0, _info_0, _here_0, "Nope, getting it wrong."_fu);

        flags |= F_LOCAL;
    };
    const s_Target target = (reuse ? s_Target(reuse) : Scope_create(_scope_0, "var"_fu, name, s_Type{}, flags, 0, 0, fu_VEC<s_Argument>{}, s_SolvedNode{}, local_of, 0u, fu_VEC<s_ScopeItem>{}, module_0));
    if (SELF_TEST && reuse)
    {
        s_Overload preexisting = GET(ctx_0, module_0, _scope_0, reuse);
        if (!((preexisting.name == name) && (preexisting.kind == "var"_fu) && (preexisting.flags == flags) && (preexisting.local_of == local_of)))
            fail(ctx_0, _info_0, _here_0, "Binding reuse mismatch."_fu);

    };
    s_Overload& overload = GET_mut(module_0, _scope_0, target);

    {
        s_Lifetime lifetime = Lifetime_fromBinding(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, target, flags, type);
        if (flags & F_ARG)
            type.lifetime = s_Lifetime{};

        overload.type = ((flags & F_MUT) ? add_mutref(s_Type(type), lifetime) : add_ref(s_Type(type), lifetime));
    };
    return target;
}

static s_SolvedNode solveLet(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, s_CurrentFn& _current_fn_0, s_SolvedNode&& out, const fu_STR& id, const s_Target& reuse, const bool deadcode_on_never)
{
    if (out.kind != "let"_fu)
    {
        if (SELF_TEST)
        {
            if (!(deadcode_on_never && is_never(out.type)))
                fail(ctx_0, _info_0, _here_0, (((("solveLet: results in a `"_fu + out.kind) + ": "_fu) + id) + "`."_fu));

        };
        return static_cast<s_SolvedNode&&>(out);
    };
    if (!(!is_ref(out.type) || out.type.lifetime))
        fail(ctx_0, _info_0, _here_0, (("solveLet: ref without lifetime: `"_fu + id) + "`."_fu));

    bool shadows = !!(out.flags & F_SHADOW);
    if (!X_unpackAddrOfFnBinding(_scope_0.items, id, out.type, shadows))
    {
        const bool global = !_current_fn_0;
        if (global)
            out.flags |= F_GLOBAL;

        if (OPTI_dedupe_vars && !(out.flags & F_ARG))
        {
            s_SolvedNode init { out.items[LET_INIT] };
            if ((init.kind == "call"_fu) && !init.items)
            {
                const s_Target& target = init.target;
                s_Overload other = GET(ctx_0, module_0, _scope_0, target);
                if (other.kind == "var"_fu)
                {
                    if (isAssignable(other.type, out.type))
                    {
                        Scope_set(_scope_0, id, target, shadows);
                        if (out.flags & F_USING)
                            _scope_0.usings.push(target);

                        return createEmpty(ctx_0, _info_0, _here_0, "empty"_fu, t_void, s_Target{});
                    };
                };
            };
        };
        const s_Target target { (out.target = Binding(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _current_fn_0, id, s_Type(out.type), out.flags, shadows, reuse)) };
        if (global)
            GET_mut(module_0, _scope_0, target).solved = out;

        Scope_set(_scope_0, id, target, shadows);
        if (out.flags & F_USING)
            _scope_0.usings.push(target);

    };
    return static_cast<s_SolvedNode&&>(out);
}

static s_SolvedNode solveLet(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, const s_Type& specType, const s_Target& reuse, const bool deadcode_on_never)
{
    if (node.flags & F_FIELD)
        fail(ctx_0, _info_0, _here_0, ("solveLet: got a field: "_fu + node.value));

    s_SolvedNode out = solveLetLike_dontTouchScope(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, specType, deadcode_on_never);
    fu_STR& id = out.value;
    return solveLet(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _current_fn_0, s_SolvedNode(out), id, reuse, deadcode_on_never);
}

                                #ifndef DEFt_only_1b34
                                #define DEFt_only_1b34
inline s_Region& only_1b34(fu_VEC<s_Region>& s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_Lifetime Lifetime_fromNative(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, fu::view<s_Node> sig, fu::view<s_SolvedNode> args, const s_Type& actual)
{
    if (!((sig.size() + FN_RET_BACK) == args.size()))
        fail(ctx_0, _info_0, _here_0, "sig.len != args.len"_fu);

    const s_Node& ret = sig[(sig.size() + FN_RET_BACK)];
    bool mutref = ((ret.kind == "call"_fu) && (ret.items.size() == 1) && (ret.value == "&mut"_fu));
    s_Type res {};
    for (; ; )
    {
        for (int i = 0; i < args.size(); i++)
        {
            const s_Node& inArg = sig[i];
            const s_Node& annot = inArg.items[LET_TYPE];
            if ((annot.items.size() == 1) && (((annot.kind == "call"_fu) && ((!mutref && (annot.value == "&"_fu)) || (annot.value == "&mut"_fu))) || (!mutref && (annot.kind == "arrlit"_fu))))
            {
                if (res)
                    fail(ctx_0, _info_0, _here_0, "Ambiguous __native lifetime."_fu);

                const s_SolvedNode& arg = args[i];
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
    if (!(Region_isArg(only_1b34(res.lifetime.uni0n))))
        fail(ctx_0, _info_0, _here_0, "Non-single-arg __native lifetime."_fu);

    if (!is_mutref(actual) && !isAssignable(actual, res))
        return Lifetime_makeShared(res.lifetime);

    return static_cast<s_Lifetime&&>(res.lifetime);
}

inline static fu_STR mangleArguments_vY1y(fu::view_mut<s_SolvedNode> args)
{
    fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(args.mutref(i).type);
    };
    return mangle;
}

static fu_STR ANON(int& _anons_0)
{
    return "0"_fu + _anons_0++;
}

static s_Template createTemplate(s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, const s_Node& node)
{
    return s_Template { s_Node(node), fu_VEC<int>((!_current_fn_0 ? _scope_0.imports : fu::Default<fu_VEC<int>>::value)), (_current_fn_0 ? Scope_snap(_scope_0, _helpers_0) : s_ScopeMemo{}), s_ScopeSkipMemos((_current_fn_0 ? _ss_0 : fu::Default<s_ScopeSkipMemos>::value)) };
}

static s_Overload GET_local(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const int index)
{
    return GET(ctx_0, module_0, _scope_0, s_Target { int(module_0.modid), int(index) });
}

                                #ifndef DEF_SS_UPDATED
                                #define DEF_SS_UPDATED
inline const uint32_t SS_UPDATED = (0x1u << 4u);
                                #endif

static void updateScope(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_CurrentFn& _current_fn_0, bool isInline_0, s_Target& target_0, const s_CurrentFn& out_1, const s_Type& retval)
{
    const fu_VEC<s_SolvedNode>& items_1 = out_1.out.items;
    int min = 0;
    const int max = (items_1.size() + FN_RET_BACK);
    fu_VEC<s_Argument> args_1 {};
    for (int i = 0; i < max; i++)
    {
        const s_SolvedNode& argNode = items_1[i];
        if (!(argNode.kind == "let"_fu))
            fail(ctx_0, _info_0, _here_0, fu_STR{});

        const bool isImplicit = !!(argNode.flags & F_IMPLICIT);
        s_Argument arg = s_Argument { fu_STR((argNode.value ? argNode.value : fail(ctx_0, _info_0, _here_0, fu_STR{}))), s_Type((argNode.type ? argNode.type : fail(ctx_0, _info_0, _here_0, fu_STR{}))), s_SolvedNode((!isImplicit ? argNode.items[LET_INIT] : fu::Default<s_SolvedNode>::value)), int(argNode.flags) };
        if (!arg.dEfault && !isImplicit)
            min++;

        args_1.push(arg);
    };
    s_Overload& overload = GET_mut(module_0, _scope_0, target_0);
    s_Type retval0 { overload.type };
    const int args_len0 = overload.args.size();
    const int closure0 = overload.closes_over.size();
    overload.min = min;
    overload.max = max;
    overload.args = args_1;
    overload.type = retval;
    if (isInline_0)
        return;

    if (!(retval))
        fail(ctx_0, _info_0, _here_0, "FnDecl_update: no return type."_fu);

    if (is_ref(retval))
        Lifetime_test(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, retval.lifetime, bool{});

    overload.flags = out_1.out.flags;
    overload.solved = out_1.out;

    {
        fu_VEC<int> closes_over {};
        for (int i = 0; i < out_1.locals_used.size(); i++)
        {
            s_Overload o = GET_local(ctx_0, module_0, _scope_0, out_1.locals_used[i]);
            if (o.local_of != target_0.index)
                closes_over += out_1.locals_used[i];

        };
        overload.closes_over = closes_over;
    };
    if (overload.used_by)
    {
        if ((args_len0 != overload.args.size()) || (closure0 != overload.closes_over.size()) || !(retval0 == overload.type))
            overload.status |= SS_UPDATED;

    };
}

inline static fu_STR mangleArguments_zMI6(const fu_VEC<s_Argument>& args)
{
    fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(args[i].type);
    };
    return mangle;
}

                                #ifndef DEF_HM_CanReturn
                                #define DEF_HM_CanReturn
inline const short HM_CanReturn = (short(1) << short(1));
                                #endif

                                #ifndef DEF_F_LAMBDA
                                #define DEF_F_LAMBDA
inline const int F_LAMBDA = (1 << 30);
                                #endif

                                #ifndef DEF_HM_Lambda
                                #define DEF_HM_Lambda
inline const short HM_Lambda = (short(1) << short(4));
                                #endif

static void lazySolveEnd(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, s_Overload& o)
{
    fu_VEC<int> reopen {};
    const int parent = o.local_of;
    if (o.status & SS_UPDATED)
    {
        o.status &= ~SS_UPDATED;
        for (int i = 0; i < o.used_by.size(); i++)
        { {
            int index = o.used_by[i];
            for (; ; )
            {
                s_Overload& o_1 = GET_mut(module_0, _scope_0, s_Target { int(module_0.modid), int(index) });
                if ((o_1.status & (SS_DID_START | SS_DIRTY)) != SS_DID_START)
                    goto L_040;

                if (!(o_1.status & SS_FINALIZED))
                {
                    o_1.status |= SS_DIRTY;
                    goto L_040;
                };
                const int up = o_1.local_of;
                if (up != parent)
                {
                    if (!(up > parent))
                        fail(ctx_0, _info_0, _here_0, "lazySolveEnd: about to climb up the wrong tree."_fu);

                    index = up;
                    continue;
                };
                _notes_0 |= ((o_1.kind == "type"_fu) ? N_TypeReopen : N_FnReopen);
                o_1.status &= ~((SS_DID_START | SS_DIRTY) | SS_FINALIZED);
                reopen += index;
                goto L_040;
            };
          } L_040:;
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
        lazySolveStart(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, t, GET(ctx_0, module_0, _scope_0, t));
    };
}

static s_Target doTrySpecialize(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Target& into, const s_Target& overloadIdx, fu_VEC<s_SolvedNode>&& args, fu_STR&& mangle, fu::view<int> reorder)
{
    if (reorder)
    {
        fu_VEC<s_SolvedNode> reordered {};
        for (int i = 0; i < reorder.size(); i++)
        {
            const int callsiteIndex = reorder[i];
            reordered.push(((callsiteIndex >= 0) && (callsiteIndex < args.size()) ? args.mutref(callsiteIndex) : fu::Default<s_SolvedNode>::value));
        };
        args = reordered;
    };
    fu_VEC<s_SolvedNode> args00 { args };
    fu_STR mangle00 { mangle };
    const s_Target SPECFAIL = s_Target { -1, 0 };
    s_Overload original = GET(ctx_0, module_0, _scope_0, (overloadIdx ? overloadIdx : into ? into : fail(ctx_0, _info_0, _here_0, fu_STR{})));
    s_Template tEmplate { original.tEmplate };
    int parent_idx = original.local_of;
    for (int i = 0; i < args.size(); i++)
    {
        s_Type arg_t { args.mutref(i).type };
        if (type_isAddrOfFn(arg_t))
            unpackAddrOfFn_fUiU(ctx_0, module_0, _scope_0, tEmplate, parent_idx, arg_t.vtype.canon, 0);

    };
    const bool isInline = !!(tEmplate.node.flags & F_INLINE);
    if (!into && !isInline)
        setSpec(ctx_0, module_0, _info_0, _here_0, _scope_0, isInline, mangle, SPECFAIL, true);

    s_Target target {};

    {
        const s_ScopeMemo scope0 = Scope_snap(_scope_0, _helpers_0);
        s_ScopeSkipMemos ss0 { _ss_0 };
        fu_DEFER(
        {
            Scope_pop(_scope_0, scope0, _helpers_0);
            _ss_0 = ss0;
        });
        ScopeSkip_setup(ctx_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, tEmplate, scope0, isInline);
        fu_VEC<s_Node> items { tEmplate.node.items };
        s_Node& n_fn = tEmplate.node;
        if (!(n_fn.kind == "fn"_fu))
            fail(ctx_0, _info_0, _here_0, "n_fn not a `fn`."_fu);

        bool ok = true;
        fu_MAP<fu_STR, s_Type> typeParams {};
        if (!into)
        {
            fu_STR kind { tEmplate.node.kind };
            const int numArgs = ((kind == "fn"_fu) ? (items.size() + FN_RET_BACK) : fail(ctx_0, _info_0, _here_0, ("TODO numArgs for template:"_fu + kind)));
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
                    const s_SolvedNode& inValue = ((args.size() > i) ? args.mutref(i) : fu::Default<s_SolvedNode>::value);
                    s_Type inType { inValue.type };
                    const s_Node* _0;
                    const s_Node& argNode = (*(_0 = &(items[i])) ? *_0 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
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
                    if (!(argNode.kind == "let"_fu))
                        fail(ctx_0, _info_0, _here_0, fu_STR{});

                    if (inType)
                    {
                        const s_Type& exactType = original.args[i].type;
                        if (exactType)
                        {
                            args.mutref(i).type = exactType;
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
                            ok = (ok ? argOk : fu::Default<bool>::value);
                            if (!ok && !remangle)
                                break;

                        };
                    };
                };
            };
            if (remangle && !isInline)
            {
                int _3 {};
                const int start = ((_3 = (fu::lfind(mangle, std::byte(' '), 0) + 1)) ? _3 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
                mangle = (fu::slice(mangle, 0, start) + mangleArguments_kEWY(args));
                if (mangle00 != mangle)
                {
                    s_Target _4 {};
                    const s_Target preexisting = ((_4 = s_Target(module_0.out.specs[mangle])) ? _4 : s_Target{});
                    if (preexisting)
                    {
                        setSpec(ctx_0, module_0, _info_0, _here_0, _scope_0, isInline, mangle00, preexisting, bool{});
                        return preexisting;
                    };
                    if (!into)
                        setSpec(ctx_0, module_0, _info_0, _here_0, _scope_0, isInline, mangle, SPECFAIL, true);

                };
            };
            if (!ok)
                return SPECFAIL;

            const s_Node* _5;
            const s_Node& body = (*(_5 = &(items[(items.size() + FN_BODY_BACK)])) ? *_5 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
            if (body.kind == "pattern"_fu)
            {
                fu_MAP<fu_STR, s_Type> undo { typeParams };
                const fu_VEC<s_Node>& branches = body.items;
                bool did_match = false;
                for (int i = 0; i < branches.size(); i++)
                {
                    const s_Node& cond = branches[i].items[0];
                    if (cond && !evalTypePattern(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, cond, typeParams))
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
        fu_VEC<s_ScopeItem> extra_items = (into ? fu_VEC<s_ScopeItem>(original.extra_items) : intoScopeItems(module_0, _scope_0, typeParams));
        target = (into ? s_Target(into) : Scope_create(_scope_0, "_no_kind_yet_"_fu, fu_STR{}, s_Type{}, 0, 0, 0, fu_VEC<s_Argument>{}, s_SolvedNode{}, parent_idx, (SS_DID_START | SS_LAZY), extra_items, module_0));
        if (!_current_fn_0.out.target)
            _anons_0 = 0;

        s_CurrentFn out = s_CurrentFn { solved(n_fn, X_addrofTarget(target), fu_VEC<s_SolvedNode>{}, target), fu_VEC<int>{} };
        const s_ScopeMemo root_scope0 { _root_scope_0 };
        if (!root_scope0)
            _root_scope_0 = scope0;

        std::swap(_current_fn_0, out);
        fu_DEFER(
        {
            std::swap(_current_fn_0, out);
            _root_scope_0 = root_scope0;
        });
        fu_VEC<s_SolvedNode>& outItems = _current_fn_0.out.items;
        if (into)
            outItems = GET(ctx_0, module_0, _scope_0, into).solved.items;

        fu_VEC<s_Node> inItems { n_fn.items };
        outItems.resize(inItems.size());
        _scope_0.items += extra_items;
        const int spec = (tEmplate.node.flags & F_TEMPLATE);
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
            s_Type specType = (spec ? tryGetArgSpecType(ctx_0, module_0, _info_0, _here_0, _scope_0, extra_items, n_arg.value) : s_Type{});
            outItems.mutref(i) = solveLet(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, n_arg, specType, reuse, bool{});
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
        s_Type ret_expect = (n_ret ? evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, n_ret, fu_MAP<fu_STR, s_Type>{}).type : s_Type{});
        s_Type ret_seed { (n_ret ? (ret_expect ? ret_expect : fail(ctx_0, _info_0, _here_0, ("falsy ret_expect: "_fu + n_fn.value))) : t_never) };
        if (ret_seed.lifetime)
            ret_seed.lifetime = (native ? Lifetime_fromNative(ctx_0, module_0, _info_0, _here_0, _scope_0, inItems, fu::get_view_mut(_current_fn_0.out.items, 0, (_current_fn_0.out.items.size() + FN_RET_BACK)), ret_seed) : Lifetime_static());
        else if (is_ref(ret_seed))
            fail(ctx_0, _info_0, _here_0, "fn.ret_actual is a ref without a lifetime."_fu);

        const bool firstIteration = !GET(ctx_0, module_0, _scope_0, target).solved;
        if (firstIteration)
        {

            {
                fu_STR name { (n_fn.value ? n_fn.value : fail(ctx_0, _info_0, _here_0, "TODO anonymous fns"_fu)) };
                if (spec && !native && !isInline)
                {
                    fu_STR sig = mangleArguments_vY1y(fu::get_view_mut(outItems, 0, (outItems.size() + FN_RET_BACK)));
                    if (sig)
                    {
                        fu_STR _6 {};
                        fu_STR hash = ((_6 = hash62(sig, 4)) ? static_cast<fu_STR&&>(_6) : fail(ctx_0, _info_0, _here_0, fu_STR{}));
                        name += ("_"_fu + hash);
                    };
                };
                s_Overload& overload = GET_mut(module_0, _scope_0, target);
                overload.name = (isInline ? ANON(_anons_0) : fu_STR(name));
                overload.kind = (native ? "__native"_fu : (isInline ? "inline"_fu : "fn"_fu));
                overload.tEmplate = (native ? createTemplate(_scope_0, _ss_0, _current_fn_0, _helpers_0, n_body) : s_Template(tEmplate));
            };
            updateScope(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, isInline, target, _current_fn_0, (isInline ? ret_expect : ret_seed));
            if (!into && !isInline)
            {
                int _7 {};
                const int start = ((_7 = (fu::lfind(mangle0, std::byte(' '), 0) + 1)) ? _7 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
                mangle = (fu::slice(mangle0, 0, start) + mangleArguments_zMI6(GET(ctx_0, module_0, _scope_0, target).args));
                s_Target preexisting {};
                if (mangle0 != mangle)
                {
                    s_Target _8 {};
                    preexisting = ((_8 = s_Target(module_0.out.specs[mangle])) ? _8 : s_Target{});
                    setSpec(ctx_0, module_0, _info_0, _here_0, _scope_0, isInline, mangle0, (preexisting ? preexisting : target), bool{});
                };
                const bool nx = (mangle00 != mangle);
                if (nx && (mangle00 != mangle0))
                    setSpec(ctx_0, module_0, _info_0, _here_0, _scope_0, isInline, mangle00, (preexisting ? preexisting : target), bool{});

                if (preexisting)
                    return preexisting;

                setSpec(ctx_0, module_0, _info_0, _here_0, _scope_0, isInline, mangle, target, nx);
            };
        };
        if (!isInline)
        {
            s_Type retval { ret_seed };
            if (!native)
            {
                s_SolvedNode s_body = solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, n_body, ret_expect, target.index, short((((HM_Function | HM_CanReturn) | HM_LabelUsed) | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : fu::Default<short>::value))), 0);
                retval = s_body.type;
                outItems.mutref((outItems.size() + FN_BODY_BACK)) = (s_body ? s_body : fail(ctx_0, _info_0, _here_0, "falsy body"_fu));
            };
            outItems.mutref((outItems.size() + FN_RET_BACK)) = createEmpty(ctx_0, _info_0, _here_0, "empty"_fu, retval, s_Target{});
            updateScope(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, isInline, target, _current_fn_0, retval);
        };
    };
    s_Overload& o = GET_mut(module_0, _scope_0, target);
    lazySolveEnd(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, o);
    return target;
}

                                #ifndef DEF_HM_Struct
                                #define DEF_HM_Struct
inline const short HM_Struct = (short(1) << short(5));
                                #endif

static s_SolvedNode solveMember(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node_1)
{
    if (!(node_1.kind == "let"_fu))
        fail(ctx_0, _info_0, _here_0, ("solveStructMembers_1: "_fu + node_1.kind));

    if (node_1.items[LET_INIT] && (node_1.items[LET_INIT].kind != "definit"_fu))
        fail(ctx_0, _info_0, _here_0, ((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node_1.value) + "`."_fu));

    return solveLetLike_dontTouchScope(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node_1, s_Type{}, bool{});
}

                                #ifndef DEFt_map_8rcE
                                #define DEFt_map_8rcE
inline fu_VEC<s_SolvedNode> map_8rcE(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, fu_VEC<s_Node>& a, int)
{
    fu_VEC<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, a[i]);

    return res;
}
                                #endif

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline const int F_PUB = (1 << 20);
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
inline bool add_DNSI(fu_VEC<int>& dest, const fu_VEC<int>& src)
{
    bool some = false;
    for (int i = 0; i < src.size(); i++)
        some = (add_7gVc(dest, src[i]) || bool(some));

    return some;
}
                                #endif

                                #ifndef DEF_F_MUSTNAME
                                #define DEF_F_MUSTNAME
inline const int F_MUSTNAME = (1 << 19);
                                #endif

static s_SolvedNode __solveStruct(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const bool solve, s_Node&& node, const s_Target& into)
{
    s_SolvedNode out = solved(node, (into ? GET(ctx_0, module_0, _scope_0, into).type : s_Type{}), fu_VEC<s_SolvedNode>{}, into);
    fu_STR origId { node.value };
    fu_STR _0 {};
    fu_STR name = (origId ? fu_STR(origId) : _current_fn_0.out.target && (_0 = GET(ctx_0, module_0, _scope_0, _current_fn_0.out.target).name) ? static_cast<fu_STR&&>(_0) : "Anon"_fu);
    if (!out.target)
    {
        s_Template tEmplate = createTemplate(_scope_0, _ss_0, _current_fn_0, _helpers_0, node);
        if (out.type)
            fu_ASSERT();

        out.type = initStruct(name, node.flags, SELF_TEST, module_0);
        out.target = Scope_Typedef(_scope_0, origId, out.type, node.flags, tEmplate, name, SS_LAZY, module_0);
    };
    if (!solve)
        return out;

    GET_mut(module_0, _scope_0, out.target).status |= SS_DID_START;
    const int helpers0 = _helpers_0.size();
    fu_DEFER(_helpers_0.shrink(helpers0));
    _helpers_0 += s_Helpers { int((out.target.index ? out.target.index : fail(ctx_0, _info_0, _here_0, (("solveStruct: no out.target: `"_fu + origId) + "`."_fu)))), fu_STR{}, short(HM_Struct), 0, 0, s_Type{}, s_Type{}, fu_VEC<int>{} };
    fu_VEC<s_Target> structConverts {};
    fu_VEC<int> structImports {};
    fu_VEC<s_SolvedNode> members = map_8rcE(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items, 0);

    {
        fu_VEC<s_ScopeItem>& innerScope = lookupStruct_mut(out.type.vtype.canon, module_0).items;
        if (!innerScope && members)
        {
            fu_VEC<s_Argument> args = fu_VEC<s_Argument> { fu_VEC<s_Argument>::INIT<1> { s_Argument { "this"_fu, despeculateStruct(s_Type(out.type)), s_SolvedNode{}, 0 } } };
            for (int i = 0; i < members.size(); i++)
            {
                fu_STR id { node.items.mutref(i).value };
                const s_Target target = Scope_create(_scope_0, "field"_fu, (id ? id : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type{}, F_PUB, 1, 1, args, s_SolvedNode{}, 0, 0u, fu_VEC<s_ScopeItem>{}, module_0);
                Scope_set(innerScope, id, target, false);
            };
            _field_items_0 += innerScope;
        };
        if (!(innerScope.size() == members.size()))
            fail(ctx_0, _info_0, _here_0, (((((((("solveStructMembers_3: field lens mismatch: "_fu + innerScope.size()) + " vs "_fu) + members.size()) + "/"_fu) + node.items.size()) + ": `struct "_fu) + name) + "`."_fu));

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

        const int quals0 = out.type.vtype.quals;
        const int quals1 = (out.type.vtype.quals &= commonQuals);

        {
            s_Struct& s = lookupStruct_mut(out.type.vtype.canon, module_0);
            s.target = (out.target ? out.target : fail(ctx_0, _info_0, _here_0, "No struct/out.target."_fu));
            s.converts = structConverts;
            s.imports = structImports;
            if (!(GET(ctx_0, module_0, _scope_0, s.target).status & SS_DID_START))
                fail(ctx_0, _info_0, _here_0, "Setting stuff but missing SS_DID_START."_fu);

        };
        const int max = members.size();
        int min = 0;
        fu_VEC<s_Argument> args {};
        for (int i = 0; i < members.size(); i++)
        {
            const s_SolvedNode& member = members[i];
            s_Argument arg = s_Argument { fu_STR((member.value ? member.value : fail(ctx_0, _info_0, _here_0, fu_STR{}))), s_Type((member.type ? member.type : fail(ctx_0, _info_0, _here_0, fu_STR{}))), s_SolvedNode(member.items[LET_INIT]), (member.flags & F_MUSTNAME) };
            if (!arg.dEfault)
                min++;

            args.push(arg);
        };
        if (max && !min)
            min++;

        s_Overload& overload = GET_mut(module_0, _scope_0, out.target);
        overload.min = min;
        overload.max = max;
        overload.args = args;
        overload.type = out.type;
        if (overload.used_by && (quals0 != quals1))
            overload.status |= SS_UPDATED;

    };
    lazySolveEnd(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, GET_mut(module_0, _scope_0, out.target));
    return s_SolvedNode{};
}

static bool lazySolveStart(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Target& target, const s_Overload& overload)
{
    if ((overload.status & (SS_DID_START | SS_LAZY)) != SS_LAZY)
        return false;


    {
        s_Overload& o = GET_mut(module_0, _scope_0, target);
        if (o.status & ((SS_FINALIZED | SS_DID_START) | SS_DIRTY))
            fail(ctx_0, _info_0, _here_0, ("SS_DID_START: non-zero solver status: "_fu + overload.status));

        o.status |= SS_DID_START;
        if ((o.kind == "template"_fu) || (o.kind == "fn"_fu))
            doTrySpecialize(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, target, s_Target{}, fu_VEC<s_SolvedNode>{}, fu_STR{}, fu::view<int>{});
        else if (o.kind == "type"_fu)
            __solveStruct(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, true, s_Node(o.tEmplate.node), target);
        else
            fail(ctx_0, _info_0, _here_0, (("lazySolveStart: kind is `"_fu + o.kind) + "`."_fu));

    };
    return true;
}

static void reorderByNumUsings(fu_VEC<int>& result, const fu_VEC<s_Argument>& host_args, const int num_args, const int num_usings)
{
    result.clear();
    if (num_usings)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const int x = (i - num_usings);
            result.push((((x >= 0) && (x < num_args)) ? int(x) : -1));
        };
    };
}

static bool reorderByArgIDs(fu_VEC<int>& result, const fu_VEC<fu_STR>& names, const fu_VEC<s_Argument>& host_args, const int num_usings)
{
    result.clear();
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
    while (result && (result.mutref((result.size() - 1)) < 0))
        result.pop();

    for (int i = 0; i < result.size(); i++)
    {
        if (result.mutref(i) != i)
            return true;

    };
    result.clear();
    return true;
}

                                #ifndef DEFt_first_zMI6
                                #define DEFt_first_zMI6
inline const s_Argument& first_zMI6(const fu_VEC<s_Argument>& s)
{
    return (s.size() ? s[0] : fu::fail("len == 0"_fu));
}
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

static void foreach(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Scope& scope_0, bool local_scope_0, const s_Type& expect_0, const s_Type& actual_0, fu_VEC<s_Target>& match_0, fu_VEC<s_Target>& path_0, int has_converts_0, const fu_VEC<s_ScopeSkip>& ss_converts_0, const s_Type& from_0, bool nullary_0, const s_Target& t)
{
    s_Overload convert = GET(ctx_0, module_0, _scope_0, t);
    if (nullary_0 || isAssignableAsArgument(first_zMI6(convert.args).type, from_0))
    {
        s_Type convertType = ((convert.kind == "field"_fu) ? add_refs((from_0 ? from_0 : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type(convert.type)) : s_Type(convert.type));
        const bool isStruct_1 = isStruct(convertType);
        if (isAssignableAsArgument(expect_0, convertType))
        {
            if (match_0)
            {
                fu_STR suffix = (((("\n\t"_fu + explain(ctx_0, module_0, _scope_0, match_0)) + "\n\tand:"_fu) + "\n\t"_fu) + explain(ctx_0, module_0, _scope_0, (path_0 + t)));
                if (actual_0)
                    fail(ctx_0, _info_0, _here_0, ((((("Conversion ambiguity, multiple ways to convert `"_fu + serializeType(actual_0)) + "` into `"_fu) + serializeType(expect_0)) + "`: "_fu) + suffix));
                else
                    fail(ctx_0, _info_0, _here_0, ((("`using` ambiguity, multiple ways to obtain a `"_fu + serializeType(expect_0)) + "` in this scope: "_fu) + suffix));

            };
            match_0 = (path_0 + t);
        }
        else
        {
            const bool mightHaveConversion = (isStruct_1 || scope_0.converts);
            if (mightHaveConversion)
            {
                if (path_0.size() > 10)
                {
                    for (int i = path_0.size(); i-- > 0; )
                    {
                        if (path_0[i] == t)
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
                path_0.push(t);
                fu_DEFER(path_0.pop());
                descend(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, scope_0, local_scope_0, expect_0, actual_0, match_0, path_0, has_converts_0, ss_converts_0, convertType, false, isStruct_1);
            };
        };
    };
}

static void descend(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Scope& scope_0, bool local_scope_0, const s_Type& expect_0, const s_Type& actual_0, fu_VEC<s_Target>& match_0, fu_VEC<s_Target>& path_0, int has_converts_0, const fu_VEC<s_ScopeSkip>& ss_converts_0, const s_Type& from, const bool nullary, const bool isStruct)
{
    if (nullary)
    {
        const fu_VEC<s_Target>& items_1 = scope_0.usings;
        const fu_VEC<s_ScopeSkip>& scope_skip = (local_scope_0 ? _ss_0.usings : fu::Default<fu_VEC<s_ScopeSkip>>::value);
        const int start = 0;
        const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_1.size(), items_1.size() };
        int i0 = start;
        for (int i_1 = 0; i_1 < (scope_skip.size() + 1); i_1++)
        {
            const s_ScopeSkip& ss = ((i_1 < scope_skip.size()) ? scope_skip[i_1] : END_DUMMY);
            if ((ss.end <= i0))
                continue;

            const int i1 = ss.start;
            for (int i_2 = i0; i_2 < i1; i_2++)
            {
                const s_Target& u = items_1[i_2];
                foreach(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, scope_0, local_scope_0, expect_0, actual_0, match_0, path_0, has_converts_0, ss_converts_0, from, nullary, u);
            };
            i0 = ss.end;
        };
    }
    else
    {
        if (isStruct)
        {
            const fu_VEC<s_Target>& inner = lookupStruct(from, module_0, ctx_0).converts;
            for (int i = 0; i < inner.size(); i++)
                foreach(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, scope_0, local_scope_0, expect_0, actual_0, match_0, path_0, has_converts_0, ss_converts_0, from, nullary, inner[i]);

        };
        if (has_converts_0)
        {
            const fu_VEC<s_Target>& items_1 = scope_0.converts;
            const int start = 0;
            const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_1.size(), items_1.size() };
            int i0 = start;
            for (int i_1 = 0; i_1 < (ss_converts_0.size() + 1); i_1++)
            {
                const s_ScopeSkip& ss = ((i_1 < ss_converts_0.size()) ? ss_converts_0[i_1] : END_DUMMY);
                if ((ss.end <= i0))
                    continue;

                const int i1 = ss.start;
                for (int i_2 = i0; i_2 < i1; i_2++)
                    foreach(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, scope_0, local_scope_0, expect_0, actual_0, match_0, path_0, has_converts_0, ss_converts_0, from, nullary, items_1[i_2]);

                i0 = ss.end;
            };
        };
    };
}

static fu_VEC<s_Target> tryConvert(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Scope& scope, const bool local_scope, const s_Type& expect, const s_Type& actual)
{
    fu_VEC<s_Target> match {};
    fu_VEC<s_Target> path {};
    const int has_converts = scope.converts.size();
    const fu_VEC<s_ScopeSkip>& ss_converts = (local_scope ? _ss_0.converts : fu::Default<fu_VEC<s_ScopeSkip>>::value);
    descend(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, scope, local_scope, expect, actual, match, path, has_converts, ss_converts, actual, !actual, isStruct(actual));
    return match;
}

                                #ifndef DEFt_grow_if_oob_qwZA
                                #define DEFt_grow_if_oob_qwZA
inline fu_VEC<s_Target>& grow_if_oob_qwZA(fu_VEC<fu_VEC<s_Target>>& a, int& i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static bool considerRetyping(const s_Type& expect, const s_Type& actual)
{
    return ((expect.vtype.quals & actual.vtype.quals) & q_arithmetic) != 0;
}

                                #ifndef DEFt_only_kEWY
                                #define DEFt_only_kEWY
inline s_SolvedNode& only_kEWY(fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_Target trySpecialize(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Target& overloadIdx, const fu_VEC<s_SolvedNode>& args, fu::view<int> reorder, const fu_STR& args_mangled)
{
    fu_STR mangle = ((((overloadIdx.modid + "#"_fu) + overloadIdx.index) + " "_fu) + args_mangled);
    s_Target _0 {};
    const s_Target spec = ((_0 = s_Target(module_0.out.specs[mangle])) ? _0 : doTrySpecialize(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, s_Target{}, overloadIdx, fu_VEC<s_SolvedNode>(args), fu_STR(mangle), reorder));
    return s_Target((!is_SPECFAIL(spec) ? spec : fu::Default<s_Target>::value));
}

inline static fu_STR mangleArguments_gMB0(fu::view<s_SolvedNode> args)
{
    fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(args[i].type);
    };
    return mangle;
}

static fu_STR mangleArguments(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, fu::view<s_SolvedNode> args, fu::view<int> reorder)
{
    if (!reorder)
        return mangleArguments_gMB0(args);
    else
    {
        if (!((reorder.size() >= args.size())))
            fail(ctx_0, _info_0, _here_0, ("mangleArguments: `reorder.len < args.len`,"_fu + " then `!reorder` checks become ambiguous."_fu));

    };
    fu_STR mangle {};
    int commas = 0;
    for (int i = 0; i < reorder.size(); i++)
    {
        while (commas > 0)
        {
            mangle += ","_fu;
            commas--;
        };
        const int callsiteIndex = reorder[i];
        if ((callsiteIndex >= 0) && (callsiteIndex < args.size()))
            mangle += serializeType(args[callsiteIndex].type);

        commas++;
    };
    return mangle;
}

static s_Overload GETfn(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const int idx)
{
    return GET(ctx_0, module_0, _scope_0, s_Target { int(module_0.modid), int(idx) });
}

static fu_STR fnName(const s_Context& ctx_0, s_Module& module_0, s_Scope& _scope_0, const int idx)
{
    return (idx ? (("`"_fu + GETfn(ctx_0, module_0, _scope_0, idx).name) + "`"_fu) : "global scope"_fu);
}

static void disambig(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_CurrentFn& _current_fn_0, fu_STR& id_0, s_Target& matchIdx_0, s_Target& overloadIdx_0)
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
                fail(ctx_0, _info_0, _here_0, ((((("BUG! Leaking `"_fu + id_0) + "` between functions [inner/callsite]: "_fu) + fnName(ctx_0, module_0, _scope_0, inner)) + " is seen from "_fu) + fnName(ctx_0, module_0, _scope_0, callsite)));

            int _i = inner;
            while (_i > outer)
                _i = GETfn(ctx_0, module_0, _scope_0, _i).local_of;

            if (!(_i == outer))
                fail(ctx_0, _info_0, _here_0, ((((((("BUG! Leaking `"_fu + id_0) + "` between functions [inner/outer]: "_fu) + fnName(ctx_0, module_0, _scope_0, inner)) + " and "_fu) + fnName(ctx_0, module_0, _scope_0, outer)) + " as seen from "_fu) + fnName(ctx_0, module_0, _scope_0, callsite)));

        };
        fail(ctx_0, _info_0, _here_0, (((((((("Ambiguous callsite, matches multiple items in scope: `"_fu + id_0) + "` from "_fu) + fnName(ctx_0, module_0, _scope_0, inner)) + " and "_fu) + fnName(ctx_0, module_0, _scope_0, outer)) + ", as seen from "_fu) + fnName(ctx_0, module_0, _scope_0, callsite)) + "."_fu));
    };
}

                                #ifndef DEFt_last_Y3Ia
                                #define DEFt_last_Y3Ia
inline fu_STR& last_Y3Ia(fu_VEC<fu_STR>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEFt_unless_oob_qwZA
                                #define DEFt_unless_oob_qwZA
inline const fu_VEC<s_Target>& unless_oob_qwZA(fu_VEC<fu_VEC<s_Target>>& a, int& i)
{
    return (i < a.size()) ? a.mutref(i) : fu::Default<fu_VEC<s_Target>>::value;
}
                                #endif

static s_SolvedNode createLet(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, const s_Target& target, const int flags)
{
    s_Overload overload = GET(ctx_0, module_0, _scope_0, target);
    return s_SolvedNode { "let"_fu, int(flags), fu_STR(overload.name), fu_VEC<s_SolvedNode>{}, s_TokenIdx((_here_0 ? _here_0 : fail(ctx_0, _info_0, _here_0, fu_STR{}))), s_Type(overload.type), s_Target(target) };
}

static s_Target injectImplicitArg(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, s_CurrentFn& _current_fn_0, const fu_STR& id, const s_Type& type, const s_Target& becauseOf)
{
    if (!(_current_fn_0.out.items))
        fail(ctx_0, _info_0, _here_0, (((("No implicit `"_fu + id) + "` in scope, needed to call `"_fu) + GET(ctx_0, module_0, _scope_0, becauseOf).name) + "`."_fu));

    for (int i = 0; i < (_current_fn_0.out.items.size() + FN_RET_BACK); i++)
    {
        s_SolvedNode arg { _current_fn_0.out.items[i] };
        if (arg.value == id)
        {
            checkAssignable(ctx_0, _info_0, _here_0, type, arg.type, "Implicit arg collision"_fu, id, fu_STR{});
            return s_Target((arg.target ? arg.target : fail(ctx_0, _info_0, _here_0, fu_STR{})));
        };
    };
    bool shadows {};
    int flags = (F_IMPLICIT | F_ARG);
    const s_Target ret = Binding(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _current_fn_0, id, s_Type(type), flags, shadows, s_Target{});
    s_SolvedNode newArgNode = createLet(ctx_0, module_0, _info_0, _here_0, _scope_0, ret, F_IMPLICIT);
    const int newArgIdx = (_current_fn_0.out.items.size() + FN_RET_BACK);
    _current_fn_0.out.items.insert(newArgIdx, newArgNode);
    return ret;
}

                                #ifndef DEFt_if_first_hGoN
                                #define DEFt_if_first_hGoN
inline const s_Region& if_first_hGoN(const fu_VEC<s_Region>& s)
{
    return s.size() ? s[0] : fu::Default<s_Region>::value;
}
                                #endif

static s_Lifetime Lifetime_replaceArgsAtCallsite(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_Overload& overload, fu::view<s_SolvedNode> argNodes)
{
    const fu_VEC<s_Region>& returned = overload.type.lifetime.uni0n;
    const fu_VEC<s_SolvedNode>& items = overload.solved.items;
    if (!Region_isArg(if_first_hGoN(returned)))
        return s_Lifetime { fu_VEC<s_Region>(returned) };

    const int head = items[0].target.index;
    const int tail = items[((items.size() + FN_RET_BACK) - 1)].target.index;
    s_Lifetime keep {};
    s_Lifetime replace {};
    int offset = (items.size() + FN_RET_BACK);
    for (int i = 0; i < returned.size(); i++)
    {
        const s_Region& region = returned[i];
        const int index = Region_toArgIndex(region);
        if ((index < head) || (index > tail))
        {
            keep.uni0n += region;
            continue;
        };
        while (offset--)
        {
            const int here = items[offset].target.index;
            if (here == index)
            {
                const s_SolvedNode& argNode = argNodes[offset];
                s_Lifetime argLt = (is_ref(argNode.type) ? s_Lifetime((argNode.type.lifetime ? argNode.type.lifetime : fail(ctx_0, _info_0, _here_0, "refarg without lifetime"_fu))) : Lifetime_temporary());
                replace = Lifetime_union(replace, argLt);
                break;
            };
            if (!(here > index))
                fail(ctx_0, _info_0, _here_0, "nope, going backwards"_fu);

        };
    };
    return Lifetime_union(keep, replace);
}

static bool isFnOrType(const s_Helpers& h)
{
    return !!(h.mask & (HM_Function | HM_Struct));
}

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline const uint32_t SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

                                #ifndef DEF_SS_FN_RECUR
                                #define DEF_SS_FN_RECUR
inline const uint32_t SS_FN_RECUR = (0x1u << 17u);
                                #endif

static void detectRecursion(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, int& _notes_0, fu_VEC<s_Helpers>& _helpers_0, const s_Target& target, const s_Overload& overload)
{
    if ((overload.status & (SS_FINALIZED | SS_LAZY)) != SS_LAZY)
        return;

    const int note = ((overload.kind == "type"_fu) ? N_TypeRecursion : N_FnRecursion);
    const uint32_t status = ((overload.kind == "type"_fu) ? SS_TYPE_RECUR : SS_FN_RECUR);
    for (int i = _helpers_0.size(); i-- > 0; )
    {
        s_Helpers h { _helpers_0[i] };
        if (!isFnOrType(h))
            continue;

        if (h.mask & HM_Lambda)
            fail(ctx_0, _info_0, _here_0, "Recursive lambda, what happened here?"_fu);

        GET_mut(module_0, _scope_0, s_Target { int(module_0.modid), int(h.target) }).status |= status;
        _notes_0 |= note;
        if (h.target == target.index)
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

static s_SolvedNode createLet(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, int& _notes_0, s_CurrentFn& _current_fn_0, const fu_STR& id, const int flags, const s_SolvedNode& init)
{
    s_SolvedNode out = solveLetLike_dontTouchScope(ctx_0, _info_0, _here_0, _notes_0, init.token, id, int(flags), s_SolvedNode(init), s_Type{}, s_Type{}, bool{});
    return solveLet(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _current_fn_0, s_SolvedNode(out), id, s_Target{}, bool{});
}

static s_SolvedNode CallerNode(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, const s_Target& target, fu_VEC<s_SolvedNode>&& args, const int kills)
{
    s_Overload overload = GET(ctx_0, module_0, _scope_0, target);
    s_Type type { overload.type };
    if (overload.kind == "field"_fu)
    {
        s_Type* _0;
        type = add_refs((*(_0 = &(only_kEWY(args).type)) ? *_0 : fail(ctx_0, _info_0, _here_0, fu_STR{})), s_Type(overload.type));
    }
    else if (args)
    {
        fu_VEC<s_Argument>& host_args = (overload.args ? overload.args : fail(ctx_0, _info_0, _here_0, "CallerNode: no host args."_fu));
        for (int i = 0; i < args.size(); i++)
        {
            s_SolvedNode* _1;
            maybeCopyOrMove(ctx_0, _info_0, _here_0, (*(_1 = &(args.mutref(i))) ? *_1 : fail(ctx_0, _info_0, _here_0, fu_STR{})), host_args[i].type, true);
        };
        if (is_ref(type))
            type.lifetime = Lifetime_test(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, Lifetime_replaceArgsAtCallsite(ctx_0, _info_0, _here_0, overload, args), true);

    };
    if (target.modid == module_0.modid)
    {
        if ((overload.kind == "fn"_fu) || (overload.kind == "type"_fu))
        {
            for (int i = _helpers_0.size(); i-- > 0; )
            {
                s_Helpers& h = _helpers_0.mutref(i);
                if (isFnOrType(h))
                {
                    s_Overload& o = GET_mut(module_0, _scope_0, target);
                    add_2vji(o.used_by, h.target);
                    detectRecursion(ctx_0, module_0, _info_0, _here_0, _scope_0, _notes_0, _helpers_0, target, o);
                    break;
                };
            };
        };
        if (_current_fn_0)
        {
            s_Overload o = GET(ctx_0, module_0, _scope_0, target);
            if (o.flags & F_LOCAL)
                add_7gVc(_current_fn_0.locals_used, target.index);

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
        s_Type& ret_expect = overload.type;
        fu_VEC<s_SolvedNode> result {};
        if (!(overload.args.size() == args.size()))
            fail(ctx_0, _info_0, _here_0, "inline: arglen mismatch"_fu);

        result.resize((args.size() + 1));
        for (int i = 0; i < args.size(); i++)
        {
            const s_Argument& slot = overload.args[i];
            result.mutref(i) = createLet(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _notes_0, _current_fn_0, slot.name, (slot.flags & ~F_ARG), args.mutref(i));
        };
        s_SolvedNode s_body = solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, n_body, ret_expect, 0, short((HM_CanReturn | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : fu::Default<short>::value))), kills);
        last_kEWY(result) = s_body;
        return createBlock(node.token, s_body.type, result, s_Target{});
    };
    s_SolvedNode out = solved(node, type, args, s_Target{});
    out.target = target;
    return out;
}

static s_Node createRead(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const fu_STR& id)
{
    return s_Node { "call"_fu, 0, fu_STR(id), fu_VEC<s_Node>{}, s_TokenIdx((_here_0 ? _here_0 : fail(ctx_0, _info_0, _here_0, fu_STR{}))) };
}

static s_SolvedNode bindImplicitArg(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const fu_STR& name, const s_Type& type, const s_Target& becauseOf)
{
    fu_VEC<s_SolvedNode> args {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    s_Target _0 {};
    const s_Target target = ((_0 = tryMatch__mutargs(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, _scope_0, true, fu_STR(name), args, conversions, F_IMPLICIT, s_Target{})) ? _0 : (_0 = injectImplicitArg(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _current_fn_0, name, type, becauseOf)) ? _0 : fail(ctx_0, _info_0, _here_0, fu_STR{}));
    if ((args.size() != 0) || (conversions.size() != 0))
        fail(ctx_0, _info_0, _here_0, "dunno what happened here"_fu);

    s_Overload o = GET(ctx_0, module_0, _scope_0, target);
    if (!(o.flags & F_IMPLICIT))
        fail(ctx_0, _info_0, _here_0, (((("Matching a non-implicit item in scope: `"_fu + name) + "`, binds to call to `"_fu) + GET(ctx_0, module_0, _scope_0, becauseOf).name) + "`."_fu));

    checkAssignable(ctx_0, _info_0, _here_0, type, o.type, (("Implicit `"_fu + name) + "` type mismatch"_fu), fu_STR{}, fu_STR{});
    return CallerNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, createRead(ctx_0, _info_0, _here_0, "__implicit"_fu), target, fu_VEC<s_SolvedNode>{}, 0);
}

static s_Target tryMatch__mutargs(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Scope& scope, const bool local_scope, fu_STR&& id, fu_VEC<s_SolvedNode>& args, fu_VEC<fu_VEC<s_Target>>& conversions, const int flags, const s_Target& target)
{
    s_Target matchIdx {};
    s_Target DEBUG_assertMatch {};
    const int minArity = args.size();
    const int maxArity = (minArity + (scope.usings ? countUsings(ctx_0, _info_0, _here_0, _ss_0, scope, local_scope) : int{}));
    fu_VEC<fu_STR> names {};
    if (flags & F_NAMED_ARGS)
    {
        bool some = false;
        for (int i = 0; i < minArity; i++)
        {
            s_SolvedNode arg { args[i] };
            const fu_STR* _0;
            names.push(((arg.kind == "argid"_fu) ? (*(_0 = &(((void)(some = true), arg.value))) ? *_0 : fail(ctx_0, _info_0, _here_0, fu_STR{})) : fu::Default<fu_STR>::value));
        };
        if (!(some))
            fail(ctx_0, _info_0, _here_0, fu_STR{});

    };
    fu_VEC<int> reorder {};
    fu_STR args_mangled {};
    const fu_VEC<s_ScopeItem>& field_items = (local_scope && ((flags & F_ACCESS) || !minArity) && (minArity <= 1) && maxArity ? _field_items_0 : fu::Default<fu_VEC<s_ScopeItem>>::value);
    fu_VEC<fu_STR> alternate_ids {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        fu_VEC<s_Target> extra_items {};
        if (local_scope && !target)
        {
            s_BitSet seen {};
            if (maxArity > minArity)
            {
                const fu_VEC<s_Target>& items_1 = scope.usings;
                const fu_VEC<s_ScopeSkip>& scope_skip = (local_scope ? _ss_0.usings : fu::Default<fu_VEC<s_ScopeSkip>>::value);
                const int start = 0;
                const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_1.size(), items_1.size() };
                int i0 = start;
                for (int i = 0; i < (scope_skip.size() + 1); i++)
                {
                    const s_ScopeSkip& ss = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
                    if ((ss.end <= i0))
                        continue;

                    const int i1 = ss.start;
                    for (int i_1 = i0; i_1 < i1; i_1++)
                    {
                        const s_Target& u = items_1[i_1];
                        visitTypeImports(ctx_0, module_0, _ss_0, scope, local_scope, id, extra_items, seen, GET(ctx_0, module_0, _scope_0, u).type);
                    };
                    i0 = ss.end;
                };
            };
            if (flags & ((((F_ACCESS | F_METHOD) | F_INFIX) | F_PREFIX) | F_POSTFIX))
            {
                for (int i = 0; i < args.size(); i++)
                    visitTypeImports(ctx_0, module_0, _ss_0, scope, local_scope, id, extra_items, seen, args.mutref(i).type);

            };
        };
        bool shadows {};
        while ((overloadIdx = search(scope.items, id, scope_iterator, (local_scope ? ((flags & F_IMPLICIT) ? _ss_0.declash : _ss_0.items) : fu::Default<fu_VEC<s_ScopeSkip>>::value), shadows, target, extra_items, field_items)))
        { {
            while (true)
            {
                s_Overload overload = GET(ctx_0, module_0, _scope_0, overloadIdx);
                if (lazySolveStart(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, overloadIdx, overload))
                    continue;

                const bool isType = (overload.kind == "type"_fu);
                if (minArity && isType && !target)
                {
                    const fu_STR& alt = overload.type.vtype.canon;
                    if (alt != id)
                        alternate_ids.push(alt);

                };
                const bool isZeroInit = (isType && !minArity);
                if (!isZeroInit && ((overload.max < minArity) || (overload.min > maxArity)))
                    goto L_081;

                const fu_VEC<s_Argument>& host_args = overload.args;
                const int num_usings = (!isZeroInit && (overload.min > minArity) ? (overload.min - minArity) : int{});
                if (!names)
                    reorderByNumUsings(reorder, host_args, args.size(), num_usings);
                else if (!reorderByArgIDs(reorder, names, host_args, num_usings))
                    goto L_081;

                fu_STR temp {};
                fu_STR& args_mangled_1 = (reorder ? temp : args_mangled);
                fu_VEC<fu_VEC<s_Target>> conversions_1 {};
                if (overload.min || args.size())
                {
                    if (!((reorder.size() >= args.size()) || !reorder))
                        fail(ctx_0, _info_0, _here_0, "reorder < args."_fu);

                    int _1 {};
                    const int N = std::max(((_1 = reorder.size()) ? _1 : args.size()), (!isZeroInit ? overload.min : fu::Default<int>::value));
                    fu_VEC<s_SolvedNode> undo_literal_fixup { args };
                    for (int i = 0; i < N; i++)
                    {
                        const s_Argument& host_arg = host_args[i];
                        const s_Type& expect = host_arg.type;
                        const int callsiteIndex = ((i < reorder.size()) ? int(reorder[i]) : ((i < args.size()) ? int(i) : -1));
                        if (callsiteIndex < 0)
                        {
                            if (host_arg.dEfault || (host_arg.flags & F_IMPLICIT))
                                continue;

                            if (!(host_arg.flags & F_MUSTNAME))
                            {
                                const s_Type& expect_1 = (expect ? expect : host_arg.dEfault.type);
                                if (expect_1)
                                {
                                    fu_VEC<s_Target> conversion = tryConvert(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, scope, local_scope, expect_1, s_Type{});
                                    if (conversion)
                                    {
                                        grow_if_oob_qwZA(conversions_1, i) = conversion;
                                        continue;
                                    };
                                };
                            };
                            goto L_081;
                        };
                        if (host_arg.flags & F_MUSTNAME)
                        {
                            if ((names.size() <= callsiteIndex) || !names.mutref(callsiteIndex))
                                goto L_081;

                        };
                        if (!expect)
                            continue;

                        s_Type actual { args.mutref(callsiteIndex).type };
                        if (isAssignableAsArgument(expect, actual))
                            continue;

                        if (considerRetyping(expect, actual))
                        {
                            s_SolvedNode& arg = args.mutref(callsiteIndex);
                            if (arg.kind == "argid"_fu)
                                arg = only_kEWY(arg.items);

                            s_Type retype = tryRetyping(ctx_0, _info_0, _here_0, arg, expect);
                            if (isAssignableAsArgument(expect, retype))
                            {
                                arg.type = retype;
                                continue;
                            };
                        };
                        fu_VEC<s_Target> conversion = tryConvert(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, scope, local_scope, expect, actual);
                        if (conversion)
                        {
                            grow_if_oob_qwZA(conversions_1, i) = conversion;
                            continue;
                        };
                        args = undo_literal_fixup;
                        goto L_081;
                    };
                };
                if (overload.kind == "template"_fu)
                {
                    fu_STR* _2;
                    const s_Target specIdx = trySpecialize(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, overloadIdx, args, reorder, (*(_2 = &(args_mangled_1)) ? *_2 : *_2 = mangleArguments(ctx_0, _info_0, _here_0, args, reorder)));
                    if (!specIdx)
                        goto L_081;

                    overloadIdx = specIdx;
                    DEBUG_assertMatch = specIdx;
                    continue;
                };
                disambig(ctx_0, module_0, _info_0, _here_0, _scope_0, _current_fn_0, id, matchIdx, overloadIdx);
                std::swap(conversions_1, conversions);
                if (reorder)
                {
                    fu_VEC<s_SolvedNode> new_args {};
                    new_args.resize(reorder.size());
                    for (int i = 0; i < reorder.size(); i++)
                    {
                        const int idx = reorder[i];
                        if ((idx >= 0))
                            new_args.mutref(i) = args[idx];

                    };
                    args = new_args;
                };
                matchIdx = overloadIdx;
                if (shadows)
                    goto L_NEXT;

                break;
            };
          } L_081:;
        } L_NEXT:;

        if (!alternate_ids)
            break;

        id = last_Y3Ia(alternate_ids);
        alternate_ids.pop();
    };
    if (matchIdx)
    {
        s_Overload matched = GET(ctx_0, module_0, _scope_0, matchIdx);
        const bool isZeroInit = ((matched.kind == "type"_fu) && !minArity);
        if (!isZeroInit)
        {
            const fu_VEC<s_Argument>& host_args = matched.args;
            if (host_args.size() > args.size())
                args.resize(host_args.size());

            for (int i = 0; i < args.size(); i++)
            {
                if (!args.mutref(i) && !unless_oob_qwZA(conversions, i))
                {
                    const s_Argument& host_arg = host_args[i];
                    args.mutref(i) = (host_arg.dEfault ? s_SolvedNode(host_arg.dEfault) : ((void)((host_arg.flags & F_IMPLICIT) || fail(ctx_0, _info_0, _here_0, (((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + serializeType(host_arg.type)) + "`."_fu))), bindImplicitArg(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, host_arg.name, host_arg.type, matchIdx)));
                };
            };
        };
    };
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
    return result ? fu_STR(result) : "."_fu;
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
        if (arg.kind == "argid"_fu)
            result += (arg.value + ": "_fu);

        result += humanizeType(arg.type);
    };
    return result + ")."_fu;
}

[[noreturn]] static fu::never NICERR_mismatch(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, s_CurrentFn& _current_fn_0, const s_Scope& scope, const bool local_scope, const fu_STR& id, const fu_VEC<s_SolvedNode>& args)
{
    fu_VEC<s_Target> overloads {};
    int scope_iterator {};
    s_Target target {};
    bool shadows {};
    while ((target = search(scope.items, id, scope_iterator, (local_scope ? _ss_0.items : fu::Default<fu_VEC<s_ScopeSkip>>::value), shadows, s_Target{}, fu::view<s_Target>{}, (local_scope ? _field_items_0 : fu::Default<fu_VEC<s_ScopeItem>>::value))))
        overloads.push(target);

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
    if (overloads)
    {
        if (args.size() < min)
            fail(ctx_0, _info_0, _here_0, ((((((("`"_fu + id) + "` expects at least "_fu) + min) + " arguments, "_fu) + args.size()) + " provided"_fu) + expectedArgs(ctx_0, module_0, _scope_0, overloads)));
        else if (args.size() > max)
            fail(ctx_0, _info_0, _here_0, ((((((("`"_fu + id) + "` expects at most "_fu) + max) + " arguments, "_fu) + args.size()) + " provided"_fu) + expectedArgs(ctx_0, module_0, _scope_0, overloads)));
        else
            fail(ctx_0, _info_0, _here_0, (((("`"_fu + id) + "` bad args"_fu) + expectedArgs(ctx_0, module_0, _scope_0, overloads)) + actualArgs(args)));

    }
    else
    {
        fu_STR _0 {};
        fail(ctx_0, _info_0, _here_0, ((("`"_fu + id) + "` is not defined in this scope: "_fu) + ((_0 = (("`"_fu + _current_fn_0.out.value) + "`."_fu)) ? static_cast<fu_STR&&>(_0) : "root scope."_fu)));
    };
}

static s_Target match__mutargs(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Scope& scope, const bool local_scope, const fu_STR& id, fu_VEC<s_SolvedNode>& args, fu_VEC<fu_VEC<s_Target>>& conversions, const int flags, const s_Target& target)
{
    const s_Target ret = tryMatch__mutargs(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, scope, local_scope, fu_STR(id), args, conversions, flags, target);
    if (ret)
        return ret;

    const s_Target debug = tryMatch__mutargs(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, scope, local_scope, fu_STR(id), args, conversions, flags, target);
    if (debug)
        return debug;

    NICERR_mismatch(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, _field_items_0, _current_fn_0, scope, local_scope, id, args);
}

static s_SolvedNode solveCall(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, const s_Target& target, const int kills)
{
    fu_STR id { node.value };
    if (!id)
    {
        if (!(target))
            fail(ctx_0, _info_0, _here_0, fu_STR{});

    };
    const int qualified = (node.flags & F_QUALIFIED);
    const s_Scope& scope = (qualified ? dequalify_andGetScope(ctx_0, module_0, _info_0, _here_0, _scope_0, id) : _scope_0);
    fu_VEC<s_SolvedNode> args = solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items, s_Type{}, s_Type{}, bool{}, true, -1, 0);
    if (is_never(if_last_kEWY(args).type))
    {
        _notes_0 |= N_DeadCall;
        return createBlock(node.token, t_never, args, s_Target{});
    };
    fu_VEC<fu_VEC<s_Target>> conversions {};
    const s_Target callTargIdx = match__mutargs(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, scope, !qualified, id, args, conversions, node.flags, target);
    for (int argIdx = 0; argIdx < conversions.size(); argIdx++)
    {
        fu_VEC<s_Target> conversion { conversions[argIdx] };
        s_Node convRead = (conversion ? createRead(ctx_0, _info_0, _here_0, "__using"_fu) : s_Node{});
        for (int i = 0; i < conversion.size(); i++)
        {
            const s_Target& t = conversion[i];
            s_Overload o = GET(ctx_0, module_0, _scope_0, t);
            if (o.min || (o.max && args.mutref(argIdx)))
            {
                args.mutref(argIdx) = CallerNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, convRead, t, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(args[argIdx]) } }, 0);
                continue;
            };
            if (i)
                fail(ctx_0, _info_0, _here_0, (("Bad conversion chain, non-leading nullary: `"_fu + o.name) + "`."_fu));

            if (args.mutref(argIdx))
                fail(ctx_0, _info_0, _here_0, "Bad conversion chain, about to throw away an argnode."_fu);

            args.mutref(argIdx) = CallerNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, convRead, t, fu_VEC<s_SolvedNode>{}, 0);
        };
    };
    return CallerNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, callTargIdx, fu_VEC<s_SolvedNode>(args), kills);
}

static s_SolvedNode evalTypeAnnot(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, const fu_MAP<fu_STR, s_Type>& typeParams)
{
    if (node.kind == "call"_fu)
    {
        const fu_VEC<s_Node>& items = node.items;
        if (items.size() == 1)
        {
            if (node.value == "&"_fu)
                return solved(node, add_ref(T(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, typeParams, 0), Lifetime_temporary()), fu_VEC<s_SolvedNode>{}, s_Target{});

            if (node.value == "&mut"_fu)
                return solved(node, add_mutref(T(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, typeParams, 0), Lifetime_temporary()), fu_VEC<s_SolvedNode>{}, s_Target{});

            if (node.value == "[]"_fu)
                return solved(node, createArray(T(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, typeParams, 0)), fu_VEC<s_SolvedNode>{}, s_Target{});

        }
        else if (items.size() == 2)
        {
            if (node.value == "Map"_fu)
                return solved(node, createMap(T(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, typeParams, 0), T(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, typeParams, 1)), fu_VEC<s_SolvedNode>{}, s_Target{});

        };
        return solveCall(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, s_Target{}, 0);
    }
    else if (node.kind == "typeparam"_fu)
        return solved(node, evalTypeParam(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, node.value, typeParams), fu_VEC<s_SolvedNode>{}, s_Target{});
    else if ((node.kind == "arrlit"_fu) && (node.items.size() == 1))
        return solved(node, createSlice(T(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, typeParams, 0), Lifetime_temporary()), fu_VEC<s_SolvedNode>{}, s_Target{});

    fail(ctx_0, _info_0, _here_0, (((("TODO evalTypeAnnot: "_fu + node.kind) + "["_fu) + node.items.size()) + "]"_fu));
}

                                #ifndef DEF_F_CONVERSION
                                #define DEF_F_CONVERSION
inline const int F_CONVERSION = (1 << 15);
                                #endif

static s_SolvedNode createFnDef(const s_TokenIdx& token, const s_Type& type, const s_Target& target)
{
    return s_SolvedNode { "fndef"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token), s_Type(type), s_Target(target) };
}

static s_SolvedNode uPrepFn_A(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node)
{
    const fu_STR& id = node.value;
    const int local_of = _current_fn_0.out.target.index;
    const bool isTemplate = !!(node.flags & F_TEMPLATE);
    const uint32_t status = (!isTemplate ? SS_LAZY : fu::Default<uint32_t>::value);
    int min = 0;
    const int max = (node.items.size() + FN_RET_BACK);
    fu_VEC<s_Argument> args {};
    for (int i = 0; i < max; i++)
    {
        const s_Node& arg = node.items[i];
        const fu_STR& name = (arg.value ? arg.value : fail(ctx_0, _info_0, _here_0, "TemplateDecl: no argname."_fu));
        const s_Node& annot = arg.items[LET_TYPE];
        const s_Node& init = arg.items[LET_INIT];
        const bool typed = !(arg.flags & F_TEMPLATE);
        s_Type type = (typed && annot ? evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, annot, fu_MAP<fu_STR, s_Type>{}).type : s_Type{});
        s_SolvedNode dEfault = (typed && init ? solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, init, type, bool{}, 0) : s_SolvedNode{});
        args.push(s_Argument { fu_STR(name), s_Type(type), s_SolvedNode(dEfault), 0 });
        if (!arg.items[LET_INIT] && !(arg.flags & F_IMPLICIT))
            min++;

    };
    s_Template tEmplate = createTemplate(_scope_0, _ss_0, _current_fn_0, _helpers_0, node);
    const s_Target tDecl = Scope_add(_scope_0, "template"_fu, id, s_Type{}, node.flags, min, max, args, tEmplate, s_SolvedNode{}, local_of, fu_STR{}, status, module_0);
    if (node.flags & F_CONVERSION)
        _scope_0.converts.push(tDecl);

    return createFnDef(node.token, X_addrofTarget(tDecl), tDecl);
}

static s_SolvedNode uPrepStruct(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node)
{
    return __solveStruct(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, false, s_Node(node), s_Target{});
}

static s_SolvedNode unorderedPrep_A(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node)
{
    const fu_STR& k = node.kind;
    if (k == "fn"_fu)
        return uPrepFn_A(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node);

    if (k == "struct"_fu)
        return uPrepStruct(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node);

    fail(ctx_0, _info_0, _here_0, ("TODO: "_fu + k));
}

static void uPrepFn_B(s_Module& module_0, s_Scope& _scope_0, fu_VEC<s_Helpers>& _helpers_0, const s_Target& target)
{
    s_Template& tEmplate = GET_mut(module_0, _scope_0, target).tEmplate;
    if (tEmplate.scope_memo)
        tEmplate.scope_memo = Scope_snap(_scope_0, _helpers_0);

}

static void unorderedPrep_B(s_Module& module_0, s_Scope& _scope_0, fu_VEC<s_Helpers>& _helpers_0, const s_Node& node, const s_Target& into)
{
    const fu_STR& k = node.kind;
    if (k == "fn"_fu)
        uPrepFn_B(module_0, _scope_0, _helpers_0, into);

}

static fu_VEC<s_SolvedNode> solveNodes(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const fu_VEC<s_Node>& nodes, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const bool deadcode_on_never, const int as_blocks_after, const int kills)
{
    fu_VEC<s_SolvedNode> result {};
    const s_TokenIdx here0 { _here_0 };
    fu_DEFER(_here_0 = here0);
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_Node& node = nodes[i];
        if (!node)
            continue;

        int unorderedClass = unorderedClassify(node.kind);
        if (!unorderedClass)
        {
            _here_0 = (node.token ? node.token : _here_0);
            const s_Type& type = (((i == (nodes.size() - 1)) && use_type_last) ? type_last : type_all);
            s_SolvedNode solved = (((as_blocks_after >= 0) && (as_blocks_after <= i)) ? solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, type, 0, HM_CanBreak, 0) : solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, type, deadcode_on_never, ((i == (nodes.size() - 1)) ? kills : fu::Default<int>::value)));
            result += solved;
            if (deadcode_on_never && is_never(solved.type))
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
            const s_Node& node_1 = (*(_0 = &(nodes[i_1])) ? *_0 : fail(ctx_0, _info_0, _here_0, "solveNodes, prep-a: falsy node"_fu));
            if (unorderedClassify(node_1.kind) != unorderedClass)
            {
                i1 = i_1;
                break;
            };
            _here_0 = (node_1.token ? node_1.token : _here_0);
            result += unorderedPrep_A(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node_1);
        };
        if (!(i1 > i0))
            fail(ctx_0, _info_0, _here_0, fu_STR{});

        i = (i1 - 1);
        for (int i_1 = i0; i_1 < i1; i_1++)
        {
            const s_Node* _1;
            const s_Node& node_1 = (*(_1 = &(nodes[i_1])) ? *_1 : fail(ctx_0, _info_0, _here_0, "solveNodes, prep-b: falsy node"_fu));
            _here_0 = (node_1.token ? node_1.token : _here_0);
            unorderedPrep_B(module_0, _scope_0, _helpers_0, node_1, result.mutref((i_1 + offset)).target);
        };
        bool repeat = true;
        while (repeat)
        {
            repeat = false;
            for (int i_1 = i0; i_1 < i1; i_1++)
            {
                const s_Node* _2;
                const s_Node& node_1 = (*(_2 = &(nodes[i_1])) ? *_2 : fail(ctx_0, _info_0, _here_0, "solveNodes, solve: falsy node"_fu));
                _here_0 = (node_1.token ? node_1.token : _here_0);
                const s_Target into { result.mutref((i_1 + offset)).target };
                if (lazySolveStart(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, into, GET(ctx_0, module_0, _scope_0, into)))
                    repeat = true;

            };
        };
    };
    return result;
}

static s_SolvedNode solveRoot(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node)
{
    return solved(node, t_void, solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items, t_void, s_Type{}, bool{}, bool{}, -1, 0), s_Target{});
}

                                #ifndef DEFt_only_ZDQv
                                #define DEFt_only_ZDQv
inline const s_Node& only_ZDQv(const fu_VEC<s_Node>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_SolvedNode solveArgID(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, const s_Type& type)
{
    s_SolvedNode expr = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, only_ZDQv(node.items), type, bool{}, 0);
    return solved(node, expr.type, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(expr) } }, s_Target{});
}

static s_SolvedNode solveArrayLiteral(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, const s_Type& type)
{
    s_Type itemType = (type ? tryClear_array(type) : s_Type{});
    if (!itemType && isStruct(type))
        return solveCall(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, lookupStruct(type, module_0, ctx_0).target, 0);

    fu_VEC<s_SolvedNode> items = solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items, itemType, s_Type{}, bool{}, bool{}, -1, 0);
    int startAt = 0;
    if (!itemType && items.size())
    {
        s_SolvedNode* _0;
        s_SolvedNode head { (*(_0 = &(items.mutref(startAt++))) ? *_0 : fail(ctx_0, _info_0, _here_0, fu_STR{})) };
        itemType = clear_refs(s_Type(head.type));
    };
    if (!itemType)
        fail(ctx_0, _info_0, _here_0, "Cannot infer empty arraylit."_fu);

    for (int i = startAt; i < items.size(); i++)
    {
        s_SolvedNode* _1;
        itemType = type_trySuper(itemType, (*(_1 = &(items.mutref(i))) ? *_1 : fail(ctx_0, _info_0, _here_0, fu_STR{})).type);
        if (!(itemType))
            fail(ctx_0, _info_0, _here_0, "[array literal] No common supertype."_fu);

    };
    if (is_ref(itemType) || itemType.lifetime)
        fail(ctx_0, _info_0, _here_0, "Array items cannot be refs."_fu);

    for (int i = 0; i < items.size(); i++)
        maybeCopyOrMove(ctx_0, _info_0, _here_0, items.mutref(i), itemType, false);

    return solved(node, createArray(itemType), items, s_Target{});
}

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
inline const s_Type t_bool = s_Type { s_ValueType { int(Primitive), 0, "bool"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

static s_SolvedNode solveIf(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, s_Type&& type)
{
    s_SolvedNode cond = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items[0], t_bool, bool{}, 0);
    if (is_never(cond.type))
    {
        _notes_0 |= N_DeadIf;
        return cond;
    };
    s_SolvedNode cons = solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items[1], type, 0, HM_CanBreak, 0);
    s_SolvedNode alt = solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items[2], (type ? type : cons.type), 0, HM_CanBreak, 0);
    if (!is_void(type))
    {
        s_Type _0 {};
        type = ((_0 = type_trySuper(cons.type, alt.type)) ? static_cast<s_Type&&>(_0) : fail(ctx_0, _info_0, _here_0, (((("[if] No common supertype: `"_fu + serializeType(cons.type)) + " : "_fu) + serializeType(alt.type)) + "`."_fu)));
        if (!(is_ref(type) || !type.lifetime))
            fail(ctx_0, _info_0, _here_0, "[if] stray lifetime"_fu);

        maybeCopyOrMove(ctx_0, _info_0, _here_0, cons, type, false);
        maybeCopyOrMove(ctx_0, _info_0, _here_0, alt, type, false);
    };
    if (is_never(cons.type) && is_never(alt.type))
        type = t_never;

    return solved(node, (type ? type : fail(ctx_0, _info_0, _here_0, fu_STR{})), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { s_SolvedNode(cond), s_SolvedNode(cons), s_SolvedNode(alt) } }, s_Target{});
}

static s_SolvedNode solveOr(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, s_Type&& type)
{
    fu_VEC<s_SolvedNode> items = solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items, (is_void(type) ? t_bool : type), type, true, true, 1, 0);
    if (items.size() < 2)
        return static_cast<s_SolvedNode&&>(only_kEWY(items));

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
            const s_SolvedNode& andLast = (hasNever && (item.kind == "and"_fu) && item.items ? item.items[(item.items.size() - 1)] : fu::Default<s_SolvedNode>::value);
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
            type = t_bool;
        else
        {
            type = sumType;
            for (int i = 0; i < items.size(); i++)
                maybeCopyOrMove(ctx_0, _info_0, _here_0, items.mutref(i), sumType, false);

        };
    };
    return solved(node, type, items, s_Target{});
}

                                #ifndef DEFt_only_XB32
                                #define DEFt_only_XB32
inline const s_SolvedNode& only_XB32(const fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_SolvedNode solveAnd(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, s_Type&& type)
{
    fu_VEC<s_SolvedNode> items = solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items, (is_void(type) ? t_bool : type), type, true, true, 1, 0);
    if (items.size() < 2)
        return s_SolvedNode(only_XB32(items));

    if (is_void(type))
        type = t_bool;

    if (!is_bool(type))
    {
        s_Type sumType {};
        for (int i = items.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items[i];
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
                type = item.type;
                sumType = item.type;
            };
        };
        if (!is_ref(sumType))
        {
            if (is_ref(type))
            {
                type = clear_mutref(s_Type(type));
                type.lifetime = Lifetime_makeShared(type.lifetime);
            };
        }
        else
            type = sumType;

    };
    return solved(node, type, items, s_Target{});
}

                                #ifndef DEF_HM_Anon
                                #define DEF_HM_Anon
inline const short HM_Anon = (short(1) << short(2));
                                #endif

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline const int LOOP_INIT = 0;
                                #endif

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline const int LOOP_COND = 1;
                                #endif

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline const int LOOP_BODY = 2;
                                #endif

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline const int LOOP_POST_COND = 3;
                                #endif

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline const int LOOP_POST = 4;
                                #endif

static s_SolvedNode solveLetStatement(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node)
{
    if (!(node.kind == "let"_fu))
        fail(ctx_0, _info_0, _here_0, (("Expected a `let` statement, got: `"_fu + node.kind) + "`."_fu));

    return solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, t_void, bool{}, 0);
}

static s_SolvedNode solveLoop(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node)
{
    const s_ScopeMemo scope0 = Scope_snap(_scope_0, _helpers_0);
    fu_DEFER(Scope_pop(_scope_0, scope0, _helpers_0));
    const int brk_idx = _helpers_0.size();
    _helpers_0 += s_Helpers { 0, fu_STR(node.value), (HM_Anon | HM_CanBreak), int(_current_fn_0.out.target.index), 0, s_Type{}, s_Type{}, fu_VEC<int>{} };
    const s_Node& n_init = node.items[LOOP_INIT];
    const s_Node& n_pre_cond = node.items[LOOP_COND];
    const s_Node& n_body = node.items[LOOP_BODY];
    const s_Node& n_post_cond = node.items[LOOP_POST_COND];
    const s_Node& n_post = node.items[LOOP_POST];
    s_SolvedNode init = (n_init ? solveLetStatement(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, n_init) : s_SolvedNode{});
    s_SolvedNode pre_cond = (n_pre_cond ? solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, n_pre_cond, t_bool, bool{}, 0) : s_SolvedNode{});
    s_SolvedNode body = (n_body ? solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, n_body, t_void, 0, HM_CanBreak, 0) : s_SolvedNode{});
    s_SolvedNode post_cond = (n_post_cond ? solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, n_post_cond, t_bool, bool{}, 0) : s_SolvedNode{});
    s_SolvedNode post = (n_post ? solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, n_post, t_void, bool{}, 0) : s_SolvedNode{});
    s_Helpers h { _helpers_0[brk_idx] };
    const short label_used = (h.mask & HM_LabelUsed);
    const s_Type& type = ((!pre_cond && !post_cond && !label_used) ? t_never : t_void);
    return solved(node, type, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<5> { s_SolvedNode(init), s_SolvedNode(pre_cond), s_SolvedNode(body), s_SolvedNode(post_cond), s_SolvedNode(post) } }, (label_used ? s_Target { int(module_0.modid), int(h.target) } : s_Target{}));
}

static int Scope_lookupReturn(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_Helpers>& _helpers_0, const fu_STR& id, const bool lambdaOK)
{
    fu_VEC<s_ScopeSkip> ss { _ss_0.helpers };
    int ssi = (ss.size() - 1);
    int ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
    for (int i = _helpers_0.size(); i-- > 0; )
    {
        if ((ssi >= 0) && (i == ssN))
        {
            i = ss[ssi--].start;
            ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
            continue;
        };
        s_Helpers item { _helpers_0[i] };
        if (!(item.mask & HM_CanReturn))
            continue;

        if ((item.mask & HM_Lambda) && !lambdaOK)
            continue;

        if (id && (item.id != id))
            continue;

        return i;
    };
    fail(ctx_0, _info_0, _here_0, (("No return `"_fu + id) + "` in scope."_fu));
}

                                #ifndef DEF_F_SINGLE_STMT
                                #define DEF_F_SINGLE_STMT
inline const int F_SINGLE_STMT = (1 << 31);
                                #endif

static int Scope_lookupLabel(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_Helpers>& _helpers_0, const fu_STR& id, const bool cont)
{
    fu_VEC<s_ScopeSkip> ss { _ss_0.helpers };
    int ssi = (ss.size() - 1);
    int ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
    int CONTINUE_BELOW {};
    for (int i = _helpers_0.size(); i-- > 0; )
    {
        if ((ssi >= 0) && (i == ssN))
        {
            i = ss[ssi--].start;
            ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
            continue;
        };
        if (i < (CONTINUE_BELOW - 1))
            i++;

        s_Helpers item { _helpers_0[i] };
        if (!(item.mask & HM_CanBreak))
        {
            if (!CONTINUE_BELOW)
            {
                if (id || !(item.mask & HM_Lambda))
                    continue;

                if (!cont)
                {
                    CONTINUE_BELOW = i;
                    continue;
                };
            };
            return i;
        };
        if (!CONTINUE_BELOW)
        {
            if (!(id ? (item.id == id) : ((item.mask & HM_Anon) != short(0))))
                continue;

            if (cont)
            {
                i++;
                if (!(i < _helpers_0.size()))
                    fail(ctx_0, _info_0, _here_0, (("Cannot continue to label `"_fu + id) + "` from here, did you mean to `break`?"_fu));

            };
        };
        return i;
    };
    fail(ctx_0, _info_0, _here_0, (("No label `"_fu + id) + "` in scope."_fu));
}

static s_Helpers& h(fu_VEC<s_Helpers>& _helpers_0, int& helpers_idx_0)
{
    return _helpers_0.mutref(helpers_idx_0);
}

static int& left(s_Target& target)
{
    return target.modid;
}

static s_Target Scope_addLabel(s_Module& module_0, s_Scope& _scope_0, int& _anons_0, const fu_STR& id, const int local_of)
{
    return Scope_create(_scope_0, "label"_fu, (id ? fu_STR(id) : ANON(_anons_0)), s_Type{}, F_SHADOW, 0, 0, fu_VEC<s_Argument>{}, s_SolvedNode{}, local_of, 0u, fu_VEC<s_ScopeItem>{}, module_0);
}

static s_SolvedNode createJump(const s_TokenIdx& token, const s_Target& target)
{
    return s_SolvedNode { "jump"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token), s_Type(t_never), s_Target(target) };
}

static s_SolvedNode createMove(const s_SolvedNode& node)
{
    return s_SolvedNode { "move"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(node) } }, s_TokenIdx(node.token), clear_refs(s_Type(node.type)), s_Target{} };
}

static int& right(s_Target& target)
{
    return target.index;
}

static s_SolvedNode solveJump(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, const int kills)
{
    int helpers_idx = ((node.kind == "return"_fu) ? Scope_lookupReturn(ctx_0, _info_0, _here_0, _ss_0, _helpers_0, node.value, !!(node.flags & F_SINGLE_STMT)) : Scope_lookupLabel(ctx_0, _info_0, _here_0, _ss_0, _helpers_0, node.value, (node.kind == "continue"_fu)));
    s_Type* _0;
    s_SolvedNode expr = (node.items ? solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, only_ZDQv(node.items), (*(_0 = &(h(_helpers_0, helpers_idx).ret_actual)) ? *_0 : h(_helpers_0, helpers_idx).ret_expect), bool{}, (helpers_idx + 1)) : s_SolvedNode{});
    if (is_never(expr.type))
        return expr;

    const bool redundant = (kills == (helpers_idx + 1));
    if (redundant && is_void(expr.type))
        return expr;

    while (h(_helpers_0, helpers_idx).kills)
        helpers_idx = (h(_helpers_0, helpers_idx).kills - 1);

    if (redundant && !(h(_helpers_0, helpers_idx).mask & HM_Function))
        return expr;

    s_Target target {};
    int* _1;
    left(target) = (*(_1 = &(h(_helpers_0, helpers_idx).target)) ? *_1 : *_1 = Scope_addLabel(module_0, _scope_0, _anons_0, h(_helpers_0, helpers_idx).id, h(_helpers_0, helpers_idx).local_of).index);
    h(_helpers_0, helpers_idx).mask |= HM_LabelUsed;
    if (!node.items)
    {
        reportReturnType(ctx_0, _info_0, _here_0, _helpers_0, helpers_idx, t_void);
        return createJump(node.token, target);
    };
    if (is_ref(expr.type))
    {
        const int ltCompare = Lifetime_compareToIndex(expr.type.lifetime, left(target));
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
    right(target) = Scope_create(_scope_0, "jump"_fu, fu_STR{}, s_Type{}, 0, 0, 0, fu_VEC<s_Argument>{}, expr, (*(_2 = &(left(target))) ? *_2 : fail(ctx_0, _info_0, _here_0, fu_STR{})), 0u, fu_VEC<s_ScopeItem>{}, module_0).index;
    h(_helpers_0, helpers_idx).returns += right(target);
    return createJump(node.token, target);
}

static s_SolvedNode solveInt(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_Node& node, const s_Type& type)
{
    return solved(node, solveInt(ctx_0, _info_0, _here_0, node.value, type), fu_VEC<s_SolvedNode>{}, s_Target{});
}

static s_SolvedNode solveNum(const s_Node& node, const s_Type& type)
{
    return solved(node, solveNum(node.value, type), fu_VEC<s_SolvedNode>{}, s_Target{});
}

static s_SolvedNode createDefinit(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Type&& type)
{
    const s_TokenIdx token { (_here_0 ? _here_0 : fail(ctx_0, _info_0, _here_0, fu_STR{})) };
    if (is_ref(type))
        type.lifetime = Lifetime_static();

    if (type.vtype.quals & q_integral)
        return s_SolvedNode { "int"_fu, 0, "0"_fu, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token), s_Type(type), s_Target{} };

    if (type.vtype.quals & q_floating_pt)
        return s_SolvedNode { "real"_fu, 0, "0"_fu, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token), s_Type(type), s_Target{} };

    return s_SolvedNode { "definit"_fu, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_TokenIdx(token), s_Type(type), s_Target{} };
}

static s_SolvedNode solveStr(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_Type& t_string_0, const s_Node& node)
{
    if (!node.value)
        return createDefinit(ctx_0, _info_0, _here_0, add_ref(s_Type(t_string_0), Lifetime_temporary()));

    return solved(node, t_string_0, fu_VEC<s_SolvedNode>{}, s_Target{});
}

static s_SolvedNode solveChar(const s_Node& node)
{
    return solved(node, t_byte, fu_VEC<s_SolvedNode>{}, s_Target{});
}

static s_SolvedNode tryCreateDefinit(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_Type& type)
{
    if (CANNOT_definit_mutrefs && is_mutref(type))
        return s_SolvedNode{};

    return createDefinit(ctx_0, _info_0, _here_0, s_Type(type));
}

static s_SolvedNode solveDefinit(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, const s_Type& type)
{
    if (!type)
        fail(ctx_0, _info_0, _here_0, "Cannot solve definit, no inferred type."_fu);

    s_SolvedNode _0 {};
    return (_0 = tryCreateDefinit(ctx_0, _info_0, _here_0, type)) ? static_cast<s_SolvedNode&&>(_0) : fail(ctx_0, _info_0, _here_0, ("Cannot definit: "_fu + serializeType(type)));
}

static s_SolvedNode solveCatch(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node)
{
    if (!(node.items.size() == 3))
        fail(ctx_0, _info_0, _here_0, fu_STR{});

    s_SolvedNode var_ok = solveLetStatement(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items[0]);
    const s_ScopeMemo scope0 = Scope_snap(_scope_0, _helpers_0);
    fu_DEFER(Scope_pop(_scope_0, scope0, _helpers_0));
    s_SolvedNode var_err = solveLetStatement(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items[1]);
    s_SolvedNode cAtch = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items[2], s_Type{}, bool{}, 0);
    s_Type& type = var_ok.type;
    if (!(is_never(cAtch.type)))
        fail(ctx_0, _info_0, _here_0, "[let catch]: catch clause must exit local scope."_fu);

    if (!((var_err.kind == "let"_fu) && isAssignableAsArgument(var_err.type, t_string_0)))
        fail(ctx_0, _info_0, _here_0, ("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu));

    return solved(node, type, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { s_SolvedNode(var_ok), s_SolvedNode(var_err), s_SolvedNode(cAtch) } }, s_Target{});
}

static s_SolvedNode solveImport(const s_Context& ctx_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Node& node)
{
    const s_Module& m = findModule(ctx_0, _info_0, _here_0, node.value);
    Scope_import(ctx_0, _info_0, _here_0, _scope_0, _ss_0, m.modid);
    return createEmpty(ctx_0, _info_0, _here_0, "empty"_fu, t_void, s_Target{});
}

static s_SolvedNode solveDefer(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node)
{
    s_SolvedNode item = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, only_ZDQv(node.items), s_Type{}, bool{}, 0);
    return solved(node, t_void, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(item) } }, s_Target{});
}

static s_SolvedNode solveTryCatch(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node)
{
    if (!(node.items.size() == 3))
        fail(ctx_0, _info_0, _here_0, fu_STR{});

    const s_ScopeMemo scope0 = Scope_snap(_scope_0, _helpers_0);
    s_SolvedNode tRy = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items[0], s_Type{}, bool{}, 0);
    Scope_pop(_scope_0, scope0, _helpers_0);
    const s_ScopeMemo scope0_1 = Scope_snap(_scope_0, _helpers_0);
    s_SolvedNode err = solveLetStatement(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items[1]);
    s_SolvedNode cAtch = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items[2], s_Type{}, bool{}, 0);
    Scope_pop(_scope_0, scope0_1, _helpers_0);
    if (!((err.kind == "let"_fu) && isAssignableAsArgument(err.type, t_string_0)))
        fail(ctx_0, _info_0, _here_0, ("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu));

    const s_Type& type = ((is_never(tRy.type) && is_never(cAtch.type)) ? t_never : t_void);
    return solved(node, type, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { s_SolvedNode(tRy), s_SolvedNode(err), s_SolvedNode(cAtch) } }, s_Target{});
}

static s_SolvedNode solveTypedef(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node)
{
    s_SolvedNode annot = evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, only_ZDQv(node.items), fu_MAP<fu_STR, s_Type>{});
    Scope_Typedef(_scope_0, node.value, annot.type, node.flags, s_Template{}, fu_STR{}, 0u, module_0);
    return createEmpty(ctx_0, _info_0, _here_0, "empty"_fu, t_void, s_Target{});
}

static s_SolvedNode solveTypeAssert(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node)
{
    const s_Node& left = node.items[0];
    const s_Node& right = node.items[1];
    s_Type expect = evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, right, fu_MAP<fu_STR, s_Type>{}).type;
    s_SolvedNode actual = solveNode(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, left, expect, bool{}, 0);
    checkAssignable(ctx_0, _info_0, _here_0, expect, actual.type, "Type assertion failed"_fu, fu_STR{}, fu_STR{});
    return actual;
}

static s_SolvedNode solveTypeParam(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Node& node)
{
    return solved(node, evalTypeParam(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, node.value, fu_MAP<fu_STR, s_Type>{}), fu_VEC<s_SolvedNode>{}, s_Target{});
}

static void visitScope(s_ScopeSkipMemos& _ss_0, const fu_STR& id_0, bool& shadow_0, fu_VEC<s_Target>& result_0, fu::view<s_ScopeItem> items)
{
    int scope_iterator {};
    s_Target target {};
    bool shadows {};
    while (!shadow_0 && (target = search(items, id_0, scope_iterator, _ss_0.items, shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
        result_0.push(target);

}

                                #ifndef DEFt_each_rLEI
                                #define DEFt_each_rLEI
inline void each_rLEI(s_ScopeSkipMemos& _ss_0, const fu_STR& id_0, bool& shadow_0, fu_VEC<s_Target>& result_0, const fu_VEC<s_Struct>& a, int)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Struct& sTruct = a[i];
        visitScope(_ss_0, id_0, shadow_0, result_0, sTruct.items);
    };
}
                                #endif

static void visitTypes(s_ScopeSkipMemos& _ss_0, const fu_STR& id_0, bool& shadow_0, fu_VEC<s_Target>& result_0, const s_Module& module_1)
{
    each_rLEI(_ss_0, id_0, shadow_0, result_0, module_1.out.types, 0);
}

static s_SolvedNode solveAddrOfFn(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeSkipMemos& _ss_0, const s_Node& node)
{
    const fu_STR& id = node.value;
    bool shadow = false;
    fu_VEC<s_Target> result {};
    visitScope(_ss_0, id, shadow, result, _scope_0.items);
    if (node.flags & F_ACCESS)
    {
        visitTypes(_ss_0, id, shadow, result, module_0);
        fu_VEC<int>& items_1 = _scope_0.imports;
        fu_VEC<s_ScopeSkip>& scope_skip = _ss_0.imports;
        const int start = 0;
        const s_ScopeSkip END_DUMMY = s_ScopeSkip { items_1.size(), items_1.size() };
        int i0 = start;
        for (int i_1 = 0; i_1 < (scope_skip.size() + 1); i_1++)
        {
            const s_ScopeSkip& ss = ((i_1 < scope_skip.size()) ? scope_skip[i_1] : END_DUMMY);
            if ((ss.end <= i0))
                continue;

            const int i1 = ss.start;
            for (int i_2 = i0; i_2 < i1; i_2++)
            {
                int& import = items_1.mutref(i_2);
                visitTypes(_ss_0, id, shadow, result, ctx_0.modules[import]);
            };
            i0 = ss.end;
        };
    };
    if (!(result))
        fail(ctx_0, _info_0, _here_0, (("No `fn "_fu + id) + "` in scope."_fu));

    s_Type type = s_Type { s_ValueType { 0, 0, packAddrOfFn(result) }, s_Lifetime{}, s_Effects{} };
    return createEmpty(ctx_0, _info_0, _here_0, "empty"_fu, type, s_Target{});
}

static s_SolvedNode solveDeclExpr(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node)
{
    return s_SolvedNode(only_XB32(solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(node) } }, s_Type{}, s_Type{}, bool{}, bool{}, -1, 0)));
}

static void walk(const fu_STR& placeholder_0, const s_ScopeItem& field_0, s_Node& node_2)
{
    for (int i = 0; i < node_2.items.size(); i++)
        walk(placeholder_0, field_0, node_2.items.mutref(i));

    if (node_2.value == placeholder_0)
    {
        if ((node_2.items.size() == 1) && (node_2.kind == "call"_fu))
            node_2.value = field_0.id;
        else if (node_2.kind == "str"_fu)
            node_2.value = field_0.id;

    };
}

inline static s_Node astReplace_ERet(const fu_STR& placeholder_0, const s_ScopeItem& field_0, const s_Node& node_1, int)
{
    s_Node node_2 { node_1 };
    walk(placeholder_0, field_0, node_2);
    return node_2;
}

static s_SolvedNode solveForFieldsOf(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node)
{
    const fu_STR& placeholder = node.value;
    const s_Node& body_template = node.items[1];
    s_Type fields_of = evalTypeAnnot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node.items[0], fu_MAP<fu_STR, s_Type>{}).type;
    if (!(isStruct(fields_of)))
        fail(ctx_0, _info_0, _here_0, (("[for fieldname]: This is not a struct: `"_fu + serializeType(fields_of)) + "`."_fu));

    const fu_VEC<s_ScopeItem>& fields = lookupStruct(fields_of, module_0, ctx_0).items;
    fu_VEC<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        if (GET(ctx_0, module_0, _scope_0, target(field)).kind == "field"_fu)
            items_ast += astReplace_ERet(placeholder, field, body_template, 0);

    };
    fu_VEC<s_SolvedNode> items = solveNodes(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, items_ast, s_Type{}, s_Type{}, bool{}, true, -1, 0);
    const s_Type& type = (is_never(last_XB32(items).type) ? t_never : t_void);
    return createBlock(node.token, type, items, s_Target{});
}

static s_SolvedNode solveNode(const s_Context& ctx_0, s_Module& module_0, fu_VEC<s_Info>& _info_0, s_TokenIdx& _here_0, s_Scope& _scope_0, s_ScopeMemo& _root_scope_0, s_ScopeSkipMemos& _ss_0, fu_VEC<s_ScopeItem>& _field_items_0, int& _notes_0, s_CurrentFn& _current_fn_0, fu_VEC<s_Helpers>& _helpers_0, int& _anons_0, const s_Type& t_string_0, const s_Node& node, const s_Type& type, const bool deadcode_on_never, const int kills)
{
    const fu_STR& k = node.kind;
    if (k == "root"_fu)
        return solveRoot(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node);

    if (k == "block"_fu)
        return solveBlock(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, type, 0, HM_CanBreak, kills);

    if (k == "argid"_fu)
        return solveArgID(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, type);

    if (k == "let"_fu)
        return solveLet(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, s_Type{}, s_Target{}, deadcode_on_never);

    if (k == "call"_fu)
        return solveCall(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, s_Target{}, kills);

    if (k == "arrlit"_fu)
        return solveArrayLiteral(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, type);

    if (k == "if"_fu)
        return solveIf(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, s_Type(type));

    if (k == "or"_fu)
        return solveOr(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, s_Type(type));

    if (k == "and"_fu)
        return solveAnd(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, s_Type(type));

    if (k == "loop"_fu)
        return solveLoop(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node);

    if (k == "break"_fu)
        return solveJump(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, kills);

    if (k == "return"_fu)
        return solveJump(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, kills);

    if (k == "continue"_fu)
        return solveJump(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node, kills);

    if (k == "int"_fu)
        return solveInt(ctx_0, _info_0, _here_0, node, type);

    if (k == "real"_fu)
        return solveNum(node, type);

    if (k == "str"_fu)
        return solveStr(ctx_0, _info_0, _here_0, t_string_0, node);

    if (k == "char"_fu)
        return solveChar(node);

    if (k == "definit"_fu)
        return solveDefinit(ctx_0, _info_0, _here_0, type);

    if (k == "catch"_fu)
        return solveCatch(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node);

    if (k == "import"_fu)
        return solveImport(ctx_0, _info_0, _here_0, _scope_0, _ss_0, node);

    if (k == "defer"_fu)
        return solveDefer(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node);

    if (k == "try"_fu)
        return solveTryCatch(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node);

    if (k == "typedef"_fu)
        return solveTypedef(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node);

    if (k == "typeassert"_fu)
        return solveTypeAssert(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node);

    if (k == "typeparam"_fu)
        return solveTypeParam(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, node);

    if (k == "addroffn"_fu)
        return solveAddrOfFn(ctx_0, module_0, _info_0, _here_0, _scope_0, _ss_0, node);

    if (k == "fn"_fu)
        return solveDeclExpr(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node);

    if (k == "struct"_fu)
        return solveDeclExpr(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node);

    if (k == "forfieldsof"_fu)
        return solveForFieldsOf(ctx_0, module_0, _info_0, _here_0, _scope_0, _root_scope_0, _ss_0, _field_items_0, _notes_0, _current_fn_0, _helpers_0, _anons_0, t_string_0, node);

    fail(ctx_0, _info_0, _here_0, ("TODO: "_fu + k));
}

s_SolverOutput solve(const s_Node& parse, const s_Context& ctx, s_Module& module)
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
    s_Type t_string = createArray(t_byte);
    if (module.modid)
    {
        _scope.imports += module.modid;
        _Scope_import__forceCopy(ctx, _scope, 0);
    }
    else
        _scope = listGlobals(module);

    s_SolvedNode root = solveNode(ctx, module, _info, _here, _scope, _root_scope, _ss, _field_items, _notes, _current_fn, _helpers, _anons, t_string, parse, s_Type{}, bool{}, 0);
    if (_current_fn)
        fail(ctx, _info, _here, "non-empty _current_fn."_fu);

    return s_SolverOutput { s_SolvedNode(root), Scope_exports(_scope, module.modid, _field_items), int(_notes) };
}

#endif
