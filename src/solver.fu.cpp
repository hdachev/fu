
#include <algorithm>
#include <cstdint>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/defer.h>
#include <fu/init_priority.h>
#include <fu/int.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/slice.h>
#include <fu/view.h>
#include <utility>

struct s_ArgWrite;
struct s_Argument;
struct s_BitSet;
struct s_CodegenOutput;
struct s_Context;
struct s_CurrentFn;
struct s_Events;
struct s_EventsSnap;
struct s_Extended;
struct s_Flow;
struct s_Helpers;
struct s_HelpersData;
struct s_Intlit;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Lint;
struct s_Map_ON0NfbFM;
struct s_Map_nrIRbWMi;
struct s_Map_tcbzgxDC;
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

[[noreturn]] fu::never BUG_KjALaLZp(fu_STR&&, const s_TokenIdx&, const s_Context&);
[[noreturn]] fu::never FAIL_k6XVWCwq(fu::view<char>, const s_TokenIdx&, const s_Context&);
[[noreturn]] static fu::never fail_jI4Vez2o(fu_STR&&, const s_TokenIdx&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&);
bool Region_isArg_rLDFQf65(const s_Region&);
bool Region_isStatic_rLDFQf65(const s_Region&);
bool Region_isTemp_rLDFQf65(const s_Region&);
bool X_unpackAddrOfFnBinding_PsLoxX6P(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Type&, bool);
bool add_once_zoGTyg4u(s_BitSet&, int);
bool hasAssignment_rJbriNRz(fu::view<char>);
bool has_asJtcpQm(const s_BitSet&, int);
bool isAssignableAsArgument_P9wIESfO(const s_Type&, const s_Type&);
bool isAssignable_P9wIESfO(const s_Type&, const s_Type&);
bool isStruct_C02JG8Ye(const s_Type&);
bool is_arithmetic_dtjgvDEj(const s_Type&);
bool is_floating_pt_dtjgvDEj(const s_Type&);
bool is_integral_dtjgvDEj(const s_Type&);
bool is_mutref_8e1ZyHy2(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_never_8e1ZyHy2(const s_Type&);
bool is_primitive_dtjgvDEj(const s_Type&);
bool is_ref2temp_8e1ZyHy2(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_ref_8e1ZyHy2(const s_Type&);
bool is_rx_copy_8e1ZyHy2(const s_Type&);
bool is_rx_resize_8e1ZyHy2(const s_Type&);
bool is_trivial_lcHUdEZy(const s_Type&, const s_Module&, const s_Context&);
bool is_unsigned_dtjgvDEj(const s_Type&);
bool is_void_8e1ZyHy2(const s_Type&);
bool operator!=(const s_Region&, const s_Region&);
bool operator==(const s_Region&, const s_Region&);
bool operator==(const s_Target&, const s_Target&);
bool operator==(const s_Type&, const s_Type&);
bool operator>(const s_Region&, const s_Region&);
bool operator>=(const s_Region&, const s_Region&);
bool try_relax_69tqLpHe(s_Type&, const s_Type&, int);
bool type_isAddrOfFn_5vhU4AHS(const s_Type&);
const fu_STR& _fname_4nLgxTnv(const s_TokenIdx&, const s_Context&);
const fu_VEC<int>& lookupTypeImports_lcHUdEZy(const s_Type&, const s_Module&, const s_Context&);
const s_Struct& lookupStruct_5FUAmY77(const s_Type&, const s_Module&, const s_Context&);
const s_Struct& tryLookupStruct_lcHUdEZy(const s_Type&, const s_Module&, const s_Context&);
const s_Token& _token_4nLgxTnv(const s_TokenIdx&, const s_Context&);
fu_STR ClosureID_62RVWOkg(const s_Target&);
fu_STR formatCodeSnippet_EjSh40rn(const s_TokenIdx&, s_TokenIdx&&, const s_Context&);
fu_STR getShortModuleName_zQFrD65V(const fu_STR&);
fu_STR hash62_ID6Pdhz7(fu::view<char>, int);
fu_STR humanizeQuals_8e1ZyHy2(const s_Type&);
fu_STR packAddrOfFn_i4cXBxfC(fu::view<s_Target>);
fu_STR qBAD_PSFLzFOM(const fu_STR&);
fu_STR qID_PSFLzFOM(const fu_STR&);
fu_STR qKW_PSFLzFOM(const fu_STR&);
fu_STR resolveFile_x_RXR5ZSRM(const fu_STR&, const s_Context&);
fu_STR serializeType_5brmsTGN(const s_Type&, fu::view<char>, const s_TokenIdx&, const s_Context&);
inline const s_Region& first_l0gXiKi4(fu::view<s_Region>);
inline s_ScopeSkip& last_eUWfz0hS(fu_VEC<s_ScopeSkip>&);
inline s_SolvedNode& last_45v4fzZZ(fu_VEC<s_SolvedNode>&);
int MODID_yuJMA1l6(const s_Module&);
int Region_asArgIndex_rLDFQf65(const s_Region&);
int Region_asIndex_rLDFQf65(const s_Region&);
int Region_toArgIndex_rLDFQf65(const s_Region&);
int Region_toLocalIndex_rLDFQf65(const s_Region&);
int parse10i32_g2vqWUwe(int&, fu::view<char>);
int popcount_Btvcdbd3(const s_BitSet&);
s_BitSet ArgsAtRisk_listRiskFree_VUCqjTi1(const s_Flow&, int);
s_Intlit Intlit_NbHm0tEz(fu::view<char>);
s_Lifetime Lifetime_inter_7jT6yxSF(const s_Lifetime&, const s_Lifetime&);
s_Lifetime Lifetime_makeShared_knS7ptQD(const s_Lifetime&);
s_Lifetime Lifetime_placeholder_8nlJDPX0();
s_Lifetime Lifetime_static_8nlJDPX0();
s_Lifetime Lifetime_temporary_8nlJDPX0();
s_Lifetime Lifetime_union_7jT6yxSF(const s_Lifetime&, const s_Lifetime&);
s_Region Region_fromArgIndex_KYx0R3Sq(int);
s_Region Region_fromLocalIndex_KYx0R3Sq(int);
s_Scope Scope_exports_rvZqKVmF(const s_Scope&, int, const fu_VEC<s_ScopeItem>&);
s_Scope listGlobals_yuJMA1l6(const s_Module&);
s_ScopeMemo Scope_snap_udUBsnHM(const s_Scope&, fu::view<s_Helpers>);
s_Struct& lookupStruct_mut_r6N0n0Dx(fu::view<char>, s_Module&);
s_Target Scope_Typedef_Q7red49x(s_Scope&, const fu_STR&, const s_Type&, int, const fu_STR&, unsigned, const s_Module&);
s_Target Scope_create_qoDjvL3b(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, const s_SolvedNode&, int, unsigned, bool, const s_Module&);
s_Target search_lONlZZIu(fu::view<s_ScopeItem>, const fu_STR&, int&, fu::view<s_ScopeSkip>, bool&, const s_Target&, fu::view<s_Target>, fu::view<s_ScopeItem>);
s_Target target_Do3V6d7x(const s_ScopeItem&);
s_Target tryParseClosureID_ZIuKfopV(fu::view<char>, int);
s_Type X_addrofTarget_m0G5bAnB(const s_Target&);
s_Type add_mutref_GR4OoJkm(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type add_ref_GR4OoJkm(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type add_refs_P9wIESfO(const s_Type&, s_Type&&);
s_Type clear_mutref_8e1ZyHy2(s_Type&&);
s_Type clear_refs_8e1ZyHy2(s_Type&&);
s_Type clear_sliceable_8e1ZyHy2(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type createArray_8e1ZyHy2(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type createSlice_GR4OoJkm(const s_Type&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type despeculateStruct_sClxAUhz(s_Type&&);
s_Type initStruct_kwC0rL39(const fu_STR&, int, bool, s_Module&);
s_Type make_copyable_8e1ZyHy2(s_Type&&);
s_Type relax_typeParam_8e1ZyHy2(s_Type&&);
s_Type tryClear_array_8e1ZyHy2(const s_Type&);
s_Type tryClear_mutref_8e1ZyHy2(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_ref_8e1ZyHy2(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_sliceable_8e1ZyHy2(const s_Type&);
s_Type type_tryIntersect_P9wIESfO(const s_Type&, const s_Type&);
s_Type type_trySuper_P9wIESfO(const s_Type&, const s_Type&);
static bool lazySolveStart_gaykLo4Y(const s_Target&, const s_Overload&, s_Scope&, s_Module&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static const s_Overload& GET_mF5WytW3(const s_Target&, const s_Scope&, const s_Module&, const s_Context&, const s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
static fu_STR qSTACK_5QtmybJM(const s_ArgWrite&, const s_Target&, fu_VEC<s_Target>&&, const s_CurrentFn&, const s_Module&, const s_Scope&, const s_Context&, const s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
static fu_VEC<s_SolvedNode> solveNodes_05VdsfAN(fu::view<s_Node>, const s_Type&, const s_Type&, bool, int, s_TokenIdx&, s_Module&, s_Scope&, const s_Context&, s_Target&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode CallerNode_pNH3XXoN(const fu_STR&, s_Target&&, fu_VEC<s_SolvedNode>&&, int, const fu_VEC<int>&, fu::view<fu_VEC<s_Target>>, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Target&, s_CurrentFn&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_nrIRbWMi&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, const fu_STR&, const s_Type&);
static s_SolvedNode __solveStruct_ftzItgDZ(bool, const s_Node&, const s_Target&, s_CurrentFn&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeSkipMemos&, s_Target&, s_Map_nrIRbWMi&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode evalTypeAnnot_Yu0YKv5q(const s_Node&, const s_Map_ON0NfbFM&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, s_Target&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveLetLike_dontTouchScope_KNjSPnx4(const s_Node&, const s_Type&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, s_Target&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveNode_Rc6CHWoz(const s_Node&, const s_Type&, int, s_TokenIdx&, s_Module&, s_Scope&, const s_Context&, s_Target&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_Target doTrySpecialize_tMyTP3bm(const s_Target&, const s_Target&, fu::view<s_SolvedNode>, fu_STR&&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, int, const s_Type&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_Target tryMatch__mutargs_As8IdS6c(fu_STR&&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, bool, const s_Scope&, fu::view<s_SolvedNode>, int, const s_Target&, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_nrIRbWMi&, s_ScopeMemo&, s_Target&, s_CurrentFn&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, const fu_STR&, const s_Type&);
static void Lifetime_F_MOVED_FROM_vsPWcrQK(const s_Lifetime&, const s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
static void Lifetime_F_TODO_FIX_RRET_NXadJdWk(const s_Lifetime&, int, const s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
static void bck_node_TIZiR8kp(const s_SolvedNode&, const s_Module&, s_Scope&, const s_Context&, s_CurrentFn&, s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&, const s_Options&, int&);
static void descend_Vo486pkv(const s_Type&, bool, bool, bool, bool, s_Scope&, const s_Scope&, s_ScopeSkipMemos&, fu_VEC<s_SolvedNode>&, s_Module&, const s_Context&, s_CurrentFn&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_SolvedNode&, s_Target&, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu_VEC<s_ScopeItem>&, s_Map_nrIRbWMi&, s_ScopeMemo&, int&, const s_SolvedNode&, const s_Options&, int&, const fu_STR&, const s_Type&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, const s_Type&, int);
static void propagateType_E7Njny0p(const s_SolvedNode&, const s_Type&, int, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_Target&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static void test_node_dWzuMFgS(const s_SolvedNode&, fu_STR&&, const s_Module&, const s_Scope&, const s_Context&, s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
void ArgsAtRisk_shake_9E7k4Ce5(s_Flow&);
void HERE_GPjTSEGQ(const s_TokenIdx&, s_TokenIdx&);
void Lifetime_placeholder_remove_xMPmdfQq(s_Lifetime&);
void Reference_trackArgument_CooqGQ4F(s_Flow&, int, int);
void Reference_trackLocalRef_AADR3Ix2(s_Flow&, int, const s_Lifetime&);
void Scope_pop_iZmeNLp0(s_Scope&, const s_ScopeMemo&, fu_VEC<s_Helpers>&);
void Scope_set_ebsiWNpD(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);
void Scope_set_zS7wGzyw(s_Scope&, const fu_STR&, const s_Target&, bool);
void add_zoGTyg4u(s_BitSet&, int);
void break_DX6KImTN();
void rem_zoGTyg4u(s_BitSet&, int);

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
    fu_VEC<fu::u8> _data;
    explicit operator bool() const noexcept
    {
        return false
            || _data
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ArgWrite
                                #define DEF_s_ArgWrite
struct s_ArgWrite
{
    int nodeidx;
    int arg_position;
    explicit operator bool() const noexcept
    {
        return false
            || nodeidx
            || arg_position
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
    s_ArgWrite written_via;
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
    int privates_len;
    int usings_len;
    int converts_len;
    int helpers_len;
    explicit operator bool() const noexcept
    {
        return false
            || items_len
            || imports_len
            || privates_len
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
    fu_VEC<s_ScopeSkip> privates;
    fu_VEC<s_ScopeSkip> usings;
    fu_VEC<s_ScopeSkip> converts;
    fu_VEC<s_ScopeSkip> helpers;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || declash
            || imports
            || privates
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
    int helpers;
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
            || helpers
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
    fu_VEC<s_SolvedNode> callsites;
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
            || callsites
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
    fu_VEC<int> privates;
    fu_VEC<s_Target> usings;
    fu_VEC<s_Target> converts;
    int pub_items;
    int pub_cnvrts;
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
            || privates
            || usings
            || converts
            || pub_items
            || pub_cnvrts
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
    fu_VEC<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
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
    bool all_triv;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || target
            || items
            || imports
            || converts
            || flat_cnt
            || all_triv
        ;
    }
};
                                #endif

                                #ifndef DEF_s_CodegenOutput
                                #define DEF_s_CodegenOutput
struct s_CodegenOutput
{
    fu_STR src;
    explicit operator bool() const noexcept
    {
        return false
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
    int init_prio;
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
            || init_prio
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

                                #ifndef DEF_s_Map_tcbzgxDC
                                #define DEF_s_Map_tcbzgxDC
struct s_Map_tcbzgxDC
{
    fu_VEC<fu_STR> keys;
    fu_VEC<fu_STR> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu_VEC<s_Module> modules;
    s_Map_tcbzgxDC files;
    s_Map_tcbzgxDC fuzzy;
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

                                #ifndef DEF_s_Flow
                                #define DEF_s_Flow
struct s_Flow
{
    fu_VEC<fu_VEC<int>> parents;
    fu_VEC<fu_VEC<int>> invalidates;
    s_BitSet is_arg;
    fu_VEC<int> arg_targets;
    fu_VEC<int> arg_positions;
    fu_VEC<fu_VEC<int>> arg_aliases;
    fu_VEC<fu_VEC<int>> args_at_risk;
    explicit operator bool() const noexcept
    {
        return false
            || parents
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
    explicit operator bool() const noexcept
    {
        return false
            || target
            || nodeidx
        ;
    }
};
                                #endif

                                #ifndef DEF_s_EventsSnap
                                #define DEF_s_EventsSnap
struct s_EventsSnap
{
    fu_VEC<s_RWEvent> invalidated_by;
    fu_VEC<int> args_written;
    explicit operator bool() const noexcept
    {
        return false
            || invalidated_by
            || args_written
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Events
                                #define DEF_s_Events
struct s_Events
{
    s_EventsSnap snap;
    fu_VEC<s_RWEvent> used_in_a_loop;
    fu_VEC<int> args_in_a_loop;
    fu_VEC<s_ArgWrite> args_written_via;
    fu_VEC<s_RWEvent> reads;
    fu_VEC<s_RWEvent> writes;
    explicit operator bool() const noexcept
    {
        return false
            || snap
            || used_in_a_loop
            || args_in_a_loop
            || args_written_via
            || reads
            || writes
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
    fu_VEC<s_Type> var_usage;
    explicit operator bool() const noexcept
    {
        return false
            || out
            || flow
            || events
            || loop_start
            || var_usage
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Helpers
                                #define DEF_s_Helpers
struct s_Helpers
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

                                #ifndef DEF_s_HelpersData
                                #define DEF_s_HelpersData
struct s_HelpersData
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
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Map_nrIRbWMi
                                #define DEF_s_Map_nrIRbWMi
struct s_Map_nrIRbWMi
{
    fu_VEC<fu_STR> keys;
    fu_VEC<s_Target> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
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

                                #ifndef DEF_s_Map_ON0NfbFM
                                #define DEF_s_Map_ON0NfbFM
struct s_Map_ON0NfbFM
{
    fu_VEC<fu_STR> keys;
    fu_VEC<s_TypeParam> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Intlit
                                #define DEF_s_Intlit
struct s_Intlit
{
    fu::u8 base;
    fu::u8 minsize_i;
    fu::u8 minsize_u;
    fu::u8 minsize_f;
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

                                #ifndef DEF_N_DeadIfCond
                                #define DEF_N_DeadIfCond
inline constexpr int N_DeadIfCond = (1 << 9);
                                #endif

                                #ifndef DEF_N_DeadIfCons
                                #define DEF_N_DeadIfCons
inline constexpr int N_DeadIfCons = (1 << 10);
                                #endif

                                #ifndef DEF_N_DeadArrlit
                                #define DEF_N_DeadArrlit
inline constexpr int N_DeadArrlit = (1 << 11);
                                #endif

                                #ifndef DEF_N_DeadLoopInit
                                #define DEF_N_DeadLoopInit
inline constexpr int N_DeadLoopInit = (1 << 12);
                                #endif

                                #ifndef DEF_N_NonTrivAutoCopy
                                #define DEF_N_NonTrivAutoCopy
inline constexpr int N_NonTrivAutoCopy = (1 << 13);
                                #endif

                                #ifndef DEF_N_RelaxRespec
                                #define DEF_N_RelaxRespec
inline constexpr int N_RelaxRespec = (1 << 14);
                                #endif

                                #ifndef DEF_N_BckVarCopy
                                #define DEF_N_BckVarCopy
inline constexpr int N_BckVarCopy = (1 << 15);
                                #endif

                                #ifndef DEF_N_BckArgCopy
                                #define DEF_N_BckArgCopy
inline constexpr int N_BckArgCopy = (1 << 16);
                                #endif

                                #ifndef DEF_N_BckExplicitLTR
                                #define DEF_N_BckExplicitLTR
inline constexpr int N_BckExplicitLTR = (1 << 17);
                                #endif

                                #ifndef DEF_N_SD_HasStaticInit
                                #define DEF_N_SD_HasStaticInit
inline constexpr int N_SD_HasStaticInit = (1 << 18);
                                #endif

                                #ifndef DEF_N_SD_ExternPrivates
                                #define DEF_N_SD_ExternPrivates
inline constexpr int N_SD_ExternPrivates = (1 << 19);
                                #endif

static const bool OPTI_autoshadow = true;

static const bool OPTI_dedupe_vars = true;

static const bool OPTI_flatten_blocks = true;

static const bool USE_nontriv_autocopy = true;

static const bool SELF_TEST = true;

static void push_TahmTbsf(const s_HelpersData& data, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data)
{
    _helpers += s_Helpers { _helpers_data.size() };
    _helpers_data += s_HelpersData(data);
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

                                #ifndef DEFt_grow_if_oob_FDumx48H
                                #define DEFt_grow_if_oob_FDumx48H
inline s_Extended& grow_if_oob_FDumx48H(fu_VEC<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static s_Extended& EXT_mut_chviOJ9J(const s_Target& target, const s_Module& module, s_Scope& _scope)
{
    if (!(target.modid == module.modid))
        fu_ASSERT();

    return grow_if_oob_FDumx48H(_scope.extended, (target.index - 1));
}

static s_SolvedNode SolvedNode_create_vg3ys5Qc(const s_SolvedNodeData& data, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    const s_Target& nodeown = _current_fn_or_type;
    fu_VEC<s_SolvedNodeData>& nodes = EXT_mut_chviOJ9J(nodeown, module, _scope).nodes;
    const int nodeidx = nodes.size();
    nodes += s_SolvedNodeData(data);
    return s_SolvedNode { s_Target(nodeown), int(nodeidx) };
}

static s_SolvedNode SolvedNode_0vKsswP4(const fu_STR& kind, const s_Type& type, const int flags, const fu_STR& value, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const int helpers, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    s_SolvedNodeData data = s_SolvedNodeData { fu_STR(kind), int(helpers), int(flags), fu_STR(value), fu_VEC<s_SolvedNode>(items), s_TokenIdx(_here), s_Type(type), s_Target(target) };
    return SolvedNode_create_vg3ys5Qc(data, _current_fn_or_type, module, _scope);
}

static void _Scope_import__forceCopy_n3ehgwQF(const int modid, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    _scope.items += fu::get_view(s.items, 0, s.pub_items);
    _scope.converts += fu::get_view(s.converts, 0, s.pub_cnvrts);
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void;
                                #endif

static int unorderedClassify_vPxGUxrI(fu::view<char> kind)
{
    if (kind == "fn"_fu)
        return 1;

    if (kind == "struct"_fu)
        return 10;

    return 0;
}

                                #ifndef DEFt_unless_oob_RUr8uBUz
                                #define DEFt_unless_oob_RUr8uBUz
inline const s_Extended& unless_oob_RUr8uBUz(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT_nkaMKocC(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    if (target.modid == module.modid)
        return unless_oob_RUr8uBUz(_scope.extended, (target.index - 1));

    return (target.modid >= 0) ? unless_oob_RUr8uBUz(ctx.modules[target.modid].out.solve.scope.extended, (target.index - 1)) : (*(const s_Extended*)fu::NIL);
}

static const s_SolvedNodeData& SolvedNodeData_CoW62h8S(const s_SolvedNode& nid, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return nid.nodeown ? EXT_nkaMKocC(nid.nodeown, module, _scope, ctx).nodes[nid.nodeidx] : (*(const s_SolvedNodeData*)fu::NIL);
}

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_HM_Function
                                #define DEF_HM_Function
inline constexpr short HM_Function = short((short(1) << short(3)));
                                #endif

                                #ifndef DEF_HM_Struct
                                #define DEF_HM_Struct
inline constexpr short HM_Struct = short((short(1) << short(5)));
                                #endif

static bool isFnOrType_WNFGc8kc(const s_Helpers& h, fu::view<s_HelpersData> _helpers_data)
{
    return !!short((_helpers_data[h.index].mask & short((HM_Function | HM_Struct))));
}

static fu_STR human_UbFfpidG(const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Target t = tryParseClosureID_ZIuKfopV(id, MODID_yuJMA1l6(module));
    if (!t)
        return fu_STR(id);

    const s_Overload& o = GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data);
    return (GET_mF5WytW3(s_Target { int(module.modid), int(o.local_of) }, _scope, module, ctx, _here, _helpers, _helpers_data).name + ":"_fu) + o.name;
}

static fu_STR qWHAT_2UzOFrRY(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return (qKW_PSFLzFOM(o.kind) + " "_fu) + qID_PSFLzFOM(human_UbFfpidG(o.name, module, _scope, ctx, _here, _helpers, _helpers_data));
}

static const s_Overload& GET_mF5WytW3(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (target.modid < 0)
        return _scope.extended[(-target.modid - 1)].locals[(target.index - 1)];

    if (target.modid == module.modid)
        return _scope.overloads[(target.index - 1)];

    const s_Overload& o = ctx.modules[target.modid].out.solve.scope.overloads[(target.index - 1)];
    if (o.local_of)
        fail_jI4Vez2o((("Working with locals from other modules would "_fu + "prevent bucketing overloads within other overloads: "_fu) + qWHAT_2UzOFrRY(o, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

    return o;
}

[[noreturn]] static fu::never fail_jI4Vez2o(fu_STR&& reason, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!reason)
        reason = (("Unexpected `"_fu + _token_4nLgxTnv(_here, ctx).value) + "`."_fu);

    int callstack = 0;
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (isFnOrType_WNFGc8kc(h, _helpers_data))
        {
            if (!callstack++)
                reason += "\n\n        Solving "_fu;
            else
                reason += "\n                "_fu;

            const s_Overload& o = GET_mF5WytW3(_helpers_data[h.index].target, _scope, module, ctx, _here, _helpers, _helpers_data);
            reason += qWHAT_2UzOFrRY(o, module, _scope, ctx, _here, _helpers, _helpers_data);
        };
    };
    FAIL_k6XVWCwq(reason, _here, ctx);
}

static void makeNote_hw6XKcvD(const int note, const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, int& _notes)
{
    if (note & options.break_notes)
        fail_jI4Vez2o((x7E("`break_notes`: Unwanted event: `"_fu, fu::i64dec(note)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    _notes |= note;
}

                                #ifndef DEF_SS_LAZY
                                #define DEF_SS_LAZY
inline constexpr unsigned SS_LAZY = (0x1u << 0u);
                                #endif

static s_Template createTemplate_zV3NNgIx(const s_Node& node, const s_CurrentFn& _current_fn, const s_Scope& _scope, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss)
{
    return s_Template { s_Node(node), fu_VEC<int>((!_current_fn ? _scope.imports : (*(const fu_VEC<int>*)fu::NIL))), (_current_fn ? Scope_snap_udUBsnHM(_scope, _helpers) : s_ScopeMemo{}), s_ScopeSkipMemos((_current_fn ? _ss : (*(const s_ScopeSkipMemos*)fu::NIL))) };
}

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline constexpr int F_SHADOW = (1 << 23);
                                #endif

static bool shouldAutoshadow_ABC2HhE1(fu::view<char> id, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope)
{
    if (!OPTI_autoshadow)
        return false;


    {
        fu::view<s_ScopeItem> items = _scope.items;
        fu::view<s_ScopeSkip> scope_skip = _ss.declash;
        const int start = 0;
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
                const s_ScopeItem& item = items[i_1];
                const bool root = (i_1 <= _root_scope.items_len);
                if (!root && (item.id == id))
                    return false;

            };
            i0 = ss.end;
        };
    };
    return true;
}

static void autoshadow_QCa3E1Hj(bool& shadows, const int local_of, fu::view<char> id, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope)
{
    if (!shadows && local_of && shouldAutoshadow_ABC2HhE1(id, _scope, _ss, _root_scope))
        shadows = true;

}

                                #ifndef DEF_F_CONVERSION
                                #define DEF_F_CONVERSION
inline constexpr int F_CONVERSION = (1 << 14);
                                #endif

static s_SolvedNode createFnDef_c9kVvEVe(const s_Type& type, const s_Target& target, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode_0vKsswP4("fndef"_fu, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, 0, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode uPrepFn_A_kn7gt1BX(const s_Node& node, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope, const s_TokenIdx& _here, const s_Target& _current_fn_or_type)
{
    const fu_STR& id = node.value;
    const int local_of = SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target.index;
    const s_Target target = Scope_create_qoDjvL3b(_scope, "fn"_fu, "__prep__"_fu, (*(const s_Type*)fu::NIL), node.flags, s_SolvedNode{}, int(local_of), SS_LAZY, bool{}, module);
    s_Extended& ext = EXT_mut_chviOJ9J(target, module, _scope);
    ext.tEmplate = createTemplate_zV3NNgIx(node, _current_fn, _scope, _helpers, _ss);
    ext.min = int(0x7fffffffu);
    ext.max = 0;
    bool shadows = !!(node.flags & F_SHADOW);
    autoshadow_QCa3E1Hj(shadows, local_of, id, _scope, _ss, _root_scope);
    Scope_set_zS7wGzyw(_scope, id, target, shadows);
    if (node.flags & F_CONVERSION)
        _scope.converts.push(s_Target(target));

    return createFnDef_c9kVvEVe(X_addrofTarget_m0G5bAnB(target), target, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createEmpty_5d3UxTMW(const fu_STR& kind, const s_Type& type, const s_Target& target, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode_0vKsswP4(kind, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, 0, _here, _current_fn_or_type, module, _scope);
}

static s_Overload& GET_mut_Y5AuyJLM(const s_Target& target, s_Scope& _scope, const s_Module& module)
{
    if (target.modid < 0)
        return _scope.extended.mutref((-target.modid - 1)).locals.mutref((target.index - 1));

    if (!((target.index > 0) && (target.modid == MODID_yuJMA1l6(module))))
        fu_ASSERT();

    return _scope.overloads.mutref((target.index - 1));
}

                                #ifndef DEF_SS_DID_START
                                #define DEF_SS_DID_START
inline constexpr unsigned SS_DID_START = (0x1u << 1u);
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline constexpr int LET_TYPE = 0;
                                #endif

static s_Type T_KPKdh0dT(const int i, const s_Node& node, const s_Map_ON0NfbFM& typeParams, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    s_SolvedNode _0 {};
    /*MOV*/ s_Type danglefix { (_0 = evalTypeAnnot_Yu0YKv5q(node.items[i], typeParams, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string), SolvedNodeData_CoW62h8S(s_SolvedNode(_0), module, _scope, ctx)).type };
    return /*NRVO*/ danglefix;
}

static s_SolvedNode solved_i1wpVdEM(const s_Node& node, const s_Type& type, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode_0vKsswP4(node.kind, type, node.flags, node.value, items, target, 0, _here, _current_fn_or_type, module, _scope);
}

                                #ifndef DEFt_if_last_45v4fzZZ
                                #define DEFt_if_last_45v4fzZZ
inline const s_SolvedNode& if_last_45v4fzZZ(fu::view<s_SolvedNode> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never;
                                #endif

                                #ifndef DEFt_last_45v4fzZZ
                                #define DEFt_last_45v4fzZZ
inline s_SolvedNode& last_45v4fzZZ(fu_VEC<s_SolvedNode>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode createBlock_oWR0ZXGj(const s_Type& type, /*MOV*/ fu_VEC<s_SolvedNode>&& items, const s_Target& label, const s_Helpers& h, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type)
{
    for (int x = 0; x < items.size(); x++)
    {
        if (!SolvedNodeData_CoW62h8S(items[x], module, _scope, ctx).kind)
            fu::fail(x7E("createBlock.before-flatten.items: no kind on item #"_fu, fu::i64dec(x)));

    };
    if (_here && (_helpers.size() > 10000001))
        fu::fail(x7E("woot: "_fu, fu::i64dec(_helpers.size())));

    if (OPTI_flatten_blocks && items.size())
    {
        for (; ; )
        {
            const s_SolvedNode& tail = last_45v4fzZZ(items);
            if ((SolvedNodeData_CoW62h8S(tail, module, _scope, ctx).kind != "block"_fu) || SolvedNodeData_CoW62h8S(tail, module, _scope, ctx).target)
                break;

            fu::view<s_SolvedNode> unwrap = SolvedNodeData_CoW62h8S(tail, module, _scope, ctx).items;
            items.pop();
            items += unwrap;
        };
    };
    if (items.size())
    {
        bool ok = (!label && !(h ? _helpers_data[h.index].vars : (*(const fu_VEC<int>*)fu::NIL)));
        for (int i = 0; i < (items.size() - 1); i++)
        {
            if (SolvedNodeData_CoW62h8S(items[i], module, _scope, ctx).kind != "empty"_fu)
            {
                ok = false;
                break;
            };
        };
        if (ok)
            return s_SolvedNode(last_45v4fzZZ(items));

    };
    /*MOV*/ const s_SolvedNode block = SolvedNode_0vKsswP4("block"_fu, type, 0, (*(const fu_STR*)fu::NIL), items, label, h.index, _here, _current_fn_or_type, module, _scope);
    return /*NRVO*/ block;
}

static s_SolvedNode deadCall_XhGy0DD4(const fu_VEC<s_SolvedNode>& args, const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, int& _notes, const s_Target& _current_fn_or_type)
{
    makeNote_hw6XKcvD(N_DeadCall, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    return createBlock_oWR0ZXGj(t_never, fu_VEC<s_SolvedNode>(args), s_Target{}, s_Helpers{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);
}

                                #ifndef DEF_F_COMPOUND_ID
                                #define DEF_F_COMPOUND_ID
inline constexpr int F_COMPOUND_ID = (1 << 6);
                                #endif

                                #ifndef DEFt_find_WqUX48cW
                                #define DEFt_find_WqUX48cW
inline int find_WqUX48cW(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static const s_Module& findModule_03WsO5qj(const fu_STR& fuzimport, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    fu_STR fname = resolveFile_x_RXR5ZSRM(fuzimport, ctx);
    fu::view<s_Module> modules = ctx.modules;
    for (int i = 1; i < modules.size(); i++)
    {
        const s_Module& m = modules[i];
        if (m.fname == fname)
            return m;

    };
    fail_jI4Vez2o(("Cannot locate: "_fu + fname), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Scope& dequalify_andGetScope_ZnLXONCn(fu_STR& id, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    const int split = find_WqUX48cW(id, '\t');
    if (!((split >= 0)))
        fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    fu_STR fname = fu::slice(id, 0, split);
    id = fu::slice(id, (split + 1));
    const s_Module& other = findModule_03WsO5qj(fname, ctx, _here, _helpers, _helpers_data, _scope, module);
    if (other.modid != module.modid)
        return other.out.solve.scope;

    fail_jI4Vez2o((("Qualified "_fu + qBAD_PSFLzFOM(id)) + ":: access current module."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEFt_each_FGnWWGye
                                #define DEFt_each_FGnWWGye
inline void each_FGnWWGye(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, int, const int start, int& count, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
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
            const s_Target& u = items[i_1];
            if (u)
                count++;
            else
                fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        i0 = ss.end;
    };
}
                                #endif

static int countUsings_oos8kacg(const bool local_scope, const s_Scope& _scope, const s_Scope& misc_scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Module& module)
{
    const s_Scope& scope = (local_scope ? _scope : misc_scope);
    /*MOV*/ int count = 0;
    if (scope.usings)
        each_FGnWWGye(scope.usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, 0, count, _here, ctx, _helpers, _helpers_data, _scope, module);

    return /*NRVO*/ count;
}

                                #ifndef DEF_F_NAMED_ARGS
                                #define DEF_F_NAMED_ARGS
inline constexpr int F_NAMED_ARGS = (1 << 24);
                                #endif

                                #ifndef DEF_F_OPT_ARG
                                #define DEF_F_OPT_ARG
inline constexpr int F_OPT_ARG = (1 << 15);
                                #endif

                                #ifndef DEFt_each_D440JLqm
                                #define DEFt_each_D440JLqm
inline void each_D440JLqm(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, int, const int start, s_BitSet& seen)
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
            const int modid = items[i_1];
            add_zoGTyg4u(seen, modid);
        };
        i0 = ss.end;
    };
}
                                #endif

static void visitTypeImports_iNEwespE(const s_Type& type, const s_Module& module, const s_Context& ctx, s_BitSet& seen, const s_Scope& _scope, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id, fu_VEC<s_Target>& extra_items)
{
    fu::view<int> visit = lookupTypeImports_lcHUdEZy(type, module, ctx);
    for (int i = -1; i < visit.size(); i++)
    {
        const int modid = ((i >= 0) ? visit[i] : type.vtype.modid);
        if (has_asJtcpQm(seen, modid))
            continue;

        if (!seen)
        {
            add_zoGTyg4u(seen, 0);
            add_zoGTyg4u(seen, module.modid);
            each_D440JLqm(_scope.imports, (local_scope ? _ss.imports : fu::view<s_ScopeSkip>{}), 0, 0, seen);
        };
        if (!add_once_zoGTyg4u(seen, modid))
            continue;

        fu::view<s_ScopeItem> items = ctx.modules[modid].out.solve.scope.items;
        for (int i_1 = 0; i_1 < items.size(); i_1++)
        {
            if (items[i_1].id == id)
                extra_items.push(target_Do3V6d7x(items[i_1]));

        };
    };
}

                                #ifndef DEFt_each_Pez4Cm87
                                #define DEFt_each_Pez4Cm87
inline void each_Pez4Cm87(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, int, const int start, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_BitSet& seen, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id, fu_VEC<s_Target>& extra_items)
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
            const s_Target& u = items[i_1];
            visitTypeImports_iNEwespE(GET_mF5WytW3(u, _scope, module, ctx, _here, _helpers, _helpers_data).type, module, ctx, seen, _scope, local_scope, _ss, id, extra_items);
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

                                #ifndef DEF_F_OPERATOR
                                #define DEF_F_OPERATOR
inline constexpr int F_OPERATOR = (1 << 21);
                                #endif

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline constexpr int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline constexpr unsigned SS_FINALIZED = (0x1u << 3u);
                                #endif

                                #ifndef DEF_SS_DIRTY
                                #define DEF_SS_DIRTY
inline constexpr unsigned SS_DIRTY = (0x1u << 2u);
                                #endif

                                #ifndef DEFt_last_g4Ujnafl
                                #define DEFt_last_g4Ujnafl
inline const s_Target& last_g4Ujnafl(fu::view<s_Target> s)
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

                                #ifndef DEFt_unpackAddrOfFn_uHkkW4I9
                                #define DEFt_unpackAddrOfFn_uHkkW4I9
inline void unpackAddrOfFn_uHkkW4I9(fu::view<char> canon, int, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Template& tEmplate, int& parent_idx)
{
    int i = 0;
    while (i < canon.size())
    {
        if (!(canon[i++] == '@'))
            fu::fail((("unpackAddrOfFn: bad canon [1]: `"_fu + canon) + "`."_fu));

        const int modid = parse10i32_g2vqWUwe(i, canon);
        if (!(canon[i++] == ':'))
            fu::fail((("unpackAddrOfFn: bad canon [2]: `"_fu + canon) + "`."_fu));

        const int index = parse10i32_g2vqWUwe(i, canon);
        const s_Target target = s_Target { int(modid), int(index) };
        if ((target.modid < 0) || (target.modid == module.modid))
        {
            const s_Overload& overload = GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data);
            if (overload.flags & F_SPREAD_INLINE)
                tEmplate.node.flags |= F_INLINE;

            const int local_of = overload.local_of;
            if (parent_idx < local_of)
                parent_idx = local_of;

        };
    };
}
                                #endif

                                #ifndef DEFt_ref_0p09S2Ov
                                #define DEFt_ref_0p09S2Ov
inline s_Target& ref_0p09S2Ov(int, const fu_STR& item, int, s_Map_nrIRbWMi& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, fu_STR(item));
                _.vals.insert(i, s_Target{});
            };
            return _.vals.mutref(i);
        };
    };
    _.keys.push(fu_STR(item));
    _.vals.push(s_Target{});
    return _.vals.mutref((_.vals.size() - 1));
}
                                #endif

                                #ifndef DEFt_ref_xj381TH9
                                #define DEFt_ref_xj381TH9
inline s_Target& ref_xj381TH9(s_Map_nrIRbWMi& _, const fu_STR& key)
{
    return ref_0p09S2Ov(0, key, 0, _);
}
                                #endif

static bool is_SPECFAIL_MSiWxO0f(const s_Target& target)
{
    return target.modid == 2147483647;
}

inline static fu_STR id_lHSFKTmU(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return (is_SPECFAIL_MSiWxO0f(target) ? "SPEC_FAIL"_fu : (("`"_fu + GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).name) + "`"_fu));
}

inline static fu_STR id_keA5wLyK(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return (is_SPECFAIL_MSiWxO0f(target) ? "SPEC_FAIL"_fu : (("`"_fu + GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).name) + "`"_fu));
}

static void setSpec_hoOT2SD6(const fu_STR& mangle, const s_Target& target, const bool nx, const bool isInline, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, s_Map_nrIRbWMi& _specs)
{
    if (isInline)
        fail_jI4Vez2o("inline.setSpec"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    s_Target& t = ref_xj381TH9(_specs, mangle);
    if (!((!t && nx) || (is_SPECFAIL_MSiWxO0f(t) && !nx)))
        fail_jI4Vez2o(((((((x7E((x7E("About to screw up royally, replacing spec: "_fu, fu::i64dec(t.index)) + " with "_fu), fu::i64dec(target.index)) + ", mangle: "_fu) + mangle) + ", that's: "_fu) + id_lHSFKTmU(t, _scope, module, ctx, _here, _helpers, _helpers_data)) + " becoming "_fu) + id_keA5wLyK(target, _scope, module, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

    t = target;
}

                                #ifndef DEFt_last_vtdPb1VG
                                #define DEFt_last_vtdPb1VG
inline s_Helpers& last_vtdPb1VG(fu_VEC<s_Helpers>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEFt_if_last_eUWfz0hS
                                #define DEFt_if_last_eUWfz0hS
inline const s_ScopeSkip& if_last_eUWfz0hS(fu::view<s_ScopeSkip> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_ScopeSkip*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_last_eUWfz0hS
                                #define DEFt_last_eUWfz0hS
inline s_ScopeSkip& last_eUWfz0hS(fu_VEC<s_ScopeSkip>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static void ScopeSkip_push_4eXdbuAO(fu_VEC<s_ScopeSkip>& scope_skip, const int start, const int end, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!((start <= end)))
        fail_jI4Vez2o("ScopeSkip_push: bad args."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (end == start)
        return;

    const s_ScopeSkip& last = if_last_eUWfz0hS(scope_skip);
    if (!((last.end <= start)))
        fail_jI4Vez2o("ScopeSkip_push: last.end > start."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (scope_skip && (last.end == start))
        last_eUWfz0hS(scope_skip).end = end;
    else
        scope_skip += s_ScopeSkip { int(start), int(end) };

}

static void Scope_import_ZV8i1o6M(const int modid, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Module& module)
{

    {
        fu::view<int> items = _scope.imports;
        fu::view<s_ScopeSkip> scope_skip = _ss.imports;
        const int start = 0;
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
                const int i_2 = items[i_1];
                if (i_2 == modid)
                    return;

            };
            i0 = ss.end;
        };
    };
    if (!(modid))
        fail_jI4Vez2o("Attempting to import modid-0."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    _scope.imports += int(modid);
    _Scope_import__forceCopy_n3ehgwQF(modid, ctx, _scope);
}

static void _Scope_import__forceCopy_privates_Naxo1Q8Z(const int modid, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    _scope.items += fu::get_view(s.items, s.pub_items, s.items.size());
    _scope.converts += fu::get_view(s.converts, s.pub_cnvrts, s.converts.size());
}

static void Scope_import_privates_gxs4fYmZ(const int modid, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Module& module)
{

    {
        fu::view<int> items = _scope.privates;
        fu::view<s_ScopeSkip> scope_skip = _ss.privates;
        const int start = 0;
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
                const int i_2 = items[i_1];
                if (i_2 == modid)
                    return;

            };
            i0 = ss.end;
        };
    };
    if (!(modid))
        fail_jI4Vez2o("Attempting to import_privates modid-0."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    _scope.privates += int(modid);
    _Scope_import__forceCopy_privates_Naxo1Q8Z(modid, ctx, _scope);
}

static void ScopeSkip_setup_KRToFCQq(const s_Template& tEmplate, const s_ScopeMemo& scope0, const bool isInline, const s_ScopeMemo& _root_scope, s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    if (_root_scope)
    {
        const s_ScopeMemo& start = (tEmplate.scope_memo ? tEmplate.scope_memo : _root_scope);
        _ss = tEmplate.scope_skip;
        ScopeSkip_push_4eXdbuAO(_ss.items, start.items_len, scope0.items_len, _here, ctx, _helpers, _helpers_data, _scope, module);
        if (!isInline)
            ScopeSkip_push_4eXdbuAO(_ss.declash, start.items_len, scope0.items_len, _here, ctx, _helpers, _helpers_data, _scope, module);

        ScopeSkip_push_4eXdbuAO(_ss.imports, start.imports_len, scope0.imports_len, _here, ctx, _helpers, _helpers_data, _scope, module);
        ScopeSkip_push_4eXdbuAO(_ss.usings, start.usings_len, scope0.usings_len, _here, ctx, _helpers, _helpers_data, _scope, module);
        ScopeSkip_push_4eXdbuAO(_ss.converts, start.converts_len, scope0.converts_len, _here, ctx, _helpers, _helpers_data, _scope, module);
        ScopeSkip_push_4eXdbuAO(_ss.helpers, start.helpers_len, scope0.helpers_len, _here, ctx, _helpers, _helpers_data, _scope, module);
    };
    for (int i = 0; i < tEmplate.imports.size(); i++)
    {
        Scope_import_ZV8i1o6M(tEmplate.imports[i], _scope, _ss, _here, ctx, _helpers, _helpers_data, module);
        if (i == 0)
            Scope_import_privates_gxs4fYmZ(tEmplate.imports[i], _scope, _ss, _here, ctx, _helpers, _helpers_data, module);

    };
}

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
extern const int FN_ARGS_BACK;
                                #endif

                                #ifndef DEFt_has_zs1wLMBE
                                #define DEFt_has_zs1wLMBE
inline bool has_zs1wLMBE(fu::view<int> a, const int b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static bool couldRetype_5KorFaMt(const s_SolvedNode& node, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind == "int"_fu) || (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind == "real"_fu) || (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind == "definit"_fu);
}

                                #ifndef DEFt_ref_kZPHkgKP
                                #define DEFt_ref_kZPHkgKP
inline s_TypeParam& ref_kZPHkgKP(int, const fu_STR& item, int, s_Map_ON0NfbFM& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, fu_STR(item));
                _.vals.insert(i, s_TypeParam{});
            };
            return _.vals.mutref(i);
        };
    };
    _.keys.push(fu_STR(item));
    _.vals.push(s_TypeParam{});
    return _.vals.mutref((_.vals.size() - 1));
}
                                #endif

                                #ifndef DEFt_ref_tGejiCZj
                                #define DEFt_ref_tGejiCZj
inline s_TypeParam& ref_tGejiCZj(s_Map_ON0NfbFM& _, const fu_STR& key)
{
    return ref_kZPHkgKP(0, key, 0, _);
}
                                #endif

static const s_Type& Scope_lookupType_RfCPixzf(fu_STR&& id, const int flags, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    int scope_iterator {};
    s_Target overloadIdx {};
    bool shadows {};
    const int qualified = (flags & F_COMPOUND_ID);
    const s_Scope& scope = (qualified ? dequalify_andGetScope_ZnLXONCn(id, _here, ctx, _helpers, _helpers_data, _scope, module) : _scope);
    while ((overloadIdx = search_lONlZZIu(scope.items, id, scope_iterator, (!qualified ? _ss.items : fu::view<s_ScopeSkip>{}), shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
    {
        const s_Overload& maybe = GET_mF5WytW3(overloadIdx, _scope, module, ctx, _here, _helpers, _helpers_data);
        if (maybe.kind == "type"_fu)
            return maybe.type ? maybe.type : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    fail_jI4Vez2o((("No type `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Type& Scope_lookupType_4FU1zEuc(const s_Node& annot, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    return Scope_lookupType_RfCPixzf(fu_STR(annot.value), annot.flags, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
}

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32;
                                #endif

static bool want_FDxS6Ucw(const s_Type& t, const s_Type& type)
{
    return type.vtype.canon == t.vtype.canon;
}

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
extern const s_Type t_f64;
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
extern const s_Type t_i32;
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
extern const s_Type t_i64;
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
extern const s_Type t_i16;
                                #endif

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
extern const s_Type t_i8;
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
extern const s_Type t_u32;
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
extern const s_Type t_u64;
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
extern const s_Type t_u16;
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8;
                                #endif

static const s_Type& solveInt_XDJiB81k(fu::view<char> v, const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    s_Intlit parse = Intlit_NbHm0tEz(v);
    if (parse.error)
        fail_jI4Vez2o(fu_STR(parse.error), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (type)
    {
        if (!parse.uNsigned)
        {
            if (want_FDxS6Ucw(t_f32, type) && (parse.minsize_f <= fu::u8(32u)))
                return t_f32;

            if (want_FDxS6Ucw(t_f64, type) && (parse.minsize_f <= fu::u8(64u)))
                return t_f64;

            if (want_FDxS6Ucw(t_i32, type) && (parse.minsize_i <= fu::u8(32u)))
                return t_i32;

            if (want_FDxS6Ucw(t_i64, type) && (parse.minsize_i <= fu::u8(64u)))
                return t_i64;

            if (want_FDxS6Ucw(t_i16, type) && (parse.minsize_i <= fu::u8(16u)))
                return t_i16;

            if (want_FDxS6Ucw(t_i8, type) && (parse.minsize_i <= fu::u8(8u)))
                return t_i8;

        };
        if (!parse.sIgned)
        {
            if (want_FDxS6Ucw(t_u32, type) && (parse.minsize_u <= fu::u8(32u)))
                return t_u32;

            if (want_FDxS6Ucw(t_u64, type) && (parse.minsize_u <= fu::u8(64u)))
                return t_u64;

            if (want_FDxS6Ucw(t_u16, type) && (parse.minsize_u <= fu::u8(16u)))
                return t_u16;

            if (want_FDxS6Ucw(t_u8, type) && (parse.minsize_u <= fu::u8(8u)))
                return t_u8;

        };
    };
    if (parse.uNsigned)
    {
        if ((parse.minsize_u <= fu::u8(32u)))
            return t_u32;

        if ((parse.minsize_u <= fu::u8(64u)))
            return t_u64;

    }
    else
    {
        if ((parse.minsize_i <= fu::u8(32u)))
            return t_i32;

        if ((parse.minsize_i <= fu::u8(64u)))
            return t_i64;

    };
    fail_jI4Vez2o("Bad int literal."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Type& solveNum_bdhF9xlV(const fu_STR& v, const s_Type& type)
{
    if (v)
    {
    };
    if (type.vtype.canon == t_f32.vtype.canon)
        return t_f32;

    return t_f64;
}

                                #ifndef DEF_t_zeroes
                                #define DEF_t_zeroes
extern const s_Type t_zeroes;
                                #endif

static s_Type trySolveDefinit_179NHdgE(const s_Type& type)
{
    if (!type)
        return s_Type(t_zeroes);

    return type_trySuper_P9wIESfO(t_zeroes, type);
}

static s_Type tryRetyping_F9oLMnz9(const s_SolvedNode& node, const s_Type& expect, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (is_arithmetic_dtjgvDEj(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type) && is_arithmetic_dtjgvDEj(expect))
    {
        if (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind == "int"_fu)
            return s_Type(solveInt_XDJiB81k(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).value, expect, _here, ctx, _helpers, _helpers_data, _scope, module));

        if (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind == "real"_fu)
            return s_Type(solveNum_bdhF9xlV(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).value, expect));

    };
    if (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind == "definit"_fu)
        return trySolveDefinit_179NHdgE(expect);

    return s_Type{};
}

static bool trySolveTypeParams_aZtzyH2b(const s_Node& node, s_Type&& type, s_Map_ON0NfbFM& typeParams, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    if (node.kind == "call"_fu)
    {
        fu::view<s_Node> items = node.items;
        if (items.size())
        {
            if (items.size() == 1)
            {
                s_Type t = ((node.value == "&"_fu) ? tryClear_ref_8e1ZyHy2(type, _here, ctx) : ((node.value == "&mut"_fu) ? tryClear_mutref_8e1ZyHy2(type, _here, ctx) : ((node.value == "[]"_fu) ? tryClear_array_8e1ZyHy2(type) : fail_jI4Vez2o("TODO trySolveTypeParams unary call"_fu, _here, ctx, _helpers, _helpers_data, _scope, module))));
                if (!t)
                    return false;

                const s_Node* _0;
                return trySolveTypeParams_aZtzyH2b((*(_0 = &(items[0])) ? *_0 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), s_Type(t), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
            };
        }
        else
            return isAssignable_P9wIESfO(Scope_lookupType_4FU1zEuc(node, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), type);

    }
    else if (node.kind == "typeparam"_fu)
    {
        const fu_STR& id = (node.value ? node.value : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
        s_TypeParam& _param = ref_tGejiCZj(typeParams, id);
        if (_param)
        {
            s_Type uNion = type_trySuper_P9wIESfO(_param.matched, type);
            if (!uNion)
                return false;

            type = uNion;
        };
        _param.matched = relax_typeParam_8e1ZyHy2(s_Type(type));
        return true;
    }
    else if ((node.kind == "arrlit"_fu) && (node.items.size() == 1))
    {
        s_Type t = tryClear_sliceable_8e1ZyHy2(type);
        const s_Node* _1;
        return t && trySolveTypeParams_aZtzyH2b((*(_1 = &(node.items[0])) ? *_1 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), s_Type(t), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
    };
    fail_jI4Vez2o("TODO trySolveTypeParams fallthrough"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

inline static fu_STR mangleArguments_sIKH97Hj(fu::view<s_Type> args, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_5brmsTGN(args[i], "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEFt_bfind_hRkmNIbO
                                #define DEFt_bfind_hRkmNIbO
inline int bfind_hRkmNIbO(fu::view<fu_STR> keys, const fu_STR& item)
{
    for (/*MOV*/ int i = 0; i < keys.size(); i++)
    {
        if ((keys[i] >= item))
        {
            if (keys[i] != item)
                return -1;

            return /*NRVO*/ i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_get_25OWLfx6
                                #define DEFt_get_25OWLfx6
inline const s_Target& get_25OWLfx6(const s_Map_nrIRbWMi& _, const fu_STR& key)
{
    const int idx = bfind_hRkmNIbO(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const s_Target*)fu::NIL);
}
                                #endif

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEFt_bfind_nPNQURov
                                #define DEFt_bfind_nPNQURov
inline int bfind_nPNQURov(fu::view<fu_STR> keys, const fu_STR& item)
{
    for (/*MOV*/ int i = 0; i < keys.size(); i++)
    {
        if ((keys[i] >= item))
        {
            if (keys[i] != item)
                return -1;

            return /*NRVO*/ i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_get_7NKy0VIp
                                #define DEFt_get_7NKy0VIp
inline const s_TypeParam& get_7NKy0VIp(const s_Map_ON0NfbFM& _, const fu_STR& key)
{
    const int idx = bfind_nPNQURov(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const s_TypeParam*)fu::NIL);
}
                                #endif

static const s_Type& evalTypeParam_I8fwE1R2(const fu_STR& id, const s_Map_ON0NfbFM& typeParams, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    const s_Type* _0;
    return *(_0 = &(get_7NKy0VIp(typeParams, id).matched)) ? *_0 : *(_0 = &(Scope_lookupType_RfCPixzf(("$"_fu + (id ? id : fail_jI4Vez2o("Falsy type param id."_fu, _here, ctx, _helpers, _helpers_data, _scope, module))), 0, _here, ctx, _helpers, _helpers_data, _scope, module, _ss))) ? *_0 : fail_jI4Vez2o((("No type param `$"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static bool type_has_WIYTZEoa(const s_Type& type, fu::view<char> tag, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (tag == "trivial"_fu)
        return is_trivial_lcHUdEZy(type, module, ctx);

    if (tag == "copy"_fu)
        return is_rx_copy_8e1ZyHy2(type);

    if (tag == "arithmetic"_fu)
        return is_arithmetic_dtjgvDEj(type);

    if (tag == "primitive"_fu)
        return is_primitive_dtjgvDEj(type);

    if (tag == "integral"_fu)
        return is_integral_dtjgvDEj(type);

    if (tag == "unsigned"_fu)
        return is_unsigned_dtjgvDEj(type);

    if (tag == "floating_point"_fu)
        return is_floating_pt_dtjgvDEj(type);

    if (tag == "mutref"_fu)
        return is_mutref_8e1ZyHy2(type, _here, ctx);

    BUG_KjALaLZp((("Unknown type tag: `"_fu + tag) + "`."_fu), _here, ctx);
}

static bool evalTypePattern_h5m7pRjA(const s_Node& node, s_Map_ON0NfbFM& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (node.kind == "and"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (!evalTypePattern_h5m7pRjA(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string))
                return false;

        };
        return true;
    }
    else if (node.kind == "or"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (evalTypePattern_h5m7pRjA(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string))
                return true;

        };
        return false;
    }
    else if (node.kind == "typeassert"_fu)
    {
        const s_Node* _0;
        const s_Node& left = (*(_0 = &(node.items[0])) ? *_0 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
        const s_Node* _1;
        const s_Node& right = (*(_1 = &(node.items[1])) ? *_1 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
        if ((left.kind == "typeparam"_fu) && (right.kind == "typetag"_fu))
            return type_has_WIYTZEoa(evalTypeParam_I8fwE1R2(left.value, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (right.value ? right.value : fail_jI4Vez2o("Falsy type tag."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)), module, ctx, _here);
        else
        {
            s_SolvedNode _2 {};
            const s_Type& actual = (_2 = evalTypeAnnot_Yu0YKv5q(left, typeParams, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string), SolvedNodeData_CoW62h8S(s_SolvedNode(_2), module, _scope, ctx)).type;
            /*MOV*/ const bool ok = trySolveTypeParams_aZtzyH2b(right, s_Type(actual), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
            if (ok && (left.kind == "typeparam"_fu))
            {
                const fu_STR& id = left.value;
                s_TypeParam& tp = ref_tGejiCZj(typeParams, id);
                s_Type _3 {};
                tp.consumed = (tp.consumed ? ((_3 = type_tryIntersect_P9wIESfO(tp.consumed, actual)) ? static_cast<s_Type&&>(_3) : fail_jI4Vez2o("typeassert intersect fail."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) : s_Type(actual));
            };
            return /*NRVO*/ ok;
        };
    }
    else if (node.kind == "call"_fu)
    {
        fu::view<char> fn = node.value;
        if (node.items.size() == 1)
        {
            if (fn == "!"_fu)
                return !evalTypePattern_h5m7pRjA(node.items[0], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

        };
    };
    fail_jI4Vez2o((x7E((("TODO evalTypePattern fallthrough: "_fu + node.kind) + "("_fu), fu::i64dec(node.items.size())) + ")"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

static bool isNativeBody_80XocySm(const s_Node& n_body)
{
    return (n_body.kind == "call"_fu) && (n_body.value == "__native"_fu);
}

                                #ifndef DEFt_if_ref_Yc3dHYkm
                                #define DEFt_if_ref_Yc3dHYkm
inline void if_ref_Yc3dHYkm(int, const fu_STR& item, int, int, s_Map_ON0NfbFM& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] == item)
            {
                /*RRET*/ s_TypeParam& tp = _.vals.mutref(i);
                tp.matched = tp.consumed;
            };
            return;
        };
    };
}
                                #endif

                                #ifndef DEFt_if_ref_36F4RVDp
                                #define DEFt_if_ref_36F4RVDp
inline void if_ref_36F4RVDp(s_Map_ON0NfbFM& _, const fu_STR& key, int)
{
    if_ref_Yc3dHYkm(0, key, 0, 0, _);
}
                                #endif

static const s_Target& checkStruct_6qZDMXbl(const s_Type& type, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Target& t = lookupStruct_5FUAmY77(type, module, ctx).target;
    return (GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data).type == type) ? t : (*(const s_Target*)fu::NIL);
}

                                #ifndef DEFt_pairs_Ivowv8KI
                                #define DEFt_pairs_Ivowv8KI
inline void pairs_Ivowv8KI(const s_Map_ON0NfbFM& _, int, const s_Module& module, const s_Context& ctx, s_Scope& _scope, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, fu_VEC<s_ScopeItem>& res)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        fu::view<char> id = _.keys[i];
        const s_TypeParam& tp = _.vals[i];
        fu_STR name = ("$"_fu + id);
        const s_Type& type = tp.matched;
        s_Target _0 {};
        const s_Target target = ((_0 = s_Target((isStruct_C02JG8Ye(type) ? checkStruct_6qZDMXbl(type, module, ctx, _scope, _here, _helpers, _helpers_data) : (*(const s_Target*)fu::NIL)))) ? _0 : Scope_create_qoDjvL3b(_scope, "type"_fu, ("$"_fu + id), type, 0, s_SolvedNode{}, 0, 0u, bool{}, module));
        Scope_set_ebsiWNpD(res, name, target, false);
    };
}
                                #endif

static fu_VEC<s_ScopeItem> intoScopeItems_jfgf35eQ(const s_Map_ON0NfbFM& typeParams, const s_Module& module, const s_Context& ctx, s_Scope& _scope, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    /*MOV*/ fu_VEC<s_ScopeItem> res {};
    pairs_Ivowv8KI(typeParams, 0, module, ctx, _scope, _here, _helpers, _helpers_data, res);
    return /*NRVO*/ res;
}

static s_SolvedNodeData& MUT_Kfn68Cy8(const s_SolvedNode& nid, const s_Module& module, const s_Target& _current_fn_or_type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope)
{
    const s_Target& t = nid.nodeown;
    if ((t.modid != module.modid) || (t.index != _current_fn_or_type.index))
        fail_jI4Vez2o("MUT(nid.nodeown) not current-fn."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    return EXT_mut_chviOJ9J(t, module, _scope).nodes.mutref(nid.nodeidx);
}

static fu_VEC<s_SolvedNode>& outItems_sErtJPPq(const s_CurrentFn& _current_fn, const s_Module& module, const s_Target& _current_fn_or_type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope)
{
    return MUT_Kfn68Cy8(_current_fn.out, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).items;
}

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline constexpr int F_TEMPLATE = (1 << 28);
                                #endif

                                #ifndef DEF_F_PURE
                                #define DEF_F_PURE
inline constexpr int F_PURE = (1 << 13);
                                #endif

                                #ifndef DEF_F_NOCOPY
                                #define DEF_F_NOCOPY
inline constexpr int F_NOCOPY = (1 << 12);
                                #endif

static s_Type tryGetArgSpecType_ll8YFotD(fu::view<char> id, fu::view<s_ScopeItem> extra_items, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu_STR param = ("$"_fu + id);
    for (int i = 0; i < extra_items.size(); i++)
    {
        const s_ScopeItem& m = extra_items[i];
        if (m.id == param)
        {
            const s_Overload& o = GET_mF5WytW3(target_Do3V6d7x(m), _scope, module, ctx, _here, _helpers, _helpers_data);
            if (!(o.kind == "type"_fu))
                fail_jI4Vez2o((x7E((((("tryGetArgSpecType: Not a typeparam: `"_fu + o.kind) + ":"_fu) + param) + "("_fu), fu::i64dec(EXT_nkaMKocC(target_Do3V6d7x(m), module, _scope, ctx).max)) + ")`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

            return s_Type(o.type);
        };
    };
    return s_Type{};
}

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline constexpr int F_ARG = (1 << 9);
                                #endif

                                #ifndef DEFt_find_05euw4KZ
                                #define DEFt_find_05euw4KZ
inline int find_05euw4KZ(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEFt_find_eUTPXk7U
                                #define DEFt_find_eUTPXk7U
inline int find_eUTPXk7U(fu::view<char> a, const char b, int start)
{
    start = ((start > 0) ? int(start) : 0);
    for (/*MOV*/ int i = start; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
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

static s_Target nested_TmvnfpAm(const int index, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    int _0 {};
    return s_Target { ((_0 = -SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target.index) ? _0 : int(module.modid)), int(index) };
}

static const s_Overload& fnd_C7xmPgRh(const int index, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return GET_mF5WytW3(nested_TmvnfpAm(index, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _helpers, _helpers_data);
}

static const s_Lifetime& Lifetime_test_0kwmjgvX(const s_Lifetime& lifetime, const bool tempsOK, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (SELF_TEST)
    {
        const s_Target& current_fn = SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target;
        const s_Overload& debug_2 = (current_fn ? GET_mF5WytW3(current_fn, _scope, module, ctx, _here, _helpers, _helpers_data) : (*(const s_Overload*)fu::NIL));
        if (debug_2)
        {
        };
        if (!lifetime.uni0n.size())
            fail_jI4Vez2o("Lifetime_test: no region set."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Region _last {};
        for (int i = 0; i < lifetime.uni0n.size(); i++)
        {
            const s_Region& region = lifetime.uni0n[i];

            {
                if (!(!i || (region > _last)))
                    fail_jI4Vez2o("Lifetime_test: not a sorted set"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                _last = region;
            };
            if (Region_isArg_rLDFQf65(region))
                continue;

            if (Region_isTemp_rLDFQf65(region))
            {
                if (!((i == (lifetime.uni0n.size() - 1)) && tempsOK))
                    fail_jI4Vez2o("Lifetime_test: unexpected temporary."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                continue;
            };
            const int index = Region_toLocalIndex_rLDFQf65(region);
            const s_Overload& local = (index ? fnd_C7xmPgRh(index, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data) : (*(const s_Overload*)fu::NIL));
            const int local_of = local.local_of;
            if (local_of)
            {
                int frame = current_fn.index;
                while (local_of != frame)
                {
                    if (!((local_of <= frame)))
                        fail_jI4Vez2o((((((("Lifetime_test: `"_fu + local.name) + "` is not a local: `"_fu) + fnd_C7xmPgRh(local_of, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data).name) + "` does not contain "_fu) + (frame ? (("`"_fu + fnd_C7xmPgRh(frame, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data).name) + "`"_fu) : "global scope"_fu)) + ((current_fn.index != frame) ? ((", testing from `"_fu + fnd_C7xmPgRh(current_fn.index, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data).name) + "`."_fu) : "."_fu)), _here, ctx, _helpers, _helpers_data, _scope, module);

                    if (!(frame))
                        fail_jI4Vez2o("Lifetime_test: climbed up to root"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                    frame = fnd_C7xmPgRh(frame, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data).local_of;
                };
            };
        };
    };
    return lifetime;
}

static s_Lifetime Lifetime_fromBinding_yTcA5fCl(const s_Target& target, const int local_of, const int flags, const s_Type& type, const s_Module& module, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_CurrentFn& _current_fn)
{
    if (!((target.modid < 0) || (target.modid < 0) || (target.modid == module.modid)))
        fail_jI4Vez2o("not from this module"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!local_of)
        return Lifetime_static_8nlJDPX0();

    const int isArg = (flags & F_ARG);
    const int index = target.index;
    const s_Region region = ((isArg && is_ref_8e1ZyHy2(type)) ? Region_fromArgIndex_KYx0R3Sq(index) : Region_fromLocalIndex_KYx0R3Sq(index));
    /*MOV*/ s_Lifetime res { Lifetime_test_0kwmjgvX(s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(region) } } }, bool{}, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data) };
    return /*NRVO*/ res;
}

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline constexpr int F_MUT = (1 << 16);
                                #endif

static s_Target Binding_zwcPHZ8K(const fu_STR& id, s_Type&& type, const int flags, bool& shadows, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_TokenIdx& _here)
{
    fu_STR name { id };
    const int local_of = SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target.index;
    if (_root_scope)
        autoshadow_QCa3E1Hj(shadows, local_of, id, _scope, _ss, _root_scope);

    /*MOV*/ const s_Target target = Scope_create_qoDjvL3b(_scope, "var"_fu, name, (*(const s_Type*)fu::NIL), flags, s_SolvedNode{}, int(local_of), 0u, true, module);
    s_HelpersData* _0;
    (__extension__ (
    {
        const s_Helpers& h = last_vtdPb1VG(_helpers);
        _0 = &(_helpers_data.mutref(h.index));
    (void)0;}), *_0).vars += int(target.index);
    s_Overload& overload = GET_mut_Y5AuyJLM(target, _scope, module);

    {
        s_Lifetime lifetime = Lifetime_fromBinding_yTcA5fCl(target, local_of, flags, type, module, _here, ctx, _helpers, _helpers_data, _scope, _current_fn);
        type.lifetime = s_Lifetime{};
        overload.type = ((flags & F_MUT) ? add_mutref_GR4OoJkm(s_Type(type), lifetime, _here, ctx) : add_ref_GR4OoJkm(s_Type(type), lifetime, _here, ctx));
    };
    return /*NRVO*/ target;
}

static void solveLet_XfWCIePk(s_SolvedNode& out, const fu_STR& id, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fn_or_type, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss)
{
    if (SolvedNodeData_CoW62h8S(out, module, _scope, ctx).kind != "let"_fu)
    {
        if (SELF_TEST)
        {
            if (!(is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(out, module, _scope, ctx).type)))
                fail_jI4Vez2o((((("solveLet: results in a `"_fu + SolvedNodeData_CoW62h8S(out, module, _scope, ctx).kind) + ": "_fu) + id) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        return;
    };
    if (!(!is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(out, module, _scope, ctx).type) || SolvedNodeData_CoW62h8S(out, module, _scope, ctx).type.lifetime))
        fail_jI4Vez2o((("solveLet: ref without lifetime: `"_fu + id) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    bool shadows = !!(SolvedNodeData_CoW62h8S(out, module, _scope, ctx).flags & F_SHADOW);
    const int isArg = (SolvedNodeData_CoW62h8S(out, module, _scope, ctx).flags & F_ARG);
    fu_STR cleanID {};
    if (SolvedNodeData_CoW62h8S(out, module, _scope, ctx).flags & F_COMPOUND_ID)
    {
        if (!(isArg))
            fail_jI4Vez2o("`let`: F_COMPOUND_ID on a non-F_ARG."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        const int start = (find_05euw4KZ(id, '!') + 1);
        const int end = find_eUTPXk7U(id, '.', ((start > 0) ? int(start) : 0));
        cleanID = fu::slice(id, ((start > 0) ? int(start) : 0), ((end > 0) ? int(end) : id.size()));
        if (!(cleanID && (cleanID.size() < id.size())))
            fail_jI4Vez2o("`let`: F_COMPOUND_ID bad cleanID."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    const fu_STR& id_1 = (cleanID ? cleanID : id);
    if (!X_unpackAddrOfFnBinding_PsLoxX6P(_scope.items, id_1, SolvedNodeData_CoW62h8S(out, module, _scope, ctx).type, true))
    {
        if (OPTI_dedupe_vars && !isArg && !(SolvedNodeData_CoW62h8S(out, module, _scope, ctx).flags & F_PUB))
        {
            const s_SolvedNode& init = SolvedNodeData_CoW62h8S(out, module, _scope, ctx).items[LET_INIT];
            if ((SolvedNodeData_CoW62h8S(init, module, _scope, ctx).kind == "call"_fu) && !SolvedNodeData_CoW62h8S(init, module, _scope, ctx).items)
            {
                const s_Target target { SolvedNodeData_CoW62h8S(init, module, _scope, ctx).target };
                const s_Overload& other = GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data);
                if (other.kind == "var"_fu)
                {
                    if (isAssignable_P9wIESfO(other.type, SolvedNodeData_CoW62h8S(out, module, _scope, ctx).type))
                    {
                        Scope_set_zS7wGzyw(_scope, id_1, target, shadows);
                        if (SolvedNodeData_CoW62h8S(out, module, _scope, ctx).flags & F_USING)
                            _scope.usings.push(s_Target(target));

                        out = createEmpty_5d3UxTMW("empty"_fu, t_void, s_Target{}, _here, _current_fn_or_type, module, _scope);
                        return;
                    };
                };
            };
        };
        const s_Target target { (MUT_Kfn68Cy8(out, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).target = Binding_zwcPHZ8K(id_1, s_Type(SolvedNodeData_CoW62h8S(out, module, _scope, ctx).type), int(SolvedNodeData_CoW62h8S(out, module, _scope, ctx).flags), shadows, _current_fn, module, _scope, ctx, _root_scope, _ss, _helpers, _helpers_data, _here)) };
        GET_mut_Y5AuyJLM(s_Target(target), _scope, module).solved = out;
        Scope_set_zS7wGzyw(_scope, id_1, target, shadows);
        if (SolvedNodeData_CoW62h8S(out, module, _scope, ctx).flags & F_USING)
            _scope.usings.push(s_Target(target));

    };
}

static s_SolvedNode solveLet_P46fCad5(const s_Node& node, const s_Type& specType, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ s_SolvedNode out = solveLetLike_dontTouchScope_KNjSPnx4(node, specType, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    const fu_STR& id = SolvedNodeData_CoW62h8S(out, module, _scope, ctx).value;
    solveLet_XfWCIePk(out, fu_STR(id), module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _root_scope, _ss);
    return /*NRVO*/ out;
}

                                #ifndef DEFt_only_qafQymtX
                                #define DEFt_only_qafQymtX
inline const s_Region& only_qafQymtX(fu::view<s_Region> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Lifetime Lifetime_fromNative_65IYEhhl(fu::view<s_Node> sig, fu::view<s_SolvedNode> args, const s_Type& actual, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!((sig.size() + FN_ARGS_BACK) == args.size()))
        fail_jI4Vez2o("sig.len != args.len"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    const s_Node& ret = sig[(sig.size() + FN_RET_BACK)];
    bool mutref = ((ret.kind == "call"_fu) && (ret.items.size() == 1) && (ret.value == "&mut"_fu));
    /*MOV*/ s_Type res {};
    for (; ; )
    {
        for (int i = 0; i < args.size(); i++)
        {
            const s_Node& inArg = sig[i];
            const s_Node& annot = inArg.items[LET_TYPE];
            if ((annot.items.size() == 1) && (((annot.kind == "call"_fu) && ((!mutref && (annot.value == "&"_fu)) || (annot.value == "&mut"_fu))) || (!mutref && (annot.kind == "arrlit"_fu))))
            {
                if (res)
                    fail_jI4Vez2o("Ambiguous __native lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                res = GET_mF5WytW3(SolvedNodeData_CoW62h8S(args[i], module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data).type;
                if (!(res.lifetime))
                    fail_jI4Vez2o("Missing arg lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        if (!mutref || res.lifetime)
            break;

        mutref = false;
    };
    if (!(Region_isArg_rLDFQf65(only_qafQymtX(res.lifetime.uni0n))))
        fail_jI4Vez2o("Non-single-arg __native lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!is_mutref_8e1ZyHy2(actual, _here, ctx) && !isAssignable_P9wIESfO(actual, res))
        return Lifetime_makeShared_knS7ptQD(res.lifetime);

    return static_cast<s_Lifetime&&>(res.lifetime);
}

inline static fu_STR mangleArguments_ITm4iMWD(fu::view<s_SolvedNode> args, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_5brmsTGN(SolvedNodeData_CoW62h8S(args[i], module, _scope, ctx).type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

static fu_STR HACK_nativeNameParts_6OxeoNRN(const bool isNative, const s_Node& n_body)
{
    /*MOV*/ fu_STR name {};
    if (isNative && n_body.items)
    {
        for (int i = 0; i < n_body.items.size(); i++)
            name += ("\n"_fu + n_body.items[i].value);

    };
    return /*NRVO*/ name;
}

                                #ifndef DEF_SS_UPDATED
                                #define DEF_SS_UPDATED
inline constexpr unsigned SS_UPDATED = (0x1u << 4u);
                                #endif

static fu_STR CompoundArgID_outerSplice_ZrFMMqzA(fu_STR& name, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    bool exclam = false;
    for (int i = 0; i < name.size(); i++)
    {
        const char c = name[i];
        if (c == '!')
        {
            if (exclam)
                fail_jI4Vez2o((("CompoundArgID: double bang in `"_fu + name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

            exclam = true;
            const int i0 = i++;
            for (; i < name.size(); i++)
            {
                if (name[i] == '.')
                    break;

            };
            name.splice(i0, (i - i0));
            i = (i0 - 1);
            continue;
        };
        if (c == '.')
        {
            /*MOV*/ fu_STR ret = fu::slice(name, (i + 1));
            name.shrink(i);
            return /*NRVO*/ ret;
        };
    };
    if (!exclam)
        fail_jI4Vez2o((("CompoundArgID: no `.` nor `!` in id `"_fu + name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return fu_STR{};
}

                                #ifndef DEFt_unless_oob_JXQgOd5Q
                                #define DEFt_unless_oob_JXQgOd5Q
inline const s_ArgWrite& unless_oob_JXQgOd5Q(fu::view<s_ArgWrite> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_ArgWrite*)fu::NIL);
}
                                #endif

static s_SolvedNode callsite_ai0z2dTa(const s_ArgWrite& aw, const s_Target& nodeown)
{
    return s_SolvedNode { s_Target(nodeown), int(aw.nodeidx) };
}

                                #ifndef DEFt_has_xRjYFGgI
                                #define DEFt_has_xRjYFGgI
inline bool has_xRjYFGgI(fu::view<s_Target> a, const s_Target& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR qSTACK_nZq2PcMm(const s_Target& target, const int position, fu_VEC<s_Target>&& seen, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_CurrentFn& _current_fn, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Argument& host_arg = EXT_nkaMKocC(target, module, _scope, ctx).args[position];
    if (host_arg.written_via)
        return qSTACK_5QtmybJM(host_arg.written_via, target, fu_VEC<s_Target>(seen), _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

    return fu_STR{};
}

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR addr_NjvNh28J(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    const s_Token& t = _token_4nLgxTnv(token, ctx);
    if (token.modid != module.modid)
        return x7E((x7E((_fname_4nLgxTnv(token, ctx) + "@"_fu), fu::i64dec(t.line)) + ":"_fu), fu::i64dec(t.col));

    return x7E(x7E(fu::i64dec(t.line), ":"_fu), fu::i64dec(t.col));
}

static fu_STR addr_and_snippet_kBbSbBoR(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    return (addr_NjvNh28J(token, ctx, module) + ":\n\n"_fu) + formatCodeSnippet_EjSh40rn(token, s_TokenIdx{}, ctx);
}

static fu_STR qSTACK_5QtmybJM(const s_ArgWrite& written_via, const s_Target& nodeown, fu_VEC<s_Target>&& seen, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if ((written_via.nodeidx < 0) || (seen.size() >= 8))
        return fu_STR{};

    const s_SolvedNode callsite = callsite_ai0z2dTa(written_via, (nodeown ? nodeown : SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target));
    const s_Target& target = SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).target;
    fu_STR rec = (has_xRjYFGgI(seen, target) ? "recursively "_fu : fu_STR{});
    seen += s_Target(target);
    fu_STR via = (rec ? fu_STR{} : qSTACK_nZq2PcMm(target, written_via.arg_position, fu_VEC<s_Target>(seen), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data));
    return ((((("\n            "_fu + rec) + "via "_fu) + qWHAT_2UzOFrRY(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)) + " at "_fu) + addr_and_snippet_kBbSbBoR(SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).token, ctx, module)) + via;
}

static const s_Module& getModule_QqEr2DlD(const int modid, const s_Module& module, const s_Context& ctx)
{
    if (modid == module.modid)
        return module;

    return ctx.modules[modid];
}

static fu::view<char> trimmedName_z6NllDmx(const s_Module& module)
{
    fu::view<char> fname = module.fname;
    int start = 0;
    int end = fname.size();
    for (int i = end; i-- > 0; )
    {
        const char c = fname[i];
        if (c == '/')
        {
            start = (i + 1);
            break;
        };
        if (c == '.')
            end = i;

    };
    return fu::get_view(fname, start, end);
}

static fu_STR humanizeType_0qVczsOs(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR result { (isStruct_C02JG8Ye(type) ? lookupStruct_5FUAmY77(type, module, ctx).name : type.vtype.canon) };
    if (type.vtype.modid)
        result = ((trimmedName_z6NllDmx(getModule_QqEr2DlD(type.vtype.modid, module, ctx)) + "::"_fu) + result);

    if (type.vtype.quals)
        result += humanizeQuals_8e1ZyHy2(type);

    return /*NRVO*/ result;
}

                                #ifndef DEF_F_REST_ARG
                                #define DEF_F_REST_ARG
inline constexpr int F_REST_ARG = (1 << 26);
                                #endif

                                #ifndef DEF_F_OOE_RTL
                                #define DEF_F_OOE_RTL
extern const int F_OOE_RTL;
                                #endif

static int& isRTL_set_XqquFnbx(s_Overload& o, const bool rtl)
{
    return (rtl ? (o.flags |= F_OOE_RTL) : (o.flags &= ~F_OOE_RTL));
}

static void updateScope_qEKjpktH(const s_CurrentFn& out, const s_Type& retval, const bool maybeLast, const s_Target& target, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const bool isNative, const bool isUnspec, const int isPure, const s_CurrentFn& _current_fn, const int isNovec, const bool isInline)
{
    if (GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).status & SS_DIRTY)
    {
        GET_mut_Y5AuyJLM(target, _scope, module).status |= SS_UPDATED;
        return;
    };
    fu::view<s_SolvedNode> items = SolvedNodeData_CoW62h8S(out.out, module, _scope, ctx).items;
    const int N = (items.size() + FN_ARGS_BACK);
    int min = 0;
    int max = 0;
    fu_VEC<s_Argument> args {};
    for (int i = 0; i < N; i++)
    {
        const s_SolvedNode& argNode = items[i];
        if (!(SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).kind == "let"_fu))
            fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

        fu_STR name { SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).value };
        fu_STR autocall = ((SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).flags & F_COMPOUND_ID) ? CompoundArgID_outerSplice_ZrFMMqzA(name, _here, ctx, _helpers, _helpers_data, _scope, module) : fu_STR{});
        const bool isImplicit = !!(SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).flags & F_IMPLICIT);
        s_BitSet risk_free = (!isNative && !isUnspec ? ArgsAtRisk_listRiskFree_VUCqjTi1(out.flow, i) : s_BitSet{});
        const s_Target& argTarget = SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).target;
        const s_ArgWrite written_via = (is_mutref_8e1ZyHy2(SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).type, _here, ctx) ? (isNative ? s_ArgWrite { -1, -1 } : s_ArgWrite(unless_oob_JXQgOd5Q(out.events.args_written_via, argTarget.index))) : s_ArgWrite{});
        if (isPure && written_via)
            fail_jI4Vez2o(((((qWHAT_2UzOFrRY(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data) + " is not pure, writes to argument "_fu) + qID_PSFLzFOM(human_UbFfpidG(name, module, _scope, ctx, _here, _helpers, _helpers_data))) + ":\n"_fu) + qSTACK_5QtmybJM(written_via, s_Target{}, fu_VEC<s_Target>{}, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

        if (maybeLast && isNovec && (is_rx_copy_8e1ZyHy2(SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).type) || is_rx_resize_8e1ZyHy2(SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).type)))
            fail_jI4Vez2o(((((qWHAT_2UzOFrRY(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data) + " is not novec, argument "_fu) + qID_PSFLzFOM(human_UbFfpidG(name, module, _scope, ctx, _here, _helpers, _helpers_data))) + " is "_fu) + humanizeType_0qVczsOs(SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Argument arg = s_Argument { fu_STR(name), fu_STR(autocall), s_Type(SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).type), s_SolvedNode((!isImplicit ? SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), int(SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).flags), s_BitSet(risk_free), s_ArgWrite(written_via) };
        if (!(arg.type || isUnspec))
            fail_jI4Vez2o((("Unexpected untyped argument: `"_fu + name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        args.push(s_Argument(arg));
        if (!isImplicit)
        {
            if (max != int(0x7fffffffu))
                max++;

            if (!arg.dEfault)
                min++;

        };
        if (arg.flags & F_REST_ARG)
            max = int(0x7fffffffu);

    };
    s_Overload overload { GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data) };
    s_Extended& ext = EXT_mut_chviOJ9J(target, module, _scope);
    bool change = false;
    if (ext.callsites)
    {
        change = ((args.size() != ext.args.size()) || !(overload.type == retval));
        if (!change)
        {
            for (int i_1 = 0; i_1 < args.size(); i_1++)
            {
                const s_Argument& a = args[i_1];
                const s_Argument& b = ext.args[i_1];
                if (!((a.name == b.name) && (a.type == b.type)))
                {
                    change = true;
                    break;
                };
            };
        };
    };
    ext.min = min;
    ext.max = max;
    ext.args = args;
    s_Overload& overload_1 = GET_mut_Y5AuyJLM(target, _scope, module);
    overload_1.type = retval;
    if (isInline)
        return;

    if (!(retval))
        fail_jI4Vez2o("FnDecl_update: no return type."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (is_ref_8e1ZyHy2(retval))
        Lifetime_test_0kwmjgvX(retval.lifetime, bool{}, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

    overload_1.flags = SolvedNodeData_CoW62h8S(out.out, module, _scope, ctx).flags;
    overload_1.solved = (!isUnspec ? out.out : (*(const s_SolvedNode*)fu::NIL));

    {
        const bool rtl = ((args.size() == 2) && (overload_1.flags & F_OPERATOR) && hasAssignment_rJbriNRz(overload_1.name));
        isRTL_set_XqquFnbx(overload_1, rtl);
    };
    if (change)
        overload_1.status |= SS_UPDATED;

}

inline static fu_STR mangleArguments_FG2AswjR(fu::view<s_Argument> args, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_5brmsTGN(args[i].type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_HM_CanReturn
                                #define DEF_HM_CanReturn
inline constexpr short HM_CanReturn = short((short(1) << short(1)));
                                #endif

                                #ifndef DEF_HM_LabelUsed
                                #define DEF_HM_LabelUsed
inline constexpr short HM_LabelUsed = short((short(1) << short(6)));
                                #endif

                                #ifndef DEF_F_LAMBDA
                                #define DEF_F_LAMBDA
inline constexpr int F_LAMBDA = (1 << 30);
                                #endif

                                #ifndef DEF_HM_Lambda
                                #define DEF_HM_Lambda
inline constexpr short HM_Lambda = short((short(1) << short(4)));
                                #endif

static int GET_next_local_index_uPs0ZCBl(const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target.index ? (_scope.extended[(SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target.index - 1)].locals.size() + 1) : int{};
}

                                #ifndef DEFt_steal_oy2Wniqi
                                #define DEFt_steal_oy2Wniqi
inline fu_VEC<int> steal_oy2Wniqi(fu_VEC<int>& a, const int start, const int end)
{
    const int size = (end - start);
    /*MOV*/ fu_VEC<int> ret {};
    ret.resize(size);
    for (int i = 0; i < size; i++)
        std::swap(ret.mutref(i), a.mutref((i + start)));

    a.splice(start, size);
    return /*NRVO*/ ret;
}
                                #endif

                                #ifndef DEFt_last_6mv8AnDF
                                #define DEFt_last_6mv8AnDF
inline const s_SolvedNode& last_6mv8AnDF(fu::view<s_SolvedNode> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode createJump_pn5s5Yk7(const s_Target& target, const s_SolvedNode& expr, const s_Helpers& h, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode_0vKsswP4("jump"_fu, t_never, 0, (*(const fu_STR*)fu::NIL), (expr ? fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } } : fu_VEC<s_SolvedNode>{}), target, h.index, _here, _current_fn_or_type, module, _scope);
}

                                #ifndef DEFt_only_aj4CwosS
                                #define DEFt_only_aj4CwosS
inline const s_SolvedNode& only_aj4CwosS(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static void checkAssignable_0veNrHd3(const s_Type& host, const s_Type& guest, fu::view<char> err, const fu_STR& id, const fu_STR& sep, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!(isAssignable_P9wIESfO((host ? host : fail_jI4Vez2o("Bad host type."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)), (guest ? guest : fail_jI4Vez2o("Bad guest type."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)))))
        fail_jI4Vez2o((((((err + (id ? ((" `"_fu + id) + "`"_fu) : fu_STR{})) + ": "_fu) + humanizeType_0qVczsOs(host, module, ctx)) + (sep ? fu_STR(sep) : " <- "_fu)) + humanizeType_0qVczsOs(guest, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

}

static s_Type superType_pUSAdg6S(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_Type _0 {};
    return (_0 = type_trySuper_P9wIESfO(a, b)) ? static_cast<s_Type&&>(_0) : fail_jI4Vez2o((((((((id ? (("`"_fu + human_UbFfpidG(id, module, _scope, ctx, _here, _helpers, _helpers_data)) + "`: "_fu) : fu_STR{}) + reason) + "No common supertype: `"_fu) + humanizeType_0qVczsOs(a, module, ctx)) + "` | `"_fu) + humanizeType_0qVczsOs(b, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void reportReturnType_bUZECnF3(const s_Helpers& h, const s_Type& type, fu_VEC<s_HelpersData>& _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, const s_Scope& _scope, const s_Module& module)
{
    if (_helpers_data[h.index].ret_expect && short((_helpers_data[h.index].mask & HM_Function)))
        checkAssignable_0veNrHd3(_helpers_data[h.index].ret_expect, type, "Expression not assignable to return annotation"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);

    _helpers_data.mutref(h.index).ret_actual = (_helpers_data[h.index].ret_actual ? superType_pUSAdg6S("Subsequent return: "_fu, _helpers_data[h.index].ret_actual, type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data) : s_Type(type));
    if (!(_helpers_data[h.index].ret_actual))
        fail_jI4Vez2o("Can't be null past this point."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

}

                                #ifndef DEF_F_REF
                                #define DEF_F_REF
inline constexpr int F_REF = (1 << 22);
                                #endif

static const s_Type& Lifetime_climbType_gu0BxWTP(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (!(o.kind == "var"_fu))
        fail_jI4Vez2o(("Lifetime_climbType: not a `var`: "_fu + qWHAT_2UzOFrRY(o, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

    return is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(o.solved, module, _scope, ctx).type) ? SolvedNodeData_CoW62h8S(SolvedNodeData_CoW62h8S(o.solved, module, _scope, ctx).items[LET_INIT], module, _scope, ctx).type : (*(const s_Type*)fu::NIL);
}

static bool Lifetime_allowsMutrefReturn_mZ6SExHE(const s_Lifetime& lifetime, const int locals_start, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{

    {
        for (int i = lifetime.uni0n.size(); i-- > 0; )
        {
            const s_Region& r = lifetime.uni0n[i];
            if (r.index < locals_start)
                break;

            if (Region_isTemp_rLDFQf65(r))
                continue;

            const s_Overload& o = GET_mut_Y5AuyJLM(nested_TmvnfpAm(Region_toLocalIndex_rLDFQf65(r), _current_fn, module, _scope, ctx), _scope, module);
            if (!(is_mutref_8e1ZyHy2(o.type, _here, ctx)))
                fail_jI4Vez2o(("Checking for mutref-return-ok found non-mutref: "_fu + qWHAT_2UzOFrRY(o, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

            if ((o.kind == "var"_fu) && !(o.flags & F_REF))
                return false;

            const s_Type& init = Lifetime_climbType_gu0BxWTP(o, module, _scope, ctx, _here, _helpers, _helpers_data);
            if (!Lifetime_allowsMutrefReturn_mZ6SExHE(s_Lifetime(init.lifetime), locals_start, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data))
                return false;

        };
    };
    return true;
}

                                #ifndef DEF_F_TODO_FIX_RRET
                                #define DEF_F_TODO_FIX_RRET
inline constexpr int F_TODO_FIX_RRET = (1 << 27);
                                #endif

inline static void Lifetime_each_xFcgkPDr(const s_Lifetime& lifetime, int, const int locals_start, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const int locals_start_1)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;

        if (Region_isTemp_rLDFQf65(r))
            continue;

        s_Overload& o = GET_mut_Y5AuyJLM(nested_TmvnfpAm(Region_toLocalIndex_rLDFQf65(r), _current_fn, module, _scope, ctx), _scope, module);
        o.flags |= F_TODO_FIX_RRET;
        const s_Type& init = Lifetime_climbType_gu0BxWTP(o, module, _scope, ctx, _here, _helpers, _helpers_data);
        if (is_ref_8e1ZyHy2(init))
            Lifetime_F_TODO_FIX_RRET_NXadJdWk(s_Lifetime(init.lifetime), locals_start_1, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

    };
}

static void Lifetime_F_TODO_FIX_RRET_NXadJdWk(const s_Lifetime& lifetime, const int locals_start, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    Lifetime_each_xFcgkPDr(lifetime, 0, locals_start, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, locals_start);
}

                                #ifndef DEFt_if_last_6mv8AnDF
                                #define DEFt_if_last_6mv8AnDF
inline const s_SolvedNode& if_last_6mv8AnDF(fu::view<s_SolvedNode> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

inline static void Lifetime_each_V3AqOj5O(s_Lifetime& lifetime, int, const int locals_start, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;

        if (Region_isTemp_rLDFQf65(r))
            continue;

        const s_Overload& o = GET_mut_Y5AuyJLM(nested_TmvnfpAm(Region_toLocalIndex_rLDFQf65(r), _current_fn, module, _scope, ctx), _scope, module);
        const s_Type& init = Lifetime_climbType_gu0BxWTP(o, module, _scope, ctx, _here, _helpers, _helpers_data);
        if (!is_ref_8e1ZyHy2(init))
            continue;

        if (!(init.lifetime.uni0n.size()))
            fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

        lifetime.uni0n.splice(i, 1);
        const int N0 = lifetime.uni0n.size();
        lifetime = Lifetime_union_7jT6yxSF(lifetime, init.lifetime);
        const int N1 = lifetime.uni0n.size();
        i += (N1 - N0);
    };
}

static s_Lifetime Lifetime_unwind_wXIcMIll(/*MOV*/ s_Lifetime&& lifetime, const int locals_start, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    Lifetime_each_V3AqOj5O(lifetime, 0, locals_start, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);
    return static_cast<s_Lifetime&&>(lifetime);
}

                                #ifndef DEFt_if_first_l0gXiKi4
                                #define DEFt_if_first_l0gXiKi4
inline const s_Region& if_first_l0gXiKi4(fu::view<s_Region> s)
{
    return s.size() ? s[0] : (*(const s_Region*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_if_last_l0gXiKi4
                                #define DEFt_if_last_l0gXiKi4
inline const s_Region& if_last_l0gXiKi4(fu::view<s_Region> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_Region*)fu::NIL);
}
                                #endif

static int Lifetime_vs_C24G5rle(const s_Lifetime& lifetime, const int locals_start)
{
    return ((Region_toLocalIndex_rLDFQf65(if_first_l0gXiKi4(lifetime.uni0n)) >= locals_start) ? +1 : ((Region_toLocalIndex_rLDFQf65(if_last_l0gXiKi4(lifetime.uni0n)) < locals_start) ? -1 : 0));
}

                                #ifndef DEF_F_MOVED_FROM
                                #define DEF_F_MOVED_FROM
inline constexpr int F_MOVED_FROM = (1 << 11);
                                #endif

inline static void Lifetime_each_NE1Ec3vQ(const s_Lifetime& lifetime, int, const int locals_start, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;

        if (Region_isTemp_rLDFQf65(r))
            continue;

        s_Overload& o = GET_mut_Y5AuyJLM(nested_TmvnfpAm(Region_toLocalIndex_rLDFQf65(r), _current_fn, module, _scope, ctx), _scope, module);
        if (o.flags & F_MOVED_FROM)
            continue;

        o.flags |= F_MOVED_FROM;
        const s_Type& init = Lifetime_climbType_gu0BxWTP(o, module, _scope, ctx, _here, _helpers, _helpers_data);
        if (is_ref_8e1ZyHy2(init))
            Lifetime_F_MOVED_FROM_vsPWcrQK(s_Lifetime(init.lifetime), _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

    };
}

static void Lifetime_F_MOVED_FROM_vsPWcrQK(const s_Lifetime& lifetime, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    Lifetime_each_NE1Ec3vQ(lifetime, 0, 0, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);
}

static s_SolvedNode createMove_kBNuLZQv(const s_SolvedNode& node, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_CurrentFn& _current_fn, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type)
{
    Lifetime_F_MOVED_FROM_vsPWcrQK(s_Lifetime(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type.lifetime), _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);
    return SolvedNode_0vKsswP4("move"_fu, clear_refs_8e1ZyHy2(s_Type(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type)), 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createCopy_Qj1jBLYg(const s_SolvedNode& node, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fn_or_type)
{
    return SolvedNode_0vKsswP4("copy"_fu, clear_refs_8e1ZyHy2(s_Type(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type)), 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
}

                                #ifndef DEFt_only_WrcQl81W
                                #define DEFt_only_WrcQl81W
inline s_SolvedNode& only_WrcQl81W(fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static void mcom_BlockReturns_CopyOrMoveDecision_XZ1SQzb6(const s_Helpers& h, fu_VEC<s_HelpersData>& _helpers_data, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_CurrentFn& _current_fn, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, const s_Target& _current_fn_or_type)
{
    for (int i = 0; i < _helpers_data[h.index].returns.size(); i++)
    {
        s_SolvedNode expr { only_aj4CwosS(SolvedNodeData_CoW62h8S(_helpers_data[h.index].returns[i], module, _scope, ctx).items) };
        s_Type type { SolvedNodeData_CoW62h8S(expr, module, _scope, ctx).type };
        if (is_ref_8e1ZyHy2(type))
        {
            type.lifetime = Lifetime_unwind_wXIcMIll(s_Lifetime(type.lifetime), _helpers_data[h.index].locals_start, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);
            int _0 {};
            const int ltCompare = Lifetime_vs_C24G5rle(type.lifetime, ((_0 = _helpers_data[h.index].locals_start) ? _0 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)));
            if ((ltCompare >= 0))
            {
                if (ltCompare > 0)
                    expr = createMove_kBNuLZQv(expr, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type);
                else
                    expr = createCopy_Qj1jBLYg(expr, module, _scope, ctx, _here, _current_fn_or_type);

                only_WrcQl81W(MUT_Kfn68Cy8(_helpers_data[h.index].returns[i], module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).items) = expr;
                type = SolvedNodeData_CoW62h8S(expr, module, _scope, ctx).type;
            };
        };
        reportReturnType_bUZECnF3(h, type, _helpers_data, _here, ctx, _helpers, _scope, module);
    };
    if (_helpers_data[h.index].ret_expect)
        checkAssignable_0veNrHd3(_helpers_data[h.index].ret_expect, _helpers_data[h.index].ret_actual, "Actual return type does not match annotation"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);

}

static void test_nodes_fKTChDQB(fu::view<s_SolvedNode> nodes, fu::view<char> debug, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    for (int i = 0; i < nodes.size(); i++)
        test_node_dWzuMFgS(nodes[i], (x7E((debug + "["_fu), fu::i64dec(i)) + "]"_fu), module, _scope, ctx, _here, _helpers, _helpers_data);

}

inline static fu_STR mangleArguments_3mMGzEot(fu::view<s_SolvedNode> args, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_5brmsTGN(SolvedNodeData_CoW62h8S(args[i], module, _scope, ctx).type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_F_MUSTNAME
                                #define DEF_F_MUSTNAME
inline constexpr int F_MUSTNAME = (1 << 19);
                                #endif

static fu_STR explainConversion_MBAzmMNM(fu::view<s_Target> path, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    /*MOV*/ fu_STR res = "`"_fu;
    for (int i = 0; i < path.size(); i++)
    {
        if (i)
            res += "` -> `"_fu;

        const s_Overload& o = GET_mF5WytW3(path[i], _scope, module, ctx, _here, _helpers, _helpers_data);
        res += qWHAT_2UzOFrRY(o, module, _scope, ctx, _here, _helpers, _helpers_data);
        if (i < path.size())
            res += (": "_fu + humanizeType_0qVczsOs(o.type, module, ctx));

    };
    res += "`"_fu;
    return /*NRVO*/ res;
}

static fu_STR explainWhichFn_cU6mRM80(const s_Target& overload, fu::view<fu_VEC<s_Target>> conversions, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    /*MOV*/ fu_STR result = ("`"_fu + GET_mF5WytW3(overload, _scope, module, ctx, _here, _helpers, _helpers_data).name);
    if (EXT_nkaMKocC(overload, module, _scope, ctx).args)
    {
        result += "("_fu;
        for (int i = 0; i < EXT_nkaMKocC(overload, module, _scope, ctx).args.size(); i++)
        {
            const s_Argument& arg = EXT_nkaMKocC(overload, module, _scope, ctx).args[i];
            if (i)
                result += ","_fu;

            result += (((("\n\t"_fu + qID_PSFLzFOM(human_UbFfpidG(arg.name, module, _scope, ctx, _here, _helpers, _helpers_data))) + ((arg.flags & F_MUSTNAME) ? "!"_fu : fu_STR{})) + (arg.dEfault ? "?: "_fu : ": "_fu)) + (arg.type ? humanizeType_0qVczsOs(arg.type, module, ctx) : "$"_fu));
            const fu_VEC<s_Target>& c = ((conversions.size() > i) ? conversions[i] : (*(const fu_VEC<s_Target>*)fu::NIL));
            if (c)
                result += (" via "_fu + explainConversion_MBAzmMNM(c, _scope, module, ctx, _here, _helpers, _helpers_data));

        };
        result += ")"_fu;
    };
    result += "`"_fu;
    return /*NRVO*/ result;
}

[[noreturn]] static fu::never err_dvH4CalJ(fu::view<char> reason, fu::view<char> debug, const s_SolvedNode& callsite, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fail_jI4Vez2o(((((debug + " "_fu) + qWHAT_2UzOFrRY(GET_mF5WytW3(SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)) + ": "_fu) + reason), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void test_CallSignature_Nj1bJrJm(const s_SolvedNode& callsite, fu::view<char> debug, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu::view<s_Argument> host_args = EXT_nkaMKocC(SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).target, module, _scope, ctx).args;
    fu::view<s_SolvedNode> args = SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).items;
    if ((args.size() == 0) && (GET_mF5WytW3(SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "type"_fu))
        return;

    if (!(host_args.size() == args.size()))
        err_dvH4CalJ((((((x7E((x7E("host_args.len ("_fu, fu::i64dec(host_args.size())) + ") != args.len ("_fu), fu::i64dec(args.size())) + "):"_fu) + "\n\t\t"_fu) + mangleArguments_3mMGzEot(args, module, _scope, ctx, _here)) + "\n\t\t"_fu) + explainWhichFn_cU6mRM80(SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).target, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx, _here, _helpers, _helpers_data)), debug, callsite, module, _scope, ctx, _here, _helpers, _helpers_data);

    for (int i = 0; i < host_args.size(); i++)
    {
        const s_Argument& host_arg = host_args[i];
        const s_SolvedNode& arg = args[i];
        if (!(isAssignableAsArgument_P9wIESfO(host_arg.type, SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).type)))
            err_dvH4CalJ(((((((x7E("Arg #"_fu, fu::i64dec(i)) + ", "_fu) + qID_PSFLzFOM(human_UbFfpidG(host_arg.name, module, _scope, ctx, _here, _helpers, _helpers_data))) + " not assignable to host_arg: "_fu) + humanizeType_0qVczsOs(host_arg.type, module, ctx)) + " <- "_fu) + humanizeType_0qVczsOs(SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).type, module, ctx)), debug, callsite, module, _scope, ctx, _here, _helpers, _helpers_data);

    };
}

static void test_Statements_ip0loOfe(const s_SolvedNode& block, fu::view<char> debug, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu::view<s_SolvedNode> items = SolvedNodeData_CoW62h8S(block, module, _scope, ctx).items;
    for (int i = 0; i < items.size(); i++)
    {
        const s_SolvedNode& n = items[i];
        if (!(SolvedNodeData_CoW62h8S(n, module, _scope, ctx).kind))
            fail_jI4Vez2o((x7E((debug + ": No .kind on item["_fu), fu::i64dec(i)) + "]."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    };
}

static void test_node_dWzuMFgS(const s_SolvedNode& node, fu_STR&& debug, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    debug += ("/"_fu + SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind);
    if (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).value)
        debug += (("["_fu + SolvedNodeData_CoW62h8S(node, module, _scope, ctx).value) + "]"_fu);

    test_nodes_fKTChDQB(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items, debug, module, _scope, ctx, _here, _helpers, _helpers_data);
    _here = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).token;
    if (!(!is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type) == !SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type.lifetime))
        fail_jI4Vez2o(((debug + ": !!ref != !!lt: "_fu) + humanizeType_0qVczsOs(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    fu::view<char> k = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind;
    if (k == "call"_fu)
        return test_CallSignature_Nj1bJrJm(node, debug, module, _scope, ctx, _here, _helpers, _helpers_data);

    if ((k == "block"_fu) || (k == "and"_fu) || (k == "or"_fu) || (k == "if"_fu))
    {
        if ((k == "and"_fu) || (k == "or"_fu))
        {
            if (!(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size() > 1))
                fail_jI4Vez2o(x7E((debug + ".len: "_fu), fu::i64dec(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size())), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        if (k == "if"_fu)
        {
            if (!(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size() == 3))
                fail_jI4Vez2o(x7E((debug + ".len: "_fu), fu::i64dec(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size())), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        return test_Statements_ip0loOfe(node, debug, module, _scope, ctx, _here, _helpers, _helpers_data);
    };
}

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
inline constexpr int q_mutref = (1 << 0);
                                #endif

                                #ifndef DEF_q_rx_resize
                                #define DEF_q_rx_resize
inline constexpr int q_rx_resize = (1 << 2);
                                #endif

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
inline constexpr int RELAX_before_bck = (q_mutref | q_rx_resize);
                                #endif

                                #ifndef DEFt_unless_oob_UBlcSkJW
                                #define DEFt_unless_oob_UBlcSkJW
inline const s_Type& unless_oob_UBlcSkJW(fu::view<s_Type> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Type*)fu::NIL);
}
                                #endif

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline constexpr int q_rx_copy = (1 << 1);
                                #endif

                                #ifndef DEF_q_rx_move
                                #define DEF_q_rx_move
inline constexpr int q_rx_move = (1 << 3);
                                #endif

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
inline constexpr int RELAX_all = (((q_mutref | q_rx_copy) | q_rx_resize) | q_rx_move);
                                #endif

                                #ifndef DEF_F_LAX
                                #define DEF_F_LAX
inline constexpr int F_LAX = (1 << 8);
                                #endif

                                #ifndef DEF_F_UNUSED
                                #define DEF_F_UNUSED
inline constexpr int F_UNUSED = (1 << 10);
                                #endif

static void relaxBlockVar_ikc3Hj63(const s_Target& t, const int relax_mask, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Overload& var = GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data);
    s_Type usage { unless_oob_UBlcSkJW(_current_fn.var_usage, t.index) };
    if (!usage && (relax_mask == RELAX_all))
    {
        if (!(var.flags & F_LAX))
            fail_jI4Vez2o((("Unused variable: `"_fu + var.name) + "`: make it `lax` if this is intentional."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        GET_mut_Y5AuyJLM(t, _scope, module).flags |= F_UNUSED;
    };
    s_Overload& o = GET_mut_Y5AuyJLM(t, _scope, module);
    try_relax_69tqLpHe(o.type, usage, int(relax_mask));
    if (!(SolvedNodeData_CoW62h8S(o.solved, module, _scope, ctx).type))
        fail_jI4Vez2o("!var.solved.type, can`t propagateType"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);


    {
        const s_SolvedNode node { o.solved };
        try_relax_69tqLpHe(MUT_Kfn68Cy8(s_SolvedNode(node), module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type, usage, int(relax_mask));
        const s_SolvedNode init { (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items ? SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL)) };
        if (init)
        {
            propagateType_E7Njny0p(s_SolvedNode(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[LET_INIT]), s_Type(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
            if (is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type) && !(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).flags & F_ARG))
                MUT_Kfn68Cy8(node, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type.lifetime = SolvedNodeData_CoW62h8S(init, module, _scope, ctx).type.lifetime;

        };
    };
    s_Overload& o_1 = GET_mut_Y5AuyJLM(t, _scope, module);
    if (o_1.flags & F_MUT)
    {
        if (is_mutref_8e1ZyHy2(usage, _here, ctx) || (o_1.flags & F_TODO_FIX_RRET))
        {
            s_Type type = clear_refs_8e1ZyHy2(s_Type(SolvedNodeData_CoW62h8S(o_1.solved, module, _scope, ctx).type));
            MUT_Kfn68Cy8(s_SolvedNode(o_1.solved), module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = type;
        }
        else
            o_1.flags &= ~F_MUT;

    };
}

                                #ifndef DEF_CANNOT_definit_mutrefs
                                #define DEF_CANNOT_definit_mutrefs
extern const bool CANNOT_definit_mutrefs;
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

static bool isNested_ZUpW8tyV(const s_Target& target, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return target.modid == -SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target.index;
}

                                #ifndef DEFt_grow_if_oob_ZRJNd4jX
                                #define DEFt_grow_if_oob_ZRJNd4jX
inline s_Type& grow_if_oob_ZRJNd4jX(fu_VEC<s_Type>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu::view<s_SolvedNode> arg_lets_VHTIaDSy(const s_Overload& overload, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return fu::get_view(SolvedNodeData_CoW62h8S(overload.solved, module, _scope, ctx).items, 0, (SolvedNodeData_CoW62h8S(overload.solved, module, _scope, ctx).items.size() + FN_ARGS_BACK));
}

static bool TODO_FIX_has_Kxwsnai9(fu::view<s_Region> a, const s_Region& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}

static fu_STR mangleArguments_jLBbvOvP(fu::view<s_SolvedNode> args, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    /*MOV*/ fu_STR mangle {};
    const int REST_END = (use_reorder ? reorder.size() : args.size());
    const int N = std::min(REST_END, REST_START);
    for (int i = 0; i < N; i++)
    {
        if (i)
            mangle += ","_fu;

        const int callsiteIndex = (use_reorder ? reorder[i] : i);
        if ((conversions.size() > i) && conversions[i].size())
            mangle += serializeType_5brmsTGN(GET_mF5WytW3(last_g4Ujnafl(conversions[i]), _scope, module, ctx, _here, _helpers, _helpers_data).type, "mangle.conv"_fu, _here, ctx);
        else if ((callsiteIndex >= 0) && (callsiteIndex <= args.size()))
            mangle += serializeType_5brmsTGN(SolvedNodeData_CoW62h8S(args[callsiteIndex], module, _scope, ctx).type, "mangle.no-conv"_fu, _here, ctx);

    };
    if (REST_START < REST_END)
    {
        if (REST_START)
            mangle += ","_fu;

        mangle += serializeType_5brmsTGN(REST_TYPE, "mangle[Nodes].rest"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEFt_get_fUKsOYjg
                                #define DEFt_get_fUKsOYjg
inline const s_Target& get_fUKsOYjg(const s_Map_nrIRbWMi& _, const fu_STR& key)
{
    const int idx = bfind_nPNQURov(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const s_Target*)fu::NIL);
}
                                #endif

static s_Target trySpecialize_3RH4B2JL(const s_Target& overloadIdx, fu::view<s_SolvedNode> args, fu_STR& args_mangled, const int REST_START, const s_Type& REST_TYPE, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(args_mangled))
        args_mangled = mangleArguments_jLBbvOvP(args, reorder, use_reorder, conversions, REST_START, REST_TYPE, _scope, module, ctx, _here, _helpers, _helpers_data);

    fu_STR mangle = ((x7E(x7E(fu::i64dec(overloadIdx.modid), "#"_fu), fu::i64dec(overloadIdx.index)) + " "_fu) + args_mangled);
    s_Target _0 {};
    const s_Target spec = ((_0 = s_Target(get_fUKsOYjg(_specs, mangle))) ? _0 : doTrySpecialize_tMyTP3bm(s_Target{}, overloadIdx, args, fu_STR(mangle), reorder, use_reorder, conversions, REST_START, REST_TYPE, module, _scope, ctx, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string));
    return s_Target((!is_SPECFAIL_MSiWxO0f(spec) ? spec : (*(const s_Target*)fu::NIL)));
}

static s_Lifetime Lifetime_replaceArgsAtCallsite_mONu9g2O(const s_Overload& overload, fu::view<s_SolvedNode> argNodes, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const fu_VEC<s_Region>& returned = overload.type.lifetime.uni0n;
    fu::view<s_SolvedNode> items = arg_lets_VHTIaDSy(overload, module, _scope, ctx);
    if (!Region_isArg_rLDFQf65(if_first_l0gXiKi4(returned)))
        return s_Lifetime { fu_VEC<s_Region>(returned) };

    s_Lifetime keep {};
    s_Lifetime replace {};
    int offset = items.size();
    for (int i = 0; i < returned.size(); i++)
    { {
        const s_Region& region = returned[i];
        if (Region_isStatic_rLDFQf65(region))
        {
            keep.uni0n += s_Region(region);
            continue;
        };
        if (!(Region_isArg_rLDFQf65(region)))
            fail_jI4Vez2o(x7E("Not an argument region: "_fu, fu::i64dec(region.index)), _here, ctx, _helpers, _helpers_data, _scope, module);

        const int index = Region_toArgIndex_rLDFQf65(region);
        while (offset--)
        {
            const s_Target& here = SolvedNodeData_CoW62h8S(items[offset], module, _scope, ctx).target;
            if (here.index == index)
            {
                const s_SolvedNode& argNode = argNodes[offset];
                const s_Lifetime* _0;
                s_Lifetime argLt = (is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).type) ? s_Lifetime((*(_0 = &(SolvedNodeData_CoW62h8S(argNode, module, _scope, ctx).type.lifetime)) ? *_0 : fail_jI4Vez2o("refarg without lifetime"_fu, _here, ctx, _helpers, _helpers_data, _scope, module))) : Lifetime_temporary_8nlJDPX0());
                replace = Lifetime_union_7jT6yxSF(replace, argLt);
                goto L_04;
            };
            if (!(!here.index || (here.index > index)))
                fail_jI4Vez2o(("Nope, going backwards: "_fu + qWHAT_2UzOFrRY(GET_mF5WytW3(here, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        fail_jI4Vez2o(x7E("Could not find argument region: "_fu, fu::i64dec(index)), _here, ctx, _helpers, _helpers_data, _scope, module);
      } L_04:;
    };
    return Lifetime_union_7jT6yxSF(keep, replace);
}

static bool isRTL_qu1plyDs(const s_Overload& o)
{
    return !!(o.flags & F_OOE_RTL);
}

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

static void propagateType_E7Njny0p(const s_SolvedNode& node, const s_Type& slot, const int relax_mask, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_STR k { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind };
    if (k == "let"_fu)
    {
        if (!SolvedNodeData_CoW62h8S(node, module, _scope, ctx).target)
            return;

        return relaxBlockVar_ikc3Hj63(s_Target(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).target), relax_mask, _scope, module, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    };
    const s_TokenIdx here0 { _here };
    _here = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).token;
    fu_DEFER(_here = here0);
    try_relax_69tqLpHe(MUT_Kfn68Cy8(node, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type, slot, int(relax_mask));
    s_Type slot_1 { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type };
    const int LAST = (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size() - 1);
    if (k == "and"_fu)
    {
        s_Type rest { ((is_mutref_8e1ZyHy2(slot_1, _here, ctx) && CANNOT_definit_mutrefs) ? slot_1 : t_bool) };
        for (int i = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size(); i-- > 0; )
            propagateType_E7Njny0p(s_SolvedNode(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[i]), s_Type(((i == LAST) ? slot_1 : rest)), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    }
    else if (k == "or"_fu)
    {
        for (int i = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size(); i-- > 0; )
            propagateType_E7Njny0p(s_SolvedNode(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[i]), slot_1, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    }
    else if (k == "if"_fu)
    {
        for (int i = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size(); i-- > 0; )
            propagateType_E7Njny0p(s_SolvedNode(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[i]), ((i != 0) ? slot_1 : t_bool), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    }
    else if (k == "call"_fu)
    {
        const s_Target t { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).target };
        if (GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "field"_fu)
            return propagateType_E7Njny0p(s_SolvedNode(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[0]), slot_1, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

        if (GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "var"_fu)
        {
            if (isNested_ZUpW8tyV(t, _current_fn, module, _scope, ctx))
            {
                s_Type& usage = grow_if_oob_ZRJNd4jX(_current_fn.var_usage, t.index);
                if (!usage)
                    usage = slot_1;
                else
                {
                    s_Type _0 {};
                    usage = ((_0 = type_tryIntersect_P9wIESfO(usage, slot_1)) ? static_cast<s_Type&&>(_0) : fail_jI4Vez2o((((((qWHAT_2UzOFrRY(GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data) + ": Usage intersection failure: `"_fu) + humanizeType_0qVczsOs(usage, module, ctx)) + "` & `"_fu) + humanizeType_0qVczsOs(slot_1, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module));
                };
            };
            return;
        };
        if (EXT_nkaMKocC(t, module, _scope, ctx).spec_of && is_ref_8e1ZyHy2(GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data).type))
        {
            fu_VEC<s_SolvedNode> relaxed {};
            for (int i = 0; i < SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size(); i++)
            {
                const s_SolvedNode orig { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[i] };
                if (TODO_FIX_has_Kxwsnai9(GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data).type.lifetime.uni0n, Region_fromArgIndex_KYx0R3Sq(SolvedNodeData_CoW62h8S(arg_lets_VHTIaDSy(GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx)[i], module, _scope, ctx).target.index)))
                {
                    s_Type type { SolvedNodeData_CoW62h8S(orig, module, _scope, ctx).type };
                    if (try_relax_69tqLpHe(type, slot_1, int(relax_mask)))
                    {
                        if (!relaxed)
                            relaxed = fu::slice(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items, 0, i);

                        relaxed += SolvedNode_0vKsswP4("__relaxed"_fu, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
                        continue;
                    };
                };
                if (relaxed)
                    relaxed += s_SolvedNode(orig);

            };
            if (relaxed)
            {
                fu_STR args_mangled {};
                const s_Target spec = trySpecialize_3RH4B2JL(s_Target(EXT_nkaMKocC(t, module, _scope, ctx).spec_of), relaxed, args_mangled, relaxed.size(), (*(const s_Type*)fu::NIL), fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
                if (spec && !(spec == EXT_nkaMKocC(t, module, _scope, ctx).spec_of))
                {
                    const s_Overload& o1 = GET_mF5WytW3(spec, _scope, module, ctx, _here, _helpers, _helpers_data);
                    checkAssignable_0veNrHd3(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type, o1.type, "Relaxed specialization does not return a subtype"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);
                    if (is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type))
                        MUT_Kfn68Cy8(node, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type.lifetime = Lifetime_test_0kwmjgvX(Lifetime_replaceArgsAtCallsite_mONu9g2O(o1, relaxed, module, _scope, ctx, _here, _helpers, _helpers_data), true, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

                    MUT_Kfn68Cy8(node, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).target = spec;
                    makeNote_hw6XKcvD(N_RelaxRespec, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                };
            };
        };
        if (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items)
        {
            fu_VEC<s_Argument> host_args { EXT_nkaMKocC(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).target, module, _scope, ctx).args };
            const bool rtl = isRTL_qu1plyDs(GET_mF5WytW3(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data));
            const int N = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size();
            const int start = (rtl ? 0 : (N - 1));
            const int end = (rtl ? int(N) : (0 - 1));
            const int incr = (rtl ? +1 : -1);
            for (int i = start; i != end; i += incr)
                propagateType_E7Njny0p(s_SolvedNode(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[i]), s_Type(host_args[i].type), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

        };
    }
    else if ((k == "int"_fu) || (k == "real"_fu) || (k == "char"_fu) || (k == "str"_fu) || (k == "definit"_fu))
    {
    }
    else if ((k == "typeparam"_fu) || (k == "empty"_fu) || (k == "fndef"_fu))
    {
    }
    else if ((k == "copy"_fu) || (k == "move"_fu))
    {
        propagateType_E7Njny0p(s_SolvedNode(only_aj4CwosS(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items)), ((k == "copy"_fu) ? make_copyable_8e1ZyHy2(s_Type(slot_1)) : s_Type(slot_1)), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
        if (!(is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(only_aj4CwosS(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items), module, _scope, ctx).type)))
            fail_jI4Vez2o("TODO: Relaxed a copy/move to a value, no point in keeping the outer node."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    }
    else if (k == "arrlit"_fu)
    {
        for (int i = 0; i < SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size(); i++)
        {
            s_Type _1 {};
            propagateType_E7Njny0p(s_SolvedNode(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[i]), ((_1 = tryClear_sliceable_8e1ZyHy2(slot_1)) ? static_cast<s_Type&&>(_1) : fail_jI4Vez2o("propagateType(arrlit): Can't clear solve item type."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
        };
    }
    else if (k == "argid"_fu)
        propagateType_E7Njny0p(s_SolvedNode(only_aj4CwosS(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items)), slot_1, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    else if (k == "jump"_fu)
    {
        if (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items)
        {
            const s_Helpers h = s_Helpers { int(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).helpers) };
            if (!(_helpers_data[h.index].ret_actual))
                fail_jI4Vez2o("propagateType(jump): h.ret_actual not available."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            propagateType_E7Njny0p(s_SolvedNode(only_aj4CwosS(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items)), s_Type(_helpers_data[h.index].ret_actual), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
        };
    }
    else if (k == "block"_fu)
    {
        const s_Helpers h = s_Helpers { int(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).helpers) };
        try_relax_69tqLpHe(_helpers_data.mutref(h.index).ret_actual, slot_1, int(relax_mask));
        for (int i = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size(); i-- > 0; )
        {
            const s_SolvedNode& node_1 = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[i];
            const s_SolvedNode& node_2 = ((SolvedNodeData_CoW62h8S(node_1, module, _scope, ctx).kind == "defer"_fu) ? only_aj4CwosS(SolvedNodeData_CoW62h8S(node_1, module, _scope, ctx).items) : node_1);
            propagateType_E7Njny0p(s_SolvedNode(node_2), ((i != 0) ? slot_1 : t_void), relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
        };
        if (_helpers_data[h.index].target == SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target)
        {
            fu_VEC<s_SolvedNode> sig { SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).items };
            for (int i_1 = (sig.size() + FN_ARGS_BACK); i_1-- > 0; )
            {
                const s_Target& t = SolvedNodeData_CoW62h8S(sig[i_1], module, _scope, ctx).target;
                if (t && (GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data).flags & F_ARG))
                    relaxBlockVar_ikc3Hj63(s_Target(t), relax_mask, _scope, module, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

            };
        };
    }
    else if (k == "loop"_fu)
    {
        const s_SolvedNode init { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[LOOP_INIT] };
        const s_SolvedNode pre_cond { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[LOOP_COND] };
        const s_SolvedNode body { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[LOOP_BODY] };
        const s_SolvedNode post_cond { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[LOOP_POST_COND] };
        const s_SolvedNode& post = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[LOOP_POST];
        if (post)
            propagateType_E7Njny0p(s_SolvedNode(post), t_void, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

        if (post_cond)
            propagateType_E7Njny0p(post_cond, t_bool, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

        if (body)
            propagateType_E7Njny0p(body, t_void, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

        if (pre_cond)
            propagateType_E7Njny0p(pre_cond, t_bool, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

        if (init)
            propagateType_E7Njny0p(init, t_void, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    }
    else if (k == "try"_fu)
    {
        const s_SolvedNode attempt { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[0] };
        const s_SolvedNode error { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[1] };
        const s_SolvedNode& recover = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[2];
        propagateType_E7Njny0p(s_SolvedNode(recover), t_void, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
        propagateType_E7Njny0p(error, t_string, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
        propagateType_E7Njny0p(attempt, t_void, relax_mask, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    }
    else if (k == "root"_fu)
    {
    }
    else
        fail_jI4Vez2o((("TODO: propagateType("_fu + k) + ")."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

}

                                #ifndef DEFt_grow_oob_Gu3hhAU1
                                #define DEFt_grow_oob_Gu3hhAU1
inline int& grow_oob_Gu3hhAU1(fu_VEC<int>& a, const int i, const int fill)
{
    int l0 = a.size();
    if ((l0 <= i))
    {
        a.grow((i + 1));
        for (; l0 < i; l0++)
            a.mutref(l0) = fill;

    };
    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_grow_if_oob_k9KHuFdm
                                #define DEFt_grow_if_oob_k9KHuFdm
inline fu_VEC<int>& grow_if_oob_k9KHuFdm(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_add_thBfcIkV
                                #define DEFt_add_thBfcIkV
inline bool add_thBfcIkV(fu_VEC<int>& dest, const int item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest[i] != item)
            {
                dest.insert(i, int(item));
                return true;
            };
            return false;
        };
    };
    dest.push(int(item));
    return true;
}
                                #endif

                                #ifndef DEFt_has_KVWxg77u
                                #define DEFt_has_KVWxg77u
inline bool has_KVWxg77u(fu::view<s_Region> a, const s_Region& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static void maybeCopyOrMove_iOshRQSo(const s_SolvedNode& node, const s_Type& slot, const bool isArgument, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    if ((slot.vtype.canon != SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type.vtype.canon) && !is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type))
    {
        if ((SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind == "definit"_fu) && !is_mutref_8e1ZyHy2(slot, _here, ctx))
        {
            MUT_Kfn68Cy8(node, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = slot;
            return;
        };
        fail_jI4Vez2o(((("Considering copy or move for incompatible types: "_fu + humanizeType_0qVczsOs(slot, module, ctx)) + " <- "_fu) + humanizeType_0qVczsOs(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
    if (is_ref_8e1ZyHy2(slot))
    {
        if (is_trivial_lcHUdEZy(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type, module, ctx))
        {
            if ((SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind == "definit"_fu) && isArgument)
                MUT_Kfn68Cy8(node, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = clear_refs_8e1ZyHy2(s_Type(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type));

        };
        return;
    };
    if (!is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type))
        return;

    if (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind == "definit"_fu)
    {
        MUT_Kfn68Cy8(node, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = clear_refs_8e1ZyHy2(s_Type(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type));
        return;
    };
    if (!is_rx_copy_8e1ZyHy2(slot))
        fail_jI4Vez2o(("Needs an explicit STEAL or CLONE: "_fu + humanizeType_0qVczsOs(slot, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!is_trivial_lcHUdEZy(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type, module, ctx))
    {
        if (!(USE_nontriv_autocopy))
            fail_jI4Vez2o("Non-trivial implicit copy."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        makeNote_hw6XKcvD(N_NonTrivAutoCopy, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    };
    const s_SolvedNode newNode = createCopy_Qj1jBLYg(node, module, _scope, ctx, _here, _current_fn_or_type);
    s_SolvedNodeData temp {};
    s_SolvedNodeData& newNodeData = MUT_Kfn68Cy8(newNode, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope);
    std::swap(temp, newNodeData);
    s_SolvedNodeData& oldNodeData = MUT_Kfn68Cy8(node, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope);
    std::swap(temp, oldNodeData);
    only_WrcQl81W(oldNodeData.items) = newNode;
    s_SolvedNodeData& newNodeData_1 = MUT_Kfn68Cy8(newNode, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope);
    std::swap(temp, newNodeData_1);
}

static void BORROWCK_resolveByTempCopy_rA9BqouE(const s_SolvedNode& node, const s_Type& slot, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    s_Type slot_1 = make_copyable_8e1ZyHy2(clear_refs_8e1ZyHy2(s_Type(slot)));
    maybeCopyOrMove_iOshRQSo(node, slot_1, false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
}

static void BORROWCK_resolveByTempCopy_by7zNpyD(const s_SolvedNode& callsite, const int idx, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    fu::view<s_Argument> host_args = EXT_nkaMKocC(SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).target, module, _scope, ctx).args;
    BORROWCK_resolveByTempCopy_rA9BqouE(s_SolvedNode(SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).items[idx]), host_args[idx].type, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
}

                                #ifndef DEF_DEV_DisableBCK
                                #define DEF_DEV_DisableBCK
inline constexpr unsigned DEV_DisableBCK = (0x1u << 0u);
                                #endif

static const s_Overload& Region_GET_i5gPIcSx(const s_Region& r, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const int idx = (Region_isArg_rLDFQf65(r) ? Region_toArgIndex_rLDFQf65(r) : int(Region_toLocalIndex_rLDFQf65(r)));
    return GET_mF5WytW3(nested_TmvnfpAm(idx, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _helpers, _helpers_data);
}

static void validate_vXrzggGm(const int i, const s_Argument& host_arg, fu::view<s_Lifetime> bck_unwound, const int i0, const int arg_first, const int arg_last, const s_Lifetime& unwound, s_CurrentFn& _current_fn, fu::view<s_Argument> host_args, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_SolvedNode> args, const s_Module& module, s_Scope& _scope, const s_Target& target, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_SolvedNode& callsite, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    if (has_asJtcpQm(host_arg.risk_free, i))
        return;

    const s_Lifetime& unwound1 = bck_unwound[i];
    if ((i0 >= arg_first) && (i0 <= arg_last) && (i >= arg_first) && (i <= arg_last))
    {
        for (int i_1 = 0; i_1 < unwound.uni0n.size(); i_1++)
        {
            const int arg0 = Region_asArgIndex_rLDFQf65(unwound.uni0n[i_1]);
            if (arg0 > 0)
            {
                for (int i_2 = 0; i_2 < unwound1.uni0n.size(); i_2++)
                {
                    const int arg1 = Region_asArgIndex_rLDFQf65(unwound1.uni0n[i_2]);
                    if (arg1 < arg0)
                        add_thBfcIkV(grow_if_oob_k9KHuFdm(_current_fn.flow.args_at_risk, arg0), arg1);

                };
            };
        };
    };
    s_Lifetime inter = Lifetime_inter_7jT6yxSF(unwound, unwound1);
    if (!inter)
        return;

    const s_Argument& other = host_args[i];

    {
        int which = -1;
        if (!(is_mutref_8e1ZyHy2(host_arg.type, _here, ctx) || (host_arg.flags & F_IMPLICIT)))
            which = i0;
        else if (!(is_mutref_8e1ZyHy2(other.type, _here, ctx) || (other.flags & F_IMPLICIT)))
            which = i;

        if ((which >= 0))
        {
            if (is_rx_copy_8e1ZyHy2(SolvedNodeData_CoW62h8S(args[which], module, _scope, ctx).type))
            {
                const s_SolvedNode& argLet = arg_lets_VHTIaDSy(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx)[which];
                const s_Region argLt = Region_fromArgIndex_KYx0R3Sq(SolvedNodeData_CoW62h8S(argLet, module, _scope, ctx).target.index);
                const bool isReturned = has_KVWxg77u(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).type.lifetime.uni0n, argLt);
                if (!isReturned)
                    return BORROWCK_resolveByTempCopy_by7zNpyD(callsite, which, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

            };
        };
    };
    if (!(options.dev & DEV_DisableBCK))
    {
        fu_STR err = qWHAT_2UzOFrRY(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data);
        err += (((host_args.size() == 2) && (GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).flags & F_OPERATOR)) ? ": Both operands alias:\n"_fu : (x7E((x7E(((((": Arguments "_fu + qBAD_PSFLzFOM(human_UbFfpidG(host_args[i0].name, module, _scope, ctx, _here, _helpers, _helpers_data))) + " and "_fu) + qBAD_PSFLzFOM(human_UbFfpidG(host_args[i].name, module, _scope, ctx, _here, _helpers, _helpers_data))) + " (args #"_fu), fu::i64dec(i0)) + " and #"_fu), fu::i64dec(i)) + ") both alias:\n"_fu));
        for (int i_1 = 0; i_1 < inter.uni0n.size(); i_1++)
        {
            const s_Region& o = inter.uni0n[i_1];
            err += "\n                "_fu;
            err += qWHAT_2UzOFrRY(Region_GET_i5gPIcSx(o, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data);
        };
        fail_jI4Vez2o(fu_STR(err), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

                                #ifndef DEFt_add_SsyGqSA0
                                #define DEFt_add_SsyGqSA0
inline void add_SsyGqSA0(fu_VEC<s_Region>& a, fu::view<s_Region> b, fu_VEC<int>& extras, const int extra)
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
                a.insert(x, s_Region(Y));
                extras.insert(x, int(extra));
                y++;
            }
            else
                y++;

        };
        x++;
    };
    if (y < b.size())
    {
        a += fu::get_view(b, y, b.size());
        while (y++ < b.size())
            extras += int(extra);

    };
}
                                #endif

static s_Flow& flow_QNNhAjAw(s_CurrentFn& _current_fn)
{
    return _current_fn.flow;
}

                                #ifndef DEFt_unless_oob_JTFeqoKl
                                #define DEFt_unless_oob_JTFeqoKl
inline const fu_VEC<int>& unless_oob_JTFeqoKl(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

static s_Events& events_XnqVvJPP(s_CurrentFn& _current_fn)
{
    return _current_fn.events;
}

                                #ifndef DEFt_unless_oob_67EzVsqu
                                #define DEFt_unless_oob_67EzVsqu
inline const s_RWEvent& unless_oob_67EzVsqu(fu::view<s_RWEvent> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_RWEvent*)fu::NIL);
}
                                #endif

static bool BORROWCK_resolveByMutvar_6OqPVC5g(const int target, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type)
{
    s_Overload& o = GET_mut_Y5AuyJLM(nested_TmvnfpAm(target, _current_fn, module, _scope, ctx), _scope, module);
    if ((o.flags & (F_TODO_FIX_RRET | F_REF)) || is_mutref_8e1ZyHy2(o.type, _here, ctx) || !is_rx_copy_8e1ZyHy2(o.type))
        return false;

    if (!(o.kind == "var"_fu))
        fail_jI4Vez2o("BUG: Not a variable."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!(o.type.lifetime.uni0n.size() == 1))
        fail_jI4Vez2o("BUG: lt.len != 1"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!(o.flags & F_MUT))
    {
        o.flags |= F_MUT;
        s_Type t_let = clear_refs_8e1ZyHy2(s_Type(o.type));
        MUT_Kfn68Cy8(s_SolvedNode(o.solved), module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = t_let;
    };
    return true;
}

static fu_STR bck_name_yHF1GQJM(const int target, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return human_UbFfpidG(GET_mF5WytW3(nested_TmvnfpAm(target, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _helpers, _helpers_data).name, module, _scope, ctx, _here, _helpers, _helpers_data);
}

static s_SolvedNode callsite_EBivHy8b(const s_RWEvent& rw, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return s_SolvedNode { s_Target(SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target), int(rw.nodeidx) };
}

                                #ifndef DEFt_grow_if_oob_r6sEgQh4
                                #define DEFt_grow_if_oob_r6sEgQh4
inline s_RWEvent& grow_if_oob_r6sEgQh4(fu_VEC<s_RWEvent>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_grow_if_oob_p22lBq35
                                #define DEFt_grow_if_oob_p22lBq35
inline s_ArgWrite& grow_if_oob_p22lBq35(fu_VEC<s_ArgWrite>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_grow_if_oob_EE7n9Jkc
                                #define DEFt_grow_if_oob_EE7n9Jkc
inline fu_VEC<int>& grow_if_oob_EE7n9Jkc(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void bck_trackWrites_fFX7C90T(const s_SolvedNode& callsite, fu::view<s_Region> regions, fu::view<int> positions, s_TokenIdx& _here, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options)
{
    _here = SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).token;
    const int loop_start = _current_fn.loop_start;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target = Region_asIndex_rLDFQf65(regions[i]);
        if (!target)
            continue;

        const int position = positions[i];
        fu_VEC<int> invalidates { unless_oob_JTFeqoKl(flow_QNNhAjAw(_current_fn).invalidates, target) };
        for (int i_1 = 0; i_1 < invalidates.size(); i_1++)
        {
            const int other = invalidates[i_1];
            const s_RWEvent& u = unless_oob_67EzVsqu(events_XnqVvJPP(_current_fn).used_in_a_loop, other);
            if (u.target)
            {
                if (!(BORROWCK_resolveByMutvar_6OqPVC5g(other, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type) || (options.dev & DEV_DisableBCK)))
                    fail_jI4Vez2o(((((((((("Write to "_fu + qBAD_PSFLzFOM(bck_name_yHF1GQJM(target, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data))) + " at call to "_fu) + qWHAT_2UzOFrRY(GET_mF5WytW3(SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)) + " invalidates the use of "_fu) + qBAD_PSFLzFOM(bck_name_yHF1GQJM(other, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data))) + " at "_fu) + addr_and_snippet_kBbSbBoR(SolvedNodeData_CoW62h8S(callsite_EBivHy8b(u, _current_fn, module, _scope, ctx), module, _scope, ctx).token, ctx, module)) + "\n\t... on next loop iteration.\n\n\tWritten"_fu) + qSTACK_nZq2PcMm(SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).target, position, fu_VEC<s_Target>{}, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        const s_RWEvent write = s_RWEvent { int(target), int(callsite.nodeidx) };
        for (int i_2 = 0; i_2 < invalidates.size(); i_2++)
        {
            s_RWEvent& u = grow_if_oob_r6sEgQh4(events_XnqVvJPP(_current_fn).snap.invalidated_by, int(invalidates[i_2]));
            if (!u.target)
                u = write;

        };
        if (has_asJtcpQm(flow_QNNhAjAw(_current_fn).is_arg, target))
        {
            add_thBfcIkV(events_XnqVvJPP(_current_fn).snap.args_written, target);

            {
                /*RRET*/ s_ArgWrite& a = grow_if_oob_p22lBq35(events_XnqVvJPP(_current_fn).args_written_via, target);
                if (!(a))
                    a = s_ArgWrite { int(callsite.nodeidx), int(position) };

            };
            if (loop_start)
            {
                for (int i_3 = 0; i_3 < events_XnqVvJPP(_current_fn).args_in_a_loop.size(); i_3++)
                    add_thBfcIkV(grow_if_oob_EE7n9Jkc(flow_QNNhAjAw(_current_fn).args_at_risk, int(events_XnqVvJPP(_current_fn).args_in_a_loop[i_3])), target);

            };
        };
        events_XnqVvJPP(_current_fn).writes += s_RWEvent(write);
    };
}

                                #ifndef DEFt_unless_oob_py9Y5UMJ
                                #define DEFt_unless_oob_py9Y5UMJ
inline const fu_VEC<int>& unless_oob_py9Y5UMJ(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_add_j2Lb5Lzl
                                #define DEFt_add_j2Lb5Lzl
inline void add_j2Lb5Lzl(fu_VEC<s_Region>& a, fu::view<s_Region> b)
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
                a.insert(x, s_Region(Y));
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

                                #ifndef DEFt_keep_g9jXErUD
                                #define DEFt_keep_g9jXErUD
inline fu_VEC<s_Region>& keep_g9jXErUD(fu_VEC<s_Region>& a, fu::view<s_Region> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        if (X == Y)
        {
            x++;
            y++;
        }
        else if (X > Y)
            y++;
        else
            a.splice(x, 1);

    };
    if (x < a.size())
        a.shrink(x);

    return a;
}
                                #endif

                                #ifndef DEFt_inter_vNfhol7m
                                #define DEFt_inter_vNfhol7m
inline fu_VEC<s_Region> inter_vNfhol7m(const fu_VEC<s_Region>& a, const fu_VEC<s_Region>& b)
{
    if (a.size() > b.size())
        return inter_vNfhol7m(b, a);

    /*MOV*/ fu_VEC<s_Region> a_1 { a };
    keep_g9jXErUD(a_1, b);
    return /*NRVO*/ a_1;
}
                                #endif

                                #ifndef DEFt_first_l0gXiKi4
                                #define DEFt_first_l0gXiKi4
inline const s_Region& first_l0gXiKi4(fu::view<s_Region> s)
{
    return (s.size() ? s[0] : fu::fail("len == 0"_fu));
}
                                #endif

static fu_STR RWEvent_stack_3tvgXcr8(const int nodeidx, const int target, const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Target* _0;
    const s_Target& nodeown = (*(_0 = &(SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target)) ? *_0 : fail_jI4Vez2o("RWEvent_stack: no current fn."_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
    const s_SolvedNode node = s_SolvedNode { s_Target(nodeown), int(nodeidx) };
    if (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind != "call"_fu)
        return "\n\tVia "_fu + qKW_PSFLzFOM(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind);

    fu_STR stack {};
    if (target)
    {
        const fu_VEC<s_Region>& uni0n = GET_mF5WytW3(nested_TmvnfpAm(target, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _helpers, _helpers_data).type.lifetime.uni0n;
        if (uni0n)
        {
            for (int i = 0; i < SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size(); i++)
            {
                const s_SolvedNode& arg = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[i];
                if (inter_vNfhol7m(SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).type.lifetime.uni0n, uni0n))
                {
                    const s_ArgWrite& written_via = EXT_nkaMKocC(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).target, module, _scope, ctx).args[i].written_via;
                    if (written_via)
                    {
                        stack = qSTACK_5QtmybJM(written_via, SolvedNodeData_CoW62h8S(node, module, _scope, ctx).target, fu_VEC<s_Target>{}, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);
                        break;
                    };
                };
            };
        };
    };
    const s_Overload& o = GET_mF5WytW3(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data);
    return ("\n\tAt call to "_fu + qID_PSFLzFOM(o.name)) + stack;
}

                                #ifndef DEFt_add_XS7JLwrP
                                #define DEFt_add_XS7JLwrP
inline void add_XS7JLwrP(fu_VEC<int>& a, fu::view<int> b)
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
                a.insert(x, int(Y));
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

static void bck_trackRead_7YNMbezm(const s_SolvedNode& callsite, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options)
{
    if (!is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).type) || !SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target.index)
        return;

    _here = SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).token;
    fu_VEC<s_Region> regions { SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).type.lifetime.uni0n };
    const int loop_start = _current_fn.loop_start;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target = Region_asIndex_rLDFQf65(regions[i]);
        if (!target)
            continue;

        if (events_XnqVvJPP(_current_fn).snap.invalidated_by.size() > target)
        {
            const s_RWEvent& u = events_XnqVvJPP(_current_fn).snap.invalidated_by[target];
            if (u.target)
            {
                if (!(BORROWCK_resolveByMutvar_6OqPVC5g(target, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type) || (options.dev & DEV_DisableBCK)))
                    fail_jI4Vez2o((((((((("Cannot access"_fu + " "_fu) + qBAD_PSFLzFOM(bck_name_yHF1GQJM(target, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data))) + ", reference invalidated by write to"_fu) + " "_fu) + qBAD_PSFLzFOM(bck_name_yHF1GQJM(u.target, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data))) + " at "_fu) + addr_and_snippet_kBbSbBoR(SolvedNodeData_CoW62h8S(callsite_EBivHy8b(u, _current_fn, module, _scope, ctx), module, _scope, ctx).token, ctx, module)) + RWEvent_stack_3tvgXcr8(u.nodeidx, u.target, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        if (events_XnqVvJPP(_current_fn).snap.args_written && has_asJtcpQm(flow_QNNhAjAw(_current_fn).is_arg, target))
        {
            fu_VEC<int>* _0;
            (_0 = &(grow_if_oob_k9KHuFdm(flow_QNNhAjAw(_current_fn).args_at_risk, target)), add_XS7JLwrP(*_0, fu_VEC<int>(events_XnqVvJPP(_current_fn).snap.args_written)));
        };
        events_XnqVvJPP(_current_fn).reads += s_RWEvent { int(target), int(callsite.nodeidx) };
    };
    if (loop_start)
    {
        for (int i_1 = 0; i_1 < regions.size(); i_1++)
        {
            const int target = Region_asIndex_rLDFQf65(regions[i_1]);
            if (!target)
                continue;

            if (target < loop_start)
            {
                s_RWEvent& u = grow_if_oob_r6sEgQh4(events_XnqVvJPP(_current_fn).used_in_a_loop, target);
                if (!u.target)
                    u = s_RWEvent { int(loop_start), int(callsite.nodeidx) };

            };
            if (has_asJtcpQm(flow_QNNhAjAw(_current_fn).is_arg, target))
                add_thBfcIkV(events_XnqVvJPP(_current_fn).args_in_a_loop, target);

        };
    };
}

static void bck_call_OouIioy6(const s_SolvedNode& callsite, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    const s_Target target { SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).target };
    fu_VEC<s_SolvedNode> args { SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).items };
    if (args)
    {
        fu_VEC<s_Argument> host_args { EXT_nkaMKocC(target, module, _scope, ctx).args };
        const int ooe_read0 = _current_fn.events.reads.size();
        const int ooe_write0 = _current_fn.events.writes.size();
        fu_VEC<int> ooe_reads {};
        fu_VEC<int> ooe_writes {};
        const bool ooe_isRTL = isRTL_qu1plyDs(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data));
        const int ooe_START = (ooe_isRTL ? (args.size() - 1) : 0);

        {
            int ooe_read0_1 = ooe_read0;
            int ooe_write0_1 = ooe_write0;
            for (int ooe_i = 0; ooe_i < args.size(); ooe_i++)
            {
                bck_node_TIZiR8kp(s_SolvedNode(args[(ooe_isRTL ? (ooe_START - ooe_i) : int(ooe_i))]), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
                const int r1 = _current_fn.events.reads.size();
                const int w1 = _current_fn.events.writes.size();
                if (r1 > ooe_read0_1)
                    grow_oob_Gu3hhAU1(ooe_reads, ooe_i, ooe_read0_1) = r1;

                if (w1 > ooe_write0_1)
                    grow_oob_Gu3hhAU1(ooe_writes, ooe_i, ooe_write0_1) = w1;

                ooe_read0_1 = r1;
                ooe_write0_1 = w1;
            };
        };
        fu_VEC<s_Region> bck_writes {};
        fu_VEC<int> bck_positions {};
        int mutref_first = -1;
        int mutref_last = -1;
        int ref_first = -1;
        int ref_last = -1;
        fu_VEC<s_Lifetime> bck_unwound {};
        int arg_first = -1;
        int arg_last = -1;
        for (int i0 = 0; i0 < args.size(); i0++)
        {
            s_Argument host_arg { host_args[i0] };
            s_Type expect { host_arg.type };
            if (is_ref_8e1ZyHy2(expect))
            {
                if (!bck_unwound)
                {
                    if ((mutref_first >= 0) || ((ref_first >= 0) && is_mutref_8e1ZyHy2(expect, _here, ctx)))
                    {
                        bck_unwound.resize(args.size());
                        for (int i0_1 = ref_first; (i0_1 <= ref_last); i0_1++)
                        {
                            const s_Lifetime& unwound = (bck_unwound.mutref(i0_1) = Lifetime_unwind_wXIcMIll(s_Lifetime(SolvedNodeData_CoW62h8S(args[i0_1], module, _scope, ctx).type.lifetime), 0, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data));
                            for (int i = 0; i < unwound.uni0n.size(); i++)
                            {
                                if (Region_asIndex_rLDFQf65(unwound.uni0n[i]) > 0)
                                {
                                    arg_first = ((arg_first < 0) ? i0_1 : arg_first);
                                    arg_last = i0_1;
                                    continue;
                                };
                            };
                        };
                    };
                };
                if (bck_unwound)
                {
                    const s_Lifetime& unwound = (bck_unwound.mutref(i0) = Lifetime_unwind_wXIcMIll(s_Lifetime(SolvedNodeData_CoW62h8S(args[i0], module, _scope, ctx).type.lifetime), 0, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data));
                    for (int i = 0; i < unwound.uni0n.size(); i++)
                    {
                        if (Region_asIndex_rLDFQf65(unwound.uni0n[i]) > 0)
                        {
                            arg_first = ((arg_first < 0) ? i0 : arg_first);
                            arg_last = i0;
                            continue;
                        };
                    };
                    if (is_mutref_8e1ZyHy2(expect, _here, ctx))
                    {
                        for (int i_1 = ref_first; (i_1 <= ref_last); i_1++)
                        {
                            if (is_ref_8e1ZyHy2(host_args[i_1].type))
                                validate_vXrzggGm(i_1, host_arg, bck_unwound, i0, arg_first, arg_last, unwound, _current_fn, host_args, _here, ctx, args, module, _scope, target, _helpers, _helpers_data, callsite, _current_fn_or_type, options, _notes);

                        };
                    }
                    else if (bck_unwound)
                    {
                        for (int i_1 = mutref_first; (i_1 <= mutref_last); i_1++)
                        {
                            if (is_mutref_8e1ZyHy2(host_args[i_1].type, _here, ctx))
                                validate_vXrzggGm(i_1, host_arg, bck_unwound, i0, arg_first, arg_last, unwound, _current_fn, host_args, _here, ctx, args, module, _scope, target, _helpers, _helpers_data, callsite, _current_fn_or_type, options, _notes);

                        };
                    };
                };

                {
                    if (ref_first < 0)
                        ref_first = i0;

                    ref_last = i0;
                };
                if (is_mutref_8e1ZyHy2(expect, _here, ctx))
                {
                    if (mutref_first < 0)
                        mutref_first = i0;

                    mutref_last = i0;
                    if (host_arg.written_via)
                    {
                        const s_SolvedNode& arg = args[i0];
                        if (!(is_mutref_8e1ZyHy2(host_arg.type, _here, ctx)))
                            fail_jI4Vez2o((qID_PSFLzFOM(human_UbFfpidG(host_arg.name, module, _scope, ctx, _here, _helpers, _helpers_data)) + ": host_arg.written but !host_arg.is_mutref"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

                        if (!(is_mutref_8e1ZyHy2(SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).type, _here, ctx)))
                            fail_jI4Vez2o((qID_PSFLzFOM(human_UbFfpidG(host_arg.name, module, _scope, ctx, _here, _helpers, _helpers_data)) + ": host_arg.written but !arg.is_mutref"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

                        add_SsyGqSA0(bck_writes, SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).type.lifetime.uni0n, bck_positions, i0);
                    };
                };
            };
        };
        if (bck_writes)
        {
            if (!(bck_positions.size() == bck_writes.size()))
                fail_jI4Vez2o("bck_position.len is off"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            bck_trackWrites_fFX7C90T(callsite, bck_writes, bck_positions, _here, module, _scope, ctx, _current_fn, _helpers, _helpers_data, _current_fn_or_type, options);
        };
        int MUSTSEQ_mask = 0;

        {
            int ooe_write0_1 = ooe_write0;
            for (int ooe_iw = 0; ooe_iw < ooe_writes.size(); ooe_iw++)
            {
                const int ooe_write1 = ooe_writes[ooe_iw];
                if (ooe_write1 == ooe_write0_1)
                    continue;

                for (int w = ooe_write0_1; w < ooe_write1; w++)
                {
                    const s_RWEvent& write = _current_fn.events.writes[w];
                    fu_VEC<s_Region> written { GET_mF5WytW3(nested_TmvnfpAm(write.target, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _helpers, _helpers_data).type.lifetime.uni0n };
                    const bool iw_evalsFirst = (ooe_iw == 0);
                    fu_VEC<s_Region> written_and_invalidated {};
                    if (!iw_evalsFirst)
                    {
                        written_and_invalidated = written;
                        for (int i = 0; i < written.size(); i++)
                        {
                            const int index = Region_asIndex_rLDFQf65(written[i]);
                            if (!index)
                                continue;

                            fu::view<int> invalidates = unless_oob_py9Y5UMJ(flow_QNNhAjAw(_current_fn).invalidates, index);
                            add_j2Lb5Lzl(written_and_invalidated, fu::view_of(invalidates, s_Region{}));
                        };
                    };
                    int ooe_read0_1 = ooe_read0;
                    for (int ooe_ir = 0; ooe_ir < ooe_reads.size(); ooe_ir++)
                    {
                        const int ooe_read1 = ooe_reads[ooe_ir];
                        if (ooe_ir != ooe_iw)
                        {
                            const bool ooe_ir_evalsBefore_iw = (ooe_ir < ooe_iw);
                            fu_VEC<s_Region> written_1 { (ooe_ir_evalsBefore_iw ? written_and_invalidated : written) };
                            if (!(written_1))
                                fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

                            for (int r = ooe_read0_1; r < ooe_read1; r++)
                            {
                                const s_RWEvent& read = _current_fn.events.reads[r];
                                const fu_VEC<s_Region>& regions = GET_mF5WytW3(nested_TmvnfpAm(read.target, _current_fn, module, _scope, ctx), _scope, module, ctx, _here, _helpers, _helpers_data).type.lifetime.uni0n;
                                if (!inter_vNfhol7m(regions, written_1))
                                    continue;

                                const int r_1 = (ooe_isRTL ? (ooe_START - ooe_ir) : int(ooe_ir));
                                const int w_1 = (ooe_isRTL ? (ooe_START - ooe_iw) : int(ooe_iw));
                                if (ooe_ir_evalsBefore_iw)
                                {
                                    const s_SolvedNode& arg = args[r_1];
                                    const fu_VEC<s_Region>& bound = SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).type.lifetime.uni0n;
                                    fu_VEC<s_Region> inter = inter_vNfhol7m(bound, written_1);
                                    if (inter)
                                    {
                                        if (is_mutref_8e1ZyHy2(host_args[r_1].type, _here, ctx) || !is_rx_copy_8e1ZyHy2(SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).type))
                                        {
                                            _here = SolvedNodeData_CoW62h8S(callsite, module, _scope, ctx).token;
                                            fail_jI4Vez2o((((x7E((((((((x7E((((("At call to "_fu + qWHAT_2UzOFrRY(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)) + ", argument binding "_fu) + qBAD_PSFLzFOM(human_UbFfpidG(host_args[r_1].name, module, _scope, ctx, _here, _helpers, _helpers_data))) + " (arg #"_fu), fu::i64dec(r_1)) + ") at "_fu) + addr_and_snippet_kBbSbBoR(SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).token, ctx, module)) + "\n\t... invalidated by subsequent write to "_fu) + qWHAT_2UzOFrRY(Region_GET_i5gPIcSx(first_l0gXiKi4(inter), _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)) + " upon evaluation of argument "_fu) + qBAD_PSFLzFOM(human_UbFfpidG(host_args[w_1].name, module, _scope, ctx, _here, _helpers, _helpers_data))) + " (arg #"_fu), fu::i64dec(w_1)) + ") at "_fu) + addr_and_snippet_kBbSbBoR(SolvedNodeData_CoW62h8S(callsite_EBivHy8b(write, _current_fn, module, _scope, ctx), module, _scope, ctx).token, ctx, module)) + RWEvent_stack_3tvgXcr8(write.nodeidx, write.target, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);
                                        };
                                        BORROWCK_resolveByTempCopy_by7zNpyD(callsite, r_1, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
                                    };
                                };
                                if (!ooe_isRTL)
                                {
                                    const int mustSeq = (ooe_ir_evalsBefore_iw ? r_1 : w_1);
                                    MUSTSEQ_mask |= (1 << (mustSeq & 31));
                                };
                                break;
                            };
                        };
                        ooe_read0_1 = ooe_read1;
                    };
                };
                ooe_write0_1 = ooe_write1;
            };
        };
        int* _0;
        (!*(_0 = &(MUT_Kfn68Cy8(callsite, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).helpers)) ? *_0 : fail_jI4Vez2o("helpers already contain something"_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) = MUSTSEQ_mask;
    }
    else if (GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "var"_fu)
        bck_trackRead_7YNMbezm(callsite, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options);

}

static void bck_loop_7vKD75k6(const s_SolvedNode& node, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    fu_VEC<s_SolvedNode> items { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items };
    bck_node_TIZiR8kp(s_SolvedNode(items[0]), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    const int loop_start0 = _current_fn.loop_start;
    const int loop_start = GET_next_local_index_uPs0ZCBl(_current_fn, module, _scope, ctx);
    fu_VEC<s_RWEvent> events0 { _current_fn.events.used_in_a_loop };
    _current_fn.loop_start = loop_start;
    fu_DEFER(_current_fn.loop_start = loop_start0);
    for (int i = 1; i < items.size(); i++)
        bck_node_TIZiR8kp(items[i], module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    _current_fn.events.used_in_a_loop = events0;
}

static void bck_nodes_3BbN1Dt7(fu::view<s_SolvedNode> items, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    for (int i = 0; i < items.size(); i++)
        bck_node_TIZiR8kp(items[i], module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

}

static void bck_trackInit_eDhv32rV(const s_Target& target, s_CurrentFn& _current_fn)
{
    const int index = target.index;
    if (!index)
        return;

    if (unless_oob_67EzVsqu(events_XnqVvJPP(_current_fn).snap.invalidated_by, index))
        events_XnqVvJPP(_current_fn).snap.invalidated_by.mutref(index) = s_RWEvent{};

    if (_current_fn.loop_start > index)
        _current_fn.loop_start = index;

}

static void bck_let_FKvIAeBH(const s_SolvedNode& node, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    bck_nodes_3BbN1Dt7(fu_VEC<s_SolvedNode>(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    if (is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type))
    {
        if (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).flags & F_ARG)
            fail_jI4Vez2o("bck_let: Found an argument!"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        const s_SolvedNode& init = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[LET_INIT];
        if (!(is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(init, module, _scope, ctx).type)))
            fail_jI4Vez2o("What!"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        Reference_trackLocalRef_AADR3Ix2(_current_fn.flow, SolvedNodeData_CoW62h8S(node, module, _scope, ctx).target.index, SolvedNodeData_CoW62h8S(init, module, _scope, ctx).type.lifetime);
    };
    bck_trackInit_eDhv32rV(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).target, _current_fn);
}

inline static void Events_merge_BQZeF5VR(fu_VEC<s_RWEvent>& dest, fu::view<s_RWEvent> src)
{
    if (dest.size() < src.size())
        dest.grow(src.size());

    for (int i = 0; i < src.size(); i++)
    {
        /*RRET*/ s_RWEvent& a = dest.mutref(i);
        if (!(a))
            a = src[i];

    };
}

inline static void Events_merge_qTQRH6KJ(fu_VEC<int>& dest, fu::view<int> src)
{
    if (dest.size() < src.size())
        dest.grow(src.size());

    for (int i = 0; i < src.size(); i++)
    {
        /*RRET*/ int& a = dest.mutref(i);
        if (!(a))
            a = src[i];

    };
}

static void Events_merge_dhrYWpVP(s_Events& events, const s_EventsSnap& snap)
{
    Events_merge_BQZeF5VR(events.snap.invalidated_by, snap.invalidated_by);
    Events_merge_qTQRH6KJ(events.snap.args_written, snap.args_written);
}

static void bck_if_pgaWMiA7(const s_SolvedNode& node, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    fu_VEC<s_SolvedNode> items { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items };
    bck_node_TIZiR8kp(s_SolvedNode(items[0]), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    s_EventsSnap e_Restore_AfterCond { _current_fn.events.snap };
    bck_node_TIZiR8kp(items[1], module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    s_EventsSnap e_Merge_AfterCons { _current_fn.events.snap };
    _current_fn.events.snap = e_Restore_AfterCond;
    bck_node_TIZiR8kp(items[2], module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    Events_merge_dhrYWpVP(_current_fn.events, e_Merge_AfterCons);
}

static void bck_block_LdXMqlcr(const s_SolvedNode& node, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    fu_VEC<s_SolvedNode> defers {};
    fu_VEC<s_SolvedNode> items { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items };
    for (int i = 0; i < items.size(); i++)
    {
        const s_SolvedNode& node_1 = items[i];
        if (SolvedNodeData_CoW62h8S(node_1, module, _scope, ctx).kind == "defer"_fu)
            defers += s_SolvedNode(only_aj4CwosS(SolvedNodeData_CoW62h8S(node_1, module, _scope, ctx).items));
        else
            bck_node_TIZiR8kp(s_SolvedNode(node_1), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    };
    for (int i_1 = defers.size(); i_1-- > 0; )
        bck_node_TIZiR8kp(defers[i_1], module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

}

static void bck_node_TIZiR8kp(const s_SolvedNode& node, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    fu_STR k { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind };
    if (k == "call"_fu)
        return bck_call_OouIioy6(node, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    if (k == "loop"_fu)
        return bck_loop_7vKD75k6(node, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    if (k == "let"_fu)
        return bck_let_FKvIAeBH(node, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    if (k == "if"_fu)
        return bck_if_pgaWMiA7(node, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    if (k == "block"_fu)
        return bck_block_LdXMqlcr(node, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    bck_nodes_3BbN1Dt7(fu_VEC<s_SolvedNode>(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items), module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
}

static void mcom_node_NQv6Kp7D(const s_SolvedNode& node, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    fu_VEC<s_SolvedNode> items { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items };
    for (int i = 0; i < items.size(); i++)
        mcom_node_NQv6Kp7D(s_SolvedNode(items[i]), module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);

    _here = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).token;
    fu::view<char> k = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).kind;
    s_Type t { SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type };
    if (k == "call"_fu)
    {
        const s_Target& target = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).target;
        if (GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).kind != "field"_fu)
        {
            fu_VEC<s_Argument> host_args { EXT_nkaMKocC(target, module, _scope, ctx).args };
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_iOshRQSo(items[i_1], s_Type(host_args[i_1].type), true, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

        };
    }
    else if (k == "block"_fu)
    {
        if (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).helpers)
        {
            const s_Helpers h = s_Helpers { int(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).helpers) };
            for (int i_1 = 0; i_1 < _helpers_data[h.index].returns.size(); i_1++)
                maybeCopyOrMove_iOshRQSo(s_SolvedNode(only_aj4CwosS(SolvedNodeData_CoW62h8S(_helpers_data[h.index].returns[i_1], module, _scope, ctx).items)), _helpers_data[h.index].ret_actual, false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

        };
    }
    else if (k == "let"_fu)
    {
        if (SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items && !is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type))
        {
            const s_SolvedNode& init = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[LET_INIT];
            if (init && is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(init, module, _scope, ctx).type))
                maybeCopyOrMove_iOshRQSo(s_SolvedNode(init), s_Type(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type), false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

        };
    }
    else if (k == "if"_fu)
    {
        if (!is_void_8e1ZyHy2(t) && !is_ref_8e1ZyHy2(t))
        {
            maybeCopyOrMove_iOshRQSo(items[1], s_Type(t), false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
            maybeCopyOrMove_iOshRQSo(items[2], t, false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
        };
    }
    else if (k == "or"_fu)
    {
        if (!(t == t_bool) && !is_ref_8e1ZyHy2(t))
        {
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_iOshRQSo(items[i_1], t, false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

        };
    }
    else if (k == "arrlit"_fu)
    {
        s_Type t_1 = clear_sliceable_8e1ZyHy2(t, _here, ctx);
        for (int i_1 = 0; i_1 < items.size(); i_1++)
            maybeCopyOrMove_iOshRQSo(items[i_1], t_1, false, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

    };
}

static void runAllPasses_bAzzgPpV(const s_SolvedNode& node, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (SELF_TEST)
        test_node_dWzuMFgS(node, "PASS.0 "_fu, module, _scope, ctx, _here, _helpers, _helpers_data);

    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType_E7Njny0p(node, s_Type(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type), RELAX_before_bck, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    if (SELF_TEST)
        test_node_dWzuMFgS(node, "PASS.0.relax "_fu, module, _scope, ctx, _here, _helpers, _helpers_data);

    bck_node_TIZiR8kp(node, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    if (SELF_TEST)
        test_node_dWzuMFgS(node, "PASS.1 "_fu, module, _scope, ctx, _here, _helpers, _helpers_data);

    mcom_node_NQv6Kp7D(node, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, options, _notes);
    if (SELF_TEST)
        test_node_dWzuMFgS(node, "PASS.2 "_fu, module, _scope, ctx, _here, _helpers, _helpers_data);

    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType_E7Njny0p(node, s_Type(SolvedNodeData_CoW62h8S(node, module, _scope, ctx).type), RELAX_all, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    if (SELF_TEST)
        test_node_dWzuMFgS(node, "PASS.2.relax "_fu, module, _scope, ctx, _here, _helpers, _helpers_data);

}

static s_SolvedNode solveBlock_GekhTLqx(const fu_VEC<s_SolvedNode>& items, const int helpers_idx, const bool expr, const short mask, const int fnbody_of, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Helpers& h = _helpers[helpers_idx];
    if (!short((mask & HM_CanReturn)))
        _helpers_data.mutref(h.index).ret_expect = s_Type{};

    if (expr && items && !is_void_8e1ZyHy2(SolvedNodeData_CoW62h8S(last_6mv8AnDF(items), module, _scope, ctx).type))
        _helpers_data.mutref(h.index).returns += createJump_pn5s5Yk7(s_Target{}, last_6mv8AnDF(items), h, _here, _current_fn_or_type, module, _scope);

    if (_helpers_data[h.index].returns)
    {
        for (int i = 0; i < _helpers_data[h.index].returns.size(); i++)
        {
            const s_SolvedNode expr_1 { only_aj4CwosS(SolvedNodeData_CoW62h8S(_helpers_data[h.index].returns[i], module, _scope, ctx).items) };
            reportReturnType_bUZECnF3(h, SolvedNodeData_CoW62h8S(expr_1, module, _scope, ctx).type, _helpers_data, _here, ctx, _helpers, _scope, module);
        };
        if (is_mutref_8e1ZyHy2(_helpers_data[h.index].ret_actual, _here, ctx))
        {
            for (int i_1 = 0; i_1 < _helpers_data[h.index].returns.size(); i_1++)
            {
                const s_SolvedNode expr_1 { only_aj4CwosS(SolvedNodeData_CoW62h8S(_helpers_data[h.index].returns[i_1], module, _scope, ctx).items) };
                if (!Lifetime_allowsMutrefReturn_mZ6SExHE(s_Lifetime(SolvedNodeData_CoW62h8S(expr_1, module, _scope, ctx).type.lifetime), _helpers_data[h.index].locals_start, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data))
                {
                    reportReturnType_bUZECnF3(h, clear_mutref_8e1ZyHy2(s_Type(SolvedNodeData_CoW62h8S(expr_1, module, _scope, ctx).type)), _helpers_data, _here, ctx, _helpers, _scope, module);
                    break;
                };
            };
        };
        for (int i_1 = 0; i_1 < _helpers_data[h.index].returns.size(); i_1++)
        {
            const s_SolvedNode expr_1 { only_aj4CwosS(SolvedNodeData_CoW62h8S(_helpers_data[h.index].returns[i_1], module, _scope, ctx).items) };
            if (is_ref_8e1ZyHy2(SolvedNodeData_CoW62h8S(expr_1, module, _scope, ctx).type) && !fnbody_of)
                Lifetime_F_TODO_FIX_RRET_NXadJdWk(s_Lifetime(SolvedNodeData_CoW62h8S(expr_1, module, _scope, ctx).type.lifetime), _helpers_data[h.index].locals_start, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

        };
        if (_helpers_data[h.index].ret_actual.lifetime)
            _helpers_data.mutref(h.index).ret_actual.lifetime = Lifetime_placeholder_8nlJDPX0();

        is_ref_8e1ZyHy2(_helpers_data[h.index].ret_actual);
    };

    {
        if (is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(if_last_6mv8AnDF(items), module, _scope, ctx).type))
        {
            if (!_helpers_data[h.index].ret_actual)
                _helpers_data.mutref(h.index).ret_actual = t_never;

        }
        else if (fnbody_of)
        {
            if (_helpers_data[h.index].ret_actual)
            {
                if (!(isAssignable_P9wIESfO(t_void, _helpers_data[h.index].ret_actual)))
                    fail_jI4Vez2o("Non-void returning fn missing a final return."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        if (!_helpers_data[h.index].ret_actual)
            _helpers_data.mutref(h.index).ret_actual = t_void;

    };
    mcom_BlockReturns_CopyOrMoveDecision_XZ1SQzb6(h, _helpers_data, module, _scope, ctx, _current_fn, _here, _helpers, _current_fn_or_type);
    Lifetime_placeholder_remove_xMPmdfQq(_helpers_data.mutref(h.index).ret_actual.lifetime);
    const s_Type* _0;
    /*MOV*/ const s_SolvedNode block = createBlock_oWR0ZXGj((*(_0 = &(_helpers_data[h.index].ret_actual)) ? *_0 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), fu_VEC<s_SolvedNode>(items), (short((_helpers_data[h.index].mask & HM_LabelUsed)) ? _helpers_data[h.index].target : (*(const s_Target*)fu::NIL)), h, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);
    if (fnbody_of)
    {
        const unsigned status = GET_mF5WytW3(s_Target { int(module.modid), int(fnbody_of) }, _scope, module, ctx, _here, _helpers, _helpers_data).status;
        if (!(status & SS_DIRTY))
            runAllPasses_bAzzgPpV(block, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    };
    return /*NRVO*/ block;
}

static s_SolvedNode solveBlock_XjVECJ2N(const s_Node& node, const s_Type& type, const int fnbody_of, const short mask, const int kills, const fu_STR& id, const int steal, const int locals_start, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Context& ctx, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_Target& _current_fn_or_type, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_Node> nodes = ((node.kind == "block"_fu) ? fu_VEC<s_Node>(node.items) : fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(node) } });
    const fu_STR& id_1 = (id ? id : ((node.kind == "block"_fu) ? node.value : (*(const fu_STR*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap_udUBsnHM(_scope, _helpers);
    fu_DEFER(Scope_pop_iZmeNLp0(_scope, scope0, _helpers));
    const int helpers_idx = _helpers.size();
    push_TahmTbsf(s_HelpersData { (fnbody_of ? s_Target { int(module.modid), int(fnbody_of) } : s_Target{}), fu_STR(id_1), short(mask), (fnbody_of ? -1 : int(SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target.index)), int(kills), (fnbody_of ? +1 : (locals_start ? int(locals_start) : GET_next_local_index_uPs0ZCBl(_current_fn, module, _scope, ctx))), s_Type(type), s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} }, _helpers, _helpers_data);
    if (steal)
    {
        s_HelpersData* _0;
        fu_VEC<int>& old = (__extension__ (
        {
            const s_Helpers& h = _helpers[(helpers_idx - 1)];
            _0 = &(_helpers_data.mutref(h.index));
        (void)0;}), *_0).vars;
        fu_VEC<int> vars = steal_oy2Wniqi(old, (old.size() - steal), old.size());
        s_HelpersData* _1;
        fu_VEC<int>& nEw = (__extension__ (
        {
            const s_Helpers& h = _helpers[helpers_idx];
            _1 = &(_helpers_data.mutref(h.index));
        (void)0;}), *_1).vars;
        nEw += vars;
    };
    const bool expr = (!fnbody_of && !is_void_8e1ZyHy2(type));
    fu_VEC<s_SolvedNode> items = solveNodes_05VdsfAN(nodes, t_void, type, expr, (helpers_idx + 1), _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    return solveBlock_GekhTLqx(items, helpers_idx, expr, mask, fnbody_of, _helpers, _helpers_data, module, _scope, ctx, _here, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
}

                                #ifndef DEFt_ArgsWritten_shake_QZpoPFXE
                                #define DEFt_ArgsWritten_shake_QZpoPFXE
inline void ArgsWritten_shake_QZpoPFXE(const s_Flow& flow, fu_VEC<s_ArgWrite>& args)
{
    for (int i = std::min(args.size(), flow.arg_aliases.size()); i-- > 0; )
    {
        const s_ArgWrite x { args[i] };
        if (x)
        {
            fu::view<int> aliases = flow.arg_aliases[i];
            for (int i_1 = 0; i_1 < aliases.size(); i_1++)
            {
                s_ArgWrite& y = args.mutref(aliases[i_1]);
                if (!y)
                    y = x;

            };
        };
    };
}
                                #endif

static void lazySolveEnd_f3YAMLi9(const s_Target& t, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Options& options, int& _notes, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    s_Overload& o = GET_mut_Y5AuyJLM(t, _scope, module);
    fu_VEC<int> reopen {};
    const int parent = o.local_of;
    if (o.status & SS_UPDATED)
    {
        o.status &= ~SS_UPDATED;
        s_Target dedupe {};
        fu_VEC<s_SolvedNode> callsites { EXT_nkaMKocC(t, module, _scope, ctx).callsites };
        for (int i = 0; i < callsites.size(); i++)
        { {
            const s_Target& callsite = callsites[i].nodeown;
            if (callsite == dedupe)
                continue;

            dedupe = callsite;
            int index = callsite.index;
            for (; ; )
            {
                s_Overload& o_1 = GET_mut_Y5AuyJLM(s_Target { int(module.modid), int(index) }, _scope, module);
                if ((o_1.status & (SS_DID_START | SS_DIRTY)) != SS_DID_START)
                    goto L_0207;

                if (!(o_1.status & SS_FINALIZED))
                {
                    o_1.status |= SS_DIRTY;
                    goto L_0207;
                };
                const int up = o_1.local_of;
                if (up != parent)
                {
                    if (!(up > parent))
                        fail_jI4Vez2o("lazySolveEnd: about to climb up the wrong tree."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                    index = up;
                    continue;
                };
                makeNote_hw6XKcvD(((o_1.kind == "type"_fu) ? N_TypeReopen : N_FnReopen), options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                o_1.status &= ~((SS_DID_START | SS_DIRTY) | SS_FINALIZED);
                reopen += int(index);
                goto L_0207;
            };
          } L_0207:;
        };
    };
    s_Overload& o_1 = GET_mut_Y5AuyJLM(t, _scope, module);
    if (!(o_1.status & SS_DIRTY))
        o_1.status |= SS_FINALIZED;
    else
    {
        if (o_1.status & SS_FINALIZED)
            fail_jI4Vez2o("Stray SS_FINALIZED."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        o_1.status &= ~(SS_DID_START | SS_DIRTY);
        makeNote_hw6XKcvD(((o_1.kind == "type"_fu) ? N_TypeResolve : N_FnResolve), options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t_1 = s_Target { int(module.modid), int(reopen[i]) };
        lazySolveStart_gaykLo4Y(t_1, s_Overload(GET_mF5WytW3(t_1, _scope, module, ctx, _here, _helpers, _helpers_data)), _scope, module, _here, ctx, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    };
}

static s_Target doTrySpecialize_tMyTP3bm(const s_Target& into, const s_Target& overloadIdx, fu::view<s_SolvedNode> args_in, fu_STR&& mangle, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_Type> args {};
    if (use_reorder)
    {
        for (int i = 0; i < reorder.size(); i++)
        {
            const int callsiteIndex = reorder[i];
            args.push(s_Type(((callsiteIndex >= 0) && (callsiteIndex < args_in.size()) ? SolvedNodeData_CoW62h8S(args_in[callsiteIndex], module, _scope, ctx).type : (*(const s_Type*)fu::NIL))));
        };
    }
    else
    {
        for (int i = 0; i < args_in.size(); i++)
            args.push(s_Type(SolvedNodeData_CoW62h8S(args_in[i], module, _scope, ctx).type));

    };
    for (int i = 0; i < conversions.size(); i++)
    {
        const fu_VEC<s_Target>& c = conversions[i];
        if (c)
            args.mutref(i) = GET_mF5WytW3(last_g4Ujnafl(c), _scope, module, ctx, _here, _helpers, _helpers_data).type;

    };
    if (REST_TYPE)
        args.mutref(REST_START) = REST_TYPE;

    fu_STR mangle00 { mangle };
    /*MOV*/ const s_Target SPECFAIL = s_Target { 2147483647, 0 };
    const s_Target& original = (overloadIdx ? overloadIdx : into ? into : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
    s_Template tEmplate { EXT_nkaMKocC(original, module, _scope, ctx).tEmplate };
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    _here = EXT_nkaMKocC(original, module, _scope, ctx).tEmplate.node.token;
    int parent_idx = GET_mF5WytW3(original, _scope, module, ctx, _here, _helpers, _helpers_data).local_of;
    for (int i_1 = 0; i_1 < args.size(); i_1++)
    {
        const s_Type& arg_t = args[i_1];
        if (type_isAddrOfFn_5vhU4AHS(arg_t))
            unpackAddrOfFn_uHkkW4I9(arg_t.vtype.canon, 0, module, _scope, ctx, _here, _helpers, _helpers_data, tEmplate, parent_idx);

    };
    const bool isInline = !!(tEmplate.node.flags & F_INLINE);
    if (!into && !isInline)
        setSpec_hoOT2SD6(mangle, SPECFAIL, true, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);

    /*MOV*/ s_Target target {};

    {
        const s_ScopeMemo scope0 = Scope_snap_udUBsnHM(_scope, _helpers);
        s_ScopeSkipMemos ss0 { _ss };
        const s_HelpersData* _0;
        const int helpers0vars = (__extension__ (
        {
            const s_Helpers& h = last_vtdPb1VG(_helpers);
            _0 = &(_helpers_data[h.index]);
        (void)0;}), *_0).vars.size();
        const int helpers_data0 = _helpers_data.size();
        fu_DEFER(
        {
            Scope_pop_iZmeNLp0(_scope, scope0, _helpers);
            _ss = ss0;
            if (_helpers)
            {
                s_HelpersData* _1;
                (__extension__ (
                {
                    const s_Helpers& h = last_vtdPb1VG(_helpers);
                    _1 = &(_helpers_data.mutref(h.index));
                (void)0;}), *_1).vars.shrink(helpers0vars);
            };
            _helpers_data.shrink(helpers_data0);
        });
        ScopeSkip_setup_KRToFCQq(tEmplate, scope0, isInline, _root_scope, _ss, _here, ctx, _helpers, _helpers_data, _scope, module);
        fu_VEC<s_Node> items { tEmplate.node.items };
        s_Node& n_fn = tEmplate.node;
        if (!(n_fn.kind == "fn"_fu))
            fail_jI4Vez2o("n_fn not a `fn`."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        bool ok = true;
        bool remangle = false;
        s_Map_ON0NfbFM typeParams {};
        if (!into)
        {
            fu::view<char> kind = tEmplate.node.kind;
            const int numArgs = ((kind == "fn"_fu) ? (items.size() + FN_ARGS_BACK) : fail_jI4Vez2o(("TODO numArgs for template:"_fu + kind), _here, ctx, _helpers, _helpers_data, _scope, module));
            fu_VEC<int> retypeIndices {};
            for (int pass_retype = 0; (pass_retype == 0) || ((pass_retype == 1) && retypeIndices); pass_retype++)
            {
                for (int i_2 = 0; i_2 < numArgs; i_2++)
                {
                    if (pass_retype)
                    {
                        if (!has_zs1wLMBE(retypeIndices, i_2))
                            continue;

                    };
                    s_Type inType { ((args.size() > i_2) ? args[i_2] : (*(const s_Type*)fu::NIL)) };
                    const s_SolvedNode& inValue = (reorder ? ((reorder.size() > i_2) && (reorder[i_2] >= 0) ? args_in[reorder[i_2]] : (*(const s_SolvedNode*)fu::NIL)) : ((args_in.size() > i_2) ? args_in[i_2] : (*(const s_SolvedNode*)fu::NIL)));
                    const s_Node* _2;
                    const s_Node& argNode = (*(_2 = &(items[i_2])) ? *_2 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                    const s_Node& annot = argNode.items[LET_TYPE];
                    if (couldRetype_5KorFaMt(inValue, module, _scope, ctx))
                    {
                        const s_Type& paramType = ((annot.kind == "typeparam"_fu) ? ref_tGejiCZj(typeParams, annot.value).matched : ((annot.kind == "call"_fu) && !annot.items ? Scope_lookupType_4FU1zEuc(annot, _here, ctx, _helpers, _helpers_data, _scope, module, _ss) : (*(const s_Type*)fu::NIL)));
                        if (paramType)
                        {
                            s_Type retype = tryRetyping_F9oLMnz9(inValue, paramType, module, _scope, ctx, _here, _helpers, _helpers_data);
                            if (retype && (retype.vtype.canon != inType.vtype.canon))
                            {
                                inType = (args.mutref(i_2) = retype);
                                remangle = true;
                            };
                        }
                        else if (!pass_retype)
                        {
                            retypeIndices.push(int(i_2));
                            continue;
                        };
                    };
                    if (!(argNode.kind == "let"_fu))
                        fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

                    if (inType)
                    {
                        const s_Type& exactType = EXT_nkaMKocC(original, module, _scope, ctx).args[i_2].type;
                        if (exactType)
                        {
                            args.mutref(i_2) = exactType;
                            continue;
                        };
                        const fu_STR& argName = (argNode.value ? argNode.value : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                        s_TypeParam& argName_typeParam = ref_tGejiCZj(typeParams, argName);
                        inType = add_ref_GR4OoJkm(s_Type(inType), Lifetime_temporary_8nlJDPX0(), _here, ctx);
                        (!argName_typeParam ? argName_typeParam : fail_jI4Vez2o((("Type param name collision with argument: `"_fu + argName) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)).matched = inType;
                        if (annot)
                        {
                            const bool argOk = (inType && trySolveTypeParams_aZtzyH2b(annot, s_Type(inType), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss));
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
                const int start = ((_3 = (find_WqUX48cW(mangle, ' ') + 1)) ? _3 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                mangle = (fu::slice(mangle, 0, start) + mangleArguments_sIKH97Hj(args, _here, ctx));
                if (mangle00 != mangle)
                {
                    /*MOV*/ const s_Target preexisting { get_25OWLfx6(_specs, mangle) };
                    if (preexisting)
                    {
                        setSpec_hoOT2SD6(mangle00, preexisting, bool{}, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);
                        return /*NRVO*/ preexisting;
                    };
                    if (!into)
                        setSpec_hoOT2SD6(mangle, SPECFAIL, true, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);

                };
            };
            if (!ok)
                return /*NRVO*/ SPECFAIL;

            const s_Node* _4;
            const s_Node& body = (*(_4 = &(items[(items.size() + FN_BODY_BACK)])) ? *_4 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
            if (body.kind == "pattern"_fu)
            {
                s_Map_ON0NfbFM undo { typeParams };
                fu_VEC<s_Node> branches { body.items };
                bool did_match = false;
                for (int i_2 = 0; i_2 < branches.size(); i_2++)
                {
                    const s_Node& cond = branches[i_2].items[0];
                    if (cond && !evalTypePattern_h5m7pRjA(cond, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string))
                    {
                        typeParams = undo;
                        continue;
                    };
                    fu_VEC<s_Node> cons { branches[i_2].items };
                    fu_VEC<s_Node>& sig = n_fn.items;

                    {
                        const s_Node& n_ret = cons[(cons.size() + FN_RET_BACK)];
                        if (n_ret)
                            sig.mutref((sig.size() + FN_RET_BACK)) = n_ret;

                        const s_Node& n_body = cons[(cons.size() + FN_BODY_BACK)];
                        sig.mutref((sig.size() + FN_BODY_BACK)) = (n_body ? n_body : fail_jI4Vez2o("doTrySpec: no case/body."_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
                    };
                    did_match = true;
                    break;
                };
                if (!did_match)
                    return /*NRVO*/ SPECFAIL;

            };
            const s_Node& n_body = n_fn.items[(n_fn.items.size() + FN_BODY_BACK)];
            if (isNativeBody_80XocySm(n_body))
            {
                for (int i_2 = 0; i_2 < numArgs; i_2++)
                {
                    const s_Node* _5;
                    const s_Node& argNode = (*(_5 = &(items[i_2])) ? *_5 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                    const fu_STR& id = argNode.value;
                    if_ref_36F4RVDp(typeParams, id, 0);
                };
            };
        };
        fu_STR mangle0 { mangle };
        target = (into ? s_Target(into) : Scope_create_qoDjvL3b(_scope, "_no_kind_yet_"_fu, (*(const fu_STR*)fu::NIL), (*(const s_Type*)fu::NIL), 0, s_SolvedNode{}, parent_idx, (SS_DID_START | SS_LAZY), bool{}, module));
        fu_VEC<s_ScopeItem> extra_items { (into ? EXT_nkaMKocC(original, module, _scope, ctx).extra_items : (EXT_mut_chviOJ9J(target, module, _scope).extra_items = intoScopeItems_jfgf35eQ(typeParams, module, ctx, _scope, _here, _helpers, _helpers_data))) };
        const s_Target current_fn_or_type0 { _current_fn_or_type };
        fu_DEFER(_current_fn_or_type = current_fn_or_type0);
        _current_fn_or_type = target;
        if (!SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target)
            _anons = 0;


        {
            s_Extended& o = EXT_mut_chviOJ9J(target, module, _scope);
            o.locals.clear();
            o.nodes.clear();
            for (int i_2 = 0; i_2 < o.args.size(); i_2++)
            {
                s_ArgWrite& written_via = o.args.mutref(i_2).written_via;
                if (written_via)
                    written_via.nodeidx = -1;

            };
        };
        fu_VEC<s_SolvedNode> TODO_FIX_convert_args0 { TODO_FIX_convert_args };
        TODO_FIX_convert_args.mutref(0) = SolvedNode_0vKsswP4("__convert"_fu, s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
        fu_DEFER(TODO_FIX_convert_args = TODO_FIX_convert_args0);
        s_CurrentFn out = s_CurrentFn { solved_i1wpVdEM(n_fn, X_addrofTarget_m0G5bAnB(target), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, _here, _current_fn_or_type, module, _scope), s_Flow{}, s_Events{}, 0, fu_VEC<s_Type>{} };
        const s_ScopeMemo root_scope0 { _root_scope };
        if (!root_scope0)
            _root_scope = scope0;

        std::swap(_current_fn, out);
        fu_DEFER(
        {
            std::swap(_current_fn, out);
            _root_scope = root_scope0;
        });
        fu::view<s_Node> inItems = n_fn.items;
        outItems_sErtJPPq(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).resize(inItems.size());
        _scope.items += extra_items;
        const bool isFirst = !GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).solved;
        const int isTemplate = (tEmplate.node.flags & F_TEMPLATE);
        const bool isSpec = (isTemplate && (!into || !isFirst));
        const bool isUnspec = (isTemplate && !isSpec);
        const int isPure = (tEmplate.node.flags & F_PURE);
        const int isNovec = (tEmplate.node.flags & F_NOCOPY);
        for (int i_2 = 0; i_2 < (inItems.size() + FN_ARGS_BACK); i_2++)
        {
            const s_Node& n_arg = inItems[i_2];
            if (isUnspec && ((n_arg.flags & F_TEMPLATE) || !n_arg.items[LET_TYPE]))
            {
                outItems_sErtJPPq(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).mutref(i_2) = SolvedNode_0vKsswP4("let"_fu, s_Type{}, n_arg.flags, n_arg.value, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode((n_arg.items[LET_INIT] ? TODO_FIX_template_defarg : (*(const s_SolvedNode*)fu::NIL))) } }, s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
                continue;
            };
            s_Type specType = (isSpec ? tryGetArgSpecType_ll8YFotD(n_arg.value, extra_items, _scope, module, ctx, _here, _helpers, _helpers_data) : s_Type{});
            const s_SolvedNode arg = solveLet_P46fCad5(n_arg, specType, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
            outItems_sErtJPPq(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).mutref(i_2) = arg;
            if (!isUnspec && SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).target)
                Reference_trackArgument_CooqGQ4F(_current_fn.flow, SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).target.index, i_2);

        };
        const s_Node& n_ret = (!isUnspec ? inItems[(inItems.size() + FN_RET_BACK)] : (*(const s_Node*)fu::NIL));
        const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
        if (!(n_body))
            fail_jI4Vez2o("solveFn: no body."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        const bool isNative = isNativeBody_80XocySm(n_body);
        if (!isNative && !isUnspec)
        {
            if (!(n_body.kind == "block"_fu))
                fail_jI4Vez2o((("solveFn: Body not a block: `"_fu + n_body.kind) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        s_SolvedNode _6 {};
        s_Type ret_expect { (n_ret ? (_6 = evalTypeAnnot_Yu0YKv5q(n_ret, (*(const s_Map_ON0NfbFM*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string), SolvedNodeData_CoW62h8S(s_SolvedNode(_6), module, _scope, ctx)).type : (*(const s_Type*)fu::NIL)) };
        s_Type ret_seed { (n_ret ? (ret_expect ? ret_expect : fail_jI4Vez2o(("falsy ret_expect: "_fu + n_fn.value), _here, ctx, _helpers, _helpers_data, _scope, module)) : t_never) };
        if (ret_seed.lifetime)
            ret_seed.lifetime = (isNative ? Lifetime_fromNative_65IYEhhl(inItems, fu::get_view(SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).items, 0, (SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).items.size() + FN_ARGS_BACK)), ret_seed, _here, ctx, _helpers, _helpers_data, _scope, module) : Lifetime_static_8nlJDPX0());
        else if (is_ref_8e1ZyHy2(ret_seed))
            fail_jI4Vez2o("fn.ret_actual is a ref without a lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        if (isFirst)
        {

            {
                fu_STR name { (n_fn.value ? n_fn.value : fail_jI4Vez2o("TODO anonymous fns"_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) };
                if (!isNative && !isInline && !isUnspec && (name != "main"_fu) && !(n_fn.flags & F_OPERATOR))
                {
                    const int sourceModid = tEmplate.node.token.modid;
                    fu_STR shortModuleName_1 = ((sourceModid != module.modid) ? (sourceModid && module.modid ? getShortModuleName_zQFrD65V(ctx.modules[sourceModid].fname) : fu_STR{}) : fu_STR(shortModuleName));
                    fu_STR _7 {};
                    fu_VEC<s_SolvedNode> _8 {};
                    fu::view<s_SolvedNode> _9 {};
                    fu_STR sig = (_7 = ((GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).local_of ? fu::i64dec(target.index) : fu_STR{}) + shortModuleName_1), (static_cast<fu_STR&&>(_7) + (_9 = (_8 = fu_VEC<s_SolvedNode>(outItems_sErtJPPq(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope)), fu::get_view(static_cast<fu_VEC<s_SolvedNode>&&>(_8), 0, (outItems_sErtJPPq(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).size() + FN_ARGS_BACK))), mangleArguments_ITm4iMWD(static_cast<fu::view<s_SolvedNode>&&>(_9), module, _scope, ctx, _here))));
                    if (sig)
                    {
                        fu_STR _10 {};
                        fu_STR hash = ((_10 = hash62_ID6Pdhz7(sig, 8)) ? static_cast<fu_STR&&>(_10) : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                        name += ("_"_fu + hash);
                    };
                };
                s_Overload& overload = GET_mut_Y5AuyJLM(target, _scope, module);
                fu_STR _11 {};
                overload.name = ((_11 = HACK_nativeNameParts_6OxeoNRN(isNative, n_body)) ? static_cast<fu_STR&&>(_11) : name ? fu_STR(name) : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                overload.kind = (isUnspec ? "template"_fu : (isNative ? "__native"_fu : (isInline ? "inline"_fu : "fn"_fu)));
                s_Extended& ext = EXT_mut_chviOJ9J(target, module, _scope);
                ext.tEmplate = tEmplate;
                ext.spec_of = overloadIdx;
            };
            updateScope_qEKjpktH(_current_fn, (isInline ? ret_expect : ret_seed), false, target, _scope, module, ctx, _here, _helpers, _helpers_data, isNative, isUnspec, isPure, _current_fn, isNovec, isInline);
            if (!into && !isInline)
            {
                int _12 {};
                const int start = ((_12 = (find_05euw4KZ(mangle0, ' ') + 1)) ? _12 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                mangle = (fu::slice(mangle0, 0, start) + mangleArguments_FG2AswjR(EXT_nkaMKocC(target, module, _scope, ctx).args, _here, ctx));
                /*MOV*/ s_Target preexisting {};
                const bool nx0 = (mangle0 != mangle);
                if (nx0)
                {
                    preexisting = get_25OWLfx6(_specs, mangle);
                    setSpec_hoOT2SD6(mangle0, (preexisting ? preexisting : target), bool{}, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);
                };
                const bool nx00 = (mangle00 != mangle);
                if (nx00 && (mangle00 != mangle0))
                    setSpec_hoOT2SD6(mangle00, (preexisting ? preexisting : target), bool{}, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);

                if (preexisting)
                    return /*NRVO*/ preexisting;

                setSpec_hoOT2SD6(mangle, target, (nx0 ? nx00 : (*(const bool*)fu::NIL)), isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);
            };
        };
        bool didSetBody = false;
        if (!isInline && !isUnspec)
        {
            s_Type retval { ret_seed };
            if (!isNative)
            {
                const s_HelpersData* _13;
                int _14 {};
                const s_SolvedNode s_body = (_14 = ((__extension__ (
                {
                    const s_Helpers& h = last_vtdPb1VG(_helpers);
                    _13 = &(_helpers_data[h.index]);
                (void)0;}), *_13).vars.size() - helpers0vars), solveBlock_XjVECJ2N(n_body, ret_expect, target.index, short(short((short((short((HM_Function | HM_CanReturn)) | HM_LabelUsed)) | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL))))), 0, n_fn.value, int(_14), 0, _scope, _helpers, module, _current_fn, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string));
                retval = SolvedNodeData_CoW62h8S(s_body, module, _scope, ctx).type;
                const int idx_body = (outItems_sErtJPPq(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).size() + FN_BODY_BACK);
                outItems_sErtJPPq(_current_fn, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).mutref(idx_body) = (s_body ? s_body : fail_jI4Vez2o("falsy body"_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
                didSetBody = true;
                ArgsAtRisk_shake_9E7k4Ce5(_current_fn.flow);
                ArgsWritten_shake_QZpoPFXE(s_Flow(_current_fn.flow), _current_fn.events.args_written_via);
            };
            updateScope_qEKjpktH(_current_fn, retval, true, target, _scope, module, ctx, _here, _helpers, _helpers_data, isNative, isUnspec, isPure, _current_fn, isNovec, isInline);
        };
        if (!didSetBody)
        {
            const s_Overload& o = GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data);
            if (!(o.kind != "fn"_fu))
                fail_jI4Vez2o(((("did not set body on "_fu + qWHAT_2UzOFrRY(o, module, _scope, ctx, _here, _helpers, _helpers_data)) + ": "_fu) + humanizeType_0qVczsOs(o.type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
    };
    lazySolveEnd_f3YAMLi9(target, _scope, module, ctx, _here, _helpers, _helpers_data, options, _notes, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, shortModuleName, _field_items, t_string);
    return /*NRVO*/ target;
}

static bool lazySolveStart_gaykLo4Y(const s_Target& target, const s_Overload& overload, s_Scope& _scope, s_Module& module, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if ((overload.status & (SS_DID_START | SS_LAZY)) != SS_LAZY)
        return false;


    {
        s_Overload& o = GET_mut_Y5AuyJLM(target, _scope, module);
        if (o.status & ((SS_FINALIZED | SS_DID_START) | SS_DIRTY))
            fail_jI4Vez2o(x7E("SS_DID_START: non-zero solver status: "_fu, fu::u64dec(overload.status)), _here, ctx, _helpers, _helpers_data, _scope, module);

        o.status |= SS_DID_START;
        if (o.kind == "fn"_fu)
            doTrySpecialize_tMyTP3bm(target, s_Target{}, fu::view<s_SolvedNode>{}, fu_STR{}, fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, 0, (*(const s_Type*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
        else if (o.kind == "type"_fu)
            __solveStruct_ftzItgDZ(true, s_Node(EXT_nkaMKocC(target, module, _scope, ctx).tEmplate.node), target, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _current_fn_or_type, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
        else
            fail_jI4Vez2o((("lazySolveStart: kind is `"_fu + o.kind) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    return true;
}

static void reorderByNumUsings_JUxEl8ry(bool& use_reorder, fu_VEC<int>& reorder, fu::view<s_Argument> host_args, const int num_args, const int num_usings)
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

                                #ifndef DEFt_find_VtCzn94C
                                #define DEFt_find_VtCzn94C
inline int find_VtCzn94C(fu::view<fu_STR> a, fu::view<char> b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static bool reorderByArgIDs_wWZMW5Sc(bool& use_reorder, fu_VEC<int>& reorder, fu::view<fu_STR> names, s_BitSet&& optional, fu::view<s_Argument> host_args, const int num_usings)
{
    use_reorder = true;
    reorder.clear();
    int used = 0;
    int offset = num_usings;
    for (int i = 0; i < host_args.size(); i++)
    {
        int idx = find_VtCzn94C(names, host_args[i].name);
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
            rem_zoGTyg4u(optional, i);
        };
        reorder.push(int(idx));
    };
    if (used != names.size())
    {
        for (int i_1 = 0; i_1 < names.size(); i_1++)
        {
            if (!names[i_1])
                used++;

        };
        if ((used + popcount_Btvcdbd3(optional)) != names.size())
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

static int findRestStart_JOpIdePk(const s_Extended& ext)
{
    for (/*MOV*/ int i = ext.args.size(); i-- > 0; )
    {
        const s_Argument& arg = ext.args[i];
        if (arg.flags & F_REST_ARG)
            return /*NRVO*/ i;

        if (!(arg.flags & F_IMPLICIT))
            break;

    };
    return ext.args.size();
}

static void foreach_tL5XD3Sm(const s_Target& t, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool nullary, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const bool root, const s_SolvedNode& retype, s_Target& _current_fn_or_type, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
{
    s_Type arg0type0 { SolvedNodeData_CoW62h8S(TODO_FIX_convert_args[0], module, _scope, ctx).type };
    if (!nullary)
    {
        const int here = SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target.index;
        if (here && (t.index > here) && (t.modid == module.modid) && (GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data).local_of != here))
            return;

        if (root && retype)
            TODO_FIX_convert_args.mutref(0) = retype;
        else
            MUT_Kfn68Cy8(TODO_FIX_convert_args[0], module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = from;

    };
    fu_DEFER(if (!nullary)
    {
        if (root && retype)
            TODO_FIX_convert_args.mutref(0) = arg0;
        else
            MUT_Kfn68Cy8(TODO_FIX_convert_args[0], module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = arg0type0;

    });
    s_Target candidate {};
    if (nullary || (candidate = tryMatch__mutargs_As8IdS6c(fu_STR{}, TODO_FIX_reorder, TODO_FIX_conversions, bool{}, (*(const s_Scope*)fu::NIL), fu_VEC<s_SolvedNode>(TODO_FIX_convert_args), F_CONVERSION, t, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string)))
    {
        const s_Target& t_1 = (nullary ? t : candidate);
        const s_Overload& convert = GET_mF5WytW3(t_1, _scope, module, ctx, _here, _helpers, _helpers_data);
        if (!(convert.type))
            fail_jI4Vez2o((("No convert.type, perhaps a `using inline fn` without a return type annotation: `"_fu + qWHAT_2UzOFrRY(convert, module, _scope, ctx, _here, _helpers, _helpers_data)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Type convertType = ((convert.kind == "field"_fu) ? add_refs_P9wIESfO((from ? from : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), s_Type(convert.type)) : s_Type(convert.type));
        const bool isStruct = isStruct_C02JG8Ye(convertType);
        if ((convert.status & (SS_DID_START | SS_FINALIZED)) == SS_DID_START)
        {
        }
        else
        {
            if (isAssignableAsArgument_P9wIESfO(expect, convertType))
            {
                if (match)
                {
                    fu_STR suffix = (((("\n\t"_fu + explainConversion_MBAzmMNM(match, _scope, module, ctx, _here, _helpers, _helpers_data)) + "\n\tand:"_fu) + "\n\t"_fu) + explainConversion_MBAzmMNM((path + t_1), _scope, module, ctx, _here, _helpers, _helpers_data));
                    if (actual)
                        fail_jI4Vez2o(((((("Conversion ambiguity, multiple ways to convert `"_fu + humanizeType_0qVczsOs(actual, module, ctx)) + "` into `"_fu) + humanizeType_0qVczsOs(expect, module, ctx)) + "`: "_fu) + suffix), _here, ctx, _helpers, _helpers_data, _scope, module);
                    else
                        fail_jI4Vez2o(((("`using` ambiguity, multiple ways to obtain a `"_fu + humanizeType_0qVczsOs(expect, module, ctx)) + "` in this scope: "_fu) + suffix), _here, ctx, _helpers, _helpers_data, _scope, module);

                };
                match = (path + t_1);
            }
            else
            {
                const bool mightHaveConversion = (isStruct || (local_scope ? _scope : misc_scope).converts);
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

                                    const s_Overload& convert_1 = GET_mF5WytW3(path[i_1], _scope, module, ctx, _here, _helpers, _helpers_data);
                                    err += (((qWHAT_2UzOFrRY(convert_1, module, _scope, ctx, _here, _helpers, _helpers_data) + ": "_fu) + humanizeType_0qVczsOs(convertType, module, ctx)) + "` ->"_fu);
                                };
                                err += (("\n\t\t`"_fu + qWHAT_2UzOFrRY(convert, module, _scope, ctx, _here, _helpers, _helpers_data)) + "`."_fu);
                                fail_jI4Vez2o(fu_STR(err), _here, ctx, _helpers, _helpers_data, _scope, module);
                            };
                        };
                    };
                    path.push(s_Target(t_1));
                    fu_DEFER(path.pop());
                    descend_Vo486pkv(convertType, false, isStruct, bool{}, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, module, ctx, _current_fn, _here, _helpers, _helpers_data, retype, _current_fn_or_type, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string, expect, match, path, actual, has_converts);
                };
            };
        };
    };
}

                                #ifndef DEFt_each_p8XSyEJP
                                #define DEFt_each_p8XSyEJP
inline void each_p8XSyEJP(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, int, const int start, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool nullary, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const bool root, const s_SolvedNode& retype, s_Target& _current_fn_or_type, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
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
            const s_Target& u = items[i_1];
            foreach_tL5XD3Sm(u, TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _helpers, _helpers_data, root, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);
        };
        i0 = ss.end;
    };
}
                                #endif

                                #ifndef DEFt_each_oVr1371x
                                #define DEFt_each_oVr1371x
inline void each_oVr1371x(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, int, const int start, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool nullary, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const bool root, const s_SolvedNode& retype, s_Target& _current_fn_or_type, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
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
            foreach_tL5XD3Sm(items[i_1], TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _helpers, _helpers_data, root, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

        i0 = ss.end;
    };
}
                                #endif

static void descend_Vo486pkv(const s_Type& from, const bool nullary, const bool isStruct, const bool root, const bool local_scope, s_Scope& _scope, const s_Scope& misc_scope, s_ScopeSkipMemos& _ss, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_Module& module, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_SolvedNode& retype, s_Target& _current_fn_or_type, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const int has_converts)
{
    if (nullary)
        each_p8XSyEJP(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).usings), fu_VEC<s_ScopeSkip>((local_scope ? _ss.usings : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, 0, TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _helpers, _helpers_data, root, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);
    else
    {
        if (isStruct)
        {
            fu_VEC<s_Target> inner { lookupStruct_5FUAmY77(from, module, ctx).converts };
            for (int i = 0; i < inner.size(); i++)
                foreach_tL5XD3Sm(s_Target(inner[i]), TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _helpers, _helpers_data, root, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

        };
        if (has_converts)
            each_oVr1371x(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).converts), fu_VEC<s_ScopeSkip>((local_scope ? _ss.converts : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, 0, TODO_FIX_convert_args, module, _scope, ctx, nullary, _current_fn, _here, _helpers, _helpers_data, root, retype, _current_fn_or_type, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

    };
}

static fu_VEC<s_Target> tryConvert_rjrtSzUD(const s_Scope& misc_scope, const bool local_scope, const s_Type& expect, const s_Type& actual, const s_SolvedNode& retype, s_Scope& _scope, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, s_Module& module, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Target& _current_fn_or_type, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_Target> match {};
    fu_VEC<s_Target> path {};
    const int has_converts = (local_scope ? _scope : misc_scope).converts.size();
    const s_SolvedNode arg0 { TODO_FIX_convert_args[0] };
    fu_VEC<int> TODO_FIX_reorder {};
    fu_VEC<fu_VEC<s_Target>> TODO_FIX_conversions {};
    descend_Vo486pkv(actual, !actual, isStruct_C02JG8Ye(actual), true, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, module, ctx, _current_fn, _here, _helpers, _helpers_data, retype, _current_fn_or_type, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string, expect, match, path, actual, has_converts);
    return /*NRVO*/ match;
}

                                #ifndef DEFt_grow_if_oob_LNPvdN4l
                                #define DEFt_grow_if_oob_LNPvdN4l
inline fu_VEC<s_Target>& grow_if_oob_LNPvdN4l(fu_VEC<fu_VEC<s_Target>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_only_SYogW9sF
                                #define DEFt_only_SYogW9sF
inline const fu_VEC<s_Target>& only_SYogW9sF(fu::view<fu_VEC<s_Target>> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

                                #ifndef DEFt_last_GEqmjUnO
                                #define DEFt_last_GEqmjUnO
inline s_Target& last_GEqmjUnO(fu_VEC<s_Target>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static s_Type solveArrlit_itemType_init_a1wcvRib(const s_Type& head, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    s_Type _0 {};
    return (_0 = clear_refs_8e1ZyHy2(s_Type(head))) ? static_cast<s_Type&&>(_0) : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_Type solveArrlit_done_h5pnkuHY(const s_Type& itemType, const s_TokenIdx& _here, const s_Context& ctx)
{
    return createArray_8e1ZyHy2(itemType, _here, ctx);
}

static const s_Overload& GETfn_FqXEo44D(const int idx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return GET_mF5WytW3(s_Target { int(module.modid), int(idx) }, _scope, module, ctx, _here, _helpers, _helpers_data);
}

static fu_STR fnName_sddFTQUe(const int idx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return (idx ? (("`"_fu + GETfn_FqXEo44D(idx, module, _scope, ctx, _here, _helpers, _helpers_data).name) + "`"_fu) : "global scope"_fu);
}

static void disambig_PgXdZX0r(const s_Target& matchIdx, const s_Target& overloadIdx, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_CurrentFn& _current_fn, fu::view<char> id, fu::view<fu_VEC<s_Target>> conversions, fu::view<fu_VEC<s_Target>> conversions_1)
{
    if (matchIdx)
    {
        const s_Target& PREV = matchIdx;
        const s_Target& NEXT = overloadIdx;
        const int inner = GET_mF5WytW3(PREV, _scope, module, ctx, _here, _helpers, _helpers_data).local_of;
        const int outer = GET_mF5WytW3(NEXT, _scope, module, ctx, _here, _helpers, _helpers_data).local_of;
        const int callsite = SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target.index;
        if (SELF_TEST)
        {
            int _c = callsite;
            while (_c > inner)
                _c = GETfn_FqXEo44D(_c, module, _scope, ctx, _here, _helpers, _helpers_data).local_of;

            if (!(_c == inner))
                fail_jI4Vez2o(((((("BUG! Leaking `"_fu + id) + "` between functions [inner/callsite]: "_fu) + fnName_sddFTQUe(inner, module, _scope, ctx, _here, _helpers, _helpers_data)) + " is seen from "_fu) + fnName_sddFTQUe(callsite, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

            int _i = inner;
            while (_i > outer)
                _i = GETfn_FqXEo44D(_i, module, _scope, ctx, _here, _helpers, _helpers_data).local_of;

            if (!(_i == outer))
                fail_jI4Vez2o(((((((("BUG! Leaking `"_fu + id) + "` between functions [inner/outer]: "_fu) + fnName_sddFTQUe(inner, module, _scope, ctx, _here, _helpers, _helpers_data)) + " and "_fu) + fnName_sddFTQUe(outer, module, _scope, ctx, _here, _helpers, _helpers_data)) + " as seen from "_fu) + fnName_sddFTQUe(callsite, module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        fail_jI4Vez2o((((((((((("Ambiguous callsite, matches multiple items in scope: "_fu + explainWhichFn_cU6mRM80(PREV, conversions, _scope, module, ctx, _here, _helpers, _helpers_data)) + " from "_fu) + fnName_sddFTQUe(inner, module, _scope, ctx, _here, _helpers, _helpers_data)) + " and "_fu) + explainWhichFn_cU6mRM80(NEXT, conversions_1, _scope, module, ctx, _here, _helpers, _helpers_data)) + " from "_fu) + fnName_sddFTQUe(outer, module, _scope, ctx, _here, _helpers, _helpers_data)) + ", as seen from "_fu) + fnName_sddFTQUe(callsite, module, _scope, ctx, _here, _helpers, _helpers_data)) + "."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

                                #ifndef DEFt_last_lCWabbdb
                                #define DEFt_last_lCWabbdb
inline const fu_STR& last_lCWabbdb(fu::view<fu_STR> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_Target tryMatch__mutargs_As8IdS6c(fu_STR&& id, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, const bool local_scope, const s_Scope& misc_scope, fu::view<s_SolvedNode> args, const int flags, const s_Target& target, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
{
    if (SELF_TEST)
    {
        for (int i = 0; i < args.size(); i++)
        {
            if (!SolvedNodeData_CoW62h8S(args[i], module, _scope, ctx).kind)
                fail_jI4Vez2o("Falsy arg.kind!"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        };
    };
    /*MOV*/ s_Target matchIdx {};
    s_Target DEBUG_assertMatch {};
    int minArity = args.size();
    const int numUsings = countUsings_oos8kacg(local_scope, _scope, misc_scope, _ss, _here, ctx, _helpers, _helpers_data, module);
    const int explicitArity = minArity;
    const int maxArity = (explicitArity + numUsings);
    fu_VEC<fu_STR> names {};
    s_BitSet optional {};
    if (flags & F_NAMED_ARGS)
    {
        bool some = false;
        for (int i = 0; i < args.size(); i++)
        {
            const s_SolvedNode& arg = args[i];
            const fu_STR* _0;
            names.push(fu_STR(((SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).kind == "argid"_fu) ? (*(_0 = &(((void)(some = true), SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).value))) ? *_0 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)) : (*(const fu_STR*)fu::NIL))));
            if (SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).flags & F_OPT_ARG)
            {
                minArity--;
                add_zoGTyg4u(optional, i);
            };
        };
        if (!(some))
            fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    fu_STR reusable_mangle {};
    fu_VEC<s_Target> extra_items {};
    if (local_scope && !target)
    {
        s_BitSet seen {};
        if (numUsings)
            each_Pez4Cm87((local_scope ? _scope : misc_scope).usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, 0, _scope, module, ctx, _here, _helpers, _helpers_data, seen, local_scope, _ss, id, extra_items);

        if (flags & ((F_ACCESS | F_METHOD) | F_OPERATOR))
        {
            for (int i = 0; i < args.size(); i++)
                visitTypeImports_iNEwespE(SolvedNodeData_CoW62h8S(args[i], module, _scope, ctx).type, module, ctx, seen, _scope, local_scope, _ss, id, extra_items);

        };
    };
    fu_VEC<s_ScopeItem> field_items { (local_scope && ((flags & F_ACCESS) || !minArity) && (minArity <= 1) && maxArity ? _field_items : (*(const fu_VEC<s_ScopeItem>*)fu::NIL)) };
    fu_VEC<fu_STR> alternate_ids {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        bool shadows {};
        while ((overloadIdx = search_lONlZZIu((local_scope ? _scope : misc_scope).items, id, scope_iterator, (local_scope ? ((flags & F_IMPLICIT) ? _ss.declash : _ss.items) : fu::view<s_ScopeSkip>{}), shadows, target, extra_items, field_items)))
        { {
            fu_VEC<fu_VEC<s_Target>> conversions_1 {};
            fu_VEC<int> reorder_1 {};
            bool TODO_FIX_skip_autocalls = false;
            while (true)
            {
                s_Overload overload { GET_mF5WytW3(overloadIdx, _scope, module, ctx, _here, _helpers, _helpers_data) };
                if (lazySolveStart_gaykLo4Y(overloadIdx, s_Overload(overload), _scope, module, _here, ctx, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string))
                    continue;

                fu_STR kind { overload.kind };
                const bool isType = (kind == "type"_fu);
                if (minArity && isType && !target)
                {
                    const fu_STR& alt = overload.type.vtype.canon;
                    if (alt != id)
                        alternate_ids.push(fu_STR(alt));

                };
                const s_Extended& arity = EXT_nkaMKocC(overloadIdx, module, _scope, ctx);
                const bool isZeroInit = (isType && !explicitArity);
                if (!isZeroInit && ((arity.max < minArity) || (arity.min > maxArity)))
                    goto L_0217;

                fu_VEC<s_Argument> host_args { arity.args };
                const int num_usings = (!isZeroInit && (arity.min > explicitArity) ? (arity.min - explicitArity) : int{});
                bool use_reorder = false;
                if (!names)
                    reorderByNumUsings_JUxEl8ry(use_reorder, reorder_1, host_args, args.size(), num_usings);
                else if (!reorderByArgIDs_wWZMW5Sc(use_reorder, reorder_1, names, s_BitSet(optional), host_args, num_usings))
                    goto L_0217;

                if (optional && reorder_1 && (reorder_1.size() < args.size()) && (reorder_1.size() < arity.max))
                    goto L_0217;

                s_Type REST_TYPE {};
                s_Type REST_EXPECT {};
                const int REST_START = findRestStart_JOpIdePk(arity);
                const int N = std::max((use_reorder ? reorder_1.size() : args.size()), (!isZeroInit ? arity.min : (*(const int*)fu::NIL)));
                if (REST_START < N)
                {
                    const s_Type& expect = host_args[REST_START].type;
                    if (expect)
                    {
                        s_Type _1 {};
                        REST_EXPECT = ((_1 = tryClear_sliceable_8e1ZyHy2(expect)) ? static_cast<s_Type&&>(_1) : fail_jI4Vez2o(((GET_mF5WytW3(overloadIdx, _scope, module, ctx, _here, _helpers, _helpers_data).name + ": Rest argument annotation is not an array: "_fu) + humanizeType_0qVczsOs(expect, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module));
                    };
                };
                if (N)
                {
                    if (!((reorder_1.size() >= args.size()) || !reorder_1 || optional))
                        fail_jI4Vez2o("reorder < args."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                    for (int i = 0; i < N; i++)
                    {
                        const bool rest = (i >= REST_START);
                        s_Argument host_arg { host_args[(rest ? REST_START : i)] };
                        s_Type expect { (rest ? REST_EXPECT : host_arg.type) };
                        if (TODO_FIX_skip_autocalls && rest)
                            continue;

                        const int callsiteIndex = (use_reorder ? int(reorder_1[i]) : ((i < args.size()) ? int(i) : -1));
                        if (callsiteIndex < 0)
                        {
                            if (host_arg.dEfault || (host_arg.flags & F_IMPLICIT))
                                continue;

                            int _2 {};
                            if (!((_2 = (host_arg.flags & F_MUSTNAME)) ? _2 : (flags & F_CONVERSION)))
                            {
                                const s_Type& expect_1 = (expect ? expect : SolvedNodeData_CoW62h8S(host_arg.dEfault, module, _scope, ctx).type);
                                if (expect_1)
                                {
                                    fu_VEC<s_Target> conversion = tryConvert_rjrtSzUD(misc_scope, local_scope, expect_1, (*(const s_Type*)fu::NIL), s_SolvedNode{}, _scope, TODO_FIX_convert_args, _ss, module, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string);
                                    if (conversion)
                                    {
                                        grow_if_oob_LNPvdN4l(conversions_1, i) = conversion;
                                        continue;
                                    };
                                };
                            };
                            goto L_0217;
                        };
                        if (host_arg.flags & F_MUSTNAME)
                        {
                            if ((names.size() <= callsiteIndex) || !names[callsiteIndex])
                                goto L_0217;

                        };
                        if (host_arg.autocall && !TODO_FIX_skip_autocalls)
                        {
                            fu_VEC<s_SolvedNode> autocall_args {};
                            fu_VEC<int> autocall_reorder {};
                            fu_VEC<fu_VEC<s_Target>> autocall_conversions {};
                            autocall_args.resize(1);
                            autocall_args.mutref(0) = args[callsiteIndex];
                            const s_Target t = tryMatch__mutargs_As8IdS6c(fu_STR(host_arg.autocall), autocall_reorder, autocall_conversions, local_scope, misc_scope, autocall_args, 0, s_Target{}, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string);
                            if (!t)
                                goto L_0217;

                            if (autocall_conversions)
                                grow_if_oob_LNPvdN4l(conversions_1, i) += only_SYogW9sF(autocall_conversions);

                            grow_if_oob_LNPvdN4l(conversions_1, i) += s_Target(t);
                            if (!(autocall_reorder.size() < 2))
                                fail_jI4Vez2o("autocall: reorder"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                        };
                        if (!expect)
                            continue;

                        const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                        const s_Type& actual = (hasConv ? GET_mF5WytW3(last_GEqmjUnO(conversions_1.mutref(i)), _scope, module, ctx, _here, _helpers, _helpers_data).type : SolvedNodeData_CoW62h8S(args[callsiteIndex], module, _scope, ctx).type);
                        if (isAssignableAsArgument_P9wIESfO(expect, (actual ? actual : fail_jI4Vez2o("tryMatch: !actual"_fu, _here, ctx, _helpers, _helpers_data, _scope, module))))
                            continue;

                        if (!hasConv)
                        {
                            const s_SolvedNode& arg = args[callsiteIndex];
                            const s_SolvedNode& arg_1 = ((SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).kind == "argid"_fu) ? only_aj4CwosS(SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).items) : arg);
                            s_Type retype = tryRetyping_F9oLMnz9(arg_1, expect, module, _scope, ctx, _here, _helpers, _helpers_data);
                            if (isAssignableAsArgument_P9wIESfO(expect, retype))
                                continue;

                        };
                        if (!(flags & F_CONVERSION))
                        {
                            fu_VEC<s_Target> conversion = tryConvert_rjrtSzUD(misc_scope, local_scope, expect, s_Type(actual), (!hasConv ? args[callsiteIndex] : (*(const s_SolvedNode*)fu::NIL)), _scope, TODO_FIX_convert_args, _ss, module, ctx, _current_fn, _here, _helpers, _helpers_data, _current_fn_or_type, _field_items, _specs, _root_scope, _anons, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string);
                            if (conversion)
                            {
                                grow_if_oob_LNPvdN4l(conversions_1, i) += conversion;
                                continue;
                            };
                        };
                        goto L_0217;
                    };
                };
                if (REST_START < N)
                {
                    for (int i = REST_START; i < N; i++)
                    {
                        const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                        const int callsiteIndex = (use_reorder ? reorder_1[i] : i);
                        const s_Type& actual = (hasConv ? GET_mF5WytW3(last_GEqmjUnO(conversions_1.mutref(i)), _scope, module, ctx, _here, _helpers, _helpers_data).type : SolvedNodeData_CoW62h8S(args[callsiteIndex], module, _scope, ctx).type);
                        REST_TYPE = ((i == REST_START) ? solveArrlit_itemType_init_a1wcvRib(actual, _here, ctx, _helpers, _helpers_data, _scope, module) : type_trySuper_P9wIESfO(REST_TYPE, actual));
                        if (!REST_TYPE)
                            goto L_0217;

                    };
                    REST_TYPE = solveArrlit_done_h5pnkuHY(REST_TYPE, _here, ctx);
                };
                if (kind == "template"_fu)
                {
                    fu_STR cant_reuse {};
                    fu_STR& args_mangled = ((use_reorder || conversions_1) ? cant_reuse : reusable_mangle);
                    const s_Target specIdx = trySpecialize_3RH4B2JL(overloadIdx, args, args_mangled, REST_START, REST_TYPE, reorder_1, use_reorder, conversions_1, _scope, module, ctx, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
                    if (!specIdx)
                        goto L_0217;

                    overloadIdx = specIdx;
                    DEBUG_assertMatch = specIdx;
                    TODO_FIX_skip_autocalls = true;
                    continue;
                };
                disambig_PgXdZX0r(matchIdx, overloadIdx, _scope, module, ctx, _here, _helpers, _helpers_data, _current_fn, id, conversions, conversions_1);
                std::swap(reorder_1, reorder);
                std::swap(conversions_1, conversions);
                matchIdx = overloadIdx;
                if (shadows)
                    goto L_NEXT;

                break;
            };
          } L_0217:;
        } L_NEXT:;

        if (!alternate_ids)
            break;

        id = last_lCWabbdb(alternate_ids);
        alternate_ids.pop();
    };
    if (DEBUG_assertMatch)
    {
        if (!(DEBUG_assertMatch == matchIdx))
            fail_jI4Vez2o((("Specialized `"_fu + GET_mF5WytW3(DEBUG_assertMatch, _scope, module, ctx, _here, _helpers, _helpers_data).name) + "` but ended up not using it."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    return /*NRVO*/ matchIdx;
}

static fu_STR expectedArgs_5orDIlyQ(fu::view<s_Target> targets, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
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

        result += explainWhichFn_cU6mRM80(targets[i], fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx, _here, _helpers, _helpers_data);
    };
    return result ? fu_STR(result) : "."_fu;
}

static fu_STR actualArgs_1XgfvfFj(fu::view<s_SolvedNode> args, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    fu_STR result = "\nActual: ("_fu;
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg = args[i];
        if (i)
            result += ","_fu;

        result += "\n\t"_fu;
        if (SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).kind == "argid"_fu)
            result += (SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).value + ": "_fu);

        result += humanizeType_0qVczsOs(SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).type, module, ctx);
    };
    return result + ")."_fu;
}

[[noreturn]] static fu::never NICERR_mismatch_fwayNKQb(const s_Scope& misc_scope, const bool local_scope, const fu_STR& id, fu::view<s_SolvedNode> args, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, fu::view<s_ScopeItem> _field_items, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_CurrentFn& _current_fn)
{
    fu_VEC<s_Target> overloads {};
    int scope_iterator {};
    s_Target target {};
    bool shadows {};
    while ((target = search_lONlZZIu((local_scope ? _scope : misc_scope).items, id, scope_iterator, (local_scope ? _ss.items : fu::view<s_ScopeSkip>{}), shadows, s_Target{}, fu::view<s_Target>{}, (local_scope ? _field_items : fu::view<s_ScopeItem>{}))))
        overloads.push(s_Target(target));

    int min = int(0x7fffffffu);
    int max = 0;
    for (int i = 0; i < overloads.size(); i++)
    {
        const s_Target& o = overloads[i];
        if (min > EXT_nkaMKocC(o, module, _scope, ctx).min)
            min = EXT_nkaMKocC(o, module, _scope, ctx).min;

        if (max < EXT_nkaMKocC(o, module, _scope, ctx).max)
            max = EXT_nkaMKocC(o, module, _scope, ctx).max;

    };
    if (overloads)
    {
        if (args.size() < min)
            fail_jI4Vez2o(((x7E((x7E((("`"_fu + id) + "` expects at least "_fu), fu::i64dec(min)) + " arguments, "_fu), fu::i64dec(args.size())) + " provided"_fu) + expectedArgs_5orDIlyQ(overloads, _scope, module, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);
        else if (args.size() > max)
            fail_jI4Vez2o(((x7E((x7E((("`"_fu + id) + "` expects at most "_fu), fu::i64dec(max)) + " arguments, "_fu), fu::i64dec(args.size())) + " provided"_fu) + expectedArgs_5orDIlyQ(overloads, _scope, module, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);
        else
            fail_jI4Vez2o((((("`"_fu + id) + "` bad args"_fu) + expectedArgs_5orDIlyQ(overloads, _scope, module, ctx, _here, _helpers, _helpers_data)) + actualArgs_1XgfvfFj(args, module, _scope, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    }
    else
    {
        fu_STR _0 {};
        fail_jI4Vez2o(((("`"_fu + id) + "` is not defined in this scope: "_fu) + ((_0 = (("`"_fu + SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).value) + "`."_fu)) ? static_cast<fu_STR&&>(_0) : "root scope."_fu)), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

static s_Target match__mutargs_KftiDKeJ(const s_Scope& misc_scope, const bool local_scope, const fu_STR& id, fu::view<s_SolvedNode> args, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, const int flags, const s_Target& target, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
{
    /*MOV*/ const s_Target ret = tryMatch__mutargs_As8IdS6c(fu_STR(id), reorder, conversions, local_scope, misc_scope, args, flags, target, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string);
    if (ret)
        return /*NRVO*/ ret;

    /*MOV*/ const s_Target debug = tryMatch__mutargs_As8IdS6c(fu_STR(id), reorder, conversions, local_scope, misc_scope, args, flags, target, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string);
    if (debug)
        return /*NRVO*/ debug;

    NICERR_mismatch_fwayNKQb(misc_scope, local_scope, id, args, _scope, _ss, _field_items, module, ctx, _here, _helpers, _helpers_data, _current_fn);
}

static s_Type solveArrlit_itemType_Du9s8Bz3(fu::view<s_SolvedNode> items, /*MOV*/ s_Type&& itemType, int start, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!itemType)
    {
        if (start == items.size())
            fail_jI4Vez2o("Cannot infer empty arraylit."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        itemType = solveArrlit_itemType_init_a1wcvRib(SolvedNodeData_CoW62h8S(items[start++], module, _scope, ctx).type, _here, ctx, _helpers, _helpers_data, _scope, module);
    }
    else if (is_ref_8e1ZyHy2(itemType))
        fail_jI4Vez2o("Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    for (int i = start; i < items.size(); i++)
        itemType = superType_pUSAdg6S("Array literal: "_fu, itemType, SolvedNodeData_CoW62h8S(items[i], module, _scope, ctx).type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data);

    return static_cast<s_Type&&>(itemType);
}

static s_SolvedNode createArrlit_mEJbCs08(fu_VEC<s_SolvedNode>&& items, const s_Type& itemType, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fn_or_type)
{
    s_Type itemType_1 = solveArrlit_itemType_Du9s8Bz3(items, s_Type(itemType), 0, _here, ctx, _helpers, _helpers_data, _scope, module);
    return SolvedNode_0vKsswP4("arrlit"_fu, solveArrlit_done_h5pnkuHY(itemType_1, _here, ctx), 0, (*(const fu_STR*)fu::NIL), items, s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode SolvedNode_deepClone_v6ZdCY8z(s_SolvedNodeData&& data, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_Target& _current_fn_or_type)
{
    fu_VEC<s_SolvedNode>& items = data.items;
    for (int i = 0; i < items.size(); i++)
        items.mutref(i) = SolvedNode_deepClone_v6ZdCY8z(s_SolvedNodeData(SolvedNodeData_CoW62h8S(items[i], module, _scope, ctx)), module, _scope, ctx, _current_fn_or_type);

    return SolvedNode_create_vg3ys5Qc(data, _current_fn_or_type, module, _scope);
}

static s_Type intersectionType_8ocQZ5dT(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_Type _0 {};
    return (_0 = type_tryIntersect_P9wIESfO(a, b)) ? static_cast<s_Type&&>(_0) : fail_jI4Vez2o((((((((id ? (("`"_fu + human_UbFfpidG(id, module, _scope, ctx, _here, _helpers, _helpers_data)) + "`: "_fu) : fu_STR{}) + reason) + "Cannot intersect a common subtype: `"_fu) + humanizeType_0qVczsOs(a, module, ctx)) + "` & `"_fu) + humanizeType_0qVczsOs(b, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode createLet_nLyBOWMH(const fu_STR& id, const s_Type& type, const int flags, bool& shadows, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_TokenIdx& _here, const s_Target& _current_fn_or_type)
{
    const s_Target target = Binding_zwcPHZ8K(id, s_Type(type), flags, shadows, _current_fn, module, _scope, ctx, _root_scope, _ss, _helpers, _helpers_data, _here);
    /*MOV*/ const s_SolvedNode ret = SolvedNode_0vKsswP4("let"_fu, GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).type, flags, GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).name, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, 0, _here, _current_fn_or_type, module, _scope);
    GET_mut_Y5AuyJLM(target, _scope, module).solved = ret;
    return /*NRVO*/ ret;
}

static const s_Target& injectImplicitArg_2zyT8pYM(const fu_STR& id, const s_Type& type, const s_Target& becauseOf, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fn_or_type, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss)
{
    if (!(SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).items))
        fail_jI4Vez2o((((("No implicit `"_fu + id) + "` in scope, needed to call `"_fu) + GET_mF5WytW3(becauseOf, _scope, module, ctx, _here, _helpers, _helpers_data).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    for (int i = 0; i < (SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).items.size() + FN_ARGS_BACK); i++)
    {
        const s_SolvedNode arg { SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).items[i] };
        if (SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).value == id)
        {
            s_Type super = intersectionType_8ocQZ5dT("Implicit argument collision: "_fu, add_ref_GR4OoJkm(s_Type(type), SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).type.lifetime, _here, ctx), SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).type, id, module, _scope, ctx, _here, _helpers, _helpers_data);
            MUT_Kfn68Cy8(s_SolvedNode(arg), module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = super;
            GET_mut_Y5AuyJLM(s_Target(SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).target), _scope, module).type = super;
            const s_Target* _0;
            return *(_0 = &(SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).target)) ? *_0 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);
        };
    };
    bool shadows {};
    const int flags = (F_IMPLICIT | F_ARG);
    const s_SolvedNode newArgNode = createLet_nLyBOWMH(id, type, flags, shadows, _current_fn, module, _scope, ctx, _root_scope, _ss, _helpers, _helpers_data, _here, _current_fn_or_type);
    const int newArgIdx = (SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).items.size() + FN_ARGS_BACK);
    MUT_Kfn68Cy8(_current_fn.out, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).items.insert(newArgIdx, s_SolvedNode(newArgNode));
    Reference_trackArgument_CooqGQ4F(_current_fn.flow, SolvedNodeData_CoW62h8S(newArgNode, module, _scope, ctx).target.index, newArgIdx);
    return SolvedNodeData_CoW62h8S(newArgNode, module, _scope, ctx).target;
}

static s_SolvedNode bindImplicitArg_h2SSOeKE(const fu_STR& name, const s_Type& type, const s_Target& becauseOf, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Target& _current_fn_or_type, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
{

    {
        const s_Target target = tryParseClosureID_ZIuKfopV(name, MODID_yuJMA1l6(module));
        if (target)
        {
            const s_Overload& o = GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data);
            if (o.local_of == SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target.index)
            {
                if (!(o.kind == "var"_fu))
                    fail_jI4Vez2o("CLOSURE-ID-HACK #2"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                return CallerNode_pNH3XXoN("__closure"_fu, s_Target(target), fu_VEC<s_SolvedNode>{}, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string);
            };
        };
    };
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    s_Target _0 {};
    const s_Target target = ((_0 = tryMatch__mutargs_As8IdS6c(fu_STR(name), reorder, conversions, true, (*(const s_Scope*)fu::NIL), fu::view<s_SolvedNode>{}, F_IMPLICIT, s_Target{}, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string)) ? _0 : (_0 = s_Target(injectImplicitArg_2zyT8pYM(name, type, becauseOf, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _root_scope, _ss))) ? _0 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
    const s_Overload& o = GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data);
    if (!(o.flags & F_IMPLICIT))
        fail_jI4Vez2o((((("Matching a non-implicit item in scope: `"_fu + name) + "`, binds to call to `"_fu) + GET_mF5WytW3(becauseOf, _scope, module, ctx, _here, _helpers, _helpers_data).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    checkAssignable_0veNrHd3(type, o.type, (("Implicit `"_fu + name) + "` type mismatch"_fu), (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);
    return CallerNode_pNH3XXoN("__implicit"_fu, s_Target(target), fu_VEC<s_SolvedNode>{}, 0, reorder, conversions, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string);
}

                                #ifndef DEFt_last_cTrO4UFq
                                #define DEFt_last_cTrO4UFq
inline const s_Node& last_cTrO4UFq(fu::view<s_Node> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode solveLetLike_dontTouchScope_4keirnkJ(const fu_STR& id, int flags, /*MOV*/ s_SolvedNode&& init, s_Type&& annot, const s_Type& specType, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    if (!(annot || SolvedNodeData_CoW62h8S(init, module, _scope, ctx).type))
        fail_jI4Vez2o((("Variable declarations without type annotations must be initialized: `"_fu + id) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (annot && SolvedNodeData_CoW62h8S(init, module, _scope, ctx).type)
    {
        if (specType)
        {
            if (!isAssignable_P9wIESfO(annot, SolvedNodeData_CoW62h8S(init, module, _scope, ctx).type))
                init = s_SolvedNode{};

        };
        if (SolvedNodeData_CoW62h8S(init, module, _scope, ctx).type)
            checkAssignable_0veNrHd3(annot, SolvedNodeData_CoW62h8S(init, module, _scope, ctx).type, "Type annotation does not match init expression"_fu, id, "="_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    const s_Type& t_init = SolvedNodeData_CoW62h8S(init, module, _scope, ctx).type;
    const bool killref = is_ref2temp_8e1ZyHy2(t_init, _here, ctx);
    if (!(flags & F_ARG) && is_never_8e1ZyHy2(t_init))
    {
        makeNote_hw6XKcvD(N_DeadLet, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return s_SolvedNode(init);
    };
    if (is_mutref_8e1ZyHy2(annot, _here, ctx))
        flags |= F_REF;

    if (flags & F_REF)
    {
        if (!(is_mutref_8e1ZyHy2(t_init, _here, ctx) || (is_never_8e1ZyHy2(t_init) && annot) || (!init && (flags & F_ARG))))
            fail_jI4Vez2o(((("`ref` variables must be initialized to a mutable reference: `"_fu + id) + "`"_fu) + (t_init ? (" = "_fu + humanizeType_0qVczsOs(t_init, module, ctx)) : "."_fu)), _here, ctx, _helpers, _helpers_data, _scope, module);

        if (killref)
            fail_jI4Vez2o("`ref` varibles cannot bind to temporaries."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    s_Type t_let = ((annot && ((flags & (F_ARG | F_MUT)) || !t_init)) ? s_Type(annot) : ((is_mutref_8e1ZyHy2(t_init, _here, ctx) || (flags & F_MUT) || killref) ? (((flags & F_REF) && (!killref || fail_jI4Vez2o("redundant, see above, refs cant bind to temps"_fu, _here, ctx, _helpers, _helpers_data, _scope, module))) ? s_Type(t_init) : (((flags & F_MUT) || killref) ? clear_refs_8e1ZyHy2(s_Type(t_init)) : clear_mutref_8e1ZyHy2(s_Type(t_init)))) : s_Type(t_init)));
    if ((flags & F_ARG) && !(flags & F_MUT))
        t_let = add_ref_GR4OoJkm(s_Type(t_let), Lifetime_temporary_8nlJDPX0(), _here, ctx);

    return SolvedNode_0vKsswP4("let"_fu, t_let, flags, id, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createLet_tjE53zNU(const fu_STR& id, const int flags, const s_SolvedNode& init, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss)
{
    /*MOV*/ s_SolvedNode out = solveLetLike_dontTouchScope_4keirnkJ(id, int(flags), s_SolvedNode(init), s_Type{}, (*(const s_Type*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data, options, _notes, _current_fn_or_type);
    solveLet_XfWCIePk(out, id, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _root_scope, _ss);
    return /*NRVO*/ out;
}

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline constexpr unsigned SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

                                #ifndef DEF_SS_FN_RECUR
                                #define DEF_SS_FN_RECUR
inline constexpr unsigned SS_FN_RECUR = (0x1u << 17u);
                                #endif

static void detectRecursion_EaK2Royu(const s_Target& target, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    s_Overload overload { GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data) };
    if ((overload.status & (SS_FINALIZED | SS_LAZY)) != SS_LAZY)
        return;

    const int note = ((overload.kind == "type"_fu) ? N_TypeRecursion : N_FnRecursion);
    const unsigned status = ((overload.kind == "type"_fu) ? SS_TYPE_RECUR : SS_FN_RECUR);
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (!isFnOrType_WNFGc8kc(h, _helpers_data))
            continue;

        if (_helpers_data[h.index].mask & HM_Lambda)
            fail_jI4Vez2o("Recursive lambda, what happened here?"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        GET_mut_Y5AuyJLM(_helpers_data[h.index].target, _scope, module).status |= status;
        makeNote_hw6XKcvD(note, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        if (_helpers_data[h.index].target == target)
            return;

    };
    fail_jI4Vez2o((x7E((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu), fu::u64dec(overload.status)) + ")`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode CallerNode_pNH3XXoN(const fu_STR& debug, s_Target&& target, fu_VEC<s_SolvedNode>&& args, const int kills, const fu_VEC<int>& reorder, fu::view<fu_VEC<s_Target>> conversions, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
{
    if (reorder)
    {
        fu_VEC<s_SolvedNode> args_out {};
        args_out.resize(reorder.size());
        for (int i = 0; i < reorder.size(); i++)
        {
            const int idx = reorder[i];
            if ((idx >= 0))
                args_out.mutref(i) = args[idx];

        };
        args = args_out;
    };
    for (int argIdx = 0; argIdx < conversions.size(); argIdx++)
    {
        fu::view<s_Target> conversion = conversions[argIdx];
        for (int i = 0; i < conversion.size(); i++)
        {
            const s_Target& t = conversion[i];
            if (EXT_nkaMKocC(t, module, _scope, ctx).min || (EXT_nkaMKocC(t, module, _scope, ctx).max && args[argIdx]))
            {
                args.mutref(argIdx) = CallerNode_pNH3XXoN("__using.a"_fu, s_Target(t), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(args[argIdx]) } }, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string);
                continue;
            };
            if (i)
                fail_jI4Vez2o((("Bad conversion chain, non-leading nullary: `"_fu + GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

            if (args[argIdx])
                fail_jI4Vez2o("Bad conversion chain, about to throw away an argnode."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            args.mutref(argIdx) = CallerNode_pNH3XXoN("__using.b"_fu, s_Target(t), fu_VEC<s_SolvedNode>{}, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string);
        };
    };
    const int REST_START = findRestStart_JOpIdePk(EXT_nkaMKocC(target, module, _scope, ctx));
    if (REST_START < args.size())
    {
        fu_VEC<s_SolvedNode> rest {};
        rest.resize((args.size() - REST_START));
        for (int i = args.size(); i-- > REST_START; )
        {
            std::swap(rest.mutref((i - REST_START)), args.mutref(i));
            if (i > REST_START)
                args.splice(i, 1);
            else
                args.mutref(i) = createArrlit_mEJbCs08(fu_VEC<s_SolvedNode>(rest), (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);

        };
    };
    const bool isZeroInit = ((GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "type"_fu) && !args.size());
    if (!isZeroInit)
    {
        fu_VEC<s_Argument> host_args { EXT_nkaMKocC(target, module, _scope, ctx).args };
        args.resize(host_args.size());
        for (int i = 0; i < args.size(); i++)
        {
            if (!args[i])
            {
                const s_Argument& host_arg = host_args[i];
                args.mutref(i) = (host_arg.dEfault ? SolvedNode_deepClone_v6ZdCY8z(s_SolvedNodeData(SolvedNodeData_CoW62h8S(host_arg.dEfault, module, _scope, ctx)), module, _scope, ctx, _current_fn_or_type) : ((void)((host_arg.flags & F_IMPLICIT) || fail_jI4Vez2o((((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + humanizeType_0qVczsOs(host_arg.type, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)), bindImplicitArg_h2SSOeKE(host_arg.name, host_arg.type, target, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string)));
                if (is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(args[i], module, _scope, ctx).type))
                {
                    args.shrink((i + 1));
                    return deadCall_XhGy0DD4(args, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes, _current_fn_or_type);
                };
            };
        };
    };
    s_Type type { GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).type };
    if (GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "field"_fu)
    {
        const s_Type* _0;
        type = add_refs_P9wIESfO((*(_0 = &(SolvedNodeData_CoW62h8S(only_aj4CwosS(args), module, _scope, ctx).type)) ? *_0 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), s_Type(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).type));
    }
    else if (GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "var"_fu)
    {
        if (GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).flags & F_INLINE)
            return SolvedNode_deepClone_v6ZdCY8z(s_SolvedNodeData(SolvedNodeData_CoW62h8S(SolvedNodeData_CoW62h8S(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).solved, module, _scope, ctx).items[LET_INIT], module, _scope, ctx)), module, _scope, ctx, _current_fn_or_type);

        if (!(type.lifetime.uni0n.size() == 1))
            fail_jI4Vez2o((("CallerNode: var "_fu + GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).name) + " type.lifetime.len != 1"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        if (GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).local_of && (GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).local_of != SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target.index))
        {
            s_Target _1 {};
            target = injectImplicitArg_2zyT8pYM(ClosureID_62RVWOkg(((_1 = tryParseClosureID_ZIuKfopV(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).name, MODID_yuJMA1l6(module))) ? _1 : s_Target(target))), s_Type(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).type), target, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _root_scope, _ss);
            const s_Type* _2;
            type = (*(_2 = &(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).type)) ? *_2 : fail_jI4Vez2o(("CallerNode: !type on var "_fu + GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).name), _here, ctx, _helpers, _helpers_data, _scope, module));
        };
    }
    else
    {
        if (args)
        {
            const fu_VEC<s_Argument>* _3;
            fu_VEC<s_Argument> host_args { (*(_3 = &(EXT_nkaMKocC(target, module, _scope, ctx).args)) ? *_3 : fail_jI4Vez2o(("CallerNode: no host args: "_fu + qWHAT_2UzOFrRY(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module)) };
            if (!((host_args.size() >= args.size())))
                fail_jI4Vez2o(("CallerNode: host_arg.len mismatch: "_fu + qWHAT_2UzOFrRY(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)), _here, ctx, _helpers, _helpers_data, _scope, module);

            for (int i0 = 0; i0 < args.size(); i0++)
            {
                const s_Argument& host_arg = host_args[i0];
                s_SolvedNode& arg = args.mutref(i0);
                if (SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).kind == "argid"_fu)
                    arg = only_aj4CwosS(SolvedNodeData_CoW62h8S(arg, module, _scope, ctx).items);

                const s_Type& expect = host_arg.type;
                s_Type retype = tryRetyping_F9oLMnz9(arg, expect, module, _scope, ctx, _here, _helpers, _helpers_data);
                if (isAssignableAsArgument_P9wIESfO(expect, retype))
                    MUT_Kfn68Cy8(arg, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = retype;

            };
        };
        if (GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).kind == "inline"_fu)
        {
            const s_ScopeMemo scope0 = Scope_snap_udUBsnHM(_scope, _helpers);
            s_ScopeSkipMemos ss0 { _ss };
            const s_HelpersData* _4;
            const int helpers0vars = (__extension__ (
            {
                const s_Helpers& h = last_vtdPb1VG(_helpers);
                _4 = &(_helpers_data[h.index]);
            (void)0;}), *_4).vars.size();
            fu_DEFER(
            {
                Scope_pop_iZmeNLp0(_scope, scope0, _helpers);
                _ss = ss0;
            });
            s_Template tEmplate { EXT_nkaMKocC(target, module, _scope, ctx).tEmplate };
            ScopeSkip_setup_KRToFCQq(s_Template(tEmplate), scope0, true, _root_scope, _ss, _here, ctx, _helpers, _helpers_data, _scope, module);
            _scope.items += fu_VEC<s_ScopeItem>(EXT_nkaMKocC(target, module, _scope, ctx).extra_items);
            s_Node n_fn { tEmplate.node };
            s_Node n_body { last_cTrO4UFq(n_fn.items) };
            s_Type ret_expect { GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).type };
            fu_VEC<s_Argument> host_args { EXT_nkaMKocC(target, module, _scope, ctx).args };
            fu_VEC<s_SolvedNode> result {};
            if (!(host_args.size() == args.size()))
                fail_jI4Vez2o("inline: arglen mismatch"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            result.resize((args.size() + 1));
            const int locals_start = (args ? GET_next_local_index_uPs0ZCBl(_current_fn, module, _scope, ctx) : int{});
            for (int i = 0; i < args.size(); i++)
            {
                s_Argument slot { host_args[i] };
                result.mutref(i) = createLet_tjE53zNU(fu_STR(slot.name), (slot.flags & ~(F_ARG | F_COMPOUND_ID)), args[i], module, _scope, ctx, _here, _helpers, _helpers_data, options, _notes, _current_fn_or_type, _current_fn, _root_scope, _ss);
                if (slot.flags & F_INLINE)
                    result.mutref(i) = createEmpty_5d3UxTMW("empty"_fu, t_void, s_Target{}, _here, _current_fn_or_type, module, _scope);

            };
            const s_HelpersData* _5;
            int _6 {};
            const s_SolvedNode s_body = (_6 = ((__extension__ (
            {
                const s_Helpers& h = last_vtdPb1VG(_helpers);
                _5 = &(_helpers_data[h.index]);
            (void)0;}), *_5).vars.size() - helpers0vars), solveBlock_XjVECJ2N(n_body, ret_expect, 0, short(short((HM_CanReturn | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL))))), kills, n_fn.value, int(_6), locals_start, _scope, _helpers, module, _current_fn, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string));
            const s_HelpersData* _7;
            if (!((__extension__ (
            {
                const s_Helpers& h = last_vtdPb1VG(_helpers);
                _7 = &(_helpers_data[h.index]);
            (void)0;}), *_7).vars.size() == helpers0vars))
                fail_jI4Vez2o("inline: _helpers.len != helpers0vars"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            if (!(SolvedNodeData_CoW62h8S(s_body, module, _scope, ctx).kind))
                fail_jI4Vez2o("inline: no s_body.kind"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            last_45v4fzZZ(result) = s_body;
            /*MOV*/ const s_SolvedNode block = createBlock_oWR0ZXGj(SolvedNodeData_CoW62h8S(s_body, module, _scope, ctx).type, fu_VEC<s_SolvedNode>(result), s_Target{}, s_Helpers{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);
            if (!(SolvedNodeData_CoW62h8S(block, module, _scope, ctx).kind))
                fail_jI4Vez2o("inline: no createBlock().kind"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            return /*NRVO*/ block;
        };
        if (is_ref_8e1ZyHy2(type))
            type.lifetime = Lifetime_test_0kwmjgvX(Lifetime_replaceArgsAtCallsite_mONu9g2O(GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data), args, module, _scope, ctx, _here, _helpers, _helpers_data), true, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);

    };
    /*MOV*/ const s_SolvedNode callsite = SolvedNode_0vKsswP4("call"_fu, type, 0, debug, args, target, 0, _here, _current_fn_or_type, module, _scope);
    if ((target.modid < 0) || (target.modid == module.modid))
    {
        fu::view<char> k = GET_mF5WytW3(target, _scope, module, ctx, _here, _helpers, _helpers_data).kind;
        if ((k == "fn"_fu) || (k == "type"_fu))
        {
            EXT_mut_chviOJ9J(target, module, _scope).callsites += s_SolvedNode(callsite);
            detectRecursion_EaK2Royu(target, _scope, module, ctx, _here, _helpers, _helpers_data, options, _notes);
        };
    };
    return /*NRVO*/ callsite;
}

static s_SolvedNode solveCall_LCJD25gg(const s_Node& node, const s_Target& target, const int kills, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> args = solveNodes_05VdsfAN(node.items, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    if (is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(if_last_45v4fzZZ(args), module, _scope, ctx).type))
        return deadCall_XhGy0DD4(args, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes, _current_fn_or_type);

    fu_STR id { node.value };
    if (!id)
    {
        if (!(target))
            fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    const int qualified = (node.flags & F_COMPOUND_ID);
    const s_Scope& misc_scope = (qualified ? dequalify_andGetScope_ZnLXONCn(id, _here, ctx, _helpers, _helpers_data, _scope, module) : (*(const s_Scope*)fu::NIL));
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    const s_Target callTargIdx = match__mutargs_KftiDKeJ(misc_scope, !qualified, id, args, reorder, conversions, node.flags, target, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string);
    return CallerNode_pNH3XXoN(node.value, s_Target(callTargIdx), fu_VEC<s_SolvedNode>(args), kills, reorder, conversions, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, t_string);
}

static s_SolvedNode evalTypeAnnot_Yu0YKv5q(const s_Node& node, const s_Map_ON0NfbFM& typeParams, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (node.kind == "call"_fu)
    {
        fu::view<s_Node> items = node.items;
        if (items.size() == 1)
        {
            if (node.value == "&"_fu)
            {
                s_Type _0 {};
                s_Type _1 {};
                return (_1 = (_0 = T_KPKdh0dT(0, node, typeParams, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string), add_ref_GR4OoJkm(static_cast<s_Type&&>(_0), Lifetime_temporary_8nlJDPX0(), _here, ctx)), solved_i1wpVdEM(node, static_cast<s_Type&&>(_1), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope));
            };
            if (node.value == "&mut"_fu)
            {
                s_Type _2 {};
                s_Type _3 {};
                return (_3 = (_2 = T_KPKdh0dT(0, node, typeParams, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string), add_mutref_GR4OoJkm(static_cast<s_Type&&>(_2), Lifetime_temporary_8nlJDPX0(), _here, ctx)), solved_i1wpVdEM(node, static_cast<s_Type&&>(_3), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope));
            };
            if (node.value == "[]"_fu)
            {
                s_Type _4 {};
                s_Type _5 {};
                return (_5 = (_4 = T_KPKdh0dT(0, node, typeParams, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string), createArray_8e1ZyHy2(static_cast<s_Type&&>(_4), _here, ctx)), solved_i1wpVdEM(node, static_cast<s_Type&&>(_5), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope));
            };
        };
        return solveCall_LCJD25gg(node, s_Target{}, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    }
    else if (node.kind == "typeparam"_fu)
        return solved_i1wpVdEM(node, evalTypeParam_I8fwE1R2(node.value, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope);
    else if ((node.kind == "arrlit"_fu) && (node.items.size() == 1))
    {
        s_Type _6 {};
        s_Type _7 {};
        return (_7 = (_6 = T_KPKdh0dT(0, node, typeParams, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string), createSlice_GR4OoJkm(static_cast<s_Type&&>(_6), Lifetime_temporary_8nlJDPX0(), _here, ctx)), solved_i1wpVdEM(node, static_cast<s_Type&&>(_7), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope));
    };
    fail_jI4Vez2o((x7E((("TODO evalTypeAnnot: "_fu + node.kind) + "["_fu), fu::i64dec(node.items.size())) + "]"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode solveLetLike_dontTouchScope_KNjSPnx4(const s_Node& node, const s_Type& specType, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Node& n_annot = node.items[LET_TYPE];
    s_SolvedNode _0 {};
    s_Type annot { (specType ? specType : (n_annot ? (_0 = evalTypeAnnot_Yu0YKv5q(n_annot, (*(const s_Map_ON0NfbFM*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string), SolvedNodeData_CoW62h8S(s_SolvedNode(_0), module, _scope, ctx)).type : (*(const s_Type*)fu::NIL))) };
    if (annot && (node.flags & F_REF))
        annot = add_mutref_GR4OoJkm(s_Type(annot), Lifetime_temporary_8nlJDPX0(), _here, ctx);

    const s_Node& n_init = node.items[LET_INIT];
    const s_SolvedNode init = (n_init ? solveNode_Rc6CHWoz(n_init, annot, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    return solveLetLike_dontTouchScope_4keirnkJ(node.value, int(node.flags), s_SolvedNode(init), s_Type(annot), specType, module, _scope, ctx, _here, _helpers, _helpers_data, options, _notes, _current_fn_or_type);
}

static s_SolvedNode solveMember_yADersub(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(node.kind == "let"_fu))
        fail_jI4Vez2o(("solveStructMembers_1: "_fu + node.kind), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (node.items[LET_INIT] && (node.items[LET_INIT].kind != "definit"_fu))
        fail_jI4Vez2o(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node.value) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return solveLetLike_dontTouchScope_KNjSPnx4(node, (*(const s_Type*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
}

                                #ifndef DEFt_map_4ajM1MI7
                                #define DEFt_map_4ajM1MI7
inline fu_VEC<s_SolvedNode> map_4ajM1MI7(fu::view<s_Node> a, int, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember_yADersub(a[i], _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_add_bmhzXgqs
                                #define DEFt_add_bmhzXgqs
inline bool add_bmhzXgqs(fu_VEC<int>& dest, const int item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest[i] != item)
            {
                dest.insert(i, int(item));
                return true;
            };
            return false;
        };
    };
    dest.push(int(item));
    return true;
}
                                #endif

                                #ifndef DEFt_add_TFYcR2KX
                                #define DEFt_add_TFYcR2KX
inline void add_TFYcR2KX(fu_VEC<int>& a, fu::view<int> b)
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
                a.insert(x, int(Y));
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

static s_SolvedNode __solveStruct_ftzItgDZ(const bool solve, const s_Node& node, const s_Target& into, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const fu_STR& origId = node.value;
    fu_STR _0 {};
    fu_STR name = (origId ? fu_STR(origId) : (_0 = fu_STR((SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target ? GET_mF5WytW3(SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target, _scope, module, ctx, _here, _helpers, _helpers_data).name : (*(const fu_STR*)fu::NIL)))) ? static_cast<fu_STR&&>(_0) : "Anon"_fu);
    s_Target out_target { into };
    s_Type out_type {};
    if (out_target)
        out_type = GET_mF5WytW3(out_target, _scope, module, ctx, _here, _helpers, _helpers_data).type;
    else
    {
        out_type = initStruct_kwC0rL39(name, node.flags, SELF_TEST, module);
        out_target = Scope_Typedef_Q7red49x(_scope, origId, out_type, node.flags, name, SS_LAZY, module);
        EXT_mut_chviOJ9J(out_target, module, _scope).tEmplate = createTemplate_zV3NNgIx(node, _current_fn, _scope, _helpers, _ss);
    };
    if (!solve)
        return createEmpty_5d3UxTMW("empty"_fu, out_type, out_target, _here, _current_fn_or_type, module, _scope);

    const s_Target current_fn_or_type0 { _current_fn_or_type };
    fu_DEFER(_current_fn_or_type = current_fn_or_type0);
    _current_fn_or_type = out_target;
    GET_mut_Y5AuyJLM(out_target, _scope, module).status |= SS_DID_START;
    const int helpers0 = _helpers.size();
    const int helpers_data0 = _helpers_data.size();
    fu_DEFER(
    {
        _helpers.shrink(helpers0);
        _helpers_data.shrink(helpers_data0);
    });
    push_TahmTbsf(s_HelpersData { s_Target((out_target ? out_target : fail_jI4Vez2o((("solveStruct: no out_target: `"_fu + origId) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module))), fu_STR{}, short(HM_Struct), 0, 0, 0, s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} }, _helpers, _helpers_data);
    fu_VEC<s_Target> structConverts {};
    fu_VEC<int> structImports {};
    int flat_cnt {};
    bool all_triv = true;
    fu_VEC<s_SolvedNode> members = map_4ajM1MI7(node.items, 0, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    {
        fu_VEC<s_ScopeItem>& innerScope = lookupStruct_mut_r6N0n0Dx(out_type.vtype.canon, module).items;
        if (!innerScope && members)
        {
            fu_VEC<s_Argument> args = fu_VEC<s_Argument> { fu::slate<1, s_Argument> { s_Argument { "this"_fu, fu_STR{}, despeculateStruct_sClxAUhz(s_Type(out_type)), s_SolvedNode{}, 0, s_BitSet{}, s_ArgWrite{} } } };
            for (int i = 0; i < members.size(); i++)
            {
                const fu_STR& id = node.items[i].value;
                const s_Target target = Scope_create_qoDjvL3b(_scope, "field"_fu, (id ? id : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), (*(const s_Type*)fu::NIL), F_PUB, s_SolvedNode{}, 0, 0u, bool{}, module);
                s_Extended& ext = EXT_mut_chviOJ9J(target, module, _scope);
                ext.args = args;
                ext.min = 1;
                ext.max = 1;
                Scope_set_ebsiWNpD(innerScope, id, target, false);
            };
            _field_items += innerScope;
        };
        if (!(innerScope.size() == members.size()))
            fail_jI4Vez2o((((x7E((x7E((x7E("solveStructMembers_3: field lens mismatch: "_fu, fu::i64dec(innerScope.size())) + " vs "_fu), fu::i64dec(members.size())) + "/"_fu), fu::i64dec(node.items.size())) + ": `struct "_fu) + name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        for (int i = 0; i < innerScope.size(); i++)
        {
            const s_ScopeItem& item = innerScope[i];
            const s_SolvedNode& member = members[i];
            if (!(item.id == SolvedNodeData_CoW62h8S(member, module, _scope, ctx).value))
                fail_jI4Vez2o("solveStructMembers_4: field id mismatch."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            s_Overload& field = GET_mut_Y5AuyJLM(target_Do3V6d7x(item), _scope, module);
            field.type = SolvedNodeData_CoW62h8S(member, module, _scope, ctx).type;
            int _1 {};
            flat_cnt += ((_1 = int(tryLookupStruct_lcHUdEZy(SolvedNodeData_CoW62h8S(member, module, _scope, ctx).type, module, ctx).flat_cnt)) ? _1 : 1);
            if (all_triv)
                all_triv = is_trivial_lcHUdEZy(SolvedNodeData_CoW62h8S(member, module, _scope, ctx).type, module, ctx);

            if (SolvedNodeData_CoW62h8S(member, module, _scope, ctx).flags & F_USING)
            {
                structConverts.push(target_Do3V6d7x(item));
                if (field.type.vtype.modid != module.modid)
                    add_bmhzXgqs(structImports, field.type.vtype.modid);

                add_TFYcR2KX(structImports, lookupTypeImports_lcHUdEZy(field.type, module, ctx));
            };
        };
    };

    {
        bool CHANGE = false;
        int commonQuals = -1;
        for (int i = 0; i < members.size(); i++)
            commonQuals &= SolvedNodeData_CoW62h8S(members[i], module, _scope, ctx).type.vtype.quals;

        const int quals0 = out_type.vtype.quals;
        const int quals1 = (out_type.vtype.quals &= commonQuals);
        if (!(CHANGE))
            CHANGE = (quals0 != quals1);


        {
            s_Struct& s = lookupStruct_mut_r6N0n0Dx(out_type.vtype.canon, module);
            s.target = (out_target ? out_target : fail_jI4Vez2o("No struct/out_target."_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
            s.converts = structConverts;
            s.imports = structImports;
            const int flat0 = s.flat_cnt;
            const bool triv0 = s.all_triv;
            s.flat_cnt = flat_cnt;
            s.all_triv = all_triv;
            if (!(CHANGE))
                CHANGE = ((flat0 != flat_cnt) || (triv0 != all_triv));

            if (!(GET_mF5WytW3(s.target, _scope, module, ctx, _here, _helpers, _helpers_data).status & SS_DID_START))
                fail_jI4Vez2o("Setting stuff but missing SS_DID_START."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        const int max = members.size();
        int min = 0;
        fu_VEC<s_Argument> args {};
        for (int i_1 = 0; i_1 < members.size(); i_1++)
        {
            const s_SolvedNode& member = members[i_1];
            const fu_STR* _2;
            const s_Type* _3;
            s_Argument arg = s_Argument { fu_STR((*(_2 = &(SolvedNodeData_CoW62h8S(member, module, _scope, ctx).value)) ? *_2 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module))), fu_STR{}, s_Type((*(_3 = &(SolvedNodeData_CoW62h8S(member, module, _scope, ctx).type)) ? *_3 : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module))), s_SolvedNode(SolvedNodeData_CoW62h8S(member, module, _scope, ctx).items[LET_INIT]), (SolvedNodeData_CoW62h8S(member, module, _scope, ctx).flags & F_MUSTNAME), s_BitSet{}, s_ArgWrite{} };
            if (!arg.dEfault)
                min++;

            args.push(s_Argument(arg));
        };
        if (max && !min)
            min++;

        s_Extended& ext = EXT_mut_chviOJ9J(out_target, module, _scope);
        ext.min = min;
        ext.max = max;
        ext.args = args;
        fu_VEC<s_SolvedNode> mustUpdate { (CHANGE ? ext.callsites : (*(const fu_VEC<s_SolvedNode>*)fu::NIL)) };
        s_Overload& overload = GET_mut_Y5AuyJLM(out_target, _scope, module);
        overload.type = out_type;
        if (mustUpdate)
            overload.status |= SS_UPDATED;

    };
    lazySolveEnd_f3YAMLi9(out_target, _scope, module, ctx, _here, _helpers, _helpers_data, options, _notes, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, shortModuleName, _field_items, t_string);
    return s_SolvedNode{};
}

static s_SolvedNode uPrepStruct_pNrUnFGR(const s_Node& node, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    return __solveStruct_ftzItgDZ(false, node, s_Target{}, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _current_fn_or_type, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
}

static s_SolvedNode unorderedPrep_A_4Hp7obiC(const s_Node& node, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_HelpersData>& _helpers_data, s_Map_nrIRbWMi& _specs, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu::view<char> k = node.kind;
    if (k == "fn"_fu)
        return uPrepFn_A_kn7gt1BX(node, _current_fn, module, _scope, ctx, _helpers, _ss, _root_scope, _here, _current_fn_or_type);

    if (k == "struct"_fu)
        return uPrepStruct_pNrUnFGR(node, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _ss, _current_fn_or_type, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    fail_jI4Vez2o(("TODO: "_fu + k), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void uPrepFn_B_DgYieIH4(const s_Target& target, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    s_Template& tEmplate = EXT_mut_chviOJ9J(target, module, _scope).tEmplate;
    if (tEmplate.scope_memo)
        tEmplate.scope_memo = Scope_snap_udUBsnHM(_scope, _helpers);

}

static void unorderedPrep_B_ll3gBIJp(const s_Node& node, const s_Target& into, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    fu::view<char> k = node.kind;
    if (k == "fn"_fu)
        uPrepFn_B_DgYieIH4(into, module, _scope, _helpers);

}

static fu_VEC<s_SolvedNode> solveNodes_05VdsfAN(fu::view<s_Node> nodes, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const int kills, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_SolvedNode> result {};
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_Node& node = nodes[i];
        if (!node)
            continue;

        const int unorderedClass = unorderedClassify_vPxGUxrI(node.kind);
        if (!unorderedClass)
        {
            HERE_GPjTSEGQ(node.token, _here);
            const bool last = (i == (nodes.size() - 1));
            const s_Type& type = ((last && use_type_last) ? type_last : type_all);
            const int kills_1 = (last ? kills : (*(const int*)fu::NIL));
            const s_SolvedNode solved = solveNode_Rc6CHWoz(node, type, kills_1, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
            result += s_SolvedNode(solved);
            if (is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(solved, module, _scope, ctx).type))
            {
                if (i < (nodes.size() - 1))
                    makeNote_hw6XKcvD(N_DeadCode, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

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
            const s_Node& node_1 = (*(_0 = &(nodes[i_1])) ? *_0 : fail_jI4Vez2o("solveNodes, prep-a: falsy node"_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
            if (unorderedClassify_vPxGUxrI(node_1.kind) != unorderedClass)
            {
                i1 = i_1;
                break;
            };
            HERE_GPjTSEGQ(node_1.token, _here);
            result += unorderedPrep_A_4Hp7obiC(node_1, _current_fn, module, _scope, ctx, _helpers, _ss, _root_scope, _here, _current_fn_or_type, _helpers_data, _specs, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
        };
        if (!(i1 > i0))
            fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

        i = (i1 - 1);
        for (int i_2 = i0; i_2 < i1; i_2++)
        {
            const s_Node* _1;
            const s_Node& node_1 = (*(_1 = &(nodes[i_2])) ? *_1 : fail_jI4Vez2o("solveNodes, prep-b: falsy node"_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
            HERE_GPjTSEGQ(node_1.token, _here);
            unorderedPrep_B_ll3gBIJp(node_1, SolvedNodeData_CoW62h8S(result[(i_2 + offset)], module, _scope, ctx).target, module, _scope, _helpers);
        };
        bool repeat = true;
        while (repeat)
        {
            repeat = false;
            for (int i_3 = i0; i_3 < i1; i_3++)
            {
                const s_Node* _2;
                const s_Node& node_1 = (*(_2 = &(nodes[i_3])) ? *_2 : fail_jI4Vez2o("solveNodes, solve: falsy node"_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
                HERE_GPjTSEGQ(node_1.token, _here);
                const s_Target& into = SolvedNodeData_CoW62h8S(result[(i_3 + offset)], module, _scope, ctx).target;
                if (lazySolveStart_gaykLo4Y(s_Target(into), s_Overload(GET_mF5WytW3(into, _scope, module, ctx, _here, _helpers, _helpers_data)), _scope, module, _here, ctx, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string))
                    repeat = true;

            };
        };
    };
    return /*NRVO*/ result;
}

static s_SolvedNode solveRoot_qbsockn7(const s_Node& node, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> items = solveNodes_05VdsfAN(node.items, t_void, (*(const s_Type*)fu::NIL), bool{}, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    if (!is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(last_6mv8AnDF(items), module, _scope, ctx).type))
    {
        /*MOV*/ const s_SolvedNode root = solved_i1wpVdEM(node, t_void, items, s_Target{}, _here, _current_fn_or_type, module, _scope);
        runAllPasses_bAzzgPpV(root, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
        return /*NRVO*/ root;
    };
    _here = SolvedNodeData_CoW62h8S(last_6mv8AnDF(items), module, _scope, ctx).token;
    fail_jI4Vez2o("Noreturn during static init: this program will never finish booting."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_HM_CanBreak
                                #define DEF_HM_CanBreak
inline constexpr short HM_CanBreak = short((short(1) << short(0)));
                                #endif

                                #ifndef DEFt_only_zloPVM3y
                                #define DEFt_only_zloPVM3y
inline const s_Node& only_zloPVM3y(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_SolvedNode solveArgID_Zutr1ZSo(const s_Node& node, const s_Type& type, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_SolvedNode expr = solveNode_Rc6CHWoz(only_zloPVM3y(node.items), type, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    return solved_i1wpVdEM(node, SolvedNodeData_CoW62h8S(expr, module, _scope, ctx).type, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveArrlit_66zobzwU(const s_Node& node, const s_Type& type, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Scope& _scope, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    s_Type itemType = (type ? tryClear_sliceable_8e1ZyHy2(type) : s_Type{});
    if (!itemType && isStruct_C02JG8Ye(type))
        return solveCall_LCJD25gg(node, s_Target(lookupStruct_5FUAmY77(type, module, ctx).target), 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    fu_VEC<s_SolvedNode> args = solveNodes_05VdsfAN(node.items, itemType, (*(const s_Type*)fu::NIL), bool{}, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    if (is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(if_last_45v4fzZZ(args), module, _scope, ctx).type))
    {
        makeNote_hw6XKcvD(N_DeadArrlit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return createBlock_oWR0ZXGj(t_never, fu_VEC<s_SolvedNode>(args), s_Target{}, s_Helpers{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);
    };
    if (!(node.flags & F_NAMED_ARGS))
        return createArrlit_mEJbCs08(fu_VEC<s_SolvedNode>(args), itemType, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);

    fail_jI4Vez2o("TODO: solveArrlit: tryMatch by [ argnames: ... ] without function name."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode popAndOr_r5WMKmXn(s_SolvedNode& node, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_Target& _current_fn_or_type, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const int N = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items.size();
    /*MOV*/ const s_SolvedNode pop { MUT_Kfn68Cy8(node, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).items[(N - 1)] };
    if (N > 2)
        MUT_Kfn68Cy8(node, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).items.pop();
    else
    {
        const s_SolvedNode& head = SolvedNodeData_CoW62h8S(node, module, _scope, ctx).items[0];
        node = head;
    };
    return /*NRVO*/ pop;
}

static s_SolvedNode if_A_and_NEVER_then_B_else_C_ZW6cIfnP(const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, int& _notes, s_SolvedNode& cond, const s_Target& _current_fn_or_type)
{
    makeNote_hw6XKcvD(N_DeadIfCons, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    return popAndOr_r5WMKmXn(cond, module, _scope, ctx, _current_fn_or_type, _here, _helpers, _helpers_data);
}

static s_SolvedNode solveIf_10CN28lc(const s_Node& node, s_Type&& type, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ s_SolvedNode cond = solveNode_Rc6CHWoz(node.items[0], t_bool, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    if (is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(cond, module, _scope, ctx).type))
    {
        makeNote_hw6XKcvD(N_DeadIfCond, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return /*NRVO*/ cond;
    };
    const s_SolvedNode cons = (((SolvedNodeData_CoW62h8S(cond, module, _scope, ctx).kind == "and"_fu) && is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(last_6mv8AnDF(SolvedNodeData_CoW62h8S(cond, module, _scope, ctx).items), module, _scope, ctx).type)) ? if_A_and_NEVER_then_B_else_C_ZW6cIfnP(options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes, cond, _current_fn_or_type) : solveBlock_XjVECJ2N(node.items[1], type, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, 0, _scope, _helpers, module, _current_fn, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string));
    const s_SolvedNode alt = solveBlock_XjVECJ2N(node.items[2], s_Type((type ? type : SolvedNodeData_CoW62h8S(cons, module, _scope, ctx).type)), 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, 0, _scope, _helpers, module, _current_fn, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    if (!is_void_8e1ZyHy2(type))
        type = superType_pUSAdg6S("if/else: "_fu, SolvedNodeData_CoW62h8S(cons, module, _scope, ctx).type, SolvedNodeData_CoW62h8S(alt, module, _scope, ctx).type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data);

    if (is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(cons, module, _scope, ctx).type) && is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(alt, module, _scope, ctx).type))
        type = t_never;

    return solved_i1wpVdEM(node, (type ? type : fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(cond), s_SolvedNode(cons), s_SolvedNode(alt) } }, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveOr_OdUvkn9d(const s_Node& node, s_Type&& type, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_SolvedNode> items = solveNodes_05VdsfAN(node.items, (is_void_8e1ZyHy2(type) ? t_bool : type), type, true, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    if (items.size() < 2)
        return s_SolvedNode(only_aj4CwosS(items));

    if (is_void_8e1ZyHy2(type))
        type = t_bool;

    if (!(type == t_bool))
    {
        s_Type sumType {};
        bool hasNever = false;
        for (int i = items.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items[i];
            if (is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(item, module, _scope, ctx).type))
            {
                hasNever = true;
                continue;
            };
            const s_SolvedNode& andLast = (hasNever && (SolvedNodeData_CoW62h8S(item, module, _scope, ctx).kind == "and"_fu) && SolvedNodeData_CoW62h8S(item, module, _scope, ctx).items ? SolvedNodeData_CoW62h8S(item, module, _scope, ctx).items[(SolvedNodeData_CoW62h8S(item, module, _scope, ctx).items.size() - 1)] : (*(const s_SolvedNode*)fu::NIL));
            const s_Type& itemType = ((andLast && !is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(andLast, module, _scope, ctx).type)) ? (MUT_Kfn68Cy8(item, module, _current_fn_or_type, _here, ctx, _helpers, _helpers_data, _scope).type = SolvedNodeData_CoW62h8S(andLast, module, _scope, ctx).type) : SolvedNodeData_CoW62h8S(item, module, _scope, ctx).type);
            if (sumType)
            {
                sumType = type_trySuper_P9wIESfO(sumType, itemType);
                if (!sumType)
                    break;

            }
            else
                sumType = itemType;

        };
        if (!sumType)
            type = t_bool;
        else
            type = sumType;

    };
    return solved_i1wpVdEM(node, type, items, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveAnd_Am05yx7C(const s_Node& node, s_Type&& type, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> items = solveNodes_05VdsfAN(node.items, (is_void_8e1ZyHy2(type) ? t_bool : type), type, true, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    if (items.size() < 2)
        return s_SolvedNode(only_aj4CwosS(items));

    if (is_void_8e1ZyHy2(type))
        type = t_bool;

    if (!(type == t_bool))
    {
        s_Type sumType {};
        for (int i = items.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items[i];
            if (is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(item, module, _scope, ctx).type))
                continue;

            if (sumType)
            {
                sumType = type_trySuper_P9wIESfO(sumType, SolvedNodeData_CoW62h8S(item, module, _scope, ctx).type);
                if (!is_ref_8e1ZyHy2(sumType))
                    break;

            }
            else
            {
                type = SolvedNodeData_CoW62h8S(item, module, _scope, ctx).type;
                sumType = SolvedNodeData_CoW62h8S(item, module, _scope, ctx).type;
            };
        };
        if (!is_ref_8e1ZyHy2(sumType))
        {
            if (is_ref_8e1ZyHy2(type))
            {
                if (CANNOT_definit_mutrefs)
                    type = clear_mutref_8e1ZyHy2(s_Type(type));

                type.lifetime = Lifetime_makeShared_knS7ptQD(type.lifetime);
            };
        }
        else
            type = sumType;

    };
    return solved_i1wpVdEM(node, type, items, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

                                #ifndef DEF_HM_Anon
                                #define DEF_HM_Anon
inline constexpr short HM_Anon = short((short(1) << short(2)));
                                #endif

static s_SolvedNode solveLetStatement_MiFzqSnt(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(node.kind == "let"_fu))
        fail_jI4Vez2o((("Expected a `let` statement, got: `"_fu + node.kind) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return solveNode_Rc6CHWoz(node, t_void, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
}

static s_SolvedNode solveLoop_C0DMIMzU(const s_Node& node, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, s_Module& module, const s_Context& ctx, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_Target& _current_fn_or_type, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_ScopeMemo scope0 = Scope_snap_udUBsnHM(_scope, _helpers);
    fu_DEFER(Scope_pop_iZmeNLp0(_scope, scope0, _helpers));
    const int brk_idx = _helpers.size();
    push_TahmTbsf(s_HelpersData { s_Target{}, fu_STR(node.value), short((HM_Anon | HM_CanBreak)), int(SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target.index), 0, GET_next_local_index_uPs0ZCBl(_current_fn, module, _scope, ctx), s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} }, _helpers, _helpers_data);
    const s_Node& n_init = node.items[LOOP_INIT];
    const s_Node& n_pre_cond = node.items[LOOP_COND];
    const s_Node& n_body = node.items[LOOP_BODY];
    const s_Node& n_post_cond = node.items[LOOP_POST_COND];
    const s_Node& n_post = node.items[LOOP_POST];
    /*MOV*/ const s_SolvedNode init = (n_init ? solveLetStatement_MiFzqSnt(n_init, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    if (is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(init, module, _scope, ctx).type))
    {
        makeNote_hw6XKcvD(N_DeadLoopInit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return /*NRVO*/ init;
    };
    const s_SolvedNode pre_cond = (n_pre_cond ? solveNode_Rc6CHWoz(n_pre_cond, t_bool, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    const s_SolvedNode body = (n_body ? solveBlock_XjVECJ2N(n_body, t_void, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, 0, _scope, _helpers, module, _current_fn, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    const s_SolvedNode post_cond = (n_post_cond ? solveNode_Rc6CHWoz(n_post_cond, t_bool, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    const s_SolvedNode post = (n_post ? solveNode_Rc6CHWoz(n_post, t_void, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    const s_Helpers& h = _helpers[brk_idx];
    const short label_used = short((_helpers_data[h.index].mask & HM_LabelUsed));
    const s_Type& type = ((!pre_cond && !post_cond && !label_used) ? t_never : t_void);
    return solved_i1wpVdEM(node, type, fu_VEC<s_SolvedNode> { fu::slate<5, s_SolvedNode> { s_SolvedNode(init), s_SolvedNode(pre_cond), s_SolvedNode(body), s_SolvedNode(post_cond), s_SolvedNode(post) } }, (label_used ? _helpers_data[h.index].target : (*(const s_Target*)fu::NIL)), _here, _current_fn_or_type, module, _scope);
}

                                #ifndef DEF_F_SINGLE_STMT
                                #define DEF_F_SINGLE_STMT
inline constexpr int F_SINGLE_STMT = (1 << 31);
                                #endif

static int Scope_lookupReturn_XFsR533v(const fu_STR& id, const bool lambdaOK, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Scope& _scope, const s_Module& module)
{

    {
        fu::view<s_ScopeSkip> ss = _ss.helpers;
        int ssi = (ss.size() - 1);
        int ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
        for (/*MOV*/ int i = _helpers.size(); i-- > 0; )
        {
            if ((ssi >= 0) && (i == ssN))
            {
                i = ss[ssi--].start;
                ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
                continue;
            };
            const s_Helpers& item = _helpers[i];
            const s_HelpersData* _0;
            if (!short(((__extension__ (
            {
                const s_Helpers& h = item;
                _0 = &(_helpers_data[h.index]);
            (void)0;}), *_0).mask & HM_CanReturn)))
                continue;

            const s_HelpersData* _1;
            if (short(((__extension__ (
            {
                const s_Helpers& h = item;
                _1 = &(_helpers_data[h.index]);
            (void)0;}), *_1).mask & HM_Lambda)) && !lambdaOK)
                continue;

            const s_HelpersData* _2;
            if (id && ((__extension__ (
            {
                const s_Helpers& h = item;
                _2 = &(_helpers_data[h.index]);
            (void)0;}), *_2).id != id))
                continue;

            return /*NRVO*/ i;
        };
    };
    fail_jI4Vez2o((("No return `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static int Scope_lookupLabel_7bR7akae(const fu_STR& id, const bool cont, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Scope& _scope, const s_Module& module)
{
    int CONTINUE_BELOW {};

    {
        fu::view<s_ScopeSkip> ss = _ss.helpers;
        int ssi = (ss.size() - 1);
        int ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
        for (/*MOV*/ int i = _helpers.size(); i-- > 0; )
        {
            if ((ssi >= 0) && (i == ssN))
            {
                i = ss[ssi--].start;
                ssN = ((ssi >= 0) ? (ss[ssi].end - 1) : int{});
                continue;
            };
            const s_Helpers& item = _helpers[i];
            if (i < (CONTINUE_BELOW - 1))
                i++;

            const s_HelpersData* _0;
            if (!short(((__extension__ (
            {
                const s_Helpers& h = item;
                _0 = &(_helpers_data[h.index]);
            (void)0;}), *_0).mask & HM_CanBreak)))
            {
                if (!CONTINUE_BELOW)
                {
                    const s_HelpersData* _1;
                    if (id || !short(((__extension__ (
                    {
                        const s_Helpers& h = item;
                        _1 = &(_helpers_data[h.index]);
                    (void)0;}), *_1).mask & HM_Lambda)))
                        continue;

                    if (!cont)
                    {
                        CONTINUE_BELOW = i;
                        continue;
                    };
                };
                return /*NRVO*/ i;
            };
            if (!CONTINUE_BELOW)
            {
                const s_HelpersData* _2;
                const s_HelpersData* _3;
                if (!(id ? ((__extension__ (
                {
                    const s_Helpers& h = item;
                    _2 = &(_helpers_data[h.index]);
                (void)0;}), *_2).id == id) : (short(((__extension__ (
                {
                    const s_Helpers& h = item;
                    _3 = &(_helpers_data[h.index]);
                (void)0;}), *_3).mask & HM_Anon)) != short(0))))
                    continue;

                if (cont)
                {
                    i++;
                    if (!(i < _helpers.size()))
                        fail_jI4Vez2o((("Cannot continue to label `"_fu + id) + "` from here, did you mean to `break`?"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

                };
            };
            return /*NRVO*/ i;
        };
    };
    fail_jI4Vez2o((("No label `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_Helpers& h_jkRzvSG3(fu_VEC<s_Helpers>& _helpers, const int helpers_idx)
{
    return _helpers.mutref(helpers_idx);
}

                                #ifndef DEFt_only_TPODJjhN
                                #define DEFt_only_TPODJjhN
inline const s_Node& only_TPODJjhN(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static fu_STR ANON_5l9HvNfc(int& _anons)
{
    return x7E("0"_fu, fu::i64dec(_anons++));
}

static s_Target Scope_addLabel_95c1fJPK(const fu_STR& id, const int local_of, s_Scope& _scope, int& _anons, const s_Module& module)
{
    return Scope_create_qoDjvL3b(_scope, "label"_fu, (id ? fu_STR(id) : ANON_5l9HvNfc(_anons)), s_Type{}, F_SHADOW, s_SolvedNode{}, local_of, 0u, true, module);
}

static s_SolvedNode solveJump_A9Us8PD8(int helpers_idx, fu::view<s_Node> items, const int kills, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_HelpersData* _0;
    const s_Type* _1;
    const s_HelpersData* _2;
    const s_Type& type = (*(_1 = &((__extension__ (
    {
        const s_Helpers& h = h_jkRzvSG3(_helpers, helpers_idx);
        _0 = &(_helpers_data[h.index]);
    (void)0;}), *_0).ret_actual)) ? *_1 : (__extension__ (
    {
        const s_Helpers& h = h_jkRzvSG3(_helpers, helpers_idx);
        _2 = &(_helpers_data[h.index]);
    (void)0;}), *_2).ret_expect);
    /*MOV*/ const s_SolvedNode expr = (items ? solveNode_Rc6CHWoz(only_TPODJjhN(items), s_Type(type), (helpers_idx + 1), _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    if (is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(expr, module, _scope, ctx).type))
        return /*NRVO*/ expr;

    const bool redundant = (kills == (helpers_idx + 1));
    if (redundant && is_void_8e1ZyHy2(SolvedNodeData_CoW62h8S(expr, module, _scope, ctx).type))
        return /*NRVO*/ expr;

    const s_HelpersData* _3;
    while ((__extension__ (
    {
        const s_Helpers& h = h_jkRzvSG3(_helpers, helpers_idx);
        _3 = &(_helpers_data[h.index]);
    (void)0;}), *_3).kills)
    {
        const s_HelpersData* _4;
        helpers_idx = ((__extension__ (
        {
            const s_Helpers& h = h_jkRzvSG3(_helpers, helpers_idx);
            _4 = &(_helpers_data[h.index]);
        (void)0;}), *_4).kills - 1);
    };
    const s_HelpersData* _5;
    if (redundant && !short(((__extension__ (
    {
        const s_Helpers& h = h_jkRzvSG3(_helpers, helpers_idx);
        _5 = &(_helpers_data[h.index]);
    (void)0;}), *_5).mask & HM_Function)))
        return /*NRVO*/ expr;

    const s_Target* _6;
    const s_Target target { (__extension__ (
    {
        s_HelpersData* _7;
        /*RRET*/ s_Target& a = (__extension__ (
        {
            const s_Helpers& h = h_jkRzvSG3(_helpers, helpers_idx);
            _7 = &(_helpers_data.mutref(h.index));
        (void)0;}), *_7).target;
        const s_HelpersData* _8;
        const fu_STR* _9;
        const s_HelpersData* _10;
        _6 = &((a ? a : (a = (_9 = &((__extension__ (
        {
            const s_Helpers& h = h_jkRzvSG3(_helpers, helpers_idx);
            _8 = &(_helpers_data[h.index]);
        (void)0;}), *_8).id), Scope_addLabel_95c1fJPK(*_9, (__extension__ (
        {
            const s_Helpers& h = h_jkRzvSG3(_helpers, helpers_idx);
            _10 = &(_helpers_data[h.index]);
        (void)0;}), *_10).local_of, _scope, _anons, module)))));
    (void)0;}), *_6) };
    s_HelpersData* _11;
    (__extension__ (
    {
        const s_Helpers& h = h_jkRzvSG3(_helpers, helpers_idx);
        _11 = &(_helpers_data.mutref(h.index));
    (void)0;}), *_11).mask |= HM_LabelUsed;
    if (!items)
    {
        const s_Helpers* _12;
        (_12 = &(h_jkRzvSG3(_helpers, helpers_idx)), reportReturnType_bUZECnF3(*_12, t_void, _helpers_data, _here, ctx, _helpers, _scope, module));
        return createJump_pn5s5Yk7(target, s_SolvedNode{}, h_jkRzvSG3(_helpers, helpers_idx), _here, _current_fn_or_type, module, _scope);
    };
    /*MOV*/ const s_SolvedNode jump = createJump_pn5s5Yk7(target, expr, h_jkRzvSG3(_helpers, helpers_idx), _here, _current_fn_or_type, module, _scope);
    s_HelpersData* _13;
    (__extension__ (
    {
        const s_Helpers& h = h_jkRzvSG3(_helpers, helpers_idx);
        _13 = &(_helpers_data.mutref(h.index));
    (void)0;}), *_13).returns += s_SolvedNode(jump);
    return /*NRVO*/ jump;
}

static s_SolvedNode solveJump_4MqKNG7p(const s_Node& node, const int kills, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const int helpers_idx = ((node.kind == "return"_fu) ? Scope_lookupReturn_XFsR533v(node.value, !!(node.flags & F_SINGLE_STMT), _helpers, _ss, _helpers_data, _here, ctx, _scope, module) : Scope_lookupLabel_7bR7akae(node.value, (node.kind == "continue"_fu), _helpers, _ss, _helpers_data, _here, ctx, _scope, module));
    return solveJump_A9Us8PD8(int(helpers_idx), node.items, kills, _helpers, _helpers_data, _here, module, _scope, ctx, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
}

static s_SolvedNode solveInt_LnH99MJC(const s_Node& node, const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fn_or_type)
{
    return solved_i1wpVdEM(node, solveInt_XDJiB81k(node.value, type, _here, ctx, _helpers, _helpers_data, _scope, module), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveNum_zrASxQi3(const s_Node& node, const s_Type& type, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return solved_i1wpVdEM(node, solveNum_bdhF9xlV(node.value, type), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createDefinit_apy7zBja(s_Type&& type, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    if (is_ref_8e1ZyHy2(type))
        type.lifetime = Lifetime_static_8nlJDPX0();

    if (is_integral_dtjgvDEj(type))
        return SolvedNode_0vKsswP4("int"_fu, type, 0, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope);

    if (is_floating_pt_dtjgvDEj(type))
        return SolvedNode_0vKsswP4("real"_fu, type, 0, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope);

    return SolvedNode_0vKsswP4("definit"_fu, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveStr_hoCLh6oU(const s_Node& node, const s_Type& t_string, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    if (!node.value)
        return createDefinit_apy7zBja(add_ref_GR4OoJkm(s_Type(t_string), Lifetime_temporary_8nlJDPX0(), _here, ctx), _here, _current_fn_or_type, module, _scope);

    return solved_i1wpVdEM(node, t_string, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveChar_nUiJnrf1(const s_Node& node, const s_TokenIdx& _here, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return solved_i1wpVdEM(node, t_byte, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDefinit_XZSWqXN1(const s_Type& type, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Target& _current_fn_or_type)
{
    s_Type _0 {};
    return createDefinit_apy7zBja(((_0 = trySolveDefinit_179NHdgE(type)) ? static_cast<s_Type&&>(_0) : fail_jI4Vez2o(("Cannot definit type: "_fu + humanizeType_0qVczsOs(type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module)), _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveImport_4fRbQ8Kt(const s_Node& node, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss, const s_Target& _current_fn_or_type)
{
    const s_Module& m = findModule_03WsO5qj(node.value, ctx, _here, _helpers, _helpers_data, _scope, module);
    Scope_import_ZV8i1o6M(m.modid, _scope, _ss, _here, ctx, _helpers, _helpers_data, module);
    return createEmpty_5d3UxTMW("empty"_fu, t_void, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDefer_pOVdbXdm(const s_Node& node, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_SolvedNode item = solveNode_Rc6CHWoz(only_zloPVM3y(node.items), t_void, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    return solved_i1wpVdEM(node, t_void, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(item) } }, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTryCatch_86YnZM8D(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(node.items.size() == 3))
        fail_jI4Vez2o(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    const s_ScopeMemo scope0 = Scope_snap_udUBsnHM(_scope, _helpers);
    const s_SolvedNode tRy = solveNode_Rc6CHWoz(node.items[0], t_void, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    Scope_pop_iZmeNLp0(_scope, scope0, _helpers);
    const s_ScopeMemo scope0_1 = Scope_snap_udUBsnHM(_scope, _helpers);
    const s_SolvedNode err = solveLetStatement_MiFzqSnt(node.items[1], _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    const s_SolvedNode cAtch = solveNode_Rc6CHWoz(node.items[2], t_void, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    Scope_pop_iZmeNLp0(_scope, scope0_1, _helpers);
    if (!((SolvedNodeData_CoW62h8S(err, module, _scope, ctx).kind == "let"_fu) && isAssignableAsArgument_P9wIESfO(SolvedNodeData_CoW62h8S(err, module, _scope, ctx).type, t_string)))
        fail_jI4Vez2o(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    const s_Type& type = ((is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(tRy, module, _scope, ctx).type) && is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(cAtch, module, _scope, ctx).type)) ? t_never : t_void);
    return solved_i1wpVdEM(node, type, fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(tRy), s_SolvedNode(err), s_SolvedNode(cAtch) } }, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTypedef_LnBM1CQd(const s_Node& node, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_SolvedNode annot = evalTypeAnnot_Yu0YKv5q(only_zloPVM3y(node.items), (*(const s_Map_ON0NfbFM*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    if (isStruct_C02JG8Ye(SolvedNodeData_CoW62h8S(annot, module, _scope, ctx).type))
        Scope_set_zS7wGzyw(_scope, node.value, lookupStruct_5FUAmY77(SolvedNodeData_CoW62h8S(annot, module, _scope, ctx).type, module, ctx).target, false);
    else
        Scope_Typedef_Q7red49x(_scope, node.value, s_Type(SolvedNodeData_CoW62h8S(annot, module, _scope, ctx).type), node.flags, (*(const fu_STR*)fu::NIL), 0u, module);

    return createEmpty_5d3UxTMW("empty"_fu, t_void, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTypeAssert_dFfhgOyi(const s_Node& node, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Node& left = node.items[0];
    const s_Node& right = node.items[1];
    s_SolvedNode _0 {};
    s_Type expect { (_0 = evalTypeAnnot_Yu0YKv5q(right, (*(const s_Map_ON0NfbFM*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string), SolvedNodeData_CoW62h8S(s_SolvedNode(_0), module, _scope, ctx)).type };
    /*MOV*/ const s_SolvedNode actual = solveNode_Rc6CHWoz(left, s_Type(expect), 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    checkAssignable_0veNrHd3(expect, SolvedNodeData_CoW62h8S(actual, module, _scope, ctx).type, "Type assertion failed"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);
    return /*NRVO*/ actual;
}

static s_SolvedNode solveTypeParam_PRSZZXUc(const s_Node& node, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss, const s_Target& _current_fn_or_type)
{
    return solved_i1wpVdEM(node, evalTypeParam_I8fwE1R2(node.value, (*(const s_Map_ON0NfbFM*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static void visitScope_23sY7ILY(fu::view<s_ScopeItem> items, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    int scope_iterator {};
    s_Target target {};
    bool shadows {};
    while (!shadow && (target = search_lONlZZIu(items, id, scope_iterator, _ss.items, shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
        result.unshift(s_Target(target));

}

                                #ifndef DEFt_each_6YudHfAO
                                #define DEFt_each_6YudHfAO
inline void each_6YudHfAO(fu::view<s_Struct> a, int, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Struct& sTruct = a[i];
        visitScope_23sY7ILY(sTruct.items, shadow, id, _ss, result);
    };
}
                                #endif

static void visitTypes_NUmq9LFM(const s_Module& module, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    each_6YudHfAO(module.out.types, 0, shadow, id, _ss, result);
}

                                #ifndef DEFt_each_6Ks6CCo4
                                #define DEFt_each_6Ks6CCo4
inline void each_6Ks6CCo4(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, int, const int start, const s_Context& ctx, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
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
            const int import = items[i_1];
            visitTypes_NUmq9LFM(ctx.modules[import], shadow, id, _ss, result);
        };
        i0 = ss.end;
    };
}
                                #endif

static s_SolvedNode solveAddrOfFn_vhsuQdid(const s_Node& node, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type)
{
    const fu_STR& id = node.value;
    const bool shadow = false;
    fu_VEC<s_Target> result {};
    visitScope_23sY7ILY(_scope.items, shadow, id, _ss, result);
    if (node.flags & F_ACCESS)
    {
        visitTypes_NUmq9LFM(module, shadow, id, _ss, result);
        each_6Ks6CCo4(_scope.imports, _ss.imports, 0, 0, ctx, shadow, id, _ss, result);
    };
    if (!(result))
        fail_jI4Vez2o((("No `fn "_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    s_Type type = s_Type { s_ValueType { 0, 0, packAddrOfFn_i4cXBxfC(result) }, s_Lifetime{} };
    return createEmpty_5d3UxTMW("empty"_fu, type, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDeclExpr_0zGMhVJS(const s_Node& node, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    return s_SolvedNode(only_aj4CwosS(solveNodes_05VdsfAN((fu::slate<1, s_Node> { s_Node(node) }), (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string)));
}

static void walk_pK1xOJ1D(s_Node& node, fu::view<char> placeholder, const s_ScopeItem& field)
{
    for (int i = 0; i < node.items.size(); i++)
        walk_pK1xOJ1D(node.items.mutref(i), placeholder, field);

    if (node.value == placeholder)
    {
        if ((node.items.size() == 1) && (node.kind == "call"_fu))
            node.value = field.id;
        else if (node.kind == "str"_fu)
            node.value = field.id;

    };
}

inline static s_Node astReplace_WBwrXQ1j(const s_Node& node, int, fu::view<char> placeholder, const s_ScopeItem& field)
{
    /*MOV*/ s_Node node_1 { node };
    walk_pK1xOJ1D(node_1, placeholder, field);
    return /*NRVO*/ node_1;
}

static s_SolvedNode solveForFieldsOf_ft8PHxCv(const s_Node& node, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu::view<char> placeholder = node.value;
    const s_Node& body_template = node.items[1];
    s_SolvedNode _0 {};
    const s_Type& fields_of = (_0 = evalTypeAnnot_Yu0YKv5q(node.items[0], (*(const s_Map_ON0NfbFM*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string), SolvedNodeData_CoW62h8S(s_SolvedNode(_0), module, _scope, ctx)).type;
    if (!(isStruct_C02JG8Ye(fields_of)))
        fail_jI4Vez2o((("[for fieldname]: This is not a struct: `"_fu + humanizeType_0qVczsOs(fields_of, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    fu::view<s_ScopeItem> fields = lookupStruct_5FUAmY77(fields_of, module, ctx).items;
    fu_VEC<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        if (GET_mF5WytW3(target_Do3V6d7x(field), _scope, module, ctx, _here, _helpers, _helpers_data).kind == "field"_fu)
            items_ast += astReplace_WBwrXQ1j(body_template, 0, placeholder, field);

    };
    fu_VEC<s_SolvedNode> items = solveNodes_05VdsfAN(items_ast, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    const s_Type& type = (is_never_8e1ZyHy2(SolvedNodeData_CoW62h8S(last_6mv8AnDF(items), module, _scope, ctx).type) ? t_never : t_void);
    return createBlock_oWR0ZXGj(type, fu_VEC<s_SolvedNode>(items), s_Target{}, s_Helpers{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);
}

static void compilerBreak_ALdww5oh(const s_CurrentFn& _current_fn, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu_STR debug = "\nCompiler break:"_fu;
    if (SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target)
    {
        const s_Target& t = SolvedNodeData_CoW62h8S(_current_fn.out, module, _scope, ctx).target;
        debug += (x7E((x7E((("\n    Current fn: "_fu + qWHAT_2UzOFrRY(GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data), module, _scope, ctx, _here, _helpers, _helpers_data)) + " at ("_fu), fu::i64dec(t.modid)) + ", "_fu), fu::i64dec(t.index)) + "):"_fu);
        fu::view<s_Overload> locals = EXT_nkaMKocC(t, module, _scope, ctx).locals;
        for (int i = 0; i < locals.size(); i++)
        {
            const s_Overload& item = locals[i];
            debug += ("\n        "_fu + qWHAT_2UzOFrRY(item, module, _scope, ctx, _here, _helpers, _helpers_data));
        };
    };
    if (debug)
    {
        const fu_STR* _0;
        fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
        {
            /*RRET*/ const fu_STR& x = debug;
            _0 = &(x);
        (void)0;}), *_0)) }));
    };
    break_DX6KImTN();
}

static s_SolvedNode executeCompilerPragma_otrwBsPZ(const s_Node& node, const s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type)
{
    if (node.value == "break"_fu)
        compilerBreak_ALdww5oh(_current_fn, module, _scope, ctx, _here, _helpers, _helpers_data);
    else
        fail_jI4Vez2o((("Unknown compiler pragma: `"_fu + node.value) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return createEmpty_5d3UxTMW("empty"_fu, t_void, s_Target{}, _here, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveNode_Rc6CHWoz(const s_Node& node, const s_Type& type, const int kills, s_TokenIdx& _here, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& TODO_FIX_template_defarg, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    HERE_GPjTSEGQ(node.token, _here);
    fu::view<char> k = node.kind;
    if (k == "root"_fu)
        return solveRoot_qbsockn7(node, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "block"_fu)
        return solveBlock_XjVECJ2N(node, type, 0, HM_CanBreak, kills, (*(const fu_STR*)fu::NIL), 0, 0, _scope, _helpers, module, _current_fn, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "argid"_fu)
        return solveArgID_Zutr1ZSo(node, type, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "let"_fu)
        return solveLet_P46fCad5(node, (*(const s_Type*)fu::NIL), module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "call"_fu)
        return solveCall_LCJD25gg(node, s_Target{}, kills, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "arrlit"_fu)
        return solveArrlit_66zobzwU(node, type, module, ctx, _here, _scope, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "if"_fu)
        return solveIf_10CN28lc(node, s_Type(type), _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "or"_fu)
        return solveOr_OdUvkn9d(node, s_Type(type), _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "and"_fu)
        return solveAnd_Am05yx7C(node, s_Type(type), _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "loop"_fu)
        return solveLoop_C0DMIMzU(node, _scope, _helpers, _current_fn, module, ctx, _helpers_data, _here, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "break"_fu)
        return solveJump_4MqKNG7p(node, kills, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "return"_fu)
        return solveJump_4MqKNG7p(node, kills, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "continue"_fu)
        return solveJump_4MqKNG7p(node, kills, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fn_or_type, _current_fn, _specs, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "int"_fu)
        return solveInt_LnH99MJC(node, type, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);

    if (k == "real"_fu)
        return solveNum_zrASxQi3(node, type, _here, _current_fn_or_type, module, _scope);

    if (k == "str"_fu)
        return solveStr_hoCLh6oU(node, t_string, _here, ctx, _current_fn_or_type, module, _scope);

    if (k == "char"_fu)
        return solveChar_nUiJnrf1(node, _here, _current_fn_or_type, module, _scope);

    if (k == "definit"_fu)
        return solveDefinit_XZSWqXN1(type, module, ctx, _here, _helpers, _helpers_data, _scope, _current_fn_or_type);

    if (k == "import"_fu)
        return solveImport_4fRbQ8Kt(node, ctx, _here, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type);

    if (k == "defer"_fu)
        return solveDefer_pOVdbXdm(node, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "try"_fu)
        return solveTryCatch_86YnZM8D(node, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "typedef"_fu)
        return solveTypedef_LnBM1CQd(node, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "typeassert"_fu)
        return solveTypeAssert_dFfhgOyi(node, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "typeparam"_fu)
        return solveTypeParam_PRSZZXUc(node, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type);

    if (k == "addroffn"_fu)
        return solveAddrOfFn_vhsuQdid(node, _scope, _ss, module, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);

    if (k == "fn"_fu)
        return solveDeclExpr_0zGMhVJS(node, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "struct"_fu)
        return solveDeclExpr_0zGMhVJS(node, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "forfieldsof"_fu)
        return solveForFieldsOf_ft8PHxCv(node, module, _scope, ctx, _here, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "compiler"_fu)
        return executeCompilerPragma_otrwBsPZ(node, _current_fn, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn_or_type);

    fail_jI4Vez2o(("TODO: "_fu + k), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_F_EXTERN_PRIV
                                #define DEF_F_EXTERN_PRIV
extern const int F_EXTERN_PRIV;
                                #endif

static void Scope_observeDefects_8gRZh3Ri(fu::view<s_ScopeItem> items, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    bool hasLets = false;
    bool hasPubTemplates = false;
    fu_VEC<s_Target> privates {};
    for (int i = 0; i < items.size(); i++)
    {
        const s_Target t = target_Do3V6d7x(items[i]);
        if (t.modid != module.modid)
            continue;

        const s_Overload& o = GET_mF5WytW3(t, _scope, module, ctx, _here, _helpers, _helpers_data);
        if (o.kind == "var"_fu)
        {
            hasLets = true;
            if (!(o.flags & F_PUB))
                privates += s_Target(t);

        }
        else if (o.kind == "fn"_fu)
        {
            if (!(o.flags & F_PUB))
                privates += s_Target(t);

        }
        else if (o.kind == "template"_fu)
        {
            if (o.flags & F_PUB)
                hasPubTemplates = true;

        };
    };
    if (hasLets)
        makeNote_hw6XKcvD(N_SD_HasStaticInit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

    if (privates && hasPubTemplates)
    {
        makeNote_hw6XKcvD(N_SD_ExternPrivates, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        for (int i_1 = 0; i_1 < privates.size(); i_1++)
        {
            s_Overload& o = GET_mut_Y5AuyJLM(privates[i_1], _scope, module);
            o.flags |= F_EXTERN_PRIV;
        };
    };
}

s_SolverOutput solve_tk5TYSLn(const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Node& parse = module.in.parse.root;
    fu_STR shortModuleName = (module.modid ? getShortModuleName_zQFrD65V(module.fname) : fu_STR{});
    s_TokenIdx _here {};
    s_Scope _scope {};
    s_ScopeMemo _root_scope {};
    s_ScopeSkipMemos _ss {};
    fu_VEC<s_ScopeItem> _field_items {};
    int _notes {};
    s_CurrentFn _current_fn {};
    fu_VEC<s_Helpers> _helpers {};
    fu_VEC<s_HelpersData> _helpers_data {};
    int _anons {};
    const s_Target MODULE_TOP = Scope_create_qoDjvL3b(_scope, "_module_top_"_fu, (*(const fu_STR*)fu::NIL), (*(const s_Type*)fu::NIL), 0, s_SolvedNode{}, 0, 0u, bool{}, module);
    push_TahmTbsf(s_HelpersData { s_Target(MODULE_TOP), "_module_top_"_fu, short(0), 0, 0, 0, s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} }, _helpers, _helpers_data);
    s_Target _current_fn_or_type { MODULE_TOP };
    s_Map_nrIRbWMi _specs {};
    s_Type t_string = createArray_8e1ZyHy2(t_byte, _here, ctx);
    fu_VEC<s_SolvedNode> TODO_FIX_convert_args = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { SolvedNode_0vKsswP4((*(const fu_STR*)fu::NIL), s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope) } };
    const s_SolvedNode TODO_FIX_template_defarg = SolvedNode_0vKsswP4("__defarg"_fu, s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fn_or_type, module, _scope);
    if (module.modid)
    {
        _scope.imports += int(module.modid);
        _Scope_import__forceCopy_n3ehgwQF(0, ctx, _scope);
    }
    else
        _scope = listGlobals_yuJMA1l6(module);

    const s_SolvedNode root = solveNode_Rc6CHWoz(s_Node(parse), (*(const s_Type*)fu::NIL), 0, _here, module, _scope, ctx, _current_fn_or_type, _helpers, _helpers_data, _current_fn, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, TODO_FIX_template_defarg, options, _notes, shortModuleName, _field_items, t_string);
    if (_current_fn.out)
        fail_jI4Vez2o("non-empty _current_fn."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    Scope_observeDefects_8gRZh3Ri(fu_VEC<s_ScopeItem>(_scope.items), module, _scope, ctx, _here, _helpers, _helpers_data, options, _notes);
    return s_SolverOutput { s_SolvedNode(root), Scope_exports_rvZqKVmF(_scope, module.modid, _field_items), int(_notes) };
}

#endif
