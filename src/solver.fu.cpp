
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
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/view_swap.h>
#include <fu/view.h>
#include <utility>

struct s_Argument;
struct s_BitSet;
struct s_ClosureID;
struct s_CodegenOutput;
struct s_Context;
struct s_CurrentFn;
struct s_Effects;
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
struct s_Map_PvflZUKM;
struct s_Map_nrIRbWMi;
struct s_Map_tcbzgxDC;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStat;
struct s_ModuleStats;
struct s_NativeOpts;
struct s_Node;
struct s_Options;
struct s_Overload;
struct s_ParserOutput;
struct s_RWEvent;
struct s_RWRanges;
struct s_ReadID;
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
struct s_Warning;
struct s_WriteID;

[[noreturn]] fu::never BUG_KjALaLZp(fu_STR&&, const s_TokenIdx&, const s_Context&);
[[noreturn]] fu::never FAIL_k6XVWCwq(fu::view<char>, const s_TokenIdx&, const s_Context&);
bool Region_isArg_rLDFQf65(const s_Region&);
bool Region_isStatic_rLDFQf65(const s_Region&);
bool Region_isTemp_rLDFQf65(const s_Region&);
bool X_unpackAddrOfFnBinding_5Q9XevCv(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Type&, bool);
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
fu_STR formatCodeSnippet_EjSh40rn(const s_TokenIdx&, s_TokenIdx&&, const s_Context&);
fu_STR getShortModuleName_zQFrD65V(const fu_STR&);
fu_STR hash62_ID6Pdhz7(fu::view<char>, int);
fu_STR humanizeQuals_8e1ZyHy2(const s_Type&);
fu_STR packAddrOfFn_i4cXBxfC(fu::view<s_Target>);
fu_STR qBAD_PSFLzFOM(const fu_STR&);
fu_STR qCODE_PSFLzFOM(const fu_STR&);
fu_STR qID_PSFLzFOM(const fu_STR&);
fu_STR qKW_PSFLzFOM(const fu_STR&);
fu_STR resolveFile_x_RXR5ZSRM(const fu_STR&, const s_Context&);
fu_STR serializeType_5brmsTGN(const s_Type&, fu::view<char>, const s_TokenIdx&, const s_Context&);
fu_STR serialize_RzDpXp73(const s_ClosureID&);
inline const s_Region& first_l0gXiKi4(fu::view<s_Region>);
inline s_ScopeSkip& last_Bk8QxkEE(fu_VEC<s_ScopeSkip>&);
inline s_SolvedNode& last_45v4fzZZ(fu_VEC<s_SolvedNode>&);
int Region_asArgIndex_rLDFQf65(const s_Region&);
int Region_asIndex_rLDFQf65(const s_Region&);
int Region_toArgIndex_rLDFQf65(const s_Region&);
int Region_toLocalIndex_rLDFQf65(const s_Region&);
int parse10i32_g2vqWUwe(int&, fu::view<char>);
int popcount_Btvcdbd3(const s_BitSet&);
s_BitSet ArgsAtRisk_listRiskFree_xUdc86nO(const s_Flow&, int);
s_ClosureID tryParseClosureID_3jVozxZ2(fu::view<char>);
s_Intlit Intlit_NbHm0tEz(fu::view<char>);
s_Lifetime Lifetime_inter_7jT6yxSF(const s_Lifetime&, const s_Lifetime&);
s_Lifetime Lifetime_makeShared_knS7ptQD(const s_Lifetime&);
s_Lifetime Lifetime_placeholder_8nlJDPX0();
s_Lifetime Lifetime_static_8nlJDPX0();
s_Lifetime Lifetime_temporary_8nlJDPX0();
s_Lifetime Lifetime_union_7jT6yxSF(const s_Lifetime&, const s_Lifetime&);
s_NativeOpts NativeOpts_3jVozxZ2(fu::view<char>);
s_Region Region_fromArgIndex_KYx0R3Sq(int);
s_Region Region_fromLocalIndex_KYx0R3Sq(int);
s_Scope Scope_exports_UPJ2tLZs(const s_Scope&, int, const fu_VEC<s_ScopeItem>&);
s_Scope listGlobals_yuJMA1l6(const s_Module&);
s_ScopeMemo Scope_snap_a3v7I8zX(const s_Scope&, fu::view<s_Helpers>);
s_Struct& lookupStruct_mut_r6N0n0Dx(fu::view<char>, s_Module&);
s_Target Scope_Typedef_hJ6IO1eT(s_Scope&, const fu_STR&, const s_Type&, int, const fu_STR&, unsigned, const s_Module&);
s_Target Scope_create_vJwCb5Oj(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, unsigned, int, const s_Module&);
s_Target search_KNlWqVSS(fu::view<s_ScopeItem>, const fu_STR&, int&, fu::view<s_ScopeSkip>, bool&, const s_Target&, fu::view<s_Target>, fu::view<s_ScopeItem>);
s_Target target_CL3tG3Pe(const s_ScopeItem&);
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
static bool lazySolveStart_pR3sKz01(const s_Target&, const s_Overload&, s_Scope&, s_Module&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static fu_STR qSTACK_hYRKYQwY(const s_Target&, const s_Region&, fu::view<s_Target>, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_CurrentFn&);
static fu_VEC<s_SolvedNode> solveNodes_X5BitxTM(fu::view<s_Node>, const s_Type&, const s_Type&, bool, int, s_TokenIdx&, const s_Target&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode CallerNode_SnVo4qAr(const fu_STR&, s_Target&&, fu_VEC<s_SolvedNode>&&, int, const fu_VEC<int>&, fu::view<fu_VEC<s_Target>>, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_Target&, s_CurrentFn&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_nrIRbWMi&, s_ScopeMemo&, int&, fu_VEC<s_Warning>&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, const s_Type&);
static s_SolvedNode __solveStruct_AGP6HYuv(bool, const s_Node&, const s_Target&, s_CurrentFn&, const s_Target&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, s_ScopeSkipMemos&, s_Target&, fu_VEC<s_Warning>&, s_Map_nrIRbWMi&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode evalTypeAnnot_vBBg0Mbg(const s_Node&, const s_Map_PvflZUKM&, const s_Target&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveLetLike_dontTouchScope_eSpJ8O8m(const s_Node&, const s_Type&, const s_Target&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveNode_s6ECt2cW(const s_Node&, const s_Type&, int, s_TokenIdx&, const s_Target&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_Target doTrySpecialize_FDyqg3xS(const s_Target&, const s_Target&, fu::view<s_SolvedNode>, fu_STR&&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, int, const s_Type&, const s_Target&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_Target tryMatch__mutargs_DusNpVWB(fu_STR&&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu_STR&, bool, const s_Scope&, fu::view<s_SolvedNode>, int, const s_Target&, const s_Target&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_nrIRbWMi&, s_ScopeMemo&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, const s_Type&);
static void Lifetime_F_MOVED_FROM_siKa7NOb(const s_Lifetime&, const s_CurrentFn&, const s_Target&, const s_TokenIdx&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, s_Scope&, const s_Module&);
static void Lifetime_F_TODO_FIX_RRET_lefmMroT(const s_Lifetime&, int, const s_CurrentFn&, const s_Target&, const s_TokenIdx&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, s_Scope&, const s_Module&);
static void bck_node_ZbJ2Qr9S(const s_SolvedNode&, const s_Target&, s_TokenIdx&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, s_Scope&, const s_Module&, s_CurrentFn&, const s_Options&, int&, const s_Target&);
static void descend_nIbEJaxQ(const s_Type&, bool, bool, bool, bool, s_Scope&, const s_Scope&, s_ScopeSkipMemos&, fu_VEC<s_SolvedNode>&, const s_Target&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_CurrentFn&, const s_SolvedNode&, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu_VEC<s_ScopeItem>&, s_Map_nrIRbWMi&, s_ScopeMemo&, s_Target&, fu_VEC<s_Warning>&, int&, const s_Options&, int&, const fu_STR&, const s_Type&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, const s_Type&, int);
static void propagateType_sdU76du2(const s_SolvedNode&, const s_Type&, int, const s_Target&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Target&, s_Map_nrIRbWMi&, s_ScopeSkipMemos&, s_ScopeMemo&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static void test_node_IJROg8n7(const s_SolvedNode&, fu_STR&&, const s_Target&, s_TokenIdx&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&);
void ArgsAtRisk_shake_UoicnRMt(s_Flow&);
void ArgsWritten_shake_OnZ6Pgmj(const s_Flow&, s_BitSet&);
void HERE_GPjTSEGQ(const s_TokenIdx&, s_TokenIdx&);
void Lifetime_placeholder_remove_xMPmdfQq(s_Lifetime&);
void Reference_trackArgument_8HAzLaZD(s_Flow&, int, int);
void Reference_trackLocalRef_qERgTRRj(s_Flow&, int, const s_Lifetime&);
void Scope_pop_df60cAJ8(s_Scope&, const s_ScopeMemo&, fu_VEC<s_Helpers>&);
void Scope_set_ATHtezm5(s_Scope&, const fu_STR&, const s_Target&, bool);
void Scope_set_VGSSTPCP(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);
void add_zoGTyg4u(s_BitSet&, int);
void break_DX6KImTN();
void rem_zoGTyg4u(s_BitSet&, int);

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    int signedidx;
    explicit operator bool() const noexcept
    {
        return false
            || signedidx
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
    unsigned status;
    s_SolvedNode solved;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || type
            || flags
            || status
            || solved
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

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu_STR name;
    fu_STR autocall;
    s_Type type;
    s_SolvedNode dEfault;
    int flags;
    int local;
    s_BitSet risk_free;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || local
            || risk_free
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
    fu_VEC<s_ScopeSkip> imports;
    fu_VEC<s_ScopeSkip> privates;
    fu_VEC<s_ScopeSkip> usings;
    fu_VEC<s_ScopeSkip> converts;
    fu_VEC<s_ScopeSkip> helpers;
    explicit operator bool() const noexcept
    {
        return false
            || items
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

                                #ifndef DEF_s_RWRanges
                                #define DEF_s_RWRanges
struct s_RWRanges
{
    int reads0;
    int reads1;
    int writes0;
    int writes1;
    explicit operator bool() const noexcept
    {
        return false
            || reads0
            || reads1
            || writes0
            || writes1
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
    s_RWRanges rwr;
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
            || rwr
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Extended
                                #define DEF_s_Extended
struct s_Extended
{
    int local_of;
    int revision;
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Target spec_of;
    s_Template tEmplate;
    fu_VEC<s_SolvedNodeData> nodes;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_ScopeItem> extra_items;
    fu_VEC<int> callers;
    explicit operator bool() const noexcept
    {
        return false
            || local_of
            || revision
            || min
            || max
            || args
            || spec_of
            || tEmplate
            || nodes
            || locals
            || extra_items
            || callers
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

                                #ifndef DEF_s_Effects
                                #define DEF_s_Effects
struct s_Effects
{
    fu_VEC<int> far_jumps;
    explicit operator bool() const noexcept
    {
        return false
            || far_jumps
        ;
    }
};
                                #endif

                                #ifndef DEF_s_WriteID
                                #define DEF_s_WriteID
struct s_WriteID
{
    int id;
    explicit operator bool() const noexcept
    {
        return false
            || id
        ;
    }
};
                                #endif

                                #ifndef DEF_s_EventsSnap
                                #define DEF_s_EventsSnap
struct s_EventsSnap
{
    fu_VEC<s_WriteID> invalidated_by;
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

                                #ifndef DEF_s_ReadID
                                #define DEF_s_ReadID
struct s_ReadID
{
    int id;
    explicit operator bool() const noexcept
    {
        return false
            || id
        ;
    }
};
                                #endif

                                #ifndef DEF_s_RWEvent
                                #define DEF_s_RWEvent
struct s_RWEvent
{
    int rw_target;
    explicit operator bool() const noexcept
    {
        return false
            || rw_target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Events
                                #define DEF_s_Events
struct s_Events
{
    s_EventsSnap snap;
    fu_VEC<s_ReadID> used_in_a_loop;
    fu_VEC<int> args_in_a_loop;
    s_BitSet args_ever_written;
    fu_VEC<s_RWEvent> reads;
    fu_VEC<s_RWEvent> writes;
    explicit operator bool() const noexcept
    {
        return false
            || snap
            || used_in_a_loop
            || args_in_a_loop
            || args_ever_written
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
    s_Effects effects;
    s_Events events;
    int loop_start;
    fu_VEC<s_Type> var_usage;
    explicit operator bool() const noexcept
    {
        return false
            || out
            || flow
            || effects
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

                                #ifndef DEF_s_Warning
                                #define DEF_s_Warning
struct s_Warning
{
    int dedupe;
    s_TokenIdx token;
    fu_STR message;
    explicit operator bool() const noexcept
    {
        return false
            || dedupe
            || token
            || message
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ClosureID
                                #define DEF_s_ClosureID
struct s_ClosureID
{
    s_Target target;
    int revision;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || revision
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

                                #ifndef DEF_s_Map_PvflZUKM
                                #define DEF_s_Map_PvflZUKM
struct s_Map_PvflZUKM
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

                                #ifndef DEF_s_NativeOpts
                                #define DEF_s_NativeOpts
struct s_NativeOpts
{
    int name_start_idx;
    bool no_AAR;
    explicit operator bool() const noexcept
    {
        return false
            || name_start_idx
            || no_AAR
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

                                #ifndef DEF_NODEIDX_signbits
                                #define DEF_NODEIDX_signbits
inline constexpr int NODEIDX_signbits = 4;
                                #endif

                                #ifndef DEF_NODEIDX_signmask
                                #define DEF_NODEIDX_signmask
extern const int NODEIDX_signmask = ((1 << NODEIDX_signbits) - 1);
                                #endif

static void push_cfc9Ap42(const s_HelpersData& data, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data)
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

static s_Extended& EXT_mut_hG9GTQ4v(const s_Target& target, const s_Module& module, s_Scope& _scope)
{
    if (!(target.modid == module.modid))
        fu_ASSERT();

    return grow_if_oob_FDumx48H(_scope.extended, target.index);
}

static s_SolvedNode SolvedNode_create_rUwRNi8j(const s_SolvedNodeData& data, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    const s_Target& nodeown = _current_fn_or_type;
    fu_VEC<s_SolvedNodeData>& nodes = EXT_mut_hG9GTQ4v(nodeown, module, _scope).nodes;
    nodes += s_SolvedNodeData(data);
    const int nodeidx = nodes.size();
    return s_SolvedNode { ((nodeidx << NODEIDX_signbits) | (_current_fnort.index & NODEIDX_signmask)) };
}

static s_SolvedNode SolvedNode_GiPnt7zQ(const fu_STR& kind, const s_Type& type, const int flags, const fu_STR& value, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const int helpers, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    s_SolvedNodeData data = s_SolvedNodeData { fu_STR(kind), int(helpers), int(flags), fu_STR(value), fu_VEC<s_SolvedNode>(items), s_TokenIdx(_here), s_Type(type), s_Target(target), s_RWRanges{} };
    return SolvedNode_create_rUwRNi8j(data, _current_fnort, _current_fn_or_type, module, _scope);
}

static fu_VEC<s_SolvedNode> meh_bGN6F3bF(const s_Target& _current_fn_or_type, const s_TokenIdx& _here, const s_Module& module, s_Scope& _scope)
{
    const s_Target& _current_fnort = _current_fn_or_type;
    return fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { SolvedNode_GiPnt7zQ((*(const fu_STR*)fu::NIL), s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope) } };
}

static void _Scope_import__forceCopy_uqsagdXW(const int modid, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    _scope.items += fu::get_view(s.items, 0, s.pub_items);
    _scope.converts += fu::get_view(s.converts, 0, s.pub_cnvrts);
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void;
                                #endif

static int unorderedClassify_NXwc4ZPP(fu::view<char> kind)
{
    if (kind == "fn"_fu)
        return 1;

    if (kind == "struct"_fu)
        return 10;

    return 0;
}

                                #ifndef DEF_HM_Function
                                #define DEF_HM_Function
extern const short HM_Function;
                                #endif

                                #ifndef DEF_HM_Struct
                                #define DEF_HM_Struct
extern const short HM_Struct;
                                #endif

static bool isFnOrType_XDWuQBvg(const s_Helpers& h, fu::view<s_HelpersData> _helpers_data)
{
    return !!short((_helpers_data[h.index].mask & short((HM_Function | HM_Struct))));
}

static bool isLocal_Q7E97T1i(const s_Target& target)
{
    return target.modid < 0;
}

static const s_Overload& GET_wZZN3wJZ(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    if (isLocal_Q7E97T1i(target))
        return _scope.extended[-target.modid].locals[(target.index - 1)];

    if (target.modid == module.modid)
        return _scope.overloads[(target.index - 1)];

    return ctx.modules[target.modid].out.solve.scope.overloads[(target.index - 1)];
}

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline constexpr int F_ARG = (1 << 9);
                                #endif

                                #ifndef DEFt_unless_oob_RUr8uBUz
                                #define DEFt_unless_oob_RUr8uBUz
inline const s_Extended& unless_oob_RUr8uBUz(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT_OOgXljzg(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    if (target.modid == module.modid)
        return unless_oob_RUr8uBUz(_scope.extended, target.index);

    return (target.modid >= 0) ? unless_oob_RUr8uBUz(ctx.modules[target.modid].out.solve.scope.extended, target.index) : (*(const s_Extended*)fu::NIL);
}

static int localOf_mcb6vfib(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    if (isLocal_Q7E97T1i(target))
        return -target.modid;

    return int(EXT_OOgXljzg(target, module, _scope, ctx).local_of);
}

static s_Target parent_Qc9z13HQ(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return s_Target { int(module.modid), localOf_mcb6vfib(target, module, _scope, ctx) };
}

static fu_STR human_g4kmYeuH(const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    const s_Target t = tryParseClosureID_3jVozxZ2(id).target;
    if (!t)
        return fu_STR(id);

    return (GET_wZZN3wJZ(parent_Qc9z13HQ(t, module, _scope, ctx), _scope, module, ctx).name + ":"_fu) + GET_wZZN3wJZ(t, _scope, module, ctx).name;
}

static fu_STR qWHAT_NVk45OOI(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    const fu_STR& kind = o.kind;
    fu_STR kind_1 = (((kind == "var"_fu) && (o.flags & F_ARG)) ? "arg"_fu : fu_STR(kind));
    return (qKW_PSFLzFOM(kind_1) + " "_fu) + qID_PSFLzFOM(human_g4kmYeuH(o.name, module, _scope, ctx));
}

[[noreturn]] static fu::never fail_UWhygD7O(fu_STR&& reason, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!reason)
        reason = (("Unexpected `"_fu + _token_4nLgxTnv(_here, ctx).value) + "`."_fu);

    int callstack = 0;
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (isFnOrType_XDWuQBvg(h, _helpers_data))
        {
            if (!callstack++)
                reason += "\n\n        Solving "_fu;
            else
                reason += "\n                "_fu;

            const s_Overload& o = GET_wZZN3wJZ(_helpers_data[h.index].target, _scope, module, ctx);
            reason += qWHAT_NVk45OOI(o, module, _scope, ctx);
        };
    };
    FAIL_k6XVWCwq(reason, _here, ctx);
}

static const s_SolvedNodeData& SolvedNodeData_6z9gBjiy(const s_SolvedNode& sn, const s_Target& from, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (sn)
    {
        if (!((sn.signedidx & NODEIDX_signmask) == (from.index & NODEIDX_signmask)))
            fail_UWhygD7O("SolvedNodeData() signedidx is off."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        const int nodeidx = (sn.signedidx >> NODEIDX_signbits);
        return sn ? EXT_OOgXljzg(from, module, _scope, ctx).nodes[(nodeidx - 1)] : (*(const s_SolvedNodeData*)fu::NIL);
    };
    return (*(const s_SolvedNodeData*)fu::NIL);
}

static const s_SolvedNodeData& SolvedNodeData_kcSanAvz(const s_SolvedNode& sn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    return SolvedNodeData_6z9gBjiy(sn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static void makeNote_NPJpVbAC(const int note, const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, int& _notes)
{
    if (note & options.break_notes)
        fail_UWhygD7O((x7E("`break_notes`: Unwanted event: `"_fu, fu::i64dec(note)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    _notes |= note;
}

                                #ifndef DEF_SS_LAZY
                                #define DEF_SS_LAZY
inline constexpr unsigned SS_LAZY = (0x1u << 0u);
                                #endif

static s_Template createTemplate_nUiJnrf1(const s_Node& node, const s_CurrentFn& _current_fn, const s_Scope& _scope, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss)
{
    return s_Template { s_Node(node), fu_VEC<int>((!_current_fn ? _scope.imports : (*(const fu_VEC<int>*)fu::NIL))), (_current_fn ? Scope_snap_a3v7I8zX(_scope, _helpers) : s_ScopeMemo{}), s_ScopeSkipMemos((_current_fn ? _ss : (*(const s_ScopeSkipMemos*)fu::NIL))) };
}

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline constexpr int F_SHADOW = (1 << 23);
                                #endif

static bool shouldAutoshadow_hYPo5RhW(fu::view<char> id, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope)
{
    if (!OPTI_autoshadow)
        return false;


    {
        fu::view<s_ScopeItem> items = _scope.items;
        fu::view<s_ScopeSkip> scope_skip = _ss.items;
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

static void autoshadow_y5lleG3y(bool& shadows, const int local_of, fu::view<char> id, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope)
{
    if (!shadows && local_of && shouldAutoshadow_hYPo5RhW(id, _scope, _ss, _root_scope))
        shadows = true;

}

                                #ifndef DEF_F_CONVERSION
                                #define DEF_F_CONVERSION
inline constexpr int F_CONVERSION = (1 << 14);
                                #endif

static s_SolvedNode createFnDef_PvOrqz3w(const s_Type& type, const s_Target& target, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode_GiPnt7zQ("fndef"_fu, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode uPrepFn_A_ft8PHxCv(const s_Node& node, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope, const s_Target& _current_fn_or_type)
{
    const fu_STR& id = node.value;
    const int local_of = SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index;
    const s_Target target = Scope_create_vJwCb5Oj(_scope, "fn"_fu, "__prep__"_fu, (*(const s_Type*)fu::NIL), node.flags, SS_LAZY, 0, module);
    s_Extended& ext = EXT_mut_hG9GTQ4v(target, module, _scope);
    ext.local_of = local_of;
    ext.tEmplate = createTemplate_nUiJnrf1(node, _current_fn, _scope, _helpers, _ss);
    ext.min = int(0x7fffffffu);
    ext.max = 0;
    bool shadows = !!(node.flags & F_SHADOW);
    autoshadow_y5lleG3y(shadows, local_of, id, _scope, _ss, _root_scope);
    Scope_set_ATHtezm5(_scope, id, target, shadows);
    if (node.flags & F_CONVERSION)
        _scope.converts.push(s_Target(target));

    return createFnDef_PvOrqz3w(X_addrofTarget_m0G5bAnB(target), target, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createEmpty_bZyGRBZC(const fu_STR& kind, const s_Type& type, const s_Target& target, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode_GiPnt7zQ(kind, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_Overload& GET_mut_AkUmF8Ao(const s_Target& target, s_Scope& _scope, const s_Module& module)
{
    if (target.modid < 0)
        return _scope.extended.mutref(-target.modid).locals.mutref((target.index - 1));

    if (!((target.index > 0) && (target.modid == module.modid)))
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

static s_Type T_qiauEJab(const int i, const s_Node& node, const s_Map_PvflZUKM& typeParams, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    s_SolvedNode _0 {};
    /*MOV*/ s_Type danglefix { (_0 = evalTypeAnnot_vBBg0Mbg(node.items[i], typeParams, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), SolvedNodeData_kcSanAvz(s_SolvedNode(_0), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module)).type };
    return /*NRVO*/ danglefix;
}

static s_SolvedNode solved_SNSf2Pw4(const s_Node& node, const s_Type& type, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode_GiPnt7zQ(node.kind, type, node.flags, node.value, items, target, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
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

static s_SolvedNode createBlock_RIdz8tYv(const s_Type& type, /*MOV*/ fu_VEC<s_SolvedNode>&& items, const s_Target& label, const s_Helpers& h, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fn_or_type)
{
    for (int x = 0; x < items.size(); x++)
    {
        if (!SolvedNodeData_kcSanAvz(items[x], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind)
            fu::fail(x7E("createBlock.before-flatten.items: no kind on item #"_fu, fu::i64dec(x)));

    };
    if (_here && (_helpers.size() > 10000001))
        fu::fail(x7E("woot: "_fu, fu::i64dec(_helpers.size())));

    if (OPTI_flatten_blocks && items.size())
    {
        for (; ; )
        {
            const s_SolvedNode& tail = last_45v4fzZZ(items);
            if ((SolvedNodeData_kcSanAvz(tail, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind != "block"_fu) || SolvedNodeData_kcSanAvz(tail, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target)
                break;

            fu::view<s_SolvedNode> unwrap = SolvedNodeData_kcSanAvz(tail, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items;
            items.pop();
            items += unwrap;
        };
    };
    if (items.size())
    {
        bool ok = (!label && !(h ? _helpers_data[h.index].vars : (*(const fu_VEC<int>*)fu::NIL)));
        for (int i = 0; i < (items.size() - 1); i++)
        {
            if (SolvedNodeData_kcSanAvz(items[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind != "empty"_fu)
            {
                ok = false;
                break;
            };
        };
        if (ok)
            return s_SolvedNode(last_45v4fzZZ(items));

    };
    /*MOV*/ const s_SolvedNode block = SolvedNode_GiPnt7zQ("block"_fu, type, 0, (*(const fu_STR*)fu::NIL), items, label, h.index, _here, _current_fnort, _current_fn_or_type, module, _scope);
    return /*NRVO*/ block;
}

static s_SolvedNode deadCall_yrsUexFS(const fu_VEC<s_SolvedNode>& args, const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, int& _notes, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    makeNote_NPJpVbAC(N_DeadCall, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    return createBlock_RIdz8tYv(t_never, fu_VEC<s_SolvedNode>(args), s_Target{}, s_Helpers{}, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);
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

static const s_Module& findModule_CSw9Ly3b(const fu_STR& fuzimport, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    fu_STR fname = resolveFile_x_RXR5ZSRM(fuzimport, ctx);
    fu::view<s_Module> modules = ctx.modules;
    for (int i = 1; i < modules.size(); i++)
    {
        const s_Module& m = modules[i];
        if (m.fname == fname)
            return m;

    };
    fail_UWhygD7O(("Cannot locate: "_fu + fname), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Scope& dequalify_andGetScope_Sfvtu0ee(fu_STR& id, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    const int split = find_WqUX48cW(id, '\t');
    if (!((split >= 0)))
        fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    fu_STR fname = fu::slice(id, 0, split);
    id = fu::slice(id, (split + 1));
    const s_Module& other = findModule_CSw9Ly3b(fname, ctx, _here, _helpers, _helpers_data, _scope, module);
    if (other.modid != module.modid)
        return other.out.solve.scope;

    fail_UWhygD7O((("Qualified "_fu + qBAD_PSFLzFOM(id)) + ":: access current module."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEFt_each_l738czIz
                                #define DEFt_each_l738czIz
inline void each_l738czIz(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, int, const int start, int& count, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
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
                fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        i0 = ss.end;
    };
}
                                #endif

static int countUsings_ZQ7BPP02(const bool local_scope, const s_Scope& _scope, const s_Scope& misc_scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Module& module)
{
    const s_Scope& scope = (local_scope ? _scope : misc_scope);
    /*MOV*/ int count = 0;
    if (scope.usings)
        each_l738czIz(scope.usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, 0, count, _here, ctx, _helpers, _helpers_data, _scope, module);

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

                                #ifndef DEFt_each_s4A2tB5A
                                #define DEFt_each_s4A2tB5A
inline void each_s4A2tB5A(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, int, const int start, s_BitSet& seen)
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

static void visitTypeImports_WlffWKy8(const s_Type& type, const s_Module& module, const s_Context& ctx, s_BitSet& seen, const s_Scope& _scope, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id, fu_VEC<s_Target>& extra_items)
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
            each_s4A2tB5A(_scope.imports, (local_scope ? _ss.imports : fu::view<s_ScopeSkip>{}), 0, 0, seen);
        };
        if (!add_once_zoGTyg4u(seen, modid))
            continue;

        fu::view<s_ScopeItem> items = ctx.modules[modid].out.solve.scope.items;
        for (int i_1 = 0; i_1 < items.size(); i_1++)
        {
            if (items[i_1].id == id)
                extra_items.push(target_CL3tG3Pe(items[i_1]));

        };
    };
}

                                #ifndef DEFt_each_X49IYLOe
                                #define DEFt_each_X49IYLOe
inline void each_X49IYLOe(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, int, const int start, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, s_BitSet& seen, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id, fu_VEC<s_Target>& extra_items)
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
            visitTypeImports_WlffWKy8(GET_wZZN3wJZ(u, _scope, module, ctx).type, module, ctx, seen, _scope, local_scope, _ss, id, extra_items);
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

                                #ifndef DEFt_unpackAddrOfFn_HLXejOuC
                                #define DEFt_unpackAddrOfFn_HLXejOuC
inline void unpackAddrOfFn_HLXejOuC(fu::view<char> canon, int, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, int& parent_idx)
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
            const int local_of = localOf_mcb6vfib(target, module, _scope, ctx);
            if (parent_idx < local_of)
                parent_idx = local_of;

        };
    };
}
                                #endif

                                #ifndef DEF_F_INLINE
                                #define DEF_F_INLINE
inline constexpr int F_INLINE = (1 << 29);
                                #endif

                                #ifndef DEFt_ref_h6yAHVZv
                                #define DEFt_ref_h6yAHVZv
inline s_Target& ref_h6yAHVZv(int, const fu_STR& item, int, s_Map_nrIRbWMi& _)
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

                                #ifndef DEFt_ref_CW6DGXFB
                                #define DEFt_ref_CW6DGXFB
inline s_Target& ref_CW6DGXFB(s_Map_nrIRbWMi& _, const fu_STR& key)
{
    return ref_h6yAHVZv(0, key, 0, _);
}
                                #endif

static bool is_SPECFAIL_tLiy0fvO(const s_Target& target)
{
    return target.modid == 2147483647;
}

inline static fu_STR id_fSD3TjaV(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return (is_SPECFAIL_tLiy0fvO(target) ? "SPEC_FAIL"_fu : (("`"_fu + GET_wZZN3wJZ(target, _scope, module, ctx).name) + "`"_fu));
}

inline static fu_STR id_vJZpFZzl(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return (is_SPECFAIL_tLiy0fvO(target) ? "SPEC_FAIL"_fu : (("`"_fu + GET_wZZN3wJZ(target, _scope, module, ctx).name) + "`"_fu));
}

static void setSpec_t0yfZyv5(const fu_STR& mangle, const s_Target& target, const bool nx, const bool isInline, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, s_Map_nrIRbWMi& _specs)
{
    if (isInline)
        fail_UWhygD7O("inline.setSpec"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    s_Target& t = ref_CW6DGXFB(_specs, mangle);
    if (!((!t && nx) || (is_SPECFAIL_tLiy0fvO(t) && !nx)))
        fail_UWhygD7O(((((((x7E((x7E("About to screw up royally, replacing spec: "_fu, fu::i64dec(t.index)) + " with "_fu), fu::i64dec(target.index)) + ", mangle: "_fu) + mangle) + ", that's: "_fu) + id_fSD3TjaV(t, _scope, module, ctx)) + " becoming "_fu) + id_vJZpFZzl(target, _scope, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    t = target;
}

                                #ifndef DEFt_last_4St321Ne
                                #define DEFt_last_4St321Ne
inline s_Helpers& last_4St321Ne(fu_VEC<s_Helpers>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEFt_if_last_Bk8QxkEE
                                #define DEFt_if_last_Bk8QxkEE
inline const s_ScopeSkip& if_last_Bk8QxkEE(fu::view<s_ScopeSkip> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_ScopeSkip*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_last_Bk8QxkEE
                                #define DEFt_last_Bk8QxkEE
inline s_ScopeSkip& last_Bk8QxkEE(fu_VEC<s_ScopeSkip>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static void ScopeSkip_push_3JWaJTkT(fu_VEC<s_ScopeSkip>& scope_skip, const int start, const int end, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!((start <= end)))
        fail_UWhygD7O("ScopeSkip_push: bad args."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (end == start)
        return;

    const s_ScopeSkip& last = if_last_Bk8QxkEE(scope_skip);
    if (!((last.end <= start)))
        fail_UWhygD7O("ScopeSkip_push: last.end > start."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (scope_skip && (last.end == start))
        last_Bk8QxkEE(scope_skip).end = end;
    else
        scope_skip += s_ScopeSkip { int(start), int(end) };

}

static void Scope_import_rGmUTga1(const int modid, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Module& module)
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
        fail_UWhygD7O("Attempting to import modid-0."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    _scope.imports += int(modid);
    _Scope_import__forceCopy_uqsagdXW(modid, ctx, _scope);
}

static void _Scope_import__forceCopy_privates_A6e3q54t(const int modid, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    _scope.items += fu::get_view(s.items, s.pub_items, s.items.size());
    _scope.converts += fu::get_view(s.converts, s.pub_cnvrts, s.converts.size());
}

static void Scope_import_privates_Osk9HdQc(const int modid, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Module& module)
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
        fail_UWhygD7O("Attempting to import_privates modid-0."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    _scope.privates += int(modid);
    _Scope_import__forceCopy_privates_A6e3q54t(modid, ctx, _scope);
}

static void ScopeSkip_setup_iF5MsZcx(const s_Template& tEmplate, const s_ScopeMemo& scope0, const s_ScopeMemo& _root_scope, s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    if (_root_scope)
    {
        const s_ScopeMemo& start = (tEmplate.scope_memo ? tEmplate.scope_memo : _root_scope);
        _ss = tEmplate.scope_skip;
        ScopeSkip_push_3JWaJTkT(_ss.items, start.items_len, scope0.items_len, _here, ctx, _helpers, _helpers_data, _scope, module);
        ScopeSkip_push_3JWaJTkT(_ss.imports, start.imports_len, scope0.imports_len, _here, ctx, _helpers, _helpers_data, _scope, module);
        ScopeSkip_push_3JWaJTkT(_ss.privates, start.privates_len, scope0.privates_len, _here, ctx, _helpers, _helpers_data, _scope, module);
        ScopeSkip_push_3JWaJTkT(_ss.usings, start.usings_len, scope0.usings_len, _here, ctx, _helpers, _helpers_data, _scope, module);
        ScopeSkip_push_3JWaJTkT(_ss.converts, start.converts_len, scope0.converts_len, _here, ctx, _helpers, _helpers_data, _scope, module);
        ScopeSkip_push_3JWaJTkT(_ss.helpers, start.helpers_len, scope0.helpers_len, _here, ctx, _helpers, _helpers_data, _scope, module);
    };
    for (int i = 0; i < tEmplate.imports.size(); i++)
    {
        Scope_import_rGmUTga1(tEmplate.imports[i], _scope, _ss, _here, ctx, _helpers, _helpers_data, module);
        if (i == 0)
            Scope_import_privates_Osk9HdQc(tEmplate.imports[i], _scope, _ss, _here, ctx, _helpers, _helpers_data, module);

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

static bool couldRetype_NwMeZXYD(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    return (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "int"_fu) || (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "real"_fu) || (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "definit"_fu);
}

                                #ifndef DEFt_ref_dqSeEjth
                                #define DEFt_ref_dqSeEjth
inline s_TypeParam& ref_dqSeEjth(int, const fu_STR& item, int, s_Map_PvflZUKM& _)
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

                                #ifndef DEFt_ref_223OtmgJ
                                #define DEFt_ref_223OtmgJ
inline s_TypeParam& ref_223OtmgJ(s_Map_PvflZUKM& _, const fu_STR& key)
{
    return ref_dqSeEjth(0, key, 0, _);
}
                                #endif

static const s_Type& Scope_lookupType_zbkjRmSU(fu_STR&& id, const int flags, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    int scope_iterator {};
    s_Target overloadIdx {};
    bool shadows {};
    const int qualified = (flags & F_COMPOUND_ID);
    const s_Scope& scope = (qualified ? dequalify_andGetScope_Sfvtu0ee(id, _here, ctx, _helpers, _helpers_data, _scope, module) : _scope);
    while ((overloadIdx = search_KNlWqVSS(scope.items, id, scope_iterator, (!qualified ? _ss.items : fu::view<s_ScopeSkip>{}), shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
    {
        const s_Overload& maybe = GET_wZZN3wJZ(overloadIdx, _scope, module, ctx);
        if (maybe.kind == "type"_fu)
            return maybe.type ? maybe.type : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    fail_UWhygD7O((("No type `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Type& Scope_lookupType_FCzK9ket(const s_Node& annot, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    return Scope_lookupType_zbkjRmSU(fu_STR(annot.value), annot.flags, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
}

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32;
                                #endif

static bool want_5sxSP9Ch(const s_Type& t, const s_Type& type)
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

static const s_Type& solveInt_de2hoYJN(fu::view<char> v, const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    s_Intlit parse = Intlit_NbHm0tEz(v);
    if (parse.error)
        fail_UWhygD7O(fu_STR(parse.error), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (type)
    {
        if (!parse.uNsigned)
        {
            if (want_5sxSP9Ch(t_f32, type) && (parse.minsize_f <= fu::u8(32u)))
                return t_f32;

            if (want_5sxSP9Ch(t_f64, type) && (parse.minsize_f <= fu::u8(64u)))
                return t_f64;

            if (want_5sxSP9Ch(t_i32, type) && (parse.minsize_i <= fu::u8(32u)))
                return t_i32;

            if (want_5sxSP9Ch(t_i64, type) && (parse.minsize_i <= fu::u8(64u)))
                return t_i64;

            if (want_5sxSP9Ch(t_i16, type) && (parse.minsize_i <= fu::u8(16u)))
                return t_i16;

            if (want_5sxSP9Ch(t_i8, type) && (parse.minsize_i <= fu::u8(8u)))
                return t_i8;

        };
        if (!parse.sIgned)
        {
            if (want_5sxSP9Ch(t_u32, type) && (parse.minsize_u <= fu::u8(32u)))
                return t_u32;

            if (want_5sxSP9Ch(t_u64, type) && (parse.minsize_u <= fu::u8(64u)))
                return t_u64;

            if (want_5sxSP9Ch(t_u16, type) && (parse.minsize_u <= fu::u8(16u)))
                return t_u16;

            if (want_5sxSP9Ch(t_u8, type) && (parse.minsize_u <= fu::u8(8u)))
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
    fail_UWhygD7O("Bad int literal."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Type& solveNum_OrDoVghg(const fu_STR& v, const s_Type& type)
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

static s_Type trySolveDefinit_SV47iu7a(const s_Type& type)
{
    if (!type)
        return s_Type(t_zeroes);

    return type_trySuper_P9wIESfO(t_zeroes, type);
}

static s_Type tryRetyping_C9LIXaDr(const s_SolvedNode& node, const s_Type& expect, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (is_arithmetic_dtjgvDEj(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) && is_arithmetic_dtjgvDEj(expect))
    {
        if (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "int"_fu)
            return s_Type(solveInt_de2hoYJN(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).value, expect, _here, ctx, _helpers, _helpers_data, _scope, module));

        if (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "real"_fu)
            return s_Type(solveNum_OrDoVghg(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).value, expect));

    };
    if (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "definit"_fu)
        return trySolveDefinit_SV47iu7a(expect);

    return s_Type{};
}

static bool trySolveTypeParams_XLDyzJD2(const s_Node& node, s_Type&& type, s_Map_PvflZUKM& typeParams, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    if (node.kind == "call"_fu)
    {
        fu::view<s_Node> items = node.items;
        if (items.size())
        {
            if (items.size() == 1)
            {
                s_Type t = ((node.value == "&"_fu) ? tryClear_ref_8e1ZyHy2(type, _here, ctx) : ((node.value == "&mut"_fu) ? tryClear_mutref_8e1ZyHy2(type, _here, ctx) : ((node.value == "[]"_fu) ? tryClear_array_8e1ZyHy2(type) : fail_UWhygD7O("TODO trySolveTypeParams unary call"_fu, _here, ctx, _helpers, _helpers_data, _scope, module))));
                if (!t)
                    return false;

                const s_Node* _0;
                return trySolveTypeParams_XLDyzJD2((*(_0 = &(items[0])) ? *_0 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), s_Type(t), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
            };
        }
        else
            return isAssignable_P9wIESfO(Scope_lookupType_FCzK9ket(node, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), type);

    }
    else if (node.kind == "typeparam"_fu)
    {
        const fu_STR& id = (node.value ? node.value : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
        s_TypeParam& _param = ref_223OtmgJ(typeParams, id);
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
        return t && trySolveTypeParams_XLDyzJD2((*(_1 = &(node.items[0])) ? *_1 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), s_Type(t), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
    };
    fail_UWhygD7O("TODO trySolveTypeParams fallthrough"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

inline static fu_STR mangleArguments_60qU9pNl(fu::view<s_Type> args, const s_TokenIdx& _here, const s_Context& ctx)
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

                                #ifndef DEFt_get_RoWYQLCB
                                #define DEFt_get_RoWYQLCB
inline const s_Target& get_RoWYQLCB(const s_Map_nrIRbWMi& _, const fu_STR& key)
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

                                #ifndef DEFt_get_MYYVSl3i
                                #define DEFt_get_MYYVSl3i
inline const s_TypeParam& get_MYYVSl3i(const s_Map_PvflZUKM& _, const fu_STR& key)
{
    const int idx = bfind_nPNQURov(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const s_TypeParam*)fu::NIL);
}
                                #endif

static const s_Type& evalTypeParam_V6IEbjpr(const fu_STR& id, const s_Map_PvflZUKM& typeParams, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    const s_Type* _0;
    return *(_0 = &(get_MYYVSl3i(typeParams, id).matched)) ? *_0 : *(_0 = &(Scope_lookupType_zbkjRmSU(("$"_fu + (id ? id : fail_UWhygD7O("Falsy type param id."_fu, _here, ctx, _helpers, _helpers_data, _scope, module))), 0, _here, ctx, _helpers, _helpers_data, _scope, module, _ss))) ? *_0 : fail_UWhygD7O((("No type param `$"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static bool type_has_aK3HCWXV(const s_Type& type, fu::view<char> tag, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
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

static bool evalTypePattern_XGAFrHgQ(const s_Node& node, s_Map_PvflZUKM& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, const s_Target& _current_fnort, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (node.kind == "and"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (!evalTypePattern_XGAFrHgQ(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string))
                return false;

        };
        return true;
    }
    else if (node.kind == "or"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (evalTypePattern_XGAFrHgQ(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string))
                return true;

        };
        return false;
    }
    else if (node.kind == "typeassert"_fu)
    {
        const s_Node* _0;
        const s_Node& left = (*(_0 = &(node.items[0])) ? *_0 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
        const s_Node* _1;
        const s_Node& right = (*(_1 = &(node.items[1])) ? *_1 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
        if ((left.kind == "typeparam"_fu) && (right.kind == "typetag"_fu))
            return type_has_aK3HCWXV(evalTypeParam_V6IEbjpr(left.value, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (right.value ? right.value : fail_UWhygD7O("Falsy type tag."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)), module, ctx, _here);
        else
        {
            s_SolvedNode _2 {};
            const s_Type& actual = (_2 = evalTypeAnnot_vBBg0Mbg(left, typeParams, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), SolvedNodeData_kcSanAvz(s_SolvedNode(_2), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module)).type;
            /*MOV*/ const bool ok = trySolveTypeParams_XLDyzJD2(right, s_Type(actual), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
            if (ok && (left.kind == "typeparam"_fu))
            {
                const fu_STR& id = left.value;
                s_TypeParam& tp = ref_223OtmgJ(typeParams, id);
                s_Type _3 {};
                tp.consumed = (tp.consumed ? ((_3 = type_tryIntersect_P9wIESfO(tp.consumed, actual)) ? static_cast<s_Type&&>(_3) : fail_UWhygD7O("typeassert intersect fail."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) : s_Type(actual));
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
                return !evalTypePattern_XGAFrHgQ(node.items[0], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

        };
    };
    fail_UWhygD7O((x7E((("TODO evalTypePattern fallthrough: "_fu + node.kind) + "("_fu), fu::i64dec(node.items.size())) + ")"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

static bool isNativeBody_NaKql8xp(const s_Node& n_body)
{
    return (n_body.kind == "call"_fu) && (n_body.value == "__native"_fu);
}

                                #ifndef DEFt_if_ref_TX1WAD5S
                                #define DEFt_if_ref_TX1WAD5S
inline void if_ref_TX1WAD5S(int, const fu_STR& item, int, int, s_Map_PvflZUKM& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] == item)
            {
                s_TypeParam& tp = _.vals.mutref(i);
                if (!type_isAddrOfFn_5vhU4AHS(tp.matched))
                    tp.matched = tp.consumed;

            };
            return;
        };
    };
}
                                #endif

                                #ifndef DEFt_if_ref_sRjNxtUV
                                #define DEFt_if_ref_sRjNxtUV
inline void if_ref_sRjNxtUV(s_Map_PvflZUKM& _, const fu_STR& key, int)
{
    if_ref_TX1WAD5S(0, key, 0, 0, _);
}
                                #endif

static const s_Target& checkStruct_TdNFCub8(const s_Type& type, const s_Module& module, const s_Context& ctx, const s_Scope& _scope)
{
    const s_Target& t = lookupStruct_5FUAmY77(type, module, ctx).target;
    return (GET_wZZN3wJZ(t, _scope, module, ctx).type == type) ? t : (*(const s_Target*)fu::NIL);
}

                                #ifndef DEFt_pairs_HnjuUqQE
                                #define DEFt_pairs_HnjuUqQE
inline void pairs_HnjuUqQE(const s_Map_PvflZUKM& _, int, const s_Module& module, const s_Context& ctx, s_Scope& _scope, fu_VEC<s_ScopeItem>& res)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        fu::view<char> id = _.keys[i];
        const s_TypeParam& tp = _.vals[i];
        fu_STR name = ("$"_fu + id);
        const s_Type& type = tp.matched;
        s_Target _0 {};
        const s_Target target = ((_0 = s_Target((isStruct_C02JG8Ye(type) ? checkStruct_TdNFCub8(type, module, ctx, _scope) : (*(const s_Target*)fu::NIL)))) ? _0 : Scope_create_vJwCb5Oj(_scope, "type"_fu, ("$"_fu + id), type, 0, 0u, 0, module));
        Scope_set_VGSSTPCP(res, name, target, false);
    };
}
                                #endif

static fu_VEC<s_ScopeItem> intoScopeItems_pj5Kj5nL(const s_Map_PvflZUKM& typeParams, const s_Module& module, const s_Context& ctx, s_Scope& _scope)
{
    /*MOV*/ fu_VEC<s_ScopeItem> res {};
    pairs_HnjuUqQE(typeParams, 0, module, ctx, _scope, res);
    return /*NRVO*/ res;
}

                                #ifndef DEFt_remove_sZH0EhCc
                                #define DEFt_remove_sZH0EhCc
inline void remove_sZH0EhCc(fu_VEC<s_Warning>& a, int, const s_Target& target)
{
    const int size = a.size();
    int keep = 0;
    for (int i = 0; i < size; i++)
    {
        bool _0 {};
        if (!(__extension__ (
        {
            const s_Warning& w = a[i];
            _0 = ((w.dedupe == target.index));
        (void)0;}), bool(_0)))
        {
            if (i > keep)
                fu::view_swap(a, i, keep);

            keep++;
        };
    };
    a.shrink(keep);
}
                                #endif

static s_SolvedNodeData& MUT_zK2FAfx9(const s_SolvedNode& sn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    if (!((sn.signedidx & NODEIDX_signmask) == (_current_fnort.index & NODEIDX_signmask)))
        fail_UWhygD7O("MUT(): signedidx is off."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    const int nodeidx = (sn.signedidx >> NODEIDX_signbits);
    return EXT_mut_hG9GTQ4v(_current_fnort, module, _scope).nodes.mutref((nodeidx - 1));
}

static fu_VEC<s_SolvedNode>& outItems_RUwn1GIv(const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    return MUT_zK2FAfx9(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items;
}

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline constexpr int F_TEMPLATE = (1 << 28);
                                #endif

                                #ifndef DEF_F_PURE
                                #define DEF_F_PURE
inline constexpr int F_PURE = (1 << 13);
                                #endif

                                #ifndef DEF_F_NOVEC
                                #define DEF_F_NOVEC
extern const int F_NOVEC;
                                #endif

static s_Type tryGetArgSpecType_uIa0SDc0(fu::view<char> id, fu::view<s_ScopeItem> extra_items, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu_STR param = ("$"_fu + id);
    for (int i = 0; i < extra_items.size(); i++)
    {
        const s_ScopeItem& m = extra_items[i];
        if (m.id == param)
        {
            const s_Overload& o = GET_wZZN3wJZ(target_CL3tG3Pe(m), _scope, module, ctx);
            if (!(o.kind == "type"_fu))
                fail_UWhygD7O((x7E((((("tryGetArgSpecType: Not a typeparam: `"_fu + o.kind) + ":"_fu) + param) + "("_fu), fu::i64dec(EXT_OOgXljzg(target_CL3tG3Pe(m), module, _scope, ctx).max)) + ")`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

            return s_Type(o.type);
        };
    };
    return s_Type{};
}

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

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline constexpr int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEF_F_USING
                                #define DEF_F_USING
inline constexpr int F_USING = (1 << 18);
                                #endif

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline constexpr int F_MUT = (1 << 16);
                                #endif

static s_Target nested_74Rv3rSC(const int index, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    int _0 {};
    return s_Target { ((_0 = -SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index) ? _0 : int(module.modid)), int(index) };
}

static const s_Lifetime& Lifetime_test_w49CIvod(const s_Lifetime& lifetime, const bool tempsOK, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (SELF_TEST)
    {
        const s_Target& current_fn = SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target;
        const s_Overload& debug_2 = (current_fn ? GET_wZZN3wJZ(current_fn, _scope, module, ctx) : (*(const s_Overload*)fu::NIL));
        if (debug_2)
        {
        };
        if (!lifetime.uni0n.size())
            fail_UWhygD7O("Lifetime_test: no region set."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Region _last {};
        for (int i = 0; i < lifetime.uni0n.size(); i++)
        {
            const s_Region& region = lifetime.uni0n[i];

            {
                if (!(!i || (region > _last)))
                    fail_UWhygD7O("Lifetime_test: not a sorted set"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                _last = region;
            };
            if (Region_isArg_rLDFQf65(region))
                continue;

            if (Region_isTemp_rLDFQf65(region))
            {
                if (!((i == (lifetime.uni0n.size() - 1)) && tempsOK))
                    fail_UWhygD7O("Lifetime_test: unexpected temporary."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                continue;
            };
            const int index = Region_toLocalIndex_rLDFQf65(region);
            if (index)
            {
                const s_Overload& o = GET_wZZN3wJZ(nested_74Rv3rSC(index, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module), _scope, module, ctx);
                if (!(o.kind == "var"_fu))
                    fail_UWhygD7O(((("Lifetime_test: local is not a var: "_fu + o.kind) + " "_fu) + o.name), _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
    };
    return lifetime;
}

static s_Lifetime Lifetime_fromBinding_hJUAYXVH(const s_Target& target, const int local_of, const int flags, const s_Module& module, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_CurrentFn& _current_fn, const s_Target& _current_fnort)
{
    if (!((target.modid < 0) || (target.modid < 0) || (target.modid == module.modid)))
        fail_UWhygD7O("not from this module"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!local_of)
        return Lifetime_static_8nlJDPX0();

    const int index = target.index;
    const s_Region region = (((flags & (F_ARG | F_MUT)) == F_ARG) ? Region_fromArgIndex_KYx0R3Sq(index) : Region_fromLocalIndex_KYx0R3Sq(index));
    /*MOV*/ s_Lifetime res { Lifetime_test_w49CIvod(s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(region) } } }, bool{}, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module) };
    return /*NRVO*/ res;
}

static s_Target Binding_mAZZc3ub(const fu_STR& id, s_Type&& type, const int flags, bool& shadows, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss)
{
    fu_STR name { id };
    const int local_of = SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index;
    if (_root_scope)
        autoshadow_y5lleG3y(shadows, local_of, id, _scope, _ss, _root_scope);

    /*MOV*/ const s_Target target = Scope_create_vJwCb5Oj(_scope, "var"_fu, name, (*(const s_Type*)fu::NIL), flags, 0u, int(local_of), module);
    s_HelpersData* _0;
    (__extension__ (
    {
        const s_Helpers& h = last_4St321Ne(_helpers);
        _0 = &(_helpers_data.mutref(h.index));
    (void)0;}), *_0).vars += int(target.index);
    s_Overload& overload = GET_mut_AkUmF8Ao(target, _scope, module);

    {
        s_Lifetime lifetime = Lifetime_fromBinding_hJUAYXVH(target, local_of, flags, module, _here, ctx, _helpers, _helpers_data, _scope, _current_fn, _current_fnort);
        type.lifetime = s_Lifetime{};
        overload.type = ((flags & F_MUT) ? add_mutref_GR4OoJkm(s_Type(type), lifetime, _here, ctx) : add_ref_GR4OoJkm(s_Type(type), lifetime, _here, ctx));
    };
    return /*NRVO*/ target;
}

static s_SolvedNode& solved_set_KaR4f3TR(const s_Target& target, const s_SolvedNode& node, s_Scope& _scope, const s_Module& module)
{
    return (GET_mut_AkUmF8Ao(target, _scope, module).solved = node);
}

static void solveLet_9TZ4XuiI(s_SolvedNode& out, const fu_STR& id, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fn_or_type, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss)
{
    if (SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind != "let"_fu)
    {
        if (SELF_TEST)
        {
            if (!(is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)))
                fail_UWhygD7O((((("solveLet: results in a `"_fu + SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind) + ": "_fu) + id) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        return;
    };
    if (!(!is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) || SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime))
        fail_UWhygD7O((("solveLet: ref without lifetime: `"_fu + id) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    bool shadows = !!(SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags & F_SHADOW);
    const int isArg = (SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags & F_ARG);
    fu_STR cleanID {};
    if (SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags & F_COMPOUND_ID)
    {
        if (!(isArg))
            fail_UWhygD7O("`let`: F_COMPOUND_ID on a non-F_ARG."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        const int start = (find_05euw4KZ(id, '!') + 1);
        const int end = find_eUTPXk7U(id, '.', ((start > 0) ? int(start) : 0));
        cleanID = fu::slice(id, ((start > 0) ? int(start) : 0), ((end > 0) ? int(end) : id.size()));
        if (!(cleanID && (cleanID.size() < id.size())))
            fail_UWhygD7O("`let`: F_COMPOUND_ID bad cleanID."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    const fu_STR& id_1 = (cleanID ? cleanID : id);
    if (!X_unpackAddrOfFnBinding_5Q9XevCv(_scope.items, id_1, SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, true))
    {
        if (OPTI_dedupe_vars && !isArg && !(SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags & (F_PUB | F_IMPLICIT)))
        {
            const s_SolvedNode& init = SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[LET_INIT];
            if ((SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "call"_fu) && !SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items)
            {
                const s_Target target { SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target };
                const s_Overload& other = GET_wZZN3wJZ(target, _scope, module, ctx);
                if (other.kind == "var"_fu)
                {
                    if (isAssignable_P9wIESfO(other.type, SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
                    {
                        Scope_set_ATHtezm5(_scope, id_1, target, shadows);
                        if (SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags & F_USING)
                            _scope.usings.push(s_Target(target));

                        out = createEmpty_bZyGRBZC("empty"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
                        return;
                    };
                };
            };
        };
        const s_Target target { (MUT_zK2FAfx9(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target = Binding_mAZZc3ub(id_1, s_Type(SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type), int(SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags), shadows, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _root_scope, _ss)) };
        solved_set_KaR4f3TR(s_Target(target), out, _scope, module);
        Scope_set_ATHtezm5(_scope, id_1, target, shadows);
        if (SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags & F_USING)
            _scope.usings.push(s_Target(target));

    };
}

static s_SolvedNode solveLet_U8AxE11r(const s_Node& node, const s_Type& specType, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ s_SolvedNode out = solveLetLike_dontTouchScope_eSpJ8O8m(node, specType, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    const fu_STR& id = SolvedNodeData_kcSanAvz(out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).value;
    solveLet_9TZ4XuiI(out, fu_STR(id), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _root_scope, _ss);
    return /*NRVO*/ out;
}

                                #ifndef DEFt_only_qafQymtX
                                #define DEFt_only_qafQymtX
inline const s_Region& only_qafQymtX(fu::view<s_Region> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Lifetime Lifetime_fromNative_ejeACfdJ(fu::view<s_Node> sig, fu::view<s_SolvedNode> args, const s_Type& actual, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Target& _current_fnort)
{
    if (!((sig.size() + FN_ARGS_BACK) == args.size()))
        fail_UWhygD7O("sig.len != args.len"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

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
                    fail_UWhygD7O("Ambiguous __native lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                res = GET_wZZN3wJZ(SolvedNodeData_kcSanAvz(args[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, _scope, module, ctx).type;
                if (!(res.lifetime))
                    fail_UWhygD7O("Missing arg lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        if (!mutref || res.lifetime)
            break;

        mutref = false;
    };
    if (!(Region_isArg_rLDFQf65(only_qafQymtX(res.lifetime.uni0n))))
        fail_UWhygD7O("Non-single-arg __native lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!is_mutref_8e1ZyHy2(actual, _here, ctx) && !isAssignable_P9wIESfO(actual, res))
        return Lifetime_makeShared_knS7ptQD(res.lifetime);

    return static_cast<s_Lifetime&&>(res.lifetime);
}

                                #ifndef DEF_F_EXTERN
                                #define DEF_F_EXTERN
extern const int F_EXTERN;
                                #endif

inline static fu_STR mangleArguments_JsQasVlu(fu::view<s_SolvedNode> args, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_5brmsTGN(SolvedNodeData_kcSanAvz(args[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

static fu_STR HACK_nativeNameParts_Pm6WMkYq(const bool isNative, const s_Node& n_body)
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

static fu_STR CompoundArgID_outerSplice_36wXtxqi(fu_STR& name, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    bool exclam = false;
    for (int i = 0; i < name.size(); i++)
    {
        const char c = name[i];
        if (c == '!')
        {
            if (exclam)
                fail_UWhygD7O((("CompoundArgID: double bang in `"_fu + name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

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
        fail_UWhygD7O((("CompoundArgID: no `.` nor `!` in id `"_fu + name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return fu_STR{};
}

                                #ifndef DEFt_has_OXs5ha9z
                                #define DEFt_has_OXs5ha9z
inline bool has_OXs5ha9z(fu::view<s_Target> a, const s_Target& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEF_F_WRITTEN_TO
                                #define DEF_F_WRITTEN_TO
extern const int F_WRITTEN_TO;
                                #endif

static const s_Type& Lifetime_climbType_sEZMHS1H(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (!(o.kind == "var"_fu))
        fail_UWhygD7O(("Lifetime_climbType: not a `var`: "_fu + qWHAT_NVk45OOI(o, module, _scope, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    const s_SolvedNode& node = o.solved;
    return is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) ? SolvedNodeData_kcSanAvz(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[LET_INIT], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type : (*(const s_Type*)fu::NIL);
}

inline static void Lifetime_each_5IRbWujg(s_Lifetime& lifetime, int, const int locals_start, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;

        if (Region_isTemp_rLDFQf65(r))
            continue;

        const s_Overload& o = GET_mut_AkUmF8Ao(nested_74Rv3rSC(Region_toLocalIndex_rLDFQf65(r), _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module), _scope, module);
        const s_Type& init = Lifetime_climbType_sEZMHS1H(o, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort);
        if (!is_ref_8e1ZyHy2(init))
            continue;

        if (!(init.lifetime.uni0n.size()))
            fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

        lifetime.uni0n.splice(i, 1);
        const int N0 = lifetime.uni0n.size();
        lifetime = Lifetime_union_7jT6yxSF(lifetime, init.lifetime);
        const int N1 = lifetime.uni0n.size();
        i += (N1 - N0);
    };
}

static s_Lifetime Lifetime_unwind_k46N2N0l(/*MOV*/ s_Lifetime&& lifetime, const int locals_start, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    Lifetime_each_5IRbWujg(lifetime, 0, locals_start, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
    return static_cast<s_Lifetime&&>(lifetime);
}

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

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR addr_GFHsNEWh(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    const s_Token& t = _token_4nLgxTnv(token, ctx);
    if (token.modid != module.modid)
        return x7E((x7E((_fname_4nLgxTnv(token, ctx) + "@"_fu), fu::i64dec(t.line)) + ":"_fu), fu::i64dec(t.col));

    return x7E(x7E(fu::i64dec(t.line), ":"_fu), fu::i64dec(t.col));
}

static fu_STR addr_and_snippet_wRcf9zxU(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    return (addr_GFHsNEWh(token, ctx, module) + ":\n\n"_fu) + formatCodeSnippet_EjSh40rn(token, s_TokenIdx{}, ctx);
}

static fu_STR qSTACK_gElCW3Wa(const s_Target& target, const int position, fu::view<s_Target> seen, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_CurrentFn& _current_fn)
{
    return qSTACK_hYRKYQwY(target, Region_fromArgIndex_KYx0R3Sq(EXT_OOgXljzg(target, module, _scope, ctx).args[position].local), seen, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn);
}

static fu_STR qSTACK_hYRKYQwY(const s_Target& target, const s_Region& region, fu::view<s_Target> seen, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR src = "\n            "_fu;
    const bool rec = has_OXs5ha9z(seen, target);
    if (rec)
        src += "recursively "_fu;

    const s_Target& _current_fnort = target;
    fu_VEC<s_SolvedNodeData> nodes { EXT_OOgXljzg(target, module, _scope, ctx).nodes };
    for (int i = 0; i < nodes.size(); i++)
    {
        s_SolvedNodeData callsite { nodes[i] };
        if (callsite.kind == "call"_fu)
        {
            fu_VEC<s_Argument> host_args { EXT_OOgXljzg(callsite.target, module, _scope, ctx).args };
            for (int i_1 = 0; i_1 < host_args.size(); i_1++)
            {
                const s_Argument& host_arg = host_args[i_1];
                if (host_arg.flags & F_WRITTEN_TO)
                {
                    const s_SolvedNode& arg = callsite.items[i_1];
                    if (has_KVWxg77u(Lifetime_unwind_k46N2N0l(s_Lifetime(SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime), 0, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).uni0n, region))
                    {
                        src += (("via "_fu + qWHAT_NVk45OOI(GET_wZZN3wJZ(callsite.target, _scope, module, ctx), module, _scope, ctx)) + " at "_fu);
                        src += addr_and_snippet_wRcf9zxU(callsite.token, ctx, module);
                        if (!rec && (seen.size() < 8))
                            src += qSTACK_gElCW3Wa(callsite.target, i_1, (seen + target), module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn);

                        goto L_SEARCH;
                    };
                };
            };
        };
    } L_SEARCH:;

    return /*NRVO*/ src;
}

static const s_Module& getModule_s2fby1pl(const int modid, const s_Module& module, const s_Context& ctx)
{
    if (modid == module.modid)
        return module;

    return ctx.modules[modid];
}

static fu::view<char> trimmedName_a07BKYyw(const s_Module& module)
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

static fu_STR humanizeType_UeNyC0N4(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR result { (isStruct_C02JG8Ye(type) ? lookupStruct_5FUAmY77(type, module, ctx).name : type.vtype.canon) };
    if (type.vtype.modid)
        result = ((trimmedName_a07BKYyw(getModule_s2fby1pl(type.vtype.modid, module, ctx)) + "::"_fu) + result);

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
inline constexpr int F_OOE_RTL = (1 << 25);
                                #endif

static int& isRTL_set_g8KdiGFP(s_Overload& o, const bool rtl)
{
    return (rtl ? (o.flags |= F_OOE_RTL) : (o.flags &= ~F_OOE_RTL));
}

static void updateScope_ATgjHgOK(const s_CurrentFn& out, const s_Type& retval, const bool maybeLast, const s_Target& target, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_Target& _current_fnort, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const bool isNative, const bool isUnspec, const int isPure, const s_CurrentFn& _current_fn, const int isNovec, const bool isInline)
{
    if (GET_wZZN3wJZ(target, _scope, module, ctx).status & SS_DIRTY)
    {
        GET_mut_AkUmF8Ao(target, _scope, module).status |= SS_UPDATED;
        return;
    };
    fu_VEC<s_SolvedNode> items { SolvedNodeData_kcSanAvz(out.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items };
    const int N = (items.size() + FN_ARGS_BACK);
    int min = 0;
    int max = 0;
    const s_NativeOpts NativeOpts = (isNative ? NativeOpts_3jVozxZ2(GET_wZZN3wJZ(target, _scope, module, ctx).name) : s_NativeOpts{});
    fu_VEC<s_Argument> args {};
    for (int i = 0; i < N; i++)
    {
        const s_SolvedNode argNode { items[i] };
        if (!(SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "let"_fu))
            fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

        fu_STR name { SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).value };
        fu_STR autocall = ((SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags & F_COMPOUND_ID) ? CompoundArgID_outerSplice_36wXtxqi(name, _here, ctx, _helpers, _helpers_data, _scope, module) : fu_STR{});
        const bool isImplicit = !!(SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags & F_IMPLICIT);
        s_BitSet risk_free = ((!isNative || NativeOpts.no_AAR) && !isUnspec ? ArgsAtRisk_listRiskFree_xUdc86nO(out.flow, i) : s_BitSet{});
        const s_Target argTarget { SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target };
        const bool written_via = (is_mutref_8e1ZyHy2(SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, _here, ctx) && (isNative || has_asJtcpQm(out.events.args_ever_written, argTarget.index)));
        if (isPure && written_via)
        {
            fu_STR _0 {};
            fu_STR _1 {};
            (_1 = (_0 = (((qWHAT_NVk45OOI(GET_wZZN3wJZ(target, _scope, module, ctx), module, _scope, ctx) + " is not pure, writes to argument "_fu) + qID_PSFLzFOM(human_g4kmYeuH(name, module, _scope, ctx))) + ":\n"_fu), (static_cast<fu_STR&&>(_0) + qSTACK_hYRKYQwY(target, Region_fromArgIndex_KYx0R3Sq(argTarget.index), fu::view<s_Target>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn))), fail_UWhygD7O(static_cast<fu_STR&&>(_1), _here, ctx, _helpers, _helpers_data, _scope, module));
        };
        if (maybeLast && isNovec && (is_rx_copy_8e1ZyHy2(SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) || is_rx_resize_8e1ZyHy2(SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)))
            fail_UWhygD7O(((((qWHAT_NVk45OOI(GET_wZZN3wJZ(target, _scope, module, ctx), module, _scope, ctx) + " is not novec, argument "_fu) + qID_PSFLzFOM(human_g4kmYeuH(name, module, _scope, ctx))) + " is "_fu) + humanizeType_UeNyC0N4(SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Argument arg = s_Argument { fu_STR(name), fu_STR(autocall), s_Type(SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type), s_SolvedNode((!isImplicit ? SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), (SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags | (written_via ? F_WRITTEN_TO : (*(const int*)fu::NIL))), int(argTarget.index), s_BitSet(risk_free) };
        if (!(arg.type || isUnspec))
            fail_UWhygD7O((("Unexpected untyped argument: `"_fu + name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

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
    s_Overload overload { GET_wZZN3wJZ(target, _scope, module, ctx) };
    s_Extended& ext = EXT_mut_hG9GTQ4v(target, module, _scope);
    bool change = false;
    if (ext.callers)
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
    s_Overload& overload_1 = GET_mut_AkUmF8Ao(target, _scope, module);
    overload_1.type = retval;
    if (isInline)
        return;

    if (!(retval))
        fail_UWhygD7O("FnDecl_update: no return type."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (is_ref_8e1ZyHy2(retval))
        Lifetime_test_w49CIvod(retval.lifetime, bool{}, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

    overload_1.flags = SolvedNodeData_kcSanAvz(out.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags;

    {
        const bool rtl = ((args.size() == 2) && (overload_1.flags & F_OPERATOR) && hasAssignment_rJbriNRz(overload_1.name));
        isRTL_set_g8KdiGFP(overload_1, rtl);
    };
    if (change)
        overload_1.status |= SS_UPDATED;

    solved_set_KaR4f3TR(target, (!isUnspec ? out : (*(const s_CurrentFn*)fu::NIL)).out, _scope, module);
}

inline static fu_STR mangleArguments_1RfDOWvG(fu::view<s_Argument> args, const s_TokenIdx& _here, const s_Context& ctx)
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
extern const short HM_CanReturn;
                                #endif

                                #ifndef DEF_HM_LabelUsed
                                #define DEF_HM_LabelUsed
extern const short HM_LabelUsed;
                                #endif

                                #ifndef DEF_F_LAMBDA
                                #define DEF_F_LAMBDA
inline constexpr int F_LAMBDA = (1 << 30);
                                #endif

                                #ifndef DEF_HM_Lambda
                                #define DEF_HM_Lambda
extern const short HM_Lambda;
                                #endif

static int GET_next_local_index_LA0p7vFN(const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    return SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index ? (_scope.extended[SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index].locals.size() + 1) : int{};
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

static s_SolvedNode createJump_3KfOEGqd(const s_Target& target, const s_SolvedNode& expr, const s_Helpers& h, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode_GiPnt7zQ("jump"_fu, t_never, 0, (*(const fu_STR*)fu::NIL), (expr ? fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } } : fu_VEC<s_SolvedNode>{}), target, h.index, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

                                #ifndef DEFt_only_aj4CwosS
                                #define DEFt_only_aj4CwosS
inline const s_SolvedNode& only_aj4CwosS(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static void checkAssignable_ITooPbhq(const s_Type& host, const s_Type& guest, fu::view<char> err, const fu_STR& id, const fu_STR& sep, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!(isAssignable_P9wIESfO((host ? host : fail_UWhygD7O("Bad host type."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)), (guest ? guest : fail_UWhygD7O("Bad guest type."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)))))
        fail_UWhygD7O((((((err + (id ? ((" `"_fu + id) + "`"_fu) : fu_STR{})) + ": "_fu) + humanizeType_UeNyC0N4(host, module, ctx)) + (sep ? fu_STR(sep) : " <- "_fu)) + humanizeType_UeNyC0N4(guest, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

}

static s_Type superType_rjCdQuCu(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_Type _0 {};
    return (_0 = type_trySuper_P9wIESfO(a, b)) ? static_cast<s_Type&&>(_0) : fail_UWhygD7O((((((((id ? (("`"_fu + human_g4kmYeuH(id, module, _scope, ctx)) + "`: "_fu) : fu_STR{}) + reason) + "No common supertype: `"_fu) + humanizeType_UeNyC0N4(a, module, ctx)) + "` | `"_fu) + humanizeType_UeNyC0N4(b, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void reportReturnType_y8ueVWfK(const s_Helpers& h, const s_Type& type, fu_VEC<s_HelpersData>& _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, const s_Scope& _scope, const s_Module& module)
{
    if (_helpers_data[h.index].ret_expect && short((_helpers_data[h.index].mask & HM_Function)))
        checkAssignable_ITooPbhq(_helpers_data[h.index].ret_expect, type, "Expression not assignable to return annotation"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);

    _helpers_data.mutref(h.index).ret_actual = (_helpers_data[h.index].ret_actual ? superType_rjCdQuCu("Subsequent return: "_fu, _helpers_data[h.index].ret_actual, type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data) : s_Type(type));
    if (!(_helpers_data[h.index].ret_actual))
        fail_UWhygD7O("Can't be null past this point."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

}

                                #ifndef DEF_F_REF
                                #define DEF_F_REF
inline constexpr int F_REF = (1 << 22);
                                #endif

static bool Lifetime_allowsMutrefReturn_7A2LB1GJ(const s_Lifetime& lifetime, const int locals_start, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{

    {
        for (int i = lifetime.uni0n.size(); i-- > 0; )
        {
            const s_Region& r = lifetime.uni0n[i];
            if (r.index < locals_start)
                break;

            if (Region_isTemp_rLDFQf65(r))
                continue;

            const s_Overload& o = GET_mut_AkUmF8Ao(nested_74Rv3rSC(Region_toLocalIndex_rLDFQf65(r), _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module), _scope, module);
            if (!(is_mutref_8e1ZyHy2(o.type, _here, ctx)))
                fail_UWhygD7O(("Checking for mutref-return-ok found non-mutref: "_fu + qWHAT_NVk45OOI(o, module, _scope, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

            if ((o.kind == "var"_fu) && !(o.flags & F_REF))
                return false;

            const s_Type& init = Lifetime_climbType_sEZMHS1H(o, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort);
            if (!Lifetime_allowsMutrefReturn_7A2LB1GJ(s_Lifetime(init.lifetime), locals_start, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module))
                return false;

        };
    };
    return true;
}

                                #ifndef DEF_F_TODO_FIX_RRET
                                #define DEF_F_TODO_FIX_RRET
inline constexpr int F_TODO_FIX_RRET = (1 << 27);
                                #endif

inline static void Lifetime_each_bRCSmSfy(const s_Lifetime& lifetime, int, const int locals_start, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const int locals_start_1)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;

        if (Region_isTemp_rLDFQf65(r))
            continue;

        s_Overload& o = GET_mut_AkUmF8Ao(nested_74Rv3rSC(Region_toLocalIndex_rLDFQf65(r), _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module), _scope, module);
        o.flags |= F_TODO_FIX_RRET;
        const s_Type& init = Lifetime_climbType_sEZMHS1H(o, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort);
        if (is_ref_8e1ZyHy2(init))
            Lifetime_F_TODO_FIX_RRET_lefmMroT(s_Lifetime(init.lifetime), locals_start_1, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
}

static void Lifetime_F_TODO_FIX_RRET_lefmMroT(const s_Lifetime& lifetime, const int locals_start, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    Lifetime_each_bRCSmSfy(lifetime, 0, locals_start, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, locals_start);
}

                                #ifndef DEFt_if_last_6mv8AnDF
                                #define DEFt_if_last_6mv8AnDF
inline const s_SolvedNode& if_last_6mv8AnDF(fu::view<s_SolvedNode> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

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

static int Lifetime_vs_7Hl2eOBc(const s_Lifetime& lifetime, const int locals_start)
{
    return ((Region_toLocalIndex_rLDFQf65(if_first_l0gXiKi4(lifetime.uni0n)) >= locals_start) ? +1 : ((Region_toLocalIndex_rLDFQf65(if_last_l0gXiKi4(lifetime.uni0n)) < locals_start) ? -1 : 0));
}

                                #ifndef DEF_F_MOVED_FROM
                                #define DEF_F_MOVED_FROM
inline constexpr int F_MOVED_FROM = (1 << 11);
                                #endif

inline static void Lifetime_each_qWrn8xl1(const s_Lifetime& lifetime, int, const int locals_start, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;

        if (Region_isTemp_rLDFQf65(r))
            continue;

        s_Overload& o = GET_mut_AkUmF8Ao(nested_74Rv3rSC(Region_toLocalIndex_rLDFQf65(r), _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module), _scope, module);
        if (o.flags & F_MOVED_FROM)
            continue;

        o.flags |= F_MOVED_FROM;
        const s_Type& init = Lifetime_climbType_sEZMHS1H(o, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort);
        if (is_ref_8e1ZyHy2(init))
            Lifetime_F_MOVED_FROM_siKa7NOb(s_Lifetime(init.lifetime), _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
}

static void Lifetime_F_MOVED_FROM_siKa7NOb(const s_Lifetime& lifetime, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    Lifetime_each_qWrn8xl1(lifetime, 0, 0, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode createMove_SHfHDmzl(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_CurrentFn& _current_fn, const s_Target& _current_fn_or_type)
{
    Lifetime_F_MOVED_FROM_siKa7NOb(s_Lifetime(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime), _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
    return SolvedNode_GiPnt7zQ("move"_fu, clear_refs_8e1ZyHy2(s_Type(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)), 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createCopy_0mACI4iq(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fn_or_type)
{
    return SolvedNode_GiPnt7zQ("copy"_fu, clear_refs_8e1ZyHy2(s_Type(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)), 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

                                #ifndef DEFt_only_WrcQl81W
                                #define DEFt_only_WrcQl81W
inline s_SolvedNode& only_WrcQl81W(fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static void mcom_BlockReturns_CopyOrMoveDecision_aVSsaSbP(const s_Helpers& h, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, s_Scope& _scope, const s_Module& module, const s_CurrentFn& _current_fn, const s_Target& _current_fn_or_type)
{
    for (int i = 0; i < _helpers_data[h.index].returns.size(); i++)
    {
        s_SolvedNode expr { only_aj4CwosS(SolvedNodeData_kcSanAvz(_helpers_data[h.index].returns[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items) };
        s_Type type { SolvedNodeData_kcSanAvz(expr, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type };
        if (is_ref_8e1ZyHy2(type))
        {
            type.lifetime = Lifetime_unwind_k46N2N0l(s_Lifetime(type.lifetime), _helpers_data[h.index].locals_start, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
            int _0 {};
            const int ltCompare = Lifetime_vs_7Hl2eOBc(type.lifetime, ((_0 = _helpers_data[h.index].locals_start) ? _0 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)));
            if ((ltCompare >= 0))
            {
                if (ltCompare > 0)
                    expr = createMove_SHfHDmzl(expr, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _current_fn_or_type);
                else
                    expr = createCopy_0mACI4iq(expr, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);

                only_WrcQl81W(MUT_zK2FAfx9(_helpers_data[h.index].returns[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items) = expr;
                type = SolvedNodeData_kcSanAvz(expr, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type;
            };
        };
        reportReturnType_y8ueVWfK(h, type, _helpers_data, _here, ctx, _helpers, _scope, module);
    };
    if (_helpers_data[h.index].ret_expect)
        checkAssignable_ITooPbhq(_helpers_data[h.index].ret_expect, _helpers_data[h.index].ret_actual, "Actual return type does not match annotation"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);

}

static bool currentFn_mustBecomeInline_jsAJliCT(const s_CurrentFn& _current_fn)
{
    return _current_fn.effects.far_jumps.size() > 0;
}

static void test_nodes_EdSeBerj(fu::view<s_SolvedNode> nodes, fu::view<char> debug, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    for (int i = 0; i < nodes.size(); i++)
        test_node_IJROg8n7(nodes[i], (x7E((debug + "["_fu), fu::i64dec(i)) + "]"_fu), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

}

inline static fu_STR mangleArguments_L6hItWIk(fu::view<s_SolvedNode> args, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_5brmsTGN(SolvedNodeData_kcSanAvz(args[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_F_MUSTNAME
                                #define DEF_F_MUSTNAME
inline constexpr int F_MUSTNAME = (1 << 19);
                                #endif

static fu_STR explainConversion_q5iXZeNQ(fu::view<s_Target> path, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR res = "`"_fu;
    for (int i = 0; i < path.size(); i++)
    {
        if (i)
            res += "` -> `"_fu;

        const s_Overload& o = GET_wZZN3wJZ(path[i], _scope, module, ctx);
        res += qWHAT_NVk45OOI(o, module, _scope, ctx);
        if (i < path.size())
            res += (": "_fu + humanizeType_UeNyC0N4(o.type, module, ctx));

    };
    res += "`"_fu;
    return /*NRVO*/ res;
}

static fu_STR explainWhichFn_nyZDxjj1(const s_Target& overload, fu::view<fu_VEC<s_Target>> conversions, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR result = ("`"_fu + GET_wZZN3wJZ(overload, _scope, module, ctx).name);
    if (EXT_OOgXljzg(overload, module, _scope, ctx).args)
    {
        result += "("_fu;
        for (int i = 0; i < EXT_OOgXljzg(overload, module, _scope, ctx).args.size(); i++)
        {
            const s_Argument& arg = EXT_OOgXljzg(overload, module, _scope, ctx).args[i];
            if (i)
                result += ","_fu;

            result += (((("\n\t"_fu + qID_PSFLzFOM(human_g4kmYeuH(arg.name, module, _scope, ctx))) + ((arg.flags & F_MUSTNAME) ? "!"_fu : fu_STR{})) + (arg.dEfault ? "?: "_fu : ": "_fu)) + (arg.type ? humanizeType_UeNyC0N4(arg.type, module, ctx) : "$"_fu));
            const fu_VEC<s_Target>& c = ((conversions.size() > i) ? conversions[i] : (*(const fu_VEC<s_Target>*)fu::NIL));
            if (c)
                result += (" via "_fu + explainConversion_q5iXZeNQ(c, _scope, module, ctx));

        };
        result += ")"_fu;
    };
    result += "`"_fu;
    return /*NRVO*/ result;
}

[[noreturn]] static fu::never err_GBq8NAzt(fu::view<char> reason, fu::view<char> debug, const s_SolvedNode& callsite, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    fail_UWhygD7O(((((debug + " "_fu) + qWHAT_NVk45OOI(GET_wZZN3wJZ(SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, _scope, module, ctx), module, _scope, ctx)) + ": "_fu) + reason), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void test_CallSignature_ddtYDpIn(const s_SolvedNode& callsite, fu::view<char> debug, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    fu::view<s_Argument> host_args = EXT_OOgXljzg(SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, module, _scope, ctx).args;
    fu::view<s_SolvedNode> args = SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items;
    if ((args.size() == 0) && (GET_wZZN3wJZ(SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, _scope, module, ctx).kind == "type"_fu))
        return;

    if (!(host_args.size() == args.size()))
        err_GBq8NAzt((((((x7E((x7E("host_args.len ("_fu, fu::i64dec(host_args.size())) + ") != args.len ("_fu), fu::i64dec(args.size())) + "):"_fu) + "\n\t\t"_fu) + mangleArguments_L6hItWIk(args, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module)) + "\n\t\t"_fu) + explainWhichFn_nyZDxjj1(SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx)), debug, callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

    for (int i = 0; i < host_args.size(); i++)
    {
        const s_Argument& host_arg = host_args[i];
        const s_SolvedNode& arg = args[i];
        if (!(isAssignableAsArgument_P9wIESfO(host_arg.type, SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)))
            err_GBq8NAzt(((((((x7E("Arg #"_fu, fu::i64dec(i)) + ", "_fu) + qID_PSFLzFOM(human_g4kmYeuH(host_arg.name, module, _scope, ctx))) + " not assignable to host_arg: "_fu) + humanizeType_UeNyC0N4(host_arg.type, module, ctx)) + " <- "_fu) + humanizeType_UeNyC0N4(SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, module, ctx)), debug, callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
}

static void test_Statements_uUdal0T2(const s_SolvedNode& block, fu::view<char> debug, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    fu::view<s_SolvedNode> items = SolvedNodeData_kcSanAvz(block, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items;
    for (int i = 0; i < items.size(); i++)
    {
        const s_SolvedNode& n = items[i];
        if (!(SolvedNodeData_kcSanAvz(n, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind))
            fail_UWhygD7O((x7E((debug + ": No .kind on item["_fu), fu::i64dec(i)) + "]."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    };
}

static void test_node_IJROg8n7(const s_SolvedNode& node, fu_STR&& debug, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    debug += ("/"_fu + SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind);
    if (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).value)
        debug += (("["_fu + SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).value) + "]"_fu);

    test_nodes_EdSeBerj(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items, debug, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
    _here = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).token;
    if (!(!is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) == !SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime))
        fail_UWhygD7O(((debug + ": !!ref != !!lt: "_fu) + humanizeType_UeNyC0N4(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    fu::view<char> k = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind;
    if (k == "call"_fu)
        return test_CallSignature_ddtYDpIn(node, debug, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

    if ((k == "block"_fu) || (k == "and"_fu) || (k == "or"_fu) || (k == "if"_fu))
    {
        if ((k == "and"_fu) || (k == "or"_fu))
        {
            if (!(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size() > 1))
                fail_UWhygD7O(x7E((debug + ".len: "_fu), fu::i64dec(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size())), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        if (k == "if"_fu)
        {
            if (!(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size() == 3))
                fail_UWhygD7O(x7E((debug + ".len: "_fu), fu::i64dec(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size())), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        return test_Statements_uUdal0T2(node, debug, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
extern const int RELAX_before_bck;
                                #endif

                                #ifndef DEFt_unless_oob_UBlcSkJW
                                #define DEFt_unless_oob_UBlcSkJW
inline const s_Type& unless_oob_UBlcSkJW(fu::view<s_Type> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Type*)fu::NIL);
}
                                #endif

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
extern const int RELAX_all;
                                #endif

                                #ifndef DEF_F_LAX
                                #define DEF_F_LAX
inline constexpr int F_LAX = (1 << 8);
                                #endif

                                #ifndef DEF_F_UNUSED
                                #define DEF_F_UNUSED
inline constexpr int F_UNUSED = (1 << 10);
                                #endif

static void relaxBlockVar_M7HVaAk6(const s_Target& t, const int relax_mask, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Target& _current_fn_or_type, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Overload& var = GET_wZZN3wJZ(t, _scope, module, ctx);
    s_Type usage { unless_oob_UBlcSkJW(_current_fn.var_usage, t.index) };
    if (!usage && (relax_mask == RELAX_all))
    {
        if (!(var.flags & F_LAX))
            _warnings += s_Warning { int(SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index), s_TokenIdx(SolvedNodeData_kcSanAvz(GET_wZZN3wJZ(t, _scope, module, ctx).solved, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).token), (("Unused variable: `"_fu + var.name) + "`: make it `lax` if this is intentional."_fu) };

        GET_mut_AkUmF8Ao(t, _scope, module).flags |= F_UNUSED;
    };
    s_Overload& o = GET_mut_AkUmF8Ao(t, _scope, module);
    try_relax_69tqLpHe(o.type, usage, int(relax_mask));

    {
        const s_SolvedNode node { GET_wZZN3wJZ(t, _scope, module, ctx).solved };
        if (!(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
            fail_UWhygD7O("!var.solved.type, can`t propagateType"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        try_relax_69tqLpHe(MUT_zK2FAfx9(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, usage, int(relax_mask));
        const s_SolvedNode init { (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items ? SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL)) };
        if (init)
        {
            propagateType_sdU76du2(s_SolvedNode(init), s_Type(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type), relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
            if (is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) && !(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags & F_ARG))
                MUT_zK2FAfx9(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime = SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime;

        };
    };
    s_Overload& o_1 = GET_mut_AkUmF8Ao(t, _scope, module);
    if (o_1.flags & F_MUT)
    {
        if (is_mutref_8e1ZyHy2(usage, _here, ctx) || (o_1.flags & F_TODO_FIX_RRET))
        {
            const s_SolvedNode& node = GET_wZZN3wJZ(t, _scope, module, ctx).solved;
            s_Type type = clear_refs_8e1ZyHy2(s_Type(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type));
            MUT_zK2FAfx9(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type = type;
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

static bool isNested_DP3uXlSt(const s_Target& target, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    return target.modid == -SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index;
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

static bool TODO_FIX_has_4wxnoJnL(fu::view<s_Region> a, const s_Region& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}

static fu_STR mangleArguments_w8PECCBL(fu::view<s_SolvedNode> args, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
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
            mangle += serializeType_5brmsTGN(GET_wZZN3wJZ(last_g4Ujnafl(conversions[i]), _scope, module, ctx).type, "mangle.conv"_fu, _here, ctx);
        else
        {
            if ((callsiteIndex >= 0) && (callsiteIndex <= args.size()))
                mangle += serializeType_5brmsTGN(SolvedNodeData_kcSanAvz(args[callsiteIndex], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, "mangle.no-conv"_fu, _here, ctx);

        };
    };
    if (REST_START < REST_END)
    {
        if (REST_START)
            mangle += ","_fu;

        mangle += serializeType_5brmsTGN(REST_TYPE, "mangle[Nodes].rest"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEFt_get_1tB9iOuB
                                #define DEFt_get_1tB9iOuB
inline const s_Target& get_1tB9iOuB(const s_Map_nrIRbWMi& _, const fu_STR& key)
{
    const int idx = bfind_nPNQURov(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const s_Target*)fu::NIL);
}
                                #endif

static s_Target trySpecialize_Q0h9lc0y(const s_Target& overloadIdx, fu::view<s_SolvedNode> args, fu_STR& args_mangled, const int REST_START, const s_Type& REST_TYPE, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(args_mangled))
        args_mangled = mangleArguments_w8PECCBL(args, reorder, use_reorder, conversions, REST_START, REST_TYPE, _scope, module, ctx, _here, _current_fnort, _helpers, _helpers_data);

    fu_STR mangle = ((x7E(x7E(fu::i64dec(overloadIdx.modid), "#"_fu), fu::i64dec(overloadIdx.index)) + " "_fu) + args_mangled);
    s_Target _0 {};
    const s_Target spec = ((_0 = s_Target(get_1tB9iOuB(_specs, mangle))) ? _0 : doTrySpecialize_FDyqg3xS(s_Target{}, overloadIdx, args, fu_STR(mangle), reorder, use_reorder, conversions, REST_START, REST_TYPE, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string));
    return s_Target((!is_SPECFAIL_tLiy0fvO(spec) ? spec : (*(const s_Target*)fu::NIL)));
}

static s_Lifetime Lifetime_replaceArgsAtCallsite_GBQ0jYFb(const s_Target& target, fu::view<s_SolvedNode> argNodes, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    const fu_VEC<s_Region>& returned = GET_wZZN3wJZ(target, _scope, module, ctx).type.lifetime.uni0n;
    fu::view<s_Argument> host_args = EXT_OOgXljzg(target, module, _scope, ctx).args;
    if (!Region_isArg_rLDFQf65(if_first_l0gXiKi4(returned)))
        return s_Lifetime { fu_VEC<s_Region>(returned) };

    s_Lifetime keep {};
    s_Lifetime replace {};
    int offset = host_args.size();
    for (int i = 0; i < returned.size(); i++)
    { {
        const s_Region& region = returned[i];
        if (Region_isStatic_rLDFQf65(region))
        {
            keep.uni0n += s_Region(region);
            continue;
        };
        if (!(Region_isArg_rLDFQf65(region)))
            fail_UWhygD7O(x7E("Not an argument region: "_fu, fu::i64dec(region.index)), _here, ctx, _helpers, _helpers_data, _scope, module);

        const int index = Region_toArgIndex_rLDFQf65(region);
        while (offset--)
        {
            const int here = host_args[offset].local;
            if (here == index)
            {
                const s_SolvedNode& argNode = argNodes[offset];
                const s_Lifetime* _0;
                s_Lifetime argLt = (is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) ? s_Lifetime((*(_0 = &(SolvedNodeData_kcSanAvz(argNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime)) ? *_0 : fail_UWhygD7O("refarg without lifetime"_fu, _here, ctx, _helpers, _helpers_data, _scope, module))) : Lifetime_temporary_8nlJDPX0());
                replace = Lifetime_union_7jT6yxSF(replace, argLt);
                goto L_06;
            };
            if (!(!here || (here > index)))
                fail_UWhygD7O("Nope, going backwards."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        fail_UWhygD7O(x7E("Could not find argument region: "_fu, fu::i64dec(index)), _here, ctx, _helpers, _helpers_data, _scope, module);
      } L_06:;
    };
    return Lifetime_union_7jT6yxSF(keep, replace);
}

static bool isRTL_5bMRDBj1(const s_Overload& o)
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

static void propagateType_sdU76du2(const s_SolvedNode& node, const s_Type& slot, const int relax_mask, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_STR k { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind };
    if (k == "let"_fu)
    {
        if (!SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target)
            return;

        return relaxBlockVar_M7HVaAk6(s_Target(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target), relax_mask, _scope, module, ctx, _current_fn, _warnings, _current_fnort, _here, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    };
    const s_TokenIdx here0 { _here };
    _here = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).token;
    fu_DEFER(_here = here0);
    try_relax_69tqLpHe(MUT_zK2FAfx9(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, slot, int(relax_mask));
    s_Type slot_1 { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type };
    const int LAST = (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size() - 1);
    if (k == "and"_fu)
    {
        s_Type rest { ((is_mutref_8e1ZyHy2(slot_1, _here, ctx) && CANNOT_definit_mutrefs) ? slot_1 : t_bool) };
        for (int i = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size(); i-- > 0; )
            propagateType_sdU76du2(s_SolvedNode(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[i]), s_Type(((i == LAST) ? slot_1 : rest)), relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    }
    else if (k == "or"_fu)
    {
        for (int i = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size(); i-- > 0; )
            propagateType_sdU76du2(s_SolvedNode(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[i]), slot_1, relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    }
    else if (k == "if"_fu)
    {
        for (int i = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size(); i-- > 0; )
            propagateType_sdU76du2(s_SolvedNode(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[i]), ((i != 0) ? slot_1 : t_bool), relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    }
    else if (k == "call"_fu)
    {
        const s_Target t { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target };
        if (GET_wZZN3wJZ(t, _scope, module, ctx).kind == "field"_fu)
            return propagateType_sdU76du2(s_SolvedNode(only_aj4CwosS(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items)), slot_1, relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

        if (GET_wZZN3wJZ(t, _scope, module, ctx).kind == "var"_fu)
        {
            if (isNested_DP3uXlSt(t, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module))
            {
                s_Type& usage = grow_if_oob_ZRJNd4jX(_current_fn.var_usage, t.index);
                if (!usage)
                    usage = slot_1;
                else
                {
                    s_Type _0 {};
                    usage = ((_0 = type_tryIntersect_P9wIESfO(usage, slot_1)) ? static_cast<s_Type&&>(_0) : fail_UWhygD7O((((((qWHAT_NVk45OOI(GET_wZZN3wJZ(t, _scope, module, ctx), module, _scope, ctx) + ": Usage intersection failure: `"_fu) + humanizeType_UeNyC0N4(usage, module, ctx)) + "` & `"_fu) + humanizeType_UeNyC0N4(slot_1, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module));
                };
            };
            return;
        };
        if (EXT_OOgXljzg(t, module, _scope, ctx).spec_of && is_ref_8e1ZyHy2(GET_wZZN3wJZ(t, _scope, module, ctx).type))
        {
            fu_VEC<s_SolvedNode> relaxed {};
            for (int i = 0; i < SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size(); i++)
            {
                const s_SolvedNode orig { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[i] };
                if (TODO_FIX_has_4wxnoJnL(GET_wZZN3wJZ(t, _scope, module, ctx).type.lifetime.uni0n, Region_fromArgIndex_KYx0R3Sq(EXT_OOgXljzg(t, module, _scope, ctx).args[i].local)))
                {
                    s_Type type { SolvedNodeData_kcSanAvz(orig, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type };
                    if (try_relax_69tqLpHe(type, slot_1, int(relax_mask)))
                    {
                        if (!relaxed)
                            relaxed = fu::slice(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items, 0, i);

                        relaxed += SolvedNode_GiPnt7zQ("__relaxed"_fu, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
                        continue;
                    };
                };
                if (relaxed)
                    relaxed += s_SolvedNode(orig);

            };
            if (relaxed)
            {
                fu_STR args_mangled {};
                const s_Target spec = trySpecialize_Q0h9lc0y(s_Target(EXT_OOgXljzg(t, module, _scope, ctx).spec_of), relaxed, args_mangled, relaxed.size(), (*(const s_Type*)fu::NIL), fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx, _here, _current_fnort, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
                if (spec && !(spec == EXT_OOgXljzg(t, module, _scope, ctx).spec_of))
                {
                    checkAssignable_ITooPbhq(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, GET_wZZN3wJZ(spec, _scope, module, ctx).type, "Relaxed specialization does not return a subtype"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);
                    if (is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
                        MUT_zK2FAfx9(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime = Lifetime_test_w49CIvod(Lifetime_replaceArgsAtCallsite_GBQ0jYFb(spec, relaxed, _scope, module, ctx, _here, _helpers, _helpers_data, _current_fnort), true, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

                    MUT_zK2FAfx9(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target = spec;
                    makeNote_NPJpVbAC(N_RelaxRespec, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                };
            };
        };
        if (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items)
        {
            fu_VEC<s_Argument> host_args { EXT_OOgXljzg(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, module, _scope, ctx).args };
            const bool rtl = isRTL_5bMRDBj1(GET_wZZN3wJZ(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, _scope, module, ctx));
            const int N = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size();
            const int start = (rtl ? 0 : (N - 1));
            const int end = (rtl ? int(N) : (0 - 1));
            const int incr = (rtl ? +1 : -1);
            for (int i = start; i != end; i += incr)
                propagateType_sdU76du2(s_SolvedNode(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[i]), s_Type(host_args[i].type), relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

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
        propagateType_sdU76du2(s_SolvedNode(only_aj4CwosS(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items)), ((k == "copy"_fu) ? make_copyable_8e1ZyHy2(s_Type(slot_1)) : s_Type(slot_1)), relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        if (!(is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(only_aj4CwosS(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)))
            fail_UWhygD7O("TODO: Relaxed a copy/move to a value, no point in keeping the outer node."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    }
    else if (k == "arrlit"_fu)
    {
        for (int i = 0; i < SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size(); i++)
        {
            s_Type _1 {};
            propagateType_sdU76du2(s_SolvedNode(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[i]), ((_1 = tryClear_sliceable_8e1ZyHy2(slot_1)) ? static_cast<s_Type&&>(_1) : fail_UWhygD7O("propagateType(arrlit): Can't clear solve item type."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)), relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        };
    }
    else if (k == "argid"_fu)
        propagateType_sdU76du2(s_SolvedNode(only_aj4CwosS(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items)), slot_1, relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    else if (k == "jump"_fu)
    {
        if (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items)
        {
            const s_Helpers h = s_Helpers { int(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).helpers) };
            if (!(_helpers_data[h.index].ret_actual))
                fail_UWhygD7O("propagateType(jump): h.ret_actual not available."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            propagateType_sdU76du2(s_SolvedNode(only_aj4CwosS(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items)), s_Type(_helpers_data[h.index].ret_actual), relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        };
    }
    else if (k == "block"_fu)
    {
        const s_Helpers h = s_Helpers { int(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).helpers) };
        try_relax_69tqLpHe(_helpers_data.mutref(h.index).ret_actual, slot_1, int(relax_mask));
        for (int i = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size(); i-- > 0; )
        {
            const s_SolvedNode& node_1 = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[i];
            const s_SolvedNode& node_2 = ((SolvedNodeData_kcSanAvz(node_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "defer"_fu) ? only_aj4CwosS(SolvedNodeData_kcSanAvz(node_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items) : node_1);
            propagateType_sdU76du2(s_SolvedNode(node_2), ((i != 0) ? slot_1 : t_void), relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        };
        if (_helpers_data[h.index].target == SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target)
        {
            fu_VEC<s_SolvedNode> sig { SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items };
            for (int i_1 = (sig.size() + FN_ARGS_BACK); i_1-- > 0; )
            {
                const s_Target& t = SolvedNodeData_kcSanAvz(sig[i_1], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target;
                if (t && (GET_wZZN3wJZ(t, _scope, module, ctx).flags & F_ARG))
                    relaxBlockVar_M7HVaAk6(s_Target(t), relax_mask, _scope, module, ctx, _current_fn, _warnings, _current_fnort, _here, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

            };
        };
    }
    else if (k == "loop"_fu)
    {
        const s_SolvedNode init { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[LOOP_INIT] };
        const s_SolvedNode pre_cond { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[LOOP_COND] };
        const s_SolvedNode body { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[LOOP_BODY] };
        const s_SolvedNode post_cond { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[LOOP_POST_COND] };
        const s_SolvedNode& post = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[LOOP_POST];
        if (post)
            propagateType_sdU76du2(s_SolvedNode(post), t_void, relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

        if (post_cond)
            propagateType_sdU76du2(post_cond, t_bool, relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

        if (body)
            propagateType_sdU76du2(body, t_void, relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

        if (pre_cond)
            propagateType_sdU76du2(pre_cond, t_bool, relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

        if (init)
            propagateType_sdU76du2(init, t_void, relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    }
    else if (k == "try"_fu)
    {
        const s_SolvedNode attempt { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[0] };
        const s_SolvedNode error { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[1] };
        const s_SolvedNode& recover = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[2];
        propagateType_sdU76du2(s_SolvedNode(recover), t_void, relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        propagateType_sdU76du2(error, t_string, relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        propagateType_sdU76du2(attempt, t_void, relax_mask, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    }
    else if (k == "root"_fu)
    {
    }
    else
        fail_UWhygD7O((("TODO: propagateType("_fu + k) + ")."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

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

static void maybeCopyOrMove_WseAVWyS(const s_SolvedNode& node, const s_Type& slot, const bool isArgument, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    if ((slot.vtype.canon != SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.vtype.canon) && !is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
    {
        if ((SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "definit"_fu) && !is_mutref_8e1ZyHy2(slot, _here, ctx))
        {
            MUT_zK2FAfx9(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type = slot;
            return;
        };
        fail_UWhygD7O(((("Considering copy or move for incompatible types: "_fu + humanizeType_UeNyC0N4(slot, module, ctx)) + " <- "_fu) + humanizeType_UeNyC0N4(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
    if (is_ref_8e1ZyHy2(slot))
    {
        if (is_trivial_lcHUdEZy(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, module, ctx))
        {
            if ((SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "definit"_fu) && isArgument)
                MUT_zK2FAfx9(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type = clear_refs_8e1ZyHy2(s_Type(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type));

        };
        return;
    };
    if (!is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
        return;

    if (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "definit"_fu)
    {
        MUT_zK2FAfx9(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type = clear_refs_8e1ZyHy2(s_Type(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type));
        return;
    };
    if (!is_rx_copy_8e1ZyHy2(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
        fail_UWhygD7O(("Needs an explicit STEAL or CLONE: "_fu + humanizeType_UeNyC0N4(slot, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!is_trivial_lcHUdEZy(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, module, ctx))
    {
        if (!(USE_nontriv_autocopy))
            fail_UWhygD7O("Non-trivial implicit copy."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        makeNote_NPJpVbAC(N_NonTrivAutoCopy, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    };
    const s_SolvedNode newNode = createCopy_0mACI4iq(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);
    s_SolvedNodeData temp {};
    s_SolvedNodeData& newNodeData = MUT_zK2FAfx9(newNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
    std::swap(temp, newNodeData);
    s_SolvedNodeData& oldNodeData = MUT_zK2FAfx9(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
    std::swap(temp, oldNodeData);
    only_WrcQl81W(oldNodeData.items) = newNode;
    s_SolvedNodeData& newNodeData_1 = MUT_zK2FAfx9(newNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
    std::swap(temp, newNodeData_1);
}

static void BORROWCK_resolveByTempCopy_f2ksNT9q(const s_SolvedNode& node, const s_Type& slot, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    s_Type slot_1 = make_copyable_8e1ZyHy2(clear_refs_8e1ZyHy2(s_Type(slot)));
    maybeCopyOrMove_WseAVWyS(node, slot_1, false, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);
}

static void BORROWCK_resolveByTempCopy_K7Q92NxP(const s_SolvedNode& callsite, const int idx, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    fu::view<s_Argument> host_args = EXT_OOgXljzg(SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, module, _scope, ctx).args;
    BORROWCK_resolveByTempCopy_f2ksNT9q(s_SolvedNode(SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[idx]), host_args[idx].type, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);
}

                                #ifndef DEF_DEV_DisableBCK
                                #define DEF_DEV_DisableBCK
inline constexpr unsigned DEV_DisableBCK = (0x1u << 0u);
                                #endif

static const s_Overload& Region_GET_4GbwzIgh(const s_Region& r, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    const int idx = (Region_isArg_rLDFQf65(r) ? Region_toArgIndex_rLDFQf65(r) : int(Region_toLocalIndex_rLDFQf65(r)));
    return GET_wZZN3wJZ(nested_74Rv3rSC(idx, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module), _scope, module, ctx);
}

static void validate_A5JOaDRD(const int i, const s_Argument& host_arg, fu::view<s_Lifetime> bck_unwound, const int i0, const int arg_first, const int arg_last, const s_Lifetime& unwound, s_CurrentFn& _current_fn, fu::view<s_Argument> host_args, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_SolvedNode> args, const s_Target& _current_fnort, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& target, const s_SolvedNode& callsite, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
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
            if (is_rx_copy_8e1ZyHy2(SolvedNodeData_kcSanAvz(args[which], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
            {
                const int argLocalIdx = EXT_OOgXljzg(target, module, _scope, ctx).args[which].local;
                const s_Region argLt = Region_fromArgIndex_KYx0R3Sq(argLocalIdx);
                const bool isReturned = has_KVWxg77u(GET_wZZN3wJZ(target, _scope, module, ctx).type.lifetime.uni0n, argLt);
                if (!isReturned)
                    return BORROWCK_resolveByTempCopy_K7Q92NxP(callsite, which, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);

            };
        };
    };
    if (!(options.dev & DEV_DisableBCK))
    {
        fu_STR err = qWHAT_NVk45OOI(GET_wZZN3wJZ(target, _scope, module, ctx), module, _scope, ctx);
        err += (((host_args.size() == 2) && (GET_wZZN3wJZ(target, _scope, module, ctx).flags & F_OPERATOR)) ? ": Both operands alias:\n"_fu : (x7E((x7E(((((": Arguments "_fu + qBAD_PSFLzFOM(human_g4kmYeuH(host_args[i0].name, module, _scope, ctx))) + " and "_fu) + qBAD_PSFLzFOM(human_g4kmYeuH(host_args[i].name, module, _scope, ctx))) + " (args #"_fu), fu::i64dec(i0)) + " and #"_fu), fu::i64dec(i)) + ") both alias:\n"_fu));
        for (int i_1 = 0; i_1 < inter.uni0n.size(); i_1++)
        {
            const s_Region& o = inter.uni0n[i_1];
            err += "\n                "_fu;
            err += qWHAT_NVk45OOI(Region_GET_4GbwzIgh(o, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module), module, _scope, ctx);
        };
        fail_UWhygD7O(fu_STR(err), _here, ctx, _helpers, _helpers_data, _scope, module);
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

static s_Flow& flow_pFYXnpbz(s_CurrentFn& _current_fn)
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

static s_Events& events_qH0Oixpy(s_CurrentFn& _current_fn)
{
    return _current_fn.events;
}

                                #ifndef DEFt_unless_oob_O43GbAt1
                                #define DEFt_unless_oob_O43GbAt1
inline const s_ReadID& unless_oob_O43GbAt1(fu::view<s_ReadID> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_ReadID*)fu::NIL);
}
                                #endif

static bool BORROWCK_resolveByMutvar_xlsZfAFZ(const int target, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    const s_Target t = nested_74Rv3rSC(target, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
    s_Overload& o = GET_mut_AkUmF8Ao(t, _scope, module);
    if ((o.flags & (F_TODO_FIX_RRET | F_REF)) || is_mutref_8e1ZyHy2(o.type, _here, ctx) || !is_rx_copy_8e1ZyHy2(o.type))
        return false;

    if (!(o.kind == "var"_fu))
        fail_UWhygD7O("BUG: Not a variable."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!(o.type.lifetime.uni0n.size() == 1))
        fail_UWhygD7O("BUG: lt.len != 1"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!(o.flags & F_MUT))
    {
        o.flags |= F_MUT;
        s_Type t_let = clear_refs_8e1ZyHy2(s_Type(o.type));
        MUT_zK2FAfx9(GET_wZZN3wJZ(t, _scope, module, ctx).solved, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type = t_let;
    };
    return true;
}

static fu_STR bck_name_ZaVITxRQ(const int target, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    return human_g4kmYeuH(GET_wZZN3wJZ(nested_74Rv3rSC(target, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module), _scope, module, ctx).name, module, _scope, ctx);
}

inline static const s_SolvedNodeData& SLOW_find_G6WVo4Ty(int, int, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ReadID& read)
{
    fu::view<s_SolvedNodeData> nodes = EXT_OOgXljzg(SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, module, _scope, ctx).nodes;
    for (int i = 0; i < nodes.size(); i++)
    { {
        const s_SolvedNodeData& node = nodes[i];
        if ((node.rwr.reads0 < read.id) && (node.rwr.reads1 >= read.id))
        {
            fu::view<s_SolvedNode> items = node.items;
            for (int i_1 = 0; i_1 < items.size(); i_1++)
            {
                bool _0 {};
                if ((__extension__ (
                {
                    const s_SolvedNode& node_1 = items[i_1];
                    _0 = (((SolvedNodeData_kcSanAvz(node_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).rwr.reads0 < read.id) && (SolvedNodeData_kcSanAvz(node_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).rwr.reads1 >= read.id)));
                (void)0;}), bool(_0)))
                    goto L_061;

            };
            return node;
        };
      } L_061:;
    };
    fail_UWhygD7O((x7E("Cannot find ReadID("_fu, fu::i64dec(read.id)) + ")."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_SolvedNodeData& SLOW_findByReadID_apiUkLMS(const s_ReadID& read, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    return SLOW_find_G6WVo4Ty(0, 0, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, read);
}

                                #ifndef DEFt_grow_if_oob_NpM0Ok4R
                                #define DEFt_grow_if_oob_NpM0Ok4R
inline s_WriteID& grow_if_oob_NpM0Ok4R(fu_VEC<s_WriteID>& a, const int i)
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

static void bck_trackWrites_mVyUWboc(const s_SolvedNode& callsite, fu::view<s_Region> regions, fu::view<int> positions, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, s_CurrentFn& _current_fn, const s_Options& options)
{
    _here = SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).token;
    const int loop_start = _current_fn.loop_start;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target = Region_asIndex_rLDFQf65(regions[i]);
        if (!target)
            continue;

        const int position = positions[i];
        fu_VEC<int> invalidates { unless_oob_JTFeqoKl(flow_pFYXnpbz(_current_fn).invalidates, target) };
        for (int i_1 = 0; i_1 < invalidates.size(); i_1++)
        {
            const int other = invalidates[i_1];
            const s_ReadID& readID = unless_oob_O43GbAt1(events_qH0Oixpy(_current_fn).used_in_a_loop, other);
            if (readID)
            {
                if (!(BORROWCK_resolveByMutvar_xlsZfAFZ(other, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module) || (options.dev & DEV_DisableBCK)))
                {
                    fu_STR _0 {};
                    fu_STR _1 {};
                    (_1 = (_0 = (((((((("Write to "_fu + qBAD_PSFLzFOM(bck_name_ZaVITxRQ(target, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module))) + " at call to "_fu) + qWHAT_NVk45OOI(GET_wZZN3wJZ(SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, _scope, module, ctx), module, _scope, ctx)) + " invalidates the use of "_fu) + qBAD_PSFLzFOM(bck_name_ZaVITxRQ(other, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module))) + " at "_fu) + addr_and_snippet_wRcf9zxU(SLOW_findByReadID_apiUkLMS(readID, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).token, ctx, module)) + "\n\t... on next loop iteration.\n\n\tWritten"_fu), (static_cast<fu_STR&&>(_0) + qSTACK_gElCW3Wa(s_Target(SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target), position, fu::view<s_Target>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn))), fail_UWhygD7O(static_cast<fu_STR&&>(_1), _here, ctx, _helpers, _helpers_data, _scope, module));
                };
            };
        };
        events_qH0Oixpy(_current_fn).writes += s_RWEvent { int(target) };
        const s_WriteID writeID = s_WriteID { events_qH0Oixpy(_current_fn).writes.size() };
        for (int i_2 = 0; i_2 < invalidates.size(); i_2++)
        {
            /*RRET*/ s_WriteID& a = grow_if_oob_NpM0Ok4R(events_qH0Oixpy(_current_fn).snap.invalidated_by, invalidates[i_2]);
            if (!(a))
                a = writeID;

        };
        if (has_asJtcpQm(flow_pFYXnpbz(_current_fn).is_arg, target))
        {
            add_thBfcIkV(events_qH0Oixpy(_current_fn).snap.args_written, target);
            add_zoGTyg4u(events_qH0Oixpy(_current_fn).args_ever_written, target);
            if (loop_start)
            {
                for (int i_3 = 0; i_3 < events_qH0Oixpy(_current_fn).args_in_a_loop.size(); i_3++)
                    add_thBfcIkV(grow_if_oob_EE7n9Jkc(flow_pFYXnpbz(_current_fn).args_at_risk, int(events_qH0Oixpy(_current_fn).args_in_a_loop[i_3])), target);

            };
        };
    };
}

static s_RWEvent& RWEvent_DS2xscAO(const s_WriteID& write, s_CurrentFn& _current_fn)
{
    return _current_fn.events.writes.mutref((write.id - 1));
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

inline static const s_SolvedNodeData& SLOW_find_l9LFeCUW(int, int, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_WriteID& write)
{
    fu::view<s_SolvedNodeData> nodes = EXT_OOgXljzg(SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, module, _scope, ctx).nodes;
    for (int i = 0; i < nodes.size(); i++)
    { {
        const s_SolvedNodeData& node = nodes[i];
        if ((node.rwr.writes0 < write.id) && (node.rwr.writes1 >= write.id))
        {
            fu::view<s_SolvedNode> items = node.items;
            for (int i_1 = 0; i_1 < items.size(); i_1++)
            {
                bool _0 {};
                if ((__extension__ (
                {
                    const s_SolvedNode& node_1 = items[i_1];
                    _0 = (((SolvedNodeData_kcSanAvz(node_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).rwr.writes0 < write.id) && (SolvedNodeData_kcSanAvz(node_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).rwr.writes1 >= write.id)));
                (void)0;}), bool(_0)))
                    goto L_065;

            };
            return node;
        };
      } L_065:;
    };
    fail_UWhygD7O((x7E("Cannot find WriteID("_fu, fu::i64dec(write.id)) + ")."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_SolvedNodeData& SLOW_findByWriteID_ZH0R3WZZ(const s_WriteID& write, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    return SLOW_find_l9LFeCUW(0, 0, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, write);
}

static fu_STR RWEvent_stack_x80wllBd(const s_WriteID& write, s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    s_SolvedNodeData node { SLOW_findByWriteID_ZH0R3WZZ(write, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module) };
    if (node.kind != "call"_fu)
        return "\n\tVia "_fu + qKW_PSFLzFOM(node.kind);

    fu_STR stack {};

    {
        int _0 {};
        fu_VEC<s_Region> uni0n { GET_wZZN3wJZ((_0 = RWEvent_DS2xscAO(write, _current_fn).rw_target, nested_74Rv3rSC(int(_0), _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module)), _scope, module, ctx).type.lifetime.uni0n };
        if (uni0n)
        {
            for (int i = 0; i < node.items.size(); i++)
            {
                const s_SolvedNode& arg = node.items[i];
                if (inter_vNfhol7m(SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime.uni0n, uni0n))
                {
                    const s_Argument& host_arg = EXT_OOgXljzg(node.target, module, _scope, ctx).args[i];
                    if (host_arg.flags & F_WRITTEN_TO)
                    {
                        stack = qSTACK_gElCW3Wa(s_Target(node.target), i, fu::view<s_Target>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn);
                        break;
                    };
                };
            };
        };
    };
    const s_Overload& o = GET_wZZN3wJZ(node.target, _scope, module, ctx);
    return ((addr_and_snippet_wRcf9zxU(node.token, ctx, module) + "\n\tAt call to "_fu) + qID_PSFLzFOM(o.name)) + stack;
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

                                #ifndef DEFt_grow_if_oob_zc6S6vNa
                                #define DEFt_grow_if_oob_zc6S6vNa
inline s_ReadID& grow_if_oob_zc6S6vNa(fu_VEC<s_ReadID>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void bck_trackRead_8IzuO2Ku(const s_SolvedNode& callsite, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, s_CurrentFn& _current_fn, const s_Options& options)
{
    if (!is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) || !SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index)
        return;

    _here = SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).token;
    fu_VEC<s_Region> regions { SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime.uni0n };
    const int loop_start = _current_fn.loop_start;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target = Region_asIndex_rLDFQf65(regions[i]);
        if (!target)
            continue;

        if (events_qH0Oixpy(_current_fn).snap.invalidated_by.size() > target)
        {
            const s_WriteID u { events_qH0Oixpy(_current_fn).snap.invalidated_by[target] };
            if (u)
            {
                if (!(BORROWCK_resolveByMutvar_xlsZfAFZ(target, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module) || (options.dev & DEV_DisableBCK)))
                {
                    fu_STR _0 {};
                    int _1 {};
                    fu_STR _2 {};
                    fu_STR _3 {};
                    (_3 = (_2 = ((_0 = (((("Cannot access"_fu + " "_fu) + qBAD_PSFLzFOM(bck_name_ZaVITxRQ(target, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module))) + ", reference invalidated by write to"_fu) + " "_fu), (static_cast<fu_STR&&>(_0) + qBAD_PSFLzFOM((_1 = RWEvent_DS2xscAO(u, _current_fn).rw_target, bck_name_ZaVITxRQ(int(_1), _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module))))) + " at "_fu), (static_cast<fu_STR&&>(_2) + RWEvent_stack_x80wllBd(u, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module))), fail_UWhygD7O(static_cast<fu_STR&&>(_3), _here, ctx, _helpers, _helpers_data, _scope, module));
                };
            };
        };
        if (events_qH0Oixpy(_current_fn).snap.args_written && has_asJtcpQm(flow_pFYXnpbz(_current_fn).is_arg, target))
        {
            fu_VEC<int>* _4;
            (_4 = &(grow_if_oob_k9KHuFdm(flow_pFYXnpbz(_current_fn).args_at_risk, target)), add_XS7JLwrP(*_4, fu_VEC<int>(events_qH0Oixpy(_current_fn).snap.args_written)));
        };
        events_qH0Oixpy(_current_fn).reads += s_RWEvent { int(target) };
        const s_ReadID readID = s_ReadID { events_qH0Oixpy(_current_fn).reads.size() };
        if (loop_start)
        {
            if (target < loop_start)
            {
                /*RRET*/ s_ReadID& a = grow_if_oob_zc6S6vNa(events_qH0Oixpy(_current_fn).used_in_a_loop, target);
                if (!(a))
                    a = readID;

            };
            if (has_asJtcpQm(flow_pFYXnpbz(_current_fn).is_arg, target))
                add_thBfcIkV(events_qH0Oixpy(_current_fn).args_in_a_loop, target);

        };
    };
}

static void bck_call_yvD3Fgub(const s_SolvedNode& callsite, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, s_CurrentFn& _current_fn, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    const s_Target target { SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target };
    fu_VEC<s_SolvedNode> args { SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items };
    if (args)
    {
        fu_VEC<s_Argument> host_args { EXT_OOgXljzg(target, module, _scope, ctx).args };
        const int ooe_read0 = _current_fn.events.reads.size();
        const int ooe_write0 = _current_fn.events.writes.size();
        fu_VEC<int> ooe_reads {};
        fu_VEC<int> ooe_writes {};
        const bool ooe_isRTL = isRTL_5bMRDBj1(GET_wZZN3wJZ(target, _scope, module, ctx));
        const int ooe_START = (ooe_isRTL ? (args.size() - 1) : 0);

        {
            int ooe_read0_1 = ooe_read0;
            int ooe_write0_1 = ooe_write0;
            for (int ooe_i = 0; ooe_i < args.size(); ooe_i++)
            {
                bck_node_ZbJ2Qr9S(s_SolvedNode(args[(ooe_isRTL ? (ooe_START - ooe_i) : int(ooe_i))]), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);
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
                            const s_Lifetime& unwound = (bck_unwound.mutref(i0_1) = Lifetime_unwind_k46N2N0l(s_Lifetime(SolvedNodeData_kcSanAvz(args[i0_1], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime), 0, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module));
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
                    const s_Lifetime& unwound = (bck_unwound.mutref(i0) = Lifetime_unwind_k46N2N0l(s_Lifetime(SolvedNodeData_kcSanAvz(args[i0], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime), 0, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module));
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
                                validate_A5JOaDRD(i_1, host_arg, bck_unwound, i0, arg_first, arg_last, unwound, _current_fn, host_args, _here, ctx, args, _current_fnort, _helpers, _helpers_data, _scope, module, target, callsite, options, _notes, _current_fn_or_type);

                        };
                    }
                    else if (bck_unwound)
                    {
                        for (int i_1 = mutref_first; (i_1 <= mutref_last); i_1++)
                        {
                            if (is_mutref_8e1ZyHy2(host_args[i_1].type, _here, ctx))
                                validate_A5JOaDRD(i_1, host_arg, bck_unwound, i0, arg_first, arg_last, unwound, _current_fn, host_args, _here, ctx, args, _current_fnort, _helpers, _helpers_data, _scope, module, target, callsite, options, _notes, _current_fn_or_type);

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
                    if (host_arg.flags & F_WRITTEN_TO)
                    {
                        const s_SolvedNode& arg = args[i0];
                        if (!(is_mutref_8e1ZyHy2(host_arg.type, _here, ctx)))
                            fail_UWhygD7O((qID_PSFLzFOM(human_g4kmYeuH(host_arg.name, module, _scope, ctx)) + ": host_arg.written but !host_arg.is_mutref"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

                        if (!(is_mutref_8e1ZyHy2(SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, _here, ctx)))
                            fail_UWhygD7O((qID_PSFLzFOM(human_g4kmYeuH(host_arg.name, module, _scope, ctx)) + ": host_arg.written but !arg.is_mutref"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

                        add_SsyGqSA0(bck_writes, SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime.uni0n, bck_positions, i0);
                    };
                };
            };
        };
        if (bck_writes)
        {
            if (!(bck_positions.size() == bck_writes.size()))
                fail_UWhygD7O("bck_position.len is off"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            bck_trackWrites_mVyUWboc(callsite, bck_writes, bck_positions, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options);
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
                    const s_WriteID writeID = s_WriteID { (w + 1) };
                    const s_RWEvent& write = RWEvent_DS2xscAO(writeID, _current_fn);
                    fu_VEC<s_Region> written { GET_wZZN3wJZ(nested_74Rv3rSC(write.rw_target, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module), _scope, module, ctx).type.lifetime.uni0n };
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

                            fu::view<int> invalidates = unless_oob_py9Y5UMJ(flow_pFYXnpbz(_current_fn).invalidates, index);
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
                                fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

                            for (int r = ooe_read0_1; r < ooe_read1; r++)
                            {
                                const s_RWEvent& read = _current_fn.events.reads[r];
                                const fu_VEC<s_Region>& regions = GET_wZZN3wJZ(nested_74Rv3rSC(read.rw_target, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module), _scope, module, ctx).type.lifetime.uni0n;
                                if (!inter_vNfhol7m(regions, written_1))
                                    continue;

                                const int r_1 = (ooe_isRTL ? (ooe_START - ooe_ir) : int(ooe_ir));
                                const int w_1 = (ooe_isRTL ? (ooe_START - ooe_iw) : int(ooe_iw));
                                if (ooe_ir_evalsBefore_iw)
                                {
                                    const s_SolvedNode& arg = args[r_1];
                                    const fu_VEC<s_Region>& bound = SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime.uni0n;
                                    fu_VEC<s_Region> inter = inter_vNfhol7m(bound, written_1);
                                    if (inter)
                                    {
                                        if (is_mutref_8e1ZyHy2(host_args[r_1].type, _here, ctx) || !is_rx_copy_8e1ZyHy2(SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
                                        {
                                            _here = SolvedNodeData_kcSanAvz(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).token;
                                            fu_STR _0 {};
                                            fu_STR _1 {};
                                            (_1 = (_0 = (x7E((((((((x7E((((("At call to "_fu + qWHAT_NVk45OOI(GET_wZZN3wJZ(target, _scope, module, ctx), module, _scope, ctx)) + ", argument binding "_fu) + qBAD_PSFLzFOM(human_g4kmYeuH(host_args[r_1].name, module, _scope, ctx))) + " (arg #"_fu), fu::i64dec(r_1)) + ") at "_fu) + addr_and_snippet_wRcf9zxU(SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).token, ctx, module)) + "\n\t... invalidated by subsequent write to "_fu) + qWHAT_NVk45OOI(Region_GET_4GbwzIgh(first_l0gXiKi4(inter), _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module), module, _scope, ctx)) + " upon evaluation of argument "_fu) + qBAD_PSFLzFOM(human_g4kmYeuH(host_args[w_1].name, module, _scope, ctx))) + " (arg #"_fu), fu::i64dec(w_1)) + ") at "_fu), (static_cast<fu_STR&&>(_0) + RWEvent_stack_x80wllBd(writeID, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module))), fail_UWhygD7O(static_cast<fu_STR&&>(_1), _here, ctx, _helpers, _helpers_data, _scope, module));
                                        };
                                        BORROWCK_resolveByTempCopy_K7Q92NxP(callsite, r_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);
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
        int* _2;
        (!*(_2 = &(MUT_zK2FAfx9(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).helpers)) ? *_2 : fail_UWhygD7O("helpers already contain something"_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) = MUSTSEQ_mask;
    }
    else if (GET_wZZN3wJZ(target, _scope, module, ctx).kind == "var"_fu)
        bck_trackRead_8IzuO2Ku(callsite, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options);

}

static void bck_loop_BHzm4gCs(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, s_CurrentFn& _current_fn, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    fu_VEC<s_SolvedNode> items { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items };
    bck_node_ZbJ2Qr9S(s_SolvedNode(items[0]), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);
    const int loop_start0 = _current_fn.loop_start;
    const int loop_start = GET_next_local_index_LA0p7vFN(_current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
    fu_VEC<s_ReadID> events0 { _current_fn.events.used_in_a_loop };
    _current_fn.loop_start = loop_start;
    fu_DEFER(_current_fn.loop_start = loop_start0);
    for (int i = 1; i < items.size(); i++)
        bck_node_ZbJ2Qr9S(items[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);

    _current_fn.events.used_in_a_loop = events0;
}

static void bck_nodes_YX5Vhhwu(fu::view<s_SolvedNode> items, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, s_CurrentFn& _current_fn, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    for (int i = 0; i < items.size(); i++)
        bck_node_ZbJ2Qr9S(items[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);

}

                                #ifndef DEFt_unless_oob_9DVkssEx
                                #define DEFt_unless_oob_9DVkssEx
inline const s_WriteID& unless_oob_9DVkssEx(fu::view<s_WriteID> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_WriteID*)fu::NIL);
}
                                #endif

static void bck_trackInit_IFInz5yz(const s_Target& target, s_CurrentFn& _current_fn)
{
    const int index = target.index;
    if (!index)
        return;

    if (unless_oob_9DVkssEx(events_qH0Oixpy(_current_fn).snap.invalidated_by, index))
        events_qH0Oixpy(_current_fn).snap.invalidated_by.mutref(index) = s_WriteID{};

    if (_current_fn.loop_start > index)
        _current_fn.loop_start = index;

}

static void bck_let_EqN7JqR0(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, s_CurrentFn& _current_fn, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    bck_nodes_YX5Vhhwu(fu_VEC<s_SolvedNode>(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);
    if (is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
    {
        if (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags & F_ARG)
            fail_UWhygD7O("bck_let: Found an argument!"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        const s_SolvedNode& init = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[LET_INIT];
        if (!(is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)))
            fail_UWhygD7O("What!"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        Reference_trackLocalRef_qERgTRRj(_current_fn.flow, SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index, SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime);
    };
    bck_trackInit_IFInz5yz(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, _current_fn);
}

inline static void Events_merge_3AmBisml(fu_VEC<s_WriteID>& dest, fu::view<s_WriteID> src)
{
    if (dest.size() < src.size())
        dest.grow(src.size());

    for (int i = 0; i < src.size(); i++)
    {
        /*RRET*/ s_WriteID& a = dest.mutref(i);
        if (!(a))
            a = src[i];

    };
}

inline static void Events_merge_ZSOG4qix(fu_VEC<int>& dest, fu::view<int> src)
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

static void Events_merge_AHnLIedg(s_Events& events, const s_EventsSnap& snap)
{
    Events_merge_3AmBisml(events.snap.invalidated_by, snap.invalidated_by);
    Events_merge_ZSOG4qix(events.snap.args_written, snap.args_written);
}

static void bck_if_flxaZsRr(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, s_CurrentFn& _current_fn, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    fu_VEC<s_SolvedNode> items { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items };
    bck_node_ZbJ2Qr9S(s_SolvedNode(items[0]), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);
    s_EventsSnap e_Restore_AfterCond { _current_fn.events.snap };
    bck_node_ZbJ2Qr9S(items[1], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);
    s_EventsSnap e_Merge_AfterCons { _current_fn.events.snap };
    _current_fn.events.snap = e_Restore_AfterCond;
    bck_node_ZbJ2Qr9S(items[2], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);
    Events_merge_AHnLIedg(_current_fn.events, e_Merge_AfterCons);
}

static void bck_block_KxUlfpqr(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, s_CurrentFn& _current_fn, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    fu_VEC<s_SolvedNode> defers {};
    fu_VEC<s_SolvedNode> items { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items };
    for (int i = 0; i < items.size(); i++)
    {
        const s_SolvedNode& node_1 = items[i];
        if (SolvedNodeData_kcSanAvz(node_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "defer"_fu)
            defers += s_SolvedNode(only_aj4CwosS(SolvedNodeData_kcSanAvz(node_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items));
        else
            bck_node_ZbJ2Qr9S(s_SolvedNode(node_1), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);

    };
    for (int i_1 = defers.size(); i_1-- > 0; )
        bck_node_ZbJ2Qr9S(defers[i_1], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);

}

static void bck_node_ZbJ2Qr9S(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, s_CurrentFn& _current_fn, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    fu::view<char> k = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind;
    s_RWRanges rwr {};
    rwr.reads0 = _current_fn.events.reads.size();
    rwr.writes0 = _current_fn.events.writes.size();
    if (k == "call"_fu)
        bck_call_yvD3Fgub(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);
    else if (k == "loop"_fu)
        bck_loop_BHzm4gCs(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);
    else if (k == "let"_fu)
        bck_let_EqN7JqR0(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);
    else if (k == "if"_fu)
        bck_if_flxaZsRr(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);
    else if (k == "block"_fu)
        bck_block_KxUlfpqr(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);
    else
        bck_nodes_YX5Vhhwu(fu_VEC<s_SolvedNode>(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);

    rwr.reads1 = _current_fn.events.reads.size();
    rwr.writes1 = _current_fn.events.writes.size();
    if ((rwr.reads1 > rwr.reads0) || (rwr.writes1 > rwr.writes0))
        MUT_zK2FAfx9(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).rwr = rwr;

}

static void mcom_node_RfKRkbmt(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    fu_VEC<s_SolvedNode> items { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items };
    for (int i = 0; i < items.size(); i++)
        mcom_node_RfKRkbmt(s_SolvedNode(items[i]), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);

    _here = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).token;
    fu::view<char> k = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind;
    s_Type t { SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type };
    if (k == "call"_fu)
    {
        const s_Target& target = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target;
        if (GET_wZZN3wJZ(target, _scope, module, ctx).kind != "field"_fu)
        {
            fu_VEC<s_Argument> host_args { EXT_OOgXljzg(target, module, _scope, ctx).args };
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_WseAVWyS(items[i_1], s_Type(host_args[i_1].type), true, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);

        };
    }
    else if (k == "block"_fu)
    {
        if (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).helpers)
        {
            const s_Helpers h = s_Helpers { int(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).helpers) };
            for (int i_1 = 0; i_1 < _helpers_data[h.index].returns.size(); i_1++)
                maybeCopyOrMove_WseAVWyS(s_SolvedNode(only_aj4CwosS(SolvedNodeData_kcSanAvz(_helpers_data[h.index].returns[i_1], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items)), _helpers_data[h.index].ret_actual, false, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);

        };
    }
    else if (k == "let"_fu)
    {
        if (SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items && !is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
        {
            const s_SolvedNode& init = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[LET_INIT];
            if (init && is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
                maybeCopyOrMove_WseAVWyS(s_SolvedNode(init), s_Type(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type), false, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);

        };
    }
    else if (k == "if"_fu)
    {
        if (!is_void_8e1ZyHy2(t) && !is_ref_8e1ZyHy2(t))
        {
            maybeCopyOrMove_WseAVWyS(items[1], s_Type(t), false, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);
            maybeCopyOrMove_WseAVWyS(items[2], t, false, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);
        };
    }
    else if (k == "or"_fu)
    {
        if (!(t == t_bool) && !is_ref_8e1ZyHy2(t))
        {
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_WseAVWyS(items[i_1], t, false, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);

        };
    }
    else if (k == "arrlit"_fu)
    {
        s_Type t_1 = clear_sliceable_8e1ZyHy2(t, _here, ctx);
        for (int i_1 = 0; i_1 < items.size(); i_1++)
            maybeCopyOrMove_WseAVWyS(items[i_1], t_1, false, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);

    };
}

static void runAllPasses_mDpvEPeZ(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (SELF_TEST)
        test_node_IJROg8n7(node, "PASS.0 "_fu, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType_sdU76du2(node, s_Type(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type), RELAX_before_bck, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (SELF_TEST)
        test_node_IJROg8n7(node, "PASS.0.relax "_fu, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

    bck_node_ZbJ2Qr9S(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, options, _notes, _current_fn_or_type);
    if (SELF_TEST)
        test_node_IJROg8n7(node, "PASS.1 "_fu, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

    mcom_node_RfKRkbmt(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);
    if (SELF_TEST)
        test_node_IJROg8n7(node, "PASS.2 "_fu, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType_sdU76du2(node, s_Type(SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type), RELAX_all, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (SELF_TEST)
        test_node_IJROg8n7(node, "PASS.2.relax "_fu, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

}

static s_SolvedNode solveBlock_UfMRvGyo(const fu_VEC<s_SolvedNode>& items, const int helpers_idx, const bool expr, const short mask, const int fnbody_of, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Helpers& h = _helpers[helpers_idx];
    if (!short((mask & HM_CanReturn)))
        _helpers_data.mutref(h.index).ret_expect = s_Type{};

    if (expr && items && !is_void_8e1ZyHy2(SolvedNodeData_kcSanAvz(last_6mv8AnDF(items), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
        _helpers_data.mutref(h.index).returns += createJump_3KfOEGqd(s_Target{}, last_6mv8AnDF(items), h, _here, _current_fnort, _current_fn_or_type, module, _scope);

    if (_helpers_data[h.index].returns)
    {
        for (int i = 0; i < _helpers_data[h.index].returns.size(); i++)
        {
            const s_SolvedNode& expr_1 = only_aj4CwosS(SolvedNodeData_kcSanAvz(_helpers_data[h.index].returns[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items);
            const s_TokenIdx here0 { _here };
            _here = SolvedNodeData_kcSanAvz(expr_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).token;
            fu_DEFER(_here = here0);
            reportReturnType_y8ueVWfK(h, SolvedNodeData_kcSanAvz(expr_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, _helpers_data, _here, ctx, _helpers, _scope, module);
        };
        if (is_mutref_8e1ZyHy2(_helpers_data[h.index].ret_actual, _here, ctx))
        {
            for (int i_1 = 0; i_1 < _helpers_data[h.index].returns.size(); i_1++)
            {
                const s_SolvedNode expr_1 { only_aj4CwosS(SolvedNodeData_kcSanAvz(_helpers_data[h.index].returns[i_1], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items) };
                if (!Lifetime_allowsMutrefReturn_7A2LB1GJ(s_Lifetime(SolvedNodeData_kcSanAvz(expr_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime), _helpers_data[h.index].locals_start, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module))
                {
                    reportReturnType_y8ueVWfK(h, clear_mutref_8e1ZyHy2(s_Type(SolvedNodeData_kcSanAvz(expr_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)), _helpers_data, _here, ctx, _helpers, _scope, module);
                    break;
                };
            };
        };
        for (int i_1 = 0; i_1 < _helpers_data[h.index].returns.size(); i_1++)
        {
            const s_SolvedNode expr_1 { only_aj4CwosS(SolvedNodeData_kcSanAvz(_helpers_data[h.index].returns[i_1], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items) };
            if (is_ref_8e1ZyHy2(SolvedNodeData_kcSanAvz(expr_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) && !fnbody_of)
                Lifetime_F_TODO_FIX_RRET_lefmMroT(s_Lifetime(SolvedNodeData_kcSanAvz(expr_1, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime), _helpers_data[h.index].locals_start, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        if (_helpers_data[h.index].ret_actual.lifetime)
            _helpers_data.mutref(h.index).ret_actual.lifetime = Lifetime_placeholder_8nlJDPX0();

        is_ref_8e1ZyHy2(_helpers_data[h.index].ret_actual);
    };

    {
        if (is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(if_last_6mv8AnDF(items), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
        {
            if (!_helpers_data[h.index].ret_actual)
                _helpers_data.mutref(h.index).ret_actual = t_never;

        }
        else if (fnbody_of)
        {
            if (_helpers_data[h.index].ret_actual)
            {
                if (!(isAssignable_P9wIESfO(t_void, _helpers_data[h.index].ret_actual)))
                    fail_UWhygD7O("Non-void returning fn missing a final return."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        if (!_helpers_data[h.index].ret_actual)
            _helpers_data.mutref(h.index).ret_actual = t_void;

    };
    mcom_BlockReturns_CopyOrMoveDecision_aVSsaSbP(h, _helpers_data, _current_fnort, _here, ctx, _helpers, _scope, module, _current_fn, _current_fn_or_type);
    Lifetime_placeholder_remove_xMPmdfQq(_helpers_data.mutref(h.index).ret_actual.lifetime);
    const s_Type* _0;
    /*MOV*/ const s_SolvedNode block = createBlock_RIdz8tYv((*(_0 = &(_helpers_data[h.index].ret_actual)) ? *_0 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), fu_VEC<s_SolvedNode>(items), (short((_helpers_data[h.index].mask & HM_LabelUsed)) ? _helpers_data[h.index].target : (*(const s_Target*)fu::NIL)), h, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);
    if (fnbody_of)
    {
        const unsigned status = GET_wZZN3wJZ(s_Target { int(module.modid), int(fnbody_of) }, _scope, module, ctx).status;
        if (!(status & SS_DIRTY) && !currentFn_mustBecomeInline_jsAJliCT(_current_fn))
            runAllPasses_mDpvEPeZ(block, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    };
    return /*NRVO*/ block;
}

static s_SolvedNode solveBlock_Hg26HKZ3(const s_Node& node, const s_Type& type, const int fnbody_of, const short mask, const int kills, const fu_STR& id, const int steal, const int locals_start, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_HelpersData>& _helpers_data, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_Node> nodes = ((node.kind == "block"_fu) ? fu_VEC<s_Node>(node.items) : fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(node) } });
    const fu_STR& id_1 = (id ? id : ((node.kind == "block"_fu) ? node.value : (*(const fu_STR*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap_a3v7I8zX(_scope, _helpers);
    fu_DEFER(Scope_pop_df60cAJ8(_scope, scope0, _helpers));
    const int helpers_idx = _helpers.size();
    push_cfc9Ap42(s_HelpersData { (fnbody_of ? s_Target { int(module.modid), int(fnbody_of) } : s_Target{}), fu_STR(id_1), short(mask), int((fnbody_of ? fnbody_of : SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index)), int(kills), (fnbody_of ? +1 : (locals_start ? int(locals_start) : GET_next_local_index_LA0p7vFN(_current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module))), s_Type(type), s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} }, _helpers, _helpers_data);
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
    fu_VEC<s_SolvedNode> items = solveNodes_X5BitxTM(nodes, t_void, type, expr, (helpers_idx + 1), _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    return solveBlock_UfMRvGyo(items, helpers_idx, expr, mask, fnbody_of, _helpers, _helpers_data, _current_fnort, _here, ctx, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
}

static void lazySolveEnd_8t0k8GNT(const s_Target& t, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Options& options, int& _notes, const s_Target& _current_fnort, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    s_Overload& o = GET_mut_AkUmF8Ao(t, _scope, module);
    fu_VEC<int> reopen {};
    const int parent = EXT_OOgXljzg(t, module, _scope, ctx).local_of;
    if (o.status & SS_UPDATED)
    {
        o.status &= ~SS_UPDATED;
        fu_VEC<int> callers { EXT_OOgXljzg(t, module, _scope, ctx).callers };
        for (int i = 0; i < callers.size(); i++)
        { {
            int index = callers[i];
            for (; ; )
            {
                const s_Target t_1 = s_Target { int(module.modid), int(index) };
                s_Overload& o_1 = GET_mut_AkUmF8Ao(t_1, _scope, module);
                if ((o_1.status & (SS_DID_START | SS_DIRTY)) != SS_DID_START)
                    goto L_0219;

                if (!(o_1.status & SS_FINALIZED))
                {
                    o_1.status |= SS_DIRTY;
                    goto L_0219;
                };
                const int up = EXT_OOgXljzg(t_1, module, _scope, ctx).local_of;
                if (up != parent)
                {
                    if (!(up > parent))
                        fail_UWhygD7O("lazySolveEnd: about to climb up the wrong tree."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                    index = up;
                    continue;
                };
                makeNote_NPJpVbAC(((o_1.kind == "type"_fu) ? N_TypeReopen : N_FnReopen), options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                o_1.status &= ~((SS_DID_START | SS_DIRTY) | SS_FINALIZED);
                reopen += int(index);
                goto L_0219;
            };
          } L_0219:;
        };
    };
    s_Overload& o_1 = GET_mut_AkUmF8Ao(t, _scope, module);
    if (!(o_1.status & SS_DIRTY))
        o_1.status |= SS_FINALIZED;
    else
    {
        if (o_1.status & SS_FINALIZED)
            fail_UWhygD7O("Stray SS_FINALIZED."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        o_1.status &= ~(SS_DID_START | SS_DIRTY);
        makeNote_NPJpVbAC(((o_1.kind == "type"_fu) ? N_TypeResolve : N_FnResolve), options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t_1 = s_Target { int(module.modid), int(reopen[i]) };
        lazySolveStart_pR3sKz01(t_1, s_Overload(GET_wZZN3wJZ(t_1, _scope, module, ctx)), _scope, module, _here, ctx, _helpers, _helpers_data, _current_fnort, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    };
}

static s_Target doTrySpecialize_FDyqg3xS(const s_Target& into, const s_Target& overloadIdx, fu::view<s_SolvedNode> args_in, fu_STR&& mangle, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_Type> args {};
    if (use_reorder)
    {
        for (int i = 0; i < reorder.size(); i++)
        {
            const int callsiteIndex = reorder[i];
            args.push(s_Type(((callsiteIndex >= 0) && (callsiteIndex < args_in.size()) ? SolvedNodeData_kcSanAvz(args_in[callsiteIndex], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type : (*(const s_Type*)fu::NIL))));
        };
    }
    else
    {
        for (int i = 0; i < args_in.size(); i++)
            args.push(s_Type(SolvedNodeData_kcSanAvz(args_in[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type));

    };
    for (int i = 0; i < conversions.size(); i++)
    {
        const fu_VEC<s_Target>& c = conversions[i];
        if (c)
            args.mutref(i) = GET_wZZN3wJZ(last_g4Ujnafl(c), _scope, module, ctx).type;

    };
    if (REST_TYPE)
        args.mutref(REST_START) = REST_TYPE;

    fu_STR mangle00 { mangle };
    /*MOV*/ const s_Target SPECFAIL = s_Target { 2147483647, 0 };
    const s_Target& original = (overloadIdx ? overloadIdx : into ? into : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
    s_Template tEmplate { EXT_OOgXljzg(original, module, _scope, ctx).tEmplate };
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    _here = EXT_OOgXljzg(original, module, _scope, ctx).tEmplate.node.token;
    int parent_idx = EXT_OOgXljzg(original, module, _scope, ctx).local_of;
    for (int i_1 = 0; i_1 < args.size(); i_1++)
    {
        const s_Type& arg_t = args[i_1];
        if (type_isAddrOfFn_5vhU4AHS(arg_t))
            unpackAddrOfFn_HLXejOuC(arg_t.vtype.canon, 0, module, _scope, ctx, parent_idx);

    };
    const bool isInline = !!(tEmplate.node.flags & F_INLINE);
    if (!into && !isInline)
        setSpec_t0yfZyv5(mangle, SPECFAIL, true, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);

    /*MOV*/ s_Target target {};

    {
        const s_ScopeMemo scope0 = Scope_snap_a3v7I8zX(_scope, _helpers);
        s_ScopeSkipMemos ss0 { _ss };
        const s_HelpersData* _0;
        const int helpers0vars = (__extension__ (
        {
            const s_Helpers& h = last_4St321Ne(_helpers);
            _0 = &(_helpers_data[h.index]);
        (void)0;}), *_0).vars.size();
        const int helpers_data0 = _helpers_data.size();
        fu_DEFER(
        {
            Scope_pop_df60cAJ8(_scope, scope0, _helpers);
            _ss = ss0;
            if (_helpers)
            {
                s_HelpersData* _1;
                (__extension__ (
                {
                    const s_Helpers& h = last_4St321Ne(_helpers);
                    _1 = &(_helpers_data.mutref(h.index));
                (void)0;}), *_1).vars.shrink(helpers0vars);
            };
            _helpers_data.shrink(helpers_data0);
        });
        ScopeSkip_setup_iF5MsZcx(tEmplate, scope0, _root_scope, _ss, _here, ctx, _helpers, _helpers_data, _scope, module);
        fu_VEC<s_Node> items { tEmplate.node.items };
        s_Node& n_fn = tEmplate.node;
        if (!(n_fn.kind == "fn"_fu))
            fail_UWhygD7O("n_fn not a `fn`."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        bool ok = true;
        bool remangle = false;
        s_Map_PvflZUKM typeParams {};
        if (!into)
        {
            fu::view<char> kind = tEmplate.node.kind;
            const int numArgs = ((kind == "fn"_fu) ? (items.size() + FN_ARGS_BACK) : fail_UWhygD7O(("TODO numArgs for template:"_fu + kind), _here, ctx, _helpers, _helpers_data, _scope, module));
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
                    const s_Node& argNode = (*(_2 = &(items[i_2])) ? *_2 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                    const s_Node& annot = argNode.items[LET_TYPE];
                    if (couldRetype_NwMeZXYD(inValue, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module))
                    {
                        const s_Type& paramType = ((annot.kind == "typeparam"_fu) ? ref_223OtmgJ(typeParams, annot.value).matched : ((annot.kind == "call"_fu) && !annot.items ? Scope_lookupType_FCzK9ket(annot, _here, ctx, _helpers, _helpers_data, _scope, module, _ss) : (*(const s_Type*)fu::NIL)));
                        if (paramType)
                        {
                            s_Type retype = tryRetyping_C9LIXaDr(inValue, paramType, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
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
                        fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

                    if (inType)
                    {
                        const s_Type& exactType = EXT_OOgXljzg(original, module, _scope, ctx).args[i_2].type;
                        if (exactType)
                        {
                            args.mutref(i_2) = exactType;
                            continue;
                        };
                        const fu_STR& argName = (argNode.value ? argNode.value : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                        s_TypeParam& argName_typeParam = ref_223OtmgJ(typeParams, argName);
                        inType = add_ref_GR4OoJkm(s_Type(inType), Lifetime_temporary_8nlJDPX0(), _here, ctx);
                        (!argName_typeParam ? argName_typeParam : fail_UWhygD7O((("Type param name collision with argument: `"_fu + argName) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)).matched = inType;
                        if (annot)
                        {
                            const bool argOk = (inType && trySolveTypeParams_XLDyzJD2(annot, s_Type(inType), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss));
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
                const int start = ((_3 = (find_WqUX48cW(mangle, ' ') + 1)) ? _3 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                mangle = (fu::slice(mangle, 0, start) + mangleArguments_60qU9pNl(args, _here, ctx));
                if (mangle00 != mangle)
                {
                    /*MOV*/ const s_Target preexisting { get_RoWYQLCB(_specs, mangle) };
                    if (preexisting)
                    {
                        setSpec_t0yfZyv5(mangle00, preexisting, bool{}, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);
                        return /*NRVO*/ preexisting;
                    };
                    if (!into)
                        setSpec_t0yfZyv5(mangle, SPECFAIL, true, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);

                };
            };
            if (!ok)
                return /*NRVO*/ SPECFAIL;

            const s_Node* _4;
            const s_Node& body = (*(_4 = &(items[(items.size() + FN_BODY_BACK)])) ? *_4 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
            if (body.kind == "pattern"_fu)
            {
                s_Map_PvflZUKM undo { typeParams };
                fu_VEC<s_Node> branches { body.items };
                bool did_match = false;
                for (int i_2 = 0; i_2 < branches.size(); i_2++)
                {
                    const s_Node& cond = branches[i_2].items[0];
                    if (cond && !evalTypePattern_XGAFrHgQ(cond, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string))
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
                        sig.mutref((sig.size() + FN_BODY_BACK)) = (n_body ? n_body : fail_UWhygD7O("doTrySpec: no case/body."_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
                    };
                    did_match = true;
                    break;
                };
                if (!did_match)
                    return /*NRVO*/ SPECFAIL;

            };
            const s_Node& n_body = n_fn.items[(n_fn.items.size() + FN_BODY_BACK)];
            if (isNativeBody_NaKql8xp(n_body))
            {
                for (int i_2 = 0; i_2 < numArgs; i_2++)
                {
                    const s_Node* _5;
                    const s_Node& argNode = (*(_5 = &(items[i_2])) ? *_5 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                    const fu_STR& id = argNode.value;
                    if_ref_sRjNxtUV(typeParams, id, 0);
                };
            };
        };
        fu_STR mangle0 { mangle };
        target = (into ? s_Target(into) : Scope_create_vJwCb5Oj(_scope, "_no_kind_yet_"_fu, (*(const fu_STR*)fu::NIL), (*(const s_Type*)fu::NIL), 0, (SS_DID_START | SS_LAZY), 0, module));
        EXT_mut_hG9GTQ4v(target, module, _scope).local_of = parent_idx;
        fu_VEC<s_ScopeItem> extra_items { (into ? EXT_OOgXljzg(original, module, _scope, ctx).extra_items : (EXT_mut_hG9GTQ4v(target, module, _scope).extra_items = intoScopeItems_pj5Kj5nL(typeParams, module, ctx, _scope))) };
        if (!_current_fn_or_type)
            _anons = 0;

        const s_Target current_fn_or_type0 { _current_fn_or_type };
        fu_DEFER(_current_fn_or_type = current_fn_or_type0);
        _current_fn_or_type = target;
        const s_Target& _current_fnort_1 = target;

        {
            s_Extended& o = EXT_mut_hG9GTQ4v(target, module, _scope);
            o.revision++;
            if (o.nodes)
            {
                o.locals.clear();
                o.nodes.clear();
                remove_sZH0EhCc(_warnings, 0, target);
            };
        };
        fu_VEC<s_SolvedNode> TODO_FIX_convert_args0 { TODO_FIX_convert_args };
        TODO_FIX_convert_args.mutref(0) = SolvedNode_GiPnt7zQ("__convert"_fu, s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort_1, _current_fn_or_type, module, _scope);
        fu_DEFER(TODO_FIX_convert_args = TODO_FIX_convert_args0);
        s_CurrentFn out = s_CurrentFn { solved_SNSf2Pw4(n_fn, X_addrofTarget_m0G5bAnB(target), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, _here, _current_fnort_1, _current_fn_or_type, module, _scope), s_Flow{}, s_Effects{}, s_Events{}, 0, fu_VEC<s_Type>{} };
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
        outItems_RUwn1GIv(_current_fn, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).resize(inItems.size());
        _scope.items += extra_items;
        const bool isFirst = !GET_wZZN3wJZ(target, _scope, module, ctx).solved;
        const int isTemplate = (tEmplate.node.flags & F_TEMPLATE);
        const bool isSpec = (isTemplate && (!into || !isFirst));
        const bool isUnspec = (isTemplate && !isSpec);
        const int isPure = (tEmplate.node.flags & F_PURE);
        const int isNovec = (tEmplate.node.flags & F_NOVEC);
        for (int i_2 = 0; i_2 < (inItems.size() + FN_ARGS_BACK); i_2++)
        {
            const s_Node& n_arg = inItems[i_2];
            if (isUnspec && ((n_arg.flags & F_TEMPLATE) || !n_arg.items[LET_TYPE]))
            {
                fu_VEC<s_SolvedNode> _6 {};
                outItems_RUwn1GIv(_current_fn, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).mutref(i_2) = (_6 = fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, (n_arg.items[LET_INIT] ? SolvedNode_GiPnt7zQ("__defarg"_fu, (*(const s_Type*)fu::NIL), 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort_1, _current_fn_or_type, module, _scope) : s_SolvedNode{}) } }, SolvedNode_GiPnt7zQ("let"_fu, s_Type{}, n_arg.flags, n_arg.value, static_cast<fu_VEC<s_SolvedNode>&&>(_6), s_Target{}, 0, _here, _current_fnort_1, _current_fn_or_type, module, _scope));
                continue;
            };
            s_Type specType = (isSpec ? tryGetArgSpecType_uIa0SDc0(n_arg.value, extra_items, _scope, module, ctx, _here, _helpers, _helpers_data) : s_Type{});
            const s_SolvedNode arg = solveLet_U8AxE11r(n_arg, specType, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
            outItems_RUwn1GIv(_current_fn, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).mutref(i_2) = arg;
            if (!isUnspec && SolvedNodeData_kcSanAvz(arg, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).target)
                Reference_trackArgument_8HAzLaZD(_current_fn.flow, SolvedNodeData_kcSanAvz(arg, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).target.index, i_2);

        };
        const s_Node& n_ret = (!isUnspec ? inItems[(inItems.size() + FN_RET_BACK)] : (*(const s_Node*)fu::NIL));
        const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
        if (!(n_body))
            fail_UWhygD7O("solveFn: no body."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        const bool isNative = isNativeBody_NaKql8xp(n_body);
        if (!isNative && !isUnspec)
        {
            if (!(n_body.kind == "block"_fu))
                fail_UWhygD7O((("solveFn: Body not a block: `"_fu + n_body.kind) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        s_SolvedNode _7 {};
        s_Type ret_expect { (n_ret ? (_7 = evalTypeAnnot_vBBg0Mbg(n_ret, (*(const s_Map_PvflZUKM*)fu::NIL), _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), SolvedNodeData_kcSanAvz(s_SolvedNode(_7), _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module)).type : (*(const s_Type*)fu::NIL)) };
        s_Type ret_seed { (n_ret ? (ret_expect ? ret_expect : fail_UWhygD7O(("falsy ret_expect: "_fu + n_fn.value), _here, ctx, _helpers, _helpers_data, _scope, module)) : t_never) };
        if (ret_seed.lifetime)
            ret_seed.lifetime = (isNative ? Lifetime_fromNative_ejeACfdJ(inItems, fu::get_view(SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).items, 0, (SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).items.size() + FN_ARGS_BACK)), ret_seed, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort_1) : Lifetime_static_8nlJDPX0());
        else if (is_ref_8e1ZyHy2(ret_seed))
            fail_UWhygD7O("fn.ret_actual is a ref without a lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        if (isFirst)
        {

            {
                fu_STR name { (n_fn.value ? n_fn.value : fail_UWhygD7O("TODO anonymous fns"_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) };
                if (!isNative && !isInline && !isUnspec && !(n_fn.flags & F_EXTERN) && !(n_fn.flags & F_OPERATOR))
                {
                    const int sourceModid = tEmplate.node.token.modid;
                    fu_STR shortModuleName_1 = ((sourceModid != module.modid) ? (sourceModid && module.modid ? getShortModuleName_zQFrD65V(ctx.modules[sourceModid].fname) : fu_STR{}) : fu_STR(shortModuleName));
                    fu_STR _8 {};
                    fu_VEC<s_SolvedNode> _9 {};
                    fu::view<s_SolvedNode> _10 {};
                    fu_STR sig = (_8 = ((EXT_OOgXljzg(target, module, _scope, ctx).local_of ? fu::i64dec(target.index) : fu_STR{}) + shortModuleName_1), (static_cast<fu_STR&&>(_8) + (_10 = (_9 = fu_VEC<s_SolvedNode>(outItems_RUwn1GIv(_current_fn, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module)), fu::get_view(static_cast<fu_VEC<s_SolvedNode>&&>(_9), 0, (outItems_RUwn1GIv(_current_fn, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).size() + FN_ARGS_BACK))), mangleArguments_JsQasVlu(static_cast<fu::view<s_SolvedNode>&&>(_10), _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module))));
                    if (sig)
                    {
                        fu_STR _11 {};
                        fu_STR hash = ((_11 = hash62_ID6Pdhz7(sig, 8)) ? static_cast<fu_STR&&>(_11) : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                        name += ("_"_fu + hash);
                    };
                };
                s_Overload& overload = GET_mut_AkUmF8Ao(target, _scope, module);
                fu_STR _12 {};
                overload.name = ((_12 = HACK_nativeNameParts_Pm6WMkYq(isNative, n_body)) ? static_cast<fu_STR&&>(_12) : name ? fu_STR(name) : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                overload.kind = (isUnspec ? "template"_fu : (isNative ? "__native"_fu : (isInline ? "inline"_fu : "fn"_fu)));
                s_Extended& ext = EXT_mut_hG9GTQ4v(target, module, _scope);
                ext.tEmplate = tEmplate;
                ext.spec_of = overloadIdx;
            };
            updateScope_ATgjHgOK(_current_fn, (isInline ? ret_expect : ret_seed), false, target, _scope, module, ctx, _current_fnort_1, _here, _helpers, _helpers_data, isNative, isUnspec, isPure, _current_fn, isNovec, isInline);
            if (!into && !isInline)
            {
                int _13 {};
                const int start = ((_13 = (find_05euw4KZ(mangle0, ' ') + 1)) ? _13 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
                mangle = (fu::slice(mangle0, 0, start) + mangleArguments_1RfDOWvG(EXT_OOgXljzg(target, module, _scope, ctx).args, _here, ctx));
                /*MOV*/ s_Target preexisting {};
                const bool nx0 = (mangle0 != mangle);
                if (nx0)
                {
                    preexisting = get_RoWYQLCB(_specs, mangle);
                    setSpec_t0yfZyv5(mangle0, (preexisting ? preexisting : target), bool{}, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);
                };
                const bool nx00 = (mangle00 != mangle);
                if (nx00 && (mangle00 != mangle0))
                    setSpec_t0yfZyv5(mangle00, (preexisting ? preexisting : target), bool{}, isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);

                if (preexisting)
                    return /*NRVO*/ preexisting;

                setSpec_t0yfZyv5(mangle, target, (nx0 ? nx00 : (*(const bool*)fu::NIL)), isInline, _here, ctx, _helpers, _helpers_data, _scope, module, _specs);
            };
        };
        bool didSetBody = false;

        { {
            if (!isInline && !isUnspec)
            {
                s_Type retval { ret_seed };
                if (!isNative)
                {
                    const s_HelpersData* _14;
                    int _15 {};
                    const s_SolvedNode s_body = (_15 = ((__extension__ (
                    {
                        const s_Helpers& h = last_4St321Ne(_helpers);
                        _14 = &(_helpers_data[h.index]);
                    (void)0;}), *_14).vars.size() - helpers0vars), solveBlock_Hg26HKZ3(n_body, ret_expect, target.index, short(short((short((short((HM_Function | HM_CanReturn)) | HM_LabelUsed)) | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL))))), 0, n_fn.value, int(_15), 0, _scope, _helpers, module, _current_fn, _current_fnort_1, _here, ctx, _helpers_data, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string));
                    if (currentFn_mustBecomeInline_jsAJliCT(_current_fn))
                    {
                        if (!(isFirst))
                            fail_UWhygD7O("Function wants to become inline on after first solve."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                        s_Overload& o = GET_mut_AkUmF8Ao(target, _scope, module);
                        o.kind = "inline"_fu;
                        o.type = ret_expect;
                        goto L_NOT_INLINE;
                    };
                    retval = SolvedNodeData_kcSanAvz(s_body, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).type;
                    const int idx_body = (outItems_RUwn1GIv(_current_fn, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).size() + FN_BODY_BACK);
                    outItems_RUwn1GIv(_current_fn, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).mutref(idx_body) = (s_body ? s_body : fail_UWhygD7O("falsy body"_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
                    didSetBody = true;
                    ArgsAtRisk_shake_UoicnRMt(_current_fn.flow);
                    ArgsWritten_shake_OnZ6Pgmj(s_Flow(_current_fn.flow), _current_fn.events.args_ever_written);
                };
                updateScope_ATgjHgOK(_current_fn, retval, true, target, _scope, module, ctx, _current_fnort_1, _here, _helpers, _helpers_data, isNative, isUnspec, isPure, _current_fn, isNovec, isInline);
            };
          } L_NOT_INLINE:;
        };
        if (!didSetBody)
        {
            const s_Overload& o = GET_wZZN3wJZ(target, _scope, module, ctx);
            if (!(o.kind != "fn"_fu))
                fail_UWhygD7O(((("did not set body on "_fu + qWHAT_NVk45OOI(o, module, _scope, ctx)) + ": "_fu) + humanizeType_UeNyC0N4(o.type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
    };
    lazySolveEnd_8t0k8GNT(target, _scope, module, ctx, _here, _helpers, _helpers_data, options, _notes, _current_fnort, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, shortModuleName, _field_items, t_string);
    return /*NRVO*/ target;
}

static bool lazySolveStart_pR3sKz01(const s_Target& target, const s_Overload& overload, s_Scope& _scope, s_Module& module, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if ((overload.status & (SS_DID_START | SS_LAZY)) != SS_LAZY)
        return false;


    {
        s_Overload& o = GET_mut_AkUmF8Ao(target, _scope, module);
        if (o.status & ((SS_FINALIZED | SS_DID_START) | SS_DIRTY))
            fail_UWhygD7O(x7E("SS_DID_START: non-zero solver status: "_fu, fu::u64dec(overload.status)), _here, ctx, _helpers, _helpers_data, _scope, module);

        o.status |= SS_DID_START;
        if (o.kind == "fn"_fu)
            doTrySpecialize_FDyqg3xS(target, s_Target{}, fu::view<s_SolvedNode>{}, fu_STR{}, fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, 0, (*(const s_Type*)fu::NIL), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        else if (o.kind == "type"_fu)
            __solveStruct_AGP6HYuv(true, s_Node(EXT_OOgXljzg(target, module, _scope, ctx).tEmplate.node), target, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type, _warnings, _specs, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        else
            fail_UWhygD7O((("lazySolveStart: kind is `"_fu + o.kind) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    return true;
}

static fu_STR str_U8sztbmR(const int min, const int max)
{
    return ((min != max) ? (x7E((x7E("["_fu, fu::i64dec(min)) + ", "_fu), fu::i64dec(max)) + "]"_fu) : fu::i64dec(min));
}

static void reorderByNumUsings_xEVwJjyx(bool& use_reorder, fu_VEC<int>& reorder, fu::view<s_Argument> host_args, const int num_args, const int num_usings)
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

static bool reorderByArgIDs_mo4vpIfa(bool& use_reorder, fu_VEC<int>& reorder, fu::view<fu_STR> names, s_BitSet&& optional, fu::view<s_Argument> host_args, const int num_usings)
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

static int findRestStart_blLvBLWK(const s_Extended& ext)
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

static void foreach_awgnBFYq(const s_Target& t, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const bool nullary, s_CurrentFn& _current_fn, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
{
    s_Type arg0type0 { SolvedNodeData_kcSanAvz(TODO_FIX_convert_args[0], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type };
    if (!nullary)
    {
        const int here = SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index;
        if (here && (t.index > here) && (t.modid == module.modid) && (EXT_OOgXljzg(t, module, _scope, ctx).local_of != here))
            return;

        if (root && retype)
            TODO_FIX_convert_args.mutref(0) = retype;
        else
            MUT_zK2FAfx9(TODO_FIX_convert_args[0], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type = from;

    };
    fu_DEFER(if (!nullary)
    {
        if (root && retype)
            TODO_FIX_convert_args.mutref(0) = arg0;
        else
            MUT_zK2FAfx9(TODO_FIX_convert_args[0], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type = arg0type0;

    });
    fu_STR error {};
    s_Target candidate {};
    if (nullary || (candidate = tryMatch__mutargs_DusNpVWB(fu_STR{}, TODO_FIX_reorder, TODO_FIX_conversions, error, bool{}, (*(const s_Scope*)fu::NIL), fu_VEC<s_SolvedNode>(TODO_FIX_convert_args), F_CONVERSION, t, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string)))
    {
        const s_Target& t_1 = (nullary ? t : candidate);
        const s_Overload& convert = GET_wZZN3wJZ(t_1, _scope, module, ctx);
        if (!(convert.type))
            fail_UWhygD7O((("No convert.type, perhaps a `using inline fn` without a return type annotation: `"_fu + qWHAT_NVk45OOI(convert, module, _scope, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Type convertType = ((convert.kind == "field"_fu) ? add_refs_P9wIESfO((from ? from : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), s_Type(convert.type)) : s_Type(convert.type));
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
                    fu_STR suffix = (((("\n\t\t"_fu + explainConversion_q5iXZeNQ(match, _scope, module, ctx)) + "\n\tand:"_fu) + "\n\t\t"_fu) + explainConversion_q5iXZeNQ((path + t_1), _scope, module, ctx));
                    if (actual)
                        fail_UWhygD7O(((((("Conversion ambiguity, multiple ways to convert `"_fu + humanizeType_UeNyC0N4(actual, module, ctx)) + "` into `"_fu) + humanizeType_UeNyC0N4(expect, module, ctx)) + "`: "_fu) + suffix), _here, ctx, _helpers, _helpers_data, _scope, module);
                    else
                        fail_UWhygD7O(((("`using` ambiguity, multiple ways to obtain a `"_fu + humanizeType_UeNyC0N4(expect, module, ctx)) + "` in this scope: "_fu) + suffix), _here, ctx, _helpers, _helpers_data, _scope, module);

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

                                    const s_Overload& convert_1 = GET_wZZN3wJZ(path[i_1], _scope, module, ctx);
                                    err += (((qWHAT_NVk45OOI(convert_1, module, _scope, ctx) + ": "_fu) + humanizeType_UeNyC0N4(convertType, module, ctx)) + "` ->"_fu);
                                };
                                err += (("\n\t\t`"_fu + qWHAT_NVk45OOI(convert, module, _scope, ctx)) + "`."_fu);
                                fail_UWhygD7O(fu_STR(err), _here, ctx, _helpers, _helpers_data, _scope, module);
                            };
                        };
                    };
                    path.push(s_Target(t_1));
                    fu_DEFER(path.pop());
                    descend_nIbEJaxQ(convertType, false, isStruct, bool{}, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, _current_fnort, _here, ctx, _helpers, _helpers_data, module, _current_fn, retype, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _field_items, _specs, _root_scope, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, has_converts);
                };
            };
        };
    };
}

                                #ifndef DEFt_each_jXIhka6j
                                #define DEFt_each_jXIhka6j
inline void each_jXIhka6j(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, int, const int start, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const bool nullary, s_CurrentFn& _current_fn, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
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
            foreach_awgnBFYq(u, TODO_FIX_convert_args, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, nullary, _current_fn, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);
        };
        i0 = ss.end;
    };
}
                                #endif

                                #ifndef DEFt_each_SiUn64qz
                                #define DEFt_each_SiUn64qz
inline void each_SiUn64qz(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, int, const int start, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const bool nullary, s_CurrentFn& _current_fn, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
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
            foreach_awgnBFYq(items[i_1], TODO_FIX_convert_args, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, nullary, _current_fn, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

        i0 = ss.end;
    };
}
                                #endif

static void descend_nIbEJaxQ(const s_Type& from, const bool nullary, const bool isStruct, const bool root, const bool local_scope, s_Scope& _scope, const s_Scope& misc_scope, s_ScopeSkipMemos& _ss, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_CurrentFn& _current_fn, const s_SolvedNode& retype, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const int has_converts)
{
    if (nullary)
        each_jXIhka6j(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).usings), fu_VEC<s_ScopeSkip>((local_scope ? _ss.usings : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, 0, TODO_FIX_convert_args, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, nullary, _current_fn, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);
    else
    {
        if (isStruct)
        {
            fu_VEC<s_Target> inner { lookupStruct_5FUAmY77(from, module, ctx).converts };
            for (int i = 0; i < inner.size(); i++)
                foreach_awgnBFYq(s_Target(inner[i]), TODO_FIX_convert_args, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, nullary, _current_fn, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

        };
        if (has_converts)
            each_SiUn64qz(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).converts), fu_VEC<s_ScopeSkip>((local_scope ? _ss.converts : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, 0, TODO_FIX_convert_args, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, nullary, _current_fn, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

    };
}

static fu_VEC<s_Target> tryConvert_J8rQfUCS(const s_Scope& misc_scope, const bool local_scope, const s_Type& expect, const s_Type& actual, const s_SolvedNode& retype, s_Scope& _scope, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_CurrentFn& _current_fn, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_Target> match {};
    fu_VEC<s_Target> path {};
    const int has_converts = (local_scope ? _scope : misc_scope).converts.size();
    const s_SolvedNode arg0 { TODO_FIX_convert_args[0] };
    fu_VEC<int> TODO_FIX_reorder {};
    fu_VEC<fu_VEC<s_Target>> TODO_FIX_conversions {};
    descend_nIbEJaxQ(actual, !actual, isStruct_C02JG8Ye(actual), true, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, _current_fnort, _here, ctx, _helpers, _helpers_data, module, _current_fn, retype, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _field_items, _specs, _root_scope, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, has_converts);
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

static fu_STR qWHAT_es6fhkVl(const s_Argument& arg, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return (qKW_PSFLzFOM("arg"_fu) + " "_fu) + qID_PSFLzFOM(human_g4kmYeuH(arg.name, module, _scope, ctx));
}

                                #ifndef DEFt_replace_ZeXZ2iaG
                                #define DEFt_replace_ZeXZ2iaG
inline fu_STR replace_ZeXZ2iaG(const fu_STR& str, fu::view<char> all, fu::view<char> with)
{
    /*MOV*/ fu_STR result {};

    {
        int last = 0;
        int next = 0;
        const int N = all.size();
        if (N)
        {
            while (((next = fu::lfind(str, all, last)) >= 0))
            {

                {
                    fu_STR substr = fu::slice(str, last, next);
                    const bool first = !last;
                    const bool last_1 = false;
                    if (!first)
                        result += with;
                    else if (last_1)
                        return fu_STR(str);

                    result += substr;
                };
                last = (next + N);
            };
        };
        if (last)
        {
            fu_STR substr = fu::slice(str, last);
            const bool first = false;
            const bool last_1 = true;
            if (!first)
                result += with;
            else if (last_1)
                return fu_STR(str);

            result += substr;
        }
        else
        {
            const bool first = true;
            const bool last_1 = true;
            if (!first)
                result += with;
            else if (last_1)
                return fu_STR(str);

            result += str;
        };
    };
    return /*NRVO*/ result;
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

static s_Type solveArrlit_itemType_init_VSDwwZbV(const s_Type& head, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    s_Type _0 {};
    return (_0 = clear_refs_8e1ZyHy2(s_Type(head))) ? static_cast<s_Type&&>(_0) : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_Type solveArrlit_done_S7Kl0FX9(const s_Type& itemType, const s_TokenIdx& _here, const s_Context& ctx)
{
    return createArray_8e1ZyHy2(itemType, _here, ctx);
}

static s_Target GETfn_IgkwXRv1(const int idx, const s_Module& module)
{
    return s_Target { int(module.modid), int(idx) };
}

static fu_STR fnName_UC6RMgMA(const int idx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return (idx ? (("`"_fu + GET_wZZN3wJZ(GETfn_IgkwXRv1(idx, module), _scope, module, ctx).name) + "`"_fu) : "global scope"_fu);
}

static void disambig_82hThzjW(const s_Target& matchIdx, const s_Target& overloadIdx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, fu::view<char> id, fu::view<fu_VEC<s_Target>> conversions, fu::view<fu_VEC<s_Target>> conversions_1)
{
    if (matchIdx)
    {
        const s_Target& PREV = matchIdx;
        const s_Target& NEXT = overloadIdx;
        const int inner = localOf_mcb6vfib(PREV, module, _scope, ctx);
        const int outer = localOf_mcb6vfib(NEXT, module, _scope, ctx);
        const int callsite = SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index;
        if (SELF_TEST)
        {
            int _c = callsite;
            while (_c > inner)
                _c = localOf_mcb6vfib(GETfn_IgkwXRv1(_c, module), module, _scope, ctx);

            if (!(_c == inner))
                fail_UWhygD7O(((((("BUG! Leaking `"_fu + id) + "` between functions [inner/callsite]: "_fu) + fnName_UC6RMgMA(inner, module, _scope, ctx)) + " is seen from "_fu) + fnName_UC6RMgMA(callsite, module, _scope, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

            int _i = inner;
            while (_i > outer)
                _i = localOf_mcb6vfib(GETfn_IgkwXRv1(_i, module), module, _scope, ctx);

            if (!(_i == outer))
                fail_UWhygD7O(((((((("BUG! Leaking `"_fu + id) + "` between functions [inner/outer]: "_fu) + fnName_UC6RMgMA(inner, module, _scope, ctx)) + " and "_fu) + fnName_UC6RMgMA(outer, module, _scope, ctx)) + " as seen from "_fu) + fnName_UC6RMgMA(callsite, module, _scope, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        fail_UWhygD7O((((((((((("Ambiguous callsite, matches multiple items in scope: "_fu + explainWhichFn_nyZDxjj1(PREV, conversions, _scope, module, ctx)) + " from "_fu) + fnName_UC6RMgMA(inner, module, _scope, ctx)) + " and "_fu) + explainWhichFn_nyZDxjj1(NEXT, conversions_1, _scope, module, ctx)) + " from "_fu) + fnName_UC6RMgMA(outer, module, _scope, ctx)) + ", as seen from "_fu) + fnName_UC6RMgMA(callsite, module, _scope, ctx)) + "."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

                                #ifndef DEFt_last_lCWabbdb
                                #define DEFt_last_lCWabbdb
inline const fu_STR& last_lCWabbdb(fu::view<fu_STR> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_Target tryMatch__mutargs_DusNpVWB(fu_STR&& id, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, fu_STR& error, const bool local_scope, const s_Scope& misc_scope, fu::view<s_SolvedNode> args, const int flags, const s_Target& target, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
{
    const int error_len0 = error.size();
    if (SELF_TEST)
    {
        for (int i = 0; i < args.size(); i++)
        {
            if (!SolvedNodeData_kcSanAvz(args[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind)
                fail_UWhygD7O("Falsy arg.kind!"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        };
    };
    /*MOV*/ s_Target matchIdx {};
    int minArity = args.size();
    const int numUsings = countUsings_ZQ7BPP02(local_scope, _scope, misc_scope, _ss, _here, ctx, _helpers, _helpers_data, module);
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
            names.push(fu_STR(((SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "argid"_fu) ? (*(_0 = &(((void)(some = true), SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).value))) ? *_0 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)) : (*(const fu_STR*)fu::NIL))));
            if (SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).flags & F_OPT_ARG)
            {
                minArity--;
                add_zoGTyg4u(optional, i);
            };
        };
        if (!(some))
            fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    fu_STR reusable_mangle {};
    fu_VEC<s_Target> extra_items {};
    if (local_scope && !target)
    {
        s_BitSet seen {};
        if (numUsings)
            each_X49IYLOe((local_scope ? _scope : misc_scope).usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, 0, _scope, module, ctx, seen, local_scope, _ss, id, extra_items);

        if (flags & ((F_ACCESS | F_METHOD) | F_OPERATOR))
        {
            for (int i = 0; i < args.size(); i++)
                visitTypeImports_WlffWKy8(SolvedNodeData_kcSanAvz(args[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, module, ctx, seen, _scope, local_scope, _ss, id, extra_items);

        };
    };
    fu_VEC<s_ScopeItem> field_items { (local_scope && ((flags & F_ACCESS) || !minArity) && (minArity <= 1) && maxArity ? _field_items : (*(const fu_VEC<s_ScopeItem>*)fu::NIL)) };
    fu_VEC<fu_STR> alternate_ids {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        bool shadows {};
        while ((overloadIdx = search_KNlWqVSS((local_scope ? _scope : misc_scope).items, id, scope_iterator, (local_scope ? _ss.items : fu::view<s_ScopeSkip>{}), shadows, target, extra_items, field_items)))
        { {
            bool DEBUG_mustMatch = false;
            fu_VEC<fu_VEC<s_Target>> conversions_1 {};
            fu_VEC<int> reorder_1 {};
            bool TODO_FIX_skip_autocalls = false;
            while (true)
            {
                s_Overload overload { GET_wZZN3wJZ(overloadIdx, _scope, module, ctx) };
                if (lazySolveStart_pR3sKz01(overloadIdx, s_Overload(overload), _scope, module, _here, ctx, _helpers, _helpers_data, _current_fnort, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string))
                    continue;

                fu_STR kind { overload.kind };
                const bool isType = (kind == "type"_fu);
                if (minArity && isType && !target)
                {
                    const fu_STR& alt = overload.type.vtype.canon;
                    if (alt != id)
                        alternate_ids.push(fu_STR(alt));

                };
                const s_Extended& arity = EXT_OOgXljzg(overloadIdx, module, _scope, ctx);
                const bool isZeroInit = (isType && !explicitArity);
                if (!isZeroInit && ((arity.max < minArity) || (arity.min > maxArity)))
                {
                    if (DEBUG_mustMatch || error)
                    {
                        fu_STR err = ((qWHAT_NVk45OOI(overload, module, _scope, ctx) + ": "_fu) + (((("Wrong number of arguments: expects "_fu + str_U8sztbmR(arity.min, arity.max)) + ", got "_fu) + str_U8sztbmR(minArity, maxArity)) + "."_fu));
                        if (DEBUG_mustMatch)
                            fail_UWhygD7O(("mustMatch.matchFail: "_fu + err), _here, ctx, _helpers, _helpers_data, _scope, module);
                        else
                            error += ("\n\n\t"_fu + err);

                    };
                    goto L_0267;
                };
                fu_VEC<s_Argument> host_args { arity.args };
                const int num_usings = (!isZeroInit && (arity.min > explicitArity) ? (arity.min - explicitArity) : int{});
                bool use_reorder = false;
                if (!names)
                    reorderByNumUsings_xEVwJjyx(use_reorder, reorder_1, host_args, args.size(), num_usings);
                else if (!reorderByArgIDs_mo4vpIfa(use_reorder, reorder_1, names, s_BitSet(optional), host_args, num_usings))
                {
                    if (DEBUG_mustMatch || error)
                    {
                        fu_STR err = ((qWHAT_NVk45OOI(overload, module, _scope, ctx) + ": "_fu) + "Argument name mismatch [TODO REPORT]"_fu);
                        if (DEBUG_mustMatch)
                            fail_UWhygD7O(("mustMatch.matchFail: "_fu + err), _here, ctx, _helpers, _helpers_data, _scope, module);
                        else
                            error += ("\n\n\t"_fu + err);

                    };
                    goto L_0267;
                };
                if (optional && reorder_1 && (reorder_1.size() < args.size()) && (reorder_1.size() < arity.max))
                {
                    if (DEBUG_mustMatch || error)
                    {
                        fu_STR err = ((qWHAT_NVk45OOI(overload, module, _scope, ctx) + ": "_fu) + "Optional argument ambiguity, not all optional arguments provided, and not all callsite arguments used. Cannot distinguish from a typo. [TODO LIST MISSING ARGS]"_fu);
                        if (DEBUG_mustMatch)
                            fail_UWhygD7O(("mustMatch.matchFail: "_fu + err), _here, ctx, _helpers, _helpers_data, _scope, module);
                        else
                            error += ("\n\n\t"_fu + err);

                    };
                    goto L_0267;
                };
                s_Type REST_TYPE {};
                s_Type REST_EXPECT {};
                const int REST_START = findRestStart_blLvBLWK(arity);
                const int N = std::max((use_reorder ? reorder_1.size() : args.size()), (!isZeroInit ? arity.min : (*(const int*)fu::NIL)));
                if (REST_START < N)
                {
                    const s_Type& expect = host_args[REST_START].type;
                    if (expect)
                    {
                        s_Type _1 {};
                        REST_EXPECT = ((_1 = tryClear_sliceable_8e1ZyHy2(expect)) ? static_cast<s_Type&&>(_1) : fail_UWhygD7O(((GET_wZZN3wJZ(overloadIdx, _scope, module, ctx).name + ": Rest argument annotation is not an array: "_fu) + humanizeType_UeNyC0N4(expect, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module));
                    };
                };
                if (N)
                {
                    if (!((reorder_1.size() >= args.size()) || !reorder_1 || optional))
                        fail_UWhygD7O("reorder < args."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

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
                                if (expect)
                                {
                                    fu_VEC<s_Target> conversion = tryConvert_J8rQfUCS(misc_scope, local_scope, expect, (*(const s_Type*)fu::NIL), s_SolvedNode{}, _scope, TODO_FIX_convert_args, _ss, _current_fnort, _here, ctx, _helpers, _helpers_data, module, _current_fn, _field_items, _specs, _root_scope, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string);
                                    if (conversion)
                                    {
                                        grow_if_oob_LNPvdN4l(conversions_1, i) = conversion;
                                        continue;
                                    };
                                };
                            };
                            if (DEBUG_mustMatch || error)
                            {
                                fu_STR err = ((qWHAT_NVk45OOI(overload, module, _scope, ctx) + ": "_fu) + ("Cannot infer missing argument "_fu + qWHAT_es6fhkVl(host_arg, module, _scope, ctx)));
                                if (DEBUG_mustMatch)
                                    fail_UWhygD7O(("mustMatch.matchFail: "_fu + err), _here, ctx, _helpers, _helpers_data, _scope, module);
                                else
                                    error += ("\n\n\t"_fu + err);

                            };
                            goto L_0267;
                        };
                        if (host_arg.flags & F_MUSTNAME)
                        {
                            if ((names.size() <= callsiteIndex) || !names[callsiteIndex])
                            {
                                if (DEBUG_mustMatch || error)
                                {
                                    fu_STR err = ((qWHAT_NVk45OOI(overload, module, _scope, ctx) + ": "_fu) + ("Argument must be :explicitly named "_fu + qWHAT_es6fhkVl(host_arg, module, _scope, ctx)));
                                    if (DEBUG_mustMatch)
                                        fail_UWhygD7O(("mustMatch.matchFail: "_fu + err), _here, ctx, _helpers, _helpers_data, _scope, module);
                                    else
                                        error += ("\n\n\t"_fu + err);

                                };
                                goto L_0267;
                            };
                        };
                        if (host_arg.autocall && !TODO_FIX_skip_autocalls)
                        {
                            fu_VEC<s_SolvedNode> autocall_args {};
                            fu_VEC<int> autocall_reorder {};
                            fu_VEC<fu_VEC<s_Target>> autocall_conversions {};
                            autocall_args.resize(1);
                            autocall_args.mutref(0) = args[callsiteIndex];
                            fu_STR autocall_error = (error ? (((("Cannot match argument "_fu + qWHAT_es6fhkVl(host_arg, module, _scope, ctx)) + " autocall "_fu) + qCODE_PSFLzFOM(host_arg.autocall)) + ": "_fu) : fu_STR{});
                            const s_Target t = tryMatch__mutargs_DusNpVWB(fu_STR(host_arg.autocall), autocall_reorder, autocall_conversions, autocall_error, local_scope, misc_scope, autocall_args, 0, s_Target{}, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
                            if (!t)
                            {
                                if (DEBUG_mustMatch || error)
                                {
                                    fu_STR err = ((qWHAT_NVk45OOI(overload, module, _scope, ctx) + ": "_fu) + replace_ZeXZ2iaG(autocall_error, "\t"_fu, "\t\t"_fu));
                                    if (DEBUG_mustMatch)
                                        fail_UWhygD7O(("mustMatch.matchFail: "_fu + err), _here, ctx, _helpers, _helpers_data, _scope, module);
                                    else
                                        error += ("\n\n\t"_fu + err);

                                };
                                goto L_0267;
                            };
                            if (autocall_conversions)
                                grow_if_oob_LNPvdN4l(conversions_1, i) += only_SYogW9sF(autocall_conversions);

                            grow_if_oob_LNPvdN4l(conversions_1, i) += s_Target(t);
                            if (!(autocall_reorder.size() < 2))
                                fail_UWhygD7O("autocall: reorder"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                        };
                        if (!expect)
                            continue;

                        const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                        s_Type actual { (hasConv ? GET_wZZN3wJZ(last_GEqmjUnO(conversions_1.mutref(i)), _scope, module, ctx).type : SolvedNodeData_kcSanAvz(args[callsiteIndex], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) };
                        if (isAssignableAsArgument_P9wIESfO(expect, (actual ? actual : fail_UWhygD7O("tryMatch: !actual"_fu, _here, ctx, _helpers, _helpers_data, _scope, module))))
                            continue;

                        if (!hasConv)
                        {
                            const s_SolvedNode& arg = args[callsiteIndex];
                            const s_SolvedNode& arg_1 = ((SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "argid"_fu) ? only_aj4CwosS(SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items) : arg);
                            s_Type retype = tryRetyping_C9LIXaDr(arg_1, expect, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
                            if (isAssignableAsArgument_P9wIESfO(expect, retype))
                                continue;

                        };
                        if (!(flags & F_CONVERSION))
                        {
                            fu_VEC<s_Target> conversion = tryConvert_J8rQfUCS(misc_scope, local_scope, expect, s_Type(actual), (!hasConv ? args[callsiteIndex] : (*(const s_SolvedNode*)fu::NIL)), _scope, TODO_FIX_convert_args, _ss, _current_fnort, _here, ctx, _helpers, _helpers_data, module, _current_fn, _field_items, _specs, _root_scope, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string);
                            if (conversion)
                            {
                                grow_if_oob_LNPvdN4l(conversions_1, i) += conversion;
                                continue;
                            };
                        };
                        if (DEBUG_mustMatch || error)
                        {
                            fu_STR err = ((qWHAT_NVk45OOI(overload, module, _scope, ctx) + ": "_fu) + ((((("Argument "_fu + qWHAT_es6fhkVl(host_arg, module, _scope, ctx)) + " expects "_fu) + humanizeType_UeNyC0N4(expect, module, ctx)) + ", got "_fu) + humanizeType_UeNyC0N4(actual, module, ctx)));
                            if (DEBUG_mustMatch)
                                fail_UWhygD7O(("mustMatch.matchFail: "_fu + err), _here, ctx, _helpers, _helpers_data, _scope, module);
                            else
                                error += ("\n\n\t"_fu + err);

                        };
                        goto L_0267;
                    };
                };
                if (REST_START < N)
                {
                    for (int i = REST_START; i < N; i++)
                    {
                        const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                        const int callsiteIndex = (use_reorder ? reorder_1[i] : i);
                        const s_Type& actual = (hasConv ? GET_wZZN3wJZ(last_GEqmjUnO(conversions_1.mutref(i)), _scope, module, ctx).type : SolvedNodeData_kcSanAvz(args[callsiteIndex], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type);
                        s_Type _3 {};
                        fu::never _4 {};
                        REST_TYPE = ((i == REST_START) ? solveArrlit_itemType_init_VSDwwZbV(actual, _here, ctx, _helpers, _helpers_data, _scope, module) : ((_3 = type_trySuper_P9wIESfO(REST_TYPE, actual)) ? static_cast<s_Type&&>(_3) : (__extension__ (
                        {
                            if (DEBUG_mustMatch || error)
                            {
                                fu_STR err = ((qWHAT_NVk45OOI(overload, module, _scope, ctx) + ": "_fu) + ((("Rest arguments have no common supertype: "_fu + humanizeType_UeNyC0N4(REST_TYPE, module, ctx)) + " <- "_fu) + humanizeType_UeNyC0N4(actual, module, ctx)));
                                if (DEBUG_mustMatch)
                                    fail_UWhygD7O(("mustMatch.matchFail: "_fu + err), _here, ctx, _helpers, _helpers_data, _scope, module);
                                else
                                    error += ("\n\n\t"_fu + err);

                            };
                            goto L_0267;
                        (void)0;}), static_cast<fu::never&&>(_4))));
                    };
                    REST_TYPE = solveArrlit_done_S7Kl0FX9(REST_TYPE, _here, ctx);
                };
                if (kind == "template"_fu)
                {
                    fu_STR cant_reuse {};
                    fu_STR& args_mangled = ((use_reorder || conversions_1) ? cant_reuse : reusable_mangle);
                    const s_Target specIdx = trySpecialize_Q0h9lc0y(overloadIdx, args, args_mangled, REST_START, REST_TYPE, reorder_1, use_reorder, conversions_1, _scope, module, ctx, _here, _current_fnort, _helpers, _helpers_data, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
                    if (!specIdx)
                    {
                        if (DEBUG_mustMatch || error)
                        {
                            fu_STR err = ((qWHAT_NVk45OOI(overload, module, _scope, ctx) + ": "_fu) + "Could not specialize [TODO doTrySpec ERROR]"_fu);
                            if (DEBUG_mustMatch)
                                fail_UWhygD7O(("mustMatch.matchFail: "_fu + err), _here, ctx, _helpers, _helpers_data, _scope, module);
                            else
                                error += ("\n\n\t"_fu + err);

                        };
                        goto L_0267;
                    };
                    overloadIdx = specIdx;
                    DEBUG_mustMatch = true;
                    TODO_FIX_skip_autocalls = true;
                    continue;
                };
                disambig_82hThzjW(matchIdx, overloadIdx, module, _scope, ctx, _current_fn, _current_fnort, _here, _helpers, _helpers_data, id, conversions, conversions_1);
                std::swap(reorder_1, reorder);
                std::swap(conversions_1, conversions);
                matchIdx = overloadIdx;
                if (shadows)
                    goto L_MATCH_FAIL;

                break;
            };
          } L_0267:;
        } L_MATCH_FAIL:;

        if (!alternate_ids)
            break;

        id = last_lCWabbdb(alternate_ids);
        alternate_ids.pop();
    };
    if (error && (error.size() == error_len0) && !matchIdx)
        error += (qID_PSFLzFOM(id) + " is not defined here."_fu);

    return /*NRVO*/ matchIdx;
}

static s_Target match__mutargs_9Efkdym9(const s_Scope& misc_scope, const bool local_scope, const fu_STR& id, fu::view<s_SolvedNode> args, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, const int flags, const s_Target& target, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
{
    fu_STR error {};
    /*MOV*/ const s_Target ret = tryMatch__mutargs_DusNpVWB(fu_STR(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
    if (ret)
        return /*NRVO*/ ret;

    error = (("Bad call to "_fu + qID_PSFLzFOM(id)) + ": "_fu);
    const s_Target debug = tryMatch__mutargs_DusNpVWB(fu_STR(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
    if (debug)
        fail_UWhygD7O(("Did match on second pass: "_fu + qWHAT_NVk45OOI(GET_wZZN3wJZ(debug, _scope, module, ctx), module, _scope, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    fail_UWhygD7O(fu_STR(error), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_Type solveArrlit_itemType_TKc2H0dE(fu::view<s_SolvedNode> items, /*MOV*/ s_Type&& itemType, int start, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Target& _current_fnort)
{
    if (!itemType)
    {
        if (start == items.size())
            fail_UWhygD7O("Cannot infer empty arraylit."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        itemType = solveArrlit_itemType_init_VSDwwZbV(SolvedNodeData_kcSanAvz(items[start++], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, _here, ctx, _helpers, _helpers_data, _scope, module);
    }
    else if (is_ref_8e1ZyHy2(itemType))
        fail_UWhygD7O("Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    for (int i = start; i < items.size(); i++)
        itemType = superType_rjCdQuCu("Array literal: "_fu, itemType, SolvedNodeData_kcSanAvz(items[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data);

    return static_cast<s_Type&&>(itemType);
}

static s_SolvedNode createArrlit_8rNohxK9(fu_VEC<s_SolvedNode>&& items, const s_Type& itemType, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    s_Type itemType_1 = solveArrlit_itemType_TKc2H0dE(items, s_Type(itemType), 0, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort);
    return SolvedNode_GiPnt7zQ("arrlit"_fu, solveArrlit_done_S7Kl0FX9(itemType_1, _here, ctx), 0, (*(const fu_STR*)fu::NIL), items, s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode SolvedNode_deepClone_2loYtANk(const s_SolvedNode& sn, const s_Target& from, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    s_SolvedNodeData data { SolvedNodeData_6z9gBjiy(sn, from, _here, ctx, _helpers, _helpers_data, _scope, module) };
    fu_VEC<s_SolvedNode>& items = data.items;
    for (int i = 0; i < items.size(); i++)
        items.mutref(i) = SolvedNode_deepClone_2loYtANk(items[i], from, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type);

    return SolvedNode_create_rUwRNi8j(data, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_Type intersectionType_9rzHExOX(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_Type _0 {};
    return (_0 = type_tryIntersect_P9wIESfO(a, b)) ? static_cast<s_Type&&>(_0) : fail_UWhygD7O((((((((id ? (("`"_fu + human_g4kmYeuH(id, module, _scope, ctx)) + "`: "_fu) : fu_STR{}) + reason) + "Cannot intersect a common subtype: `"_fu) + humanizeType_UeNyC0N4(a, module, ctx)) + "` & `"_fu) + humanizeType_UeNyC0N4(b, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode createLet_FuWa3EgR(const fu_STR& id, const s_Type& type, const int flags, bool& shadows, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Target& _current_fn_or_type)
{
    const s_Target target = Binding_mAZZc3ub(id, s_Type(type), flags, shadows, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _root_scope, _ss);
    /*MOV*/ const s_SolvedNode ret = SolvedNode_GiPnt7zQ("let"_fu, GET_wZZN3wJZ(target, _scope, module, ctx).type, flags, GET_wZZN3wJZ(target, _scope, module, ctx).name, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
    solved_set_KaR4f3TR(target, ret, _scope, module);
    return /*NRVO*/ ret;
}

static const s_Target& injectImplicitArg_EZSUWYxC(const fu_STR& id, const s_Type& type, const s_Target& becauseOf, s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Target& _current_fn_or_type)
{
    if (!(SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items))
        fail_UWhygD7O((((("No implicit `"_fu + id) + "` in scope, needed to call `"_fu) + GET_wZZN3wJZ(becauseOf, _scope, module, ctx).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    for (int i = 0; i < (SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size() + FN_ARGS_BACK); i++)
    {
        const s_SolvedNode arg { SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[i] };
        if (SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).value == id)
        {
            s_Type super = intersectionType_9rzHExOX("Implicit argument collision: "_fu, add_ref_GR4OoJkm(s_Type(type), SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type.lifetime, _here, ctx), SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, id, module, _scope, ctx, _here, _helpers, _helpers_data);
            MUT_zK2FAfx9(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type = super;
            GET_mut_AkUmF8Ao(s_Target(SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target), _scope, module).type = super;
            const s_Target* _0;
            return *(_0 = &(SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target)) ? *_0 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);
        };
    };
    bool shadows {};
    const int flags = (F_IMPLICIT | F_ARG);
    const s_SolvedNode newArgNode = createLet_FuWa3EgR(id, type, flags, shadows, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _root_scope, _ss, _current_fn_or_type);
    const int newArgIdx = (SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size() + FN_ARGS_BACK);
    MUT_zK2FAfx9(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.insert(newArgIdx, s_SolvedNode(newArgNode));
    Reference_trackArgument_8HAzLaZD(_current_fn.flow, SolvedNodeData_kcSanAvz(newArgNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index, newArgIdx);
    return SolvedNodeData_kcSanAvz(newArgNode, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target;
}

static s_SolvedNode bindImplicitArg_UPRse1A1(const fu_STR& name, const s_Type& type, const s_Target& becauseOf, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, const s_Target& _current_fnort, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Target& _current_fn_or_type, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_Warning>& _warnings, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
{

    {
        const s_ClosureID _ = tryParseClosureID_3jVozxZ2(name);
        if (isLocal_Q7E97T1i(_.target) && (localOf_mcb6vfib(_.target, module, _scope, ctx) == SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index))
        {
            if (!(_.revision == EXT_OOgXljzg(SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, module, _scope, ctx).revision))
                fail_UWhygD7O(x7E((x7E((("ClosureID.revision mismatch: "_fu + qWHAT_NVk45OOI(GET_wZZN3wJZ(_.target, _scope, module, ctx), module, _scope, ctx)) + "\n\tCaptured at: "_fu), fu::i64dec(_.revision)) + "\n\tCurrent rev: "_fu), fu::i64dec(EXT_OOgXljzg(SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, module, _scope, ctx).revision)), _here, ctx, _helpers, _helpers_data, _scope, module);

            if (!(GET_wZZN3wJZ(_.target, _scope, module, ctx).kind == "var"_fu))
                fail_UWhygD7O(("ClosureID.target is not a var: "_fu + qWHAT_NVk45OOI(GET_wZZN3wJZ(_.target, _scope, module, ctx), module, _scope, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

            return CallerNode_SnVo4qAr("__closure"_fu, s_Target(_.target), fu_VEC<s_SolvedNode>{}, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
        };
    };
    fu_STR error {};
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    s_Target _0 {};
    const s_Target target = ((_0 = tryMatch__mutargs_DusNpVWB(fu_STR(name), reorder, conversions, error, true, (*(const s_Scope*)fu::NIL), fu::view<s_SolvedNode>{}, F_IMPLICIT, s_Target{}, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string)) ? _0 : (_0 = s_Target(injectImplicitArg_EZSUWYxC(name, type, becauseOf, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _root_scope, _ss, _current_fn_or_type))) ? _0 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module));
    const s_Overload& o = GET_wZZN3wJZ(target, _scope, module, ctx);
    if (!(o.flags & F_IMPLICIT))
        fail_UWhygD7O((((("Matching a non-implicit item in scope: `"_fu + name) + "`, binds to call to `"_fu) + GET_wZZN3wJZ(becauseOf, _scope, module, ctx).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    checkAssignable_ITooPbhq(type, o.type, (("Implicit `"_fu + name) + "` type mismatch"_fu), (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);
    return CallerNode_SnVo4qAr("__implicit"_fu, s_Target(target), fu_VEC<s_SolvedNode>{}, 0, reorder, conversions, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
}

static s_SolvedNode SolvedNode_deepClone_NcSdrB6q(const s_SolvedNode& sn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fn_or_type)
{
    return SolvedNode_deepClone_2loYtANk(sn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type);
}

                                #ifndef DEFt_last_cTrO4UFq
                                #define DEFt_last_cTrO4UFq
inline const s_Node& last_cTrO4UFq(fu::view<s_Node> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode solveLetLike_dontTouchScope_5kifdKsi(const fu_STR& id, int flags, /*MOV*/ s_SolvedNode&& init, s_Type&& annot, const s_Type& specType, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    if (!(annot || SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
        fail_UWhygD7O((("Variable declarations without type annotations must be initialized: `"_fu + id) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (annot && SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)
    {
        if (specType)
        {
            if (!isAssignable_P9wIESfO(annot, SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
                init = s_SolvedNode{};

        };
        if (SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)
            checkAssignable_ITooPbhq(annot, SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, "Type annotation does not match init expression"_fu, id, "="_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    const s_Type& t_init = SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type;
    const bool killref = is_ref2temp_8e1ZyHy2(t_init, _here, ctx);
    if (!(flags & F_ARG) && is_never_8e1ZyHy2(t_init))
    {
        makeNote_NPJpVbAC(N_DeadLet, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return s_SolvedNode(init);
    };
    if (is_mutref_8e1ZyHy2(annot, _here, ctx))
        flags |= F_REF;

    if (flags & F_REF)
    {
        if (!(is_mutref_8e1ZyHy2(t_init, _here, ctx) || (is_never_8e1ZyHy2(t_init) && annot) || (!init && (flags & F_ARG))))
            fail_UWhygD7O(((("`ref` variables must be initialized to a mutable reference: `"_fu + id) + "`"_fu) + (t_init ? (" = "_fu + humanizeType_UeNyC0N4(t_init, module, ctx)) : "."_fu)), _here, ctx, _helpers, _helpers_data, _scope, module);

        if (killref)
            fail_UWhygD7O("`ref` varibles cannot bind to temporaries."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    s_Type t_let = ((annot && ((flags & (F_ARG | F_MUT)) || !t_init)) ? s_Type(annot) : ((is_mutref_8e1ZyHy2(t_init, _here, ctx) || (flags & F_MUT) || killref) ? (((flags & F_REF) && (!killref || fail_UWhygD7O("redundant, see above, refs cant bind to temps"_fu, _here, ctx, _helpers, _helpers_data, _scope, module))) ? s_Type(t_init) : (((flags & F_MUT) || killref) ? clear_refs_8e1ZyHy2(s_Type(t_init)) : clear_mutref_8e1ZyHy2(s_Type(t_init)))) : s_Type(t_init)));
    if ((flags & F_ARG) && !(flags & F_MUT))
        t_let = add_ref_GR4OoJkm(s_Type(t_let), Lifetime_temporary_8nlJDPX0(), _here, ctx);

    return SolvedNode_GiPnt7zQ("let"_fu, t_let, flags, id, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createLet_R3YYScx3(const fu_STR& id, const int flags, const s_SolvedNode& init, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, const s_Module& module, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss)
{
    /*MOV*/ s_SolvedNode out = solveLetLike_dontTouchScope_5kifdKsi(id, int(flags), s_SolvedNode(init), s_Type{}, (*(const s_Type*)fu::NIL), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);
    solveLet_9TZ4XuiI(out, id, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _root_scope, _ss);
    return /*NRVO*/ out;
}

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

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline constexpr unsigned SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

                                #ifndef DEF_SS_FN_RECUR
                                #define DEF_SS_FN_RECUR
inline constexpr unsigned SS_FN_RECUR = (0x1u << 17u);
                                #endif

static void detectRecursion_nqZ7LxQz(const s_Target& target, s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Options& options, int& _notes)
{
    s_Overload overload { GET_wZZN3wJZ(target, _scope, module, ctx) };
    if ((overload.status & (SS_FINALIZED | SS_LAZY)) != SS_LAZY)
        return;

    const int note = ((overload.kind == "type"_fu) ? N_TypeRecursion : N_FnRecursion);
    const unsigned status = ((overload.kind == "type"_fu) ? SS_TYPE_RECUR : SS_FN_RECUR);
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (!isFnOrType_XDWuQBvg(h, _helpers_data))
            continue;

        if (_helpers_data[h.index].mask & HM_Lambda)
            fail_UWhygD7O("Recursive lambda, what happened here?"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        GET_mut_AkUmF8Ao(_helpers_data[h.index].target, _scope, module).status |= status;
        makeNote_NPJpVbAC(note, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        if (_helpers_data[h.index].target == target)
            return;

    };
    fail_UWhygD7O((x7E((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu), fu::u64dec(overload.status)) + ")`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode CallerNode_SnVo4qAr(const fu_STR& debug, s_Target&& target, fu_VEC<s_SolvedNode>&& args, const int kills, const fu_VEC<int>& reorder, fu::view<fu_VEC<s_Target>> conversions, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_Warning>& _warnings, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
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
            if (EXT_OOgXljzg(t, module, _scope, ctx).min || (EXT_OOgXljzg(t, module, _scope, ctx).max && args[argIdx]))
            {
                args.mutref(argIdx) = CallerNode_SnVo4qAr("__using.a"_fu, s_Target(t), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(args[argIdx]) } }, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
                continue;
            };
            if (i)
                fail_UWhygD7O((("Bad conversion chain, non-leading nullary: `"_fu + GET_wZZN3wJZ(t, _scope, module, ctx).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

            if (args[argIdx])
                fail_UWhygD7O("Bad conversion chain, about to throw away an argnode."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            args.mutref(argIdx) = CallerNode_SnVo4qAr("__using.b"_fu, s_Target(t), fu_VEC<s_SolvedNode>{}, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
        };
    };
    const int REST_START = findRestStart_blLvBLWK(EXT_OOgXljzg(target, module, _scope, ctx));
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
                args.mutref(i) = createArrlit_8rNohxK9(fu_VEC<s_SolvedNode>(rest), (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type);

        };
    };
    const bool isZeroInit = ((GET_wZZN3wJZ(target, _scope, module, ctx).kind == "type"_fu) && !args.size());
    if (!isZeroInit)
    {
        fu_VEC<s_Argument> host_args { EXT_OOgXljzg(target, module, _scope, ctx).args };
        args.resize(host_args.size());
        for (int i = 0; i < args.size(); i++)
        {
            if (!args[i])
            {
                const s_Argument& host_arg = host_args[i];
                args.mutref(i) = (host_arg.dEfault ? SolvedNode_deepClone_2loYtANk(host_arg.dEfault, target, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type) : ((void)((host_arg.flags & F_IMPLICIT) || fail_UWhygD7O((((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + humanizeType_UeNyC0N4(host_arg.type, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)), bindImplicitArg_UPRse1A1(host_arg.name, host_arg.type, target, module, _scope, ctx, _current_fn, _current_fnort, _here, _helpers, _helpers_data, _current_fn_or_type, _ss, _field_items, _specs, _root_scope, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string)));
                if (is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(args[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
                {
                    args.shrink((i + 1));
                    return deadCall_yrsUexFS(args, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes, _current_fnort, _current_fn_or_type);
                };
            };
        };
    };
    s_Type type { GET_wZZN3wJZ(target, _scope, module, ctx).type };
    if (GET_wZZN3wJZ(target, _scope, module, ctx).kind == "field"_fu)
    {
        const s_Type* _0;
        type = add_refs_P9wIESfO((*(_0 = &(SolvedNodeData_kcSanAvz(only_aj4CwosS(args), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)) ? *_0 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), s_Type(GET_wZZN3wJZ(target, _scope, module, ctx).type));
    }
    else if (GET_wZZN3wJZ(target, _scope, module, ctx).kind == "var"_fu)
    {
        if (GET_wZZN3wJZ(target, _scope, module, ctx).flags & F_INLINE)
            return SolvedNode_deepClone_NcSdrB6q(SolvedNodeData_kcSanAvz(GET_wZZN3wJZ(target, _scope, module, ctx).solved, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[LET_INIT], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);

        if (!(type.lifetime.uni0n.size() == 1))
            fail_UWhygD7O((("CallerNode: var "_fu + GET_wZZN3wJZ(target, _scope, module, ctx).name) + " type.lifetime.len != 1"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        if (isLocal_Q7E97T1i(target) && (localOf_mcb6vfib(target, module, _scope, ctx) != SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index))
        {
            s_ClosureID _1 {};
            int _2 {};
            const s_ClosureID clID = ((_1 = tryParseClosureID_3jVozxZ2(GET_wZZN3wJZ(target, _scope, module, ctx).name)) ? _1 : s_ClosureID { s_Target(target), int(((_2 = EXT_OOgXljzg(parent_Qc9z13HQ(target, module, _scope, ctx), module, _scope, ctx).revision) ? _2 : fail_UWhygD7O(("ClosureID: about to serialize at rev 0: "_fu + qWHAT_NVk45OOI(GET_wZZN3wJZ(target, _scope, module, ctx), module, _scope, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module))) });
            target = injectImplicitArg_EZSUWYxC(serialize_RzDpXp73(clID), s_Type(GET_wZZN3wJZ(target, _scope, module, ctx).type), target, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _root_scope, _ss, _current_fn_or_type);
            const s_Type* _3;
            type = (*(_3 = &(GET_wZZN3wJZ(target, _scope, module, ctx).type)) ? *_3 : fail_UWhygD7O(("CallerNode: !type on var "_fu + GET_wZZN3wJZ(target, _scope, module, ctx).name), _here, ctx, _helpers, _helpers_data, _scope, module));
        };
    }
    else
    {
        if (args)
        {
            const fu_VEC<s_Argument>* _4;
            fu_VEC<s_Argument> host_args { (*(_4 = &(EXT_OOgXljzg(target, module, _scope, ctx).args)) ? *_4 : fail_UWhygD7O(("CallerNode: no host args: "_fu + qWHAT_NVk45OOI(GET_wZZN3wJZ(target, _scope, module, ctx), module, _scope, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module)) };
            if (!((host_args.size() >= args.size())))
                fail_UWhygD7O(("CallerNode: host_arg.len mismatch: "_fu + qWHAT_NVk45OOI(GET_wZZN3wJZ(target, _scope, module, ctx), module, _scope, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

            for (int i0 = 0; i0 < args.size(); i0++)
            {
                const s_Argument& host_arg = host_args[i0];
                s_SolvedNode& arg = args.mutref(i0);
                if (SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "argid"_fu)
                    arg = only_aj4CwosS(SolvedNodeData_kcSanAvz(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items);

                const s_Type& expect = host_arg.type;
                s_Type retype = tryRetyping_C9LIXaDr(arg, expect, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
                if (isAssignableAsArgument_P9wIESfO(expect, retype))
                    MUT_zK2FAfx9(arg, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type = retype;

            };
        };
        if (GET_wZZN3wJZ(target, _scope, module, ctx).kind == "inline"_fu)
        {
            const s_ScopeMemo scope0 = Scope_snap_a3v7I8zX(_scope, _helpers);
            s_ScopeSkipMemos ss0 { _ss };
            const s_HelpersData* _5;
            const int helpers0vars = (__extension__ (
            {
                const s_Helpers& h = last_4St321Ne(_helpers);
                _5 = &(_helpers_data[h.index]);
            (void)0;}), *_5).vars.size();
            fu_DEFER(
            {
                Scope_pop_df60cAJ8(_scope, scope0, _helpers);
                _ss = ss0;
            });
            s_Template tEmplate { EXT_OOgXljzg(target, module, _scope, ctx).tEmplate };
            ScopeSkip_setup_iF5MsZcx(s_Template(tEmplate), scope0, _root_scope, _ss, _here, ctx, _helpers, _helpers_data, _scope, module);
            _scope.items += fu_VEC<s_ScopeItem>(EXT_OOgXljzg(target, module, _scope, ctx).extra_items);
            s_Node n_fn { tEmplate.node };
            s_Node n_body { last_cTrO4UFq(n_fn.items) };
            s_Type ret_expect { GET_wZZN3wJZ(target, _scope, module, ctx).type };
            fu_VEC<s_Argument> host_args { EXT_OOgXljzg(target, module, _scope, ctx).args };
            fu_VEC<s_SolvedNode> result {};
            if (!(host_args.size() == args.size()))
                fail_UWhygD7O("inline: arglen mismatch"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            result.resize((args.size() + 1));
            const int locals_start = (args ? GET_next_local_index_LA0p7vFN(_current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module) : int{});
            for (int i = 0; i < args.size(); i++)
            {
                s_Argument slot { host_args[i] };
                result.mutref(i) = createLet_R3YYScx3(fu_STR(slot.name), (slot.flags & ~(F_ARG | F_COMPOUND_ID)), args[i], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type, _current_fn, _root_scope, _ss);
                if (slot.flags & F_INLINE)
                    result.mutref(i) = createEmpty_bZyGRBZC("empty"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);

            };
            const s_HelpersData* _6;
            int _7 {};
            const s_SolvedNode s_body = (_7 = ((__extension__ (
            {
                const s_Helpers& h = last_4St321Ne(_helpers);
                _6 = &(_helpers_data[h.index]);
            (void)0;}), *_6).vars.size() - helpers0vars), solveBlock_Hg26HKZ3(n_body, ret_expect, 0, short(short((HM_CanReturn | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL))))), kills, n_fn.value, int(_7), locals_start, _scope, _helpers, module, _current_fn, _current_fnort, _here, ctx, _helpers_data, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string));
            const s_HelpersData* _8;
            if (!((__extension__ (
            {
                const s_Helpers& h = last_4St321Ne(_helpers);
                _8 = &(_helpers_data[h.index]);
            (void)0;}), *_8).vars.size() == helpers0vars))
                fail_UWhygD7O("inline: _helpers.len != helpers0vars"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            if (!(SolvedNodeData_kcSanAvz(s_body, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind))
                fail_UWhygD7O("inline: no s_body.kind"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            last_45v4fzZZ(result) = s_body;
            /*MOV*/ const s_SolvedNode block = createBlock_RIdz8tYv(SolvedNodeData_kcSanAvz(s_body, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, fu_VEC<s_SolvedNode>(result), s_Target{}, s_Helpers{}, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);
            if (!(SolvedNodeData_kcSanAvz(block, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind))
                fail_UWhygD7O("inline: no createBlock().kind"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            return /*NRVO*/ block;
        };
        if (is_ref_8e1ZyHy2(type))
            type.lifetime = Lifetime_test_w49CIvod(Lifetime_replaceArgsAtCallsite_GBQ0jYFb(target, args, _scope, module, ctx, _here, _helpers, _helpers_data, _current_fnort), true, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    /*MOV*/ const s_SolvedNode callsite = SolvedNode_GiPnt7zQ("call"_fu, type, 0, debug, args, target, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
    if ((target.modid < 0) || (target.modid == module.modid))
    {
        fu::view<char> k = GET_wZZN3wJZ(target, _scope, module, ctx).kind;
        if ((k == "fn"_fu) || (k == "type"_fu))
        {
            add_bmhzXgqs(EXT_mut_hG9GTQ4v(target, module, _scope).callers, _current_fn_or_type.index);
            detectRecursion_nqZ7LxQz(target, _scope, module, ctx, _helpers, _helpers_data, _here, options, _notes);
        };
    };
    return /*NRVO*/ callsite;
}

static s_SolvedNode solveCall_MHM4Xi6Q(const s_Node& node, const s_Target& target, const int kills, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> args = solveNodes_X5BitxTM(node.items, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(if_last_45v4fzZZ(args), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
        return deadCall_yrsUexFS(args, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes, _current_fnort, _current_fn_or_type);

    fu_STR id { node.value };
    if (!id)
    {
        if (!(target))
            fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    const int qualified = (node.flags & F_COMPOUND_ID);
    const s_Scope& misc_scope = (qualified ? dequalify_andGetScope_Sfvtu0ee(id, _here, ctx, _helpers, _helpers_data, _scope, module) : (*(const s_Scope*)fu::NIL));
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    const s_Target callTargIdx = match__mutargs_9Efkdym9(misc_scope, !qualified, id, args, reorder, conversions, node.flags, target, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _field_items, _specs, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
    return CallerNode_SnVo4qAr(node.value, s_Target(callTargIdx), fu_VEC<s_SolvedNode>(args), kills, reorder, conversions, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
}

static s_SolvedNode evalTypeAnnot_vBBg0Mbg(const s_Node& node, const s_Map_PvflZUKM& typeParams, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
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
                return (_1 = (_0 = T_qiauEJab(0, node, typeParams, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), add_ref_GR4OoJkm(static_cast<s_Type&&>(_0), Lifetime_temporary_8nlJDPX0(), _here, ctx)), solved_SNSf2Pw4(node, static_cast<s_Type&&>(_1), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope));
            };
            if (node.value == "&mut"_fu)
            {
                s_Type _2 {};
                s_Type _3 {};
                return (_3 = (_2 = T_qiauEJab(0, node, typeParams, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), add_mutref_GR4OoJkm(static_cast<s_Type&&>(_2), Lifetime_temporary_8nlJDPX0(), _here, ctx)), solved_SNSf2Pw4(node, static_cast<s_Type&&>(_3), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope));
            };
            if (node.value == "[]"_fu)
            {
                s_Type _4 {};
                s_Type _5 {};
                return (_5 = (_4 = T_qiauEJab(0, node, typeParams, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), createArray_8e1ZyHy2(static_cast<s_Type&&>(_4), _here, ctx)), solved_SNSf2Pw4(node, static_cast<s_Type&&>(_5), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope));
            };
        };
        return solveCall_MHM4Xi6Q(node, s_Target{}, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    }
    else if (node.kind == "typeparam"_fu)
        return solved_SNSf2Pw4(node, evalTypeParam_V6IEbjpr(node.value, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
    else if ((node.kind == "arrlit"_fu) && (node.items.size() == 1))
    {
        s_Type _6 {};
        s_Type _7 {};
        return (_7 = (_6 = T_qiauEJab(0, node, typeParams, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), createSlice_GR4OoJkm(static_cast<s_Type&&>(_6), Lifetime_temporary_8nlJDPX0(), _here, ctx)), solved_SNSf2Pw4(node, static_cast<s_Type&&>(_7), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope));
    };
    fail_UWhygD7O((x7E((("TODO evalTypeAnnot: "_fu + node.kind) + "["_fu), fu::i64dec(node.items.size())) + "]"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode solveLetLike_dontTouchScope_eSpJ8O8m(const s_Node& node, const s_Type& specType, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Node& n_annot = node.items[LET_TYPE];
    s_SolvedNode _0 {};
    s_Type annot { (specType ? specType : (n_annot ? (_0 = evalTypeAnnot_vBBg0Mbg(n_annot, (*(const s_Map_PvflZUKM*)fu::NIL), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), SolvedNodeData_kcSanAvz(s_SolvedNode(_0), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module)).type : (*(const s_Type*)fu::NIL))) };
    if (annot && (node.flags & F_REF))
        annot = add_mutref_GR4OoJkm(s_Type(annot), Lifetime_temporary_8nlJDPX0(), _here, ctx);

    const s_Node& n_init = node.items[LET_INIT];
    const s_SolvedNode init = (n_init ? solveNode_s6ECt2cW(n_init, annot, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    return solveLetLike_dontTouchScope_5kifdKsi(node.value, int(node.flags), s_SolvedNode(init), s_Type(annot), specType, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn_or_type);
}

static s_SolvedNode solveMember_oOwj76xX(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Target& _current_fnort, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(node.kind == "let"_fu))
        fail_UWhygD7O(("solveStructMembers_1: "_fu + node.kind), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (node.items[LET_INIT] && (node.items[LET_INIT].kind != "definit"_fu))
        fail_UWhygD7O(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node.value) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return solveLetLike_dontTouchScope_eSpJ8O8m(node, (*(const s_Type*)fu::NIL), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
}

                                #ifndef DEFt_map_wXjZ3Q5z
                                #define DEFt_map_wXjZ3Q5z
inline fu_VEC<s_SolvedNode> map_wXjZ3Q5z(fu::view<s_Node> a, int, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Target& _current_fnort, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember_oOwj76xX(a[i], _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    return /*NRVO*/ res;
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

static s_SolvedNode __solveStruct_AGP6HYuv(const bool solve, const s_Node& node, const s_Target& into, s_CurrentFn& _current_fn, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const fu_STR& origId = node.value;
    fu_STR _0 {};
    fu_STR name = (origId ? fu_STR(origId) : (_0 = fu_STR((SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target ? GET_wZZN3wJZ(SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, _scope, module, ctx).name : (*(const fu_STR*)fu::NIL)))) ? static_cast<fu_STR&&>(_0) : "Anon"_fu);
    s_Target out_target { into };
    s_Type out_type {};
    if (out_target)
        out_type = GET_wZZN3wJZ(out_target, _scope, module, ctx).type;
    else
    {
        out_type = initStruct_kwC0rL39(name, node.flags, SELF_TEST, module);
        out_target = Scope_Typedef_hJ6IO1eT(_scope, origId, out_type, node.flags, name, SS_LAZY, module);
        EXT_mut_hG9GTQ4v(out_target, module, _scope).tEmplate = createTemplate_nUiJnrf1(node, _current_fn, _scope, _helpers, _ss);
    };
    if (!solve)
        return createEmpty_bZyGRBZC("empty"_fu, out_type, out_target, _here, _current_fnort, _current_fn_or_type, module, _scope);

    const s_Target current_fn_or_type0 { _current_fn_or_type };
    fu_DEFER(_current_fn_or_type = current_fn_or_type0);
    _current_fn_or_type = out_target;
    const s_Target& _current_fnort_1 = out_target;
    GET_mut_AkUmF8Ao(out_target, _scope, module).status |= SS_DID_START;
    const int helpers0 = _helpers.size();
    const int helpers_data0 = _helpers_data.size();
    fu_DEFER(
    {
        _helpers.shrink(helpers0);
        _helpers_data.shrink(helpers_data0);
    });
    push_cfc9Ap42(s_HelpersData { s_Target((out_target ? out_target : fail_UWhygD7O((("solveStruct: no out_target: `"_fu + origId) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module))), fu_STR{}, short(HM_Struct), 0, 0, 0, s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} }, _helpers, _helpers_data);
    fu_VEC<s_Target> structConverts {};
    fu_VEC<int> structImports {};
    int flat_cnt {};
    bool all_triv = true;
    fu_VEC<s_SolvedNode> members = map_wXjZ3Q5z(node.items, 0, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort_1, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    {
        fu_VEC<s_ScopeItem>& innerScope = lookupStruct_mut_r6N0n0Dx(out_type.vtype.canon, module).items;
        if (!innerScope && members)
        {
            fu_VEC<s_Argument> args = fu_VEC<s_Argument> { fu::slate<1, s_Argument> { s_Argument { "this"_fu, fu_STR{}, despeculateStruct_sClxAUhz(s_Type(out_type)), s_SolvedNode{}, 0, 0, s_BitSet{} } } };
            for (int i = 0; i < members.size(); i++)
            {
                const fu_STR& id = node.items[i].value;
                const s_Target target = Scope_create_vJwCb5Oj(_scope, "field"_fu, (id ? id : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), (*(const s_Type*)fu::NIL), F_PUB, 0u, 0, module);
                s_Extended& ext = EXT_mut_hG9GTQ4v(target, module, _scope);
                ext.args = args;
                ext.min = 1;
                ext.max = 1;
                Scope_set_VGSSTPCP(innerScope, id, target, false);
            };
            _field_items += innerScope;
        };
        if (!(innerScope.size() == members.size()))
            fail_UWhygD7O((((x7E((x7E((x7E("solveStructMembers_3: field lens mismatch: "_fu, fu::i64dec(innerScope.size())) + " vs "_fu), fu::i64dec(members.size())) + "/"_fu), fu::i64dec(node.items.size())) + ": `struct "_fu) + name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        for (int i = 0; i < innerScope.size(); i++)
        {
            const s_ScopeItem& item = innerScope[i];
            const s_SolvedNode& member = members[i];
            if (!(item.id == SolvedNodeData_kcSanAvz(member, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).value))
                fail_UWhygD7O("solveStructMembers_4: field id mismatch."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            s_Overload& field = GET_mut_AkUmF8Ao(target_CL3tG3Pe(item), _scope, module);
            field.type = SolvedNodeData_kcSanAvz(member, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).type;
            int _1 {};
            flat_cnt += ((_1 = int(tryLookupStruct_lcHUdEZy(SolvedNodeData_kcSanAvz(member, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).type, module, ctx).flat_cnt)) ? _1 : 1);
            if (all_triv)
                all_triv = is_trivial_lcHUdEZy(SolvedNodeData_kcSanAvz(member, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).type, module, ctx);

            if (SolvedNodeData_kcSanAvz(member, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).flags & F_USING)
            {
                structConverts.push(target_CL3tG3Pe(item));
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
            commonQuals &= SolvedNodeData_kcSanAvz(members[i], _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).type.vtype.quals;

        const int quals0 = out_type.vtype.quals;
        const int quals1 = (out_type.vtype.quals &= commonQuals);
        if (!(CHANGE))
            CHANGE = (quals0 != quals1);


        {
            s_Struct& s = lookupStruct_mut_r6N0n0Dx(out_type.vtype.canon, module);
            s.target = (out_target ? out_target : fail_UWhygD7O("No struct/out_target."_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
            s.converts = structConverts;
            s.imports = structImports;
            const int flat0 = s.flat_cnt;
            const bool triv0 = s.all_triv;
            s.flat_cnt = flat_cnt;
            s.all_triv = all_triv;
            if (!(CHANGE))
                CHANGE = ((flat0 != flat_cnt) || (triv0 != all_triv));

            if (!(GET_wZZN3wJZ(s.target, _scope, module, ctx).status & SS_DID_START))
                fail_UWhygD7O("Setting stuff but missing SS_DID_START."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        };
        const int max = members.size();
        int min = 0;
        fu_VEC<s_Argument> args {};
        for (int i_1 = 0; i_1 < members.size(); i_1++)
        {
            const s_SolvedNode& member = members[i_1];
            const fu_STR* _2;
            const s_Type* _3;
            s_Argument arg = s_Argument { fu_STR((*(_2 = &(SolvedNodeData_kcSanAvz(member, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).value)) ? *_2 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module))), fu_STR{}, s_Type((*(_3 = &(SolvedNodeData_kcSanAvz(member, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).type)) ? *_3 : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module))), s_SolvedNode(SolvedNodeData_kcSanAvz(member, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).items[LET_INIT]), (SolvedNodeData_kcSanAvz(member, _current_fnort_1, _here, ctx, _helpers, _helpers_data, _scope, module).flags & F_MUSTNAME), 0, s_BitSet{} };
            if (!arg.dEfault)
                min++;

            args.push(s_Argument(arg));
        };
        if (max && !min)
            min++;

        s_Extended& ext = EXT_mut_hG9GTQ4v(out_target, module, _scope);
        ext.min = min;
        ext.max = max;
        ext.args = args;
        const int mustUpdate = (CHANGE ? ext.callers.size() : int{});
        s_Overload& overload = GET_mut_AkUmF8Ao(out_target, _scope, module);
        overload.type = out_type;
        if (mustUpdate)
            overload.status |= SS_UPDATED;

    };
    lazySolveEnd_8t0k8GNT(out_target, _scope, module, ctx, _here, _helpers, _helpers_data, options, _notes, _current_fnort_1, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, shortModuleName, _field_items, t_string);
    return s_SolvedNode{};
}

static s_SolvedNode uPrepStruct_pOVdbXdm(const s_Node& node, s_CurrentFn& _current_fn, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    return __solveStruct_AGP6HYuv(false, node, s_Target{}, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type, _warnings, _specs, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
}

static s_SolvedNode unorderedPrep_A_CsZ00eUE(const s_Node& node, s_CurrentFn& _current_fn, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu::view<char> k = node.kind;
    if (k == "fn"_fu)
        return uPrepFn_A_ft8PHxCv(node, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _root_scope, _current_fn_or_type);

    if (k == "struct"_fu)
        return uPrepStruct_pOVdbXdm(node, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn_or_type, _warnings, _specs, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    fail_UWhygD7O(("TODO: "_fu + k), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void uPrepFn_B_7GLyhcIY(const s_Target& target, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    s_Template& tEmplate = EXT_mut_hG9GTQ4v(target, module, _scope).tEmplate;
    if (tEmplate.scope_memo)
        tEmplate.scope_memo = Scope_snap_a3v7I8zX(_scope, _helpers);

}

static void unorderedPrep_B_5VQ8s5Da(const s_Node& node, const s_Target& into, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    fu::view<char> k = node.kind;
    if (k == "fn"_fu)
        uPrepFn_B_7GLyhcIY(into, module, _scope, _helpers);

}

static fu_VEC<s_SolvedNode> solveNodes_X5BitxTM(fu::view<s_Node> nodes, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const int kills, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_SolvedNode> result {};
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_Node& node = nodes[i];
        if (!node)
            continue;

        const int unorderedClass = unorderedClassify_NXwc4ZPP(node.kind);
        if (!unorderedClass)
        {
            HERE_GPjTSEGQ(node.token, _here);
            const bool last = (i == (nodes.size() - 1));
            const s_Type& type = ((last && use_type_last) ? type_last : type_all);
            const int kills_1 = (last ? kills : (*(const int*)fu::NIL));
            const s_SolvedNode solved = solveNode_s6ECt2cW(node, type, kills_1, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
            result += s_SolvedNode(solved);
            if (is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(solved, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
            {
                if (i < (nodes.size() - 1))
                    makeNote_NPJpVbAC(N_DeadCode, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

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
            const s_Node& node_1 = (*(_0 = &(nodes[i_1])) ? *_0 : fail_UWhygD7O("solveNodes, prep-a: falsy node"_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
            if (unorderedClassify_NXwc4ZPP(node_1.kind) != unorderedClass)
            {
                i1 = i_1;
                break;
            };
            HERE_GPjTSEGQ(node_1.token, _here);
            result += unorderedPrep_A_CsZ00eUE(node_1, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _root_scope, _current_fn_or_type, _warnings, _specs, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        };
        if (!(i1 > i0))
            fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

        i = (i1 - 1);
        for (int i_2 = i0; i_2 < i1; i_2++)
        {
            const s_Node* _1;
            const s_Node& node_1 = (*(_1 = &(nodes[i_2])) ? *_1 : fail_UWhygD7O("solveNodes, prep-b: falsy node"_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
            HERE_GPjTSEGQ(node_1.token, _here);
            unorderedPrep_B_5VQ8s5Da(node_1, SolvedNodeData_kcSanAvz(result[(i_2 + offset)], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target, module, _scope, _helpers);
        };
        bool repeat = true;
        while (repeat)
        {
            repeat = false;
            for (int i_3 = i0; i_3 < i1; i_3++)
            {
                const s_Node* _2;
                const s_Node& node_1 = (*(_2 = &(nodes[i_3])) ? *_2 : fail_UWhygD7O("solveNodes, solve: falsy node"_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
                HERE_GPjTSEGQ(node_1.token, _here);
                const s_Target& into = SolvedNodeData_kcSanAvz(result[(i_3 + offset)], _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target;
                if (lazySolveStart_pR3sKz01(s_Target(into), s_Overload(GET_wZZN3wJZ(into, _scope, module, ctx)), _scope, module, _here, ctx, _helpers, _helpers_data, _current_fnort, _specs, _ss, _root_scope, _current_fn_or_type, _current_fn, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string))
                    repeat = true;

            };
        };
    };
    return /*NRVO*/ result;
}

static s_SolvedNode solveRoot_d93I98jg(const s_Node& node, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> items = solveNodes_X5BitxTM(node.items, t_void, (*(const s_Type*)fu::NIL), bool{}, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (!is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(last_6mv8AnDF(items), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
    {
        /*MOV*/ const s_SolvedNode root = solved_SNSf2Pw4(node, t_void, items, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
        runAllPasses_mDpvEPeZ(root, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fn_or_type, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        return /*NRVO*/ root;
    };
    _here = SolvedNodeData_kcSanAvz(last_6mv8AnDF(items), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).token;
    fail_UWhygD7O("Noreturn during static init: this program will never finish booting."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_HM_CanBreak
                                #define DEF_HM_CanBreak
extern const short HM_CanBreak;
                                #endif

                                #ifndef DEFt_only_zloPVM3y
                                #define DEFt_only_zloPVM3y
inline const s_Node& only_zloPVM3y(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_SolvedNode solveArgID_10CN28lc(const s_Node& node, const s_Type& type, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_SolvedNode expr = solveNode_s6ECt2cW(only_zloPVM3y(node.items), type, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    return solved_SNSf2Pw4(node, SolvedNodeData_kcSanAvz(expr, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveArrlit_ppqjTVdk(const s_Node& node, const s_Type& type, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    s_Type itemType = (type ? tryClear_sliceable_8e1ZyHy2(type) : s_Type{});
    if (!itemType && isStruct_C02JG8Ye(type))
        return solveCall_MHM4Xi6Q(node, s_Target(lookupStruct_5FUAmY77(type, module, ctx).target), 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    fu_VEC<s_SolvedNode> args = solveNodes_X5BitxTM(node.items, itemType, (*(const s_Type*)fu::NIL), bool{}, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(if_last_45v4fzZZ(args), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
    {
        makeNote_NPJpVbAC(N_DeadArrlit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return createBlock_RIdz8tYv(t_never, fu_VEC<s_SolvedNode>(args), s_Target{}, s_Helpers{}, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);
    };
    if (!(node.flags & F_NAMED_ARGS))
        return createArrlit_8rNohxK9(fu_VEC<s_SolvedNode>(args), itemType, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type);

    fail_UWhygD7O("TODO: solveArrlit: tryMatch by [ argnames: ... ] without function name."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode popAndOr_cq3uN540(s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    const int N = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size();
    /*MOV*/ const s_SolvedNode pop { MUT_zK2FAfx9(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[(N - 1)] };
    if (N > 2)
        MUT_zK2FAfx9(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.pop();
    else
    {
        const s_SolvedNode& head = SolvedNodeData_kcSanAvz(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[0];
        node = head;
    };
    return /*NRVO*/ pop;
}

static s_SolvedNode if_A_and_NEVER_then_B_else_C_kJ8Dy0Dn(const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, int& _notes, s_SolvedNode& cond, const s_Target& _current_fnort)
{
    makeNote_NPJpVbAC(N_DeadIfCons, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    return popAndOr_cq3uN540(cond, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode solveIf_fJTl9o5k(const s_Node& node, s_Type&& type, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ s_SolvedNode cond = solveNode_s6ECt2cW(node.items[0], t_bool, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(cond, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
    {
        makeNote_NPJpVbAC(N_DeadIfCond, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return /*NRVO*/ cond;
    };
    const s_SolvedNode cons = (((SolvedNodeData_kcSanAvz(cond, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "and"_fu) && is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(last_6mv8AnDF(SolvedNodeData_kcSanAvz(cond, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)) ? if_A_and_NEVER_then_B_else_C_kJ8Dy0Dn(options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes, cond, _current_fnort) : solveBlock_Hg26HKZ3(node.items[1], type, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, 0, _scope, _helpers, module, _current_fn, _current_fnort, _here, ctx, _helpers_data, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string));
    const s_SolvedNode alt = solveBlock_Hg26HKZ3(node.items[2], s_Type((type ? type : SolvedNodeData_kcSanAvz(cons, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)), 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, 0, _scope, _helpers, module, _current_fn, _current_fnort, _here, ctx, _helpers_data, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (!is_void_8e1ZyHy2(type))
        type = superType_rjCdQuCu("if/else: "_fu, SolvedNodeData_kcSanAvz(cons, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, SolvedNodeData_kcSanAvz(alt, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data);

    if (is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(cons, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) && is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(alt, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
        type = t_never;

    return solved_SNSf2Pw4(node, (type ? type : fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module)), fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(cond), s_SolvedNode(cons), s_SolvedNode(alt) } }, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveOr_zmCxVtlC(const s_Node& node, s_Type&& type, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_SolvedNode> items = solveNodes_X5BitxTM(node.items, (is_void_8e1ZyHy2(type) ? t_bool : type), type, true, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
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
            if (is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(item, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
            {
                hasNever = true;
                continue;
            };
            const s_SolvedNode& andLast = (hasNever && (SolvedNodeData_kcSanAvz(item, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "and"_fu) && SolvedNodeData_kcSanAvz(item, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items ? SolvedNodeData_kcSanAvz(item, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items[(SolvedNodeData_kcSanAvz(item, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).items.size() - 1)] : (*(const s_SolvedNode*)fu::NIL));
            const s_Type& itemType = ((andLast && !is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(andLast, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)) ? (MUT_zK2FAfx9(item, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type = SolvedNodeData_kcSanAvz(andLast, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) : SolvedNodeData_kcSanAvz(item, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type);
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
    return solved_SNSf2Pw4(node, type, items, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveAnd_tahaHdBK(const s_Node& node, s_Type&& type, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> items = solveNodes_X5BitxTM(node.items, (is_void_8e1ZyHy2(type) ? t_bool : type), type, true, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
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
            if (is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(item, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
                continue;

            if (sumType)
            {
                sumType = type_trySuper_P9wIESfO(sumType, SolvedNodeData_kcSanAvz(item, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type);
                if (!is_ref_8e1ZyHy2(sumType))
                    break;

            }
            else
            {
                type = SolvedNodeData_kcSanAvz(item, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type;
                sumType = SolvedNodeData_kcSanAvz(item, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type;
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
    return solved_SNSf2Pw4(node, type, items, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

                                #ifndef DEF_HM_Anon
                                #define DEF_HM_Anon
extern const short HM_Anon;
                                #endif

static s_SolvedNode solveLetStatement_CVOGR443(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Target& _current_fnort, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(node.kind == "let"_fu))
        fail_UWhygD7O((("Expected a `let` statement, got: `"_fu + node.kind) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return solveNode_s6ECt2cW(node, t_void, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
}

static s_SolvedNode solveLoop_YTswj4et(const s_Node& node, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_ScopeMemo scope0 = Scope_snap_a3v7I8zX(_scope, _helpers);
    fu_DEFER(Scope_pop_df60cAJ8(_scope, scope0, _helpers));
    const int brk_idx = _helpers.size();
    push_cfc9Ap42(s_HelpersData { s_Target{}, fu_STR(node.value), short((HM_Anon | HM_CanBreak)), int(SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index), 0, GET_next_local_index_LA0p7vFN(_current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module), s_Type{}, s_Type{}, fu_VEC<s_SolvedNode>{}, fu_VEC<int>{} }, _helpers, _helpers_data);
    const s_Node& n_init = node.items[LOOP_INIT];
    const s_Node& n_pre_cond = node.items[LOOP_COND];
    const s_Node& n_body = node.items[LOOP_BODY];
    const s_Node& n_post_cond = node.items[LOOP_POST_COND];
    const s_Node& n_post = node.items[LOOP_POST];
    /*MOV*/ const s_SolvedNode init = (n_init ? solveLetStatement_CVOGR443(n_init, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    if (is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(init, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
    {
        makeNote_NPJpVbAC(N_DeadLoopInit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return /*NRVO*/ init;
    };
    const s_SolvedNode pre_cond = (n_pre_cond ? solveNode_s6ECt2cW(n_pre_cond, t_bool, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    const s_SolvedNode body = (n_body ? solveBlock_Hg26HKZ3(n_body, t_void, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, 0, _scope, _helpers, module, _current_fn, _current_fnort, _here, ctx, _helpers_data, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    const s_SolvedNode post_cond = (n_post_cond ? solveNode_s6ECt2cW(n_post_cond, t_bool, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    const s_SolvedNode post = (n_post ? solveNode_s6ECt2cW(n_post, t_void, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    const s_Helpers& h = _helpers[brk_idx];
    const short label_used = short((_helpers_data[h.index].mask & HM_LabelUsed));
    const s_Type& type = ((!pre_cond && !post_cond && !label_used) ? t_never : t_void);
    return solved_SNSf2Pw4(node, type, fu_VEC<s_SolvedNode> { fu::slate<5, s_SolvedNode> { s_SolvedNode(init), s_SolvedNode(pre_cond), s_SolvedNode(body), s_SolvedNode(post_cond), s_SolvedNode(post) } }, (label_used ? _helpers_data[h.index].target : (*(const s_Target*)fu::NIL)), _here, _current_fnort, _current_fn_or_type, module, _scope);
}

                                #ifndef DEF_F_SINGLE_STMT
                                #define DEF_F_SINGLE_STMT
extern const int F_SINGLE_STMT;
                                #endif

static int Scope_lookupReturn_LVWJ9A71(const fu_STR& id, const bool lambdaOK, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Scope& _scope, const s_Module& module)
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
    fail_UWhygD7O((("No return `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static int Scope_lookupLabel_2ZTtl75f(const fu_STR& id, const bool cont, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Scope& _scope, const s_Module& module)
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
                        fail_UWhygD7O((("Cannot continue to label `"_fu + id) + "` from here, did you mean to `break`?"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

                };
            };
            return /*NRVO*/ i;
        };
    };
    fail_UWhygD7O((("No label `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_Helpers& h_11AssMnW(fu_VEC<s_Helpers>& _helpers, const int helpers_idx)
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

static fu_STR ANON_IVtsRV4J(int& _anons)
{
    return x7E("0"_fu, fu::i64dec(_anons++));
}

static s_Target Scope_addLabel_B5so7NYY(const fu_STR& id, const int local_of, s_Scope& _scope, int& _anons, const s_Module& module)
{
    return Scope_create_vJwCb5Oj(_scope, "label"_fu, (id ? fu_STR(id) : ANON_IVtsRV4J(_anons)), s_Type{}, F_SHADOW, 0u, local_of, module);
}

static s_SolvedNode solveJump_wxSWWjs4(int helpers_idx, fu::view<s_Node> items, const int kills, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_HelpersData* _0;
    const s_Type* _1;
    const s_HelpersData* _2;
    const s_Type& type = (*(_1 = &((__extension__ (
    {
        const s_Helpers& h = h_11AssMnW(_helpers, helpers_idx);
        _0 = &(_helpers_data[h.index]);
    (void)0;}), *_0).ret_actual)) ? *_1 : (__extension__ (
    {
        const s_Helpers& h = h_11AssMnW(_helpers, helpers_idx);
        _2 = &(_helpers_data[h.index]);
    (void)0;}), *_2).ret_expect);
    /*MOV*/ const s_SolvedNode expr = (items ? solveNode_s6ECt2cW(only_TPODJjhN(items), s_Type(type), (helpers_idx + 1), _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    if (is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(expr, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
        return /*NRVO*/ expr;

    const s_HelpersData* _3;
    int _4 {};
    if ((_4 = (__extension__ (
    {
        const s_Helpers& h = h_11AssMnW(_helpers, helpers_idx);
        _3 = &(_helpers_data[h.index]);
    (void)0;}), *_3).local_of, (int(_4) != SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target.index)))
    {
        const s_HelpersData* _5;
        add_bmhzXgqs(_current_fn.effects.far_jumps, (__extension__ (
        {
            const s_Helpers& h = h_11AssMnW(_helpers, helpers_idx);
            _5 = &(_helpers_data[h.index]);
        (void)0;}), *_5).local_of);
        return createEmpty_bZyGRBZC("__far_jump"_fu, t_never, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
    };
    const bool redundant = (kills == (helpers_idx + 1));
    if (redundant && is_void_8e1ZyHy2(SolvedNodeData_kcSanAvz(expr, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
        return /*NRVO*/ expr;

    const s_HelpersData* _6;
    while ((__extension__ (
    {
        const s_Helpers& h = h_11AssMnW(_helpers, helpers_idx);
        _6 = &(_helpers_data[h.index]);
    (void)0;}), *_6).kills)
    {
        const s_HelpersData* _7;
        helpers_idx = ((__extension__ (
        {
            const s_Helpers& h = h_11AssMnW(_helpers, helpers_idx);
            _7 = &(_helpers_data[h.index]);
        (void)0;}), *_7).kills - 1);
    };
    const s_HelpersData* _8;
    if (redundant && !short(((__extension__ (
    {
        const s_Helpers& h = h_11AssMnW(_helpers, helpers_idx);
        _8 = &(_helpers_data[h.index]);
    (void)0;}), *_8).mask & HM_Function)))
        return /*NRVO*/ expr;

    const s_Target* _9;
    const s_Target target { (__extension__ (
    {
        s_HelpersData* _10;
        /*RRET*/ s_Target& a = (__extension__ (
        {
            const s_Helpers& h = h_11AssMnW(_helpers, helpers_idx);
            _10 = &(_helpers_data.mutref(h.index));
        (void)0;}), *_10).target;
        const s_HelpersData* _11;
        const fu_STR* _12;
        const s_HelpersData* _13;
        _9 = &((a ? a : (a = (_12 = &((__extension__ (
        {
            const s_Helpers& h = h_11AssMnW(_helpers, helpers_idx);
            _11 = &(_helpers_data[h.index]);
        (void)0;}), *_11).id), Scope_addLabel_B5so7NYY(*_12, (__extension__ (
        {
            const s_Helpers& h = h_11AssMnW(_helpers, helpers_idx);
            _13 = &(_helpers_data[h.index]);
        (void)0;}), *_13).local_of, _scope, _anons, module)))));
    (void)0;}), *_9) };
    s_HelpersData* _14;
    (__extension__ (
    {
        const s_Helpers& h = h_11AssMnW(_helpers, helpers_idx);
        _14 = &(_helpers_data.mutref(h.index));
    (void)0;}), *_14).mask |= HM_LabelUsed;
    if (!items)
    {
        const s_Helpers* _15;
        (_15 = &(h_11AssMnW(_helpers, helpers_idx)), reportReturnType_y8ueVWfK(*_15, t_void, _helpers_data, _here, ctx, _helpers, _scope, module));
        return createJump_3KfOEGqd(target, s_SolvedNode{}, h_11AssMnW(_helpers, helpers_idx), _here, _current_fnort, _current_fn_or_type, module, _scope);
    };
    /*MOV*/ const s_SolvedNode jump = createJump_3KfOEGqd(target, expr, h_11AssMnW(_helpers, helpers_idx), _here, _current_fnort, _current_fn_or_type, module, _scope);
    s_HelpersData* _16;
    (__extension__ (
    {
        const s_Helpers& h = h_11AssMnW(_helpers, helpers_idx);
        _16 = &(_helpers_data.mutref(h.index));
    (void)0;}), *_16).returns += s_SolvedNode(jump);
    return /*NRVO*/ jump;
}

static s_SolvedNode solveJump_1u1mJ8vA(const s_Node& node, const int kills, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, s_Module& module, const s_Target& _current_fnort, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const int helpers_idx = ((node.kind == "return"_fu) ? Scope_lookupReturn_LVWJ9A71(node.value, !!(node.flags & F_SINGLE_STMT), _helpers, _ss, _helpers_data, _here, ctx, _scope, module) : Scope_lookupLabel_2ZTtl75f(node.value, (node.kind == "continue"_fu), _helpers, _ss, _helpers_data, _here, ctx, _scope, module));
    return solveJump_wxSWWjs4(int(helpers_idx), node.items, kills, _helpers, _helpers_data, _here, _current_fnort, ctx, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
}

static s_SolvedNode solveInt_qHoHsHVQ(const s_Node& node, const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    return solved_SNSf2Pw4(node, solveInt_de2hoYJN(node.value, type, _here, ctx, _helpers, _helpers_data, _scope, module), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveNum_nmmPbtbP(const s_Node& node, const s_Type& type, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return solved_SNSf2Pw4(node, solveNum_OrDoVghg(node.value, type), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createDefinit_WB5B2vGH(s_Type&& type, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    if (is_ref_8e1ZyHy2(type))
        type.lifetime = Lifetime_static_8nlJDPX0();

    if (is_integral_dtjgvDEj(type))
        return SolvedNode_GiPnt7zQ("int"_fu, type, 0, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);

    if (is_floating_pt_dtjgvDEj(type))
        return SolvedNode_GiPnt7zQ("real"_fu, type, 0, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);

    return SolvedNode_GiPnt7zQ("definit"_fu, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveStr_ElfQ4SJi(const s_Node& node, const s_Type& t_string, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    if (!node.value)
        return createDefinit_WB5B2vGH(add_ref_GR4OoJkm(s_Type(t_string), Lifetime_temporary_8nlJDPX0(), _here, ctx), _here, _current_fnort, _current_fn_or_type, module, _scope);

    return solved_SNSf2Pw4(node, t_string, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveChar_Mn7PzzeW(const s_Node& node, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return solved_SNSf2Pw4(node, t_byte, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDefinit_SvVbQn3c(const s_Type& type, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    s_Type _0 {};
    return createDefinit_WB5B2vGH(((_0 = trySolveDefinit_SV47iu7a(type)) ? static_cast<s_Type&&>(_0) : fail_UWhygD7O(("Cannot definit type: "_fu + humanizeType_UeNyC0N4(type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module)), _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveImport_Q1rhflcI(const s_Node& node, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    const s_Module& m = findModule_CSw9Ly3b(node.value, ctx, _here, _helpers, _helpers_data, _scope, module);
    Scope_import_rGmUTga1(m.modid, _scope, _ss, _here, ctx, _helpers, _helpers_data, module);
    return createEmpty_bZyGRBZC("empty"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDefer_aCPEjvzk(const s_Node& node, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_SolvedNode item = solveNode_s6ECt2cW(only_zloPVM3y(node.items), t_void, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    return solved_SNSf2Pw4(node, t_void, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(item) } }, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTryCatch_i3T1IUnR(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Target& _current_fnort, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(node.items.size() == 3))
        fail_UWhygD7O(fu_STR{}, _here, ctx, _helpers, _helpers_data, _scope, module);

    const s_ScopeMemo scope0 = Scope_snap_a3v7I8zX(_scope, _helpers);
    const s_SolvedNode tRy = solveNode_s6ECt2cW(node.items[0], t_void, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    Scope_pop_df60cAJ8(_scope, scope0, _helpers);
    const s_ScopeMemo scope0_1 = Scope_snap_a3v7I8zX(_scope, _helpers);
    const s_SolvedNode err = solveLetStatement_CVOGR443(node.items[1], _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    const s_SolvedNode cAtch = solveNode_s6ECt2cW(node.items[2], t_void, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    Scope_pop_df60cAJ8(_scope, scope0_1, _helpers);
    if (!((SolvedNodeData_kcSanAvz(err, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).kind == "let"_fu) && isAssignableAsArgument_P9wIESfO(SolvedNodeData_kcSanAvz(err, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, t_string)))
        fail_UWhygD7O(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    const s_Type& type = ((is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(tRy, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) && is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(cAtch, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type)) ? t_never : t_void);
    return solved_SNSf2Pw4(node, type, fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(tRy), s_SolvedNode(err), s_SolvedNode(cAtch) } }, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTypedef_QaMCPF3C(const s_Node& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_SolvedNode annot = evalTypeAnnot_vBBg0Mbg(only_zloPVM3y(node.items), (*(const s_Map_PvflZUKM*)fu::NIL), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (isStruct_C02JG8Ye(SolvedNodeData_kcSanAvz(annot, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type))
        Scope_set_ATHtezm5(_scope, node.value, lookupStruct_5FUAmY77(SolvedNodeData_kcSanAvz(annot, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, module, ctx).target, false);
    else
        Scope_Typedef_hJ6IO1eT(_scope, node.value, s_Type(SolvedNodeData_kcSanAvz(annot, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type), node.flags, (*(const fu_STR*)fu::NIL), 0u, module);

    return createEmpty_bZyGRBZC("empty"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTypeAssert_cOW6Bqka(const s_Node& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Node& left = node.items[0];
    const s_Node& right = node.items[1];
    s_SolvedNode _0 {};
    s_Type expect { (_0 = evalTypeAnnot_vBBg0Mbg(right, (*(const s_Map_PvflZUKM*)fu::NIL), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), SolvedNodeData_kcSanAvz(s_SolvedNode(_0), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module)).type };
    /*MOV*/ const s_SolvedNode actual = solveNode_s6ECt2cW(left, s_Type(expect), 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    checkAssignable_ITooPbhq(expect, SolvedNodeData_kcSanAvz(actual, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type, "Type assertion failed"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);
    return /*NRVO*/ actual;
}

static s_SolvedNode solveTypeParam_U43vp142(const s_Node& node, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    return solved_SNSf2Pw4(node, evalTypeParam_V6IEbjpr(node.value, (*(const s_Map_PvflZUKM*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static void visitScope_MdTubu5k(fu::view<s_ScopeItem> items, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    int scope_iterator {};
    s_Target target {};
    bool shadows {};
    while (!shadow && (target = search_KNlWqVSS(items, id, scope_iterator, _ss.items, shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
        result.unshift(s_Target(target));

}

                                #ifndef DEFt_each_58z7gd5v
                                #define DEFt_each_58z7gd5v
inline void each_58z7gd5v(fu::view<s_Struct> a, int, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Struct& sTruct = a[i];
        visitScope_MdTubu5k(sTruct.items, shadow, id, _ss, result);
    };
}
                                #endif

static void visitTypes_ePt3qVxH(const s_Module& module, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    each_58z7gd5v(module.out.types, 0, shadow, id, _ss, result);
}

                                #ifndef DEFt_each_Tbg61mkb
                                #define DEFt_each_Tbg61mkb
inline void each_Tbg61mkb(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, int, const int start, const s_Context& ctx, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
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
            visitTypes_ePt3qVxH(ctx.modules[import], shadow, id, _ss, result);
        };
        i0 = ss.end;
    };
}
                                #endif

static s_SolvedNode solveAddrOfFn_tt8FlcDF(const s_Node& node, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    const fu_STR& id = node.value;
    const bool shadow = false;
    fu_VEC<s_Target> result {};
    visitScope_MdTubu5k(_scope.items, shadow, id, _ss, result);
    if (node.flags & F_ACCESS)
    {
        visitTypes_ePt3qVxH(module, shadow, id, _ss, result);
        each_Tbg61mkb(_scope.imports, _ss.imports, 0, 0, ctx, shadow, id, _ss, result);
    };
    if (!(result))
        fail_UWhygD7O((("No `fn "_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    s_Type type = s_Type { s_ValueType { 0, 0, packAddrOfFn_i4cXBxfC(result) }, s_Lifetime{} };
    return createEmpty_bZyGRBZC("empty"_fu, type, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDeclExpr_pLchrx9C(const s_Node& node, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    return s_SolvedNode(only_aj4CwosS(solveNodes_X5BitxTM((fu::slate<1, s_Node> { s_Node(node) }), (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string)));
}

static void walk_5VnZLzJ3(s_Node& node, fu::view<char> placeholder, const s_ScopeItem& field)
{
    for (int i = 0; i < node.items.size(); i++)
        walk_5VnZLzJ3(node.items.mutref(i), placeholder, field);


    {
        if (node.value == placeholder)
        {
            if ((node.items.size() == 1) && (node.kind == "call"_fu))
                node.value = field.id;
            else if (node.kind == "str"_fu)
                node.value = field.id;

        };
    };
}

inline static s_Node astReplace_jZGCnPLu(const s_Node& node, int, fu::view<char> placeholder, const s_ScopeItem& field)
{
    /*MOV*/ s_Node node_1 { node };
    walk_5VnZLzJ3(node_1, placeholder, field);
    return /*NRVO*/ node_1;
}

static s_SolvedNode solveForFieldsOf_TOFc6SEN(const s_Node& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu::view<char> placeholder = node.value;
    const s_Node& body_template = node.items[1];
    s_SolvedNode _0 {};
    const s_Type& fields_of = (_0 = evalTypeAnnot_vBBg0Mbg(node.items[0], (*(const s_Map_PvflZUKM*)fu::NIL), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), SolvedNodeData_kcSanAvz(s_SolvedNode(_0), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module)).type;
    if (!(isStruct_C02JG8Ye(fields_of)))
        fail_UWhygD7O((("[for fieldname]: This is not a struct: `"_fu + humanizeType_UeNyC0N4(fields_of, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    fu::view<s_ScopeItem> fields = lookupStruct_5FUAmY77(fields_of, module, ctx).items;
    fu_VEC<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        if (GET_wZZN3wJZ(target_CL3tG3Pe(field), _scope, module, ctx).kind == "field"_fu)
            items_ast += astReplace_jZGCnPLu(body_template, 0, placeholder, field);

    };
    fu_VEC<s_SolvedNode> items = solveNodes_X5BitxTM(items_ast, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    const s_Type& type = (is_never_8e1ZyHy2(SolvedNodeData_kcSanAvz(last_6mv8AnDF(items), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).type) ? t_never : t_void);
    return createBlock_RIdz8tYv(type, fu_VEC<s_SolvedNode>(items), s_Target{}, s_Helpers{}, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);
}

static void compilerBreak_uWO3EwBB(const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    fu_STR debug = "\nCompiler break:"_fu;
    if (SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target)
    {
        const s_Target& t = SolvedNodeData_kcSanAvz(_current_fn.out, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module).target;
        debug += (x7E((x7E((("\n    Current fn: "_fu + qWHAT_NVk45OOI(GET_wZZN3wJZ(t, _scope, module, ctx), module, _scope, ctx)) + " at ("_fu), fu::i64dec(t.modid)) + ", "_fu), fu::i64dec(t.index)) + "):"_fu);
        fu::view<s_Overload> locals = EXT_OOgXljzg(t, module, _scope, ctx).locals;
        for (int i = 0; i < locals.size(); i++)
        {
            const s_Overload& item = locals[i];
            debug += ("\n        "_fu + qWHAT_NVk45OOI(item, module, _scope, ctx));
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

static s_SolvedNode executeCompilerPragma_uKXoxNTx(const s_Node& node, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fn_or_type)
{
    if (node.value == "break"_fu)
        compilerBreak_uWO3EwBB(_current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module);
    else
        fail_UWhygD7O((("Unknown compiler pragma: `"_fu + node.value) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return createEmpty_bZyGRBZC("empty"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveNode_s6ECt2cW(const s_Node& node, const s_Type& type, const int kills, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_nrIRbWMi& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    HERE_GPjTSEGQ(node.token, _here);
    fu::view<char> k = node.kind;
    if (k == "root"_fu)
        return solveRoot_d93I98jg(node, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "block"_fu)
        return solveBlock_Hg26HKZ3(node, type, 0, HM_CanBreak, kills, (*(const fu_STR*)fu::NIL), 0, 0, _scope, _helpers, module, _current_fn, _current_fnort, _here, ctx, _helpers_data, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "argid"_fu)
        return solveArgID_10CN28lc(node, type, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "let"_fu)
        return solveLet_U8AxE11r(node, (*(const s_Type*)fu::NIL), _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "call"_fu)
        return solveCall_MHM4Xi6Q(node, s_Target{}, kills, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "arrlit"_fu)
        return solveArrlit_ppqjTVdk(node, type, module, ctx, _here, _current_fnort, _helpers, _helpers_data, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "if"_fu)
        return solveIf_fJTl9o5k(node, s_Type(type), _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "or"_fu)
        return solveOr_zmCxVtlC(node, s_Type(type), _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "and"_fu)
        return solveAnd_tahaHdBK(node, s_Type(type), _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "loop"_fu)
        return solveLoop_YTswj4et(node, _scope, _helpers, _current_fn, _current_fnort, _here, ctx, _helpers_data, module, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "break"_fu)
        return solveJump_1u1mJ8vA(node, kills, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "return"_fu)
        return solveJump_1u1mJ8vA(node, kills, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "continue"_fu)
        return solveJump_1u1mJ8vA(node, kills, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "int"_fu)
        return solveInt_qHoHsHVQ(node, type, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type);

    if (k == "real"_fu)
        return solveNum_nmmPbtbP(node, type, _here, _current_fnort, _current_fn_or_type, module, _scope);

    if (k == "str"_fu)
        return solveStr_ElfQ4SJi(node, t_string, _here, ctx, _current_fnort, _current_fn_or_type, module, _scope);

    if (k == "char"_fu)
        return solveChar_Mn7PzzeW(node, _here, _current_fnort, _current_fn_or_type, module, _scope);

    if (k == "definit"_fu)
        return solveDefinit_SvVbQn3c(type, module, ctx, _here, _helpers, _helpers_data, _scope, _current_fnort, _current_fn_or_type);

    if (k == "import"_fu)
        return solveImport_Q1rhflcI(node, ctx, _here, _helpers, _helpers_data, _scope, module, _ss, _current_fnort, _current_fn_or_type);

    if (k == "defer"_fu)
        return solveDefer_aCPEjvzk(node, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "try"_fu)
        return solveTryCatch_i3T1IUnR(node, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "typedef"_fu)
        return solveTypedef_QaMCPF3C(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "typeassert"_fu)
        return solveTypeAssert_cOW6Bqka(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "typeparam"_fu)
        return solveTypeParam_U43vp142(node, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fnort, _current_fn_or_type);

    if (k == "addroffn"_fu)
        return solveAddrOfFn_tt8FlcDF(node, _scope, _ss, module, ctx, _here, _helpers, _helpers_data, _current_fnort, _current_fn_or_type);

    if (k == "fn"_fu)
        return solveDeclExpr_pLchrx9C(node, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "struct"_fu)
        return solveDeclExpr_pLchrx9C(node, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "forfieldsof"_fu)
        return solveForFieldsOf_TOFc6SEN(node, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "compiler"_fu)
        return executeCompilerPragma_uKXoxNTx(node, _current_fn, _current_fnort, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type);

    if (k == "void"_fu)
        return createEmpty_bZyGRBZC("empty"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);

    fail_UWhygD7O(("TODO: "_fu + k), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void Scope_observeDefects_1UU79Z85(fu::view<s_ScopeItem> items, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_Options& options, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, int& _notes)
{
    bool hasLets = false;
    bool hasPubTemplates = false;
    fu_VEC<s_Target> privates {};
    for (int i = 0; i < items.size(); i++)
    {
        const s_Target t = target_CL3tG3Pe(items[i]);
        if (t.modid != module.modid)
            continue;

        const s_Overload& o = GET_wZZN3wJZ(t, _scope, module, ctx);
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
        makeNote_NPJpVbAC(N_SD_HasStaticInit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

    if (privates && hasPubTemplates)
    {
        makeNote_NPJpVbAC(N_SD_ExternPrivates, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        for (int i_1 = 0; i_1 < privates.size(); i_1++)
        {
            s_Overload& o = GET_mut_AkUmF8Ao(privates[i_1], _scope, module);
            o.flags |= F_EXTERN;
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
    _scope.extended += s_Extended{};
    push_cfc9Ap42(s_HelpersData{}, _helpers, _helpers_data);
    s_Target _current_fn_or_type = s_Target { int(module.modid), 0 };
    s_Map_nrIRbWMi _specs {};
    fu_VEC<s_Warning> _warnings {};
    s_Type t_string = createArray_8e1ZyHy2(t_byte, _here, ctx);
    fu_VEC<s_SolvedNode> TODO_FIX_convert_args = meh_bGN6F3bF(_current_fn_or_type, _here, module, _scope);
    if (module.modid)
    {
        _scope.imports += int(module.modid);
        _Scope_import__forceCopy_uqsagdXW(0, ctx, _scope);
    }
    else
        _scope = listGlobals_yuJMA1l6(module);

    const s_Target _current_fnort = s_Target { int(module.modid), 0 };
    const s_SolvedNode root = solveNode_s6ECt2cW(s_Node(parse), (*(const s_Type*)fu::NIL), 0, _here, _current_fnort, ctx, _helpers, _helpers_data, _scope, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (_current_fn.out)
        fail_UWhygD7O("non-empty _current_fn."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    Scope_observeDefects_1UU79Z85(fu_VEC<s_ScopeItem>(_scope.items), module, _scope, ctx, options, _here, _helpers, _helpers_data, _notes);
    for (int i = 0; i < _warnings.size(); i++)
    {
        const s_Warning& w = _warnings[i];
        _here = w.token;
        fail_UWhygD7O(fu_STR(w.message), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
    return s_SolverOutput { s_SolvedNode(root), Scope_exports_UPJ2tLZs(_scope, module.modid, _field_items), int(_notes) };
}

#endif
