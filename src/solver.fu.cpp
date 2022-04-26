#include <cstdint>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/cmp.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

struct s_SolverOutput;
struct s_SolvedNode;
enum s_kind: int;
struct s_Helpers;
typedef unsigned s_Flags;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
struct s_Region;
struct s_Target;
struct s_RWRanges;
struct s_Scope;
struct s_Overload;
typedef uint16_t s_SolverStatus;
struct s_Extended;
struct s_Argument;
struct s_BitSet;
struct s_Template;
struct s_Node;
typedef int s_DeclAsserts;
typedef int s_ParseSyntax;
struct s_ScopeMemo;
struct s_ScopeSkipMemos;
struct s_ScopeSkip;
struct s_ScopeItem;
struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
struct s_ParserOutput;
struct s_ModuleOutputs;
struct s_Struct;
struct s_CodegenOutput;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Map_gb6sFwC7;
struct s_Options;
struct s_Lint;
struct s_CurrentFn;
struct s_Flow;
struct s_Effects;
struct s_Events;
struct s_EventsSnap;
struct s_WriteID;
struct s_ReadID;
struct s_RWEvent;
struct s_HelpersData;
enum s_SolverPass: int;
typedef int s_HelpersMask;
struct s_Map_w7treiPq;
struct s_Warning;
struct s_ClosureID;
struct s_Map_9nzi56Zu;
struct s_TypeParam;
struct s_Mi;
struct s_Intlit;
struct s_NativeHacks;
fu_STR getShortModuleName_hDYH9Tpk(const fu_STR&);
s_Type createArray_4X1iL0ll(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Scope listGlobals_l8HfNDzr(const s_Module&);
void HERE_Qf4G9n8T(const s_TokenIdx&, s_TokenIdx&);
bool is_never_4X1iL0ll(const s_Type&);
[[noreturn]] fu::never BUG_XksxYQ3i(fu_STR&&, const s_TokenIdx&, const s_Context&);
fu_STR qKW_HfIK3mvn(const fu_STR&);
s_ClosureID tryParseClosureID_1FBeX0Ih(fu::view<char>);
fu_STR qID_HfIK3mvn(const fu_STR&);
[[noreturn]] fu::never FAIL_7jhBtwUh(fu::view<char>, const s_TokenIdx&, const s_Context&);
s_Target Scope_create_8vkRC1Ki(s_Scope&, s_kind, const fu_STR&, const s_Type&, s_Flags, s_SolverStatus, int, const s_Module&);
s_ScopeMemo Scope_snap_WgJlFXyy(const s_Scope&, fu::view<s_Helpers>);
void Scope_set_BU3HNW7T(s_Scope&, const fu_STR&, const s_Target&, bool);
fu_STR packAddrOfFn_8DGIzOk7(fu::view<s_Target>);
static s_Type T_SR6K8EwS(int, const s_Node&, const s_Map_9nzi56Zu&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
s_Lifetime Lifetime_temporary_8nlJDPX0();
s_Type add_ref_HFjykOs8(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type add_mutref_HFjykOs8(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
bool is_void_4X1iL0ll(const s_Type&);
bool operator==(const s_Helpers&, const s_Helpers&);
inline void each_CKWIxHPw(fu::view_mut<s_SolvedNode>, const s_Helpers&, const s_Helpers&, fu::view_mut<s_HelpersData>, s_Scope&, const s_Module&);
static void visit_Ps5HXb13(s_SolvedNode&, const s_Helpers&, const s_Helpers&, fu::view_mut<s_HelpersData>, s_Scope&, const s_Module&);
fu_STR resolveFile_x_adz9iQmO(const fu_STR&, const s_Context&);
fu_STR qBAD_HfIK3mvn(const fu_STR&);
void add_sDUBjUzV(s_BitSet&, int);
const fu_VEC<int>& lookupTypeImports_K61azC5I(const s_Type&, const s_Module&, const s_Context&);
int modidOfOrigin_ZYIX8afu(const s_Type&);
bool has_ur5UoMYg(const s_BitSet&, int);
bool add_once_sDUBjUzV(s_BitSet&, int);
s_Target target_wh65lsPu(const s_ScopeItem&);
s_Target search_7gDKHCyh(fu::view<s_ScopeItem>, const fu_STR&, int&, fu::view<s_ScopeSkip>, bool&, const s_Target&, fu::view<s_Target>, fu::view<s_ScopeItem>);
bool type_isAddrOfFn_4X1iL0ll(const s_Type&);
s_Mi parseMi_mPp6Ulzh(int&, fu::view<char>);
bool operator==(const s_Target&, const s_Target&);
void Scope_pop_pJmZr7lr(s_Scope&, const s_ScopeMemo&, fu_VEC<s_Helpers>&);
inline bool all_hISPtTft(fu::view<s_SolvedNode>);
static bool couldRetype_ymhvuWbS(const s_SolvedNode&);
bool is_arithmetic_CbRwLCm2(const s_Type&);
s_Intlit Intlit_IQ08v4Hx(fu::view<char>);
bool is_primitive_CbRwLCm2(const s_Type&);
int basePrimPrefixLen_d7UAjAhk(fu::view<char>);
const s_Struct& lookupStruct_VQxm8oyj(const s_Type&, const s_Module&, const s_Context&);
s_Type clear_refs_4X1iL0ll(s_Type&&);
s_Type type_trySuper_lFwbQ75H(const s_Type&, const s_Type&, bool);
bool is_enum_CbRwLCm2(const s_Type&);
static s_Type tryRetyping_fhyto8pR(const s_SolvedNode&, const s_Type&, const s_TokenIdx&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&, const s_Type&);
s_Type tryClear_ref_4X1iL0ll(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_mutref_4X1iL0ll(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_array_4X1iL0ll(const s_Type&);
s_Type relax_typeParam_4X1iL0ll(s_Type&&);
s_Type tryClear_sliceable_4X1iL0ll(const s_Type&);
bool isAssignable_npqyupaA(const s_Type&, const s_Type&, bool, bool);
static bool trySolveTypeParams_SDhDhNqQ(const s_Node&, s_Type&&, s_Map_9nzi56Zu&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
bool isStruct_ZYIX8afu(const s_Type&);
fu_STR humanizeQuals_4X1iL0ll(const s_Type&);
fu_STR serializeType_0JOpvc3a(const s_Type&, fu::view<char>, const s_TokenIdx&, const s_Context&);
bool is_trivial_K61azC5I(const s_Type&, const s_Module&, const s_Context&);
bool is_rx_copy_4X1iL0ll(const s_Type&);
bool is_bitfield_CbRwLCm2(const s_Type&);
bool is_integral_CbRwLCm2(const s_Type&);
bool is_unsigned_CbRwLCm2(const s_Type&);
bool is_floating_pt_CbRwLCm2(const s_Type&);
bool is_mutref_4X1iL0ll(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type type_tryIntersect_87LkAOV4(const s_Type&, const s_Type&);
static bool evalTypePattern_9fe66Dnp(const s_Node&, s_Map_9nzi56Zu&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, s_ScopeSkipMemos&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
bool operator==(const s_Type&, const s_Type&);
void Scope_set_hPlkl1cj(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);
bool isAssignableAsArgument_lFwbQ75H(const s_Type&, const s_Type&, bool);
bool is_ref2temp_4X1iL0ll(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type clear_mutref_4X1iL0ll(s_Type&&);
static s_SolvedNode solveLetLike_dontTouchScope_3VdDQy8a(const s_Node&, const s_Type&, const s_Type&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
s_Lifetime Lifetime_static_8nlJDPX0();
s_Region Region_fromLocal_BaKYka79(int);
bool Region_isArgPosition_L0YJBnz6(const s_Region&);
bool Region_isTemp_L0YJBnz6(const s_Region&);
int Region_toLocal_L0YJBnz6(const s_Region&);
static s_SolvedNode solveLet_rYi8moYl(const s_Node&, const s_Type&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
int Region_asLocal_L0YJBnz6(const s_Region&);
s_Lifetime Lifetime_makeShared_MvT8pzW6(const s_Lifetime&);
s_NativeHacks NativeHacks_1FBeX0Ih(fu::view<char>);
void ArgsAtRisk_list_BERt8JVr(s_BitSet&, const s_Flow&, int, fu::view<fu_VEC<int>>);
bool TODO_FIX_isArray_4X1iL0ll(const s_Type&);
s_BitSet& and_not_assign_KQfktl8z(s_BitSet&, const s_BitSet&);
void add_range_sDUBjUzV(s_BitSet&, int);
bool rem_sDUBjUzV(s_BitSet&, int);
bool is_ref_4X1iL0ll(const s_Type&);
s_Lifetime Lifetime_union_XJgsWJyN(const s_Lifetime&, const s_Lifetime&);
bool operator==(const s_Region&, const s_Region&);
const s_Token& _token_4Uqw4R4P(const s_TokenIdx&, const s_Context&);
const fu_STR& _fname_4Uqw4R4P(const s_TokenIdx&, const s_Context&);
fu_STR formatCodeSnippet_NTO0WeaM(const s_TokenIdx&, s_TokenIdx&&, const s_Context&);
static fu_STR qSTACK_kRID8tui(const s_Target&, const s_Region&, fu::view<s_Target>, s_Scope&, const s_Module&, const s_Context&, const s_TokenIdx&);
static fu_STR qSTACK_TlDJltqj(const s_Target&, int, fu::view<s_Target>, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&);
static fu_STR qSTACK_edxH1uYk(const s_Target&, const s_SolvedNode&, const s_Region&, fu::view<s_Target>, s_Scope&, const s_Module&, const s_Context&, const s_Target&, const s_TokenIdx&);
bool is_rx_resize_4X1iL0ll(const s_Type&);
s_Region Region_fromArgPosition_BaKYka79(int);
bool Region_isStatic_L0YJBnz6(const s_Region&);
bool hasAssignment_LX3QLY5k(fu::view<char>);
fu_STR hash62_EhsXBDGJ(fu::view<char>, int);
static bool Lifetime_allowsMutrefReturn_HSEwmlgr(const s_Lifetime&, int, const s_Target&, const s_Module&, s_Scope&, const s_TokenIdx&, const s_Context&);
static void test_nodes_6mINb2jy(fu::view<s_SolvedNode>, fu::view<char>, s_TokenIdx&, const s_Module&, const s_Context&, const s_Scope&);
static void test_node_YJTaOe1a(const s_SolvedNode&, fu_STR&&, s_TokenIdx&, const s_Module&, const s_Context&, const s_Scope&);
bool try_relax_JgpaSTgQ(s_Type&, const s_Type&, int);
static void relaxBlockVar_7FYUQCZq(const s_Target&, int, s_Scope&, s_Module&, const s_Context&, s_CurrentFn&, fu_VEC<s_Warning>&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_Target trySpecialize_2Jt2Ocmu(const s_Target&, fu::view<s_SolvedNode>, fu_STR&, int, const s_Type&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, s_Map_w7treiPq&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, s_CurrentFn&, const s_Type&, fu_VEC<s_Warning>&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
int Region_toArgPosition_L0YJBnz6(const s_Region&);
s_Type make_copyable_4X1iL0ll(s_Type&&);
s_Type clear_sliceable_4X1iL0ll(const s_Type&, const s_TokenIdx&, const s_Context&);
static void propagateType_EqJduRu0(s_SolvedNode&, const s_Type&, int, s_Scope&, s_Module&, const s_Context&, s_CurrentFn&, fu_VEC<s_Warning>&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
void Reference_trackArgument_xxHEkKJS(s_Flow&, int, int, const s_TokenIdx&, const s_Context&);
static bool RESOLVE_byAAR_JG77Ls6t(int, int, bool, bool, const s_TokenIdx&, const s_Context&, const s_Target&, const s_Module&, const s_Scope&, s_CurrentFn&);
s_Lifetime Lifetime_inter_XJgsWJyN(const s_Lifetime&, const s_Lifetime&);
bool is_zeroes_4X1iL0ll(const s_Type&);
bool is_boolean_CbRwLCm2(const s_Type&);
inline static void Lifetime_each_TELg52UB(const s_Lifetime&, int, const s_Target&, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&);
static void Lifetime_F_MOVED_FROM_wcmK7wrf(const s_Lifetime&, const s_Target&, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&);
inline void each_pkuQ8r5s(fu::view<int>, s_CurrentFn&);
static void tagWritten_K3r2E2AN(int, s_CurrentFn&);
inline fu_VEC<s_Region> inter_Dny7p6dG(const fu_VEC<s_Region>&, const fu_VEC<s_Region>&);
static bool RESOLVE_byAAR_NxplUKhm(int, fu::view<s_Region>, bool, bool, const s_TokenIdx&, const s_Context&, const s_Target&, const s_Module&, const s_Scope&, s_CurrentFn&);
static bool RESOLVE_byAAR_TqxfCoqF(fu::view<s_WriteID>, int, bool, s_CurrentFn&, bool, const s_TokenIdx&, const s_Context&, const s_Target&, const s_Module&, const s_Scope&);
static void bck_call_LfreOCtP(s_SolvedNode&, const s_Module&, s_Scope&, const s_Context&, s_CurrentFn&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view_mut<s_HelpersData>, int&, const s_SolvedNode&);
static void bck_loop_SiJYj4Z8(s_SolvedNode&, s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view_mut<s_HelpersData>, int&, const s_SolvedNode&);
static void bck_nodes_UnDWmtQs(fu::view_mut<s_SolvedNode>, s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view_mut<s_HelpersData>, int&, const s_SolvedNode&);
void Reference_trackLocalRef_FlKnEK9i(s_Flow&, int, const s_Lifetime&);
static void bck_let_TDML1dmk(s_SolvedNode&, s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view_mut<s_HelpersData>, int&, const s_SolvedNode&);
static void bck_if_zpwG8xSH(s_SolvedNode&, s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view_mut<s_HelpersData>, int&, const s_SolvedNode&);
static void bck_block_s2k6YITN(s_SolvedNode&, s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view_mut<s_HelpersData>, int&, const s_SolvedNode&);
static void bck_node_KeFdcf8E(s_SolvedNode&, s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view_mut<s_HelpersData>, int&, const s_SolvedNode&);
static void mcom_node_k7SLLc7D(s_SolvedNode&, fu::view_mut<s_HelpersData>, const s_Target&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu::view<s_Helpers>, const s_Options&, int&);
static void runAllPasses_wSnCoXvq(s_SolvedNode&, s_TokenIdx&, s_Module&, const s_Context&, s_Scope&, fu_VEC<s_HelpersData>&, s_CurrentFn&, fu_VEC<s_Warning>&, fu_VEC<s_Helpers>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveBlock_E0WRPHag(const s_Node&, const s_Type&, int, s_HelpersMask, const fu_STR&, int, s_Scope&, fu_VEC<s_Helpers>&, s_Module&, s_CurrentFn&, const s_Target&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Context&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static void lazySolveEnd_5buTxZdy(const s_Target&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, const s_Options&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, int&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, s_CurrentFn&, const s_Type&, fu_VEC<s_Warning>&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_Target doTrySpecialize_lBFu4DhZ(const s_Target&, const s_Target&, fu::view<s_SolvedNode>, const fu_STR&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, int, const s_Type&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, s_Map_w7treiPq&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, s_CurrentFn&, const s_Type&, fu_VEC<s_Warning>&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static bool lazySolveStart_nWoDZAJr(const s_Target&, const s_Overload&, s_Scope&, s_Module&, s_TokenIdx&, const s_Context&, s_Map_w7treiPq&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, s_CurrentFn&, const s_Type&, fu_VEC<s_Warning>&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
int popcount_msUNRW3q(const s_BitSet&);
s_Type add_refs_87LkAOV4(const s_Type&, s_Type&&);
static void foreach_Bn9KBeri(const s_Target&, fu_VEC<s_SolvedNode>&, bool, s_CurrentFn&, s_Module&, s_Scope&, const s_Context&, bool, const s_SolvedNode&, const s_Type&, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, s_TokenIdx&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_w7treiPq&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, const s_Type&, fu_VEC<s_Warning>&, fu_VEC<fu_STR>&, s_Target&, int&, const s_Options&, int&, const fu_STR&, const s_Target&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, const s_Type&, bool, const s_Scope&, int);
static void descend_7DdtnphX(const s_Type&, bool, bool, bool, bool, s_Scope&, const s_Scope&, s_ScopeSkipMemos&, fu_VEC<s_SolvedNode>&, s_CurrentFn&, s_Module&, const s_Context&, const s_SolvedNode&, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, s_TokenIdx&, fu_VEC<s_ScopeItem>&, s_Map_w7treiPq&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, const s_Type&, fu_VEC<s_Warning>&, fu_VEC<fu_STR>&, s_Target&, int&, const s_Options&, int&, const fu_STR&, const s_Target&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, const s_Type&, int);
static fu_VEC<s_Target> tryConvert_MJw8PTrK(const s_Type&, const s_Type&, const s_SolvedNode&, bool, const s_Scope&, s_Scope&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, s_CurrentFn&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_ScopeItem>&, s_Map_w7treiPq&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, const s_Type&, fu_VEC<s_Warning>&, fu_VEC<fu_STR>&, s_Target&, int&, const s_Options&, int&, const fu_STR&, const s_Target&);
fu_STR qCODE_HfIK3mvn(const fu_STR&);
static s_Target tryMatch__mutargs_gvVpQ1T3(fu_STR&&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu_STR&, bool, const s_Scope&, fu::view<s_SolvedNode>, s_Flags, const s_Target&, s_TokenIdx&, const s_Context&, s_Scope&, s_ScopeSkipMemos&, s_Module&, fu_VEC<s_ScopeItem>&, s_Map_w7treiPq&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, s_CurrentFn&, const s_Type&, fu_VEC<s_Warning>&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, const s_Target&);
static void applyConversion_XpfjrIRC(s_SolvedNode&, fu::view<s_Target>, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_w7treiPq&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_Warning>&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, const s_Target&);
static s_SolvedNode bindImplicitArg_l4bu3nC6(const fu_STR&, const s_Type&, const s_Target&, s_Module&, s_Scope&, const s_Context&, s_CurrentFn&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_w7treiPq&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_Warning>&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, const s_Target&);
fu_STR serialize_5msm411l(const s_ClosureID&);
static void applyRetype_bp1pPFVi(s_SolvedNode&, const s_Type&);
static s_SolvedNode CallerNode_IZMFnbCX(const fu_STR&, s_Target&&, fu_VEC<s_SolvedNode>&&, const fu_VEC<int>&, fu::view<fu_VEC<s_Target>>, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_w7treiPq&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_Warning>&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, const s_Target&);
static s_SolvedNode solveCall_bMl1cXdC(const s_Node&, const s_Target&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
s_Type createSlice_HFjykOs8(const s_Type&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
static s_Type evalTypeAnnot_Csai46oQ(const s_Node&, const s_Map_9nzi56Zu&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
s_Type initStruct_2K4k4ce4(s_kind, const fu_STR&, const fu_STR&, s_DeclAsserts, s_Module&);
s_Target Scope_Typedef_gq0kpTD8(s_Scope&, const fu_STR&, const s_Type&, s_Flags, const fu_STR&, s_SolverStatus, const s_Module&);
s_Struct& lookupStruct_mut_04KaaAlz(fu::view<char>, s_Module&);
s_Type despeculateStruct_CPSh38G1(s_Type&&);
const s_Struct& tryLookupStruct_K61azC5I(const s_Type&, const s_Module&, const s_Context&);
s_Intlit Intlit_V3Khstyl(uint64_t, bool, fu_STR&&, bool, bool, uint64_t);
static s_SolvedNode __solveStruct_PgC99vo1(bool, const s_Node&, const s_Target&, s_CurrentFn&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static fu_VEC<s_SolvedNode> solveNodes_VtQi5Tmy(fu::view<s_Node>, const s_Type&, const s_Type&, bool, const fu_STR&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveRoot_TXZaJahJ(const s_Node&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveArgID_itw12Dav(const s_Node&, const s_Type&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveArrlit_Om4xuVR6(const s_Node&, const s_Type&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveIf_LsT5IeHF(const s_Node&, s_Type&&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveOr_6zY5pIGL(const s_Node&, s_Type&&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveAnd_Z0orAzcT(const s_Node&, s_Type&&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveLetStatement_KCKSnj5F(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveLoop_3Xz6LTgL(const s_Node&, s_Scope&, fu_VEC<s_Helpers>&, s_CurrentFn&, const s_Target&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Context&, s_Module&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static void injectJumps_KLBygbrX(const s_Helpers&, s_SolvedNode&, const s_TokenIdx&);
static s_SolvedNode solveJump_1puNSodA(const s_Node&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Context&, s_Scope&, s_Module&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
bool type_isSliceable_4X1iL0ll(const s_Type&);
static s_SolvedNode solveDefer_enZl2z5X(const s_Node&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveTryCatch_2H6amDFT(const s_Node&, s_TokenIdx&, const s_Context&, s_Scope&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveTypedef_THE3VNk7(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveTypeCast_mUbg5Yxn(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
const s_Struct& tryLookupStructOrUserPrimitive_K61azC5I(const s_Type&, const s_Module&, const s_Context&);
static void walk_a1XPbwYg(s_Node&, fu::view<char>, fu::view<char>, fu::view<char>, fu::view<char>, const s_ScopeItem&);
static s_SolvedNode solveForFieldsOf_OsLHknG5(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
void break_DX6KImTN();
static s_SolvedNode executeCompilerPragma_UTPDH3DY(const s_Node&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveDeclExpr_2A09SPS6(const s_Node&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
static s_SolvedNode solveNode_wDAIciWi(const s_Node&, const s_Type&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_w7treiPq&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&);
s_Scope Scope_exports_3xUYpXMb(const s_Scope&, int, const fu_VEC<s_ScopeItem>&);

                                #ifndef DEF_s_kind
                                #define DEF_s_kind
enum s_kind: int
{
    s_kind_sof = 1,
    s_kind_id = 2,
    s_kind_op = 3,
    s_kind_int = 4,
    s_kind_real = 5,
    s_kind_char = 6,
    s_kind_str = 7,
    s_kind_err = 8,
    s_kind_eof = 9,
    s_kind_root = 10,
    s_kind_block = 11,
    s_kind_argid = 12,
    s_kind_let = 13,
    s_kind_call = 14,
    s_kind_arrlit = 15,
    s_kind_if = 16,
    s_kind_or = 17,
    s_kind_and = 18,
    s_kind_loop = 19,
    s_kind_break = 20,
    s_kind_return = 21,
    s_kind_continue = 22,
    s_kind_bool = 23,
    s_kind_definit = 24,
    s_kind_import = 25,
    s_kind_defer = 26,
    s_kind_try = 27,
    s_kind_typedef = 28,
    s_kind_typecast = 29,
    s_kind_typeassert = 30,
    s_kind_typeparam = 31,
    s_kind_addroffn = 32,
    s_kind_forfieldsof = 33,
    s_kind_pragma = 34,
    s_kind_void = 35,
    s_kind_struct = 36,
    s_kind_union = 37,
    s_kind_primitive = 38,
    s_kind_flags = 39,
    s_kind_enum = 40,
    s_kind_members = 41,
    s_kind_fn = 42,
    s_kind_fnbranch = 43,
    s_kind_pattern = 44,
    s_kind_typeunion = 45,
    s_kind_typetag = 46,
    s_kind_jump = 47,
    s_kind_empty = 48,
    s_kind_letdef = 49,
    s_kind___relaxed = 50,
    s_kind___convert = 51,
    s_kind_fndef = 52,
    s_kind_copy = 53,
    s_kind_move = 54,
    s_kind___far_jump = 55,
    s_kind___no_kind_yet = 56,
    s_kind_type = 57,
    s_kind_var = 58,
    s_kind_field = 59,
    s_kind_enumv = 60,
    s_kind_template = 61,
    s_kind___native = 62,
    s_kind_inline = 63,
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

                                #ifndef DEF_s_Flags
                                #define DEF_s_Flags
inline constexpr s_Flags s_Flags_F_METHOD = 1;
inline constexpr s_Flags s_Flags_F_INFIX = 2;
inline constexpr s_Flags s_Flags_F_PREFIX = 4;
inline constexpr s_Flags s_Flags_F_POSTFIX = 8;
inline constexpr s_Flags s_Flags_F_ACCESS = 16;
inline constexpr s_Flags s_Flags_F_COMPOUND_ID = 32;
inline constexpr s_Flags s_Flags_F_WRITTEN_TO = 64;
inline constexpr s_Flags s_Flags_F_LAX = 128;
inline constexpr s_Flags s_Flags_F_ARG = 256;
inline constexpr s_Flags s_Flags_F_OPERATOR = 512;
inline constexpr s_Flags s_Flags_F_MOVED_FROM = 1024;
inline constexpr s_Flags s_Flags_F_CONVERSION = 2048;
inline constexpr s_Flags s_Flags_F_OPT_ARG = 4096;
inline constexpr s_Flags s_Flags_F_MUT = 8192;
inline constexpr s_Flags s_Flags_F_REF = 16384;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 32768;
inline constexpr s_Flags s_Flags_F_USING = 65536;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 131072;
inline constexpr s_Flags s_Flags_F_SHADOW = 262144;
inline constexpr s_Flags s_Flags_F_PUB = 524288;
inline constexpr s_Flags s_Flags_F_EXTERN = 1048576;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 2097152;
inline constexpr s_Flags s_Flags_F_PREDICATE = 4194304;
inline constexpr s_Flags s_Flags_F_NAMED_ARGS = 8388608;
inline constexpr s_Flags s_Flags_F_OOE_RTL = 16777216;
inline constexpr s_Flags s_Flags_F_REST_ARG = 33554432;
inline constexpr s_Flags s_Flags_F_RELAXABLE_REF = 67108864;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 134217728;
inline constexpr s_Flags s_Flags_F_INLINE = 268435456;
inline constexpr s_Flags s_Flags_F_LAMBDA = 536870912;
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

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    int quals;
    fu_STR canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
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

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    s_kind kind;
    s_Helpers helpers;
    s_Flags flags;
    fu_STR value;
    fu_VEC<s_SolvedNode> items;
    s_TokenIdx token;
    s_Type type;
    s_Target target;
    s_RWRanges rwr;
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolverStatus
                                #define DEF_s_SolverStatus
inline constexpr s_SolverStatus s_SolverStatus_SS_LAZY = 1;
inline constexpr s_SolverStatus s_SolverStatus_SS_DID_START = 2;
inline constexpr s_SolverStatus s_SolverStatus_SS_DIRTY = 4;
inline constexpr s_SolverStatus s_SolverStatus_SS_FINALIZED = 8;
inline constexpr s_SolverStatus s_SolverStatus_SS_UPDATED = 16;
inline constexpr s_SolverStatus s_SolverStatus_SS_TYPE_RECUR = 32;
inline constexpr s_SolverStatus s_SolverStatus_SS_FN_RECUR = 64;
inline constexpr s_SolverStatus s_SolverStatus_SS_HOIST = 128;
inline constexpr s_SolverStatus s_SolverStatus_SS_UNUSED = 256;
                                #endif

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    s_kind kind;
    s_Flags flags;
    s_SolverStatus status;
    fu_STR name;
    fu_STR sighash;
    s_Type type;
    s_SolvedNode solved;
    explicit operator bool() const noexcept
    {
        return false
            || kind
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
    s_Flags flags;
    int local;
    s_BitSet soft_risk;
    s_BitSet hard_risk;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || local
            || soft_risk
            || hard_risk
        ;
    }
};
                                #endif

                                #ifndef DEF_s_DeclAsserts
                                #define DEF_s_DeclAsserts
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCOPY = 1;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC = 2;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC_MUT = 4;
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE = 8;
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_CTX = 16;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOFLOW = 32;
                                #endif

                                #ifndef DEF_s_ParseSyntax
                                #define DEF_s_ParseSyntax
inline constexpr s_ParseSyntax s_ParseSyntax_PS_ID = 1;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_PARENS = 2;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_SEMI = 4;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_DISCARD = 8;
                                #endif

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    s_kind kind;
    s_DeclAsserts asserts;
    s_ParseSyntax syntax;
    s_Flags flags;
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
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeMemo
                                #define DEF_s_ScopeMemo
struct s_ScopeMemo
{
    int items_len;
    int implicits_len;
    int imports_len;
    int privates_len;
    int usings_len;
    int converts_len;
    int helpers_len;
    explicit operator bool() const noexcept
    {
        return false
            || items_len
            || implicits_len
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
    fu_VEC<s_ScopeSkip> implicits;
    fu_VEC<s_ScopeSkip> imports;
    fu_VEC<s_ScopeSkip> privates;
    fu_VEC<s_ScopeSkip> usings;
    fu_VEC<s_ScopeSkip> converts;
    fu_VEC<s_ScopeSkip> helpers;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || implicits
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
    fu_VEC<s_Overload> overloads;
    fu_VEC<s_Extended> extended;
    fu_VEC<s_ScopeItem> items;
    fu_VEC<s_ScopeItem> implicits;
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
            || overloads
            || extended
            || items
            || implicits
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
    s_kind kind;
    fu_STR value;
    int idx0;
    int idx1;
    int line;
    int col;
    explicit operator bool() const noexcept
    {
        return false
            || kind
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
    s_kind kind;
    fu_STR name;
    s_Target target;
    fu_VEC<s_ScopeItem> items;
    fu_VEC<int> imports;
    fu_VEC<s_Target> converts;
    fu_STR base;
    int flat_cnt;
    bool all_triv;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || target
            || items
            || imports
            || converts
            || base
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
    fu_VEC<fu_STR> link;
    fu_VEC<fu_STR> include_dirs;
    fu_VEC<fu_STR> extra_sources;
    fu_VEC<int> live;
    explicit operator bool() const noexcept
    {
        return false
            || src
            || link
            || include_dirs
            || extra_sources
            || live
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

                                #ifndef DEF_s_Map_gb6sFwC7
                                #define DEF_s_Map_gb6sFwC7
struct s_Map_gb6sFwC7
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
    s_Map_gb6sFwC7 files;
    s_Map_gb6sFwC7 fuzzy;
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
    fu_VEC<fu_VEC<int>> arg_parents;
    fu_VEC<fu_VEC<int>> at_soft_risk;
    fu_VEC<fu_VEC<int>> at_hard_risk;
    s_BitSet is_arg;
    fu_VEC<int> arg_targets;
    fu_VEC<int> arg_positions;
    explicit operator bool() const noexcept
    {
        return false
            || parents
            || invalidates
            || arg_parents
            || at_soft_risk
            || at_hard_risk
            || is_arg
            || arg_targets
            || arg_positions
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
    fu_VEC<fu_VEC<s_WriteID>> invalidated_by;
    explicit operator bool() const noexcept
    {
        return false
            || invalidated_by
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
    s_BitSet ever_written;
    fu_VEC<s_RWEvent> reads;
    fu_VEC<s_RWEvent> writes;
    explicit operator bool() const noexcept
    {
        return false
            || snap
            || used_in_a_loop
            || ever_written
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
    s_ScopeMemo scope0;
    s_Flow flow;
    s_Effects effects;
    s_Events events;
    int loop_start;
    int autoshadow_ok;
    fu_VEC<s_Type> var_usage;
    explicit operator bool() const noexcept
    {
        return false
            || out
            || scope0
            || flow
            || effects
            || events
            || loop_start
            || autoshadow_ok
            || var_usage
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolverPass
                                #define DEF_s_SolverPass
enum s_SolverPass: int
{
    s_SolverPass_Solving = 0,
    s_SolverPass_RelaxMut = 1,
    s_SolverPass_BorrowCheck = 2,
    s_SolverPass_MaybeCopyOrMove = 3,
    s_SolverPass_RelaxCopyResize = 4,
};
                                #endif

                                #ifndef DEF_s_HelpersMask
                                #define DEF_s_HelpersMask
inline constexpr s_HelpersMask s_HelpersMask_HM_CanBreak = 1;
inline constexpr s_HelpersMask s_HelpersMask_HM_CanReturn = 2;
inline constexpr s_HelpersMask s_HelpersMask_HM_Anon = 4;
inline constexpr s_HelpersMask s_HelpersMask_HM_Function = 8;
inline constexpr s_HelpersMask s_HelpersMask_HM_Lambda = 16;
inline constexpr s_HelpersMask s_HelpersMask_HM_Struct = 32;
inline constexpr s_HelpersMask s_HelpersMask_HM_LabelUsed = 64;
inline constexpr s_HelpersMask s_HelpersMask_HM_KeepBlock = 128;
                                #endif

                                #ifndef DEF_s_HelpersData
                                #define DEF_s_HelpersData
struct s_HelpersData
{
    s_Target target;
    s_SolverPass pass;
    fu_STR id;
    s_HelpersMask mask;
    int local_of;
    int locals_start;
    s_Type ret_expect;
    s_Type ret_actual;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || pass
            || id
            || mask
            || local_of
            || locals_start
            || ret_expect
            || ret_actual
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Map_w7treiPq
                                #define DEF_s_Map_w7treiPq
struct s_Map_w7treiPq
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
    s_TokenIdx token;
    fu_STR message;
    explicit operator bool() const noexcept
    {
        return false
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

                                #ifndef DEF_s_Map_9nzi56Zu
                                #define DEF_s_Map_9nzi56Zu
struct s_Map_9nzi56Zu
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

                                #ifndef DEF_s_Mi
                                #define DEF_s_Mi
struct s_Mi
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

                                #ifndef DEF_s_NativeHacks
                                #define DEF_s_NativeHacks
struct s_NativeHacks
{
    int name_start_idx;
    bool soft_risk;
    explicit operator bool() const noexcept
    {
        return false
            || name_start_idx
            || soft_risk
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static const bool OPTI_autoshadow = true;

static const bool OPTI_dedupe_vars = true;

static const bool OPTI_flatten_blocks = true;

static const bool OPTI_bck = true;

static const bool USE_nontriv_autocopy = true;

static const bool SELF_TEST = true;

static const bool DONT_match_zeroes = true;

static void push_IM02W1LV(const s_HelpersData& data, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data)
{
    _helpers += s_Helpers { _helpers_data.size() };
    _helpers_data += s_HelpersData(data);
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

static s_SolvedNode SolvedNode_MCGNnDLT(const s_kind kind, const s_Type& type, const s_Flags flags, const fu_STR& value, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const s_Helpers& helpers, const s_TokenIdx& _here)
{
    return s_SolvedNode { s_kind(kind), s_Helpers(helpers), s_Flags(flags), fu_STR(value), fu_VEC<s_SolvedNode>(items), s_TokenIdx(_here), s_Type(type), s_Target(target), s_RWRanges{} };
}

static void _Scope_import__forceCopy_65V7oONJ(const int modid, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    _scope.items += fu::get_view(s.items, 0, s.pub_items);
    _scope.converts += fu::get_view(s.converts, 0, s.pub_cnvrts);
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void;
                                #endif

static int unorderedClassify_o8QOzK7V(const s_kind kind)
{
    if (kind == s_kind_fn)
        return 1;

    if ((kind == s_kind_struct) || (kind == s_kind_union) || (kind == s_kind_primitive) || (kind == s_kind_enum) || (kind == s_kind_flags))
        return 10;

    return 0;
}

                                #ifndef DEF_N_DeadCode
                                #define DEF_N_DeadCode
inline constexpr int N_DeadCode = (1 << 6);
                                #endif

                                #ifndef DEF_x7E_PEYL9mMAprj
                                #define DEF_x7E_PEYL9mMAprj
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static bool isFnOrType_34GzJBPX(const s_Helpers& h, fu::view<s_HelpersData> _helpers_data)
{
    return !!(((void)void(), _helpers_data[h.index]).mask & (s_HelpersMask_HM_Function | s_HelpersMask_HM_Struct));
}

                                #ifndef DEF_str_bAcmvQdq
                                #define DEF_str_bAcmvQdq
inline fu_STR str_bAcmvQdq(const s_SolverPass n)
{

    {
        if (n == s_SolverPass_Solving)
            return "Solving"_fu;

        if (n == s_SolverPass_RelaxMut)
            return "RelaxMut"_fu;

        if (n == s_SolverPass_BorrowCheck)
            return "BorrowCheck"_fu;

        if (n == s_SolverPass_MaybeCopyOrMove)
            return "MaybeCopyOrMove"_fu;

        if (n == s_SolverPass_RelaxCopyResize)
            return "RelaxCopyResize"_fu;

    };
    return fu::i64dec(int64_t(n));
}
                                #endif

                                #ifndef DEF_x7E_PEYL9mMAprj
                                #define DEF_x7E_PEYL9mMAprj
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_max_gcxVH86X
                                #define DEF_max_gcxVH86X
inline int max_gcxVH86X(const int a, const int b)
{
    return ((a >= b) ? a : b);
}
                                #endif

static bool isLocal_g6xyL0JZ(const s_Target& target)
{
    return target.modid < 0;
}

static const s_Overload& GET_jZDx3Hiu(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    if (isLocal_g6xyL0JZ(target))
        return _scope.extended[-target.modid].locals[(target.index - 1)];

    if (target.modid == module.modid)
        return _scope.overloads[(target.index - 1)];

    return ctx.modules[target.modid].out.solve.scope.overloads[(target.index - 1)];
}

                                #ifndef DEF_str_omkBT2iF
                                #define DEF_str_omkBT2iF
inline fu_STR str_omkBT2iF(const s_kind n)
{

    {
        if (n == s_kind_sof)
            return "sof"_fu;

        if (n == s_kind_id)
            return "id"_fu;

        if (n == s_kind_op)
            return "op"_fu;

        if (n == s_kind_int)
            return "int"_fu;

        if (n == s_kind_real)
            return "real"_fu;

        if (n == s_kind_char)
            return "char"_fu;

        if (n == s_kind_str)
            return "str"_fu;

        if (n == s_kind_err)
            return "err"_fu;

        if (n == s_kind_eof)
            return "eof"_fu;

        if (n == s_kind_root)
            return "root"_fu;

        if (n == s_kind_block)
            return "block"_fu;

        if (n == s_kind_argid)
            return "argid"_fu;

        if (n == s_kind_let)
            return "let"_fu;

        if (n == s_kind_call)
            return "call"_fu;

        if (n == s_kind_arrlit)
            return "arrlit"_fu;

        if (n == s_kind_if)
            return "if"_fu;

        if (n == s_kind_or)
            return "or"_fu;

        if (n == s_kind_and)
            return "and"_fu;

        if (n == s_kind_loop)
            return "loop"_fu;

        if (n == s_kind_break)
            return "break"_fu;

        if (n == s_kind_return)
            return "return"_fu;

        if (n == s_kind_continue)
            return "continue"_fu;

        if (n == s_kind_bool)
            return "bool"_fu;

        if (n == s_kind_definit)
            return "definit"_fu;

        if (n == s_kind_import)
            return "import"_fu;

        if (n == s_kind_defer)
            return "defer"_fu;

        if (n == s_kind_try)
            return "try"_fu;

        if (n == s_kind_typedef)
            return "typedef"_fu;

        if (n == s_kind_typecast)
            return "typecast"_fu;

        if (n == s_kind_typeassert)
            return "typeassert"_fu;

        if (n == s_kind_typeparam)
            return "typeparam"_fu;

        if (n == s_kind_addroffn)
            return "addroffn"_fu;

        if (n == s_kind_forfieldsof)
            return "forfieldsof"_fu;

        if (n == s_kind_pragma)
            return "pragma"_fu;

        if (n == s_kind_void)
            return "void"_fu;

        if (n == s_kind_struct)
            return "struct"_fu;

        if (n == s_kind_union)
            return "union"_fu;

        if (n == s_kind_primitive)
            return "primitive"_fu;

        if (n == s_kind_flags)
            return "flags"_fu;

        if (n == s_kind_enum)
            return "enum"_fu;

        if (n == s_kind_members)
            return "members"_fu;

        if (n == s_kind_fn)
            return "fn"_fu;

        if (n == s_kind_fnbranch)
            return "fnbranch"_fu;

        if (n == s_kind_pattern)
            return "pattern"_fu;

        if (n == s_kind_typeunion)
            return "typeunion"_fu;

        if (n == s_kind_typetag)
            return "typetag"_fu;

        if (n == s_kind_jump)
            return "jump"_fu;

        if (n == s_kind_empty)
            return "empty"_fu;

        if (n == s_kind_letdef)
            return "letdef"_fu;

        if (n == s_kind___relaxed)
            return "__relaxed"_fu;

        if (n == s_kind___convert)
            return "__convert"_fu;

        if (n == s_kind_fndef)
            return "fndef"_fu;

        if (n == s_kind_copy)
            return "copy"_fu;

        if (n == s_kind_move)
            return "move"_fu;

        if (n == s_kind___far_jump)
            return "__far_jump"_fu;

        if (n == s_kind___no_kind_yet)
            return "__no_kind_yet"_fu;

        if (n == s_kind_type)
            return "type"_fu;

        if (n == s_kind_var)
            return "var"_fu;

        if (n == s_kind_field)
            return "field"_fu;

        if (n == s_kind_enumv)
            return "enumv"_fu;

        if (n == s_kind_template)
            return "template"_fu;

        if (n == s_kind___native)
            return "__native"_fu;

        if (n == s_kind_inline)
            return "inline"_fu;

    };
    return fu::i64dec(int64_t(n));
}
                                #endif

                                #ifndef DEF_unless_oob_zhK7J6yd
                                #define DEF_unless_oob_zhK7J6yd
inline const s_Extended& unless_oob_zhK7J6yd(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT_4ZiGP2RI(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    if (target.modid == module.modid)
        return unless_oob_zhK7J6yd(_scope.extended, target.index);

    return (target.modid >= 0) ? unless_oob_zhK7J6yd(ctx.modules[target.modid].out.solve.scope.extended, target.index) : (*(const s_Extended*)fu::NIL);
}

static int localOf_APXUPlh3(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    if (isLocal_g6xyL0JZ(target))
        return -target.modid;

    return int(EXT_4ZiGP2RI(target, module, _scope, ctx).local_of);
}

static s_Target parent_ZBXpIAjb(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return s_Target { int(module.modid), localOf_APXUPlh3(target, module, _scope, ctx) };
}

static fu_STR human_mnvtGH07(const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    const s_Target t = tryParseClosureID_1FBeX0Ih(id).target;
    if (!t)
        return fu_STR(id);

    return (GET_jZDx3Hiu(parent_ZBXpIAjb(t, module, _scope, ctx), _scope, module, ctx).name + ":"_fu) + GET_jZDx3Hiu(t, _scope, module, ctx).name;
}

static fu_STR qWHAT_QRi0Vh4d(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    const s_kind kind = o.kind;
    fu_STR kind_1 = (((kind == s_kind_var) && (o.flags & s_Flags_F_ARG)) ? "arg"_fu : str_omkBT2iF(kind));
    return (qKW_HfIK3mvn(kind_1) + " "_fu) + qID_HfIK3mvn(human_mnvtGH07(o.name, module, _scope, ctx));
}

[[noreturn]] static fu::never fail_LGxaAyqq(fu_STR&& reason, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!(reason))
        BUG_XksxYQ3i(fu_STR{}, _here, ctx);

    int callstack = 0;
    s_SolverPass pass0 {};
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (isFnOrType_34GzJBPX(h, _helpers_data))
        {
            if (!callstack++)
                reason += "\n"_fu;

            s_SolverPass _0 {};
            fu_STR pass = (((_0 = s_SolverPass(pass0), (s_SolverPass(_0) != (pass0 = ((void)void(), _helpers_data[h.index]).pass))) || (callstack == 1)) ? x7E(str_bAcmvQdq(((void)void(), _helpers_data[h.index]).pass), " "_fu) : fu_STR{});
            reason += (fu::get_view("\n                "_fu, 0, max_gcxVH86X((17 - pass.size()), 1)) + pass);
            const s_Overload& o = GET_jZDx3Hiu(((void)void(), _helpers_data[h.index]).target, _scope, module, ctx);
            reason += qWHAT_QRi0Vh4d(o, module, _scope, ctx);
        };
    };
    FAIL_7jhBtwUh(reason, _here, ctx);
}

static void makeNote_6kXvqC8U(const int note, const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, int& _notes)
{
    if (note & options.break_notes)
        fail_LGxaAyqq((x7E("`break_notes`: Unwanted event: `"_fu, fu::i64dec(note)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    _notes |= note;
}

                                #ifndef DEF_grow_if_oob_h4z4Xr0k
                                #define DEF_grow_if_oob_h4z4Xr0k
inline s_Extended& grow_if_oob_h4z4Xr0k(fu_VEC<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static s_Extended& EXT_mut_nPdL0dET(const s_Target& target, const s_Module& module, s_Scope& _scope)
{
    if (!(target.modid == module.modid))
        fu_ASSERT();

    return grow_if_oob_h4z4Xr0k(_scope.extended, target.index);
}

static s_Template createTemplate_EcY3P7H9(const s_Node& node, const s_CurrentFn& _current_fn, const s_Scope& _scope, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss)
{
    return s_Template { s_Node(node), fu_VEC<int>((!_current_fn ? _scope.imports : (*(const fu_VEC<int>*)fu::NIL))), (_current_fn ? Scope_snap_WgJlFXyy(_scope, _helpers) : s_ScopeMemo{}), s_ScopeSkipMemos((_current_fn ? _ss : (*(const s_ScopeSkipMemos*)fu::NIL))) };
}

static bool shouldAutoshadow_G2bosQvl(fu::view<char> id, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope)
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
                if ((i_1 >= _root_scope.items_len) && (item.id == id))
                    return false;

            };
            i0 = ss.end;
        };
    };
    return true;
}

static void autoshadow_8YjDcpoq(bool& shadows, const int local_of, fu::view<char> id, const s_CurrentFn& _current_fn, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope)
{
    if (!_current_fn.autoshadow_ok)
        return;

    if (!shadows && local_of && shouldAutoshadow_G2bosQvl(id, _scope, _ss, _root_scope))
        shadows = true;

}

static s_Type X_addrofTarget_6eovjMxd(const s_Target& target)
{
    return s_Type { s_ValueType { 0, packAddrOfFn_8DGIzOk7((fu::slate<1, s_Target> { s_Target(target) })) }, s_Lifetime{} };
}

static s_SolvedNode createFnDef_W4GIH3r7(const s_Type& type, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_MCGNnDLT(s_kind_fndef, type, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_SolvedNode uPrepFn_A_P56yLYev(const s_Node& node, const s_CurrentFn& _current_fn, s_Scope& _scope, const s_Module& module, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope, const s_TokenIdx& _here)
{
    const fu_STR& id = node.value;
    const int local_of = _current_fn.out.target.index;
    const s_SolverStatus status = s_SolverStatus_SS_LAZY;
    const s_Target target = Scope_create_8vkRC1Ki(_scope, s_kind_fn, "__prep__"_fu, (*(const s_Type*)fu::NIL), node.flags, status, 0, module);
    s_Extended& ext = EXT_mut_nPdL0dET(target, module, _scope);
    ext.local_of = local_of;
    ext.tEmplate = createTemplate_EcY3P7H9(node, _current_fn, _scope, _helpers, _ss);
    ext.min = int(0x7fffffffu);
    ext.max = 0;
    bool shadows = !!(node.flags & s_Flags_F_SHADOW);
    autoshadow_8YjDcpoq(shadows, local_of, id, _current_fn, _scope, _ss, _root_scope);
    Scope_set_BU3HNW7T(_scope, id, target, shadows);
    if (node.flags & s_Flags_F_CONVERSION)
        _scope.converts.push(s_Target(target));

    return createFnDef_W4GIH3r7(X_addrofTarget_6eovjMxd(target), target, _here);
}

                                #ifndef DEF_STRUCT_BASE
                                #define DEF_STRUCT_BASE
inline constexpr int STRUCT_BASE = 0;
                                #endif

static s_Type T_SR6K8EwS(const int i, const s_Node& node, const s_Map_9nzi56Zu& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    return evalTypeAnnot_Csai46oQ(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
}

                                #ifndef DEF_if_last_vOYHP1IT
                                #define DEF_if_last_vOYHP1IT
inline const s_SolvedNode& if_last_vOYHP1IT(fu::view<s_SolvedNode> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

                                #ifndef DEF_N_DeadCall
                                #define DEF_N_DeadCall
inline constexpr int N_DeadCall = (1 << 7);
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never;
                                #endif

                                #ifndef DEF_last_zNBuXg2W
                                #define DEF_last_zNBuXg2W
inline s_SolvedNode& last_zNBuXg2W(fu::view_mut<s_SolvedNode> s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static s_Overload& GET_mut_tUm7lURP(const s_Target& target, s_Scope& _scope, const s_Module& module)
{
    if (target.modid < 0)
        return _scope.extended.mutref(-target.modid).locals.mutref((target.index - 1));

    if (!((target.index > 0) && (target.modid == module.modid)))
        fu_ASSERT();

    return _scope.overloads.mutref((target.index - 1));
}

                                #ifndef DEF_each_CKWIxHPw
                                #define DEF_each_CKWIxHPw
inline void each_CKWIxHPw(fu::view_mut<s_SolvedNode> a, const s_Helpers& h0, const s_Helpers& h, fu::view_mut<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    for (int i = 0; i < a.size(); i++)
        visit_Ps5HXb13(a.mutref(i), h0, h, _helpers_data, _scope, module);

}
                                #endif

static void visit_Ps5HXb13(s_SolvedNode& item, const s_Helpers& h0, const s_Helpers& h, fu::view_mut<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    if ((item.kind == s_kind_jump) && (item.helpers == h0))
    {
        item.helpers = h;
        ((void)void(), _helpers_data.mutref(h.index)).mask |= s_HelpersMask_HM_LabelUsed;
    };
    if (item.kind == s_kind_letdef)
    {
        const s_Target target { item.target };
        std::swap(item, GET_mut_tUm7lURP(target, _scope, module).solved);
        fu_DEFER(std::swap(item, GET_mut_tUm7lURP(target, _scope, module).solved));
        each_CKWIxHPw(item.items, h0, h, _helpers_data, _scope, module);
    };
    each_CKWIxHPw(item.items, h0, h, _helpers_data, _scope, module);
}

                                #ifndef DEF_only_O0vxkflG
                                #define DEF_only_O0vxkflG
inline const s_SolvedNode& only_O0vxkflG(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static void relinkJumps_xI493Eah(const s_Helpers& h, s_SolvedNode& expr, fu::view_mut<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    if (expr.kind == s_kind_block)
    {
        const s_Helpers h0 { expr.helpers };
        if (((void)void(), _helpers_data[h0.index]).mask & s_HelpersMask_HM_LabelUsed)
        {
            visit_Ps5HXb13(expr, h0, h, _helpers_data, _scope, module);
            ((void)void(), _helpers_data.mutref(h0.index)).mask &= ~s_HelpersMask_HM_LabelUsed;
            expr.helpers = s_Helpers{};
            if (expr.items.size() == 1)
                expr = only_O0vxkflG(expr.items);

        };
    };
}

                                #ifndef DEF_last_vOYHP1IT
                                #define DEF_last_vOYHP1IT
inline const s_SolvedNode& last_vOYHP1IT(fu::view<s_SolvedNode> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEF_only_dWNkwH3v
                                #define DEF_only_dWNkwH3v
inline const s_SolvedNode& only_dWNkwH3v(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_SolvedNode createBlock_ZRqsU458(const s_Type& type, fu_VEC<s_SolvedNode>&& items, const s_Helpers& h, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    for (int x = 0; x < items.size(); x++)
    {
        if (!items[x].kind)
            fu::fail(x7E("createBlock.before-flatten.items: no kind on item #"_fu, fu::i64dec(x)));

    };
    if (_here && (_helpers.size() > 10000001))
        fu::fail(x7E("woot: "_fu, fu::i64dec(_helpers.size())));

    for (int i = items.size(); i-- > 0; )
    {
        const s_SolvedNode& item = items[i];
        const s_kind k = item.kind;
        if (((k == s_kind_empty) || (k == s_kind_bool)) && ((i < (items.size() - 1)) || ((i > 0) && is_void_4X1iL0ll(item.type) && is_void_4X1iL0ll(items[(i - 1)].type))))
            items.splice(i, 1);

    };
    if (h && (if_last_vOYHP1IT(items).kind == s_kind_block))
        relinkJumps_xI493Eah(h, last_zNBuXg2W(items), _helpers_data, _scope, module);

    if (OPTI_flatten_blocks)
    {
        while (items.size())
        {
            const s_SolvedNode& tail = last_vOYHP1IT(items);
            const s_HelpersData* BL_12_v;
            if ((tail.kind != s_kind_block) || (tail.helpers && ((__extension__ (
            {
                const s_Helpers& h_1 = tail.helpers;
                BL_12_v = &(_helpers_data[h_1.index]);
            (void)0;}), *BL_12_v).mask & s_HelpersMask_HM_LabelUsed)))
                break;

            fu_VEC<s_SolvedNode> unwrap { tail.items };
            items.pop();
            items += unwrap;
        };
    };
    if (items)
    {
        s_SolvedNode& last = last_zNBuXg2W(items);
        if ((last.kind == s_kind_jump) && (last.helpers == h) && !((((void)void(), _helpers_data[h.index]).mask & s_HelpersMask_HM_Function) && !is_void_4X1iL0ll(only_dWNkwH3v(last.items).type)))
            last = only_O0vxkflG(last.items);

    };
    if (!(((void)void(), _helpers_data[h.index]).mask & (s_HelpersMask_HM_LabelUsed | s_HelpersMask_HM_KeepBlock)) && (items.size() == 1))
        return s_SolvedNode(only_O0vxkflG(items));

    return SolvedNode_MCGNnDLT(s_kind_block, type, s_Flags{}, (*(const fu_STR*)fu::NIL), items, s_Target{}, h, _here);
}

static s_SolvedNode deadCall_8IJFAFMK(const fu_VEC<s_SolvedNode>& args, const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, int& _notes)
{
    makeNote_6kXvqC8U(N_DeadCall, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    return createBlock_ZRqsU458(t_never, fu_VEC<s_SolvedNode>(args), s_Helpers{}, _here, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_find_97z4iafs
                                #define DEF_find_97z4iafs
inline int find_97z4iafs(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static const s_Module& findModule_JxF5fDnQ(const fu_STR& fuzimport, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    fu_STR fname = resolveFile_x_adz9iQmO(fuzimport, ctx);
    fu::view<s_Module> modules = ctx.modules;
    for (int i = 1; i < modules.size(); i++)
    {
        const s_Module& m = modules[i];
        if (m.fname == fname)
            return m;

    };
    fail_LGxaAyqq(("Cannot locate: "_fu + fname), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Scope& dequalify_andGetScope_0f9fzGjM(fu_STR& id, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    const int split = find_97z4iafs(id, '\t');
    if (!((split >= 0)))
        BUG_XksxYQ3i(fu_STR{}, _here, ctx);

    fu_STR fname = fu::slice(id, 0, split);
    id = fu::slice(id, (split + 1));
    const s_Module& other = findModule_JxF5fDnQ(fname, ctx, _here, _helpers, _helpers_data, _scope, module);
    if (other.modid != module.modid)
        return other.out.solve.scope;

    fail_LGxaAyqq((("Qualified "_fu + qBAD_HfIK3mvn(id)) + ":: access current module."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_each_EoV2X6OT
                                #define DEF_each_EoV2X6OT
inline void each_EoV2X6OT(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, int& count, const s_TokenIdx& _here, const s_Context& ctx)
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
                BUG_XksxYQ3i(fu_STR{}, _here, ctx);

        };
        i0 = ss.end;
    };
}
                                #endif

static int countUsings_uDGYoje7(const bool local_scope, const s_Scope& _scope, const s_Scope& misc_scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx)
{
    const s_Scope& scope = (local_scope ? _scope : misc_scope);
    /*MOV*/ int count = 0;
    if (scope.usings)
        each_EoV2X6OT(scope.usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, count, _here, ctx);

    return /*NRVO*/ count;
}

                                #ifndef DEF_each_RXiPonqr
                                #define DEF_each_RXiPonqr
inline void each_RXiPonqr(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, s_BitSet& seen)
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
            add_sDUBjUzV(seen, modid);
        };
        i0 = ss.end;
    };
}
                                #endif

static void visitTypeImports_sJTS4h5b(const s_Type& type, const s_Module& module, const s_Context& ctx, s_BitSet& seen, const s_Scope& _scope, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id, fu_VEC<s_Target>& extra_items)
{
    fu::view<int> visit = lookupTypeImports_K61azC5I(type, module, ctx);
    for (int i = -1; i < visit.size(); i++)
    {
        const int modid = ((i >= 0) ? int(visit[i]) : modidOfOrigin_ZYIX8afu(type));
        if (has_ur5UoMYg(seen, modid))
            continue;

        if (!seen)
        {
            add_sDUBjUzV(seen, 0);
            add_sDUBjUzV(seen, module.modid);
            each_RXiPonqr(_scope.imports, (local_scope ? _ss.imports : fu::view<s_ScopeSkip>{}), 0, seen);
        };
        if (!add_once_sDUBjUzV(seen, modid))
            continue;

        fu::view<s_ScopeItem> items = ctx.modules[modid].out.solve.scope.items;
        for (int i_1 = 0; i_1 < items.size(); i_1++)
        {
            if (items[i_1].id == id)
                extra_items.push(target_wh65lsPu(items[i_1]));

        };
    };
}

                                #ifndef DEF_each_2E32u7yY
                                #define DEF_each_2E32u7yY
inline void each_2E32u7yY(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, s_BitSet& seen, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id, fu_VEC<s_Target>& extra_items)
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
            visitTypeImports_sJTS4h5b(GET_jZDx3Hiu(u, _scope, module, ctx).type, module, ctx, seen, _scope, local_scope, _ss, id, extra_items);
        };
        i0 = ss.end;
    };
}
                                #endif

                                #ifndef DEF_last_3cih1E88
                                #define DEF_last_3cih1E88
inline const s_Target& last_3cih1E88(fu::view<s_Target> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEF_unpackAddrOfFn_PKVOFsvQ
                                #define DEF_unpackAddrOfFn_PKVOFsvQ
inline void unpackAddrOfFn_PKVOFsvQ(fu::view<char> canon, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, int& parent_idx)
{
    if (!(canon[0] == '@'))
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

    int offset = 1;
    while (offset < canon.size())
    {
        const s_Mi mi = parseMi_mPp6Ulzh(offset, canon);
        const s_Target target = s_Target { int(mi.modid), int(mi.index) };
        if ((target.modid < 0) || (target.modid == module.modid))
        {
            const int local_of = localOf_APXUPlh3(target, module, _scope, ctx);
            if (parent_idx < local_of)
                parent_idx = local_of;

        };
    };
}
                                #endif

                                #ifndef DEF_x3Cx3E_gcxVH86X
                                #define DEF_x3Cx3E_gcxVH86X
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_D0yPwEUc
                                #define DEF_x3Cx3E_D0yPwEUc
inline int x3Cx3E_D0yPwEUc(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_pN4jXVBE
                                #define DEF_x3Cx3E_pN4jXVBE
inline int x3Cx3E_pN4jXVBE(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_D0yPwEUc(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_add_wAuMmv6B
                                #define DEF_add_wAuMmv6B
inline bool add_wAuMmv6B(fu_VEC<fu_STR>& keys, const fu_STR& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_pN4jXVBE(keys[i], item);
        if (cmp == 0)
        {
            return false;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, fu_STR(item));
    return true;
}
                                #endif

                                #ifndef DEF_x3Cx3E_hvR4gqOD
                                #define DEF_x3Cx3E_hvR4gqOD
inline int x3Cx3E_hvR4gqOD(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_PEYL9mMA
                                #define DEF_x3Cx3E_PEYL9mMA
inline int x3Cx3E_PEYL9mMA(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_hvR4gqOD(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_get_wDThxWG8
                                #define DEF_get_wDThxWG8
inline const s_Target& get_wDThxWG8(fu::view<fu_STR> keys, fu::view<char> item, fu::view<s_Target> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_PEYL9mMA(keys[i], item);
        if (cmp == 0)
        {
            return extras[i];
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return (*(const s_Target*)fu::NIL);
}
                                #endif

                                #ifndef DEF_get_EQELHV7I
                                #define DEF_get_EQELHV7I
inline const s_Target& get_EQELHV7I(const s_Map_w7treiPq& _, fu::view<char> key)
{
    return get_wDThxWG8(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_rem_wAuMmv6B
                                #define DEF_rem_wAuMmv6B
inline bool rem_wAuMmv6B(fu_VEC<fu_STR>& keys, fu::view<char> item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_pN4jXVBE(keys[i], item);
        if (cmp == 0)
        {
            keys.splice(i, 1);
            return true;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return false;
}
                                #endif

static bool is_SPECFAIL_2Ym2bj5i(const s_Target& target)
{
    return target.modid == 2147483647;
}

inline static int bfind_K6bemgkv(fu::view<char> item, s_Map_w7treiPq& _, const fu_STR& item_1)
{
    /*MOV*/ int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_pN4jXVBE(_.keys[i], item);
        if (cmp == 0)
        {
            return /*NRVO*/ i;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    _.keys.insert(lo, fu_STR(item_1));
    _.vals.insert(lo, s_Target{});
    return /*NRVO*/ lo;
}

                                #ifndef DEF_ref_XVcp3ISB
                                #define DEF_ref_XVcp3ISB
inline s_Target& ref_XVcp3ISB(const fu_STR& item, s_Map_w7treiPq& _)
{
    const int idx = bfind_K6bemgkv(item, _, item);
    return _.vals.mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_qj3ID07d
                                #define DEF_ref_qj3ID07d
inline s_Target& ref_qj3ID07d(s_Map_w7treiPq& _, const fu_STR& key)
{
    return ref_XVcp3ISB(key, _);
}
                                #endif

inline static fu_STR id_Uvu5jV18(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return (is_SPECFAIL_2Ym2bj5i(target) ? "SPEC_FAIL"_fu : (("`"_fu + GET_jZDx3Hiu(target, _scope, module, ctx).name) + "`"_fu));
}

inline static fu_STR id_ltr8jOfw(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return (is_SPECFAIL_2Ym2bj5i(target) ? "SPEC_FAIL"_fu : (("`"_fu + GET_jZDx3Hiu(target, _scope, module, ctx).name) + "`"_fu));
}

static void setSpec_FY6x4voZ(const fu_STR& mangle, const s_Target& target, const bool nx, const bool allowReplaceNonSpecfails, const bool isInline, const s_TokenIdx& _here, const s_Context& ctx, s_Map_w7treiPq& _specs, const s_Scope& _scope, const s_Module& module)
{
    if (isInline && !is_SPECFAIL_2Ym2bj5i(target))
        BUG_XksxYQ3i(x7E((("inline.setSpec: "_fu + mangle) + " = "_fu), fu::booldec(is_SPECFAIL_2Ym2bj5i(target))), _here, ctx);

    s_Target& t = ref_qj3ID07d(_specs, mangle);
    if (!((!isInline || !t) && (!t == nx) && (!t || is_SPECFAIL_2Ym2bj5i(t) || allowReplaceNonSpecfails)))
        BUG_XksxYQ3i(((((((x7E((x7E("About to screw up royally, replacing spec: "_fu, fu::i64dec(t.index)) + " with "_fu), fu::i64dec(target.index)) + ", mangle: "_fu) + mangle) + ", that's: "_fu) + id_Uvu5jV18(t, _scope, module, ctx)) + " becoming "_fu) + id_ltr8jOfw(target, _scope, module, ctx)), _here, ctx);

    t = target;
}

static void resetSpec_RWYa9eYn(const s_Target& spec, const bool allowReplaceNonSpecfails, s_Target& currentSpec, fu::view<fu_STR> mangles, const bool isInline, const s_TokenIdx& _here, const s_Context& ctx, s_Map_w7treiPq& _specs, const s_Scope& _scope, const s_Module& module)
{
    if (!(spec == currentSpec))
    {
        currentSpec = spec;
        for (int i = 0; i < mangles.size(); i++)
            setSpec_FY6x4voZ(mangles[i], spec, false, allowReplaceNonSpecfails, isInline, _here, ctx, _specs, _scope, module);

    };
}

                                #ifndef DEF_if_last_P3mDhmvg
                                #define DEF_if_last_P3mDhmvg
inline const s_ScopeSkip& if_last_P3mDhmvg(fu::view<s_ScopeSkip> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_ScopeSkip*)fu::NIL);
}
                                #endif

                                #ifndef DEF_last_ppRKZoLc
                                #define DEF_last_ppRKZoLc
inline s_ScopeSkip& last_ppRKZoLc(fu::view_mut<s_ScopeSkip> s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static void ScopeSkip_push_QrsVF1MF(fu_VEC<s_ScopeSkip>& scope_skip, const int start, const int end, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!((start <= end)))
        BUG_XksxYQ3i("ScopeSkip_push: bad args."_fu, _here, ctx);

    if (end == start)
        return;

    const s_ScopeSkip& last = if_last_P3mDhmvg(scope_skip);
    if (!((last.end <= start)))
        BUG_XksxYQ3i("ScopeSkip_push: last.end > start."_fu, _here, ctx);

    if (scope_skip && (last.end == start))
        last_ppRKZoLc(scope_skip).end = end;
    else
        scope_skip += s_ScopeSkip { int(start), int(end) };

}

static void Scope_import_7jcwnYef(const int modid, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx)
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
                const int m = items[i_1];
                if (m == modid)
                    return;

            };
            i0 = ss.end;
        };
    };
    if (!(modid))
        BUG_XksxYQ3i("Attempting to import modid-0."_fu, _here, ctx);

    _scope.imports += int(modid);
    _Scope_import__forceCopy_65V7oONJ(modid, ctx, _scope);
}

static void _Scope_import__forceCopy_privates_lEL2sTjR(const int modid, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    _scope.items += fu::get_view(s.items, s.pub_items, s.items.size());
    _scope.converts += fu::get_view(s.converts, s.pub_cnvrts, s.converts.size());
}

static void Scope_import_privates_svfCdASV(const int modid, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx)
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
                const int m = items[i_1];
                if (m == modid)
                    return;

            };
            i0 = ss.end;
        };
    };
    if (!(modid))
        BUG_XksxYQ3i("Attempting to import_privates modid-0."_fu, _here, ctx);

    _scope.privates += int(modid);
    _Scope_import__forceCopy_privates_lEL2sTjR(modid, ctx, _scope);
}

static void ScopeSkip_setup_90PFBgj9(const s_Template& tEmplate, const s_ScopeMemo& scope0, const bool isInline, const s_ScopeMemo& _root_scope, s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, const s_CurrentFn& _current_fn, s_Scope& _scope)
{
    if (_root_scope)
    {
        const s_ScopeMemo& start = (tEmplate.scope_memo ? tEmplate.scope_memo : _root_scope);
        _ss = tEmplate.scope_skip;
        ScopeSkip_push_QrsVF1MF(_ss.items, start.items_len, scope0.items_len, _here, ctx);
        ScopeSkip_push_QrsVF1MF(_ss.implicits, ((isInline && (start.implicits_len > _current_fn.scope0.implicits_len)) ? _current_fn.scope0.implicits_len : start.implicits_len), (isInline ? _current_fn.scope0.implicits_len : scope0.implicits_len), _here, ctx);
        ScopeSkip_push_QrsVF1MF(_ss.imports, start.imports_len, scope0.imports_len, _here, ctx);
        ScopeSkip_push_QrsVF1MF(_ss.privates, start.privates_len, scope0.privates_len, _here, ctx);
        ScopeSkip_push_QrsVF1MF(_ss.usings, start.usings_len, scope0.usings_len, _here, ctx);
        ScopeSkip_push_QrsVF1MF(_ss.converts, start.converts_len, scope0.converts_len, _here, ctx);
        ScopeSkip_push_QrsVF1MF(_ss.helpers, start.helpers_len, scope0.helpers_len, _here, ctx);
    };
    for (int i = 0; i < tEmplate.imports.size(); i++)
    {
        Scope_import_7jcwnYef(tEmplate.imports[i], _scope, _ss, _here, ctx);
        if (i == 0)
            Scope_import_privates_svfCdASV(tEmplate.imports[i], _scope, _ss, _here, ctx);

    };
}

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
extern const int FN_ARGS_BACK;
                                #endif

                                #ifndef DEF_has_hxLz1O11
                                #define DEF_has_hxLz1O11
inline bool has_hxLz1O11(fu::view<int> a, const int b)
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

                                #ifndef DEF_all_hISPtTft
                                #define DEF_all_hISPtTft
inline bool all_hISPtTft(fu::view<s_SolvedNode> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (!couldRetype_ymhvuWbS(a[i]))
            return false;

    };
    return true;
}
                                #endif

static bool couldRetype_ymhvuWbS(const s_SolvedNode& node)
{
    return (node.kind == s_kind_int) || (node.kind == s_kind_real) || (node.kind == s_kind_definit) || (node.kind == s_kind_str) || ((node.kind == s_kind_if) && all_hISPtTft(fu::get_view(node.items, 1, 3)));
}

inline static int bfind_fAOBrUAu(fu::view<char> item, s_Map_9nzi56Zu& _, const fu_STR& item_1)
{
    /*MOV*/ int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_pN4jXVBE(_.keys[i], item);
        if (cmp == 0)
        {
            return /*NRVO*/ i;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    _.keys.insert(lo, fu_STR(item_1));
    _.vals.insert(lo, s_TypeParam{});
    return /*NRVO*/ lo;
}

                                #ifndef DEF_ref_ut1DbAmZ
                                #define DEF_ref_ut1DbAmZ
inline s_TypeParam& ref_ut1DbAmZ(const fu_STR& item, s_Map_9nzi56Zu& _)
{
    const int idx = bfind_fAOBrUAu(item, _, item);
    return _.vals.mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_RGfEGqMs
                                #define DEF_ref_RGfEGqMs
inline s_TypeParam& ref_RGfEGqMs(s_Map_9nzi56Zu& _, const fu_STR& key)
{
    return ref_ut1DbAmZ(key, _);
}
                                #endif

static const s_Type& Scope_lookupType_JXAyqcsJ(fu_STR&& id, const s_Flags flags, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    int scope_iterator {};
    s_Target overloadIdx {};
    bool shadows {};
    const s_Flags qualified = (flags & s_Flags_F_COMPOUND_ID);
    const s_Scope& scope = (qualified ? dequalify_andGetScope_0f9fzGjM(id, _here, ctx, _helpers, _helpers_data, _scope, module) : _scope);
    while ((overloadIdx = search_7gDKHCyh(scope.items, id, scope_iterator, (!qualified ? _ss.items : fu::view<s_ScopeSkip>{}), shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
    {
        const s_Overload& maybe = GET_jZDx3Hiu(overloadIdx, _scope, module, ctx);
        if (maybe.kind == s_kind_type)
            return maybe.type ? maybe.type : BUG_XksxYQ3i(fu_STR{}, _here, ctx);

    };
    fail_LGxaAyqq((("No type `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Type& Scope_lookupType_suuZRgfd(const s_Node& annot, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    return Scope_lookupType_JXAyqcsJ(fu_STR(annot.value), annot.flags, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
}

static const fu_STR& getBasePrimitive_qoK8YDgg(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    const int offset = basePrimPrefixLen_d7UAjAhk(type.vtype.canon);
    if (offset < type.vtype.canon.size())
        return lookupStruct_VQxm8oyj(type, module, ctx).base;

    return type.vtype.canon;
}

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32;
                                #endif

static bool want_6tubyTlM(const s_Type& t, fu::view<char> c)
{
    return c == t.vtype.canon;
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

static s_Type solveInt_7x3YLQeM(fu::view<char> v, const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    s_Intlit parse = Intlit_IQ08v4Hx(v);
    if (parse.error)
        fail_LGxaAyqq(fu_STR(parse.error), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (type && is_primitive_CbRwLCm2(type))
    {
        fu::view<char> c = getBasePrimitive_qoK8YDgg(type, module, ctx);
        if (!parse.uNsigned)
        {
            if (((parse.minsize_f <= fu::u8(32u)) && want_6tubyTlM(t_f32, c)) || ((parse.minsize_f <= fu::u8(64u)) && want_6tubyTlM(t_f64, c)) || ((parse.minsize_i <= fu::u8(32u)) && want_6tubyTlM(t_i32, c)) || ((parse.minsize_i <= fu::u8(64u)) && want_6tubyTlM(t_i64, c)) || ((parse.minsize_i <= fu::u8(16u)) && want_6tubyTlM(t_i16, c)) || ((parse.minsize_i <= fu::u8(8u)) && want_6tubyTlM(t_i8, c)))
                return clear_refs_4X1iL0ll(s_Type(type));

        };
        if (!parse.sIgned)
        {
            if (((parse.minsize_u <= fu::u8(32u)) && want_6tubyTlM(t_u32, c)) || ((parse.minsize_u <= fu::u8(64u)) && want_6tubyTlM(t_u64, c)) || ((parse.minsize_u <= fu::u8(16u)) && want_6tubyTlM(t_u16, c)) || ((parse.minsize_u <= fu::u8(8u)) && want_6tubyTlM(t_u8, c)))
                return clear_refs_4X1iL0ll(s_Type(type));

        };
    };
    if (parse.uNsigned)
    {
        if ((parse.minsize_u <= fu::u8(32u)))
            return s_Type(t_u32);

        if ((parse.minsize_u <= fu::u8(64u)))
            return s_Type(t_u64);

    }
    else
    {
        if ((parse.minsize_i <= fu::u8(32u)))
            return s_Type(t_i32);

        if ((parse.minsize_i <= fu::u8(64u)))
            return s_Type(t_i64);

    };
    fail_LGxaAyqq("Bad int literal."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Type& solveReal_5nAHthhu(const fu_STR& v, const s_Type& type)
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

static s_Type trySolveDefinit_cv4XyTdJ(const s_Type& type)
{
    if (!type)
        return s_Type(t_zeroes);

    return type_trySuper_lFwbQ75H(t_zeroes, type, bool{});
}

static s_Type solveString_KZJaHmvV(fu::view<char> v, const s_Type& type, const s_Module& module, const s_Context& ctx, const s_Type& t_string)
{
    if (type && is_enum_CbRwLCm2(type))
    {
        fu::view<s_ScopeItem> members = lookupStruct_VQxm8oyj(type, module, ctx).items;
        for (int i = 0; i < members.size(); i++)
        {
            if (members[i].id == v)
                return clear_refs_4X1iL0ll(s_Type(type));

        };
    };
    return s_Type(t_string);
}

static s_Type tryRetyping_fhyto8pR(const s_SolvedNode& node, const s_Type& expect, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Type& t_string)
{
    if (is_arithmetic_CbRwLCm2(node.type) && is_arithmetic_CbRwLCm2(expect))
    {
        if (node.kind == s_kind_int)
            return solveInt_7x3YLQeM(node.value, expect, _here, ctx, _helpers, _helpers_data, _scope, module);

        if (node.kind == s_kind_real)
            return s_Type(solveReal_5nAHthhu(node.value, expect));

    };
    if (node.kind == s_kind_definit)
        return trySolveDefinit_cv4XyTdJ(expect);

    if (node.kind == s_kind_str)
        return solveString_KZJaHmvV(node.value, expect, module, ctx, t_string);

    if (node.kind == s_kind_if)
    {
        s_Type left = tryRetyping_fhyto8pR(node.items[1], expect, _here, ctx, _helpers, _helpers_data, _scope, module, t_string);
        s_Type right = tryRetyping_fhyto8pR(node.items[2], expect, _here, ctx, _helpers, _helpers_data, _scope, module, t_string);
        return left && right ? type_trySuper_lFwbQ75H(left, right, bool{}) : s_Type{};
    };
    return s_Type{};
}

static bool trySolveTypeParams_SDhDhNqQ(const s_Node& node, s_Type&& type, s_Map_9nzi56Zu& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    if (node.kind == s_kind_call)
    { {
        fu::view<s_Node> items = node.items;
        if (!items.size())
        {
            if (node.value == "any"_fu)
                return true;

        };
        if (items.size() == 1)
        {
            fu::never BL_5_v {};
            s_Type t = ((node.value == "&"_fu) ? tryClear_ref_4X1iL0ll(type, _here, ctx) : ((node.value == "&mut"_fu) ? tryClear_mutref_4X1iL0ll(type, _here, ctx) : ((node.value == "[]"_fu) ? tryClear_array_4X1iL0ll(type) : (__extension__ (
            {
                goto BL_1;
            (void)0;}), static_cast<fu::never&&>(BL_5_v)))));
            if (!t)
                return false;

            const s_Node* _0;
            return trySolveTypeParams_SDhDhNqQ((*(_0 = &(items[0])) ? *_0 : BUG_XksxYQ3i(fu_STR{}, _here, ctx)), s_Type(t), typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
        };
      } BL_1:;
    }
    else if (node.kind == s_kind_typeparam)
    {
        const fu_STR& id = (node.value ? node.value : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
        s_TypeParam& _param = ref_RGfEGqMs(typeParams, id);
        if (_param)
        {
            s_Type uNion = type_trySuper_lFwbQ75H(_param.matched, type, DONT_match_zeroes);
            if (!uNion)
                return false;

            type = uNion;
        };
        s_Type type_1 = relax_typeParam_4X1iL0ll(s_Type(type));
        _param.matched = relax_typeParam_4X1iL0ll(s_Type(type_1));
        return true;
    }
    else if ((node.kind == s_kind_arrlit) && (node.items.size() == 1))
    {
        s_Type t = tryClear_sliceable_4X1iL0ll(type);
        const s_Node* _1;
        return t && trySolveTypeParams_SDhDhNqQ((*(_1 = &(node.items[0])) ? *_1 : BUG_XksxYQ3i(fu_STR{}, _here, ctx)), s_Type(t), typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    }
    else if (node.kind == s_kind_typeunion)
    {
        s_Map_9nzi56Zu undo { typeParams };
        for (int i = 0; i < node.items.size(); i++)
        {
            if (trySolveTypeParams_SDhDhNqQ(node.items[i], s_Type(type), typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort))
                return true;

            typeParams = undo;
        };
        return false;
    };
    return isAssignable_npqyupaA(evalTypeAnnot_Csai46oQ(node, (*(const s_Map_9nzi56Zu*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort), type, DONT_match_zeroes, bool{});
}

static fu_STR humanizeType_4XPtiI5K(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR result { (isStruct_ZYIX8afu(type) ? lookupStruct_VQxm8oyj(type, module, ctx).name : type.vtype.canon) };
    if (type.vtype.quals)
        result += humanizeQuals_4X1iL0ll(type);

    return /*NRVO*/ result;
}

                                #ifndef DEF_find_cnCAmU7Y
                                #define DEF_find_cnCAmU7Y
inline int find_cnCAmU7Y(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

inline static fu_STR mangleArguments_0QDZrmwE(fu::view<s_Type> args, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_0JOpvc3a(args[i], "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

static s_Target SPECFAIL_VYBXlNBG(const fu_STR& reason, fu_VEC<fu_STR>& _spec_errors, const s_Target& SPECFAIL_RentrySafety, s_Target& currentSpec, fu::view<fu_STR> mangles, const bool isInline, const s_TokenIdx& _here, const s_Context& ctx, s_Map_w7treiPq& _specs, const s_Scope& _scope, const s_Module& module)
{
    const int index = _spec_errors.size();
    _spec_errors += fu_STR(reason);
    /*MOV*/ const s_Target spec = s_Target { int(SPECFAIL_RentrySafety.modid), int(index) };
    resetSpec_RWYa9eYn(spec, bool{}, currentSpec, mangles, isInline, _here, ctx, _specs, _scope, module);
    return /*NRVO*/ spec;
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_get_Sa46Lrq9
                                #define DEF_get_Sa46Lrq9
inline const s_TypeParam& get_Sa46Lrq9(fu::view<fu_STR> keys, fu::view<char> item, fu::view<s_TypeParam> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_PEYL9mMA(keys[i], item);
        if (cmp == 0)
        {
            return extras[i];
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return (*(const s_TypeParam*)fu::NIL);
}
                                #endif

                                #ifndef DEF_get_l6pHm6kc
                                #define DEF_get_l6pHm6kc
inline const s_TypeParam& get_l6pHm6kc(const s_Map_9nzi56Zu& _, fu::view<char> key)
{
    return get_Sa46Lrq9(_.keys, key, _.vals);
}
                                #endif

static const s_Type& evalTypeParam_ZDYMXUW9(fu::view<char> id, const s_Map_9nzi56Zu& typeParams, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    const s_Type* _0;
    return *(_0 = &(get_l6pHm6kc(typeParams, id).matched)) ? *_0 : *(_0 = &(Scope_lookupType_JXAyqcsJ(("$"_fu + (id ? id : fail_LGxaAyqq("Falsy type param id."_fu, _here, ctx, _helpers, _helpers_data, _scope, module))), s_Flags{}, _here, ctx, _helpers, _helpers_data, _scope, module, _ss))) ? *_0 : fail_LGxaAyqq((("No type param `$"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static bool type_has_aC9rZaJe(const s_Type& type, fu::view<char> tag, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (tag == "trivial"_fu)
        return is_trivial_K61azC5I(type, module, ctx);

    if (tag == "copy"_fu)
        return is_rx_copy_4X1iL0ll(type);

    if (tag == "arithmetic"_fu)
        return is_arithmetic_CbRwLCm2(type);

    if (tag == "primitive"_fu)
        return is_primitive_CbRwLCm2(type);

    if (tag == "bitfield"_fu)
        return is_bitfield_CbRwLCm2(type);

    if (tag == "integral"_fu)
        return is_integral_CbRwLCm2(type);

    if (tag == "unsigned"_fu)
        return is_unsigned_CbRwLCm2(type);

    if (tag == "floating_point"_fu)
        return is_floating_pt_CbRwLCm2(type);

    if (tag == "mutref"_fu)
        return is_mutref_4X1iL0ll(type, _here, ctx);

    if (tag == "enum"_fu)
        return is_enum_CbRwLCm2(type);

    BUG_XksxYQ3i((("Unknown type tag: `"_fu + tag) + "`."_fu), _here, ctx);
}

static bool evalTypePattern_9fe66Dnp(const s_Node& node, s_Map_9nzi56Zu& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    if (node.kind == s_kind_and)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (!evalTypePattern_9fe66Dnp(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn, _warnings, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort))
                return false;

        };
        return true;
    }
    else if (node.kind == s_kind_or)
    {
        s_Map_9nzi56Zu undo { typeParams };
        for (int i = 0; i < node.items.size(); i++)
        {
            if (evalTypePattern_9fe66Dnp(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn, _warnings, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort))
                return true;

            typeParams = undo;
        };
        return false;
    }
    else if (node.kind == s_kind_typeassert)
    {
        const s_Node* _0;
        const s_Node& left = (*(_0 = &(node.items[0])) ? *_0 : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
        const s_Node* _1;
        const s_Node& right = (*(_1 = &(node.items[1])) ? *_1 : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
        if ((left.kind == s_kind_typeparam) && (right.kind == s_kind_typetag))
            return type_has_aC9rZaJe(evalTypeParam_ZDYMXUW9(left.value, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (right.value ? right.value : fail_LGxaAyqq("Falsy type tag."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)), module, ctx, _here);
        else
        {
            s_Type actual = evalTypeAnnot_Csai46oQ(left, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
            /*MOV*/ const bool ok = trySolveTypeParams_SDhDhNqQ(right, s_Type(actual), typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
            if (ok && (left.kind == s_kind_typeparam))
            {
                s_Type expect = evalTypeAnnot_Csai46oQ(right, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
                const fu_STR& id = left.value;
                s_TypeParam& tp = ref_RGfEGqMs(typeParams, id);
                s_Type _2 {};
                tp.consumed = (tp.consumed ? ((_2 = type_tryIntersect_87LkAOV4(tp.consumed, expect)) ? static_cast<s_Type&&>(_2) : fail_LGxaAyqq("typeassert intersect fail."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) : s_Type(expect));
            };
            return /*NRVO*/ ok;
        };
    }
    else if (node.kind == s_kind_call)
    {
        fu::view<char> fn = node.value;
        if (node.items.size() == 1)
        {
            if (fn == "!"_fu)
                return !evalTypePattern_9fe66Dnp(node.items[0], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn, _warnings, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

        };
    };
    fail_LGxaAyqq((x7E((x7E("TODO evalTypePattern fallthrough: "_fu, str_omkBT2iF(node.kind)) + "("_fu), fu::i64dec(node.items.size())) + ")"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

static bool isNativeBody_Pj1Qpqi5(const s_Node& n_body)
{
    return (n_body.kind == s_kind_call) && (n_body.value == "__native"_fu);
}

                                #ifndef DEF_if_ref_lTcgzoVl
                                #define DEF_if_ref_lTcgzoVl
inline bool if_ref_lTcgzoVl(fu::view<char> item, s_Map_9nzi56Zu& _)
{
    int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_pN4jXVBE(_.keys[i], item);
        if (cmp == 0)
        {

            {
                s_TypeParam& tp = _.vals.mutref(i);
                tp.matched = tp.consumed;
            };
            return true;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return false;
}
                                #endif

                                #ifndef DEF_if_ref_ZGMGKlrx
                                #define DEF_if_ref_ZGMGKlrx
inline bool if_ref_ZGMGKlrx(s_Map_9nzi56Zu& _, fu::view<char> key)
{
    return if_ref_lTcgzoVl(key, _);
}
                                #endif

static const s_Target& checkStruct_QEmTbBu2(const s_Type& type, const s_Module& module, const s_Context& ctx, const s_Scope& _scope)
{
    const s_Target& t = lookupStruct_VQxm8oyj(type, module, ctx).target;
    return (GET_jZDx3Hiu(t, _scope, module, ctx).type == type) ? t : (*(const s_Target*)fu::NIL);
}

                                #ifndef DEF_pairs_8jHlVjno
                                #define DEF_pairs_8jHlVjno
inline void pairs_8jHlVjno(const s_Map_9nzi56Zu& _, const s_Module& module, const s_Context& ctx, s_Scope& _scope, fu_VEC<s_ScopeItem>& res)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        fu::view<char> id = _.keys[i];
        const s_TypeParam& tp = _.vals[i];
        fu_STR name = ("$"_fu + id);
        const s_Type& type = tp.matched;
        s_Target _0 {};
        const s_Target target = ((_0 = s_Target((isStruct_ZYIX8afu(type) ? checkStruct_QEmTbBu2(type, module, ctx, _scope) : (*(const s_Target*)fu::NIL)))) ? _0 : Scope_create_8vkRC1Ki(_scope, s_kind_type, ("$"_fu + id), type, s_Flags{}, s_SolverStatus{}, 0, module));
        Scope_set_hPlkl1cj(res, name, target, false);
    };
}
                                #endif

static fu_VEC<s_ScopeItem> intoScopeItems_Sz9dpAQt(const s_Map_9nzi56Zu& typeParams, const s_Module& module, const s_Context& ctx, s_Scope& _scope)
{
    /*MOV*/ fu_VEC<s_ScopeItem> res {};
    pairs_8jHlVjno(typeParams, module, ctx, _scope, res);
    return /*NRVO*/ res;
}

static s_SolvedNode solved_h7iffphh(const s_Node& node, const s_Type& type, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_MCGNnDLT(node.kind, type, node.flags, node.value, items, target, s_Helpers{}, _here);
}

static fu_VEC<s_SolvedNode>& outItems_VNYsk82N(s_CurrentFn& _current_fn)
{
    return _current_fn.out.items;
}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

static s_Type tryGetArgSpecType_YwV6Ojg8(fu::view<char> id, fu::view<s_ScopeItem> extra_items, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu_STR param = ("$"_fu + id);
    for (int i = 0; i < extra_items.size(); i++)
    {
        const s_ScopeItem& m = extra_items[i];
        if (m.id == param)
        {
            const s_Overload& o = GET_jZDx3Hiu(target_wh65lsPu(m), _scope, module, ctx);
            if (!(o.kind == s_kind_type))
                fail_LGxaAyqq((x7E((((x7E("tryGetArgSpecType: Not a typeparam: `"_fu, str_omkBT2iF(o.kind)) + ":"_fu) + param) + "("_fu), fu::i64dec(EXT_4ZiGP2RI(target_wh65lsPu(m), module, _scope, ctx).max)) + ")`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

            return s_Type(o.type);
        };
    };
    return s_Type{};
}

static void checkAssignable_ROonvup6(const s_Type& host, const s_Type& guest, fu::view<char> err, const fu_STR& id, const fu_STR& sep, const bool asArgument, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope)
{
    if (!(isAssignable_npqyupaA((host ? host : BUG_XksxYQ3i("Bad host type."_fu, _here, ctx)), (guest ? guest : BUG_XksxYQ3i("Bad guest type."_fu, _here, ctx)), bool{}, asArgument)))
        fail_LGxaAyqq((((((err + (id ? ((" `"_fu + id) + "`"_fu) : fu_STR{})) + ": "_fu) + humanizeType_4XPtiI5K(host, module, ctx)) + (sep ? fu_STR(sep) : " <- "_fu)) + humanizeType_4XPtiI5K(guest, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

}

                                #ifndef DEF_N_DeadLet
                                #define DEF_N_DeadLet
inline constexpr int N_DeadLet = (1 << 8);
                                #endif

static s_SolvedNode solveLetLike_dontTouchScope_mAdiQngQ(const fu_STR& id, s_Flags flags, const s_SolvedNode& init, const s_Type& annot, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Options& options, int& _notes)
{
    if (!(annot || init.type))
        fail_LGxaAyqq((("Variable declarations without type annotations must be initialized: `"_fu + id) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (annot && init.type)
        checkAssignable_ROonvup6(annot, init.type, "Type annotation does not match init expression"_fu, id, "="_fu, !!(flags & s_Flags_F_ARG), _here, ctx, module, _helpers, _helpers_data, _scope);

    const s_Type& t_init = init.type;
    s_Type t_init_1 = (is_ref2temp_4X1iL0ll(t_init, _here, ctx) ? clear_refs_4X1iL0ll(s_Type(t_init)) : s_Type(t_init));
    if (!(flags & s_Flags_F_ARG) && is_never_4X1iL0ll(t_init_1))
    {
        makeNote_6kXvqC8U(N_DeadLet, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return s_SolvedNode(init);
    };
    if (is_mutref_4X1iL0ll(annot, _here, ctx))
        flags |= s_Flags_F_REF;

    if (flags & s_Flags_F_REF)
    {
        if (!(is_mutref_4X1iL0ll(t_init_1, _here, ctx) || (is_never_4X1iL0ll(t_init_1) && annot) || (!init && (flags & s_Flags_F_ARG))))
            fail_LGxaAyqq(((("`ref` variables must be initialized to a mutable reference: `"_fu + id) + "`"_fu) + (t_init_1 ? (" = "_fu + humanizeType_4XPtiI5K(t_init_1, module, ctx)) : "."_fu)), _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    s_Type t_let = ((annot && ((flags & s_Flags_F_ARG) || !t_init_1)) ? s_Type(annot) : ((is_mutref_4X1iL0ll(t_init_1, _here, ctx) && !(flags & s_Flags_F_REF)) ? clear_mutref_4X1iL0ll(s_Type(t_init_1)) : s_Type(t_init_1)));
    if ((flags & s_Flags_F_ARG) && !(flags & s_Flags_F_MUT))
        t_let = add_ref_HFjykOs8(s_Type(t_let), Lifetime_temporary_8nlJDPX0(), _here, ctx);

    return SolvedNode_MCGNnDLT(s_kind_let, t_let, flags, id, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode solveLetLike_dontTouchScope_3VdDQy8a(const s_Node& node, const s_Type& specType, const s_Type& primType, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    const s_Node& n_annot = node.items[LET_TYPE];
    s_Type annot = (n_annot && (n_annot.kind != s_kind_typeunion) ? evalTypeAnnot_Csai46oQ(n_annot, (*(const s_Map_9nzi56Zu*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort) : s_Type{});
    s_Flags flags = node.flags;
    if (is_mutref_4X1iL0ll(specType, _here, ctx) && !((flags & s_Flags_F_REF) || is_mutref_4X1iL0ll(annot, _here, ctx)))
        flags |= s_Flags_F_RELAXABLE_REF;

    const s_Type& annot_1 = (specType ? specType : primType ? primType : annot);
    s_Type annot_2 = ((annot_1 && (node.flags & s_Flags_F_REF)) ? add_mutref_HFjykOs8(s_Type(annot_1), Lifetime_temporary_8nlJDPX0(), _here, ctx) : s_Type(annot_1));
    const s_Node& n_init = node.items[LET_INIT];
    s_SolvedNode init = (n_init ? solveNode_wDAIciWi(n_init, annot_2, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort) : s_SolvedNode{});
    s_SolvedNode init_1 = ((specType && init.type && !isAssignableAsArgument_lFwbQ75H(specType, init.type, bool{})) ? s_SolvedNode{} : s_SolvedNode(init));
    return solveLetLike_dontTouchScope_mAdiQngQ(node.value, s_Flags(flags), init_1, annot_2, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes);
}

                                #ifndef DEF_str_geTVZKmQ
                                #define DEF_str_geTVZKmQ
inline fu_STR str_geTVZKmQ(const s_kind n)
{

    {
        if (n == s_kind_sof)
            return "sof"_fu;

        if (n == s_kind_id)
            return "id"_fu;

        if (n == s_kind_op)
            return "op"_fu;

        if (n == s_kind_int)
            return "int"_fu;

        if (n == s_kind_real)
            return "real"_fu;

        if (n == s_kind_char)
            return "char"_fu;

        if (n == s_kind_str)
            return "str"_fu;

        if (n == s_kind_err)
            return "err"_fu;

        if (n == s_kind_eof)
            return "eof"_fu;

        if (n == s_kind_root)
            return "root"_fu;

        if (n == s_kind_block)
            return "block"_fu;

        if (n == s_kind_argid)
            return "argid"_fu;

        if (n == s_kind_let)
            return "let"_fu;

        if (n == s_kind_call)
            return "call"_fu;

        if (n == s_kind_arrlit)
            return "arrlit"_fu;

        if (n == s_kind_if)
            return "if"_fu;

        if (n == s_kind_or)
            return "or"_fu;

        if (n == s_kind_and)
            return "and"_fu;

        if (n == s_kind_loop)
            return "loop"_fu;

        if (n == s_kind_break)
            return "break"_fu;

        if (n == s_kind_return)
            return "return"_fu;

        if (n == s_kind_continue)
            return "continue"_fu;

        if (n == s_kind_bool)
            return "bool"_fu;

        if (n == s_kind_definit)
            return "definit"_fu;

        if (n == s_kind_import)
            return "import"_fu;

        if (n == s_kind_defer)
            return "defer"_fu;

        if (n == s_kind_try)
            return "try"_fu;

        if (n == s_kind_typedef)
            return "typedef"_fu;

        if (n == s_kind_typecast)
            return "typecast"_fu;

        if (n == s_kind_typeassert)
            return "typeassert"_fu;

        if (n == s_kind_typeparam)
            return "typeparam"_fu;

        if (n == s_kind_addroffn)
            return "addroffn"_fu;

        if (n == s_kind_forfieldsof)
            return "forfieldsof"_fu;

        if (n == s_kind_pragma)
            return "pragma"_fu;

        if (n == s_kind_void)
            return "void"_fu;

        if (n == s_kind_struct)
            return "struct"_fu;

        if (n == s_kind_union)
            return "union"_fu;

        if (n == s_kind_primitive)
            return "primitive"_fu;

        if (n == s_kind_flags)
            return "flags"_fu;

        if (n == s_kind_enum)
            return "enum"_fu;

        if (n == s_kind_members)
            return "members"_fu;

        if (n == s_kind_fn)
            return "fn"_fu;

        if (n == s_kind_fnbranch)
            return "fnbranch"_fu;

        if (n == s_kind_pattern)
            return "pattern"_fu;

        if (n == s_kind_typeunion)
            return "typeunion"_fu;

        if (n == s_kind_typetag)
            return "typetag"_fu;

        if (n == s_kind_jump)
            return "jump"_fu;

        if (n == s_kind_empty)
            return "empty"_fu;

        if (n == s_kind_letdef)
            return "letdef"_fu;

        if (n == s_kind___relaxed)
            return "__relaxed"_fu;

        if (n == s_kind___convert)
            return "__convert"_fu;

        if (n == s_kind_fndef)
            return "fndef"_fu;

        if (n == s_kind_copy)
            return "copy"_fu;

        if (n == s_kind_move)
            return "move"_fu;

        if (n == s_kind___far_jump)
            return "__far_jump"_fu;

        if (n == s_kind___no_kind_yet)
            return "__no_kind_yet"_fu;

        if (n == s_kind_type)
            return "type"_fu;

        if (n == s_kind_var)
            return "var"_fu;

        if (n == s_kind_field)
            return "field"_fu;

        if (n == s_kind_enumv)
            return "enumv"_fu;

        if (n == s_kind_template)
            return "template"_fu;

        if (n == s_kind___native)
            return "__native"_fu;

        if (n == s_kind_inline)
            return "inline"_fu;

    };
    return fu::i64dec(int64_t(n));
}
                                #endif

                                #ifndef DEF_find_NUBAP72x
                                #define DEF_find_NUBAP72x
inline int find_NUBAP72x(fu::view<char> a, const char b, int start)
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

                                #ifndef DEF_unpackAddrOfFn_oxmDPhRE
                                #define DEF_unpackAddrOfFn_oxmDPhRE
inline void unpackAddrOfFn_oxmDPhRE(fu::view<char> canon, s_Scope& _scope, const fu_STR& id, const bool shadows)
{
    if (!(canon[0] == '@'))
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

    int offset = 1;
    while (offset < canon.size())
    {
        const s_Mi mi = parseMi_mPp6Ulzh(offset, canon);
        const s_Target target = s_Target { int(mi.modid), int(mi.index) };
        Scope_set_hPlkl1cj(_scope.items, id, target, shadows);
    };
}
                                #endif

static s_SolvedNode createEmpty_YodOLeb9(const s_kind kind, const s_Type& type, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_MCGNnDLT(kind, type, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

                                #ifndef DEF_x3Cx3E_PpOiPx6i
                                #define DEF_x3Cx3E_PpOiPx6i
inline int x3Cx3E_PpOiPx6i(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_b8qrb8AT
                                #define DEF_x3Cx3E_b8qrb8AT
inline int x3Cx3E_b8qrb8AT(const s_Region& a, const s_Region& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_PpOiPx6i(a.index, b.index);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

static s_Target nested_RjaTwNl9(const int index, const s_Target& _current_fnort, const s_Module& module)
{
    int _0 {};
    return s_Target { ((_0 = -_current_fnort.index) ? _0 : int(module.modid)), int(index) };
}

static const s_Lifetime& Lifetime_test_EHx9VNGx(const s_Lifetime& lifetime, const bool tempsOK, const s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort)
{
    if (SELF_TEST)
    {
        const s_Target& current_fn = _current_fn.out.target;
        const s_Overload& debug_2 = (current_fn ? GET_jZDx3Hiu(current_fn, _scope, module, ctx) : (*(const s_Overload*)fu::NIL));
        if (debug_2)
        {
        };
        if (!lifetime.uni0n.size())
            BUG_XksxYQ3i("Lifetime_test: no region set."_fu, _here, ctx);

        s_Region _last {};
        for (int i = 0; i < lifetime.uni0n.size(); i++)
        {
            const s_Region& region = lifetime.uni0n[i];

            {
                if (!(!i || (x3Cx3E_b8qrb8AT(region, _last) > 0)))
                    BUG_XksxYQ3i("Lifetime_test: not a sorted set"_fu, _here, ctx);

                _last = region;
            };
            if (Region_isArgPosition_L0YJBnz6(region))
                continue;

            if (Region_isTemp_L0YJBnz6(region))
            {
                if (!((i == (lifetime.uni0n.size() - 1)) && tempsOK))
                    BUG_XksxYQ3i("Lifetime_test: unexpected temporary."_fu, _here, ctx);

                continue;
            };
            const int index = Region_toLocal_L0YJBnz6(region);
            if (index)
            {
                const s_Overload& o = GET_jZDx3Hiu(nested_RjaTwNl9(index, _current_fnort, module), _scope, module, ctx);
                if (!(o.kind == s_kind_var))
                    BUG_XksxYQ3i(((x7E("Lifetime_test: local is not a var: "_fu, str_omkBT2iF(o.kind)) + " "_fu) + o.name), _here, ctx);

            };
        };
    };
    return lifetime;
}

static s_Lifetime Lifetime_fromBinding_FAPovN7n(const s_Target& target, const int local_of, const s_Module& module, const s_TokenIdx& _here, const s_Context& ctx, const s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Target& _current_fnort)
{
    if (!((target.modid < 0) || (target.modid < 0) || (target.modid == module.modid)))
        BUG_XksxYQ3i("not from this module"_fu, _here, ctx);

    if (!local_of)
        return Lifetime_static_8nlJDPX0();

    const int index = target.index;
    const s_Region region = Region_fromLocal_BaKYka79(index);
    return /* MOVE_FROM_CONST_REF */static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>(Lifetime_test_EHx9VNGx(s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(region) } } }, bool{}, _current_fn, _scope, module, ctx, _here, _current_fnort)));
}

static s_Target Binding_oadMuBRS(const fu_STR& id, s_Type&& type, const s_Flags flags, bool& shadows, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort)
{
    const fu_STR& name = id;
    const int local_of = _current_fn.out.target.index;
    if (_root_scope)
        autoshadow_8YjDcpoq(shadows, local_of, id, _current_fn, _scope, _ss, _root_scope);

    /*MOV*/ const s_Target target = Scope_create_8vkRC1Ki(_scope, s_kind_var, name, (*(const s_Type*)fu::NIL), flags, s_SolverStatus{}, local_of, module);
    s_Overload& overload = GET_mut_tUm7lURP(target, _scope, module);

    {
        s_Lifetime lifetime = Lifetime_fromBinding_FAPovN7n(target, local_of, module, _here, ctx, _current_fn, _scope, _current_fnort);
        type.lifetime = s_Lifetime{};
        overload.type = ((flags & s_Flags_F_MUT) ? add_mutref_HFjykOs8(s_Type(type), lifetime, _here, ctx) : add_ref_HFjykOs8(s_Type(type), lifetime, _here, ctx));
    };
    return /*NRVO*/ target;
}

static s_SolvedNode& solved_set_9x7XNSoR(const s_Target& target, const s_SolvedNode& node, s_Scope& _scope, const s_Module& module)
{
    return (GET_mut_tUm7lURP(target, _scope, module).solved = node);
}

static s_SolvedNode createLetDef_w5AOzZ1x(const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_MCGNnDLT(s_kind_letdef, (*(const s_Type*)fu::NIL), s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_SolvedNode solveLet_a4klVQZh(s_SolvedNode& out, const fu_STR& id, const s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, const s_Module& module, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Target& _current_fnort)
{
    if (out.kind != s_kind_let)
    {
        if (!(is_never_4X1iL0ll(out.type)))
            BUG_XksxYQ3i((((x7E("solveLet: results in a `"_fu, str_geTVZKmQ(out.kind)) + ": "_fu) + id) + "`."_fu), _here, ctx);

        return s_SolvedNode(out);
    };
    bool shadows = !!(out.flags & s_Flags_F_SHADOW);
    const s_Flags isArg = (out.flags & s_Flags_F_ARG);
    fu_STR cleanID {};
    if (out.flags & s_Flags_F_COMPOUND_ID)
    {
        if (!(isArg))
            BUG_XksxYQ3i("solveLet: F_COMPOUND_ID on a non-F_ARG."_fu, _here, ctx);

        const int start = (find_cnCAmU7Y(id, '!') + 1);
        const int end = find_NUBAP72x(id, '.', ((start > 0) ? int(start) : 0));
        cleanID = fu::slice(id, ((start > 0) ? int(start) : 0), ((end > 0) ? int(end) : id.size()));
        if (!(cleanID && (cleanID.size() < id.size())))
            BUG_XksxYQ3i("solveLet: F_COMPOUND_ID bad cleanID."_fu, _here, ctx);

    };
    const fu_STR& id_1 = (cleanID ? cleanID : id);
    if (type_isAddrOfFn_4X1iL0ll(out.type))
    {
        const bool shadows_1 = true;
        unpackAddrOfFn_oxmDPhRE(out.type.vtype.canon, _scope, id_1, shadows_1);
    }
    else
    {
        if (OPTI_dedupe_vars && !isArg && !(out.flags & ((s_Flags_F_PUB | s_Flags_F_IMPLICIT) | s_Flags_F_MUT)))
        {
            const s_SolvedNode& init = out.items[LET_INIT];
            if ((init.kind == s_kind_call) && !init.items)
            {
                const s_Target& target = init.target;
                const s_Overload& other = GET_jZDx3Hiu(target, _scope, module, ctx);
                if (other.kind == s_kind_var)
                {
                    if (isAssignable_npqyupaA(other.type, out.type, bool{}, bool{}))
                    {
                        Scope_set_BU3HNW7T(_scope, id_1, target, shadows);
                        if (out.flags & s_Flags_F_USING)
                            _scope.usings.push(s_Target(target));

                        out = createEmpty_YodOLeb9(s_kind_empty, t_void, s_Target{}, _here);
                        return s_SolvedNode(out);
                    };
                };
            };
        };
        const s_Target& target = (out.target = Binding_oadMuBRS(id_1, s_Type(out.type), out.flags, shadows, _current_fn, _root_scope, _scope, _ss, module, _here, ctx, _current_fnort));
        solved_set_9x7XNSoR(target, out, _scope, module);
        Scope_set_BU3HNW7T(_scope, id_1, target, shadows);
        if (out.flags & s_Flags_F_IMPLICIT)
            Scope_set_hPlkl1cj(_scope.implicits, id_1, target, shadows);

        if (out.flags & s_Flags_F_USING)
            _scope.usings.push(s_Target(target));

        return createLetDef_w5AOzZ1x(target, _here);
    };
    if (out.flags & s_Flags_F_ARG)
        return s_SolvedNode(out);

    return createEmpty_YodOLeb9(s_kind_empty, t_void, s_Target{}, _here);
}

static s_SolvedNode solveLet_rYi8moYl(const s_Node& node, const s_Type& specType, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    s_SolvedNode out = solveLetLike_dontTouchScope_3VdDQy8a(node, specType, (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    const fu_STR& id = out.value;
    return solveLet_a4klVQZh(out, id, _here, ctx, _scope, module, _current_fn, _root_scope, _ss, _current_fnort);
}

                                #ifndef DEF_only_bnf9V1GC
                                #define DEF_only_bnf9V1GC
inline const s_Region& only_bnf9V1GC(fu::view<s_Region> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Lifetime Lifetime_fromNative_UknZZcNG(fu::view<s_Node> sig, fu::view<s_SolvedNode> args, const s_Type& actual, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!((sig.size() + FN_ARGS_BACK) == args.size()))
        BUG_XksxYQ3i("sig.len != args.len"_fu, _here, ctx);

    const s_Node& ret = sig[(sig.size() + FN_RET_BACK)];
    bool mutref = ((ret.kind == s_kind_call) && (ret.items.size() == 1) && (ret.value == "&mut"_fu));
    /*MOV*/ s_Type res {};
    for (; ; )
    {
        for (int i = 0; i < args.size(); i++)
        {
            const s_Node& inArg = sig[i];
            const s_Node& annot = inArg.items[LET_TYPE];
            if ((annot.items.size() == 1) && (((annot.kind == s_kind_call) && ((!mutref && (annot.value == "&"_fu)) || (annot.value == "&mut"_fu))) || (!mutref && (annot.kind == s_kind_arrlit))))
            {
                if (res)
                    fail_LGxaAyqq("Ambiguous __native lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                res = GET_jZDx3Hiu(args[i].target, _scope, module, ctx).type;
                if (!(res.lifetime))
                    fail_LGxaAyqq("Missing arg lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        if (!mutref || res.lifetime)
            break;

        mutref = false;
    };
    if (!(Region_asLocal_L0YJBnz6(only_bnf9V1GC(res.lifetime.uni0n))))
        fail_LGxaAyqq("Non-single-local __native lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!isAssignable_npqyupaA(actual, res, bool{}, bool{}))
        return Lifetime_makeShared_MvT8pzW6(res.lifetime);

    return static_cast<s_Lifetime&&>(res.lifetime);
}

static fu_STR CompoundArgID_outerSplice_k4Tw2yvK(fu_STR& name, const s_TokenIdx& _here, const s_Context& ctx)
{
    bool exclam = false;
    for (int i = 0; i < name.size(); i++)
    {
        const char c = name[i];
        if (c == '!')
        {
            if (exclam)
                BUG_XksxYQ3i((("CompoundArgID: double bang in `"_fu + name) + "`."_fu), _here, ctx);

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
        BUG_XksxYQ3i((("CompoundArgID: no `.` nor `!` in id `"_fu + name) + "`."_fu), _here, ctx);

    return fu_STR{};
}

                                #ifndef DEF_each_8CpXhev7
                                #define DEF_each_8CpXhev7
inline void each_8CpXhev7(const s_BitSet& _, fu::view<s_SolvedNode> items, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, s_BitSet& hard_risk)
{
    for (int i = 0; i < _._data.size(); i++)
    {
        const fu::u8 item = _._data[i];
        if (item)
        {
            for (int b = 0; b < 8; b++)
            {
                const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(b))));
                if (item & mask)
                {
                    const int index = ((i << 3) | int(b));
                    const s_SolvedNode& other = GET_jZDx3Hiu(items[index].target, _scope, module, ctx).solved;
                    if (!TODO_FIX_isArray_4X1iL0ll(other.type))
                        add_sDUBjUzV(hard_risk, index);

                };
            };
        };
    };
}
                                #endif

                                #ifndef DEF_has_8Jwjab4d
                                #define DEF_has_8Jwjab4d
inline bool has_8Jwjab4d(fu::view<s_Target> a, const s_Target& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_zijI8oZ9(fu_VEC<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static const s_Type& Lifetime_climbType_6Fvnddw1(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (!(o.kind == s_kind_var))
        BUG_XksxYQ3i(("Lifetime_climbType: not a `var`: "_fu + qWHAT_QRi0Vh4d(o, module, _scope, ctx)), _here, ctx);

    const s_SolvedNode& node = o.solved;
    return is_ref_4X1iL0ll(node.type) && node.items ? node.items[LET_INIT].type : (*(const s_Type*)fu::NIL);
}

inline static void Lifetime_each_h4YeDl94(s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;

        if (Region_isTemp_L0YJBnz6(r))
            continue;

        const s_Overload& o = GET_mut_tUm7lURP(nested_RjaTwNl9(Region_toLocal_L0YJBnz6(r), _current_fnort, module), _scope, module);
        const s_Type& init = Lifetime_climbType_6Fvnddw1(o, module, _scope, ctx, _here);
        if (!is_ref_4X1iL0ll(init))
            continue;

        if (!(init.lifetime.uni0n.size()))
            BUG_XksxYQ3i(fu_STR{}, _here, ctx);

        lifetime.uni0n.splice(i, 1);
        const int N0 = lifetime.uni0n.size();
        lifetime = Lifetime_union_XJgsWJyN(lifetime, init.lifetime);
        const int N1 = lifetime.uni0n.size();
        i += (N1 - N0);
    };
}

static s_Lifetime Lifetime_unwind_lchWAqUg(/*MOV*/ s_Lifetime&& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    Lifetime_each_h4YeDl94(lifetime, locals_start, _current_fnort, module, _scope, ctx, _here);
    return static_cast<s_Lifetime&&>(lifetime);
}

                                #ifndef DEF_has_Q7J3bwPC
                                #define DEF_has_Q7J3bwPC
inline bool has_Q7J3bwPC(fu::view<s_Region> a, const s_Region& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR addr_P7L9E0Zs(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    const s_Token& t = _token_4Uqw4R4P(token, ctx);
    if (token.modid != module.modid)
        return x7E((x7E((_fname_4Uqw4R4P(token, ctx) + "@"_fu), fu::i64dec(t.line)) + ":"_fu), fu::i64dec(t.col));

    return x7E(x7E(fu::i64dec(t.line), ":"_fu), fu::i64dec(t.col));
}

static fu_STR addr_and_snippet_QQXUwtFS(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    return (addr_P7L9E0Zs(token, ctx, module) + ":\n\n"_fu) + formatCodeSnippet_NTO0WeaM(token, s_TokenIdx{}, ctx);
}

static fu_STR qSTACK_kRID8tui(const s_Target& target, const s_Region& region, fu::view<s_Target> seen, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    const s_Target& _current_fnort = target;
    return qSTACK_edxH1uYk(target, GET_jZDx3Hiu(target, _scope, module, ctx).solved, region, seen, _scope, module, ctx, _current_fnort, _here);
}

static fu_STR qSTACK_TlDJltqj(const s_Target& target, const int position, fu::view<s_Target> seen, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    return qSTACK_kRID8tui(target, Region_fromLocal_BaKYka79(EXT_4ZiGP2RI(target, module, _scope, ctx).args[position].local), seen, _scope, module, ctx, _here);
}

static fu_STR qSTACK_edxH1uYk(const s_Target& target, const s_SolvedNode& node, const s_Region& region, fu::view<s_Target> seen, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_Target& _current_fnort, const s_TokenIdx& _here)
{
    /*MOV*/ fu_STR src = "\n            "_fu;
    const bool rec = has_8Jwjab4d(seen, target);
    if (rec)
        src += "recursively "_fu;


    { {
        fu_VEC<s_SolvedNode> stack = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_zijI8oZ9(stack);
            s_SolvedNode node_2 { ((node_1.kind == s_kind_letdef) ? GET_jZDx3Hiu(node_1.target, _scope, module, ctx).solved : node_1) };

            { {
                if (node_2.kind != s_kind_call)
                    goto BL_5;

                fu_VEC<s_Argument> host_args { EXT_4ZiGP2RI(node_2.target, module, _scope, ctx).args };
                for (int i = 0; i < host_args.size(); i++)
                {
                    const s_Argument& host_arg = host_args[i];
                    if (!(host_arg.flags & s_Flags_F_WRITTEN_TO))
                        continue;

                    const s_SolvedNode& arg = node_2.items[i];
                    if (!has_Q7J3bwPC(Lifetime_unwind_lchWAqUg(s_Lifetime(arg.type.lifetime), 0, _current_fnort, module, _scope, ctx, _here).uni0n, region))
                        continue;

                    src += (("via "_fu + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(node_2.target, _scope, module, ctx), module, _scope, ctx)) + " at "_fu);
                    src += addr_and_snippet_QQXUwtFS(node_2.token, ctx, module);
                    if (!rec && (seen.size() < 8))
                        src += qSTACK_TlDJltqj(node_2.target, i, (seen + target), module, _scope, ctx, _here);

                    goto BL_2;
                };
              } BL_5:;
            };
            for (int i = node_2.items.size(); i-- > 0; )
                stack += s_SolvedNode(node_2.items[i]);

        };
      } BL_2:;
    };
    return /*NRVO*/ src;
}

                                #ifndef DEF_find_u1VerSYt
                                #define DEF_find_u1VerSYt
inline int find_u1VerSYt(fu::view<s_Region> a, const s_Region& b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_x3Cx3E_yxV5QT4l
                                #define DEF_x3Cx3E_yxV5QT4l
inline int x3Cx3E_yxV5QT4l(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_jfk3Tnsy
                                #define DEF_x3Cx3E_jfk3Tnsy
inline int x3Cx3E_jfk3Tnsy(const s_Region& a, const s_Region& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_yxV5QT4l(a.index, b.index);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_add_nWrnWrGy
                                #define DEF_add_nWrnWrGy
inline bool add_nWrnWrGy(fu_VEC<s_Region>& keys, const s_Region& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_jfk3Tnsy(keys[i], item);
        if (cmp == 0)
        {
            return false;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, s_Region(item));
    return true;
}
                                #endif

static const s_Overload& Region_GET_3F6RJQUc(const s_Region& r, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return GET_jZDx3Hiu(nested_RjaTwNl9(Region_toLocal_L0YJBnz6(r), _current_fnort, module), _scope, module, ctx);
}

static fu_STR qWHAT_5B1fYWan(const s_Lifetime& l, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    /*MOV*/ fu_STR str {};
    for (int i = 0; i < l.uni0n.size(); i++)
    {
        if (i)
            str += "|"_fu;

        const s_Region& r = l.uni0n[i];
        if (Region_isStatic_L0YJBnz6(r))
            str += "static"_fu;
        else if (Region_isTemp_L0YJBnz6(r))
            str += "temp"_fu;
        else
            str += qWHAT_QRi0Vh4d(Region_GET_3F6RJQUc(r, _current_fnort, module, _scope, ctx), module, _scope, ctx);

    };
    return /*NRVO*/ str;
}

                                #ifndef DEF_each_MItRRaiM
                                #define DEF_each_MItRRaiM
inline void each_MItRRaiM(fu::view<s_Region> a, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_Type& retval, const s_TokenIdx& _here)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Region& r = a[i];
        if (!(Region_isArgPosition_L0YJBnz6(r) || Region_isStatic_L0YJBnz6(r)))
            BUG_XksxYQ3i(((("updateScope: Non-static/non-arg leaked:\n\t"_fu + qWHAT_QRi0Vh4d(Region_GET_3F6RJQUc(r, _current_fnort, module, _scope, ctx), module, _scope, ctx)) + "\n\n\tIn retval lifetime:\n\t"_fu) + qWHAT_5B1fYWan(retval.lifetime, _current_fnort, module, _scope, ctx)), _here, ctx);

    };
}
                                #endif

static s_Flags& isRTL_set_9FzNg18P(s_Overload& o, const bool rtl)
{
    return (rtl ? (o.flags |= s_Flags_F_OOE_RTL) : (o.flags &= ~s_Flags_F_OOE_RTL));
}

inline static fu_STR mangleArguments_wpbA41Ww(fu::view<s_Argument> args, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_0JOpvc3a(args[i].type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

static fu_STR HACK_nativeNameParts_F1E1GWIb(const bool isNative, const s_Node& n_body)
{
    /*MOV*/ fu_STR name {};
    if (isNative && n_body.items)
    {
        for (int i = 0; i < n_body.items.size(); i++)
            name += ("\n"_fu + n_body.items[i].value);

    };
    return /*NRVO*/ name;
}

static int GET_next_local_index_ueCY9QGt(const s_Target& _current_fnort, const s_CurrentFn& _current_fn, const s_Scope& _scope)
{
    return _current_fn.out.target.index ? (_scope.extended[_current_fnort.index].locals.size() + 1) : int{};
}

                                #ifndef DEF_last_XJocKWoL
                                #define DEF_last_XJocKWoL
inline s_Node& last_XJocKWoL(fu::view_mut<s_Node> s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEF_last_8DAoFAdf
                                #define DEF_last_8DAoFAdf
inline const s_Node& last_8DAoFAdf(fu::view<s_Node> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static bool Lifetime_allowsMutrefReturn_HSEwmlgr(const s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_TokenIdx& _here, const s_Context& ctx)
{

    {
        for (int i = lifetime.uni0n.size(); i-- > 0; )
        {
            const s_Region& r = lifetime.uni0n[i];
            if (r.index < locals_start)
                break;

            if (Region_isTemp_L0YJBnz6(r))
                continue;

            const s_Overload& o = GET_mut_tUm7lURP(nested_RjaTwNl9(Region_toLocal_L0YJBnz6(r), _current_fnort, module), _scope, module);
            if (!(is_mutref_4X1iL0ll(o.type, _here, ctx)))
                BUG_XksxYQ3i(("Checking for mutref-return-ok found non-mutref: "_fu + qWHAT_QRi0Vh4d(o, module, _scope, ctx)), _here, ctx);

            if ((o.kind == s_kind_var) && !(o.flags & s_Flags_F_REF))
                return false;

            const s_Type& init = Lifetime_climbType_6Fvnddw1(o, module, _scope, ctx, _here);
            if (!Lifetime_allowsMutrefReturn_HSEwmlgr(s_Lifetime(init.lifetime), locals_start, _current_fnort, module, _scope, _here, ctx))
                return false;

        };
    };
    return true;
}

static s_Type superType_CUPiNEmC(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope)
{
    s_Type _0 {};
    return (_0 = type_trySuper_lFwbQ75H(a, b, bool{})) ? static_cast<s_Type&&>(_0) : fail_LGxaAyqq(((((((id ? (qID_HfIK3mvn(id) + ": "_fu) : fu_STR{}) + reason) + "No common supertype: "_fu) + humanizeType_4XPtiI5K(a, module, ctx)) + " | "_fu) + humanizeType_4XPtiI5K(b, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void reportReturnType_X4EG2C6N(const s_Helpers& h, const s_Type& type, const bool NICEERR_missingReturn, const s_TokenIdx& _here, const s_Context& ctx, fu::view_mut<s_HelpersData> _helpers_data, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    s_Type type_1 = ((is_mutref_4X1iL0ll(type, _here, ctx) && !Lifetime_allowsMutrefReturn_HSEwmlgr(type.lifetime, ((void)void(), _helpers_data[h.index]).locals_start, _current_fnort, module, _scope, _here, ctx)) ? clear_mutref_4X1iL0ll(s_Type(type)) : s_Type(type));
    s_Type type_2 = (is_ref2temp_4X1iL0ll(type_1, _here, ctx) ? clear_refs_4X1iL0ll(s_Type(type_1)) : s_Type(type_1));
    if (((void)void(), _helpers_data[h.index]).ret_expect)
        checkAssignable_ROonvup6(((void)void(), _helpers_data[h.index]).ret_expect, type_2, "Actual return type does not match annotation"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), bool{}, _here, ctx, module, _helpers, _helpers_data, _scope);

    ((void)void(), _helpers_data.mutref(h.index)).ret_actual = (((void)void(), _helpers_data[h.index]).ret_actual ? superType_CUPiNEmC((NICEERR_missingReturn ? "Missing final return: "_fu : "Subsequent return: "_fu), ((void)void(), _helpers_data[h.index]).ret_actual, type_2, (*(const fu_STR*)fu::NIL), module, ctx, _here, _helpers, _helpers_data, _scope) : s_Type(type_2));
    if (!(((void)void(), _helpers_data[h.index]).ret_actual))
        BUG_XksxYQ3i("Can't be null past this point."_fu, _here, ctx);

}

static fu_STR currentFn_mustBecomeInline_zN39RUaN(const s_CurrentFn& _current_fn)
{
    return (_current_fn.effects.far_jumps.size() > 0) ? "Contains non-local control flow."_fu : fu_STR{};
}

static void test_nodes_6mINb2jy(fu::view<s_SolvedNode> nodes, fu::view<char> debug, s_TokenIdx& _here, const s_Module& module, const s_Context& ctx, const s_Scope& _scope)
{
    for (int i = 0; i < nodes.size(); i++)
        test_node_YJTaOe1a(nodes[i], (x7E((debug + "["_fu), fu::i64dec(i)) + "]"_fu), _here, module, ctx, _scope);

}

inline static fu_STR mangleArguments_DBr2lSr4(fu::view<s_SolvedNode> args, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_0JOpvc3a(args[i].type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

static fu_STR explainConversion_VONhKWTu(fu::view<s_Target> path, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR res {};
    for (int i = 0; i < path.size(); i++)
    {
        if (i)
            res += " -> "_fu;

        const s_Overload& o = GET_jZDx3Hiu(path[i], _scope, module, ctx);
        res += qWHAT_QRi0Vh4d(o, module, _scope, ctx);
        if (i < (path.size() - 1))
            res += (": "_fu + humanizeType_4XPtiI5K(o.type, module, ctx));

    };
    return /*NRVO*/ res;
}

static fu_STR explainWhichFn_ysdx7wFu(const s_Target& overload, fu::view<fu_VEC<s_Target>> conversions, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR result = qWHAT_QRi0Vh4d(GET_jZDx3Hiu(overload, _scope, module, ctx), module, _scope, ctx);
    if (EXT_4ZiGP2RI(overload, module, _scope, ctx).args)
    {
        result += "("_fu;
        for (int i = 0; i < EXT_4ZiGP2RI(overload, module, _scope, ctx).args.size(); i++)
        {
            const s_Argument& arg = EXT_4ZiGP2RI(overload, module, _scope, ctx).args[i];
            if (i)
                result += ","_fu;

            result += (((("\n\t    "_fu + qID_HfIK3mvn(human_mnvtGH07(arg.name, module, _scope, ctx))) + ((arg.flags & s_Flags_F_MUSTNAME) ? "!"_fu : fu_STR{})) + (arg.dEfault ? "?: "_fu : ": "_fu)) + (arg.type ? humanizeType_4XPtiI5K(arg.type, module, ctx) : "$"_fu));
            const fu_VEC<s_Target>& c = ((conversions.size() > i) ? conversions[i] : (*(const fu_VEC<s_Target>*)fu::NIL));
            if (c)
                result += ("\n\t        via "_fu + explainConversion_VONhKWTu(c, _scope, module, ctx));

        };
        result += ")"_fu;
    };
    return /*NRVO*/ result;
}

[[noreturn]] static fu::never err_Rq3hz1Lf(fu::view<char> reason, fu::view<char> debug, const s_SolvedNode& callsite, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    BUG_XksxYQ3i(((((debug + " "_fu) + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(callsite.target, _scope, module, ctx), module, _scope, ctx)) + ": "_fu) + reason), _here, ctx);
}

static void test_CallSignature_O9dVnOTh(const s_SolvedNode& callsite, fu::view<char> debug, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    fu::view<s_Argument> host_args = EXT_4ZiGP2RI(callsite.target, module, _scope, ctx).args;
    fu::view<s_SolvedNode> args = callsite.items;
    if ((args.size() == 0) && (GET_jZDx3Hiu(callsite.target, _scope, module, ctx).kind == s_kind_type))
        return;

    if (!(host_args.size() == args.size()))
        err_Rq3hz1Lf((((((x7E((x7E("host_args.len ("_fu, fu::i64dec(host_args.size())) + ") != args.len ("_fu), fu::i64dec(args.size())) + "):"_fu) + "\n\t\t"_fu) + mangleArguments_DBr2lSr4(args, _here, ctx)) + "\n\t\t"_fu) + explainWhichFn_ysdx7wFu(callsite.target, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx)), debug, callsite, _scope, module, ctx, _here);

    for (int i = 0; i < host_args.size(); i++)
    {
        const s_Argument& host_arg = host_args[i];
        const s_SolvedNode& arg = args[i];
        if (!(isAssignableAsArgument_lFwbQ75H(host_arg.type, arg.type, bool{})))
            err_Rq3hz1Lf(((((((x7E("Arg #"_fu, fu::i64dec(i)) + ", "_fu) + qID_HfIK3mvn(human_mnvtGH07(host_arg.name, module, _scope, ctx))) + " not assignable to host_arg: "_fu) + humanizeType_4XPtiI5K(host_arg.type, module, ctx)) + " <- "_fu) + humanizeType_4XPtiI5K(arg.type, module, ctx)), debug, callsite, _scope, module, ctx, _here);

    };
}

static void test_Statements_RxqnLWd4(const s_SolvedNode& block, fu::view<char> debug, const s_TokenIdx& _here, const s_Context& ctx)
{
    fu::view<s_SolvedNode> items = block.items;
    for (int i = 0; i < items.size(); i++)
    {
        const s_SolvedNode& n = items[i];
        if (!(n.kind))
            BUG_XksxYQ3i((x7E((debug + ": No .kind on item["_fu), fu::i64dec(i)) + "]."_fu), _here, ctx);

        if (!((n.kind != s_kind_empty) || ((block.kind == s_kind_block) && (i == (items.size() - 1)))))
            BUG_XksxYQ3i((x7E((x7E((x7E((debug + ": "_fu), str_omkBT2iF(block.kind)) + " has an empty at #"_fu), fu::i64dec(i)) + "/"_fu), fu::i64dec(items.size())) + "."_fu), _here, ctx);

    };
}

static void test_node_YJTaOe1a(const s_SolvedNode& node, fu_STR&& debug, s_TokenIdx& _here, const s_Module& module, const s_Context& ctx, const s_Scope& _scope)
{
    debug += x7E("/"_fu, str_omkBT2iF(node.kind));
    if (node.value)
        debug += (("["_fu + node.value) + "]"_fu);

    test_nodes_6mINb2jy(node.items, debug, _here, module, ctx, _scope);
    _here = node.token;
    if (!(!is_ref_4X1iL0ll(node.type) == !node.type.lifetime))
        BUG_XksxYQ3i(((debug + ": !!ref != !!lt: "_fu) + humanizeType_4XPtiI5K(node.type, module, ctx)), _here, ctx);

    const s_kind k = node.kind;
    if (k == s_kind_call)
        return test_CallSignature_O9dVnOTh(node, debug, module, _scope, ctx, _here);

    if (k == s_kind_let)
    {
        if (!(node.items.size() == 2))
            BUG_XksxYQ3i(x7E("let.items.len: "_fu, fu::i64dec(node.items.size())), _here, ctx);

        if (node.items[0])
            BUG_XksxYQ3i(x7E("let.items[0] not empty: "_fu, str_omkBT2iF(node.items[0].kind)), _here, ctx);

        return;
    };
    if ((k == s_kind_block) || (k == s_kind_and) || (k == s_kind_or) || (k == s_kind_if))
    {
        if ((k == s_kind_and) || (k == s_kind_or))
        {
            if (!(node.items.size() > 1))
                BUG_XksxYQ3i(x7E((debug + ".len: "_fu), fu::i64dec(node.items.size())), _here, ctx);

        };
        if (k == s_kind_if)
        {
            if (!(node.items.size() == 3))
                BUG_XksxYQ3i(x7E((debug + ".len: "_fu), fu::i64dec(node.items.size())), _here, ctx);

        };
        return test_Statements_RxqnLWd4(node, debug, _here, ctx);
    };
}

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
extern const int RELAX_before_bck;
                                #endif

                                #ifndef DEF_unless_oob_kVH8zNR7
                                #define DEF_unless_oob_kVH8zNR7
inline const s_Type& unless_oob_kVH8zNR7(fu::view<s_Type> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Type*)fu::NIL);
}
                                #endif

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
extern const int RELAX_all;
                                #endif

                                #ifndef DEF_grow_if_oob_8ljrs6HU
                                #define DEF_grow_if_oob_8ljrs6HU
inline s_Warning& grow_if_oob_8ljrs6HU(fu_VEC<s_Warning>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void relaxBlockVar_7FYUQCZq(const s_Target& t, const int relax_mask, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    const s_Overload& var = GET_jZDx3Hiu(t, _scope, module, ctx);
    s_Type usage { unless_oob_kVH8zNR7(_current_fn.var_usage, t.index) };
    if (!usage && (relax_mask == RELAX_all))
    {
        if (!(var.flags & s_Flags_F_LAX))
        {
            const s_TokenIdx& token = GET_jZDx3Hiu(t, _scope, module, ctx).solved.token;

            {
                s_Warning& a = grow_if_oob_8ljrs6HU(_warnings, _current_fn.out.target.index);
                if (!(a))
                    a = s_Warning { s_TokenIdx(token), (((("Unused variable: "_fu + qBAD_HfIK3mvn(var.name)) + ": make it "_fu) + qKW_HfIK3mvn("lax"_fu)) + " if this is intentional."_fu) };

            };
        };
        GET_mut_tUm7lURP(t, _scope, module).status |= s_SolverStatus_SS_UNUSED;
    };
    s_Overload& o = GET_mut_tUm7lURP(t, _scope, module);
    try_relax_JgpaSTgQ(o.type, usage, int(relax_mask));

    {
        s_SolvedNode& node = o.solved;
        if (!(node.type))
            BUG_XksxYQ3i("relaxBlockVar: !var.solved.type, can`t propagateType"_fu, _here, ctx);

        try_relax_JgpaSTgQ(node.type, usage, int(relax_mask));
        if (node.items && node.items[LET_INIT])
        {
            s_SolvedNode init {};
            std::swap(init, node.items.mutref(LET_INIT));
            propagateType_EqJduRu0(init, s_Type(node.type), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
            s_Overload& o_1 = GET_mut_tUm7lURP(t, _scope, module);
            s_SolvedNode& node_1 = o_1.solved;
            if (is_ref_4X1iL0ll(node_1.type) && !(node_1.flags & s_Flags_F_ARG))
                node_1.type.lifetime = init.type.lifetime;

            std::swap(init, node_1.items.mutref(LET_INIT));
        };
    };
    s_Overload& o_1 = GET_mut_tUm7lURP(t, _scope, module);
    if (o_1.flags & s_Flags_F_MUT)
    {
        if (is_mutref_4X1iL0ll(usage, _here, ctx))
        {
            s_SolvedNode& node = GET_mut_tUm7lURP(t, _scope, module).solved;
            s_Type type = clear_refs_4X1iL0ll(s_Type(node.type));
            node.type = type;
        }
        else
            o_1.flags &= ~s_Flags_F_MUT;

    };
    s_Overload& o_2 = GET_mut_tUm7lURP(t, _scope, module);
    if (o_2.flags & s_Flags_F_RELAXABLE_REF)
    {
        const s_Flags strip = (s_Flags_F_RELAXABLE_REF | (!is_mutref_4X1iL0ll(usage, _here, ctx) ? s_Flags_F_REF : s_Flags{}));
        o_2.flags &= ~strip;
        o_2.solved.flags &= ~strip;
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

                                #ifndef DEF_only_4VMdwuWd
                                #define DEF_only_4VMdwuWd
inline s_SolvedNode& only_4VMdwuWd(fu::view_mut<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static bool isNested_fQu96G82(const s_Target& target, const s_CurrentFn& _current_fn)
{
    return target.modid == -_current_fn.out.target.index;
}

                                #ifndef DEF_grow_if_oob_wSfQx6D5
                                #define DEF_grow_if_oob_wSfQx6D5
inline s_Type& grow_if_oob_wSfQx6D5(fu_VEC<s_Type>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_min_gcxVH86X
                                #define DEF_min_gcxVH86X
inline int min_gcxVH86X(const int a, const int b)
{
    return ((a <= b) ? a : b);
}
                                #endif

static fu_STR mangleArguments_l2RxMFWg(fu::view<s_SolvedNode> args, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    /*MOV*/ fu_STR mangle {};
    const int REST_END = (use_reorder ? reorder.size() : args.size());
    const int N = min_gcxVH86X(REST_END, REST_START);
    for (int i = 0; i < N; i++)
    {
        if (i)
            mangle += ","_fu;

        const int callsiteIndex = (use_reorder ? reorder[i] : i);
        if ((conversions.size() > i) && conversions[i].size())
            mangle += serializeType_0JOpvc3a(GET_jZDx3Hiu(last_3cih1E88(conversions[i]), _scope, module, ctx).type, "mangle.conv"_fu, _here, ctx);
        else if ((callsiteIndex >= 0) && (callsiteIndex <= args.size()))
            mangle += serializeType_0JOpvc3a(args[callsiteIndex].type, "mangle.no-conv"_fu, _here, ctx);

    };
    if (REST_START < REST_END)
    {
        if (REST_START)
            mangle += ","_fu;

        mangle += serializeType_0JOpvc3a(REST_TYPE, "mangle[Nodes].rest"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

static s_Target trySpecialize_2Jt2Ocmu(const s_Target& overloadIdx, fu::view<s_SolvedNode> args, fu_STR& args_mangled, const int REST_START, const s_Type& REST_TYPE, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Map_w7treiPq& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{

    {
        if (!(args_mangled))
            args_mangled = mangleArguments_l2RxMFWg(args, reorder, use_reorder, conversions, REST_START, REST_TYPE, _scope, module, ctx, _here);

    };
    fu_STR mangle = ((x7E(x7E(fu::i64dec(overloadIdx.modid), "#"_fu), fu::i64dec(overloadIdx.index)) + " "_fu) + args_mangled);
    s_Target _0 {};
    return (_0 = s_Target(get_EQELHV7I(_specs, mangle))) ? _0 : (_0 = doTrySpecialize_lBFu4DhZ(s_Target{}, overloadIdx, args, mangle, reorder, use_reorder, conversions, REST_START, REST_TYPE, _scope, module, ctx, _here, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort)) ? _0 : BUG_XksxYQ3i("doTrySpecialize returns empty target."_fu, _here, ctx);
}

static s_Lifetime Lifetime_replaceArgsAtCallsite_Hrpld0tI(const s_Target& target, fu::view<s_SolvedNode> argNodes, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_Target& _current_fnort, const s_TokenIdx& _here)
{
    s_Lifetime keep {};
    s_Lifetime replace {};
    const s_Lifetime& returned = GET_jZDx3Hiu(target, _scope, module, ctx).type.lifetime;
    for (int i = 0; i < returned.uni0n.size(); i++)
    {
        const s_Region& region = returned.uni0n[i];
        if (Region_isStatic_L0YJBnz6(region))
        {
            keep.uni0n += s_Region(region);
            continue;
        };
        if (Region_isTemp_L0YJBnz6(region))
            BUG_XksxYQ3i(("Lifetime_replaceArgsAtCallsite: found a temp lt in: "_fu + qWHAT_5B1fYWan(GET_jZDx3Hiu(target, _scope, module, ctx).type.lifetime, _current_fnort, module, _scope, ctx)), _here, ctx);

        const s_SolvedNode& argNode = argNodes[Region_toArgPosition_L0YJBnz6(region)];
        s_Lifetime argLt = (is_ref_4X1iL0ll(argNode.type) ? s_Lifetime(argNode.type.lifetime) : Lifetime_temporary_8nlJDPX0());
        replace = Lifetime_union_XJgsWJyN(replace, (argLt ? argLt : BUG_XksxYQ3i("refarg without lifetime"_fu, _here, ctx)));
    };
    return (replace ? (keep ? Lifetime_union_XJgsWJyN(keep, replace) : s_Lifetime(replace)) : s_Lifetime(returned));
}

                                #ifndef DEF_N_RelaxRespec
                                #define DEF_N_RelaxRespec
inline constexpr int N_RelaxRespec = (1 << 14);
                                #endif

static bool isRTL_BBq4Q9Rv(const s_Overload& o)
{
    return !!(o.flags & s_Flags_F_OOE_RTL);
}

inline static void _current_fn_eachArg_BACK_oYFUTTNQ(s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, const int relax_mask, fu_VEC<s_Warning>& _warnings, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    fu_VEC<s_SolvedNode> sig { _current_fn.out.items };
    for (int i = (sig.size() + FN_ARGS_BACK); i-- > 0; )
    {
        const s_Target t { sig[i].target };
        if (t && (GET_jZDx3Hiu(t, _scope, module, ctx).flags & s_Flags_F_ARG))
        {
            relaxBlockVar_7FYUQCZq(t, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
        };
    };
}

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static s_SolvedNode& post_c5v6BVG9(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST);
}

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 3;
                                #endif

static s_SolvedNode& post_cond_XbN1FwVI(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST_COND);
}

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 2;
                                #endif

static s_SolvedNode& body_fkJwKfdI(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_BODY);
}

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline constexpr int LOOP_COND = 1;
                                #endif

static s_SolvedNode& pre_cond_M3c9ypSt(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_COND);
}

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

static s_SolvedNode& init_nry4a4Pu(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_INIT);
}

static s_SolvedNode& recover_RQ0B2sVR(s_SolvedNode& node)
{
    return node.items.mutref(2);
}

static s_SolvedNode& error_fGaswqKP(s_SolvedNode& node)
{
    return node.items.mutref(1);
}

static s_SolvedNode& attempt_vEs1g8m9(s_SolvedNode& node)
{
    return node.items.mutref(0);
}

static void propagateType_EqJduRu0(s_SolvedNode& node, const s_Type& slot, const int relax_mask, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    const s_kind k = node.kind;
    if ((k == s_kind_let) || (k == s_kind_letdef))
    {
        if (!node.target)
            return;

        return relaxBlockVar_7FYUQCZq(node.target, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    };
    const s_TokenIdx here0 { _here };
    _here = node.token;
    fu_DEFER(_here = here0);
    try_relax_JgpaSTgQ(node.type, slot, int(relax_mask));
    s_Type slot_1 { node.type };
    const int LAST = (node.items.size() - 1);
    if (k == s_kind_and)
    {
        s_Type rest { ((is_mutref_4X1iL0ll(slot_1, _here, ctx) && CANNOT_definit_mutrefs) ? slot_1 : t_bool) };
        for (int i = node.items.size(); i-- > 0; )
            propagateType_EqJduRu0(node.items.mutref(i), ((i == LAST) ? slot_1 : rest), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    }
    else if (k == s_kind_or)
    {
        for (int i = node.items.size(); i-- > 0; )
            propagateType_EqJduRu0(node.items.mutref(i), slot_1, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    }
    else if (k == s_kind_if)
    {
        for (int i = node.items.size(); i-- > 0; )
            propagateType_EqJduRu0(node.items.mutref(i), ((i != 0) ? slot_1 : t_bool), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    }
    else if (k == s_kind_call)
    {
        const s_Target t { node.target };
        if (GET_jZDx3Hiu(t, _scope, module, ctx).kind == s_kind_field)
            return propagateType_EqJduRu0(only_4VMdwuWd(node.items), slot_1, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

        if (GET_jZDx3Hiu(t, _scope, module, ctx).kind == s_kind_var)
        {
            if (isNested_fQu96G82(t, _current_fn))
            {
                s_Type& usage = grow_if_oob_wSfQx6D5(_current_fn.var_usage, t.index);
                if (!usage)
                    usage = slot_1;
                else
                {
                    s_Type _0 {};
                    usage = ((_0 = type_tryIntersect_87LkAOV4(usage, slot_1)) ? static_cast<s_Type&&>(_0) : fail_LGxaAyqq((((((qWHAT_QRi0Vh4d(GET_jZDx3Hiu(t, _scope, module, ctx), module, _scope, ctx) + ": Usage intersection failure: `"_fu) + humanizeType_4XPtiI5K(usage, module, ctx)) + "` & `"_fu) + humanizeType_4XPtiI5K(slot_1, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module));
                };
            };
            return;
        };
        if (EXT_4ZiGP2RI(t, module, _scope, ctx).spec_of && is_ref_4X1iL0ll(GET_jZDx3Hiu(t, _scope, module, ctx).type))
        {
            fu_VEC<s_SolvedNode> relaxed {};
            for (int i = 0; i < node.items.size(); i++)
            {
                const s_SolvedNode& orig = node.items[i];
                if (has_Q7J3bwPC(GET_jZDx3Hiu(t, _scope, module, ctx).type.lifetime.uni0n, Region_fromArgPosition_BaKYka79(i)))
                {
                    s_Type type { orig.type };
                    if (try_relax_JgpaSTgQ(type, slot_1, int(relax_mask)))
                    {
                        if (!relaxed)
                            relaxed = fu::slice(node.items, 0, i);

                        relaxed += SolvedNode_MCGNnDLT(s_kind___relaxed, type, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
                        continue;
                    };
                };
                if (relaxed)
                    relaxed += s_SolvedNode(orig);

            };
            if (relaxed)
            {
                fu_STR args_mangled {};
                const s_Target spec = trySpecialize_2Jt2Ocmu(s_Target(EXT_4ZiGP2RI(t, module, _scope, ctx).spec_of), relaxed, args_mangled, relaxed.size(), (*(const s_Type*)fu::NIL), fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx, _here, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
                if (!is_SPECFAIL_2Ym2bj5i(spec) && !(spec == t))
                {
                    checkAssignable_ROonvup6(node.type, GET_jZDx3Hiu(spec, _scope, module, ctx).type, "Relaxed specialization does not return a subtype"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), bool{}, _here, ctx, module, _helpers, _helpers_data, _scope);
                    if (is_ref_4X1iL0ll(node.type))
                        node.type.lifetime = Lifetime_test_EHx9VNGx(Lifetime_replaceArgsAtCallsite_Hrpld0tI(spec, relaxed, _scope, module, ctx, _current_fnort, _here), true, _current_fn, _scope, module, ctx, _here, _current_fnort);

                    node.target = spec;
                    makeNote_6kXvqC8U(N_RelaxRespec, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                };
            };
        };
        if (node.items)
        {
            fu_VEC<s_Argument> host_args { EXT_4ZiGP2RI(node.target, module, _scope, ctx).args };
            const bool rtl = isRTL_BBq4Q9Rv(GET_jZDx3Hiu(node.target, _scope, module, ctx));
            const int N = node.items.size();
            const int start = (rtl ? 0 : (N - 1));
            const int end = (rtl ? int(N) : (0 - 1));
            const int incr = (rtl ? +1 : -1);
            for (int i = start; i != end; i += incr)
                propagateType_EqJduRu0(node.items.mutref(i), s_Type(host_args[i].type), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

        };
    }
    else if ((k == s_kind_int) || (k == s_kind_real) || (k == s_kind_char) || (k == s_kind_str) || (k == s_kind_definit) || (k == s_kind_bool))
    {
    }
    else if ((k == s_kind_typeparam) || (k == s_kind_empty) || (k == s_kind_fndef))
    {
    }
    else if ((k == s_kind_copy) || (k == s_kind_move))
    {
        propagateType_EqJduRu0(only_4VMdwuWd(node.items), ((k == s_kind_copy) ? make_copyable_4X1iL0ll(s_Type(slot_1)) : s_Type(slot_1)), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
        if (!(is_ref_4X1iL0ll(only_O0vxkflG(node.items).type)))
            fail_LGxaAyqq("TODO: Relaxed a copy/move to a value, no point in keeping the outer node."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    }
    else if (k == s_kind_arrlit)
    {
        s_Type itemSlot = clear_sliceable_4X1iL0ll(slot_1, _here, ctx);
        for (int i = 0; i < node.items.size(); i++)
            propagateType_EqJduRu0(node.items.mutref(i), itemSlot, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    }
    else if (k == s_kind_argid)
        propagateType_EqJduRu0(only_4VMdwuWd(node.items), slot_1, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    else if (k == s_kind_jump)
    {
        const s_Helpers h { node.helpers };
        if (!(((void)void(), _helpers_data[h.index]).ret_actual))
            fail_LGxaAyqq("propagateType(jump): h.ret_actual not available."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        propagateType_EqJduRu0(only_4VMdwuWd(node.items), s_Type(((void)void(), _helpers_data[h.index]).ret_actual), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    }
    else if (k == s_kind_block)
    {
        const s_Helpers h { node.helpers };
        try_relax_JgpaSTgQ(((void)void(), _helpers_data.mutref(h.index)).ret_actual, slot_1, int(relax_mask));
        bool isLast = true;
        for (int i = node.items.size(); i-- > 0; )
        {
            s_SolvedNode& node_1 = node.items.mutref(i);
            s_SolvedNode& node_2 = ((node_1.kind == s_kind_defer) ? only_4VMdwuWd(node_1.items) : node_1);
            propagateType_EqJduRu0(node_2, (isLast ? ((void)(isLast = false), slot_1) : t_void), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
        };
        if (((void)void(), _helpers_data[h.index]).target == _current_fn.out.target)
            _current_fn_eachArg_BACK_oYFUTTNQ(_current_fn, _scope, module, ctx, relax_mask, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    }
    else if (k == s_kind_loop)
    {
        if (post_c5v6BVG9(node))
            propagateType_EqJduRu0(post_c5v6BVG9(node), t_void, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

        if (post_cond_XbN1FwVI(node))
            propagateType_EqJduRu0(post_cond_XbN1FwVI(node), t_bool, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

        if (body_fkJwKfdI(node))
            propagateType_EqJduRu0(body_fkJwKfdI(node), t_void, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

        if (pre_cond_M3c9ypSt(node))
            propagateType_EqJduRu0(pre_cond_M3c9ypSt(node), t_bool, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

        if (init_nry4a4Pu(node))
            propagateType_EqJduRu0(init_nry4a4Pu(node), t_void, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    }
    else if (k == s_kind_try)
    {
        propagateType_EqJduRu0(recover_RQ0B2sVR(node), t_void, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
        propagateType_EqJduRu0(error_fGaswqKP(node), t_string, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
        propagateType_EqJduRu0(attempt_vEs1g8m9(node), t_void, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    }
    else if (k == s_kind_root)
    {
    }
    else if (k == s_kind_pragma)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            s_SolvedNode* _1;
            (_1 = &(node.items.mutref(i)), propagateType_EqJduRu0(*_1, node.items[i].type, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort));
        };
    }
    else
        fail_LGxaAyqq((x7E("TODO: propagateType("_fu, str_omkBT2iF(k)) + ")."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

}

static s_Flow& flow_uoEPCcDC(s_CurrentFn& _current_fn)
{
    return _current_fn.flow;
}

inline static void _current_fn_eachArg_FWD_N0PwkfoG(s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    fu_VEC<s_SolvedNode> sig { _current_fn.out.items };
    for (int i = 0; i < (sig.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = sig[i].target;
        if (t && (GET_jZDx3Hiu(t, _scope, module, ctx).flags & s_Flags_F_ARG))
        {
            Reference_trackArgument_xxHEkKJS(flow_uoEPCcDC(_current_fn), int(t.index), i, _here, ctx);
        };
    };
}

static fu_VEC<s_SolvedNode>& args_BlvNFcrl(s_SolvedNode& callsite)
{
    return callsite.items;
}

static s_Target& target_0KxDYEhT(s_SolvedNode& callsite)
{
    return callsite.target;
}

                                #ifndef DEF_grow_oob_msuOMRke
                                #define DEF_grow_oob_msuOMRke
inline int& grow_oob_msuOMRke(fu_VEC<int>& a, const int i, const int fill)
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

                                #ifndef DEF_if_first_LwTZBrda
                                #define DEF_if_first_LwTZBrda
inline const s_Region& if_first_LwTZBrda(fu::view<s_Region> s)
{
    return s.size() ? s[0] : (*(const s_Region*)fu::NIL);
}
                                #endif

static s_Lifetime Lifetime_unwind_noStatic_avpFfOiE(s_Lifetime&& lifetime, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (Region_isStatic_L0YJBnz6(if_first_LwTZBrda(lifetime.uni0n)))
        lifetime.uni0n.shift();

    return Lifetime_unwind_lchWAqUg(s_Lifetime(lifetime), 0, _current_fnort, module, _scope, ctx, _here);
}

static bool acceptsTempCopies_OEj5lzeU(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (o.kind == s_kind_var) && !(o.flags & (s_Flags_F_IMPLICIT | s_Flags_F_REF)) && !is_mutref_4X1iL0ll(o.type, _here, ctx);
}

static bool acceptsSoftRisk_J0rvRgjW(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (o.flags & s_Flags_F_ARG) && !acceptsTempCopies_OEj5lzeU(o, _here, ctx);
}

                                #ifndef DEF_grow_if_oob_eq5Lu6Hw
                                #define DEF_grow_if_oob_eq5Lu6Hw
inline fu_VEC<int>& grow_if_oob_eq5Lu6Hw(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_add_itJnJlI8
                                #define DEF_add_itJnJlI8
inline bool add_itJnJlI8(fu_VEC<int>& keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_yxV5QT4l(keys[i], item);
        if (cmp == 0)
        {
            return false;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, int(item));
    return true;
}
                                #endif

                                #ifndef DEF_unless_oob_0EYwFJPW
                                #define DEF_unless_oob_0EYwFJPW
inline const fu_VEC<int>& unless_oob_0EYwFJPW(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

static bool RESOLVE_byAAR_JG77Ls6t(const int read, const int write, const bool trySoft, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, s_CurrentFn& _current_fn)
{
    if (!(AAR))
        BUG_XksxYQ3i(fu_STR{}, _here, ctx);

    if (!(read != write))
        BUG_XksxYQ3i("RESOLVE_byAAR: read == write"_fu, _here, ctx);

    if ((!trySoft || !acceptsSoftRisk_J0rvRgjW(GET_jZDx3Hiu(nested_RjaTwNl9(read, _current_fnort, module), _scope, module, ctx), _here, ctx)) && !add_itJnJlI8(grow_if_oob_eq5Lu6Hw(_current_fn.flow.at_hard_risk, write), read))
        return true;

    if (!add_itJnJlI8(grow_if_oob_eq5Lu6Hw(_current_fn.flow.at_soft_risk, write), read))
        return true;

    const bool firstTry_to_ascendWrites = (write > read);
    for (int i = 0; i < 2; i++)
    {
        if (!i == firstTry_to_ascendWrites)
        {
            fu_VEC<int> parents { unless_oob_0EYwFJPW(_current_fn.flow.arg_parents, write) };
            if (parents)
            {
                for (int i_1 = 0; i_1 < parents.size(); i_1++)
                {
                    const int parent = parents[i_1];
                    if (parent != read)
                        RESOLVE_byAAR_JG77Ls6t(read, parent, trySoft, AAR, _here, ctx, _current_fnort, module, _scope, _current_fn);

                };
                return true;
            };
        }
        else
        {
            fu_VEC<int> parents { unless_oob_0EYwFJPW(_current_fn.flow.arg_parents, read) };
            if (parents)
            {
                for (int i_1 = 0; i_1 < parents.size(); i_1++)
                {
                    const int parent = parents[i_1];
                    if (parent != write)
                        RESOLVE_byAAR_JG77Ls6t(parent, write, false, AAR, _here, ctx, _current_fnort, module, _scope, _current_fn);

                };
                return true;
            };
        };
    };
    return true;
}

static bool softRiskSafe_8ts3Kcd3(const s_SolvedNode& arg, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return (arg.kind == s_kind_call) && (GET_jZDx3Hiu(arg.target, _scope, module, ctx).kind == s_kind_var);
}

                                #ifndef DEF_unless_oob_4Cjh8wBB
                                #define DEF_unless_oob_4Cjh8wBB
inline const fu_VEC<int>& unless_oob_4Cjh8wBB(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

                                #ifndef DEF_has_inter_NbZ6E9Ai
                                #define DEF_has_inter_NbZ6E9Ai
inline bool has_inter_NbZ6E9Ai(fu::view<int> l, fu::view<int> r)
{

    { {
        int li = 0;
        int ri = 0;
        for (; ; )
        {
            const bool l_done = (li == l.size());
            const bool r_done = (ri == r.size());
            fu::never BL_4_v {};
            const int cmp = (l_done ? (r_done ? (__extension__ (
            {
                goto BL_1;
            (void)0;}), static_cast<fu::never&&>(BL_4_v)) : +1) : (r_done ? -1 : x3Cx3E_gcxVH86X(l[li], r[ri])));
            if (cmp == 0)
            {
                [[maybe_unused]] const int _ = l[li];
                return true;
            }
            else if (cmp < 0)
            {

                {
                    [[maybe_unused]] const int _ = l[li];
                };
                li++;
            }
            else
            {

                {
                    [[maybe_unused]] const int _ = r[ri];
                };
                ri++;
            };
        };
      } BL_1:;
    };
    return false;
}
                                #endif

static bool isInvalidatedBy_wFYa9brm(fu::view<s_Region> read, fu::view<s_Region> write, s_CurrentFn& _current_fn)
{
    fu::view<int> read_1 = fu::view_of(read, int{});

    {
        for (int i = 0; i < write.size(); i++)
        {
            const int w = Region_asLocal_L0YJBnz6(write[i]);
            if (w && has_inter_NbZ6E9Ai(unless_oob_4Cjh8wBB(flow_uoEPCcDC(_current_fn).invalidates, w), read_1))
                return true;

        };
    };
    return false;
}

                                #ifndef DEF_N_BckSoftRisk
                                #define DEF_N_BckSoftRisk
inline constexpr int N_BckSoftRisk = (1 << 15);
                                #endif

static bool RESOLVE_byMutvar_0EBpQkFp(const int target, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope)
{
    if (AAR)
        BUG_XksxYQ3i(fu_STR{}, _here, ctx);

    const s_Target t = nested_RjaTwNl9(target, _current_fnort, module);
    s_Overload& o = GET_mut_tUm7lURP(t, _scope, module);
    if (!acceptsTempCopies_OEj5lzeU(o, _here, ctx))
        return false;

    if (is_mutref_4X1iL0ll(o.type, _here, ctx))
        BUG_XksxYQ3i(((qWHAT_QRi0Vh4d(o, module, _scope, ctx) + ": Not F_REF but type.is_mutref"_fu) + " in RESOLVE_byMutvar: is this a problem?"_fu), _here, ctx);

    if (!(o.kind == s_kind_var))
        BUG_XksxYQ3i("RESOLVE_byMutvar: Not a variable."_fu, _here, ctx);

    if (!(o.type.lifetime.uni0n.size() == 1))
        BUG_XksxYQ3i("RESOLVE_byMutvar: lt.len != 1"_fu, _here, ctx);

    if (!is_rx_copy_4X1iL0ll(o.type))
        return false;

    if (!(o.flags & s_Flags_F_MUT))
    {
        o.flags |= s_Flags_F_MUT;
        s_Type t_let = clear_refs_4X1iL0ll(s_Type(o.type));
        o.solved.type = t_let;
    };
    return true;
}

static bool RESOLVE_byMutvar_qHnKiJy2(const s_Target& target, const s_CurrentFn& _current_fn, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope)
{
    return (target.modid == -_current_fn.out.target.index) && RESOLVE_byMutvar_0EBpQkFp(target.index, AAR, _here, ctx, _current_fnort, module, _scope);
}

static bool acceptsTempCopies_rh2gco0Y(const s_Argument& arg)
{
    return !(arg.flags & (s_Flags_F_IMPLICIT | s_Flags_F_REF));
}

static s_SolvedNode createBool_ix8GgRVt(const fu_STR& value, const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!((value == "true"_fu) || (value == "false"_fu)))
        BUG_XksxYQ3i(fu_STR{}, _here, ctx);

    return SolvedNode_MCGNnDLT(s_kind_bool, type, s_Flags{}, value, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode createDefinit_kvd8QG0n(s_Type&& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (is_ref_4X1iL0ll(type))
        type.lifetime = Lifetime_static_8nlJDPX0();

    if (is_integral_CbRwLCm2(type))
        return SolvedNode_MCGNnDLT(s_kind_int, type, s_Flags{}, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);

    if (is_floating_pt_CbRwLCm2(type))
        return SolvedNode_MCGNnDLT(s_kind_real, type, s_Flags{}, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);

    if (is_boolean_CbRwLCm2(type))
        return createBool_ix8GgRVt("false"_fu, type, _here, ctx);

    return SolvedNode_MCGNnDLT(s_kind_definit, type, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
}

static void definitWrap_5OzdzBUU(s_SolvedNode& node, const s_Type& slot, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    if (is_mutref_4X1iL0ll(slot, _here, ctx) && CANNOT_definit_mutrefs)
        BUG_XksxYQ3i("Trying to definitWrap a mutref."_fu, _here, ctx);

    if (node.kind == s_kind_definit)
        node.type = (is_ref_4X1iL0ll(slot) ? add_ref_HFjykOs8(clear_refs_4X1iL0ll(s_Type(slot)), Lifetime_static_8nlJDPX0(), _here, ctx) : s_Type(slot));
    else
        node = createBlock_ZRqsU458(slot, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(node), createDefinit_kvd8QG0n(s_Type(slot), _here, ctx) } }, s_Helpers{}, _here, _helpers, _helpers_data, _scope, module);

}

static bool isRefArg_JehCORil(const s_Overload& o)
{
    return (o.flags & s_Flags_F_ARG) && (o.kind == s_kind_var) && is_ref_4X1iL0ll(o.solved.type);
}

static int Lifetime_vs_WQFr5kXi(const s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    bool neg = false;
    bool pos = false;
    fu::view<s_Region> r = lifetime.uni0n;
    for (int i = 0; (i < r.size()) && !(pos ? neg : (*(const bool*)fu::NIL)); i++)
    {
        const s_Region& r_1 = r[i];
        if (Region_toLocal_L0YJBnz6(r_1) < locals_start)
            neg = true;
        else if (Region_isTemp_L0YJBnz6(r_1))
            pos = true;
        else if (isRefArg_JehCORil(Region_GET_3F6RJQUc(r_1, _current_fnort, module, _scope, ctx)))
            neg = true;
        else
            pos = true;

    };
    return ((neg == pos) ? 0 : (neg ? -1 : +1));
}

inline static void Lifetime_each_TELg52UB(const s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;

        if (Region_isTemp_L0YJBnz6(r))
            continue;

        s_Overload& o = GET_mut_tUm7lURP(nested_RjaTwNl9(Region_toLocal_L0YJBnz6(r), _current_fnort, module), _scope, module);
        if (o.flags & s_Flags_F_MOVED_FROM)
            continue;

        o.flags |= s_Flags_F_MOVED_FROM;
        const s_Type& init = Lifetime_climbType_6Fvnddw1(o, module, _scope, ctx, _here);
        if (is_ref_4X1iL0ll(init))
            Lifetime_F_MOVED_FROM_wcmK7wrf(s_Lifetime(init.lifetime), _current_fnort, module, _scope, ctx, _here);

    };
}

static void Lifetime_F_MOVED_FROM_wcmK7wrf(const s_Lifetime& lifetime, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    Lifetime_each_TELg52UB(lifetime, 0, _current_fnort, module, _scope, ctx, _here);
}

static s_SolvedNode createMove_0NilXb6m(const s_SolvedNode& node, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    Lifetime_F_MOVED_FROM_wcmK7wrf(node.type.lifetime, _current_fnort, module, _scope, ctx, _here);
    return SolvedNode_MCGNnDLT(s_kind_move, clear_refs_4X1iL0ll(s_Type(node.type)), s_Flags{}, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, s_Helpers{}, _here);
}

                                #ifndef DEF_N_NonTrivAutoCopy
                                #define DEF_N_NonTrivAutoCopy
inline constexpr int N_NonTrivAutoCopy = (1 << 13);
                                #endif

static s_SolvedNode createCopy_XZmHxRKG(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Options& options, int& _notes)
{
    if (!is_rx_copy_4X1iL0ll(node.type))
        fail_LGxaAyqq(("Needs an explicit STEAL or CLONE: "_fu + humanizeType_4XPtiI5K(node.type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!is_trivial_K61azC5I(node.type, module, ctx))
    {
        if (!(USE_nontriv_autocopy))
            fail_LGxaAyqq("Non-trivial implicit copy."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        makeNote_6kXvqC8U(N_NonTrivAutoCopy, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    };
    return SolvedNode_MCGNnDLT(s_kind_copy, clear_refs_4X1iL0ll(s_Type(node.type)), s_Flags{}, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, s_Helpers{}, _here);
}

static void maybeCopyOrMove_h0I9nmtY(s_SolvedNode& node, const s_Type& slot, const bool isArgument, const bool isReturn, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fnort, const s_Options& options, int& _notes)
{
    if ((slot.vtype.canon != node.type.vtype.canon) && !is_never_4X1iL0ll(node.type))
    {
        if (is_zeroes_4X1iL0ll(node.type) && !(is_mutref_4X1iL0ll(slot, _here, ctx) ? CANNOT_definit_mutrefs : (*(const bool*)fu::NIL)))
        {
            definitWrap_5OzdzBUU(node, slot, _here, ctx, _helpers, _helpers_data, _scope, module);
            return;
        }
        else
            BUG_XksxYQ3i(((("Considering copy or move for incompatible types: "_fu + humanizeType_4XPtiI5K(slot, module, ctx)) + " <- "_fu) + humanizeType_4XPtiI5K(node.type, module, ctx)), _here, ctx);

    };
    if (is_ref_4X1iL0ll(slot))
    {
        if (is_trivial_K61azC5I(node.type, module, ctx))
        {
            if ((node.kind == s_kind_definit) && isArgument)
                node.type = clear_refs_4X1iL0ll(s_Type(node.type));

        };
        return;
    };
    if (!is_ref_4X1iL0ll(node.type))
        return;

    if (node.kind == s_kind_definit)
    {
        node.type = clear_refs_4X1iL0ll(s_Type(node.type));
        return;
    };
    if (is_zeroes_4X1iL0ll(node.type))
    {
        definitWrap_5OzdzBUU(node, slot, _here, ctx, _helpers, _helpers_data, _scope, module);
        return;
    };
    s_Lifetime _0 {};
    const bool canMove = (isReturn && ((_0 = Lifetime_unwind_lchWAqUg(s_Lifetime(node.type.lifetime), 0, _current_fnort, module, _scope, ctx, _here), Lifetime_vs_WQFr5kXi(static_cast<s_Lifetime&&>(_0), 0, _current_fnort, module, _scope, ctx)) > 0));
    node = (canMove ? createMove_0NilXb6m(node, _current_fnort, module, _scope, ctx, _here) : createCopy_XZmHxRKG(node, module, ctx, _here, _helpers, _helpers_data, _scope, options, _notes));
}

static bool RESOLVE_byTempCopy_WLbj7aqx(s_SolvedNode& node, const s_Type& slot, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fnort, const s_Options& options, int& _notes)
{
    s_Type slot_1 = make_copyable_4X1iL0ll(clear_refs_4X1iL0ll(s_Type(slot)));
    maybeCopyOrMove_h0I9nmtY(node, slot_1, false, false, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, options, _notes);
    return true;
}

static bool RESOLVE_byTempCopy_afobWswg(s_SolvedNode& callsite, const int position, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    if (AAR)
        BUG_XksxYQ3i(fu_STR{}, _here, ctx);

    const s_Target& target = callsite.target;
    fu_VEC<s_Argument> host_args { EXT_4ZiGP2RI(target, module, _scope, ctx).args };
    s_Argument host_arg { host_args[position] };
    const s_SolvedNode& arg = callsite.items[position];
    if (!is_rx_copy_4X1iL0ll(arg.type))
        return false;

    if ((arg.kind == s_kind_call) && RESOLVE_byMutvar_qHnKiJy2(arg.target, _current_fn, AAR, _here, ctx, _current_fnort, module, _scope))
        return true;

    if (!acceptsTempCopies_rh2gco0Y(host_arg))
        return false;

    const s_Region argLt = Region_fromArgPosition_BaKYka79(position);
    const bool isReturned = has_Q7J3bwPC(GET_jZDx3Hiu(target, _scope, module, ctx).type.lifetime.uni0n, argLt);
    if (isReturned)
        return false;

    return RESOLVE_byTempCopy_WLbj7aqx(callsite.items.mutref(position), host_args[position].type, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, options, _notes);
}

                                #ifndef DEF_DEV_DisableBCK
                                #define DEF_DEV_DisableBCK
inline constexpr unsigned DEV_DisableBCK = (0x1u << 0u);
                                #endif

[[noreturn]] static fu::never AAR_cannotFail_LZ0fEAUt(const fu_STR& reason, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (AAR)
        BUG_XksxYQ3i(("AAR PASS is trying to emit an error:\n\n\t"_fu + reason), _here, ctx);
    else
        fail_LGxaAyqq(fu_STR(reason), _here, ctx, _helpers, _helpers_data, _scope, module);

}

static void validate_W3yTDWqH(const int i1, fu::view<s_Argument> host_args, const s_Argument& host_arg0, const int i0, s_SolvedNode& callsite, const bool AAR, const int arg_first, const int arg_last, const s_Lifetime& shallow0, s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu::view<s_Lifetime> bck_unwound, const s_Lifetime& unwound0, const s_SolvedNode& arg0, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, int& _notes)
{
    const s_Argument& host_arg1 = host_args[i1];
    if (!has_ur5UoMYg(host_arg0.soft_risk, i1) && !has_ur5UoMYg(host_arg1.soft_risk, i0))
        return;

    const s_SolvedNode& arg1 = args_BlvNFcrl(callsite)[i1];
    const s_Lifetime& shallow1 = arg1.type.lifetime;
    if (AAR)
    {
        if ((i0 >= arg_first) && (i0 <= arg_last) && (i1 >= arg_first) && (i1 <= arg_last))
        {
            for (int r0 = 0; r0 < shallow0.uni0n.size(); r0++)
            {
                const int region0 = Region_asLocal_L0YJBnz6(shallow0.uni0n[r0]);
                if (region0)
                {
                    for (int r1 = 0; r1 < shallow1.uni0n.size(); r1++)
                    {
                        const int region1 = Region_asLocal_L0YJBnz6(shallow1.uni0n[r1]);
                        if (region1 && (region0 != region1))
                        {
                            if (is_mutref_4X1iL0ll(host_arg0.type, _here, ctx))
                                RESOLVE_byAAR_JG77Ls6t(region1, region0, !has_ur5UoMYg(host_arg0.hard_risk, i1), AAR, _here, ctx, _current_fnort, module, _scope, _current_fn);

                            if (is_mutref_4X1iL0ll(host_arg1.type, _here, ctx))
                                RESOLVE_byAAR_JG77Ls6t(region0, region1, !has_ur5UoMYg(host_arg1.hard_risk, i0), AAR, _here, ctx, _current_fnort, module, _scope, _current_fn);

                        };
                    };
                };
            };
        };
        return;
    };
    const s_Lifetime& unwound1 = bck_unwound[i1];
    s_Lifetime inter = Lifetime_inter_XJgsWJyN(unwound0, unwound1);
    if (!inter)
        return;

    if (!has_ur5UoMYg(host_arg0.hard_risk, i1) && !has_ur5UoMYg(host_arg1.hard_risk, i0))
    {
        if ((!has_ur5UoMYg(host_arg0.soft_risk, i1) || (softRiskSafe_8ts3Kcd3(arg1, _scope, module, ctx) && !isInvalidatedBy_wFYa9brm(shallow1.uni0n, shallow0.uni0n, _current_fn))) && (!has_ur5UoMYg(host_arg1.soft_risk, i0) || (softRiskSafe_8ts3Kcd3(arg0, _scope, module, ctx) && !isInvalidatedBy_wFYa9brm(shallow0.uni0n, shallow1.uni0n, _current_fn))))
            return makeNote_6kXvqC8U(N_BckSoftRisk, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

    };

    {
        int which = -1;
        if (!is_mutref_4X1iL0ll(host_arg0.type, _here, ctx))
            which = i0;
        else if (!is_mutref_4X1iL0ll(host_arg1.type, _here, ctx))
            which = i1;

        if ((which >= 0))
        {
            if (RESOLVE_byTempCopy_afobWswg(callsite, which, AAR, _here, ctx, module, _scope, _current_fn, _current_fnort, _helpers, _helpers_data, options, _notes))
                return;

        };
    };
    if (!(options.dev & DEV_DisableBCK))
    {
        fu_STR err = qWHAT_QRi0Vh4d(GET_jZDx3Hiu(target_0KxDYEhT(callsite), _scope, module, ctx), module, _scope, ctx);
        err += (((host_args.size() == 2) && (GET_jZDx3Hiu(target_0KxDYEhT(callsite), _scope, module, ctx).flags & s_Flags_F_OPERATOR)) ? ": Both operands alias:\n"_fu : (x7E((x7E(((((": Arguments "_fu + qBAD_HfIK3mvn(human_mnvtGH07(host_arg0.name, module, _scope, ctx))) + " and "_fu) + qBAD_HfIK3mvn(human_mnvtGH07(host_arg1.name, module, _scope, ctx))) + " (args #"_fu), fu::i64dec(i0)) + " and #"_fu), fu::i64dec(i1)) + ") both alias:\n"_fu));
        for (int i = 0; i < inter.uni0n.size(); i++)
        {
            const s_Region& o = inter.uni0n[i];
            err += "\n                "_fu;
            err += qWHAT_QRi0Vh4d(Region_GET_3F6RJQUc(o, _current_fnort, module, _scope, ctx), module, _scope, ctx);
        };
        _here = args_BlvNFcrl(callsite)[i0].token;
        AAR_cannotFail_LZ0fEAUt(err, AAR, _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

                                #ifndef DEF_x3Cx3E_rTrxLeOF
                                #define DEF_x3Cx3E_rTrxLeOF
inline int x3Cx3E_rTrxLeOF(const s_Region& a, const s_Region& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_gcxVH86X(a.index, b.index);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_add_ZpSCtOAr
                                #define DEF_add_ZpSCtOAr
inline void add_ZpSCtOAr(fu_VEC<s_Region>& a, fu::view<s_Region> b, fu_VEC<int>& extras, const int extra)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        const int cmp = x3Cx3E_rTrxLeOF(X, Y);
        if ((cmp >= 0))
        {
            if (cmp != 0)
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

static s_Events& events_qbb0GbjD(s_CurrentFn& _current_fn)
{
    return _current_fn.events;
}

                                #ifndef DEF_unless_oob_6xtst5Ay
                                #define DEF_unless_oob_6xtst5Ay
inline const s_ReadID& unless_oob_6xtst5Ay(fu::view<s_ReadID> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_ReadID*)fu::NIL);
}
                                #endif

static fu_STR bck_name_P25nOtjd(const int target, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return human_mnvtGH07(GET_jZDx3Hiu(nested_RjaTwNl9(target, _current_fnort, module), _scope, module, ctx).name, module, _scope, ctx);
}

inline static s_SolvedNode TODO_FIX_pop_CvNirHuD(fu_VEC<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

inline static void SLOW_traverse_gUEkW0LV(const s_SolvedNode& node, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_ReadID& read, s_SolvedNode& result)
{
    fu_VEC<s_SolvedNode> stack = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
    while (stack)
    {
        s_SolvedNode node_1 = TODO_FIX_pop_CvNirHuD(stack);
        const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_jZDx3Hiu(node_1.target, _scope, module, ctx).solved : node_1);

        {
            if (((void)void(), ((node_2.rwr.reads0 < read.id) && (node_2.rwr.reads1 >= read.id))))
                result = node_2;

        };
        for (int i = node_2.items.size(); i-- > 0; )
            stack += s_SolvedNode(node_2.items[i]);

    };
}

inline static s_SolvedNode SLOW_find_Jwn20POr(const s_SolvedNode& root, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_ReadID& read)
{
    /*MOV*/ s_SolvedNode result {};
    SLOW_traverse_gUEkW0LV(root, _scope, module, ctx, read, result);
    return /*NRVO*/ result;
}

static s_SolvedNode SLOW_findByReadID_xVrfIOTK(const s_ReadID& read, const s_SolvedNode& root, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return SLOW_find_Jwn20POr(root, _scope, module, ctx, read);
}

                                #ifndef DEF_grow_if_oob_5pq9AIKO
                                #define DEF_grow_if_oob_5pq9AIKO
inline fu_VEC<s_WriteID>& grow_if_oob_5pq9AIKO(fu_VEC<fu_VEC<s_WriteID>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_each_pkuQ8r5s
                                #define DEF_each_pkuQ8r5s
inline void each_pkuQ8r5s(fu::view<int> a, s_CurrentFn& _current_fn)
{
    for (int i = 0; i < a.size(); i++)
        tagWritten_K3r2E2AN(a[i], _current_fn);

}
                                #endif

static void tagWritten_K3r2E2AN(const int target, s_CurrentFn& _current_fn)
{
    if (add_once_sDUBjUzV(events_qbb0GbjD(_current_fn).ever_written, target))
        each_pkuQ8r5s(fu_VEC<int>(unless_oob_0EYwFJPW(flow_uoEPCcDC(_current_fn).parents, target)), _current_fn);

}

static void bck_trackWrites_WG0cZbCf(const s_SolvedNode& callsite, fu::view<s_Region> regions, fu::view<int> positions, s_TokenIdx& _here, s_CurrentFn& _current_fn, const bool AAR, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_SolvedNode& root, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    _here = callsite.token;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target = Region_asLocal_L0YJBnz6(regions[i]);
        if (!target)
            continue;

        const int position = positions[i];
        fu_VEC<int> invalidates { unless_oob_0EYwFJPW(flow_uoEPCcDC(_current_fn).invalidates, target) };
        if (events_qbb0GbjD(_current_fn).used_in_a_loop)
        {
            for (int i_1 = 0; i_1 < invalidates.size(); i_1++)
            {
                const int read = invalidates[i_1];
                const s_ReadID& readID = unless_oob_6xtst5Ay(events_qbb0GbjD(_current_fn).used_in_a_loop, read);
                if (readID)
                {
                    if (AAR)
                        RESOLVE_byAAR_JG77Ls6t(read, target, true, AAR, _here, ctx, _current_fnort, module, _scope, _current_fn);
                    else
                    {
                        if (!(RESOLVE_byMutvar_0EBpQkFp(read, AAR, _here, ctx, _current_fnort, module, _scope)))
                        {
                            fu_STR _0 {};
                            fu_STR _1 {};
                            (_1 = (_0 = (((((((("Write to "_fu + qBAD_HfIK3mvn(bck_name_P25nOtjd(target, _current_fnort, module, _scope, ctx))) + " at call to "_fu) + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(callsite.target, _scope, module, ctx), module, _scope, ctx)) + " invalidates the use of "_fu) + qBAD_HfIK3mvn(bck_name_P25nOtjd(read, _current_fnort, module, _scope, ctx))) + " at "_fu) + addr_and_snippet_QQXUwtFS(SLOW_findByReadID_xVrfIOTK(readID, root, _scope, module, ctx).token, ctx, module)) + "\n\t... on next loop iteration.\n\n\tWritten"_fu), (static_cast<fu_STR&&>(_0) + qSTACK_TlDJltqj(callsite.target, position, fu::view<s_Target>{}, module, _scope, ctx, _here))), AAR_cannotFail_LZ0fEAUt(static_cast<fu_STR&&>(_1), AAR, _here, ctx, _helpers, _helpers_data, _scope, module));
                        };
                    };
                };
            };
        };
        events_qbb0GbjD(_current_fn).writes += s_RWEvent { int(target) };
        const s_WriteID writeID = s_WriteID { events_qbb0GbjD(_current_fn).writes.size() };
        for (int i_1 = 0; i_1 < invalidates.size(); i_1++)
        {
            fu_VEC<s_WriteID>& set = grow_if_oob_5pq9AIKO(events_qbb0GbjD(_current_fn).snap.invalidated_by, invalidates[i_1]);
            if (!OPTI_bck || AAR || !set)
                set += s_WriteID(writeID);

        };
        tagWritten_K3r2E2AN(target, _current_fn);
    };
}

static s_RWEvent& RWEvent_E66WAX2c(const s_WriteID& write, s_CurrentFn& _current_fn)
{
    return _current_fn.events.writes.mutref((write.id - 1));
}

                                #ifndef DEF_add_ugaNarsz
                                #define DEF_add_ugaNarsz
inline void add_ugaNarsz(fu_VEC<s_Region>& a, fu::view<s_Region> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        const int cmp = x3Cx3E_rTrxLeOF(X, Y);
        if ((cmp >= 0))
        {
            if (cmp != 0)
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

                                #ifndef DEF_has_inter_Dny7p6dG
                                #define DEF_has_inter_Dny7p6dG
inline bool has_inter_Dny7p6dG(fu::view<s_Region> l, fu::view<s_Region> r)
{

    { {
        int li = 0;
        int ri = 0;
        for (; ; )
        {
            const bool l_done = (li == l.size());
            const bool r_done = (ri == r.size());
            fu::never BL_4_v {};
            const int cmp = (l_done ? (r_done ? (__extension__ (
            {
                goto BL_1;
            (void)0;}), static_cast<fu::never&&>(BL_4_v)) : +1) : (r_done ? -1 : x3Cx3E_rTrxLeOF(l[li], r[ri])));
            if (cmp == 0)
            {
                [[maybe_unused]] const s_Region& _ = l[li];
                return true;
            }
            else if (cmp < 0)
            {

                {
                    [[maybe_unused]] const s_Region& _ = l[li];
                };
                li++;
            }
            else
            {

                {
                    [[maybe_unused]] const s_Region& _ = r[ri];
                };
                ri++;
            };
        };
      } BL_1:;
    };
    return false;
}
                                #endif

inline static void merge_kOxlTG3g(fu::view<s_Region> l, fu::view<s_Region> r, bool& useResult, fu_VEC<s_Region>& result, const fu_VEC<s_Region>& l_1)
{
    int li = 0;
    int ri = 0;
    for (; ; )
    {
        const bool l_done = (li == l.size());
        const bool r_done = (ri == r.size());
        fu::never BL_3_v {};
        const int cmp = (l_done ? (r_done ? (__extension__ (
        {
            return;
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : +1) : (r_done ? -1 : x3Cx3E_rTrxLeOF(l[li], r[ri])));
        if (cmp == 0)
        {

            {
                const s_Region& item = l[li];
                if (useResult)
                    result += s_Region(item);

            };
            li++;
            ri++;
        }
        else if (cmp < 0)
        {

            {
                [[maybe_unused]] const s_Region& _ = l[li];
                if (!useResult)
                {
                    useResult = true;
                    result = fu::slice(l_1, 0, li);
                };
            };
            li++;
        }
        else
        {

            {
                [[maybe_unused]] const s_Region& _ = r[ri];
            };
            ri++;
        };
    };
}

                                #ifndef DEF_inter_Dny7p6dG
                                #define DEF_inter_Dny7p6dG
inline fu_VEC<s_Region> inter_Dny7p6dG(const fu_VEC<s_Region>& l, const fu_VEC<s_Region>& r)
{
    if (r.size() < l.size())
        return inter_Dny7p6dG(r, l);

    fu_VEC<s_Region> result {};
    bool useResult = false;
    merge_kOxlTG3g(l, r, useResult, result, l);
    return fu_VEC<s_Region>((useResult ? result : l));
}
                                #endif

static bool RESOLVE_byAAR_NxplUKhm(const int write, fu::view<s_Region> reads, const bool trySoft, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, s_CurrentFn& _current_fn)
{
    for (int r = 0; r < reads.size(); r++)
    {
        const int read = Region_asLocal_L0YJBnz6(reads[r]);
        if (read && (read != write))
            RESOLVE_byAAR_JG77Ls6t(read, write, trySoft, AAR, _here, ctx, _current_fnort, module, _scope, _current_fn);

    };
    return true;
}

                                #ifndef DEF_first_LwTZBrda
                                #define DEF_first_LwTZBrda
inline const s_Region& first_LwTZBrda(fu::view<s_Region> s)
{
    return (s.size() ? s[0] : fu::fail("len == 0"_fu));
}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_jPzBP71A(fu_VEC<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

inline static void SLOW_traverse_xxhglNlk(const s_SolvedNode& node, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_WriteID& write, s_SolvedNode& result)
{
    fu_VEC<s_SolvedNode> stack = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
    while (stack)
    {
        s_SolvedNode node_1 = TODO_FIX_pop_jPzBP71A(stack);
        const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_jZDx3Hiu(node_1.target, _scope, module, ctx).solved : node_1);

        {
            if (((void)void(), ((node_2.rwr.writes0 < write.id) && (node_2.rwr.writes1 >= write.id))))
                result = node_2;

        };
        for (int i = node_2.items.size(); i-- > 0; )
            stack += s_SolvedNode(node_2.items[i]);

    };
}

inline static s_SolvedNode SLOW_find_ymrGAXCl(const s_SolvedNode& root, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_WriteID& write)
{
    /*MOV*/ s_SolvedNode result {};
    SLOW_traverse_xxhglNlk(root, _scope, module, ctx, write, result);
    return /*NRVO*/ result;
}

static s_SolvedNode SLOW_findByWriteID_fkke9juT(const s_WriteID& write, const s_SolvedNode& root, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return SLOW_find_ymrGAXCl(root, _scope, module, ctx, write);
}

static fu_STR RWEvent_stack_Y90Y5Mbj(const s_WriteID& write, const s_SolvedNode& root, s_Scope& _scope, const s_Module& module, const s_Context& ctx, s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here)
{
    s_SolvedNode node = SLOW_findByWriteID_fkke9juT(write, root, _scope, module, ctx);
    if (node.kind != s_kind_call)
        return "\n\tVia "_fu + qKW_HfIK3mvn(str_omkBT2iF(node.kind));

    fu_STR stack {};

    {
        fu_VEC<s_Region> uni0n { GET_jZDx3Hiu(nested_RjaTwNl9(RWEvent_E66WAX2c(write, _current_fn).rw_target, _current_fnort, module), _scope, module, ctx).type.lifetime.uni0n };
        if (uni0n)
        {
            for (int i = 0; i < node.items.size(); i++)
            {
                const s_SolvedNode& arg = node.items[i];
                if (inter_Dny7p6dG(arg.type.lifetime.uni0n, uni0n))
                {
                    const s_Argument& host_arg = EXT_4ZiGP2RI(node.target, module, _scope, ctx).args[i];
                    if (host_arg.flags & s_Flags_F_WRITTEN_TO)
                    {
                        stack = qSTACK_TlDJltqj(node.target, i, fu::view<s_Target>{}, module, _scope, ctx, _here);
                        break;
                    };
                };
            };
        };
    };
    const s_Overload& o = GET_jZDx3Hiu(node.target, _scope, module, ctx);
    return ((addr_and_snippet_QQXUwtFS(node.token, ctx, module) + "\n\tAt call to "_fu) + qID_HfIK3mvn(o.name)) + stack;
}

                                #ifndef DEF_N_BckMustSeq
                                #define DEF_N_BckMustSeq
inline constexpr int N_BckMustSeq = (1 << 16);
                                #endif

static bool RESOLVE_byAAR_TqxfCoqF(fu::view<s_WriteID> writes, const int read, const bool trySoft, s_CurrentFn& _current_fn, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope)
{
    for (int i = 0; i < writes.size(); i++)
    {
        int _0 {};
        (_0 = int(RWEvent_E66WAX2c(writes[i], _current_fn).rw_target), RESOLVE_byAAR_JG77Ls6t(read, int(_0), trySoft, AAR, _here, ctx, _current_fnort, module, _scope, _current_fn));
    };
    return true;
}

                                #ifndef DEF_first_7yjHIb3T
                                #define DEF_first_7yjHIb3T
inline const s_WriteID& first_7yjHIb3T(fu::view<s_WriteID> s)
{
    return (s.size() ? s[0] : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEF_grow_if_oob_rqBpsuuE
                                #define DEF_grow_if_oob_rqBpsuuE
inline s_ReadID& grow_if_oob_rqBpsuuE(fu_VEC<s_ReadID>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void bck_trackRead_iU1xIa9i(const s_SolvedNode& callsite, s_CurrentFn& _current_fn, s_TokenIdx& _here, const bool AAR, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_SolvedNode& root, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (!is_ref_4X1iL0ll(callsite.type) || !_current_fn.out.target.index)
        return;

    _here = callsite.token;
    fu::view<s_Region> regions = callsite.type.lifetime.uni0n;
    const int loop_start = _current_fn.loop_start;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target = Region_asLocal_L0YJBnz6(regions[i]);
        if (!target)
            continue;

        if (events_qbb0GbjD(_current_fn).snap.invalidated_by.size() > target)
        {
            fu_VEC<s_WriteID> u { events_qbb0GbjD(_current_fn).snap.invalidated_by[target] };
            if (u)
            {
                if ((AAR ? !RESOLVE_byAAR_TqxfCoqF(u, target, true, _current_fn, AAR, _here, ctx, _current_fnort, module, _scope) : !RESOLVE_byMutvar_0EBpQkFp(target, AAR, _here, ctx, _current_fnort, module, _scope)))
                {
                    fu_STR _0 {};
                    fu_STR _1 {};
                    fu_STR _2 {};
                    (_2 = (_1 = ((_0 = (((("Cannot access"_fu + " "_fu) + qBAD_HfIK3mvn(bck_name_P25nOtjd(target, _current_fnort, module, _scope, ctx))) + ", reference invalidated by write to"_fu) + " "_fu), (static_cast<fu_STR&&>(_0) + qBAD_HfIK3mvn(bck_name_P25nOtjd(RWEvent_E66WAX2c(first_7yjHIb3T(u), _current_fn).rw_target, _current_fnort, module, _scope, ctx)))) + " at "_fu), (static_cast<fu_STR&&>(_1) + RWEvent_stack_Y90Y5Mbj(first_7yjHIb3T(u), root, _scope, module, ctx, _current_fn, _current_fnort, _here))), AAR_cannotFail_LZ0fEAUt(static_cast<fu_STR&&>(_2), AAR, _here, ctx, _helpers, _helpers_data, _scope, module));
                };
                if (OPTI_bck)
                    events_qbb0GbjD(_current_fn).snap.invalidated_by.mutref(target) = fu_VEC<s_WriteID>{};

            };
        };
        events_qbb0GbjD(_current_fn).reads += s_RWEvent { int(target) };
        const s_ReadID readID = s_ReadID { events_qbb0GbjD(_current_fn).reads.size() };
        if (loop_start && (target < loop_start))
        {
            s_ReadID& a = grow_if_oob_rqBpsuuE(events_qbb0GbjD(_current_fn).used_in_a_loop, target);
            if (!(a))
                a = readID;

        };
    };
}

static void bck_call_LfreOCtP(s_SolvedNode& callsite, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    if (args_BlvNFcrl(callsite))
    {
        fu_VEC<s_Argument> host_args { EXT_4ZiGP2RI(target_0KxDYEhT(callsite), module, _scope, ctx).args };
        const int ooe_read0 = _current_fn.events.reads.size();
        const int ooe_write0 = _current_fn.events.writes.size();
        fu_VEC<int> ooe_reads {};
        fu_VEC<int> ooe_writes {};
        const bool ooe_isRTL = isRTL_BBq4Q9Rv(GET_jZDx3Hiu(target_0KxDYEhT(callsite), _scope, module, ctx));
        const int ooe_START = (ooe_isRTL ? (args_BlvNFcrl(callsite).size() - 1) : 0);

        {
            int ooe_read0_1 = ooe_read0;
            int ooe_write0_1 = ooe_write0;
            for (int ooe_i = 0; ooe_i < args_BlvNFcrl(callsite).size(); ooe_i++)
            {
                bck_node_KeFdcf8E(args_BlvNFcrl(callsite).mutref((ooe_isRTL ? (ooe_START - ooe_i) : int(ooe_i))), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
                const int r1 = _current_fn.events.reads.size();
                const int w1 = _current_fn.events.writes.size();
                if (r1 > ooe_read0_1)
                    grow_oob_msuOMRke(ooe_reads, ooe_i, ooe_read0_1) = r1;

                if (w1 > ooe_write0_1)
                    grow_oob_msuOMRke(ooe_writes, ooe_i, ooe_write0_1) = w1;

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
        for (int i0 = 0; i0 < args_BlvNFcrl(callsite).size(); i0++)
        {
            s_Argument host_arg0 { host_args[i0] };
            s_Type expect { host_arg0.type };
            if (is_ref_4X1iL0ll(expect))
            {
                if (!bck_unwound)
                {
                    if ((mutref_first >= 0) || ((ref_first >= 0) && is_mutref_4X1iL0ll(expect, _here, ctx)))
                    {
                        bck_unwound.resize(args_BlvNFcrl(callsite).size());
                        for (int i0_1 = ref_first; (i0_1 <= ref_last); i0_1++)
                        {
                            const s_Lifetime& unwound = (bck_unwound.mutref(i0_1) = Lifetime_unwind_noStatic_avpFfOiE(s_Lifetime(args_BlvNFcrl(callsite)[i0_1].type.lifetime), _current_fnort, module, _scope, ctx, _here));
                            for (int i = 0; i < unwound.uni0n.size(); i++)
                            {
                                if (Region_asLocal_L0YJBnz6(unwound.uni0n[i]))
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
                    s_SolvedNode arg0 { args_BlvNFcrl(callsite)[i0] };
                    s_Lifetime shallow0 { arg0.type.lifetime };
                    const s_Lifetime& unwound0 = (bck_unwound.mutref(i0) = Lifetime_unwind_noStatic_avpFfOiE(s_Lifetime(shallow0), _current_fnort, module, _scope, ctx, _here));
                    for (int i = 0; i < unwound0.uni0n.size(); i++)
                    {
                        if (Region_asLocal_L0YJBnz6(unwound0.uni0n[i]))
                        {
                            arg_first = ((arg_first < 0) ? i0 : arg_first);
                            arg_last = i0;
                            continue;
                        };
                    };
                    if (is_mutref_4X1iL0ll(expect, _here, ctx))
                    {
                        for (int i_1 = ref_first; (i_1 <= ref_last); i_1++)
                        {
                            if (is_ref_4X1iL0ll(host_args[i_1].type))
                                validate_W3yTDWqH(i_1, host_args, host_arg0, i0, callsite, AAR, arg_first, arg_last, shallow0, _here, ctx, _current_fnort, module, _scope, _current_fn, bck_unwound, unwound0, arg0, options, _helpers, _helpers_data, _notes);

                        };
                    }
                    else
                    {
                        for (int i_1 = mutref_first; (i_1 <= mutref_last); i_1++)
                        {
                            if (is_mutref_4X1iL0ll(host_args[i_1].type, _here, ctx))
                                validate_W3yTDWqH(i_1, host_args, host_arg0, i0, callsite, AAR, arg_first, arg_last, shallow0, _here, ctx, _current_fnort, module, _scope, _current_fn, bck_unwound, unwound0, arg0, options, _helpers, _helpers_data, _notes);

                        };
                    };
                };

                {
                    if (ref_first < 0)
                        ref_first = i0;

                    ref_last = i0;
                };
                if (is_mutref_4X1iL0ll(expect, _here, ctx))
                {
                    if (mutref_first < 0)
                        mutref_first = i0;

                    mutref_last = i0;
                    if (host_arg0.flags & s_Flags_F_WRITTEN_TO)
                    {
                        const s_SolvedNode& arg0 = args_BlvNFcrl(callsite)[i0];
                        if (!(is_mutref_4X1iL0ll(host_arg0.type, _here, ctx)))
                            BUG_XksxYQ3i((qID_HfIK3mvn(human_mnvtGH07(host_arg0.name, module, _scope, ctx)) + ": host_arg0.written but !host_arg0.is_mutref"_fu), _here, ctx);

                        if (!(is_mutref_4X1iL0ll(arg0.type, _here, ctx)))
                            BUG_XksxYQ3i((qID_HfIK3mvn(human_mnvtGH07(host_arg0.name, module, _scope, ctx)) + ": host_arg0.written but !arg.is_mutref"_fu), _here, ctx);

                        add_ZpSCtOAr(bck_writes, arg0.type.lifetime.uni0n, bck_positions, i0);
                    };
                };
            };
        };
        if (bck_writes)
        {
            if (!(bck_positions.size() == bck_writes.size()))
                BUG_XksxYQ3i("bck_position.len is off"_fu, _here, ctx);

            bck_trackWrites_WG0cZbCf(callsite, bck_writes, bck_positions, _here, _current_fn, AAR, ctx, _current_fnort, module, _scope, root, _helpers, _helpers_data);
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
                    const int write = RWEvent_E66WAX2c(writeID, _current_fn).rw_target;
                    const bool iw_evalsFirst = (ooe_iw == 0);
                    fu_VEC<s_Region> just_the_write = fu_VEC<s_Region> { fu::slate<1, s_Region> { Region_fromLocal_BaKYka79(write) } };
                    fu_VEC<s_Region> written_and_invalidated {};
                    if (!iw_evalsFirst)
                    {
                        written_and_invalidated = just_the_write;
                        fu::view<int> invalidates = unless_oob_4Cjh8wBB(flow_uoEPCcDC(_current_fn).invalidates, write);
                        add_ugaNarsz(written_and_invalidated, fu::view_of(invalidates, s_Region{}));
                    };
                    int ooe_read0_1 = ooe_read0;
                    for (int ooe_ir = 0; ooe_ir < ooe_reads.size(); ooe_ir++)
                    {
                        const int ooe_read1 = ooe_reads[ooe_ir];
                        if (ooe_ir != ooe_iw)
                        {
                            const bool ooe_ir_evalsBefore_iw = (ooe_ir < ooe_iw);
                            const fu_VEC<s_Region>& written = (ooe_ir_evalsBefore_iw ? written_and_invalidated : just_the_write);
                            if (!(written))
                                BUG_XksxYQ3i(fu_STR{}, _here, ctx);

                            for (int r = ooe_read0_1; r < ooe_read1; r++)
                            {
                                const s_RWEvent& read = _current_fn.events.reads[r];
                                fu::view<s_Region> regions = GET_jZDx3Hiu(nested_RjaTwNl9(read.rw_target, _current_fnort, module), _scope, module, ctx).type.lifetime.uni0n;
                                if (!has_inter_Dny7p6dG(regions, written))
                                    continue;

                                const int r_1 = (ooe_isRTL ? (ooe_START - ooe_ir) : int(ooe_ir));
                                const int w_1 = (ooe_isRTL ? (ooe_START - ooe_iw) : int(ooe_iw));
                                if (ooe_ir_evalsBefore_iw)
                                {
                                    s_SolvedNode arg { args_BlvNFcrl(callsite)[r_1] };
                                    const fu_VEC<s_Region>& bound = arg.type.lifetime.uni0n;
                                    fu_VEC<s_Region> inter = inter_Dny7p6dG(bound, written);
                                    if (inter)
                                    {
                                        if ((AAR ? !RESOLVE_byAAR_NxplUKhm(write, inter, true, AAR, _here, ctx, _current_fnort, module, _scope, _current_fn) : !RESOLVE_byTempCopy_afobWswg(callsite, r_1, AAR, _here, ctx, module, _scope, _current_fn, _current_fnort, _helpers, _helpers_data, options, _notes)))
                                        {
                                            _here = callsite.token;
                                            fu_STR _0 {};
                                            fu_STR _1 {};
                                            (_1 = (_0 = (x7E((((((((x7E((((("At call to "_fu + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(target_0KxDYEhT(callsite), _scope, module, ctx), module, _scope, ctx)) + ", argument binding "_fu) + qBAD_HfIK3mvn(human_mnvtGH07(host_args[r_1].name, module, _scope, ctx))) + " (arg #"_fu), fu::i64dec(r_1)) + ") at "_fu) + addr_and_snippet_QQXUwtFS(arg.token, ctx, module)) + "\n\t... invalidated by subsequent write to "_fu) + qWHAT_QRi0Vh4d(Region_GET_3F6RJQUc(first_LwTZBrda(just_the_write), _current_fnort, module, _scope, ctx), module, _scope, ctx)) + " upon evaluation of argument "_fu) + qBAD_HfIK3mvn(human_mnvtGH07(host_args[w_1].name, module, _scope, ctx))) + " (arg #"_fu), fu::i64dec(w_1)) + ") at "_fu), (static_cast<fu_STR&&>(_0) + RWEvent_stack_Y90Y5Mbj(writeID, root, _scope, module, ctx, _current_fn, _current_fnort, _here))), AAR_cannotFail_LZ0fEAUt(static_cast<fu_STR&&>(_1), AAR, _here, ctx, _helpers, _helpers_data, _scope, module));
                                        };
                                    };
                                };
                                if (!ooe_isRTL)
                                {
                                    const int mustSeq = (ooe_ir_evalsBefore_iw ? r_1 : w_1);
                                    MUSTSEQ_mask |= (1 << (mustSeq & 31));
                                    makeNote_6kXvqC8U(N_BckMustSeq, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
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
        s_Helpers& helpers = callsite.helpers;
        if (!(!helpers || AAR))
            BUG_XksxYQ3i("MUSTSEQ_mask: helpers already contain something"_fu, _here, ctx);

        helpers = s_Helpers { (MUSTSEQ_mask | helpers.index) };
    }
    else if (GET_jZDx3Hiu(target_0KxDYEhT(callsite), _scope, module, ctx).kind == s_kind_var)
        bck_trackRead_iU1xIa9i(callsite, _current_fn, _here, AAR, ctx, _current_fnort, module, _scope, root, _helpers, _helpers_data);

}

static void bck_loop_SiJYj4Z8(s_SolvedNode& node, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    bck_node_KeFdcf8E(items.mutref(0), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    const int loop_start0 = _current_fn.loop_start;
    const int loop_start = GET_next_local_index_ueCY9QGt(_current_fnort, _current_fn, _scope);
    fu_VEC<s_ReadID> events0 { _current_fn.events.used_in_a_loop };
    _current_fn.loop_start = loop_start;
    fu_DEFER(_current_fn.loop_start = loop_start0);
    for (int i = 1; i < items.size(); i++)
        bck_node_KeFdcf8E(items.mutref(i), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);

    _current_fn.events.used_in_a_loop = events0;
}

static void bck_nodes_UnDWmtQs(fu::view_mut<s_SolvedNode> items, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    for (int i = 0; i < items.size(); i++)
        bck_node_KeFdcf8E(items.mutref(i), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);

}

                                #ifndef DEF_unless_oob_iyVCITis
                                #define DEF_unless_oob_iyVCITis
inline const fu_VEC<s_WriteID>& unless_oob_iyVCITis(fu::view<fu_VEC<s_WriteID>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<s_WriteID>*)fu::NIL);
}
                                #endif

static void bck_trackInit_Hifq8A7w(const s_Target& target, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx)
{
    const int index = target.index;
    if (!index)
        return;

    if (unless_oob_iyVCITis(events_qbb0GbjD(_current_fn).snap.invalidated_by, index))
        BUG_XksxYQ3i(fu_STR{}, _here, ctx);

    if (_current_fn.loop_start > index)
        _current_fn.loop_start = index;

}

static void bck_let_TDML1dmk(s_SolvedNode& node, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    bck_nodes_UnDWmtQs(node.items, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    if (is_ref_4X1iL0ll(node.type))
    {
        if (node.flags & s_Flags_F_ARG)
            BUG_XksxYQ3i("bck_let: Found an argument!"_fu, _here, ctx);

        const s_SolvedNode& init = node.items[LET_INIT];
        if (!(is_ref_4X1iL0ll(init.type)))
            BUG_XksxYQ3i("What!"_fu, _here, ctx);

        Reference_trackLocalRef_FlKnEK9i(_current_fn.flow, node.target.index, init.type.lifetime);
    };
    bck_trackInit_Hifq8A7w(node.target, _current_fn, _here, ctx);
}

                                #ifndef DEF_x3Cx3E_ICIY8JAN
                                #define DEF_x3Cx3E_ICIY8JAN
inline int x3Cx3E_ICIY8JAN(const s_WriteID& a, const s_WriteID& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_gcxVH86X(a.id, b.id);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_add_puOVVvHj
                                #define DEF_add_puOVVvHj
inline void add_puOVVvHj(fu_VEC<s_WriteID>& a, fu::view<s_WriteID> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_WriteID& X = a[x];
        const s_WriteID& Y = b[y];
        const int cmp = x3Cx3E_ICIY8JAN(X, Y);
        if ((cmp >= 0))
        {
            if (cmp != 0)
            {
                a.insert(x, s_WriteID(Y));
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

inline static void Events_merge_OwuiX6JL(fu_VEC<fu_VEC<s_WriteID>>& dest, fu::view<fu_VEC<s_WriteID>> src)
{
    if (dest.size() < src.size())
        dest.grow(src.size());

    for (int i = 0; i < src.size(); i++)
    {
        const fu_VEC<s_WriteID>& src_1 = src[i];
        if (src_1)
            add_puOVVvHj(dest.mutref(i), src_1);

    };
}

static void Events_merge_warVR0Az(s_Events& events, const s_EventsSnap& snap)
{
    Events_merge_OwuiX6JL(events.snap.invalidated_by, snap.invalidated_by);
}

static void bck_if_zpwG8xSH(s_SolvedNode& node, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    bck_node_KeFdcf8E(items.mutref(0), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    s_EventsSnap e_Restore_AfterCond { _current_fn.events.snap };
    bck_node_KeFdcf8E(items.mutref(1), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    s_EventsSnap e_Merge_AfterCons { _current_fn.events.snap };
    _current_fn.events.snap = e_Restore_AfterCond;
    bck_node_KeFdcf8E(items.mutref(2), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    Events_merge_warVR0Az(_current_fn.events, e_Merge_AfterCons);
}

static void bck_block_s2k6YITN(s_SolvedNode& node, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    fu_VEC<s_SolvedNode> defers {};
    fu::view_mut<s_SolvedNode> items = node.items;
    for (int i = 0; i < items.size(); i++)
    {
        s_SolvedNode& node_1 = items.mutref(i);
        if (node_1.kind == s_kind_defer)
            defers += s_SolvedNode(only_O0vxkflG(node_1.items));
        else
            bck_node_KeFdcf8E(node_1, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);

    };
    for (int i_1 = defers.size(); i_1-- > 0; )
        bck_node_KeFdcf8E(defers.mutref(i_1), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);

}

static void bck_node_KeFdcf8E(s_SolvedNode& node, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    const s_kind k = node.kind;
    s_RWRanges rwr {};
    rwr.reads0 = _current_fn.events.reads.size();
    rwr.writes0 = _current_fn.events.writes.size();
    if (k == s_kind_call)
        bck_call_LfreOCtP(node, module, _scope, ctx, _current_fn, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    else if (k == s_kind_loop)
        bck_loop_SiJYj4Z8(node, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    else if (k == s_kind_letdef)
    {
        std::swap(GET_mut_tUm7lURP(node.target, _scope, module).solved, node);
        bck_node_KeFdcf8E(node, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
        std::swap(GET_mut_tUm7lURP(node.target, _scope, module).solved, node);
    }
    else if (k == s_kind_let)
        bck_let_TDML1dmk(node, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    else if (k == s_kind_if)
        bck_if_zpwG8xSH(node, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    else if (k == s_kind_block)
        bck_block_s2k6YITN(node, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    else if ((k == s_kind_root) || (k == s_kind_and) || (k == s_kind_or) || (k == s_kind_jump) || (k == s_kind_try) || (k == s_kind_copy) || (k == s_kind_move) || (k == s_kind_arrlit))
        bck_nodes_UnDWmtQs(node.items, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    else if (k == s_kind_pragma)
    {
    }
    else if (node.items)
        AAR_cannotFail_LZ0fEAUt((x7E("TODO: bck_node(non-empty "_fu, str_omkBT2iF(k)) + ")."_fu), AAR, _here, ctx, _helpers, _helpers_data, _scope, module);

    rwr.reads1 = _current_fn.events.reads.size();
    rwr.writes1 = _current_fn.events.writes.size();
    if ((rwr.reads1 > rwr.reads0) || (rwr.writes1 > rwr.writes0))
        node.rwr = rwr;

}

inline static void _current_fn_eachArg_FWD_zDQjZKfM(const s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, int& last, fu_VEC<int>& refs, fu_VEC<int>& consts)
{
    fu::view<s_SolvedNode> sig = _current_fn.out.items;
    for (int i = 0; i < (sig.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = sig[i].target;
        if (t && (GET_jZDx3Hiu(t, _scope, module, ctx).flags & s_Flags_F_ARG))
        {
            if (!(t.modid == -_current_fn.out.target.index))
                BUG_XksxYQ3i(fu_STR{}, _here, ctx);

            int _0 {};
            if (!((_0 = int(last), (int(_0) < (last = t.index)))))
                BUG_XksxYQ3i(fu_STR{}, _here, ctx);

            if (is_mutref_4X1iL0ll(GET_jZDx3Hiu(t, _scope, module, ctx).solved.type, _here, ctx))
                refs += int(t.index);
            else if (is_ref_4X1iL0ll(GET_jZDx3Hiu(t, _scope, module, ctx).solved.type))
                consts += int(t.index);

        };
    };
}

                                #ifndef DEF_rem_itJnJlI8
                                #define DEF_rem_itJnJlI8
inline bool rem_itJnJlI8(fu_VEC<int>& keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_yxV5QT4l(keys[i], item);
        if (cmp == 0)
        {
            keys.splice(i, 1);
            return true;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return false;
}
                                #endif

                                #ifndef DEF_add_KIHP0U19
                                #define DEF_add_KIHP0U19
inline void add_KIHP0U19(fu_VEC<int>& a, fu::view<int> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const int X = a[x];
        const int Y = b[y];
        const int cmp = x3Cx3E_gcxVH86X(X, Y);
        if ((cmp >= 0))
        {
            if (cmp != 0)
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

static void PASS_borrowCheck_e1hTVOhU(s_SolvedNode& root, s_CurrentFn& _current_fn, s_Scope& _scope, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, int& _notes)
{
    bool AAR = false;
    _current_fn_eachArg_FWD_N0PwkfoG(_current_fn, _scope, module, ctx, _here);
    bck_node_KeFdcf8E(root, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);

    { {
        fu_VEC<int> consts {};
        fu_VEC<int> refs {};

        {
            int last = 0;
            _current_fn_eachArg_FWD_zDQjZKfM(_current_fn, _scope, module, ctx, _here, last, refs, consts);
        };
        if (!refs)
            goto BL_1;

        s_Flow& flow = _current_fn.flow;
        flow.invalidates.clear();
        for (int i = 0; i < refs.size(); i++)
        {
            const int target = refs[i];
            if (consts)
                grow_if_oob_eq5Lu6Hw(flow.invalidates, target) = consts;

            fu_VEC<int> refs_1 { refs };
            rem_itJnJlI8(refs_1, target);
            if (refs_1)
                add_KIHP0U19(grow_if_oob_eq5Lu6Hw(flow.invalidates, target), refs_1);

        };
        AAR = true;
        _current_fn.events = s_Events{};
        bck_node_KeFdcf8E(root, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
      } BL_1:;
    };
}

static fu_VEC<int> Lifetime_slotsUp2_EZrKfNOo(const s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    fu_VEC<s_Region> unwound = Lifetime_unwind_lchWAqUg(s_Lifetime(lifetime), locals_start, _current_fnort, module, _scope, ctx, _here).uni0n;
    /*MOV*/ fu_VEC<int> result {};
    for (int i = 0; i < unwound.size(); i++)
    {
        const s_Region& r = unwound[i];
        if ((r.index >= locals_start))
            result += int(r.index);

    };
    return /*NRVO*/ result;
}

                                #ifndef DEF_each_ESbD2S01
                                #define DEF_each_ESbD2S01
inline void each_ESbD2S01(fu::view<int> a, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope)
{
    for (int i = 0; i < a.size(); i++)
    {
        const int index = a[i];
        s_Overload& o = GET_mut_tUm7lURP(nested_RjaTwNl9(index, _current_fnort, module), _scope, module);
        if (!(o.flags & s_Flags_F_ARG))
            o.status |= s_SolverStatus_SS_HOIST;

    };
}
                                #endif

static void mcom_BlockReturns_CopyOrMoveDecision_yQ4Aq8ZK(const s_Helpers& h, fu::view_mut<s_HelpersData> _helpers_data, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers)
{
    if (!is_ref_4X1iL0ll(((void)void(), _helpers_data[h.index]).ret_actual))
        return;

    if (((void)void(), _helpers_data[h.index]).mask & s_HelpersMask_HM_Function)
    {
        s_Lifetime unwind = Lifetime_unwind_lchWAqUg(s_Lifetime(((void)void(), _helpers_data[h.index]).ret_actual.lifetime), 0, _current_fnort, module, _scope, ctx, _here);
        if (Lifetime_vs_WQFr5kXi(unwind, ((void)void(), _helpers_data[h.index]).locals_start, _current_fnort, module, _scope, ctx) < 0)
            ((void)void(), _helpers_data.mutref(h.index)).ret_actual.lifetime = unwind;
        else
            reportReturnType_X4EG2C6N(h, clear_refs_4X1iL0ll(s_Type(((void)void(), _helpers_data[h.index]).ret_actual)), bool{}, _here, ctx, _helpers_data, _current_fnort, module, _scope, _helpers);

    }
    else
    {
        fu_VEC<int> _0 {};
        (_0 = Lifetime_slotsUp2_EZrKfNOo(((void)void(), _helpers_data[h.index]).ret_actual.lifetime, ((void)void(), _helpers_data[h.index]).locals_start, _current_fnort, module, _scope, ctx, _here), each_ESbD2S01(static_cast<fu_VEC<int>&&>(_0), _current_fnort, module, _scope));
    };
}

static void mcom_node_k7SLLc7D(s_SolvedNode& node, fu::view_mut<s_HelpersData> _helpers_data, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, const s_Options& options, int& _notes)
{
    const s_kind k = node.kind;
    s_Type t { node.type };
    if (k == s_kind_block)
    {
        if (node.helpers)
            mcom_BlockReturns_CopyOrMoveDecision_yQ4Aq8ZK(node.helpers, _helpers_data, _current_fnort, module, _scope, ctx, _here, _helpers);

    };
    fu::view_mut<s_SolvedNode> items = node.items;
    for (int i = 0; i < items.size(); i++)
        mcom_node_k7SLLc7D(items.mutref(i), _helpers_data, _current_fnort, module, _scope, ctx, _here, _helpers, options, _notes);

    _here = node.token;
    if (k == s_kind_call)
    {
        const s_Target& target = node.target;
        if (GET_jZDx3Hiu(target, _scope, module, ctx).kind != s_kind_field)
        {
            fu_VEC<s_Argument> host_args { EXT_4ZiGP2RI(target, module, _scope, ctx).args };
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_h0I9nmtY(items.mutref(i_1), s_Type(host_args[i_1].type), true, false, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, options, _notes);

        };
    }
    else if ((k == s_kind_block) || (k == s_kind_jump))
    {
        const s_Helpers h { node.helpers };
        if (((void)void(), _helpers_data[h.index]).ret_actual && !is_void_4X1iL0ll(((void)void(), _helpers_data[h.index]).ret_actual) && !is_never_4X1iL0ll(((void)void(), _helpers_data[h.index]).ret_actual))
            maybeCopyOrMove_h0I9nmtY(last_zNBuXg2W(node.items), s_Type(((void)void(), _helpers_data[h.index]).ret_actual), false, true, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, options, _notes);

    }
    else if (k == s_kind_letdef)
    {
        std::swap(GET_mut_tUm7lURP(node.target, _scope, module).solved, node);
        mcom_node_k7SLLc7D(node, _helpers_data, _current_fnort, module, _scope, ctx, _here, _helpers, options, _notes);
        std::swap(GET_mut_tUm7lURP(node.target, _scope, module).solved, node);
    }
    else if (k == s_kind_let)
    {
        if (node.items)
        {
            s_SolvedNode& init = node.items.mutref(LET_INIT);
            if (init)
                maybeCopyOrMove_h0I9nmtY(init, s_Type(node.type), false, false, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, options, _notes);

        };
    }
    else if (k == s_kind_if)
    {
        if (!is_void_4X1iL0ll(t))
        {
            maybeCopyOrMove_h0I9nmtY(items.mutref(1), t, false, false, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, options, _notes);
            maybeCopyOrMove_h0I9nmtY(items.mutref(2), t, false, false, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, options, _notes);
        };
    }
    else if (k == s_kind_or)
    {
        if (!(t == t_bool))
        {
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_h0I9nmtY(items.mutref(i_1), t, false, false, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, options, _notes);

        };
    }
    else if (k == s_kind_arrlit)
    {
        s_Type t_1 = clear_sliceable_4X1iL0ll(t, _here, ctx);
        for (int i_1 = 0; i_1 < items.size(); i_1++)
            maybeCopyOrMove_h0I9nmtY(items.mutref(i_1), t_1, false, false, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, options, _notes);

    };
}

static void runAllPasses_wSnCoXvq(s_SolvedNode& node, s_TokenIdx& _here, s_Module& module, const s_Context& ctx, s_Scope& _scope, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, fu_VEC<s_Helpers>& _helpers, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    if (SELF_TEST)
        test_node_YJTaOe1a(node, "PASS.0 "_fu, _here, module, ctx, _scope);

    s_HelpersData* BL_2_v;
    (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_2_v = &(_helpers_data.mutref(h.index));
    (void)0;}), *BL_2_v).pass = s_SolverPass_RelaxMut;
    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType_EqJduRu0(node, node.type, RELAX_before_bck, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    if (SELF_TEST)
        test_node_YJTaOe1a(node, "PASS.0.relax "_fu, _here, module, ctx, _scope);

    s_HelpersData* BL_4_v;
    (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_4_v = &(_helpers_data.mutref(h.index));
    (void)0;}), *BL_4_v).pass = s_SolverPass_BorrowCheck;
    PASS_borrowCheck_e1hTVOhU(node, _current_fn, _scope, module, ctx, _here, _current_fnort, options, _helpers, _helpers_data, _notes);
    if (SELF_TEST)
        test_node_YJTaOe1a(node, "PASS.1 "_fu, _here, module, ctx, _scope);

    s_HelpersData* BL_6_v;
    (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_6_v = &(_helpers_data.mutref(h.index));
    (void)0;}), *BL_6_v).pass = s_SolverPass_MaybeCopyOrMove;
    mcom_node_k7SLLc7D(node, _helpers_data, _current_fnort, module, _scope, ctx, _here, _helpers, options, _notes);
    if (SELF_TEST)
        test_node_YJTaOe1a(node, "PASS.2 "_fu, _here, module, ctx, _scope);

    s_HelpersData* BL_8_v;
    (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_8_v = &(_helpers_data.mutref(h.index));
    (void)0;}), *BL_8_v).pass = s_SolverPass_RelaxCopyResize;
    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType_EqJduRu0(node, node.type, RELAX_all, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    if (SELF_TEST)
        test_node_YJTaOe1a(node, "PASS.2.relax "_fu, _here, module, ctx, _scope);

}

static s_SolvedNode solveBlock_E0WRPHag(const s_Node& node, const s_Type& type, const int fnbody_of, const s_HelpersMask mask, const fu_STR& id, const int locals_start, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Target& _current_fnort, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    fu_VEC<s_Node> nodes = ((node.kind == s_kind_block) ? fu_VEC<s_Node>(node.items) : fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(node) } });
    const fu_STR& id_1 = (id ? id : ((node.kind == s_kind_block) ? node.value : (*(const fu_STR*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap_WgJlFXyy(_scope, _helpers);
    fu_DEFER(Scope_pop_pJmZr7lr(_scope, scope0, _helpers));
    const int helpers_idx = _helpers.size();
    push_IM02W1LV(s_HelpersData { (fnbody_of ? s_Target { int(module.modid), int(fnbody_of) } : s_Target{}), s_SolverPass{}, fu_STR(id_1), s_HelpersMask(mask), int((fnbody_of ? fnbody_of : _current_fn.out.target.index)), (fnbody_of ? +1 : (locals_start ? int(locals_start) : GET_next_local_index_ueCY9QGt(_current_fnort, _current_fn, _scope))), s_Type(type), s_Type{} }, _helpers, _helpers_data);
    const s_Helpers h { _helpers[helpers_idx] };
    if (fnbody_of && nodes)
        last_XJocKWoL(nodes) = s_Node { s_kind_return, s_DeclAsserts{}, s_ParseSyntax{}, s_Flags_F_IMPLICIT, fu_STR{}, ((last_8DAoFAdf(nodes).kind != s_kind_void) ? fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(last_8DAoFAdf(nodes)) } } : fu_VEC<s_Node>{}), s_TokenIdx(node.token) };

    fu_VEC<s_SolvedNode> items = solveNodes_VtQi5Tmy(nodes, t_void, type, !is_void_4X1iL0ll(type), (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    if (!(mask & s_HelpersMask_HM_CanReturn))
        ((void)void(), _helpers_data.mutref(h.index)).ret_expect = s_Type{};

    reportReturnType_X4EG2C6N(h, (items ? last_vOYHP1IT(items).type : t_void), bool{}, _here, ctx, _helpers_data, _current_fnort, module, _scope, _helpers);
    if (!(((void)void(), _helpers_data[h.index]).ret_actual))
        BUG_XksxYQ3i("No ret_actual"_fu, _here, ctx);

    const s_Type* _0;
    /*MOV*/ s_SolvedNode block = createBlock_ZRqsU458(s_Type((*(_0 = &(((void)void(), _helpers_data[h.index]).ret_actual)) ? *_0 : BUG_XksxYQ3i(fu_STR{}, _here, ctx))), fu_VEC<s_SolvedNode>(items), h, _here, _helpers, _helpers_data, _scope, module);
    if (fnbody_of)
    {
        const s_SolverStatus status = GET_jZDx3Hiu(s_Target { int(module.modid), int(fnbody_of) }, _scope, module, ctx).status;
        if (!(status & s_SolverStatus_SS_DIRTY) && !currentFn_mustBecomeInline_zN39RUaN(_current_fn))
            runAllPasses_wSnCoXvq(block, _here, module, ctx, _scope, _helpers_data, _current_fn, _warnings, _helpers, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    };
    return /*NRVO*/ block;
}

                                #ifndef DEF_each_ybnMBsfL
                                #define DEF_each_ybnMBsfL
inline void each_ybnMBsfL(const s_BitSet& _, fu::view<s_SolvedNode> items, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, s_BitSet& hard_risk)
{
    for (int i = 0; i < _._data.size(); i++)
    {
        const fu::u8 item = _._data[i];
        if (item)
        {
            for (int b = 0; b < 8; b++)
            {
                const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(b))));
                if (item & mask)
                {
                    const int index = ((i << 3) | int(b));
                    const s_SolvedNode& other = GET_jZDx3Hiu(items[index].target, _scope, module, ctx).solved;
                    if (!TODO_FIX_isArray_4X1iL0ll(other.type))
                        add_sDUBjUzV(hard_risk, index);

                };
            };
        };
    };
}
                                #endif

                                #ifndef DEF_each_THUTmgnQ
                                #define DEF_each_THUTmgnQ
inline void each_THUTmgnQ(fu::view<s_Region> a, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_Type& retval, const s_TokenIdx& _here)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Region& r = a[i];
        if (!(Region_isArgPosition_L0YJBnz6(r) || Region_isStatic_L0YJBnz6(r)))
            BUG_XksxYQ3i(((("updateScope: Non-static/non-arg leaked:\n\t"_fu + qWHAT_QRi0Vh4d(Region_GET_3F6RJQUc(r, _current_fnort, module, _scope, ctx), module, _scope, ctx)) + "\n\n\tIn retval lifetime:\n\t"_fu) + qWHAT_5B1fYWan(retval.lifetime, _current_fnort, module, _scope, ctx)), _here, ctx);

    };
}
                                #endif

                                #ifndef DEF_N_TypeReopen
                                #define DEF_N_TypeReopen
inline constexpr int N_TypeReopen = (1 << 5);
                                #endif

                                #ifndef DEF_N_FnReopen
                                #define DEF_N_FnReopen
inline constexpr int N_FnReopen = (1 << 2);
                                #endif

                                #ifndef DEF_N_TypeResolve
                                #define DEF_N_TypeResolve
inline constexpr int N_TypeResolve = (1 << 4);
                                #endif

                                #ifndef DEF_N_FnResolve
                                #define DEF_N_FnResolve
inline constexpr int N_FnResolve = (1 << 1);
                                #endif

static void lazySolveEnd_5buTxZdy(const s_Target& t, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, const s_Options& options, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, int& _notes, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    s_Overload& o = GET_mut_tUm7lURP(t, _scope, module);
    fu_VEC<int> reopen {};
    const int parent = EXT_4ZiGP2RI(t, module, _scope, ctx).local_of;
    if (o.status & s_SolverStatus_SS_UPDATED)
    {
        o.status &= ~s_SolverStatus_SS_UPDATED;
        fu_VEC<int> callers { EXT_4ZiGP2RI(t, module, _scope, ctx).callers };
        for (int i = 0; i < callers.size(); i++)
        { {
            int index = callers[i];
            for (; ; )
            {
                const s_Target t_1 = s_Target { int(module.modid), int(index) };
                s_Overload& o_1 = GET_mut_tUm7lURP(t_1, _scope, module);
                if ((o_1.status & (s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)) != s_SolverStatus_SS_DID_START)
                    goto BL_3;

                if (!(o_1.status & s_SolverStatus_SS_FINALIZED))
                {
                    o_1.status |= s_SolverStatus_SS_DIRTY;
                    goto BL_3;
                };
                const int up = EXT_4ZiGP2RI(t_1, module, _scope, ctx).local_of;
                if (up != parent)
                {
                    if (!(up > parent))
                        BUG_XksxYQ3i("lazySolveEnd: about to climb up the wrong tree."_fu, _here, ctx);

                    index = up;
                    continue;
                };
                makeNote_6kXvqC8U(((o_1.kind == s_kind_type) ? N_TypeReopen : N_FnReopen), options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                o_1.status &= ~((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY) | s_SolverStatus_SS_FINALIZED);
                reopen += int(index);
                goto BL_3;
            };
          } BL_3:;
        };
    };
    s_Overload& o_1 = GET_mut_tUm7lURP(t, _scope, module);
    if (!(o_1.status & s_SolverStatus_SS_DIRTY))
        o_1.status |= s_SolverStatus_SS_FINALIZED;
    else
    {
        if (o_1.status & s_SolverStatus_SS_FINALIZED)
            BUG_XksxYQ3i("Stray SS_FINALIZED."_fu, _here, ctx);

        o_1.status &= ~(s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY);
        makeNote_6kXvqC8U(((o_1.kind == s_kind_type) ? N_TypeResolve : N_FnResolve), options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t_1 = s_Target { int(module.modid), int(reopen[i]) };
        lazySolveStart_nWoDZAJr(t_1, s_Overload(GET_jZDx3Hiu(t_1, _scope, module, ctx)), _scope, module, _here, ctx, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    };
}

static s_Target doTrySpecialize_lBFu4DhZ(const s_Target& into, const s_Target& overloadIdx, fu::view<s_SolvedNode> args_in, const fu_STR& mangle, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Map_w7treiPq& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    fu_VEC<s_Type> args {};
    if (use_reorder)
    {
        for (int i = 0; i < reorder.size(); i++)
        {
            const int callsiteIndex = reorder[i];
            args.push(s_Type(((callsiteIndex >= 0) && (callsiteIndex < args_in.size()) ? args_in[callsiteIndex].type : (*(const s_Type*)fu::NIL))));
        };
    }
    else
    {
        for (int i = 0; i < args_in.size(); i++)
            args.push(s_Type(args_in[i].type));

    };
    for (int i = 0; i < conversions.size(); i++)
    {
        const fu_VEC<s_Target>& c = conversions[i];
        if (c)
            args.mutref(i) = GET_jZDx3Hiu(last_3cih1E88(c), _scope, module, ctx).type;

    };
    if (REST_TYPE)
        args.mutref(REST_START) = REST_TYPE;

    const s_Target SPECFAIL_RentrySafety = s_Target { 2147483647, 0 };
    const s_Target& original = (overloadIdx ? overloadIdx : into ? into : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
    s_Template tEmplate { EXT_4ZiGP2RI(original, module, _scope, ctx).tEmplate };
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    _here = EXT_4ZiGP2RI(original, module, _scope, ctx).tEmplate.node.token;
    int parent_idx = EXT_4ZiGP2RI(original, module, _scope, ctx).local_of;
    for (int i_1 = 0; i_1 < args.size(); i_1++)
    {
        const s_Type& arg_t = args[i_1];
        if (type_isAddrOfFn_4X1iL0ll(arg_t))
            unpackAddrOfFn_PKVOFsvQ(arg_t.vtype.canon, module, _scope, ctx, parent_idx);

    };
    const bool isInline = !!(tEmplate.node.flags & s_Flags_F_INLINE);
    fu_VEC<fu_STR> mangles {};
    s_Target currentSpec { SPECFAIL_RentrySafety };
    if (!into && !isInline)
    {
        const bool allowReplaceNonSpecfails {};
        if (add_wAuMmv6B(mangles, mangle))
        {
            /*MOV*/ const s_Target preexisting { get_EQELHV7I(_specs, mangle) };
            if (preexisting)
            {
                rem_wAuMmv6B(mangles, mangle);
                resetSpec_RWYa9eYn(preexisting, allowReplaceNonSpecfails, currentSpec, mangles, isInline, _here, ctx, _specs, _scope, module);
                return /*NRVO*/ preexisting;
            };
            setSpec_FY6x4voZ(mangle, currentSpec, true, bool{}, isInline, _here, ctx, _specs, _scope, module);
        };
    };
    /*MOV*/ s_Target target {};

    {
        const s_ScopeMemo scope0 = Scope_snap_WgJlFXyy(_scope, _helpers);
        s_ScopeSkipMemos ss0 { _ss };
        const int helpers_data0 = _helpers_data.size();
        fu_DEFER(
        {
            Scope_pop_pJmZr7lr(_scope, scope0, _helpers);
            _ss = ss0;
            _helpers_data.shrink(helpers_data0);
        });
        ScopeSkip_setup_90PFBgj9(tEmplate, scope0, bool{}, _root_scope, _ss, _here, ctx, _current_fn, _scope);
        fu_VEC<s_Node> items { tEmplate.node.items };
        s_Node& n_fn = tEmplate.node;
        if (!(n_fn.kind == s_kind_fn))
            BUG_XksxYQ3i("n_fn not a `fn`."_fu, _here, ctx);

        fu_STR error {};
        bool remangle = false;
        s_Map_9nzi56Zu typeParams {};
        if (!into)
        {
            const s_kind kind = tEmplate.node.kind;
            const int numArgs = ((kind == s_kind_fn) ? (items.size() + FN_ARGS_BACK) : fail_LGxaAyqq(x7E("TODO numArgs for template:"_fu, str_omkBT2iF(kind)), _here, ctx, _helpers, _helpers_data, _scope, module));
            fu_VEC<int> retypeIndices {};
            for (int pass_retype = 0; (pass_retype == 0) || ((pass_retype == 1) && retypeIndices); pass_retype++)
            {
                for (int i_2 = 0; i_2 < numArgs; i_2++)
                {
                    if (pass_retype)
                    {
                        if (!has_hxLz1O11(retypeIndices, i_2))
                            continue;

                    };
                    s_Type inType { ((args.size() > i_2) ? args[i_2] : (*(const s_Type*)fu::NIL)) };
                    const s_SolvedNode& inValue = (reorder ? ((reorder.size() > i_2) && (reorder[i_2] >= 0) ? args_in[reorder[i_2]] : (*(const s_SolvedNode*)fu::NIL)) : ((args_in.size() > i_2) ? args_in[i_2] : (*(const s_SolvedNode*)fu::NIL)));
                    const s_Node* _0;
                    const s_Node& argNode = (*(_0 = &(items[i_2])) ? *_0 : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
                    const s_Node& annot = argNode.items[LET_TYPE];
                    const s_Argument& host_arg = EXT_4ZiGP2RI(original, module, _scope, ctx).args[i_2];
                    const s_SolvedNode& inValue_1 = (inValue ? inValue : ((void)(inType = host_arg.dEfault.type), host_arg.dEfault));
                    if (couldRetype_ymhvuWbS(inValue_1))
                    {
                        const s_Type& paramType = ((annot.kind == s_kind_typeparam) ? ref_RGfEGqMs(typeParams, annot.value).matched : ((annot.kind == s_kind_call) && !annot.items ? Scope_lookupType_suuZRgfd(annot, _here, ctx, _helpers, _helpers_data, _scope, module, _ss) : (*(const s_Type*)fu::NIL)));
                        if (paramType)
                        {
                            s_Type retype = tryRetyping_fhyto8pR(inValue_1, paramType, _here, ctx, _helpers, _helpers_data, _scope, module, t_string);
                            if (retype && (retype.vtype.canon != inType.vtype.canon))
                            {
                                inType = retype;
                                if (args.size() > i_2)
                                    args.mutref(i_2) = inType;

                                remangle = true;
                            };
                        }
                        else if (!pass_retype)
                        {
                            retypeIndices.push(int(i_2));
                            continue;
                        };
                    };
                    if (!(argNode.kind == s_kind_let))
                        BUG_XksxYQ3i(fu_STR{}, _here, ctx);

                    if (inType)
                    {
                        const s_Type& exactType = host_arg.type;
                        if (exactType)
                        {
                            if (args.size() > i_2)
                                args.mutref(i_2) = exactType;

                            continue;
                        };
                        const fu_STR& argName = (argNode.value ? argNode.value : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
                        s_TypeParam& argName_typeParam = ref_RGfEGqMs(typeParams, argName);
                        inType = add_ref_HFjykOs8(s_Type(inType), Lifetime_temporary_8nlJDPX0(), _here, ctx);
                        (!argName_typeParam ? argName_typeParam : fail_LGxaAyqq((("Type param name collision with argument "_fu + qID_HfIK3mvn(argName)) + "."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)).matched = inType;
                        if (annot)
                        {
                            const bool argOk = trySolveTypeParams_SDhDhNqQ(annot, s_Type(inType), typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
                            if (!error && !argOk)
                                error = ((("Cannot solve argument "_fu + qID_HfIK3mvn(argName)) + " pattern for "_fu) + humanizeType_4XPtiI5K(inType, module, ctx));

                            if (error && !remangle)
                                break;

                        };
                    };
                };
            };
            if (remangle && !isInline)
            {
                const bool allowReplaceNonSpecfails {};
                int _1 {};
                const int start = ((_1 = (find_cnCAmU7Y(mangle, ' ') + 1)) ? _1 : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
                fu_STR mangle_1 = (fu::slice(mangle, 0, start) + mangleArguments_0QDZrmwE(args, _here, ctx));

                {
                    if (add_wAuMmv6B(mangles, mangle_1))
                    {
                        /*MOV*/ const s_Target preexisting { get_EQELHV7I(_specs, mangle_1) };
                        if (preexisting)
                        {
                            rem_wAuMmv6B(mangles, mangle_1);
                            resetSpec_RWYa9eYn(preexisting, allowReplaceNonSpecfails, currentSpec, mangles, isInline, _here, ctx, _specs, _scope, module);
                            return /*NRVO*/ preexisting;
                        };
                        setSpec_FY6x4voZ(mangle_1, currentSpec, true, bool{}, isInline, _here, ctx, _specs, _scope, module);
                    };
                };
            };
            if (error)
                return SPECFAIL_VYBXlNBG(error, _spec_errors, SPECFAIL_RentrySafety, currentSpec, mangles, isInline, _here, ctx, _specs, _scope, module);

            const s_Node* _2;
            const s_Node& body = (*(_2 = &(items[(items.size() + FN_BODY_BACK)])) ? *_2 : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
            if (body.kind == s_kind_pattern)
            {
                s_Map_9nzi56Zu undo { typeParams };
                fu_VEC<s_Node> branches { body.items };
                bool did_match = false;
                for (int i_2 = 0; i_2 < branches.size(); i_2++)
                {
                    const s_Node& cond = branches[i_2].items[0];
                    if (cond && !evalTypePattern_9fe66Dnp(cond, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn, _warnings, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort))
                    {
                        typeParams = undo;
                        continue;
                    };
                    fu_VEC<s_Node> cons { branches[i_2].items };
                    fu::view_mut<s_Node> sig = n_fn.items;

                    {
                        s_Node n_ret { cons[(cons.size() + FN_RET_BACK)] };
                        if (n_ret)
                            sig.mutref((sig.size() + FN_RET_BACK)) = n_ret;

                        const s_Node& n_body = cons[(cons.size() + FN_BODY_BACK)];
                        sig.mutref((sig.size() + FN_BODY_BACK)) = (n_body ? n_body : BUG_XksxYQ3i("doTrySpec: no case/body."_fu, _here, ctx));
                    };
                    did_match = true;
                    break;
                };
                if (!did_match)
                    return SPECFAIL_VYBXlNBG("No body pattern matched."_fu, _spec_errors, SPECFAIL_RentrySafety, currentSpec, mangles, isInline, _here, ctx, _specs, _scope, module);

            };
            const s_Node& n_body = n_fn.items[(n_fn.items.size() + FN_BODY_BACK)];
            if (isNativeBody_Pj1Qpqi5(n_body))
            {
                for (int i_2 = 0; i_2 < numArgs; i_2++)
                {
                    const s_Node* _3;
                    const s_Node& argNode = (*(_3 = &(items[i_2])) ? *_3 : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
                    fu::view<char> id = argNode.value;
                    if_ref_ZGMGKlrx(typeParams, id);
                };
            };
        };
        target = (into ? s_Target(into) : Scope_create_8vkRC1Ki(_scope, s_kind___no_kind_yet, (*(const fu_STR*)fu::NIL), (*(const s_Type*)fu::NIL), s_Flags{}, (s_SolverStatus_SS_DID_START | s_SolverStatus_SS_LAZY), 0, module));
        EXT_mut_nPdL0dET(target, module, _scope).local_of = parent_idx;
        fu_VEC<s_ScopeItem> extra_items { (into ? EXT_4ZiGP2RI(original, module, _scope, ctx).extra_items : (EXT_mut_nPdL0dET(target, module, _scope).extra_items = intoScopeItems_Sz9dpAQt(typeParams, module, ctx, _scope))) };
        if (!_current_fn_or_type)
            _anons = 0;

        const s_Target current_fn_or_type0 { _current_fn_or_type };
        fu_DEFER(_current_fn_or_type = current_fn_or_type0);
        _current_fn_or_type = target;
        const s_Target& _current_fnort_1 = target;

        {
            s_Extended& o = EXT_mut_nPdL0dET(target, module, _scope);
            if (o.revision++ > 0)
            {
                o.locals.clear();
                if (_warnings.size() > target.index)
                    _warnings.mutref(target.index) = s_Warning{};

            };
        };
        fu_VEC<s_SolvedNode> TODO_FIX_convert_args0 { TODO_FIX_convert_args };
        TODO_FIX_convert_args.mutref(0) = SolvedNode_MCGNnDLT(s_kind___convert, s_Type{}, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
        fu_DEFER(TODO_FIX_convert_args = TODO_FIX_convert_args0);
        s_CurrentFn out = s_CurrentFn { solved_h7iffphh(n_fn, X_addrofTarget_6eovjMxd(target), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, _here), s_ScopeMemo(scope0), s_Flow{}, s_Effects{}, s_Events{}, 0, ((n_fn.flags & s_Flags_F_TEMPLATE) ? 1 : 0), fu_VEC<s_Type>{} };
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
        outItems_VNYsk82N(_current_fn).resize(inItems.size());
        _scope.items += extra_items;
        const bool isFirst = !GET_jZDx3Hiu(target, _scope, module, ctx).solved;
        const s_Flags isTemplate = (tEmplate.node.flags & s_Flags_F_TEMPLATE);
        const bool isSpec = (isTemplate && (!into || !isFirst));
        const bool isUnspec = (isTemplate && !isSpec);
        const s_DeclAsserts isPure = (tEmplate.node.asserts & s_DeclAsserts_A_PURE);
        const s_DeclAsserts isNovec = (tEmplate.node.asserts & s_DeclAsserts_A_NOVEC);
        const s_DeclAsserts isPureCtx = (tEmplate.node.asserts & s_DeclAsserts_A_PURE_CTX);
        const s_DeclAsserts isNoFlow = (tEmplate.node.asserts & s_DeclAsserts_A_NOFLOW);
        for (int i_2 = 0; i_2 < (inItems.size() + FN_ARGS_BACK); i_2++)
        {
            const s_Node& n_arg = inItems[i_2];
            if (isUnspec && ((n_arg.flags & s_Flags_F_TEMPLATE) || !n_arg.items[LET_TYPE]))
            {
                s_SolvedNode init = (n_arg.items[LET_INIT] ? solveNode_wDAIciWi(n_arg.items[LET_INIT], (*(const s_Type*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort_1) : s_SolvedNode{});
                outItems_VNYsk82N(_current_fn).mutref(i_2) = SolvedNode_MCGNnDLT(s_kind_let, s_Type{}, n_arg.flags, n_arg.value, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, s_Helpers{}, _here);
                continue;
            };
            s_Type specType = (isSpec ? tryGetArgSpecType_YwV6Ojg8(n_arg.value, extra_items, _scope, module, ctx, _here, _helpers, _helpers_data) : s_Type{});
            s_SolvedNode arg = solveLet_rYi8moYl(n_arg, specType, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort_1);
            outItems_VNYsk82N(_current_fn).mutref(i_2) = arg;
        };
        const s_Node& n_ret = (!isUnspec ? inItems[(inItems.size() + FN_RET_BACK)] : (*(const s_Node*)fu::NIL));
        const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
        if (!(n_body))
            BUG_XksxYQ3i("solveFn: no body."_fu, _here, ctx);

        const bool isNative = isNativeBody_Pj1Qpqi5(n_body);
        s_Type ret_expect = (n_ret ? evalTypeAnnot_Csai46oQ(n_ret, (*(const s_Map_9nzi56Zu*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort_1) : s_Type{});
        s_Type ret_seed { (n_ret ? (ret_expect ? ret_expect : BUG_XksxYQ3i(("falsy ret_expect: "_fu + n_fn.value), _here, ctx)) : t_never) };
        if (ret_seed.lifetime)
            ret_seed.lifetime = (isNative ? Lifetime_fromNative_UknZZcNG(inItems, fu::get_view(_current_fn.out.items, 0, (_current_fn.out.items.size() + FN_ARGS_BACK)), ret_seed, _here, ctx, _helpers, _helpers_data, _scope, module) : Lifetime_static_8nlJDPX0());

        if (isFirst)
        {

            { {
                const s_CurrentFn& out_1 = _current_fn;
                s_Type retval { (isInline ? ret_expect : ret_seed) };
                const bool maybeLast = false;
                _here = (n_fn.token ? n_fn.token : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
                if (GET_jZDx3Hiu(target, _scope, module, ctx).status & s_SolverStatus_SS_DIRTY)
                {
                    GET_mut_tUm7lURP(target, _scope, module).status |= s_SolverStatus_SS_UPDATED;
                    goto BL_66;
                };
                fu::view<s_SolvedNode> items_1 = out_1.out.items;
                const int N = (items_1.size() + FN_ARGS_BACK);
                int min = 0;
                int max = 0;
                const s_NativeHacks NativeHacks = (isNative ? NativeHacks_1FBeX0Ih(GET_jZDx3Hiu(target, _scope, module, ctx).name) : s_NativeHacks{});
                fu_VEC<s_Argument> args_1 {};
                for (int i_3 = 0; i_3 < N; i_3++)
                {
                    const s_SolvedNode& argNode = items_1[i_3];
                    if (!(argNode.kind == s_kind_letdef))
                    {
                        if (argNode.target)
                            BUG_XksxYQ3i(("Argnode is not letdef, but has a target: "_fu + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(argNode.target, _scope, module, ctx), module, _scope, ctx)), _here, ctx);

                    };
                    s_SolvedNode argNode_1 { ((argNode.kind == s_kind_letdef) ? GET_jZDx3Hiu(argNode.target, _scope, module, ctx).solved : argNode) };
                    if (!(argNode_1.kind == s_kind_let))
                        BUG_XksxYQ3i(fu_STR{}, _here, ctx);

                    fu_STR name { argNode_1.value };
                    fu_STR autocall = ((argNode_1.flags & s_Flags_F_COMPOUND_ID) ? CompoundArgID_outerSplice_k4Tw2yvK(name, _here, ctx) : fu_STR{});
                    const bool isImplicit = !!(argNode_1.flags & s_Flags_F_IMPLICIT);
                    const s_Target argTarget { argNode_1.target };
                    const bool written_via = (!isUnspec && is_mutref_4X1iL0ll(argNode_1.type, _here, ctx) && (isNative || has_ur5UoMYg(out_1.events.ever_written, argTarget.index)));
                    s_BitSet soft_risk {};
                    s_BitSet hard_risk {};
                    if (written_via)
                    {
                        if (!isNative)
                        {
                            ArgsAtRisk_list_BERt8JVr(soft_risk, out_1.flow, i_3, out_1.flow.at_soft_risk);
                            ArgsAtRisk_list_BERt8JVr(hard_risk, out_1.flow, i_3, out_1.flow.at_hard_risk);
                            if (TODO_FIX_isArray_4X1iL0ll(argNode_1.type))
                            {
                                s_BitSet soft { soft_risk };
                                and_not_assign_KQfktl8z(soft, hard_risk);
                                each_8CpXhev7(soft, items_1, _scope, module, ctx, hard_risk);
                            };
                        }
                        else
                        {
                            add_range_sDUBjUzV(soft_risk, N);
                            rem_sDUBjUzV(soft_risk, i_3);
                            if (!NativeHacks.soft_risk)
                                hard_risk = soft_risk;

                        };
                    };
                    if (isPure && written_via)
                    {
                        fu_STR _4 {};
                        fu_STR _5 {};
                        (_5 = (_4 = (((qWHAT_QRi0Vh4d(GET_jZDx3Hiu(target, _scope, module, ctx), module, _scope, ctx) + " is not pure, writes to argument "_fu) + qID_HfIK3mvn(human_mnvtGH07(name, module, _scope, ctx))) + ":\n"_fu), (static_cast<fu_STR&&>(_4) + qSTACK_edxH1uYk(target, out_1.out, Region_fromLocal_BaKYka79(argTarget.index), fu::view<s_Target>{}, _scope, module, ctx, _current_fnort_1, _here))), fail_LGxaAyqq(static_cast<fu_STR&&>(_5), _here, ctx, _helpers, _helpers_data, _scope, module));
                    };
                    if (isPureCtx && written_via && isImplicit)
                    {
                        fu_STR _6 {};
                        fu_STR _7 {};
                        (_7 = (_6 = (((qWHAT_QRi0Vh4d(GET_jZDx3Hiu(target, _scope, module, ctx), module, _scope, ctx) + " is not purectx, writes to implicit argument "_fu) + qID_HfIK3mvn(human_mnvtGH07(name, module, _scope, ctx))) + ":\n"_fu), (static_cast<fu_STR&&>(_6) + qSTACK_edxH1uYk(target, out_1.out, Region_fromLocal_BaKYka79(argTarget.index), fu::view<s_Target>{}, _scope, module, ctx, _current_fnort_1, _here))), fail_LGxaAyqq(static_cast<fu_STR&&>(_7), _here, ctx, _helpers, _helpers_data, _scope, module));
                    };
                    if (maybeLast && isNovec && !is_trivial_K61azC5I(argNode_1.type, module, ctx) && (is_rx_copy_4X1iL0ll(argNode_1.type) || is_rx_resize_4X1iL0ll(argNode_1.type)))
                        fail_LGxaAyqq(((((qWHAT_QRi0Vh4d(GET_jZDx3Hiu(target, _scope, module, ctx), module, _scope, ctx) + " is not novec, argument "_fu) + qID_HfIK3mvn(human_mnvtGH07(name, module, _scope, ctx))) + " is "_fu) + humanizeType_4XPtiI5K(argNode_1.type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

                    s_Argument arg = s_Argument { fu_STR(name), fu_STR(autocall), s_Type(argNode_1.type), s_SolvedNode((!isImplicit ? argNode_1.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), (argNode_1.flags | (written_via ? s_Flags_F_WRITTEN_TO : s_Flags{})), int(argTarget.index), s_BitSet(soft_risk), s_BitSet(hard_risk) };
                    if (!(arg.type || isUnspec))
                        BUG_XksxYQ3i((("updateScope: Unexpected untyped argument: `"_fu + name) + "`."_fu), _here, ctx);

                    args_1.push(s_Argument(arg));
                    if (!isImplicit)
                    {
                        if (max != int(0x7fffffffu))
                            max++;

                        if (!arg.dEfault)
                            min++;

                    };
                    if (arg.flags & s_Flags_F_REST_ARG)
                        max = int(0x7fffffffu);

                    if (is_ref_4X1iL0ll(retval) && is_ref_4X1iL0ll(argNode_1.type))
                    {
                        const s_Region region = Region_fromLocal_BaKYka79(argTarget.index);
                        const int idx = find_u1VerSYt(retval.lifetime.uni0n, region);
                        if ((idx >= 0))
                        {
                            retval.lifetime.uni0n.splice(idx, 1);
                            add_nWrnWrGy(retval.lifetime.uni0n, Region_fromArgPosition_BaKYka79(i_3));
                        };
                    };
                };
                s_Overload overload { GET_jZDx3Hiu(target, _scope, module, ctx) };
                s_Extended& ext = EXT_mut_nPdL0dET(target, module, _scope);
                bool change = false;
                if (ext.callers)
                {
                    change = ((args_1.size() != ext.args.size()) || !(overload.type == retval));
                    if (!change)
                    {
                        for (int i_4 = 0; i_4 < args_1.size(); i_4++)
                        {
                            const s_Argument& a = args_1[i_4];
                            const s_Argument& b = ext.args[i_4];
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
                ext.args = args_1;
                s_Overload& overload_1 = GET_mut_tUm7lURP(target, _scope, module);
                overload_1.type = retval;
                if (isInline)
                    goto BL_66;

                if (!(retval))
                    BUG_XksxYQ3i("updateScope: no return type."_fu, _here, ctx);

                if (is_ref_4X1iL0ll(retval))
                    Lifetime_test_EHx9VNGx(retval.lifetime, bool{}, _current_fn, _scope, module, ctx, _here, _current_fnort_1);

                each_MItRRaiM(retval.lifetime.uni0n, _current_fnort_1, module, _scope, ctx, retval, _here);
                overload_1.flags = out_1.out.flags;

                {
                    const bool rtl = ((args_1.size() == 2) && (overload_1.flags & s_Flags_F_OPERATOR) && hasAssignment_LX3QLY5k(overload_1.name));
                    isRTL_set_9FzNg18P(overload_1, rtl);
                };
                if (change)
                    overload_1.status |= s_SolverStatus_SS_UPDATED;

                if (!isNative && !isInline && !isUnspec)
                {
                    const int sourceModid = tEmplate.node.token.modid;
                    fu_STR shortModuleName_1 = ((sourceModid != module.modid) ? (sourceModid && module.modid ? getShortModuleName_hDYH9Tpk(ctx.modules[sourceModid].fname) : fu_STR{}) : fu_STR(shortModuleName));
                    fu_STR sig = (((EXT_4ZiGP2RI(target, module, _scope, ctx).local_of ? fu::i64dec(target.index) : fu_STR{}) + shortModuleName_1) + mangleArguments_wpbA41Ww(EXT_4ZiGP2RI(target, module, _scope, ctx).args, _here, ctx));
                    fu_STR _8 {};
                    overload_1.sighash = (sig ? ((_8 = hash62_EhsXBDGJ(sig, 11)) ? static_cast<fu_STR&&>(_8) : BUG_XksxYQ3i(fu_STR{}, _here, ctx)) : fu_STR{});
                };
                solved_set_9x7XNSoR(target, (!isUnspec ? out_1 : (*(const s_CurrentFn*)fu::NIL)).out, _scope, module);
                if (!into && !isInline)
                {

                    {
                        fu::view<s_Argument> args_2 = EXT_4ZiGP2RI(target, module, _scope, ctx).args;
                        int _9 {};
                        const int start = ((_9 = (find_cnCAmU7Y(mangle, ' ') + 1)) ? _9 : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
                        fu_STR mangle_1 = (fu::slice(mangle, 0, start) + mangleArguments_wpbA41Ww(args_2, _here, ctx));

                        {
                            if (add_wAuMmv6B(mangles, mangle_1))
                            {
                                /*MOV*/ const s_Target preexisting { get_EQELHV7I(_specs, mangle_1) };
                                if (preexisting)
                                {
                                    rem_wAuMmv6B(mangles, mangle_1);
                                    resetSpec_RWYa9eYn(preexisting, maybeLast, currentSpec, mangles, isInline, _here, ctx, _specs, _scope, module);
                                    return /*NRVO*/ preexisting;
                                };
                                setSpec_FY6x4voZ(mangle_1, currentSpec, true, bool{}, isInline, _here, ctx, _specs, _scope, module);
                            };
                        };
                    };
                    resetSpec_RWYa9eYn(target, bool{}, currentSpec, mangles, isInline, _here, ctx, _specs, _scope, module);
                };
              } BL_66:;
            };
            const fu_STR& name = (n_fn.value ? n_fn.value : fail_LGxaAyqq("TODO anonymous fns"_fu, _here, ctx, _helpers, _helpers_data, _scope, module));
            s_Overload& overload = GET_mut_tUm7lURP(target, _scope, module);
            fu_STR _10 {};
            overload.name = ((_10 = HACK_nativeNameParts_F1E1GWIb(isNative, n_body)) ? static_cast<fu_STR&&>(_10) : name ? fu_STR(name) : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
            overload.kind = (isUnspec ? s_kind_template : (isNative ? s_kind___native : (isInline ? s_kind_inline : s_kind_fn)));
            s_Extended& ext = EXT_mut_nPdL0dET(target, module, _scope);
            ext.tEmplate = tEmplate;
            ext.spec_of = overloadIdx;
        };
        bool didSetBody = false;

        { {
            if (!isInline && !isUnspec)
            { {
                s_Type retval { ret_seed };
                if (!isNative)
                {
                    s_SolvedNode s_body = solveBlock_E0WRPHag(n_body, ret_expect, target.index, (((s_HelpersMask_HM_Function | s_HelpersMask_HM_CanReturn) | s_HelpersMask_HM_LabelUsed) | ((n_fn.flags & s_Flags_F_LAMBDA) ? s_HelpersMask_HM_Lambda : s_HelpersMask{})), n_fn.value, 0, _scope, _helpers, module, _current_fn, _current_fnort_1, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                    fu_STR mustBecomeInlineBecause = currentFn_mustBecomeInline_zN39RUaN(_current_fn);
                    if (mustBecomeInlineBecause)
                    {
                        if (!(isFirst))
                            fail_LGxaAyqq("Function wants to become inline on after first solve."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                        if (isNoFlow)
                            fail_LGxaAyqq(("Function is not noflow: "_fu + qBAD_HfIK3mvn(mustBecomeInlineBecause)), _here, ctx, _helpers, _helpers_data, _scope, module);

                        s_Overload& o = GET_mut_tUm7lURP(target, _scope, module);
                        o.kind = s_kind_inline;
                        o.type = ret_expect;
                        goto BL_104;
                    };
                    const s_HelpersData* BL_110_v;
                    retval = (__extension__ (
                    {
                        const s_Helpers& h = s_body.helpers;
                        BL_110_v = &(_helpers_data[h.index]);
                    (void)0;}), *BL_110_v).ret_actual;
                    checkAssignable_ROonvup6(retval, s_body.type, "reval after runAllPasses"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), bool{}, _here, ctx, module, _helpers, _helpers_data, _scope);
                    const int idx_body = (outItems_VNYsk82N(_current_fn).size() + FN_BODY_BACK);
                    outItems_VNYsk82N(_current_fn).mutref(idx_body) = (s_body ? s_body : BUG_XksxYQ3i("falsy body"_fu, _here, ctx));
                    didSetBody = true;
                };
                const s_CurrentFn& out_1 = _current_fn;
                s_Type retval_1 { retval };
                const bool maybeLast = true;
                _here = (n_fn.token ? n_fn.token : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
                if (GET_jZDx3Hiu(target, _scope, module, ctx).status & s_SolverStatus_SS_DIRTY)
                {
                    GET_mut_tUm7lURP(target, _scope, module).status |= s_SolverStatus_SS_UPDATED;
                    goto BL_105;
                };
                fu::view<s_SolvedNode> items_1 = out_1.out.items;
                const int N = (items_1.size() + FN_ARGS_BACK);
                int min = 0;
                int max = 0;
                const s_NativeHacks NativeHacks = (isNative ? NativeHacks_1FBeX0Ih(GET_jZDx3Hiu(target, _scope, module, ctx).name) : s_NativeHacks{});
                fu_VEC<s_Argument> args_1 {};
                for (int i_3 = 0; i_3 < N; i_3++)
                {
                    const s_SolvedNode& argNode = items_1[i_3];
                    if (!(argNode.kind == s_kind_letdef))
                    {
                        if (argNode.target)
                            BUG_XksxYQ3i(("Argnode is not letdef, but has a target: "_fu + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(argNode.target, _scope, module, ctx), module, _scope, ctx)), _here, ctx);

                    };
                    s_SolvedNode argNode_1 { ((argNode.kind == s_kind_letdef) ? GET_jZDx3Hiu(argNode.target, _scope, module, ctx).solved : argNode) };
                    if (!(argNode_1.kind == s_kind_let))
                        BUG_XksxYQ3i(fu_STR{}, _here, ctx);

                    fu_STR name { argNode_1.value };
                    fu_STR autocall = ((argNode_1.flags & s_Flags_F_COMPOUND_ID) ? CompoundArgID_outerSplice_k4Tw2yvK(name, _here, ctx) : fu_STR{});
                    const bool isImplicit = !!(argNode_1.flags & s_Flags_F_IMPLICIT);
                    const s_Target argTarget { argNode_1.target };
                    const bool written_via = (!isUnspec && is_mutref_4X1iL0ll(argNode_1.type, _here, ctx) && (isNative || has_ur5UoMYg(out_1.events.ever_written, argTarget.index)));
                    s_BitSet soft_risk {};
                    s_BitSet hard_risk {};
                    if (written_via)
                    {
                        if (!isNative)
                        {
                            ArgsAtRisk_list_BERt8JVr(soft_risk, out_1.flow, i_3, out_1.flow.at_soft_risk);
                            ArgsAtRisk_list_BERt8JVr(hard_risk, out_1.flow, i_3, out_1.flow.at_hard_risk);
                            if (TODO_FIX_isArray_4X1iL0ll(argNode_1.type))
                            {
                                s_BitSet soft { soft_risk };
                                and_not_assign_KQfktl8z(soft, hard_risk);
                                each_ybnMBsfL(soft, items_1, _scope, module, ctx, hard_risk);
                            };
                        }
                        else
                        {
                            add_range_sDUBjUzV(soft_risk, N);
                            rem_sDUBjUzV(soft_risk, i_3);
                            if (!NativeHacks.soft_risk)
                                hard_risk = soft_risk;

                        };
                    };
                    if (isPure && written_via)
                    {
                        fu_STR _11 {};
                        fu_STR _12 {};
                        (_12 = (_11 = (((qWHAT_QRi0Vh4d(GET_jZDx3Hiu(target, _scope, module, ctx), module, _scope, ctx) + " is not pure, writes to argument "_fu) + qID_HfIK3mvn(human_mnvtGH07(name, module, _scope, ctx))) + ":\n"_fu), (static_cast<fu_STR&&>(_11) + qSTACK_edxH1uYk(target, out_1.out, Region_fromLocal_BaKYka79(argTarget.index), fu::view<s_Target>{}, _scope, module, ctx, _current_fnort_1, _here))), fail_LGxaAyqq(static_cast<fu_STR&&>(_12), _here, ctx, _helpers, _helpers_data, _scope, module));
                    };
                    if (isPureCtx && written_via && isImplicit)
                    {
                        fu_STR _13 {};
                        fu_STR _14 {};
                        (_14 = (_13 = (((qWHAT_QRi0Vh4d(GET_jZDx3Hiu(target, _scope, module, ctx), module, _scope, ctx) + " is not purectx, writes to implicit argument "_fu) + qID_HfIK3mvn(human_mnvtGH07(name, module, _scope, ctx))) + ":\n"_fu), (static_cast<fu_STR&&>(_13) + qSTACK_edxH1uYk(target, out_1.out, Region_fromLocal_BaKYka79(argTarget.index), fu::view<s_Target>{}, _scope, module, ctx, _current_fnort_1, _here))), fail_LGxaAyqq(static_cast<fu_STR&&>(_14), _here, ctx, _helpers, _helpers_data, _scope, module));
                    };
                    if (maybeLast && isNovec && !is_trivial_K61azC5I(argNode_1.type, module, ctx) && (is_rx_copy_4X1iL0ll(argNode_1.type) || is_rx_resize_4X1iL0ll(argNode_1.type)))
                        fail_LGxaAyqq(((((qWHAT_QRi0Vh4d(GET_jZDx3Hiu(target, _scope, module, ctx), module, _scope, ctx) + " is not novec, argument "_fu) + qID_HfIK3mvn(human_mnvtGH07(name, module, _scope, ctx))) + " is "_fu) + humanizeType_4XPtiI5K(argNode_1.type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

                    s_Argument arg = s_Argument { fu_STR(name), fu_STR(autocall), s_Type(argNode_1.type), s_SolvedNode((!isImplicit ? argNode_1.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), (argNode_1.flags | (written_via ? s_Flags_F_WRITTEN_TO : s_Flags{})), int(argTarget.index), s_BitSet(soft_risk), s_BitSet(hard_risk) };
                    if (!(arg.type || isUnspec))
                        BUG_XksxYQ3i((("updateScope: Unexpected untyped argument: `"_fu + name) + "`."_fu), _here, ctx);

                    args_1.push(s_Argument(arg));
                    if (!isImplicit)
                    {
                        if (max != int(0x7fffffffu))
                            max++;

                        if (!arg.dEfault)
                            min++;

                    };
                    if (arg.flags & s_Flags_F_REST_ARG)
                        max = int(0x7fffffffu);

                    if (is_ref_4X1iL0ll(retval_1) && is_ref_4X1iL0ll(argNode_1.type))
                    {
                        const s_Region region = Region_fromLocal_BaKYka79(argTarget.index);
                        const int idx = find_u1VerSYt(retval_1.lifetime.uni0n, region);
                        if ((idx >= 0))
                        {
                            retval_1.lifetime.uni0n.splice(idx, 1);
                            add_nWrnWrGy(retval_1.lifetime.uni0n, Region_fromArgPosition_BaKYka79(i_3));
                        };
                    };
                };
                s_Overload overload { GET_jZDx3Hiu(target, _scope, module, ctx) };
                s_Extended& ext = EXT_mut_nPdL0dET(target, module, _scope);
                bool change = false;
                if (ext.callers)
                {
                    change = ((args_1.size() != ext.args.size()) || !(overload.type == retval_1));
                    if (!change)
                    {
                        for (int i_4 = 0; i_4 < args_1.size(); i_4++)
                        {
                            const s_Argument& a = args_1[i_4];
                            const s_Argument& b = ext.args[i_4];
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
                ext.args = args_1;
                s_Overload& overload_1 = GET_mut_tUm7lURP(target, _scope, module);
                overload_1.type = retval_1;
                if (isInline)
                    goto BL_105;

                if (!(retval_1))
                    BUG_XksxYQ3i("updateScope: no return type."_fu, _here, ctx);

                if (is_ref_4X1iL0ll(retval_1))
                    Lifetime_test_EHx9VNGx(retval_1.lifetime, bool{}, _current_fn, _scope, module, ctx, _here, _current_fnort_1);

                each_THUTmgnQ(retval_1.lifetime.uni0n, _current_fnort_1, module, _scope, ctx, retval_1, _here);
                overload_1.flags = out_1.out.flags;

                {
                    const bool rtl = ((args_1.size() == 2) && (overload_1.flags & s_Flags_F_OPERATOR) && hasAssignment_LX3QLY5k(overload_1.name));
                    isRTL_set_9FzNg18P(overload_1, rtl);
                };
                if (change)
                    overload_1.status |= s_SolverStatus_SS_UPDATED;

                if (!isNative && !isInline && !isUnspec)
                {
                    const int sourceModid = tEmplate.node.token.modid;
                    fu_STR shortModuleName_1 = ((sourceModid != module.modid) ? (sourceModid && module.modid ? getShortModuleName_hDYH9Tpk(ctx.modules[sourceModid].fname) : fu_STR{}) : fu_STR(shortModuleName));
                    fu_STR sig = (((EXT_4ZiGP2RI(target, module, _scope, ctx).local_of ? fu::i64dec(target.index) : fu_STR{}) + shortModuleName_1) + mangleArguments_wpbA41Ww(EXT_4ZiGP2RI(target, module, _scope, ctx).args, _here, ctx));
                    fu_STR _15 {};
                    overload_1.sighash = (sig ? ((_15 = hash62_EhsXBDGJ(sig, 11)) ? static_cast<fu_STR&&>(_15) : BUG_XksxYQ3i(fu_STR{}, _here, ctx)) : fu_STR{});
                };
                solved_set_9x7XNSoR(target, (!isUnspec ? out_1 : (*(const s_CurrentFn*)fu::NIL)).out, _scope, module);
                if (!into && !isInline)
                {

                    {
                        fu::view<s_Argument> args_2 = EXT_4ZiGP2RI(target, module, _scope, ctx).args;
                        int _16 {};
                        const int start = ((_16 = (find_cnCAmU7Y(mangle, ' ') + 1)) ? _16 : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
                        fu_STR mangle_1 = (fu::slice(mangle, 0, start) + mangleArguments_wpbA41Ww(args_2, _here, ctx));

                        {
                            if (add_wAuMmv6B(mangles, mangle_1))
                            {
                                /*MOV*/ const s_Target preexisting { get_EQELHV7I(_specs, mangle_1) };
                                if (preexisting)
                                {
                                    rem_wAuMmv6B(mangles, mangle_1);
                                    resetSpec_RWYa9eYn(preexisting, maybeLast, currentSpec, mangles, isInline, _here, ctx, _specs, _scope, module);
                                    return /*NRVO*/ preexisting;
                                };
                                setSpec_FY6x4voZ(mangle_1, currentSpec, true, bool{}, isInline, _here, ctx, _specs, _scope, module);
                            };
                        };
                    };
                    resetSpec_RWYa9eYn(target, bool{}, currentSpec, mangles, isInline, _here, ctx, _specs, _scope, module);
                };
              } BL_105:;
            };
          } BL_104:;
        };
        if (!didSetBody)
        {
            const s_Overload& o = GET_jZDx3Hiu(target, _scope, module, ctx);
            if (!(o.kind != s_kind_fn))
                BUG_XksxYQ3i(((("did not set body on "_fu + qWHAT_QRi0Vh4d(o, module, _scope, ctx)) + ": "_fu) + humanizeType_4XPtiI5K(o.type, module, ctx)), _here, ctx);

        };
    };
    lazySolveEnd_5buTxZdy(target, _scope, module, ctx, _here, options, _helpers, _helpers_data, _notes, _specs, _ss, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, shortModuleName, _field_items, _current_fnort);
    return /*NRVO*/ target;
}

static bool lazySolveStart_nWoDZAJr(const s_Target& target, const s_Overload& overload, s_Scope& _scope, s_Module& module, s_TokenIdx& _here, const s_Context& ctx, s_Map_w7treiPq& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    if ((overload.status & (s_SolverStatus_SS_DID_START | s_SolverStatus_SS_LAZY)) != s_SolverStatus_SS_LAZY)
        return false;


    {
        s_Overload& o = GET_mut_tUm7lURP(target, _scope, module);
        if (o.status & ((s_SolverStatus_SS_FINALIZED | s_SolverStatus_SS_DID_START) | s_SolverStatus_SS_DIRTY))
            BUG_XksxYQ3i(x7E("SS_DID_START: non-zero solver status: "_fu, fu::i64dec(overload.status)), _here, ctx);

        o.status |= s_SolverStatus_SS_DID_START;
        if (o.kind == s_kind_fn)
            doTrySpecialize_lBFu4DhZ(target, s_Target{}, fu::view<s_SolvedNode>{}, (*(const fu_STR*)fu::NIL), fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, 0, (*(const s_Type*)fu::NIL), _scope, module, ctx, _here, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
        else if (o.kind == s_kind_type)
            __solveStruct_PgC99vo1(true, s_Node(EXT_4ZiGP2RI(target, module, _scope, ctx).tEmplate.node), target, _current_fn, _scope, module, ctx, _here, _helpers, _helpers_data, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
        else
            BUG_XksxYQ3i((x7E("lazySolveStart: kind is `"_fu, str_geTVZKmQ(o.kind)) + "`."_fu), _here, ctx);

    };
    return true;
}

static fu_STR str_MhpaSv7T(const int min, const int max)
{
    return ((min != max) ? (x7E((x7E("["_fu, fu::i64dec(min)) + ", "_fu), fu::i64dec(max)) + "]"_fu) : fu::i64dec(min));
}

static void reorderByNumUsings_3KdeFbzQ(bool& use_reorder, fu_VEC<int>& reorder, fu::view<s_Argument> host_args, const int num_args, const int num_usings)
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

                                #ifndef DEF_find_tkmelWjn
                                #define DEF_find_tkmelWjn
inline int find_tkmelWjn(fu::view<fu_STR> a, fu::view<char> b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static bool reorderByArgIDs_SomfYRUR(bool& use_reorder, fu_VEC<int>& reorder, fu::view<fu_STR> names, s_BitSet&& optional, fu::view<s_Argument> host_args, const int num_usings)
{
    use_reorder = true;
    reorder.clear();
    int used = 0;
    int offset = num_usings;
    for (int i = 0; i < host_args.size(); i++)
    {
        int idx = find_tkmelWjn(names, host_args[i].name);
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
            rem_sDUBjUzV(optional, i);
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
        if ((used + popcount_msUNRW3q(optional)) != names.size())
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

static fu_STR ERRMSG_findUnmatchedArgName_FsE4wT6q(fu::view<int> reorder, fu::view<fu_STR> names)
{
    s_BitSet used {};
    for (int i = 0; i < reorder.size(); i++)
    {
        const int pos = reorder[i];
        if ((pos >= 0))
            add_sDUBjUzV(used, pos);

    };
    for (int i_1 = 0; i_1 < names.size(); i_1++)
    {
        if (!has_ur5UoMYg(used, i_1))
            return fu_STR(names[i_1]);

    };
    return "[BUG: findUnmatchedArgName]"_fu;
}

static int findRestStart_yOfnVna9(const s_Extended& ext)
{
    for (/*MOV*/ int i = ext.args.size(); i-- > 0; )
    {
        const s_Argument& arg = ext.args[i];
        if (arg.flags & s_Flags_F_REST_ARG)
            return /*NRVO*/ i;

        if (!(arg.flags & s_Flags_F_IMPLICIT))
            break;

    };
    return ext.args.size();
}

static void foreach_Bn9KBeri(const s_Target& t, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const bool nullary, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_TokenIdx& _here, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_w7treiPq& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
{
    s_Type arg0type0 { TODO_FIX_convert_args[0].type };
    if (!nullary)
    {
        const int here = _current_fn.out.target.index;
        if (here && (t.index > here) && (t.modid == module.modid) && (EXT_4ZiGP2RI(t, module, _scope, ctx).local_of != here))
            return;

        if (root && retype)
            TODO_FIX_convert_args.mutref(0) = retype;
        else
            TODO_FIX_convert_args.mutref(0).type = from;

    };
    fu_DEFER(if (!nullary)
    {
        if (root && retype)
            TODO_FIX_convert_args.mutref(0) = arg0;
        else
            TODO_FIX_convert_args.mutref(0).type = arg0type0;

    });
    fu_STR error {};
    s_Target candidate {};
    if (nullary || (candidate = tryMatch__mutargs_gvVpQ1T3(fu_STR{}, TODO_FIX_reorder, TODO_FIX_conversions, error, bool{}, (*(const s_Scope*)fu::NIL), fu_VEC<s_SolvedNode>(TODO_FIX_convert_args), s_Flags_F_CONVERSION, t, _here, ctx, _scope, _ss, module, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort)))
    {
        const s_Target& t_1 = (nullary ? t : candidate);
        const s_Overload& convert = GET_jZDx3Hiu(t_1, _scope, module, ctx);
        if (!(convert.type))
            fail_LGxaAyqq((("No convert.type, perhaps a `using inline fn` without a return type annotation: `"_fu + qWHAT_QRi0Vh4d(convert, module, _scope, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Type convertType = ((convert.kind == s_kind_field) ? add_refs_87LkAOV4((from ? from : BUG_XksxYQ3i(fu_STR{}, _here, ctx)), s_Type(convert.type)) : s_Type(convert.type));
        const bool isStruct = isStruct_ZYIX8afu(convertType);
        if ((convert.status & (s_SolverStatus_SS_DID_START | s_SolverStatus_SS_FINALIZED)) == s_SolverStatus_SS_DID_START)
        {
        }
        else if (isAssignableAsArgument_lFwbQ75H(expect, convertType, bool{}))
        {
            if (match)
            {
                fu_STR suffix = (((("\n\t\t"_fu + explainConversion_VONhKWTu(match, _scope, module, ctx)) + "\n\tand:"_fu) + "\n\t\t"_fu) + explainConversion_VONhKWTu((path + t_1), _scope, module, ctx));
                if (actual)
                    fail_LGxaAyqq(((((("Conversion ambiguity, multiple ways to convert `"_fu + humanizeType_4XPtiI5K(actual, module, ctx)) + "` into `"_fu) + humanizeType_4XPtiI5K(expect, module, ctx)) + "`: "_fu) + suffix), _here, ctx, _helpers, _helpers_data, _scope, module);
                else
                    fail_LGxaAyqq(((("`using` ambiguity, multiple ways to obtain a `"_fu + humanizeType_4XPtiI5K(expect, module, ctx)) + "` in this scope: "_fu) + suffix), _here, ctx, _helpers, _helpers_data, _scope, module);

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
                            fu_STR err = "Conversion loop:\n"_fu;
                            for (int i_1 = i; i_1 < path.size(); i_1++)
                            {
                                err += "\n\t    "_fu;
                                const s_Overload& convert_1 = GET_jZDx3Hiu(path[i_1], _scope, module, ctx);
                                err += (((qWHAT_QRi0Vh4d(convert_1, module, _scope, ctx) + ": "_fu) + humanizeType_4XPtiI5K(convertType, module, ctx)) + " ->"_fu);
                            };
                            err += ("\n\t        "_fu + qWHAT_QRi0Vh4d(convert, module, _scope, ctx));
                            fail_LGxaAyqq(fu_STR(err), _here, ctx, _helpers, _helpers_data, _scope, module);
                        };
                    };
                };
                path.push(s_Target(t_1));
                fu_DEFER(path.pop());
                descend_7DdtnphX(convertType, false, isStruct, bool{}, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, _current_fn, module, ctx, retype, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _field_items, _specs, _helpers, _helpers_data, _root_scope, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, expect, match, path, actual, has_converts);
            };
        };
    };
}

                                #ifndef DEF_each_wsUS9NfI
                                #define DEF_each_wsUS9NfI
inline void each_wsUS9NfI(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const bool nullary, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_TokenIdx& _here, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_w7treiPq& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
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
            foreach_Bn9KBeri(u, TODO_FIX_convert_args, nullary, _current_fn, module, _scope, ctx, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, expect, match, path, actual, local_scope, misc_scope, has_converts);
        };
        i0 = ss.end;
    };
}
                                #endif

                                #ifndef DEF_each_XX4aTl8o
                                #define DEF_each_XX4aTl8o
inline void each_XX4aTl8o(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const bool nullary, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_TokenIdx& _here, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_w7treiPq& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
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
            foreach_Bn9KBeri(items[i_1], TODO_FIX_convert_args, nullary, _current_fn, module, _scope, ctx, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, expect, match, path, actual, local_scope, misc_scope, has_converts);

        i0 = ss.end;
    };
}
                                #endif

static void descend_7DdtnphX(const s_Type& from, const bool nullary, const bool isStruct, const bool root, const bool local_scope, s_Scope& _scope, const s_Scope& misc_scope, s_ScopeSkipMemos& _ss, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_CurrentFn& _current_fn, s_Module& module, const s_Context& ctx, const s_SolvedNode& retype, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_TokenIdx& _here, fu_VEC<s_ScopeItem>& _field_items, s_Map_w7treiPq& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const int has_converts)
{
    if (nullary)
        each_wsUS9NfI(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).usings), fu_VEC<s_ScopeSkip>((local_scope ? _ss.usings : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, TODO_FIX_convert_args, nullary, _current_fn, module, _scope, ctx, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, expect, match, path, actual, local_scope, misc_scope, has_converts);
    else
    {
        if (isStruct)
        {
            fu_VEC<s_Target> inner { lookupStruct_VQxm8oyj(from, module, ctx).converts };
            for (int i = 0; i < inner.size(); i++)
                foreach_Bn9KBeri(s_Target(inner[i]), TODO_FIX_convert_args, nullary, _current_fn, module, _scope, ctx, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, expect, match, path, actual, local_scope, misc_scope, has_converts);

        };
        if (has_converts)
            each_XX4aTl8o(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).converts), fu_VEC<s_ScopeSkip>((local_scope ? _ss.converts : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, TODO_FIX_convert_args, nullary, _current_fn, module, _scope, ctx, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, expect, match, path, actual, local_scope, misc_scope, has_converts);

    };
}

static fu_VEC<s_Target> tryConvert_MJw8PTrK(const s_Type& expect, const s_Type& actual, const s_SolvedNode& retype, const bool local_scope, const s_Scope& misc_scope, s_Scope& _scope, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, s_CurrentFn& _current_fn, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_ScopeItem>& _field_items, s_Map_w7treiPq& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort)
{
    /*MOV*/ fu_VEC<s_Target> match {};
    fu_VEC<s_Target> path {};
    const int has_converts = (local_scope ? _scope : misc_scope).converts.size();
    s_SolvedNode arg0 { TODO_FIX_convert_args[0] };
    fu_VEC<int> TODO_FIX_reorder {};
    fu_VEC<fu_VEC<s_Target>> TODO_FIX_conversions {};
    descend_7DdtnphX(actual, !actual, isStruct_ZYIX8afu(actual), true, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, _current_fn, module, ctx, retype, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _field_items, _specs, _helpers, _helpers_data, _root_scope, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, expect, match, path, actual, has_converts);
    return /*NRVO*/ match;
}

                                #ifndef DEF_grow_if_oob_uJ1AiJLJ
                                #define DEF_grow_if_oob_uJ1AiJLJ
inline fu_VEC<s_Target>& grow_if_oob_uJ1AiJLJ(fu_VEC<fu_VEC<s_Target>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu_STR qWHAT_sR8j7zSj(const s_Argument& arg, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return (qKW_HfIK3mvn("arg"_fu) + " "_fu) + qID_HfIK3mvn(human_mnvtGH07(arg.name, module, _scope, ctx));
}

                                #ifndef DEF_replace_4ztIx3lI
                                #define DEF_replace_4ztIx3lI
inline fu_STR replace_4ztIx3lI(const fu_STR& str, fu::view<char> all, fu::view<char> with)
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

                                #ifndef DEF_only_DOdGIdgW
                                #define DEF_only_DOdGIdgW
inline const fu_VEC<s_Target>& only_DOdGIdgW(fu::view<fu_VEC<s_Target>> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Type solveArrlit_itemType_init_28IaK84j(const s_Type& head, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Type _0 {};
    return (_0 = clear_refs_4X1iL0ll(s_Type(head))) ? static_cast<s_Type&&>(_0) : BUG_XksxYQ3i(fu_STR{}, _here, ctx);
}

static s_Type solveArrlit_done_1XYx64qk(const s_Type& itemType, const s_TokenIdx& _here, const s_Context& ctx)
{
    return createArray_4X1iL0ll(itemType, _here, ctx);
}

static s_Target GETfn_kSkv8dfS(const int idx, const s_Module& module)
{
    return s_Target { int(module.modid), int(idx) };
}

static fu_STR fnName_VQ4lKTFD(const int idx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return (idx ? (("`"_fu + GET_jZDx3Hiu(GETfn_kSkv8dfS(idx, module), _scope, module, ctx).name) + "`"_fu) : "global scope"_fu);
}

static void disambig_kVetdUDf(const s_Target& matchIdx, const s_Target& overloadIdx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_CurrentFn& _current_fn, fu::view<char> id, const s_TokenIdx& _here, fu::view<fu_VEC<s_Target>> conversions, fu::view<fu_VEC<s_Target>> conversions_1, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (matchIdx)
    {
        const s_Target& PREV = matchIdx;
        const s_Target& NEXT = overloadIdx;
        const int inner = localOf_APXUPlh3(PREV, module, _scope, ctx);
        const int outer = localOf_APXUPlh3(NEXT, module, _scope, ctx);
        const int callsite = _current_fn.out.target.index;
        if (SELF_TEST && (GET_jZDx3Hiu(PREV, _scope, module, ctx).kind != s_kind_field))
        {
            int _c = callsite;
            while (_c > inner)
                _c = localOf_APXUPlh3(GETfn_kSkv8dfS(_c, module), module, _scope, ctx);

            if (!(_c == inner))
                BUG_XksxYQ3i(((((((("Leaking `"_fu + id) + "` between functions [inner/callsite]: "_fu) + fnName_VQ4lKTFD(inner, module, _scope, ctx)) + "::"_fu) + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(PREV, _scope, module, ctx), module, _scope, ctx)) + " is seen from "_fu) + fnName_VQ4lKTFD(callsite, module, _scope, ctx)), _here, ctx);

            int _i = inner;
            while (_i > outer)
                _i = localOf_APXUPlh3(GETfn_kSkv8dfS(_i, module), module, _scope, ctx);

            if (!(_i == outer))
                BUG_XksxYQ3i(((((((((((("Leaking `"_fu + id) + "` between functions [inner/outer]: "_fu) + fnName_VQ4lKTFD(inner, module, _scope, ctx)) + "::"_fu) + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(PREV, _scope, module, ctx), module, _scope, ctx)) + " and "_fu) + fnName_VQ4lKTFD(outer, module, _scope, ctx)) + "::"_fu) + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(NEXT, _scope, module, ctx), module, _scope, ctx)) + " as seen from "_fu) + fnName_VQ4lKTFD(callsite, module, _scope, ctx)), _here, ctx);

        };
        fail_LGxaAyqq((((((((((((("Ambiguous callsite, matches multiple items in scope:"_fu + "\n\n\t"_fu) + explainWhichFn_ysdx7wFu(PREV, conversions, _scope, module, ctx)) + " from "_fu) + fnName_VQ4lKTFD(inner, module, _scope, ctx)) + " and "_fu) + "\n\n\t"_fu) + explainWhichFn_ysdx7wFu(NEXT, conversions_1, _scope, module, ctx)) + " from "_fu) + fnName_VQ4lKTFD(outer, module, _scope, ctx)) + ", as seen from "_fu) + fnName_VQ4lKTFD(callsite, module, _scope, ctx)) + "."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

                                #ifndef DEF_last_zafowtwr
                                #define DEF_last_zafowtwr
inline const fu_STR& last_zafowtwr(fu::view<fu_STR> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_Target tryMatch__mutargs_gvVpQ1T3(fu_STR&& id, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, fu_STR& error, const bool local_scope, const s_Scope& misc_scope, fu::view<s_SolvedNode> args, const s_Flags flags, const s_Target& target, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, s_ScopeSkipMemos& _ss, s_Module& module, fu_VEC<s_ScopeItem>& _field_items, s_Map_w7treiPq& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort)
{
    const int error_len0 = error.size();
    if (SELF_TEST)
    {
        for (int i = 0; i < args.size(); i++)
        {
            if (!args[i].kind)
                BUG_XksxYQ3i("Falsy arg.kind!"_fu, _here, ctx);

        };
    };
    /*MOV*/ s_Target matchIdx {};
    int minArity = args.size();
    const int numUsings = countUsings_uDGYoje7(local_scope, _scope, misc_scope, _ss, _here, ctx);
    const int explicitArity = minArity;
    const int maxArity = (explicitArity + numUsings);
    fu_VEC<fu_STR> names {};
    s_BitSet optional {};
    if (flags & s_Flags_F_NAMED_ARGS)
    {
        bool some = false;
        for (int i = 0; i < args.size(); i++)
        {
            const s_SolvedNode& arg = args[i];
            const fu_STR* _0;
            names.push(fu_STR(((arg.kind == s_kind_argid) ? (*(_0 = &(((void)(some = true), arg.value))) ? *_0 : BUG_XksxYQ3i(fu_STR{}, _here, ctx)) : (*(const fu_STR*)fu::NIL))));
            if (arg.flags & s_Flags_F_OPT_ARG)
            {
                minArity--;
                add_sDUBjUzV(optional, i);
            };
        };
        if (!(some))
            BUG_XksxYQ3i(fu_STR{}, _here, ctx);

    };
    fu_STR reusable_mangle {};
    fu_VEC<s_Target> extra_items {};
    if (local_scope && !target)
    {
        s_BitSet seen {};
        if (numUsings)
            each_2E32u7yY((local_scope ? _scope : misc_scope).usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, _scope, module, ctx, seen, local_scope, _ss, id, extra_items);

        if (flags & ((s_Flags_F_ACCESS | s_Flags_F_METHOD) | s_Flags_F_OPERATOR))
        {
            for (int i = 0; i < args.size(); i++)
                visitTypeImports_sJTS4h5b(args[i].type, module, ctx, seen, _scope, local_scope, _ss, id, extra_items);

        };
    };
    fu_VEC<s_ScopeItem> field_items { (local_scope && ((flags & s_Flags_F_ACCESS) || !minArity) && (minArity <= 1) && maxArity ? _field_items : (*(const fu_VEC<s_ScopeItem>*)fu::NIL)) };
    fu_VEC<fu_STR> alternate_ids {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        bool shadows {};
        while ((overloadIdx = search_7gDKHCyh((local_scope ? ((flags & s_Flags_F_IMPLICIT) ? _scope.implicits : _scope.items) : fu::get_view(misc_scope.items, 0, misc_scope.pub_items)), id, scope_iterator, (local_scope ? ((flags & s_Flags_F_IMPLICIT) ? _ss.implicits : _ss.items) : fu::view<s_ScopeSkip>{}), shadows, target, extra_items, field_items)))
        { {
            bool DEBUG_mustMatch = false;
            fu_VEC<fu_VEC<s_Target>> conversions_1 {};
            fu_VEC<int> reorder_1 {};
            bool TODO_FIX_skip_autocalls = false;
            while (true)
            {
                s_Overload overload { GET_jZDx3Hiu(overloadIdx, _scope, module, ctx) };
                if (lazySolveStart_nWoDZAJr(overloadIdx, overload, _scope, module, _here, ctx, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort))
                    continue;

                const s_kind kind = overload.kind;
                const bool isType = (kind == s_kind_type);
                if (minArity && isType && !target)
                {
                    const fu_STR& alt = overload.type.vtype.canon;
                    if (alt != id)
                        alternate_ids.push(fu_STR(alt));

                };
                const s_Extended& arity = EXT_4ZiGP2RI(overloadIdx, module, _scope, ctx);
                const bool isZeroInit = (isType && !explicitArity);
                if (!isZeroInit && ((arity.max < minArity) || (arity.min > maxArity)))
                {
                    if (DEBUG_mustMatch || error)
                    {
                        fu_STR err = ((qWHAT_QRi0Vh4d(overload, module, _scope, ctx) + ": "_fu) + (((("Wrong number of arguments: expects "_fu + str_MhpaSv7T(arity.min, arity.max)) + ", got "_fu) + str_MhpaSv7T(minArity, maxArity)) + "."_fu));
                        if (DEBUG_mustMatch)
                            BUG_XksxYQ3i(("mustMatch.matchFail: "_fu + err), _here, ctx);
                        else
                            error += ("\n\n\t"_fu + err);

                    };
                    goto BL_18;
                };
                fu_VEC<s_Argument> host_args { arity.args };
                const int num_usings = (!isZeroInit && (arity.min > explicitArity) ? (arity.min - explicitArity) : int{});
                bool use_reorder = false;
                if (!names)
                    reorderByNumUsings_3KdeFbzQ(use_reorder, reorder_1, host_args, args.size(), num_usings);
                else if (!reorderByArgIDs_SomfYRUR(use_reorder, reorder_1, names, s_BitSet(optional), host_args, num_usings))
                {
                    if (DEBUG_mustMatch || error)
                    {
                        fu_STR err = ((qWHAT_QRi0Vh4d(overload, module, _scope, ctx) + ": "_fu) + ("Unknown argument name: "_fu + ERRMSG_findUnmatchedArgName_FsE4wT6q(reorder_1, names)));
                        if (DEBUG_mustMatch)
                            BUG_XksxYQ3i(("mustMatch.matchFail: "_fu + err), _here, ctx);
                        else
                            error += ("\n\n\t"_fu + err);

                    };
                    goto BL_18;
                };
                if (optional && reorder_1 && (reorder_1.size() < args.size()) && (reorder_1.size() < arity.max))
                {
                    if (DEBUG_mustMatch || error)
                    {
                        fu_STR err = ((qWHAT_QRi0Vh4d(overload, module, _scope, ctx) + ": "_fu) + "Optional argument ambiguity, not all optional arguments provided, and not all callsite arguments used. Cannot distinguish from a typo. [TODO LIST MISSING ARGS]"_fu);
                        if (DEBUG_mustMatch)
                            BUG_XksxYQ3i(("mustMatch.matchFail: "_fu + err), _here, ctx);
                        else
                            error += ("\n\n\t"_fu + err);

                    };
                    goto BL_18;
                };
                s_Type REST_TYPE {};
                s_Type REST_EXPECT {};
                const int REST_START = findRestStart_yOfnVna9(arity);
                const int N = max_gcxVH86X((use_reorder ? reorder_1.size() : args.size()), (!isZeroInit ? arity.min : (*(const int*)fu::NIL)));
                if (REST_START < N)
                {
                    const s_Type& expect = host_args[REST_START].type;
                    if (expect)
                    {
                        s_Type _1 {};
                        REST_EXPECT = ((_1 = tryClear_sliceable_4X1iL0ll(expect)) ? static_cast<s_Type&&>(_1) : fail_LGxaAyqq(((GET_jZDx3Hiu(overloadIdx, _scope, module, ctx).name + ": Rest argument annotation is not an array: "_fu) + humanizeType_4XPtiI5K(expect, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module));
                    };
                };
                if (N)
                {
                    if (!((reorder_1.size() >= args.size()) || !reorder_1 || optional))
                        BUG_XksxYQ3i("reorder < args."_fu, _here, ctx);

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
                            if (host_arg.dEfault || (host_arg.flags & s_Flags_F_IMPLICIT))
                                continue;

                            s_Flags _2 {};
                            if (!((_2 = (host_arg.flags & s_Flags_F_MUSTNAME)) ? _2 : (flags & s_Flags_F_CONVERSION)))
                            {
                                if (expect)
                                {
                                    fu_VEC<s_Target> conversion = tryConvert_MJw8PTrK(expect, (*(const s_Type*)fu::NIL), (*(const s_SolvedNode*)fu::NIL), local_scope, misc_scope, _scope, TODO_FIX_convert_args, _ss, _current_fn, module, ctx, _here, _field_items, _specs, _helpers, _helpers_data, _root_scope, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort);
                                    if (conversion)
                                    {
                                        grow_if_oob_uJ1AiJLJ(conversions_1, i) = conversion;
                                        continue;
                                    };
                                };
                            };
                            if (DEBUG_mustMatch || error)
                            {
                                fu_STR err = ((qWHAT_QRi0Vh4d(overload, module, _scope, ctx) + ": "_fu) + ("Cannot infer missing argument "_fu + qWHAT_sR8j7zSj(host_arg, module, _scope, ctx)));
                                if (DEBUG_mustMatch)
                                    BUG_XksxYQ3i(("mustMatch.matchFail: "_fu + err), _here, ctx);
                                else
                                    error += ("\n\n\t"_fu + err);

                            };
                            goto BL_18;
                        };
                        if (host_arg.flags & s_Flags_F_MUSTNAME)
                        {
                            if ((names.size() <= callsiteIndex) || !names[callsiteIndex])
                            {
                                if (DEBUG_mustMatch || error)
                                {
                                    fu_STR err = ((qWHAT_QRi0Vh4d(overload, module, _scope, ctx) + ": "_fu) + ("Argument must be :explicitly named "_fu + qWHAT_sR8j7zSj(host_arg, module, _scope, ctx)));
                                    if (DEBUG_mustMatch)
                                        BUG_XksxYQ3i(("mustMatch.matchFail: "_fu + err), _here, ctx);
                                    else
                                        error += ("\n\n\t"_fu + err);

                                };
                                goto BL_18;
                            };
                        };
                        if (host_arg.autocall && !TODO_FIX_skip_autocalls)
                        {
                            fu_VEC<s_SolvedNode> autocall_args {};
                            fu_VEC<int> autocall_reorder {};
                            fu_VEC<fu_VEC<s_Target>> autocall_conversions {};
                            autocall_args.resize(1);
                            autocall_args.mutref(0) = args[callsiteIndex];
                            fu_STR autocall_error = (error ? (((("Cannot match argument "_fu + qWHAT_sR8j7zSj(host_arg, module, _scope, ctx)) + " autocall "_fu) + qCODE_HfIK3mvn(host_arg.autocall)) + ": "_fu) : fu_STR{});
                            const s_Target t = tryMatch__mutargs_gvVpQ1T3(fu_STR(host_arg.autocall), autocall_reorder, autocall_conversions, autocall_error, local_scope, misc_scope, autocall_args, s_Flags{}, s_Target{}, _here, ctx, _scope, _ss, module, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort);
                            if (!t)
                            {
                                if (DEBUG_mustMatch || error)
                                {
                                    fu_STR err = ((qWHAT_QRi0Vh4d(overload, module, _scope, ctx) + ": "_fu) + replace_4ztIx3lI(autocall_error, "\t"_fu, "\t\t"_fu));
                                    if (DEBUG_mustMatch)
                                        BUG_XksxYQ3i(("mustMatch.matchFail: "_fu + err), _here, ctx);
                                    else
                                        error += ("\n\n\t"_fu + err);

                                };
                                goto BL_18;
                            };
                            if (autocall_conversions)
                                grow_if_oob_uJ1AiJLJ(conversions_1, i) += only_DOdGIdgW(autocall_conversions);

                            grow_if_oob_uJ1AiJLJ(conversions_1, i) += s_Target(t);
                            if (!(autocall_reorder.size() < 2))
                                BUG_XksxYQ3i("autocall: reorder"_fu, _here, ctx);

                        };
                        const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                        s_Type actual { (hasConv ? GET_jZDx3Hiu(last_3cih1E88(conversions_1[i]), _scope, module, ctx).type : args[callsiteIndex].type) };
                        if (!expect)
                        {
                            if ((host_arg.flags & s_Flags_F_REF) && !is_mutref_4X1iL0ll(actual, _here, ctx))
                            {
                                if (DEBUG_mustMatch || error)
                                {
                                    fu_STR err = ((qWHAT_QRi0Vh4d(overload, module, _scope, ctx) + ": "_fu) + ((("Argument "_fu + qWHAT_sR8j7zSj(host_arg, module, _scope, ctx)) + " expects a mutref, got "_fu) + humanizeType_4XPtiI5K(actual, module, ctx)));
                                    if (DEBUG_mustMatch)
                                        BUG_XksxYQ3i(("mustMatch.matchFail: "_fu + err), _here, ctx);
                                    else
                                        error += ("\n\n\t"_fu + err);

                                };
                                goto BL_18;
                            };
                            continue;
                        };
                        if (isAssignableAsArgument_lFwbQ75H(expect, (actual ? actual : BUG_XksxYQ3i("tryMatch: !actual"_fu, _here, ctx)), bool{}))
                            continue;

                        if (!hasConv)
                        {
                            const s_SolvedNode& arg = args[callsiteIndex];
                            const s_SolvedNode& arg_1 = ((arg.kind == s_kind_argid) ? only_O0vxkflG(arg.items) : arg);
                            s_Type retype = tryRetyping_fhyto8pR(arg_1, expect, _here, ctx, _helpers, _helpers_data, _scope, module, t_string);
                            if (retype && isAssignableAsArgument_lFwbQ75H(expect, retype, bool{}))
                                continue;

                        };
                        if (!(flags & s_Flags_F_CONVERSION))
                        {
                            fu_VEC<s_Target> conversion = tryConvert_MJw8PTrK(expect, actual, (!hasConv ? args[callsiteIndex] : (*(const s_SolvedNode*)fu::NIL)), local_scope, misc_scope, _scope, TODO_FIX_convert_args, _ss, _current_fn, module, ctx, _here, _field_items, _specs, _helpers, _helpers_data, _root_scope, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort);
                            if (conversion)
                            {
                                grow_if_oob_uJ1AiJLJ(conversions_1, i) += conversion;
                                continue;
                            };
                        };
                        if (DEBUG_mustMatch || error)
                        {
                            fu_STR err = ((qWHAT_QRi0Vh4d(overload, module, _scope, ctx) + ": "_fu) + ((((("Argument "_fu + qWHAT_sR8j7zSj(host_arg, module, _scope, ctx)) + " expects "_fu) + humanizeType_4XPtiI5K(expect, module, ctx)) + ", got "_fu) + humanizeType_4XPtiI5K(actual, module, ctx)));
                            if (DEBUG_mustMatch)
                                BUG_XksxYQ3i(("mustMatch.matchFail: "_fu + err), _here, ctx);
                            else
                                error += ("\n\n\t"_fu + err);

                        };
                        goto BL_18;
                    };
                };
                if (REST_START < N)
                {
                    for (int i = REST_START; i < N; i++)
                    {
                        const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                        const int callsiteIndex = (use_reorder ? reorder_1[i] : i);
                        const s_Type& actual = (hasConv ? GET_jZDx3Hiu(last_3cih1E88(conversions_1[i]), _scope, module, ctx).type : args[callsiteIndex].type);
                        s_Type _3 {};
                        fu::never BL_80_v {};
                        REST_TYPE = ((i == REST_START) ? solveArrlit_itemType_init_28IaK84j(actual, _here, ctx) : ((_3 = type_trySuper_lFwbQ75H(REST_TYPE, actual, bool{})) ? static_cast<s_Type&&>(_3) : (__extension__ (
                        {
                            if (DEBUG_mustMatch || error)
                            {
                                fu_STR err = ((qWHAT_QRi0Vh4d(overload, module, _scope, ctx) + ": "_fu) + ((("Rest arguments have no common supertype: "_fu + humanizeType_4XPtiI5K(REST_TYPE, module, ctx)) + " <- "_fu) + humanizeType_4XPtiI5K(actual, module, ctx)));
                                if (DEBUG_mustMatch)
                                    BUG_XksxYQ3i(("mustMatch.matchFail: "_fu + err), _here, ctx);
                                else
                                    error += ("\n\n\t"_fu + err);

                            };
                            goto BL_18;
                        (void)0;}), static_cast<fu::never&&>(BL_80_v))));
                    };
                    REST_TYPE = solveArrlit_done_1XYx64qk(REST_TYPE, _here, ctx);
                };
                if (kind == s_kind_template)
                {
                    fu_STR cant_reuse {};
                    fu_STR& args_mangled = ((use_reorder || conversions_1) ? cant_reuse : reusable_mangle);
                    const s_Target specIdx = trySpecialize_2Jt2Ocmu(overloadIdx, args, args_mangled, REST_START, REST_TYPE, reorder_1, use_reorder, conversions_1, _scope, module, ctx, _here, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
                    if (is_SPECFAIL_2Ym2bj5i(specIdx))
                    {
                        if (DEBUG_mustMatch || error)
                        {
                            fu_STR err = ((qWHAT_QRi0Vh4d(overload, module, _scope, ctx) + ": "_fu) + ("Could not specialize: "_fu + _spec_errors[specIdx.index]));
                            if (DEBUG_mustMatch)
                                BUG_XksxYQ3i(("mustMatch.matchFail: "_fu + err), _here, ctx);
                            else
                                error += ("\n\n\t"_fu + err);

                        };
                        goto BL_18;
                    };
                    overloadIdx = specIdx;
                    DEBUG_mustMatch = true;
                    TODO_FIX_skip_autocalls = true;
                    continue;
                };
                disambig_kVetdUDf(matchIdx, overloadIdx, module, _scope, ctx, _current_fn, id, _here, conversions, conversions_1, _helpers, _helpers_data);
                std::swap(reorder_1, reorder);
                std::swap(conversions_1, conversions);
                matchIdx = overloadIdx;
                if (shadows)
                    goto LL_17;

                break;
            };
          } BL_18:;
        } LL_17:;

        if (!alternate_ids)
            break;

        id = last_zafowtwr(alternate_ids);
        alternate_ids.pop();
    };
    if (error && (error.size() == error_len0) && !matchIdx)
        error += (qID_HfIK3mvn(id) + " is not defined here."_fu);

    return /*NRVO*/ matchIdx;
}

                                #ifndef DEF_map_EJMXT3WB
                                #define DEF_map_EJMXT3WB
inline fu_VEC<fu_STR> map_EJMXT3WB(fu::view<s_SolvedNode> a, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = humanizeType_4XPtiI5K(a[i].type, module, ctx);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_join_tkmelWjn
                                #define DEF_join_tkmelWjn
inline fu_STR join_tkmelWjn(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    const int N = sep.size();
    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (N + a[i].size());

    /*MOV*/ fu_STR res {};
    res.grow<false>(size);
    fu::view<char> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<char> range = a[i_1];
        fu::view_assign(fu::get_view_mut(res, size, (size + N)), sep);
        size += N;
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return /*NRVO*/ res;
}
                                #endif

static s_Target match__mutargs_g8e8ARRc(const s_Scope& misc_scope, const bool local_scope, const fu_STR& id, fu::view<s_SolvedNode> args, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, const s_Flags flags, const s_Target& target, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, s_ScopeSkipMemos& _ss, s_Module& module, fu_VEC<s_ScopeItem>& _field_items, s_Map_w7treiPq& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort)
{
    fu_STR error {};
    /*MOV*/ const s_Target ret = tryMatch__mutargs_gvVpQ1T3(fu_STR(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, _here, ctx, _scope, _ss, module, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort);
    if (ret)
        return /*NRVO*/ ret;

    error = (((("Bad call to "_fu + qID_HfIK3mvn(id)) + " ("_fu) + join_tkmelWjn(map_EJMXT3WB(args, module, ctx), ", "_fu)) + "): "_fu);
    const s_Target debug = tryMatch__mutargs_gvVpQ1T3(fu_STR(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, _here, ctx, _scope, _ss, module, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort);
    if (debug)
        BUG_XksxYQ3i(("Did match on second pass: "_fu + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(debug, _scope, module, ctx), module, _scope, ctx)), _here, ctx);

    fail_LGxaAyqq(fu_STR(error), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void applyConversion_XpfjrIRC(s_SolvedNode& arg, fu::view<s_Target> conversion, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_w7treiPq& _specs, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_Warning>& _warnings, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort)
{
    for (int i = 0; i < conversion.size(); i++)
    {
        const s_Target& t = conversion[i];
        if (EXT_4ZiGP2RI(t, module, _scope, ctx).min || (EXT_4ZiGP2RI(t, module, _scope, ctx).max && arg))
        {
            arg = CallerNode_IZMFnbCX("__using.a"_fu, s_Target(t), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(arg) } }, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort);
            continue;
        };
        if (i)
            fail_LGxaAyqq((("Bad conversion chain, non-leading nullary: `"_fu + GET_jZDx3Hiu(t, _scope, module, ctx).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        if (arg)
            fail_LGxaAyqq("Bad conversion chain, about to throw away an argnode."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        arg = CallerNode_IZMFnbCX("__using.b"_fu, s_Target(t), fu_VEC<s_SolvedNode>{}, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort);
    };
}

static s_Type solveArrlit_itemType_cYHuRYwV(fu::view<s_SolvedNode> items, /*MOV*/ s_Type&& itemType, int start, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!itemType)
    {
        if (start == items.size())
            fail_LGxaAyqq("Cannot infer empty arraylit."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        itemType = solveArrlit_itemType_init_28IaK84j(items[start++].type, _here, ctx);
    }
    else if (is_ref_4X1iL0ll(itemType))
        fail_LGxaAyqq("Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    for (int i = start; i < items.size(); i++)
        itemType = superType_CUPiNEmC("Array literal: "_fu, itemType, items[i].type, (*(const fu_STR*)fu::NIL), module, ctx, _here, _helpers, _helpers_data, _scope);

    return static_cast<s_Type&&>(itemType);
}

static s_SolvedNode createArrlit_6WBXtFaY(fu_VEC<s_SolvedNode>&& items, const s_Type& itemType, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    s_Type itemType_1 = solveArrlit_itemType_cYHuRYwV(items, s_Type(itemType), 0, _here, ctx, _helpers, _helpers_data, _scope, module);
    return SolvedNode_MCGNnDLT(s_kind_arrlit, solveArrlit_done_1XYx64qk(itemType_1, _here, ctx), s_Flags{}, (*(const fu_STR*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
}

static s_Type intersectionType_zQwM5jM2(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope)
{
    s_Type _0 {};
    return (_0 = type_tryIntersect_87LkAOV4(a, b)) ? static_cast<s_Type&&>(_0) : fail_LGxaAyqq(((((((id ? (qID_HfIK3mvn(id) + ": "_fu) : fu_STR{}) + reason) + "Cannot intersect types: "_fu) + humanizeType_4XPtiI5K(a, module, ctx)) + " & "_fu) + humanizeType_4XPtiI5K(b, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_Target createLet_FU1qO7gP(const fu_STR& id, const s_Type& type, const s_Flags flags, bool& shadows, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort)
{
    /*MOV*/ const s_Target target = Binding_oadMuBRS(id, s_Type(type), flags, shadows, _current_fn, _root_scope, _scope, _ss, module, _here, ctx, _current_fnort);
    s_SolvedNode ret = SolvedNode_MCGNnDLT(s_kind_let, GET_jZDx3Hiu(target, _scope, module, ctx).type, flags, GET_jZDx3Hiu(target, _scope, module, ctx).name, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
    solved_set_9x7XNSoR(target, ret, _scope, module);
    return /*NRVO*/ target;
}

static s_Target injectImplicitArg_VjM918fR(const fu_STR& id, const s_Type& type, const s_Target& becauseOf, s_CurrentFn& _current_fn, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Target& _current_fnort)
{
    if (!_current_fn.out.items || (_current_fn.out.flags & s_Flags_F_EXTERN))
        fail_LGxaAyqq((((("No implicit "_fu + qBAD_HfIK3mvn(id)) + " in scope, needed to call "_fu) + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(becauseOf, _scope, module, ctx), module, _scope, ctx)) + "."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
    {
        s_SolvedNode& arg = _current_fn.out.items.mutref(i);
        /*MOV*/ const s_Target target { arg.target };
        s_SolvedNode& arg_1 = ((arg.kind == s_kind_letdef) ? GET_mut_tUm7lURP(target, _scope, module).solved : arg);
        if (arg_1.value == id)
        {
            s_Type super = intersectionType_zQwM5jM2("Implicit argument collision: "_fu, add_ref_HFjykOs8(s_Type(type), arg_1.type.lifetime, _here, ctx), arg_1.type, id, module, ctx, _here, _helpers, _helpers_data, _scope);
            arg_1.type = super;
            GET_mut_tUm7lURP(target, _scope, module).type = super;
            return s_Target((target ? target : BUG_XksxYQ3i(fu_STR{}, _here, ctx)));
        };
    };
    bool shadows {};
    s_Flags flags = (s_Flags_F_IMPLICIT | s_Flags_F_ARG);
    if (is_mutref_4X1iL0ll(type, _here, ctx))
        flags |= (s_Flags_F_REF | s_Flags_F_RELAXABLE_REF);

    /*MOV*/ const s_Target newArgTarget = createLet_FU1qO7gP(id, type, flags, shadows, _current_fn, _root_scope, _scope, _ss, module, _here, ctx, _current_fnort);
    const int newArgIdx = (_current_fn.out.items.size() + FN_ARGS_BACK);
    s_SolvedNode newLetDef = createLetDef_w5AOzZ1x(newArgTarget, _here);
    _current_fn.out.items.insert(newArgIdx, s_SolvedNode(newLetDef));
    return /*NRVO*/ newArgTarget;
}

static s_SolvedNode bindImplicitArg_l4bu3nC6(const fu_STR& name, const s_Type& type, const s_Target& becauseOf, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_w7treiPq& _specs, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_Warning>& _warnings, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort)
{

    {
        const s_ClosureID _ = tryParseClosureID_1FBeX0Ih(name);
        if (isLocal_g6xyL0JZ(_.target) && (localOf_APXUPlh3(_.target, module, _scope, ctx) == _current_fn.out.target.index))
        {
            if (!(_.revision == EXT_4ZiGP2RI(_current_fn.out.target, module, _scope, ctx).revision))
                fail_LGxaAyqq(x7E((x7E((("ClosureID.revision mismatch: "_fu + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(_.target, _scope, module, ctx), module, _scope, ctx)) + "\n\tCaptured at: "_fu), fu::i64dec(_.revision)) + "\n\tCurrent rev: "_fu), fu::i64dec(EXT_4ZiGP2RI(_current_fn.out.target, module, _scope, ctx).revision)), _here, ctx, _helpers, _helpers_data, _scope, module);

            if (!(GET_jZDx3Hiu(_.target, _scope, module, ctx).kind == s_kind_var))
                BUG_XksxYQ3i(("ClosureID.target is not a var: "_fu + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(_.target, _scope, module, ctx), module, _scope, ctx)), _here, ctx);

            return CallerNode_IZMFnbCX("__closure"_fu, s_Target(_.target), fu_VEC<s_SolvedNode>{}, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort);
        };
    };
    fu_STR error {};
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    s_Target _0 {};
    const s_Target target = ((_0 = tryMatch__mutargs_gvVpQ1T3(fu_STR(name), reorder, conversions, error, true, (*(const s_Scope*)fu::NIL), fu::view<s_SolvedNode>{}, s_Flags_F_IMPLICIT, s_Target{}, _here, ctx, _scope, _ss, module, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort)) ? _0 : (_0 = injectImplicitArg_VjM918fR(name, type, becauseOf, _current_fn, _scope, module, ctx, _here, _helpers, _helpers_data, _root_scope, _ss, _current_fnort)) ? _0 : BUG_XksxYQ3i(fu_STR{}, _here, ctx));
    const s_Overload& o = GET_jZDx3Hiu(target, _scope, module, ctx);
    if (!(o.flags & s_Flags_F_IMPLICIT))
        fail_LGxaAyqq((((("Matching a non-implicit item in scope: `"_fu + name) + "`, binds to call to `"_fu) + GET_jZDx3Hiu(becauseOf, _scope, module, ctx).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    checkAssignable_ROonvup6(type, o.type, (("Implicit `"_fu + name) + "` type mismatch"_fu), (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), true, _here, ctx, module, _helpers, _helpers_data, _scope);
    return CallerNode_IZMFnbCX("__implicit"_fu, s_Target(target), fu_VEC<s_SolvedNode>{}, reorder, conversions, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort);
}

static void applyRetype_bp1pPFVi(s_SolvedNode& node, const s_Type& retype)
{
    if (node.kind == s_kind_if)
    {
        applyRetype_bp1pPFVi(node.items.mutref(1), retype);
        applyRetype_bp1pPFVi(node.items.mutref(2), retype);
    };
    node.type = retype;
}

static s_SolvedNode createLet_LI0bkI4h(const fu_STR& id, const s_Flags flags, const s_SolvedNode& init, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Options& options, int& _notes, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Target& _current_fnort)
{
    s_SolvedNode out = solveLetLike_dontTouchScope_mAdiQngQ(id, s_Flags(flags), init, (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes);
    return solveLet_a4klVQZh(out, id, _here, ctx, _scope, module, _current_fn, _root_scope, _ss, _current_fnort);
}

                                #ifndef DEF_x3Cx3E_W8M95nYl
                                #define DEF_x3Cx3E_W8M95nYl
inline int x3Cx3E_W8M95nYl(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_add_9EOxwUBL
                                #define DEF_add_9EOxwUBL
inline bool add_9EOxwUBL(fu_VEC<int>& keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_W8M95nYl(keys[i], item);
        if (cmp == 0)
        {
            return false;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, int(item));
    return true;
}
                                #endif

                                #ifndef DEF_N_TypeRecursion
                                #define DEF_N_TypeRecursion
inline constexpr int N_TypeRecursion = (1 << 3);
                                #endif

                                #ifndef DEF_N_FnRecursion
                                #define DEF_N_FnRecursion
inline constexpr int N_FnRecursion = (1 << 0);
                                #endif

static void detectRecursion_BD5VRKN0(const s_Target& target, s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Options& options, int& _notes)
{
    s_Overload overload { GET_jZDx3Hiu(target, _scope, module, ctx) };
    if ((overload.status & (s_SolverStatus_SS_FINALIZED | s_SolverStatus_SS_LAZY)) != s_SolverStatus_SS_LAZY)
        return;

    const int note = ((overload.kind == s_kind_type) ? N_TypeRecursion : N_FnRecursion);
    const s_SolverStatus status = ((overload.kind == s_kind_type) ? s_SolverStatus_SS_TYPE_RECUR : s_SolverStatus_SS_FN_RECUR);
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (!isFnOrType_34GzJBPX(h, _helpers_data))
            continue;

        if (((void)void(), _helpers_data[h.index]).mask & s_HelpersMask_HM_Lambda)
            BUG_XksxYQ3i("Recursive lambda, what happened here?"_fu, _here, ctx);

        GET_mut_tUm7lURP(((void)void(), _helpers_data[h.index]).target, _scope, module).status |= status;
        makeNote_6kXvqC8U(note, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        if (((void)void(), _helpers_data[h.index]).target == target)
            return;

    };
    BUG_XksxYQ3i((x7E((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu), fu::i64dec(overload.status)) + ")`."_fu), _here, ctx);
}

static s_SolvedNode CallerNode_IZMFnbCX(const fu_STR& debug, s_Target&& target, fu_VEC<s_SolvedNode>&& args, const fu_VEC<int>& reorder, fu::view<fu_VEC<s_Target>> conversions, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_w7treiPq& _specs, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_Warning>& _warnings, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort)
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
        applyConversion_XpfjrIRC(args.mutref(argIdx), conversion, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort);
    };
    const int REST_START = findRestStart_yOfnVna9(EXT_4ZiGP2RI(target, module, _scope, ctx));
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
                args.mutref(i) = createArrlit_6WBXtFaY(fu_VEC<s_SolvedNode>(rest), (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
    };
    const bool isZeroInit = ((GET_jZDx3Hiu(target, _scope, module, ctx).kind == s_kind_type) && !args.size());
    if (!isZeroInit)
    {
        fu_VEC<s_Argument> host_args { EXT_4ZiGP2RI(target, module, _scope, ctx).args };
        args.resize(host_args.size());
        for (int i = 0; i < args.size(); i++)
        {
            if (!args[i])
            {
                const s_Argument& host_arg = host_args[i];
                args.mutref(i) = (host_arg.dEfault ? s_SolvedNode(host_arg.dEfault) : ((void)((host_arg.flags & s_Flags_F_IMPLICIT) || fail_LGxaAyqq((((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + humanizeType_4XPtiI5K(host_arg.type, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)), bindImplicitArg_l4bu3nC6(fu_STR(host_arg.name), s_Type(host_arg.type), target, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort)));
                if (is_never_4X1iL0ll(args[i].type))
                {
                    args.shrink((i + 1));
                    return deadCall_8IJFAFMK(args, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                };
            };
        };
    };
    s_Type type { GET_jZDx3Hiu(target, _scope, module, ctx).type };
    if (GET_jZDx3Hiu(target, _scope, module, ctx).kind == s_kind_field)
    {
        const s_Type* _0;
        type = add_refs_87LkAOV4((*(_0 = &(only_O0vxkflG(args).type)) ? *_0 : BUG_XksxYQ3i(fu_STR{}, _here, ctx)), s_Type(GET_jZDx3Hiu(target, _scope, module, ctx).type));
    }
    else if (GET_jZDx3Hiu(target, _scope, module, ctx).kind == s_kind_var)
    {
        if (GET_jZDx3Hiu(target, _scope, module, ctx).flags & s_Flags_F_INLINE)
            return s_SolvedNode(GET_jZDx3Hiu(target, _scope, module, ctx).solved.items[LET_INIT]);

        if (!(type.lifetime.uni0n.size() == 1))
            BUG_XksxYQ3i((("CallerNode: var "_fu + GET_jZDx3Hiu(target, _scope, module, ctx).name) + " type.lifetime.len != 1"_fu), _here, ctx);

        if (isLocal_g6xyL0JZ(target) && (localOf_APXUPlh3(target, module, _scope, ctx) != _current_fn.out.target.index))
        {
            s_ClosureID _1 {};
            int _2 {};
            const s_ClosureID clID = ((_1 = tryParseClosureID_1FBeX0Ih(GET_jZDx3Hiu(target, _scope, module, ctx).name)) ? _1 : s_ClosureID { s_Target(target), int(((_2 = EXT_4ZiGP2RI(parent_ZBXpIAjb(target, module, _scope, ctx), module, _scope, ctx).revision) ? _2 : BUG_XksxYQ3i(("ClosureID: about to serialize at rev 0: "_fu + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(target, _scope, module, ctx), module, _scope, ctx)), _here, ctx))) });
            target = injectImplicitArg_VjM918fR(serialize_5msm411l(clID), s_Type(GET_jZDx3Hiu(target, _scope, module, ctx).type), target, _current_fn, _scope, module, ctx, _here, _helpers, _helpers_data, _root_scope, _ss, _current_fnort);
            const s_Type* _3;
            type = (*(_3 = &(GET_jZDx3Hiu(target, _scope, module, ctx).type)) ? *_3 : BUG_XksxYQ3i(("CallerNode: !type on var "_fu + GET_jZDx3Hiu(target, _scope, module, ctx).name), _here, ctx));
        };
    }
    else
    {
        if (args)
        {
            fu::view<s_Argument> _4 {};
            fu::view<s_Argument> host_args = ((_4 = EXT_4ZiGP2RI(target, module, _scope, ctx).args) ? static_cast<fu::view<s_Argument>&&>(_4) : BUG_XksxYQ3i(("CallerNode: no host args: "_fu + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(target, _scope, module, ctx), module, _scope, ctx)), _here, ctx));
            if (!((host_args.size() >= args.size())))
                BUG_XksxYQ3i(("CallerNode: host_arg.len mismatch: "_fu + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(target, _scope, module, ctx), module, _scope, ctx)), _here, ctx);

            for (int i0 = 0; i0 < args.size(); i0++)
            {
                const s_Argument& host_arg = host_args[i0];
                s_SolvedNode& arg = args.mutref(i0);
                if (arg.kind == s_kind_argid)
                    arg = only_O0vxkflG(arg.items);

                const s_Type& expect = host_arg.type;
                s_Type retype = tryRetyping_fhyto8pR(arg, expect, _here, ctx, _helpers, _helpers_data, _scope, module, t_string);
                if (retype && isAssignableAsArgument_lFwbQ75H(expect, retype, bool{}))
                    applyRetype_bp1pPFVi(arg, retype);

            };
        };
        if (GET_jZDx3Hiu(target, _scope, module, ctx).kind == s_kind_inline)
        {
            const s_ScopeMemo scope0 = Scope_snap_WgJlFXyy(_scope, _helpers);
            s_ScopeSkipMemos ss0 { _ss };
            const int autoshadow_ok0 = _current_fn.autoshadow_ok;
            fu_DEFER(
            {
                Scope_pop_pJmZr7lr(_scope, scope0, _helpers);
                _ss = ss0;
                _current_fn.autoshadow_ok = autoshadow_ok0;
            });
            s_Template tEmplate { EXT_4ZiGP2RI(target, module, _scope, ctx).tEmplate };
            ScopeSkip_setup_90PFBgj9(tEmplate, scope0, true, _root_scope, _ss, _here, ctx, _current_fn, _scope);
            _scope.items += fu_VEC<s_ScopeItem>(EXT_4ZiGP2RI(target, module, _scope, ctx).extra_items);
            if (tEmplate.node.flags & s_Flags_F_TEMPLATE)
                _current_fn.autoshadow_ok++;

            s_Node n_fn { tEmplate.node };
            s_Node n_body { last_8DAoFAdf(n_fn.items) };
            s_Type ret_expect { GET_jZDx3Hiu(target, _scope, module, ctx).type };
            fu_VEC<s_Argument> host_args { EXT_4ZiGP2RI(target, module, _scope, ctx).args };
            fu_VEC<s_SolvedNode> arg_defs {};
            if (!(host_args.size() == args.size()))
                BUG_XksxYQ3i("inline: arglen mismatch"_fu, _here, ctx);

            const int locals_start = (args ? GET_next_local_index_ueCY9QGt(_current_fnort, _current_fn, _scope) : int{});
            for (int i = 0; i < args.size(); i++)
            {
                s_Argument slot { host_args[i] };
                s_SolvedNode arg_def = createLet_LI0bkI4h(fu_STR(slot.name), (slot.flags & ~(s_Flags_F_ARG | s_Flags_F_COMPOUND_ID)), args[i], _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn, _root_scope, _ss, _current_fnort);
                if (arg_def.kind == s_kind_empty)
                    continue;

                arg_defs += s_SolvedNode(arg_def);
                if (slot.flags & s_Flags_F_INLINE)
                    arg_defs.pop();

            };
            /*MOV*/ s_SolvedNode s_body = solveBlock_E0WRPHag(n_body, ret_expect, 0, ((s_HelpersMask_HM_CanReturn | ((n_fn.flags & s_Flags_F_LAMBDA) ? s_HelpersMask_HM_Lambda : s_HelpersMask{})) | (arg_defs ? s_HelpersMask_HM_KeepBlock : s_HelpersMask{})), n_fn.value, locals_start, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
            if (!(s_body.kind))
                BUG_XksxYQ3i("inline: no s_body.kind"_fu, _here, ctx);

            s_body.items.splice(0, 0, fu_VEC<s_SolvedNode>(arg_defs));
            return /*NRVO*/ s_body;
        };
        if (args && is_ref_4X1iL0ll(type))
            type.lifetime = Lifetime_test_EHx9VNGx(Lifetime_replaceArgsAtCallsite_Hrpld0tI(target, args, _scope, module, ctx, _current_fnort, _here), true, _current_fn, _scope, module, ctx, _here, _current_fnort);

    };
    /*MOV*/ s_SolvedNode callsite = SolvedNode_MCGNnDLT(s_kind_call, type, s_Flags{}, debug, args, target, s_Helpers{}, _here);
    if ((target.modid < 0) || (target.modid == module.modid))
    {
        const s_kind k = GET_jZDx3Hiu(target, _scope, module, ctx).kind;
        if ((k == s_kind_fn) || (k == s_kind_type))
        {
            add_9EOxwUBL(EXT_mut_nPdL0dET(target, module, _scope).callers, _current_fn_or_type.index);
            detectRecursion_BD5VRKN0(target, _scope, module, ctx, _helpers, _helpers_data, _here, options, _notes);
        };
    };
    return /*NRVO*/ callsite;
}

static s_SolvedNode solveCall_bMl1cXdC(const s_Node& node, const s_Target& target, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    fu_VEC<s_SolvedNode> args = solveNodes_VtQi5Tmy(node.items, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    if (is_never_4X1iL0ll(if_last_vOYHP1IT(args).type))
        return deadCall_8IJFAFMK(args, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

    fu_STR id { node.value };
    if (!id)
    {
        if (!(target))
            BUG_XksxYQ3i(fu_STR{}, _here, ctx);

    };
    const s_Flags qualified = (node.flags & s_Flags_F_COMPOUND_ID);
    const s_Scope& misc_scope = (qualified ? dequalify_andGetScope_0f9fzGjM(id, _here, ctx, _helpers, _helpers_data, _scope, module) : (*(const s_Scope*)fu::NIL));
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    const s_Target callTargIdx = match__mutargs_g8e8ARRc(misc_scope, !qualified, id, args, reorder, conversions, node.flags, target, _here, ctx, _scope, _ss, module, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort);
    return CallerNode_IZMFnbCX(node.value, s_Target(callTargIdx), fu_VEC<s_SolvedNode>(args), reorder, conversions, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort);
}

static s_Type evalTypeAnnot_Csai46oQ(const s_Node& node, const s_Map_9nzi56Zu& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    if (node.kind == s_kind_call)
    {
        fu::view<s_Node> items = node.items;
        if (items.size() == 1)
        {
            if (node.value == "&"_fu)
            {
                s_Type _0 {};
                return (_0 = T_SR6K8EwS(0, node, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort), add_ref_HFjykOs8(static_cast<s_Type&&>(_0), Lifetime_temporary_8nlJDPX0(), _here, ctx));
            };
            if (node.value == "&mut"_fu)
            {
                s_Type _1 {};
                return (_1 = T_SR6K8EwS(0, node, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort), add_mutref_HFjykOs8(static_cast<s_Type&&>(_1), Lifetime_temporary_8nlJDPX0(), _here, ctx));
            };
            if (node.value == "[]"_fu)
            {
                s_Type _2 {};
                return (_2 = T_SR6K8EwS(0, node, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort), createArray_4X1iL0ll(static_cast<s_Type&&>(_2), _here, ctx));
            };
        };
        return solveCall_bMl1cXdC(node, s_Target{}, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort).type;
    }
    else if (node.kind == s_kind_typeparam)
        return s_Type(evalTypeParam_ZDYMXUW9(node.value, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss));
    else if ((node.kind == s_kind_arrlit) && (node.items.size() == 1))
    {
        s_Type _3 {};
        return (_3 = T_SR6K8EwS(0, node, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort), createSlice_HFjykOs8(static_cast<s_Type&&>(_3), Lifetime_temporary_8nlJDPX0(), _here, ctx));
    };
    return solveNode_wDAIciWi(node, (*(const s_Type*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort).type;
}

                                #ifndef DEF_STRUCT_MEMBERS
                                #define DEF_STRUCT_MEMBERS
inline constexpr int STRUCT_MEMBERS = 1;
                                #endif

static s_SolvedNode solveMember_XR1L5A1h(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, const bool isPrimDecl, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Type& primType, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    if (!(node.kind == s_kind_let))
        BUG_XksxYQ3i(x7E("solveStructMembers_1: "_fu, str_omkBT2iF(node.kind)), _here, ctx);

    if (!isPrimDecl && node.items[LET_INIT] && (node.items[LET_INIT].kind != s_kind_definit))
        fail_LGxaAyqq(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node.value) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return solveLetLike_dontTouchScope_3VdDQy8a(node, (*(const s_Type*)fu::NIL), primType, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
}

                                #ifndef DEF_map_RwLI6cJz
                                #define DEF_map_RwLI6cJz
inline fu_VEC<s_SolvedNode> map_RwLI6cJz(fu::view<s_Node> a, s_TokenIdx& _here, const s_Context& ctx, const bool isPrimDecl, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Type& primType, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    /*MOV*/ fu_VEC<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember_XR1L5A1h(a[i], _here, ctx, isPrimDecl, _helpers, _helpers_data, _scope, module, primType, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_add_N7IVeTyr
                                #define DEF_add_N7IVeTyr
inline void add_N7IVeTyr(fu_VEC<int>& a, fu::view<int> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const int X = a[x];
        const int Y = b[y];
        const int cmp = x3Cx3E_gcxVH86X(X, Y);
        if ((cmp >= 0))
        {
            if (cmp != 0)
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

                                #ifndef DEF_each_zVYRWeDG
                                #define DEF_each_zVYRWeDG
inline void each_zVYRWeDG(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu_VEC<int>& structImports)
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
            add_9EOxwUBL(structImports, import);
        };
        i0 = ss.end;
    };
}
                                #endif

static s_SolvedNode __solveStruct_PgC99vo1(const bool solve, const s_Node& node, const s_Target& into, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    const fu_STR& origId = node.value;
    fu_STR _0 {};
    fu_STR name = (origId ? fu_STR(origId) : (_current_fn.out.target ? (((_0 = fu_STR(GET_jZDx3Hiu(_current_fn.out.target, _scope, module, ctx).name)) ? static_cast<fu_STR&&>(_0) : "Anon"_fu) + (GET_jZDx3Hiu(_current_fn.out.target, _scope, module, ctx).sighash ? ("_"_fu + GET_jZDx3Hiu(_current_fn.out.target, _scope, module, ctx).sighash) : fu_STR{})) : fu_STR{}));
    const s_kind kind = node.kind;
    const bool isStruct = (kind == s_kind_struct);
    const bool isUnion = (!isStruct && (kind == s_kind_union));
    const bool isPrimDecl = (!isStruct && !isUnion);
    s_Type basePrimType {};
    fu_STR baseprim {};
    if (isPrimDecl)
    {
        const s_Node& baseannot = node.items[STRUCT_BASE];
        basePrimType = (baseannot ? evalTypeAnnot_Csai46oQ(baseannot, (*(const s_Map_9nzi56Zu*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort) : s_Type(t_u8));
        baseprim = getBasePrimitive_qoK8YDgg(basePrimType, module, ctx);
    };
    s_Target out_target { into };
    s_Type out_type {};
    if (out_target)
        out_type = GET_jZDx3Hiu(out_target, _scope, module, ctx).type;
    else
    {
        out_type = initStruct_2K4k4ce4(kind, baseprim, name, node.asserts, module);
        out_target = Scope_Typedef_gq0kpTD8(_scope, origId, out_type, node.flags, name, s_SolverStatus_SS_LAZY, module);
        EXT_mut_nPdL0dET(out_target, module, _scope).tEmplate = createTemplate_EcY3P7H9(node, _current_fn, _scope, _helpers, _ss);
    };
    if (!solve)
        return createEmpty_YodOLeb9(s_kind_empty, out_type, out_target, _here);

    const s_Target current_fn_or_type0 { _current_fn_or_type };
    fu_DEFER(_current_fn_or_type = current_fn_or_type0);
    _current_fn_or_type = out_target;
    const s_Target& _current_fnort_1 = out_target;
    GET_mut_tUm7lURP(out_target, _scope, module).status |= s_SolverStatus_SS_DID_START;
    const int helpers0 = _helpers.size();
    const int helpers_data0 = _helpers_data.size();
    fu_DEFER(
    {
        _helpers.shrink(helpers0);
        _helpers_data.shrink(helpers_data0);
    });
    push_IM02W1LV(s_HelpersData { s_Target((out_target ? out_target : BUG_XksxYQ3i((("solveStruct: no out_target: `"_fu + origId) + "`."_fu), _here, ctx))), s_SolverPass{}, fu_STR{}, s_HelpersMask_HM_Struct, 0, 0, s_Type{}, s_Type{} }, _helpers, _helpers_data);
    fu_VEC<s_Target> structConverts {};
    fu_VEC<int> structImports {};
    int flat_cnt {};
    bool all_triv = true;
    const s_Type& primType = (isPrimDecl ? (out_type ? out_type : BUG_XksxYQ3i("Falsy isPrimDecl.out_type"_fu, _here, ctx)) : (*(const s_Type*)fu::NIL));
    fu::view<s_Node> items = node.items[STRUCT_MEMBERS].items;
    fu_VEC<s_SolvedNode> members = map_RwLI6cJz(items, _here, ctx, isPrimDecl, _helpers, _helpers_data, _scope, module, primType, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort_1);

    {
        fu_VEC<s_ScopeItem>& innerScope = lookupStruct_mut_04KaaAlz(out_type.vtype.canon, module).items;
        if (!innerScope && members)
        {
            fu_VEC<s_Argument> args = (!isPrimDecl ? fu_VEC<s_Argument> { fu::slate<1, s_Argument> { s_Argument { "this"_fu, fu_STR{}, despeculateStruct_CPSh38G1(s_Type(out_type)), s_SolvedNode{}, s_Flags{}, 0, s_BitSet{}, s_BitSet{} } } } : fu_VEC<s_Argument>{});
            for (int i = 0; i < members.size(); i++)
            {
                const fu_STR& id = items[i].value;
                const s_Flags isPredicate = (items[i].flags & s_Flags_F_PREDICATE);
                const s_Target target = Scope_create_8vkRC1Ki(_scope, (args ? s_kind_field : s_kind_enumv), (id ? id : BUG_XksxYQ3i(fu_STR{}, _here, ctx)), (*(const s_Type*)fu::NIL), (s_Flags_F_PUB | isPredicate), s_SolverStatus{}, 0, module);
                s_Extended& ext = EXT_mut_nPdL0dET(target, module, _scope);
                ext.args = args;
                ext.min = args.size();
                ext.max = args.size();
                Scope_set_hPlkl1cj(innerScope, id, target, false);
            };
            if (isPrimDecl)
                _scope.items += innerScope;
            else
                _field_items += innerScope;

        };
        if (!(innerScope.size() == members.size()))
            BUG_XksxYQ3i((((x7E((x7E((x7E("solveStructMembers_3: field lens mismatch: "_fu, fu::i64dec(innerScope.size())) + " vs "_fu), fu::i64dec(members.size())) + "/"_fu), fu::i64dec(items.size())) + ": `struct "_fu) + name) + "`."_fu), _here, ctx);

        for (int i = 0; i < innerScope.size(); i++)
        {
            const s_ScopeItem& item = innerScope[i];
            const s_SolvedNode& member = members[i];
            if (!(item.id == member.value))
                BUG_XksxYQ3i("solveStructMembers_4: field id mismatch."_fu, _here, ctx);

            s_Overload& field = GET_mut_tUm7lURP(target_wh65lsPu(item), _scope, module);
            field.type = member.type;
            int _1 {};
            flat_cnt += ((_1 = int(tryLookupStruct_K61azC5I(member.type, module, ctx).flat_cnt)) ? _1 : 1);
            if (all_triv)
                all_triv = is_trivial_K61azC5I(member.type, module, ctx);

            if (member.flags & s_Flags_F_USING)
            {
                structConverts.push(target_wh65lsPu(item));
                const int m = modidOfOrigin_ZYIX8afu(field.type);
                if (m && (m != module.modid))
                    add_itJnJlI8(structImports, m);

                add_N7IVeTyr(structImports, lookupTypeImports_K61azC5I(field.type, module, ctx));
            };
        };
        if (isPrimDecl)
        {
            const bool sIgned = (baseprim[0] == 'i');
            const bool uNsigned = (baseprim[0] == 'u');
            fu::view<char> size_str = fu::get_view(baseprim, 1, baseprim.size());
            const fu::u8 size = ((size_str == "8"_fu) ? fu::u8(8u) : ((size_str == "16"_fu) ? fu::u8(16u) : ((size_str == "32"_fu) ? fu::u8(32u) : ((size_str == "64"_fu) ? fu::u8(64u) : ((size_str == "128"_fu) ? fu::u8(128u) : BUG_XksxYQ3i(("Enum auto-incrementer: unknown prim size: "_fu + size_str), _here, ctx))))));
            s_Intlit last {};
            for (int i_1 = 0; i_1 < innerScope.size(); i_1++)
            {
                s_SolvedNode& init = GET_mut_tUm7lURP(target_wh65lsPu(innerScope[i_1]), _scope, module).solved;
                const s_SolvedNode& member = members[i_1];
                init = member.items[LET_INIT];
                _here = member.token;
                if (init)
                {
                    _here = init.token;
                    if (init.kind == s_kind_int)
                    {
                        last = Intlit_IQ08v4Hx(init.value);
                        if (last.error)
                            fail_LGxaAyqq(fu_STR(last.error), _here, ctx, _helpers, _helpers_data, _scope, module);

                        continue;
                    };
                    last.error = "Cannot auto-increment, please provide an explicit value."_fu;
                };
                if (last.error)
                    fail_LGxaAyqq(fu_STR(last.error), _here, ctx, _helpers, _helpers_data, _scope, module);

                if (last.negative)
                    fail_LGxaAyqq("Previous constant is negative, not sure how to increment, please specify an explicit value."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                s_Intlit next = Intlit_V3Khstyl(((kind == s_kind_flags) ? (i_1 ? (last.absval << 1ull) : 1ull) : (last.absval + 1ull)), bool{}, fu_STR{}, uNsigned, sIgned, 10ull);
                if (!(next.error || (next.absval > last.absval)))
                    fail_LGxaAyqq((next.error ? fu_STR(next.error) : "Failed to auto-increment, range exhausted."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

                const fu::u8 minsize = (sIgned ? next.minsize_i : next.minsize_u);
                if (minsize > size)
                    BUG_XksxYQ3i((x7E((x7E("Primitive range exhausted: requires "_fu, fu::u64dec(minsize)) + " bits, got "_fu), fu::u64dec(size)) + "."_fu), _here, ctx);

                last = next;
                if (sIgned || uNsigned)
                    init = SolvedNode_MCGNnDLT(s_kind_int, primType, s_Flags{}, x7E((next.negative ? "-"_fu : fu_STR{}), fu::u64dec(next.absval)), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
                else
                    fail_LGxaAyqq(("Cannot auto-increment this type: "_fu + baseprim), _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
    };
    each_zVYRWeDG(_scope.imports, _ss.imports, 0, structImports);

    {
        bool CHANGE = false;
        int commonQuals = -1;
        for (int i = 0; i < members.size(); i++)
            commonQuals &= members[i].type.vtype.quals;

        const int quals0 = out_type.vtype.quals;
        const int quals1 = (out_type.vtype.quals &= commonQuals);

        {
            if (!(CHANGE))
                CHANGE = (quals0 != quals1);

        };

        {
            s_Struct& s = lookupStruct_mut_04KaaAlz(out_type.vtype.canon, module);
            s.target = (out_target ? out_target : BUG_XksxYQ3i("No struct/out_target."_fu, _here, ctx));
            s.converts = structConverts;
            s.imports = structImports;
            const int flat0 = s.flat_cnt;
            const bool triv0 = s.all_triv;
            s.flat_cnt = flat_cnt;
            s.all_triv = all_triv;

            {
                if (!(CHANGE))
                    CHANGE = ((flat0 != flat_cnt) || (triv0 != all_triv));

            };
            if (!(GET_jZDx3Hiu(s.target, _scope, module, ctx).status & s_SolverStatus_SS_DID_START))
                BUG_XksxYQ3i("Setting stuff but missing SS_DID_START."_fu, _here, ctx);

        };
        int min = 0;
        fu_VEC<s_Argument> args {};
        if (isPrimDecl)
            args.push(s_Argument { "value"_fu, fu_STR{}, s_Type(basePrimType), s_SolvedNode{}, s_Flags{}, 0, s_BitSet{}, s_BitSet{} });
        else
        {
            int N = members.size();
            if (N && isUnion)
                N = 1;

            for (int i_1 = 0; i_1 < N; i_1++)
            {
                const s_SolvedNode& member = members[i_1];
                s_SolvedNode _2 {};
                s_Argument arg = s_Argument { fu_STR((member.value ? member.value : BUG_XksxYQ3i(fu_STR{}, _here, ctx))), fu_STR{}, s_Type((member.type ? member.type : BUG_XksxYQ3i(fu_STR{}, _here, ctx))), ((_2 = s_SolvedNode(member.items[LET_INIT])) ? static_cast<s_SolvedNode&&>(_2) : (isUnion ? createDefinit_kvd8QG0n(s_Type(member.type), _here, ctx) : s_SolvedNode{})), (member.flags & s_Flags_F_MUSTNAME), 0, s_BitSet{}, s_BitSet{} };
                if (!arg.dEfault)
                    min++;

                args.push(s_Argument(arg));
            };
        };
        const int max = args.size();
        if (max && !min)
            min++;

        s_Extended& ext = EXT_mut_nPdL0dET(out_target, module, _scope);
        ext.min = min;
        ext.max = max;
        ext.args = args;
        const int mustUpdate = (CHANGE ? ext.callers.size() : int{});
        s_Overload& overload = GET_mut_tUm7lURP(out_target, _scope, module);
        overload.type = out_type;
        if (mustUpdate)
            overload.status |= s_SolverStatus_SS_UPDATED;

    };
    lazySolveEnd_5buTxZdy(out_target, _scope, module, ctx, _here, options, _helpers, _helpers_data, _notes, _specs, _ss, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, shortModuleName, _field_items, _current_fnort_1);
    return s_SolvedNode{};
}

static s_SolvedNode uPrepStruct_DUdIqkWt(const s_Node& node, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    return __solveStruct_PgC99vo1(false, node, s_Target{}, _current_fn, _scope, module, ctx, _here, _helpers, _helpers_data, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
}

static s_SolvedNode unorderedPrep_A_7tQOPJtN(const s_Node& node, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_HelpersData>& _helpers_data, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    const s_kind kind = node.kind;
    if (kind == s_kind_fn)
        return uPrepFn_A_P56yLYev(node, _current_fn, _scope, module, _helpers, _ss, _root_scope, _here);

    if ((kind == s_kind_struct) || (kind == s_kind_union) || (kind == s_kind_primitive) || (kind == s_kind_enum) || (kind == s_kind_flags))
        return uPrepStruct_DUdIqkWt(node, _current_fn, _scope, module, ctx, _here, _helpers, _helpers_data, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    BUG_XksxYQ3i((x7E("TODO: unorderedPrep_A("_fu, str_omkBT2iF(node.kind)) + ")."_fu), _here, ctx);
}

static void uPrepFn_B_TVNdLx0k(const s_Target& target, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    s_Template& tEmplate = EXT_mut_nPdL0dET(target, module, _scope).tEmplate;
    if (tEmplate.scope_memo)
        tEmplate.scope_memo = Scope_snap_WgJlFXyy(_scope, _helpers);

}

static void unorderedPrep_B_XqZn0bXS(const s_Node& node, const s_Target& into, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    const s_kind k = node.kind;
    if (k == s_kind_fn)
        uPrepFn_B_TVNdLx0k(into, module, _scope, _helpers);

}

static fu_VEC<s_SolvedNode> solveNodes_VtQi5Tmy(fu::view<s_Node> nodes, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const fu_STR& static_eval_brk, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    /*MOV*/ fu_VEC<s_SolvedNode> result {};
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_Node& node = nodes[i];
        if (!node)
            continue;

        const int unorderedClass = unorderedClassify_o8QOzK7V(node.kind);
        if (!unorderedClass)
        {
            HERE_Qf4G9n8T(node.token, _here);
            const bool last = (i == (nodes.size() - 1));
            const s_Type& type = ((last && use_type_last) ? type_last : type_all);
            s_SolvedNode solved = solveNode_wDAIciWi(node, type, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
            result += s_SolvedNode(solved);
            if (is_never_4X1iL0ll(solved.type))
            {
                if (i < (nodes.size() - 1))
                    makeNote_6kXvqC8U(N_DeadCode, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

                break;
            };
            if (static_eval_brk && (solved.kind == s_kind_bool))
            {
                if (solved.value == static_eval_brk)
                    break;

                if (i < (nodes.size() - 1))
                    result.pop();

            };
            continue;
        };
        const int i0 = i;
        int i1 = nodes.size();
        const int offset = (result.size() - i0);
        for (int i_1 = i0; i_1 < nodes.size(); i_1++)
        {
            const s_Node* _0;
            const s_Node& node_1 = (*(_0 = &(nodes[i_1])) ? *_0 : BUG_XksxYQ3i("solveNodes, prep-a: falsy node"_fu, _here, ctx));
            if (unorderedClassify_o8QOzK7V(node_1.kind) != unorderedClass)
            {
                i1 = i_1;
                break;
            };
            HERE_Qf4G9n8T(node_1.token, _here);
            result += unorderedPrep_A_7tQOPJtN(node_1, _current_fn, _scope, module, _helpers, _ss, _root_scope, _here, ctx, _helpers_data, _warnings, _specs, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
        };
        if (!(i1 > i0))
            BUG_XksxYQ3i(fu_STR{}, _here, ctx);

        i = (i1 - 1);
        for (int i_2 = i0; i_2 < i1; i_2++)
        {
            const s_Node* _1;
            const s_Node& node_1 = (*(_1 = &(nodes[i_2])) ? *_1 : BUG_XksxYQ3i("solveNodes, prep-b: falsy node"_fu, _here, ctx));
            HERE_Qf4G9n8T(node_1.token, _here);
            unorderedPrep_B_XqZn0bXS(node_1, result[(i_2 + offset)].target, module, _scope, _helpers);
        };
        bool repeat = true;
        while (repeat)
        {
            repeat = false;
            for (int i_3 = i0; i_3 < i1; i_3++)
            {
                const s_Node* _2;
                const s_Node& node_1 = (*(_2 = &(nodes[i_3])) ? *_2 : BUG_XksxYQ3i("solveNodes, solve: falsy node"_fu, _here, ctx));
                HERE_Qf4G9n8T(node_1.token, _here);
                const s_Target& into = result[(i_3 + offset)].target;
                if (lazySolveStart_nWoDZAJr(into, s_Overload(GET_jZDx3Hiu(into, _scope, module, ctx)), _scope, module, _here, ctx, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort))
                    repeat = true;

            };
        };
    };
    return /*NRVO*/ result;
}

static s_SolvedNode solveRoot_TXZaJahJ(const s_Node& node, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    const s_Helpers helpers = s_Helpers { _helpers.size() };
    push_IM02W1LV(s_HelpersData{}, _helpers, _helpers_data);
    fu_VEC<s_SolvedNode> items = solveNodes_VtQi5Tmy(node.items, t_void, (*(const s_Type*)fu::NIL), bool{}, (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    if (!is_never_4X1iL0ll(last_vOYHP1IT(items).type))
    {
        /*MOV*/ s_SolvedNode root = SolvedNode_MCGNnDLT(s_kind_root, t_void, s_Flags{}, (*(const fu_STR*)fu::NIL), items, s_Target{}, helpers, _here);
        runAllPasses_wSnCoXvq(root, _here, module, ctx, _scope, _helpers_data, _current_fn, _warnings, _helpers, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
        return /*NRVO*/ root;
    };
    _here = last_vOYHP1IT(items).token;
    fail_LGxaAyqq("Noreturn during static init: this program will never finish booting."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_only_PyOsqkAH
                                #define DEF_only_PyOsqkAH
inline const s_Node& only_PyOsqkAH(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_SolvedNode solveArgID_itw12Dav(const s_Node& node, const s_Type& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    s_SolvedNode expr = solveNode_wDAIciWi(only_PyOsqkAH(node.items), type, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    return solved_h7iffphh(node, expr.type, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, _here);
}

                                #ifndef DEF_N_DeadArrlit
                                #define DEF_N_DeadArrlit
inline constexpr int N_DeadArrlit = (1 << 11);
                                #endif

static s_SolvedNode solveArrlit_Om4xuVR6(const s_Node& node, const s_Type& type, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    s_Type itemType = (type ? tryClear_sliceable_4X1iL0ll(type) : s_Type{});
    if (!itemType && isStruct_ZYIX8afu(type))
        return solveCall_bMl1cXdC(node, s_Target(lookupStruct_VQxm8oyj(type, module, ctx).target), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    fu_VEC<s_SolvedNode> args = solveNodes_VtQi5Tmy(node.items, itemType, (*(const s_Type*)fu::NIL), bool{}, (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    if (is_never_4X1iL0ll(if_last_vOYHP1IT(args).type))
    {
        makeNote_6kXvqC8U(N_DeadArrlit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return createBlock_ZRqsU458(t_never, fu_VEC<s_SolvedNode>(args), s_Helpers{}, _here, _helpers, _helpers_data, _scope, module);
    };
    if (!(node.flags & s_Flags_F_NAMED_ARGS))
        return createArrlit_6WBXtFaY(fu_VEC<s_SolvedNode>(args), itemType, _here, ctx, _helpers, _helpers_data, _scope, module);

    fail_LGxaAyqq("TODO: solveArrlit: tryMatch by [ argnames: ... ] without function name."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_N_DeadIfCond
                                #define DEF_N_DeadIfCond
inline constexpr int N_DeadIfCond = (1 << 9);
                                #endif

                                #ifndef DEF_N_DeadIfCons
                                #define DEF_N_DeadIfCons
inline constexpr int N_DeadIfCons = (1 << 10);
                                #endif

static s_SolvedNode popAndOr_UrG4AdzN(s_SolvedNode& node)
{
    const int N = node.items.size();
    /*MOV*/ s_SolvedNode pop { node.items[(N - 1)] };
    if (N > 2)
        node.items.pop();
    else
    {
        const s_SolvedNode& head = node.items[0];
        node = head;
    };
    return /*NRVO*/ pop;
}

static s_SolvedNode if_A_and_NEVER_then_B_else_C_jijVN1AF(const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, int& _notes, s_SolvedNode& cond)
{
    makeNote_6kXvqC8U(N_DeadIfCons, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    return popAndOr_UrG4AdzN(cond);
}

static s_Type convertToSuperType_xN6xql3B(fu::view<char> topic, s_SolvedNode& a, s_SolvedNode& b, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, s_CurrentFn& _current_fn, fu_VEC<s_ScopeItem>& _field_items, s_Map_w7treiPq& _specs, s_ScopeMemo& _root_scope, fu_VEC<s_Warning>& _warnings, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort)
{

    {
        /*MOV*/ s_Type super = type_trySuper_lFwbQ75H(a.type, b.type, bool{});
        if (super)
            return /*NRVO*/ super;

    };

    {
        s_Type aRetype = tryRetyping_fhyto8pR(a, b.type, _here, ctx, _helpers, _helpers_data, _scope, module, t_string);
        s_Type bRetype = tryRetyping_fhyto8pR(b, a.type, _here, ctx, _helpers, _helpers_data, _scope, module, t_string);
        if (aRetype)
        {
            if (bRetype)
                fail_LGxaAyqq(((((topic + ": Type ambiguity, literals can be retyped both ways: "_fu) + humanizeType_4XPtiI5K(a.type, module, ctx)) + " <-> "_fu) + humanizeType_4XPtiI5K(b.type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

            /*MOV*/ s_Type super = type_trySuper_lFwbQ75H(aRetype, b.type, bool{});
            if (super)
            {
                applyRetype_bp1pPFVi(a, aRetype);
                return /*NRVO*/ super;
            };
        };
        if (bRetype)
        {
            /*MOV*/ s_Type super = type_trySuper_lFwbQ75H(bRetype, a.type, bool{});
            if (super)
            {
                applyRetype_bp1pPFVi(b, bRetype);
                return /*NRVO*/ super;
            };
        };
    };

    {
        fu_VEC<s_Target> aConv = tryConvert_MJw8PTrK(b.type, a.type, (*(const s_SolvedNode*)fu::NIL), true, (*(const s_Scope*)fu::NIL), _scope, TODO_FIX_convert_args, _ss, _current_fn, module, ctx, _here, _field_items, _specs, _helpers, _helpers_data, _root_scope, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort);
        fu_VEC<s_Target> bConv = tryConvert_MJw8PTrK(a.type, b.type, (*(const s_SolvedNode*)fu::NIL), true, (*(const s_Scope*)fu::NIL), _scope, TODO_FIX_convert_args, _ss, _current_fn, module, ctx, _here, _field_items, _specs, _helpers, _helpers_data, _root_scope, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort);
        if (aConv)
        {
            if (bConv)
                fail_LGxaAyqq(((((topic + ": Type ambiguity, conversions exist both ways: "_fu) + humanizeType_4XPtiI5K(a.type, module, ctx)) + " <-> "_fu) + humanizeType_4XPtiI5K(b.type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

            applyConversion_XpfjrIRC(a, aConv, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort);
            return s_Type(b.type);
        };
        if (bConv)
        {
            applyConversion_XpfjrIRC(b, bConv, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort);
            return s_Type(a.type);
        };
    };
    fail_LGxaAyqq(((((topic + ": No common supertype: "_fu) + humanizeType_4XPtiI5K(a.type, module, ctx)) + " <-> "_fu) + humanizeType_4XPtiI5K(b.type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode solveIf_LsT5IeHF(const s_Node& node, s_Type&& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    /*MOV*/ s_SolvedNode cond = solveNode_wDAIciWi(node.items[0], t_bool, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    if (cond.kind == s_kind_bool)
        return solveNode_wDAIciWi(node.items[((cond.value == "true"_fu) ? 1 : 2)], type, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (is_never_4X1iL0ll(cond.type))
    {
        makeNote_6kXvqC8U(N_DeadIfCond, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return /*NRVO*/ cond;
    };
    s_SolvedNode cons = (((cond.kind == s_kind_and) && is_never_4X1iL0ll(last_vOYHP1IT(cond.items).type)) ? if_A_and_NEVER_then_B_else_C_jijVN1AF(options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes, cond) : solveBlock_E0WRPHag(node.items[1], type, 0, s_HelpersMask_HM_CanBreak, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items));
    s_SolvedNode alt = solveBlock_E0WRPHag(node.items[2], type, 0, s_HelpersMask_HM_CanBreak, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    if (!is_void_4X1iL0ll(type))
        type = convertToSuperType_xN6xql3B("if/else"_fu, cons, alt, _here, ctx, _helpers, _helpers_data, _scope, module, t_string, TODO_FIX_convert_args, _ss, _current_fn, _field_items, _specs, _root_scope, _warnings, _spec_errors, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort);

    if (is_never_4X1iL0ll(cons.type) && is_never_4X1iL0ll(alt.type))
        type = t_never;

    return solved_h7iffphh(node, (type ? type : BUG_XksxYQ3i(fu_STR{}, _here, ctx)), fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(cond), s_SolvedNode(cons), s_SolvedNode(alt) } }, s_Target{}, _here);
}

static s_SolvedNode solveOr_6zY5pIGL(const s_Node& node, s_Type&& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    fu_VEC<s_SolvedNode> items = solveNodes_VtQi5Tmy(node.items, (is_void_4X1iL0ll(type) ? t_bool : type), type, true, "true"_fu, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    if (items.size() < 2)
        return s_SolvedNode(only_O0vxkflG(items));

    if (is_void_4X1iL0ll(type))
        type = t_bool;

    if (!(type == t_bool))
    {
        s_Type sumType {};
        bool hasNever = false;
        for (int i = items.size(); i-- > 0; )
        {
            s_SolvedNode& item = items.mutref(i);
            if (is_never_4X1iL0ll(item.type))
            {
                hasNever = true;
                continue;
            };
            const s_SolvedNode& andLast = (hasNever && (item.kind == s_kind_and) && item.items ? item.items[(item.items.size() - 1)] : (*(const s_SolvedNode*)fu::NIL));
            const s_Type& itemType = ((andLast && !is_never_4X1iL0ll(andLast.type)) ? (item.type = andLast.type) : item.type);
            if (sumType)
            {
                sumType = type_trySuper_lFwbQ75H(sumType, itemType, bool{});
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
    return solved_h7iffphh(node, type, items, s_Target{}, _here);
}

static s_SolvedNode solveAnd_Z0orAzcT(const s_Node& node, s_Type&& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    fu_VEC<s_SolvedNode> items = solveNodes_VtQi5Tmy(node.items, (is_void_4X1iL0ll(type) ? t_bool : type), type, true, "false"_fu, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    if (items.size() < 2)
        return s_SolvedNode(only_O0vxkflG(items));

    if (is_void_4X1iL0ll(type))
        type = t_bool;

    if (!(type == t_bool))
    {
        s_Type sumType {};
        for (int i = items.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items[i];
            if (is_never_4X1iL0ll(item.type))
                continue;

            if (sumType)
            {
                sumType = type_trySuper_lFwbQ75H(sumType, item.type, bool{});
                if (!is_ref_4X1iL0ll(sumType))
                    break;

            }
            else
            {
                type = item.type;
                sumType = item.type;
                if (is_zeroes_4X1iL0ll(type))
                    break;

            };
        };
        if (!is_ref_4X1iL0ll(sumType))
        {
            if (is_ref_4X1iL0ll(type))
            {
                if (CANNOT_definit_mutrefs)
                    type = clear_mutref_4X1iL0ll(s_Type(type));

                type.lifetime = Lifetime_makeShared_MvT8pzW6(type.lifetime);
            };
        }
        else
            type = sumType;

    };
    return solved_h7iffphh(node, type, items, s_Target{}, _here);
}

static s_SolvedNode solveLetStatement_KCKSnj5F(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    if (!(node.kind == s_kind_let))
        BUG_XksxYQ3i((x7E("Expected a `let` statement, got: `"_fu, str_omkBT2iF(node.kind)) + "`."_fu), _here, ctx);

    return solveNode_wDAIciWi(node, t_void, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
}

                                #ifndef DEF_N_DeadLoopInit
                                #define DEF_N_DeadLoopInit
inline constexpr int N_DeadLoopInit = (1 << 12);
                                #endif

static s_SolvedNode solveLoop_3Xz6LTgL(const s_Node& node, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, const s_Target& _current_fnort, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    const s_ScopeMemo scope0 = Scope_snap_WgJlFXyy(_scope, _helpers);
    fu_DEFER(Scope_pop_pJmZr7lr(_scope, scope0, _helpers));
    const int brk_idx = _helpers.size();
    push_IM02W1LV(s_HelpersData { s_Target{}, s_SolverPass{}, fu_STR(node.value), (s_HelpersMask_HM_Anon | s_HelpersMask_HM_CanBreak), int(_current_fn.out.target.index), GET_next_local_index_ueCY9QGt(_current_fnort, _current_fn, _scope), s_Type{}, s_Type(t_void) }, _helpers, _helpers_data);
    const s_Node& n_init = node.items[LOOP_INIT];
    const s_Node& n_pre_cond = node.items[LOOP_COND];
    const s_Node& n_body = node.items[LOOP_BODY];
    const s_Node& n_post_cond = node.items[LOOP_POST_COND];
    const s_Node& n_post = node.items[LOOP_POST];
    /*MOV*/ s_SolvedNode init = (n_init ? solveLetStatement_KCKSnj5F(n_init, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort) : s_SolvedNode{});
    if (is_never_4X1iL0ll(init.type))
    {
        makeNote_6kXvqC8U(N_DeadLoopInit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return /*NRVO*/ init;
    };
    s_SolvedNode pre_cond = (n_pre_cond ? solveNode_wDAIciWi(n_pre_cond, t_bool, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort) : s_SolvedNode{});
    s_SolvedNode body = (n_body ? solveBlock_E0WRPHag(n_body, t_void, 0, s_HelpersMask_HM_CanBreak, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items) : s_SolvedNode{});
    s_SolvedNode post_cond = (n_post_cond ? solveNode_wDAIciWi(n_post_cond, t_bool, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort) : s_SolvedNode{});
    s_SolvedNode post = (n_post ? solveNode_wDAIciWi(n_post, t_void, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort) : s_SolvedNode{});
    const s_Helpers& h = _helpers[brk_idx];
    const s_Type& type = ((!pre_cond && !post_cond && !(((void)void(), _helpers_data[h.index]).mask & s_HelpersMask_HM_LabelUsed)) ? t_never : t_void);
    return SolvedNode_MCGNnDLT(s_kind_loop, type, s_Flags{}, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<5, s_SolvedNode> { s_SolvedNode(init), s_SolvedNode(pre_cond), s_SolvedNode(body), s_SolvedNode(post_cond), s_SolvedNode(post) } }, s_Target{}, h, _here);
}

static int Scope_lookupReturn_vCVFC5sW(const fu_STR& id, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Scope& _scope, const s_Module& module)
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
            const s_HelpersData* BL_5_v;
            if (!((__extension__ (
            {
                const s_Helpers& h = item;
                BL_5_v = &(_helpers_data[h.index]);
            (void)0;}), *BL_5_v).mask & s_HelpersMask_HM_CanReturn))
                continue;

            const s_HelpersData* BL_7_v;
            if ((__extension__ (
            {
                const s_Helpers& h = item;
                BL_7_v = &(_helpers_data[h.index]);
            (void)0;}), *BL_7_v).mask & s_HelpersMask_HM_Lambda)
                continue;

            const s_HelpersData* BL_9_v;
            if (id && ((__extension__ (
            {
                const s_Helpers& h = item;
                BL_9_v = &(_helpers_data[h.index]);
            (void)0;}), *BL_9_v).id != id))
                continue;

            return /*NRVO*/ i;
        };
    };
    fail_LGxaAyqq((("No return `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static int Scope_lookupLabel_N6FFoLua(const fu_STR& id, const bool cont, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Scope& _scope, const s_Module& module)
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

            const s_HelpersData* BL_6_v;
            if (!((__extension__ (
            {
                const s_Helpers& h = item;
                BL_6_v = &(_helpers_data[h.index]);
            (void)0;}), *BL_6_v).mask & s_HelpersMask_HM_CanBreak))
            {
                if (!CONTINUE_BELOW)
                {
                    const s_HelpersData* BL_9_v;
                    if (id || !((__extension__ (
                    {
                        const s_Helpers& h = item;
                        BL_9_v = &(_helpers_data[h.index]);
                    (void)0;}), *BL_9_v).mask & s_HelpersMask_HM_Lambda))
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
                const s_HelpersData* BL_13_v;
                const s_HelpersData* BL_14_v;
                if (!(id ? ((__extension__ (
                {
                    const s_Helpers& h = item;
                    BL_13_v = &(_helpers_data[h.index]);
                (void)0;}), *BL_13_v).id == id) : !!((__extension__ (
                {
                    const s_Helpers& h = item;
                    BL_14_v = &(_helpers_data[h.index]);
                (void)0;}), *BL_14_v).mask & s_HelpersMask_HM_Anon)))
                    continue;

                if (cont)
                {
                    i++;
                    if (!(i < _helpers.size()))
                        fail_LGxaAyqq((("Cannot continue to label `"_fu + id) + "` from here, did you mean to `break`?"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

                };
            };
            return /*NRVO*/ i;
        };
    };
    fail_LGxaAyqq((("No label `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode createJump_EYHloyzy(const s_Helpers& h, const s_SolvedNode& expr, const s_TokenIdx& _here)
{
    return SolvedNode_MCGNnDLT(s_kind_jump, t_never, s_Flags{}, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, h, _here);
}

static void injectJumps_KLBygbrX(const s_Helpers& h, s_SolvedNode& expr, const s_TokenIdx& _here)
{
    if ((expr.kind == s_kind_block) && expr.items)
    {
        s_SolvedNode& expr_1 = last_zNBuXg2W(expr.items);
        if (!is_never_4X1iL0ll(expr_1.type))
            injectJumps_KLBygbrX(h, expr_1, _here);

    }
    else if (expr.kind == s_kind_if)
    {
        injectJumps_KLBygbrX(h, expr.items.mutref(1), _here);
        injectJumps_KLBygbrX(h, expr.items.mutref(2), _here);
        expr.type = t_never;
    }
    else
        expr = createJump_EYHloyzy(h, expr, _here);

}

static s_SolvedNode solveJump_1puNSodA(const s_Node& node, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, s_Module& module, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    const int helpers_idx = ((node.kind == s_kind_return) ? Scope_lookupReturn_vCVFC5sW(node.value, _helpers, _ss, _helpers_data, _here, ctx, _scope, module) : Scope_lookupLabel_N6FFoLua(node.value, (node.kind == s_kind_continue), _helpers, _ss, _helpers_data, _here, ctx, _scope, module));
    const s_Helpers h { _helpers[helpers_idx] };
    const s_Type* _0;
    /*MOV*/ s_SolvedNode expr = (!node.items ? createEmpty_YodOLeb9(s_kind_empty, t_void, s_Target{}, _here) : solveNode_wDAIciWi(only_PyOsqkAH(node.items), s_Type((*(_0 = &(((void)void(), _helpers_data[h.index]).ret_actual)) ? *_0 : ((void)void(), _helpers_data[h.index]).ret_expect)), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort));
    if (is_never_4X1iL0ll(expr.type))
        return /*NRVO*/ expr;

    if (((void)void(), _helpers_data[h.index]).local_of != _current_fn.out.target.index)
    {
        add_9EOxwUBL(_current_fn.effects.far_jumps, ((void)void(), _helpers_data[h.index]).local_of);
        return createEmpty_YodOLeb9(s_kind___far_jump, t_never, s_Target{}, _here);
    };
    ((void)void(), _helpers_data.mutref(h.index)).mask |= s_HelpersMask_HM_LabelUsed;
    reportReturnType_X4EG2C6N(h, expr.type, ((node.flags & s_Flags_F_IMPLICIT) && !node.items), _here, ctx, _helpers_data, _current_fnort, module, _scope, _helpers);
    if (is_void_4X1iL0ll(expr.type) && (node.flags & s_Flags_F_IMPLICIT))
        return /*NRVO*/ expr;

    relinkJumps_xI493Eah(h, expr, _helpers_data, _scope, module);
    injectJumps_KLBygbrX(h, expr, _here);
    return /*NRVO*/ expr;
}

static s_SolvedNode solveInt_WG4agDjx(const s_Node& node, const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    return solved_h7iffphh(node, solveInt_7x3YLQeM(node.value, type, _here, ctx, _helpers, _helpers_data, _scope, module), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveReal_JgKWpf3B(const s_Node& node, const s_Type& type, const s_TokenIdx& _here)
{
    return solved_h7iffphh(node, solveReal_5nAHthhu(node.value, type), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveString_AyEh4NLM(const s_Node& node, const s_Type& type, const s_Module& module, const s_Context& ctx, const s_Type& t_string, const s_TokenIdx& _here)
{
    s_Type type_1 = solveString_KZJaHmvV(node.value, type, module, ctx, t_string);
    if (!node.value && type_isSliceable_4X1iL0ll(t_string))
        return createDefinit_kvd8QG0n(add_ref_HFjykOs8(s_Type(t_string), Lifetime_temporary_8nlJDPX0(), _here, ctx), _here, ctx);

    return solved_h7iffphh(node, type_1, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveChar_HwfiP3Ra(const s_Node& node, const s_TokenIdx& _here)
{
    return solved_h7iffphh(node, t_byte, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveDefinit_EADCYg37(const s_Type& type, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope)
{
    s_Type _0 {};
    return createDefinit_kvd8QG0n(((_0 = trySolveDefinit_cv4XyTdJ(type)) ? static_cast<s_Type&&>(_0) : fail_LGxaAyqq(("Cannot definit type: "_fu + humanizeType_4XPtiI5K(type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module)), _here, ctx);
}

static s_SolvedNode solveImport_BKkQ4Gln(const s_Node& node, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    const s_Module& m = findModule_JxF5fDnQ(node.value, ctx, _here, _helpers, _helpers_data, _scope, module);
    Scope_import_7jcwnYef(m.modid, _scope, _ss, _here, ctx);
    return createEmpty_YodOLeb9(s_kind_empty, t_void, s_Target{}, _here);
}

static s_SolvedNode solveDefer_enZl2z5X(const s_Node& node, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    s_SolvedNode item = solveNode_wDAIciWi(only_PyOsqkAH(node.items), t_void, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    return solved_h7iffphh(node, t_void, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(item) } }, s_Target{}, _here);
}

static s_SolvedNode solveTryCatch_2H6amDFT(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    if (!(node.items.size() == 3))
        BUG_XksxYQ3i(fu_STR{}, _here, ctx);

    const s_ScopeMemo scope0 = Scope_snap_WgJlFXyy(_scope, _helpers);
    s_SolvedNode tRy = solveNode_wDAIciWi(node.items[0], t_void, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    Scope_pop_pJmZr7lr(_scope, scope0, _helpers);
    const s_ScopeMemo scope0_1 = Scope_snap_WgJlFXyy(_scope, _helpers);
    s_SolvedNode err = solveLetStatement_KCKSnj5F(node.items[1], _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    s_SolvedNode cAtch = solveNode_wDAIciWi(node.items[2], t_void, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    Scope_pop_pJmZr7lr(_scope, scope0_1, _helpers);
    if (!((err.kind == s_kind_letdef) && isAssignableAsArgument_lFwbQ75H(GET_jZDx3Hiu(err.target, _scope, module, ctx).solved.type, t_string, bool{})))
        fail_LGxaAyqq(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    const s_Type& type = ((is_never_4X1iL0ll(tRy.type) && is_never_4X1iL0ll(cAtch.type)) ? t_never : t_void);
    return solved_h7iffphh(node, type, fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(tRy), s_SolvedNode(err), s_SolvedNode(cAtch) } }, s_Target{}, _here);
}

static s_SolvedNode solveTypedef_THE3VNk7(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    s_Type annot = evalTypeAnnot_Csai46oQ(only_PyOsqkAH(node.items), (*(const s_Map_9nzi56Zu*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    if (isStruct_ZYIX8afu(annot))
        Scope_set_BU3HNW7T(_scope, node.value, lookupStruct_VQxm8oyj(annot, module, ctx).target, false);
    else
        Scope_Typedef_gq0kpTD8(_scope, node.value, annot, node.flags, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);

    return createEmpty_YodOLeb9(s_kind_empty, t_void, s_Target{}, _here);
}

static s_SolvedNode solveTypeCast_mUbg5Yxn(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    const s_Node& left = node.items[0];
    const s_Node& right = node.items[1];
    s_Type expect = evalTypeAnnot_Csai46oQ(right, (*(const s_Map_9nzi56Zu*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    /*MOV*/ s_SolvedNode actual = solveNode_wDAIciWi(left, expect, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    if (isAssignable_npqyupaA(expect, actual.type, bool{}, bool{}))
        return /*NRVO*/ actual;

    fu_VEC<s_Target> conv = tryConvert_MJw8PTrK(expect, actual.type, (*(const s_SolvedNode*)fu::NIL), true, (*(const s_Scope*)fu::NIL), _scope, TODO_FIX_convert_args, _ss, _current_fn, module, ctx, _here, _field_items, _specs, _helpers, _helpers_data, _root_scope, t_string, _warnings, _spec_errors, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort);
    if (!conv)
        fail_LGxaAyqq(((("Cannot convert: "_fu + humanizeType_4XPtiI5K(expect, module, ctx)) + " <- "_fu) + humanizeType_4XPtiI5K(actual.type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    applyConversion_XpfjrIRC(actual, conv, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort);
    return /*NRVO*/ actual;
}

static s_SolvedNode createBool_M3qMzuL7(const bool value, const s_TokenIdx& _here, const s_Context& ctx)
{
    return createBool_ix8GgRVt((value ? "true"_fu : "false"_fu), t_bool, _here, ctx);
}

static s_SolvedNode solveTypeAssert_3HrNpT1i(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    s_Map_9nzi56Zu typeParams {};
    bool _0 {};
    return (_0 = evalTypePattern_9fe66Dnp(node, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn, _warnings, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort), createBool_M3qMzuL7(bool(_0), _here, ctx));
}

static s_SolvedNode solveTypeParam_fhGeb49b(const s_Node& node, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    return solved_h7iffphh(node, evalTypeParam_ZDYMXUW9(node.value, (*(const s_Map_9nzi56Zu*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static void visitScope_KBEVgqKs(fu::view<s_ScopeItem> items, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    int scope_iterator {};
    s_Target target {};
    bool shadows {};
    while (!shadow && (target = search_7gDKHCyh(items, id, scope_iterator, _ss.items, shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
        result.unshift(s_Target(target));

}

                                #ifndef DEF_each_hw1BpSry
                                #define DEF_each_hw1BpSry
inline void each_hw1BpSry(fu::view<s_Struct> a, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Struct& sTruct = a[i];
        visitScope_KBEVgqKs(sTruct.items, shadow, id, _ss, result);
    };
}
                                #endif

static void visitTypes_0J4EMOIx(const s_Module& module, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    each_hw1BpSry(module.out.types, shadow, id, _ss, result);
}

                                #ifndef DEF_each_aiCZdyfh
                                #define DEF_each_aiCZdyfh
inline void each_aiCZdyfh(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Context& ctx, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
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
            visitTypes_0J4EMOIx(ctx.modules[import], shadow, id, _ss, result);
        };
        i0 = ss.end;
    };
}
                                #endif

static fu_VEC<s_Target> solveAddrOfFn_KaQsgDna(const fu_STR& id, const s_Flags flags, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const bool shadow = false;
    /*MOV*/ fu_VEC<s_Target> result {};
    visitScope_KBEVgqKs(_scope.items, shadow, id, _ss, result);
    if (flags & s_Flags_F_ACCESS)
    {
        visitTypes_0J4EMOIx(module, shadow, id, _ss, result);
        each_aiCZdyfh(_scope.imports, _ss.imports, 0, ctx, shadow, id, _ss, result);
    };
    return static_cast<fu_VEC<s_Target>&&>((result ? result : fail_LGxaAyqq((("No `fn "_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)));
}

static s_SolvedNode solveAddrOfFn_kmx7uvIy(const s_Node& node, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const fu_STR& id = node.value;
    fu_VEC<s_Target> result = solveAddrOfFn_KaQsgDna(id, node.flags, _scope, _ss, module, ctx, _here, _helpers, _helpers_data);
    s_Type type = s_Type { s_ValueType { 0, packAddrOfFn_8DGIzOk7(result) }, s_Lifetime{} };
    return createEmpty_YodOLeb9(s_kind_empty, type, s_Target{}, _here);
}

static const s_Struct& lookupStructOrUserPrimitive_OqdyFowp(const s_Type& type, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope)
{
    const s_Struct* _0;
    return *(_0 = &(tryLookupStructOrUserPrimitive_K61azC5I(type, module, ctx))) ? *_0 : fail_LGxaAyqq(("Not a struct nor custom primitive: "_fu + humanizeType_4XPtiI5K(type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_starts_pN4jXVBE
                                #define DEF_starts_pN4jXVBE
inline bool starts_pN4jXVBE(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEF_ends_pN4jXVBE
                                #define DEF_ends_pN4jXVBE
inline bool ends_pN4jXVBE(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

static void walk_a1XPbwYg(s_Node& node, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    for (int i = 0; i < node.items.size(); i++)
        walk_a1XPbwYg(node.items.mutref(i), placeholder, prefix, suffix, inside, field);


    {
        const int idx = ((node.value == placeholder) ? 0 : (starts_pN4jXVBE(node.value, prefix) ? 0 : (ends_pN4jXVBE(node.value, suffix) ? (node.value.size() - placeholder.size()) : fu::lfind(node.value, inside))));
        if ((idx >= 0))
        {
            if (node.kind == s_kind_call)
                node.value.splice(idx, placeholder.size(), fu_STR(field.id));
            else if (node.kind == s_kind_str)
                node.value.splice(idx, placeholder.size(), fu_STR(field.id));

        };
    };
}

inline static s_Node astReplace_sKtjo058(const s_Node& node, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    /*MOV*/ s_Node node_1 { node };
    walk_a1XPbwYg(node_1, placeholder, prefix, suffix, inside, field);
    return /*NRVO*/ node_1;
}

static s_SolvedNode solveForFieldsOf_OsLHknG5(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    fu::view<char> placeholder = node.value;
    const s_Node& body_template = node.items[1];
    fu_STR prefix = (placeholder + "_"_fu);
    fu_STR suffix = ("_"_fu + placeholder);
    fu_STR inside = (("_"_fu + placeholder) + "_"_fu);
    s_Type _0 {};
    fu::view<s_ScopeItem> _1 {};
    fu::view<s_ScopeItem> fields = ((_1 = (_0 = evalTypeAnnot_Csai46oQ(node.items[0], (*(const s_Map_9nzi56Zu*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort), lookupStructOrUserPrimitive_OqdyFowp(static_cast<s_Type&&>(_0), module, ctx, _here, _helpers, _helpers_data, _scope)).items) ? static_cast<fu::view<s_ScopeItem>&&>(_1) : BUG_XksxYQ3i("Empty struct/enum."_fu, _here, ctx));
    fu_VEC<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        items_ast += astReplace_sKtjo058(body_template, placeholder, prefix, suffix, inside, field);
    };
    fu_VEC<s_SolvedNode> items = solveNodes_VtQi5Tmy(items_ast, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    const s_Type& type = (is_never_4X1iL0ll(if_last_vOYHP1IT(items).type) ? t_never : t_void);
    return createBlock_ZRqsU458(type, fu_VEC<s_SolvedNode>(items), s_Helpers{}, _here, _helpers, _helpers_data, _scope, module);
}

static void compilerBreak_UROaB2bD(const s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    fu_STR debug = "\nCompiler break:"_fu;
    if (_current_fn.out.target)
    {
        const s_Target& t = _current_fn.out.target;
        debug += (x7E((x7E((("\n    Current fn: "_fu + qWHAT_QRi0Vh4d(GET_jZDx3Hiu(t, _scope, module, ctx), module, _scope, ctx)) + " at ("_fu), fu::i64dec(t.modid)) + ", "_fu), fu::i64dec(t.index)) + "):"_fu);
        fu::view<s_Overload> locals = EXT_4ZiGP2RI(t, module, _scope, ctx).locals;
        for (int i = 0; i < locals.size(); i++)
        {
            const s_Overload& item = locals[i];
            debug += ("\n        "_fu + qWHAT_QRi0Vh4d(item, module, _scope, ctx));
        };
    };
    if (debug)
    {
        const fu_STR* BL_5_v;
        fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
        {
            const fu_STR& x = debug;
            BL_5_v = &(x);
        (void)0;}), *BL_5_v)) }));
    };
    break_DX6KImTN();
}

static s_SolvedNode executeCompilerPragma_UTPDH3DY(const s_Node& node, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    if (node.value != "break"_fu)
    {
        fu_VEC<s_SolvedNode> _0 {};
        return (_0 = solveNodes_VtQi5Tmy(node.items, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort), SolvedNode_MCGNnDLT(s_kind_pragma, t_void, s_Flags{}, node.value, static_cast<fu_VEC<s_SolvedNode>&&>(_0), s_Target{}, s_Helpers{}, _here));
    };
    compilerBreak_UROaB2bD(_current_fn, _scope, module, ctx);
    return createEmpty_YodOLeb9(s_kind_empty, t_void, s_Target{}, _here);
}

static s_SolvedNode solveDeclExpr_2A09SPS6(const s_Node& node, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    return s_SolvedNode(only_O0vxkflG(solveNodes_VtQi5Tmy((fu::slate<1, s_Node> { s_Node(node) }), (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort)));
}

static s_SolvedNode solveNode_wDAIciWi(const s_Node& node, const s_Type& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_w7treiPq& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort)
{
    HERE_Qf4G9n8T(node.token, _here);
    const s_kind k = node.kind;
    if (k == s_kind_root)
        return solveRoot_TXZaJahJ(node, _helpers, _helpers_data, _here, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_block)
        return solveBlock_E0WRPHag(node, type, 0, s_HelpersMask_HM_CanBreak, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

    if (k == s_kind_argid)
        return solveArgID_itw12Dav(node, type, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_let)
        return solveLet_rYi8moYl(node, (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_call)
        return solveCall_bMl1cXdC(node, s_Target{}, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_arrlit)
        return solveArrlit_Om4xuVR6(node, type, module, ctx, _here, _helpers, _helpers_data, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_if)
        return solveIf_LsT5IeHF(node, s_Type(type), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_or)
        return solveOr_6zY5pIGL(node, s_Type(type), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_and)
        return solveAnd_Z0orAzcT(node, s_Type(type), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_loop)
        return solveLoop_3Xz6LTgL(node, _scope, _helpers, _current_fn, _current_fnort, _helpers_data, _here, ctx, module, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

    if (k == s_kind_break)
        return solveJump_1puNSodA(node, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fn, _warnings, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_return)
        return solveJump_1puNSodA(node, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fn, _warnings, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_continue)
        return solveJump_1puNSodA(node, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fn, _warnings, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_int)
        return solveInt_WG4agDjx(node, type, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (k == s_kind_real)
        return solveReal_JgKWpf3B(node, type, _here);

    if (k == s_kind_str)
        return solveString_AyEh4NLM(node, type, module, ctx, t_string, _here);

    if (k == s_kind_char)
        return solveChar_HwfiP3Ra(node, _here);

    if (k == s_kind_bool)
        return createBool_ix8GgRVt(node.value, t_bool, _here, ctx);

    if (k == s_kind_definit)
        return solveDefinit_EADCYg37(type, module, ctx, _here, _helpers, _helpers_data, _scope);

    if (k == s_kind_import)
        return solveImport_BKkQ4Gln(node, ctx, _here, _helpers, _helpers_data, _scope, module, _ss);

    if (k == s_kind_defer)
        return solveDefer_enZl2z5X(node, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_try)
        return solveTryCatch_2H6amDFT(node, _here, ctx, _scope, _helpers, _helpers_data, module, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_typedef)
        return solveTypedef_THE3VNk7(node, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_typecast)
        return solveTypeCast_mUbg5Yxn(node, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_typeassert)
        return solveTypeAssert_3HrNpT1i(node, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn, _warnings, _specs, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_typeparam)
        return solveTypeParam_fhGeb49b(node, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);

    if (k == s_kind_addroffn)
        return solveAddrOfFn_kmx7uvIy(node, _scope, _ss, module, ctx, _here, _helpers, _helpers_data);

    if (k == s_kind_forfieldsof)
        return solveForFieldsOf_OsLHknG5(node, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_pragma)
        return executeCompilerPragma_UTPDH3DY(node, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    if (k == s_kind_void)
        return createEmpty_YodOLeb9(s_kind_empty, t_void, s_Target{}, _here);

    if (unorderedClassify_o8QOzK7V(k))
        return solveDeclExpr_2A09SPS6(node, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);

    fail_LGxaAyqq((x7E("TODO: solveNode("_fu, str_omkBT2iF(k)) + ")."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_N_SD_HasStaticInit
                                #define DEF_N_SD_HasStaticInit
inline constexpr int N_SD_HasStaticInit = (1 << 30);
                                #endif

                                #ifndef DEF_N_SD_ExternPrivates
                                #define DEF_N_SD_ExternPrivates
inline constexpr int N_SD_ExternPrivates = (1 << 31);
                                #endif

static void Scope_observeDefects_MKvtuwpJ(fu::view<s_ScopeItem> items, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_Options& options, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, int& _notes)
{
    bool hasLets = false;
    bool hasPubTemplates = false;
    fu_VEC<s_Target> privates {};
    for (int i = 0; i < items.size(); i++)
    {
        const s_Target t = target_wh65lsPu(items[i]);
        if (t.modid != module.modid)
            continue;

        const s_Overload& o = GET_jZDx3Hiu(t, _scope, module, ctx);
        if (o.kind == s_kind_var)
        {
            hasLets = true;
            if (!(o.flags & s_Flags_F_PUB))
                privates += s_Target(t);

        }
        else if (o.kind == s_kind_fn)
        {
            if (!(o.flags & s_Flags_F_PUB))
                privates += s_Target(t);

        }
        else if (o.kind == s_kind_template)
        {
            if (o.flags & s_Flags_F_PUB)
                hasPubTemplates = true;

        };
    };
    if (hasLets)
        makeNote_6kXvqC8U(N_SD_HasStaticInit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

    if (privates && hasPubTemplates)
    {
        makeNote_6kXvqC8U(N_SD_ExternPrivates, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        for (int i_1 = 0; i_1 < privates.size(); i_1++)
        {
            s_Overload& o = GET_mut_tUm7lURP(privates[i_1], _scope, module);
            o.flags |= s_Flags_F_EXTERN;
        };
    };
}

s_SolverOutput solve_88f7wJ3Z(const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_Node parse { module.in.parse.root };
    fu_STR shortModuleName = (module.modid ? getShortModuleName_hDYH9Tpk(module.fname) : fu_STR{});
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
    push_IM02W1LV(s_HelpersData{}, _helpers, _helpers_data);
    s_Target _current_fn_or_type = s_Target { int(module.modid), 0 };
    s_Map_w7treiPq _specs {};
    fu_VEC<fu_STR> _spec_errors = fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "BUG: Specializer reentry."_fu } };
    fu_VEC<s_Warning> _warnings {};
    s_Type t_string = createArray_4X1iL0ll(t_byte, _here, ctx);
    fu_VEC<s_SolvedNode> TODO_FIX_convert_args = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { SolvedNode_MCGNnDLT(s_kind{}, s_Type{}, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here) } };
    if (module.modid)
    {
        _scope.imports += int(module.modid);
        _Scope_import__forceCopy_65V7oONJ(0, ctx, _scope);
    }
    else
        _scope = listGlobals_l8HfNDzr(module);

    const s_Target _current_fnort = s_Target { int(module.modid), 0 };
    s_SolvedNode root = solveNode_wDAIciWi(parse, (*(const s_Type*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort);
    if (_current_fn.out)
        BUG_XksxYQ3i("non-empty _current_fn."_fu, _here, ctx);

    if (_helpers_data[0])
        BUG_XksxYQ3i("non-empty _helpers_data[0]."_fu, _here, ctx);

    Scope_observeDefects_MKvtuwpJ(_scope.items, module, _scope, ctx, options, _here, _helpers, _helpers_data, _notes);
    for (int i = 0; i < _warnings.size(); i++)
    {
        const s_Warning& w = _warnings[i];
        if (w.token)
        {
            _here = w.token;
            fail_LGxaAyqq(fu_STR(w.message), _here, ctx, _helpers, _helpers_data, _scope, module);
        };
    };
    return s_SolverOutput { s_SolvedNode(root), Scope_exports_3xUYpXMb(_scope, module.modid, _field_items), int(_notes) };
}

#endif
