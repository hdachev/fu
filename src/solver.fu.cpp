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
struct s_Helpers;
struct s_Info;
struct s_Intlit;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Lint;
struct s_MapFields;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStat;
struct s_ModuleStats;
struct s_Node;
struct s_Options;
struct s_Overload;
struct s_ParserOutput;
struct s_Region;
struct s_Scope;
struct s_ScopeItem;
struct s_ScopeMemo;
struct s_ScopeSkip;
struct s_ScopeSkipMemos;
struct s_SolvedNode;
struct s_SolvedNodeData;
struct s_SolverOutput;
struct s_Struct;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_TypeParam;
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
bool operator==(const s_Region&, const s_Region&);
bool operator==(const s_Target&, const s_Target&);
bool operator==(const s_Type&, const s_Type&);
bool operator>(const s_Region&, const s_Region&);
bool try_relax(s_Type&, const s_Type&);
bool type_has(const s_Type&, fu::view<std::byte>);
bool type_isAddrOfFn(const s_Type&);
const fu_STR& _fname(const s_TokenIdx&, const s_Context&);
const fu_VEC<int>& lookupTypeImports(const s_Type&, const s_Module&, const s_Context&);
const s_Struct& lookupStruct(const s_Type&, const s_Module&, const s_Context&);
const s_Struct& tryLookupStruct(const s_Type&, const s_Module&, const s_Context&);
const s_Token& _token(const s_TokenIdx&, const s_Context&);
fu_STR ClosureID(const s_Target&);
fu_STR hash62(fu::view<std::byte>, int);
fu_STR humanizeType(const s_Type&);
fu_STR packAddrOfFn(fu::view<s_Target>);
fu_STR resolveFile_x(const fu_STR&, const s_Context&);
fu_STR serializeType(const s_Type&);
inline s_ScopeSkip& last_9II5(fu_VEC<s_ScopeSkip>&);
inline s_SolvedNode& last_hang(fu_VEC<s_SolvedNode>&);
int Lifetime_compareToIndex(const s_Lifetime&, int);
int MODID(const s_Module&);
int Region_toArgIndex(const s_Region&);
int Region_toLocalIndex(const s_Region&);
int is_floating_pt(const s_Type&);
int is_integral(const s_Type&);
int is_rx_copy(const s_Type&);
int is_trivial(const s_Type&);
int parse10i32(int&, fu::view<std::byte>);
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
s_ScopeMemo Scope_snap(const s_Scope&, fu::view<s_Helpers>);
s_SolverOutput solve(const s_Options&, const s_Context&, s_Module&);
s_Struct& lookupStruct_mut(fu::view<std::byte>, s_Module&);
s_Target Scope_Typedef(s_Scope&, const fu_STR&, const s_Type&, int, const s_Template&, const fu_STR&, unsigned, const s_Module&);
s_Target Scope_create(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, int, int, const fu_VEC<s_Argument>&, const s_SolvedNode&, int, unsigned, const fu_VEC<s_ScopeItem>&, const s_Template&, int, bool, const s_Module&);
s_Target search(fu::view<s_ScopeItem>, const fu_STR&, int&, const fu_VEC<s_ScopeSkip>&, bool&, const s_Target&, fu::view<s_Target>, fu::view<s_ScopeItem>);
s_Target target(const s_ScopeItem&);
s_Target tryParseClosureID(fu::view<std::byte>, int);
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
s_Type relax_typeParam(s_Type&&);
s_Type tryClear_array(const s_Type&);
s_Type tryClear_mutref(const s_Type&);
s_Type tryClear_ref(const s_Type&);
s_Type tryClear_sliceable(const s_Type&);
s_Type type_tryIntersect(const s_Type&, const s_Type&);
s_Type type_trySuper(const s_Type&, const s_Type&);
static bool lazySolveStart(const s_Target&, const s_Overload&, s_Scope&, s_Module&, s_TokenIdx&, const s_Context&, fu_VEC<s_Info>&, fu_MAP<fu_STR, s_Target>&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static const s_Overload& GET(const s_Target&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&);
static const s_SolvedNodeData& SolvedNodeData(const s_SolvedNode&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&);
static const s_Type& Scope_lookupType(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Info>&, s_Module&, s_Scope&, s_ScopeSkipMemos&);
static const s_Type& T(int, const s_Node&, const fu_MAP<fu_STR, s_TypeParam>&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, s_Target&, fu_VEC<s_Helpers>&, s_CurrentFn&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static fu_VEC<s_SolvedNode> solveNodes(fu::view<s_Node>, const s_Type&, const s_Type&, bool, bool, int, int, s_TokenIdx&, s_Scope&, fu_VEC<s_Helpers>&, s_Module&, s_CurrentFn&, const s_Context&, fu_VEC<s_Info>&, s_Target&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static s_Helpers& h(fu_VEC<s_Helpers>&, int&);
static s_Overload& fnd(int, s_CurrentFn&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&);
static s_SolvedNode CallerNode(const fu_STR&, s_Target&&, fu_VEC<s_SolvedNode>&&, int, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, s_Target&, fu_MAP<fu_STR, s_Target>&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, s_ScopeMemo&, s_CurrentFn&, int&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static s_SolvedNode createLet(const fu_STR&, int, const s_SolvedNode&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, int&, s_Target&, fu_MAP<fu_STR, s_Target>&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, s_ScopeMemo&, s_CurrentFn&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static s_SolvedNode evalTypeAnnot(const s_Node&, const fu_MAP<fu_STR, s_TypeParam>&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, s_Target&, fu_VEC<s_Helpers>&, s_CurrentFn&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static s_SolvedNode solveArrlit(const s_Node&, const s_Type&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, s_Scope&, fu_VEC<s_Helpers>&, s_CurrentFn&, s_Target&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static s_SolvedNode solveBlock(const s_Node&, const s_Type&, int, short, int, const fu_STR&, int, s_Scope&, fu_VEC<s_Helpers>&, s_Module&, s_CurrentFn&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, s_Target&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static s_SolvedNode solveInt(const s_Node&, const s_Type&, s_TokenIdx&, const s_Context&, fu_VEC<s_Info>&, s_Target&, s_Scope&, s_Module&);
static s_SolvedNode solveLet(const s_Node&, const s_Type&, bool, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, s_Target&, fu_VEC<s_Helpers>&, s_CurrentFn&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static s_SolvedNode solveLetLike_dontTouchScope(const s_Node&, const s_Type&, bool, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, s_Target&, fu_VEC<s_Helpers>&, s_CurrentFn&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static s_SolvedNode solveNode(const s_Node&, const s_Type&, bool, int, s_TokenIdx&, s_Scope&, fu_VEC<s_Helpers>&, s_Module&, s_CurrentFn&, const s_Context&, fu_VEC<s_Info>&, s_Target&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static s_SolvedNode solveNum(const s_Node&, const s_Type&, s_Target&, s_Scope&, s_Module&);
static s_SolvedNode solveStr(const s_Node&, const s_Type&, s_Target&, s_Scope&, s_Module&);
static s_Target Binding(const fu_STR&, s_Type&&, int, bool&, s_CurrentFn&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_Helpers>&);
static s_Target doTrySpecialize(const s_Target&, const s_Target&, fu::view<s_SolvedNode>, fu_STR&&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, int, const s_Type&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, fu_MAP<fu_STR, s_Target>&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static s_Target tryMatch__mutargs(const s_Scope&, bool, fu_STR&&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&, int, const s_Target&, s_ScopeSkipMemos&, s_TokenIdx&, const s_Context&, fu_VEC<s_Info>&, s_Scope&, s_Module&, fu_VEC<s_ScopeItem>&, fu_MAP<fu_STR, s_Target>&, fu_VEC<s_Helpers>&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, int&, const s_Type&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static s_Target trySpecialize(const s_Target&, fu::view<s_SolvedNode>, fu_STR&, int, const s_Type&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, fu_MAP<fu_STR, s_Target>&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static s_Type solveArrlit_itemType(fu::view<s_SolvedNode>, s_Type&&, int, s_TokenIdx&, const s_Context&, fu_VEC<s_Info>&, s_Scope&, s_Module&);
static void Scope_import(int, bool, s_Scope&, s_ScopeSkipMemos&, s_TokenIdx&, const s_Context&, fu_VEC<s_Info>&);
static void descend(const s_Type&, bool, bool, const s_Scope&, bool, s_ScopeSkipMemos&, fu_VEC<s_SolvedNode>&, s_Target&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, fu_VEC<fu_VEC<s_Target>>&, fu_VEC<s_ScopeItem>&, fu_MAP<fu_STR, s_Target>&, fu_VEC<s_Helpers>&, s_ScopeMemo&, s_CurrentFn&, int&, int&, const s_Type&, const s_Options&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, const s_Type&, int, const fu_VEC<s_ScopeSkip>&);
static void maybeCopyOrMove(s_SolvedNode&, const s_Type&, bool, s_Module&, s_Target&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, fu_MAP<fu_STR, s_Target>&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, s_ScopeMemo&, s_CurrentFn&, int&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, const s_Options&, fu_VEC<s_SolvedNode>&, fu_VEC<fu_VEC<s_Target>>&);
static void solveLet(s_SolvedNode&, const fu_STR&, bool, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, s_Target&, s_CurrentFn&, s_ScopeMemo&, s_ScopeSkipMemos&, fu_VEC<s_Helpers>&);
void Scope_pop(s_Scope&, const s_ScopeMemo&, fu_VEC<s_Helpers>&);
void Scope_set(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);
void Scope_set(s_Scope&, const fu_STR&, const s_Target&, bool);
void add(s_BitSet&, int);
void rem(s_BitSet&, int);

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
    s_Target nodeown;
    int nodeidx;
    explicit operator bool() const noexcept
    {
        return false
            || nodeown
            || nodeidx
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

                                #ifndef DEF_s_SolvedNodeData
                                #define DEF_s_SolvedNodeData
struct s_SolvedNodeData
{
    fu_STR kind;
    int flags;
    fu_STR value;
    fu_VEC<s_SolvedNode> items;
    s_Type type;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || flags
            || value
            || items
            || type
            || target
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
    s_Target spec_of;
    fu_VEC<s_SolvedNodeData> nodes;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_SolvedNode> callsites;
    unsigned status;
    int local_of;
    fu_VEC<s_ScopeItem> extra_items;
    s_Overload(const s_Overload&) = default;
    s_Overload(s_Overload&&) = default;
    s_Overload& operator=(s_Overload&&) = default;
    s_Overload& operator=(const s_Overload& selfrec) { return *this = s_Overload(selfrec); }
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
            || spec_of
            || nodes
            || locals
            || callsites
            || status
            || local_of
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

                                #ifndef DEF_s_Lint
                                #define DEF_s_Lint
struct s_Lint
{
    int maxwarn;
    explicit operator bool() const noexcept
    {
        return false
            || maxwarn
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Options
                                #define DEF_s_Options
struct s_Options
{
    s_Lint lint;
    int break_notes;
    explicit operator bool() const noexcept
    {
        return false
            || lint
            || break_notes
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
    int flat_cnt;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || target
            || items
            || imports
            || converts
            || flat_cnt
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
    explicit operator bool() const noexcept
    {
        return false
            || out
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Helpers
                                #define DEF_s_Helpers
struct s_Helpers
{
    s_Target target;
    fu_STR id;
    short mask;
    int local_of;
    int kills;
    s_Type ret_expect;
    s_Type ret_actual;
    fu_VEC<s_SolvedNode> returns;
    fu_VEC<int> vars;
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
            || vars
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TypeParam
                                #define DEF_s_TypeParam
struct s_TypeParam
{
    s_Type matched;
    s_Type consumed;
    explicit operator bool() const noexcept
    {
        return false
            || matched
            || consumed
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

                                #ifndef DEF_N_DeadIfCons
                                #define DEF_N_DeadIfCons
inline constexpr int N_DeadIfCons = (1 << 10);
                                #endif

                                #ifndef DEF_N_NonTrivAutoCopy
                                #define DEF_N_NonTrivAutoCopy
inline constexpr int N_NonTrivAutoCopy = (1 << 11);
                                #endif

                                #ifndef DEF_N_RelaxRespec
                                #define DEF_N_RelaxRespec
inline constexpr int N_RelaxRespec = (1 << 12);
                                #endif

static const bool OPTI_autoshadow = true;

static const bool OPTI_dedupe_vars = true;

static const bool OPTI_flatten_blocks = true;

static const bool USE_nontriv_autocopy = true;

static const bool USE_ref_to_mutref = true;

static const bool SELF_TEST = true;

static const bool CANNOT_definit_mutrefs = true;

extern const s_Type t_byte;

static void _Scope_import__forceCopy(const int modid_5, const bool pRivate, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid_5].out.solve.scope;
    _scope.items += fu::get_view(s.items, 0, (pRivate ? s.items.size() : int(s.pub_count)));
}

static s_Overload& GET_mut(const s_Target& target_5, s_Scope& _scope, s_Module& module)
{
    if (target_5.modid < 0)
        return _scope.overloads.mutref((-target_5.modid - 1)).locals.mutref((target_5.index - 1));

    if (!((target_5.index > 0) && (target_5.modid == MODID(module))))
        fu_ASSERT();

    return _scope.overloads.mutref((target_5.index - 1));
}

static s_SolvedNode SolvedNode(const fu_STR& kind_3, const s_Type& type_3, const int flags_4, const fu_STR& value_3, const fu_VEC<s_SolvedNode>& items_5, const s_Target& target_5, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module)
{
    s_SolvedNodeData data = s_SolvedNodeData { fu_STR(kind_3), int(flags_4), fu_STR(value_3), fu_VEC<s_SolvedNode>(items_5), s_Type(type_3), s_Target(target_5) };
    const s_Target& nodeown_1 = _current_fn_or_type;
    fu_VEC<s_SolvedNodeData>& nodes_1 = GET_mut(nodeown_1, _scope, module).nodes;
    const int nodeidx_1 = nodes_1.size();
    nodes_1 += data;
    return s_SolvedNode { s_Target(nodeown_1), int(nodeidx_1) };
}

static s_SolvedNode solved(const s_Node& node_1, const s_Type& type_3, const fu_VEC<s_SolvedNode>& items_5, const s_Target& target_5, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module)
{
    return SolvedNode(node_1.kind, type_3, node_1.flags, node_1.value, items_5, target_5, _current_fn_or_type, _scope, module);
}

extern const s_Type t_void;

static int unorderedClassify(fu::view<std::byte> kind_3)
{
    if (kind_3 == "fn"_fu)
        return 1;

    if (kind_3 == "struct"_fu)
        return 10;

    return 0;
}

[[noreturn]] static fu::never fail(fu_STR&& reason, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info)
{
    const s_Token& here = _token(_here, ctx);
    if (!reason)
        reason = (("Unexpected `"_fu + here.value) + "`."_fu);

    fu::view<std::byte> fname_1 = _fname(_here, ctx);
    fu_STR addr = ((("@"_fu + here.line) + ":"_fu) + here.col);
    for (int i = _info.size(); i-- > 0; )
    {
        const s_Info& info = _info[i];
        const s_Token& here_1 = _token(info.here, ctx);
        reason += (here_1 ? ((((("\n\t@"_fu + here_1.line) + ":"_fu) + here_1.col) + ": "_fu) + info.text) : ("\n\t"_fu + info.text));
    };
    fu::fail(((((fname_1 + " "_fu) + addr) + ":\n\t"_fu) + reason));
}

static const s_Overload& GET(const s_Target& target_5, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    if (target_5.modid < 0)
        return _scope.overloads.mutref((-target_5.modid - 1)).locals.mutref((target_5.index - 1));

    if (target_5.modid == module.modid)
        return _scope.overloads.mutref((target_5.index - 1));

    const s_Overload& o = ctx.modules[target_5.modid].out.solve.scope.overloads[(target_5.index - 1)];
    if (o.local_of)
        fail((((("Working with locals from other modules would "_fu + "prevent bucketing overloads within other overloads: "_fu) + o.kind) + " "_fu) + o.name), _here, ctx, _info);

    return o;
}

static const s_SolvedNodeData& SolvedNodeData(const s_SolvedNode& nid, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    return nid.nodeown ? GET(nid.nodeown, _scope, module, ctx, _here, _info).nodes[nid.nodeidx] : (*(const s_SolvedNodeData*)fu::NIL);
}

                                #ifndef DEFt_if_last_hang
                                #define DEFt_if_last_hang
inline const s_SolvedNode& if_last_hang(fu_VEC<s_SolvedNode>& s)
{
    return s.size() ? s.mutref((s.size() - 1)) : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

extern const s_Type t_never;

                                #ifndef DEF_HM_Function
                                #define DEF_HM_Function
inline constexpr short HM_Function = (short(1) << short(3));
                                #endif

static void checkAssignable(const s_Type& host, const s_Type& guest, fu::view<std::byte> err, const fu_STR& id_2, const fu_STR& sep, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info)
{
    if (!(isAssignable((host ? host : fail("Bad host type."_fu, _here, ctx, _info)), (guest ? guest : fail("Bad guest type."_fu, _here, ctx, _info)))))
        fail((((((err + (id_2 ? ((" `"_fu + id_2) + "`"_fu) : fu_STR{})) + ": "_fu) + humanizeType(host)) + (sep ? fu_STR(sep) : " <- "_fu)) + humanizeType(guest)), _here, ctx, _info);

}

static s_Type superType(fu::view<std::byte> reason, const s_Type& a, const s_Type& b, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info)
{
    s_Type _0 {};
    return (_0 = type_trySuper(a, b)) ? static_cast<s_Type&&>(_0) : fail((((((reason + "No common supertype: `"_fu) + serializeType(a)) + "` <-> `"_fu) + serializeType(b)) + "`."_fu), _here, ctx, _info);
}

static void reportReturnType(const int helpers_idx, const s_Type& type_3, fu_VEC<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info)
{
    s_Helpers& h = _helpers.mutref(helpers_idx);
    if (h.ret_expect && (h.mask & HM_Function))
        checkAssignable(h.ret_expect, type_3, "Expression not assignable to return annotation"_fu, fu_STR{}, fu_STR{}, _here, ctx, _info);

    h.ret_actual = (h.ret_actual ? superType("Subsequent return: "_fu, h.ret_actual, type_3, _here, ctx, _info) : s_Type(type_3));
    if (!(h.ret_actual))
        fail("Can't be null past this point."_fu, _here, ctx, _info);

}

                                #ifndef DEFt_last_hang
                                #define DEFt_last_hang
inline s_SolvedNode& last_hang(fu_VEC<s_SolvedNode>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEFt_only_e0l4
                                #define DEFt_only_e0l4
inline const s_SolvedNode& only_e0l4(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_SolvedNodeData& MUT(const s_SolvedNode& nid, s_Module& module, s_Target& _current_fn_or_type, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    if (nid.nodeown.modid != module.modid)
    {
        s_SolvedNode t = SolvedNode((*(const fu_STR*)fu::NIL), s_Type{}, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);
        return (MUT(t, module, _current_fn_or_type, _scope, ctx, _here, _info) = SolvedNodeData(nid, _scope, module, ctx, _here, _info));
    };
    return GET_mut(nid.nodeown, _scope, module).nodes.mutref(nid.nodeidx);
}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

static fu::view<s_SolvedNode> arg_lets(const s_Overload& overload, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    return fu::get_view(SolvedNodeData(overload.solved, _scope, module, ctx, _here, _info).items, 0, (SolvedNodeData(overload.solved, _scope, module, ctx, _here, _info).items.size() + FN_RET_BACK));
}

static bool TODO_FIX_has(fu::view<s_Region> a, const s_Region& b)
{
    for (int i_1 = 0; i_1 < a.size(); i_1++)
    {
        if (a[i_1] == b)
            return true;

    };
    return false;
}

                                #ifndef DEFt_last_mnBR
                                #define DEFt_last_mnBR
inline const s_Target& last_mnBR(fu::view<s_Target> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static fu_STR mangleArguments(fu::view<s_SolvedNode> args_1, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
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
            mangle += serializeType(GET(last_mnBR(conversions[i]), _scope, module, ctx, _here, _info).type);
        else if ((callsiteIndex >= 0) && (callsiteIndex <= args_1.size()))
            mangle += serializeType(SolvedNodeData(args_1[callsiteIndex], _scope, module, ctx, _here, _info).type);

    };
    if (REST_START < REST_END)
    {
        if (REST_START)
            mangle += ","_fu;

        mangle += serializeType(REST_TYPE);
    };
    return mangle;
}

                                #ifndef DEF_F_SPREAD_INLINE
                                #define DEF_F_SPREAD_INLINE
inline constexpr int F_SPREAD_INLINE = (1 << 25);
                                #endif

                                #ifndef DEF_F_INLINE
                                #define DEF_F_INLINE
inline constexpr int F_INLINE = (1 << 29);
                                #endif

                                #ifndef DEFt_unpackAddrOfFn_iipF
                                #define DEFt_unpackAddrOfFn_iipF
inline void unpackAddrOfFn_iipF(fu::view<std::byte> canon_1, int, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Template& template_1, int& parent_idx)
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
        if ((target_5.modid < 0) || (target_5.modid == module.modid))
        {
            const s_Overload& overload = GET(target_5, _scope, module, ctx, _here, _info);
            if (overload.flags & F_SPREAD_INLINE)
                template_1.node.flags |= F_INLINE;

            const int local_of_2 = overload.local_of;
            if (parent_idx < local_of_2)
                parent_idx = local_of_2;

        };
    };
}
                                #endif

static bool is_SPECFAIL(const s_Target& target_5)
{
    return target_5.modid == 2147483647;
}

inline static fu_STR id_TesV(const s_Target& target_6, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    return (is_SPECFAIL(target_6) ? "SPEC_FAIL"_fu : (("`"_fu + GET(target_6, _scope, module, ctx, _here, _info).name) + "`"_fu));
}

inline static fu_STR id_xKN9(const s_Target& target_6, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    return (is_SPECFAIL(target_6) ? "SPEC_FAIL"_fu : (("`"_fu + GET(target_6, _scope, module, ctx, _here, _info).name) + "`"_fu));
}

static void setSpec(const fu_STR& mangle_1, const s_Target& target_5, const bool nx, const bool isInline, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, s_Scope& _scope, s_Module& module)
{
    if (isInline)
        fail("inline.setSpec"_fu, _here, ctx, _info);

    s_Target* _0;
    s_Target& t = (*(_0 = &(_specs.upsert(mangle_1))) ? *_0 : *_0 = s_Target{});
    if (!((!t && nx) || (is_SPECFAIL(t) && !nx)))
        fail(((((((((("About to screw up royally, replacing spec: "_fu + t.index) + " with "_fu) + target_5.index) + ", mangle: "_fu) + mangle_1) + ", that's: "_fu) + id_TesV(t, _scope, module, ctx, _here, _info)) + " becoming "_fu) + id_xKN9(target_5, _scope, module, ctx, _here, _info)), _here, ctx, _info);

    t = target_5;
}

                                #ifndef DEFt_last_WQyU
                                #define DEFt_last_WQyU
inline s_Helpers& last_WQyU(fu_VEC<s_Helpers>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

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

static void ScopeSkip_push(fu_VEC<s_ScopeSkip>& scope_skip_1, const int start_1, const int end_1, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info)
{
    if (!((start_1 <= end_1)))
        fail("ScopeSkip_push: bad args."_fu, _here, ctx, _info);

    if (end_1 == start_1)
        return;

    const s_ScopeSkip& last_1 = if_last_9II5(scope_skip_1);
    if (!((last_1.end <= start_1)))
        fail("ScopeSkip_push: last.end > start."_fu, _here, ctx, _info);

    if (scope_skip_1 && (last_1.end == start_1))
        last_9II5(scope_skip_1).end = end_1;
    else
        scope_skip_1 += s_ScopeSkip { int(start_1), int(end_1) };

}

static void Scope_import(const int modid_5, const bool pRivate, s_Scope& _scope, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info)
{

    {
        fu::view<int> items_5 = _scope.imports;
        fu::view<s_ScopeSkip> scope_skip_1 = _ss.imports;
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
                    const int import = items_5[i_1];
                    if (import == modid_5)
                        return;

                };
                i0 = ss.end;
            };
        };
    };
    if (!(modid_5))
        fail("Attempting to import modid-0."_fu, _here, ctx, _info);

    _scope.imports += modid_5;
    _Scope_import__forceCopy(modid_5, pRivate, ctx, _scope);
}

static void ScopeSkip_setup(const s_Template& template_1, const s_ScopeMemo& scope0, const bool isInline, s_ScopeMemo& _root_scope, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope)
{
    if (_root_scope)
    {
        const s_ScopeMemo& start_1 = (template_1.scope_memo ? template_1.scope_memo : _root_scope);
        _ss = template_1.scope_skip;
        ScopeSkip_push(_ss.items, start_1.items_len, scope0.items_len, _here, ctx, _info);
        if (!isInline)
            ScopeSkip_push(_ss.declash, start_1.items_len, scope0.items_len, _here, ctx, _info);

        ScopeSkip_push(_ss.imports, start_1.imports_len, scope0.imports_len, _here, ctx, _info);
        ScopeSkip_push(_ss.usings, start_1.usings_len, scope0.usings_len, _here, ctx, _info);
        ScopeSkip_push(_ss.converts, start_1.converts_len, scope0.converts_len, _here, ctx, _info);
        ScopeSkip_push(_ss.helpers, start_1.helpers_len, scope0.helpers_len, _here, ctx, _info);
    };
    for (int i = 0; i < template_1.imports.size(); i++)
        Scope_import(template_1.imports[i], (i == 0), _scope, _ss, _here, ctx, _info);

}

                                #ifndef DEFt_has_2vji
                                #define DEFt_has_2vji
inline bool has_2vji(fu::view<int> a, const int b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline constexpr int LET_TYPE = 0;
                                #endif

static bool couldRetype(const s_SolvedNode& node_1, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    return (SolvedNodeData(node_1, _scope, module, ctx, _here, _info).kind == "int"_fu) || (SolvedNodeData(node_1, _scope, module, ctx, _here, _info).kind == "real"_fu);
}

                                #ifndef DEF_F_COMPOUND_ID
                                #define DEF_F_COMPOUND_ID
inline constexpr int F_COMPOUND_ID = (1 << 6);
                                #endif

                                #ifndef DEFt_find_ajCN
                                #define DEFt_find_ajCN
inline int find_ajCN(fu::view<std::byte> a, const std::byte b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static const s_Module& findModule(const fu_STR& fuzimport, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    fu_STR fname_1 = resolveFile_x(fuzimport, ctx);
    fu::view<s_Module> modules_1 = ctx.modules;
    for (int i = 1; i < modules_1.size(); i++)
    {
        const s_Module& m = modules_1[i];
        if (m.fname == fname_1)
            return m;

    };
    fail(("Cannot locate: "_fu + fname_1), _here, ctx, _info);
}

static const s_Scope& dequalify_andGetScope(fu_STR& id_2, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Module& module, s_Scope& _scope)
{
    const int split_1 = find_ajCN(id_2, std::byte('\t'));
    if (!((split_1 >= 0)))
        fail(fu_STR{}, _here, ctx, _info);

    fu_STR fname_1 = fu::slice(id_2, 0, split_1);
    id_2 = fu::slice(id_2, (split_1 + 1));
    const s_Module& other = findModule(fname_1, ctx, _here, _info);
    if (other.modid != module.modid)
        return other.out.solve.scope;

    return _scope;
}

static const s_Type& Scope_lookupType(fu_STR&& id_2, const int flags_4, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Module& module, s_Scope& _scope, s_ScopeSkipMemos& _ss)
{
    int scope_iterator {};
    s_Target overloadIdx {};
    bool shadows {};
    const int qualified = (flags_4 & F_COMPOUND_ID);
    const s_Scope& scope_1 = (qualified ? dequalify_andGetScope(id_2, _here, ctx, _info, module, _scope) : _scope);
    while ((overloadIdx = search(scope_1.items, id_2, scope_iterator, (!qualified ? _ss.items : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL)), shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
    {
        const s_Overload& maybe = GET(overloadIdx, _scope, module, ctx, _here, _info);
        if (maybe.kind == "type"_fu)
            return maybe.type ? maybe.type : fail(fu_STR{}, _here, ctx, _info);

    };
    fail((("No type `"_fu + id_2) + "` in scope."_fu), _here, ctx, _info);
}

static const s_Type& Scope_lookupType(const s_Node& annot, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Module& module, s_Scope& _scope, s_ScopeSkipMemos& _ss)
{
    return Scope_lookupType(fu_STR(annot.value), annot.flags, _here, ctx, _info, module, _scope, _ss);
}

static bool want(const s_Type& t, const s_Type& type_3)
{
    return type_3.vtype.canon == t.vtype.canon;
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

static const s_Type& solveInt(fu::view<std::byte> v, const s_Type& type_3, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info)
{
    s_Intlit parse_4 = Intlit(v);
    if (parse_4.error)
        fail(fu_STR(parse_4.error), _here, ctx, _info);

    if (type_3)
    {
        if (!parse_4.uNsigned)
        {
            if (want(t_f32, type_3) && (parse_4.minsize_f <= uint8_t(32u)))
                return t_f32;

            if (want(t_f64, type_3) && (parse_4.minsize_f <= uint8_t(64u)))
                return t_f64;

            if (want(t_i32, type_3) && (parse_4.minsize_i <= uint8_t(32u)))
                return t_i32;

            if (want(t_i64, type_3) && (parse_4.minsize_i <= uint8_t(64u)))
                return t_i64;

            if (want(t_i16, type_3) && (parse_4.minsize_i <= uint8_t(16u)))
                return t_i16;

            if (want(t_i8, type_3) && (parse_4.minsize_i <= uint8_t(8u)))
                return t_i8;

        };
        if (!parse_4.sIgned)
        {
            if (want(t_u32, type_3) && (parse_4.minsize_u <= uint8_t(32u)))
                return t_u32;

            if (want(t_u64, type_3) && (parse_4.minsize_u <= uint8_t(64u)))
                return t_u64;

            if (want(t_u16, type_3) && (parse_4.minsize_u <= uint8_t(16u)))
                return t_u16;

            if (want(t_u8, type_3) && (parse_4.minsize_u <= uint8_t(8u)))
                return t_u8;

        };
    };
    if (parse_4.uNsigned)
    {
        if ((parse_4.minsize_u <= uint8_t(32u)))
            return t_u32;

        if ((parse_4.minsize_u <= uint8_t(64u)))
            return t_u64;

    }
    else
    {
        if ((parse_4.minsize_i <= uint8_t(32u)))
            return t_i32;

        if ((parse_4.minsize_i <= uint8_t(64u)))
            return t_i64;

    };
    fail("Bad int literal."_fu, _here, ctx, _info);
}

static const s_Type& solveNum(const fu_STR& v, const s_Type& type_3)
{
    if (v)
    {
    };
    if (type_3.vtype.canon == t_f32.vtype.canon)
        return t_f32;

    return t_f64;
}

static s_Type tryRetyping(const s_SolvedNode& node_1, const s_Type& expect, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    return ((SolvedNodeData(node_1, _scope, module, ctx, _here, _info).kind == "int"_fu) ? s_Type(solveInt(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).value, expect, _here, ctx, _info)) : ((SolvedNodeData(node_1, _scope, module, ctx, _here, _info).kind == "real"_fu) ? s_Type(solveNum(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).value, expect)) : s_Type{}));
}

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline constexpr int F_MUT = (1 << 16);
                                #endif

static bool trySolveTypeParams(const s_Node& node_1, s_Type&& type_3, fu_MAP<fu_STR, s_TypeParam>& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Module& module, s_Scope& _scope, s_ScopeSkipMemos& _ss)
{
    if (node_1.kind == "call"_fu)
    {
        fu::view<s_Node> items_5 = node_1.items;
        if (items_5.size())
        {
            if (items_5.size() == 1)
            {
                s_Type t = ((node_1.value == "&"_fu) ? tryClear_ref(type_3) : ((node_1.value == "&mut"_fu) ? tryClear_mutref(type_3) : ((node_1.value == "[]"_fu) ? tryClear_array(type_3) : fail("TODO trySolveTypeParams unary call"_fu, _here, ctx, _info))));
                if (!t)
                    return false;

                const s_Node* _0;
                return trySolveTypeParams((*(_0 = &(items_5[0])) ? *_0 : fail(fu_STR{}, _here, ctx, _info)), s_Type(t), typeParams, _here, ctx, _info, module, _scope, _ss);
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
                    return trySolveTypeParams((*(_1 = &(items_5[0])) ? *_1 : fail(fu_STR{}, _here, ctx, _info)), s_Type(kv.key), typeParams, _here, ctx, _info, module, _scope, _ss) && trySolveTypeParams((*(_2 = &(items_5[1])) ? *_2 : fail(fu_STR{}, _here, ctx, _info)), s_Type(kv.value), typeParams, _here, ctx, _info, module, _scope, _ss);
                };
            };
        }
        else
            return isAssignable(Scope_lookupType(node_1, _here, ctx, _info, module, _scope, _ss), type_3);

    }
    else if (node_1.kind == "typeparam"_fu)
    {
        const fu_STR& id_2 = (node_1.value ? node_1.value : fail(fu_STR{}, _here, ctx, _info));
        s_TypeParam* _3;
        s_TypeParam& _param = (*(_3 = &(typeParams.upsert(id_2))) ? *_3 : *_3 = s_TypeParam{});
        if (_param)
        {
            s_Type uNion = type_trySuper(_param.matched, type_3);
            if (!uNion)
                return false;

            type_3 = uNion;
        };
        _param.matched = relax_typeParam(s_Type(type_3));
        return true;
    }
    else if ((node_1.kind == "arrlit"_fu) && (node_1.items.size() == 1))
    {
        s_Type t = tryClear_sliceable(type_3);
        const s_Node* _4;
        return t && trySolveTypeParams((*(_4 = &(node_1.items[0])) ? *_4 : fail(fu_STR{}, _here, ctx, _info)), s_Type(t), typeParams, _here, ctx, _info, module, _scope, _ss);
    };
    fail("TODO trySolveTypeParams fallthrough"_fu, _here, ctx, _info);
}

inline static fu_STR mangleArguments_AfYs(fu::view<s_Type> args_1)
{
    fu_STR mangle {};
    for (int i = 0; i < args_1.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(args_1[i]);
    };
    return mangle;
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

static const s_Type& evalTypeParam(const fu_STR& id_2, const fu_MAP<fu_STR, s_TypeParam>& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Module& module, s_Scope& _scope, s_ScopeSkipMemos& _ss)
{
    const s_Type* _0;
    return *(_0 = &(typeParams[id_2].matched)) ? *_0 : *(_0 = &(Scope_lookupType(("$"_fu + (id_2 ? id_2 : fail("Falsy type param id."_fu, _here, ctx, _info))), 0, _here, ctx, _info, module, _scope, _ss))) ? *_0 : fail((("No type param `$"_fu + id_2) + "` in scope."_fu), _here, ctx, _info);
}

static const s_Type& T(const int i, const s_Node& node_1, const fu_MAP<fu_STR, s_TypeParam>& typeParams, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    return SolvedNodeData(evalTypeAnnot(node_1.items[i], typeParams, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions), _scope, module, ctx, _here, _info).type;
}

                                #ifndef DEFt_last_e0l4
                                #define DEFt_last_e0l4
inline const s_SolvedNode& last_e0l4(fu::view<s_SolvedNode> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode createBlock(const s_Type& type_3, const fu_VEC<s_SolvedNode>& items_5, const s_Target& label, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type)
{
    if (!label && items_5.size())
    {
        bool ok = true;
        for (int i = 0; i < (items_5.size() - 1); i++)
        {
            if (SolvedNodeData(items_5[i], _scope, module, ctx, _here, _info).kind != "empty"_fu)
            {
                ok = false;
                break;
            };
        };
        if (ok)
            return s_SolvedNode(last_e0l4(items_5));

    };
    return SolvedNode("block"_fu, type_3, 0, fu_STR{}, items_5, label, _current_fn_or_type, _scope, module);
}

                                #ifndef DEFt_each_uHMo
                                #define DEFt_each_uHMo
inline void each_uHMo(fu::view<s_Target> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, int& count, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info)
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
                count++;
            else
                fail(fu_STR{}, _here, ctx, _info);

        };
        i0 = ss.end;
    };
}
                                #endif

static int countUsings(const s_Scope& scope_1, const bool local_scope, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info)
{
    fu::view<s_ScopeSkip> scope_skip_1 = (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{});
    int count = 0;
    each_uHMo(scope_1.usings, scope_skip_1, 0, 0, count, _here, ctx, _info);
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

                                #ifndef DEFt_each_Igos
                                #define DEFt_each_Igos
inline void each_Igos(fu::view<int> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, s_BitSet& seen)
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
            add(seen, modid_6);
        };
        i0 = ss.end;
    };
}
                                #endif

static void visitTypeImports(const s_Type& type_3, s_Module& module, const s_Context& ctx, s_BitSet& seen, const s_Scope& scope_1, const bool local_scope, s_ScopeSkipMemos& _ss, fu_STR& id_2, fu_VEC<s_Target>& extra_items_1)
{
    fu::view<int> visit = lookupTypeImports(type_3, module, ctx);
    for (int i = -1; i < visit.size(); i++)
    {
        const int modid_5 = ((i >= 0) ? visit[i] : type_3.vtype.modid);
        if (has(seen, modid_5))
            continue;

        if (!seen)
        {
            add(seen, 0);
            add(seen, module.modid);
            each_Igos(scope_1.imports, (local_scope ? _ss.imports : fu::view<s_ScopeSkip>{}), 0, 0, seen);
        };
        if (!add_once(seen, modid_5))
            continue;

        fu::view<s_ScopeItem> items_5 = ctx.modules[modid_5].out.solve.scope.items;
        for (int i_1 = 0; i_1 < items_5.size(); i_1++)
        {
            if (items_5[i_1].id == id_2)
                extra_items_1.push(target(items_5[i_1]));

        };
    };
}

                                #ifndef DEFt_each_ArDj
                                #define DEFt_each_ArDj
inline void each_ArDj(fu::view<s_Target> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_BitSet& seen, const s_Scope& scope_1, const bool local_scope, s_ScopeSkipMemos& _ss, fu_STR& id_2, fu_VEC<s_Target>& extra_items_1)
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
            visitTypeImports(GET(u, _scope, module, ctx, _here, _info).type, module, ctx, seen, scope_1, local_scope, _ss, id_2, extra_items_1);
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

                                #ifndef DEF_SS_LAZY
                                #define DEF_SS_LAZY
inline constexpr unsigned SS_LAZY = (0x1u << 0u);
                                #endif

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline constexpr unsigned SS_FINALIZED = (0x1u << 3u);
                                #endif

                                #ifndef DEF_SS_DIRTY
                                #define DEF_SS_DIRTY
inline constexpr unsigned SS_DIRTY = (0x1u << 2u);
                                #endif

static s_Template createTemplate(const s_Node& node_1, s_CurrentFn& _current_fn, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss)
{
    return s_Template { s_Node(node_1), fu_VEC<int>((!_current_fn ? _scope.imports : (*(const fu_VEC<int>*)fu::NIL))), (_current_fn ? Scope_snap(_scope, _helpers) : s_ScopeMemo{}), s_ScopeSkipMemos((_current_fn ? _ss : (*(const s_ScopeSkipMemos*)fu::NIL))) };
}

                                #ifndef DEF_HM_Struct
                                #define DEF_HM_Struct
inline constexpr short HM_Struct = (short(1) << short(5));
                                #endif

                                #ifndef DEF_F_REF
                                #define DEF_F_REF
inline constexpr int F_REF = (1 << 22);
                                #endif

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline constexpr int F_ARG = (1 << 9);
                                #endif

static s_SolvedNode solveLetLike_dontTouchScope(const fu_STR& id_2, int flags_4, s_SolvedNode&& init, s_Type&& annot, const s_Type& specType, const bool deadcode_on_never, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, int& _notes, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    if (!(annot || SolvedNodeData(init, _scope, module, ctx, _here, _info).type))
        fail((("Variable declarations without type annotations must be initialized: `"_fu + id_2) + "`."_fu), _here, ctx, _info);

    if (annot && SolvedNodeData(init, _scope, module, ctx, _here, _info).type)
    {
        if (specType)
        {
            if (is_mutref(specType) && !is_mutref(SolvedNodeData(init, _scope, module, ctx, _here, _info).type))
                annot = clear_mutref(s_Type(annot));

            if (!isAssignable(annot, SolvedNodeData(init, _scope, module, ctx, _here, _info).type))
                init = s_SolvedNode{};

        };
        if (SolvedNodeData(init, _scope, module, ctx, _here, _info).type)
            checkAssignable(annot, SolvedNodeData(init, _scope, module, ctx, _here, _info).type, "Type annotation does not match init expression"_fu, id_2, "="_fu, _here, ctx, _info);

    };
    const s_Type& t_init = SolvedNodeData(init, _scope, module, ctx, _here, _info).type;
    const bool killref = is_ref2temp(t_init);
    if (deadcode_on_never && is_never(t_init))
    {
        _notes |= N_DeadLet;
        return s_SolvedNode(init);
    };
    if (is_mutref(annot))
        flags_4 |= F_REF;

    if (flags_4 & F_REF)
    {
        if (!(is_mutref(t_init) || (is_never(t_init) && annot) || (!init && (flags_4 & F_ARG))))
            fail(((("`ref` variables must be initialized to a mutable reference: `"_fu + id_2) + "`"_fu) + (t_init ? (" = "_fu + humanizeType(t_init)) : "."_fu)), _here, ctx, _info);

        if (killref)
            fail("`ref` varibles cannot bind to temporaries."_fu, _here, ctx, _info);

    };
    s_Type t_let = ((annot && ((flags_4 & (F_ARG | F_MUT)) || !t_init)) ? (((flags_4 & F_ARG) && !(flags_4 & F_MUT)) ? add_ref(s_Type(annot), Lifetime_temporary()) : s_Type(annot)) : ((is_mutref(t_init) || (flags_4 & F_MUT) || killref) ? (((flags_4 & F_REF) && (!killref || fail("redundant, see above, refs cant bind to temps"_fu, _here, ctx, _info))) ? s_Type(t_init) : ((USE_ref_to_mutref && !(flags_4 & F_MUT) && !killref) ? clear_mutref(s_Type(t_init)) : clear_refs(s_Type(t_init)))) : (((flags_4 & F_ARG) && !(flags_4 & F_MUT)) ? add_ref(s_Type(t_init), Lifetime_temporary()) : s_Type(t_init))));
    if (is_mutref(t_let))
        flags_4 |= F_REF;

    if (init)
    {
        maybeCopyOrMove(init, t_let, false, module, _current_fn_or_type, _scope, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
        if (t_let.lifetime && !(flags_4 & F_ARG))
        {
            const s_Lifetime* _0;
            t_let.lifetime = (*(_0 = &(SolvedNodeData(init, _scope, module, ctx, _here, _info).type.lifetime)) ? *_0 : fail(fu_STR{}, _here, ctx, _info));
        };
    };
    return SolvedNode("let"_fu, t_let, flags_4, id_2, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveLetLike_dontTouchScope(const s_Node& node_1, const s_Type& specType, const bool deadcode_on_never, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    const s_Node& n_annot = node_1.items[LET_TYPE];
    s_Type annot { (specType ? specType : (n_annot ? SolvedNodeData(evalTypeAnnot(n_annot, fu_MAP<fu_STR, s_TypeParam>{}, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions), _scope, module, ctx, _here, _info).type : (*(const s_Type*)fu::NIL))) };
    if (annot && (node_1.flags & F_REF))
        annot = add_mutref(s_Type(annot), Lifetime_temporary());

    const s_Node& n_init = node_1.items[LET_INIT];
    const s_SolvedNode init = (n_init ? solveNode(n_init, annot, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions) : s_SolvedNode{});
    return solveLetLike_dontTouchScope(node_1.value, int(node_1.flags), s_SolvedNode(init), s_Type(annot), specType, deadcode_on_never, _scope, module, ctx, _here, _info, _notes, _current_fn_or_type, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
}

static s_SolvedNode solveMember(const s_Node& node_2, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    if (!(node_2.kind == "let"_fu))
        fail(("solveStructMembers_1: "_fu + node_2.kind), _here, ctx, _info);

    if (node_2.items[LET_INIT] && (node_2.items[LET_INIT].kind != "definit"_fu))
        fail(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node_2.value) + "`."_fu), _here, ctx, _info);

    return solveLetLike_dontTouchScope(node_2, s_Type{}, bool{}, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
}

                                #ifndef DEFt_map_m7hn
                                #define DEFt_map_m7hn
inline fu_VEC<s_SolvedNode> map_m7hn(fu::view<s_Node> a, int, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    fu_VEC<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember(a[i], _here, ctx, _info, _scope, module, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    return res;
}
                                #endif

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline constexpr int F_PUB = (1 << 20);
                                #endif

                                #ifndef DEF_F_USING
                                #define DEF_F_USING
inline constexpr int F_USING = (1 << 18);
                                #endif

                                #ifndef DEFt_add_2vji
                                #define DEFt_add_2vji
inline bool add_2vji(fu_VEC<int>& dest, const int item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest[i] != item)
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
        if ((dest[i] >= item))
        {
            if (dest[i] != item)
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
inline bool add_DNSI(fu_VEC<int>& dest, fu::view<int> src_2)
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

                                #ifndef DEF_SS_UPDATED
                                #define DEF_SS_UPDATED
inline constexpr unsigned SS_UPDATED = (0x1u << 4u);
                                #endif

static void lazySolveEnd(s_Overload& o, s_Module& module, s_Scope& _scope, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, int& _notes, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    fu_VEC<int> reopen {};
    const int parent = o.local_of;
    if (o.status & SS_UPDATED)
    {
        o.status &= ~SS_UPDATED;
        s_Target dedupe {};
        for (int i = 0; i < o.callsites.size(); i++)
        { {
            const s_Target& callsite = o.callsites[i].nodeown;
            if (callsite == dedupe)
                continue;

            dedupe = callsite;
            int index_2 = callsite.index;
            for (; ; )
            {
                s_Overload& o_1 = GET_mut(s_Target { int(module.modid), int(index_2) }, _scope, module);
                if ((o_1.status & (SS_DID_START | SS_DIRTY)) != SS_DID_START)
                    goto L_0123;

                if (!(o_1.status & SS_FINALIZED))
                {
                    o_1.status |= SS_DIRTY;
                    goto L_0123;
                };
                const int up = o_1.local_of;
                if (up != parent)
                {
                    if (!(up > parent))
                        fail("lazySolveEnd: about to climb up the wrong tree."_fu, _here, ctx, _info);

                    index_2 = up;
                    continue;
                };
                _notes |= ((o_1.kind == "type"_fu) ? N_TypeReopen : N_FnReopen);
                o_1.status &= ~((SS_DID_START | SS_DIRTY) | SS_FINALIZED);
                reopen += index_2;
                goto L_0123;
            };
          } L_0123:;
        };
    };
    if (!(o.status & SS_DIRTY))
        o.status |= SS_FINALIZED;
    else
    {
        if (o.status & SS_FINALIZED)
            fail("Stray SS_FINALIZED."_fu, _here, ctx, _info);

        o.status &= ~(SS_DID_START | SS_DIRTY);
        _notes |= ((o.kind == "type"_fu) ? N_TypeResolve : N_FnResolve);
    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t = s_Target { int(module.modid), int(reopen[i]) };
        lazySolveStart(t, GET(t, _scope, module, ctx, _here, _info), _scope, module, _here, ctx, _info, _specs, _helpers, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    };
}

static s_SolvedNode __solveStruct(const bool solve_3, s_Node&& node_1, const s_Target& into, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    s_SolvedNode out_1 = solved(node_1, (into ? GET(into, _scope, module, ctx, _here, _info).type : (*(const s_Type*)fu::NIL)), fu_VEC<s_SolvedNode>{}, into, _current_fn_or_type, _scope, module);
    const fu_STR& origId = node_1.value;
    fu_STR _0 {};
    fu_STR name_3 = (origId ? fu_STR(origId) : (_0 = fu_STR((SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).target ? GET(SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).target, _scope, module, ctx, _here, _info).name : (*(const fu_STR*)fu::NIL)))) ? static_cast<fu_STR&&>(_0) : "Anon"_fu);
    if (!SolvedNodeData(out_1, _scope, module, ctx, _here, _info).target)
    {
        s_Template template_1 = createTemplate(node_1, _current_fn, _scope, _helpers, _ss);
        s_SolvedNodeData& out_2 = MUT(out_1, module, _current_fn_or_type, _scope, ctx, _here, _info);
        if (out_2.type)
            fu_ASSERT();

        out_2.type = initStruct(name_3, node_1.flags, SELF_TEST, module);
        out_2.target = Scope_Typedef(_scope, origId, out_2.type, node_1.flags, template_1, name_3, SS_LAZY, module);
    };
    if (!solve_3)
        return out_1;

    GET_mut(SolvedNodeData(out_1, _scope, module, ctx, _here, _info).target, _scope, module).status |= SS_DID_START;
    const int helpers0 = _helpers.size();
    fu_DEFER(_helpers.shrink(helpers0));
    const s_Target* _1;
    _helpers += s_Helpers { s_Target((*(_1 = &(SolvedNodeData(out_1, _scope, module, ctx, _here, _info).target)) ? *_1 : fail((("solveStruct: no out.target: `"_fu + origId) + "`."_fu), _here, ctx, _info))), fu_STR{}, short(HM_Struct), 0, 0, s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} };
    s_Target current_fn_or_type0 { _current_fn_or_type };
    fu_DEFER(_current_fn_or_type = current_fn_or_type0);
    _current_fn_or_type = SolvedNodeData(out_1, _scope, module, ctx, _here, _info).target;
    fu_VEC<s_Target> structConverts {};
    fu_VEC<int> structImports {};
    int flat_cnt_1 {};
    fu_VEC<s_SolvedNode> members = map_m7hn(node_1.items, 0, _here, ctx, _info, _scope, module, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    {
        fu_VEC<s_ScopeItem>& innerScope = lookupStruct_mut(SolvedNodeData(out_1, _scope, module, ctx, _here, _info).type.vtype.canon, module).items;
        if (!innerScope && members)
        {
            fu_VEC<s_Argument> args_1 = fu_VEC<s_Argument> { fu_VEC<s_Argument>::INIT<1> { s_Argument { "this"_fu, fu_STR{}, despeculateStruct(s_Type(SolvedNodeData(out_1, _scope, module, ctx, _here, _info).type)), s_SolvedNode{}, 0 } } };
            for (int i = 0; i < members.size(); i++)
            {
                const fu_STR& id_2 = node_1.items[i].value;
                const s_Target target_5 = Scope_create(_scope, "field"_fu, (id_2 ? id_2 : fail(fu_STR{}, _here, ctx, _info)), s_Type{}, F_PUB, 1, 1, args_1, s_SolvedNode{}, 0, 0u, fu_VEC<s_ScopeItem>{}, s_Template{}, 0, bool{}, module);
                Scope_set(innerScope, id_2, target_5, false);
            };
            _field_items += innerScope;
        };
        if (!(innerScope.size() == members.size()))
            fail((((((((("solveStructMembers_3: field lens mismatch: "_fu + innerScope.size()) + " vs "_fu) + members.size()) + "/"_fu) + node_1.items.size()) + ": `struct "_fu) + name_3) + "`."_fu), _here, ctx, _info);

        for (int i = 0; i < innerScope.size(); i++)
        {
            const s_ScopeItem& item = innerScope[i];
            const s_SolvedNode& member = members[i];
            if (!(item.id == SolvedNodeData(member, _scope, module, ctx, _here, _info).value))
                fail("solveStructMembers_4: field id mismatch."_fu, _here, ctx, _info);

            s_Overload& field = GET_mut(target(item), _scope, module);
            field.type = SolvedNodeData(member, _scope, module, ctx, _here, _info).type;
            int _2 {};
            flat_cnt_1 += ((_2 = int(tryLookupStruct(SolvedNodeData(member, _scope, module, ctx, _here, _info).type, module, ctx).flat_cnt)) ? _2 : 1);
            if (SolvedNodeData(member, _scope, module, ctx, _here, _info).flags & F_USING)
            {
                structConverts.push(target(item));
                if (field.type.vtype.modid != module.modid)
                    add_2vji(structImports, field.type.vtype.modid);

                add_DNSI(structImports, lookupTypeImports(field.type, module, ctx));
            };
        };
    };

    {
        s_SolvedNodeData& out_2 = MUT(out_1, module, _current_fn_or_type, _scope, ctx, _here, _info);
        bool CHANGE = false;
        int commonQuals = -1;
        for (int i = 0; i < members.size(); i++)
            commonQuals &= SolvedNodeData(members[i], _scope, module, ctx, _here, _info).type.vtype.quals;

        const int quals0 = out_2.type.vtype.quals;
        const int quals1 = (out_2.type.vtype.quals &= commonQuals);
        bool* _3;
        (*(_3 = &(CHANGE)) ? *_3 : *_3 = (quals0 != quals1));

        {
            s_Struct& s = lookupStruct_mut(out_2.type.vtype.canon, module);
            s.target = (out_2.target ? out_2.target : fail("No struct/out.target."_fu, _here, ctx, _info));
            s.converts = structConverts;
            s.imports = structImports;
            const int flat0 = s.flat_cnt;
            s.flat_cnt = flat_cnt_1;
            bool* _4;
            (*(_4 = &(CHANGE)) ? *_4 : *_4 = (flat0 != flat_cnt_1));
            if (!(GET(s.target, _scope, module, ctx, _here, _info).status & SS_DID_START))
                fail("Setting stuff but missing SS_DID_START."_fu, _here, ctx, _info);

        };
        const int max_2 = members.size();
        int min_2 = 0;
        fu_VEC<s_Argument> args_1 {};
        for (int i_1 = 0; i_1 < members.size(); i_1++)
        {
            const s_SolvedNode& member = members[i_1];
            const fu_STR* _5;
            const s_Type* _6;
            s_Argument arg = s_Argument { fu_STR((*(_5 = &(SolvedNodeData(member, _scope, module, ctx, _here, _info).value)) ? *_5 : fail(fu_STR{}, _here, ctx, _info))), fu_STR{}, s_Type((*(_6 = &(SolvedNodeData(member, _scope, module, ctx, _here, _info).type)) ? *_6 : fail(fu_STR{}, _here, ctx, _info))), s_SolvedNode(SolvedNodeData(member, _scope, module, ctx, _here, _info).items[LET_INIT]), (SolvedNodeData(member, _scope, module, ctx, _here, _info).flags & F_MUSTNAME) };
            if (!arg.dEfault)
                min_2++;

            args_1.push(arg);
        };
        if (max_2 && !min_2)
            min_2++;

        s_Overload& overload = GET_mut(out_2.target, _scope, module);
        overload.min = min_2;
        overload.max = max_2;
        overload.args = args_1;
        overload.type = out_2.type;
        if (CHANGE && overload.callsites)
            overload.status |= SS_UPDATED;

    };
    lazySolveEnd(GET_mut(SolvedNodeData(out_1, _scope, module, ctx, _here, _info).target, _scope, module), module, _scope, _here, ctx, _info, _notes, _specs, _helpers, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    return s_SolvedNode{};
}

static bool lazySolveStart(const s_Target& target_5, const s_Overload& overload, s_Scope& _scope, s_Module& module, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    if ((overload.status & (SS_DID_START | SS_LAZY)) != SS_LAZY)
        return false;


    {
        s_Overload& o = GET_mut(target_5, _scope, module);
        if (o.status & ((SS_FINALIZED | SS_DID_START) | SS_DIRTY))
            fail(("SS_DID_START: non-zero solver status: "_fu + overload.status), _here, ctx, _info);

        o.status |= SS_DID_START;
        if ((o.kind == "template"_fu) || (o.kind == "fn"_fu))
            doTrySpecialize(target_5, s_Target{}, fu_VEC<s_SolvedNode>{}, fu_STR{}, fu::view<int>{}, bool{}, fu_VEC<fu_VEC<s_Target>>{}, 0, s_Type{}, _scope, module, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
        else if (o.kind == "type"_fu)
            __solveStruct(true, s_Node(o.tEmplate.node), target_5, _scope, module, ctx, _here, _info, _current_fn_or_type, _current_fn, _helpers, _ss, _specs, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
        else
            fail((("lazySolveStart: kind is `"_fu + o.kind) + "`."_fu), _here, ctx, _info);

    };
    return true;
}

static void reorderByNumUsings(bool& use_reorder, fu_VEC<int>& reorder, fu::view<s_Argument> host_args, const int num_args, const int num_usings)
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

                                #ifndef DEFt_find_ByEn
                                #define DEFt_find_ByEn
inline int find_ByEn(fu::view<fu_STR> a, fu::view<std::byte> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static bool reorderByArgIDs(bool& use_reorder, fu_VEC<int>& reorder, fu::view<fu_STR> names, s_BitSet&& optional, fu::view<s_Argument> host_args, const int num_usings)
{
    use_reorder = true;
    reorder.clear();
    int used = 0;
    int offset = num_usings;
    for (int i = 0; i < host_args.size(); i++)
    {
        int idx = find_ByEn(names, host_args[i].name);
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
        for (int i_1 = 0; i_1 < names.size(); i_1++)
        {
            if (!names[i_1])
                used++;

        };
        if ((used + popcount(optional)) != names.size())
            return false;

    };
    while (reorder && (reorder[(reorder.size() - 1)] < 0))
        reorder.pop();

    if (reorder.size() != names.size())
        return true;

    for (int i_1 = 0; i_1 < reorder.size(); i_1++)
    {
        if (reorder[i_1] != i_1)
            return true;

    };
    reorder.clear();
    use_reorder = false;
    return true;
}

                                #ifndef DEF_F_REST_ARG
                                #define DEF_F_REST_ARG
inline constexpr int F_REST_ARG = (1 << 26);
                                #endif

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

static fu_STR explain(fu::view<s_Target> path_1, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    fu_STR res = "`"_fu;
    for (int i = 0; i < path_1.size(); i++)
    {
        if (i)
            res += "` -> `"_fu;

        const s_Overload& o = GET(path_1[i], _scope, module, ctx, _here, _info);
        res += ((o.kind + " "_fu) + o.name);
        if (i < path_1.size())
            res += (": "_fu + serializeType(o.type));

    };
    res += "`"_fu;
    return res;
}

static void foreach(const s_Target& t, const bool nullary, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, const s_Type& from, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, const s_Options& options, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const s_Scope& scope_1, const bool local_scope, const int has_converts, const fu_VEC<s_ScopeSkip>& ss_converts)
{
    if (!nullary)
    {
        if (!TODO_FIX_convert_args)
            TODO_FIX_convert_args = fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { SolvedNode((*(const fu_STR*)fu::NIL), s_Type{}, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module) } };

        MUT(TODO_FIX_convert_args[0], module, _current_fn_or_type, _scope, ctx, _here, _info).type = from;
    };
    s_Target candidate {};
    if (nullary || (candidate = tryMatch__mutargs(s_Scope{}, false, fu_STR{}, TODO_FIX_convert_args, TODO_FIX_convert_conversions, F_CONVERSION, t, _ss, _here, ctx, _info, _scope, module, _field_items, _specs, _helpers, _root_scope, _current_fn_or_type, _current_fn, _anons, _notes, t_string, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions)))
    {
        const s_Target& t_1 = (nullary ? t : candidate);
        const s_Overload& convert = GET(t_1, _scope, module, ctx, _here, _info);
        if (!(convert.type))
            fail((((("No convert.type, perhaps a `using inline fn` without a return type annotation: `"_fu + convert.kind) + " "_fu) + convert.name) + "`."_fu), _here, ctx, _info);

        s_Type convertType = ((convert.kind == "field"_fu) ? add_refs((from ? from : fail(fu_STR{}, _here, ctx, _info)), s_Type(convert.type)) : s_Type(convert.type));
        const bool isStruct_2 = isStruct(convertType);
        if (isAssignableAsArgument(expect, convertType))
        {
            if (match)
            {
                fu_STR suffix = (((("\n\t"_fu + explain(match, _scope, module, ctx, _here, _info)) + "\n\tand:"_fu) + "\n\t"_fu) + explain((path + t_1), _scope, module, ctx, _here, _info));
                if (actual)
                    fail(((((("Conversion ambiguity, multiple ways to convert `"_fu + serializeType(actual)) + "` into `"_fu) + serializeType(expect)) + "`: "_fu) + suffix), _here, ctx, _info);
                else
                    fail(((("`using` ambiguity, multiple ways to obtain a `"_fu + serializeType(expect)) + "` in this scope: "_fu) + suffix), _here, ctx, _info);

            };
            match = (path + t_1);
        }
        else
        {
            const bool mightHaveConversion = (isStruct_2 || scope_1.converts);
            if (mightHaveConversion)
            {
                if (path.size() > 10)
                {
                    for (int i = path.size(); i-- > 0; )
                    {
                        if (path[i] == t_1)
                        {
                            fu_STR err = "Conversion loop:"_fu;
                            for (int i_1 = i; i_1 < path.size(); i_1++)
                            {
                                if (!i_1)
                                    err += "\n\t`"_fu;
                                else
                                    err += " `"_fu;

                                const s_Overload& convert_1 = GET(path[i_1], _scope, module, ctx, _here, _info);
                                err += (((((convert_1.kind + " "_fu) + convert_1.name) + ": "_fu) + serializeType(convertType)) + "` ->"_fu);
                            };
                            err += (((("\n\t\t`"_fu + convert.kind) + " "_fu) + convert.name) + "`."_fu);
                            fail(fu_STR(err), _here, ctx, _info);
                        };
                    };
                };
                path.push(t_1);
                fu_DEFER(path.pop());
                descend(convertType, false, isStruct_2, scope_1, local_scope, _ss, TODO_FIX_convert_args, _current_fn_or_type, _scope, module, ctx, _here, _info, TODO_FIX_convert_conversions, _field_items, _specs, _helpers, _root_scope, _current_fn, _anons, _notes, t_string, options, expect, match, path, actual, has_converts, ss_converts);
            };
        };
    };
}

                                #ifndef DEFt_each_Mcof
                                #define DEFt_each_Mcof
inline void each_Mcof(fu::view<s_Target> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, const bool nullary, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, const s_Type& from, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, const s_Options& options, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const s_Scope& scope_1, const bool local_scope, const int has_converts, const fu_VEC<s_ScopeSkip>& ss_converts)
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
            foreach(u, nullary, TODO_FIX_convert_args, _current_fn_or_type, _scope, module, ctx, _here, _info, from, TODO_FIX_convert_conversions, _ss, _field_items, _specs, _helpers, _root_scope, _current_fn, _anons, _notes, t_string, options, expect, match, path, actual, scope_1, local_scope, has_converts, ss_converts);
        };
        i0 = ss.end;
    };
}
                                #endif

                                #ifndef DEFt_each_Sty8
                                #define DEFt_each_Sty8
inline void each_Sty8(fu::view<s_Target> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, const bool nullary, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, const s_Type& from, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, const s_Options& options, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const s_Scope& scope_1, const bool local_scope, const int has_converts, const fu_VEC<s_ScopeSkip>& ss_converts)
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
            foreach(items_5[i_1], nullary, TODO_FIX_convert_args, _current_fn_or_type, _scope, module, ctx, _here, _info, from, TODO_FIX_convert_conversions, _ss, _field_items, _specs, _helpers, _root_scope, _current_fn, _anons, _notes, t_string, options, expect, match, path, actual, scope_1, local_scope, has_converts, ss_converts);

        i0 = ss.end;
    };
}
                                #endif

static void descend(const s_Type& from, const bool nullary, const bool isStruct_1, const s_Scope& scope_1, const bool local_scope, s_ScopeSkipMemos& _ss, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, const s_Options& options, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const int has_converts, const fu_VEC<s_ScopeSkip>& ss_converts)
{
    if (nullary)
        each_Mcof(scope_1.usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, 0, nullary, TODO_FIX_convert_args, _current_fn_or_type, _scope, module, ctx, _here, _info, from, TODO_FIX_convert_conversions, _ss, _field_items, _specs, _helpers, _root_scope, _current_fn, _anons, _notes, t_string, options, expect, match, path, actual, scope_1, local_scope, has_converts, ss_converts);
    else
    {
        if (isStruct_1)
        {
            fu::view<s_Target> inner = lookupStruct(from, module, ctx).converts;
            for (int i = 0; i < inner.size(); i++)
                foreach(inner[i], nullary, TODO_FIX_convert_args, _current_fn_or_type, _scope, module, ctx, _here, _info, from, TODO_FIX_convert_conversions, _ss, _field_items, _specs, _helpers, _root_scope, _current_fn, _anons, _notes, t_string, options, expect, match, path, actual, scope_1, local_scope, has_converts, ss_converts);

        };
        if (has_converts)
            each_Sty8(scope_1.converts, ss_converts, 0, 0, nullary, TODO_FIX_convert_args, _current_fn_or_type, _scope, module, ctx, _here, _info, from, TODO_FIX_convert_conversions, _ss, _field_items, _specs, _helpers, _root_scope, _current_fn, _anons, _notes, t_string, options, expect, match, path, actual, scope_1, local_scope, has_converts, ss_converts);

    };
}

static fu_VEC<s_Target> tryConvert(const s_Scope& scope_1, const bool local_scope, const s_Type& expect, const s_Type& actual, s_ScopeSkipMemos& _ss, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, const s_Options& options)
{
    fu_VEC<s_Target> match {};
    fu_VEC<s_Target> path {};
    const int has_converts = scope_1.converts.size();
    const fu_VEC<s_ScopeSkip>& ss_converts = (local_scope ? _ss.converts : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL));
    descend(actual, !actual, isStruct(actual), scope_1, local_scope, _ss, TODO_FIX_convert_args, _current_fn_or_type, _scope, module, ctx, _here, _info, TODO_FIX_convert_conversions, _field_items, _specs, _helpers, _root_scope, _current_fn, _anons, _notes, t_string, options, expect, match, path, actual, has_converts, ss_converts);
    return match;
}

                                #ifndef DEFt_grow_if_oob_kcit
                                #define DEFt_grow_if_oob_kcit
inline fu_VEC<s_Target>& grow_if_oob_kcit(fu_VEC<fu_VEC<s_Target>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_only_hang
                                #define DEFt_only_hang
inline s_SolvedNode& only_hang(fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

                                #ifndef DEFt_only_wJ1c
                                #define DEFt_only_wJ1c
inline const fu_VEC<s_Target>& only_wJ1c(fu::view<fu_VEC<s_Target>> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
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

static s_Type solveArrlit_itemType_init(const s_Type& head, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info)
{
    s_Type _0 {};
    return (_0 = clear_refs(s_Type(head))) ? static_cast<s_Type&&>(_0) : fail(fu_STR{}, _here, ctx, _info);
}

static s_Type solveArrlit_done(const s_Type& itemType)
{
    return createArray(itemType);
}

static const s_Overload& GETfn(const int idx, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    return GET(s_Target { int(module.modid), int(idx) }, _scope, module, ctx, _here, _info);
}

static fu_STR fnName(const int idx, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    return (idx ? (("`"_fu + GETfn(idx, module, _scope, ctx, _here, _info).name) + "`"_fu) : "global scope"_fu);
}

static void disambig(s_Target& matchIdx, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& overloadIdx, s_CurrentFn& _current_fn, fu_STR& id_2)
{
    if (matchIdx)
    {
        const int inner = GET(matchIdx, _scope, module, ctx, _here, _info).local_of;
        const int outer = GET(overloadIdx, _scope, module, ctx, _here, _info).local_of;
        const int callsite = SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).target.index;
        if (SELF_TEST)
        {
            int _c = callsite;
            while (_c > inner)
                _c = GETfn(_c, module, _scope, ctx, _here, _info).local_of;

            if (!(_c == inner))
                fail(((((("BUG! Leaking `"_fu + id_2) + "` between functions [inner/callsite]: "_fu) + fnName(inner, module, _scope, ctx, _here, _info)) + " is seen from "_fu) + fnName(callsite, module, _scope, ctx, _here, _info)), _here, ctx, _info);

            int _i = inner;
            while (_i > outer)
                _i = GETfn(_i, module, _scope, ctx, _here, _info).local_of;

            if (!(_i == outer))
                fail(((((((("BUG! Leaking `"_fu + id_2) + "` between functions [inner/outer]: "_fu) + fnName(inner, module, _scope, ctx, _here, _info)) + " and "_fu) + fnName(outer, module, _scope, ctx, _here, _info)) + " as seen from "_fu) + fnName(callsite, module, _scope, ctx, _here, _info)), _here, ctx, _info);

        };
        fail((((((((("Ambiguous callsite, matches multiple items in scope: `"_fu + id_2) + "` from "_fu) + fnName(inner, module, _scope, ctx, _here, _info)) + " and "_fu) + fnName(outer, module, _scope, ctx, _here, _info)) + ", as seen from "_fu) + fnName(callsite, module, _scope, ctx, _here, _info)) + "."_fu), _here, ctx, _info);
    };
}

                                #ifndef DEFt_last_FGX6
                                #define DEFt_last_FGX6
inline const fu_STR& last_FGX6(fu::view<fu_STR> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_Target tryMatch__mutargs(const s_Scope& scope_1, const bool local_scope, fu_STR&& id_2, fu_VEC<s_SolvedNode>& args_1, fu_VEC<fu_VEC<s_Target>>& conversions, const int flags_4, const s_Target& target_5, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, s_Module& module, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    s_Target matchIdx {};
    s_Target DEBUG_assertMatch {};
    int minArity = args_1.size();
    const int numUsings = (scope_1.usings ? countUsings(scope_1, local_scope, _ss, _here, ctx, _info) : int{});
    const int explicitArity = minArity;
    const int maxArity = (explicitArity + numUsings);
    fu_VEC<fu_STR> names {};
    s_BitSet optional {};
    if (flags_4 & F_NAMED_ARGS)
    {
        bool some = false;
        for (int i = 0; i < args_1.size(); i++)
        {
            const s_SolvedNode& arg = args_1[i];
            const fu_STR* _0;
            names.push(((SolvedNodeData(arg, _scope, module, ctx, _here, _info).kind == "argid"_fu) ? (*(_0 = &(((void)(some = true), SolvedNodeData(arg, _scope, module, ctx, _here, _info).value))) ? *_0 : fail(fu_STR{}, _here, ctx, _info)) : (*(const fu_STR*)fu::NIL)));
            if (SolvedNodeData(arg, _scope, module, ctx, _here, _info).flags & F_OPT_ARG)
            {
                minArity--;
                add(optional, i);
            };
        };
        if (!(some))
            fail(fu_STR{}, _here, ctx, _info);

    };
    fu_VEC<int> reorder {};
    fu_STR reusable_mangle {};
    fu_VEC<s_Target> extra_items_1 {};
    if (local_scope && !target_5)
    {
        s_BitSet seen {};
        if (numUsings)
            each_ArDj(scope_1.usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, 0, _scope, module, ctx, _here, _info, seen, scope_1, local_scope, _ss, id_2, extra_items_1);

        if (flags_4 & ((((F_ACCESS | F_METHOD) | F_INFIX) | F_PREFIX) | F_POSTFIX))
        {
            for (int i = 0; i < args_1.size(); i++)
                visitTypeImports(SolvedNodeData(args_1[i], _scope, module, ctx, _here, _info).type, module, ctx, seen, scope_1, local_scope, _ss, id_2, extra_items_1);

        };
    };
    fu::view<s_ScopeItem> field_items = (local_scope && ((flags_4 & F_ACCESS) || !minArity) && (minArity <= 1) && maxArity ? _field_items : fu::view<s_ScopeItem>{});
    fu_VEC<fu_STR> alternate_ids {};
    fu_VEC<s_SolvedNode> args_out {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        bool shadows {};
        while ((overloadIdx = search(scope_1.items, id_2, scope_iterator, (local_scope ? ((flags_4 & F_IMPLICIT) ? _ss.declash : _ss.items) : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL)), shadows, target_5, extra_items_1, field_items)))
        { {
            fu_VEC<fu_VEC<s_Target>> conversions_1 {};
            fu_VEC<s_SolvedNode> args_2 { args_1 };
            bool TODO_FIX_skip_autocalls = false;
            while (true)
            {
                const s_Overload& overload = GET(overloadIdx, _scope, module, ctx, _here, _info);
                if (lazySolveStart(overloadIdx, overload, _scope, module, _here, ctx, _info, _specs, _helpers, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions))
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
                    goto L_0177;

                fu::view<s_Argument> host_args = overload.args;
                const int num_usings = (!isZeroInit && (overload.min > explicitArity) ? (overload.min - explicitArity) : int{});
                bool use_reorder = false;
                if (!names)
                    reorderByNumUsings(use_reorder, reorder, host_args, args_2.size(), num_usings);
                else if (!reorderByArgIDs(use_reorder, reorder, names, s_BitSet(optional), host_args, num_usings))
                    goto L_0177;

                if (optional && reorder && (reorder.size() < args_2.size()) && (reorder.size() < overload.max))
                    goto L_0177;

                s_Type REST_TYPE {};
                const int REST_START = findRestStart(overload);
                const int N = std::max((use_reorder ? reorder.size() : args_2.size()), (!isZeroInit ? overload.min : (*(const int*)fu::NIL)));
                if (N)
                {
                    if (!((reorder.size() >= args_2.size()) || !reorder || optional))
                        fail("reorder < args."_fu, _here, ctx, _info);

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
                                const s_Type& expect_1 = (expect ? expect : SolvedNodeData(host_arg.dEfault, _scope, module, ctx, _here, _info).type);
                                if (expect_1)
                                {
                                    fu_VEC<s_Target> conversion = tryConvert(scope_1, local_scope, expect_1, s_Type{}, _ss, TODO_FIX_convert_args, _current_fn_or_type, _scope, module, ctx, _here, _info, TODO_FIX_convert_conversions, _field_items, _specs, _helpers, _root_scope, _current_fn, _anons, _notes, t_string, options);
                                    if (conversion)
                                    {
                                        grow_if_oob_kcit(conversions_1, i) = conversion;
                                        continue;
                                    };
                                };
                            };
                            goto L_0177;
                        };
                        if (host_arg.flags & F_MUSTNAME)
                        {
                            if ((names.size() <= callsiteIndex) || !names[callsiteIndex])
                                goto L_0177;

                        };
                        if (host_arg.autocall && !TODO_FIX_skip_autocalls)
                        {
                            fu_VEC<s_SolvedNode> autocall_args {};
                            fu_VEC<fu_VEC<s_Target>> autocall_conversions {};
                            autocall_args.resize(1);
                            std::swap(args_2.mutref(callsiteIndex), only_hang(autocall_args));
                            const s_Target t = tryMatch__mutargs(scope_1, local_scope, fu_STR(host_arg.autocall), autocall_args, autocall_conversions, 0, s_Target{}, _ss, _here, ctx, _info, _scope, module, _field_items, _specs, _helpers, _root_scope, _current_fn_or_type, _current_fn, _anons, _notes, t_string, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
                            if (!t)
                                goto L_0177;

                            std::swap(args_2.mutref(callsiteIndex), only_hang(autocall_args));
                            if (autocall_conversions)
                                grow_if_oob_kcit(conversions_1, i) += only_wJ1c(autocall_conversions);

                            grow_if_oob_kcit(conversions_1, i) += t;
                        };
                        if (!expect)
                            continue;

                        const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                        const s_Type& actual = (hasConv ? GET(last_uIm6(conversions_1.mutref(i)), _scope, module, ctx, _here, _info).type : SolvedNodeData(args_2[callsiteIndex], _scope, module, ctx, _here, _info).type);
                        if (isAssignableAsArgument(expect, (actual ? actual : fail("tryMatch: !actual"_fu, _here, ctx, _info))))
                            continue;

                        if (!hasConv && considerRetyping(expect, actual))
                        {
                            const s_SolvedNode& arg = args_2[callsiteIndex];
                            const s_SolvedNode& arg_1 = ((SolvedNodeData(arg, _scope, module, ctx, _here, _info).kind == "argid"_fu) ? only_e0l4(SolvedNodeData(arg, _scope, module, ctx, _here, _info).items) : arg);
                            s_Type retype = tryRetyping(arg_1, expect, _scope, module, ctx, _here, _info);
                            if (isAssignableAsArgument(expect, retype))
                                continue;

                        };
                        if (!(flags_4 & F_CONVERSION))
                        {
                            fu_VEC<s_Target> conversion = tryConvert(scope_1, local_scope, expect, actual, _ss, TODO_FIX_convert_args, _current_fn_or_type, _scope, module, ctx, _here, _info, TODO_FIX_convert_conversions, _field_items, _specs, _helpers, _root_scope, _current_fn, _anons, _notes, t_string, options);
                            if (conversion)
                            {
                                grow_if_oob_kcit(conversions_1, i) += conversion;
                                continue;
                            };
                        };
                        goto L_0177;
                    };
                };
                if (REST_START < N)
                {
                    for (int i = REST_START; i < N; i++)
                    {
                        const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                        const int callsiteIndex = (use_reorder ? reorder.mutref(i) : i);
                        const s_Type& actual = (hasConv ? GET(last_uIm6(conversions_1.mutref(i)), _scope, module, ctx, _here, _info).type : SolvedNodeData(args_2[callsiteIndex], _scope, module, ctx, _here, _info).type);
                        REST_TYPE = ((i == REST_START) ? solveArrlit_itemType_init(actual, _here, ctx, _info) : type_trySuper(REST_TYPE, actual));
                        if (!REST_TYPE)
                            goto L_0177;

                    };
                    REST_TYPE = solveArrlit_done(REST_TYPE);
                };
                if (overload.kind == "template"_fu)
                {
                    fu_STR cant_reuse {};
                    fu_STR& args_mangled = ((use_reorder || conversions_1) ? cant_reuse : reusable_mangle);
                    const s_Target specIdx = trySpecialize(overloadIdx, args_2, args_mangled, REST_START, REST_TYPE, reorder, use_reorder, conversions_1, _scope, module, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
                    if (!specIdx)
                        goto L_0177;

                    overloadIdx = specIdx;
                    DEBUG_assertMatch = specIdx;
                    TODO_FIX_skip_autocalls = true;
                    continue;
                };
                disambig(matchIdx, _scope, module, ctx, _here, _info, overloadIdx, _current_fn, id_2);
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
          } L_0177:;
        } L_NEXT:;

        if (!alternate_ids)
            break;

        id_2 = last_FGX6(alternate_ids);
        alternate_ids.pop();
    };
    if (matchIdx)
        std::swap(args_1, args_out);

    if (DEBUG_assertMatch)
    {
        if (!(DEBUG_assertMatch == matchIdx))
            fail((("Specialized `"_fu + GET(DEBUG_assertMatch, _scope, module, ctx, _here, _info).name) + "` but ended up not using it."_fu), _here, ctx, _info);

    };
    return matchIdx;
}

static fu_STR expectedArgs(fu::view<s_Target> targets, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
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

        const s_Overload& overload = GET(targets[i], _scope, module, ctx, _here, _info);
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

static fu_STR actualArgs(fu::view<s_SolvedNode> args_2, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    fu_STR result = "\nActual: ("_fu;
    for (int i = 0; i < args_2.size(); i++)
    {
        const s_SolvedNode& arg = args_2[i];
        if (i)
            result += ","_fu;

        result += "\n\t"_fu;
        if (SolvedNodeData(arg, _scope, module, ctx, _here, _info).kind == "argid"_fu)
            result += (SolvedNodeData(arg, _scope, module, ctx, _here, _info).value + ": "_fu);

        result += humanizeType(SolvedNodeData(arg, _scope, module, ctx, _here, _info).type);
    };
    return result + ")."_fu;
}

[[noreturn]] static fu::never NICERR_mismatch(const s_Scope& scope_1, const bool local_scope, const fu_STR& id_2, fu::view<s_SolvedNode> args_1, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_CurrentFn& _current_fn)
{
    fu_VEC<s_Target> overloads_1 {};
    int scope_iterator {};
    s_Target target_5 {};
    bool shadows {};
    while ((target_5 = search(scope_1.items, id_2, scope_iterator, (local_scope ? _ss.items : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL)), shadows, s_Target{}, fu::view<s_Target>{}, (local_scope ? _field_items : fu::view<s_ScopeItem>{}))))
        overloads_1.push(target_5);

    int min_2 = int(0x7fffffffu);
    int max_2 = 0;
    for (int i = 0; i < overloads_1.size(); i++)
    {
        const s_Overload& o = GET(overloads_1[i], _scope, module, ctx, _here, _info);
        if (min_2 > o.min)
            min_2 = o.min;

        if (max_2 < o.max)
            max_2 = o.max;

    };
    if (overloads_1)
    {
        if (args_1.size() < min_2)
            fail(((((((("`"_fu + id_2) + "` expects at least "_fu) + min_2) + " arguments, "_fu) + args_1.size()) + " provided"_fu) + expectedArgs(overloads_1, _scope, module, ctx, _here, _info)), _here, ctx, _info);
        else if (args_1.size() > max_2)
            fail(((((((("`"_fu + id_2) + "` expects at most "_fu) + max_2) + " arguments, "_fu) + args_1.size()) + " provided"_fu) + expectedArgs(overloads_1, _scope, module, ctx, _here, _info)), _here, ctx, _info);
        else
            fail((((("`"_fu + id_2) + "` bad args"_fu) + expectedArgs(overloads_1, _scope, module, ctx, _here, _info)) + actualArgs(args_1, _scope, module, ctx, _here, _info)), _here, ctx, _info);

    }
    else
    {
        fu_STR _0 {};
        fail(((("`"_fu + id_2) + "` is not defined in this scope: "_fu) + ((_0 = (("`"_fu + SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).value) + "`."_fu)) ? static_cast<fu_STR&&>(_0) : "root scope."_fu)), _here, ctx, _info);
    };
}

static s_Target match__mutargs(const s_Scope& scope_1, const bool local_scope, const fu_STR& id_2, fu_VEC<s_SolvedNode>& args_1, fu_VEC<fu_VEC<s_Target>>& conversions, const int flags_4, const s_Target& target_5, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, s_Module& module, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    const s_Target ret = tryMatch__mutargs(scope_1, local_scope, fu_STR(id_2), args_1, conversions, flags_4, target_5, _ss, _here, ctx, _info, _scope, module, _field_items, _specs, _helpers, _root_scope, _current_fn_or_type, _current_fn, _anons, _notes, t_string, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    if (ret)
        return ret;

    const s_Target debug = tryMatch__mutargs(scope_1, local_scope, fu_STR(id_2), args_1, conversions, flags_4, target_5, _ss, _here, ctx, _info, _scope, module, _field_items, _specs, _helpers, _root_scope, _current_fn_or_type, _current_fn, _anons, _notes, t_string, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    if (debug)
        return debug;

    NICERR_mismatch(scope_1, local_scope, id_2, args_1, _ss, _field_items, _scope, module, ctx, _here, _info, _current_fn);
}

static s_Type solveArrlit_itemType(fu::view<s_SolvedNode> items_5, s_Type&& itemType, int start_1, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, s_Module& module)
{
    if (!itemType)
    {
        if (start_1 == items_5.size())
            fail("Cannot infer empty arraylit."_fu, _here, ctx, _info);

        itemType = solveArrlit_itemType_init(SolvedNodeData(items_5[start_1++], _scope, module, ctx, _here, _info).type, _here, ctx, _info);
    }
    else if (is_ref(itemType))
        fail("Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu, _here, ctx, _info);

    for (int i = start_1; i < items_5.size(); i++)
        itemType = superType("Array literal: "_fu, itemType, SolvedNodeData(items_5[i], _scope, module, ctx, _here, _info).type, _here, ctx, _info);

    return static_cast<s_Type&&>(itemType);
}

static s_SolvedNode createArrlit(fu_VEC<s_SolvedNode>&& items_5, const s_Type& itemType, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    s_Type itemType_1 = solveArrlit_itemType(items_5, s_Type(itemType), 0, _here, ctx, _info, _scope, module);
    for (int i = 0; i < items_5.size(); i++)
        maybeCopyOrMove(items_5.mutref(i), itemType_1, false, module, _current_fn_or_type, _scope, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    return SolvedNode("arrlit"_fu, solveArrlit_done(itemType_1), 0, fu_STR{}, items_5, s_Target{}, _current_fn_or_type, _scope, module);
}

                                #ifndef DEFt_each_QS4Q
                                #define DEFt_each_QS4Q
inline void each_QS4Q(fu::view<s_ScopeItem> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, s_ScopeMemo& _root_scope, const fu_STR& id_2, int& autoshadow, int& id_clashes)
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
            const s_ScopeItem& item = items_5[i_1];
            const bool root_2 = (i_1 <= _root_scope.items_len);
            if (item.id == id_2)
            {
                if (!root_2)
                    autoshadow++;

                id_clashes++;
            };
        };
        i0 = ss.end;
    };
}
                                #endif

static s_Overload& GET_nested(const int index_2, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    int _0 {};
    return GET_mut(s_Target { ((_0 = -SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).target.index) ? _0 : int(module.modid)), int(index_2) }, _scope, module);
}

static s_Overload& fnd(const int index_2, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    return GET_nested(index_2, _current_fn, _scope, module, ctx, _here, _info);
}

static const s_Lifetime& Lifetime_test(const s_Lifetime& lifetime_1, const bool tempsOK, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    if (SELF_TEST)
    {
        const s_Target& current_fn = SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).target;
        const s_Overload& debug_2 = (current_fn ? GET(current_fn, _scope, module, ctx, _here, _info) : (*(const s_Overload*)fu::NIL));
        if (debug_2)
        {
        };
        if (!lifetime_1.uni0n.size())
            fail("Lifetime_test: no region set."_fu, _here, ctx, _info);

        s_Region _last {};
        for (int i = 0; i < lifetime_1.uni0n.size(); i++)
        {
            const s_Region& region = lifetime_1.uni0n[i];

            {
                if (!(!i || (region > _last)))
                    fail("Lifetime_test: not a sorted set"_fu, _here, ctx, _info);

                _last = region;
            };
            if (Region_isArg(region))
                continue;

            if (Region_isTemp(region))
            {
                if (!((i == (lifetime_1.uni0n.size() - 1)) && tempsOK))
                    fail("Lifetime_test: unexpected temporary."_fu, _here, ctx, _info);

                continue;
            };
            const int index_2 = Region_toLocalIndex(region);
            const s_Overload& local = (index_2 ? fnd(index_2, _current_fn, _scope, module, ctx, _here, _info) : (*(const s_Overload*)fu::NIL));
            const int local_of_2 = local.local_of;
            if (local_of_2)
            {
                int frame = current_fn.index;
                while (local_of_2 != frame)
                {
                    if (!((local_of_2 <= frame)))
                        fail((((((("Lifetime_test: `"_fu + local.name) + "` is not a local: `"_fu) + fnd(local_of_2, _current_fn, _scope, module, ctx, _here, _info).name) + "` does not contain "_fu) + (frame ? (("`"_fu + fnd(frame, _current_fn, _scope, module, ctx, _here, _info).name) + "`"_fu) : "global scope"_fu)) + ((current_fn.index != frame) ? ((", testing from `"_fu + fnd(current_fn.index, _current_fn, _scope, module, ctx, _here, _info).name) + "`."_fu) : "."_fu)), _here, ctx, _info);

                    if (!(frame))
                        fail("Lifetime_test: climbed up to root"_fu, _here, ctx, _info);

                    frame = fnd(frame, _current_fn, _scope, module, ctx, _here, _info).local_of;
                };
            };
        };
    };
    return lifetime_1;
}

static s_Lifetime Lifetime_fromBinding(const s_Target& target_5, const int local_of_2, const int flags_4, const s_Type& type_3, s_Module& module, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_CurrentFn& _current_fn, s_Scope& _scope)
{
    if (!((target_5.modid < 0) || (target_5.modid < 0) || (target_5.modid == module.modid)))
        fail("not from this module"_fu, _here, ctx, _info);

    if (!local_of_2)
        return Lifetime_static();

    const int isArg = (flags_4 & F_ARG);
    if (!isArg && is_ref(type_3))
        return s_Lifetime(Lifetime_test(type_3.lifetime, bool{}, _current_fn, _scope, module, ctx, _here, _info));

    const int index_2 = target_5.index;
    const s_Region region = ((isArg && is_ref(type_3)) ? Region_fromArgIndex(index_2) : Region_fromLocalIndex(index_2));
    s_Lifetime res { Lifetime_test(s_Lifetime { fu_VEC<s_Region> { fu_VEC<s_Region>::INIT<1> { s_Region(region) } } }, bool{}, _current_fn, _scope, module, ctx, _here, _info) };
    return res;
}

static s_Target Binding(const fu_STR& id_2, s_Type&& type_3, const int flags_4, bool& shadows, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_ScopeMemo& _root_scope, s_ScopeSkipMemos& _ss, fu_VEC<s_Helpers>& _helpers)
{
    fu_STR name_3 { id_2 };
    const int local_of_2 = SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).target.index;
    if (_root_scope)
    {
        int autoshadow = 0;
        int id_clashes = 0;
        each_QS4Q(_scope.items, _ss.declash, 0, 0, _root_scope, id_2, autoshadow, id_clashes);
        if (id_clashes)
            name_3 += ("_"_fu + id_clashes);

        if (OPTI_autoshadow && local_of_2 && !autoshadow)
            shadows = true;

    };
    const s_Target target_5 = Scope_create(_scope, "var"_fu, name_3, s_Type{}, flags_4, 0, 0, fu_VEC<s_Argument>{}, s_SolvedNode{}, local_of_2, 0u, fu_VEC<s_ScopeItem>{}, s_Template{}, 0, true, module);
    last_WQyU(_helpers).vars += target_5.index;
    s_Overload& overload = GET_mut(target_5, _scope, module);

    {
        s_Lifetime lifetime_1 = Lifetime_fromBinding(target_5, local_of_2, flags_4, type_3, module, _here, ctx, _info, _current_fn, _scope);
        if (flags_4 & F_ARG)
            type_3.lifetime = s_Lifetime{};

        overload.type = ((flags_4 & F_MUT) ? add_mutref(s_Type(type_3), lifetime_1) : add_ref(s_Type(type_3), lifetime_1));
    };
    return target_5;
}

static s_SolvedNode createLet(const s_Target& target_5, const int flags_4, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type)
{
    const s_Overload& overload = GET(target_5, _scope, module, ctx, _here, _info);
    return SolvedNode("let"_fu, overload.type, flags_4, overload.name, fu_VEC<s_SolvedNode>{}, target_5, _current_fn_or_type, _scope, module);
}

static s_Target injectImplicitArg(const fu_STR& id_2, const s_Type& type_3, const s_Target& becauseOf, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_ScopeMemo& _root_scope, s_ScopeSkipMemos& _ss, fu_VEC<s_Helpers>& _helpers, s_Target& _current_fn_or_type)
{
    if (!(SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).items))
        fail((((("No implicit `"_fu + id_2) + "` in scope, needed to call `"_fu) + GET(becauseOf, _scope, module, ctx, _here, _info).name) + "`."_fu), _here, ctx, _info);

    for (int i = 0; i < (SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).items.size() + FN_RET_BACK); i++)
    {
        const s_SolvedNode& arg = SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).items[i];
        if (SolvedNodeData(arg, _scope, module, ctx, _here, _info).value == id_2)
        {
            checkAssignable(type_3, SolvedNodeData(arg, _scope, module, ctx, _here, _info).type, "Implicit arg collision"_fu, id_2, fu_STR{}, _here, ctx, _info);
            const s_Target* _0;
            return s_Target((*(_0 = &(SolvedNodeData(arg, _scope, module, ctx, _here, _info).target)) ? *_0 : fail(fu_STR{}, _here, ctx, _info)));
        };
    };
    bool shadows {};
    int flags_4 = (F_IMPLICIT | F_ARG);
    const s_Target ret = Binding(id_2, s_Type(type_3), flags_4, shadows, _current_fn, _scope, module, ctx, _here, _info, _root_scope, _ss, _helpers);
    const s_SolvedNode newArgNode = createLet(ret, F_IMPLICIT, _scope, module, ctx, _here, _info, _current_fn_or_type);
    const int newArgIdx = (SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).items.size() + FN_RET_BACK);
    MUT(_current_fn.out, module, _current_fn_or_type, _scope, ctx, _here, _info).items.insert(newArgIdx, newArgNode);
    return ret;
}

static s_SolvedNode bindImplicitArg(const fu_STR& name_3, const s_Type& type_3, const s_Target& becauseOf, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    fu_VEC<s_SolvedNode> args_1 {};
    fu_VEC<fu_VEC<s_Target>> conversions {};

    {
        const s_Target target_5 = tryParseClosureID(name_3, MODID(module));
        if (target_5)
        {
            const s_Overload& o = GET(target_5, _scope, module, ctx, _here, _info);
            if (o.local_of == SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).target.index)
            {
                if (!(o.kind == "var"_fu))
                    fail("CLOSURE-ID-HACK #2"_fu, _here, ctx, _info);

                return CallerNode("__closure"_fu, s_Target(target_5), fu_VEC<s_SolvedNode>{}, 0, _scope, module, ctx, _here, _info, _current_fn_or_type, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
            };
        };
    };
    s_Target _0 {};
    const s_Target target_5 = ((_0 = tryMatch__mutargs(_scope, true, fu_STR(name_3), args_1, conversions, F_IMPLICIT, s_Target{}, _ss, _here, ctx, _info, _scope, module, _field_items, _specs, _helpers, _root_scope, _current_fn_or_type, _current_fn, _anons, _notes, t_string, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions)) ? _0 : (_0 = injectImplicitArg(name_3, type_3, becauseOf, _current_fn, _scope, module, ctx, _here, _info, _root_scope, _ss, _helpers, _current_fn_or_type)) ? _0 : fail(fu_STR{}, _here, ctx, _info));
    if ((args_1.size() != 0) || (conversions.size() != 0))
        fail("dunno what happened here"_fu, _here, ctx, _info);

    const s_Overload& o = GET(target_5, _scope, module, ctx, _here, _info);
    if (!(o.flags & F_IMPLICIT))
        fail((((("Matching a non-implicit item in scope: `"_fu + name_3) + "`, binds to call to `"_fu) + GET(becauseOf, _scope, module, ctx, _here, _info).name) + "`."_fu), _here, ctx, _info);

    checkAssignable(type_3, o.type, (("Implicit `"_fu + name_3) + "` type mismatch"_fu), fu_STR{}, fu_STR{}, _here, ctx, _info);
    return CallerNode("__implicit"_fu, s_Target(target_5), fu_VEC<s_SolvedNode>{}, 0, _scope, module, ctx, _here, _info, _current_fn_or_type, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
}

                                #ifndef DEFt_only_r7yd
                                #define DEFt_only_r7yd
inline const s_SolvedNode& only_r7yd(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

                                #ifndef DEFt_if_first_tWdF
                                #define DEFt_if_first_tWdF
inline const s_Region& if_first_tWdF(fu::view<s_Region> s)
{
    return s.size() ? s[0] : (*(const s_Region*)fu::NIL);
}
                                #endif

static s_Lifetime Lifetime_replaceArgsAtCallsite(const s_Overload& overload, fu::view<s_SolvedNode> argNodes, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    const fu_VEC<s_Region>& returned = overload.type.lifetime.uni0n;
    fu::view<s_SolvedNode> items_5 = arg_lets(overload, _scope, module, ctx, _here, _info);
    if (!Region_isArg(if_first_tWdF(returned)))
        return s_Lifetime { fu_VEC<s_Region>(returned) };

    const int head = SolvedNodeData(items_5[0], _scope, module, ctx, _here, _info).target.index;
    const int tail = SolvedNodeData(items_5[(items_5.size() - 1)], _scope, module, ctx, _here, _info).target.index;
    s_Lifetime keep {};
    s_Lifetime replace_1 {};
    int offset = items_5.size();
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
            const int here = SolvedNodeData(items_5[offset], _scope, module, ctx, _here, _info).target.index;
            if (here == index_2)
            {
                const s_SolvedNode& argNode = argNodes[offset];
                const s_Lifetime* _0;
                s_Lifetime argLt = (is_ref(SolvedNodeData(argNode, _scope, module, ctx, _here, _info).type) ? s_Lifetime((*(_0 = &(SolvedNodeData(argNode, _scope, module, ctx, _here, _info).type.lifetime)) ? *_0 : fail("refarg without lifetime"_fu, _here, ctx, _info))) : Lifetime_temporary());
                replace_1 = Lifetime_union(replace_1, argLt);
                break;
            };
            if (!(!here || (here > index_2)))
                fail("nope, going backwards"_fu, _here, ctx, _info);

        };
    };
    return Lifetime_union(keep, replace_1);
}

                                #ifndef DEFt_last_ZDQv
                                #define DEFt_last_ZDQv
inline const s_Node& last_ZDQv(fu::view<s_Node> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline constexpr int F_SHADOW = (1 << 23);
                                #endif

                                #ifndef DEFt_find_qVFp
                                #define DEFt_find_qVFp
inline int find_qVFp(fu::view<std::byte> a, const std::byte b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static s_SolvedNode createEmpty(const fu_STR& kind_3, const s_Type& type_3, const s_Target& target_5, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module)
{
    return SolvedNode(kind_3, type_3, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, target_5, _current_fn_or_type, _scope, module);
}

static void solveLet(s_SolvedNode& out_1, const fu_STR& id_2, const bool deadcode_on_never, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_ScopeMemo& _root_scope, s_ScopeSkipMemos& _ss, fu_VEC<s_Helpers>& _helpers)
{
    if (SolvedNodeData(out_1, _scope, module, ctx, _here, _info).kind != "let"_fu)
    {
        if (SELF_TEST)
        {
            if (!(deadcode_on_never && is_never(SolvedNodeData(out_1, _scope, module, ctx, _here, _info).type)))
                fail((((("solveLet: results in a `"_fu + SolvedNodeData(out_1, _scope, module, ctx, _here, _info).kind) + ": "_fu) + id_2) + "`."_fu), _here, ctx, _info);

        };
        return;
    };
    if (!(!is_ref(SolvedNodeData(out_1, _scope, module, ctx, _here, _info).type) || SolvedNodeData(out_1, _scope, module, ctx, _here, _info).type.lifetime))
        fail((("solveLet: ref without lifetime: `"_fu + id_2) + "`."_fu), _here, ctx, _info);

    bool shadows = !!(SolvedNodeData(out_1, _scope, module, ctx, _here, _info).flags & F_SHADOW);
    fu_STR cleanID = ((SolvedNodeData(out_1, _scope, module, ctx, _here, _info).flags & F_COMPOUND_ID) ? fu::slice(id_2, 0, find_qVFp(id_2, std::byte('.'))) : fu_STR{});
    const fu_STR& id_3 = (cleanID ? cleanID : id_2);
    if (!X_unpackAddrOfFnBinding(_scope.items, id_3, SolvedNodeData(out_1, _scope, module, ctx, _here, _info).type, shadows))
    {
        if (OPTI_dedupe_vars && !(SolvedNodeData(out_1, _scope, module, ctx, _here, _info).flags & F_ARG))
        {
            const s_SolvedNode& init = SolvedNodeData(out_1, _scope, module, ctx, _here, _info).items[LET_INIT];
            if ((SolvedNodeData(init, _scope, module, ctx, _here, _info).kind == "call"_fu) && !SolvedNodeData(init, _scope, module, ctx, _here, _info).items)
            {
                const s_Target& target_5 = SolvedNodeData(init, _scope, module, ctx, _here, _info).target;
                const s_Overload& other = GET(target_5, _scope, module, ctx, _here, _info);
                if (other.kind == "var"_fu)
                {
                    if (isAssignable(other.type, SolvedNodeData(out_1, _scope, module, ctx, _here, _info).type))
                    {
                        Scope_set(_scope, id_3, target_5, shadows);
                        if (SolvedNodeData(out_1, _scope, module, ctx, _here, _info).flags & F_USING)
                            _scope.usings.push(target_5);

                        out_1 = createEmpty("empty"_fu, t_void, s_Target{}, _current_fn_or_type, _scope, module);
                        return;
                    };
                };
            };
        };
        const s_Target& target_5 = (MUT(out_1, module, _current_fn_or_type, _scope, ctx, _here, _info).target = Binding(id_3, s_Type(SolvedNodeData(out_1, _scope, module, ctx, _here, _info).type), SolvedNodeData(out_1, _scope, module, ctx, _here, _info).flags, shadows, _current_fn, _scope, module, ctx, _here, _info, _root_scope, _ss, _helpers));
        GET_mut(target_5, _scope, module).solved = out_1;
        Scope_set(_scope, id_3, target_5, shadows);
        if (SolvedNodeData(out_1, _scope, module, ctx, _here, _info).flags & F_USING)
            _scope.usings.push(target_5);

    };
}

static s_SolvedNode createLet(const fu_STR& id_2, const int flags_4, const s_SolvedNode& init, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, int& _notes, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    s_SolvedNode out_1 = solveLetLike_dontTouchScope(id_2, int(flags_4), s_SolvedNode(init), s_Type{}, s_Type{}, bool{}, _scope, module, ctx, _here, _info, _notes, _current_fn_or_type, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    solveLet(out_1, id_2, bool{}, _scope, module, ctx, _here, _info, _current_fn_or_type, _current_fn, _root_scope, _ss, _helpers);
    return out_1;
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

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline constexpr unsigned SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

                                #ifndef DEF_SS_FN_RECUR
                                #define DEF_SS_FN_RECUR
inline constexpr unsigned SS_FN_RECUR = (0x1u << 17u);
                                #endif

static bool isFnOrType(const s_Helpers& h)
{
    return !!(h.mask & (HM_Function | HM_Struct));
}

static void detectRecursion(const s_Target& target_5, const s_Overload& overload, fu_VEC<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, s_Module& module, int& _notes)
{
    if ((overload.status & (SS_FINALIZED | SS_LAZY)) != SS_LAZY)
        return;

    const int note = ((overload.kind == "type"_fu) ? N_TypeRecursion : N_FnRecursion);
    const unsigned status_1 = ((overload.kind == "type"_fu) ? SS_TYPE_RECUR : SS_FN_RECUR);
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (!isFnOrType(h))
            continue;

        if (h.mask & HM_Lambda)
            fail("Recursive lambda, what happened here?"_fu, _here, ctx, _info);

        GET_mut(h.target, _scope, module).status |= status_1;
        _notes |= note;
        if (h.target == target_5)
            return;

    };
    fail((((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu) + overload.status) + ")`."_fu), _here, ctx, _info);
}

static s_SolvedNode CallerNode(const fu_STR& debug, s_Target&& target_5, fu_VEC<s_SolvedNode>&& args_1, const int kills_1, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    const s_Overload& overload = GET(target_5, _scope, module, ctx, _here, _info);
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
                args_1.mutref(i) = createArrlit(fu_VEC<s_SolvedNode>(rest), s_Type{}, _here, ctx, _info, _scope, module, _current_fn_or_type, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

        };
    };
    const bool isZeroInit = ((overload.kind == "type"_fu) && !args_1.size());
    if (!isZeroInit)
    {
        fu_VEC<s_Argument> host_args { overload.args };
        args_1.resize(host_args.size());
        for (int i = 0; i < args_1.size(); i++)
        {
            if (!args_1[i])
            {
                const s_Argument& host_arg = host_args[i];
                args_1.mutref(i) = (host_arg.dEfault ? s_SolvedNode(host_arg.dEfault) : ((void)((host_arg.flags & F_IMPLICIT) || fail((((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + serializeType(host_arg.type)) + "`."_fu), _here, ctx, _info)), bindImplicitArg(host_arg.name, host_arg.type, target_5, module, _scope, ctx, _here, _info, _current_fn, _current_fn_or_type, _specs, _helpers, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions)));
            };
        };
    };
    const s_Overload& overload_1 = GET(target_5, _scope, module, ctx, _here, _info);
    s_Type type_3 { overload_1.type };
    if (overload_1.kind == "field"_fu)
    {
        const s_Type* _0;
        type_3 = add_refs((*(_0 = &(SolvedNodeData(only_r7yd(args_1), _scope, module, ctx, _here, _info).type)) ? *_0 : fail(fu_STR{}, _here, ctx, _info)), s_Type(overload_1.type));
    }
    else if (overload_1.kind == "var"_fu)
    {
        if (overload_1.local_of && (overload_1.local_of != SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).target.index))
        {
            s_Target _1 {};
            target_5 = injectImplicitArg(ClosureID(((_1 = tryParseClosureID(overload_1.name, MODID(module))) ? _1 : s_Target(target_5))), overload_1.type, target_5, _current_fn, _scope, module, ctx, _here, _info, _root_scope, _ss, _helpers, _current_fn_or_type);
            const s_Type* _2;
            type_3 = (*(_2 = &(GET(target_5, _scope, module, ctx, _here, _info).type)) ? *_2 : fail("CallerNode (var): !type"_fu, _here, ctx, _info));
        };
    }
    else
    {
        if (args_1)
        {
            fu::view<s_Argument> host_args = (overload_1.args ? overload_1.args : fail("CallerNode: no host args."_fu, _here, ctx, _info));
            if (!((host_args.size() >= args_1.size())))
                fail("CallerNode: host_arg.len mismatch."_fu, _here, ctx, _info);

            for (int i = 0; i < args_1.size(); i++)
            {
                s_SolvedNode& arg = args_1.mutref(i);
                if (SolvedNodeData(arg, _scope, module, ctx, _here, _info).kind == "argid"_fu)
                    arg = only_e0l4(SolvedNodeData(arg, _scope, module, ctx, _here, _info).items);

                const s_Type& expect = host_args[i].type;
                if (considerRetyping(expect, SolvedNodeData(arg, _scope, module, ctx, _here, _info).type))
                {
                    s_Type retype = tryRetyping(arg, expect, _scope, module, ctx, _here, _info);
                    if (isAssignableAsArgument(expect, retype))
                        MUT(arg, module, _current_fn_or_type, _scope, ctx, _here, _info).type = retype;

                };
            };
            for (int i_1 = 0; i_1 < args_1.size(); i_1++)
            {
                s_SolvedNode* _3;
                maybeCopyOrMove((*(_3 = &(args_1.mutref(i_1))) ? *_3 : fail(fu_STR{}, _here, ctx, _info)), host_args[i_1].type, true, module, _current_fn_or_type, _scope, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
            };
            if (is_ref(type_3))
                type_3.lifetime = Lifetime_test(Lifetime_replaceArgsAtCallsite(overload_1, args_1, _scope, module, ctx, _here, _info), true, _current_fn, _scope, module, ctx, _here, _info);

        };
        if (overload_1.kind == "inline"_fu)
        {
            const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
            s_ScopeSkipMemos ss0 { _ss };
            const int helpers0vars = last_WQyU(_helpers).vars.size();
            fu_DEFER(
            {
                Scope_pop(_scope, scope0, _helpers);
                _ss = ss0;
                if (_helpers)
                    last_WQyU(_helpers).vars.shrink(helpers0vars);

            });
            ScopeSkip_setup(overload_1.tEmplate, scope0, true, _root_scope, _ss, _here, ctx, _info, _scope);
            _scope.items += overload_1.extra_items;
            const s_Node& n_fn = overload_1.tEmplate.node;
            const s_Node& n_body = last_ZDQv(n_fn.items);
            const s_Type& ret_expect_1 = overload_1.type;
            fu_VEC<s_SolvedNode> result {};
            if (!(overload_1.args.size() == args_1.size()))
                fail("inline: arglen mismatch"_fu, _here, ctx, _info);

            result.resize((args_1.size() + 1));
            for (int i = 0; i < args_1.size(); i++)
            {
                const s_Argument& slot = overload_1.args[i];
                result.mutref(i) = createLet(slot.name, (slot.flags & ~F_ARG), args_1[i], _scope, module, ctx, _here, _info, _notes, _current_fn_or_type, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
            };
            const s_SolvedNode s_body = solveBlock(n_body, ret_expect_1, 0, short((HM_CanReturn | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL)))), kills_1, n_fn.value, (last_WQyU(_helpers).vars.size() - helpers0vars), _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
            last_hang(result) = s_body;
            return createBlock(SolvedNodeData(s_body, _scope, module, ctx, _here, _info).type, result, s_Target{}, _scope, module, ctx, _here, _info, _current_fn_or_type);
        };
    };
    const s_SolvedNode callsite = SolvedNode("call"_fu, type_3, 0, debug, args_1, target_5, _current_fn_or_type, _scope, module);
    if ((target_5.modid < 0) || (target_5.modid == module.modid))
    {
        s_Overload& o = GET_mut(target_5, _scope, module);
        if ((o.kind == "fn"_fu) || (o.kind == "type"_fu) || (o.kind == "var"_fu))
        {
            o.callsites += callsite;
            detectRecursion(target_5, o, _helpers, _here, ctx, _info, _scope, module, _notes);
        };
    };
    return callsite;
}

static s_SolvedNode solveCall(const s_Node& node_1, const s_Target& target_5, const int kills_1, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    fu_STR id_2 { node_1.value };
    if (!id_2)
    {
        if (!(target_5))
            fail(fu_STR{}, _here, ctx, _info);

    };
    fu_VEC<s_SolvedNode> args_1 = solveNodes(node_1.items, s_Type{}, s_Type{}, bool{}, true, -1, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    if (is_never(SolvedNodeData(if_last_hang(args_1), _scope, module, ctx, _here, _info).type))
    {
        _notes |= N_DeadCall;
        return createBlock(t_never, args_1, s_Target{}, _scope, module, ctx, _here, _info, _current_fn_or_type);
    };
    const int qualified = (node_1.flags & F_COMPOUND_ID);
    const s_Scope& scope_1 = (qualified ? dequalify_andGetScope(id_2, _here, ctx, _info, module, _scope) : _scope);
    fu_VEC<fu_VEC<s_Target>> conversions {};
    const s_Target callTargIdx = match__mutargs(scope_1, !qualified, id_2, args_1, conversions, node_1.flags, target_5, _ss, _here, ctx, _info, _scope, module, _field_items, _specs, _helpers, _root_scope, _current_fn_or_type, _current_fn, _anons, _notes, t_string, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    for (int argIdx = 0; argIdx < conversions.size(); argIdx++)
    {
        fu::view<s_Target> conversion = conversions[argIdx];
        for (int i = 0; i < conversion.size(); i++)
        {
            const s_Target& t = conversion[i];
            const s_Overload& o = GET(t, _scope, module, ctx, _here, _info);
            if (o.min || (o.max && args_1.mutref(argIdx)))
            {
                args_1.mutref(argIdx) = CallerNode("__using.a"_fu, s_Target(t), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(args_1[argIdx]) } }, 0, _scope, module, ctx, _here, _info, _current_fn_or_type, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
                continue;
            };
            if (i)
                fail((("Bad conversion chain, non-leading nullary: `"_fu + o.name) + "`."_fu), _here, ctx, _info);

            if (args_1.mutref(argIdx))
                fail("Bad conversion chain, about to throw away an argnode."_fu, _here, ctx, _info);

            args_1.mutref(argIdx) = CallerNode("__using.b"_fu, s_Target(t), fu_VEC<s_SolvedNode>{}, 0, _scope, module, ctx, _here, _info, _current_fn_or_type, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
        };
    };
    return CallerNode(node_1.value, s_Target(callTargIdx), fu_VEC<s_SolvedNode>(args_1), kills_1, _scope, module, ctx, _here, _info, _current_fn_or_type, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
}

static s_SolvedNode evalTypeAnnot(const s_Node& node_1, const fu_MAP<fu_STR, s_TypeParam>& typeParams, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    if (node_1.kind == "call"_fu)
    {
        fu::view<s_Node> items_5 = node_1.items;
        if (items_5.size() == 1)
        {
            if (node_1.value == "&"_fu)
                return solved(node_1, add_ref(s_Type(T(0, node_1, typeParams, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions)), Lifetime_temporary()), fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);

            if (node_1.value == "&mut"_fu)
                return solved(node_1, add_mutref(s_Type(T(0, node_1, typeParams, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions)), Lifetime_temporary()), fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);

            if (node_1.value == "[]"_fu)
                return solved(node_1, createArray(T(0, node_1, typeParams, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions)), fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);

        }
        else if (items_5.size() == 2)
        {
            if (node_1.value == "Map"_fu)
                return solved(node_1, createMap(T(0, node_1, typeParams, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions), T(1, node_1, typeParams, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions)), fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);

        };
        return solveCall(node_1, s_Target{}, 0, _here, ctx, _info, _scope, _helpers, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    }
    else if (node_1.kind == "typeparam"_fu)
        return solved(node_1, evalTypeParam(node_1.value, typeParams, _here, ctx, _info, module, _scope, _ss), fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);
    else if ((node_1.kind == "arrlit"_fu) && (node_1.items.size() == 1))
        return solved(node_1, createSlice(T(0, node_1, typeParams, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions), Lifetime_temporary()), fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);

    fail((((("TODO evalTypeAnnot: "_fu + node_1.kind) + "["_fu) + node_1.items.size()) + "]"_fu), _here, ctx, _info);
}

static bool evalTypePattern(const s_Node& node_1, fu_MAP<fu_STR, s_TypeParam>& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Module& module, s_Scope& _scope, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    if (node_1.kind == "and"_fu)
    {
        for (int i = 0; i < node_1.items.size(); i++)
        {
            if (!evalTypePattern(node_1.items[i], typeParams, _here, ctx, _info, module, _scope, _ss, _current_fn_or_type, _helpers, _current_fn, _specs, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions))
                return false;

        };
        return true;
    }
    else if (node_1.kind == "or"_fu)
    {
        for (int i = 0; i < node_1.items.size(); i++)
        {
            if (evalTypePattern(node_1.items[i], typeParams, _here, ctx, _info, module, _scope, _ss, _current_fn_or_type, _helpers, _current_fn, _specs, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions))
                return true;

        };
        return false;
    }
    else if (node_1.kind == "typeassert"_fu)
    {
        const s_Node* _0;
        const s_Node& left = (*(_0 = &(node_1.items[0])) ? *_0 : fail(fu_STR{}, _here, ctx, _info));
        const s_Node* _1;
        const s_Node& right = (*(_1 = &(node_1.items[1])) ? *_1 : fail(fu_STR{}, _here, ctx, _info));
        if ((left.kind == "typeparam"_fu) && (right.kind == "typetag"_fu))
            return type_has(evalTypeParam(left.value, typeParams, _here, ctx, _info, module, _scope, _ss), (right.value ? right.value : fail("Falsy type tag."_fu, _here, ctx, _info)));
        else
        {
            const s_Type& actual = SolvedNodeData(evalTypeAnnot(left, typeParams, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions), _scope, module, ctx, _here, _info).type;
            const bool ok = trySolveTypeParams(right, s_Type(actual), typeParams, _here, ctx, _info, module, _scope, _ss);
            if (ok && (left.kind == "typeparam"_fu))
            {
                const fu_STR& id_2 = left.value;
                s_TypeParam& tp = typeParams.mutref(id_2);
                s_Type _2 {};
                tp.consumed = (tp.consumed ? ((_2 = type_tryIntersect(tp.consumed, actual)) ? static_cast<s_Type&&>(_2) : fail("typeassert intersect fail."_fu, _here, ctx, _info)) : s_Type(actual));
            };
            return ok;
        };
    };
    fail((((("TODO evalTypePattern fallthrough: "_fu + node_1.kind) + "("_fu) + node_1.items.size()) + ")"_fu), _here, ctx, _info);
}

static bool isNativeBody(const s_Node& n_body)
{
    return (n_body.kind == "call"_fu) && (n_body.value == "__native"_fu);
}

static const s_Target& checkStruct(const s_Type& type_3, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    const s_Target& t = lookupStruct(type_3, module, ctx).target;
    return (GET(t, _scope, module, ctx, _here, _info).type == type_3) ? t : (*(const s_Target*)fu::NIL);
}

                                #ifndef DEFt_pairs_YiTd
                                #define DEFt_pairs_YiTd
inline void pairs_YiTd(const fu_MAP<fu_STR, s_TypeParam>& a, int, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_ScopeItem>& res)
{
    fu::view<fu_STR> k = a.m_keys;
    fu::view<s_TypeParam> v = a.m_values;
    for (int i = 0; i < k.size(); i++)
    {
        fu::view<std::byte> id_2 = k[i];
        const s_TypeParam& tp = v[i];
        fu_STR name_3 = ("$"_fu + id_2);
        const s_Type& type_3 = tp.matched;
        s_Target _0 {};
        const s_Target target_5 = ((_0 = s_Target((isStruct(type_3) ? checkStruct(type_3, module, ctx, _scope, _here, _info) : (*(const s_Target*)fu::NIL)))) ? _0 : Scope_create(_scope, "type"_fu, ("$"_fu + id_2), type_3, 0, 0, 0, fu_VEC<s_Argument>{}, s_SolvedNode{}, 0, 0u, fu_VEC<s_ScopeItem>{}, s_Template{}, 0, bool{}, module));
        Scope_set(res, name_3, target_5, false);
    };
}
                                #endif

static fu_VEC<s_ScopeItem> intoScopeItems(const fu_MAP<fu_STR, s_TypeParam>& typeParams, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    fu_VEC<s_ScopeItem> res {};
    pairs_YiTd(typeParams, 0, module, ctx, _scope, _here, _info, res);
    return res;
}

static fu_VEC<s_SolvedNode>& outItems(s_CurrentFn& _current_fn, s_Module& module, s_Target& _current_fn_or_type, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    return MUT(_current_fn.out, module, _current_fn_or_type, _scope, ctx, _here, _info).items;
}

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline constexpr int F_TEMPLATE = (1 << 28);
                                #endif

static s_Type tryGetArgSpecType(fu::view<std::byte> id_2, const fu_VEC<s_ScopeItem>& extra_items_1, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    fu_STR param = ("$"_fu + id_2);
    for (int i_1 = 0; i_1 < extra_items_1.size(); i_1++)
    {
        const s_ScopeItem& m = extra_items_1[i_1];
        if (m.id == param)
        {
            const s_Overload& o = GET(target(m), _scope, module, ctx, _here, _info);
            if (!(o.kind == "type"_fu))
                fail((((((("tryGetArgSpecType: Not a typeparam: `"_fu + o.kind) + ":"_fu) + param) + "("_fu) + o.max) + ")`."_fu), _here, ctx, _info);

            return s_Type(o.type);
        };
    };
    return s_Type{};
}

static s_SolvedNode solveLet(const s_Node& node_1, const s_Type& specType, const bool deadcode_on_never, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    s_SolvedNode out_1 = solveLetLike_dontTouchScope(node_1, specType, deadcode_on_never, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    const fu_STR& id_2 = SolvedNodeData(out_1, _scope, module, ctx, _here, _info).value;
    solveLet(out_1, id_2, deadcode_on_never, _scope, module, ctx, _here, _info, _current_fn_or_type, _current_fn, _root_scope, _ss, _helpers);
    return out_1;
}

                                #ifndef DEFt_only_8MQE
                                #define DEFt_only_8MQE
inline const s_Region& only_8MQE(fu::view<s_Region> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_Lifetime Lifetime_fromNative(fu::view<s_Node> sig, fu::view<s_SolvedNode> args_1, const s_Type& actual, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, s_Module& module)
{
    if (!((sig.size() + FN_RET_BACK) == args_1.size()))
        fail("sig.len != args.len"_fu, _here, ctx, _info);

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
                    fail("Ambiguous __native lifetime."_fu, _here, ctx, _info);

                const s_SolvedNode& arg = args_1[i];
                const s_Overload& o = GET(SolvedNodeData(arg, _scope, module, ctx, _here, _info).target, _scope, module, ctx, _here, _info);
                res = o.type;
                if (!(res.lifetime))
                    fail("Missing arg lifetime."_fu, _here, ctx, _info);

            };
        };
        if (!mutref || res.lifetime)
            break;

        mutref = false;
    };
    if (!(Region_isArg(only_8MQE(res.lifetime.uni0n))))
        fail("Non-single-arg __native lifetime."_fu, _here, ctx, _info);

    if (!is_mutref(actual) && !isAssignable(actual, res))
        return Lifetime_makeShared(res.lifetime);

    return static_cast<s_Lifetime&&>(res.lifetime);
}

inline static fu_STR mangleArguments_Imge(fu::view<s_SolvedNode> args_1, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    fu_STR mangle {};
    for (int i = 0; i < args_1.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(SolvedNodeData(args_1[i], _scope, module, ctx, _here, _info).type);
    };
    return mangle;
}

static fu_STR HACK_nativeNameParts(const bool native, const s_Node& n_body)
{
    fu_STR name_4 {};
    if (native && n_body.items)
    {
        for (int i = 0; i < n_body.items.size(); i++)
            name_4 += ("\n"_fu + n_body.items[i].value);

    };
    return name_4;
}

static fu_STR Autocall_splice(fu_STR& name_3, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info)
{
    for (int i = 0; i < name_3.size(); i++)
    {
        if (name_3[i] == std::byte('.'))
        {
            fu_STR ret = fu::slice(name_3, (i + 1));
            name_3.shrink(i);
            return ret;
        };
    };
    fail((("Autocall: no `.` in id `"_fu + name_3) + "`."_fu), _here, ctx, _info);
}

static void updateScope(const s_CurrentFn& out_2, const s_Type& retval, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& target_5, const bool isInline, s_CurrentFn& _current_fn)
{
    fu::view<s_SolvedNode> items_6 = SolvedNodeData(out_2.out, _scope, module, ctx, _here, _info).items;
    const int N = (items_6.size() + FN_RET_BACK);
    int min_2 = 0;
    int max_2 = 0;
    fu_VEC<s_Argument> args_2 {};
    for (int i = 0; i < N; i++)
    {
        const s_SolvedNode& argNode = items_6[i];
        if (!(SolvedNodeData(argNode, _scope, module, ctx, _here, _info).kind == "let"_fu))
            fail(fu_STR{}, _here, ctx, _info);

        fu_STR name_3 { SolvedNodeData(argNode, _scope, module, ctx, _here, _info).value };
        fu_STR autocall_1 = ((SolvedNodeData(argNode, _scope, module, ctx, _here, _info).flags & F_COMPOUND_ID) ? Autocall_splice(name_3, _here, ctx, _info) : fu_STR{});
        const bool isImplicit = !!(SolvedNodeData(argNode, _scope, module, ctx, _here, _info).flags & F_IMPLICIT);
        const s_Type* _0;
        s_Argument arg = s_Argument { fu_STR(name_3), fu_STR(autocall_1), s_Type((*(_0 = &(SolvedNodeData(argNode, _scope, module, ctx, _here, _info).type)) ? *_0 : fail(fu_STR{}, _here, ctx, _info))), s_SolvedNode((!isImplicit ? SolvedNodeData(argNode, _scope, module, ctx, _here, _info).items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), int(SolvedNodeData(argNode, _scope, module, ctx, _here, _info).flags) };
        args_2.push(arg);
        if (!isImplicit)
        {
            if (max_2 != int(0x7fffffffu))
                max_2++;

            if (!arg.dEfault)
                min_2++;

        };
        if (arg.flags & F_REST_ARG)
            max_2 = int(0x7fffffffu);

    };
    s_Overload& overload = GET_mut(target_5, _scope, module);
    bool change = false;
    if (overload.callsites)
    {
        change = ((args_2.size() != overload.args.size()) || !(overload.type == retval));
        if (!change)
        {
            for (int i_1 = 0; i_1 < args_2.size(); i_1++)
            {
                const s_Argument& a = args_2[i_1];
                const s_Argument& b = overload.args[i_1];
                if (!((a.name == b.name) && (a.type == b.type)))
                {
                    change = true;
                    break;
                };
            };
        };
    };
    overload.min = min_2;
    overload.max = max_2;
    overload.args = args_2;
    overload.type = retval;
    if (isInline)
        return;

    if (!(retval))
        fail("FnDecl_update: no return type."_fu, _here, ctx, _info);

    if (is_ref(retval))
        Lifetime_test(retval.lifetime, bool{}, _current_fn, _scope, module, ctx, _here, _info);

    overload.flags = SolvedNodeData(out_2.out, _scope, module, ctx, _here, _info).flags;
    overload.solved = out_2.out;
    if (change)
        overload.status |= SS_UPDATED;

}

inline static fu_STR mangleArguments_Jnb9(fu::view<s_Argument> args_1)
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

                                #ifndef DEF_HM_LabelUsed
                                #define DEF_HM_LabelUsed
inline constexpr short HM_LabelUsed = (short(1) << short(6));
                                #endif

static s_Target doTrySpecialize(const s_Target& into, const s_Target& overloadIdx, fu::view<s_SolvedNode> args_in, fu_STR&& mangle, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    fu_VEC<s_Type> args_1 {};
    if (use_reorder)
    {
        for (int i = 0; i < reorder.size(); i++)
        {
            const int callsiteIndex = reorder[i];
            args_1.push(((callsiteIndex >= 0) && (callsiteIndex < args_in.size()) ? SolvedNodeData(args_in[callsiteIndex], _scope, module, ctx, _here, _info).type : (*(const s_Type*)fu::NIL)));
        };
    }
    else
    {
        for (int i = 0; i < args_in.size(); i++)
            args_1.push(SolvedNodeData(args_in[i], _scope, module, ctx, _here, _info).type);

    };
    for (int i = 0; i < conversions.size(); i++)
    {
        const fu_VEC<s_Target>& c = conversions[i];
        if (c)
            args_1.mutref(i) = GET(last_mnBR(c), _scope, module, ctx, _here, _info).type;

    };
    if (REST_TYPE)
        args_1.mutref(REST_START) = REST_TYPE;

    fu_STR mangle00 { mangle };
    const s_Target SPECFAIL = s_Target { 2147483647, 0 };
    const s_Overload& original = GET((overloadIdx ? overloadIdx : into ? into : fail(fu_STR{}, _here, ctx, _info)), _scope, module, ctx, _here, _info);
    s_Template template_1 { original.tEmplate };
    int parent_idx = original.local_of;
    for (int i_1 = 0; i_1 < args_1.size(); i_1++)
    {
        const s_Type& arg_t = args_1[i_1];
        if (type_isAddrOfFn(arg_t))
            unpackAddrOfFn_iipF(arg_t.vtype.canon, 0, module, _scope, ctx, _here, _info, template_1, parent_idx);

    };
    const bool isInline = !!(template_1.node.flags & F_INLINE);
    if (!into && !isInline)
        setSpec(mangle, SPECFAIL, true, isInline, _here, ctx, _info, _specs, _scope, module);

    s_Target target_5 {};

    {
        const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
        s_ScopeSkipMemos ss0 { _ss };
        const int helpers0vars = last_WQyU(_helpers).vars.size();
        fu_DEFER(
        {
            Scope_pop(_scope, scope0, _helpers);
            _ss = ss0;
            if (_helpers)
                last_WQyU(_helpers).vars.shrink(helpers0vars);

        });
        ScopeSkip_setup(template_1, scope0, isInline, _root_scope, _ss, _here, ctx, _info, _scope);
        fu::view<s_Node> items_5 = template_1.node.items;
        s_Node& n_fn = template_1.node;
        if (!(n_fn.kind == "fn"_fu))
            fail("n_fn not a `fn`."_fu, _here, ctx, _info);

        bool ok = true;
        fu_MAP<fu_STR, s_TypeParam> typeParams {};
        if (!into)
        {
            fu::view<std::byte> kind_3 = template_1.node.kind;
            const int numArgs = ((kind_3 == "fn"_fu) ? (items_5.size() + FN_RET_BACK) : fail(("TODO numArgs for template:"_fu + kind_3), _here, ctx, _info));
            fu_VEC<int> retypeIndices {};
            bool remangle = false;
            for (int pass_retype = 0; (pass_retype == 0) || ((pass_retype == 1) && retypeIndices); pass_retype++)
            {
                for (int i_2 = 0; i_2 < numArgs; i_2++)
                {
                    if (pass_retype)
                    {
                        if (!has_2vji(retypeIndices, i_2))
                            continue;

                    };
                    s_Type inType { ((args_1.size() > i_2) ? args_1.mutref(i_2) : (*(const s_Type*)fu::NIL)) };
                    const s_SolvedNode& inValue = (reorder ? ((reorder.size() > i_2) && (reorder[i_2] >= 0) ? args_in[reorder[i_2]] : (*(const s_SolvedNode*)fu::NIL)) : ((args_in.size() > i_2) ? args_in[i_2] : (*(const s_SolvedNode*)fu::NIL)));
                    const s_Node* _0;
                    const s_Node& argNode = (*(_0 = &(items_5[i_2])) ? *_0 : fail(fu_STR{}, _here, ctx, _info));
                    const s_Node& annot = argNode.items[LET_TYPE];
                    if (CANNOT_definit_mutrefs && is_mutref(inType) && argNode.items[LET_INIT])
                        inType = clear_mutref(s_Type(inType));

                    if (couldRetype(inValue, _scope, module, ctx, _here, _info))
                    {
                        s_TypeParam* _1;
                        const s_Type& paramType = ((annot.kind == "typeparam"_fu) ? (*(_1 = &(typeParams.upsert(annot.value))) ? *_1 : *_1 = s_TypeParam{}).matched : ((annot.kind == "call"_fu) && !annot.items ? Scope_lookupType(annot, _here, ctx, _info, module, _scope, _ss) : (*(const s_Type*)fu::NIL)));
                        if (paramType)
                        {
                            s_Type retype = tryRetyping(inValue, paramType, _scope, module, ctx, _here, _info);
                            if (retype && (retype.vtype.canon != inType.vtype.canon))
                            {
                                inType = (args_1.mutref(i_2) = retype);
                                remangle = true;
                            };
                        }
                        else if (!pass_retype)
                        {
                            retypeIndices.push(i_2);
                            continue;
                        };
                    };
                    if (!(argNode.kind == "let"_fu))
                        fail(fu_STR{}, _here, ctx, _info);

                    if (inType)
                    {
                        const s_Type& exactType = original.args[i_2].type;
                        if (exactType)
                        {
                            args_1.mutref(i_2) = exactType;
                            continue;
                        };
                        const fu_STR& argName = (argNode.value ? argNode.value : fail(fu_STR{}, _here, ctx, _info));
                        s_TypeParam* _2;
                        s_TypeParam& argName_typeParam = (*(_2 = &(typeParams.upsert(argName))) ? *_2 : *_2 = s_TypeParam{});
                        if (argNode.flags & F_MUT)
                            inType = clear_refs(s_Type(inType));
                        else
                            inType = add_ref(s_Type(inType), Lifetime_temporary());

                        (!argName_typeParam ? argName_typeParam : fail((("Type param name collision with argument: `"_fu + argName) + "`."_fu), _here, ctx, _info)).matched = inType;
                        if (annot)
                        {
                            const bool argOk = (inType && trySolveTypeParams(annot, s_Type(inType), typeParams, _here, ctx, _info, module, _scope, _ss));
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
                const int start_1 = ((_3 = (find_ajCN(mangle, std::byte(' ')) + 1)) ? _3 : fail(fu_STR{}, _here, ctx, _info));
                mangle = (fu::slice(mangle, 0, start_1) + mangleArguments_AfYs(args_1));
                if (mangle00 != mangle)
                {
                    s_Target _4 {};
                    const s_Target preexisting = ((_4 = s_Target(_specs[mangle])) ? _4 : s_Target{});
                    if (preexisting)
                    {
                        setSpec(mangle00, preexisting, bool{}, isInline, _here, ctx, _info, _specs, _scope, module);
                        return preexisting;
                    };
                    if (!into)
                        setSpec(mangle, SPECFAIL, true, isInline, _here, ctx, _info, _specs, _scope, module);

                };
            };
            if (!ok)
                return SPECFAIL;

            const s_Node* _5;
            const s_Node& body = (*(_5 = &(items_5[(items_5.size() + FN_BODY_BACK)])) ? *_5 : fail(fu_STR{}, _here, ctx, _info));
            if (body.kind == "pattern"_fu)
            {
                const fu_MAP<fu_STR, s_TypeParam>& undo = typeParams;
                fu::view<s_Node> branches = body.items;
                bool did_match = false;
                for (int i_2 = 0; i_2 < branches.size(); i_2++)
                {
                    const s_Node& cond = branches[i_2].items[0];
                    if (cond && !evalTypePattern(cond, typeParams, _here, ctx, _info, module, _scope, _ss, _current_fn_or_type, _helpers, _current_fn, _specs, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions))
                    {
                        typeParams = undo;
                        continue;
                    };
                    fu::view<s_Node> cons = branches[i_2].items;
                    fu_VEC<s_Node>& sig = n_fn.items;

                    {
                        const s_Node& n_ret = cons[(cons.size() + FN_RET_BACK)];
                        if (n_ret)
                            sig.mutref((sig.size() + FN_RET_BACK)) = n_ret;

                        const s_Node& n_body = cons[(cons.size() + FN_BODY_BACK)];
                        sig.mutref((sig.size() + FN_BODY_BACK)) = (n_body ? n_body : fail("doTrySpec: no case/body."_fu, _here, ctx, _info));
                    };
                    did_match = true;
                    break;
                };
                if (!did_match)
                    return SPECFAIL;

            };
            const s_Node& n_body = n_fn.items[(n_fn.items.size() + FN_BODY_BACK)];
            if (isNativeBody(n_body))
            {
                for (int i_2 = 0; i_2 < numArgs; i_2++)
                {
                    const s_Node* _6;
                    const s_Node& argNode = (*(_6 = &(items_5[i_2])) ? *_6 : fail(fu_STR{}, _here, ctx, _info));
                    const fu_STR& id_2 = argNode.value;
                    if (fu::has(typeParams, id_2))
                    {
                        s_TypeParam& tp = typeParams.mutref(id_2);
                        tp.matched = tp.consumed;
                    };
                };
            };
        };
        fu_STR mangle0 { mangle };
        fu_VEC<s_ScopeItem> extra_items_1 = (into ? fu_VEC<s_ScopeItem>(original.extra_items) : intoScopeItems(typeParams, module, ctx, _scope, _here, _info));
        target_5 = (into ? s_Target(into) : Scope_create(_scope, "_no_kind_yet_"_fu, fu_STR{}, s_Type{}, 0, 0, 0, fu_VEC<s_Argument>{}, s_SolvedNode{}, parent_idx, (SS_DID_START | SS_LAZY), extra_items_1, s_Template{}, 0, bool{}, module));
        s_Target current_fn_or_type0 { _current_fn_or_type };
        fu_DEFER(_current_fn_or_type = current_fn_or_type0);
        _current_fn_or_type = target_5;
        if (!SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).target)
            _anons = 0;


        {
            s_Overload& o = GET_mut(target_5, _scope, module);
            o.locals.clear();
            o.nodes.clear();
        };
        s_CurrentFn out_1 = s_CurrentFn { solved(n_fn, X_addrofTarget(target_5), fu_VEC<s_SolvedNode>{}, target_5, _current_fn_or_type, _scope, module) };
        s_ScopeMemo root_scope0 { _root_scope };
        if (!root_scope0)
            _root_scope = scope0;

        std::swap(_current_fn, out_1);
        fu_DEFER(
        {
            std::swap(_current_fn, out_1);
            _root_scope = root_scope0;
        });
        fu::view<s_Node> inItems = n_fn.items;
        outItems(_current_fn, module, _current_fn_or_type, _scope, ctx, _here, _info).resize(inItems.size());
        _scope.items += extra_items_1;
        const int spec = (template_1.node.flags & F_TEMPLATE);
        for (int i_2 = 0; i_2 < (inItems.size() + FN_RET_BACK); i_2++)
        {
            const s_Node& n_arg = inItems[i_2];
            s_Type specType = (spec ? tryGetArgSpecType(n_arg.value, extra_items_1, _scope, module, ctx, _here, _info) : s_Type{});
            outItems(_current_fn, module, _current_fn_or_type, _scope, ctx, _here, _info).mutref(i_2) = solveLet(n_arg, specType, bool{}, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
        };
        const s_Node& n_ret = inItems[(inItems.size() + FN_RET_BACK)];
        const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
        if (!(n_body))
            fail("solveFn: no body."_fu, _here, ctx, _info);

        const bool native = isNativeBody(n_body);
        if (!native)
        {
            if (!(n_body.kind == "block"_fu))
                fail((("solveFn: Body not a block: `"_fu + n_body.kind) + "`."_fu), _here, ctx, _info);

        };
        const s_Type& ret_expect_1 = (n_ret ? SolvedNodeData(evalTypeAnnot(n_ret, fu_MAP<fu_STR, s_TypeParam>{}, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions), _scope, module, ctx, _here, _info).type : (*(const s_Type*)fu::NIL));
        s_Type ret_seed { (n_ret ? (ret_expect_1 ? ret_expect_1 : fail(("falsy ret_expect: "_fu + n_fn.value), _here, ctx, _info)) : t_never) };
        if (ret_seed.lifetime)
            ret_seed.lifetime = (native ? Lifetime_fromNative(inItems, fu::get_view(SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).items, 0, (SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).items.size() + FN_RET_BACK)), ret_seed, _here, ctx, _info, _scope, module) : Lifetime_static());
        else if (is_ref(ret_seed))
            fail("fn.ret_actual is a ref without a lifetime."_fu, _here, ctx, _info);

        const bool firstIteration = !GET(target_5, _scope, module, ctx, _here, _info).solved;
        if (firstIteration)
        {

            {
                fu_STR name_3 { (n_fn.value ? n_fn.value : fail("TODO anonymous fns"_fu, _here, ctx, _info)) };
                if (spec && !native && !isInline)
                {
                    fu_STR sig = mangleArguments_Imge(fu::get_view(outItems(_current_fn, module, _current_fn_or_type, _scope, ctx, _here, _info), 0, (outItems(_current_fn, module, _current_fn_or_type, _scope, ctx, _here, _info).size() + FN_RET_BACK)), _scope, module, ctx, _here, _info);
                    if (sig)
                    {
                        fu_STR _7 {};
                        fu_STR hash = ((_7 = hash62(sig, 4)) ? static_cast<fu_STR&&>(_7) : fail(fu_STR{}, _here, ctx, _info));
                        name_3 += ("_"_fu + hash);
                    };
                };
                s_Overload& overload = GET_mut(target_5, _scope, module);
                fu_STR _8 {};
                overload.name = ((_8 = HACK_nativeNameParts(native, n_body)) ? static_cast<fu_STR&&>(_8) : fu_STR(name_3));
                overload.kind = (native ? "__native"_fu : (isInline ? "inline"_fu : "fn"_fu));
                overload.tEmplate = template_1;
                overload.spec_of = overloadIdx;
            };
            updateScope(_current_fn, (isInline ? ret_expect_1 : ret_seed), _scope, module, ctx, _here, _info, target_5, isInline, _current_fn);
            if (!into && !isInline)
            {
                int _9 {};
                const int start_1 = ((_9 = (find_ajCN(mangle0, std::byte(' ')) + 1)) ? _9 : fail(fu_STR{}, _here, ctx, _info));
                mangle = (fu::slice(mangle0, 0, start_1) + mangleArguments_Jnb9(GET(target_5, _scope, module, ctx, _here, _info).args));
                s_Target preexisting {};
                if (mangle0 != mangle)
                {
                    s_Target _10 {};
                    preexisting = ((_10 = s_Target(_specs[mangle])) ? _10 : s_Target{});
                    setSpec(mangle0, (preexisting ? preexisting : target_5), bool{}, isInline, _here, ctx, _info, _specs, _scope, module);
                };
                const bool nx = (mangle00 != mangle);
                if (nx && (mangle00 != mangle0))
                    setSpec(mangle00, (preexisting ? preexisting : target_5), bool{}, isInline, _here, ctx, _info, _specs, _scope, module);

                if (preexisting)
                    return preexisting;

                setSpec(mangle, target_5, nx, isInline, _here, ctx, _info, _specs, _scope, module);
            };
        };
        if (!isInline)
        {
            s_Type retval { ret_seed };
            if (!native)
            {
                const s_SolvedNode s_body = solveBlock(n_body, ret_expect_1, target_5.index, short((((HM_Function | HM_CanReturn) | HM_LabelUsed) | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL)))), 0, n_fn.value, (last_WQyU(_helpers).vars.size() - helpers0vars), _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
                retval = SolvedNodeData(s_body, _scope, module, ctx, _here, _info).type;
                outItems(_current_fn, module, _current_fn_or_type, _scope, ctx, _here, _info).mutref((outItems(_current_fn, module, _current_fn_or_type, _scope, ctx, _here, _info).size() + FN_BODY_BACK)) = (s_body ? s_body : fail("falsy body"_fu, _here, ctx, _info));
            };
            outItems(_current_fn, module, _current_fn_or_type, _scope, ctx, _here, _info).mutref((outItems(_current_fn, module, _current_fn_or_type, _scope, ctx, _here, _info).size() + FN_RET_BACK)) = createEmpty("empty"_fu, retval, s_Target{}, _current_fn_or_type, _scope, module);
            updateScope(_current_fn, retval, _scope, module, ctx, _here, _info, target_5, isInline, _current_fn);
        };
    };
    s_Overload& o = GET_mut(target_5, _scope, module);
    lazySolveEnd(o, module, _scope, _here, ctx, _info, _notes, _specs, _helpers, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    return target_5;
}

static s_Target trySpecialize(const s_Target& overloadIdx, fu::view<s_SolvedNode> args_1, fu_STR& args_mangled, const int REST_START, const s_Type& REST_TYPE, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    fu_STR* _0;
    (*(_0 = &(args_mangled)) ? *_0 : *_0 = mangleArguments(args_1, reorder, use_reorder, conversions, REST_START, REST_TYPE, _scope, module, ctx, _here, _info));
    fu_STR mangle = ((((overloadIdx.modid + "#"_fu) + overloadIdx.index) + " "_fu) + args_mangled);
    s_Target _1 {};
    const s_Target spec = ((_1 = s_Target(_specs[mangle])) ? _1 : doTrySpecialize(s_Target{}, overloadIdx, args_1, fu_STR(mangle), reorder, use_reorder, conversions, REST_START, REST_TYPE, _scope, module, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions));
    return s_Target((!is_SPECFAIL(spec) ? spec : (*(const s_Target*)fu::NIL)));
}

static void propagateType(const s_SolvedNode& node_1, const s_Type& slot, s_Module& module, s_Target& _current_fn_or_type, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    if (!try_relax(MUT(node_1, module, _current_fn_or_type, _scope, ctx, _here, _info).type, slot))
        return;

    fu::view<std::byte> k = SolvedNodeData(node_1, _scope, module, ctx, _here, _info).kind;
    const s_Target& t = SolvedNodeData(node_1, _scope, module, ctx, _here, _info).target;
    if (k == "let"_fu)
    {
        const s_SolvedNode& init = SolvedNodeData(node_1, _scope, module, ctx, _here, _info).items[LET_INIT];
        if (init)
        {
            propagateType(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).items[LET_INIT], SolvedNodeData(node_1, _scope, module, ctx, _here, _info).type, module, _current_fn_or_type, _scope, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
            if (is_ref(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).type))
                MUT(node_1, module, _current_fn_or_type, _scope, ctx, _here, _info).type.lifetime = SolvedNodeData(init, _scope, module, ctx, _here, _info).type.lifetime;

        };
    };
    if (k == "call"_fu)
    {
        const s_Overload& o = GET(t, _scope, module, ctx, _here, _info);
        if (o.kind == "field"_fu)
            return propagateType(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).items[0], SolvedNodeData(node_1, _scope, module, ctx, _here, _info).type, module, _current_fn_or_type, _scope, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

        if (o.spec_of && is_ref(o.type))
        {
            fu::view<s_SolvedNode> argLets = arg_lets(o, _scope, module, ctx, _here, _info);
            fu_VEC<s_SolvedNode> relaxed {};
            for (int i = 0; i < SolvedNodeData(node_1, _scope, module, ctx, _here, _info).items.size(); i++)
            {
                const s_SolvedNode& orig = SolvedNodeData(node_1, _scope, module, ctx, _here, _info).items[i];
                if (TODO_FIX_has(o.type.lifetime.uni0n, Region_fromArgIndex(SolvedNodeData(argLets[i], _scope, module, ctx, _here, _info).target.index)))
                {
                    s_Type type_3 { SolvedNodeData(orig, _scope, module, ctx, _here, _info).type };
                    if (try_relax(type_3, slot))
                    {
                        if (!relaxed)
                            relaxed = fu::slice(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).items, 0, i);

                        relaxed += SolvedNode("__relaxed"_fu, type_3, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);
                        continue;
                    };
                };
                if (relaxed)
                    relaxed += orig;

            };
            if (relaxed)
            {
                fu_STR args_mangled {};
                const s_Target spec = trySpecialize(o.spec_of, relaxed, args_mangled, relaxed.size(), s_Type{}, fu::view<int>{}, bool{}, fu_VEC<fu_VEC<s_Target>>{}, _scope, module, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
                if (spec && !(spec == o.spec_of))
                {
                    s_Overload o1 { GET(spec, _scope, module, ctx, _here, _info) };
                    if (!isAssignable(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).type, o1.type))
                        fail("What is this."_fu, _here, ctx, _info);

                    if (is_ref(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).type))
                        MUT(node_1, module, _current_fn_or_type, _scope, ctx, _here, _info).type.lifetime = Lifetime_test(Lifetime_replaceArgsAtCallsite(o1, relaxed, _scope, module, ctx, _here, _info), true, _current_fn, _scope, module, ctx, _here, _info);

                    MUT(node_1, module, _current_fn_or_type, _scope, ctx, _here, _info).target = spec;
                    _notes |= N_RelaxRespec;
                    for (int i_1 = 0; i_1 < SolvedNodeData(node_1, _scope, module, ctx, _here, _info).items.size(); i_1++)
                    {
                        const s_SolvedNode& orig = SolvedNodeData(node_1, _scope, module, ctx, _here, _info).items[i_1];
                        const s_SolvedNode& next = relaxed[i_1];
                        if (SolvedNodeData(next, _scope, module, ctx, _here, _info).kind == "__relaxed"_fu)
                            propagateType(orig, SolvedNodeData(next, _scope, module, ctx, _here, _info).type, module, _current_fn_or_type, _scope, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

                    };
                };
            };
            return;
        };
    };
}

static void makeNote(const int note, const s_Options& options, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, int& _notes)
{
    if (note & options.break_notes)
        fail((("`break_notes`: Unwanted event: `"_fu + note) + "`."_fu), _here, ctx, _info);

    _notes |= note;
}

static s_SolvedNode createCopy(const s_SolvedNode& node_1, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type)
{
    return SolvedNode("copy"_fu, clear_refs(s_Type(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).type)), 0, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(node_1) } }, s_Target{}, _current_fn_or_type, _scope, module);
}

static void maybeCopyOrMove(s_SolvedNode& node_1, const s_Type& slot, const bool isArgument, s_Module& module, s_Target& _current_fn_or_type, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    propagateType(node_1, slot, module, _current_fn_or_type, _scope, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    if (is_ref(slot))
    {
        if (is_trivial(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).type))
        {
            if ((SolvedNodeData(node_1, _scope, module, ctx, _here, _info).kind == "definit"_fu) && isArgument)
                MUT(node_1, module, _current_fn_or_type, _scope, ctx, _here, _info).type = clear_refs(s_Type(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).type));

        };
        return;
    };
    if (!is_ref(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).type))
        return;

    if (SolvedNodeData(node_1, _scope, module, ctx, _here, _info).kind == "definit"_fu)
    {
        MUT(node_1, module, _current_fn_or_type, _scope, ctx, _here, _info).type = clear_refs(s_Type(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).type));
        return;
    };
    if (!is_rx_copy(slot))
        fail("Needs an explicit STEAL or CLONE."_fu, _here, ctx, _info);

    if (!is_trivial(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).type))
    {
        if (!(USE_nontriv_autocopy))
            fail("Non-trivial implicit copy."_fu, _here, ctx, _info);

        makeNote(N_NonTrivAutoCopy, options, _here, ctx, _info, _notes);
    };
    node_1 = createCopy(node_1, _scope, module, ctx, _here, _info, _current_fn_or_type);
}

                                #ifndef DEF_F_LAX
                                #define DEF_F_LAX
inline constexpr int F_LAX = (1 << 8);
                                #endif

                                #ifndef DEF_F_UNUSED
                                #define DEF_F_UNUSED
inline constexpr int F_UNUSED = (1 << 10);
                                #endif

static s_SolvedNode solveBlock(const s_Node& node_1, const s_Type& type_3, const int fnbody_of, const short mask_1, const int kills_1, const fu_STR& id_2, const int steal, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    fu_VEC<s_Node> nodes_1 = ((node_1.kind == "block"_fu) ? fu_VEC<s_Node>(node_1.items) : fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(node_1) } });
    const fu_STR& id_3 = (id_2 ? id_2 : ((node_1.kind == "block"_fu) ? node_1.value : (*(const fu_STR*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
    fu_DEFER(Scope_pop(_scope, scope0, _helpers));
    const int helpers_idx = _helpers.size();
    _helpers += s_Helpers { (fnbody_of ? s_Target { int(module.modid), int(fnbody_of) } : s_Target{}), fu_STR(id_3), short(mask_1), (fnbody_of ? -1 : int(SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).target.index)), int(kills_1), s_Type(type_3), s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} };
    if (steal)
    {
        fu_VEC<int>& old = _helpers.mutref((helpers_idx - 1)).vars;
        fu_VEC<int>& nEw = _helpers.mutref(helpers_idx).vars;
        nEw += fu::get_view(old, (old.size() - steal), old.size());
        old.shrink((old.size() - steal));
    };
    const bool expr = (!fnbody_of && !is_void(type_3));
    fu_VEC<s_SolvedNode> items_5 = solveNodes(nodes_1, t_void, type_3, expr, true, -1, (helpers_idx + 1), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    s_Helpers& h = _helpers.mutref(helpers_idx);
    if (is_never(SolvedNodeData(if_last_hang(items_5), _scope, module, ctx, _here, _info).type))
    {
        if (!h.ret_actual)
            h.ret_actual = t_never;

    }
    else if (fnbody_of)
    {
        if (h.ret_actual)
        {
            if (!(isAssignable(t_void, h.ret_actual)))
                fail("Non-void returning fn missing a final return."_fu, _here, ctx, _info);

        };
        h.ret_actual = t_void;
    };
    if (!fnbody_of && items_5 && !is_void(h.ret_actual))
        reportReturnType(helpers_idx, SolvedNodeData(last_hang(items_5), _scope, module, ctx, _here, _info).type, _helpers, _here, ctx, _info);

    if (!is_ref(h.ret_actual))
    {
        for (int i = 0; i < h.returns.size(); i++)
        {
            s_SolvedNode r { only_e0l4(SolvedNodeData(h.returns[i], _scope, module, ctx, _here, _info).items) };
            maybeCopyOrMove(r, h.ret_actual, false, module, _current_fn_or_type, _scope, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
            only_hang(MUT(h.returns[i], module, _current_fn_or_type, _scope, ctx, _here, _info).items) = r;
        };
        if (!fnbody_of && items_5 && !is_void(h.ret_actual))
            maybeCopyOrMove(last_hang(items_5), h.ret_actual, false, module, _current_fn_or_type, _scope, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    };
    if (OPTI_flatten_blocks && items_5.size())
    {
        for (; ; )
        {
            const s_SolvedNode& tail = last_hang(items_5);
            if ((SolvedNodeData(tail, _scope, module, ctx, _here, _info).kind != "block"_fu) || SolvedNodeData(tail, _scope, module, ctx, _here, _info).target)
                break;

            fu_VEC<s_SolvedNode> unwrap { SolvedNodeData(tail, _scope, module, ctx, _here, _info).items };
            items_5.pop();
            items_5 += unwrap;
        };
    };
    fu::view<int> vars_1 = _helpers[helpers_idx].vars;
    for (int i = vars_1.size(); i-- > 0; )
    {
        const int index_2 = vars_1[i];
        const s_Overload& var = GET_nested(index_2, _current_fn, _scope, module, ctx, _here, _info);
        if ((var.flags & F_ARG) && !fnbody_of)
        {
            if (!(var.flags & F_IMPLICIT))
                fail("This shouldnt happen for regular arguments."_fu, _here, ctx, _info);

            for (int i_1 = helpers_idx; i_1-- > 0; )
            {
                s_Helpers& parent = _helpers.mutref(i_1);
                if (isFnOrType(parent))
                {
                    parent.vars += index_2;
                    break;
                };
            };
            continue;
        };
        s_Type usage {};
        if (var.callsites)
        {
            usage = SolvedNodeData(var.callsites[0], _scope, module, ctx, _here, _info).type;
            for (int i_1 = 1; i_1 < var.callsites.size(); i_1++)
            {
                s_Type _0 {};
                usage = ((_0 = type_tryIntersect(usage, SolvedNodeData(var.callsites[i_1], _scope, module, ctx, _here, _info).type)) ? static_cast<s_Type&&>(_0) : fail((((((((("Type intersection fail at usage #"_fu + i_1) + " of variable `"_fu) + var.name) + "`: `"_fu) + humanizeType(usage)) + "` <- `"_fu) + humanizeType(SolvedNodeData(var.callsites[i_1], _scope, module, ctx, _here, _info).type)) + "`."_fu), _here, ctx, _info));
            };
        }
        else
        {
            if (!(var.flags & F_LAX))
                fail((("Unused variable: `"_fu + var.name) + "`: make it `lax` if this is intentional."_fu), _here, ctx, _info);

            GET_nested(index_2, _current_fn, _scope, module, ctx, _here, _info).flags |= F_UNUSED;
        };
        s_Overload& o = GET_nested(index_2, _current_fn, _scope, module, ctx, _here, _info);
        try_relax(o.type, usage);
        propagateType(o.solved, usage, module, _current_fn_or_type, _scope, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    };
    return createBlock((h.ret_actual ? h.ret_actual : t_void), items_5, ((h.mask & HM_LabelUsed) ? h.target : (*(const s_Target*)fu::NIL)), _scope, module, ctx, _here, _info, _current_fn_or_type);
}

                                #ifndef DEF_HM_CanBreak
                                #define DEF_HM_CanBreak
inline constexpr short HM_CanBreak = (short(1) << short(0));
                                #endif

static s_SolvedNode createFnDef(const s_Type& type_3, const s_Target& target_5, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module)
{
    return SolvedNode("fndef"_fu, type_3, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, target_5, _current_fn_or_type, _scope, module);
}

static s_SolvedNode uPrepFn_A(const s_Node& node_1, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    const fu_STR& id_2 = node_1.value;
    const int local_of_2 = SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).target.index;
    const bool isTemplate = !!(node_1.flags & F_TEMPLATE);
    const unsigned status_1 = (!isTemplate ? SS_LAZY : (*(const unsigned*)fu::NIL));
    const int N = (node_1.items.size() + FN_RET_BACK);
    int min_2 = 0;
    int max_2 = 0;
    fu_VEC<s_Argument> args_1 {};
    for (int i = 0; i < N; i++)
    {
        const s_Node& arg = node_1.items[i];
        fu_STR name_3 { (arg.value ? arg.value : fail("TemplateDecl: no argname."_fu, _here, ctx, _info)) };
        fu_STR autocall_1 = ((arg.flags & F_COMPOUND_ID) ? Autocall_splice(name_3, _here, ctx, _info) : fu_STR{});
        const s_Node& annot = arg.items[LET_TYPE];
        const s_Node& init = arg.items[LET_INIT];
        const bool typed = !(arg.flags & F_TEMPLATE);
        const s_Type& type_3 = (typed && annot ? SolvedNodeData(evalTypeAnnot(annot, fu_MAP<fu_STR, s_TypeParam>{}, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions), _scope, module, ctx, _here, _info).type : (*(const s_Type*)fu::NIL));
        const s_SolvedNode default_1 = (typed && init ? solveNode(init, type_3, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions) : s_SolvedNode{});
        args_1.push(s_Argument { fu_STR(name_3), fu_STR(autocall_1), s_Type(type_3), s_SolvedNode(default_1), int(arg.flags) });
        if (!(arg.flags & F_IMPLICIT))
        {
            if (max_2 != int(0x7fffffffu))
                max_2++;

            if (!arg.items[LET_INIT])
                min_2++;

        };
        if (arg.flags & F_REST_ARG)
            max_2 = int(0x7fffffffu);

    };
    s_Template template_1 = createTemplate(node_1, _current_fn, _scope, _helpers, _ss);
    const s_Target tDecl = Scope_create(_scope, "template"_fu, fu_STR{}, s_Type{}, node_1.flags, min_2, max_2, args_1, s_SolvedNode{}, local_of_2, status_1, fu_VEC<s_ScopeItem>{}, template_1, 0, bool{}, module);
    Scope_set(_scope, id_2, tDecl, !!(node_1.flags & F_SHADOW));
    if (node_1.flags & F_CONVERSION)
        _scope.converts.push(tDecl);

    return createFnDef(X_addrofTarget(tDecl), tDecl, _current_fn_or_type, _scope, module);
}

static s_SolvedNode uPrepStruct(const s_Node& node_1, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    return __solveStruct(false, s_Node(node_1), s_Target{}, _scope, module, ctx, _here, _info, _current_fn_or_type, _current_fn, _helpers, _ss, _specs, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
}

static s_SolvedNode unorderedPrep_A(const s_Node& node_1, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    fu::view<std::byte> k = node_1.kind;
    if (k == "fn"_fu)
        return uPrepFn_A(node_1, _current_fn, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "struct"_fu)
        return uPrepStruct(node_1, _scope, module, ctx, _here, _info, _current_fn_or_type, _current_fn, _helpers, _ss, _specs, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    fail(("TODO: "_fu + k), _here, ctx, _info);
}

static void uPrepFn_B(const s_Target& target_5, s_Scope& _scope, s_Module& module, fu_VEC<s_Helpers>& _helpers)
{
    s_Template& template_1 = GET_mut(target_5, _scope, module).tEmplate;
    if (template_1.scope_memo)
        template_1.scope_memo = Scope_snap(_scope, _helpers);

}

static void unorderedPrep_B(const s_Node& node_1, const s_Target& into, s_Scope& _scope, s_Module& module, fu_VEC<s_Helpers>& _helpers)
{
    fu::view<std::byte> k = node_1.kind;
    if (k == "fn"_fu)
        uPrepFn_B(into, _scope, module, _helpers);

}

static fu_VEC<s_SolvedNode> solveNodes(fu::view<s_Node> nodes_1, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const bool deadcode_on_never, const int as_blocks_after, const int kills_1, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    fu_VEC<s_SolvedNode> result {};
    s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    for (int i = 0; i < nodes_1.size(); i++)
    {
        const s_Node& node_1 = nodes_1[i];
        if (!node_1)
            continue;

        int unorderedClass = unorderedClassify(node_1.kind);
        if (!unorderedClass)
        {
            _here = (node_1.token ? node_1.token : _here);
            const s_Type& type_3 = (((i == (nodes_1.size() - 1)) && use_type_last) ? type_last : type_all);
            const s_SolvedNode solved_2 = (((as_blocks_after >= 0) && (as_blocks_after <= i)) ? solveBlock(node_1, type_3, 0, HM_CanBreak, 0, fu_STR{}, 0, _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions) : solveNode(node_1, type_3, deadcode_on_never, ((i == (nodes_1.size() - 1)) ? kills_1 : (*(const int*)fu::NIL)), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions));
            result += solved_2;
            if (deadcode_on_never && is_never(SolvedNodeData(solved_2, _scope, module, ctx, _here, _info).type))
            {
                if (i < (nodes_1.size() - 1))
                    _notes |= N_DeadCode;

                break;
            };
            continue;
        };
        const int i0 = i;
        int i1 = nodes_1.size();
        const int offset = (result.size() - i0);
        for (int i_1 = i0; i_1 < nodes_1.size(); i_1++)
        {
            const s_Node* _0;
            const s_Node& node_2 = (*(_0 = &(nodes_1[i_1])) ? *_0 : fail("solveNodes, prep-a: falsy node"_fu, _here, ctx, _info));
            if (unorderedClassify(node_2.kind) != unorderedClass)
            {
                i1 = i_1;
                break;
            };
            _here = (node_2.token ? node_2.token : _here);
            result += unorderedPrep_A(node_2, _current_fn, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
        };
        if (!(i1 > i0))
            fail(fu_STR{}, _here, ctx, _info);

        i = (i1 - 1);
        for (int i_1_1 = i0; i_1_1 < i1; i_1_1++)
        {
            const s_Node* _1;
            const s_Node& node_2 = (*(_1 = &(nodes_1[i_1_1])) ? *_1 : fail("solveNodes, prep-b: falsy node"_fu, _here, ctx, _info));
            _here = (node_2.token ? node_2.token : _here);
            unorderedPrep_B(node_2, SolvedNodeData(result[(i_1_1 + offset)], _scope, module, ctx, _here, _info).target, _scope, module, _helpers);
        };
        bool repeat = true;
        while (repeat)
        {
            repeat = false;
            for (int i_1_2 = i0; i_1_2 < i1; i_1_2++)
            {
                const s_Node* _2;
                const s_Node& node_2 = (*(_2 = &(nodes_1[i_1_2])) ? *_2 : fail("solveNodes, solve: falsy node"_fu, _here, ctx, _info));
                _here = (node_2.token ? node_2.token : _here);
                s_Target into { SolvedNodeData(result[(i_1_2 + offset)], _scope, module, ctx, _here, _info).target };
                if (lazySolveStart(into, GET(into, _scope, module, ctx, _here, _info), _scope, module, _here, ctx, _info, _specs, _helpers, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions))
                    repeat = true;

            };
        };
    };
    return result;
}

static s_SolvedNode solveRoot(const s_Node& node_1, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    return solved(node_1, t_void, solveNodes(node_1.items, t_void, s_Type{}, bool{}, bool{}, -1, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions), s_Target{}, _current_fn_or_type, _scope, module);
}

                                #ifndef DEFt_only_ZDQv
                                #define DEFt_only_ZDQv
inline const s_Node& only_ZDQv(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_SolvedNode solveArgID(const s_Node& node_1, const s_Type& type_3, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    const s_SolvedNode expr = solveNode(only_ZDQv(node_1.items), type_3, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    return solved(node_1, SolvedNodeData(expr, _scope, module, ctx, _here, _info).type, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(expr) } }, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveArrlit(const s_Node& node_1, const s_Type& type_3, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    s_Type itemType = (type_3 ? tryClear_array(type_3) : s_Type{});
    if (!itemType && isStruct(type_3))
        return solveCall(node_1, lookupStruct(type_3, module, ctx).target, 0, _here, ctx, _info, _scope, _helpers, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    return createArrlit(solveNodes(node_1.items, itemType, s_Type{}, bool{}, bool{}, -1, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions), itemType, _here, ctx, _info, _scope, module, _current_fn_or_type, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
}

extern const s_Type t_bool;

static s_SolvedNode TODO_FIX_pop(fu_VEC<s_SolvedNode>& items_5)
{
    s_SolvedNode last_1 { last_hang(items_5) };
    items_5.pop();
    return last_1;
}

static s_SolvedNode solveIf(const s_Node& node_1, s_Type&& type_3, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    s_SolvedNode cond = solveNode(node_1.items[0], t_bool, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    if (is_never(SolvedNodeData(cond, _scope, module, ctx, _here, _info).type))
    {
        _notes |= N_DeadIf;
        return cond;
    };
    s_SolvedNode cons = (((SolvedNodeData(cond, _scope, module, ctx, _here, _info).kind == "and"_fu) && is_never(SolvedNodeData(last_e0l4(SolvedNodeData(cond, _scope, module, ctx, _here, _info).items), _scope, module, ctx, _here, _info).type)) ? ((void)(_notes |= N_DeadIfCons), TODO_FIX_pop(MUT(cond, module, _current_fn_or_type, _scope, ctx, _here, _info).items)) : solveBlock(node_1.items[1], type_3, 0, HM_CanBreak, 0, fu_STR{}, 0, _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions));
    s_SolvedNode alt = solveBlock(node_1.items[2], (type_3 ? type_3 : SolvedNodeData(cons, _scope, module, ctx, _here, _info).type), 0, HM_CanBreak, 0, fu_STR{}, 0, _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    if (!is_void(type_3))
    {
        type_3 = superType("if/else: "_fu, SolvedNodeData(cons, _scope, module, ctx, _here, _info).type, SolvedNodeData(alt, _scope, module, ctx, _here, _info).type, _here, ctx, _info);
        if (!(is_ref(type_3) || !type_3.lifetime))
            fail("[if] stray lifetime"_fu, _here, ctx, _info);

        maybeCopyOrMove(cons, type_3, false, module, _current_fn_or_type, _scope, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
        maybeCopyOrMove(alt, type_3, false, module, _current_fn_or_type, _scope, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    };
    if (is_never(SolvedNodeData(cons, _scope, module, ctx, _here, _info).type) && is_never(SolvedNodeData(alt, _scope, module, ctx, _here, _info).type))
        type_3 = t_never;

    return solved(node_1, (type_3 ? type_3 : fail(fu_STR{}, _here, ctx, _info)), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { s_SolvedNode(cond), s_SolvedNode(cons), s_SolvedNode(alt) } }, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveOr(const s_Node& node_1, s_Type&& type_3, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    fu_VEC<s_SolvedNode> items_5 = solveNodes(node_1.items, (is_void(type_3) ? t_bool : type_3), type_3, true, true, 1, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    if (items_5.size() < 2)
        return s_SolvedNode(only_hang(items_5));

    if (is_void(type_3))
        type_3 = t_bool;

    if (!is_bool(type_3))
    {
        s_Type sumType {};
        bool hasNever = false;
        for (int i = items_5.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items_5[i];
            if (is_never(SolvedNodeData(item, _scope, module, ctx, _here, _info).type))
            {
                hasNever = true;
                continue;
            };
            const s_SolvedNode& andLast = (hasNever && (SolvedNodeData(item, _scope, module, ctx, _here, _info).kind == "and"_fu) && SolvedNodeData(item, _scope, module, ctx, _here, _info).items ? SolvedNodeData(item, _scope, module, ctx, _here, _info).items[(SolvedNodeData(item, _scope, module, ctx, _here, _info).items.size() - 1)] : (*(const s_SolvedNode*)fu::NIL));
            const s_Type& itemType = ((andLast && !is_never(SolvedNodeData(andLast, _scope, module, ctx, _here, _info).type)) ? SolvedNodeData(andLast, _scope, module, ctx, _here, _info).type : SolvedNodeData(item, _scope, module, ctx, _here, _info).type);
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
            for (int i_1 = 0; i_1 < items_5.size(); i_1++)
                maybeCopyOrMove(items_5.mutref(i_1), sumType, false, module, _current_fn_or_type, _scope, ctx, _here, _info, _specs, _helpers, _ss, _root_scope, _current_fn, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

        };
    };
    return solved(node_1, type_3, items_5, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveAnd(const s_Node& node_1, s_Type&& type_3, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    fu_VEC<s_SolvedNode> items_5 = solveNodes(node_1.items, (is_void(type_3) ? t_bool : type_3), type_3, true, true, 1, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    if (items_5.size() < 2)
        return s_SolvedNode(only_e0l4(items_5));

    if (is_void(type_3))
        type_3 = t_bool;

    if (!is_bool(type_3))
    {
        s_Type sumType {};
        for (int i = items_5.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items_5[i];
            if (is_never(SolvedNodeData(item, _scope, module, ctx, _here, _info).type))
                continue;

            if (sumType)
            {
                sumType = type_trySuper(sumType, SolvedNodeData(item, _scope, module, ctx, _here, _info).type);
                if (!is_ref(sumType))
                    break;

            }
            else
            {
                type_3 = SolvedNodeData(item, _scope, module, ctx, _here, _info).type;
                sumType = SolvedNodeData(item, _scope, module, ctx, _here, _info).type;
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
    return solved(node_1, type_3, items_5, s_Target{}, _current_fn_or_type, _scope, module);
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

static s_SolvedNode solveLetStatement(const s_Node& node_1, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    if (!(node_1.kind == "let"_fu))
        fail((("Expected a `let` statement, got: `"_fu + node_1.kind) + "`."_fu), _here, ctx, _info);

    return solveNode(node_1, t_void, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
}

static s_SolvedNode solveLoop(const s_Node& node_1, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
    fu_DEFER(Scope_pop(_scope, scope0, _helpers));
    const int brk_idx = _helpers.size();
    _helpers += s_Helpers { s_Target{}, fu_STR(node_1.value), (HM_Anon | HM_CanBreak), int(SolvedNodeData(_current_fn.out, _scope, module, ctx, _here, _info).target.index), 0, s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} };
    const s_Node& n_init = node_1.items[LOOP_INIT];
    const s_Node& n_pre_cond = node_1.items[LOOP_COND];
    const s_Node& n_body = node_1.items[LOOP_BODY];
    const s_Node& n_post_cond = node_1.items[LOOP_POST_COND];
    const s_Node& n_post = node_1.items[LOOP_POST];
    const s_SolvedNode init = (n_init ? solveLetStatement(n_init, _here, ctx, _info, _scope, _helpers, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions) : s_SolvedNode{});
    const s_SolvedNode pre_cond = (n_pre_cond ? solveNode(n_pre_cond, t_bool, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions) : s_SolvedNode{});
    const s_SolvedNode body = (n_body ? solveBlock(n_body, t_void, 0, HM_CanBreak, 0, fu_STR{}, 0, _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions) : s_SolvedNode{});
    const s_SolvedNode post_cond = (n_post_cond ? solveNode(n_post_cond, t_bool, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions) : s_SolvedNode{});
    const s_SolvedNode post = (n_post ? solveNode(n_post, t_void, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions) : s_SolvedNode{});
    const s_Helpers& h = _helpers[brk_idx];
    const short label_used = (h.mask & HM_LabelUsed);
    const s_Type& type_3 = ((!pre_cond && !post_cond && !label_used) ? t_never : t_void);
    return solved(node_1, type_3, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<5> { s_SolvedNode(init), s_SolvedNode(pre_cond), s_SolvedNode(body), s_SolvedNode(post_cond), s_SolvedNode(post) } }, (label_used ? h.target : (*(const s_Target*)fu::NIL)), _current_fn_or_type, _scope, module);
}

static int Scope_lookupReturn(const fu_STR& id_2, const bool lambdaOK, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info)
{

    {
        fu::view<s_ScopeSkip> ss = _ss.helpers;

        {
            int ssi = (ss.size() - 1);
            int ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
            for (int i_3 = _helpers.size(); i_3-- > 0; )
            {
                if ((ssi >= 0) && (i_3 == ssN))
                {
                    i_3 = ss[ssi--].start;
                    ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
                    continue;
                };
                const s_Helpers& item = _helpers[i_3];
                if (!(item.mask & HM_CanReturn))
                    continue;

                if ((item.mask & HM_Lambda) && !lambdaOK)
                    continue;

                if (id_2 && (item.id != id_2))
                    continue;

                return i_3;
            };
        };
    };
    fail((("No return `"_fu + id_2) + "` in scope."_fu), _here, ctx, _info);
}

                                #ifndef DEF_F_SINGLE_STMT
                                #define DEF_F_SINGLE_STMT
inline constexpr int F_SINGLE_STMT = (1 << 31);
                                #endif

static int Scope_lookupLabel(const fu_STR& id_2, const bool cont, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info)
{
    int CONTINUE_BELOW {};

    {
        fu::view<s_ScopeSkip> ss = _ss.helpers;

        {
            int ssi = (ss.size() - 1);
            int ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
            for (int i_3 = _helpers.size(); i_3-- > 0; )
            {
                if ((ssi >= 0) && (i_3 == ssN))
                {
                    i_3 = ss[ssi--].start;
                    ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
                    continue;
                };
                const s_Helpers& item = _helpers[i_3];
                if (i_3 < (CONTINUE_BELOW - 1))
                    i_3++;

                if (!(item.mask & HM_CanBreak))
                {
                    if (!CONTINUE_BELOW)
                    {
                        if (id_2 || !(item.mask & HM_Lambda))
                            continue;

                        if (!cont)
                        {
                            CONTINUE_BELOW = i_3;
                            continue;
                        };
                    };
                    return i_3;
                };
                if (!CONTINUE_BELOW)
                {
                    if (!(id_2 ? (item.id == id_2) : ((item.mask & HM_Anon) != short(0))))
                        continue;

                    if (cont)
                    {
                        i_3++;
                        if (!(i_3 < _helpers.size()))
                            fail((("Cannot continue to label `"_fu + id_2) + "` from here, did you mean to `break`?"_fu), _here, ctx, _info);

                    };
                };
                return i_3;
            };
        };
    };
    fail((("No label `"_fu + id_2) + "` in scope."_fu), _here, ctx, _info);
}

static s_Helpers& h(fu_VEC<s_Helpers>& _helpers, int& helpers_idx)
{
    return _helpers.mutref(helpers_idx);
}

static fu_STR ANON(int& _anons)
{
    return "0"_fu + _anons++;
}

static s_Target Scope_addLabel(const fu_STR& id_2, const int local_of_2, s_Scope& _scope, int& _anons, s_Module& module)
{
    return Scope_create(_scope, "label"_fu, (id_2 ? fu_STR(id_2) : ANON(_anons)), s_Type{}, F_SHADOW, 0, 0, fu_VEC<s_Argument>{}, s_SolvedNode{}, local_of_2, 0u, fu_VEC<s_ScopeItem>{}, s_Template{}, 0, true, module);
}

static s_SolvedNode createJump(const s_Target& target_5, const s_SolvedNode& expr, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module)
{
    return SolvedNode("jump"_fu, t_never, 0, fu_STR{}, (expr ? fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(expr) } } : fu_VEC<s_SolvedNode>{}), target_5, _current_fn_or_type, _scope, module);
}

static s_SolvedNode createMove(const s_SolvedNode& node_1, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type)
{
    return SolvedNode("move"_fu, clear_refs(s_Type(SolvedNodeData(node_1, _scope, module, ctx, _here, _info).type)), 0, fu_STR{}, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(node_1) } }, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveJump(const s_Node& node_1, const int kills_1, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, s_Module& module, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    int helpers_idx = ((node_1.kind == "return"_fu) ? Scope_lookupReturn(node_1.value, !!(node_1.flags & F_SINGLE_STMT), _helpers, _ss, _here, ctx, _info) : Scope_lookupLabel(node_1.value, (node_1.kind == "continue"_fu), _helpers, _ss, _here, ctx, _info));
    const s_Type* _0;
    s_SolvedNode expr = (node_1.items ? solveNode(only_ZDQv(node_1.items), (*(_0 = &(h(_helpers, helpers_idx).ret_actual)) ? *_0 : h(_helpers, helpers_idx).ret_expect), bool{}, (helpers_idx + 1), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions) : s_SolvedNode{});
    if (is_never(SolvedNodeData(expr, _scope, module, ctx, _here, _info).type))
        return expr;

    const bool redundant = (kills_1 == (helpers_idx + 1));
    if (redundant && is_void(SolvedNodeData(expr, _scope, module, ctx, _here, _info).type))
        return expr;

    while (h(_helpers, helpers_idx).kills)
        helpers_idx = (h(_helpers, helpers_idx).kills - 1);

    if (redundant && !(h(_helpers, helpers_idx).mask & HM_Function))
        return expr;

    s_Target* _1;
    const s_Target& target_5 = (*(_1 = &(h(_helpers, helpers_idx).target)) ? *_1 : *_1 = Scope_addLabel(h(_helpers, helpers_idx).id, h(_helpers, helpers_idx).local_of, _scope, _anons, module));
    h(_helpers, helpers_idx).mask |= HM_LabelUsed;
    if (!node_1.items)
    {
        reportReturnType(helpers_idx, t_void, _helpers, _here, ctx, _info);
        return createJump(target_5, s_SolvedNode{}, _current_fn_or_type, _scope, module);
    };
    if (is_ref(SolvedNodeData(expr, _scope, module, ctx, _here, _info).type))
    {
        const int ltCompare = Lifetime_compareToIndex(SolvedNodeData(expr, _scope, module, ctx, _here, _info).type.lifetime, ((target_5.modid < 0) ? target_5.index : (*(const int*)fu::NIL)));
        if ((ltCompare >= 0))
        {
            if (ltCompare > 0)
                expr = createMove(expr, _scope, module, ctx, _here, _info, _current_fn_or_type);
            else
                expr = createCopy(expr, _scope, module, ctx, _here, _info, _current_fn_or_type);

        };
    };
    reportReturnType(helpers_idx, SolvedNodeData(expr, _scope, module, ctx, _here, _info).type, _helpers, _here, ctx, _info);
    const s_SolvedNode jump = createJump(target_5, expr, _current_fn_or_type, _scope, module);
    h(_helpers, helpers_idx).returns += jump;
    return jump;
}

static s_SolvedNode solveInt(const s_Node& node_1, const s_Type& type_3, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module)
{
    return solved(node_1, solveInt(node_1.value, type_3, _here, ctx, _info), fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveNum(const s_Node& node_1, const s_Type& type_3, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module)
{
    return solved(node_1, solveNum(node_1.value, type_3), fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode createDefinit(s_Type&& type_3, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module)
{
    if (is_ref(type_3))
        type_3.lifetime = Lifetime_static();

    if (is_integral(type_3))
        return SolvedNode("int"_fu, type_3, 0, "0"_fu, fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);

    if (is_floating_pt(type_3))
        return SolvedNode("real"_fu, type_3, 0, "0"_fu, fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);

    return SolvedNode("definit"_fu, type_3, 0, fu_STR{}, fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveStr(const s_Node& node_1, const s_Type& t_string, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module)
{
    if (!node_1.value)
        return createDefinit(add_ref(s_Type(t_string), Lifetime_temporary()), _current_fn_or_type, _scope, module);

    return solved(node_1, t_string, fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveChar(const s_Node& node_1, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module)
{
    return solved(node_1, t_byte, fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode tryCreateDefinit(const s_Type& type_3, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module)
{
    if (CANNOT_definit_mutrefs && is_mutref(type_3))
        return s_SolvedNode{};

    return createDefinit(s_Type(type_3), _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveDefinit(const s_Type& type_3, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, s_Scope& _scope, s_Module& module)
{
    if (!type_3)
        fail("Cannot solve definit, no inferred type."_fu, _here, ctx, _info);

    s_SolvedNode _0 {};
    return (_0 = tryCreateDefinit(type_3, _current_fn_or_type, _scope, module)) ? _0 : fail(("Cannot definit: "_fu + serializeType(type_3)), _here, ctx, _info);
}

static s_SolvedNode solveCatch(const s_Node& node_1, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    if (!(node_1.items.size() == 3))
        fail(fu_STR{}, _here, ctx, _info);

    const s_SolvedNode var_ok = solveLetStatement(node_1.items[0], _here, ctx, _info, _scope, _helpers, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
    fu_DEFER(Scope_pop(_scope, scope0, _helpers));
    const s_SolvedNode var_err = solveLetStatement(node_1.items[1], _here, ctx, _info, _scope, _helpers, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    const s_SolvedNode cAtch = solveNode(node_1.items[2], s_Type{}, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    const s_Type& type_3 = SolvedNodeData(var_ok, _scope, module, ctx, _here, _info).type;
    if (!(is_never(SolvedNodeData(cAtch, _scope, module, ctx, _here, _info).type)))
        fail("[let catch]: catch clause must exit local scope."_fu, _here, ctx, _info);

    if (!((SolvedNodeData(var_err, _scope, module, ctx, _here, _info).kind == "let"_fu) && isAssignableAsArgument(SolvedNodeData(var_err, _scope, module, ctx, _here, _info).type, t_string)))
        fail(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), _here, ctx, _info);

    return solved(node_1, type_3, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { s_SolvedNode(var_ok), s_SolvedNode(var_err), s_SolvedNode(cAtch) } }, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveImport(const s_Node& node_1, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Scope& _scope, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, s_Module& module)
{
    const s_Module& m = findModule(node_1.value, ctx, _here, _info);
    Scope_import(m.modid, bool{}, _scope, _ss, _here, ctx, _info);
    return createEmpty("empty"_fu, t_void, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveDefer(const s_Node& node_1, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    const s_SolvedNode item = solveNode(only_ZDQv(node_1.items), s_Type{}, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    return solved(node_1, t_void, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(item) } }, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveTryCatch(const s_Node& node_1, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    if (!(node_1.items.size() == 3))
        fail(fu_STR{}, _here, ctx, _info);

    const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
    const s_SolvedNode tRy = solveNode(node_1.items[0], s_Type{}, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    Scope_pop(_scope, scope0, _helpers);
    const s_ScopeMemo scope0_1 = Scope_snap(_scope, _helpers);
    const s_SolvedNode err = solveLetStatement(node_1.items[1], _here, ctx, _info, _scope, _helpers, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    const s_SolvedNode cAtch = solveNode(node_1.items[2], s_Type{}, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    Scope_pop(_scope, scope0_1, _helpers);
    if (!((SolvedNodeData(err, _scope, module, ctx, _here, _info).kind == "let"_fu) && isAssignableAsArgument(SolvedNodeData(err, _scope, module, ctx, _here, _info).type, t_string)))
        fail(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), _here, ctx, _info);

    const s_Type& type_3 = ((is_never(SolvedNodeData(tRy, _scope, module, ctx, _here, _info).type) && is_never(SolvedNodeData(cAtch, _scope, module, ctx, _here, _info).type)) ? t_never : t_void);
    return solved(node_1, type_3, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { s_SolvedNode(tRy), s_SolvedNode(err), s_SolvedNode(cAtch) } }, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveTypedef(const s_Node& node_1, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    const s_SolvedNode annot = evalTypeAnnot(only_ZDQv(node_1.items), fu_MAP<fu_STR, s_TypeParam>{}, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    if (isStruct(SolvedNodeData(annot, _scope, module, ctx, _here, _info).type))
        Scope_set(_scope, node_1.value, lookupStruct(SolvedNodeData(annot, _scope, module, ctx, _here, _info).type, module, ctx).target, false);
    else
        Scope_Typedef(_scope, node_1.value, SolvedNodeData(annot, _scope, module, ctx, _here, _info).type, node_1.flags, s_Template{}, fu_STR{}, 0u, module);

    return createEmpty("empty"_fu, t_void, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveTypeAssert(const s_Node& node_1, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    const s_Node& left = node_1.items[0];
    const s_Node& right = node_1.items[1];
    const s_Type& expect = SolvedNodeData(evalTypeAnnot(right, fu_MAP<fu_STR, s_TypeParam>{}, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions), _scope, module, ctx, _here, _info).type;
    const s_SolvedNode actual = solveNode(left, expect, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    checkAssignable(expect, SolvedNodeData(actual, _scope, module, ctx, _here, _info).type, "Type assertion failed"_fu, fu_STR{}, fu_STR{}, _here, ctx, _info);
    return actual;
}

static s_SolvedNode solveTypeParam(const s_Node& node_1, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Module& module, s_Scope& _scope, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type)
{
    return solved(node_1, evalTypeParam(node_1.value, fu_MAP<fu_STR, s_TypeParam>{}, _here, ctx, _info, module, _scope, _ss), fu_VEC<s_SolvedNode>{}, s_Target{}, _current_fn_or_type, _scope, module);
}

static void visitScope(fu::view<s_ScopeItem> items_5, bool& shadow, const fu_STR& id_2, s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    int scope_iterator {};
    s_Target target_5 {};
    bool shadows {};
    while (!shadow && (target_5 = search(items_5, id_2, scope_iterator, _ss.items, shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
        result.push(target_5);

}

                                #ifndef DEFt_each_b5HC
                                #define DEFt_each_b5HC
inline void each_b5HC(fu::view<s_Struct> a, int, bool& shadow, const fu_STR& id_2, s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Struct& sTruct = a[i];
        visitScope(sTruct.items, shadow, id_2, _ss, result);
    };
}
                                #endif

static void visitTypes(const s_Module& module_1, bool& shadow, const fu_STR& id_2, s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    each_b5HC(module_1.out.types, 0, shadow, id_2, _ss, result);
}

                                #ifndef DEFt_each_pJzs
                                #define DEFt_each_pJzs
inline void each_pJzs(fu::view<int> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, const s_Context& ctx, bool& shadow, const fu_STR& id_2, s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
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
            const int import = items_5[i_1];
            visitTypes(ctx.modules[import], shadow, id_2, _ss, result);
        };
        i0 = ss.end;
    };
}
                                #endif

static s_SolvedNode solveAddrOfFn(const s_Node& node_1, s_Scope& _scope, s_ScopeSkipMemos& _ss, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type)
{
    const fu_STR& id_2 = node_1.value;
    bool shadow = false;
    fu_VEC<s_Target> result {};
    visitScope(_scope.items, shadow, id_2, _ss, result);
    if (node_1.flags & F_ACCESS)
    {
        visitTypes(module, shadow, id_2, _ss, result);
        each_pJzs(_scope.imports, _ss.imports, 0, 0, ctx, shadow, id_2, _ss, result);
    };
    if (!(result))
        fail((("No `fn "_fu + id_2) + "` in scope."_fu), _here, ctx, _info);

    s_Type type_3 = s_Type { s_ValueType { 0, 0, packAddrOfFn(result) }, s_Lifetime{} };
    return createEmpty("empty"_fu, type_3, s_Target{}, _current_fn_or_type, _scope, module);
}

static s_SolvedNode solveDeclExpr(const s_Node& node_1, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    return s_SolvedNode(only_e0l4(solveNodes((fu::slate<1, s_Node> { s_Node(node_1) }), s_Type{}, s_Type{}, bool{}, bool{}, -1, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions)));
}

static void walk(s_Node& node_3, const fu_STR& placeholder, const s_ScopeItem& field)
{
    for (int i = 0; i < node_3.items.size(); i++)
        walk(node_3.items.mutref(i), placeholder, field);

    if (node_3.value == placeholder)
    {
        if ((node_3.items.size() == 1) && (node_3.kind == "call"_fu))
            node_3.value = field.id;
        else if (node_3.kind == "str"_fu)
            node_3.value = field.id;

    };
}

inline static s_Node astReplace_nql8(const s_Node& node_2, int, const fu_STR& placeholder, const s_ScopeItem& field)
{
    s_Node node_3 { node_2 };
    walk(node_3, placeholder, field);
    return node_3;
}

static s_SolvedNode solveForFieldsOf(const s_Node& node_1, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    const fu_STR& placeholder = node_1.value;
    const s_Node& body_template = node_1.items[1];
    const s_Type& fields_of = SolvedNodeData(evalTypeAnnot(node_1.items[0], fu_MAP<fu_STR, s_TypeParam>{}, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions), _scope, module, ctx, _here, _info).type;
    if (!(isStruct(fields_of)))
        fail((("[for fieldname]: This is not a struct: `"_fu + serializeType(fields_of)) + "`."_fu), _here, ctx, _info);

    fu::view<s_ScopeItem> fields = lookupStruct(fields_of, module, ctx).items;
    fu_VEC<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        if (GET(target(field), _scope, module, ctx, _here, _info).kind == "field"_fu)
            items_ast += astReplace_nql8(body_template, 0, placeholder, field);

    };
    fu_VEC<s_SolvedNode> items_5 = solveNodes(items_ast, s_Type{}, s_Type{}, bool{}, true, -1, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    const s_Type& type_3 = (is_never(SolvedNodeData(last_e0l4(items_5), _scope, module, ctx, _here, _info).type) ? t_never : t_void);
    return createBlock(type_3, items_5, s_Target{}, _scope, module, ctx, _here, _info, _current_fn_or_type);
}

static s_SolvedNode solveNode(const s_Node& node_1, const s_Type& type_3, const bool deadcode_on_never, const int kills_1, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_convert_conversions)
{
    fu::view<std::byte> k = node_1.kind;
    if (k == "root"_fu)
        return solveRoot(node_1, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "block"_fu)
        return solveBlock(node_1, type_3, 0, HM_CanBreak, kills_1, fu_STR{}, 0, _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "argid"_fu)
        return solveArgID(node_1, type_3, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "let"_fu)
        return solveLet(node_1, s_Type{}, deadcode_on_never, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "call"_fu)
        return solveCall(node_1, s_Target{}, kills_1, _here, ctx, _info, _scope, _helpers, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "arrlit"_fu)
        return solveArrlit(node_1, type_3, module, ctx, _here, _info, _scope, _helpers, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "if"_fu)
        return solveIf(node_1, s_Type(type_3), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "or"_fu)
        return solveOr(node_1, s_Type(type_3), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "and"_fu)
        return solveAnd(node_1, s_Type(type_3), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "loop"_fu)
        return solveLoop(node_1, _scope, _helpers, _current_fn, module, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "break"_fu)
        return solveJump(node_1, kills_1, _helpers, _ss, _here, ctx, _info, _scope, module, _current_fn, _current_fn_or_type, _specs, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "return"_fu)
        return solveJump(node_1, kills_1, _helpers, _ss, _here, ctx, _info, _scope, module, _current_fn, _current_fn_or_type, _specs, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "continue"_fu)
        return solveJump(node_1, kills_1, _helpers, _ss, _here, ctx, _info, _scope, module, _current_fn, _current_fn_or_type, _specs, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "int"_fu)
        return solveInt(node_1, type_3, _here, ctx, _info, _current_fn_or_type, _scope, module);

    if (k == "real"_fu)
        return solveNum(node_1, type_3, _current_fn_or_type, _scope, module);

    if (k == "str"_fu)
        return solveStr(node_1, t_string, _current_fn_or_type, _scope, module);

    if (k == "char"_fu)
        return solveChar(node_1, _current_fn_or_type, _scope, module);

    if (k == "definit"_fu)
        return solveDefinit(type_3, _here, ctx, _info, _current_fn_or_type, _scope, module);

    if (k == "catch"_fu)
        return solveCatch(node_1, _here, ctx, _info, _scope, _helpers, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "import"_fu)
        return solveImport(node_1, ctx, _here, _info, _scope, _ss, _current_fn_or_type, module);

    if (k == "defer"_fu)
        return solveDefer(node_1, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "try"_fu)
        return solveTryCatch(node_1, _here, ctx, _info, _scope, _helpers, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "typedef"_fu)
        return solveTypedef(node_1, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "typeassert"_fu)
        return solveTypeAssert(node_1, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "typeparam"_fu)
        return solveTypeParam(node_1, _here, ctx, _info, module, _scope, _ss, _current_fn_or_type);

    if (k == "addroffn"_fu)
        return solveAddrOfFn(node_1, _scope, _ss, module, ctx, _here, _info, _current_fn_or_type);

    if (k == "fn"_fu)
        return solveDeclExpr(node_1, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "struct"_fu)
        return solveDeclExpr(node_1, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    if (k == "forfieldsof"_fu)
        return solveForFieldsOf(node_1, _scope, module, ctx, _here, _info, _current_fn_or_type, _helpers, _current_fn, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);

    fail(("TODO: "_fu + k), _here, ctx, _info);
}

s_SolverOutput solve(const s_Options& options, const s_Context& ctx, s_Module& module)
{
    const s_Node& parse_3 = module.in.parse.root;
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
    const s_Target MODULE_TOP = Scope_create(_scope, "_module_top_"_fu, fu_STR{}, s_Type{}, 0, 0, 0, fu_VEC<s_Argument>{}, s_SolvedNode{}, 0, 0u, fu_VEC<s_ScopeItem>{}, s_Template{}, 0, bool{}, module);
    _helpers += s_Helpers { s_Target(MODULE_TOP), "_module_top_"_fu, short(0), 0, 0, s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} };
    s_Target _current_fn_or_type { MODULE_TOP };
    fu_MAP<fu_STR, s_Target> _specs {};
    s_Type t_string = createArray(t_byte);
    fu_VEC<s_SolvedNode> TODO_FIX_convert_args {};
    fu_VEC<fu_VEC<s_Target>> TODO_FIX_convert_conversions {};
    if (module.modid)
    {
        _scope.imports += module.modid;
        _Scope_import__forceCopy(0, bool{}, ctx, _scope);
    }
    else
        _scope = listGlobals(module);

    const s_SolvedNode root_2 = solveNode(parse_3, s_Type{}, bool{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, _notes, t_string, _field_items, options, TODO_FIX_convert_args, TODO_FIX_convert_conversions);
    if (_current_fn)
        fail("non-empty _current_fn."_fu, _here, ctx, _info);

    return s_SolverOutput { s_SolvedNode(root_2), Scope_exports(_scope, module.modid, _field_items), int(_notes) };
}

#endif
