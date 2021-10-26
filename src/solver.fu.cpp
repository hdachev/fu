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
struct s_Events;
struct s_Extended;
struct s_Flow;
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
struct s_RWEvent;
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

[[noreturn]] static fu::never fail(fu_STR&&, const s_TokenIdx&, const s_Context&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, const s_Scope&, const s_Module&);
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
bool operator!=(const s_Region&, const s_Region&);
bool operator==(const s_Region&, const s_Region&);
bool operator==(const s_Target&, const s_Target&);
bool operator==(const s_Type&, const s_Type&);
bool operator>(const s_Region&, const s_Region&);
bool operator>=(const s_Region&, const s_Region&);
bool try_relax(s_Type&, const s_Type&);
bool type_has(const s_Type&, fu::view<std::byte>);
bool type_isAddrOfFn(const s_Type&);
const fu_STR& _fname(const s_TokenIdx&, const s_Context&);
const fu_VEC<int>& lookupTypeImports(const s_Type&, const s_Module&, const s_Context&);
const s_Struct& lookupStruct(const s_Type&, const s_Module&, const s_Context&);
const s_Struct& tryLookupStruct(const s_Type&, const s_Module&, const s_Context&);
const s_Token& _token(const s_TokenIdx&, const s_Context&);
fu_STR ClosureID(const s_Target&);
fu_STR formatCodeSnippet(const s_TokenIdx&, s_TokenIdx&&, int, const s_Context&);
fu_STR hash62(fu::view<std::byte>, int);
fu_STR humanizeType(const s_Type&);
fu_STR packAddrOfFn(fu::view<s_Target>);
fu_STR qBAD(const fu_STR&);
fu_STR qID(const fu_STR&);
fu_STR qKW(const fu_STR&);
fu_STR resolveFile_x(const fu_STR&, const s_Context&);
fu_STR serializeType(const s_Type&);
inline s_ScopeSkip& last_9II5(fu_VEC<s_ScopeSkip>&);
inline s_SolvedNode& last_hang(fu_VEC<s_SolvedNode>&);
int MODID(const s_Module&);
int Region_asIndex(const s_Region&);
int Region_toArgIndex(const s_Region&);
int Region_toLocalIndex(const s_Region&);
int compilerBreak();
int is_floating_pt(const s_Type&);
int is_integral(const s_Type&);
int is_rx_copy(const s_Type&);
int is_trivial(const s_Type&);
int parse10i32(int&, fu::view<std::byte>);
int popcount(const s_BitSet&);
s_BitSet ArgsAtRisk_listRiskFree(const s_Flow&, int);
s_Intlit Intlit(fu::view<std::byte>);
s_Lifetime Lifetime_inter(const s_Lifetime&, const s_Lifetime&);
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
s_Target Scope_Typedef(s_Scope&, const fu_STR&, const s_Type&, int, const fu_STR&, unsigned, const s_Module&);
s_Target Scope_create(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, const s_SolvedNode&, int, unsigned, bool, const s_Module&);
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
static bool lazySolveStart(const s_Target&, const s_Overload&, s_Scope&, s_Module&, s_TokenIdx&, const s_Context&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static const s_Extended& EXT(const s_Target&, const s_Module&, s_Scope&, const s_Context&);
static const s_Overload& GET(const s_Target&, const s_Scope&, const s_Module&, const s_Context&, const s_TokenIdx&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&);
static const s_Overload& fnd(int, const s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&);
static const s_SolvedNodeData& SolvedNodeData(const s_SolvedNode&, const s_Module&, s_Scope&, const s_Context&);
static const s_Type& Scope_lookupType(const s_Node&, const s_TokenIdx&, const s_Context&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, const s_Scope&, const s_Module&, s_ScopeSkipMemos&);
static s_Type T(int, const s_Node&, const fu_MAP<fu_STR, s_TypeParam>&, s_Module&, s_Scope&, const s_Context&, s_Target&, s_TokenIdx&, fu_VEC<s_Helpers>&, s_CurrentFn&, fu_VEC<s_Info>&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static fu_STR addr(const s_TokenIdx&, const s_Context&, const s_Module&);
static fu_STR human(const fu_STR&, const s_Module&, const s_Scope&, const s_Context&, const s_TokenIdx&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&);
static fu_STR name(int, const s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&);
static fu_VEC<s_SolvedNode> solveNodes(fu::view<s_Node>, const s_Type&, const s_Type&, bool, bool, bool, int, int, uint16_t, s_TokenIdx&, s_Scope&, fu_VEC<s_Helpers>&, s_Module&, s_CurrentFn&, const s_Context&, fu_VEC<s_Info>&, s_Target&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static s_Helpers& h(fu_VEC<s_Helpers>&, int);
static s_SolvedNode CallerNode(const fu_STR&, s_Target&&, fu_VEC<s_SolvedNode>&&, int, const fu_VEC<int>&, fu::view<fu_VEC<s_Target>>, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, s_Target&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, s_CurrentFn&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static s_SolvedNode createLet(const fu_STR&, int, const s_SolvedNode&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, const s_Options&, int&, s_Target&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, s_CurrentFn&, int&, const s_SolvedNode&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static s_SolvedNode evalTypeAnnot(const s_Node&, const fu_MAP<fu_STR, s_TypeParam>&, s_Module&, s_Scope&, const s_Context&, s_Target&, s_TokenIdx&, fu_VEC<s_Helpers>&, s_CurrentFn&, fu_VEC<s_Info>&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static s_SolvedNode solveArrlit(const s_Node&, const s_Type&, s_Module&, const s_Context&, s_TokenIdx&, s_Scope&, fu_VEC<s_Helpers>&, s_CurrentFn&, fu_VEC<s_Info>&, s_Target&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static s_SolvedNode solveBlock(const s_Node&, const s_Type&, int, short, int, const fu_STR&, int, s_Scope&, fu_VEC<s_Helpers>&, s_Module&, s_CurrentFn&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, s_Target&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static s_SolvedNode solveInt(const s_Node&, const s_Type&, const s_TokenIdx&, const s_Context&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, s_Scope&, const s_Module&, const s_Target&);
static s_SolvedNode solveLet(const s_Node&, const s_Type&, bool, s_Module&, s_Scope&, const s_Context&, s_Target&, s_TokenIdx&, fu_VEC<s_Helpers>&, s_CurrentFn&, fu_VEC<s_Info>&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static s_SolvedNode solveLetLike_dontTouchScope(const s_Node&, const s_Type&, bool, s_Module&, s_Scope&, const s_Context&, s_Target&, s_TokenIdx&, fu_VEC<s_Helpers>&, s_CurrentFn&, fu_VEC<s_Info>&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static s_SolvedNode solveNode(const s_Node&, const s_Type&, bool, int, uint16_t, s_TokenIdx&, s_Scope&, fu_VEC<s_Helpers>&, s_Module&, s_CurrentFn&, const s_Context&, fu_VEC<s_Info>&, s_Target&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static s_SolvedNode solveNum(const s_Node&, const s_Type&, const s_Target&, const s_Module&, s_Scope&);
static s_SolvedNode solveStr(const s_Node&, const s_Type&, const s_Target&, const s_Module&, s_Scope&);
static s_Target Binding(const fu_STR&, s_Type&&, int, bool&, const s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, s_ScopeMemo&, const s_ScopeSkipMemos&, fu_VEC<s_Helpers>&, const s_TokenIdx&, fu_VEC<s_Info>&);
static s_Target doTrySpecialize(const s_Target&, const s_Target&, fu::view<s_SolvedNode>, fu_STR&&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, int, const s_Type&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static s_Target tryMatch__mutargs(const s_Scope&, bool, fu_STR&&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu::view<s_SolvedNode>, int, const s_Target&, s_ScopeSkipMemos&, s_TokenIdx&, const s_Context&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, s_Scope&, s_Module&, fu_VEC<s_ScopeItem>&, fu_MAP<fu_STR, s_Target>&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_SolvedNode>&);
static s_Target trySpecialize(const s_Target&, fu::view<s_SolvedNode>, fu_STR&, int, const s_Type&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static s_Type solveArrlit_itemType(fu::view<s_SolvedNode>, s_Type&&, int, const s_TokenIdx&, const s_Context&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, s_Scope&, const s_Module&);
static void Lifetime_F_MOVED_FROM(const s_Lifetime&, const s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&);
static void Scope_import(int, bool, s_Scope&, const s_ScopeSkipMemos&, const s_TokenIdx&, const s_Context&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, const s_Module&);
static void descend(const s_Type&, bool, bool, bool, const s_Scope&, bool, s_ScopeSkipMemos&, fu_VEC<s_SolvedNode>&, s_Module&, s_Scope&, const s_Context&, s_CurrentFn&, s_TokenIdx&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, const s_SolvedNode&, s_Target&, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu_VEC<s_ScopeItem>&, fu_MAP<fu_STR, s_Target>&, s_ScopeMemo&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, const s_Type&, int, fu::view<s_ScopeSkip>);
static void maybeCopyOrMove(s_SolvedNode&, const s_Type&, bool, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, s_Target&, fu_MAP<fu_STR, s_Target>&, s_ScopeSkipMemos&, s_ScopeMemo&, s_CurrentFn&, int&, const s_SolvedNode&, const s_Options&, int&, const s_Type&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&);
static void solveLet(s_SolvedNode&, const fu_STR&, bool, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&, const s_Target&, s_CurrentFn&, s_ScopeMemo&, const s_ScopeSkipMemos&, const s_Options&);
static void trackReadWrite(const s_SolvedNode&, const s_Target&, const fu_STR&, const s_Module&, s_Scope&, const s_Context&, s_CurrentFn&, const s_TokenIdx&, const s_Options&, fu_VEC<s_Info>&, fu_VEC<s_Helpers>&);
void ArgsAtRisk_shake(s_Flow&);
void Reference_trackArgument(s_Flow&, int, int);
void Reference_trackLocalRef(s_Flow&, int, const s_Lifetime&);
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

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_STR kind;
    fu_STR name;
    s_Type type;
    int flags;
    s_SolvedNode solved;
    fu_VEC<s_SolvedNode> callsites;
    unsigned status;
    int local_of;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || type
            || flags
            || solved
            || callsites
            || status
            || local_of
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

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu_STR name;
    fu_STR autocall;
    s_Type type;
    s_SolvedNode dEfault;
    int flags;
    s_BitSet risk_free;
    s_Target written_via;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || risk_free
            || written_via
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

                                #ifndef DEF_s_Extended
                                #define DEF_s_Extended
struct s_Extended
{
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Target spec_of;
    s_Template tEmplate;
    fu_VEC<s_SolvedNodeData> nodes;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_ScopeItem> extra_items;
    explicit operator bool() const noexcept
    {
        return false
            || min
            || max
            || args
            || spec_of
            || tEmplate
            || nodes
            || locals
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
    fu_VEC<s_Extended> extended;
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
            || extended
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
    unsigned dev;
    explicit operator bool() const noexcept
    {
        return false
            || lint
            || break_notes
            || dev
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

                                #ifndef DEF_s_Flow
                                #define DEF_s_Flow
struct s_Flow
{
    fu_VEC<fu_VEC<int>> invalidates;
    s_BitSet is_arg;
    fu_VEC<int> arg_targets;
    fu_VEC<int> arg_positions;
    fu_VEC<fu_VEC<int>> arg_aliases;
    fu_VEC<fu_VEC<int>> args_at_risk;
    explicit operator bool() const noexcept
    {
        return false
            || invalidates
            || is_arg
            || arg_targets
            || arg_positions
            || arg_aliases
            || args_at_risk
        ;
    }
};
                                #endif

                                #ifndef DEF_s_RWEvent
                                #define DEF_s_RWEvent
struct s_RWEvent
{
    int target;
    int nodeidx;
    s_TokenIdx token;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || nodeidx
            || token
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Events
                                #define DEF_s_Events
struct s_Events
{
    fu_VEC<s_RWEvent> invalidated_by;
    fu_VEC<s_RWEvent> used_in_a_loop;
    fu_VEC<int> args_written;
    fu_VEC<int> args_in_a_loop;
    fu_VEC<s_Target> args_written_via;
    explicit operator bool() const noexcept
    {
        return false
            || invalidated_by
            || used_in_a_loop
            || args_written
            || args_in_a_loop
            || args_written_via
        ;
    }
};
                                #endif

                                #ifndef DEF_s_CurrentFn
                                #define DEF_s_CurrentFn
struct s_CurrentFn
{
    s_SolvedNode out;
    s_Flow flow;
    s_Events events;
    int loop_start;
    explicit operator bool() const noexcept
    {
        return false
            || out
            || flow
            || events
            || loop_start
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
    int locals_start;
    s_Type ret_expect;
    s_Type ret_actual;
    fu_VEC<s_SolvedNode> returns;
    fu_VEC<int> vars;
    s_Events on_exit;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || id
            || mask
            || local_of
            || kills
            || locals_start
            || ret_expect
            || ret_actual
            || returns
            || vars
            || on_exit
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

                                #ifndef DEF_N_DeadArrlit
                                #define DEF_N_DeadArrlit
inline constexpr int N_DeadArrlit = (1 << 11);
                                #endif

                                #ifndef DEF_N_NonTrivAutoCopy
                                #define DEF_N_NonTrivAutoCopy
inline constexpr int N_NonTrivAutoCopy = (1 << 12);
                                #endif

                                #ifndef DEF_N_RelaxRespec
                                #define DEF_N_RelaxRespec
inline constexpr int N_RelaxRespec = (1 << 13);
                                #endif

static const bool OPTI_autoshadow = true;

static const bool OPTI_dedupe_vars = true;

static const bool OPTI_flatten_blocks = true;

static const bool USE_nontriv_autocopy = true;

static const bool USE_ref_to_mutref = true;

static const bool SELF_TEST = true;

static const bool CANNOT_definit_mutrefs = true;

static const uint16_t M_WILL_RETYPE = (uint16_t(1) << uint16_t(0u));

extern const s_Type t_byte;

                                #ifndef DEFt_grow_if_oob_RnoK
                                #define DEFt_grow_if_oob_RnoK
inline s_Extended& grow_if_oob_RnoK(fu_VEC<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static s_Extended& EXT_mut(const s_Target& target_6, const s_Module& module, s_Scope& _scope)
{
    if (!(target_6.modid == module.modid))
        fu_ASSERT();

    return grow_if_oob_RnoK(_scope.extended, (target_6.index - 1));
}

static s_SolvedNode SolvedNode(const fu_STR& kind_3, const s_Type& type_3, const int flags_4, const fu_STR& value_3, const fu_VEC<s_SolvedNode>& items_5, const s_Target& target_6, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    s_SolvedNodeData data = s_SolvedNodeData { fu_STR(kind_3), int(flags_4), fu_STR(value_3), fu_VEC<s_SolvedNode>(items_5), s_Type(type_3), s_Target(target_6) };
    const s_Target& nodeown_1 = _current_fn_or_type;
    fu_VEC<s_SolvedNodeData>& nodes_1 = EXT_mut(nodeown_1, module, _scope).nodes;
    const int nodeidx_2 = nodes_1.size();
    nodes_1 += data;
    return s_SolvedNode { s_Target(nodeown_1), int(nodeidx_2) };
}

static void _Scope_import__forceCopy(const int modid_5, const bool pRivate, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid_5].out.solve.scope;
    _scope.items += fu::get_view(s.items, 0, (pRivate ? s.items.size() : int(s.pub_count)));
}

static const s_TokenIdx& HERE(const s_Node& node_1, s_TokenIdx& _here)
{
    return node_1.token ? (_here = node_1.token) : (*(const s_TokenIdx*)fu::NIL);
}

static s_SolvedNode solved(const s_Node& node_1, const s_Type& type_3, const fu_VEC<s_SolvedNode>& items_5, const s_Target& target_6, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode(node_1.kind, type_3, node_1.flags, node_1.value, items_5, target_6, _current_fn_or_type, module, _scope);
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

                                #ifndef DEFt_unless_oob_FHbA
                                #define DEFt_unless_oob_FHbA
inline const s_Extended& unless_oob_FHbA(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT(const s_Target& target_6, const s_Module& module, s_Scope& _scope, const s_Context& ctx)
{
    if (target_6.modid == module.modid)
        return grow_if_oob_RnoK(_scope.extended, (target_6.index - 1));

    return (target_6.modid >= 0) ? unless_oob_FHbA(ctx.modules[target_6.modid].out.solve.scope.extended, (target_6.index - 1)) : (*(const s_Extended*)fu::NIL);
}

static const s_SolvedNodeData& SolvedNodeData(const s_SolvedNode& nid, const s_Module& module, s_Scope& _scope, const s_Context& ctx)
{
    return nid.nodeown ? EXT(nid.nodeown, module, _scope, ctx).nodes[nid.nodeidx] : (*(const s_SolvedNodeData*)fu::NIL);
}

static int GET_next_local_index(const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx)
{
    return SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index ? (_scope.extended[(SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index - 1)].locals.size() + 1) : int{};
}

                                #ifndef DEFt_steal_Ne2Q
                                #define DEFt_steal_Ne2Q
inline fu_VEC<int> steal_Ne2Q(fu_VEC<int>& a, const int start_1, const int end_1)
{
    const int size = (end_1 - start_1);
    fu_VEC<int> ret {};
    ret.resize(size);
    for (int i = 0; i < size; i++)
        std::swap(ret.mutref(i), a.mutref((i + start_1)));

    a.splice(start_1, size);
    return ret;
}
                                #endif

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

                                #ifndef DEF_HM_Struct
                                #define DEF_HM_Struct
inline constexpr short HM_Struct = (short(1) << short(5));
                                #endif

static bool isFnOrType(const s_Helpers& h)
{
    return !!(h.mask & (HM_Function | HM_Struct));
}

static const s_Overload& GET(const s_Target& target_6, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    if (target_6.modid < 0)
        return _scope.extended[(-target_6.modid - 1)].locals[(target_6.index - 1)];

    if (target_6.modid == module.modid)
        return _scope.overloads[(target_6.index - 1)];

    const s_Overload& o = ctx.modules[target_6.modid].out.solve.scope.overloads[(target_6.index - 1)];
    if (o.local_of)
        fail((((("Working with locals from other modules would "_fu + "prevent bucketing overloads within other overloads: "_fu) + o.kind) + " "_fu) + o.name), _here, ctx, _info, _helpers, _scope, module);

    return o;
}

[[noreturn]] static fu::never fail(fu_STR&& reason, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module)
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
    int callstack = 0;
    for (int i_1 = _helpers.size(); i_1-- > 0; )
    {
        const s_Helpers& h = _helpers[i_1];
        if (isFnOrType(h))
        {
            if (!callstack++)
                reason += "\n\n        Solving "_fu;
            else
                reason += "\n                "_fu;

            const s_Overload& o = GET(h.target, _scope, module, ctx, _here, _info, _helpers);
            reason += ((qKW(o.kind) + " "_fu) + qID(o.name));
        };
    };
    reason += std::byte('\n');
    fu_STR snippet = formatCodeSnippet(_here, s_TokenIdx{}, 2, ctx);
    fu::fail(((((((fname_1 + " "_fu) + addr) + ":\n\n"_fu) + snippet) + "\n\t"_fu) + reason));
}

static void checkAssignable(const s_Type& host, const s_Type& guest, fu::view<std::byte> err, const fu_STR& id_2, const fu_STR& sep, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module)
{
    if (!(isAssignable((host ? host : fail("Bad host type."_fu, _here, ctx, _info, _helpers, _scope, module)), (guest ? guest : fail("Bad guest type."_fu, _here, ctx, _info, _helpers, _scope, module)))))
        fail((((((err + (id_2 ? ((" `"_fu + id_2) + "`"_fu) : fu_STR{})) + ": "_fu) + humanizeType(host)) + (sep ? fu_STR(sep) : " <- "_fu)) + humanizeType(guest)), _here, ctx, _info, _helpers, _scope, module);

}

static fu_STR human(const fu_STR& id_2, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    const s_Target t = tryParseClosureID(id_2, MODID(module));
    return (t ? ((GET(s_Target { int(module.modid), int(GET(t, _scope, module, ctx, _here, _info, _helpers).local_of) }, _scope, module, ctx, _here, _info, _helpers).name + ":"_fu) + GET(t, _scope, module, ctx, _here, _info, _helpers).name) : fu_STR(id_2));
}

static s_Type superType(fu::view<std::byte> reason, const s_Type& a, const s_Type& b, const fu_STR& id_2, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    s_Type _0 {};
    return (_0 = type_trySuper(a, b)) ? static_cast<s_Type&&>(_0) : fail((((((((id_2 ? (("`"_fu + human(id_2, module, _scope, ctx, _here, _info, _helpers)) + "`: "_fu) : fu_STR{}) + reason) + "No common supertype: `"_fu) + serializeType(a)) + "` | `"_fu) + serializeType(b)) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);
}

static void reportReturnType(const int helpers_idx, const s_Type& type_3, fu_VEC<s_Helpers>& _helpers, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, const s_Scope& _scope, const s_Module& module)
{
    s_Helpers& h = _helpers.mutref(helpers_idx);
    if (h.ret_expect && (h.mask & HM_Function))
        checkAssignable(s_Type(h.ret_expect), type_3, "Expression not assignable to return annotation"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _info, _helpers, _scope, module);

    h.ret_actual = (h.ret_actual ? superType("Subsequent return: "_fu, s_Type(h.ret_actual), type_3, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _info, _helpers) : s_Type(type_3));
    if (!(h.ret_actual))
        fail("Can't be null past this point."_fu, _here, ctx, _info, _helpers, _scope, module);

}

                                #ifndef DEFt_last_r7yd
                                #define DEFt_last_r7yd
inline const s_SolvedNode& last_r7yd(fu::view<s_SolvedNode> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEFt_only_e0l4
                                #define DEFt_only_e0l4
inline const s_SolvedNode& only_e0l4(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_SolvedNodeData& MUT(const s_SolvedNode& nid, const s_Module& module, const s_Target& _current_fn_or_type, s_Scope& _scope, const s_Context& ctx)
{
    if (nid.nodeown.modid != module.modid)
    {
        s_SolvedNode t = SolvedNode((*(const fu_STR*)fu::NIL), s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);
        return (MUT(t, module, _current_fn_or_type, _scope, ctx) = SolvedNodeData(nid, module, _scope, ctx));
    };
    return EXT_mut(nid.nodeown, module, _scope).nodes.mutref(nid.nodeidx);
}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

static fu::view<s_SolvedNode> arg_lets(const s_Overload& overload, const s_Module& module, s_Scope& _scope, const s_Context& ctx)
{
    return fu::get_view(SolvedNodeData(overload.solved, module, _scope, ctx).items, 0, (SolvedNodeData(overload.solved, module, _scope, ctx).items.size() + FN_RET_BACK));
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

static fu_STR mangleArguments(fu::view<s_SolvedNode> args_1, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
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
            mangle += serializeType(GET(last_mnBR(conversions[i]), _scope, module, ctx, _here, _info, _helpers).type);
        else if ((callsiteIndex >= 0) && (callsiteIndex <= args_1.size()))
            mangle += serializeType(SolvedNodeData(args_1[callsiteIndex], module, _scope, ctx).type);

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

                                #ifndef DEFt_unpackAddrOfFn_zqro
                                #define DEFt_unpackAddrOfFn_zqro
inline void unpackAddrOfFn_zqro(fu::view<std::byte> canon_1, int, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Template& template_1, int& parent_idx)
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
        const s_Target target_6 = s_Target { int(modid_5), int(index_2) };
        if ((target_6.modid < 0) || (target_6.modid == module.modid))
        {
            const s_Overload& overload = GET(target_6, _scope, module, ctx, _here, _info, _helpers);
            if (overload.flags & F_SPREAD_INLINE)
                template_1.node.flags |= F_INLINE;

            const int local_of_2 = overload.local_of;
            if (parent_idx < local_of_2)
                parent_idx = local_of_2;

        };
    };
}
                                #endif

static bool is_SPECFAIL(const s_Target& target_6)
{
    return target_6.modid == 2147483647;
}

inline static fu_STR id_TesV(const s_Target& target_7, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    return (is_SPECFAIL(target_7) ? "SPEC_FAIL"_fu : (("`"_fu + GET(target_7, _scope, module, ctx, _here, _info, _helpers).name) + "`"_fu));
}

inline static fu_STR id_xKN9(const s_Target& target_7, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    return (is_SPECFAIL(target_7) ? "SPEC_FAIL"_fu : (("`"_fu + GET(target_7, _scope, module, ctx, _here, _info, _helpers).name) + "`"_fu));
}

static void setSpec(const fu_STR& mangle_1, const s_Target& target_6, const bool nx, const bool isInline, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module, fu_MAP<fu_STR, s_Target>& _specs)
{
    if (isInline)
        fail("inline.setSpec"_fu, _here, ctx, _info, _helpers, _scope, module);

    s_Target* _0;
    s_Target& t = (*(_0 = &(_specs.upsert(mangle_1))) ? *_0 : *_0 = s_Target{});
    if (!((!t && nx) || (is_SPECFAIL(t) && !nx)))
        fail(((((((((("About to screw up royally, replacing spec: "_fu + t.index) + " with "_fu) + target_6.index) + ", mangle: "_fu) + mangle_1) + ", that's: "_fu) + id_TesV(t, _scope, module, ctx, _here, _info, _helpers)) + " becoming "_fu) + id_xKN9(target_6, _scope, module, ctx, _here, _info, _helpers)), _here, ctx, _info, _helpers, _scope, module);

    t = target_6;
}

                                #ifndef DEFt_last_dDmM
                                #define DEFt_last_dDmM
inline s_Helpers& last_dDmM(fu_VEC<s_Helpers>& s)
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

static void ScopeSkip_push(fu_VEC<s_ScopeSkip>& scope_skip_1, const int start_1, const int end_1, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module)
{
    if (!((start_1 <= end_1)))
        fail("ScopeSkip_push: bad args."_fu, _here, ctx, _info, _helpers, _scope, module);

    if (end_1 == start_1)
        return;

    const s_ScopeSkip& last_1 = if_last_9II5(scope_skip_1);
    if (!((last_1.end <= start_1)))
        fail("ScopeSkip_push: last.end > start."_fu, _here, ctx, _info, _helpers, _scope, module);

    if (scope_skip_1 && (last_1.end == start_1))
        last_9II5(scope_skip_1).end = end_1;
    else
        scope_skip_1 += s_ScopeSkip { int(start_1), int(end_1) };

}

static void Scope_import(const int modid_5, const bool pRivate, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Module& module)
{

    {
        const fu_VEC<int>& items_5 = _scope.imports;
        const fu_VEC<s_ScopeSkip>& scope_skip_1 = _ss.imports;
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
        fail("Attempting to import modid-0."_fu, _here, ctx, _info, _helpers, _scope, module);

    _scope.imports += modid_5;
    _Scope_import__forceCopy(modid_5, pRivate, ctx, _scope);
}

static void ScopeSkip_setup(const s_Template& template_1, const s_ScopeMemo& scope0, const bool isInline, s_ScopeMemo& _root_scope, s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, const s_Module& module)
{
    if (_root_scope)
    {
        const s_ScopeMemo& start_1 = (template_1.scope_memo ? template_1.scope_memo : _root_scope);
        _ss = template_1.scope_skip;
        ScopeSkip_push(_ss.items, start_1.items_len, scope0.items_len, _here, ctx, _info, _helpers, _scope, module);
        if (!isInline)
            ScopeSkip_push(_ss.declash, start_1.items_len, scope0.items_len, _here, ctx, _info, _helpers, _scope, module);

        ScopeSkip_push(_ss.imports, start_1.imports_len, scope0.imports_len, _here, ctx, _info, _helpers, _scope, module);
        ScopeSkip_push(_ss.usings, start_1.usings_len, scope0.usings_len, _here, ctx, _info, _helpers, _scope, module);
        ScopeSkip_push(_ss.converts, start_1.converts_len, scope0.converts_len, _here, ctx, _info, _helpers, _scope, module);
        ScopeSkip_push(_ss.helpers, start_1.helpers_len, scope0.helpers_len, _here, ctx, _info, _helpers, _scope, module);
    };
    for (int i = 0; i < template_1.imports.size(); i++)
        Scope_import(template_1.imports[i], (i == 0), _scope, _ss, _here, ctx, _info, _helpers, module);

}

                                #ifndef DEFt_has_2vji
                                #define DEFt_has_2vji
inline bool has_2vji(const fu_VEC<int>& a, const int b)
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

static bool couldRetype(const s_SolvedNode& node_1, const s_Module& module, s_Scope& _scope, const s_Context& ctx)
{
    return (SolvedNodeData(node_1, module, _scope, ctx).kind == "int"_fu) || (SolvedNodeData(node_1, module, _scope, ctx).kind == "real"_fu) || (SolvedNodeData(node_1, module, _scope, ctx).kind == "definit"_fu);
}

                                #ifndef DEF_F_COMPOUND_ID
                                #define DEF_F_COMPOUND_ID
inline constexpr int F_COMPOUND_ID = (1 << 6);
                                #endif

                                #ifndef DEFt_find_ajCN
                                #define DEFt_find_ajCN
inline int find_ajCN(const fu_STR& a, const std::byte b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static const s_Module& findModule(const fu_STR& fuzimport, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module)
{
    fu_STR fname_1 = resolveFile_x(fuzimport, ctx);
    fu::view<s_Module> modules_1 = ctx.modules;
    for (int i = 1; i < modules_1.size(); i++)
    {
        const s_Module& m = modules_1[i];
        if (m.fname == fname_1)
            return m;

    };
    fail(("Cannot locate: "_fu + fname_1), _here, ctx, _info, _helpers, _scope, module);
}

static const s_Scope& dequalify_andGetScope(fu_STR& id_2, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module)
{
    const int split_1 = find_ajCN(id_2, std::byte('\t'));
    if (!((split_1 >= 0)))
        fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module);

    fu_STR fname_1 = fu::slice(id_2, 0, split_1);
    id_2 = fu::slice(id_2, (split_1 + 1));
    const s_Module& other = findModule(fname_1, ctx, _here, _info, _helpers, _scope, module);
    if (other.modid != module.modid)
        return other.out.solve.scope;

    return _scope;
}

static const s_Type& Scope_lookupType(fu_STR&& id_2, const int flags_4, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module, s_ScopeSkipMemos& _ss)
{
    int scope_iterator {};
    s_Target overloadIdx {};
    bool shadows {};
    const int qualified = (flags_4 & F_COMPOUND_ID);
    const s_Scope& scope_1 = (qualified ? dequalify_andGetScope(id_2, _here, ctx, _info, _helpers, _scope, module) : _scope);
    while ((overloadIdx = search(scope_1.items, id_2, scope_iterator, (!qualified ? _ss.items : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL)), shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
    {
        const s_Overload& maybe = GET(overloadIdx, _scope, module, ctx, _here, _info, _helpers);
        if (maybe.kind == "type"_fu)
            return maybe.type ? maybe.type : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module);

    };
    fail((("No type `"_fu + id_2) + "` in scope."_fu), _here, ctx, _info, _helpers, _scope, module);
}

static const s_Type& Scope_lookupType(const s_Node& annot, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module, s_ScopeSkipMemos& _ss)
{
    return Scope_lookupType(fu_STR(annot.value), annot.flags, _here, ctx, _info, _helpers, _scope, module, _ss);
}

                                #ifndef DEF_q_arithmetic
                                #define DEF_q_arithmetic
inline constexpr int q_arithmetic = (1 << 5);
                                #endif

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

static const s_Type& solveInt(fu::view<std::byte> v, const s_Type& type_3, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module)
{
    s_Intlit parse_4 = Intlit(v);
    if (parse_4.error)
        fail(fu_STR(parse_4.error), _here, ctx, _info, _helpers, _scope, module);

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
    fail("Bad int literal."_fu, _here, ctx, _info, _helpers, _scope, module);
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

static s_Type trySolveDefinit(const s_Type& type_3, const uint16_t mode, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module)
{
    if (!type_3)
    {
        if (mode & M_WILL_RETYPE)
            return s_Type(t_void);

        fail("Cannot solve definit, no inferred type."_fu, _here, ctx, _info, _helpers, _scope, module);
    };
    if (CANNOT_definit_mutrefs && is_mutref(type_3))
        return clear_mutref(s_Type(type_3));

    return s_Type(type_3);
}

static s_Type tryRetyping(const s_SolvedNode& node_1, const s_Type& expect, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    if ((SolvedNodeData(node_1, module, _scope, ctx).type.vtype.quals & expect.vtype.quals) & q_arithmetic)
    {
        if (SolvedNodeData(node_1, module, _scope, ctx).kind == "int"_fu)
            return s_Type(solveInt(SolvedNodeData(node_1, module, _scope, ctx).value, expect, _here, ctx, _info, _helpers, _scope, module));

        if (SolvedNodeData(node_1, module, _scope, ctx).kind == "real"_fu)
            return s_Type(solveNum(SolvedNodeData(node_1, module, _scope, ctx).value, expect));

    };
    if (SolvedNodeData(node_1, module, _scope, ctx).kind == "definit"_fu)
        return trySolveDefinit(expect, uint16_t(0u), _here, ctx, _info, _helpers, _scope, module);

    return s_Type{};
}

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline constexpr int F_MUT = (1 << 16);
                                #endif

static bool trySolveTypeParams(const s_Node& node_1, s_Type&& type_3, fu_MAP<fu_STR, s_TypeParam>& typeParams, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module, s_ScopeSkipMemos& _ss)
{
    if (node_1.kind == "call"_fu)
    {
        fu::view<s_Node> items_5 = node_1.items;
        if (items_5.size())
        {
            if (items_5.size() == 1)
            {
                s_Type t = ((node_1.value == "&"_fu) ? tryClear_ref(type_3) : ((node_1.value == "&mut"_fu) ? tryClear_mutref(type_3) : ((node_1.value == "[]"_fu) ? tryClear_array(type_3) : fail("TODO trySolveTypeParams unary call"_fu, _here, ctx, _info, _helpers, _scope, module))));
                if (!t)
                    return false;

                const s_Node* _0;
                return trySolveTypeParams((*(_0 = &(items_5[0])) ? *_0 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module)), s_Type(t), typeParams, _here, ctx, _info, _helpers, _scope, module, _ss);
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
                    return trySolveTypeParams((*(_1 = &(items_5[0])) ? *_1 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module)), s_Type(kv.key), typeParams, _here, ctx, _info, _helpers, _scope, module, _ss) && trySolveTypeParams((*(_2 = &(items_5[1])) ? *_2 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module)), s_Type(kv.value), typeParams, _here, ctx, _info, _helpers, _scope, module, _ss);
                };
            };
        }
        else
            return isAssignable(Scope_lookupType(node_1, _here, ctx, _info, _helpers, _scope, module, _ss), type_3);

    }
    else if (node_1.kind == "typeparam"_fu)
    {
        const fu_STR& id_2 = (node_1.value ? node_1.value : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
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
        return t && trySolveTypeParams((*(_4 = &(node_1.items[0])) ? *_4 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module)), s_Type(t), typeParams, _here, ctx, _info, _helpers, _scope, module, _ss);
    };
    fail("TODO trySolveTypeParams fallthrough"_fu, _here, ctx, _info, _helpers, _scope, module);
}

inline static fu_STR mangleArguments_AfYs(const fu_VEC<s_Type>& args_1)
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

static const s_Type& evalTypeParam(const fu_STR& id_2, const fu_MAP<fu_STR, s_TypeParam>& typeParams, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module, s_ScopeSkipMemos& _ss)
{
    const s_Type* _0;
    return *(_0 = &(typeParams[id_2].matched)) ? *_0 : *(_0 = &(Scope_lookupType(("$"_fu + (id_2 ? id_2 : fail("Falsy type param id."_fu, _here, ctx, _info, _helpers, _scope, module))), 0, _here, ctx, _info, _helpers, _scope, module, _ss))) ? *_0 : fail((("No type param `$"_fu + id_2) + "` in scope."_fu), _here, ctx, _info, _helpers, _scope, module);
}

static s_Type T(const int i, const s_Node& node_1, const fu_MAP<fu_STR, s_TypeParam>& typeParams, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    return SolvedNodeData(evalTypeAnnot(node_1.items[i], typeParams, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args), module, _scope, ctx).type;
}

static void makeNote(const int note, const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module, int& _notes)
{
    if (note & options.break_notes)
        fail((("`break_notes`: Unwanted event: `"_fu + note) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

    _notes |= note;
}

                                #ifndef DEFt_last_e0l4
                                #define DEFt_last_e0l4
inline const s_SolvedNode& last_e0l4(fu::view<s_SolvedNode> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode createBlock(const s_Type& type_3, const fu_VEC<s_SolvedNode>& items_5, const s_Target& label, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_Target& _current_fn_or_type)
{
    if (!label && items_5.size())
    {
        bool ok = true;
        for (int i = 0; i < (items_5.size() - 1); i++)
        {
            if (SolvedNodeData(items_5[i], module, _scope, ctx).kind != "empty"_fu)
            {
                ok = false;
                break;
            };
        };
        if (ok)
            return s_SolvedNode(last_e0l4(items_5));

    };
    return SolvedNode("block"_fu, type_3, 0, (*(const fu_STR*)fu::NIL), items_5, label, _current_fn_or_type, module, _scope);
}

                                #ifndef DEFt_each_olub
                                #define DEFt_each_olub
inline void each_olub(fu::view<s_Target> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, int& count, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module)
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
                fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module);

        };
        i0 = ss.end;
    };
}
                                #endif

static int countUsings(const s_Scope& scope_1, const bool local_scope, s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module)
{
    fu::view<s_ScopeSkip> scope_skip_1 = (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{});
    int count = 0;
    each_olub(scope_1.usings, scope_skip_1, 0, 0, count, _here, ctx, _info, _helpers, _scope, module);
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

                                #ifndef DEFt_each_FT5w
                                #define DEFt_each_FT5w
inline void each_FT5w(fu::view<int> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, s_BitSet& seen)
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

static void visitTypeImports(const s_Type& type_3, const s_Module& module, const s_Context& ctx, s_BitSet& seen, const s_Scope& scope_1, const bool local_scope, s_ScopeSkipMemos& _ss, fu::view<std::byte> id_2, fu_VEC<s_Target>& extra_items_1)
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
            each_FT5w(scope_1.imports, (local_scope ? _ss.imports : fu::view<s_ScopeSkip>{}), 0, 0, seen);
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

                                #ifndef DEFt_each_1UX3
                                #define DEFt_each_1UX3
inline void each_1UX3(fu::view<s_Target> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_BitSet& seen, const s_Scope& scope_1, const bool local_scope, s_ScopeSkipMemos& _ss, fu::view<std::byte> id_2, fu_VEC<s_Target>& extra_items_1)
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
            visitTypeImports(GET(u, _scope, module, ctx, _here, _info, _helpers).type, module, ctx, seen, scope_1, local_scope, _ss, id_2, extra_items_1);
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

static s_Overload& GET_mut(const s_Target& target_6, s_Scope& _scope, const s_Module& module)
{
    if (target_6.modid < 0)
        return _scope.extended.mutref((-target_6.modid - 1)).locals.mutref((target_6.index - 1));

    if (!((target_6.index > 0) && (target_6.modid == MODID(module))))
        fu_ASSERT();

    return _scope.overloads.mutref((target_6.index - 1));
}

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline constexpr unsigned SS_FINALIZED = (0x1u << 3u);
                                #endif

                                #ifndef DEF_SS_DIRTY
                                #define DEF_SS_DIRTY
inline constexpr unsigned SS_DIRTY = (0x1u << 2u);
                                #endif

static s_Template createTemplate(const s_Node& node_1, s_CurrentFn& _current_fn, s_Scope& _scope, fu::view<s_Helpers> _helpers, s_ScopeSkipMemos& _ss)
{
    return s_Template { s_Node(node_1), fu_VEC<int>((!_current_fn ? _scope.imports : (*(const fu_VEC<int>*)fu::NIL))), (_current_fn ? Scope_snap(_scope, _helpers) : s_ScopeMemo{}), s_ScopeSkipMemos((_current_fn ? _ss : (*(const s_ScopeSkipMemos*)fu::NIL))) };
}

                                #ifndef DEF_F_REF
                                #define DEF_F_REF
inline constexpr int F_REF = (1 << 22);
                                #endif

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline constexpr int F_ARG = (1 << 9);
                                #endif

static s_SolvedNode solveLetLike_dontTouchScope(const fu_STR& id_2, int flags_4, s_SolvedNode&& init, s_Type&& annot, const s_Type& specType, const bool deadcode_on_never, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Options& options, int& _notes, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    if (!(annot || SolvedNodeData(init, module, _scope, ctx).type))
        fail((("Variable declarations without type annotations must be initialized: `"_fu + id_2) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

    if (annot && SolvedNodeData(init, module, _scope, ctx).type)
    {
        if (specType)
        {
            if (is_mutref(specType) && !is_mutref(SolvedNodeData(init, module, _scope, ctx).type))
                annot = clear_mutref(s_Type(annot));

            if (!isAssignable(annot, SolvedNodeData(init, module, _scope, ctx).type))
                init = s_SolvedNode{};

        };
        if (SolvedNodeData(init, module, _scope, ctx).type)
            checkAssignable(annot, SolvedNodeData(init, module, _scope, ctx).type, "Type annotation does not match init expression"_fu, id_2, "="_fu, _here, ctx, _info, _helpers, _scope, module);

    };
    const s_Type& t_init = SolvedNodeData(init, module, _scope, ctx).type;
    const bool killref = is_ref2temp(t_init);
    if (deadcode_on_never && is_never(t_init))
    {
        makeNote(N_DeadLet, options, _here, ctx, _info, _helpers, _scope, module, _notes);
        return s_SolvedNode(init);
    };
    if (is_mutref(annot))
        flags_4 |= F_REF;

    if (flags_4 & F_REF)
    {
        if (!(is_mutref(t_init) || (is_never(t_init) && annot) || (!init && (flags_4 & F_ARG))))
            fail(((("`ref` variables must be initialized to a mutable reference: `"_fu + id_2) + "`"_fu) + (t_init ? (" = "_fu + humanizeType(t_init)) : "."_fu)), _here, ctx, _info, _helpers, _scope, module);

        if (killref)
            fail("`ref` varibles cannot bind to temporaries."_fu, _here, ctx, _info, _helpers, _scope, module);

    };
    s_Type t_let = ((annot && ((flags_4 & (F_ARG | F_MUT)) || !t_init)) ? (((flags_4 & F_ARG) && !(flags_4 & F_MUT)) ? add_ref(s_Type(annot), Lifetime_temporary()) : s_Type(annot)) : ((is_mutref(t_init) || (flags_4 & F_MUT) || killref) ? (((flags_4 & F_REF) && (!killref || fail("redundant, see above, refs cant bind to temps"_fu, _here, ctx, _info, _helpers, _scope, module))) ? s_Type(t_init) : ((USE_ref_to_mutref && !(flags_4 & F_MUT) && !killref) ? clear_mutref(s_Type(t_init)) : clear_refs(s_Type(t_init)))) : (((flags_4 & F_ARG) && !(flags_4 & F_MUT)) ? add_ref(s_Type(t_init), Lifetime_temporary()) : s_Type(t_init))));
    if (is_mutref(t_let))
        flags_4 |= F_REF;

    if (init)
    {
        maybeCopyOrMove(init, t_let, false, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
        if (t_let.lifetime && !(flags_4 & F_ARG))
        {
            const s_Lifetime* _0;
            t_let.lifetime = (*(_0 = &(SolvedNodeData(init, module, _scope, ctx).type.lifetime)) ? *_0 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
        };
    };
    return SolvedNode("let"_fu, t_let, flags_4, id_2, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveLetLike_dontTouchScope(const s_Node& node_1, const s_Type& specType, const bool deadcode_on_never, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    const s_Node& n_annot = node_1.items[LET_TYPE];
    s_Type annot { (specType ? specType : (n_annot ? SolvedNodeData(evalTypeAnnot(n_annot, (*(const fu_MAP<fu_STR, s_TypeParam>*)fu::NIL), module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args), module, _scope, ctx).type : (*(const s_Type*)fu::NIL))) };
    if (annot && (node_1.flags & F_REF))
        annot = add_mutref(s_Type(annot), Lifetime_temporary());

    const s_Node& n_init = node_1.items[LET_INIT];
    const s_SolvedNode init = (n_init ? solveNode(n_init, annot, bool{}, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args) : s_SolvedNode{});
    return solveLetLike_dontTouchScope(node_1.value, int(node_1.flags), s_SolvedNode(init), s_Type(annot), specType, deadcode_on_never, module, _scope, ctx, _here, _info, _helpers, options, _notes, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, t_string, _field_items, TODO_FIX_convert_args);
}

static s_SolvedNode solveMember(const s_Node& node_2, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    if (!(node_2.kind == "let"_fu))
        fail(("solveStructMembers_1: "_fu + node_2.kind), _here, ctx, _info, _helpers, _scope, module);

    if (node_2.items[LET_INIT] && (node_2.items[LET_INIT].kind != "definit"_fu))
        fail(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node_2.value) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

    return solveLetLike_dontTouchScope(node_2, (*(const s_Type*)fu::NIL), bool{}, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
}

                                #ifndef DEFt_map_Of69
                                #define DEFt_map_Of69
inline fu_VEC<s_SolvedNode> map_Of69(const fu_VEC<s_Node>& a, int, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    fu_VEC<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember(a[i], _here, ctx, _info, _helpers, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

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

                                #ifndef DEFt_add_DNSI
                                #define DEFt_add_DNSI
inline void add_DNSI(fu_VEC<int>& a, fu::view<int> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const int X = a[x];
        const int Y = b[y];
        if ((X >= Y))
        {
            if (X != Y)
            {
                a.insert(x, Y);
                y++;
            }
            else
                y++;

        };
        x++;
    };
    if (y < b.size())
        a += fu::get_view(b, y, b.size());

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

static void lazySolveEnd(const s_Target& t, s_Scope& _scope, s_Module& module, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Options& options, int& _notes, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    s_Overload& o = GET_mut(t, _scope, module);
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
                    goto L_0128;

                if (!(o_1.status & SS_FINALIZED))
                {
                    o_1.status |= SS_DIRTY;
                    goto L_0128;
                };
                const int up = o_1.local_of;
                if (up != parent)
                {
                    if (!(up > parent))
                        fail("lazySolveEnd: about to climb up the wrong tree."_fu, _here, ctx, _info, _helpers, _scope, module);

                    index_2 = up;
                    continue;
                };
                makeNote(((o_1.kind == "type"_fu) ? N_TypeReopen : N_FnReopen), options, _here, ctx, _info, _helpers, _scope, module, _notes);
                o_1.status &= ~((SS_DID_START | SS_DIRTY) | SS_FINALIZED);
                reopen += index_2;
                goto L_0128;
            };
          } L_0128:;
        };
    };
    if (!(o.status & SS_DIRTY))
        o.status |= SS_FINALIZED;
    else
    {
        if (o.status & SS_FINALIZED)
            fail("Stray SS_FINALIZED."_fu, _here, ctx, _info, _helpers, _scope, module);

        o.status &= ~(SS_DID_START | SS_DIRTY);
        makeNote(((o.kind == "type"_fu) ? N_TypeResolve : N_FnResolve), options, _here, ctx, _info, _helpers, _scope, module, _notes);
    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t_1 = s_Target { int(module.modid), int(reopen[i]) };
        lazySolveStart(t_1, s_Overload(GET(t_1, _scope, module, ctx, _here, _info, _helpers)), _scope, module, _here, ctx, _info, _helpers, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    };
}

static s_SolvedNode __solveStruct(const bool solve_3, s_Node&& node_1, const s_Target& into, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_ScopeSkipMemos& _ss, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    s_SolvedNode out_1 = solved(node_1, (into ? GET(into, _scope, module, ctx, _here, _info, _helpers).type : (*(const s_Type*)fu::NIL)), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), into, _current_fn_or_type, module, _scope);
    const fu_STR& origId = node_1.value;
    fu_STR _0 {};
    fu_STR name_3 = (origId ? fu_STR(origId) : (_0 = fu_STR((SolvedNodeData(_current_fn.out, module, _scope, ctx).target ? GET(SolvedNodeData(_current_fn.out, module, _scope, ctx).target, _scope, module, ctx, _here, _info, _helpers).name : (*(const fu_STR*)fu::NIL)))) ? static_cast<fu_STR&&>(_0) : "Anon"_fu);
    if (!SolvedNodeData(out_1, module, _scope, ctx).target)
    {
        s_SolvedNodeData& out_2 = MUT(out_1, module, _current_fn_or_type, _scope, ctx);
        if (out_2.type)
            fu_ASSERT();

        out_2.type = initStruct(name_3, node_1.flags, SELF_TEST, module);
        out_2.target = Scope_Typedef(_scope, origId, out_2.type, node_1.flags, name_3, SS_LAZY, module);
        EXT_mut(out_2.target, module, _scope).tEmplate = createTemplate(node_1, _current_fn, _scope, _helpers, _ss);
    };
    if (!solve_3)
        return out_1;

    GET_mut(s_Target(SolvedNodeData(out_1, module, _scope, ctx).target), _scope, module).status |= SS_DID_START;
    const int helpers0 = _helpers.size();
    fu_DEFER(_helpers.shrink(helpers0));
    const s_Target* _1;
    _helpers += s_Helpers { s_Target((*(_1 = &(SolvedNodeData(out_1, module, _scope, ctx).target)) ? *_1 : fail((("solveStruct: no out.target: `"_fu + origId) + "`."_fu), _here, ctx, _info, _helpers, _scope, module))), fu_STR{}, short(HM_Struct), 0, 0, 0, s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{}, s_Events{} };
    s_Target current_fn_or_type0 { _current_fn_or_type };
    fu_DEFER(_current_fn_or_type = current_fn_or_type0);
    _current_fn_or_type = SolvedNodeData(out_1, module, _scope, ctx).target;
    fu_VEC<s_Target> structConverts {};
    fu_VEC<int> structImports {};
    int flat_cnt_1 {};
    fu_VEC<s_SolvedNode> members = map_Of69(node_1.items, 0, _here, ctx, _info, _helpers, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    {
        fu_VEC<s_ScopeItem>& innerScope = lookupStruct_mut(SolvedNodeData(out_1, module, _scope, ctx).type.vtype.canon, module).items;
        if (!innerScope && members)
        {
            fu_VEC<s_Argument> args_1 = fu_VEC<s_Argument> { fu_VEC<s_Argument>::INIT<1> { s_Argument { "this"_fu, fu_STR{}, despeculateStruct(s_Type(SolvedNodeData(out_1, module, _scope, ctx).type)), s_SolvedNode{}, 0, s_BitSet{}, s_Target{} } } };
            for (int i = 0; i < members.size(); i++)
            {
                const fu_STR& id_2 = node_1.items[i].value;
                const s_Target target_6 = Scope_create(_scope, "field"_fu, (id_2 ? id_2 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module)), s_Type{}, F_PUB, s_SolvedNode{}, 0, 0u, bool{}, module);
                s_Extended& ext = EXT_mut(target_6, module, _scope);
                ext.args = args_1;
                ext.min = 1;
                ext.max = 1;
                Scope_set(innerScope, id_2, target_6, false);
            };
            _field_items += innerScope;
        };
        if (!(innerScope.size() == members.size()))
            fail((((((((("solveStructMembers_3: field lens mismatch: "_fu + innerScope.size()) + " vs "_fu) + members.size()) + "/"_fu) + node_1.items.size()) + ": `struct "_fu) + name_3) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

        for (int i = 0; i < innerScope.size(); i++)
        {
            const s_ScopeItem& item = innerScope[i];
            const s_SolvedNode& member = members[i];
            if (!(item.id == SolvedNodeData(member, module, _scope, ctx).value))
                fail("solveStructMembers_4: field id mismatch."_fu, _here, ctx, _info, _helpers, _scope, module);

            s_Overload& field = GET_mut(target(item), _scope, module);
            field.type = SolvedNodeData(member, module, _scope, ctx).type;
            int _2 {};
            flat_cnt_1 += ((_2 = int(tryLookupStruct(SolvedNodeData(member, module, _scope, ctx).type, module, ctx).flat_cnt)) ? _2 : 1);
            if (SolvedNodeData(member, module, _scope, ctx).flags & F_USING)
            {
                structConverts.push(target(item));
                if (field.type.vtype.modid != module.modid)
                    add_2vji(structImports, field.type.vtype.modid);

                add_DNSI(structImports, lookupTypeImports(field.type, module, ctx));
            };
        };
    };

    {
        s_SolvedNodeData& out_2 = MUT(out_1, module, _current_fn_or_type, _scope, ctx);
        bool CHANGE = false;
        int commonQuals = -1;
        for (int i = 0; i < members.size(); i++)
            commonQuals &= SolvedNodeData(members[i], module, _scope, ctx).type.vtype.quals;

        const int quals0 = out_2.type.vtype.quals;
        const int quals1 = (out_2.type.vtype.quals &= commonQuals);
        bool* _3;
        (*(_3 = &(CHANGE)) ? *_3 : *_3 = (quals0 != quals1));

        {
            s_Struct& s = lookupStruct_mut(out_2.type.vtype.canon, module);
            s.target = (out_2.target ? out_2.target : fail("No struct/out.target."_fu, _here, ctx, _info, _helpers, _scope, module));
            s.converts = structConverts;
            s.imports = structImports;
            const int flat0 = s.flat_cnt;
            s.flat_cnt = flat_cnt_1;
            bool* _4;
            (*(_4 = &(CHANGE)) ? *_4 : *_4 = (flat0 != flat_cnt_1));
            if (!(GET(s.target, _scope, module, ctx, _here, _info, _helpers).status & SS_DID_START))
                fail("Setting stuff but missing SS_DID_START."_fu, _here, ctx, _info, _helpers, _scope, module);

        };
        const int max_2 = members.size();
        int min_2 = 0;
        fu_VEC<s_Argument> args_1 {};
        for (int i_1 = 0; i_1 < members.size(); i_1++)
        {
            const s_SolvedNode& member = members[i_1];
            const fu_STR* _5;
            const s_Type* _6;
            s_Argument arg = s_Argument { fu_STR((*(_5 = &(SolvedNodeData(member, module, _scope, ctx).value)) ? *_5 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module))), fu_STR{}, s_Type((*(_6 = &(SolvedNodeData(member, module, _scope, ctx).type)) ? *_6 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module))), s_SolvedNode(SolvedNodeData(member, module, _scope, ctx).items[LET_INIT]), (SolvedNodeData(member, module, _scope, ctx).flags & F_MUSTNAME), s_BitSet{}, s_Target{} };
            if (!arg.dEfault)
                min_2++;

            args_1.push(arg);
        };
        if (max_2 && !min_2)
            min_2++;

        s_Overload& overload = GET_mut(s_Target(out_2.target), _scope, module);
        s_Extended& ext = EXT_mut(out_2.target, module, _scope);
        ext.min = min_2;
        ext.max = max_2;
        ext.args = args_1;
        overload.type = out_2.type;
        if (CHANGE && overload.callsites)
            overload.status |= SS_UPDATED;

    };
    lazySolveEnd(SolvedNodeData(out_1, module, _scope, ctx).target, _scope, module, _here, ctx, _info, _helpers, options, _notes, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, t_string, _field_items, TODO_FIX_convert_args);
    return s_SolvedNode{};
}

static bool lazySolveStart(const s_Target& target_6, const s_Overload& overload, s_Scope& _scope, s_Module& module, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    if ((overload.status & (SS_DID_START | SS_LAZY)) != SS_LAZY)
        return false;


    {
        s_Overload& o = GET_mut(target_6, _scope, module);
        if (o.status & ((SS_FINALIZED | SS_DID_START) | SS_DIRTY))
            fail(("SS_DID_START: non-zero solver status: "_fu + overload.status), _here, ctx, _info, _helpers, _scope, module);

        o.status |= SS_DID_START;
        if (o.kind == "fn"_fu)
            doTrySpecialize(target_6, s_Target{}, fu::view<s_SolvedNode>{}, fu_STR{}, fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, 0, (*(const s_Type*)fu::NIL), module, _scope, ctx, _here, _info, _helpers, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
        else if (o.kind == "type"_fu)
            __solveStruct(true, s_Node(EXT(target_6, module, _scope, ctx).tEmplate.node), target_6, _scope, module, ctx, _here, _info, _helpers, _current_fn_or_type, _current_fn, _ss, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
        else
            fail((("lazySolveStart: kind is `"_fu + o.kind) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

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

static int findRestStart(const s_Extended& ext)
{
    for (int i = ext.args.size(); i-- > 0; )
    {
        const s_Argument& arg = ext.args[i];
        if (arg.flags & F_REST_ARG)
            return i;

        if (!(arg.flags & F_IMPLICIT))
            break;

    };
    return ext.args.size();
}

                                #ifndef DEF_F_CONVERSION
                                #define DEF_F_CONVERSION
inline constexpr int F_CONVERSION = (1 << 15);
                                #endif

static fu_STR explainConversion(fu::view<s_Target> path, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    fu_STR res = "`"_fu;
    for (int i = 0; i < path.size(); i++)
    {
        if (i)
            res += "` -> `"_fu;

        const s_Overload& o = GET(path[i], _scope, module, ctx, _here, _info, _helpers);
        res += ((o.kind + " "_fu) + o.name);
        if (i < path.size())
            res += (": "_fu + serializeType(o.type));

    };
    res += "`"_fu;
    return res;
}

static void foreach(const s_Target& t, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool nullary, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const bool root_2, const s_SolvedNode& retype, s_Target& _current_fn_or_type, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const s_Scope& scope_1, const bool local_scope, const int has_converts, fu::view<s_ScopeSkip> ss_converts)
{
    s_Type arg0type0 { SolvedNodeData(TODO_FIX_convert_args[0], module, _scope, ctx).type };
    if (!nullary)
    {
        const int here = SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index;
        if (here && (t.index > here) && (t.modid == module.modid) && (GET(t, _scope, module, ctx, _here, _info, _helpers).local_of != here))
            return;

        if (root_2 && retype)
            TODO_FIX_convert_args.mutref(0) = retype;
        else
            MUT(TODO_FIX_convert_args[0], module, _current_fn_or_type, _scope, ctx).type = from;

    };
    fu_DEFER(if (!nullary)
    {
        if (root_2 && retype)
            TODO_FIX_convert_args.mutref(0) = arg0;
        else
            MUT(TODO_FIX_convert_args[0], module, _current_fn_or_type, _scope, ctx).type = arg0type0;

    });
    s_Target candidate {};
    if (nullary || (candidate = tryMatch__mutargs(s_Scope{}, false, fu_STR{}, TODO_FIX_reorder, TODO_FIX_conversions, fu_VEC<s_SolvedNode>(TODO_FIX_convert_args), F_CONVERSION, t, _ss, _here, ctx, _info, _helpers, _scope, module, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, TODO_FIX_convert_args)))
    {
        const s_Target& t_1 = (nullary ? t : candidate);
        const s_Overload& convert = GET(t_1, _scope, module, ctx, _here, _info, _helpers);
        if (!(convert.type))
            fail((((("No convert.type, perhaps a `using inline fn` without a return type annotation: `"_fu + convert.kind) + " "_fu) + convert.name) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

        s_Type convertType = ((convert.kind == "field"_fu) ? add_refs((from ? from : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module)), s_Type(convert.type)) : s_Type(convert.type));
        const bool isStruct_2 = isStruct(convertType);
        if ((convert.status & (SS_DID_START | SS_FINALIZED)) == SS_DID_START)
        {
        }
        else if (isAssignableAsArgument(expect, convertType))
        {
            if (match)
            {
                fu_STR suffix = (((("\n\t"_fu + explainConversion(match, _scope, module, ctx, _here, _info, _helpers)) + "\n\tand:"_fu) + "\n\t"_fu) + explainConversion((path + t_1), _scope, module, ctx, _here, _info, _helpers));
                if (actual)
                    fail(((((("Conversion ambiguity, multiple ways to convert `"_fu + serializeType(actual)) + "` into `"_fu) + serializeType(expect)) + "`: "_fu) + suffix), _here, ctx, _info, _helpers, _scope, module);
                else
                    fail(((("`using` ambiguity, multiple ways to obtain a `"_fu + serializeType(expect)) + "` in this scope: "_fu) + suffix), _here, ctx, _info, _helpers, _scope, module);

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

                                const s_Overload& convert_1 = GET(path[i_1], _scope, module, ctx, _here, _info, _helpers);
                                err += (((((convert_1.kind + " "_fu) + convert_1.name) + ": "_fu) + serializeType(convertType)) + "` ->"_fu);
                            };
                            err += (((("\n\t\t`"_fu + convert.kind) + " "_fu) + convert.name) + "`."_fu);
                            fail(fu_STR(err), _here, ctx, _info, _helpers, _scope, module);
                        };
                    };
                };
                path.push(t_1);
                fu_DEFER(path.pop());
                descend(convertType, false, isStruct_2, bool{}, scope_1, local_scope, _ss, TODO_FIX_convert_args, module, _scope, ctx, _current_fn, _here, _info, _helpers, retype, _current_fn_or_type, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, has_converts, ss_converts);
            };
        };
    };
}

                                #ifndef DEFt_each_oHgt
                                #define DEFt_each_oHgt
inline void each_oHgt(fu::view<s_Target> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool nullary, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const bool root_2, const s_SolvedNode& retype, s_Target& _current_fn_or_type, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const s_Scope& scope_1, const bool local_scope, const int has_converts, fu::view<s_ScopeSkip> ss_converts)
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
            foreach(u, TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _info, _helpers, root_2, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, scope_1, local_scope, has_converts, ss_converts);
        };
        i0 = ss.end;
    };
}
                                #endif

                                #ifndef DEFt_each_OWM9
                                #define DEFt_each_OWM9
inline void each_OWM9(fu::view<s_Target> items_5, fu::view<s_ScopeSkip> scope_skip_1, int, const int start_1, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool nullary, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const bool root_2, const s_SolvedNode& retype, s_Target& _current_fn_or_type, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const s_Scope& scope_1, const bool local_scope, const int has_converts, fu::view<s_ScopeSkip> ss_converts)
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
            foreach(items_5[i_1], TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _info, _helpers, root_2, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, scope_1, local_scope, has_converts, ss_converts);

        i0 = ss.end;
    };
}
                                #endif

static void descend(const s_Type& from, const bool nullary, const bool isStruct_1, const bool root_2, const s_Scope& scope_1, const bool local_scope, s_ScopeSkipMemos& _ss, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_SolvedNode& retype, s_Target& _current_fn_or_type, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const int has_converts, fu::view<s_ScopeSkip> ss_converts)
{
    if (nullary)
        each_oHgt(scope_1.usings, fu_VEC<s_ScopeSkip>((local_scope ? _ss.usings : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, 0, TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _info, _helpers, root_2, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, scope_1, local_scope, has_converts, ss_converts);
    else
    {
        if (isStruct_1)
        {
            fu::view<s_Target> inner = lookupStruct(from, module, ctx).converts;
            for (int i = 0; i < inner.size(); i++)
                foreach(s_Target(inner[i]), TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _info, _helpers, root_2, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, scope_1, local_scope, has_converts, ss_converts);

        };
        if (has_converts)
            each_OWM9(scope_1.converts, ss_converts, 0, 0, TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _info, _helpers, root_2, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, scope_1, local_scope, has_converts, ss_converts);

    };
}

static fu_VEC<s_Target> tryConvert(const s_Scope& scope_1, const bool local_scope, const s_Type& expect, const s_Type& actual, const s_SolvedNode& retype, s_ScopeSkipMemos& _ss, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Target& _current_fn_or_type, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string)
{
    fu_VEC<s_Target> match {};
    fu_VEC<s_Target> path {};
    const int has_converts = scope_1.converts.size();
    fu::view<s_ScopeSkip> ss_converts = (local_scope ? _ss.converts : fu::view<s_ScopeSkip>{});
    s_SolvedNode arg0 { TODO_FIX_convert_args[0] };
    fu_VEC<int> TODO_FIX_reorder {};
    fu_VEC<fu_VEC<s_Target>> TODO_FIX_conversions {};
    descend(actual, !actual, isStruct(actual), true, scope_1, local_scope, _ss, TODO_FIX_convert_args, module, _scope, ctx, _current_fn, _here, _info, _helpers, retype, _current_fn_or_type, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, expect, match, path, actual, has_converts, ss_converts);
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

                                #ifndef DEFt_only_wJ1c
                                #define DEFt_only_wJ1c
inline const fu_VEC<s_Target>& only_wJ1c(fu::view<fu_VEC<s_Target>> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

                                #ifndef DEFt_last_0kwC
                                #define DEFt_last_0kwC
inline const s_Target& last_0kwC(fu::view<s_Target> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_Type solveArrlit_itemType_init(const s_Type& head, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module)
{
    s_Type _0 {};
    return (_0 = clear_refs(s_Type(head))) ? static_cast<s_Type&&>(_0) : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module);
}

static s_Type solveArrlit_done(const s_Type& itemType)
{
    return createArray(itemType);
}

static const s_Overload& GETfn(const int idx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    return GET(s_Target { int(module.modid), int(idx) }, _scope, module, ctx, _here, _info, _helpers);
}

static fu_STR fnName(const int idx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    return (idx ? (("`"_fu + GETfn(idx, module, _scope, ctx, _here, _info, _helpers).name) + "`"_fu) : "global scope"_fu);
}

static fu_STR explainWhichFn(const s_Target& overload, fu::view<fu_VEC<s_Target>> conversions, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    fu_STR result = ("`"_fu + GET(overload, _scope, module, ctx, _here, _info, _helpers).name);
    if (EXT(overload, module, _scope, ctx).args)
    {
        result += "("_fu;
        for (int i = 0; i < EXT(overload, module, _scope, ctx).args.size(); i++)
        {
            const s_Argument& arg = EXT(overload, module, _scope, ctx).args[i];
            if (i)
                result += ","_fu;

            result += (((("\n\t"_fu + arg.name) + ((arg.flags & F_MUSTNAME) ? "!"_fu : fu_STR{})) + (arg.dEfault ? "?: "_fu : ": "_fu)) + (arg.type ? humanizeType(arg.type) : "$"_fu));
            const fu_VEC<s_Target>& c = ((conversions.size() > i) ? conversions[i] : (*(const fu_VEC<s_Target>*)fu::NIL));
            if (c)
                result += (" via "_fu + explainConversion(c, _scope, module, ctx, _here, _info, _helpers));

        };
        result += ")"_fu;
    };
    result += "`"_fu;
    return result;
}

static void disambig(s_Target& matchIdx, const s_Target& overloadIdx, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_CurrentFn& _current_fn, fu::view<std::byte> id_2, fu::view<fu_VEC<s_Target>> conversions, fu::view<fu_VEC<s_Target>> conversions_1)
{
    if (matchIdx)
    {
        const s_Target& PREV = matchIdx;
        const s_Target& NEXT = overloadIdx;
        const int inner = GET(PREV, _scope, module, ctx, _here, _info, _helpers).local_of;
        const int outer = GET(NEXT, _scope, module, ctx, _here, _info, _helpers).local_of;
        const int callsite = SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index;
        if (SELF_TEST)
        {
            int _c = callsite;
            while (_c > inner)
                _c = GETfn(_c, module, _scope, ctx, _here, _info, _helpers).local_of;

            if (!(_c == inner))
                fail(((((("BUG! Leaking `"_fu + id_2) + "` between functions [inner/callsite]: "_fu) + fnName(inner, module, _scope, ctx, _here, _info, _helpers)) + " is seen from "_fu) + fnName(callsite, module, _scope, ctx, _here, _info, _helpers)), _here, ctx, _info, _helpers, _scope, module);

            int _i = inner;
            while (_i > outer)
                _i = GETfn(_i, module, _scope, ctx, _here, _info, _helpers).local_of;

            if (!(_i == outer))
                fail(((((((("BUG! Leaking `"_fu + id_2) + "` between functions [inner/outer]: "_fu) + fnName(inner, module, _scope, ctx, _here, _info, _helpers)) + " and "_fu) + fnName(outer, module, _scope, ctx, _here, _info, _helpers)) + " as seen from "_fu) + fnName(callsite, module, _scope, ctx, _here, _info, _helpers)), _here, ctx, _info, _helpers, _scope, module);

        };
        fail((((((((((("Ambiguous callsite, matches multiple items in scope: "_fu + explainWhichFn(PREV, conversions, _scope, module, ctx, _here, _info, _helpers)) + " from "_fu) + fnName(inner, module, _scope, ctx, _here, _info, _helpers)) + " and "_fu) + explainWhichFn(NEXT, conversions_1, _scope, module, ctx, _here, _info, _helpers)) + " from "_fu) + fnName(outer, module, _scope, ctx, _here, _info, _helpers)) + ", as seen from "_fu) + fnName(callsite, module, _scope, ctx, _here, _info, _helpers)) + "."_fu), _here, ctx, _info, _helpers, _scope, module);
    };
}

                                #ifndef DEFt_last_FGX6
                                #define DEFt_last_FGX6
inline const fu_STR& last_FGX6(fu::view<fu_STR> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_Target tryMatch__mutargs(const s_Scope& scope_1, const bool local_scope, fu_STR&& id_2, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, fu::view<s_SolvedNode> args_1, const int flags_4, const s_Target& target_6, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, s_Module& module, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    s_Target matchIdx {};
    s_Target DEBUG_assertMatch {};
    int minArity = args_1.size();
    const int numUsings = (scope_1.usings ? countUsings(scope_1, local_scope, _ss, _here, ctx, _info, _helpers, _scope, module) : int{});
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
            names.push(((SolvedNodeData(arg, module, _scope, ctx).kind == "argid"_fu) ? (*(_0 = &(((void)(some = true), SolvedNodeData(arg, module, _scope, ctx).value))) ? *_0 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module)) : (*(const fu_STR*)fu::NIL)));
            if (SolvedNodeData(arg, module, _scope, ctx).flags & F_OPT_ARG)
            {
                minArity--;
                add(optional, i);
            };
        };
        if (!(some))
            fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module);

    };
    fu_STR reusable_mangle {};
    fu_VEC<s_Target> extra_items_1 {};
    if (local_scope && !target_6)
    {
        s_BitSet seen {};
        if (numUsings)
            each_1UX3(scope_1.usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, 0, _scope, module, ctx, _here, _info, _helpers, seen, scope_1, local_scope, _ss, id_2, extra_items_1);

        if (flags_4 & ((((F_ACCESS | F_METHOD) | F_INFIX) | F_PREFIX) | F_POSTFIX))
        {
            for (int i = 0; i < args_1.size(); i++)
                visitTypeImports(SolvedNodeData(args_1[i], module, _scope, ctx).type, module, ctx, seen, scope_1, local_scope, _ss, id_2, extra_items_1);

        };
    };
    fu::view<s_ScopeItem> field_items = (local_scope && ((flags_4 & F_ACCESS) || !minArity) && (minArity <= 1) && maxArity ? _field_items : fu::view<s_ScopeItem>{});
    fu_VEC<fu_STR> alternate_ids {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        bool shadows {};
        while ((overloadIdx = search(scope_1.items, id_2, scope_iterator, (local_scope ? ((flags_4 & F_IMPLICIT) ? _ss.declash : _ss.items) : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL)), shadows, target_6, extra_items_1, field_items)))
        { {
            fu_VEC<fu_VEC<s_Target>> conversions_1 {};
            fu_VEC<int> reorder_1 {};
            bool TODO_FIX_skip_autocalls = false;
            while (true)
            {
                const s_Overload& overload = GET(overloadIdx, _scope, module, ctx, _here, _info, _helpers);
                if (lazySolveStart(overloadIdx, s_Overload(overload), _scope, module, _here, ctx, _info, _helpers, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args))
                    continue;

                fu::view<std::byte> kind_3 = overload.kind;
                const bool isType = (kind_3 == "type"_fu);
                if (minArity && isType && !target_6)
                {
                    const fu_STR& alt = overload.type.vtype.canon;
                    if (alt != id_2)
                        alternate_ids.push(alt);

                };
                const s_Extended& arity = EXT(overloadIdx, module, _scope, ctx);
                const bool isZeroInit = (isType && !explicitArity);
                if (!isZeroInit && ((arity.max < minArity) || (arity.min > maxArity)))
                    goto L_0185;

                fu::view<s_Argument> host_args = arity.args;
                const int num_usings = (!isZeroInit && (arity.min > explicitArity) ? (arity.min - explicitArity) : int{});
                bool use_reorder = false;
                if (!names)
                    reorderByNumUsings(use_reorder, reorder_1, host_args, args_1.size(), num_usings);
                else if (!reorderByArgIDs(use_reorder, reorder_1, names, s_BitSet(optional), host_args, num_usings))
                    goto L_0185;

                if (optional && reorder_1 && (reorder_1.size() < args_1.size()) && (reorder_1.size() < arity.max))
                    goto L_0185;

                s_Type REST_TYPE {};
                const int REST_START = findRestStart(arity);
                const int N = std::max((use_reorder ? reorder_1.size() : args_1.size()), (!isZeroInit ? arity.min : (*(const int*)fu::NIL)));
                if (N)
                {
                    if (!((reorder_1.size() >= args_1.size()) || !reorder_1 || optional))
                        fail("reorder < args."_fu, _here, ctx, _info, _helpers, _scope, module);

                    for (int i = 0; i < N; i++)
                    {
                        const bool rest = (i >= REST_START);
                        const s_Argument& host_arg = host_args[(rest ? REST_START : i)];
                        const s_Type& expect = host_arg.type;
                        if (TODO_FIX_skip_autocalls && rest)
                            continue;

                        const int callsiteIndex = (use_reorder ? int(reorder_1[i]) : ((i < args_1.size()) ? int(i) : -1));
                        if (callsiteIndex < 0)
                        {
                            if (host_arg.dEfault || (host_arg.flags & F_IMPLICIT))
                                continue;

                            int _1 {};
                            if (!((_1 = (host_arg.flags & F_MUSTNAME)) ? _1 : (flags_4 & F_CONVERSION)))
                            {
                                const s_Type& expect_1 = (expect ? expect : SolvedNodeData(s_SolvedNode(host_arg.dEfault), module, _scope, ctx).type);
                                if (expect_1)
                                {
                                    fu_VEC<s_Target> conversion = tryConvert(scope_1, local_scope, expect_1, (*(const s_Type*)fu::NIL), s_SolvedNode{}, _ss, TODO_FIX_convert_args, module, _scope, ctx, _current_fn, _here, _info, _helpers, _current_fn_or_type, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string);
                                    if (conversion)
                                    {
                                        grow_if_oob_kcit(conversions_1, i) = conversion;
                                        continue;
                                    };
                                };
                            };
                            goto L_0185;
                        };
                        if (host_arg.flags & F_MUSTNAME)
                        {
                            if ((names.size() <= callsiteIndex) || !names[callsiteIndex])
                                goto L_0185;

                        };
                        if (host_arg.autocall && !TODO_FIX_skip_autocalls)
                        {
                            fu_VEC<s_SolvedNode> autocall_args {};
                            fu_VEC<int> autocall_reorder {};
                            fu_VEC<fu_VEC<s_Target>> autocall_conversions {};
                            autocall_args.resize(1);
                            autocall_args.mutref(0) = args_1[callsiteIndex];
                            const s_Target t = tryMatch__mutargs(scope_1, local_scope, fu_STR(host_arg.autocall), autocall_reorder, autocall_conversions, autocall_args, 0, s_Target{}, _ss, _here, ctx, _info, _helpers, _scope, module, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, TODO_FIX_convert_args);
                            if (!t)
                                goto L_0185;

                            if (autocall_conversions)
                                grow_if_oob_kcit(conversions_1, i) += only_wJ1c(autocall_conversions);

                            grow_if_oob_kcit(conversions_1, i) += t;
                            if (!(autocall_reorder.size() < 2))
                                fail("autocall: reorder"_fu, _here, ctx, _info, _helpers, _scope, module);

                        };
                        if (!expect)
                            continue;

                        const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                        const s_Type& actual = (hasConv ? GET(last_0kwC(conversions_1[i]), _scope, module, ctx, _here, _info, _helpers).type : SolvedNodeData(args_1[callsiteIndex], module, _scope, ctx).type);
                        if (isAssignableAsArgument(expect, (actual ? actual : fail("tryMatch: !actual"_fu, _here, ctx, _info, _helpers, _scope, module))))
                            continue;

                        if (!hasConv)
                        {
                            const s_SolvedNode& arg = args_1[callsiteIndex];
                            const s_SolvedNode& arg_1 = ((SolvedNodeData(arg, module, _scope, ctx).kind == "argid"_fu) ? only_e0l4(SolvedNodeData(arg, module, _scope, ctx).items) : arg);
                            s_Type retype = tryRetyping(s_SolvedNode(arg_1), s_Type(expect), module, _scope, ctx, _here, _info, _helpers);
                            if (isAssignableAsArgument(expect, retype))
                                continue;

                        };
                        if (!(flags_4 & F_CONVERSION))
                        {
                            fu_VEC<s_Target> conversion = tryConvert(scope_1, local_scope, expect, actual, (!hasConv ? args_1[callsiteIndex] : (*(const s_SolvedNode*)fu::NIL)), _ss, TODO_FIX_convert_args, module, _scope, ctx, _current_fn, _here, _info, _helpers, _current_fn_or_type, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string);
                            if (conversion)
                            {
                                grow_if_oob_kcit(conversions_1, i) += conversion;
                                continue;
                            };
                        };
                        goto L_0185;
                    };
                };
                if (REST_START < N)
                {
                    for (int i = REST_START; i < N; i++)
                    {
                        const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                        const int callsiteIndex = (use_reorder ? reorder_1.mutref(i) : i);
                        const s_Type& actual = (hasConv ? GET(last_0kwC(conversions_1[i]), _scope, module, ctx, _here, _info, _helpers).type : SolvedNodeData(args_1[callsiteIndex], module, _scope, ctx).type);
                        REST_TYPE = ((i == REST_START) ? solveArrlit_itemType_init(actual, _here, ctx, _info, _helpers, _scope, module) : type_trySuper(REST_TYPE, actual));
                        if (!REST_TYPE)
                            goto L_0185;

                    };
                    REST_TYPE = solveArrlit_done(REST_TYPE);
                };
                if (kind_3 == "template"_fu)
                {
                    fu_STR cant_reuse {};
                    fu_STR& args_mangled = ((use_reorder || conversions_1) ? cant_reuse : reusable_mangle);
                    const s_Target specIdx = trySpecialize(overloadIdx, args_1, args_mangled, REST_START, REST_TYPE, reorder_1, use_reorder, conversions_1, _scope, module, ctx, _here, _info, _helpers, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
                    if (!specIdx)
                        goto L_0185;

                    overloadIdx = specIdx;
                    DEBUG_assertMatch = specIdx;
                    TODO_FIX_skip_autocalls = true;
                    continue;
                };
                disambig(matchIdx, overloadIdx, _scope, module, ctx, _here, _info, _helpers, _current_fn, id_2, conversions, conversions_1);
                std::swap(reorder_1, reorder);
                std::swap(conversions_1, conversions);
                matchIdx = overloadIdx;
                if (shadows)
                    goto L_NEXT;

                break;
            };
          } L_0185:;
        } L_NEXT:;

        if (!alternate_ids)
            break;

        id_2 = last_FGX6(alternate_ids);
        alternate_ids.pop();
    };
    if (DEBUG_assertMatch)
    {
        if (!(DEBUG_assertMatch == matchIdx))
            fail((("Specialized `"_fu + GET(DEBUG_assertMatch, _scope, module, ctx, _here, _info, _helpers).name) + "` but ended up not using it."_fu), _here, ctx, _info, _helpers, _scope, module);

    };
    return matchIdx;
}

static fu_STR expectedArgs(fu::view<s_Target> targets, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
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

        result += explainWhichFn(targets[i], fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx, _here, _info, _helpers);
    };
    return result ? fu_STR(result) : "."_fu;
}

static fu_STR actualArgs(fu::view<s_SolvedNode> args_2, const s_Module& module, s_Scope& _scope, const s_Context& ctx)
{
    fu_STR result = "\nActual: ("_fu;
    for (int i = 0; i < args_2.size(); i++)
    {
        const s_SolvedNode& arg = args_2[i];
        if (i)
            result += ","_fu;

        result += "\n\t"_fu;
        if (SolvedNodeData(arg, module, _scope, ctx).kind == "argid"_fu)
            result += (SolvedNodeData(arg, module, _scope, ctx).value + ": "_fu);

        result += humanizeType(SolvedNodeData(arg, module, _scope, ctx).type);
    };
    return result + ")."_fu;
}

[[noreturn]] static fu::never NICERR_mismatch(const s_Scope& scope_1, const bool local_scope, const fu_STR& id_2, fu::view<s_SolvedNode> args_1, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_CurrentFn& _current_fn)
{
    fu_VEC<s_Target> overloads_1 {};
    int scope_iterator {};
    s_Target target_6 {};
    bool shadows {};
    while ((target_6 = search(scope_1.items, id_2, scope_iterator, (local_scope ? _ss.items : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL)), shadows, s_Target{}, fu::view<s_Target>{}, (local_scope ? _field_items : fu::view<s_ScopeItem>{}))))
        overloads_1.push(target_6);

    int min_2 = int(0x7fffffffu);
    int max_2 = 0;
    for (int i = 0; i < overloads_1.size(); i++)
    {
        const s_Target& o = overloads_1[i];
        if (min_2 > EXT(o, module, _scope, ctx).min)
            min_2 = EXT(o, module, _scope, ctx).min;

        if (max_2 < EXT(o, module, _scope, ctx).max)
            max_2 = EXT(o, module, _scope, ctx).max;

    };
    if (overloads_1)
    {
        if (args_1.size() < min_2)
            fail(((((((("`"_fu + id_2) + "` expects at least "_fu) + min_2) + " arguments, "_fu) + args_1.size()) + " provided"_fu) + expectedArgs(overloads_1, _scope, module, ctx, _here, _info, _helpers)), _here, ctx, _info, _helpers, _scope, module);
        else if (args_1.size() > max_2)
            fail(((((((("`"_fu + id_2) + "` expects at most "_fu) + max_2) + " arguments, "_fu) + args_1.size()) + " provided"_fu) + expectedArgs(overloads_1, _scope, module, ctx, _here, _info, _helpers)), _here, ctx, _info, _helpers, _scope, module);
        else
            fail((((("`"_fu + id_2) + "` bad args"_fu) + expectedArgs(overloads_1, _scope, module, ctx, _here, _info, _helpers)) + actualArgs(args_1, module, _scope, ctx)), _here, ctx, _info, _helpers, _scope, module);

    }
    else
    {
        fu_STR _0 {};
        fail(((("`"_fu + id_2) + "` is not defined in this scope: "_fu) + ((_0 = (("`"_fu + SolvedNodeData(_current_fn.out, module, _scope, ctx).value) + "`."_fu)) ? static_cast<fu_STR&&>(_0) : "root scope."_fu)), _here, ctx, _info, _helpers, _scope, module);
    };
}

static s_Target match__mutargs(const s_Scope& scope_1, const bool local_scope, const fu_STR& id_2, fu::view<s_SolvedNode> args_1, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, const int flags_4, const s_Target& target_6, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, s_Module& module, fu_VEC<s_ScopeItem>& _field_items, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    const s_Target ret = tryMatch__mutargs(scope_1, local_scope, fu_STR(id_2), reorder, conversions, args_1, flags_4, target_6, _ss, _here, ctx, _info, _helpers, _scope, module, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, TODO_FIX_convert_args);
    if (ret)
        return ret;

    const s_Target debug = tryMatch__mutargs(scope_1, local_scope, fu_STR(id_2), reorder, conversions, args_1, flags_4, target_6, _ss, _here, ctx, _info, _helpers, _scope, module, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, TODO_FIX_convert_args);
    if (debug)
        return debug;

    NICERR_mismatch(scope_1, local_scope, id_2, args_1, _ss, _field_items, module, _scope, ctx, _here, _info, _helpers, _current_fn);
}

static s_Type solveArrlit_itemType(fu::view<s_SolvedNode> items_5, s_Type&& itemType, int start_1, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, const s_Module& module)
{
    if (!itemType)
    {
        if (start_1 == items_5.size())
            fail("Cannot infer empty arraylit."_fu, _here, ctx, _info, _helpers, _scope, module);

        itemType = solveArrlit_itemType_init(SolvedNodeData(items_5[start_1++], module, _scope, ctx).type, _here, ctx, _info, _helpers, _scope, module);
    }
    else if (is_ref(itemType))
        fail("Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu, _here, ctx, _info, _helpers, _scope, module);

    for (int i = start_1; i < items_5.size(); i++)
        itemType = superType("Array literal: "_fu, itemType, SolvedNodeData(items_5[i], module, _scope, ctx).type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _info, _helpers);

    return static_cast<s_Type&&>(itemType);
}

static s_SolvedNode createArrlit(fu_VEC<s_SolvedNode>&& items_5, const s_Type& itemType, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    s_Type itemType_1 = solveArrlit_itemType(items_5, s_Type(itemType), 0, _here, ctx, _info, _helpers, _scope, module);
    for (int i = 0; i < items_5.size(); i++)
        maybeCopyOrMove(items_5.mutref(i), itemType_1, false, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    return SolvedNode("arrlit"_fu, solveArrlit_done(itemType_1), 0, (*(const fu_STR*)fu::NIL), items_5, s_Target{}, _current_fn_or_type, module, _scope);
}

static s_Type intersectionType(fu::view<std::byte> reason, const s_Type& a, const s_Type& b, const fu_STR& id_2, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    s_Type _0 {};
    return (_0 = type_tryIntersect(a, b)) ? static_cast<s_Type&&>(_0) : fail((((((((id_2 ? (("`"_fu + human(id_2, module, _scope, ctx, _here, _info, _helpers)) + "`: "_fu) : fu_STR{}) + reason) + "Cannot intersect a common subtype: `"_fu) + serializeType(a)) + "` & `"_fu) + serializeType(b)) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);
}

                                #ifndef DEFt_each_anEU
                                #define DEFt_each_anEU
inline void each_anEU(fu::view<s_ScopeItem> items_5, const fu_VEC<s_ScopeSkip>& scope_skip_1, int, const int start_1, const s_ScopeMemo& _root_scope, fu::view<std::byte> id_2, int& autoshadow, int& id_clashes)
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

static s_Target nested(const int index_2, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx)
{
    int _0 {};
    return s_Target { ((_0 = -SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index) ? _0 : int(module.modid)), int(index_2) };
}

static const s_Overload& fnd(const int index_2, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    return GET(nested(index_2, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _info, _helpers);
}

static const s_Lifetime& Lifetime_test(const s_Lifetime& lifetime_1, const bool tempsOK, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    if (SELF_TEST)
    {
        const s_Target& current_fn = SolvedNodeData(_current_fn.out, module, _scope, ctx).target;
        const s_Overload& debug_2 = (current_fn ? GET(current_fn, _scope, module, ctx, _here, _info, _helpers) : (*(const s_Overload*)fu::NIL));
        if (debug_2)
        {
        };
        if (!lifetime_1.uni0n.size())
            fail("Lifetime_test: no region set."_fu, _here, ctx, _info, _helpers, _scope, module);

        s_Region _last {};
        for (int i = 0; i < lifetime_1.uni0n.size(); i++)
        {
            const s_Region& region = lifetime_1.uni0n[i];

            {
                if (!(!i || (region > _last)))
                    fail("Lifetime_test: not a sorted set"_fu, _here, ctx, _info, _helpers, _scope, module);

                _last = region;
            };
            if (Region_isArg(region))
                continue;

            if (Region_isTemp(region))
            {
                if (!((i == (lifetime_1.uni0n.size() - 1)) && tempsOK))
                    fail("Lifetime_test: unexpected temporary."_fu, _here, ctx, _info, _helpers, _scope, module);

                continue;
            };
            const int index_2 = Region_toLocalIndex(region);
            const s_Overload& local = (index_2 ? fnd(index_2, _current_fn, module, _scope, ctx, _here, _info, _helpers) : (*(const s_Overload*)fu::NIL));
            const int local_of_2 = local.local_of;
            if (local_of_2)
            {
                int frame = current_fn.index;
                while (local_of_2 != frame)
                {
                    if (!((local_of_2 <= frame)))
                        fail((((((("Lifetime_test: `"_fu + local.name) + "` is not a local: `"_fu) + fnd(local_of_2, _current_fn, module, _scope, ctx, _here, _info, _helpers).name) + "` does not contain "_fu) + (frame ? (("`"_fu + fnd(frame, _current_fn, module, _scope, ctx, _here, _info, _helpers).name) + "`"_fu) : "global scope"_fu)) + ((current_fn.index != frame) ? ((", testing from `"_fu + fnd(current_fn.index, _current_fn, module, _scope, ctx, _here, _info, _helpers).name) + "`."_fu) : "."_fu)), _here, ctx, _info, _helpers, _scope, module);

                    if (!(frame))
                        fail("Lifetime_test: climbed up to root"_fu, _here, ctx, _info, _helpers, _scope, module);

                    frame = fnd(frame, _current_fn, module, _scope, ctx, _here, _info, _helpers).local_of;
                };
            };
        };
    };
    return lifetime_1;
}

static s_Lifetime Lifetime_fromBinding(const s_Target& target_6, const int local_of_2, const int flags_4, const s_Type& type_3, const s_Module& module, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, const s_CurrentFn& _current_fn)
{
    if (!((target_6.modid < 0) || (target_6.modid < 0) || (target_6.modid == module.modid)))
        fail("not from this module"_fu, _here, ctx, _info, _helpers, _scope, module);

    if (!local_of_2)
        return Lifetime_static();

    const int isArg = (flags_4 & F_ARG);
    const int index_2 = target_6.index;
    const s_Region region = ((isArg && is_ref(type_3)) ? Region_fromArgIndex(index_2) : Region_fromLocalIndex(index_2));
    s_Lifetime res { Lifetime_test(s_Lifetime { fu_VEC<s_Region> { fu_VEC<s_Region>::INIT<1> { s_Region(region) } } }, bool{}, _current_fn, module, _scope, ctx, _here, _info, _helpers) };
    return res;
}

static s_Target Binding(const fu_STR& id_2, s_Type&& type_3, const int flags_4, bool& shadows, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, fu_VEC<s_Helpers>& _helpers, const s_TokenIdx& _here, fu_VEC<s_Info>& _info)
{
    fu_STR name_3 { id_2 };
    const int local_of_2 = SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index;
    if (_root_scope)
    {
        int autoshadow = 0;
        int id_clashes = 0;
        each_anEU(_scope.items, _ss.declash, 0, 0, _root_scope, id_2, autoshadow, id_clashes);
        if (id_clashes)
            name_3 += ("_"_fu + id_clashes);

        if (OPTI_autoshadow && local_of_2 && !autoshadow)
            shadows = true;

    };
    const s_Target target_6 = Scope_create(_scope, "var"_fu, name_3, s_Type{}, flags_4, s_SolvedNode{}, int(local_of_2), 0u, true, module);
    last_dDmM(_helpers).vars += target_6.index;
    s_Overload& overload = GET_mut(target_6, _scope, module);

    {
        s_Lifetime lifetime_1 = Lifetime_fromBinding(target_6, local_of_2, flags_4, type_3, module, _here, ctx, _info, _helpers, _scope, _current_fn);
        type_3.lifetime = s_Lifetime{};
        overload.type = ((flags_4 & F_MUT) ? add_mutref(s_Type(type_3), lifetime_1) : add_ref(s_Type(type_3), lifetime_1));
    };
    return target_6;
}

static s_SolvedNode createLet(const fu_STR& id_2, const s_Type& type_3, const int flags_4, bool& shadows, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, fu_VEC<s_Helpers>& _helpers, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, const s_Target& _current_fn_or_type)
{
    const s_Target target_6 = Binding(id_2, s_Type(type_3), flags_4, shadows, _current_fn, module, _scope, ctx, _root_scope, _ss, _helpers, _here, _info);
    const s_SolvedNode ret = SolvedNode("let"_fu, GET(target_6, _scope, module, ctx, _here, _info, _helpers).type, flags_4, GET(target_6, _scope, module, ctx, _here, _info, _helpers).name, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target_6, _current_fn_or_type, module, _scope);
    GET_mut(target_6, _scope, module).solved = ret;
    return ret;
}

static const s_Target& injectImplicitArg(const fu_STR& id_2, const s_Type& type_3, const s_Target& becauseOf, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Target& _current_fn_or_type, s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss)
{
    if (!(SolvedNodeData(_current_fn.out, module, _scope, ctx).items))
        fail((((("No implicit `"_fu + id_2) + "` in scope, needed to call `"_fu) + GET(becauseOf, _scope, module, ctx, _here, _info, _helpers).name) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

    for (int i = 0; i < (SolvedNodeData(_current_fn.out, module, _scope, ctx).items.size() + FN_RET_BACK); i++)
    {
        const s_SolvedNode& arg = SolvedNodeData(_current_fn.out, module, _scope, ctx).items[i];
        if (SolvedNodeData(s_SolvedNode(arg), module, _scope, ctx).value == id_2)
        {
            s_Type super = intersectionType("Implicit argument collision: "_fu, add_ref(s_Type(type_3), SolvedNodeData(s_SolvedNode(arg), module, _scope, ctx).type.lifetime), SolvedNodeData(s_SolvedNode(arg), module, _scope, ctx).type, id_2, module, _scope, ctx, _here, _info, _helpers);
            MUT(s_SolvedNode(arg), module, _current_fn_or_type, _scope, ctx).type = super;
            GET_mut(s_Target(SolvedNodeData(s_SolvedNode(arg), module, _scope, ctx).target), _scope, module).type = super;
            const s_Target* _0;
            return *(_0 = &(SolvedNodeData(s_SolvedNode(arg), module, _scope, ctx).target)) ? *_0 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module);
        };
    };
    bool shadows {};
    const int flags_4 = (F_IMPLICIT | F_ARG);
    const s_SolvedNode newArgNode = createLet(id_2, type_3, flags_4, shadows, _current_fn, module, _scope, ctx, _root_scope, _ss, _helpers, _here, _info, _current_fn_or_type);
    const int newArgIdx = (SolvedNodeData(_current_fn.out, module, _scope, ctx).items.size() + FN_RET_BACK);
    MUT(_current_fn.out, module, _current_fn_or_type, _scope, ctx).items.insert(newArgIdx, newArgNode);
    Reference_trackArgument(_current_fn.flow, SolvedNodeData(newArgNode, module, _scope, ctx).target.index, newArgIdx);
    return SolvedNodeData(newArgNode, module, _scope, ctx).target;
}

static s_SolvedNode bindImplicitArg(const fu_STR& name_3, const s_Type& type_3, const s_Target& becauseOf, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{

    {
        const s_Target target_6 = tryParseClosureID(name_3, MODID(module));
        if (target_6)
        {
            const s_Overload& o = GET(target_6, _scope, module, ctx, _here, _info, _helpers);
            if (o.local_of == SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index)
            {
                if (!(o.kind == "var"_fu))
                    fail("CLOSURE-ID-HACK #2"_fu, _here, ctx, _info, _helpers, _scope, module);

                return CallerNode("__closure"_fu, s_Target(target_6), fu_VEC<s_SolvedNode>{}, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
            };
        };
    };
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    s_Target _0 {};
    const s_Target target_6 = ((_0 = tryMatch__mutargs(_scope, true, fu_STR(name_3), reorder, conversions, fu::view<s_SolvedNode>{}, F_IMPLICIT, s_Target{}, _ss, _here, ctx, _info, _helpers, _scope, module, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, TODO_FIX_convert_args)) ? _0 : (_0 = s_Target(injectImplicitArg(name_3, type_3, becauseOf, _current_fn, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _root_scope, _ss))) ? _0 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
    const s_Overload& o = GET(target_6, _scope, module, ctx, _here, _info, _helpers);
    if (!(o.flags & F_IMPLICIT))
        fail((((("Matching a non-implicit item in scope: `"_fu + name_3) + "`, binds to call to `"_fu) + GET(becauseOf, _scope, module, ctx, _here, _info, _helpers).name) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

    checkAssignable(type_3, o.type, (("Implicit `"_fu + name_3) + "` type mismatch"_fu), (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _info, _helpers, _scope, module);
    return CallerNode("__implicit"_fu, s_Target(target_6), fu_VEC<s_SolvedNode>{}, 0, reorder, conversions, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
}

                                #ifndef DEFt_only_r7yd
                                #define DEFt_only_r7yd
inline const s_SolvedNode& only_r7yd(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static const s_Type& Lifetime_climbType(const s_Overload& o, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    if (o.kind == "var"_fu)
        return SolvedNodeData(s_SolvedNode(SolvedNodeData(o.solved, module, _scope, ctx).items[LET_INIT]), module, _scope, ctx).type;

    if (!(o.kind == "lifetime"_fu))
        fail(((("Lifetime_climbType: not a `var` nor `lifetime`: "_fu + o.kind) + " "_fu) + o.name), _here, ctx, _info, _helpers, _scope, module);

    return o.type;
}

inline static void Lifetime_climb_4iP4(s_Lifetime& lifetime_1, int, const int locals_start_1, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    for (int i = lifetime_1.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime_1.uni0n[i];
        if (r.index < locals_start_1)
            break;

        if (Region_isTemp(r))
            continue;

        s_Overload& o = GET_mut(nested(Region_toLocalIndex(r), _current_fn, module, _scope, ctx), _scope, module);
        s_Type init { Lifetime_climbType(s_Overload(o), module, _scope, ctx, _here, _info, _helpers) };
        if (!is_ref(init))
            continue;

        if (!(init.lifetime.uni0n.size()))
            fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module);

        lifetime_1.uni0n.splice(i, 1);
        const int N0 = lifetime_1.uni0n.size();
        lifetime_1 = Lifetime_union(lifetime_1, init.lifetime);
        const int N1 = lifetime_1.uni0n.size();
        i += (N1 - N0);
    };
}

static s_Lifetime Lifetime_unwind(s_Lifetime&& lifetime_1, const int locals_start_1, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    Lifetime_climb_4iP4(lifetime_1, 0, locals_start_1, _current_fn, module, _scope, ctx, _here, _info, _helpers);
    return static_cast<s_Lifetime&&>(lifetime_1);
}

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline constexpr int q_rx_copy = (1 << 2);
                                #endif

static void BORROWCK_resolveByCopyToTemporary(s_SolvedNode& node_1, const s_Type& slot, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    s_Type temporary = clear_refs(s_Type(slot));
    temporary.vtype.quals |= (SolvedNodeData(node_1, module, _scope, ctx).type.vtype.quals & q_rx_copy);
    maybeCopyOrMove(node_1, temporary, false, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
}

                                #ifndef DEF_DEV_DisableBCK
                                #define DEF_DEV_DisableBCK
inline constexpr unsigned DEV_DisableBCK = (0x1u << 0u);
                                #endif

                                #ifndef DEF_F_OPERATOR
                                #define DEF_F_OPERATOR
inline constexpr int F_OPERATOR = (1 << 21);
                                #endif

static const s_Overload& Region_GET(const s_Region& r, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    const int idx = (Region_isArg(r) ? Region_toArgIndex(r) : int(Region_toLocalIndex(r)));
    return GET(nested(idx, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _info, _helpers);
}

static void validate(const int i, const s_Argument& host_arg, const s_Lifetime& unwound, const fu_VEC<s_Lifetime>& bck_unwound, fu::view<s_Argument> host_args, const int i0, fu_VEC<s_SolvedNode>& args_1, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Target& target_6)
{
    if (has(host_arg.risk_free, i))
        return;

    s_Lifetime inter = Lifetime_inter(unwound, bck_unwound[i]);
    if (!inter)
        return;

    const s_Argument& other = host_args[i];

    {
        int which = -1;
        if (!(is_mutref(host_arg.type) || (host_arg.flags & F_IMPLICIT)))
            which = i0;
        else if (!(is_mutref(other.type) || (other.flags & F_IMPLICIT)))
            which = i;

        if ((which >= 0))
        {
            const s_SolvedNode& node_1 = args_1[which];
            if (is_rx_copy(SolvedNodeData(node_1, module, _scope, ctx).type))
                return BORROWCK_resolveByCopyToTemporary(args_1.mutref(which), host_args[which].type, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

        };
    };
    if (!(options.dev & DEV_DisableBCK))
    {
        fu_STR err = ((qKW(GET(target_6, _scope, module, ctx, _here, _info, _helpers).kind) + " "_fu) + qID(human(GET(target_6, _scope, module, ctx, _here, _info, _helpers).name, module, _scope, ctx, _here, _info, _helpers)));
        err += (((host_args.size() == 2) && (GET(target_6, _scope, module, ctx, _here, _info, _helpers).flags & F_OPERATOR)) ? ": Both operands refer to:\n"_fu : ((((((((": Arguments "_fu + qBAD(human(host_args[i0].name, module, _scope, ctx, _here, _info, _helpers))) + " and "_fu) + qBAD(human(host_args[i].name, module, _scope, ctx, _here, _info, _helpers))) + " (args #"_fu) + i0) + " and #"_fu) + i) + ") both refer to:\n"_fu));
        for (int i_1 = 0; i_1 < inter.uni0n.size(); i_1++)
        {
            const s_Region& o = inter.uni0n[i_1];
            err += "\n                "_fu;
            err += ((qKW(Region_GET(o, _current_fn, module, _scope, ctx, _here, _info, _helpers).kind) + " "_fu) + qID(human(Region_GET(o, _current_fn, module, _scope, ctx, _here, _info, _helpers).name, module, _scope, ctx, _here, _info, _helpers)));
        };
        fail(fu_STR(err), _here, ctx, _info, _helpers, _scope, module);
    };
}

static fu_STR name(const int target_6, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    const s_Overload& o = GET(nested(target_6, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _info, _helpers);
    if (o.kind == "lifetime"_fu)
    {
        fu_STR str = (o.name + "("_fu);
        for (int i = 0; i < o.type.lifetime.uni0n.size(); i++)
        {
            if (i)
                str += "|"_fu;

            const int t = Region_asIndex(o.type.lifetime.uni0n[i]);
            fu_STR n = name(t, _current_fn, module, _scope, ctx, _here, _info, _helpers);
            str += n;
        };
        return str + ")"_fu;
    };
    return human(GET(nested(target_6, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _info, _helpers).name, module, _scope, ctx, _here, _info, _helpers);
}

static fu_STR addr(const s_TokenIdx& token_2, const s_Context& ctx, const s_Module& module)
{
    const s_Token& t = _token(token_2, ctx);
    if (token_2.modid != module.modid)
        return (((_fname(token_2, ctx) + "@"_fu) + t.line) + ":"_fu) + t.col;

    return (t.line + ":"_fu) + t.col;
}

static fu_STR addr_and_snippet(const s_TokenIdx& token_2, const s_Context& ctx, const s_Module& module)
{
    return (addr(token_2, ctx, module) + ":\n\n"_fu) + formatCodeSnippet(token_2, s_TokenIdx{}, 2, ctx);
}

static fu_STR RWEvent_stack(const int nodeidx_2, const int target_6, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    const s_Target* _0;
    const s_Target& nodeown_1 = (*(_0 = &(SolvedNodeData(_current_fn.out, module, _scope, ctx).target)) ? *_0 : fail("RWEvent_stack: no current fn."_fu, _here, ctx, _info, _helpers, _scope, module));
    const s_SolvedNode node_1 = s_SolvedNode { s_Target(nodeown_1), int(nodeidx_2) };
    if (SolvedNodeData(node_1, module, _scope, ctx).kind != "call"_fu)
        return "\n\tVia "_fu + qKW(SolvedNodeData(node_1, module, _scope, ctx).kind);

    if (target_6)
    {
    };
    const s_Overload& o = GET(SolvedNodeData(node_1, module, _scope, ctx).target, _scope, module, ctx, _here, _info, _helpers);
    return "\n\tAt call to "_fu + qID(o.name);
}

                                #ifndef DEFt_add_GAIn
                                #define DEFt_add_GAIn
inline void add_GAIn(fu_VEC<int>& a, const fu_VEC<int>& b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const int X = a[x];
        const int Y = b[y];
        if ((X >= Y))
        {
            if (X != Y)
            {
                a.insert(x, Y);
                y++;
            }
            else
                y++;

        };
        x++;
    };
    if (y < b.size())
        a += fu::get_view(b, y, b.size());

}
                                #endif

                                #ifndef DEFt_grow_if_oob_kwxC
                                #define DEFt_grow_if_oob_kwxC
inline fu_VEC<int>& grow_if_oob_kwxC(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_unless_oob_qZja
                                #define DEFt_unless_oob_qZja
inline const fu_VEC<int>& unless_oob_qZja(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_unless_oob_tBB8
                                #define DEFt_unless_oob_tBB8
inline const s_RWEvent& unless_oob_tBB8(fu_VEC<s_RWEvent>& a, const int i)
{
    return (i < a.size()) ? a.mutref(i) : (*(const s_RWEvent*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_grow_if_oob_tBB8
                                #define DEFt_grow_if_oob_tBB8
inline s_RWEvent& grow_if_oob_tBB8(fu_VEC<s_RWEvent>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
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

                                #ifndef DEFt_grow_if_oob_5JkW
                                #define DEFt_grow_if_oob_5JkW
inline s_Target& grow_if_oob_5JkW(fu_VEC<s_Target>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_grow_if_oob_xsUL
                                #define DEFt_grow_if_oob_xsUL
inline fu_VEC<int>& grow_if_oob_xsUL(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void trackReadWrite(fu::view<s_Region> regions, const int nodeidx_2, const s_Target& write, const fu_STR& not_read_from_but, const s_TokenIdx& _here, s_CurrentFn& _current_fn, const s_Options& options, const s_Module& module, s_Scope& _scope, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    const s_TokenIdx& token_2 = _here;
    s_Flow& flow = _current_fn.flow;
    s_Events& events = _current_fn.events;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target_6 = Region_asIndex(regions[i]);
        if (!target_6)
            continue;

        if (events.invalidated_by.size() > target_6)
        {
            const s_RWEvent& u = events.invalidated_by[target_6];
            if (u.target && !(options.dev & DEV_DisableBCK))
                fail(((((((((("BORROWCK: Cannot "_fu + (write ? "write to"_fu : (not_read_from_but ? fu_STR(not_read_from_but) : "read from"_fu))) + " "_fu) + qBAD(name(target_6, _current_fn, module, _scope, ctx, _here, _info, _helpers))) + ", reference invalidated by write to"_fu) + " "_fu) + qBAD(name(u.target, _current_fn, module, _scope, ctx, _here, _info, _helpers))) + " at "_fu) + addr_and_snippet(u.token, ctx, module)) + RWEvent_stack(u.nodeidx, u.target, _current_fn, module, _scope, ctx, _here, _info, _helpers)), _here, ctx, _info, _helpers, _scope, module);

        };
        if (events.args_written && has(flow.is_arg, target_6))
            add_GAIn(grow_if_oob_kwxC(flow.args_at_risk, target_6), fu_VEC<int>(events.args_written));

    };
    const int loop_start = _current_fn.loop_start;
    if (write)
    {
        for (int i_1 = 0; i_1 < regions.size(); i_1++)
        {
            const int target_6 = Region_asIndex(regions[i_1]);
            if (!target_6)
                continue;

            fu::view<int> invalidates_1 = unless_oob_qZja(flow.invalidates, target_6);
            for (int i_1_1 = 0; i_1_1 < invalidates_1.size(); i_1_1++)
            {
                const int other = invalidates_1[i_1_1];
                const s_RWEvent& u = unless_oob_tBB8(events.used_in_a_loop, other);
                if (u.target && !(options.dev & DEV_DisableBCK))
                    fail(((((((("BORROWCK: Write to `"_fu + name(target_6, _current_fn, module, _scope, ctx, _here, _info, _helpers)) + "`"_fu) + " invalidates the use of `"_fu) + name(other, _current_fn, module, _scope, ctx, _here, _info, _helpers)) + "` at "_fu) + addr_and_snippet(u.token, ctx, module)) + " on next loop iteration."_fu), _here, ctx, _info, _helpers, _scope, module);

            };
            for (int i_1_2 = 0; i_1_2 < invalidates_1.size(); i_1_2++)
            {
                s_RWEvent& u = grow_if_oob_tBB8(events.invalidated_by, int(invalidates_1[i_1_2]));
                if (!u.target)
                    u = s_RWEvent { int(target_6), int(nodeidx_2), s_TokenIdx(token_2) };

            };
            if (has(flow.is_arg, target_6))
            {
                add_7gVc(events.args_written, target_6);
                s_Target* _0;
                (*(_0 = &(grow_if_oob_5JkW(events.args_written_via, target_6))) ? *_0 : *_0 = s_Target(write));
                if (loop_start)
                {
                    for (int i_1_3 = 0; i_1_3 < events.args_in_a_loop.size(); i_1_3++)
                        add_7gVc(grow_if_oob_xsUL(flow.args_at_risk, int(events.args_in_a_loop[i_1_3])), target_6);

                };
            };
        };
    };
    if (loop_start)
    {
        for (int i_1 = 0; i_1 < regions.size(); i_1++)
        {
            const int target_6 = Region_asIndex(regions[i_1]);
            if (!target_6)
                continue;

            if (target_6 < loop_start)
            {
                s_RWEvent& u = grow_if_oob_tBB8(events.used_in_a_loop, target_6);
                if (!u.target)
                    u = s_RWEvent { int(loop_start), int(nodeidx_2), s_TokenIdx(token_2) };

            };
            if (has(flow.is_arg, target_6))
                add_7gVc(events.args_in_a_loop, target_6);

        };
    };
}

static void trackLocalRef(const s_Target& left, const s_Lifetime& right, const s_TokenIdx& _here, s_CurrentFn& _current_fn, const s_Options& options, const s_Module& module, s_Scope& _scope, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    trackReadWrite(right.uni0n, 0, s_Target{}, "bind to"_fu, _here, _current_fn, options, module, _scope, ctx, _info, _helpers);
    Reference_trackLocalRef(_current_fn.flow, left.index, right);
}

                                #ifndef DEFt_add_SkaC
                                #define DEFt_add_SkaC
inline void add_SkaC(fu_VEC<s_Region>& a, fu::view<s_Region> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        if ((X >= Y))
        {
            if (X != Y)
            {
                a.insert(x, Y);
                y++;
            }
            else
                y++;

        };
        x++;
    };
    if (y < b.size())
        a += fu::get_view(b, y, b.size());

}
                                #endif

static void trackReadWrite(const s_SolvedNode& node_1, const s_Target& write, const fu_STR& not_read_from_but, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Options& options, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    if (!is_ref(SolvedNodeData(node_1, module, _scope, ctx).type) || !SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index)
        return;

    const fu_VEC<s_Region>& regions = SolvedNodeData(node_1, module, _scope, ctx).type.lifetime.uni0n;
    trackReadWrite(fu_VEC<s_Region>(regions), node_1.nodeidx, write, not_read_from_but, _here, _current_fn, options, module, _scope, ctx, _info, _helpers);
}

                                #ifndef DEFt_if_first_tWdF
                                #define DEFt_if_first_tWdF
inline const s_Region& if_first_tWdF(fu::view<s_Region> s)
{
    return s.size() ? s[0] : (*(const s_Region*)fu::NIL);
}
                                #endif

static s_Lifetime Lifetime_replaceArgsAtCallsite(const s_Overload& overload, fu::view<s_SolvedNode> argNodes, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    const fu_VEC<s_Region>& returned = overload.type.lifetime.uni0n;
    fu::view<s_SolvedNode> items_5 = arg_lets(overload, module, _scope, ctx);
    if (!Region_isArg(if_first_tWdF(returned)))
        return s_Lifetime { fu_VEC<s_Region>(returned) };

    const int head = SolvedNodeData(s_SolvedNode(items_5[0]), module, _scope, ctx).target.index;
    const int tail = SolvedNodeData(s_SolvedNode(items_5[(items_5.size() - 1)]), module, _scope, ctx).target.index;
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
            const int here = SolvedNodeData(s_SolvedNode(items_5[offset]), module, _scope, ctx).target.index;
            if (here == index_2)
            {
                const s_SolvedNode& argNode = argNodes[offset];
                const s_Lifetime* _0;
                s_Lifetime argLt = (is_ref(SolvedNodeData(argNode, module, _scope, ctx).type) ? s_Lifetime((*(_0 = &(SolvedNodeData(argNode, module, _scope, ctx).type.lifetime)) ? *_0 : fail("refarg without lifetime"_fu, _here, ctx, _info, _helpers, _scope, module))) : Lifetime_temporary());
                replace_1 = Lifetime_union(replace_1, argLt);
                break;
            };
            if (!(!here || (here > index_2)))
                fail("nope, going backwards"_fu, _here, ctx, _info, _helpers, _scope, module);

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

static s_SolvedNode createEmpty(const fu_STR& kind_3, const s_Type& type_3, const s_Target& target_6, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode(kind_3, type_3, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target_6, _current_fn_or_type, module, _scope);
}

static void solveLet(s_SolvedNode& out_1, const fu_STR& id_2, const bool deadcode_on_never, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Options& options)
{
    if (SolvedNodeData(out_1, module, _scope, ctx).kind != "let"_fu)
    {
        if (SELF_TEST)
        {
            if (!(deadcode_on_never && is_never(SolvedNodeData(out_1, module, _scope, ctx).type)))
                fail((((("solveLet: results in a `"_fu + SolvedNodeData(out_1, module, _scope, ctx).kind) + ": "_fu) + id_2) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

        };
        return;
    };
    if (!(!is_ref(SolvedNodeData(out_1, module, _scope, ctx).type) || SolvedNodeData(out_1, module, _scope, ctx).type.lifetime))
        fail((("solveLet: ref without lifetime: `"_fu + id_2) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

    bool shadows = !!(SolvedNodeData(out_1, module, _scope, ctx).flags & F_SHADOW);
    fu_STR cleanID = ((SolvedNodeData(out_1, module, _scope, ctx).flags & F_COMPOUND_ID) ? fu::slice(id_2, 0, find_qVFp(id_2, std::byte('.'))) : fu_STR{});
    const fu_STR& id_3 = (cleanID ? cleanID : id_2);
    const int isArg = (SolvedNodeData(out_1, module, _scope, ctx).flags & F_ARG);
    if (!X_unpackAddrOfFnBinding(_scope.items, id_3, SolvedNodeData(out_1, module, _scope, ctx).type, shadows))
    {
        if (OPTI_dedupe_vars && !isArg)
        {
            const s_SolvedNode& init = SolvedNodeData(out_1, module, _scope, ctx).items[LET_INIT];
            if ((SolvedNodeData(s_SolvedNode(init), module, _scope, ctx).kind == "call"_fu) && !SolvedNodeData(s_SolvedNode(init), module, _scope, ctx).items)
            {
                const s_Target& target_6 = SolvedNodeData(s_SolvedNode(init), module, _scope, ctx).target;
                const s_Overload& other = GET(target_6, _scope, module, ctx, _here, _info, _helpers);
                if (other.kind == "var"_fu)
                {
                    if (isAssignable(other.type, SolvedNodeData(out_1, module, _scope, ctx).type))
                    {
                        Scope_set(_scope, id_3, target_6, shadows);
                        if (SolvedNodeData(out_1, module, _scope, ctx).flags & F_USING)
                            _scope.usings.push(s_Target(target_6));

                        out_1 = createEmpty("empty"_fu, t_void, s_Target{}, _current_fn_or_type, module, _scope);
                        return;
                    };
                };
            };
        };
        const s_Target& target_6 = (MUT(out_1, module, _current_fn_or_type, _scope, ctx).target = Binding(id_3, s_Type(SolvedNodeData(out_1, module, _scope, ctx).type), int(SolvedNodeData(out_1, module, _scope, ctx).flags), shadows, _current_fn, module, _scope, ctx, _root_scope, _ss, _helpers, _here, _info));
        GET_mut(s_Target(target_6), _scope, module).solved = out_1;
        if (!isArg)
        {
            const s_SolvedNode& init = SolvedNodeData(out_1, module, _scope, ctx).items[LET_INIT];
            if (is_ref(SolvedNodeData(s_SolvedNode(init), module, _scope, ctx).type))
                trackLocalRef(s_Target(target_6), s_Lifetime(SolvedNodeData(s_SolvedNode(init), module, _scope, ctx).type.lifetime), _here, _current_fn, options, module, _scope, ctx, _info, _helpers);

        };
        Scope_set(_scope, id_3, target_6, shadows);
        if (SolvedNodeData(out_1, module, _scope, ctx).flags & F_USING)
            _scope.usings.push(s_Target(target_6));

    };
}

static s_SolvedNode createLet(const fu_STR& id_2, const int flags_4, const s_SolvedNode& init, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Options& options, int& _notes, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    s_SolvedNode out_1 = solveLetLike_dontTouchScope(id_2, int(flags_4), s_SolvedNode(init), s_Type{}, (*(const s_Type*)fu::NIL), bool{}, module, _scope, ctx, _here, _info, _helpers, options, _notes, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, t_string, _field_items, TODO_FIX_convert_args);
    solveLet(out_1, id_2, bool{}, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _current_fn, _root_scope, _ss, options);
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

                                #ifndef DEFt_last_hang
                                #define DEFt_last_hang
inline s_SolvedNode& last_hang(fu_VEC<s_SolvedNode>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline constexpr unsigned SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

                                #ifndef DEF_SS_FN_RECUR
                                #define DEF_SS_FN_RECUR
inline constexpr unsigned SS_FN_RECUR = (0x1u << 17u);
                                #endif

static void detectRecursion(const s_Target& target_6, const s_Overload& overload, fu_VEC<s_Helpers>& _helpers, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, const s_Module& module, const s_Options& options, int& _notes)
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
            fail("Recursive lambda, what happened here?"_fu, _here, ctx, _info, _helpers, _scope, module);

        GET_mut(h.target, _scope, module).status |= status_1;
        makeNote(note, options, _here, ctx, _info, _helpers, _scope, module, _notes);
        if (h.target == target_6)
            return;

    };
    fail((((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu) + overload.status) + ")`."_fu), _here, ctx, _info, _helpers, _scope, module);
}

static s_SolvedNode CallerNode(const fu_STR& debug, s_Target&& target_6, fu_VEC<s_SolvedNode>&& args_1, const int kills_1, const fu_VEC<int>& reorder, fu::view<fu_VEC<s_Target>> conversions, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    if (reorder)
    {
        fu_VEC<s_SolvedNode> args_out {};
        args_out.resize(reorder.size());
        for (int i = 0; i < reorder.size(); i++)
        {
            const int idx = reorder[i];
            if ((idx >= 0))
                args_out.mutref(i) = args_1[idx];

        };
        args_1 = args_out;
    };
    for (int argIdx = 0; argIdx < conversions.size(); argIdx++)
    {
        fu::view<s_Target> conversion = conversions[argIdx];
        for (int i = 0; i < conversion.size(); i++)
        {
            const s_Target& t = conversion[i];
            if (EXT(t, module, _scope, ctx).min || (EXT(t, module, _scope, ctx).max && args_1.mutref(argIdx)))
            {
                args_1.mutref(argIdx) = CallerNode("__using.a"_fu, s_Target(t), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(args_1[argIdx]) } }, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
                continue;
            };
            if (i)
                fail((("Bad conversion chain, non-leading nullary: `"_fu + GET(t, _scope, module, ctx, _here, _info, _helpers).name) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

            if (args_1.mutref(argIdx))
                fail("Bad conversion chain, about to throw away an argnode."_fu, _here, ctx, _info, _helpers, _scope, module);

            args_1.mutref(argIdx) = CallerNode("__using.b"_fu, s_Target(t), fu_VEC<s_SolvedNode>{}, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
        };
    };
    const int REST_START = findRestStart(EXT(target_6, module, _scope, ctx));
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
                args_1.mutref(i) = createArrlit(fu_VEC<s_SolvedNode>(rest), (*(const s_Type*)fu::NIL), _here, ctx, _info, _helpers, _scope, module, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

        };
    };
    const bool isZeroInit = ((GET(target_6, _scope, module, ctx, _here, _info, _helpers).kind == "type"_fu) && !args_1.size());
    if (!isZeroInit)
    {
        fu_VEC<s_Argument> host_args { EXT(target_6, module, _scope, ctx).args };
        args_1.resize(host_args.size());
        for (int i = 0; i < args_1.size(); i++)
        {
            if (!args_1[i])
            {
                const s_Argument& host_arg = host_args[i];
                args_1.mutref(i) = (host_arg.dEfault ? s_SolvedNode(host_arg.dEfault) : ((void)((host_arg.flags & F_IMPLICIT) || fail((((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + serializeType(host_arg.type)) + "`."_fu), _here, ctx, _info, _helpers, _scope, module)), bindImplicitArg(host_arg.name, host_arg.type, target_6, module, _scope, ctx, _here, _info, _helpers, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args)));
            };
        };
    };
    s_Type type_3 { GET(target_6, _scope, module, ctx, _here, _info, _helpers).type };
    fu_VEC<s_Region> bck_writes {};
    if (GET(target_6, _scope, module, ctx, _here, _info, _helpers).kind == "field"_fu)
    {
        const s_Type* _0;
        type_3 = add_refs((*(_0 = &(SolvedNodeData(only_r7yd(args_1), module, _scope, ctx).type)) ? *_0 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module)), s_Type(GET(target_6, _scope, module, ctx, _here, _info, _helpers).type));
    }
    else if (GET(target_6, _scope, module, ctx, _here, _info, _helpers).kind == "var"_fu)
    {
        if (!(type_3.lifetime.uni0n.size() == 1))
            fail((("CallerNode: var "_fu + GET(target_6, _scope, module, ctx, _here, _info, _helpers).name) + " type.lifetime.len != 1"_fu), _here, ctx, _info, _helpers, _scope, module);

        if (GET(target_6, _scope, module, ctx, _here, _info, _helpers).local_of && (GET(target_6, _scope, module, ctx, _here, _info, _helpers).local_of != SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index))
        {
            s_Target _1 {};
            target_6 = injectImplicitArg(ClosureID(((_1 = tryParseClosureID(GET(target_6, _scope, module, ctx, _here, _info, _helpers).name, MODID(module))) ? _1 : s_Target(target_6))), s_Type(GET(target_6, _scope, module, ctx, _here, _info, _helpers).type), target_6, _current_fn, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _root_scope, _ss);
            const s_Type* _2;
            type_3 = (*(_2 = &(GET(target_6, _scope, module, ctx, _here, _info, _helpers).type)) ? *_2 : fail(("CallerNode: !type on var "_fu + GET(target_6, _scope, module, ctx, _here, _info, _helpers).name), _here, ctx, _info, _helpers, _scope, module));
        };
    }
    else
    {
        if (args_1)
        {
            fu::view<s_Argument> _3 {};
            fu::view<s_Argument> host_args = ((_3 = EXT(target_6, module, _scope, ctx).args) ? static_cast<fu::view<s_Argument>&&>(_3) : fail(((("CallerNode: no host args: "_fu + GET(target_6, _scope, module, ctx, _here, _info, _helpers).kind) + " "_fu) + GET(target_6, _scope, module, ctx, _here, _info, _helpers).name), _here, ctx, _info, _helpers, _scope, module));
            if (!((host_args.size() >= args_1.size())))
                fail(((("CallerNode: host_arg.len mismatch: "_fu + GET(target_6, _scope, module, ctx, _here, _info, _helpers).kind) + " "_fu) + GET(target_6, _scope, module, ctx, _here, _info, _helpers).name), _here, ctx, _info, _helpers, _scope, module);

            int mutref_first = -1;
            int mutref_last = -1;
            int ref_first = -1;
            int ref_last = -1;
            fu_VEC<s_Lifetime> bck_unwound {};
            for (int i0 = 0; i0 < args_1.size(); i0++)
            {
                const s_Argument& host_arg = host_args[i0];
                s_SolvedNode& arg = args_1.mutref(i0);
                if (SolvedNodeData(arg, module, _scope, ctx).kind == "argid"_fu)
                    arg = only_e0l4(SolvedNodeData(arg, module, _scope, ctx).items);

                const s_Type& expect = host_arg.type;

                {
                    s_Type retype = tryRetyping(arg, s_Type(expect), module, _scope, ctx, _here, _info, _helpers);
                    if (isAssignableAsArgument(expect, retype))
                        MUT(arg, module, _current_fn_or_type, _scope, ctx).type = retype;

                };
                if (is_ref(expect))
                {
                    if (!bck_unwound)
                    {
                        if ((mutref_first >= 0) || ((ref_first >= 0) && is_mutref(expect)))
                        {
                            bck_unwound.resize(args_1.size());
                            for (int i = ref_first; (i <= ref_last); i++)
                                bck_unwound.mutref(i) = Lifetime_unwind(s_Lifetime(SolvedNodeData(args_1[i], module, _scope, ctx).type.lifetime), 0, _current_fn, module, _scope, ctx, _here, _info, _helpers);

                        };
                    };
                    if (bck_unwound)
                    {
                        const s_Lifetime& unwound = (bck_unwound.mutref(i0) = Lifetime_unwind(s_Lifetime(SolvedNodeData(args_1[i0], module, _scope, ctx).type.lifetime), 0, _current_fn, module, _scope, ctx, _here, _info, _helpers));
                        if (is_mutref(expect))
                        {
                            for (int i = ref_first; (i <= ref_last); i++)
                            {
                                if (is_ref(host_args[i].type))
                                    validate(i, host_arg, unwound, bck_unwound, host_args, i0, args_1, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args, target_6);

                            };
                        }
                        else if (bck_unwound)
                        {
                            for (int i = mutref_first; (i <= mutref_last); i++)
                            {
                                if (is_mutref(host_args[i].type))
                                    validate(i, host_arg, unwound, bck_unwound, host_args, i0, args_1, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args, target_6);

                            };
                        };
                    };
                    if (is_mutref(expect))
                    {
                        if (mutref_first < 0)
                            mutref_first = i0;

                        mutref_last = i0;
                    };
                    if (ref_first < 0)
                        ref_first = i0;

                    ref_last = i0;
                };
            };
            for (int i0_1 = 0; i0_1 < args_1.size(); i0_1++)
            {
                const s_Argument& host_arg = host_args[i0_1];
                s_SolvedNode& arg = args_1.mutref(i0_1);
                maybeCopyOrMove((arg ? arg : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module)), s_Type(host_arg.type), true, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
                if (is_ref(SolvedNodeData(arg, module, _scope, ctx).type))
                {
                    if (host_arg.written_via)
                    {
                        if (SolvedNodeData(arg, module, _scope, ctx).type.lifetime.uni0n.size() > 1)
                        {
                            const s_Target left = Scope_create(_scope, "lifetime"_fu, debug, s_Type(SolvedNodeData(arg, module, _scope, ctx).type), 0, s_SolvedNode{}, int(SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index), 0u, true, module);
                            trackLocalRef(left, s_Lifetime(SolvedNodeData(arg, module, _scope, ctx).type.lifetime), _here, _current_fn, options, module, _scope, ctx, _info, _helpers);
                            MUT(arg, module, _current_fn_or_type, _scope, ctx).type.lifetime.uni0n = fu_VEC<s_Region> { fu_VEC<s_Region>::INIT<1> { Region_fromLocalIndex(left.index) } };
                        };
                        if (!(is_mutref(SolvedNodeData(arg, module, _scope, ctx).type)))
                            fail("Written but not mutref?"_fu, _here, ctx, _info, _helpers, _scope, module);

                        if (!(is_mutref(host_arg.type)))
                            fail("Not relaxed?"_fu, _here, ctx, _info, _helpers, _scope, module);

                        add_SkaC(bck_writes, SolvedNodeData(arg, module, _scope, ctx).type.lifetime.uni0n);
                    }
                    else
                        trackReadWrite(args_1[i0_1], s_Target{}, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _current_fn, _here, options, _info, _helpers);

                };
            };
            if (is_ref(type_3))
                type_3.lifetime = Lifetime_test(Lifetime_replaceArgsAtCallsite(s_Overload(GET(target_6, _scope, module, ctx, _here, _info, _helpers)), args_1, module, _scope, ctx, _here, _info, _helpers), true, _current_fn, module, _scope, ctx, _here, _info, _helpers);

        };
        if (GET(target_6, _scope, module, ctx, _here, _info, _helpers).kind == "inline"_fu)
        {
            const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
            s_ScopeSkipMemos ss0 { _ss };
            const int helpers0vars = last_dDmM(_helpers).vars.size();
            fu_DEFER(
            {
                Scope_pop(_scope, scope0, _helpers);
                _ss = ss0;
                if (_helpers)
                    last_dDmM(_helpers).vars.shrink(helpers0vars);

            });
            const s_Template& template_1 = EXT(target_6, module, _scope, ctx).tEmplate;
            ScopeSkip_setup(s_Template(template_1), scope0, true, _root_scope, _ss, _here, ctx, _info, _helpers, _scope, module);
            _scope.items += fu_VEC<s_ScopeItem>(EXT(target_6, module, _scope, ctx).extra_items);
            const s_Node& n_fn = template_1.node;
            const s_Node& n_body = last_ZDQv(n_fn.items);
            const s_Type& ret_expect_1 = GET(target_6, _scope, module, ctx, _here, _info, _helpers).type;
            fu::view<s_Argument> host_args = EXT(target_6, module, _scope, ctx).args;
            fu_VEC<s_SolvedNode> result {};
            if (!(host_args.size() == args_1.size()))
                fail("inline: arglen mismatch"_fu, _here, ctx, _info, _helpers, _scope, module);

            result.resize((args_1.size() + 1));
            for (int i = 0; i < args_1.size(); i++)
            {
                const s_Argument& slot = host_args[i];
                result.mutref(i) = createLet(fu_STR(slot.name), (slot.flags & ~F_ARG), args_1[i], module, _scope, ctx, _here, _info, _helpers, options, _notes, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, t_string, _field_items, TODO_FIX_convert_args);
            };
            const s_SolvedNode s_body = solveBlock(s_Node(n_body), s_Type(ret_expect_1), 0, short((HM_CanReturn | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL)))), kills_1, fu_STR(n_fn.value), (last_dDmM(_helpers).vars.size() - helpers0vars), _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
            last_hang(result) = s_body;
            return createBlock(s_Type(SolvedNodeData(s_body, module, _scope, ctx).type), result, s_Target{}, module, _scope, ctx, _current_fn_or_type);
        };
    };
    const s_SolvedNode callsite = SolvedNode("call"_fu, type_3, 0, debug, args_1, target_6, _current_fn_or_type, module, _scope);
    if (bck_writes)
        trackReadWrite(bck_writes, callsite.nodeidx, target_6, (*(const fu_STR*)fu::NIL), _here, _current_fn, options, module, _scope, ctx, _info, _helpers);

    if ((target_6.modid < 0) || (target_6.modid == module.modid))
    {
        s_Overload& o = GET_mut(target_6, _scope, module);
        if ((o.kind == "fn"_fu) || (o.kind == "type"_fu) || (o.kind == "var"_fu))
        {
            o.callsites += callsite;
            detectRecursion(target_6, s_Overload(o), _helpers, _here, ctx, _info, _scope, module, options, _notes);
        };
    };
    return callsite;
}

static s_SolvedNode solveCall(const s_Node& node_1, const s_Target& target_6, const int kills_1, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    fu_VEC<s_SolvedNode> args_1 = solveNodes(node_1.items, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, true, bool{}, 0, 0, M_WILL_RETYPE, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    if (is_never(SolvedNodeData(if_last_hang(args_1), module, _scope, ctx).type))
    {
        makeNote(N_DeadCall, options, _here, ctx, _info, _helpers, _scope, module, _notes);
        return createBlock(t_never, args_1, s_Target{}, module, _scope, ctx, _current_fn_or_type);
    };
    fu_STR id_2 { node_1.value };
    if (!id_2)
    {
        if (!(target_6))
            fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module);

    };
    const int qualified = (node_1.flags & F_COMPOUND_ID);
    const s_Scope& scope_1 = (qualified ? dequalify_andGetScope(id_2, _here, ctx, _info, _helpers, _scope, module) : _scope);
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    const s_Target callTargIdx = match__mutargs(scope_1, !qualified, id_2, args_1, reorder, conversions, node_1.flags, target_6, _ss, _here, ctx, _info, _helpers, _scope, module, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, TODO_FIX_convert_args);
    return CallerNode(node_1.value, s_Target(callTargIdx), fu_VEC<s_SolvedNode>(args_1), kills_1, reorder, conversions, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
}

static s_SolvedNode evalTypeAnnot(const s_Node& node_1, const fu_MAP<fu_STR, s_TypeParam>& typeParams, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    if (node_1.kind == "call"_fu)
    {
        fu::view<s_Node> items_5 = node_1.items;
        if (items_5.size() == 1)
        {
            if (node_1.value == "&"_fu)
                return solved(node_1, add_ref(s_Type(T(0, node_1, typeParams, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args)), Lifetime_temporary()), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);

            if (node_1.value == "&mut"_fu)
                return solved(node_1, add_mutref(s_Type(T(0, node_1, typeParams, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args)), Lifetime_temporary()), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);

            if (node_1.value == "[]"_fu)
                return solved(node_1, createArray(T(0, node_1, typeParams, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args)), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);

        }
        else if (items_5.size() == 2)
        {
            if (node_1.value == "Map"_fu)
                return solved(node_1, createMap(T(0, node_1, typeParams, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args), T(1, node_1, typeParams, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args)), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);

        };
        return solveCall(node_1, s_Target{}, 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    }
    else if (node_1.kind == "typeparam"_fu)
        return solved(node_1, evalTypeParam(node_1.value, typeParams, _here, ctx, _info, _helpers, _scope, module, _ss), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);
    else if ((node_1.kind == "arrlit"_fu) && (node_1.items.size() == 1))
        return solved(node_1, createSlice(T(0, node_1, typeParams, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args), Lifetime_temporary()), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);

    fail((((("TODO evalTypeAnnot: "_fu + node_1.kind) + "["_fu) + node_1.items.size()) + "]"_fu), _here, ctx, _info, _helpers, _scope, module);
}

static bool evalTypePattern(const s_Node& node_1, fu_MAP<fu_STR, s_TypeParam>& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    if (node_1.kind == "and"_fu)
    {
        for (int i = 0; i < node_1.items.size(); i++)
        {
            if (!evalTypePattern(node_1.items[i], typeParams, _here, ctx, _info, _helpers, _scope, module, _ss, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args))
                return false;

        };
        return true;
    }
    else if (node_1.kind == "or"_fu)
    {
        for (int i = 0; i < node_1.items.size(); i++)
        {
            if (evalTypePattern(node_1.items[i], typeParams, _here, ctx, _info, _helpers, _scope, module, _ss, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args))
                return true;

        };
        return false;
    }
    else if (node_1.kind == "typeassert"_fu)
    {
        const s_Node* _0;
        const s_Node& left = (*(_0 = &(node_1.items[0])) ? *_0 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
        const s_Node* _1;
        const s_Node& right = (*(_1 = &(node_1.items[1])) ? *_1 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
        if ((left.kind == "typeparam"_fu) && (right.kind == "typetag"_fu))
            return type_has(evalTypeParam(left.value, typeParams, _here, ctx, _info, _helpers, _scope, module, _ss), (right.value ? right.value : fail("Falsy type tag."_fu, _here, ctx, _info, _helpers, _scope, module)));
        else
        {
            const s_Type& actual = SolvedNodeData(evalTypeAnnot(left, typeParams, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args), module, _scope, ctx).type;
            const bool ok = trySolveTypeParams(right, s_Type(actual), typeParams, _here, ctx, _info, _helpers, _scope, module, _ss);
            if (ok && (left.kind == "typeparam"_fu))
            {
                const fu_STR& id_2 = left.value;
                s_TypeParam& tp = typeParams.mutref(id_2);
                s_Type _2 {};
                tp.consumed = (tp.consumed ? ((_2 = type_tryIntersect(tp.consumed, actual)) ? static_cast<s_Type&&>(_2) : fail("typeassert intersect fail."_fu, _here, ctx, _info, _helpers, _scope, module)) : s_Type(actual));
            };
            return ok;
        };
    };
    fail((((("TODO evalTypePattern fallthrough: "_fu + node_1.kind) + "("_fu) + node_1.items.size()) + ")"_fu), _here, ctx, _info, _helpers, _scope, module);
}

static bool isNativeBody(const s_Node& n_body)
{
    return (n_body.kind == "call"_fu) && (n_body.value == "__native"_fu);
}

static const s_Target& checkStruct(const s_Type& type_3, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    const s_Target& t = lookupStruct(type_3, module, ctx).target;
    return (GET(t, _scope, module, ctx, _here, _info, _helpers).type == type_3) ? t : (*(const s_Target*)fu::NIL);
}

                                #ifndef DEFt_pairs_XYI2
                                #define DEFt_pairs_XYI2
inline void pairs_XYI2(const fu_MAP<fu_STR, s_TypeParam>& a, int, const s_Module& module, const s_Context& ctx, s_Scope& _scope, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_ScopeItem>& res)
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
        const s_Target target_6 = ((_0 = s_Target((isStruct(type_3) ? checkStruct(type_3, module, ctx, _scope, _here, _info, _helpers) : (*(const s_Target*)fu::NIL)))) ? _0 : Scope_create(_scope, "type"_fu, ("$"_fu + id_2), type_3, 0, s_SolvedNode{}, 0, 0u, bool{}, module));
        Scope_set(res, name_3, target_6, false);
    };
}
                                #endif

static fu_VEC<s_ScopeItem> intoScopeItems(const fu_MAP<fu_STR, s_TypeParam>& typeParams, const s_Module& module, const s_Context& ctx, s_Scope& _scope, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    fu_VEC<s_ScopeItem> res {};
    pairs_XYI2(typeParams, 0, module, ctx, _scope, _here, _info, _helpers, res);
    return res;
}

static fu_VEC<s_SolvedNode>& outItems(const s_CurrentFn& _current_fn, const s_Module& module, const s_Target& _current_fn_or_type, s_Scope& _scope, const s_Context& ctx)
{
    return MUT(_current_fn.out, module, _current_fn_or_type, _scope, ctx).items;
}

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline constexpr int F_TEMPLATE = (1 << 28);
                                #endif

                                #ifndef DEF_F_PURE
                                #define DEF_F_PURE
inline constexpr int F_PURE = (1 << 13);
                                #endif

static s_Type tryGetArgSpecType(fu::view<std::byte> id_2, const fu_VEC<s_ScopeItem>& extra_items_1, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    fu_STR param = ("$"_fu + id_2);
    for (int i_1 = 0; i_1 < extra_items_1.size(); i_1++)
    {
        const s_ScopeItem& m = extra_items_1[i_1];
        if (m.id == param)
        {
            const s_Overload& o = GET(target(m), _scope, module, ctx, _here, _info, _helpers);
            if (!(o.kind == "type"_fu))
                fail((((((("tryGetArgSpecType: Not a typeparam: `"_fu + o.kind) + ":"_fu) + param) + "("_fu) + EXT(target(m), module, _scope, ctx).max) + ")`."_fu), _here, ctx, _info, _helpers, _scope, module);

            return s_Type(o.type);
        };
    };
    return s_Type{};
}

static s_SolvedNode solveLet(const s_Node& node_1, const s_Type& specType, const bool deadcode_on_never, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    s_SolvedNode out_1 = solveLetLike_dontTouchScope(node_1, specType, deadcode_on_never, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    const fu_STR& id_2 = SolvedNodeData(out_1, module, _scope, ctx).value;
    solveLet(out_1, fu_STR(id_2), deadcode_on_never, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _current_fn, _root_scope, _ss, options);
    return out_1;
}

                                #ifndef DEFt_only_8MQE
                                #define DEFt_only_8MQE
inline const s_Region& only_8MQE(fu::view<s_Region> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_Lifetime Lifetime_fromNative(fu::view<s_Node> sig, fu::view<s_SolvedNode> args_1, const s_Type& actual, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, const s_Module& module)
{
    if (!((sig.size() + FN_RET_BACK) == args_1.size()))
        fail("sig.len != args.len"_fu, _here, ctx, _info, _helpers, _scope, module);

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
                    fail("Ambiguous __native lifetime."_fu, _here, ctx, _info, _helpers, _scope, module);

                res = GET(SolvedNodeData(args_1[i], module, _scope, ctx).target, _scope, module, ctx, _here, _info, _helpers).type;
                if (!(res.lifetime))
                    fail("Missing arg lifetime."_fu, _here, ctx, _info, _helpers, _scope, module);

            };
        };
        if (!mutref || res.lifetime)
            break;

        mutref = false;
    };
    if (!(Region_isArg(only_8MQE(res.lifetime.uni0n))))
        fail("Non-single-arg __native lifetime."_fu, _here, ctx, _info, _helpers, _scope, module);

    if (!is_mutref(actual) && !isAssignable(actual, res))
        return Lifetime_makeShared(res.lifetime);

    return static_cast<s_Lifetime&&>(res.lifetime);
}

inline static fu_STR mangleArguments_Imge(fu::view<s_SolvedNode> args_1, const s_Module& module, s_Scope& _scope, const s_Context& ctx)
{
    fu_STR mangle {};
    for (int i = 0; i < args_1.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType(SolvedNodeData(args_1[i], module, _scope, ctx).type);
    };
    return mangle;
}

static fu_STR HACK_nativeNameParts(const bool isNative, const s_Node& n_body)
{
    fu_STR name_4 {};
    if (isNative && n_body.items)
    {
        for (int i = 0; i < n_body.items.size(); i++)
            name_4 += ("\n"_fu + n_body.items[i].value);

    };
    return name_4;
}

static fu_STR Autocall_splice(fu_STR& name_3, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Scope& _scope, const s_Module& module)
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
    fail((("Autocall: no `.` in id `"_fu + name_3) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);
}

                                #ifndef DEFt_unless_oob_fpW2
                                #define DEFt_unless_oob_fpW2
inline const s_Target& unless_oob_fpW2(fu::view<s_Target> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Target*)fu::NIL);
}
                                #endif

static void updateScope(const s_CurrentFn& out_2, const s_Type& retval, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const bool isNative, const bool isUnspec, const s_Target& target_6, const int isPure, const bool isInline, const s_CurrentFn& _current_fn)
{
    fu::view<s_SolvedNode> items_6 = SolvedNodeData(out_2.out, module, _scope, ctx).items;
    const int N = (items_6.size() + FN_RET_BACK);
    int min_2 = 0;
    int max_2 = 0;
    fu_VEC<s_Argument> args_2 {};
    for (int i = 0; i < N; i++)
    {
        const s_SolvedNode& argNode = items_6[i];
        if (!(SolvedNodeData(s_SolvedNode(argNode), module, _scope, ctx).kind == "let"_fu))
            fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module);

        fu_STR name_3 { SolvedNodeData(s_SolvedNode(argNode), module, _scope, ctx).value };
        fu_STR autocall_1 = ((SolvedNodeData(s_SolvedNode(argNode), module, _scope, ctx).flags & F_COMPOUND_ID) ? Autocall_splice(name_3, _here, ctx, _info, _helpers, _scope, module) : fu_STR{});
        const bool isImplicit = !!(SolvedNodeData(s_SolvedNode(argNode), module, _scope, ctx).flags & F_IMPLICIT);
        s_BitSet risk_free_1 = (!isNative && !isUnspec ? ArgsAtRisk_listRiskFree(out_2.flow, i) : s_BitSet{});
        const s_Target& argTarget = SolvedNodeData(s_SolvedNode(argNode), module, _scope, ctx).target;
        const s_Target& written_via_1 = (is_mutref(SolvedNodeData(s_SolvedNode(argNode), module, _scope, ctx).type) ? (isNative ? target_6 : unless_oob_fpW2(out_2.events.args_written_via, argTarget.index)) : (*(const s_Target*)fu::NIL));

        // Disabling to allow bootstrap with failing pure asserts.
        // if (isPure && written_via_1)
        //     fail((("Not pure: arg "_fu + qID(human(name_3, module, _scope, ctx, _here, _info, _helpers))) + " is written to via TODO EXPLAIN."_fu), _here, ctx, _info, _helpers, _scope, module);

        s_Argument arg = s_Argument { fu_STR(name_3), fu_STR(autocall_1), s_Type(SolvedNodeData(s_SolvedNode(argNode), module, _scope, ctx).type), s_SolvedNode((!isImplicit ? SolvedNodeData(s_SolvedNode(argNode), module, _scope, ctx).items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), int(SolvedNodeData(s_SolvedNode(argNode), module, _scope, ctx).flags), s_BitSet(risk_free_1), s_Target(written_via_1) };
        if (!(arg.type || isUnspec))
            fail((("Unexpected untyped argument: `"_fu + name_3) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

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
    s_Overload& overload = GET_mut(target_6, _scope, module);
    s_Extended& ext = EXT_mut(target_6, module, _scope);
    bool change = false;
    if (overload.callsites)
    {
        change = ((args_2.size() != ext.args.size()) || !(overload.type == retval));
        if (!change)
        {
            for (int i_1 = 0; i_1 < args_2.size(); i_1++)
            {
                const s_Argument& a = args_2[i_1];
                const s_Argument& b = ext.args[i_1];
                if (!((a.name == b.name) && (a.type == b.type)))
                {
                    change = true;
                    break;
                };
            };
        };
    };
    ext.min = min_2;
    ext.max = max_2;
    ext.args = args_2;
    overload.type = retval;
    if (isInline)
        return;

    if (!(retval))
        fail("FnDecl_update: no return type."_fu, _here, ctx, _info, _helpers, _scope, module);

    if (is_ref(retval))
        Lifetime_test(retval.lifetime, bool{}, _current_fn, module, _scope, ctx, _here, _info, _helpers);

    overload.flags = SolvedNodeData(out_2.out, module, _scope, ctx).flags;
    overload.solved = (!isUnspec ? out_2.out : (*(const s_SolvedNode*)fu::NIL));
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

                                #ifndef DEFt_ArgsWritten_shake_cRKZ
                                #define DEFt_ArgsWritten_shake_cRKZ
inline void ArgsWritten_shake_cRKZ(const s_Flow& flow, fu_VEC<s_Target>& args_1)
{
    for (int i = std::min(args_1.size(), flow.arg_aliases.size()); i-- > 0; )
    {
        const s_Target& x = args_1[i];
        if (x)
        {
            fu::view<int> aliases = flow.arg_aliases[i];
            for (int i_1 = 0; i_1 < aliases.size(); i_1++)
            {
                s_Target& y = args_1.mutref(aliases[i_1]);
                if (!y)
                    y = x;

            };
        };
    };
}
                                #endif

static s_Target doTrySpecialize(const s_Target& into, const s_Target& overloadIdx, fu::view<s_SolvedNode> args_in, fu_STR&& mangle, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    fu_VEC<s_Type> args_1 {};
    if (use_reorder)
    {
        for (int i = 0; i < reorder.size(); i++)
        {
            const int callsiteIndex = reorder[i];
            args_1.push(((callsiteIndex >= 0) && (callsiteIndex < args_in.size()) ? SolvedNodeData(args_in[callsiteIndex], module, _scope, ctx).type : (*(const s_Type*)fu::NIL)));
        };
    }
    else
    {
        for (int i = 0; i < args_in.size(); i++)
            args_1.push(SolvedNodeData(args_in[i], module, _scope, ctx).type);

    };
    for (int i = 0; i < conversions.size(); i++)
    {
        const fu_VEC<s_Target>& c = conversions[i];
        if (c)
            args_1.mutref(i) = GET(last_mnBR(c), _scope, module, ctx, _here, _info, _helpers).type;

    };
    if (REST_TYPE)
        args_1.mutref(REST_START) = REST_TYPE;

    fu_STR mangle00 { mangle };
    const s_Target SPECFAIL = s_Target { 2147483647, 0 };
    const s_Target& original = (overloadIdx ? overloadIdx : into ? into : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
    s_Template template_1 { EXT(original, module, _scope, ctx).tEmplate };
    int parent_idx = GET(original, _scope, module, ctx, _here, _info, _helpers).local_of;
    for (int i_1 = 0; i_1 < args_1.size(); i_1++)
    {
        const s_Type& arg_t = args_1[i_1];
        if (type_isAddrOfFn(arg_t))
            unpackAddrOfFn_zqro(arg_t.vtype.canon, 0, module, _scope, ctx, _here, _info, _helpers, template_1, parent_idx);

    };
    const bool isInline = !!(template_1.node.flags & F_INLINE);
    if (!into && !isInline)
        setSpec(mangle, SPECFAIL, true, isInline, _here, ctx, _info, _helpers, _scope, module, _specs);

    s_Target target_6 {};

    {
        const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
        s_ScopeSkipMemos ss0 { _ss };
        const int helpers0vars = last_dDmM(_helpers).vars.size();
        fu_DEFER(
        {
            Scope_pop(_scope, scope0, _helpers);
            _ss = ss0;
            if (_helpers)
                last_dDmM(_helpers).vars.shrink(helpers0vars);

        });
        ScopeSkip_setup(template_1, scope0, isInline, _root_scope, _ss, _here, ctx, _info, _helpers, _scope, module);
        fu::view<s_Node> items_5 = template_1.node.items;
        s_Node& n_fn = template_1.node;
        if (!(n_fn.kind == "fn"_fu))
            fail("n_fn not a `fn`."_fu, _here, ctx, _info, _helpers, _scope, module);

        bool ok = true;
        bool remangle = false;
        fu_MAP<fu_STR, s_TypeParam> typeParams {};
        if (!into)
        {
            fu::view<std::byte> kind_3 = template_1.node.kind;
            const int numArgs = ((kind_3 == "fn"_fu) ? (items_5.size() + FN_RET_BACK) : fail(("TODO numArgs for template:"_fu + kind_3), _here, ctx, _info, _helpers, _scope, module));
            fu_VEC<int> retypeIndices {};
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
                    const s_Node& argNode = (*(_0 = &(items_5[i_2])) ? *_0 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
                    const s_Node& annot = argNode.items[LET_TYPE];
                    if (CANNOT_definit_mutrefs && is_mutref(inType) && argNode.items[LET_INIT])
                        inType = clear_mutref(s_Type(inType));

                    if (couldRetype(inValue, module, _scope, ctx))
                    {
                        s_TypeParam* _1;
                        const s_Type& paramType = ((annot.kind == "typeparam"_fu) ? (*(_1 = &(typeParams.upsert(annot.value))) ? *_1 : *_1 = s_TypeParam{}).matched : ((annot.kind == "call"_fu) && !annot.items ? Scope_lookupType(annot, _here, ctx, _info, _helpers, _scope, module, _ss) : (*(const s_Type*)fu::NIL)));
                        if (paramType)
                        {
                            s_Type retype = tryRetyping(inValue, s_Type(paramType), module, _scope, ctx, _here, _info, _helpers);
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
                        fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module);

                    if (inType)
                    {
                        const s_Type& exactType = EXT(original, module, _scope, ctx).args[i_2].type;
                        if (exactType)
                        {
                            args_1.mutref(i_2) = exactType;
                            continue;
                        };
                        const fu_STR& argName = (argNode.value ? argNode.value : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
                        s_TypeParam* _2;
                        s_TypeParam& argName_typeParam = (*(_2 = &(typeParams.upsert(argName))) ? *_2 : *_2 = s_TypeParam{});
                        if (argNode.flags & F_MUT)
                            inType = clear_refs(s_Type(inType));
                        else
                            inType = add_ref(s_Type(inType), Lifetime_temporary());

                        (!argName_typeParam ? argName_typeParam : fail((("Type param name collision with argument: `"_fu + argName) + "`."_fu), _here, ctx, _info, _helpers, _scope, module)).matched = inType;
                        if (annot)
                        {
                            const bool argOk = (inType && trySolveTypeParams(annot, s_Type(inType), typeParams, _here, ctx, _info, _helpers, _scope, module, _ss));
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
                const int start_1 = ((_3 = (find_ajCN(mangle, std::byte(' ')) + 1)) ? _3 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
                mangle = (fu::slice(mangle, 0, start_1) + mangleArguments_AfYs(args_1));
                if (mangle00 != mangle)
                {
                    s_Target _4 {};
                    const s_Target preexisting = ((_4 = s_Target(_specs[mangle])) ? _4 : s_Target{});
                    if (preexisting)
                    {
                        setSpec(mangle00, preexisting, bool{}, isInline, _here, ctx, _info, _helpers, _scope, module, _specs);
                        return preexisting;
                    };
                    if (!into)
                        setSpec(mangle, SPECFAIL, true, isInline, _here, ctx, _info, _helpers, _scope, module, _specs);

                };
            };
            if (!ok)
                return SPECFAIL;

            const s_Node* _5;
            const s_Node& body = (*(_5 = &(items_5[(items_5.size() + FN_BODY_BACK)])) ? *_5 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
            if (body.kind == "pattern"_fu)
            {
                const fu_MAP<fu_STR, s_TypeParam>& undo = typeParams;
                fu::view<s_Node> branches = body.items;
                bool did_match = false;
                for (int i_2 = 0; i_2 < branches.size(); i_2++)
                {
                    const s_Node& cond = branches[i_2].items[0];
                    if (cond && !evalTypePattern(cond, typeParams, _here, ctx, _info, _helpers, _scope, module, _ss, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args))
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
                        sig.mutref((sig.size() + FN_BODY_BACK)) = (n_body ? n_body : fail("doTrySpec: no case/body."_fu, _here, ctx, _info, _helpers, _scope, module));
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
                    const s_Node& argNode = (*(_6 = &(items_5[i_2])) ? *_6 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
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
        target_6 = (into ? s_Target(into) : Scope_create(_scope, "_no_kind_yet_"_fu, fu_STR{}, s_Type{}, 0, s_SolvedNode{}, parent_idx, (SS_DID_START | SS_LAZY), bool{}, module));
        const fu_VEC<s_ScopeItem>& extra_items_1 = (into ? EXT(original, module, _scope, ctx).extra_items : (EXT_mut(target_6, module, _scope).extra_items = intoScopeItems(typeParams, module, ctx, _scope, _here, _info, _helpers)));
        s_Target current_fn_or_type0 { _current_fn_or_type };
        fu_DEFER(_current_fn_or_type = current_fn_or_type0);
        _current_fn_or_type = target_6;
        if (!SolvedNodeData(_current_fn.out, module, _scope, ctx).target)
            _anons = 0;


        {
            s_Extended& o = EXT_mut(target_6, module, _scope);
            o.locals.clear();
            o.nodes.clear();
        };
        s_CurrentFn out_1 = s_CurrentFn { solved(n_fn, X_addrofTarget(target_6), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target_6, _current_fn_or_type, module, _scope), s_Flow{}, s_Events{}, 0 };
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
        outItems(_current_fn, module, _current_fn_or_type, _scope, ctx).resize(inItems.size());
        _scope.items += fu_VEC<s_ScopeItem>(extra_items_1);
        const bool isFirst = !GET(target_6, _scope, module, ctx, _here, _info, _helpers).solved;
        const int isTemplate = (template_1.node.flags & F_TEMPLATE);
        const bool isSpec = (isTemplate && (!into || !isFirst));
        const bool isUnspec = (isTemplate && !isSpec);
        const int isPure = (template_1.node.flags & F_PURE);
        for (int i_2 = 0; i_2 < (inItems.size() + FN_RET_BACK); i_2++)
        {
            const s_Node& n_arg = inItems[i_2];
            if (isUnspec && ((n_arg.flags & F_TEMPLATE) || !n_arg.items[LET_TYPE]))
            {
                outItems(_current_fn, module, _current_fn_or_type, _scope, ctx).mutref(i_2) = SolvedNode("let"_fu, s_Type{}, n_arg.flags, n_arg.value, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<2> { s_SolvedNode{}, s_SolvedNode((n_arg.items[LET_INIT] ? TODO_FIX_template_defarg : (*(const s_SolvedNode*)fu::NIL))) } }, s_Target{}, _current_fn_or_type, module, _scope);
                continue;
            };
            s_Type specType = (isSpec ? tryGetArgSpecType(n_arg.value, extra_items_1, _scope, module, ctx, _here, _info, _helpers) : s_Type{});
            const s_SolvedNode arg = solveLet(n_arg, specType, bool{}, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
            outItems(_current_fn, module, _current_fn_or_type, _scope, ctx).mutref(i_2) = arg;
            if (!isUnspec && SolvedNodeData(arg, module, _scope, ctx).target)
                Reference_trackArgument(_current_fn.flow, SolvedNodeData(arg, module, _scope, ctx).target.index, i_2);

        };
        const s_Node& n_ret = (!isUnspec ? inItems[(inItems.size() + FN_RET_BACK)] : (*(const s_Node*)fu::NIL));
        const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
        if (!(n_body))
            fail("solveFn: no body."_fu, _here, ctx, _info, _helpers, _scope, module);

        const bool isNative = isNativeBody(n_body);
        if (!isNative && !isUnspec)
        {
            if (!(n_body.kind == "block"_fu))
                fail((("solveFn: Body not a block: `"_fu + n_body.kind) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

        };
        const s_Type& ret_expect_1 = (n_ret ? SolvedNodeData(evalTypeAnnot(n_ret, (*(const fu_MAP<fu_STR, s_TypeParam>*)fu::NIL), module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args), module, _scope, ctx).type : (*(const s_Type*)fu::NIL));
        s_Type ret_seed { (n_ret ? (ret_expect_1 ? ret_expect_1 : fail(("falsy ret_expect: "_fu + n_fn.value), _here, ctx, _info, _helpers, _scope, module)) : t_never) };
        if (ret_seed.lifetime)
            ret_seed.lifetime = (isNative ? Lifetime_fromNative(inItems, fu::get_view(SolvedNodeData(_current_fn.out, module, _scope, ctx).items, 0, (SolvedNodeData(_current_fn.out, module, _scope, ctx).items.size() + FN_RET_BACK)), ret_seed, _here, ctx, _info, _helpers, _scope, module) : Lifetime_static());
        else if (is_ref(ret_seed))
            fail("fn.ret_actual is a ref without a lifetime."_fu, _here, ctx, _info, _helpers, _scope, module);

        if (isFirst)
        {

            {
                fu_STR name_3 { (n_fn.value ? n_fn.value : fail("TODO anonymous fns"_fu, _here, ctx, _info, _helpers, _scope, module)) };
                if (isSpec && !isNative && !isInline)
                {
                    fu_STR sig = mangleArguments_Imge(fu::get_view(outItems(_current_fn, module, _current_fn_or_type, _scope, ctx), 0, (outItems(_current_fn, module, _current_fn_or_type, _scope, ctx).size() + FN_RET_BACK)), module, _scope, ctx);
                    if (sig)
                    {
                        fu_STR _7 {};
                        fu_STR hash = ((_7 = hash62(sig, 4)) ? static_cast<fu_STR&&>(_7) : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
                        name_3 += ("_"_fu + hash);
                    };
                };
                s_Overload& overload = GET_mut(target_6, _scope, module);
                fu_STR _8 {};
                overload.name = ((_8 = HACK_nativeNameParts(isNative, n_body)) ? static_cast<fu_STR&&>(_8) : name_3 ? fu_STR(name_3) : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
                overload.kind = (isUnspec ? "template"_fu : (isNative ? "__native"_fu : (isInline ? "inline"_fu : "fn"_fu)));
                s_Extended& ext = EXT_mut(target_6, module, _scope);
                ext.tEmplate = template_1;
                ext.spec_of = overloadIdx;
            };
            updateScope(_current_fn, s_Type((isInline ? ret_expect_1 : ret_seed)), module, _scope, ctx, _here, _info, _helpers, isNative, isUnspec, target_6, isPure, isInline, _current_fn);
            if (!into && !isInline)
            {
                int _9 {};
                const int start_1 = ((_9 = (find_ajCN(mangle0, std::byte(' ')) + 1)) ? _9 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module));
                mangle = (fu::slice(mangle0, 0, start_1) + mangleArguments_Jnb9(EXT(target_6, module, _scope, ctx).args));
                s_Target preexisting {};
                const bool nx0 = (mangle0 != mangle);
                if (nx0)
                {
                    s_Target _10 {};
                    preexisting = ((_10 = s_Target(_specs[mangle])) ? _10 : s_Target{});
                    setSpec(mangle0, (preexisting ? preexisting : target_6), bool{}, isInline, _here, ctx, _info, _helpers, _scope, module, _specs);
                };
                const bool nx00 = (mangle00 != mangle);
                if (nx00 && (mangle00 != mangle0))
                    setSpec(mangle00, (preexisting ? preexisting : target_6), bool{}, isInline, _here, ctx, _info, _helpers, _scope, module, _specs);

                if (preexisting)
                    return preexisting;

                setSpec(mangle, target_6, (nx0 ? nx00 : (*(const bool*)fu::NIL)), isInline, _here, ctx, _info, _helpers, _scope, module, _specs);
            };
        };
        bool didSetBody = false;
        if (!isInline && !isUnspec)
        {
            s_Type retval { ret_seed };
            if (!isNative)
            {
                const s_SolvedNode s_body = solveBlock(n_body, s_Type(ret_expect_1), target_6.index, short((((HM_Function | HM_CanReturn) | HM_LabelUsed) | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL)))), 0, n_fn.value, (last_dDmM(_helpers).vars.size() - helpers0vars), _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
                retval = SolvedNodeData(s_body, module, _scope, ctx).type;
                outItems(_current_fn, module, _current_fn_or_type, _scope, ctx).mutref((outItems(_current_fn, module, _current_fn_or_type, _scope, ctx).size() + FN_BODY_BACK)) = (s_body ? s_body : fail("falsy body"_fu, _here, ctx, _info, _helpers, _scope, module));
                didSetBody = true;
                ArgsAtRisk_shake(_current_fn.flow);
                ArgsWritten_shake_cRKZ(s_Flow(_current_fn.flow), _current_fn.events.args_written_via);
            };
            outItems(_current_fn, module, _current_fn_or_type, _scope, ctx).mutref((outItems(_current_fn, module, _current_fn_or_type, _scope, ctx).size() + FN_RET_BACK)) = createEmpty("empty"_fu, retval, s_Target{}, _current_fn_or_type, module, _scope);
            updateScope(_current_fn, retval, module, _scope, ctx, _here, _info, _helpers, isNative, isUnspec, target_6, isPure, isInline, _current_fn);
        };
        if (!didSetBody)
        {
            const s_Overload& o = GET(target_6, _scope, module, ctx, _here, _info, _helpers);
            if (!(o.kind != "fn"_fu))
                fail(((((("did not set body on "_fu + o.kind) + " "_fu) + o.name) + ": "_fu) + humanizeType(o.type)), _here, ctx, _info, _helpers, _scope, module);

        };
    };
    lazySolveEnd(target_6, _scope, module, _here, ctx, _info, _helpers, options, _notes, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, t_string, _field_items, TODO_FIX_convert_args);
    return target_6;
}

static s_Target trySpecialize(const s_Target& overloadIdx, fu::view<s_SolvedNode> args_1, fu_STR& args_mangled, const int REST_START, const s_Type& REST_TYPE, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    fu_STR* _0;
    (*(_0 = &(args_mangled)) ? *_0 : *_0 = mangleArguments(args_1, reorder, use_reorder, conversions, REST_START, REST_TYPE, _scope, module, ctx, _here, _info, _helpers));
    fu_STR mangle = ((((overloadIdx.modid + "#"_fu) + overloadIdx.index) + " "_fu) + args_mangled);
    s_Target _1 {};
    const s_Target spec = ((_1 = s_Target(_specs[mangle])) ? _1 : doTrySpecialize(s_Target{}, overloadIdx, args_1, fu_STR(mangle), reorder, use_reorder, conversions, REST_START, REST_TYPE, module, _scope, ctx, _here, _info, _helpers, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args));
    return s_Target((!is_SPECFAIL(spec) ? spec : (*(const s_Target*)fu::NIL)));
}

static void propagateType(s_SolvedNode&& node_1, const s_Type& slot, s_Module& module, s_Target& _current_fn_or_type, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    if (!try_relax(MUT(node_1, module, _current_fn_or_type, _scope, ctx).type, slot))
        return;

    fu::view<std::byte> k = SolvedNodeData(node_1, module, _scope, ctx).kind;
    s_Target t { SolvedNodeData(node_1, module, _scope, ctx).target };
    if (k == "let"_fu)
    {
        const s_SolvedNode& init = (SolvedNodeData(node_1, module, _scope, ctx).items ? SolvedNodeData(node_1, module, _scope, ctx).items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL));
        if (init)
        {
            propagateType(s_SolvedNode(SolvedNodeData(node_1, module, _scope, ctx).items[LET_INIT]), s_Type(SolvedNodeData(node_1, module, _scope, ctx).type), module, _current_fn_or_type, _scope, ctx, _here, _info, _helpers, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
            if (is_ref(SolvedNodeData(node_1, module, _scope, ctx).type))
                MUT(node_1, module, _current_fn_or_type, _scope, ctx).type.lifetime = SolvedNodeData(s_SolvedNode(init), module, _scope, ctx).type.lifetime;

        };
    };
    if (k == "call"_fu)
    {
        if (GET(t, _scope, module, ctx, _here, _info, _helpers).kind == "field"_fu)
            return propagateType(s_SolvedNode(SolvedNodeData(node_1, module, _scope, ctx).items[0]), s_Type(SolvedNodeData(node_1, module, _scope, ctx).type), module, _current_fn_or_type, _scope, ctx, _here, _info, _helpers, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

        if (EXT(t, module, _scope, ctx).spec_of && is_ref(GET(t, _scope, module, ctx, _here, _info, _helpers).type))
        {
            fu::view<s_SolvedNode> argLets = arg_lets(s_Overload(GET(t, _scope, module, ctx, _here, _info, _helpers)), module, _scope, ctx);
            fu_VEC<s_SolvedNode> relaxed {};
            for (int i = 0; i < SolvedNodeData(node_1, module, _scope, ctx).items.size(); i++)
            {
                const s_SolvedNode& orig = SolvedNodeData(node_1, module, _scope, ctx).items[i];
                if (TODO_FIX_has(GET(t, _scope, module, ctx, _here, _info, _helpers).type.lifetime.uni0n, Region_fromArgIndex(SolvedNodeData(s_SolvedNode(argLets[i]), module, _scope, ctx).target.index)))
                {
                    s_Type type_3 { SolvedNodeData(s_SolvedNode(orig), module, _scope, ctx).type };
                    if (try_relax(type_3, slot))
                    {
                        if (!relaxed)
                            relaxed = fu::slice(SolvedNodeData(node_1, module, _scope, ctx).items, 0, i);

                        relaxed += SolvedNode("__relaxed"_fu, type_3, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);
                        continue;
                    };
                };
                if (relaxed)
                    relaxed += orig;

            };
            if (relaxed)
            {
                fu_STR args_mangled {};
                const s_Target spec = trySpecialize(s_Target(EXT(t, module, _scope, ctx).spec_of), relaxed, args_mangled, relaxed.size(), s_Type{}, fu::view<int>{}, bool{}, fu_VEC<fu_VEC<s_Target>>{}, _scope, module, ctx, _here, _info, _helpers, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
                if (spec && !(spec == EXT(t, module, _scope, ctx).spec_of))
                {
                    const s_Overload& o1 = GET(spec, _scope, module, ctx, _here, _info, _helpers);
                    checkAssignable(SolvedNodeData(node_1, module, _scope, ctx).type, o1.type, "Relaxed specialization does not return a subtype"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _info, _helpers, _scope, module);
                    if (is_ref(SolvedNodeData(node_1, module, _scope, ctx).type))
                        MUT(node_1, module, _current_fn_or_type, _scope, ctx).type.lifetime = Lifetime_test(Lifetime_replaceArgsAtCallsite(s_Overload(o1), relaxed, module, _scope, ctx, _here, _info, _helpers), true, _current_fn, module, _scope, ctx, _here, _info, _helpers);

                    MUT(node_1, module, _current_fn_or_type, _scope, ctx).target = spec;
                    makeNote(N_RelaxRespec, options, _here, ctx, _info, _helpers, _scope, module, _notes);
                    for (int i_1 = 0; i_1 < SolvedNodeData(node_1, module, _scope, ctx).items.size(); i_1++)
                    {
                        const s_SolvedNode& orig = SolvedNodeData(node_1, module, _scope, ctx).items[i_1];
                        const s_SolvedNode& next = relaxed[i_1];
                        if (SolvedNodeData(next, module, _scope, ctx).kind == "__relaxed"_fu)
                            propagateType(s_SolvedNode(orig), s_Type(SolvedNodeData(next, module, _scope, ctx).type), module, _current_fn_or_type, _scope, ctx, _here, _info, _helpers, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

                    };
                };
            };
            return;
        };
    };
}

static s_SolvedNode createCopy(const s_SolvedNode& node_1, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Options& options, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Target& _current_fn_or_type)
{
    trackReadWrite(node_1, s_Target{}, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _current_fn, _here, options, _info, _helpers);
    return SolvedNode("copy"_fu, clear_refs(s_Type(SolvedNodeData(node_1, module, _scope, ctx).type)), 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(node_1) } }, s_Target{}, _current_fn_or_type, module, _scope);
}

static void maybeCopyOrMove(s_SolvedNode& node_1, const s_Type& slot, const bool isArgument, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    if (SELF_TEST)
    {
        if (!((slot.vtype.canon == SolvedNodeData(node_1, module, _scope, ctx).type.vtype.canon) || is_never(SolvedNodeData(node_1, module, _scope, ctx).type)))
            fail(((("Considering copy or move for incompatible types: "_fu + humanizeType(slot)) + " <- "_fu) + humanizeType(SolvedNodeData(node_1, module, _scope, ctx).type)), _here, ctx, _info, _helpers, _scope, module);

    };
    propagateType(s_SolvedNode(node_1), slot, module, _current_fn_or_type, _scope, ctx, _here, _info, _helpers, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    if (is_ref(slot))
    {
        if (is_trivial(SolvedNodeData(node_1, module, _scope, ctx).type))
        {
            if ((SolvedNodeData(node_1, module, _scope, ctx).kind == "definit"_fu) && isArgument)
                MUT(node_1, module, _current_fn_or_type, _scope, ctx).type = clear_refs(s_Type(SolvedNodeData(node_1, module, _scope, ctx).type));

        };
        return;
    };
    if (!is_ref(SolvedNodeData(node_1, module, _scope, ctx).type))
        return;

    if (SolvedNodeData(node_1, module, _scope, ctx).kind == "definit"_fu)
    {
        MUT(node_1, module, _current_fn_or_type, _scope, ctx).type = clear_refs(s_Type(SolvedNodeData(node_1, module, _scope, ctx).type));
        return;
    };
    if (!is_rx_copy(slot))
        fail(("Needs an explicit STEAL or CLONE: "_fu + humanizeType(slot)), _here, ctx, _info, _helpers, _scope, module);

    if (!is_trivial(SolvedNodeData(node_1, module, _scope, ctx).type))
    {
        if (!(USE_nontriv_autocopy))
            fail("Non-trivial implicit copy."_fu, _here, ctx, _info, _helpers, _scope, module);

        makeNote(N_NonTrivAutoCopy, options, _here, ctx, _info, _helpers, _scope, module, _notes);
    };
    node_1 = createCopy(node_1, module, _scope, ctx, _current_fn, _here, options, _info, _helpers, _current_fn_or_type);
}

                                #ifndef DEFt_only_hang
                                #define DEFt_only_hang
inline s_SolvedNode& only_hang(fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

                                #ifndef DEF_F_LAX
                                #define DEF_F_LAX
inline constexpr int F_LAX = (1 << 8);
                                #endif

                                #ifndef DEF_F_UNUSED
                                #define DEF_F_UNUSED
inline constexpr int F_UNUSED = (1 << 10);
                                #endif

static s_SolvedNode solveBlock(const s_Node& node_1, const s_Type& type_3, const int fnbody_of, const short mask_1, const int kills_1, const fu_STR& id_2, const int steal_1, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    fu_VEC<s_Node> nodes_1 = ((node_1.kind == "block"_fu) ? fu_VEC<s_Node>(node_1.items) : fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(node_1) } });
    const fu_STR& id_3 = (id_2 ? id_2 : ((node_1.kind == "block"_fu) ? node_1.value : (*(const fu_STR*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
    fu_DEFER(Scope_pop(_scope, scope0, _helpers));
    const int helpers_idx = _helpers.size();
    _helpers += s_Helpers { (fnbody_of ? s_Target { int(module.modid), int(fnbody_of) } : s_Target{}), fu_STR(id_3), short(mask_1), (fnbody_of ? -1 : int(SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index)), int(kills_1), (fnbody_of ? +1 : GET_next_local_index(_current_fn, module, _scope, ctx)), s_Type(type_3), s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{}, s_Events{} };
    if (steal_1)
    {
        fu_VEC<int>& old = _helpers.mutref((helpers_idx - 1)).vars;
        fu_VEC<int> vars_1 = steal_Ne2Q(old, (old.size() - steal_1), old.size());
        fu_VEC<int>& nEw = _helpers.mutref(helpers_idx).vars;
        nEw += vars_1;
    };
    const bool expr = (!fnbody_of && !is_void(type_3));
    fu_VEC<s_SolvedNode> items_5 = solveNodes(nodes_1, t_void, type_3, expr, true, bool{}, 0, (helpers_idx + 1), uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    s_Helpers& h = _helpers.mutref(helpers_idx);
    if (is_never(SolvedNodeData(if_last_hang(items_5), module, _scope, ctx).type))
    {
        if (!h.ret_actual)
            h.ret_actual = t_never;

    }
    else if (fnbody_of)
    {
        if (h.ret_actual)
        {
            if (!(isAssignable(t_void, h.ret_actual)))
                fail("Non-void returning fn missing a final return."_fu, _here, ctx, _info, _helpers, _scope, module);

        };
        h.ret_actual = t_void;
    };
    if (!fnbody_of && items_5 && !is_void(h.ret_actual))
        reportReturnType(helpers_idx, SolvedNodeData(last_r7yd(items_5), module, _scope, ctx).type, _helpers, _here, ctx, _info, _scope, module);


    {
        for (int i = 0; i < h.returns.size(); i++)
        {
            s_SolvedNode r { only_e0l4(SolvedNodeData(h.returns[i], module, _scope, ctx).items) };
            maybeCopyOrMove(r, s_Type(h.ret_actual), false, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
            only_hang(MUT(h.returns[i], module, _current_fn_or_type, _scope, ctx).items) = r;
        };
        if (!fnbody_of && items_5 && !is_void(h.ret_actual))
            maybeCopyOrMove(last_hang(items_5), s_Type(h.ret_actual), false, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    };
    if (OPTI_flatten_blocks && items_5.size())
    {
        for (; ; )
        {
            const s_SolvedNode& tail = last_r7yd(items_5);
            if ((SolvedNodeData(tail, module, _scope, ctx).kind != "block"_fu) || SolvedNodeData(tail, module, _scope, ctx).target)
                break;

            fu_VEC<s_SolvedNode> unwrap { SolvedNodeData(tail, module, _scope, ctx).items };
            items_5.pop();
            items_5 += unwrap;
        };
    };
    fu_VEC<int> vars_1 { _helpers[helpers_idx].vars };
    for (int i = vars_1.size(); i-- > 0; )
    {
        const int index_2 = vars_1[i];
        const s_Overload& var = GET(nested(index_2, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _info, _helpers);
        if ((var.flags & F_ARG) && !fnbody_of)
        {
            if (!(var.flags & F_IMPLICIT))
                fail("This shouldnt happen for regular arguments."_fu, _here, ctx, _info, _helpers, _scope, module);

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
            usage = SolvedNodeData(s_SolvedNode(var.callsites[0]), module, _scope, ctx).type;
            usage.lifetime = var.type.lifetime;
            for (int i_1 = 1; i_1 < var.callsites.size(); i_1++)
            {
                s_Type other { SolvedNodeData(s_SolvedNode(var.callsites[i_1]), module, _scope, ctx).type };
                other.lifetime = usage.lifetime;
                s_Type _0 {};
                usage = ((_0 = type_tryIntersect(usage, other)) ? static_cast<s_Type&&>(_0) : fail((((((((("Type intersection fail at usage #"_fu + i_1) + " of variable `"_fu) + var.name) + "`: `"_fu) + humanizeType(usage)) + "` <- `"_fu) + humanizeType(other)) + "`."_fu), _here, ctx, _info, _helpers, _scope, module));
            };
        }
        else
        {
            if (!(var.flags & F_LAX))
                fail((("Unused variable: `"_fu + var.name) + "`: make it `lax` if this is intentional."_fu), _here, ctx, _info, _helpers, _scope, module);

            GET_mut(nested(index_2, _current_fn, module, _scope, ctx), _scope, module).flags |= F_UNUSED;
        };
        s_Overload& o = GET_mut(nested(index_2, _current_fn, module, _scope, ctx), _scope, module);
        try_relax(o.type, usage);
        if (!(SolvedNodeData(s_SolvedNode(o.solved), module, _scope, ctx).type))
            fail("!var.solved.type, can`t propagateType"_fu, _here, ctx, _info, _helpers, _scope, module);

        propagateType(s_SolvedNode(o.solved), usage, module, _current_fn_or_type, _scope, ctx, _here, _info, _helpers, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    };
    return createBlock((h.ret_actual ? h.ret_actual : t_void), items_5, ((h.mask & HM_LabelUsed) ? h.target : (*(const s_Target*)fu::NIL)), module, _scope, ctx, _current_fn_or_type);
}

                                #ifndef DEF_HM_CanBreak
                                #define DEF_HM_CanBreak
inline constexpr short HM_CanBreak = (short(1) << short(0));
                                #endif

static s_SolvedNode createFnDef(const s_Type& type_3, const s_Target& target_6, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode("fndef"_fu, type_3, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target_6, _current_fn_or_type, module, _scope);
}

static s_SolvedNode uPrepFn_A(const s_Node& node_1, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, s_ScopeSkipMemos& _ss, const s_Target& _current_fn_or_type)
{
    const fu_STR& id_2 = node_1.value;
    const int local_of_2 = SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index;
    const s_Target target_6 = Scope_create(_scope, "fn"_fu, "__prep__"_fu, s_Type{}, node_1.flags, s_SolvedNode{}, int(local_of_2), SS_LAZY, bool{}, module);
    s_Extended& ext = EXT_mut(target_6, module, _scope);
    ext.tEmplate = createTemplate(node_1, _current_fn, _scope, _helpers, _ss);
    ext.min = int(0x7fffffffu);
    ext.max = 0;
    Scope_set(_scope, id_2, target_6, !!(node_1.flags & F_SHADOW));
    if (node_1.flags & F_CONVERSION)
        _scope.converts.push(target_6);

    return createFnDef(X_addrofTarget(target_6), target_6, _current_fn_or_type, module, _scope);
}

static s_SolvedNode uPrepStruct(const s_Node& node_1, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_ScopeSkipMemos& _ss, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    return __solveStruct(false, s_Node(node_1), s_Target{}, _scope, module, ctx, _here, _info, _helpers, _current_fn_or_type, _current_fn, _ss, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
}

static s_SolvedNode unorderedPrep_A(const s_Node& node_1, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    fu::view<std::byte> k = node_1.kind;
    if (k == "fn"_fu)
        return uPrepFn_A(node_1, _current_fn, module, _scope, ctx, _helpers, _ss, _current_fn_or_type);

    if (k == "struct"_fu)
        return uPrepStruct(node_1, _scope, module, ctx, _here, _info, _helpers, _current_fn_or_type, _current_fn, _ss, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    fail(("TODO: "_fu + k), _here, ctx, _info, _helpers, _scope, module);
}

static void uPrepFn_B(const s_Target& target_6, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    s_Template& template_1 = EXT_mut(target_6, module, _scope).tEmplate;
    if (template_1.scope_memo)
        template_1.scope_memo = Scope_snap(_scope, _helpers);

}

static void unorderedPrep_B(const s_Node& node_1, const s_Target& into, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    fu::view<std::byte> k = node_1.kind;
    if (k == "fn"_fu)
        uPrepFn_B(into, module, _scope, _helpers);

}

static fu_VEC<s_SolvedNode> solveNodes(fu::view<s_Node> nodes_1, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const bool deadcode_on_never, const bool as_blocks, const int track_reads, const int kills_1, const uint16_t mode, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
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
            HERE(node_1, _here);
            const s_Type& type_3 = (((i == (nodes_1.size() - 1)) && use_type_last) ? type_last : type_all);
            const s_SolvedNode solved_2 = (as_blocks ? solveBlock(node_1, type_3, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args) : solveNode(node_1, type_3, deadcode_on_never, ((i == (nodes_1.size() - 1)) ? kills_1 : (*(const int*)fu::NIL)), mode, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args));
            if (i < track_reads)
                trackReadWrite(solved_2, s_Target{}, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _current_fn, _here, options, _info, _helpers);

            result += solved_2;
            if (deadcode_on_never && is_never(SolvedNodeData(solved_2, module, _scope, ctx).type))
            {
                if (i < (nodes_1.size() - 1))
                    makeNote(N_DeadCode, options, _here, ctx, _info, _helpers, _scope, module, _notes);

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
            const s_Node& node_2 = (*(_0 = &(nodes_1[i_1])) ? *_0 : fail("solveNodes, prep-a: falsy node"_fu, _here, ctx, _info, _helpers, _scope, module));
            if (unorderedClassify(node_2.kind) != unorderedClass)
            {
                i1 = i_1;
                break;
            };
            HERE(node_2, _here);
            result += unorderedPrep_A(node_2, _current_fn, module, _scope, ctx, _helpers, _ss, _current_fn_or_type, _here, _info, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
        };
        if (!(i1 > i0))
            fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module);

        i = (i1 - 1);
        for (int i_1_1 = i0; i_1_1 < i1; i_1_1++)
        {
            const s_Node* _1;
            const s_Node& node_2 = (*(_1 = &(nodes_1[i_1_1])) ? *_1 : fail("solveNodes, prep-b: falsy node"_fu, _here, ctx, _info, _helpers, _scope, module));
            HERE(node_2, _here);
            unorderedPrep_B(node_2, SolvedNodeData(result[(i_1_1 + offset)], module, _scope, ctx).target, module, _scope, _helpers);
        };
        bool repeat = true;
        while (repeat)
        {
            repeat = false;
            for (int i_1_2 = i0; i_1_2 < i1; i_1_2++)
            {
                const s_Node* _2;
                const s_Node& node_2 = (*(_2 = &(nodes_1[i_1_2])) ? *_2 : fail("solveNodes, solve: falsy node"_fu, _here, ctx, _info, _helpers, _scope, module));
                HERE(node_2, _here);
                s_Target into { SolvedNodeData(result[(i_1_2 + offset)], module, _scope, ctx).target };
                if (lazySolveStart(into, s_Overload(GET(into, _scope, module, ctx, _here, _info, _helpers)), _scope, module, _here, ctx, _info, _helpers, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args))
                    repeat = true;

            };
        };
    };
    return result;
}

static s_SolvedNode solveRoot(const s_Node& node_1, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    return solved(node_1, t_void, solveNodes(node_1.items, t_void, (*(const s_Type*)fu::NIL), bool{}, bool{}, bool{}, 0, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args), s_Target{}, _current_fn_or_type, module, _scope);
}

                                #ifndef DEFt_only_ZDQv
                                #define DEFt_only_ZDQv
inline const s_Node& only_ZDQv(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_SolvedNode solveArgID(const s_Node& node_1, const s_Type& type_3, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    const s_SolvedNode expr = solveNode(only_ZDQv(node_1.items), type_3, bool{}, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    return solved(node_1, SolvedNodeData(expr, module, _scope, ctx).type, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(expr) } }, s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveArrlit(const s_Node& node_1, const s_Type& type_3, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    s_Type itemType = (type_3 ? tryClear_array(type_3) : s_Type{});
    if (!itemType && isStruct(type_3))
        return solveCall(node_1, s_Target(lookupStruct(type_3, module, ctx).target), 0, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    fu_VEC<s_SolvedNode> args_1 = solveNodes(node_1.items, itemType, (*(const s_Type*)fu::NIL), bool{}, true, bool{}, 0, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    if (is_never(SolvedNodeData(if_last_hang(args_1), module, _scope, ctx).type))
    {
        makeNote(N_DeadArrlit, options, _here, ctx, _info, _helpers, _scope, module, _notes);
        return createBlock(t_never, args_1, s_Target{}, module, _scope, ctx, _current_fn_or_type);
    };
    return createArrlit(fu_VEC<s_SolvedNode>(args_1), itemType, _here, ctx, _info, _helpers, _scope, module, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
}

extern const s_Type t_bool;

static s_SolvedNode TODO_FIX_pop(fu_VEC<s_SolvedNode>& items_5)
{
    s_SolvedNode last_1 { last_r7yd(items_5) };
    items_5.pop();
    return last_1;
}

static s_SolvedNode solveIf(const s_Node& node_1, s_Type&& type_3, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    s_SolvedNode cond = solveNode(node_1.items[0], t_bool, bool{}, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    trackReadWrite(cond, s_Target{}, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _current_fn, _here, options, _info, _helpers);
    if (is_never(SolvedNodeData(cond, module, _scope, ctx).type))
    {
        makeNote(N_DeadIf, options, _here, ctx, _info, _helpers, _scope, module, _notes);
        return cond;
    };
    s_SolvedNode cons = (((SolvedNodeData(cond, module, _scope, ctx).kind == "and"_fu) && is_never(SolvedNodeData(s_SolvedNode(last_e0l4(SolvedNodeData(cond, module, _scope, ctx).items)), module, _scope, ctx).type)) ? ((void)makeNote(N_DeadIfCons, options, _here, ctx, _info, _helpers, _scope, module, _notes), TODO_FIX_pop(MUT(cond, module, _current_fn_or_type, _scope, ctx).items)) : solveBlock(node_1.items[1], type_3, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args));
    s_SolvedNode alt = solveBlock(node_1.items[2], s_Type((type_3 ? type_3 : SolvedNodeData(cons, module, _scope, ctx).type)), 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    if (!is_void(type_3))
    {
        type_3 = superType("if/else: "_fu, SolvedNodeData(cons, module, _scope, ctx).type, SolvedNodeData(alt, module, _scope, ctx).type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _info, _helpers);
        if (!(is_ref(type_3) || !type_3.lifetime))
            fail("[if] stray lifetime"_fu, _here, ctx, _info, _helpers, _scope, module);

        maybeCopyOrMove(cons, type_3, false, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
        maybeCopyOrMove(alt, type_3, false, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    };
    if (is_never(SolvedNodeData(cons, module, _scope, ctx).type) && is_never(SolvedNodeData(alt, module, _scope, ctx).type))
        type_3 = t_never;

    return solved(node_1, (type_3 ? type_3 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module)), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { s_SolvedNode(cond), s_SolvedNode(cons), s_SolvedNode(alt) } }, s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveOr(const s_Node& node_1, s_Type&& type_3, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    fu_VEC<s_SolvedNode> items_5 = solveNodes(node_1.items, (is_void(type_3) ? t_bool : type_3), type_3, true, true, true, (node_1.items.size() - 1), 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
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
            if (is_never(SolvedNodeData(item, module, _scope, ctx).type))
            {
                hasNever = true;
                continue;
            };
            const s_SolvedNode& andLast = (hasNever && (SolvedNodeData(item, module, _scope, ctx).kind == "and"_fu) && SolvedNodeData(item, module, _scope, ctx).items ? SolvedNodeData(item, module, _scope, ctx).items[(SolvedNodeData(item, module, _scope, ctx).items.size() - 1)] : (*(const s_SolvedNode*)fu::NIL));
            const s_Type& itemType = ((andLast && !is_never(SolvedNodeData(s_SolvedNode(andLast), module, _scope, ctx).type)) ? SolvedNodeData(s_SolvedNode(andLast), module, _scope, ctx).type : SolvedNodeData(item, module, _scope, ctx).type);
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
                maybeCopyOrMove(items_5.mutref(i_1), sumType, false, module, _scope, ctx, _here, _info, _helpers, _current_fn_or_type, _specs, _ss, _root_scope, _current_fn, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

        };
    };
    return solved(node_1, type_3, items_5, s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveAnd(const s_Node& node_1, s_Type&& type_3, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    fu_VEC<s_SolvedNode> items_5 = solveNodes(node_1.items, (is_void(type_3) ? t_bool : type_3), type_3, true, true, bool{}, (node_1.items.size() - 1), 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
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
            if (is_never(SolvedNodeData(item, module, _scope, ctx).type))
                continue;

            if (sumType)
            {
                sumType = type_trySuper(sumType, SolvedNodeData(item, module, _scope, ctx).type);
                if (!is_ref(sumType))
                    break;

            }
            else
            {
                type_3 = SolvedNodeData(item, module, _scope, ctx).type;
                sumType = SolvedNodeData(item, module, _scope, ctx).type;
            };
        };
        if (!is_ref(sumType))
        {
            if (is_ref(type_3))
            {
                if (CANNOT_definit_mutrefs)
                    type_3 = clear_mutref(s_Type(type_3));

                type_3.lifetime = Lifetime_makeShared(type_3.lifetime);
            };
        }
        else
            type_3 = sumType;

    };
    return solved(node_1, type_3, items_5, s_Target{}, _current_fn_or_type, module, _scope);
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

static s_SolvedNode solveLetStatement(const s_Node& node_1, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, s_Module& module, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    if (!(node_1.kind == "let"_fu))
        fail((("Expected a `let` statement, got: `"_fu + node_1.kind) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

    return solveNode(node_1, t_void, bool{}, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
}

static s_SolvedNode solveLoop(const s_Node& node_1, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
    fu_DEFER(Scope_pop(_scope, scope0, _helpers));
    const int brk_idx = _helpers.size();
    _helpers += s_Helpers { s_Target{}, fu_STR(node_1.value), (HM_Anon | HM_CanBreak), int(SolvedNodeData(_current_fn.out, module, _scope, ctx).target.index), 0, GET_next_local_index(_current_fn, module, _scope, ctx), s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{}, s_Events{} };
    const s_Node& n_init = node_1.items[LOOP_INIT];
    const s_Node& n_pre_cond = node_1.items[LOOP_COND];
    const s_Node& n_body = node_1.items[LOOP_BODY];
    const s_Node& n_post_cond = node_1.items[LOOP_POST_COND];
    const s_Node& n_post = node_1.items[LOOP_POST];
    const s_SolvedNode init = (n_init ? solveLetStatement(n_init, _here, ctx, _info, _helpers, _scope, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args) : s_SolvedNode{});
    int loop_start0 = _current_fn.loop_start;
    const int loop_start = GET_next_local_index(_current_fn, module, _scope, ctx);
    fu_VEC<s_RWEvent> events0 { _current_fn.events.used_in_a_loop };
    _current_fn.loop_start = loop_start;
    fu_DEFER(_current_fn.loop_start = loop_start0);
    const s_SolvedNode pre_cond = (n_pre_cond ? solveNode(n_pre_cond, t_bool, bool{}, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args) : s_SolvedNode{});
    trackReadWrite(pre_cond, s_Target{}, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _current_fn, _here, options, _info, _helpers);
    const s_SolvedNode body = (n_body ? solveBlock(n_body, t_void, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args) : s_SolvedNode{});
    _current_fn.events.used_in_a_loop = events0;
    const s_SolvedNode post_cond = (n_post_cond ? solveNode(n_post_cond, t_bool, bool{}, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args) : s_SolvedNode{});
    trackReadWrite(post_cond, s_Target{}, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _current_fn, _here, options, _info, _helpers);
    const s_SolvedNode post = (n_post ? solveNode(n_post, t_void, bool{}, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args) : s_SolvedNode{});
    const s_Helpers& h = _helpers[brk_idx];
    const short label_used = (h.mask & HM_LabelUsed);
    const s_Type& type_3 = ((!pre_cond && !post_cond && !label_used) ? t_never : t_void);
    return solved(node_1, type_3, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<5> { s_SolvedNode(init), s_SolvedNode(pre_cond), s_SolvedNode(body), s_SolvedNode(post_cond), s_SolvedNode(post) } }, (label_used ? h.target : (*(const s_Target*)fu::NIL)), _current_fn_or_type, module, _scope);
}

static int Scope_lookupReturn(const fu_STR& id_2, const bool lambdaOK, fu_VEC<s_Helpers>& _helpers, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, const s_Scope& _scope, const s_Module& module)
{

    {
        const fu_VEC<s_ScopeSkip>& ss = _ss.helpers;

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
    fail((("No return `"_fu + id_2) + "` in scope."_fu), _here, ctx, _info, _helpers, _scope, module);
}

                                #ifndef DEF_F_SINGLE_STMT
                                #define DEF_F_SINGLE_STMT
inline constexpr int F_SINGLE_STMT = (1 << 31);
                                #endif

static int Scope_lookupLabel(const fu_STR& id_2, const bool cont, fu_VEC<s_Helpers>& _helpers, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, const s_Scope& _scope, const s_Module& module)
{
    int CONTINUE_BELOW {};

    {
        const fu_VEC<s_ScopeSkip>& ss = _ss.helpers;

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
                            fail((("Cannot continue to label `"_fu + id_2) + "` from here, did you mean to `break`?"_fu), _here, ctx, _info, _helpers, _scope, module);

                    };
                };
                return i_3;
            };
        };
    };
    fail((("No label `"_fu + id_2) + "` in scope."_fu), _here, ctx, _info, _helpers, _scope, module);
}

static s_Helpers& h(fu_VEC<s_Helpers>& _helpers, const int helpers_idx)
{
    return _helpers.mutref(helpers_idx);
}

static fu_STR ANON(int& _anons)
{
    return "0"_fu + _anons++;
}

static s_Target Scope_addLabel(const fu_STR& id_2, const int local_of_2, s_Scope& _scope, int& _anons, const s_Module& module)
{
    return Scope_create(_scope, "label"_fu, (id_2 ? fu_STR(id_2) : ANON(_anons)), s_Type{}, F_SHADOW, s_SolvedNode{}, local_of_2, 0u, true, module);
}

static s_SolvedNode createJump(const s_Target& target_6, const s_SolvedNode& expr, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode("jump"_fu, t_never, 0, (*(const fu_STR*)fu::NIL), (expr ? fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(expr) } } : fu_VEC<s_SolvedNode>{}), target_6, _current_fn_or_type, module, _scope);
}

                                #ifndef DEFt_if_last_tWdF
                                #define DEFt_if_last_tWdF
inline const s_Region& if_last_tWdF(fu::view<s_Region> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_Region*)fu::NIL);
}
                                #endif

static int Lifetime_vs(const s_Lifetime& lifetime_1, const int locals_start_1)
{
    return ((Region_toLocalIndex(if_first_tWdF(lifetime_1.uni0n)) >= locals_start_1) ? +1 : ((Region_toLocalIndex(if_last_tWdF(lifetime_1.uni0n)) < locals_start_1) ? -1 : 0));
}

                                #ifndef DEF_F_MOVED_FROM
                                #define DEF_F_MOVED_FROM
inline constexpr int F_MOVED_FROM = (1 << 11);
                                #endif

inline static void Lifetime_climb_HNUb(const s_Lifetime& lifetime_1, int, const int locals_start_1, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    for (int i = lifetime_1.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime_1.uni0n[i];
        if (r.index < locals_start_1)
            break;

        if (Region_isTemp(r))
            continue;

        s_Overload& o = GET_mut(nested(Region_toLocalIndex(r), _current_fn, module, _scope, ctx), _scope, module);
        if (o.flags & F_MOVED_FROM)
            continue;

        o.flags |= F_MOVED_FROM;
        s_Type init { Lifetime_climbType(s_Overload(o), module, _scope, ctx, _here, _info, _helpers) };
        if (is_ref(init))
            Lifetime_F_MOVED_FROM(init.lifetime, _current_fn, module, _scope, ctx, _here, _info, _helpers);

    };
}

static void Lifetime_F_MOVED_FROM(const s_Lifetime& lifetime_1, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers)
{
    Lifetime_climb_HNUb(lifetime_1, 0, 0, _current_fn, module, _scope, ctx, _here, _info, _helpers);
}

static s_SolvedNode createMove(const s_SolvedNode& node_1, const s_Lifetime& original, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Options& options, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Target& _current_fn_or_type)
{
    trackReadWrite(node_1, s_Target{}, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _current_fn, _here, options, _info, _helpers);
    Lifetime_F_MOVED_FROM(original, _current_fn, module, _scope, ctx, _here, _info, _helpers);
    return SolvedNode("move"_fu, clear_refs(s_Type(SolvedNodeData(node_1, module, _scope, ctx).type)), 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(node_1) } }, s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveJump(const s_Node& node_1, const int kills_1, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Scope& _scope, s_Module& module, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    int helpers_idx = ((node_1.kind == "return"_fu) ? Scope_lookupReturn(node_1.value, !!(node_1.flags & F_SINGLE_STMT), _helpers, _ss, _here, ctx, _info, _scope, module) : Scope_lookupLabel(node_1.value, (node_1.kind == "continue"_fu), _helpers, _ss, _here, ctx, _info, _scope, module));
    const s_Type* _0;
    s_SolvedNode expr = (node_1.items ? solveNode(only_ZDQv(node_1.items), s_Type((*(_0 = &(h(_helpers, helpers_idx).ret_actual)) ? *_0 : h(_helpers, helpers_idx).ret_expect)), bool{}, (helpers_idx + 1), uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args) : s_SolvedNode{});
    if (is_never(SolvedNodeData(expr, module, _scope, ctx).type))
        return expr;

    const bool redundant = (kills_1 == (helpers_idx + 1));
    if (redundant && is_void(SolvedNodeData(expr, module, _scope, ctx).type))
        return expr;

    while (h(_helpers, helpers_idx).kills)
        helpers_idx = (h(_helpers, helpers_idx).kills - 1);

    if (redundant && !(h(_helpers, helpers_idx).mask & HM_Function))
        return expr;

    s_Target* _1;
    const s_Target& target_6 = (*(_1 = &(h(_helpers, helpers_idx).target)) ? *_1 : *_1 = Scope_addLabel(h(_helpers, helpers_idx).id, h(_helpers, helpers_idx).local_of, _scope, _anons, module));
    h(_helpers, helpers_idx).mask |= HM_LabelUsed;
    if (!node_1.items)
    {
        reportReturnType(helpers_idx, t_void, _helpers, _here, ctx, _info, _scope, module);
        return createJump(target_6, s_SolvedNode{}, _current_fn_or_type, module, _scope);
    };
    if (is_ref(SolvedNodeData(expr, module, _scope, ctx).type))
    {
        s_Lifetime original { SolvedNodeData(expr, module, _scope, ctx).type.lifetime };
        MUT(expr, module, _current_fn_or_type, _scope, ctx).type.lifetime = Lifetime_unwind(s_Lifetime(SolvedNodeData(expr, module, _scope, ctx).type.lifetime), h(_helpers, helpers_idx).locals_start, _current_fn, module, _scope, ctx, _here, _info, _helpers);
        int _2 {};
        const int ltCompare = Lifetime_vs(SolvedNodeData(expr, module, _scope, ctx).type.lifetime, ((_2 = h(_helpers, helpers_idx).locals_start) ? _2 : fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module)));
        if ((ltCompare >= 0))
        {
            if (ltCompare > 0)
                expr = createMove(expr, original, module, _scope, ctx, _current_fn, _here, options, _info, _helpers, _current_fn_or_type);
            else
                expr = createCopy(expr, module, _scope, ctx, _current_fn, _here, options, _info, _helpers, _current_fn_or_type);

        }
        else
            trackReadWrite(original.uni0n, expr.nodeidx, s_Target{}, "return"_fu, _here, _current_fn, options, module, _scope, ctx, _info, _helpers);

    };
    reportReturnType(helpers_idx, SolvedNodeData(expr, module, _scope, ctx).type, _helpers, _here, ctx, _info, _scope, module);
    const s_SolvedNode jump = createJump(target_6, expr, _current_fn_or_type, module, _scope);
    h(_helpers, helpers_idx).returns += jump;
    return jump;
}

static s_SolvedNode solveInt(const s_Node& node_1, const s_Type& type_3, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, const s_Module& module, const s_Target& _current_fn_or_type)
{
    return solved(node_1, solveInt(node_1.value, type_3, _here, ctx, _info, _helpers, _scope, module), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveNum(const s_Node& node_1, const s_Type& type_3, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return solved(node_1, solveNum(node_1.value, type_3), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createDefinit(s_Type&& type_3, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    if (is_ref(type_3))
        type_3.lifetime = Lifetime_static();

    if (is_integral(type_3))
        return SolvedNode("int"_fu, type_3, 0, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);

    if (is_floating_pt(type_3))
        return SolvedNode("real"_fu, type_3, 0, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);

    return SolvedNode("definit"_fu, type_3, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveStr(const s_Node& node_1, const s_Type& t_string, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    if (!node_1.value)
        return createDefinit(add_ref(s_Type(t_string), Lifetime_temporary()), _current_fn_or_type, module, _scope);

    return solved(node_1, t_string, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveChar(const s_Node& node_1, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return solved(node_1, t_byte, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDefinit(const s_Type& type_3, const uint16_t mode, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, const s_Module& module, const s_Target& _current_fn_or_type)
{
    s_Type _0 {};
    return createDefinit(((_0 = trySolveDefinit(type_3, mode, _here, ctx, _info, _helpers, _scope, module)) ? static_cast<s_Type&&>(_0) : fail(("Cannot definit type: "_fu + serializeType(type_3)), _here, ctx, _info, _helpers, _scope, module)), _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveCatch(const s_Node& node_1, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, s_Module& module, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    if (!(node_1.items.size() == 3))
        fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module);

    const s_SolvedNode var_ok = solveLetStatement(node_1.items[0], _here, ctx, _info, _helpers, _scope, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
    fu_DEFER(Scope_pop(_scope, scope0, _helpers));
    const s_SolvedNode var_err = solveLetStatement(node_1.items[1], _here, ctx, _info, _helpers, _scope, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    const s_SolvedNode cAtch = solveNode(node_1.items[2], t_void, bool{}, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    const s_Type& type_3 = SolvedNodeData(var_ok, module, _scope, ctx).type;
    if (!(is_never(SolvedNodeData(cAtch, module, _scope, ctx).type)))
        fail("[let catch]: catch clause must exit local scope."_fu, _here, ctx, _info, _helpers, _scope, module);

    if (!((SolvedNodeData(var_err, module, _scope, ctx).kind == "let"_fu) && isAssignableAsArgument(SolvedNodeData(var_err, module, _scope, ctx).type, t_string)))
        fail(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), _here, ctx, _info, _helpers, _scope, module);

    return solved(node_1, type_3, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { s_SolvedNode(var_ok), s_SolvedNode(var_err), s_SolvedNode(cAtch) } }, s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveImport(const s_Node& node_1, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss, const s_Target& _current_fn_or_type)
{
    const s_Module& m = findModule(node_1.value, ctx, _here, _info, _helpers, _scope, module);
    Scope_import(m.modid, bool{}, _scope, _ss, _here, ctx, _info, _helpers, module);
    return createEmpty("empty"_fu, t_void, s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDefer(const s_Node& node_1, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    const s_SolvedNode item = solveNode(only_ZDQv(node_1.items), t_void, bool{}, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    return solved(node_1, t_void, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(item) } }, s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTryCatch(const s_Node& node_1, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, s_Module& module, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    if (!(node_1.items.size() == 3))
        fail(fu_STR{}, _here, ctx, _info, _helpers, _scope, module);

    const s_ScopeMemo scope0 = Scope_snap(_scope, _helpers);
    const s_SolvedNode tRy = solveNode(node_1.items[0], t_void, bool{}, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    Scope_pop(_scope, scope0, _helpers);
    const s_ScopeMemo scope0_1 = Scope_snap(_scope, _helpers);
    const s_SolvedNode err = solveLetStatement(node_1.items[1], _here, ctx, _info, _helpers, _scope, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    const s_SolvedNode cAtch = solveNode(node_1.items[2], t_void, bool{}, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    Scope_pop(_scope, scope0_1, _helpers);
    if (!((SolvedNodeData(err, module, _scope, ctx).kind == "let"_fu) && isAssignableAsArgument(SolvedNodeData(err, module, _scope, ctx).type, t_string)))
        fail(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), _here, ctx, _info, _helpers, _scope, module);

    const s_Type& type_3 = ((is_never(SolvedNodeData(tRy, module, _scope, ctx).type) && is_never(SolvedNodeData(cAtch, module, _scope, ctx).type)) ? t_never : t_void);
    return solved(node_1, type_3, fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<3> { s_SolvedNode(tRy), s_SolvedNode(err), s_SolvedNode(cAtch) } }, s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTypedef(const s_Node& node_1, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    const s_SolvedNode annot = evalTypeAnnot(only_ZDQv(node_1.items), (*(const fu_MAP<fu_STR, s_TypeParam>*)fu::NIL), module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    if (isStruct(SolvedNodeData(annot, module, _scope, ctx).type))
        Scope_set(_scope, node_1.value, lookupStruct(SolvedNodeData(annot, module, _scope, ctx).type, module, ctx).target, false);
    else
        Scope_Typedef(_scope, node_1.value, SolvedNodeData(annot, module, _scope, ctx).type, node_1.flags, (*(const fu_STR*)fu::NIL), 0u, module);

    return createEmpty("empty"_fu, t_void, s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTypeAssert(const s_Node& node_1, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    const s_Node& left = node_1.items[0];
    const s_Node& right = node_1.items[1];
    const s_Type expect = SolvedNodeData(evalTypeAnnot(right, (*(const fu_MAP<fu_STR, s_TypeParam>*)fu::NIL), module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args), module, _scope, ctx).type;
    const s_SolvedNode actual = solveNode(left, s_Type(expect), bool{}, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    checkAssignable(expect, SolvedNodeData(actual, module, _scope, ctx).type, "Type assertion failed"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _info, _helpers, _scope, module);
    return actual;
}

static s_SolvedNode solveTypeParam(const s_Node& node_1, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, const s_Module& module, s_ScopeSkipMemos& _ss, const s_Target& _current_fn_or_type)
{
    return solved(node_1, evalTypeParam(node_1.value, (*(const fu_MAP<fu_STR, s_TypeParam>*)fu::NIL), _here, ctx, _info, _helpers, _scope, module, _ss), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);
}

static void visitScope(fu::view<s_ScopeItem> items_5, bool& shadow, const fu_STR& id_2, s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    int scope_iterator {};
    s_Target target_6 {};
    bool shadows {};
    while (!shadow && (target_6 = search(items_5, id_2, scope_iterator, _ss.items, shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
        result.push(target_6);

}

                                #ifndef DEFt_each_LmTL
                                #define DEFt_each_LmTL
inline void each_LmTL(fu::view<s_Struct> a, int, bool& shadow, const fu_STR& id_2, s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
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
    each_LmTL(module_1.out.types, 0, shadow, id_2, _ss, result);
}

                                #ifndef DEFt_each_SxH4
                                #define DEFt_each_SxH4
inline void each_SxH4(const fu_VEC<int>& items_5, const fu_VEC<s_ScopeSkip>& scope_skip_1, int, const int start_1, const s_Context& ctx, bool& shadow, const fu_STR& id_2, s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
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

static s_SolvedNode solveAddrOfFn(const s_Node& node_1, s_Scope& _scope, s_ScopeSkipMemos& _ss, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, const s_Target& _current_fn_or_type)
{
    const fu_STR& id_2 = node_1.value;
    bool shadow = false;
    fu_VEC<s_Target> result {};
    visitScope(_scope.items, shadow, id_2, _ss, result);
    if (node_1.flags & F_ACCESS)
    {
        visitTypes(module, shadow, id_2, _ss, result);
        each_SxH4(_scope.imports, fu_VEC<s_ScopeSkip>(_ss.imports), 0, 0, ctx, shadow, id_2, _ss, result);
    };
    if (!(result))
        fail((("No `fn "_fu + id_2) + "` in scope."_fu), _here, ctx, _info, _helpers, _scope, module);

    s_Type type_3 = s_Type { s_ValueType { 0, 0, packAddrOfFn(result) }, s_Lifetime{} };
    return createEmpty("empty"_fu, type_3, s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDeclExpr(const s_Node& node_1, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    return s_SolvedNode(only_e0l4(solveNodes((fu::slate<1, s_Node> { s_Node(node_1) }), (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, bool{}, bool{}, 0, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args)));
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

inline static s_Node astReplace_etqb(const s_Node& node_2, int, const fu_STR& placeholder, const s_ScopeItem& field)
{
    s_Node node_3 { node_2 };
    walk(node_3, placeholder, field);
    return node_3;
}

static s_SolvedNode solveForFieldsOf(const s_Node& node_1, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, fu_VEC<s_Info>& _info, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    const fu_STR& placeholder = node_1.value;
    const s_Node& body_template = node_1.items[1];
    const s_Type& fields_of = SolvedNodeData(evalTypeAnnot(node_1.items[0], (*(const fu_MAP<fu_STR, s_TypeParam>*)fu::NIL), module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args), module, _scope, ctx).type;
    if (!(isStruct(fields_of)))
        fail((("[for fieldname]: This is not a struct: `"_fu + serializeType(fields_of)) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

    fu::view<s_ScopeItem> fields = lookupStruct(fields_of, module, ctx).items;
    fu_VEC<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        if (GET(target(field), _scope, module, ctx, _here, _info, _helpers).kind == "field"_fu)
            items_ast += astReplace_etqb(body_template, 0, placeholder, field);

    };
    fu_VEC<s_SolvedNode> items_5 = solveNodes(items_ast, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, true, bool{}, 0, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    const s_Type& type_3 = (is_never(SolvedNodeData(last_e0l4(items_5), module, _scope, ctx).type) ? t_never : t_void);
    return createBlock(type_3, items_5, s_Target{}, module, _scope, ctx, _current_fn_or_type);
}

static s_SolvedNode executeCompilerPragma(const s_Node& node_1, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Info>& _info, fu_VEC<s_Helpers>& _helpers, s_Scope& _scope, const s_Module& module, const s_Target& _current_fn_or_type)
{
    if (node_1.value == "break"_fu)
        compilerBreak();
    else
        fail((("Unknown compiler pragma: `"_fu + node_1.value) + "`."_fu), _here, ctx, _info, _helpers, _scope, module);

    return createEmpty("empty"_fu, t_void, s_Target{}, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveNode(const s_Node& node_1, const s_Type& type_3, const bool deadcode_on_never, const int kills_1, const uint16_t mode, s_TokenIdx& _here, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_Info>& _info, s_Target& _current_fn_or_type, fu_MAP<fu_STR, s_Target>& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const s_Type& t_string, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args)
{
    HERE(node_1, _here);
    fu::view<std::byte> k = node_1.kind;
    if (k == "root"_fu)
        return solveRoot(node_1, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "block"_fu)
        return solveBlock(node_1, type_3, 0, HM_CanBreak, kills_1, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "argid"_fu)
        return solveArgID(node_1, type_3, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "let"_fu)
        return solveLet(node_1, (*(const s_Type*)fu::NIL), deadcode_on_never, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "call"_fu)
        return solveCall(node_1, s_Target{}, kills_1, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "arrlit"_fu)
        return solveArrlit(node_1, type_3, module, ctx, _here, _scope, _helpers, _current_fn, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "if"_fu)
        return solveIf(node_1, s_Type(type_3), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "or"_fu)
        return solveOr(node_1, s_Type(type_3), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "and"_fu)
        return solveAnd(node_1, s_Type(type_3), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "loop"_fu)
        return solveLoop(node_1, _scope, _helpers, _current_fn, module, ctx, _here, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "break"_fu)
        return solveJump(node_1, kills_1, _helpers, _ss, _here, ctx, _info, _scope, module, _current_fn, _current_fn_or_type, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "return"_fu)
        return solveJump(node_1, kills_1, _helpers, _ss, _here, ctx, _info, _scope, module, _current_fn, _current_fn_or_type, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "continue"_fu)
        return solveJump(node_1, kills_1, _helpers, _ss, _here, ctx, _info, _scope, module, _current_fn, _current_fn_or_type, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "int"_fu)
        return solveInt(node_1, type_3, _here, ctx, _info, _helpers, _scope, module, _current_fn_or_type);

    if (k == "real"_fu)
        return solveNum(node_1, type_3, _current_fn_or_type, module, _scope);

    if (k == "str"_fu)
        return solveStr(node_1, t_string, _current_fn_or_type, module, _scope);

    if (k == "char"_fu)
        return solveChar(node_1, _current_fn_or_type, module, _scope);

    if (k == "definit"_fu)
        return solveDefinit(type_3, mode, _here, ctx, _info, _helpers, _scope, module, _current_fn_or_type);

    if (k == "catch"_fu)
        return solveCatch(node_1, _here, ctx, _info, _helpers, _scope, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "import"_fu)
        return solveImport(node_1, ctx, _here, _info, _helpers, _scope, module, _ss, _current_fn_or_type);

    if (k == "defer"_fu)
        return solveDefer(node_1, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "try"_fu)
        return solveTryCatch(node_1, _here, ctx, _info, _helpers, _scope, module, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "typedef"_fu)
        return solveTypedef(node_1, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "typeassert"_fu)
        return solveTypeAssert(node_1, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "typeparam"_fu)
        return solveTypeParam(node_1, _here, ctx, _info, _helpers, _scope, module, _ss, _current_fn_or_type);

    if (k == "addroffn"_fu)
        return solveAddrOfFn(node_1, _scope, _ss, module, ctx, _here, _info, _helpers, _current_fn_or_type);

    if (k == "fn"_fu)
        return solveDeclExpr(node_1, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "struct"_fu)
        return solveDeclExpr(node_1, _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "forfieldsof"_fu)
        return solveForFieldsOf(node_1, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _current_fn, _info, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);

    if (k == "compiler"_fu)
        return executeCompilerPragma(node_1, _here, ctx, _info, _helpers, _scope, module, _current_fn_or_type);

    fail(("TODO: "_fu + k), _here, ctx, _info, _helpers, _scope, module);
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
    const s_Target MODULE_TOP = Scope_create(_scope, "_module_top_"_fu, fu_STR{}, s_Type{}, 0, s_SolvedNode{}, 0, 0u, bool{}, module);
    _helpers += s_Helpers { s_Target(MODULE_TOP), "_module_top_"_fu, short(0), 0, 0, 0, s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{}, s_Events{} };
    s_Target _current_fn_or_type { MODULE_TOP };
    fu_MAP<fu_STR, s_Target> _specs {};
    s_Type t_string = createArray(t_byte);
    fu_VEC<s_SolvedNode> TODO_FIX_convert_args = fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { SolvedNode((*(const fu_STR*)fu::NIL), s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope) } };
    const s_SolvedNode TODO_FIX_template_defarg = SolvedNode("__defarg"_fu, s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _current_fn_or_type, module, _scope);
    if (module.modid)
    {
        _scope.imports += module.modid;
        _Scope_import__forceCopy(0, bool{}, ctx, _scope);
    }
    else
        _scope = listGlobals(module);

    const s_SolvedNode root_2 = solveNode(s_Node(parse_3), (*(const s_Type*)fu::NIL), bool{}, 0, uint16_t(0u), _here, _scope, _helpers, module, _current_fn, ctx, _info, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, t_string, _field_items, TODO_FIX_convert_args);
    if (_current_fn.out)
        fail("non-empty _current_fn."_fu, _here, ctx, _info, _helpers, _scope, module);

    return s_SolverOutput { s_SolvedNode(root_2), Scope_exports(_scope, module.modid, _field_items), int(_notes) };
}

#endif
