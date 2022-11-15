#include <cstdint>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <algorithm>
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
enum s_kind: fu::u8;
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
typedef uint16_t s_DeclAsserts;
typedef fu::u8 s_ParseSyntax;
struct s_ScopeMemo;
struct s_ScopeSkipMemos;
struct s_ScopeSkip;
struct s_ScopeItem;
typedef uint16_t s_FxMask;
typedef int s_SolverNotes;
struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
struct s_ParserOutput;
struct s_ModuleOrder;
struct s_ModuleOutputs;
struct s_Struct;
struct s_CodegenOutput;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Map_IAbSsNotHdi;
struct s_Options;
struct s_Lint;
struct s_SolverState;
struct s_Map_JVvYaNLAkqf;
struct s_Warning;
struct s_CurrentFn;
struct s_Flow;
struct s_Effects;
struct s_Events;
struct s_EventsSnap;
struct s_WriteID;
struct s_ReadID;
struct s_RWEvent;
struct s_Postdom;
struct s_Moves;
struct s_HelpersData;
enum s_SolverPass: fu::u8;
typedef fu::u8 s_HelpersMask;
struct s_ClosureID;
struct s_Map_UKvTd2mknh0;
struct s_TypeParam;
struct s_Intlit;
struct s_Mi;
struct s_NativeHacks;
fu_STR getShortModuleName_ghRLOdAK(const fu_STR&);
s_Scope listGlobals_5RKSmq8W(const s_Module&);
void HERE_bcSKDjer(const s_TokenIdx&, s_TokenIdx&);
bool is_never_eqpYb5IC(const s_Type&);
fu_STR qKW_9QQZAztz(const fu_STR&);
s_ClosureID tryParseClosureID_ESzTmva3(fu::view<char>);
static fu_STR human_yoPbxz1W(const fu_STR&, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
fu_STR qID_9QQZAztz(const fu_STR&);
static const s_Overload& GET_ryFyPS6P(const s_Target&, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
const fu_STR& _fname_8Dsl78sB(const s_TokenIdx&, const s_Context&);
const s_Token& _token_8Dsl78sB(const s_TokenIdx&, const s_Context&);
static fu_STR fail_appendStack_ifcuNJ6t(fu_STR&&, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
[[noreturn]] fu::never FAIL_vYytSj38(fu::view<char>, const s_TokenIdx&, const s_Context&);
[[noreturn]] static fu::never BUG_k3P6Th3U(fu_STR&&, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
[[noreturn]] static fu::never fail_7KwuQpwr(fu_STR&&, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
s_Target Scope_create_EMDiTJHw(s_Scope&, s_kind, const fu_STR&, const s_Type&, s_Flags, s_SolverStatus, int, const s_Module&);
void Scope_set_D73yKAeS(s_Scope&, const fu_STR&, const s_Target&, bool);
s_ScopeMemo Scope_snap_JtSt09Yg(const s_Scope&, fu::view<s_Helpers>);
fu_STR packAddrOfFn_KJaKO9Hx(fu::view<s_Target>);
inline void each_WvUv3SlD(fu::view_mut<s_SolvedNode>, const s_Helpers&, const s_Helpers&, const s_Module&, s_SolverState&, fu::view_mut<s_HelpersData>);
static void visit_zKQUOUE6(s_SolvedNode&, const s_Helpers&, const s_Helpers&, const s_Module&, s_SolverState&, fu::view_mut<s_HelpersData>);
bool is_void_eqpYb5IC(const s_Type&);
s_Type type_trySuper_HuTHARyU(const s_Type&, const s_Type&, bool);
bool is_ref_qNIEFFQB(const s_Type&);
bool is_zeroes_eqpYb5IC(const s_Type&);
s_Type clear_mutref_qNIEFFQB(s_Type&&);
s_Lifetime Lifetime_makeShared_0ep4DGAR(const s_Lifetime&);
bool isStruct_FNWlOhLB(const s_Type&);
const s_Struct& tryLookupUserType_ChYpFATl(const s_Type&, const s_Context&, const s_Module&);
static const s_Struct& lookupUserType_OSTRqvzG(const s_Type&, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
fu_STR humanizeQuals_qNIEFFQB(const s_Type&);
bool Region_isStatic_PhGvG2us(const s_Region&);
bool Region_isTemp_PhGvG2us(const s_Region&);
bool Region_isArgPosition_PhGvG2us(const s_Region&);
int Region_toArgPosition_PhGvG2us(const s_Region&);
int Region_toLocal_PhGvG2us(const s_Region&);
static fu_STR qWHAT_KqX3VCyd(const s_Lifetime&, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
static fu_STR humanizeType_3wOVPKQg(const s_Type&, bool, int, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
bool is_arithmetic_XeFsC3zb(const s_Type&);
s_Intlit Intlit_eSPjJZjJ(fu::view<char>);
bool is_primitive_XeFsC3zb(const s_Type&);
int basePrimPrefixLen_9ycokehR(fu::view<char>);
s_Type clear_refs_qNIEFFQB(s_Type&&);
static s_Type tryRetyping_yDcFD2W2(const s_SolvedNode&, const s_Type&, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
static void applyRetype_7oVcLMt3(s_SolvedNode&, const s_Type&);
void add_uczByTOp(s_BitSet&, int);
const fu_VEC<int>& lookupTypeImports_ChYpFATl(const s_Type&, const s_Context&, const s_Module&);
int modidOfOrigin_FNWlOhLB(const s_Type&);
bool has_qNZlwBKS(const s_BitSet&, int);
bool add_once_uczByTOp(s_BitSet&, int);
s_Target target_QZZ1cmZA(const s_ScopeItem&);
s_Target search_RzUVEZib(const s_Target&, int&);
s_Target search_jNlWknKv(fu::view_mut<s_ScopeItem>, fu::view<char>, int&, fu::view<s_ScopeSkip>, bool&, fu::view<s_Target>, fu::view<s_ScopeItem>);
s_Target search_R5Xl5zvH(fu::view<s_ScopeItem>, fu::view<char>, int&);
bool isAddrOfFn_mipI0b6h(const s_Type&);
s_Mi parseMi_Tv0KZM6O(int&, fu::view<char>);
void Scope_pop_J3Z6pttr(s_Scope&, const s_ScopeMemo&, fu_VEC<s_Helpers>&);
inline bool all_rlSQgsHv(fu::view<s_SolvedNode>);
static bool couldRetype_ODsvI1qY(const s_SolvedNode&);
s_Lifetime Lifetime_temporary_8nlJDPX0();
s_Type add_ref_arUcTyoS(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_ref_8RliRHyJ(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_mutref_8RliRHyJ(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_array_qNIEFFQB(const s_Type&);
s_Type relax_typeParam_qNIEFFQB(s_Type&&);
s_Type tryClear_sliceable_qNIEFFQB(const s_Type&);
bool isAssignable_zQyU0CZE(const s_Type&, const s_Type&, bool, bool);
static bool trySolveTypeParams_mayetygn(const s_Node&, s_Type&&, s_Map_UKvTd2mknh0&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
fu_STR serializeType_PYGow2xq(const s_Type&, fu::view<char>);
static const s_Type& evalTypeParam_ghZHazpS(const fu_STR&, const s_Map_UKvTd2mknh0&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
bool is_trivial_ChYpFATl(const s_Type&, const s_Context&, const s_Module&);
bool is_rx_copy_6qTx5aCK(const s_Type&);
bool is_bitfield_XeFsC3zb(const s_Type&);
bool is_integral_XeFsC3zb(const s_Type&);
bool is_unsigned_XeFsC3zb(const s_Type&);
bool is_floating_pt_XeFsC3zb(const s_Type&);
bool is_mutref_8RliRHyJ(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_enum_XeFsC3zb(const s_Type&);
bool is_flags_XeFsC3zb(const s_Type&);
s_Type type_tryIntersect_F2WHZZjx(const s_Type&, const s_Type&);
static bool evalTypePattern_x7DQggP3(const s_Node&, s_Map_UKvTd2mknh0&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
void Scope_set_Wttt6h0n(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);
s_Type add_mutref_arUcTyoS(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
bool isAssignableAsArgument_d2HKSF3T(const s_Type&, const s_Type&, bool);
bool is_ref2temp_8RliRHyJ(const s_Type&, const s_TokenIdx&, const s_Context&);
static s_SolvedNode solveLetLike_dontTouchScope_pjqifGJN(const s_Node&, const s_Type&, const s_Type&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
s_Lifetime Lifetime_static_8nlJDPX0();
s_Region Region_fromLocal_eorXYpEE(int);
int Region_asLocal_l3hJ0imS(const s_Region&);
s_NativeHacks NativeHacks_FkHhiw9v(fu::view<char>);
void ArgsAtRisk_list_Mg6wScVC(s_BitSet&, const s_Flow&, int, fu::view<fu_VEC<int>>);
bool TODO_FIX_isArray_qNIEFFQB(const s_Type&);
s_BitSet& and_not_assign_30J7m8SX(s_BitSet&, const s_BitSet&);
void add_range_7V2wMoqU(s_BitSet&, int);
bool rem_uczByTOp(s_BitSet&, int);
s_Lifetime Lifetime_union_7b6lMejl(const s_Lifetime&, const s_Lifetime&);
fu_STR formatCodeSnippet_tqiaCY42(const s_TokenIdx&, s_TokenIdx&&, const s_Context&);
static fu_STR qSTACK_4iAH0Cdy(const s_Target&, const s_Region&, fu::view<s_Target>, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
static fu_STR qSTACK_dA3d9OVg(const s_Target&, int, fu::view<s_Target>, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
static fu_STR qSTACK_YECBRXJx(const s_Target&, const s_SolvedNode&, const s_Region&, fu::view<s_Target>, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
bool is_rx_resize_6qTx5aCK(const s_Type&);
s_Region Region_fromArgPosition_BLLdCVw1(int);
static fu_STR qSTACK_XLAhGn9A(const s_Target&, const s_SolvedNode&, s_FxMask, fu::view<s_Target>, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
bool hasAssignment_xj37xk9w(fu::view<char>);
fu_STR hash62_AxN9Pg5L(fu::view<char>, int);
fu_STR qBAD_9QQZAztz(const fu_STR&);
static bool Lifetime_allowsMutrefReturn_6QSRWRGc(const s_Lifetime&, int, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
static void test_nodes_KshSA2Kd(fu::view<s_SolvedNode>, fu::view<char>, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
static void test_node_ehvRzmk8(const s_SolvedNode&, fu_STR&&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
bool try_relax_aIGuZbhF(s_Type&, const s_Type&, int);
static void relaxBlockVar_wd1tWqPQ(const s_Target&, int, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
void add_I6kjNu45(s_BitSet&, const s_BitSet&);
[[noreturn]] fu::never BUG_vYytSj38(fu_STR&&, const s_TokenIdx&, const s_Context&);
static bool trackUse_vYBGmYPv(const s_Target&, s_BitSet&, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
static bool trackUse_pEahoxBA(const s_Lifetime&, s_BitSet&, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
static s_Target trySpecialize_ad6xSK3T(const s_Target&, fu::view<s_SolvedNode>, fu_STR&, int, const s_Type&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void discardIntoBlock_n4Q6s3zi(s_SolvedNode&, const s_Type&, int, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
void clear_eS70UoEC(s_BitSet&);
s_Type make_copyable_qNIEFFQB(s_Type&&);
inline static void Lifetime_each_LIWxBHNA(const s_Lifetime&, int, const s_Context&, const s_Module&, const s_TokenIdx&, s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
static void Lifetime_F_MOVED_FROM_YFrbRR0r(const s_Lifetime&, const s_Context&, const s_Module&, const s_TokenIdx&, s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
static void trackJustMoved_ZuqBngk3(const s_Lifetime&, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, s_CurrentFn&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
s_Type clear_sliceable_8RliRHyJ(const s_Type&, const s_TokenIdx&, const s_Context&);
static void propagateType_MOm0DjNj(s_SolvedNode&, const s_Type&, int, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
void Reference_trackArgument_emIbMVX0(s_Flow&, int, int, const s_TokenIdx&, const s_Context&);
static bool RESOLVE_byAAR_QI0FCMaT(int, int, bool, bool, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, s_CurrentFn&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
s_Lifetime Lifetime_inter_7b6lMejl(const s_Lifetime&, const s_Lifetime&);
bool is_boolean_XeFsC3zb(const s_Type&);
static void definitWrap_tsfNUfhM(s_SolvedNode&, const s_Type&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void maybeCopyOrMove_5KsSrIOT(s_SolvedNode&, const s_Type&, bool, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
inline void each_Ri0Gt85B(fu::view<int>, s_CurrentFn&);
static void tagWritten_q7B4lKVN(int, s_CurrentFn&);
inline fu_VEC<s_Region> inter_vO5wFRsv(const fu_VEC<s_Region>&, const fu_VEC<s_Region>&);
static bool RESOLVE_byAAR_oI6WQYaN(int, fu::view<s_Region>, bool, bool, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, s_CurrentFn&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Target&);
static void bck_call_fydOyeGf(s_SolvedNode&, const s_SolvedNode&, bool, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void bck_loop_pT2GPvNl(s_SolvedNode&, const s_SolvedNode&, bool, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void bck_nodes_LpZKzQ8r(fu::view_mut<s_SolvedNode>, const s_SolvedNode&, bool, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
void Reference_trackLocalRef_OWgrWecA(s_Flow&, int, const s_Lifetime&);
static void bck_let_kMDrwSBm(s_SolvedNode&, const s_SolvedNode&, bool, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void bck_if_fkXXoPWM(s_SolvedNode&, const s_SolvedNode&, bool, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void bck_block_JMN0nfeT(s_SolvedNode&, const s_SolvedNode&, bool, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void bck_node_Y93vGEuW(s_SolvedNode&, const s_SolvedNode&, bool, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void PASS_borrowCheck_AT0KhDoC(s_SolvedNode&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void mcom_node_6xYE69NA(s_SolvedNode&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void runAllPasses_S12QJajJ(s_SolvedNode&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode solveBlock_a06G0wq6(const s_Node&, const s_Type&, int, s_HelpersMask, const fu_STR&, int, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void lazySolveEnd_dD7PN0OQ(const s_Target&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_Target doTrySpecialize_yiTp1nQi(const s_Target&, const s_Target&, fu::view<s_SolvedNode>, const fu_STR&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, int, const s_Type&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static bool lazySolveStart_uLb9QxPS(const s_Target&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
int popcount_AuAxMCl5(const s_BitSet&);
static fu_STR qWHAT_udEijxNe(const s_Argument&, const s_Context&, const s_Module&, const s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
fu_STR qCODE_9QQZAztz(const fu_STR&);
s_Type createArray_oj1mQ036(const s_Type&);
static s_Target tryMatch__mutargs_IBT0nXHk(fu_STR&&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu_STR&, bool, bool, const s_Scope&, fu::view<s_SolvedNode>, s_Flags, const s_Target&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
s_Type add_refs_BuHxEtjM(const s_Type&, s_Type&&);
static void foreach_xPnJLRgJ(const s_Target&, const s_Type&, bool, bool, const s_Type&, const s_Type&, const s_SolvedNode&, bool, const s_Scope&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, int, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void descend_Uy1R6LJB(const s_Type&, bool, bool, bool, const s_Type&, const s_Type&, const s_SolvedNode&, bool, const s_Scope&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, int, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static fu_VEC<s_Target> tryConvert_sOlyaEcz(const s_Type&, const s_Type&, const s_SolvedNode&, bool, const s_Scope&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode bindImplicitArg_FWDmsvQ9(const fu_STR&, const s_Type&, const s_Target&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
fu_STR serialize_MMMW9sUK(const s_ClosureID&);
static s_SolvedNode CallerNode_2ElqfYiA(const fu_STR&, s_Target&&, fu_VEC<s_SolvedNode>&&, const fu_VEC<int>&, fu::view<fu_VEC<s_Target>>, const s_Target&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&);
static bool applyConversion_CTEVKvNu(s_SolvedNode&, fu::view<s_Target>, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_Type convertToSuperType_eeStdoQ2(fu::view<char>, s_SolvedNode&, s_SolvedNode&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode createIf_l7xV3cCl(const s_SolvedNode&, s_SolvedNode&&, s_SolvedNode&&, s_Type&&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode createBlock_aqSRQpGo(const s_Type&, fu_VEC<s_SolvedNode>&&, const s_Helpers&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode deadCall_qUDYxdPt(const fu_VEC<s_SolvedNode>&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
fu_STR resolveFile_x_XQl8ylUG(const fu_STR&, const s_Context&);
static s_SolvedNode solveCall_nKfJhHWQ(fu_STR&&, fu_VEC<s_SolvedNode>&&, s_Flags, const s_Target&, bool, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static const s_Type& Scope_lookupType_GxJwJ0bk(fu_STR&&, s_Flags, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static const s_Type& Scope_lookupType_8Tke6K42(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_Type T_VCuBMw8a(const s_Node&, const s_Map_UKvTd2mknh0&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
s_Type createSlice_8h5rReSH(const s_Type&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
static s_Type evalTypeAnnot_oDto04gx(const s_Node&, const s_Map_UKvTd2mknh0&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
s_Type initStruct_9bFmV6wW(s_kind, const fu_STR&, const fu_STR&, s_DeclAsserts, s_Module&);
s_Target Scope_Typedef_ZZmCHu2D(s_Scope&, const fu_STR&, const s_Type&, s_Flags, const fu_STR&, s_SolverStatus, const s_Module&);
s_Struct& lookupUserType_mut_1kUrLo41(fu::view<char>, s_Module&);
s_Type despeculateStruct_witzqGKx(s_Type&&);
const s_Struct& tryLookupStruct_ChYpFATl(const s_Type&, const s_Context&, const s_Module&);
s_Intlit Intlit_kulaZEKB(uint64_t, bool, fu_STR&&, bool, bool, uint64_t);
static s_SolvedNode __solveStruct_dyUPsgwi(bool, const s_Node&, const s_Target&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode uPrepStruct_1bQHqbNe(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode unorderedPrep_A_R1kqLcXg(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static fu_VEC<s_SolvedNode> solveNodes_EGJ2i2NT(fu::view<s_Node>, const s_Type&, const s_Type&, bool, const fu_STR&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode solveRoot_Br0MU9mB(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode solveArgID_dtJdchCY(const s_Node&, const s_Type&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode solveCall_Jb8DJVNy(const s_Node&, const s_Target&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode solveArrlit_BfiDWCVe(const s_Node&, const s_Type&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode solveNot_Zx1adsgH(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode solveIf_ZPQ7QcNY(const s_Node&, const s_Type&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode solveLetStatement_00XQGF2Y(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode solveLoop_uU1VEmRm(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void injectJumps_aC7eqyg4(const s_Helpers&, s_SolvedNode&, const s_TokenIdx&);
static s_SolvedNode solveJump_66NnCWWr(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
bool type_isSliceable_mipI0b6h(const s_Type&);
static void visit_3s0h7DWq(int, const s_Context&, const s_Module&, const s_TokenIdx&, s_SolverState&, fu::view<s_Helpers>, fu::view<s_HelpersData>);
static s_SolvedNode solveDefer_kjr7JgGw(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode solveTryCatch_I5IorLNz(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode solveTypedef_cM52cZvk(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode solveTypeCast_OeZKYfxq(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static s_SolvedNode solveTypeAssert_45HA0eIK(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
static void walk_I9oilqRR(s_Node&, fu::view<char>, fu::view<char>, fu::view<char>, fu::view<char>, const s_ScopeItem&);
static s_SolvedNode solveForFieldsOf_d2ebv1JQ(const s_Node&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
void bReak_DX6KImTN();
static s_SolvedNode solveNode_3DHmcQXo(const s_Node&, const s_Type&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&);
s_Scope Scope_exports_81X8EeCo(const s_Scope&, int, const fu_VEC<s_ScopeItem>&, const fu_VEC<int>&);

                                #ifndef DEF_s_kind
                                #define DEF_s_kind
enum s_kind: fu::u8
{
    s_kind_sof = 1u,
    s_kind_err = 2u,
    s_kind_eof = 3u,
    s_kind_id = 4u,
    s_kind_op = 5u,
    s_kind_int = 6u,
    s_kind_real = 7u,
    s_kind_char = 8u,
    s_kind_str = 9u,
    s_kind_bool = 10u,
    s_kind_copy = 11u,
    s_kind_move = 12u,
    s_kind_arrlit = 13u,
    s_kind_definit = 14u,
    s_kind_empty = 15u,
    s_kind_void = 16u,
    s_kind_not = 17u,
    s_kind_call = 18u,
    s_kind_argid = 19u,
    s_kind_root = 20u,
    s_kind_block = 21u,
    s_kind_if = 22u,
    s_kind_or = 23u,
    s_kind_and = 24u,
    s_kind_loop = 25u,
    s_kind_jump = 26u,
    s_kind___far_jump = 27u,
    s_kind_defer = 28u,
    s_kind_try = 29u,
    s_kind_let = 30u,
    s_kind_letdef = 31u,
    s_kind_typedef = 32u,
    s_kind_typecast = 33u,
    s_kind_typeassert = 34u,
    s_kind_typeparam = 35u,
    s_kind_unwrap = 36u,
    s_kind_pragma = 37u,
    s_kind_break = 38u,
    s_kind_return = 39u,
    s_kind_continue = 40u,
    s_kind_import = 41u,
    s_kind_addroffn = 42u,
    s_kind_forfieldsof = 43u,
    s_kind_struct = 44u,
    s_kind_union = 45u,
    s_kind_primitive = 46u,
    s_kind_flags = 47u,
    s_kind_enum = 48u,
    s_kind_members = 49u,
    s_kind_fndef = 50u,
    s_kind_fn = 51u,
    s_kind_fnbranch = 52u,
    s_kind_pattern = 53u,
    s_kind_typeunion = 54u,
    s_kind_typetag = 55u,
    s_kind___relaxed = 56u,
    s_kind___convert = 57u,
    s_kind___no_kind_yet = 58u,
    s_kind_type = 59u,
    s_kind_var = 60u,
    s_kind_field = 61u,
    s_kind_enumv = 62u,
    s_kind_template = 63u,
    s_kind___native = 64u,
    s_kind_inline = 65u,
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
inline constexpr s_Flags s_Flags_F_METHOD = 1u;
inline constexpr s_Flags s_Flags_F_OPERATOR = 2u;
inline constexpr s_Flags s_Flags_F_ACCESS = 4u;
inline constexpr s_Flags s_Flags_F_COMPOUND_ID = 8u;
inline constexpr s_Flags s_Flags_F_WRITTEN_TO = 16u;
inline constexpr s_Flags s_Flags_F_LAX = 32u;
inline constexpr s_Flags s_Flags_F_ARG = 64u;
inline constexpr s_Flags s_Flags_F_MOVED_FROM = 128u;
inline constexpr s_Flags s_Flags_F_CONVERSION = 256u;
inline constexpr s_Flags s_Flags_F_OPT_ARG = 512u;
inline constexpr s_Flags s_Flags_F_MUT = 1024u;
inline constexpr s_Flags s_Flags_F_REF = 2048u;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 4096u;
inline constexpr s_Flags s_Flags_F_USING = 8192u;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 16384u;
inline constexpr s_Flags s_Flags_F_SHADOW = 32768u;
inline constexpr s_Flags s_Flags_F_PUB = 65536u;
inline constexpr s_Flags s_Flags_F_EXTERN = 131072u;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 262144u;
inline constexpr s_Flags s_Flags_F_PREDICATE = 524288u;
inline constexpr s_Flags s_Flags_F_NAMED_ARGS = 1048576u;
inline constexpr s_Flags s_Flags_F_OOE_RTL = 2097152u;
inline constexpr s_Flags s_Flags_F_REST_ARG = 4194304u;
inline constexpr s_Flags s_Flags_F_RELAXABLE_REF = 8388608u;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 16777216u;
inline constexpr s_Flags s_Flags_F_INLINE = 33554432u;
inline constexpr s_Flags s_Flags_F_LAMBDA = 67108864u;
inline constexpr s_Flags s_Flags_F_INJECTED = 134217728u;

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_F_METHOD
    | s_Flags_F_OPERATOR
    | s_Flags_F_ACCESS
    | s_Flags_F_COMPOUND_ID
    | s_Flags_F_WRITTEN_TO
    | s_Flags_F_LAX
    | s_Flags_F_ARG
    | s_Flags_F_MOVED_FROM
    | s_Flags_F_CONVERSION
    | s_Flags_F_OPT_ARG
    | s_Flags_F_MUT
    | s_Flags_F_REF
    | s_Flags_F_IMPLICIT
    | s_Flags_F_USING
    | s_Flags_F_MUSTNAME
    | s_Flags_F_SHADOW
    | s_Flags_F_PUB
    | s_Flags_F_EXTERN
    | s_Flags_F_HOTSWAP
    | s_Flags_F_PREDICATE
    | s_Flags_F_NAMED_ARGS
    | s_Flags_F_OOE_RTL
    | s_Flags_F_REST_ARG
    | s_Flags_F_RELAXABLE_REF
    | s_Flags_F_TEMPLATE
    | s_Flags_F_INLINE
    | s_Flags_F_LAMBDA
    | s_Flags_F_INJECTED;
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
    int _loop_start;
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
inline constexpr s_SolverStatus s_SolverStatus_SS_LAZY = s_SolverStatus(1u);
inline constexpr s_SolverStatus s_SolverStatus_SS_DID_START = s_SolverStatus(2u);
inline constexpr s_SolverStatus s_SolverStatus_SS_DIRTY = s_SolverStatus(4u);
inline constexpr s_SolverStatus s_SolverStatus_SS_FINALIZED = s_SolverStatus(8u);
inline constexpr s_SolverStatus s_SolverStatus_SS_UPDATED = s_SolverStatus(16u);
inline constexpr s_SolverStatus s_SolverStatus_SS_TYPE_RECUR = s_SolverStatus(32u);
inline constexpr s_SolverStatus s_SolverStatus_SS_FN_RECUR = s_SolverStatus(64u);
inline constexpr s_SolverStatus s_SolverStatus_SS_HOIST = s_SolverStatus(128u);
inline constexpr s_SolverStatus s_SolverStatus_SS_UNUSED = s_SolverStatus(256u);

inline constexpr s_SolverStatus MASK_s_SolverStatus
    = s_SolverStatus_SS_LAZY
    | s_SolverStatus_SS_DID_START
    | s_SolverStatus_SS_DIRTY
    | s_SolverStatus_SS_FINALIZED
    | s_SolverStatus_SS_UPDATED
    | s_SolverStatus_SS_TYPE_RECUR
    | s_SolverStatus_SS_FN_RECUR
    | s_SolverStatus_SS_HOIST
    | s_SolverStatus_SS_UNUSED;
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
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCOPY = s_DeclAsserts(1u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC = s_DeclAsserts(2u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_TRIVIAL = s_DeclAsserts(4u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE = s_DeclAsserts(8u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_CTX = s_DeclAsserts(16u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_FX = s_DeclAsserts(32u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOFLOW = s_DeclAsserts(64u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOTHROW = s_DeclAsserts(128u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCRASH = s_DeclAsserts(256u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOIO = s_DeclAsserts(512u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_FAST = s_DeclAsserts(1024u);

inline constexpr s_DeclAsserts MASK_s_DeclAsserts
    = s_DeclAsserts_A_NOCOPY
    | s_DeclAsserts_A_NOVEC
    | s_DeclAsserts_A_TRIVIAL
    | s_DeclAsserts_A_PURE
    | s_DeclAsserts_A_PURE_CTX
    | s_DeclAsserts_A_PURE_FX
    | s_DeclAsserts_A_NOFLOW
    | s_DeclAsserts_A_NOTHROW
    | s_DeclAsserts_A_NOCRASH
    | s_DeclAsserts_A_NOIO
    | s_DeclAsserts_A_FAST;
                                #endif

                                #ifndef DEF_s_ParseSyntax
                                #define DEF_s_ParseSyntax
inline constexpr s_ParseSyntax s_ParseSyntax_PS_ID = s_ParseSyntax(1u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_PARENS = s_ParseSyntax(2u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_SEMI = s_ParseSyntax(4u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_DISCARD = s_ParseSyntax(8u);

inline constexpr s_ParseSyntax MASK_s_ParseSyntax
    = s_ParseSyntax_PS_ID
    | s_ParseSyntax_PS_PARENS
    | s_ParseSyntax_PS_SEMI
    | s_ParseSyntax_PS_DISCARD;
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

                                #ifndef DEF_s_FxMask
                                #define DEF_s_FxMask
inline constexpr s_FxMask s_FxMask_Fx_NotDeadCode = s_FxMask(1u);
inline constexpr s_FxMask s_FxMask_Fx_NonDeterministic = s_FxMask(2u);
inline constexpr s_FxMask s_FxMask_Fx_DontMoveUp = s_FxMask(4u);
inline constexpr s_FxMask s_FxMask_Fx_DontMoveDown = s_FxMask(8u);
inline constexpr s_FxMask s_FxMask_Fx_Input = s_FxMask(16u);
inline constexpr s_FxMask s_FxMask_Fx_Output = s_FxMask(32u);
inline constexpr s_FxMask s_FxMask_Fx_Throws = s_FxMask(64u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes = s_FxMask(128u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes_Div0 = s_FxMask(256u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes_OOB = s_FxMask(512u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes_Assert = s_FxMask(1024u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes_Exit = s_FxMask(2048u);
inline constexpr s_FxMask s_FxMask_Fx_Syscall = s_FxMask(4096u);
inline constexpr s_FxMask s_FxMask_Fx_Blocks = s_FxMask(8192u);
inline constexpr s_FxMask s_FxMask_Fx_Blocks_Alloc = s_FxMask(16384u);
inline constexpr s_FxMask s_FxMask_Fx_Blocks_Await = s_FxMask(32768u);

inline constexpr s_FxMask MASK_s_FxMask
    = s_FxMask_Fx_NotDeadCode
    | s_FxMask_Fx_NonDeterministic
    | s_FxMask_Fx_DontMoveUp
    | s_FxMask_Fx_DontMoveDown
    | s_FxMask_Fx_Input
    | s_FxMask_Fx_Output
    | s_FxMask_Fx_Throws
    | s_FxMask_Fx_Crashes
    | s_FxMask_Fx_Crashes_Div0
    | s_FxMask_Fx_Crashes_OOB
    | s_FxMask_Fx_Crashes_Assert
    | s_FxMask_Fx_Crashes_Exit
    | s_FxMask_Fx_Syscall
    | s_FxMask_Fx_Blocks
    | s_FxMask_Fx_Blocks_Alloc
    | s_FxMask_Fx_Blocks_Await;
                                #endif

                                #ifndef DEF_s_Extended
                                #define DEF_s_Extended
struct s_Extended
{
    int local_of;
    unsigned revision;
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Target spec_of;
    s_Template tEmplate;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_ScopeItem> extra_items;
    fu_VEC<int> callers;
    s_FxMask fx_mask;
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
            || fx_mask
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

                                #ifndef DEF_s_SolverNotes
                                #define DEF_s_SolverNotes
inline constexpr s_SolverNotes s_SolverNotes_N_FnRecursion = 1;
inline constexpr s_SolverNotes s_SolverNotes_N_FnResolve = 2;
inline constexpr s_SolverNotes s_SolverNotes_N_FnReopen = 4;
inline constexpr s_SolverNotes s_SolverNotes_N_TypeRecursion = 8;
inline constexpr s_SolverNotes s_SolverNotes_N_TypeResolve = 16;
inline constexpr s_SolverNotes s_SolverNotes_N_TypeReopen = 32;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadCode = 64;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadCall = 128;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadLet = 256;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadIfCond = 512;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadIfCons = 1024;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadArrlit = 2048;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadLoopInit = 4096;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadConv = 8192;
inline constexpr s_SolverNotes s_SolverNotes_N_NonTrivAutoCopy = 16384;
inline constexpr s_SolverNotes s_SolverNotes_N_RelaxRespec = 32768;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedImplicit = 65536;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedCall = 131072;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedDefer = 262144;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedStmt = 524288;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedTry = 1048576;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedAndOr = 2097152;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedIfElse = 4194304;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedArrlit = 8388608;
inline constexpr s_SolverNotes s_SolverNotes_N_BckSoftRisk = 16777216;
inline constexpr s_SolverNotes s_SolverNotes_N_BckMustSeq = 33554432;
inline constexpr s_SolverNotes s_SolverNotes_N_MoveMustSeq = 67108864;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_HasStaticInit = 134217728;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_ExternPrivates = 268435456;

inline constexpr s_SolverNotes MASK_s_SolverNotes
    = s_SolverNotes_N_FnRecursion
    | s_SolverNotes_N_FnResolve
    | s_SolverNotes_N_FnReopen
    | s_SolverNotes_N_TypeRecursion
    | s_SolverNotes_N_TypeResolve
    | s_SolverNotes_N_TypeReopen
    | s_SolverNotes_N_DeadCode
    | s_SolverNotes_N_DeadCall
    | s_SolverNotes_N_DeadLet
    | s_SolverNotes_N_DeadIfCond
    | s_SolverNotes_N_DeadIfCons
    | s_SolverNotes_N_DeadArrlit
    | s_SolverNotes_N_DeadLoopInit
    | s_SolverNotes_N_DeadConv
    | s_SolverNotes_N_NonTrivAutoCopy
    | s_SolverNotes_N_RelaxRespec
    | s_SolverNotes_N_UnusedImplicit
    | s_SolverNotes_N_UnusedCall
    | s_SolverNotes_N_UnusedDefer
    | s_SolverNotes_N_UnusedStmt
    | s_SolverNotes_N_UnusedTry
    | s_SolverNotes_N_UnusedAndOr
    | s_SolverNotes_N_UnusedIfElse
    | s_SolverNotes_N_UnusedArrlit
    | s_SolverNotes_N_BckSoftRisk
    | s_SolverNotes_N_BckMustSeq
    | s_SolverNotes_N_MoveMustSeq
    | s_SolverNotes_N_SD_HasStaticInit
    | s_SolverNotes_N_SD_ExternPrivates;
                                #endif

                                #ifndef DEF_s_SolverOutput
                                #define DEF_s_SolverOutput
struct s_SolverOutput
{
    s_SolvedNode root;
    s_Scope scope;
    s_SolverNotes notes;
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

                                #ifndef DEF_s_ModuleOrder
                                #define DEF_s_ModuleOrder
struct s_ModuleOrder
{
    int dep_depth;
    explicit operator bool() const noexcept
    {
        return false
            || dep_depth
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
    s_ModuleOrder order;
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
            || order
            || out
            || stats
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Map_IAbSsNotHdi
                                #define DEF_s_Map_IAbSsNotHdi
struct s_Map_IAbSsNotHdi
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
    fu_VEC<int> dep_order;
    s_Map_IAbSsNotHdi files;
    s_Map_IAbSsNotHdi fuzzy;
    s_Context(const s_Context&) = delete;
    s_Context(s_Context&&) = default;
    s_Context& operator=(const s_Context&) = delete;
    s_Context& operator=(s_Context&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || modules
            || dep_order
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
    s_SolverNotes break_notes;
    unsigned dev;
    unsigned shuffle;
    explicit operator bool() const noexcept
    {
        return false
            || lint
            || break_notes
            || dev
            || shuffle
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Map_JVvYaNLAkqf
                                #define DEF_s_Map_JVvYaNLAkqf
struct s_Map_JVvYaNLAkqf
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

                                #ifndef DEF_s_SolverState
                                #define DEF_s_SolverState
struct s_SolverState
{
    s_Scope _scope;
    s_ScopeMemo _root_scope;
    s_ScopeSkipMemos _ss;
    fu_VEC<s_ScopeItem> _field_items;
    fu_VEC<int> _pub_imports;
    s_Map_JVvYaNLAkqf _specs;
    fu_VEC<fu_STR> _spec_errors;
    fu_VEC<s_Warning> _warnings;
    fu_STR shortModuleName;
    fu_VEC<s_SolvedNode> TODO_FIX_convert_args;
    s_SolverState(const s_SolverState&) = delete;
    s_SolverState(s_SolverState&&) = default;
    s_SolverState& operator=(const s_SolverState&) = delete;
    s_SolverState& operator=(s_SolverState&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || _scope
            || _root_scope
            || _ss
            || _field_items
            || _pub_imports
            || _specs
            || _spec_errors
            || _warnings
            || shortModuleName
            || TODO_FIX_convert_args
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
    s_FxMask fx_mask;
    explicit operator bool() const noexcept
    {
        return false
            || far_jumps
            || fx_mask
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

                                #ifndef DEF_s_Moves
                                #define DEF_s_Moves
struct s_Moves
{
    s_BitSet used_again;
    s_BitSet just_moved;
    s_BitSet just_used;
    explicit operator bool() const noexcept
    {
        return false
            || used_again
            || just_moved
            || just_used
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Postdom
                                #define DEF_s_Postdom
struct s_Postdom
{
    s_Moves moves;
    int loop_start;
    explicit operator bool() const noexcept
    {
        return false
            || moves
            || loop_start
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
    s_DeclAsserts asserts;
    s_Flow flow;
    s_Effects effects;
    s_Events events;
    int autoshadow_ok;
    fu_VEC<s_Type> var_usage;
    int TODO_FIX_defers;
    s_Postdom postdom;
    explicit operator bool() const noexcept
    {
        return false
            || out
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolverPass
                                #define DEF_s_SolverPass
enum s_SolverPass: fu::u8
{
    s_SolverPass_Solving = 0u,
    s_SolverPass_RelaxMut = 1u,
    s_SolverPass_BorrowCheck = 2u,
    s_SolverPass_MaybeCopyOrMove = 3u,
    s_SolverPass_RelaxCopyResize = 4u,
};
                                #endif

                                #ifndef DEF_s_HelpersMask
                                #define DEF_s_HelpersMask
inline constexpr s_HelpersMask s_HelpersMask_HM_CanBreak = s_HelpersMask(1u);
inline constexpr s_HelpersMask s_HelpersMask_HM_CanReturn = s_HelpersMask(2u);
inline constexpr s_HelpersMask s_HelpersMask_HM_Anon = s_HelpersMask(4u);
inline constexpr s_HelpersMask s_HelpersMask_HM_Function = s_HelpersMask(8u);
inline constexpr s_HelpersMask s_HelpersMask_HM_Lambda = s_HelpersMask(16u);
inline constexpr s_HelpersMask s_HelpersMask_HM_Struct = s_HelpersMask(32u);
inline constexpr s_HelpersMask s_HelpersMask_HM_LabelUsed = s_HelpersMask(64u);
inline constexpr s_HelpersMask s_HelpersMask_HM_KeepBlock = s_HelpersMask(128u);

inline constexpr s_HelpersMask MASK_s_HelpersMask
    = s_HelpersMask_HM_CanBreak
    | s_HelpersMask_HM_CanReturn
    | s_HelpersMask_HM_Anon
    | s_HelpersMask_HM_Function
    | s_HelpersMask_HM_Lambda
    | s_HelpersMask_HM_Struct
    | s_HelpersMask_HM_LabelUsed
    | s_HelpersMask_HM_KeepBlock;
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
    s_Postdom postdom;
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
            || postdom
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ClosureID
                                #define DEF_s_ClosureID
struct s_ClosureID
{
    s_Target target;
    unsigned revision;
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

                                #ifndef DEF_s_Map_UKvTd2mknh0
                                #define DEF_s_Map_UKvTd2mknh0
struct s_Map_UKvTd2mknh0
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
#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

static void push_HdzROYqO(const s_HelpersData& data, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data)
{
    _helpers += s_Helpers { _helpers_data.size() };
    _helpers_data += s_HelpersData(data);
}

static void _Scope_import__forceCopy_2xGqZyw5(const int modid, const s_Context& ctx, s_SolverState& ss)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    ss._scope.items += fu::get_view(s.items, 0, s.pub_items);
    ss._scope.converts += fu::get_view(s.converts, 0, s.pub_cnvrts);
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void;
                                #endif

static bool isTypeDecl_cSKdQ6PB(const s_kind kind)
{
    return (kind == s_kind_struct) || (kind == s_kind_union) || (kind == s_kind_primitive) || (kind == s_kind_enum) || (kind == s_kind_flags);
}

static int unorderedClassify_flORhcLW(const s_kind kind)
{
    if (kind == s_kind_fn)
        return 1;
    else if (isTypeDecl_cSKdQ6PB(kind))
        return 10;
    else
        return 0;

}

                                #ifndef DEF_str_NS5lOCBb1Va
                                #define DEF_str_NS5lOCBb1Va
inline fu_STR str_NS5lOCBb(const s_SolverNotes n)
{
    /*MOV*/ fu_STR res {};

    {
        if (n & s_SolverNotes_N_FnRecursion)
            res += ("N_FnRecursion"_fu + ", "_fu);

        if (n & s_SolverNotes_N_FnResolve)
            res += ("N_FnResolve"_fu + ", "_fu);

        if (n & s_SolverNotes_N_FnReopen)
            res += ("N_FnReopen"_fu + ", "_fu);

        if (n & s_SolverNotes_N_TypeRecursion)
            res += ("N_TypeRecursion"_fu + ", "_fu);

        if (n & s_SolverNotes_N_TypeResolve)
            res += ("N_TypeResolve"_fu + ", "_fu);

        if (n & s_SolverNotes_N_TypeReopen)
            res += ("N_TypeReopen"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadCode)
            res += ("N_DeadCode"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadCall)
            res += ("N_DeadCall"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadLet)
            res += ("N_DeadLet"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadIfCond)
            res += ("N_DeadIfCond"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadIfCons)
            res += ("N_DeadIfCons"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadArrlit)
            res += ("N_DeadArrlit"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadLoopInit)
            res += ("N_DeadLoopInit"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadConv)
            res += ("N_DeadConv"_fu + ", "_fu);

        if (n & s_SolverNotes_N_NonTrivAutoCopy)
            res += ("N_NonTrivAutoCopy"_fu + ", "_fu);

        if (n & s_SolverNotes_N_RelaxRespec)
            res += ("N_RelaxRespec"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedImplicit)
            res += ("N_UnusedImplicit"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedCall)
            res += ("N_UnusedCall"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedDefer)
            res += ("N_UnusedDefer"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedStmt)
            res += ("N_UnusedStmt"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedTry)
            res += ("N_UnusedTry"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedAndOr)
            res += ("N_UnusedAndOr"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedIfElse)
            res += ("N_UnusedIfElse"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedArrlit)
            res += ("N_UnusedArrlit"_fu + ", "_fu);

        if (n & s_SolverNotes_N_BckSoftRisk)
            res += ("N_BckSoftRisk"_fu + ", "_fu);

        if (n & s_SolverNotes_N_BckMustSeq)
            res += ("N_BckMustSeq"_fu + ", "_fu);

        if (n & s_SolverNotes_N_MoveMustSeq)
            res += ("N_MoveMustSeq"_fu + ", "_fu);

        if (n & s_SolverNotes_N_SD_HasStaticInit)
            res += ("N_SD_HasStaticInit"_fu + ", "_fu);

        if (n & s_SolverNotes_N_SD_ExternPrivates)
            res += ("N_SD_ExternPrivates"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static bool isFnOrType_tkK7MQy8(const s_Helpers& h, fu::view<s_HelpersData> _helpers_data)
{
    return !!s_HelpersMask((_helpers_data[h.index].mask & s_HelpersMask((s_HelpersMask_HM_Function | s_HelpersMask_HM_Struct))));
}

                                #ifndef DEF_str_6zSWV5BZnoh
                                #define DEF_str_6zSWV5BZnoh
inline fu_STR str_6zSWV5BZ(const s_SolverPass n)
{
    if (n == s_SolverPass_Solving)
        return "Solving"_fu;
    else if (n == s_SolverPass_RelaxMut)
        return "RelaxMut"_fu;
    else if (n == s_SolverPass_BorrowCheck)
        return "BorrowCheck"_fu;
    else if (n == s_SolverPass_MaybeCopyOrMove)
        return "MaybeCopyOrMove"_fu;
    else if (n == s_SolverPass_RelaxCopyResize)
        return "RelaxCopyResize"_fu;

    return fu::i64dec(int64_t(n));
}
                                #endif

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_max_F7KakSWb5Tl
                                #define DEF_max_F7KakSWb5Tl
inline int max_F7KakSWb(const int a, const int b)
{
    if ((a >= b))
        return a;
    else
        return b;

}
                                #endif

static bool isLocal_fCRJFL21(const s_Target& target)
{
    return target.modid < 0;
}

static const bool SELF_TEST = true;

                                #ifndef DEF_unless_oob_MFXRIS0PVB0
                                #define DEF_unless_oob_MFXRIS0PVB0
inline const s_Extended& unless_oob_MFXRIS0P(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT_N3jS4trN(const s_Target& target, const s_Context& ctx, const s_Module& module, const s_SolverState& ss)
{
    if (target.modid == module.modid)
        return unless_oob_MFXRIS0P(ss._scope.extended, target.index);
    else
        return (target.modid >= 0) ? unless_oob_MFXRIS0P(ctx.modules[target.modid].out.solve.scope.extended, target.index) : (*(const s_Extended*)fu::NIL);

}

static int localOf_JIWfMq4F(const s_Target& target, const s_Context& ctx, const s_Module& module, const s_SolverState& ss)
{
    if (isLocal_fCRJFL21(target))
        return -target.modid;
    else
        return EXT_N3jS4trN(target, ctx, module, ss).local_of;

}

static s_Target parent_G0CmT2rt(const s_Target& target, const s_Context& ctx, const s_Module& module, const s_SolverState& ss)
{
    return s_Target { int(module.modid), localOf_JIWfMq4F(target, ctx, module, ss) };
}

                                #ifndef DEF_str_v3b7EcLtghl
                                #define DEF_str_v3b7EcLtghl
inline fu_STR str_v3b7EcLt(const s_kind n)
{
    if (n == s_kind_sof)
        return "sof"_fu;
    else if (n == s_kind_err)
        return "err"_fu;
    else if (n == s_kind_eof)
        return "eof"_fu;
    else if (n == s_kind_id)
        return "id"_fu;
    else if (n == s_kind_op)
        return "op"_fu;
    else if (n == s_kind_int)
        return "int"_fu;
    else if (n == s_kind_real)
        return "real"_fu;
    else if (n == s_kind_char)
        return "char"_fu;
    else if (n == s_kind_str)
        return "str"_fu;
    else if (n == s_kind_bool)
        return "bool"_fu;
    else if (n == s_kind_copy)
        return "copy"_fu;
    else if (n == s_kind_move)
        return "move"_fu;
    else if (n == s_kind_arrlit)
        return "arrlit"_fu;
    else if (n == s_kind_definit)
        return "definit"_fu;
    else if (n == s_kind_empty)
        return "empty"_fu;
    else if (n == s_kind_void)
        return "void"_fu;
    else if (n == s_kind_not)
        return "not"_fu;
    else if (n == s_kind_call)
        return "call"_fu;
    else if (n == s_kind_argid)
        return "argid"_fu;
    else if (n == s_kind_root)
        return "root"_fu;
    else if (n == s_kind_block)
        return "block"_fu;
    else if (n == s_kind_if)
    {
        return "if"_fu;
    }
    else if (n == s_kind_or)
        return "or"_fu;
    else if (n == s_kind_and)
        return "and"_fu;
    else if (n == s_kind_loop)
        return "loop"_fu;
    else if (n == s_kind_jump)
        return "jump"_fu;
    else if (n == s_kind___far_jump)
        return "__far_jump"_fu;
    else if (n == s_kind_defer)
        return "defer"_fu;
    else if (n == s_kind_try)
        return "try"_fu;
    else if (n == s_kind_let)
        return "let"_fu;
    else if (n == s_kind_letdef)
        return "letdef"_fu;
    else if (n == s_kind_typedef)
        return "typedef"_fu;
    else if (n == s_kind_typecast)
        return "typecast"_fu;
    else if (n == s_kind_typeassert)
        return "typeassert"_fu;
    else if (n == s_kind_typeparam)
        return "typeparam"_fu;
    else if (n == s_kind_unwrap)
        return "unwrap"_fu;
    else if (n == s_kind_pragma)
        return "pragma"_fu;
    else if (n == s_kind_break)
        return "break"_fu;
    else if (n == s_kind_return)
        return "return"_fu;
    else if (n == s_kind_continue)
        return "continue"_fu;
    else if (n == s_kind_import)
        return "import"_fu;
    else if (n == s_kind_addroffn)
        return "addroffn"_fu;
    else if (n == s_kind_forfieldsof)
        return "forfieldsof"_fu;
    else if (n == s_kind_struct)
        return "struct"_fu;
    else if (n == s_kind_union)
        return "union"_fu;
    else if (n == s_kind_primitive)
        return "primitive"_fu;
    else if (n == s_kind_flags)
        return "flags"_fu;
    else if (n == s_kind_enum)
        return "enum"_fu;
    else if (n == s_kind_members)
        return "members"_fu;
    else if (n == s_kind_fndef)
        return "fndef"_fu;
    else if (n == s_kind_fn)
        return "fn"_fu;
    else if (n == s_kind_fnbranch)
        return "fnbranch"_fu;
    else if (n == s_kind_pattern)
        return "pattern"_fu;
    else if (n == s_kind_typeunion)
        return "typeunion"_fu;
    else if (n == s_kind_typetag)
        return "typetag"_fu;
    else if (n == s_kind___relaxed)
        return "__relaxed"_fu;
    else if (n == s_kind___convert)
        return "__convert"_fu;
    else if (n == s_kind___no_kind_yet)
        return "__no_kind_yet"_fu;
    else if (n == s_kind_type)
        return "type"_fu;
    else if (n == s_kind_var)
        return "var"_fu;
    else if (n == s_kind_field)
        return "field"_fu;
    else if (n == s_kind_enumv)
        return "enumv"_fu;
    else if (n == s_kind_template)
        return "template"_fu;
    else if (n == s_kind___native)
        return "__native"_fu;
    else if (n == s_kind_inline)
        return "inline"_fu;

    return fu::i64dec(int64_t(n));
}
                                #endif

static fu_STR human_yoPbxz1W(const fu_STR& id, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Target t = tryParseClosureID_ESzTmva3(id).target;
    if (!t)
        return fu_STR(id);
    else
        return (GET_ryFyPS6P(parent_G0CmT2rt(t, ctx, module, ss), ctx, module, _here, ss, _helpers, _helpers_data).name + ":"_fu) + GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).name;

}

static fu_STR qWHAT_vXP1PCtb(const s_Overload& o, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_kind kind = o.kind;
    fu_STR kind_1 = (((kind == s_kind_var) && (o.flags & s_Flags_F_ARG)) ? "arg"_fu : str_v3b7EcLt(kind));
    return (qKW_9QQZAztz(kind_1) + " "_fu) + qID_9QQZAztz(human_yoPbxz1W(o.name, ctx, module, _here, ss, _helpers, _helpers_data));
}

static const s_Overload& GET_ryFyPS6P(const s_Target& target, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (isLocal_fCRJFL21(target))
    {
        if (SELF_TEST && (ss._scope.extended.size() <= -target.modid))
            fail_7KwuQpwr((("Invalid local target -modid."_fu + "\n\tProbably leaked from another module."_fu) + "\n\tBUG: Currently arg defaults & inlining can do this."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
        else
        {
            fu::view<s_Overload> locals = ss._scope.extended[-target.modid].locals;
            if (SELF_TEST && (locals.size() < target.index))
                fail_7KwuQpwr(x7E_sTZRmMq1((x7E_sTZRmMq1((("Out of range local target from: "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(parent_G0CmT2rt(target, ctx, module, ss), ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)) + "\n\tlocals="_fu), fu::i64dec(locals.size())) + "\n\tindex="_fu), fu::i64dec(target.index)), ctx, module, _here, ss, _helpers, _helpers_data);
            else
                return locals[(target.index - 1)];

        };
    }
    else if (target.modid == module.modid)
        return ss._scope.overloads[(target.index - 1)];
    else
        return ctx.modules[target.modid].out.solve.scope.overloads[(target.index - 1)];

}

static fu_STR fail_appendStack_ifcuNJ6t(/*MOV*/ fu_STR&& reason, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    int callstack = 0;
    s_SolverPass pass0 {};
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (isFnOrType_tkK7MQy8(h, _helpers_data))
        {
            if (!callstack++)
                reason += "\n"_fu;

            s_SolverPass _0 {};
            fu_STR pass = (((_0 = s_SolverPass(pass0), (s_SolverPass(_0) != (pass0 = _helpers_data[h.index].pass))) || (callstack == 1)) ? x7E_sTZRmMq1(str_6zSWV5BZ(_helpers_data[h.index].pass), " "_fu) : fu_STR{});
            reason += (fu::get_view("\n                "_fu, 0, max_F7KakSWb((17 - pass.size()), 1)) + pass);
            const s_Overload& o = GET_ryFyPS6P(_helpers_data[h.index].target, ctx, module, _here, ss, _helpers, _helpers_data);
            reason += qWHAT_vXP1PCtb(o, ctx, module, _here, ss, _helpers, _helpers_data);
            const s_TokenIdx& token = o.solved.token;
            if (token)
                reason += x7E_sTZRmMq1((x7E_sTZRmMq1(((" "_fu + _fname_8Dsl78sB(token, ctx)) + ":"_fu), fu::i64dec(_token_8Dsl78sB(token, ctx).line)) + ":"_fu), fu::i64dec(_token_8Dsl78sB(token, ctx).col));

        };
    };
    return static_cast<fu_STR&&>(reason);
}

[[noreturn]] static fu::never BUG_k3P6Th3U(/*MOV*/ fu_STR&& reason, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu_STR _0 {};
    fail_7KwuQpwr((_0 = "COMPILER BUG:\n\n\t"_fu, (static_cast<fu_STR&&>(_0) + (reason ? static_cast<fu_STR&&>(reason) : "Assertion failed."_fu))), ctx, module, _here, ss, _helpers, _helpers_data);
}

[[noreturn]] static fu::never fail_7KwuQpwr(/*MOV*/ fu_STR&& reason, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (reason)
    {
        FAIL_vYytSj38(fail_appendStack_ifcuNJ6t(static_cast<fu_STR&&>(reason), ctx, module, _here, ss, _helpers, _helpers_data), _here, ctx);
    }
    else
    {
        BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
    };
}

static void makeNote_jjqaKIrz(const s_SolverNotes note, const s_Context& ctx, const s_Module& module, const s_Options& options, const s_TokenIdx& _here, const s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (note & options.break_notes)
        fail_7KwuQpwr((x7E_sTZRmMq1("`break_notes`: Unwanted event: `"_fu, str_NS5lOCBb(note)) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
    else
        _notes |= note;

}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

static const bool OPTI_autoshadow = true;

static bool shouldAutoshadow_QeI42udB(fu::view<char> id, const s_SolverState& ss)
{
    if (!OPTI_autoshadow)
        return false;
    else
    {

        {
            fu::view<s_ScopeItem> items = ss._scope.items;
            fu::view<s_ScopeSkip> scope_skip = ss._ss.items;
            const int start = 0;
            const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
            int i0 = start;
            for (int i = 0; i < (scope_skip.size() + 1); i++)
            {
                const s_ScopeSkip& ss_1 = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
                if ((ss_1.end <= i0))
                    continue;
                else
                {
                    const int i1 = ss_1.start;
                    for (int i_1 = i0; i_1 < i1; i_1++)
                    {
                        const s_ScopeItem& item = items[i_1];
                        if ((i_1 >= ss._root_scope.items_len) && (item.id == id))
                            return false;

                    };
                    i0 = ss_1.end;
                };
            };
        };
        return true;
    };
}

static void autoshadow_asR7vHOb(bool& shadows, const int local_of, fu::view<char> id, const s_SolverState& ss, const s_CurrentFn& _current_fn)
{
    if (!_current_fn.autoshadow_ok)
        return;
    else if (!shadows && local_of && shouldAutoshadow_QeI42udB(id, ss))
        shadows = true;

}

                                #ifndef DEF_grow_if_oob_mBnKtXmIiEc
                                #define DEF_grow_if_oob_mBnKtXmIiEc
inline s_Extended& grow_if_oob_mBnKtXmI(fu_VEC<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static s_Extended& EXT_mut_ZuyZYWC3(const s_Target& target, const s_Module& module, s_SolverState& ss)
{
    if (target.modid == module.modid)
    {
        return grow_if_oob_mBnKtXmI(ss._scope.extended, target.index);
    }
    else
        fu_ASSERT();

}

static s_Template createTemplate_sqGK8ATk(const s_Node& node, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    return s_Template { s_Node(node), fu_VEC<int>((!_current_fn ? ss._scope.imports : (*(const fu_VEC<int>*)fu::NIL))), (_current_fn ? Scope_snap_JtSt09Yg(ss._scope, _helpers) : s_ScopeMemo{}), s_ScopeSkipMemos((_current_fn ? ss._ss : (*(const s_ScopeSkipMemos*)fu::NIL))) };
}

static s_Type X_addrofTarget_FJa7W3UK(const s_Target& target)
{
    return s_Type { s_ValueType { 0, packAddrOfFn_KJaKO9Hx((fu::slate<1, s_Target> { s_Target(target) })) }, s_Lifetime{} };
}

static s_SolvedNode SolvedNode_ROjBZjUC(const s_kind kind, const s_Type& type, const s_Flags flags, const fu_STR& value, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const s_Helpers& helpers, const s_TokenIdx& _here)
{
    return s_SolvedNode { s_kind(kind), s_Helpers(helpers), s_Flags(flags), 0, fu_STR(value), fu_VEC<s_SolvedNode>(items), s_TokenIdx(_here), s_Type(type), s_Target(target), s_RWRanges{} };
}

static s_SolvedNode createFnDef_e54heuYv(const s_Type& type, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_ROjBZjUC(s_kind_fndef, type, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_SolvedNode uPrepFn_A_JNHb8yZs(const s_Node& node, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    const fu_STR& id = node.value;
    const int local_of = _current_fn.out.target.index;
    const s_SolverStatus status = s_SolverStatus_SS_LAZY;
    const s_Target target = Scope_create_EMDiTJHw(ss._scope, s_kind_fn, "__prep__"_fu, (*(const s_Type*)fu::NIL), node.flags, status, 0, module);
    bool shadows = !!(node.flags & s_Flags_F_SHADOW);
    autoshadow_asR7vHOb(shadows, local_of, id, ss, _current_fn);
    Scope_set_D73yKAeS(ss._scope, id, target, shadows);
    s_Extended& ext = EXT_mut_ZuyZYWC3(target, module, ss);
    ext.local_of = local_of;
    ext.tEmplate = createTemplate_sqGK8ATk(node, ss, _current_fn, _helpers);
    ext.min = int(0x7fffffffu);
    ext.max = 0;
    if (node.flags & s_Flags_F_CONVERSION)
        ss._scope.converts.push(s_Target(target));

    return createFnDef_e54heuYv(X_addrofTarget_FJa7W3UK(target), target, _here);
}

                                #ifndef DEF_STRUCT_BASE
                                #define DEF_STRUCT_BASE
inline constexpr int STRUCT_BASE = 0;
                                #endif

                                #ifndef DEF_if_last_7ZMqiNoZmIe
                                #define DEF_if_last_7ZMqiNoZmIe
inline const s_SolvedNode& if_last_7ZMqiNoZ(fu::view<s_SolvedNode> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never;
                                #endif

                                #ifndef DEF_x3Cx3E_D3b1dJ13Cpi
                                #define DEF_x3Cx3E_D3b1dJ13Cpi
inline int x3Cx3E_D3b1dJ13(const s_Helpers& a, const s_Helpers& b)
{

    {
        const int cmp = x3Cx3E_F7KakSWb(a.index, b.index);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_D3b1dJ13Cpi
                                #define DEF_x3Dx3D_D3b1dJ13Cpi
inline bool operator==(const s_Helpers& a, const s_Helpers& b)
{
    return !x3Cx3E_D3b1dJ13(a, b);
}
                                #endif

static s_Overload& GET_mut_UTaXftgW(const s_Target& target, const s_Module& module, s_SolverState& ss)
{
    if (target.modid < 0)
        return ss._scope.extended.mutref(-target.modid).locals.mutref((target.index - 1));
    else if ((target.index > 0) && (target.modid == module.modid))
        return ss._scope.overloads.mutref((target.index - 1));
    else
        fu_ASSERT();

}

                                #ifndef DEF_each_WvUv3SlDFlk
                                #define DEF_each_WvUv3SlDFlk
inline void each_WvUv3SlD(fu::view_mut<s_SolvedNode> a, const s_Helpers& h, const s_Helpers& h0, const s_Module& module, s_SolverState& ss, fu::view_mut<s_HelpersData> _helpers_data)
{
    for (int i = 0; i < a.size(); i++)
        visit_zKQUOUE6(a.mutref(i), h, h0, module, ss, _helpers_data);

}
                                #endif

static void visit_zKQUOUE6(s_SolvedNode& item, const s_Helpers& h, const s_Helpers& h0, const s_Module& module, s_SolverState& ss, fu::view_mut<s_HelpersData> _helpers_data)
{
    if ((item.kind == s_kind_jump) && (item.helpers == h0))
    {
        item.helpers = h;
        _helpers_data.mutref(h.index).mask |= s_HelpersMask_HM_LabelUsed;
    };
    if (item.kind == s_kind_letdef)
    {
        const s_Target target { item.target };
        std::swap(item, GET_mut_UTaXftgW(target, module, ss).solved);
        fu_DEFER(std::swap(item, GET_mut_UTaXftgW(target, module, ss).solved));
        each_WvUv3SlD(item.items, h, h0, module, ss, _helpers_data);
    };
    each_WvUv3SlD(item.items, h, h0, module, ss, _helpers_data);
}

                                #ifndef DEF_only_7ZMqiNoZmIe
                                #define DEF_only_7ZMqiNoZmIe
inline const s_SolvedNode& only_7ZMqiNoZ(fu::view<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_sTZRmMq1("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static void relinkJumps_fHVaXtUO(const s_Helpers& h, s_SolvedNode& expr, const s_Module& module, s_SolverState& ss, fu::view_mut<s_HelpersData> _helpers_data)
{
    if (expr.kind == s_kind_block)
    {
        const s_Helpers h0 { expr.helpers };
        if (_helpers_data[h0.index].mask & s_HelpersMask_HM_LabelUsed)
        {
            visit_zKQUOUE6(expr, h, h0, module, ss, _helpers_data);
            _helpers_data.mutref(h0.index).mask &= s_HelpersMask(~s_HelpersMask_HM_LabelUsed);
            expr.helpers = s_Helpers{};
            if (expr.items.size() == 1)
                expr = only_7ZMqiNoZ(expr.items);

        };
    };
}

                                #ifndef DEF_last_PyOGoLWZc84
                                #define DEF_last_PyOGoLWZc84
inline s_SolvedNode& last_PyOGoLWZ(fu::view_mut<s_SolvedNode> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

static const bool OPTI_flatten_blocks = true;

                                #ifndef DEF_last_7ZMqiNoZmIe
                                #define DEF_last_7ZMqiNoZmIe
inline const s_SolvedNode& last_7ZMqiNoZ(fu::view<s_SolvedNode> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

static s_SolvedNode createEmpty_R642r6KV(const s_kind kind, const s_Type& type, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_ROjBZjUC(kind, type, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

                                #ifndef DEF_x3Cx3E_SWJyYhvzXi2
                                #define DEF_x3Cx3E_SWJyYhvzXi2
inline int x3Cx3E_SWJyYhvz(const s_ValueType& a, const s_ValueType& b)
{

    {

        {
            const int cmp = x3Cx3E_F7KakSWb(a.quals, b.quals);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_sTZRmMq1(a.canon, b.canon);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_A8tRjjUdpoc
                                #define DEF_x3Cx3E_A8tRjjUdpoc
inline int x3Cx3E_A8tRjjUd(const s_Region& a, const s_Region& b)
{

    {
        const int cmp = x3Cx3E_F7KakSWb(a.index, b.index);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_HivDn1koKN2
                                #define DEF_x3Cx3E_HivDn1koKN2
inline int x3Cx3E_HivDn1ko(fu::view<s_Region> a, fu::view<s_Region> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_A8tRjjUd(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Cx3E_ZEZmKEMV5rb
                                #define DEF_x3Cx3E_ZEZmKEMV5rb
inline int x3Cx3E_ZEZmKEMV(const s_Lifetime& a, const s_Lifetime& b)
{

    {
        const int cmp = x3Cx3E_HivDn1ko(a.uni0n, b.uni0n);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_sXOXbilqj37
                                #define DEF_x3Cx3E_sXOXbilqj37
inline int x3Cx3E_sXOXbilq(const s_Type& a, const s_Type& b)
{

    {

        {
            const int cmp = x3Cx3E_SWJyYhvz(a.vtype, b.vtype);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_ZEZmKEMV(a.lifetime, b.lifetime);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sXOXbilqj37
                                #define DEF_x3Dx3D_sXOXbilqj37
inline bool operator==(const s_Type& a, const s_Type& b)
{
    return !x3Cx3E_sXOXbilq(a, b);
}
                                #endif

                                #ifndef DEF_CANNOT_definit_mutrefs
                                #define DEF_CANNOT_definit_mutrefs
extern const bool CANNOT_definit_mutrefs;
                                #endif

static s_SolvedNode createAnd_fwXZzazJ(const fu_VEC<s_SolvedNode>& items, s_Type&& type, const s_TokenIdx& _here)
{
    if (items.size() < 2)
        return s_SolvedNode(only_7ZMqiNoZ(items));
    else
    {
        if (is_void_eqpYb5IC(type))
            type = t_bool;

        if (!(type == t_bool))
        {
            /*MOV*/ s_Type sumType {};
            for (int i = items.size(); i-- > 0; )
            {
                const s_SolvedNode& item = items[i];
                if (is_never_eqpYb5IC(item.type))
                    continue;
                else if (sumType)
                {
                    sumType = type_trySuper_HuTHARyU(sumType, item.type, false);
                    if (!is_ref_qNIEFFQB(sumType))
                        break;

                }
                else
                {
                    type = item.type;
                    sumType = item.type;
                    if (is_zeroes_eqpYb5IC(type))
                        break;

                };
            };
            if (!is_ref_qNIEFFQB(sumType))
            {
                if (is_ref_qNIEFFQB(type))
                {
                    if (CANNOT_definit_mutrefs)
                        type = clear_mutref_qNIEFFQB(s_Type(type));

                    type.lifetime = Lifetime_makeShared_0ep4DGAR(type.lifetime);
                };
            }
            else
                type = static_cast<s_Type&&>(sumType);

        };
        return SolvedNode_ROjBZjUC(s_kind_and, type, s_Flags{}, (*(const fu_STR*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
    };
}

static const s_Struct& lookupUserType_OSTRqvzG(const s_Type& type, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    const s_Struct* _0;
    return *(_0 = &(tryLookupUserType_ChYpFATl(type, ctx, module))) ? *_0 : fail_7KwuQpwr(("Not a struct nor custom primitive: "_fu + humanizeType_3wOVPKQg(type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);
}

static s_Target nested_MxoYXM2x(const int index, const s_Target& _current_fnort, const s_Module& module)
{
    int _0 {};
    return s_Target { ((_0 = -_current_fnort.index) ? _0 : int(module.modid)), int(index) };
}

static const s_Overload& Region_GET_DezSnHcm(const s_Region& r, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    return GET_ryFyPS6P(nested_MxoYXM2x(Region_toLocal_PhGvG2us(r), _current_fnort, module), ctx, module, _here, ss, _helpers, _helpers_data);
}

static fu_STR qWHAT_KqX3VCyd(const s_Lifetime& l, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ fu_STR str {};
    for (int i = 0; i < l.uni0n.size(); i++)
    {
        if (i)
            str += "|"_fu;

        const s_Region& r = l.uni0n[i];
        if (Region_isStatic_PhGvG2us(r))
            str += "static"_fu;
        else if (Region_isTemp_PhGvG2us(r))
            str += "temp"_fu;
        else if (Region_isArgPosition_PhGvG2us(r))
            str += x7E_sTZRmMq1("arg#"_fu, fu::i64dec(Region_toArgPosition_PhGvG2us(r)));
        else
            str += qWHAT_vXP1PCtb(Region_GET_DezSnHcm(r, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort), ctx, module, _here, ss, _helpers, _helpers_data);

    };
    return /*NRVO*/ str;
}

static fu_STR humanizeType_3wOVPKQg(const s_Type& type, const bool lt, const int, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ fu_STR result { (isStruct_FNWlOhLB(type) ? lookupUserType_OSTRqvzG(type, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort).name : type.vtype.canon) };
    if (type.vtype.quals)
        result += humanizeQuals_qNIEFFQB(type);

    if (lt && type.lifetime)
    {
        result += ("`"_fu + qWHAT_KqX3VCyd(type.lifetime, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort));
    };
    return /*NRVO*/ result;
}

static s_SolvedNode createOr_aJrU9XeP(fu_VEC<s_SolvedNode>&& items, s_Type&& type, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (items.size() < 2)
        return s_SolvedNode(only_7ZMqiNoZ(items));
    else
    {
        if (is_void_eqpYb5IC(type))
            type = t_bool;

        if (!(type == t_bool))
        { {
            /*MOV*/ s_Type sumType {};
            bool hasNever = false;
            for (int i = items.size(); i-- > 0; )
            {
                s_SolvedNode& item = items.mutref(i);
                if (is_never_eqpYb5IC(item.type))
                {
                    hasNever = true;
                    continue;
                }
                else
                {
                    const s_SolvedNode& andLast = (hasNever && (item.kind == s_kind_and) && item.items ? item.items[(item.items.size() - 1)] : (*(const s_SolvedNode*)fu::NIL));
                    const s_Type& itemType = ((andLast && !is_never_eqpYb5IC(andLast.type)) ? (item.type = andLast.type) : item.type);
                    if (sumType)
                    {
                        sumType = type_trySuper_HuTHARyU(sumType, itemType, false);
                        if (!sumType)
                        {
                            for (int i_1 = 0; i_1 < items.size(); i_1++)
                            {
                                const s_SolvedNode& item_1 = items[i_1];
                                if (item_1.type.vtype.canon == t_bool.vtype.canon)
                                {
                                    type = t_bool;
                                    goto BL_4;
                                };
                            };
                            fail_7KwuQpwr(((("Ambiguous ||, incompatible operands in a non-bool context: "_fu + humanizeType_3wOVPKQg(itemType, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + " || "_fu) + humanizeType_3wOVPKQg(sumType, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);
                        };
                    }
                    else
                        sumType = itemType;

                };
            };
            if (!sumType)
                type = t_bool;
            else
                type = static_cast<s_Type&&>(sumType);

          } BL_4:;
        };
        return SolvedNode_ROjBZjUC(s_kind_or, type, s_Flags{}, (*(const fu_STR*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
    };
}

static const fu_STR& getBasePrimitive_4ZhrSzAz(const s_Type& type, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    const int offset = basePrimPrefixLen_9ycokehR(type.vtype.canon);
    if (offset < type.vtype.canon.size())
        return lookupUserType_OSTRqvzG(type, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort).base;
    else
        return type.vtype.canon;

}

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32;
                                #endif

static bool want_pJmezwch(const s_Type& t, fu::view<char> c)
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

static s_Type solveInt_M8GoO5uR(fu::view<char> v, const s_Type& type, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ s_Intlit parse = Intlit_eSPjJZjJ(v);
    if (parse.error)
        fail_7KwuQpwr(static_cast<fu_STR&&>(parse.error), ctx, module, _here, ss, _helpers, _helpers_data);
    else
    {
        if (type && is_primitive_XeFsC3zb(type))
        {
            fu::view<char> c = getBasePrimitive_4ZhrSzAz(type, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
            if (!parse.uNsigned)
            {
                if (((parse.minsize_f <= fu::u8(32u)) && want_pJmezwch(t_f32, c)) || ((parse.minsize_f <= fu::u8(64u)) && want_pJmezwch(t_f64, c)) || ((parse.minsize_i <= fu::u8(32u)) && want_pJmezwch(t_i32, c)) || ((parse.minsize_i <= fu::u8(64u)) && want_pJmezwch(t_i64, c)) || ((parse.minsize_i <= fu::u8(16u)) && want_pJmezwch(t_i16, c)) || ((parse.minsize_i <= fu::u8(8u)) && want_pJmezwch(t_i8, c)))
                    return clear_refs_qNIEFFQB(s_Type(type));

            };
            if (!parse.sIgned)
            {
                if (((parse.minsize_u <= fu::u8(32u)) && want_pJmezwch(t_u32, c)) || ((parse.minsize_u <= fu::u8(64u)) && want_pJmezwch(t_u64, c)) || ((parse.minsize_u <= fu::u8(16u)) && want_pJmezwch(t_u16, c)) || ((parse.minsize_u <= fu::u8(8u)) && want_pJmezwch(t_u8, c)))
                    return clear_refs_qNIEFFQB(s_Type(type));

            };
        };
        if (parse.uNsigned || (!parse.sIgned && (parse.base != fu::u8(10u))))
        {
            if ((parse.minsize_u <= fu::u8(32u)))
                return s_Type(t_u32);
            else if ((parse.minsize_u <= fu::u8(64u)))
                return s_Type(t_u64);

        }
        else
        {
            if ((parse.minsize_i <= fu::u8(32u)))
                return s_Type(t_i32);
            else if ((parse.minsize_i <= fu::u8(64u)))
                return s_Type(t_i64);

        };
        fail_7KwuQpwr("Bad int literal."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
    };
}

static const s_Type& solveReal_t90qkLYy(fu::view<char>, const s_Type& type)
{
    if (type.vtype.canon == t_f32.vtype.canon)
        return t_f32;
    else
        return t_f64;

}

                                #ifndef DEF_t_zeroes
                                #define DEF_t_zeroes
extern const s_Type t_zeroes;
                                #endif

static s_Type trySolveDefinit_ER69Znmi(const s_Type& type)
{
    if (!type)
        return s_Type(t_zeroes);
    else
        return type_trySuper_HuTHARyU(t_zeroes, type, false);

}

                                #ifndef DEF_t_string
                                #define DEF_t_string
extern const s_Type t_string;
                                #endif

static s_Type solveString_HCTIquZP(fu::view<char> v, const s_Type& type, const s_Context& ctx, const s_Module& module)
{
    if (type && is_primitive_XeFsC3zb(type))
    {
        fu::view<s_ScopeItem> members = tryLookupUserType_ChYpFATl(type, ctx, module).items;
        for (int i = 0; i < members.size(); i++)
        {
            if (members[i].id == v)
                return clear_refs_qNIEFFQB(s_Type(type));

        };
    };
    return s_Type(t_string);
}

static s_Type tryRetyping_yDcFD2W2(const s_SolvedNode& node, const s_Type& expect, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (is_arithmetic_XeFsC3zb(node.type) && is_arithmetic_XeFsC3zb(expect))
    {
        if (node.kind == s_kind_int)
            return solveInt_M8GoO5uR(node.value, expect, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
        else if (node.kind == s_kind_real)
            return s_Type(solveReal_t90qkLYy(node.value, expect));

    };
    if (node.kind == s_kind_definit)
        return trySolveDefinit_ER69Znmi(expect);
    else if (node.kind == s_kind_str)
        return solveString_HCTIquZP(node.value, expect, ctx, module);
    else if (node.kind == s_kind_if)
    {
        s_Type left = tryRetyping_yDcFD2W2(node.items[1], expect, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
        s_Type right = tryRetyping_yDcFD2W2(node.items[2], expect, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
        return left && right ? type_trySuper_HuTHARyU(left, right, false) : s_Type{};
    }
    else if (node.kind == s_kind_and)
        return tryRetyping_yDcFD2W2(last_7ZMqiNoZ(node.items), expect, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
    else
    {
        return s_Type{};
    };
}

static void applyRetype_7oVcLMt3(s_SolvedNode& node, const s_Type& retype)
{
    if (node.kind == s_kind_if)
    {
        applyRetype_7oVcLMt3(node.items.mutref(1), retype);
        applyRetype_7oVcLMt3(node.items.mutref(2), retype);
    }
    else if (node.kind == s_kind_and)
        applyRetype_7oVcLMt3(last_PyOGoLWZ(node.items), retype);

    node.type = retype;
}

                                #ifndef DEF_each_M1a2cDiHomd
                                #define DEF_each_M1a2cDiHomd
inline void each_M1a2cDiH(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, int& count, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss_1 = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if ((ss_1.end <= i0))
            continue;
        else
        {
            const int i1 = ss_1.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
            {
                const s_Target& u = items[i_1];
                if (u)
                    count++;
                else
                {
                    BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
                };
            };
            i0 = ss_1.end;
        };
    };
}
                                #endif

static int countUsings_NBpYwXjU(const bool local_scope, const s_Scope& misc_scope, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Scope& scope = (local_scope ? ss._scope : misc_scope);
    int count = 0;
    if (scope.usings)
    {
        each_M1a2cDiH(scope.usings, (local_scope ? ss._ss.usings : fu::view<s_ScopeSkip>{}), 0, count, ctx, module, _here, ss, _helpers, _helpers_data);
    };
    return count;
}

                                #ifndef DEF_each_6PQjt9pVGEe
                                #define DEF_each_6PQjt9pVGEe
inline void each_6PQjt9pV(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, s_BitSet& seen)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if ((ss.end <= i0))
            continue;
        else
        {
            const int i1 = ss.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
            {
                const int modid = items[i_1];
                add_uczByTOp(seen, modid);
            };
            i0 = ss.end;
        };
    };
}
                                #endif

static void visitTypeImports_YqU2qw9t(const s_Type& type, fu::view<char> id, const bool local_scope, fu_VEC<s_Target>& extra_items, s_BitSet& seen, const s_Context& ctx, const s_Module& module, const s_SolverState& ss)
{
    fu::view<int> visit = lookupTypeImports_ChYpFATl(type, ctx, module);
    for (int i = -1; i < visit.size(); i++)
    {
        const int modid = ((i >= 0) ? int(visit[i]) : modidOfOrigin_FNWlOhLB(type));
        if (has_qNZlwBKS(seen, modid))
            continue;
        else
        {
            if (!seen)
            {
                add_uczByTOp(seen, 0);
                add_uczByTOp(seen, module.modid);
                each_6PQjt9pV(ss._scope.imports, (local_scope ? ss._ss.imports : fu::view<s_ScopeSkip>{}), 0, seen);
            };
            if (!add_once_uczByTOp(seen, modid))
                continue;
            else
            {
                fu::view<s_ScopeItem> items = ctx.modules[modid].out.solve.scope.items;
                for (int i_1 = 0; i_1 < items.size(); i_1++)
                {
                    if (items[i_1].id == id)
                        extra_items.push(target_QZZ1cmZA(items[i_1]));

                };
            };
        };
    };
}

                                #ifndef DEF_each_6kC7d1dYauh
                                #define DEF_each_6kC7d1dYauh
inline void each_6kC7d1dY(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu::view<char> id, const bool local_scope, fu_VEC<s_Target>& extra_items, s_BitSet& seen, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss_1 = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if ((ss_1.end <= i0))
            continue;
        else
        {
            const int i1 = ss_1.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
            {
                const s_Target& u = items[i_1];
                visitTypeImports_YqU2qw9t(GET_ryFyPS6P(u, ctx, module, _here, ss, _helpers, _helpers_data).type, id, local_scope, extra_items, seen, ctx, module, ss);
            };
            i0 = ss_1.end;
        };
    };
}
                                #endif

static const fu_VEC<s_ScopeItem>& field_items_qoS1rQUb(const int considerFieldItems, const s_SolverState& ss)
{
    return considerFieldItems ? ss._field_items : (*(const fu_VEC<s_ScopeItem>*)fu::NIL);
}

                                #ifndef DEF_str_uDKw0whODl0
                                #define DEF_str_uDKw0whODl0
inline fu_STR str_uDKw0whO(const s_SolverStatus n)
{
    /*MOV*/ fu_STR res {};

    {
        if (n & s_SolverStatus_SS_LAZY)
            res += ("SS_LAZY"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_DID_START)
            res += ("SS_DID_START"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_DIRTY)
            res += ("SS_DIRTY"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_FINALIZED)
            res += ("SS_FINALIZED"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_UPDATED)
            res += ("SS_UPDATED"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_TYPE_RECUR)
            res += ("SS_TYPE_RECUR"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_FN_RECUR)
            res += ("SS_FN_RECUR"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_HOIST)
            res += ("SS_HOIST"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_UNUSED)
            res += ("SS_UNUSED"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_last_SLwrTQE9Cdg
                                #define DEF_last_SLwrTQE9Cdg
inline const s_Target& last_SLwrTQE9(fu::view<s_Target> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_unpackAddrOfFn_AN5WVMgB7nk
                                #define DEF_unpackAddrOfFn_AN5WVMgB7nk
inline void unpackAddrOfFn_AN5WVMgB(fu::view<char> canon, int& parent_idx, const s_Context& ctx, const s_Module& module, const s_SolverState& ss)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            const s_Mi mi = parseMi_Tv0KZM6O(offset, canon);
            const s_Target target = s_Target { int(mi.modid), int(mi.index) };
            if ((target.modid < 0) || (target.modid == module.modid))
            {
                const int local_of = localOf_JIWfMq4F(target, ctx, module, ss);
                if (parent_idx < local_of)
                    parent_idx = local_of;

            };
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

                                #ifndef DEF_add_P2VwYqz53p5
                                #define DEF_add_P2VwYqz53p5
inline bool add_P2VwYqz5(fu_VEC<fu_STR>& keys, const fu_STR& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_sTZRmMq1(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, fu_STR(item));
    return true;
}
                                #endif

                                #ifndef DEF_get_F0MIY1owhw7
                                #define DEF_get_F0MIY1owhw7
inline const s_Target& get_F0MIY1ow(fu::view<fu_STR> keys, fu::view<char> item, fu::view<s_Target> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_sTZRmMq1(keys[i], item);
        if (cmp == 0)
            return extras[i];
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return (*(const s_Target*)fu::NIL);
}
                                #endif

                                #ifndef DEF_get_jKIIMy2fmrh
                                #define DEF_get_jKIIMy2fmrh
inline const s_Target& get_jKIIMy2f(const s_Map_JVvYaNLAkqf& _, fu::view<char> key)
{
    return get_F0MIY1ow(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_rem_lXJbAxiWZ70
                                #define DEF_rem_lXJbAxiWZ70
inline bool rem_lXJbAxiW(fu_VEC<fu_STR>& keys, fu::view<char> item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_sTZRmMq1(keys[i], item);
        if (cmp == 0)
        {
            keys.splice(i, 1);
            return true;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return false;
}
                                #endif

                                #ifndef DEF_x3Cx3E_P1WxAqP9bwb
                                #define DEF_x3Cx3E_P1WxAqP9bwb
inline int x3Cx3E_P1WxAqP9(const s_Target& a, const s_Target& b)
{

    {

        {
            const int cmp = x3Cx3E_F7KakSWb(a.modid, b.modid);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_F7KakSWb(a.index, b.index);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_P1WxAqP9bwb
                                #define DEF_x3Dx3D_P1WxAqP9bwb
inline bool operator==(const s_Target& a, const s_Target& b)
{
    return !x3Cx3E_P1WxAqP9(a, b);
}
                                #endif

static bool is_SPECFAIL_eDkkXeHK(const s_Target& target)
{
    return target.modid == 2147483647;
}

inline static int bfind_4XB830XW(fu::view<char> item, const fu_STR& item_1, s_Map_JVvYaNLAkqf& _)
{
    int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_sTZRmMq1(_.keys[i], item);
        if (cmp == 0)
            return i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    _.keys.insert(lo, fu_STR(item_1));
    _.vals.insert(lo, s_Target{});
    return lo;
}

                                #ifndef DEF_ref_7vTIRxTOcge
                                #define DEF_ref_7vTIRxTOcge
inline s_Target& ref_7vTIRxTO(const fu_STR& item, s_Map_JVvYaNLAkqf& _)
{
    const int idx = bfind_4XB830XW(item, item, _);
    return _.vals.mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_P8Toe5fbeY3
                                #define DEF_ref_P8Toe5fbeY3
inline s_Target& ref_P8Toe5fb(s_Map_JVvYaNLAkqf& _, const fu_STR& key)
{
    return ref_7vTIRxTO(key, _);
}
                                #endif

inline static fu_STR id_20Oc0kdm(const s_Target& target, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (is_SPECFAIL_eDkkXeHK(target))
        return "SPEC_FAIL"_fu;
    else
        return ("`"_fu + GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).name) + "`"_fu;

}

static void setSpec_60Er3RXb(const fu_STR& mangle, const s_Target& target, const bool nx, const bool allowReplaceNonSpecfails, const bool isInline, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (isInline && !is_SPECFAIL_eDkkXeHK(target))
        BUG_k3P6Th3U(x7E_sTZRmMq1((("inline.setSpec: "_fu + mangle) + " = "_fu), fu::booldec(is_SPECFAIL_eDkkXeHK(target))), ctx, module, _here, ss, _helpers, _helpers_data);
    else
    {
        s_Target& t = ref_P8Toe5fb(ss._specs, mangle);
        if ((!isInline || !t) && (!t == nx) && (!t || is_SPECFAIL_eDkkXeHK(t) || allowReplaceNonSpecfails))
            t = target;
        else
            BUG_k3P6Th3U(((((((x7E_sTZRmMq1((x7E_sTZRmMq1("About to screw up royally, replacing spec: "_fu, fu::i64dec(t.index)) + " with "_fu), fu::i64dec(target.index)) + ", mangle: "_fu) + mangle) + ", that's: "_fu) + id_20Oc0kdm(t, ctx, module, _here, ss, _helpers, _helpers_data)) + " becoming "_fu) + id_20Oc0kdm(target, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);

    };
}

static void resetSpec_5OB5uK9p(const s_Target& spec, const bool allowReplaceNonSpecfails, const bool isInline, fu::view<fu_STR> mangles, s_Target& currentSpec, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (!(spec == currentSpec))
    {
        currentSpec = spec;
        for (int i = 0; i < mangles.size(); i++)
            setSpec_60Er3RXb(mangles[i], spec, false, allowReplaceNonSpecfails, isInline, ctx, module, _here, ss, _helpers, _helpers_data);

    };
}

                                #ifndef DEF_if_last_QIjP3glh2V2
                                #define DEF_if_last_QIjP3glh2V2
inline const s_ScopeSkip& if_last_QIjP3glh(fu::view<s_ScopeSkip> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_ScopeSkip*)fu::NIL);
}
                                #endif

                                #ifndef DEF_last_QEfsNURKx3g
                                #define DEF_last_QEfsNURKx3g
inline s_ScopeSkip& last_QEfsNURK(fu::view_mut<s_ScopeSkip> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

static void ScopeSkip_push_c7Yw1t5U(fu_VEC<s_ScopeSkip>& scope_skip, const int start, const int end, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if ((start <= end))
    {
        if (end == start)
            return;
        else
        {
            const s_ScopeSkip& last = if_last_QIjP3glh(scope_skip);
            if ((last.end <= start))
            {
                if (scope_skip && (last.end == start))
                    last_QEfsNURK(scope_skip).end = int(end);
                else
                {
                    scope_skip += s_ScopeSkip { int(start), int(end) };
                };
            }
            else
                BUG_k3P6Th3U("ScopeSkip_push: last.end > start."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

        };
    }
    else
        BUG_k3P6Th3U("ScopeSkip_push: bad args."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

}

static bool Scope_import_5Hdx0N1E(const int modid, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{

    {
        fu::view<int> items = ss._scope.imports;
        fu::view<s_ScopeSkip> scope_skip = ss._ss.imports;
        const int start = 0;
        const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
        int i0 = start;
        for (int i = 0; i < (scope_skip.size() + 1); i++)
        {
            const s_ScopeSkip& ss_1 = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
            if ((ss_1.end <= i0))
                continue;
            else
            {
                const int i1 = ss_1.start;
                for (int i_1 = i0; i_1 < i1; i_1++)
                {
                    const int m = items[i_1];
                    if (m == modid)
                        return false;

                };
                i0 = ss_1.end;
            };
        };
    };
    if (modid)
    {
        ss._scope.imports += int(modid);
        _Scope_import__forceCopy_2xGqZyw5(modid, ctx, ss);
        return true;
    }
    else
        BUG_k3P6Th3U("Attempting to import modid-0."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

}

static void _Scope_import__forceCopy_privates_GhO1dCDF(const int modid, const s_Context& ctx, s_SolverState& ss)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    ss._scope.items += fu::get_view(s.items, s.pub_items, s.items.size());
    ss._scope.converts += fu::get_view(s.converts, s.pub_cnvrts, s.converts.size());
}

static void Scope_import_privates_L2xNrbt4(const int modid, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{

    {
        fu::view<int> items = ss._scope.privates;
        fu::view<s_ScopeSkip> scope_skip = ss._ss.privates;
        const int start = 0;
        const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
        int i0 = start;
        for (int i = 0; i < (scope_skip.size() + 1); i++)
        {
            const s_ScopeSkip& ss_1 = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
            if ((ss_1.end <= i0))
                continue;
            else
            {
                const int i1 = ss_1.start;
                for (int i_1 = i0; i_1 < i1; i_1++)
                {
                    const int m = items[i_1];
                    if (m == modid)
                        return;

                };
                i0 = ss_1.end;
            };
        };
    };
    if (modid)
    {
        ss._scope.privates += int(modid);
        _Scope_import__forceCopy_privates_GhO1dCDF(modid, ctx, ss);
    }
    else
        BUG_k3P6Th3U("Attempting to import_privates modid-0."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

}

static void ScopeSkip_setup_Lg4MANUU(const s_Template& tEmplate, const s_ScopeMemo& scope0, const bool isInline, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (ss._root_scope)
    {
        const s_ScopeMemo start { (tEmplate.scope_memo ? tEmplate.scope_memo : ss._root_scope) };
        ss._ss = tEmplate.scope_skip;
        ScopeSkip_push_c7Yw1t5U(ss._ss.items, start.items_len, scope0.items_len, ctx, module, _here, ss, _helpers, _helpers_data);
        ScopeSkip_push_c7Yw1t5U(ss._ss.implicits, ((isInline && (start.implicits_len > _current_fn.scope0.implicits_len)) ? _current_fn.scope0.implicits_len : start.implicits_len), (isInline ? _current_fn.scope0.implicits_len : scope0.implicits_len), ctx, module, _here, ss, _helpers, _helpers_data);
        ScopeSkip_push_c7Yw1t5U(ss._ss.imports, start.imports_len, scope0.imports_len, ctx, module, _here, ss, _helpers, _helpers_data);
        ScopeSkip_push_c7Yw1t5U(ss._ss.privates, start.privates_len, scope0.privates_len, ctx, module, _here, ss, _helpers, _helpers_data);
        ScopeSkip_push_c7Yw1t5U(ss._ss.usings, start.usings_len, scope0.usings_len, ctx, module, _here, ss, _helpers, _helpers_data);
        ScopeSkip_push_c7Yw1t5U(ss._ss.converts, start.converts_len, scope0.converts_len, ctx, module, _here, ss, _helpers, _helpers_data);
        ScopeSkip_push_c7Yw1t5U(ss._ss.helpers, start.helpers_len, scope0.helpers_len, ctx, module, _here, ss, _helpers, _helpers_data);
    };
    for (int i = 0; i < tEmplate.imports.size(); i++)
    {
        Scope_import_5Hdx0N1E(tEmplate.imports[i], ctx, module, _here, ss, _helpers, _helpers_data);
        if (i == 0)
            Scope_import_privates_L2xNrbt4(tEmplate.imports[i], ctx, module, _here, ss, _helpers, _helpers_data);

    };
}

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
extern const int FN_ARGS_BACK;
                                #endif

                                #ifndef DEF_has_Q09HnW0uoie
                                #define DEF_has_Q09HnW0uoie
inline bool has_Q09HnW0u(fu::view<int> a, const int b)
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

                                #ifndef DEF_all_rlSQgsHvAJ6
                                #define DEF_all_rlSQgsHvAJ6
inline bool all_rlSQgsHv(fu::view<s_SolvedNode> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_SolvedNode& item = a[i];
        if (!couldRetype_ODsvI1qY(item))
            return false;

    };
    return true;
}
                                #endif

static bool couldRetype_ODsvI1qY(const s_SolvedNode& node)
{
    return (node.kind == s_kind_int) || (node.kind == s_kind_real) || (node.kind == s_kind_definit) || (node.kind == s_kind_str) || ((node.kind == s_kind_if) && all_rlSQgsHv(fu::get_view(node.items, 1, 3))) || ((node.kind == s_kind_and) && couldRetype_ODsvI1qY(last_7ZMqiNoZ(node.items)));
}

inline static int bfind_hvuavEB7(fu::view<char> item, const fu_STR& item_1, s_Map_UKvTd2mknh0& _)
{
    int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_sTZRmMq1(_.keys[i], item);
        if (cmp == 0)
            return i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    _.keys.insert(lo, fu_STR(item_1));
    _.vals.insert(lo, s_TypeParam{});
    return lo;
}

                                #ifndef DEF_ref_f7b9U0O9Euc
                                #define DEF_ref_f7b9U0O9Euc
inline s_TypeParam& ref_f7b9U0O9(const fu_STR& item, s_Map_UKvTd2mknh0& _)
{
    const int idx = bfind_hvuavEB7(item, item, _);
    return _.vals.mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_BwmIsKImbUd
                                #define DEF_ref_BwmIsKImbUd
inline s_TypeParam& ref_BwmIsKIm(s_Map_UKvTd2mknh0& _, const fu_STR& key)
{
    return ref_f7b9U0O9(key, _);
}
                                #endif

                                #ifndef DEF_x21x3D_sTZRmMq1BYf
                                #define DEF_x21x3D_sTZRmMq1BYf
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

static const bool DONT_match_zeroes = true;

static bool trySolveTypeParams_mayetygn(const s_Node& node, /*MOV*/ s_Type&& type, s_Map_UKvTd2mknh0& typeParams, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
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
            /*MOV*/ s_Type t = ((node.value == "&"_fu) ? tryClear_ref_8RliRHyJ(type, _here, ctx) : ((node.value == "&mut"_fu) ? tryClear_mutref_8RliRHyJ(type, _here, ctx) : ((node.value == "[]"_fu) ? tryClear_array_qNIEFFQB(type) : (__extension__ (
            {
                goto BL_1;
            (void)0;}), static_cast<fu::never&&>(BL_5_v)))));
            if (!t)
                return false;
            else
            {
                const s_Node* _0;
                return trySolveTypeParams_mayetygn((*(_0 = &(items[0])) ? *_0 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data)), static_cast<s_Type&&>(t), typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            };
        };
      } BL_1:;
    }
    else if (node.kind == s_kind_typeparam)
    {
        const fu_STR& id = (node.value ? node.value : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
        s_TypeParam& _param = ref_BwmIsKIm(typeParams, id);
        if (_param)
        {
            /*MOV*/ s_Type uNion = type_trySuper_HuTHARyU(_param.matched, type, DONT_match_zeroes);
            if (!uNion)
                return false;
            else
                type = static_cast<s_Type&&>(uNion);

        };
        /*MOV*/ s_Type type_1 = relax_typeParam_qNIEFFQB(static_cast<s_Type&&>(type));
        _param.matched = relax_typeParam_qNIEFFQB(static_cast<s_Type&&>(type_1));
        return true;
    }
    else if ((node.kind == s_kind_arrlit) && (node.items.size() == 1))
    {
        /*MOV*/ s_Type t = tryClear_sliceable_qNIEFFQB(type);
        const s_Node* _1;
        return t && trySolveTypeParams_mayetygn((*(_1 = &(node.items[0])) ? *_1 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data)), static_cast<s_Type&&>(t), typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    }
    else if (node.kind == s_kind_typeunion)
    {
        s_Map_UKvTd2mknh0 undo { typeParams };
        for (int i = 0; i < node.items.size(); i++)
        {
            if (trySolveTypeParams_mayetygn(node.items[i], s_Type(type), typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort))
                return true;
            else
                typeParams = undo;

        };
        return false;
    };
    return isAssignable_zQyU0CZE(evalTypeAnnot_oDto04gx(node, (*(const s_Map_UKvTd2mknh0*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort), type, DONT_match_zeroes, false);
}

                                #ifndef DEF_find_ODCLAe2r9ig
                                #define DEF_find_ODCLAe2r9ig
inline int find_ODCLAe2r(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

inline static fu_STR mangleArgTypes_NiAl7b48(fu::view<s_Type> args)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ',';

        mangle += serializeType_PYGow2xq(args[i], "mangle[$T]"_fu);
    };
    return /*NRVO*/ mangle;
}

static s_Target SPECFAIL_iqIEl2wG(const fu_STR& reason, const s_Target& SPECFAIL_RentrySafety, const bool isInline, fu::view<fu_STR> mangles, s_Target& currentSpec, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const int index = ss._spec_errors.size();
    ss._spec_errors += fu_STR(reason);
    const s_Target spec = s_Target { int(SPECFAIL_RentrySafety.modid), int(index) };
    resetSpec_5OB5uK9p(spec, false, isInline, mangles, currentSpec, ctx, module, _here, ss, _helpers, _helpers_data);
    return spec;
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_get_EkAy4KrDaLj
                                #define DEF_get_EkAy4KrDaLj
inline const s_TypeParam& get_EkAy4KrD(fu::view<fu_STR> keys, fu::view<char> item, fu::view<s_TypeParam> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_sTZRmMq1(keys[i], item);
        if (cmp == 0)
            return extras[i];
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return (*(const s_TypeParam*)fu::NIL);
}
                                #endif

                                #ifndef DEF_get_pFcTvwVdmE8
                                #define DEF_get_pFcTvwVdmE8
inline const s_TypeParam& get_pFcTvwVd(const s_Map_UKvTd2mknh0& _, fu::view<char> key)
{
    return get_EkAy4KrD(_.keys, key, _.vals);
}
                                #endif

static const s_Type& evalTypeParam_ghZHazpS(const fu_STR& id, const s_Map_UKvTd2mknh0& typeParams, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const s_Type* _0;
    return *(_0 = &(get_pFcTvwVd(typeParams, id).matched)) ? *_0 : *(_0 = &(Scope_lookupType_GxJwJ0bk(fu_STR((id ? id : fail_7KwuQpwr("Falsy type param id."_fu, ctx, module, _here, ss, _helpers, _helpers_data))), s_Flags{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort))) ? *_0 : fail_7KwuQpwr((("No type param "_fu + qID_9QQZAztz(id)) + " in scope."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
}

static bool type_has_rnczWHhx(const s_Type& type, fu::view<char> tag, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (tag == "trivial"_fu)
        return is_trivial_ChYpFATl(type, ctx, module);
    else if (tag == "copy"_fu)
        return is_rx_copy_6qTx5aCK(type);
    else if (tag == "arithmetic"_fu)
        return is_arithmetic_XeFsC3zb(type);
    else if (tag == "primitive"_fu)
        return is_primitive_XeFsC3zb(type);
    else if (tag == "bitfield"_fu)
        return is_bitfield_XeFsC3zb(type);
    else if (tag == "integral"_fu)
        return is_integral_XeFsC3zb(type);
    else if (tag == "unsigned"_fu)
        return is_unsigned_XeFsC3zb(type);
    else if (tag == "floating_point"_fu)
        return is_floating_pt_XeFsC3zb(type);
    else if (tag == "mutref"_fu)
        return is_mutref_8RliRHyJ(type, _here, ctx);
    else if (tag == "enum"_fu)
        return is_enum_XeFsC3zb(type);
    else if (tag == "flags"_fu)
        return is_flags_XeFsC3zb(type);
    else
        BUG_k3P6Th3U((("Unknown type tag: `"_fu + tag) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

}

static bool evalTypePattern_x7DQggP3(const s_Node& node, s_Map_UKvTd2mknh0& typeParams, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (node.kind == s_kind_and)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (!evalTypePattern_x7DQggP3(node.items[i], typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort))
                return false;

        };
        return true;
    }
    else if (node.kind == s_kind_or)
    {
        s_Map_UKvTd2mknh0 undo { typeParams };
        for (int i = 0; i < node.items.size(); i++)
        {
            if (evalTypePattern_x7DQggP3(node.items[i], typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort))
                return true;
            else
                typeParams = undo;

        };
        return false;
    }
    else if (node.kind == s_kind_typeassert)
    {
        const s_Node* _0;
        const s_Node& left = (*(_0 = &(node.items[0])) ? *_0 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
        const s_Node* _1;
        const s_Node& right = (*(_1 = &(node.items[1])) ? *_1 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
        if ((left.kind == s_kind_typeparam) && (right.kind == s_kind_typetag))
        {
            const s_Type* _2;
            return (_2 = &(evalTypeParam_ghZHazpS(left.value, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort)), type_has_rnczWHhx(*_2, (right.value ? right.value : fail_7KwuQpwr("Falsy type tag."_fu, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data));
        }
        else
        {
            /*MOV*/ s_Type actual = evalTypeAnnot_oDto04gx(left, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            const bool ok = trySolveTypeParams_mayetygn(right, static_cast<s_Type&&>(actual), typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            if (ok && (left.kind == s_kind_typeparam))
            {
                /*MOV*/ s_Type expect = evalTypeAnnot_oDto04gx(right, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                const fu_STR& id = left.value;
                s_TypeParam& tp = ref_BwmIsKIm(typeParams, id);
                s_Type _3 {};
                tp.consumed = (tp.consumed ? ((_3 = type_tryIntersect_F2WHZZjx(tp.consumed, expect)) ? static_cast<s_Type&&>(_3) : fail_7KwuQpwr("typeassert intersect fail."_fu, ctx, module, _here, ss, _helpers, _helpers_data)) : static_cast<s_Type&&>(expect));
            };
            return ok;
        };
    }
    else if (node.kind == s_kind_call)
    {
        fu::view<char> fn = node.value;
        if (node.items.size() == 1)
        {
            if (fn == "!"_fu)
                return !evalTypePattern_x7DQggP3(node.items[0], typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

        };
    };
    fail_7KwuQpwr((x7E_sTZRmMq1((x7E_sTZRmMq1("TODO evalTypePattern fallthrough: "_fu, str_v3b7EcLt(node.kind)) + "("_fu), fu::i64dec(node.items.size())) + ")"_fu), ctx, module, _here, ss, _helpers, _helpers_data);
}

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

static bool isNativeBody_5P8nakwp(const s_Node& n_body)
{
    return (n_body.kind == s_kind_call) && (n_body.value == "__native"_fu);
}

                                #ifndef DEF_if_ref_ubFIZQM4gAf
                                #define DEF_if_ref_ubFIZQM4gAf
inline bool if_ref_ubFIZQM4(fu::view<char> item, s_Map_UKvTd2mknh0& _)
{
    int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_sTZRmMq1(_.keys[i], item);
        if (cmp == 0)
        {

            {
                s_TypeParam& tp = _.vals.mutref(i);
                tp.matched = tp.consumed;
            };
            return true;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return false;
}
                                #endif

                                #ifndef DEF_if_ref_s9a3Myb9GWg
                                #define DEF_if_ref_s9a3Myb9GWg
inline bool if_ref_s9a3Myb9(s_Map_UKvTd2mknh0& _, fu::view<char> key)
{
    return if_ref_ubFIZQM4(key, _);
}
                                #endif

static const s_Target& checkStruct_ynDi80gI(const s_Type& type, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    const s_Target& t = lookupUserType_OSTRqvzG(type, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort).target;
    return (GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).type == type) ? t : (*(const s_Target*)fu::NIL);
}

                                #ifndef DEF_pairs_tgIR3Vh1rFh
                                #define DEF_pairs_tgIR3Vh1rFh
inline void pairs_tgIR3Vh1(const s_Map_UKvTd2mknh0& _, fu_VEC<s_ScopeItem>& res, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        const fu_STR& id = _.keys[i];
        const s_TypeParam& tp = _.vals[i];
        const s_Type& type = tp.matched;
        s_Target _0 {};
        const s_Target target = ((_0 = s_Target((isStruct_FNWlOhLB(type) ? checkStruct_ynDi80gI(type, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort) : (*(const s_Target*)fu::NIL)))) ? _0 : Scope_create_EMDiTJHw(ss._scope, s_kind_type, id, type, s_Flags{}, s_SolverStatus{}, 0, module));
        Scope_set_Wttt6h0n(res, id, target, false);
    };
}
                                #endif

static fu_VEC<s_ScopeItem> intoScopeItems_u4gTrmsV(const s_Map_UKvTd2mknh0& typeParams, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ fu_VEC<s_ScopeItem> res {};
    pairs_tgIR3Vh1(typeParams, res, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
    return /*NRVO*/ res;
}

static s_SolvedNode solved_wmaa4w3Z(const s_Node& node, const s_Type& type, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_ROjBZjUC(node.kind, type, node.flags, node.value, items, target, s_Helpers{}, _here);
}

static fu_VEC<s_SolvedNode>& outItems_QydiSOHB(s_CurrentFn& _current_fn)
{
    return _current_fn.out.items;
}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

static s_Type tryGetArgSpecType_K1YxUrEc(fu::view<char> id, fu::view<s_ScopeItem> extra_items, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu_STR param = ("$"_fu + id);
    for (int i = 0; i < extra_items.size(); i++)
    {
        const s_ScopeItem& m = extra_items[i];
        if (m.id == param)
        {
            const s_Overload& o = GET_ryFyPS6P(target_QZZ1cmZA(m), ctx, module, _here, ss, _helpers, _helpers_data);
            if (o.kind == s_kind_type)
                return s_Type(o.type);
            else
                fail_7KwuQpwr((x7E_sTZRmMq1((((x7E_sTZRmMq1("tryGetArgSpecType: Not a typeparam: `"_fu, str_v3b7EcLt(o.kind)) + ":"_fu) + param) + "("_fu), fu::i64dec(EXT_N3jS4trN(target_QZZ1cmZA(m), ctx, module, ss).max)) + ")`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

        };
    };
    return s_Type{};
}

static void checkAssignable_iqrEhneZ(const s_Type& host, const s_Type& guest, fu::view<char> err, const fu_STR& id, const fu_STR& sep, const bool asArgument, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (!(isAssignable_zQyU0CZE((host ? host : BUG_k3P6Th3U("Bad host type."_fu, ctx, module, _here, ss, _helpers, _helpers_data)), (guest ? guest : BUG_k3P6Th3U("Bad guest type."_fu, ctx, module, _here, ss, _helpers, _helpers_data)), false, asArgument)))
    {
        fail_7KwuQpwr((((((err + (id ? (" "_fu + qID_9QQZAztz(id)) : fu_STR{})) + ": "_fu) + humanizeType_3wOVPKQg(host, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + (sep ? fu_STR(sep) : " <- "_fu)) + humanizeType_3wOVPKQg(guest, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);
    };
}

static s_SolvedNode solveLetLike_dontTouchScope_wYmnkuMl(const fu_STR& id, s_Flags flags, const s_SolvedNode& init, const s_Type& annot, const s_Context& ctx, const s_Module& module, const s_Options& options, const s_TokenIdx& _here, const s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (annot || init.type)
    {
        if (annot && init.type)
            checkAssignable_iqrEhneZ(annot, init.type, "Type annotation does not match init expression"_fu, id, " <- "_fu, !!(flags & s_Flags_F_ARG), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);

        const s_Type& t_init = init.type;
        /*MOV*/ s_Type t_init_1 = (is_ref2temp_8RliRHyJ(t_init, _here, ctx) ? clear_refs_qNIEFFQB(s_Type(t_init)) : s_Type(t_init));
        if (!(flags & s_Flags_F_ARG) && is_never_eqpYb5IC(t_init_1))
        {
            makeNote_jjqaKIrz(s_SolverNotes_N_DeadLet, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
            return s_SolvedNode(init);
        }
        else
        {
            if (is_mutref_8RliRHyJ(annot, _here, ctx))
                flags |= s_Flags_F_REF;

            if (flags & s_Flags_F_REF)
            {
                if (!(is_mutref_8RliRHyJ(t_init_1, _here, ctx) || (is_never_eqpYb5IC(t_init_1) && annot) || (!init && (flags & s_Flags_F_ARG))))
                    fail_7KwuQpwr(((("`ref` variables must be initialized to a mutable reference: `"_fu + id) + "`"_fu) + (t_init_1 ? (" = "_fu + humanizeType_3wOVPKQg(t_init_1, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) : "."_fu)), ctx, module, _here, ss, _helpers, _helpers_data);

            };
            s_Type t_let = ((annot && ((flags & s_Flags_F_ARG) || !t_init_1)) ? s_Type(annot) : ((is_mutref_8RliRHyJ(t_init_1, _here, ctx) && !(flags & s_Flags_F_REF)) ? clear_mutref_qNIEFFQB(static_cast<s_Type&&>(t_init_1)) : static_cast<s_Type&&>(t_init_1)));
            if ((flags & s_Flags_F_ARG) && !(flags & s_Flags_F_MUT))
            {
                t_let = add_ref_arUcTyoS(s_Type(t_let), Lifetime_temporary_8nlJDPX0(), _here, ctx);
            };
            return SolvedNode_ROjBZjUC(s_kind_let, t_let, flags, id, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, s_Helpers{}, _here);
        };
    }
    else
        fail_7KwuQpwr((("Variable declarations without type annotations must be initialized: `"_fu + id) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

}

static s_SolvedNode solveLetLike_dontTouchScope_pjqifGJN(const s_Node& node, const s_Type& specType, const s_Type& primType, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const s_Node& n_annot = node.items[LET_TYPE];
    s_Type annot = (n_annot && (n_annot.kind != s_kind_typeunion) ? evalTypeAnnot_oDto04gx(n_annot, (*(const s_Map_UKvTd2mknh0*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort) : s_Type{});
    s_Flags flags = node.flags;
    if (is_mutref_8RliRHyJ(specType, _here, ctx) && !((flags & s_Flags_F_REF) || is_mutref_8RliRHyJ(annot, _here, ctx)))
        flags |= s_Flags_F_RELAXABLE_REF;

    const s_Type& annot_1 = (specType ? specType : primType ? primType : annot);
    s_Type annot_2 = ((annot_1 && (node.flags & s_Flags_F_REF)) ? add_mutref_arUcTyoS(s_Type(annot_1), Lifetime_temporary_8nlJDPX0(), _here, ctx) : s_Type(annot_1));
    const s_Node& n_init = node.items[LET_INIT];
    /*MOV*/ s_SolvedNode init = (n_init ? solveNode_3DHmcQXo(n_init, annot_2, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort) : s_SolvedNode{});
    s_SolvedNode init_1 = ((specType && init.type && !isAssignableAsArgument_d2HKSF3T(specType, init.type, false)) ? s_SolvedNode{} : static_cast<s_SolvedNode&&>(init));
    return solveLetLike_dontTouchScope_wYmnkuMl(node.value, s_Flags(flags), init_1, annot_2, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data, _current_fnort);
}

                                #ifndef DEF_find_mimv437E658
                                #define DEF_find_mimv437E658
inline int find_mimv437E(fu::view<char> a, const char b, int start)
{
    start = ((start > 0) ? int(start) : 0);
    for (int i = start; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_unpackAddrOfFn_cYxM85CMQV2
                                #define DEF_unpackAddrOfFn_cYxM85CMQV2
inline void unpackAddrOfFn_cYxM85CM(fu::view<char> canon, const fu_STR& id, const bool shadows, s_SolverState& ss)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            const s_Mi mi = parseMi_Tv0KZM6O(offset, canon);
            const s_Target target = s_Target { int(mi.modid), int(mi.index) };
            Scope_set_Wttt6h0n(ss._scope.items, id, target, shadows);
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

static const bool OPTI_dedupe_vars = true;

static const s_Lifetime& Lifetime_test_QQCOCwhD(const s_Lifetime& lifetime, const bool tempsOK, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (SELF_TEST)
    {
        if (!lifetime.uni0n.size())
        {
            BUG_k3P6Th3U("Lifetime_test: no region set."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
        }
        else
        {
            s_Region _last {};
            for (int i = 0; i < lifetime.uni0n.size(); i++)
            {
                const s_Region& region = lifetime.uni0n[i];

                {
                    if (!i || (x3Cx3E_A8tRjjUd(region, _last) > 0))
                        _last = region;
                    else
                    {
                        BUG_k3P6Th3U("Lifetime_test: not a sorted set"_fu, ctx, module, _here, ss, _helpers, _helpers_data);
                    };
                };
                if (Region_isArgPosition_PhGvG2us(region))
                    continue;
                else if (Region_isTemp_PhGvG2us(region))
                {
                    if ((i == (lifetime.uni0n.size() - 1)) && tempsOK)
                        continue;
                    else
                    {
                        BUG_k3P6Th3U("Lifetime_test: unexpected temporary."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
                    };
                }
                else
                {
                    const int index = Region_toLocal_PhGvG2us(region);
                    if (index)
                    {
                        const s_Overload& o = GET_ryFyPS6P(nested_MxoYXM2x(index, _current_fnort, module), ctx, module, _here, ss, _helpers, _helpers_data);
                        if (!(o.kind == s_kind_var))
                        {
                            BUG_k3P6Th3U(((x7E_sTZRmMq1("Lifetime_test: local is not a var: "_fu, str_v3b7EcLt(o.kind)) + " "_fu) + o.name), ctx, module, _here, ss, _helpers, _helpers_data);
                        };
                    };
                };
            };
        };
    };
    return lifetime;
}

static s_Lifetime Lifetime_fromBinding_8M5DRYGl(const s_Target& target, const int local_of, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if ((target.modid < 0) || (target.modid < 0) || (target.modid == module.modid))
    {
        if (!local_of)
        {
            return Lifetime_static_8nlJDPX0();
        }
        else
        {
            const int index = target.index;
            const s_Region region = Region_fromLocal_eorXYpEE(index);
            return /* MOVE_FROM_CONST_REF */static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>(Lifetime_test_QQCOCwhD(s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(region) } } }, false, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)));
        };
    }
    else
        BUG_k3P6Th3U("not from this module"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

}

static s_Target Binding_12zkLRoW(const fu_STR& id, /*MOV*/ s_Type&& type, const s_Flags flags, bool& shadows, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    const fu_STR& name = id;
    const int local_of = _current_fn.out.target.index;
    if (ss._root_scope)
        autoshadow_asR7vHOb(shadows, local_of, id, ss, _current_fn);

    const s_Target target = Scope_create_EMDiTJHw(ss._scope, s_kind_var, name, (*(const s_Type*)fu::NIL), flags, s_SolverStatus{}, local_of, module);
    s_Overload& overload = GET_mut_UTaXftgW(target, module, ss);

    {
        s_Lifetime lifetime = Lifetime_fromBinding_8M5DRYGl(target, local_of, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
        type.lifetime = s_Lifetime{};
        overload.type = ((flags & s_Flags_F_MUT) ? add_mutref_arUcTyoS(static_cast<s_Type&&>(type), lifetime, _here, ctx) : add_ref_arUcTyoS(static_cast<s_Type&&>(type), lifetime, _here, ctx));
    };
    return target;
}

static s_SolvedNode& solved_set_YiwDWNfU(const s_Target& target, const s_SolvedNode& node, const s_Module& module, s_SolverState& ss)
{
    return (GET_mut_UTaXftgW(target, module, ss).solved = s_SolvedNode(node));
}

static s_SolvedNode createLetDef_NuncmRUF(const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_ROjBZjUC(s_kind_letdef, t_void, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_SolvedNode solveLet_Ra1Gy3D0(s_SolvedNode& out, const fu_STR& id, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (out.kind != s_kind_let)
    {
        if (is_never_eqpYb5IC(out.type))
            return s_SolvedNode(out);
        else
            BUG_k3P6Th3U((((x7E_sTZRmMq1("solveLet: results in a `"_fu, str_v3b7EcLt(out.kind)) + ": "_fu) + id) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

    }
    else
    {
        bool shadows = !!(out.flags & s_Flags_F_SHADOW);
        const s_Flags isArg = (out.flags & s_Flags_F_ARG);
        fu_STR cleanID {};
        if (out.flags & s_Flags_F_COMPOUND_ID)
        {
            const int start = (find_ODCLAe2r(id, '!') + 1);
            const int end = find_mimv437E(id, '.', ((start > 0) ? int(start) : 0));
            cleanID = fu::slice(id, ((start > 0) ? int(start) : 0), ((end > 0) ? int(end) : id.size()));
            if (!(cleanID && (cleanID.size() < id.size())))
                BUG_k3P6Th3U("solveLet: F_COMPOUND_ID bad cleanID."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

        };
        const fu_STR& id_1 = (cleanID ? cleanID : id);
        if (isAddrOfFn_mipI0b6h(out.type))
        {
            const bool shadows_1 = true;
            unpackAddrOfFn_cYxM85CM(out.type.vtype.canon, id_1, shadows_1, ss);
        }
        else
        {
            if (OPTI_dedupe_vars && !isArg && !(out.flags & ((s_Flags_F_PUB | s_Flags_F_IMPLICIT) | s_Flags_F_MUT)))
            {
                const s_SolvedNode& init = out.items[LET_INIT];
                if ((init.kind == s_kind_call) && !init.items)
                {
                    const s_Target& target = init.target;
                    const s_Overload& other = GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data);
                    if (other.kind == s_kind_var)
                    {
                        if (isAssignable_zQyU0CZE(other.type, out.type, false, false))
                        {
                            Scope_set_D73yKAeS(ss._scope, id_1, target, shadows);
                            if (out.flags & s_Flags_F_USING)
                                ss._scope.usings.push(s_Target(target));

                            out = createEmpty_R642r6KV(s_kind_empty, t_void, s_Target{}, _here);
                            return s_SolvedNode(out);
                        };
                    };
                };
            };
            const s_Target& target = (out.target = Binding_12zkLRoW(id_1, s_Type(out.type), out.flags, shadows, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort));
            solved_set_YiwDWNfU(target, out, module, ss);
            Scope_set_D73yKAeS(ss._scope, id_1, target, shadows);
            if (out.flags & s_Flags_F_IMPLICIT)
                Scope_set_Wttt6h0n(ss._scope.implicits, id_1, target, shadows);

            if (out.flags & s_Flags_F_USING)
                ss._scope.usings.push(s_Target(target));

            return createLetDef_NuncmRUF(target, _here);
        };
        if (out.flags & s_Flags_F_ARG)
            return s_SolvedNode(out);
        else
        {
            return createEmpty_R642r6KV(s_kind_empty, t_void, s_Target{}, _here);
        };
    };
}

static s_SolvedNode solveLet_hoJP0epM(const s_Node& node, const s_Type& specType, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    s_SolvedNode out = solveLetLike_dontTouchScope_pjqifGJN(node, specType, (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    const fu_STR& id = out.value;
    return solveLet_Ra1Gy3D0(out, id, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
}

                                #ifndef DEF_only_uRy3lRyu3F2
                                #define DEF_only_uRy3lRyu3F2
inline const s_Region& only_uRy3lRyu(fu::view<s_Region> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_sTZRmMq1("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Lifetime Lifetime_fromNative_fBaE1IZe(fu::view<s_Node> sig, fu::view<s_SolvedNode> args, const s_Type& actual, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if ((sig.size() + FN_ARGS_BACK) == args.size())
    {
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
                    {
                        fail_7KwuQpwr("Ambiguous __native lifetime."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
                    }
                    else
                    {
                        res = GET_ryFyPS6P(args[i].target, ctx, module, _here, ss, _helpers, _helpers_data).type;
                        if (!(res.lifetime))
                        {
                            fail_7KwuQpwr("Missing arg lifetime."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
                        };
                    };
                };
            };
            if (!mutref || res.lifetime)
                break;
            else
                mutref = false;

        };
        if (Region_asLocal_l3hJ0imS(only_uRy3lRyu(res.lifetime.uni0n)))
        {
            if (!isAssignable_zQyU0CZE(actual, res, false, false))
            {
                return Lifetime_makeShared_0ep4DGAR(res.lifetime);
            }
            else
            {
                return static_cast<s_Lifetime&&>(res.lifetime);
            };
        }
        else
        {
            fail_7KwuQpwr("Non-single-local __native lifetime."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
        };
    }
    else
        BUG_k3P6Th3U("sig.len != args.len"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

}

static fu_STR CompoundArgID_outerSplice_c0PH6QuQ(fu_STR& name, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    bool exclam = false;
    for (int i = 0; i < name.size(); i++)
    {
        const char c = name[i];
        if (c == '!')
        {
            if (exclam)
                BUG_k3P6Th3U((("CompoundArgID: double bang in `"_fu + name) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
            else
            {
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
        }
        else if (c == '.')
        {
            /*MOV*/ fu_STR ret = fu::slice(name, (i + 1));
            name.shrink(i);
            return /*NRVO*/ ret;
        };
    };
    if (!exclam)
        BUG_k3P6Th3U((("CompoundArgID: no `.` nor `!` in id `"_fu + name) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
    else
    {
        return fu_STR{};
    };
}

                                #ifndef DEF_each_0auK1NIk9Y2
                                #define DEF_each_0auK1NIk9Y2
inline void each_0auK1NIk(const s_BitSet& _, fu::view<s_SolvedNode> items, s_BitSet& hard_risk, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
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
                    const s_SolvedNode& other = GET_ryFyPS6P(items[index].target, ctx, module, _here, ss, _helpers, _helpers_data).solved;
                    if (!TODO_FIX_isArray_qNIEFFQB(other.type))
                        add_uczByTOp(hard_risk, index);

                };
            };
        };
    };
}
                                #endif

                                #ifndef DEF_has_OOenoUsAHwb
                                #define DEF_has_OOenoUsAHwb
inline bool has_OOenoUsA(fu::view<s_Target> a, const s_Target& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_5oZM5FsM(fu_VEC<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static const s_Overload& GET_crossmodule_kJfGN2ff(const s_Target& target, const s_Target& _current_fnort, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (isLocal_fCRJFL21(target) && (_current_fnort.modid != module.modid))
    {
        const s_Module& module_1 = ctx.modules[_current_fnort.modid];
        fu::view<s_Overload> locals = module_1.out.solve.scope.extended[-target.modid].locals;
        if ((locals.size() >= target.index))
            return locals[(target.index - 1)];
        else
            fail_7KwuQpwr(x7E_sTZRmMq1((x7E_sTZRmMq1((("Out of range local target from: "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(parent_G0CmT2rt(target, ctx, module, ss), ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)) + "\n\tlocals="_fu), fu::i64dec(locals.size())) + "\n\tindex="_fu), fu::i64dec(target.index)), ctx, module, _here, ss, _helpers, _helpers_data);

    }
    else
        return GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data);

}

static const s_Type& Lifetime_climbType_UQ6n8M9W(const s_Overload& o, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (o.kind == s_kind_var)
    {
        const s_SolvedNode& node = o.solved;
        return is_ref_qNIEFFQB(node.type) && !(o.flags & s_Flags_F_ARG) && node.items ? node.items[LET_INIT].type : (*(const s_Type*)fu::NIL);
    }
    else
    {
        BUG_k3P6Th3U(("Lifetime_climbType: not a `var`: "_fu + qWHAT_vXP1PCtb(o, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
    };
}

inline static void Lifetime_each_WY8PdwAm(s_Lifetime& lifetime, const int locals_start, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;
        else if (Region_isTemp_PhGvG2us(r))
            continue;
        else
        {
            const s_Target t = nested_MxoYXM2x(Region_toLocal_PhGvG2us(r), _current_fnort, module);
            const s_Type& init = Lifetime_climbType_UQ6n8M9W(GET_crossmodule_kJfGN2ff(t, _current_fnort, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data);
            if (!is_ref_qNIEFFQB(init))
                continue;
            else if (init.lifetime.uni0n.size())
            {
                lifetime.uni0n.splice(i, 1);
                const int N0 = lifetime.uni0n.size();
                lifetime = Lifetime_union_7b6lMejl(lifetime, init.lifetime);
                const int N1 = lifetime.uni0n.size();
                i += (N1 - N0);
            }
            else
            {
                BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
            };
        };
    };
}

static s_Lifetime Lifetime_unwind_XvP0ZNoq(/*MOV*/ s_Lifetime&& lifetime, const int locals_start, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    Lifetime_each_WY8PdwAm(lifetime, locals_start, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
    return static_cast<s_Lifetime&&>(lifetime);
}

                                #ifndef DEF_x3Dx3D_A8tRjjUdpoc
                                #define DEF_x3Dx3D_A8tRjjUdpoc
inline bool operator==(const s_Region& a, const s_Region& b)
{
    return !x3Cx3E_A8tRjjUd(a, b);
}
                                #endif

                                #ifndef DEF_has_7ZhIVZthMK7
                                #define DEF_has_7ZhIVZthMK7
inline bool has_7ZhIVZth(fu::view<s_Region> a, const s_Region& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR addr_RzhAehLA(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    const s_Token& t = _token_8Dsl78sB(token, ctx);
    if (token.modid != module.modid)
        return x7E_sTZRmMq1((x7E_sTZRmMq1((_fname_8Dsl78sB(token, ctx) + "@"_fu), fu::i64dec(t.line)) + ":"_fu), fu::i64dec(t.col));
    else
        return x7E_sTZRmMq1(x7E_sTZRmMq1(fu::i64dec(t.line), ":"_fu), fu::i64dec(t.col));

}

static fu_STR addr_and_snippet_RndVcMkU(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    return (addr_RzhAehLA(token, ctx, module) + ":\n\n"_fu) + formatCodeSnippet_tqiaCY42(token, s_TokenIdx{}, ctx);
}

static fu_STR qSTACK_4iAH0Cdy(const s_Target& target, const s_Region& region, fu::view<s_Target> seen, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return qSTACK_YECBRXJx(target, GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).solved, region, seen, ctx, module, _here, ss, _helpers, _helpers_data);
}

static fu_STR qSTACK_dA3d9OVg(const s_Target& target, const int position, fu::view<s_Target> seen, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return qSTACK_4iAH0Cdy(target, Region_fromLocal_eorXYpEE(EXT_N3jS4trN(target, ctx, module, ss).args[position].local), seen, ctx, module, _here, ss, _helpers, _helpers_data);
}

static fu_STR qSTACK_YECBRXJx(const s_Target& target, const s_SolvedNode& node, const s_Region& region, fu::view<s_Target> seen, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Target& _current_fnort = target;
    /*MOV*/ fu_STR src = "\n            "_fu;
    const bool rec = has_OOenoUsA(seen, target);
    if (rec)
        src += "recursively "_fu;


    { {
        fu_VEC<s_SolvedNode> stack = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_5oZM5FsM(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_crossmodule_kJfGN2ff(node_1.target, _current_fnort, ctx, module, _here, ss, _helpers, _helpers_data).solved : node_1);

            { {
                if (node_2.kind != s_kind_call)
                    goto BL_5;
                else
                {
                    fu::view<s_Argument> host_args = EXT_N3jS4trN(node_2.target, ctx, module, ss).args;
                    for (int i = 0; i < host_args.size(); i++)
                    {
                        const s_Argument& host_arg = host_args[i];
                        if (!(host_arg.flags & s_Flags_F_WRITTEN_TO))
                            continue;
                        else
                        {
                            const s_SolvedNode& arg = node_2.items[i];
                            if (!has_7ZhIVZth(Lifetime_unwind_XvP0ZNoq(s_Lifetime(arg.type.lifetime), 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort).uni0n, region))
                                continue;
                            else
                            {
                                src += (("via "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(node_2.target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)) + " at "_fu);
                                src += addr_and_snippet_RndVcMkU(node_2.token, ctx, module);
                                if (!rec && (seen.size() < 8))
                                    src += qSTACK_dA3d9OVg(node_2.target, i, (seen + target), ctx, module, _here, ss, _helpers, _helpers_data);

                                goto BL_2;
                            };
                        };
                    };
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

                                #ifndef DEF_find_7ZhIVZthMK7
                                #define DEF_find_7ZhIVZthMK7
inline int find_7ZhIVZth(fu::view<s_Region> a, const s_Region& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_add_6jMUfMQLMHc
                                #define DEF_add_6jMUfMQLMHc
inline bool add_6jMUfMQL(fu_VEC<s_Region>& keys, const s_Region& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_A8tRjjUd(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, s_Region(item));
    return true;
}
                                #endif

static const bool OPTI_ignoreLocalLts = true;

                                #ifndef DEF_if_only_uRy3lRyu3F2
                                #define DEF_if_only_uRy3lRyu3F2
inline const s_Region& if_only_uRy3lRyu(fu::view<s_Region> s)
{
    return (s.size() == 1) ? s[0] : (*(const s_Region*)fu::NIL);
}
                                #endif

static s_Type ignoreLocalLts_0FEz3MIz(/*MOV*/ s_Type&& type, const s_Argument& a)
{
    if (OPTI_ignoreLocalLts && Region_asLocal_l3hJ0imS(if_only_uRy3lRyu(a.type.lifetime.uni0n)))
    {
        type.lifetime = Lifetime_temporary_8nlJDPX0();
    };
    return static_cast<s_Type&&>(type);
}

inline static s_SolvedNode TODO_FIX_pop_LIdCrWDA(fu_VEC<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static fu_STR qSTACK_XLAhGn9A(const s_Target& target, const s_SolvedNode& node, const s_FxMask fx_mask, fu::view<s_Target> seen, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Target& _current_fnort = target;
    /*MOV*/ fu_STR src = "\n            "_fu;
    const bool rec = has_OOenoUsA(seen, target);
    if (rec)
        src += "recursively "_fu;


    { {
        fu_VEC<s_SolvedNode> stack = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_LIdCrWDA(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_crossmodule_kJfGN2ff(node_1.target, _current_fnort, ctx, module, _here, ss, _helpers, _helpers_data).solved : node_1);

            { {
                if ((node_2.kind != s_kind_call) || isLocal_fCRJFL21(node_2.target))
                    goto BL_5;
                else if (!s_FxMask((EXT_N3jS4trN(node_2.target, ctx, module, ss).fx_mask & fx_mask)))
                    goto BL_5;
                else
                {
                    src += (("via "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(node_2.target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)) + " at "_fu);
                    src += addr_and_snippet_RndVcMkU(node_2.token, ctx, module);
                    if (!rec && (seen.size() < 8))
                        src += qSTACK_XLAhGn9A(node_2.target, GET_ryFyPS6P(node_2.target, ctx, module, _here, ss, _helpers, _helpers_data).solved, fx_mask, (seen + target), ctx, module, _here, ss, _helpers, _helpers_data);

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

                                #ifndef DEF_grow_if_oob_wm6oIO3DgXf
                                #define DEF_grow_if_oob_wm6oIO3DgXf
inline s_Warning& grow_if_oob_wm6oIO3D(fu_VEC<s_Warning>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_each_yTuKobZLhEc
                                #define DEF_each_yTuKobZLhEc
inline void each_yTuKobZL(fu::view<s_Region> a, const s_Target& _current_fnort, const s_Type& retval, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Region& r = a[i];
        if (!(Region_isArgPosition_PhGvG2us(r) || Region_isStatic_PhGvG2us(r)))
        {
            BUG_k3P6Th3U(((("updateScope: Non-static/non-arg leaked:\n\t"_fu + qWHAT_vXP1PCtb(Region_GET_DezSnHcm(r, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort), ctx, module, _here, ss, _helpers, _helpers_data)) + "\n\n\tIn retval lifetime:\n\t"_fu) + qWHAT_KqX3VCyd(retval.lifetime, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);
        };
    };
}
                                #endif

static s_Flags& isRTL_set_lAvCNnZQ(s_Overload& o, const bool rtl)
{
    if (rtl)
        return (o.flags |= s_Flags_F_OOE_RTL);
    else
        return (o.flags &= ~s_Flags_F_OOE_RTL);

}

static fu_STR mangleSignature_BUyvFRff(fu::view<s_Argument> args)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ", "_fu;

        mangle += args[i].name;
        mangle += ':';
        mangle += serializeType_PYGow2xq(args[i].type, "mangleSignature"_fu);
    };
    return /*NRVO*/ mangle;
}

inline static fu_STR mangleArgTypes_mixhqiQx(fu::view<s_Argument> args)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ',';

        mangle += serializeType_PYGow2xq(args[i].type, "mangle[$T]"_fu);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_starts_fjBQS6rrsUk
                                #define DEF_starts_fjBQS6rrsUk
inline bool starts_fjBQS6rr(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_EFFECTS_output
                                #define DEF_EFFECTS_output
extern const s_FxMask EFFECTS_output;
                                #endif

                                #ifndef DEF_parse_ymQt1u86A69
                                #define DEF_parse_ymQt1u86A69
inline s_FxMask parse_ymQt1u86(fu::view<char> v, const s_FxMask)
{
    if (v == "Fx_NotDeadCode"_fu)
        return s_FxMask_Fx_NotDeadCode;
    else if (v == "Fx_NonDeterministic"_fu)
        return s_FxMask_Fx_NonDeterministic;
    else if (v == "Fx_DontMoveUp"_fu)
        return s_FxMask_Fx_DontMoveUp;
    else if (v == "Fx_DontMoveDown"_fu)
        return s_FxMask_Fx_DontMoveDown;
    else if (v == "Fx_Input"_fu)
        return s_FxMask_Fx_Input;
    else if (v == "Fx_Output"_fu)
        return s_FxMask_Fx_Output;
    else if (v == "Fx_Throws"_fu)
        return s_FxMask_Fx_Throws;
    else if (v == "Fx_Crashes"_fu)
        return s_FxMask_Fx_Crashes;
    else if (v == "Fx_Crashes_Div0"_fu)
        return s_FxMask_Fx_Crashes_Div0;
    else if (v == "Fx_Crashes_OOB"_fu)
        return s_FxMask_Fx_Crashes_OOB;
    else if (v == "Fx_Crashes_Assert"_fu)
        return s_FxMask_Fx_Crashes_Assert;
    else if (v == "Fx_Crashes_Exit"_fu)
        return s_FxMask_Fx_Crashes_Exit;
    else if (v == "Fx_Syscall"_fu)
        return s_FxMask_Fx_Syscall;
    else if (v == "Fx_Blocks"_fu)
        return s_FxMask_Fx_Blocks;
    else if (v == "Fx_Blocks_Alloc"_fu)
        return s_FxMask_Fx_Blocks_Alloc;
    else if (v == "Fx_Blocks_Await"_fu)
        return s_FxMask_Fx_Blocks_Await;

    return s_FxMask{};
}
                                #endif

static int GET_next_local_index_rUmUpdn0(const s_Target& _current_fnort, const s_SolverState& ss, const s_CurrentFn& _current_fn)
{
    return _current_fn.out.target.index ? (ss._scope.extended[_current_fnort.index].locals.size() + 1) : int{};
}

                                #ifndef DEF_last_9VZyC11m8L6
                                #define DEF_last_9VZyC11m8L6
inline s_Node& last_9VZyC11m(fu::view_mut<s_Node> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_last_P1M39QT4jne
                                #define DEF_last_P1M39QT4jne
inline const s_Node& last_P1M39QT4(fu::view<s_Node> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

static bool Lifetime_allowsMutrefReturn_6QSRWRGc(const s_Lifetime& lifetime, const int locals_start, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;
        else if (Region_isTemp_PhGvG2us(r))
            continue;
        else
        {
            const s_Target t = nested_MxoYXM2x(Region_toLocal_PhGvG2us(r), _current_fnort, module);
            if (is_mutref_8RliRHyJ(GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).type, _here, ctx))
            {
                if ((GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).kind == s_kind_var) && !(GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).flags & s_Flags_F_REF))
                    return false;
                else
                {
                    const s_Type& init = Lifetime_climbType_UQ6n8M9W(GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data);
                    if (!Lifetime_allowsMutrefReturn_6QSRWRGc(init.lifetime, locals_start, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort))
                        return false;

                };
            }
            else
                BUG_k3P6Th3U(("Checking for mutref-return-ok found non-mutref: "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);

        };
    };
    return true;
}

static s_Type superType_3l7kQkbp(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    s_Type _0 {};
    return (_0 = type_trySuper_HuTHARyU(a, b, false)) ? static_cast<s_Type&&>(_0) : fail_7KwuQpwr(((((((id ? (qID_9QQZAztz(id) + ": "_fu) : fu_STR{}) + reason) + "No common supertype: "_fu) + humanizeType_3wOVPKQg(a, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + " | "_fu) + humanizeType_3wOVPKQg(b, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);
}

static void reportReturnType_qYkj1e6Q(const s_Helpers& h, const s_Type& type, const bool NICEERR_missingReturn, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ s_Type type_1 = ((is_mutref_8RliRHyJ(type, _here, ctx) && !Lifetime_allowsMutrefReturn_6QSRWRGc(type.lifetime, _helpers_data[h.index].locals_start, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) ? clear_mutref_qNIEFFQB(s_Type(type)) : s_Type(type));
    /*MOV*/ s_Type type_2 = (is_ref2temp_8RliRHyJ(type_1, _here, ctx) ? clear_refs_qNIEFFQB(static_cast<s_Type&&>(type_1)) : static_cast<s_Type&&>(type_1));
    if (_helpers_data[h.index].ret_expect)
        checkAssignable_iqrEhneZ(_helpers_data[h.index].ret_expect, type_2, "Actual return type does not match annotation"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), false, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);

    _helpers_data.mutref(h.index).ret_actual = (_helpers_data[h.index].ret_actual ? superType_3l7kQkbp((NICEERR_missingReturn ? "Missing final return: "_fu : "Subsequent return: "_fu), _helpers_data[h.index].ret_actual, type_2, (*(const fu_STR*)fu::NIL), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort) : static_cast<s_Type&&>(type_2));
    if (!(_helpers_data[h.index].ret_actual))
        BUG_k3P6Th3U("Can't be null past this point."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

}

static fu_STR currentFn_mustBecomeInline_Q8rXLTyL(const s_CurrentFn& _current_fn)
{
    return _current_fn.effects.far_jumps ? "Contains non-local control flow."_fu : fu_STR{};
}

static bool compare_kc5xkxXV(const s_SolvedNode& a, const s_SolvedNode& b, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Overload& a_1 = GET_ryFyPS6P(a.target, ctx, module, _here, ss, _helpers, _helpers_data);
    const s_Overload& b_1 = GET_ryFyPS6P(b.target, ctx, module, _here, ss, _helpers, _helpers_data);
    const fu_STR& an = a_1.name;
    const fu_STR& bn = b_1.name;
    const s_ClosureID acid = tryParseClosureID_ESzTmva3(an);
    const s_ClosureID bcid = tryParseClosureID_ESzTmva3(bn);
    if (acid)
    {
        if (bcid)
        {
            int _0 {};
            const int cmp = ((_0 = (acid.target.modid - bcid.target.modid)) ? _0 : (acid.target.index - bcid.target.index));
            return cmp < 0;
        }
        else
            return true;

    }
    else if (bcid)
        return false;

    return an < bn;
}

static void sort_VChF5nIL(fu::view_mut<s_SolvedNode> a, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_SolvedNode l {};
    s_SolvedNode r {};

            (void) l;
            (void) r;
            auto* data = a.data_mut();
            std::sort(data, data + a.size(), [&](auto& l, auto& r)
            {
        ;
    bool lt = compare_kc5xkxXV(l, r, ctx, module, _here, ss, _helpers, _helpers_data);

                return lt;
            });
        ;
}

                                #ifndef DEF_sort_sbc8DQCXX0h
                                #define DEF_sort_sbc8DQCXX0h
inline void sort_sbc8DQCX(fu::view_mut<s_SolvedNode> a, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    sort_VChF5nIL(a, ctx, module, _here, ss, _helpers, _helpers_data);
}
                                #endif

static void sortInjectedArguments_LCpVDZ7y(const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu::view_mut<s_SolvedNode> args = fu::get_view_mut(_current_fn.out.items, 0, (_current_fn.out.items.size() + FN_ARGS_BACK));
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg = args[i];
        if (arg.target && (GET_ryFyPS6P(arg.target, ctx, module, _here, ss, _helpers, _helpers_data).flags & s_Flags_F_INJECTED))
            return sort_sbc8DQCX(fu::get_view_mut(args, i, args.size()), ctx, module, _here, ss, _helpers, _helpers_data);

    };
}

static void test_nodes_KshSA2Kd(fu::view<s_SolvedNode> nodes, fu::view<char> debug, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    for (int i = 0; i < nodes.size(); i++)
        test_node_ehvRzmk8(nodes[i], (x7E_sTZRmMq1((debug + "["_fu), fu::i64dec(i)) + "]"_fu), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);

}

[[noreturn]] static fu::never err_dwH0N9SL(fu::view<char> reason, const s_SolvedNode& callsite, fu::view<char> debug, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    BUG_k3P6Th3U(((((debug + " "_fu) + qWHAT_vXP1PCtb(GET_ryFyPS6P(callsite.target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)) + ": "_fu) + reason), ctx, module, _here, ss, _helpers, _helpers_data);
}

inline static fu_STR mangleArgTypes_IkTIqhUu(fu::view<s_SolvedNode> args)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ',';

        mangle += serializeType_PYGow2xq(args[i].type, "mangle[$T]"_fu);
    };
    return /*NRVO*/ mangle;
}

static fu_STR explainConversion_lnYYvsS3(fu::view<s_Target> path, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ fu_STR res {};
    for (int i = 0; i < path.size(); i++)
    {
        if (i)
            res += " -> "_fu;

        const s_Overload& o = GET_ryFyPS6P(path[i], ctx, module, _here, ss, _helpers, _helpers_data);
        res += qWHAT_vXP1PCtb(o, ctx, module, _here, ss, _helpers, _helpers_data);
        if (i < (path.size() - 1))
            res += (": "_fu + humanizeType_3wOVPKQg(o.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort));

    };
    return /*NRVO*/ res;
}

static fu_STR explainWhichFn_WGGY3RRb(const s_Target& overload, fu::view<fu_VEC<s_Target>> conversions, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ fu_STR result = qWHAT_vXP1PCtb(GET_ryFyPS6P(overload, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data);
    if (EXT_N3jS4trN(overload, ctx, module, ss).args)
    {
        result += "("_fu;
        for (int i = 0; i < EXT_N3jS4trN(overload, ctx, module, ss).args.size(); i++)
        {
            const s_Argument& arg = EXT_N3jS4trN(overload, ctx, module, ss).args[i];
            if (i)
                result += ","_fu;

            result += (((("\n\t    "_fu + qID_9QQZAztz(human_yoPbxz1W(arg.name, ctx, module, _here, ss, _helpers, _helpers_data))) + ((arg.flags & s_Flags_F_MUSTNAME) ? "!"_fu : fu_STR{})) + (arg.dEfault ? "?: "_fu : ": "_fu)) + (arg.type ? humanizeType_3wOVPKQg(arg.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort) : "$"_fu));
            const fu_VEC<s_Target>& c = ((conversions.size() > i) ? conversions[i] : (*(const fu_VEC<s_Target>*)fu::NIL));
            if (c)
                result += ("\n\t        via "_fu + explainConversion_lnYYvsS3(c, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort));

        };
        result += ")"_fu;
    };
    return /*NRVO*/ result;
}

static void test_CallSignature_TwhTcwIX(const s_SolvedNode& callsite, fu::view<char> debug, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    fu::view<s_Argument> host_args = EXT_N3jS4trN(callsite.target, ctx, module, ss).args;
    fu::view<s_SolvedNode> args = callsite.items;
    if ((args.size() == 0) && (GET_ryFyPS6P(callsite.target, ctx, module, _here, ss, _helpers, _helpers_data).kind == s_kind_type))
        return;
    else
    {
        if (host_args.size() == args.size())
        {
            for (int i = 0; i < host_args.size(); i++)
            {
                const s_Argument& host_arg = host_args[i];
                const s_SolvedNode& arg = args[i];
                if (!(isAssignableAsArgument_d2HKSF3T(host_arg.type, arg.type, false)))
                    err_dwH0N9SL(((((((x7E_sTZRmMq1("Arg #"_fu, fu::i64dec(i)) + ", "_fu) + qID_9QQZAztz(human_yoPbxz1W(host_arg.name, ctx, module, _here, ss, _helpers, _helpers_data))) + " not assignable to host_arg: "_fu) + humanizeType_3wOVPKQg(host_arg.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + " <- "_fu) + humanizeType_3wOVPKQg(arg.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), callsite, debug, ctx, module, _here, ss, _helpers, _helpers_data);

            };
        }
        else
        {
            err_dwH0N9SL((((((x7E_sTZRmMq1((x7E_sTZRmMq1("host_args.len ("_fu, fu::i64dec(host_args.size())) + ") != args.len ("_fu), fu::i64dec(args.size())) + "):"_fu) + "\n\t\t"_fu) + mangleArgTypes_IkTIqhUu(args)) + "\n\t\t"_fu) + explainWhichFn_WGGY3RRb(callsite.target, fu::view<fu_VEC<s_Target>>{}, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), callsite, debug, ctx, module, _here, ss, _helpers, _helpers_data);
        };
    };
}

static void test_Statements_VozM7rPw(const s_SolvedNode& block, fu::view<char> debug, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu::view<s_SolvedNode> items = block.items;
    for (int i = 0; i < items.size(); i++)
    {
        const s_SolvedNode& n = items[i];
        if (n.kind)
        {
            if (!((n.kind != s_kind_empty) || ((block.kind == s_kind_block) && (i == (items.size() - 1)))))
                BUG_k3P6Th3U((x7E_sTZRmMq1((x7E_sTZRmMq1((x7E_sTZRmMq1((debug + ": "_fu), str_v3b7EcLt(block.kind)) + " has an empty at #"_fu), fu::i64dec(i)) + "/"_fu), fu::i64dec(items.size())) + "."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

        }
        else
            BUG_k3P6Th3U((x7E_sTZRmMq1((debug + ": No .kind on item["_fu), fu::i64dec(i)) + "]."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

    };
}

static void test_node_ehvRzmk8(const s_SolvedNode& node, fu_STR&& debug, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    debug += x7E_sTZRmMq1("/"_fu, str_v3b7EcLt(node.kind));
    if (node.value)
        debug += (("["_fu + node.value) + "]"_fu);

    test_nodes_KshSA2Kd(node.items, debug, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
    _here = node.token;
    if (!is_ref_qNIEFFQB(node.type) == !node.type.lifetime)
    {
        const s_kind k = node.kind;
        if (k == s_kind_call)
            return test_CallSignature_TwhTcwIX(node, debug, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
        else if (k == s_kind_let)
        {
            if (node.items.size() == 2)
            {
                if (node.items[0])
                    BUG_k3P6Th3U(x7E_sTZRmMq1("let.items[0] not empty: "_fu, str_v3b7EcLt(node.items[0].kind)), ctx, module, _here, ss, _helpers, _helpers_data);
                else
                    return;

            }
            else
                BUG_k3P6Th3U(x7E_sTZRmMq1("let.items.len: "_fu, fu::i64dec(node.items.size())), ctx, module, _here, ss, _helpers, _helpers_data);

        }
        else if ((k == s_kind_block) || (k == s_kind_and) || (k == s_kind_or) || (k == s_kind_if))
        {
            if ((k == s_kind_and) || (k == s_kind_or))
            {
                if (!(node.items.size() > 1))
                    BUG_k3P6Th3U(x7E_sTZRmMq1((debug + ".len: "_fu), fu::i64dec(node.items.size())), ctx, module, _here, ss, _helpers, _helpers_data);

            };
            if (k == s_kind_if)
            {
                if (!(node.items.size() == 3))
                    BUG_k3P6Th3U(x7E_sTZRmMq1((debug + ".len: "_fu), fu::i64dec(node.items.size())), ctx, module, _here, ss, _helpers, _helpers_data);

            };
            return test_Statements_VozM7rPw(node, debug, ctx, module, _here, ss, _helpers, _helpers_data);
        };
    }
    else
        BUG_k3P6Th3U(((debug + ": !!ref != !!lt: "_fu) + humanizeType_3wOVPKQg(node.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);

}

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
extern const int RELAX_before_bck;
                                #endif

                                #ifndef DEF_unless_oob_II05shyDjq7
                                #define DEF_unless_oob_II05shyDjq7
inline const s_Type& unless_oob_II05shyD(fu::view<s_Type> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Type*)fu::NIL);
}
                                #endif

static void relaxBlockVar_wd1tWqPQ(const s_Target& t, const int relax_mask, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    s_Overload o { GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data) };
    s_Type usage { unless_oob_II05shyD(_current_fn.var_usage, t.index) };
    const bool isUnused = !usage;
    if (isUnused && !((o.flags & s_Flags_F_LAX) || is_zeroes_eqpYb5IC(o.type)))
    {
        const s_TokenIdx token { o.solved.token };

        {
            s_Warning& a = grow_if_oob_wm6oIO3D(ss._warnings, _current_fn.out.target.index);
            if (!(a))
            {
                a = s_Warning { s_TokenIdx(token), fail_appendStack_ifcuNJ6t((((("Unused variable: "_fu + qBAD_9QQZAztz(o.name)) + ": make it "_fu) + qKW_9QQZAztz("lax"_fu)) + " if this is intentional."_fu), ctx, module, _here, ss, _helpers, _helpers_data) };
            };
        };
    };
    s_Overload& o_1 = GET_mut_UTaXftgW(t, module, ss);
    if (isUnused)
        o_1.status |= s_SolverStatus_SS_UNUSED;
    else if (o_1.status & s_SolverStatus_SS_UNUSED)
        BUG_k3P6Th3U(((("relaxBlockVar: previously SS_UNUSED "_fu + qWHAT_vXP1PCtb(o_1, ctx, module, _here, ss, _helpers, _helpers_data)) + " now used as "_fu) + humanizeType_3wOVPKQg(usage, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);

    try_relax_aIGuZbhF(o_1.type, usage, int(relax_mask));

    {
        s_SolvedNode& node = o_1.solved;
        if (node.type)
        {
            try_relax_aIGuZbhF(node.type, usage, int(relax_mask));
            if (node.items && node.items[LET_INIT])
            {
                s_SolvedNode init {};
                std::swap(init, node.items.mutref(LET_INIT));
                propagateType_MOm0DjNj(init, s_Type(node.type), relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                s_Overload& o_2 = GET_mut_UTaXftgW(t, module, ss);
                s_SolvedNode& node_1 = o_2.solved;
                if (is_ref_qNIEFFQB(node_1.type) && !(node_1.flags & s_Flags_F_ARG))
                {
                    node_1.type.lifetime = init.type.lifetime;
                };
                std::swap(init, node_1.items.mutref(LET_INIT));
            };
        }
        else
            BUG_k3P6Th3U("relaxBlockVar: !var.solved.type, can`t propagateType"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

    };
    s_Overload& o_2 = GET_mut_UTaXftgW(t, module, ss);
    if (o_2.flags & s_Flags_F_MUT)
    {
        if (is_mutref_8RliRHyJ(usage, _here, ctx))
        {
            s_SolvedNode& node = GET_mut_UTaXftgW(t, module, ss).solved;
            /*MOV*/ s_Type type = clear_refs_qNIEFFQB(s_Type(node.type));
            node.type = static_cast<s_Type&&>(type);
        }
        else
            o_2.flags &= ~s_Flags_F_MUT;

    };
    s_Overload& o_3 = GET_mut_UTaXftgW(t, module, ss);
    if (o_3.flags & s_Flags_F_RELAXABLE_REF)
    {
        const s_Flags strip = (s_Flags_F_RELAXABLE_REF | (!is_mutref_8RliRHyJ(usage, _here, ctx) ? s_Flags_F_REF : s_Flags{}));
        o_3.flags &= ~strip;
        o_3.solved.flags &= ~strip;
    };
}

static bool isShallowLiteral_V35TUe0j(const s_kind kind)
{
    return (kind == s_kind_int) || (kind == s_kind_real) || (kind == s_kind_char) || (kind == s_kind_str) || (kind == s_kind_bool) || (kind == s_kind_definit);
}

static bool isDiscardable_QI4oLmyF(const s_SolvedNode& node, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (node.items)
        return false;
    else if ((node.kind == s_kind_call) || (node.kind == s_kind_letdef) || (node.kind == s_kind_fndef))
        return false;
    else if ((node.kind == s_kind_empty) || (node.kind == s_kind_block) || isShallowLiteral_V35TUe0j(node.kind))
        return true;
    else
        BUG_k3P6Th3U((x7E_sTZRmMq1("TODO: isDiscardable("_fu, str_v3b7EcLt(node.kind)) + ")"_fu), ctx, module, _here, ss, _helpers, _helpers_data);

}

                                #ifndef DEF_x3Cx3E_51VChu5oCn5
                                #define DEF_x3Cx3E_51VChu5oCn5
inline int x3Cx3E_51VChu5o(const fu::u8 a, const fu::u8 b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_tgorePto2m6
                                #define DEF_x3Cx3E_tgorePto2m6
inline int x3Cx3E_tgorePto(fu::view<fu::u8> a, fu::view<fu::u8> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_51VChu5o(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Cx3E_df85Y7s3Lgg
                                #define DEF_x3Cx3E_df85Y7s3Lgg
inline int x3Cx3E_df85Y7s3(const s_BitSet& a, const s_BitSet& b)
{

    {
        const int cmp = x3Cx3E_tgorePto(a._data, b._data);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_ynTbQ4rvZtg
                                #define DEF_x3Cx3E_ynTbQ4rvZtg
inline int x3Cx3E_ynTbQ4rv(const s_Moves& a, const s_Moves& b)
{

    {

        {
            const int cmp = x3Cx3E_df85Y7s3(a.used_again, b.used_again);
            if (cmp)
                return cmp;

        };

        {
            const int cmp = x3Cx3E_df85Y7s3(a.just_moved, b.just_moved);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_df85Y7s3(a.just_used, b.just_used);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_Mcnd388MiZ4
                                #define DEF_x3Cx3E_Mcnd388MiZ4
inline int x3Cx3E_Mcnd388M(const s_Postdom& a, const s_Postdom& b)
{

    {

        {
            const int cmp = x3Cx3E_ynTbQ4rv(a.moves, b.moves);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_F7KakSWb(a.loop_start, b.loop_start);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_Mcnd388MiZ4
                                #define DEF_x3Dx3D_Mcnd388MiZ4
inline bool operator==(const s_Postdom& a, const s_Postdom& b)
{
    return !x3Cx3E_Mcnd388M(a, b);
}
                                #endif

static void branch_tYMpDeeA(s_Postdom& dest, const s_Postdom& src, const s_Context& ctx, const s_TokenIdx& _here)
{

    {
        add_I6kjNu45(dest.moves.used_again, src.moves.used_again);
        add_I6kjNu45(dest.moves.just_moved, src.moves.just_moved);
        add_I6kjNu45(dest.moves.just_used, src.moves.just_used);
    };
    dest.loop_start = max_F7KakSWb((dest.loop_start ? dest.loop_start : BUG_vYytSj38(fu_STR{}, _here, ctx)), (src.loop_start ? src.loop_start : BUG_vYytSj38(fu_STR{}, _here, ctx)));
}

                                #ifndef DEF_if_only_7ZMqiNoZmIe
                                #define DEF_if_only_7ZMqiNoZmIe
inline const s_SolvedNode& if_only_7ZMqiNoZ(fu::view<s_SolvedNode> s)
{
    return (s.size() == 1) ? s[0] : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

static s_SolvedNode& recover_FinFSLaN(s_SolvedNode& node)
{
    return node.items.mutref(2);
}

static s_SolvedNode& error_GwG7jNcK(s_SolvedNode& node)
{
    return node.items.mutref(1);
}

static s_SolvedNode& attempt_9AC55OFP(s_SolvedNode& node)
{
    return node.items.mutref(0);
}

static void Breakable_begin_ojdAWtbL(const s_SolvedNode& node, const s_CurrentFn& _current_fn, fu::view_mut<s_HelpersData> _helpers_data)
{
    if (node.helpers)
    {
        s_HelpersData* BL_2_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_2_v = &(_helpers_data.mutref(h.index));
        (void)0;}), *BL_2_v).postdom = s_Postdom(_current_fn.postdom);
    };
}

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static s_SolvedNode& post_h4t74hbc(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST);
}

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 3;
                                #endif

static s_SolvedNode& post_cond_b5CAmuIb(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST_COND);
}

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 2;
                                #endif

static s_SolvedNode& body_VByDUDwx(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_BODY);
}

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline constexpr int LOOP_COND = 1;
                                #endif

static s_SolvedNode& pre_cond_92jaAkDP(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_COND);
}

static void Breakable_end_0iReBzaK(const s_SolvedNode& node, const s_Context& ctx, const s_TokenIdx& _here, s_CurrentFn& _current_fn, fu::view<s_HelpersData> _helpers_data)
{
    if (node.helpers)
    {
        const s_HelpersData* BL_2_v;
        branch_tYMpDeeA(_current_fn.postdom, (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_2_v = &(_helpers_data[h.index]);
        (void)0;}), *BL_2_v).postdom, ctx, _here);
    };
}

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

static s_SolvedNode& init_ek4JzoZw(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_INIT);
}

                                #ifndef DEF_only_PyOGoLWZc84
                                #define DEF_only_PyOGoLWZc84
inline s_SolvedNode& only_PyOGoLWZ(fu::view_mut<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s.mutref(0);
    else
        return fu::fail(x7E_sTZRmMq1("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static bool isNested_BUIXyyVQ(const s_Target& target, const s_CurrentFn& _current_fn)
{
    return target.modid == -_current_fn.out.target.index;
}

                                #ifndef DEF_grow_if_oob_GA5l86NQAu5
                                #define DEF_grow_if_oob_GA5l86NQAu5
inline s_Type& grow_if_oob_GA5l86NQ(fu_VEC<s_Type>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
extern const int RELAX_all;
                                #endif

static const bool MOVE_from_temp = true;

static bool trackUse_vYBGmYPv(const s_Target& t, s_BitSet& bitset, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (!add_once_uczByTOp(bitset, t.index))
        return false;
    else
    {
        const s_Overload& o = GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data);
        const s_SolvedNode& letNode = o.solved;
        if (is_ref_qNIEFFQB(letNode.type))
        {
            if (o.flags & s_Flags_F_ARG)
                return false;
            else if (!trackUse_pEahoxBA(Lifetime_climbType_UQ6n8M9W(o, ctx, module, _here, ss, _helpers, _helpers_data).lifetime, bitset, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort))
                return false;

        };
        return (t.index >= _current_fn.postdom.loop_start);
    };
}

static bool trackUse_pEahoxBA(const s_Lifetime& lt, s_BitSet& bitset, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    bool allTrue = true;
    for (int i = 0; i < lt.uni0n.size(); i++)
    {
        const s_Region& r = lt.uni0n[i];
        if (MOVE_from_temp && Region_isTemp_PhGvG2us(r))
            continue;
        else
        {
            const int local = Region_asLocal_l3hJ0imS(r);
            if (!(local && trackUse_vYBGmYPv(nested_MxoYXM2x(local, _current_fnort, module), bitset, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort)))
                allTrue = false;

        };
    };
    return allTrue;
}

static bool tryTrackLastUse_TTuc46yB(const s_Lifetime& lt, const int relax_mask, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    return (relax_mask == RELAX_all) && trackUse_pEahoxBA(lt, _current_fn.postdom.moves.used_again, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
}

                                #ifndef DEF_min_F7KakSWb5Tl
                                #define DEF_min_F7KakSWb5Tl
inline int min_F7KakSWb(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

static fu_STR mangleArgTypes_LmegzhcB(fu::view<s_SolvedNode> args, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    /*MOV*/ fu_STR mangle {};
    const int REST_END = (use_reorder ? reorder.size() : args.size());
    const int N = min_F7KakSWb(REST_END, REST_START);
    for (int i = 0; i < N; i++)
    {
        if (i)
            mangle += ',';

        const int callsiteIndex = (use_reorder ? reorder[i] : i);
        if ((conversions.size() > i) && conversions[i].size())
            mangle += serializeType_PYGow2xq(GET_ryFyPS6P(last_SLwrTQE9(conversions[i]), ctx, module, _here, ss, _helpers, _helpers_data).type, "mangle.conv"_fu);
        else if ((callsiteIndex >= 0) && (callsiteIndex <= args.size()))
            mangle += serializeType_PYGow2xq(args[callsiteIndex].type, "mangle.no-conv"_fu);

    };
    if (REST_START < REST_END)
    {
        if (REST_START)
            mangle += ',';

        mangle += serializeType_PYGow2xq(REST_TYPE, "mangle[Nodes].rest"_fu);
    };
    return /*NRVO*/ mangle;
}

static s_Target trySpecialize_ad6xSK3T(const s_Target& overloadIdx, fu::view<s_SolvedNode> args, fu_STR& args_mangled, const int REST_START, const s_Type& REST_TYPE, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (!(args_mangled))
        args_mangled = mangleArgTypes_LmegzhcB(args, reorder, use_reorder, conversions, REST_START, REST_TYPE, ctx, module, _here, ss, _helpers, _helpers_data);

    fu_STR mangle = ((x7E_sTZRmMq1(x7E_sTZRmMq1(fu::i64dec(overloadIdx.modid), "#"_fu), fu::i64dec(overloadIdx.index)) + " "_fu) + args_mangled);
    s_Target _0 {};
    return (_0 = s_Target(get_jKIIMy2f(ss._specs, mangle))) ? _0 : (_0 = doTrySpecialize_yiTp1nQi(s_Target{}, overloadIdx, args, mangle, reorder, use_reorder, conversions, REST_START, REST_TYPE, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort)) ? _0 : BUG_k3P6Th3U("doTrySpecialize returns empty target."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
}

static s_Lifetime Lifetime_replaceArgsAtCallsite_SxiGrtrh(const s_Target& target, fu::view<s_SolvedNode> argNodes, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    s_Lifetime keep {};
    /*MOV*/ s_Lifetime replace {};
    const s_Lifetime& returned = GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).type.lifetime;
    for (int i = 0; i < returned.uni0n.size(); i++)
    {
        const s_Region& region = returned.uni0n[i];
        if (Region_isStatic_PhGvG2us(region))
        {
            keep.uni0n += s_Region(region);
            continue;
        }
        else if (Region_isTemp_PhGvG2us(region))
        {
            BUG_k3P6Th3U(("Lifetime_replaceArgsAtCallsite: found a temp lt in: "_fu + qWHAT_KqX3VCyd(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).type.lifetime, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);
        }
        else
        {
            const s_SolvedNode& argNode = argNodes[Region_toArgPosition_PhGvG2us(region)];
            s_Lifetime argLt = (is_ref_qNIEFFQB(argNode.type) ? s_Lifetime(argNode.type.lifetime) : Lifetime_temporary_8nlJDPX0());
            replace = Lifetime_union_7b6lMejl(replace, (argLt ? argLt : BUG_k3P6Th3U("refarg without lifetime"_fu, ctx, module, _here, ss, _helpers, _helpers_data)));
        };
    };
    if (replace)
    {
        if (keep)
        {
            return Lifetime_union_7b6lMejl(keep, replace);
        }
        else
            return /*NRVO*/ replace;

    }
    else
    {
        return s_Lifetime(returned);
    };
}

static bool isDiscardable_Ad8kwSa9(const s_Target& t, const s_Context& ctx, const s_Module& module, const s_SolverState& ss)
{
    if (EXT_N3jS4trN(t, ctx, module, ss).fx_mask & s_FxMask_Fx_NotDeadCode)
        return false;
    else
    {
        fu::view<s_Argument> host_args = EXT_N3jS4trN(t, ctx, module, ss).args;
        for (int i = 0; i < host_args.size(); i++)
        {
            if (host_args[i].flags & s_Flags_F_WRITTEN_TO)
                return false;

        };
        return true;
    };
}

static void discardIntoBlock_n4Q6s3zi(s_SolvedNode& node, const s_Type& slot, const int relax_mask, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    node = createBlock_aqSRQpGo(t_void, fu_VEC<s_SolvedNode>(node.items), s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    propagateType_MOm0DjNj(node, slot, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
}

static bool isRTL_z4z9gRua(const s_Overload& o)
{
    return !!(o.flags & s_Flags_F_OOE_RTL);
}

                                #ifndef DEF_each_t9iG5Eb1WZ9
                                #define DEF_each_t9iG5Eb1WZ9
inline void each_t9iG5Eb1(const s_BitSet& _, const s_BitSet& just_moved00, int& MUSTSEQ_mask, const s_BitSet& just_moved0, const int mustSeq, const s_Context& ctx, const s_Module& module, const s_Options& options, const s_TokenIdx& _here, const s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
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
                    if (has_qNZlwBKS(just_moved0, index) && !has_qNZlwBKS(just_moved00, index))
                    {
                        MUSTSEQ_mask |= (1 << (mustSeq & 31));
                        makeNote_jjqaKIrz(s_SolverNotes_N_MoveMustSeq, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                        return;
                    };
                };
            };
        };
    };
}
                                #endif

inline static void Lifetime_each_LIWxBHNA(const s_Lifetime& lifetime, const int locals_start, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;
        else if (Region_isTemp_PhGvG2us(r))
            continue;
        else
        {
            const s_Target t = nested_MxoYXM2x(Region_toLocal_PhGvG2us(r), _current_fnort, module);
            s_Overload& o = GET_mut_UTaXftgW(t, module, ss);
            if (o.flags & s_Flags_F_MOVED_FROM)
                continue;
            else
            {
                o.flags |= s_Flags_F_MOVED_FROM;
                const s_Type& init = Lifetime_climbType_UQ6n8M9W(o, ctx, module, _here, ss, _helpers, _helpers_data);
                if (is_ref_qNIEFFQB(init))
                {
                    Lifetime_F_MOVED_FROM_YFrbRR0r(s_Lifetime(init.lifetime), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
                };
            };
        };
    };
}

static void Lifetime_F_MOVED_FROM_YFrbRR0r(const s_Lifetime& lifetime, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    Lifetime_each_LIWxBHNA(lifetime, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
}

static void trackJustMoved_ZuqBngk3(const s_Lifetime& lt, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    for (int i = 0; i < lt.uni0n.size(); i++)
    {
        const s_Region& r = lt.uni0n[i];
        if (MOVE_from_temp && Region_isTemp_PhGvG2us(r))
            continue;
        else
        {
            int _0 {};
            const int local = ((_0 = Region_asLocal_l3hJ0imS(r)) ? _0 : BUG_k3P6Th3U("trackJustMoved: found a non-local."_fu, ctx, module, _here, ss, _helpers, _helpers_data));
            const s_Target target = nested_MxoYXM2x(local, _current_fnort, module);
            if (add_once_uczByTOp(_current_fn.postdom.moves.just_moved, target.index))
            {
                trackJustMoved_ZuqBngk3(Lifetime_climbType_UQ6n8M9W(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data).lifetime, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
            }
            else
                BUG_k3P6Th3U("trackJustMoved: already moved."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

        };
    };
}

inline static void _current_fn_eachArg_BACK_YpJa2hVp(const int relax_mask, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    for (int i = (_current_fn.out.items.size() + FN_ARGS_BACK); i-- > 0; )
    {
        const s_Target t { _current_fn.out.items[i].target };
        if (t && (GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).flags & s_Flags_F_ARG))
        {
            relaxBlockVar_wd1tWqPQ(t, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            if (s_SolverStatus((GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).status & s_SolverStatus_SS_UNUSED)) && (GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).flags & s_Flags_F_IMPLICIT))
            {
                makeNote_jjqaKIrz(s_SolverNotes_N_UnusedImplicit, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                if (_current_fn.out.items[i].target == t)
                    _current_fn.out.items.splice(i, 1);
                else
                {
                    BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
                };
            };
        };
    };
}

                                #ifndef DEF_EFFECTS_clock
                                #define DEF_EFFECTS_clock
extern const s_FxMask EFFECTS_clock;
                                #endif

                                #ifndef DEF_EFFECTS_input
                                #define DEF_EFFECTS_input
extern const s_FxMask EFFECTS_input;
                                #endif

static void propagateType_MOm0DjNj(s_SolvedNode& node, const s_Type& slot, const int relax_mask, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const s_kind k = node.kind;
    if ((k == s_kind_let) || (k == s_kind_letdef))
    {
        if (!node.target)
            return;
        else
            return relaxBlockVar_wd1tWqPQ(node.target, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

    }
    else
    {
        const s_TokenIdx here0 { _here };
        _here = node.token;
        fu_DEFER(_here = here0);
        const bool canDiscard = is_void_eqpYb5IC(slot);
        try_relax_aIGuZbhF(node.type, slot, int(relax_mask));
        if ((k == s_kind_and) || (k == s_kind_or))
        {
            const s_Type& rest = ((!canDiscard && ((k == s_kind_or) || (is_mutref_8RliRHyJ(slot, _here, ctx) && CANNOT_definit_mutrefs))) ? slot : t_bool);
            s_Postdom postdom0 { _current_fn.postdom };
            fu_VEC<s_SolvedNode>& items = node.items;
            for (int i = items.size(); i-- > 0; )
            {
                s_SolvedNode& item = items.mutref(i);
                propagateType_MOm0DjNj(item, s_Type(((i == (items.size() - 1)) ? slot : rest)), relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                if (canDiscard && (i == (items.size() - 1)) && isDiscardable_QI4oLmyF(item, ctx, module, _here, ss, _helpers, _helpers_data))
                {
                    makeNote_jjqaKIrz(s_SolverNotes_N_UnusedAndOr, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                    items.pop();
                    if (!(_current_fn.postdom == postdom0))
                    {
                        BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
                    };
                };
                if (i)
                    branch_tYMpDeeA(_current_fn.postdom, postdom0, ctx, _here);

            };
            if (items.size() < 2)
            {
                s_SolvedNode _0 {};
                node = ((_0 = s_SolvedNode(if_only_7ZMqiNoZ(items))) ? static_cast<s_SolvedNode&&>(_0) : createEmpty_R642r6KV(s_kind_empty, t_void, s_Target{}, _here));
            };
        }
        else if (k == s_kind_if)
        {
            s_Postdom postdom0 { _current_fn.postdom };
            for (int i = node.items.size(); i-- > 0; )
            {
                if (i == 1)
                    std::swap(postdom0, _current_fn.postdom);
                else if (i == 0)
                    branch_tYMpDeeA(_current_fn.postdom, postdom0, ctx, _here);

                propagateType_MOm0DjNj(node.items.mutref(i), ((i != 0) ? slot : t_bool), relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            };
            if (canDiscard)
            {
                if (isDiscardable_QI4oLmyF(node.items[1], ctx, module, _here, ss, _helpers, _helpers_data))
                {
                    makeNote_jjqaKIrz(s_SolverNotes_N_UnusedIfElse, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                    node = (isDiscardable_QI4oLmyF(node.items[2], ctx, module, _here, ss, _helpers, _helpers_data) ? s_SolvedNode(node.items[0]) : createOr_aJrU9XeP(fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(node.items[0]), s_SolvedNode(node.items[2]) } }, s_Type(t_void), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort));
                }
                else if (isDiscardable_QI4oLmyF(node.items[2], ctx, module, _here, ss, _helpers, _helpers_data))
                {
                    makeNote_jjqaKIrz(s_SolverNotes_N_UnusedIfElse, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                    node = createAnd_fwXZzazJ(fu::slice(node.items, 0, 2), s_Type(t_void), _here);
                };
            };
        }
        else if (k == s_kind_try)
        {
            s_Postdom postdom0 { _current_fn.postdom };
            propagateType_MOm0DjNj(recover_FinFSLaN(node), t_void, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            branch_tYMpDeeA(_current_fn.postdom, postdom0, ctx, _here);
            propagateType_MOm0DjNj(error_GwG7jNcK(node), t_string, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            const s_FxMask throws0 = s_FxMask((_current_fn.effects.fx_mask & s_FxMask_Fx_Throws));
            _current_fn.effects.fx_mask &= s_FxMask(~s_FxMask_Fx_Throws);
            propagateType_MOm0DjNj(attempt_9AC55OFP(node), t_void, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            if (!s_FxMask((_current_fn.effects.fx_mask & s_FxMask_Fx_Throws)))
            {
                makeNote_jjqaKIrz(s_SolverNotes_N_UnusedTry, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                node = attempt_9AC55OFP(node);
            };
            _current_fn.effects.fx_mask &= s_FxMask(~s_FxMask_Fx_Throws);
            _current_fn.effects.fx_mask |= throws0;
        }
        else if (k == s_kind_loop)
        {
            Breakable_begin_ojdAWtbL(node, _current_fn, _helpers_data);
            const int loop_start0 = (_current_fn.postdom.loop_start ? _current_fn.postdom.loop_start : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
            const s_HelpersData* BL_23_v;
            int _1 {};
            _current_fn.postdom.loop_start = ((_1 = (__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_23_v = &(_helpers_data[h.index]);
            (void)0;}), *BL_23_v).locals_start) ? _1 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
            if (post_h4t74hbc(node))
            {
                if (isDiscardable_QI4oLmyF(post_h4t74hbc(node), ctx, module, _here, ss, _helpers, _helpers_data))
                {
                    post_h4t74hbc(node) = s_SolvedNode{};
                }
                else
                    propagateType_MOm0DjNj(post_h4t74hbc(node), t_void, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

            };
            if (post_cond_b5CAmuIb(node))
                propagateType_MOm0DjNj(post_cond_b5CAmuIb(node), t_bool, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

            if (body_VByDUDwx(node))
            {
                if (isDiscardable_QI4oLmyF(body_VByDUDwx(node), ctx, module, _here, ss, _helpers, _helpers_data))
                {
                    body_VByDUDwx(node) = s_SolvedNode{};
                }
                else
                    propagateType_MOm0DjNj(body_VByDUDwx(node), t_void, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

            };
            if (pre_cond_92jaAkDP(node))
                propagateType_MOm0DjNj(pre_cond_92jaAkDP(node), t_bool, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

            _current_fn.postdom.loop_start = loop_start0;
            Breakable_end_0iReBzaK(node, ctx, _here, _current_fn, _helpers_data);
            if (_current_fn.postdom.loop_start == loop_start0)
            {
                if (init_ek4JzoZw(node))
                    propagateType_MOm0DjNj(init_ek4JzoZw(node), t_void, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

            }
            else
            {
                BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
            };
        }
        else if (k == s_kind_not)
        {
            if (canDiscard)
            {
                node = only_7ZMqiNoZ(node.items);
                return propagateType_MOm0DjNj(node, t_void, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            }
            else
                return propagateType_MOm0DjNj(only_PyOGoLWZ(node.items), t_bool, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

        }
        else if (k == s_kind_call)
        {
            node._loop_start = _current_fn.postdom.loop_start;
            const s_Target t { node.target };
            if (GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).kind == s_kind_field)
            {
                if (canDiscard)
                {
                    node = only_7ZMqiNoZ(node.items);
                    return propagateType_MOm0DjNj(node, slot, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                }
                else
                    return propagateType_MOm0DjNj(only_PyOGoLWZ(node.items), slot, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

            }
            else if (GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).kind == s_kind_var)
            {
                if (canDiscard)
                {
                    node = createEmpty_R642r6KV(s_kind_empty, t_void, s_Target{}, _here);
                    return;
                }
                else
                {
                    if (isNested_BUIXyyVQ(t, _current_fn))
                    {
                        s_Type& usage = grow_if_oob_GA5l86NQ(_current_fn.var_usage, t.index);
                        const s_Type& slot_1 = node.type;
                        if (!usage)
                            usage = slot_1;
                        else
                        {
                            s_Type _2 {};
                            usage = ((_2 = type_tryIntersect_F2WHZZjx(usage, slot_1)) ? static_cast<s_Type&&>(_2) : fail_7KwuQpwr((((((qWHAT_vXP1PCtb(GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + ": Usage intersection failure: `"_fu) + humanizeType_3wOVPKQg(usage, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + "` & `"_fu) + humanizeType_3wOVPKQg(slot_1, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data));
                        };
                        tryTrackLastUse_TTuc46yB(node.type.lifetime, relax_mask, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
                        trackUse_pEahoxBA(node.type.lifetime, _current_fn.postdom.moves.just_used, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
                    };
                    return;
                };
            }
            else
            {
                if (EXT_N3jS4trN(t, ctx, module, ss).spec_of && is_ref_qNIEFFQB(GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).type))
                {
                    fu_VEC<s_SolvedNode> relaxed {};
                    for (int i = 0; i < node.items.size(); i++)
                    {
                        const s_SolvedNode& orig = node.items[i];
                        if (has_7ZhIVZth(GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).type.lifetime.uni0n, Region_fromArgPosition_BLLdCVw1(i)))
                        {
                            s_Type type { orig.type };
                            if (try_relax_aIGuZbhF(type, slot, int(relax_mask)))
                            {
                                if (!relaxed)
                                    relaxed = fu::slice(node.items, 0, i);

                                relaxed += SolvedNode_ROjBZjUC(s_kind___relaxed, type, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
                                continue;
                            };
                        };
                        if (relaxed)
                            relaxed += s_SolvedNode(orig);

                    };
                    if (relaxed)
                    {
                        fu_STR args_mangled {};
                        const s_Target spec = trySpecialize_ad6xSK3T(s_Target(EXT_N3jS4trN(t, ctx, module, ss).spec_of), relaxed, args_mangled, relaxed.size(), (*(const s_Type*)fu::NIL), fu::view<int>{}, false, fu::view<fu_VEC<s_Target>>{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                        if (!is_SPECFAIL_eDkkXeHK(spec) && !(spec == t))
                        {
                            checkAssignable_iqrEhneZ(node.type, GET_ryFyPS6P(spec, ctx, module, _here, ss, _helpers, _helpers_data).type, "Relaxed specialization does not return a subtype"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), false, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
                            if (is_ref_qNIEFFQB(node.type))
                            {
                                node.type.lifetime = /* MOVE_FROM_CONST_REF */static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>(Lifetime_test_QQCOCwhD(Lifetime_replaceArgsAtCallsite_SxiGrtrh(spec, relaxed, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort), true, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)));
                            };
                            node.target = spec;
                            makeNote_jjqaKIrz(s_SolverNotes_N_RelaxRespec, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                        };
                    };
                };
                if (canDiscard && isDiscardable_Ad8kwSa9(node.target, ctx, module, ss))
                {
                    makeNote_jjqaKIrz(s_SolverNotes_N_UnusedCall, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                    return discardIntoBlock_n4Q6s3zi(node, slot, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                }
                else
                {
                    _current_fn.effects.fx_mask |= EXT_N3jS4trN(node.target, ctx, module, ss).fx_mask;

                    {
                        fu::view<s_Argument> host_args = EXT_N3jS4trN(t, ctx, module, ss).args;
                        for (int i = 0; i < host_args.size(); i++)
                        {
                            if (is_ref_qNIEFFQB(host_args[i].type))
                            {
                                tryTrackLastUse_TTuc46yB(node.items[i].type.lifetime, relax_mask, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
                            };
                        };
                    };
                    if (node.items)
                    {
                        fu_VEC<s_Argument> host_args { EXT_N3jS4trN(node.target, ctx, module, ss).args };
                        const bool rtl = isRTL_z4z9gRua(GET_ryFyPS6P(node.target, ctx, module, _here, ss, _helpers, _helpers_data));
                        const bool ooe_isUndef = (!rtl && (node.items.size() > 1));
                        const int N = node.items.size();
                        const int start = (rtl ? 0 : (N - 1));
                        const int end = (rtl ? int(N) : (0 - 1));
                        const int incr = (rtl ? +1 : -1);
                        s_BitSet just_used1 {};
                        std::swap(_current_fn.postdom.moves.just_used, just_used1);
                        fu_DEFER(std::swap(_current_fn.postdom.moves.just_used, just_used1));
                        s_BitSet just_moved00 { (ooe_isUndef ? _current_fn.postdom.moves.just_moved : (*(const s_BitSet*)fu::NIL)) };
                        int MUSTSEQ_mask = 0;
                        for (int i = start; i != end; (i += incr))
                        {
                            s_SolvedNode& arg = node.items.mutref(i);
                            const bool ooe_isUndef_1 = (ooe_isUndef && (i != start));
                            s_BitSet just_moved0 { (ooe_isUndef_1 ? _current_fn.postdom.moves.just_moved : (*(const s_BitSet*)fu::NIL)) };
                            propagateType_MOm0DjNj(arg, s_Type(host_args[i].type), relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                            if (ooe_isUndef_1)
                            {
                                const int mustSeq = i;
                                each_t9iG5Eb1(_current_fn.postdom.moves.just_used, just_moved00, MUSTSEQ_mask, just_moved0, mustSeq, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                                add_I6kjNu45(just_used1, _current_fn.postdom.moves.just_used);
                                clear_eS70UoEC(_current_fn.postdom.moves.just_used);
                            };
                        };
                        node.helpers.index |= MUSTSEQ_mask;
                    };
                };
            };
        }
        else
        {
            if (!((k == s_kind_int) || (k == s_kind_real) || (k == s_kind_char) || (k == s_kind_str) || (k == s_kind_definit) || (k == s_kind_bool)))
            {
                if (!((k == s_kind_typeparam) || (k == s_kind_empty) || (k == s_kind_fndef)))
                {
                    if (k == s_kind_copy)
                    {
                        if (relax_mask != RELAX_all)
                            fail_7KwuQpwr("Found a `copy` node during first relax."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
                        else
                        {
                            s_SolvedNode& item = only_PyOGoLWZ(node.items);
                            bool isCopy = true;
                            if (!is_trivial_ChYpFATl(item.type, ctx, module))
                            {
                                if (tryTrackLastUse_TTuc46yB(item.type.lifetime, relax_mask, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort))
                                    isCopy = false;
                                else
                                {
                                    if (!is_rx_copy_6qTx5aCK(item.type))
                                        fail_7KwuQpwr(("Needs an explicit STEAL or CLONE: "_fu + humanizeType_3wOVPKQg(item.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);
                                    else if (!is_trivial_ChYpFATl(node.type, ctx, module))
                                        makeNote_jjqaKIrz(s_SolverNotes_N_NonTrivAutoCopy, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);

                                };
                            };
                            propagateType_MOm0DjNj(item, (isCopy ? make_copyable_qNIEFFQB(s_Type(slot)) : s_Type(slot)), relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                            if (is_ref_qNIEFFQB(item.type))
                            {
                                if (!isCopy)
                                {
                                    Lifetime_F_MOVED_FROM_YFrbRR0r(item.type.lifetime, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
                                    trackJustMoved_ZuqBngk3(item.type.lifetime, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
                                    node.kind = s_kind_move;
                                };
                            }
                            else
                                fail_7KwuQpwr("TODO: Relaxed a copy/move to a value, no point in keeping the outer node."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

                        };
                    }
                    else if (k == s_kind_arrlit)
                    {
                        if (canDiscard)
                        {
                            makeNote_jjqaKIrz(s_SolverNotes_N_UnusedArrlit, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                            return discardIntoBlock_n4Q6s3zi(node, slot, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                        }
                        else
                        {
                            s_Type itemSlot = clear_sliceable_8RliRHyJ(slot, _here, ctx);
                            for (int i = 0; i < node.items.size(); i++)
                                propagateType_MOm0DjNj(node.items.mutref(i), itemSlot, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

                        };
                    }
                    else if (k == s_kind_argid)
                    {
                        node = only_7ZMqiNoZ(node.items);
                        propagateType_MOm0DjNj(node, slot, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                    }
                    else if (k == s_kind_jump)
                    {
                        const s_Helpers h { node.helpers };
                        if (_helpers_data[h.index].ret_actual)
                        {
                            if (!_current_fn.TODO_FIX_defers)
                            {
                                const s_Postdom* _3;
                                _current_fn.postdom = (*(_3 = &(_helpers_data[h.index].postdom)) ? *_3 : BUG_k3P6Th3U("propagateType(jump): h.loop_start not available."_fu, ctx, module, _here, ss, _helpers, _helpers_data));
                            };
                            propagateType_MOm0DjNj(only_PyOGoLWZ(node.items), s_Type(_helpers_data[h.index].ret_actual), relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                        }
                        else
                            BUG_k3P6Th3U("propagateType(jump): h.ret_actual not available."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

                    }
                    else if (k == s_kind_block)
                    {
                        const s_Helpers h { node.helpers };
                        if (_helpers_data[h.index].ret_actual)
                        {
                            if (canDiscard)
                                _helpers_data.mutref(h.index).ret_actual = s_Type(t_void);
                            else
                                try_relax_aIGuZbhF(_helpers_data.mutref(h.index).ret_actual, slot, int(relax_mask));

                        };
                        Breakable_begin_ojdAWtbL(node, _current_fn, _helpers_data);
                        fu_DEFER(Breakable_end_0iReBzaK(node, ctx, _here, _current_fn, _helpers_data));
                        fu_VEC<s_SolvedNode>& items = node.items;

                        {
                            int TODO_FIX_defers = 0;
                            for (int i = 0; i < (items.size() - 1); i++)
                            {
                                s_SolvedNode& item = items.mutref(i);
                                if (item.kind == s_kind_defer)
                                {
                                    TODO_FIX_defers++;
                                    s_SolvedNode& expr = only_PyOGoLWZ(item.items);
                                    propagateType_MOm0DjNj(expr, t_void, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                                    if (isDiscardable_QI4oLmyF(expr, ctx, module, _here, ss, _helpers, _helpers_data))
                                    {
                                        makeNote_jjqaKIrz(s_SolverNotes_N_UnusedDefer, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                                        items.splice(i--, 1);
                                    };
                                };
                            };
                            _current_fn.TODO_FIX_defers += TODO_FIX_defers;
                            while (items)
                            {
                                s_SolvedNode& expr = last_PyOGoLWZ(items);
                                propagateType_MOm0DjNj(expr, slot, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                                if (!canDiscard || !isDiscardable_QI4oLmyF(expr, ctx, module, _here, ss, _helpers, _helpers_data))
                                    break;
                                else
                                {
                                    items.pop();
                                    if (if_last_7ZMqiNoZ(items).kind == s_kind_defer)
                                        last_PyOGoLWZ(items) = s_SolvedNode(only_7ZMqiNoZ(last_7ZMqiNoZ(items).items));

                                };
                            };
                            for (int i_1 = (items.size() - 1); i_1-- > 0; )
                            {
                                s_SolvedNode& expr = items.mutref(i_1);
                                if (expr.kind != s_kind_defer)
                                {
                                    propagateType_MOm0DjNj(expr, t_void, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                                    if (isDiscardable_QI4oLmyF(expr, ctx, module, _here, ss, _helpers, _helpers_data))
                                    {
                                        makeNote_jjqaKIrz(s_SolverNotes_N_UnusedStmt, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                                        items.splice(i_1, 1);
                                    };
                                };
                            };
                            _current_fn.TODO_FIX_defers -= TODO_FIX_defers;
                        };
                        if (_helpers_data[h.index].target == _current_fn.out.target)
                            _current_fn_eachArg_BACK_YpJa2hVp(relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

                    }
                    else
                    {
                        if (!(k == s_kind_root))
                        {
                            if (k == s_kind_pragma)
                            {
                                for (int i = 0; i < node.items.size(); i++)
                                {
                                    s_SolvedNode* _4;
                                    (_4 = &(node.items.mutref(i)), propagateType_MOm0DjNj(*_4, s_Type(node.items[i].type), relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort));
                                };
                                if (node.value == "clock"_fu)
                                    _current_fn.effects.fx_mask |= EFFECTS_clock;
                                else if (node.value == "input"_fu)
                                    _current_fn.effects.fx_mask |= EFFECTS_input;
                                else if (node.value == "output"_fu)
                                    _current_fn.effects.fx_mask |= EFFECTS_output;

                            }
                            else
                                fail_7KwuQpwr((x7E_sTZRmMq1("TODO: propagateType("_fu, str_v3b7EcLt(k)) + ")."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

                        };
                    };
                };
            };
        };
    };
}

static s_Flow& flow_pwnZvy6P(s_CurrentFn& _current_fn)
{
    return _current_fn.flow;
}

inline static void _current_fn_eachArg_FWD_g0qTra1b(const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = _current_fn.out.items[i].target;
        if (t && (GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).flags & s_Flags_F_ARG))
        {
            if (t.modid == -_current_fn.out.target.index)
                Reference_trackArgument_emIbMVX0(flow_pwnZvy6P(_current_fn), int(t.index), i, _here, ctx);
            else
                BUG_k3P6Th3U(("Arg target not local to current-fn: "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);

        };
    };
}

static fu_VEC<s_SolvedNode>& args_Z0zCMB4x(s_SolvedNode& callsite)
{
    return callsite.items;
}

static s_Target& target_Shc80R4A(s_SolvedNode& callsite)
{
    return callsite.target;
}

                                #ifndef DEF_grow_oob_CFyRchApVAd
                                #define DEF_grow_oob_CFyRchApVAd
inline int& grow_oob_CFyRchAp(fu_VEC<int>& a, const int i, const int fill)
{
    int l0 = a.size();
    if ((l0 <= i))
    {
        a.grow((i + 1));
        for (; l0 < i; l0++)
            a.mutref(l0) = int(fill);

    };
    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_if_first_uRy3lRyu3F2
                                #define DEF_if_first_uRy3lRyu3F2
inline const s_Region& if_first_uRy3lRyu(fu::view<s_Region> s)
{
    return s.size() ? s[0] : (*(const s_Region*)fu::NIL);
}
                                #endif

static s_Lifetime Lifetime_unwind_noStatic_GFzyg93P(/*MOV*/ s_Lifetime&& lifetime, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (Region_isStatic_PhGvG2us(if_first_uRy3lRyu(lifetime.uni0n)))
    {
        lifetime.uni0n.shift();
    };
    return Lifetime_unwind_XvP0ZNoq(static_cast<s_Lifetime&&>(lifetime), 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
}

static bool acceptsTempCopies_SPH1KTle(const s_Overload& o, const s_Context& ctx, const s_TokenIdx& _here)
{
    return (o.kind == s_kind_var) && !(o.flags & (s_Flags_F_IMPLICIT | s_Flags_F_REF)) && !is_mutref_8RliRHyJ(o.type, _here, ctx);
}

static bool acceptsSoftRisk_bjbtNxwY(const s_Overload& o, const s_Context& ctx, const s_TokenIdx& _here)
{
    return (o.flags & s_Flags_F_ARG) && !acceptsTempCopies_SPH1KTle(o, ctx, _here);
}

                                #ifndef DEF_grow_if_oob_uUmY5jPsHKc
                                #define DEF_grow_if_oob_uUmY5jPsHKc
inline fu_VEC<int>& grow_if_oob_uUmY5jPs(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_add_JL5WtWNDHc0
                                #define DEF_add_JL5WtWNDHc0
inline bool add_JL5WtWND(fu_VEC<int>& keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_F7KakSWb(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, int(item));
    return true;
}
                                #endif

                                #ifndef DEF_unless_oob_G80Q0fjo3D5
                                #define DEF_unless_oob_G80Q0fjo3D5
inline const fu_VEC<int>& unless_oob_G80Q0fjo(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

static bool RESOLVE_byAAR_QI0FCMaT(const int read, const int write, const bool trySoft, const bool AAR, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (AAR)
    {
        if (read != write)
        {
            if ((!trySoft || !acceptsSoftRisk_bjbtNxwY(GET_ryFyPS6P(nested_MxoYXM2x(read, _current_fnort, module), ctx, module, _here, ss, _helpers, _helpers_data), ctx, _here)) && !add_JL5WtWND(grow_if_oob_uUmY5jPs(_current_fn.flow.at_hard_risk, write), read))
                return true;
            else if (!add_JL5WtWND(grow_if_oob_uUmY5jPs(_current_fn.flow.at_soft_risk, write), read))
                return true;
            else
            {
                const bool firstTry_to_ascendWrites = (write > read);
                for (int i = 0; i < 2; i++)
                {
                    if (!i == firstTry_to_ascendWrites)
                    {
                        fu_VEC<int> parents { unless_oob_G80Q0fjo(_current_fn.flow.arg_parents, write) };
                        if (parents)
                        {
                            for (int i_1 = 0; i_1 < parents.size(); i_1++)
                            {
                                const int parent = parents[i_1];
                                if (parent != read)
                                    RESOLVE_byAAR_QI0FCMaT(read, parent, trySoft, AAR, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);

                            };
                            return true;
                        };
                    }
                    else
                    {
                        fu_VEC<int> parents { unless_oob_G80Q0fjo(_current_fn.flow.arg_parents, read) };
                        if (parents)
                        {
                            for (int i_1 = 0; i_1 < parents.size(); i_1++)
                            {
                                const int parent = parents[i_1];
                                if (parent != write)
                                    RESOLVE_byAAR_QI0FCMaT(parent, write, false, AAR, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);

                            };
                            return true;
                        };
                    };
                };
                return true;
            };
        }
        else
            BUG_k3P6Th3U("RESOLVE_byAAR: read == write"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

    }
    else
    {
        BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
    };
}

static bool softRiskSafe_lnao0wrT(const s_SolvedNode& arg, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return (arg.kind == s_kind_call) && (GET_ryFyPS6P(arg.target, ctx, module, _here, ss, _helpers, _helpers_data).kind == s_kind_var);
}

                                #ifndef DEF_has_inter_xZ6otbRVlq1
                                #define DEF_has_inter_xZ6otbRVlq1
inline bool has_inter_xZ6otbRV(fu::view<int> l, fu::view<int> r)
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
            (void)0;}), static_cast<fu::never&&>(BL_4_v)) : +1) : (r_done ? -1 : x3Cx3E_F7KakSWb(l[li], r[ri])));
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

static bool isInvalidatedBy_HApLcyel(fu::view<s_Region> read, fu::view<s_Region> write, s_CurrentFn& _current_fn)
{
    fu::view<int> read_1 = fu::view_of(read, int{});
    for (int i = 0; i < write.size(); i++)
    {
        const int w = Region_asLocal_l3hJ0imS(write[i]);
        if (w && has_inter_xZ6otbRV(unless_oob_G80Q0fjo(flow_pwnZvy6P(_current_fn).invalidates, w), read_1))
            return true;

    };
    return false;
}

static bool RESOLVE_byMutvar_MU4hNUlf(const int target, const bool AAR, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (AAR)
    {
        BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
    }
    else
    {
        const s_Target t = nested_MxoYXM2x(target, _current_fnort, module);
        s_Overload& o = GET_mut_UTaXftgW(t, module, ss);
        if (!acceptsTempCopies_SPH1KTle(o, ctx, _here))
            return false;
        else if (is_mutref_8RliRHyJ(o.type, _here, ctx))
            BUG_k3P6Th3U(((qWHAT_vXP1PCtb(o, ctx, module, _here, ss, _helpers, _helpers_data) + ": Not F_REF but type.is_mutref"_fu) + " in RESOLVE_byMutvar: is this a problem?"_fu), ctx, module, _here, ss, _helpers, _helpers_data);
        else if (o.kind == s_kind_var)
        {
            if (o.type.lifetime.uni0n.size() == 1)
            {
                if (!is_rx_copy_6qTx5aCK(o.type))
                    return false;
                else
                {
                    if (!(o.flags & s_Flags_F_MUT))
                    {
                        o.flags |= s_Flags_F_MUT;
                        /*MOV*/ s_Type t_let = clear_refs_qNIEFFQB(s_Type(o.type));
                        o.solved.type = static_cast<s_Type&&>(t_let);
                    };
                    return true;
                };
            }
            else
                BUG_k3P6Th3U("RESOLVE_byMutvar: lt.len != 1"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

        }
        else
            BUG_k3P6Th3U("RESOLVE_byMutvar: Not a variable."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

    };
}

static bool RESOLVE_byMutvar_T84dHDE3(const s_Target& target, const bool AAR, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    return (target.modid == -_current_fn.out.target.index) && RESOLVE_byMutvar_MU4hNUlf(target.index, AAR, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
}

static bool acceptsTempCopies_9rkG6uR2(const s_Argument& arg)
{
    return !(arg.flags & (s_Flags_F_IMPLICIT | s_Flags_F_REF));
}

static s_SolvedNode createBool_6L5ZPRxh(const fu_STR& value, const s_Type& type, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if ((value == "true"_fu) || (value == "false"_fu))
    {
        return SolvedNode_ROjBZjUC(s_kind_bool, type, s_Flags{}, value, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    }
    else
    {
        BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
    };
}

static s_SolvedNode createDefinit_zBcvnR2D(s_Type&& type, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (is_ref_qNIEFFQB(type))
    {
        type.lifetime = Lifetime_static_8nlJDPX0();
    };
    if (is_integral_XeFsC3zb(type))
    {
        return SolvedNode_ROjBZjUC(s_kind_int, type, s_Flags{}, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    }
    else if (is_floating_pt_XeFsC3zb(type))
    {
        return SolvedNode_ROjBZjUC(s_kind_real, type, s_Flags{}, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    }
    else if (is_boolean_XeFsC3zb(type))
        return createBool_6L5ZPRxh("false"_fu, type, ctx, module, _here, ss, _helpers, _helpers_data);
    else
    {
        return SolvedNode_ROjBZjUC(s_kind_definit, type, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    };
}

static void definitWrap_tsfNUfhM(s_SolvedNode& node, const s_Type& slot, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (is_mutref_8RliRHyJ(slot, _here, ctx) && CANNOT_definit_mutrefs)
        BUG_k3P6Th3U("Trying to definitWrap a mutref."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
    else if (node.kind == s_kind_definit)
    {
        node.type = (is_ref_qNIEFFQB(slot) ? add_ref_arUcTyoS(clear_refs_qNIEFFQB(s_Type(slot)), Lifetime_static_8nlJDPX0(), _here, ctx) : s_Type(slot));
    }
    else
    {
        node = createBlock_aqSRQpGo(slot, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(node), createDefinit_zBcvnR2D(s_Type(slot), ctx, module, _here, ss, _helpers, _helpers_data) } }, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    };
}

static void maybeCopyOrMove_5KsSrIOT(s_SolvedNode& node, const s_Type& slot, const bool isArgument, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if ((slot.vtype.canon != node.type.vtype.canon) && !is_never_eqpYb5IC(node.type))
    {
        if (is_zeroes_eqpYb5IC(node.type) && !(is_mutref_8RliRHyJ(slot, _here, ctx) && CANNOT_definit_mutrefs))
        {
            definitWrap_tsfNUfhM(node, slot, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            return;
        }
        else
            BUG_k3P6Th3U(((("Considering copy or move for incompatible types: "_fu + humanizeType_3wOVPKQg(slot, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + " <- "_fu) + humanizeType_3wOVPKQg(node.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);

    }
    else if (is_ref_qNIEFFQB(slot))
    {
        if (is_trivial_ChYpFATl(node.type, ctx, module))
        {
            if ((node.kind == s_kind_definit) && isArgument)
                node.type = clear_refs_qNIEFFQB(s_Type(node.type));

        };
        return;
    }
    else if (!is_ref_qNIEFFQB(node.type))
        return;
    else if (node.kind == s_kind_definit)
    {
        node.type = clear_refs_qNIEFFQB(s_Type(node.type));
        return;
    }
    else if (is_zeroes_eqpYb5IC(node.type))
    {
        definitWrap_tsfNUfhM(node, slot, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        return;
    }
    else
    {
        node = SolvedNode_ROjBZjUC(s_kind_copy, clear_refs_qNIEFFQB(s_Type(node.type)), s_Flags{}, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, s_Helpers{}, _here);
    };
}

static bool RESOLVE_byTempCopy_ykbaM5J7(s_SolvedNode& node, const s_Type& slot, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    s_Type slot_1 = make_copyable_qNIEFFQB(clear_refs_qNIEFFQB(s_Type(slot)));
    maybeCopyOrMove_5KsSrIOT(node, slot_1, false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    return true;
}

static bool RESOLVE_byTempCopy_QZxmEVfV(s_SolvedNode& callsite, const int position, const bool AAR, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (AAR)
    {
        BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
    }
    else if (_current_fn.asserts & s_DeclAsserts_A_FAST)
        return false;
    else
    {
        const s_Target& target = callsite.target;
        fu_VEC<s_Argument> host_args { EXT_N3jS4trN(target, ctx, module, ss).args };
        s_Argument host_arg { host_args[position] };
        const s_SolvedNode& arg = callsite.items[position];
        if (!is_rx_copy_6qTx5aCK(arg.type))
            return false;
        else if ((arg.kind == s_kind_call) && RESOLVE_byMutvar_T84dHDE3(arg.target, AAR, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort))
            return true;
        else if (!acceptsTempCopies_9rkG6uR2(host_arg))
            return false;
        else
        {
            const s_Region argLt = Region_fromArgPosition_BLLdCVw1(position);
            const bool isReturned = has_7ZhIVZth(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).type.lifetime.uni0n, argLt);
            if (isReturned)
                return false;
            else
                return RESOLVE_byTempCopy_ykbaM5J7(callsite.items.mutref(position), host_args[position].type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

        };
    };
}

                                #ifndef DEF_DEV_DisableBCK
                                #define DEF_DEV_DisableBCK
inline constexpr unsigned DEV_DisableBCK = (0x1u << 0u);
                                #endif

[[noreturn]] static fu::never AAR_cannotFail_nfzEJrRb(const fu_STR& reason, const bool AAR, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (AAR)
        BUG_k3P6Th3U(("AAR PASS is trying to emit an error:\n\n\t"_fu + reason), ctx, module, _here, ss, _helpers, _helpers_data);
    else
        fail_7KwuQpwr(fu_STR(reason), ctx, module, _here, ss, _helpers, _helpers_data);

}

static void validate_ywA2B97r(const int i1, s_SolvedNode& callsite, fu::view<s_Argument> host_args, fu::view<s_Lifetime> bck_unwound, const int arg_first, const int arg_last, const int i0, const s_Argument& host_arg0, const s_SolvedNode& arg0, const s_Lifetime& shallow0, const s_Lifetime& unwound0, const bool AAR, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const s_Argument& host_arg1 = host_args[i1];
    if (!has_qNZlwBKS(host_arg0.soft_risk, i1) && !has_qNZlwBKS(host_arg1.soft_risk, i0))
        return;
    else
    {
        const s_SolvedNode& arg1 = args_Z0zCMB4x(callsite)[i1];
        const s_Lifetime& shallow1 = arg1.type.lifetime;
        if (AAR)
        {
            if ((i0 >= arg_first) && (i0 <= arg_last) && (i1 >= arg_first) && (i1 <= arg_last))
            {
                for (int r0 = 0; r0 < shallow0.uni0n.size(); r0++)
                {
                    const int region0 = Region_asLocal_l3hJ0imS(shallow0.uni0n[r0]);
                    if (region0)
                    {
                        for (int r1 = 0; r1 < shallow1.uni0n.size(); r1++)
                        {
                            const int region1 = Region_asLocal_l3hJ0imS(shallow1.uni0n[r1]);
                            if (region1 && (region0 != region1))
                            {
                                if (is_mutref_8RliRHyJ(host_arg0.type, _here, ctx))
                                    RESOLVE_byAAR_QI0FCMaT(region1, region0, !has_qNZlwBKS(host_arg0.hard_risk, i1), AAR, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);

                                if (is_mutref_8RliRHyJ(host_arg1.type, _here, ctx))
                                    RESOLVE_byAAR_QI0FCMaT(region0, region1, !has_qNZlwBKS(host_arg1.hard_risk, i0), AAR, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);

                            };
                        };
                    };
                };
            };
            return;
        }
        else
        {
            const s_Lifetime& unwound1 = bck_unwound[i1];
            s_Lifetime inter = Lifetime_inter_7b6lMejl(unwound0, unwound1);
            if (!inter)
                return;
            else
            {
                if (!has_qNZlwBKS(host_arg0.hard_risk, i1) && !has_qNZlwBKS(host_arg1.hard_risk, i0))
                {
                    if ((!has_qNZlwBKS(host_arg0.soft_risk, i1) || (softRiskSafe_lnao0wrT(arg1, ctx, module, _here, ss, _helpers, _helpers_data) && !isInvalidatedBy_HApLcyel(shallow1.uni0n, shallow0.uni0n, _current_fn))) && (!has_qNZlwBKS(host_arg1.soft_risk, i0) || (softRiskSafe_lnao0wrT(arg0, ctx, module, _here, ss, _helpers, _helpers_data) && !isInvalidatedBy_HApLcyel(shallow0.uni0n, shallow1.uni0n, _current_fn))))
                        return makeNote_jjqaKIrz(s_SolverNotes_N_BckSoftRisk, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);

                };

                {
                    int which = -1;
                    if (!is_mutref_8RliRHyJ(host_arg0.type, _here, ctx))
                        which = i0;
                    else if (!is_mutref_8RliRHyJ(host_arg1.type, _here, ctx))
                        which = i1;

                    if ((which >= 0))
                    {
                        if (RESOLVE_byTempCopy_QZxmEVfV(callsite, which, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort))
                            return;

                    };
                };
                if (!(options.dev & DEV_DisableBCK))
                {
                    fu_STR err = qWHAT_vXP1PCtb(GET_ryFyPS6P(target_Shc80R4A(callsite), ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data);
                    err += (((host_args.size() == 2) && (GET_ryFyPS6P(target_Shc80R4A(callsite), ctx, module, _here, ss, _helpers, _helpers_data).flags & s_Flags_F_OPERATOR)) ? ": Both operands alias:\n"_fu : (x7E_sTZRmMq1((x7E_sTZRmMq1(((((": Arguments "_fu + qBAD_9QQZAztz(human_yoPbxz1W(host_arg0.name, ctx, module, _here, ss, _helpers, _helpers_data))) + " and "_fu) + qBAD_9QQZAztz(human_yoPbxz1W(host_arg1.name, ctx, module, _here, ss, _helpers, _helpers_data))) + " (args #"_fu), fu::i64dec(i0)) + " and #"_fu), fu::i64dec(i1)) + ") both alias:\n"_fu));
                    for (int i = 0; i < inter.uni0n.size(); i++)
                    {
                        const s_Region& o = inter.uni0n[i];
                        err += "\n                "_fu;
                        err += qWHAT_vXP1PCtb(Region_GET_DezSnHcm(o, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort), ctx, module, _here, ss, _helpers, _helpers_data);
                    };
                    _here = args_Z0zCMB4x(callsite)[i0].token;
                    AAR_cannotFail_nfzEJrRb(err, AAR, ctx, module, _here, ss, _helpers, _helpers_data);
                };
            };
        };
    };
}

                                #ifndef DEF_add_2SzeI4uvWNj
                                #define DEF_add_2SzeI4uvWNj
inline void add_2SzeI4uv(fu_VEC<s_Region>& a, fu::view<s_Region> b, fu_VEC<int>& extras, const int extra)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        const int cmp = x3Cx3E_A8tRjjUd(X, Y);
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

static s_Events& events_R3ChqXG8(s_CurrentFn& _current_fn)
{
    return _current_fn.events;
}

                                #ifndef DEF_unless_oob_VvRm5CCbJX1
                                #define DEF_unless_oob_VvRm5CCbJX1
inline const s_ReadID& unless_oob_VvRm5CCb(fu::view<s_ReadID> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_ReadID*)fu::NIL);
}
                                #endif

static fu_STR bck_name_jXNrbU03(const int target, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    return human_yoPbxz1W(GET_ryFyPS6P(nested_MxoYXM2x(target, _current_fnort, module), ctx, module, _here, ss, _helpers, _helpers_data).name, ctx, module, _here, ss, _helpers, _helpers_data);
}

inline static s_SolvedNode TODO_FIX_pop_hKtUzNHr(fu_VEC<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

inline static void SLOW_traverse_H7JeRls0(const s_SolvedNode& node, s_SolvedNode& result, const s_ReadID& read, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    fu_VEC<s_SolvedNode> stack = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
    while (stack)
    {
        s_SolvedNode node_1 = TODO_FIX_pop_hKtUzNHr(stack);
        const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_crossmodule_kJfGN2ff(node_1.target, _current_fnort, ctx, module, _here, ss, _helpers, _helpers_data).solved : node_1);
        if ((node_2.rwr.reads0 < read.id) && (node_2.rwr.reads1 >= read.id))
            result = node_2;

        for (int i = node_2.items.size(); i-- > 0; )
            stack += s_SolvedNode(node_2.items[i]);

    };
}

inline static s_SolvedNode SLOW_find_bPToG6o4(const s_ReadID& read, const s_SolvedNode& root, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ s_SolvedNode result {};
    SLOW_traverse_H7JeRls0(root, result, read, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
    return /*NRVO*/ result;
}

static s_SolvedNode SLOW_findByReadID_IJukxgfC(const s_ReadID& read, const s_SolvedNode& root, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    return SLOW_find_bPToG6o4(read, root, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
}

static int position_9nzaia2T(fu::view<int> positions, const int i)
{
    return positions[i];
}

                                #ifndef DEF_grow_if_oob_vUYd8LWbNz3
                                #define DEF_grow_if_oob_vUYd8LWbNz3
inline fu_VEC<s_WriteID>& grow_if_oob_vUYd8LWb(fu_VEC<fu_VEC<s_WriteID>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static const bool OPTI_bck = true;

                                #ifndef DEF_each_Ri0Gt85BM7a
                                #define DEF_each_Ri0Gt85BM7a
inline void each_Ri0Gt85B(fu::view<int> a, s_CurrentFn& _current_fn)
{
    for (int i = 0; i < a.size(); i++)
        tagWritten_q7B4lKVN(a[i], _current_fn);

}
                                #endif

static void tagWritten_q7B4lKVN(const int target, s_CurrentFn& _current_fn)
{
    if (add_once_uczByTOp(events_R3ChqXG8(_current_fn).ever_written, target))
        each_Ri0Gt85B(fu_VEC<int>(unless_oob_G80Q0fjo(flow_pwnZvy6P(_current_fn).parents, target)), _current_fn);

}

static void bck_trackWrites_tN13RkPL(const s_SolvedNode& callsite, fu::view<s_Region> regions, const fu_VEC<int>& positions, const s_SolvedNode& root, const bool AAR, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    _here = callsite.token;
    const int loop_start = (callsite._loop_start ? callsite._loop_start : BUG_k3P6Th3U("bck_trackWrites: _loop_start not set on callsite."_fu, ctx, module, _here, ss, _helpers, _helpers_data));
    const bool OPTI_isLoop = ((loop_start != 1) && (events_R3ChqXG8(_current_fn).used_in_a_loop.size() > 0));
    for (int i = 0; i < regions.size(); i++)
    {
        const int target = Region_asLocal_l3hJ0imS(regions[i]);
        if (!target)
            continue;
        else
        {
            fu_VEC<int> invalidates { unless_oob_G80Q0fjo(flow_pwnZvy6P(_current_fn).invalidates, target) };
            if (SELF_TEST && has_Q09HnW0u(invalidates, target))
                BUG_k3P6Th3U(("flow.invalidates[target].has(target): "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(nested_MxoYXM2x(target, _current_fnort, module), ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
            else
            {
                if (OPTI_isLoop)
                {
                    for (int i_1 = 0; i_1 < invalidates.size(); i_1++)
                    {
                        const int read = invalidates[i_1];
                        if (read < loop_start)
                        {
                            const s_ReadID& readID = unless_oob_VvRm5CCb(events_R3ChqXG8(_current_fn).used_in_a_loop, read);
                            if (readID)
                            {
                                if (AAR)
                                    RESOLVE_byAAR_QI0FCMaT(read, target, true, AAR, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
                                else
                                {
                                    if (!(RESOLVE_byMutvar_MU4hNUlf(read, AAR, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)))
                                    {
                                        AAR_cannotFail_nfzEJrRb(((((((((("Write to "_fu + qBAD_9QQZAztz(bck_name_jXNrbU03(target, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort))) + " at call to "_fu) + qWHAT_vXP1PCtb(GET_ryFyPS6P(callsite.target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)) + " invalidates the use of "_fu) + qBAD_9QQZAztz(bck_name_jXNrbU03(read, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort))) + " at "_fu) + addr_and_snippet_RndVcMkU(SLOW_findByReadID_IJukxgfC(readID, root, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort).token, ctx, module)) + "\n\t... on next loop iteration.\n\n\tWritten"_fu) + (positions ? qSTACK_dA3d9OVg(callsite.target, position_9nzaia2T(positions, i), fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data) : fu_STR{})), AAR, ctx, module, _here, ss, _helpers, _helpers_data);
                                    };
                                };
                            };
                        };
                    };
                };
                events_R3ChqXG8(_current_fn).writes += s_RWEvent { int(target) };
                const s_WriteID writeID = s_WriteID { events_R3ChqXG8(_current_fn).writes.size() };
                for (int i_1 = 0; i_1 < invalidates.size(); i_1++)
                {
                    fu_VEC<s_WriteID>& set = grow_if_oob_vUYd8LWb(events_R3ChqXG8(_current_fn).snap.invalidated_by, invalidates[i_1]);
                    if (!OPTI_bck || AAR || !set)
                        set += s_WriteID(writeID);

                };
                tagWritten_q7B4lKVN(target, _current_fn);
            };
        };
    };
}

static s_RWEvent& RWEvent_Ra37MCJR(const s_WriteID& write, s_CurrentFn& _current_fn)
{
    return _current_fn.events.writes.mutref((write.id - 1));
}

                                #ifndef DEF_add_VmCG8c1Lcsb
                                #define DEF_add_VmCG8c1Lcsb
inline void add_VmCG8c1L(fu_VEC<s_Region>& a, fu::view<s_Region> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        const int cmp = x3Cx3E_A8tRjjUd(X, Y);
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

                                #ifndef DEF_has_inter_Jwtzi64tmQb
                                #define DEF_has_inter_Jwtzi64tmQb
inline bool has_inter_Jwtzi64t(fu::view<s_Region> l, fu::view<s_Region> r)
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
            (void)0;}), static_cast<fu::never&&>(BL_4_v)) : +1) : (r_done ? -1 : x3Cx3E_A8tRjjUd(l[li], r[ri])));
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

inline static void merge_9YdUzQta(fu::view<s_Region> l, fu::view<s_Region> r, const fu_VEC<s_Region>& l_1, fu_VEC<s_Region>& result, bool& useResult)
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
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : +1) : (r_done ? -1 : x3Cx3E_A8tRjjUd(l[li], r[ri])));
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

                                #ifndef DEF_inter_vO5wFRsv73g
                                #define DEF_inter_vO5wFRsv73g
inline fu_VEC<s_Region> inter_vO5wFRsv(const fu_VEC<s_Region>& l, const fu_VEC<s_Region>& r)
{
    if (r.size() < l.size())
        return inter_vO5wFRsv(r, l);
    else
    {
        /*MOV*/ fu_VEC<s_Region> result {};
        bool useResult = false;
        merge_9YdUzQta(l, r, l, result, useResult);
        if (useResult)
            return /*NRVO*/ result;
        else
            return fu_VEC<s_Region>(l);

    };
}
                                #endif

static bool RESOLVE_byAAR_oI6WQYaN(const int write, fu::view<s_Region> reads, const bool trySoft, const bool AAR, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    for (int r = 0; r < reads.size(); r++)
    {
        const int read = Region_asLocal_l3hJ0imS(reads[r]);
        if (read && (read != write))
            RESOLVE_byAAR_QI0FCMaT(read, write, trySoft, AAR, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);

    };
    return true;
}

                                #ifndef DEF_first_uRy3lRyu3F2
                                #define DEF_first_uRy3lRyu3F2
inline const s_Region& first_uRy3lRyu(fu::view<s_Region> s)
{
    if (s.size())
        return s[0];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_L8cAnJC8(fu_VEC<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

inline static void SLOW_traverse_WqtT7Hpc(const s_SolvedNode& node, s_SolvedNode& result, const s_WriteID& write, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    fu_VEC<s_SolvedNode> stack = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
    while (stack)
    {
        s_SolvedNode node_1 = TODO_FIX_pop_L8cAnJC8(stack);
        const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_crossmodule_kJfGN2ff(node_1.target, _current_fnort, ctx, module, _here, ss, _helpers, _helpers_data).solved : node_1);
        if ((node_2.rwr.writes0 < write.id) && (node_2.rwr.writes1 >= write.id))
            result = node_2;

        for (int i = node_2.items.size(); i-- > 0; )
            stack += s_SolvedNode(node_2.items[i]);

    };
}

inline static s_SolvedNode SLOW_find_P6o1HbDl(const s_WriteID& write, const s_SolvedNode& root, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ s_SolvedNode result {};
    SLOW_traverse_WqtT7Hpc(root, result, write, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
    return /*NRVO*/ result;
}

static s_SolvedNode SLOW_findByWriteID_cmeb1lnD(const s_WriteID& write, const s_SolvedNode& root, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    return SLOW_find_P6o1HbDl(write, root, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
}

static fu_STR RWEvent_stack_bvpJFUge(const s_WriteID& write, const s_SolvedNode& root, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    s_SolvedNode node = SLOW_findByWriteID_cmeb1lnD(write, root, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
    if (node.kind != s_kind_call)
        return "\n\tVia "_fu + qKW_9QQZAztz(str_v3b7EcLt(node.kind));
    else
    {
        fu_STR stack {};

        {
            const fu_VEC<s_Region>& uni0n = GET_ryFyPS6P(nested_MxoYXM2x(RWEvent_Ra37MCJR(write, _current_fn).rw_target, _current_fnort, module), ctx, module, _here, ss, _helpers, _helpers_data).type.lifetime.uni0n;
            if (uni0n)
            {
                for (int i = 0; i < node.items.size(); i++)
                {
                    const s_SolvedNode& arg = node.items[i];
                    if (inter_vO5wFRsv(arg.type.lifetime.uni0n, uni0n))
                    {
                        const s_Argument& host_arg = EXT_N3jS4trN(node.target, ctx, module, ss).args[i];
                        if (host_arg.flags & s_Flags_F_WRITTEN_TO)
                        {
                            stack = qSTACK_dA3d9OVg(node.target, i, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data);
                            break;
                        };
                    };
                };
            };
        };
        const s_Overload& o = GET_ryFyPS6P(node.target, ctx, module, _here, ss, _helpers, _helpers_data);
        return ((addr_and_snippet_RndVcMkU(node.token, ctx, module) + "\n\tAt call to "_fu) + qID_9QQZAztz(o.name)) + stack;
    };
}

static bool RESOLVE_byAAR_HrKpwu2v(fu::view<s_WriteID> writes, const int read, const bool trySoft, const bool AAR, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    for (int i = 0; i < writes.size(); i++)
    {
        int _0 {};
        (_0 = int(RWEvent_Ra37MCJR(writes[i], _current_fn).rw_target), RESOLVE_byAAR_QI0FCMaT(read, int(_0), trySoft, AAR, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort));
    };
    return true;
}

                                #ifndef DEF_first_HEWnnNHYUO3
                                #define DEF_first_HEWnnNHYUO3
inline const s_WriteID& first_HEWnnNHY(fu::view<s_WriteID> s)
{
    if (s.size())
        return s[0];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_grow_if_oob_ksvIughMkM3
                                #define DEF_grow_if_oob_ksvIughMkM3
inline s_ReadID& grow_if_oob_ksvIughM(fu_VEC<s_ReadID>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void bck_trackRead_RaXO9KAm(const s_SolvedNode& callsite, const s_SolvedNode& root, const bool AAR, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (!is_ref_qNIEFFQB(callsite.type) || !_current_fn.out.target.index)
        return;
    else
    {
        _here = callsite.token;
        fu::view<s_Region> regions = callsite.type.lifetime.uni0n;
        const int loop_start = (callsite._loop_start ? callsite._loop_start : BUG_k3P6Th3U("bck_trackRead: loop_start not set on callsite."_fu, ctx, module, _here, ss, _helpers, _helpers_data));
        for (int i = 0; i < regions.size(); i++)
        {
            const int target = Region_asLocal_l3hJ0imS(regions[i]);
            if (!target)
                continue;
            else
            {
                if (events_R3ChqXG8(_current_fn).snap.invalidated_by.size() > target)
                {
                    fu_VEC<s_WriteID> u { events_R3ChqXG8(_current_fn).snap.invalidated_by[target] };
                    if (u)
                    {
                        if ((AAR ? !RESOLVE_byAAR_HrKpwu2v(u, target, true, AAR, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort) : !RESOLVE_byMutvar_MU4hNUlf(target, AAR, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)))
                        {
                            fu_STR _0 {};
                            fu_STR _1 {};
                            AAR_cannotFail_nfzEJrRb((_1 = ((_0 = (((("Cannot access"_fu + " "_fu) + qBAD_9QQZAztz(bck_name_jXNrbU03(target, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort))) + ", reference invalidated by write to"_fu) + " "_fu), (static_cast<fu_STR&&>(_0) + qBAD_9QQZAztz(bck_name_jXNrbU03(RWEvent_Ra37MCJR(first_HEWnnNHY(u), _current_fn).rw_target, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)))) + " at "_fu), (static_cast<fu_STR&&>(_1) + RWEvent_stack_bvpJFUge(first_HEWnnNHY(u), root, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort))), AAR, ctx, module, _here, ss, _helpers, _helpers_data);
                        }
                        else if (OPTI_bck)
                        {
                            events_R3ChqXG8(_current_fn).snap.invalidated_by.mutref(target) = fu_VEC<s_WriteID>{};
                        };
                    };
                };
                events_R3ChqXG8(_current_fn).reads += s_RWEvent { int(target) };
                const s_ReadID readID = s_ReadID { events_R3ChqXG8(_current_fn).reads.size() };
                if (loop_start && (target < loop_start))
                {
                    s_ReadID& a = grow_if_oob_ksvIughM(events_R3ChqXG8(_current_fn).used_in_a_loop, target);
                    if (!(a))
                        a = readID;

                };
            };
        };
    };
}

static void bck_call_fydOyeGf(s_SolvedNode& callsite, const s_SolvedNode& root, const bool AAR, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (args_Z0zCMB4x(callsite))
    {
        fu_VEC<s_Argument> host_args { EXT_N3jS4trN(target_Shc80R4A(callsite), ctx, module, ss).args };
        const int ooe_read0 = _current_fn.events.reads.size();
        const int ooe_write0 = _current_fn.events.writes.size();
        fu_VEC<int> ooe_reads {};
        fu_VEC<int> ooe_writes {};
        const bool ooe_isRTL = isRTL_z4z9gRua(GET_ryFyPS6P(target_Shc80R4A(callsite), ctx, module, _here, ss, _helpers, _helpers_data));
        const bool ooe_isUndef = !ooe_isRTL;
        const int ooe_START = (ooe_isRTL ? (args_Z0zCMB4x(callsite).size() - 1) : 0);

        {
            int ooe_read0_1 = ooe_read0;
            int ooe_write0_1 = ooe_write0;
            for (int ooe_i = 0; ooe_i < args_Z0zCMB4x(callsite).size(); ooe_i++)
            {
                bck_node_Y93vGEuW(args_Z0zCMB4x(callsite).mutref((ooe_isRTL ? (ooe_START - ooe_i) : int(ooe_i))), root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                const int r1 = _current_fn.events.reads.size();
                const int w1 = _current_fn.events.writes.size();
                if (r1 > ooe_read0_1)
                    grow_oob_CFyRchAp(ooe_reads, ooe_i, ooe_read0_1) = int(r1);

                if (w1 > ooe_write0_1)
                    grow_oob_CFyRchAp(ooe_writes, ooe_i, ooe_write0_1) = int(w1);

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
        for (int i0 = 0; i0 < args_Z0zCMB4x(callsite).size(); i0++)
        {
            s_Argument host_arg0 { host_args[i0] };
            s_Type expect { host_arg0.type };
            if (is_ref_qNIEFFQB(expect))
            {
                if (!bck_unwound)
                {
                    if ((mutref_first >= 0) || ((ref_first >= 0) && is_mutref_8RliRHyJ(expect, _here, ctx)))
                    {
                        bck_unwound.resize(args_Z0zCMB4x(callsite).size());
                        for (int i0_1 = ref_first; (i0_1 <= ref_last); i0_1++)
                        {
                            const s_Lifetime& unwound = (bck_unwound.mutref(i0_1) = Lifetime_unwind_noStatic_GFzyg93P(s_Lifetime(args_Z0zCMB4x(callsite)[i0_1].type.lifetime), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort));
                            for (int i = 0; i < unwound.uni0n.size(); i++)
                            {
                                if (Region_asLocal_l3hJ0imS(unwound.uni0n[i]))
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
                    s_SolvedNode arg0 { args_Z0zCMB4x(callsite)[i0] };
                    s_Lifetime shallow0 { arg0.type.lifetime };
                    const s_Lifetime& unwound0 = (bck_unwound.mutref(i0) = Lifetime_unwind_noStatic_GFzyg93P(s_Lifetime(shallow0), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort));
                    for (int i = 0; i < unwound0.uni0n.size(); i++)
                    {
                        if (Region_asLocal_l3hJ0imS(unwound0.uni0n[i]))
                        {
                            arg_first = ((arg_first < 0) ? i0 : arg_first);
                            arg_last = i0;
                            continue;
                        };
                    };
                    if (is_mutref_8RliRHyJ(expect, _here, ctx))
                    {
                        for (int i_1 = ref_first; (i_1 <= ref_last); i_1++)
                        {
                            if (is_ref_qNIEFFQB(host_args[i_1].type))
                                validate_ywA2B97r(i_1, callsite, host_args, bck_unwound, arg_first, arg_last, i0, host_arg0, arg0, shallow0, unwound0, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

                        };
                    }
                    else
                    {
                        for (int i_1 = mutref_first; (i_1 <= mutref_last); i_1++)
                        {
                            if (is_mutref_8RliRHyJ(host_args[i_1].type, _here, ctx))
                                validate_ywA2B97r(i_1, callsite, host_args, bck_unwound, arg_first, arg_last, i0, host_arg0, arg0, shallow0, unwound0, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

                        };
                    };
                };

                {
                    if (ref_first < 0)
                        ref_first = i0;

                    ref_last = i0;
                };
                if (is_mutref_8RliRHyJ(expect, _here, ctx))
                {
                    if (mutref_first < 0)
                        mutref_first = i0;

                    mutref_last = i0;
                    if (host_arg0.flags & s_Flags_F_WRITTEN_TO)
                    {
                        const s_SolvedNode& arg0 = args_Z0zCMB4x(callsite)[i0];
                        if (is_mutref_8RliRHyJ(host_arg0.type, _here, ctx))
                        {
                            if (is_mutref_8RliRHyJ(arg0.type, _here, ctx))
                            {
                                add_2SzeI4uv(bck_writes, arg0.type.lifetime.uni0n, bck_positions, i0);
                            }
                            else
                                BUG_k3P6Th3U((qID_9QQZAztz(human_yoPbxz1W(host_arg0.name, ctx, module, _here, ss, _helpers, _helpers_data)) + ": host_arg0.written but !arg.is_mutref"_fu), ctx, module, _here, ss, _helpers, _helpers_data);

                        }
                        else
                            BUG_k3P6Th3U((qID_9QQZAztz(human_yoPbxz1W(host_arg0.name, ctx, module, _here, ss, _helpers, _helpers_data)) + ": host_arg0.written but !host_arg0.is_mutref"_fu), ctx, module, _here, ss, _helpers, _helpers_data);

                    };
                };
            };
        };
        if (bck_writes)
        {
            if (bck_positions.size() == bck_writes.size())
                bck_trackWrites_tN13RkPL(callsite, bck_writes, bck_positions, root, AAR, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
            else
                BUG_k3P6Th3U("bck_position.len is off"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

        };
        int MUSTSEQ_mask = 0;

        {
            int ooe_write0_1 = ooe_write0;
            for (int ooe_iw = 0; ooe_iw < ooe_writes.size(); ooe_iw++)
            {
                const int ooe_write1 = ooe_writes[ooe_iw];
                if (ooe_write1 == ooe_write0_1)
                    continue;
                else
                {
                    for (int w = ooe_write0_1; w < ooe_write1; w++)
                    {
                        const s_WriteID writeID = s_WriteID { (w + 1) };
                        const int write = RWEvent_Ra37MCJR(writeID, _current_fn).rw_target;
                        const bool iw_evalsFirst = (ooe_iw == 0);
                        fu_VEC<s_Region> just_the_write = fu_VEC<s_Region> { fu::slate<1, s_Region> { Region_fromLocal_eorXYpEE(write) } };
                        fu_VEC<s_Region> written_and_invalidated {};
                        if (!iw_evalsFirst)
                        {
                            written_and_invalidated = just_the_write;
                            fu::view<int> invalidates = unless_oob_G80Q0fjo(flow_pwnZvy6P(_current_fn).invalidates, write);
                            add_VmCG8c1L(written_and_invalidated, fu::view_of(invalidates, s_Region{}));
                        };
                        int ooe_read0_1 = ooe_read0;
                        for (int ooe_ir = 0; ooe_ir < ooe_reads.size(); ooe_ir++)
                        {
                            const int ooe_read1 = ooe_reads[ooe_ir];
                            if (ooe_ir != ooe_iw)
                            {
                                const bool ooe_ir_evalsBefore_iw = (ooe_ir < ooe_iw);
                                const fu_VEC<s_Region>& written = (ooe_ir_evalsBefore_iw ? written_and_invalidated : just_the_write);
                                if (written)
                                {
                                    for (int r = ooe_read0_1; r < ooe_read1; r++)
                                    {
                                        const s_RWEvent& read = _current_fn.events.reads[r];
                                        fu::view<s_Region> regions = GET_ryFyPS6P(nested_MxoYXM2x(read.rw_target, _current_fnort, module), ctx, module, _here, ss, _helpers, _helpers_data).type.lifetime.uni0n;
                                        if (!has_inter_Jwtzi64t(regions, written))
                                            continue;
                                        else
                                        {
                                            const int r_1 = (ooe_isRTL ? (ooe_START - ooe_ir) : int(ooe_ir));
                                            const int w_1 = (ooe_isRTL ? (ooe_START - ooe_iw) : int(ooe_iw));
                                            if (ooe_ir_evalsBefore_iw)
                                            {
                                                s_SolvedNode arg { args_Z0zCMB4x(callsite)[r_1] };
                                                const fu_VEC<s_Region>& bound = arg.type.lifetime.uni0n;
                                                fu_VEC<s_Region> inter = inter_vO5wFRsv(bound, written);
                                                if (inter)
                                                {
                                                    if ((AAR ? !RESOLVE_byAAR_oI6WQYaN(write, inter, true, AAR, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort) : !RESOLVE_byTempCopy_QZxmEVfV(callsite, r_1, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort)))
                                                    {
                                                        _here = callsite.token;
                                                        fu_STR _0 {};
                                                        AAR_cannotFail_nfzEJrRb((_0 = (x7E_sTZRmMq1((((((((x7E_sTZRmMq1((((("At call to "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(target_Shc80R4A(callsite), ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)) + ", argument binding "_fu) + qBAD_9QQZAztz(human_yoPbxz1W(host_args[r_1].name, ctx, module, _here, ss, _helpers, _helpers_data))) + " (arg #"_fu), fu::i64dec(r_1)) + ") at "_fu) + addr_and_snippet_RndVcMkU(arg.token, ctx, module)) + "\n\t... invalidated by subsequent write to "_fu) + qWHAT_vXP1PCtb(Region_GET_DezSnHcm(first_uRy3lRyu(just_the_write), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort), ctx, module, _here, ss, _helpers, _helpers_data)) + " upon evaluation of argument "_fu) + qBAD_9QQZAztz(human_yoPbxz1W(host_args[w_1].name, ctx, module, _here, ss, _helpers, _helpers_data))) + " (arg #"_fu), fu::i64dec(w_1)) + ") at "_fu), (static_cast<fu_STR&&>(_0) + RWEvent_stack_bvpJFUge(writeID, root, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort))), AAR, ctx, module, _here, ss, _helpers, _helpers_data);
                                                    };
                                                };
                                            };
                                            if (ooe_isUndef)
                                            {
                                                const int mustSeq = (ooe_ir_evalsBefore_iw ? r_1 : w_1);
                                                MUSTSEQ_mask |= (1 << (mustSeq & 31));
                                                makeNote_jjqaKIrz(s_SolverNotes_N_BckMustSeq, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                                            };
                                            break;
                                        };
                                    };
                                }
                                else
                                {
                                    BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
                                };
                            };
                            ooe_read0_1 = ooe_read1;
                        };
                    };
                    ooe_write0_1 = ooe_write1;
                };
            };
        };
        s_Helpers& helpers = callsite.helpers;
        if (!helpers || AAR)
        {
            helpers = s_Helpers { (MUSTSEQ_mask | helpers.index) };
        }
        else
            BUG_k3P6Th3U("MUSTSEQ_mask: helpers already contain something"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

    }
    else if (GET_ryFyPS6P(target_Shc80R4A(callsite), ctx, module, _here, ss, _helpers, _helpers_data).kind == s_kind_var)
        bck_trackRead_RaXO9KAm(callsite, root, AAR, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);

}

static void bck_loop_pT2GPvNl(s_SolvedNode& node, const s_SolvedNode& root, const bool AAR, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    bck_node_Y93vGEuW(items.mutref(0), root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    /*MOV*/ fu_VEC<s_ReadID> events0 { _current_fn.events.used_in_a_loop };
    fu_DEFER(_current_fn.events.used_in_a_loop = static_cast<fu_VEC<s_ReadID>&&>(events0));
    for (int i = 1; i < items.size(); i++)
        bck_node_Y93vGEuW(items.mutref(i), root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

}

static void bck_nodes_LpZKzQ8r(fu::view_mut<s_SolvedNode> items, const s_SolvedNode& root, const bool AAR, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    for (int i = 0; i < items.size(); i++)
        bck_node_Y93vGEuW(items.mutref(i), root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

}

                                #ifndef DEF_unless_oob_xHQlvLe09e4
                                #define DEF_unless_oob_xHQlvLe09e4
inline const fu_VEC<s_WriteID>& unless_oob_xHQlvLe0(fu::view<fu_VEC<s_WriteID>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<s_WriteID>*)fu::NIL);
}
                                #endif

static void bck_trackInit_PcntqWUs(const s_Target& target, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const int index = target.index;
    if (!index)
        return;
    else if (unless_oob_xHQlvLe0(events_R3ChqXG8(_current_fn).snap.invalidated_by, index))
    {
        BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
    };
}

static void bck_let_kMDrwSBm(s_SolvedNode& node, const s_SolvedNode& root, const bool AAR, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    bck_nodes_LpZKzQ8r(node.items, root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    if (is_ref_qNIEFFQB(node.type))
    {
        if (node.flags & s_Flags_F_ARG)
            BUG_k3P6Th3U("bck_let: Found an argument!"_fu, ctx, module, _here, ss, _helpers, _helpers_data);
        else
        {
            const s_SolvedNode& init = node.items[LET_INIT];
            if (is_ref_qNIEFFQB(init.type))
            {
                Reference_trackLocalRef_OWgrWecA(_current_fn.flow, node.target.index, init.type.lifetime);
            }
            else
                BUG_k3P6Th3U("What!"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

        };
    };
    bck_trackInit_PcntqWUs(node.target, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data);
}

                                #ifndef DEF_x3Cx3E_63IGFcZOdL7
                                #define DEF_x3Cx3E_63IGFcZOdL7
inline int x3Cx3E_63IGFcZO(const s_WriteID& a, const s_WriteID& b)
{

    {
        const int cmp = x3Cx3E_F7KakSWb(a.id, b.id);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_add_fuuBedzkAL1
                                #define DEF_add_fuuBedzkAL1
inline void add_fuuBedzk(fu_VEC<s_WriteID>& a, fu::view<s_WriteID> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_WriteID& X = a[x];
        const s_WriteID& Y = b[y];
        const int cmp = x3Cx3E_63IGFcZO(X, Y);
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

inline static void Events_merge_y6dpQBAP(fu_VEC<fu_VEC<s_WriteID>>& dest, fu::view<fu_VEC<s_WriteID>> src)
{
    if (dest.size() < src.size())
        dest.grow(src.size());

    for (int i = 0; i < src.size(); i++)
    {
        const fu_VEC<s_WriteID>& src_1 = src[i];
        if (src_1)
            add_fuuBedzk(dest.mutref(i), src_1);

    };
}

static void Events_merge_ReTSShes(s_Events& events, const s_EventsSnap& snap)
{
    Events_merge_y6dpQBAP(events.snap.invalidated_by, snap.invalidated_by);
}

static void bck_if_fkXXoPWM(s_SolvedNode& node, const s_SolvedNode& root, const bool AAR, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    bck_node_Y93vGEuW(items.mutref(0), root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    /*MOV*/ s_EventsSnap e_Restore_AfterCond { _current_fn.events.snap };
    bck_node_Y93vGEuW(items.mutref(1), root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    s_EventsSnap e_Merge_AfterCons { _current_fn.events.snap };
    _current_fn.events.snap = static_cast<s_EventsSnap&&>(e_Restore_AfterCond);
    bck_node_Y93vGEuW(items.mutref(2), root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    Events_merge_ReTSShes(_current_fn.events, e_Merge_AfterCons);
}

static void bck_block_JMN0nfeT(s_SolvedNode& node, const s_SolvedNode& root, const bool AAR, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    fu_VEC<s_SolvedNode> defers {};
    fu::view_mut<s_SolvedNode> items = node.items;
    for (int i = 0; i < items.size(); i++)
    {
        s_SolvedNode& node_1 = items.mutref(i);
        if (node_1.kind == s_kind_defer)
            defers += s_SolvedNode(only_7ZMqiNoZ(node_1.items));
        else
            bck_node_Y93vGEuW(node_1, root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

    };
    for (int i_1 = defers.size(); i_1-- > 0; )
        bck_node_Y93vGEuW(defers.mutref(i_1), root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

}

static void bck_node_Y93vGEuW(s_SolvedNode& node, const s_SolvedNode& root, const bool AAR, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const s_kind k = node.kind;
    s_RWRanges rwr {};
    rwr.reads0 = _current_fn.events.reads.size();
    rwr.writes0 = _current_fn.events.writes.size();
    if (k == s_kind_call)
        bck_call_fydOyeGf(node, root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_loop)
        bck_loop_pT2GPvNl(node, root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_letdef)
    {
        std::swap(GET_mut_UTaXftgW(node.target, module, ss).solved, node);
        bck_node_Y93vGEuW(node, root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        std::swap(GET_mut_UTaXftgW(node.target, module, ss).solved, node);
    }
    else if (k == s_kind_let)
        bck_let_kMDrwSBm(node, root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_if)
    {
        bck_if_fkXXoPWM(node, root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    }
    else if (k == s_kind_block)
        bck_block_JMN0nfeT(node, root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if ((k == s_kind_root) || (k == s_kind_and) || (k == s_kind_or) || (k == s_kind_not) || (k == s_kind_jump) || (k == s_kind_try) || (k == s_kind_copy) || (k == s_kind_move) || (k == s_kind_arrlit))
        bck_nodes_LpZKzQ8r(node.items, root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_pragma)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (is_mutref_8RliRHyJ(item.type, _here, ctx))
            {
                bck_trackWrites_tN13RkPL(item, item.type.lifetime.uni0n, (*(const fu_VEC<int>*)fu::NIL), root, AAR, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
            };
        };
    }
    else if (node.items)
        AAR_cannotFail_nfzEJrRb((x7E_sTZRmMq1("TODO: bck_node(non-empty "_fu, str_v3b7EcLt(k)) + ")."_fu), AAR, ctx, module, _here, ss, _helpers, _helpers_data);

    rwr.reads1 = _current_fn.events.reads.size();
    rwr.writes1 = _current_fn.events.writes.size();
    if ((rwr.reads1 > rwr.reads0) || (rwr.writes1 > rwr.writes0))
        node.rwr = rwr;

}

inline static void _current_fn_eachArg_FWD_22dg3efq(fu_VEC<int>& consts, fu_VEC<int>& refs, bool& outOfOrderArgTargets, int& last, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = _current_fn.out.items[i].target;
        if (t && (GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).flags & s_Flags_F_ARG))
        {
            if (t.modid == -_current_fn.out.target.index)
            {
                const int t_1 = t.index;
                if (last == t_1)
                {
                    BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
                }
                else
                {
                    int _0 {};
                    if ((_0 = int(last), (int(_0) < (last = t_1))))
                        outOfOrderArgTargets = true;

                    const s_Type& type = GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).solved.type;
                    if (is_mutref_8RliRHyJ(type, _here, ctx))
                        refs += int(t_1);
                    else if (is_ref_qNIEFFQB(type))
                        consts += int(t_1);

                };
            }
            else
            {
                BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
            };
        };
    };
}

                                #ifndef DEF_sort_ktu8TX39s22
                                #define DEF_sort_ktu8TX39s22
inline void sort_ktu8TX39(fu_VEC<int>& a)
{

        auto* data = a.data_mut();
        std::sort(data, data + a.size());
    ;
}
                                #endif

                                #ifndef DEF_rem_JL5WtWNDHc0
                                #define DEF_rem_JL5WtWNDHc0
inline bool rem_JL5WtWND(fu_VEC<int>& keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_F7KakSWb(keys[i], item);
        if (cmp == 0)
        {
            keys.splice(i, 1);
            return true;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return false;
}
                                #endif

                                #ifndef DEF_add_7jOCnS7ybob
                                #define DEF_add_7jOCnS7ybob
inline void add_7jOCnS7y(fu_VEC<int>& a, fu::view<int> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const int X = a[x];
        const int Y = b[y];
        const int cmp = x3Cx3E_F7KakSWb(X, Y);
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

static void PASS_borrowCheck_AT0KhDoC(s_SolvedNode& root, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    bool AAR = false;
    _current_fn_eachArg_FWD_g0qTra1b(ctx, module, _here, ss, _current_fn, _helpers, _helpers_data);
    bck_node_Y93vGEuW(root, root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    fu_VEC<int> consts {};
    fu_VEC<int> refs {};
    bool outOfOrderArgTargets = false;

    {
        int last = 0;
        _current_fn_eachArg_FWD_22dg3efq(consts, refs, outOfOrderArgTargets, last, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data);
    };
    if (!refs)
        return;
    else
    {
        if (outOfOrderArgTargets)
        {
            sort_ktu8TX39(refs);
            sort_ktu8TX39(consts);
        };
        s_Flow& flow = _current_fn.flow;
        flow.invalidates.clear();
        for (int i = 0; i < refs.size(); i++)
        {
            const int target = refs[i];
            if (consts)
            {
                grow_if_oob_uUmY5jPs(flow.invalidates, target) = fu_VEC<int>(consts);
            };
            fu_VEC<int> refs_1 { refs };
            rem_JL5WtWND(refs_1, target);
            if (refs_1)
            {
                add_7jOCnS7y(grow_if_oob_uUmY5jPs(flow.invalidates, target), refs_1);
            };
        };
        AAR = true;
        _current_fn.events = s_Events{};
        bck_node_Y93vGEuW(root, root, AAR, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    };
}

static bool isRefArg_TGR9AW4a(const s_Overload& o)
{
    return (o.flags & s_Flags_F_ARG) && (o.kind == s_kind_var) && is_ref_qNIEFFQB(o.solved.type);
}

static int Lifetime_vs_vhWTNlLw(const s_Lifetime& lifetime, const int locals_start, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    bool neg = false;
    bool pos = false;
    fu::view<s_Region> r = lifetime.uni0n;
    for (int i = 0; (i < r.size()) && !(pos && neg); i++)
    {
        const s_Region& r_1 = r[i];
        if (Region_toLocal_PhGvG2us(r_1) < locals_start)
            neg = true;
        else if (Region_isTemp_PhGvG2us(r_1))
            pos = true;
        else if (isRefArg_TGR9AW4a(Region_GET_DezSnHcm(r_1, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)))
            neg = true;
        else
            pos = true;

    };
    if (neg == pos)
        return 0;
    else if (neg)
        return -1;
    else
        return +1;

}

static fu_VEC<int> Lifetime_slotsUp2_WYCQfyon(const s_Lifetime& lifetime, const int locals_start, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    fu_VEC<s_Region> unwound = Lifetime_unwind_XvP0ZNoq(s_Lifetime(lifetime), locals_start, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort).uni0n;
    /*MOV*/ fu_VEC<int> result {};
    for (int i = 0; i < unwound.size(); i++)
    {
        const s_Region& r = unwound[i];
        if ((r.index >= locals_start))
            result += int(r.index);

    };
    return /*NRVO*/ result;
}

                                #ifndef DEF_each_HrXESvAVXb6
                                #define DEF_each_HrXESvAVXb6
inline void each_HrXESvAV(fu::view<int> a, const s_Module& module, s_SolverState& ss, const s_Target& _current_fnort)
{
    for (int i = 0; i < a.size(); i++)
    {
        const int index = a[i];
        s_Overload& o = GET_mut_UTaXftgW(nested_MxoYXM2x(index, _current_fnort, module), module, ss);
        if (!(o.flags & s_Flags_F_ARG))
            o.status |= s_SolverStatus_SS_HOIST;

    };
}
                                #endif

static void mcom_BlockReturns_CopyOrMoveDecision_uJmo1ZRp(const s_Helpers& h, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view_mut<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (!is_ref_qNIEFFQB(_helpers_data[h.index].ret_actual))
        return;
    else if (_helpers_data[h.index].mask & s_HelpersMask_HM_Function)
    {
        /*MOV*/ s_Lifetime unwind = Lifetime_unwind_XvP0ZNoq(s_Lifetime(_helpers_data[h.index].ret_actual.lifetime), 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
        if (Lifetime_vs_vhWTNlLw(unwind, _helpers_data[h.index].locals_start, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort) < 0)
        {
            _helpers_data.mutref(h.index).ret_actual.lifetime = static_cast<s_Lifetime&&>(unwind);
        }
        else
            reportReturnType_qYkj1e6Q(h, clear_refs_qNIEFFQB(s_Type(_helpers_data[h.index].ret_actual)), false, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);

    }
    else
    {
        each_HrXESvAV(Lifetime_slotsUp2_WYCQfyon(_helpers_data[h.index].ret_actual.lifetime, _helpers_data[h.index].locals_start, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort), module, ss, _current_fnort);
    };
}

static void mcom_node_6xYE69NA(s_SolvedNode& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const s_kind k = node.kind;
    s_Type t { node.type };
    if (k == s_kind_block)
    {
        if (node.helpers)
            mcom_BlockReturns_CopyOrMoveDecision_uJmo1ZRp(node.helpers, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);

    };
    fu::view_mut<s_SolvedNode> items = node.items;
    for (int i = 0; i < items.size(); i++)
        mcom_node_6xYE69NA(items.mutref(i), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

    _here = node.token;
    if (k == s_kind_call)
    {
        const s_Target& target = node.target;
        if (GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).kind != s_kind_field)
        {
            fu_VEC<s_Argument> host_args { EXT_N3jS4trN(target, ctx, module, ss).args };
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_5KsSrIOT(items.mutref(i_1), s_Type(host_args[i_1].type), true, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

        };
    }
    else if ((k == s_kind_block) || (k == s_kind_jump))
    {
        const s_Helpers h { node.helpers };
        if (_helpers_data[h.index].ret_actual && !is_void_eqpYb5IC(_helpers_data[h.index].ret_actual) && !is_never_eqpYb5IC(_helpers_data[h.index].ret_actual))
            maybeCopyOrMove_5KsSrIOT(last_PyOGoLWZ(node.items), s_Type(_helpers_data[h.index].ret_actual), false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

    }
    else if (k == s_kind_letdef)
    {
        std::swap(GET_mut_UTaXftgW(node.target, module, ss).solved, node);
        mcom_node_6xYE69NA(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        std::swap(GET_mut_UTaXftgW(node.target, module, ss).solved, node);
    }
    else if (k == s_kind_let)
    {
        if (node.items)
        {
            s_SolvedNode& init = node.items.mutref(LET_INIT);
            if (init)
                maybeCopyOrMove_5KsSrIOT(init, node.type, false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

        };
    }
    else if (k == s_kind_if)
    {
        if (!is_void_eqpYb5IC(t))
        {
            maybeCopyOrMove_5KsSrIOT(items.mutref(1), t, false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            maybeCopyOrMove_5KsSrIOT(items.mutref(2), t, false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        };
    }
    else if (k == s_kind_or)
    {
        if (!(t == t_bool))
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_5KsSrIOT(items.mutref(i_1), t, false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
;
    }
    else if (k == s_kind_arrlit)
    {
        s_Type t_1 = clear_sliceable_8RliRHyJ(t, _here, ctx);
        for (int i_1 = 0; i_1 < items.size(); i_1++)
            maybeCopyOrMove_5KsSrIOT(items.mutref(i_1), t_1, false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

    };
}

static void runAllPasses_S12QJajJ(s_SolvedNode& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (SELF_TEST)
        test_node_ehvRzmk8(node, "PASS.0 "_fu, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);

    s_HelpersData* BL_2_v;
    (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_2_v = &(_helpers_data.mutref(h.index));
    (void)0;}), *BL_2_v).pass = s_SolverPass_RelaxMut;
    if (_current_fn.var_usage)
        BUG_k3P6Th3U("_current_fn.var_usage not empty before propagateType."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
    else if (_current_fn.postdom.loop_start)
        BUG_k3P6Th3U("_current_fn.loop_start != 0 before propagateType."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
    else
    {
        _current_fn.postdom.loop_start = 1;
        propagateType_MOm0DjNj(node, s_Type(node.type), RELAX_before_bck, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        if (SELF_TEST)
            test_node_ehvRzmk8(node, "PASS.0.relax "_fu, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);

        s_HelpersData* BL_7_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_7_v = &(_helpers_data.mutref(h.index));
        (void)0;}), *BL_7_v).pass = s_SolverPass_BorrowCheck;
        PASS_borrowCheck_AT0KhDoC(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        if (SELF_TEST)
            test_node_ehvRzmk8(node, "PASS.1 "_fu, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);

        s_HelpersData* BL_9_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_9_v = &(_helpers_data.mutref(h.index));
        (void)0;}), *BL_9_v).pass = s_SolverPass_MaybeCopyOrMove;
        mcom_node_6xYE69NA(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        if (SELF_TEST)
            test_node_ehvRzmk8(node, "PASS.2 "_fu, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);

        s_HelpersData* BL_11_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_11_v = &(_helpers_data.mutref(h.index));
        (void)0;}), *BL_11_v).pass = s_SolverPass_RelaxCopyResize;
        _current_fn.effects.fx_mask = s_FxMask{};
        _current_fn.var_usage = fu_VEC<s_Type>{};
        if (_current_fn.postdom.loop_start == 1)
        {
            propagateType_MOm0DjNj(node, s_Type(node.type), RELAX_all, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            if (SELF_TEST)
                test_node_ehvRzmk8(node, "PASS.2.relax "_fu, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);

        }
        else
            BUG_k3P6Th3U(x7E_sTZRmMq1("_current_fn.loop_start leak: "_fu, fu::i64dec(_current_fn.postdom.loop_start)), ctx, module, _here, ss, _helpers, _helpers_data);

    };
}

static s_SolvedNode solveBlock_a06G0wq6(const s_Node& node, const s_Type& type, const int fnbody_of, const s_HelpersMask mask, const fu_STR& id, const int locals_start, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    fu_VEC<s_Node> nodes = ((node.kind == s_kind_block) ? fu_VEC<s_Node>(node.items) : fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(node) } });
    const fu_STR& id_1 = (id ? id : ((node.kind == s_kind_block) ? node.value : (*(const fu_STR*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap_JtSt09Yg(ss._scope, _helpers);
    fu_DEFER(Scope_pop_J3Z6pttr(ss._scope, scope0, _helpers));
    const int helpers_idx = _helpers.size();
    push_HdzROYqO(s_HelpersData { (fnbody_of ? s_Target { int(module.modid), int(fnbody_of) } : s_Target{}), s_SolverPass{}, fu_STR(id_1), s_HelpersMask(mask), int((fnbody_of ? fnbody_of : _current_fn.out.target.index)), (fnbody_of ? +1 : (locals_start ? int(locals_start) : GET_next_local_index_rUmUpdn0(_current_fnort, ss, _current_fn))), s_Type(type), s_Type{}, s_Postdom{} }, _helpers, _helpers_data);
    const s_Helpers h { _helpers[helpers_idx] };
    if (fnbody_of && nodes)
    {
        last_9VZyC11m(nodes) = s_Node { s_kind_return, s_DeclAsserts{}, s_ParseSyntax{}, s_Flags_F_IMPLICIT, fu_STR{}, ((last_P1M39QT4(nodes).kind != s_kind_void) ? fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(last_P1M39QT4(nodes)) } } : fu_VEC<s_Node>{}), s_TokenIdx(node.token) };
    };
    /*MOV*/ fu_VEC<s_SolvedNode> items = solveNodes_EGJ2i2NT(nodes, t_void, type, !is_void_eqpYb5IC(type), (*(const fu_STR*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    if (!s_HelpersMask((mask & s_HelpersMask_HM_CanReturn)))
    {
        _helpers_data.mutref(h.index).ret_expect = s_Type{};
    };
    reportReturnType_qYkj1e6Q(h, (items ? last_7ZMqiNoZ(items).type : t_void), false, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
    if (_helpers_data[h.index].ret_actual)
    {
        const s_Type* _0;
        /*MOV*/ s_SolvedNode block = createBlock_aqSRQpGo(s_Type((*(_0 = &(_helpers_data[h.index].ret_actual)) ? *_0 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data))), static_cast<fu_VEC<s_SolvedNode>&&>(items), h, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        if (fnbody_of)
        {
            const s_SolverStatus status = GET_ryFyPS6P(s_Target { int(module.modid), int(fnbody_of) }, ctx, module, _here, ss, _helpers, _helpers_data).status;
            if (!s_SolverStatus((status & s_SolverStatus_SS_DIRTY)) && !currentFn_mustBecomeInline_Q8rXLTyL(_current_fn))
            {
                sortInjectedArguments_LCpVDZ7y(ctx, module, _here, ss, _current_fn, _helpers, _helpers_data);
                runAllPasses_S12QJajJ(block, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            };
        };
        return /*NRVO*/ block;
    }
    else
        BUG_k3P6Th3U("No ret_actual"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

}

                                #ifndef DEF_each_LBIBUB5I0E4
                                #define DEF_each_LBIBUB5I0E4
inline void each_LBIBUB5I(const s_BitSet& _, fu::view<s_SolvedNode> items, s_BitSet& hard_risk, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
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
                    const s_SolvedNode& other = GET_ryFyPS6P(items[index].target, ctx, module, _here, ss, _helpers, _helpers_data).solved;
                    if (!TODO_FIX_isArray_qNIEFFQB(other.type))
                        add_uczByTOp(hard_risk, index);

                };
            };
        };
    };
}
                                #endif

static s_Type ignoreLocalLts_9Mk3WuWo(/*MOV*/ s_Type&& type, const s_Argument& a)
{
    if (OPTI_ignoreLocalLts && Region_asLocal_l3hJ0imS(if_only_uRy3lRyu(a.type.lifetime.uni0n)))
    {
        type.lifetime = Lifetime_temporary_8nlJDPX0();
    };
    return static_cast<s_Type&&>(type);
}

                                #ifndef DEF_each_0my8lBqoJKc
                                #define DEF_each_0my8lBqoJKc
inline void each_0my8lBqo(fu::view<s_Region> a, const s_Target& _current_fnort, const s_Type& retval, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Region& r = a[i];
        if (!(Region_isArgPosition_PhGvG2us(r) || Region_isStatic_PhGvG2us(r)))
        {
            BUG_k3P6Th3U(((("updateScope: Non-static/non-arg leaked:\n\t"_fu + qWHAT_vXP1PCtb(Region_GET_DezSnHcm(r, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort), ctx, module, _here, ss, _helpers, _helpers_data)) + "\n\n\tIn retval lifetime:\n\t"_fu) + qWHAT_KqX3VCyd(retval.lifetime, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);
        };
    };
}
                                #endif

static void lazySolveEnd_dD7PN0OQ(const s_Target& t, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    s_Overload& o = GET_mut_UTaXftgW(t, module, ss);
    fu_VEC<int> reopen {};
    const int parent = EXT_N3jS4trN(t, ctx, module, ss).local_of;
    if (o.status & s_SolverStatus_SS_UPDATED)
    {
        o.status &= s_SolverStatus(~s_SolverStatus_SS_UPDATED);
        fu_VEC<int> callers { EXT_N3jS4trN(t, ctx, module, ss).callers };
        const unsigned shuffle = (EXT_N3jS4trN(t, ctx, module, ss).revision + options.shuffle);
        for (int i = 0; i < callers.size(); i++)
        { {
            int index = callers[int(((unsigned(i) + shuffle) % unsigned(callers.size())))];
            for (; ; )
            {
                const s_Target t_1 = s_Target { int(module.modid), int(index) };
                s_Overload& o_1 = GET_mut_UTaXftgW(t_1, module, ss);
                if (s_SolverStatus((o_1.status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)))) != s_SolverStatus_SS_DID_START)
                    goto BL_3;
                else if (!s_SolverStatus((o_1.status & s_SolverStatus_SS_FINALIZED)))
                {
                    o_1.status |= s_SolverStatus_SS_DIRTY;
                    goto BL_3;
                }
                else
                {
                    const int up = EXT_N3jS4trN(t_1, ctx, module, ss).local_of;
                    if (up != parent)
                    {
                        if (up > parent)
                        {
                            index = up;
                            continue;
                        }
                        else
                            BUG_k3P6Th3U("lazySolveEnd: about to climb up the wrong tree."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

                    }
                    else
                    {
                        makeNote_jjqaKIrz(((o_1.kind == s_kind_type) ? s_SolverNotes_N_TypeReopen : s_SolverNotes_N_FnReopen), ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                        o_1.status &= s_SolverStatus(~s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)) | s_SolverStatus_SS_FINALIZED)));
                        reopen += int(index);
                        goto BL_3;
                    };
                };
            };
          } BL_3:;
        };
    };
    s_Overload& o_1 = GET_mut_UTaXftgW(t, module, ss);
    if (!s_SolverStatus((o_1.status & s_SolverStatus_SS_DIRTY)))
        o_1.status |= s_SolverStatus_SS_FINALIZED;
    else if (o_1.status & s_SolverStatus_SS_FINALIZED)
        BUG_k3P6Th3U("Stray SS_FINALIZED."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
    else
    {
        o_1.status &= s_SolverStatus(~s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)));
        makeNote_jjqaKIrz(((o_1.kind == s_kind_type) ? s_SolverNotes_N_TypeResolve : s_SolverNotes_N_FnResolve), ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t_1 = s_Target { int(module.modid), int(reopen[i]) };
        lazySolveStart_uLb9QxPS(t_1, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    };
}

static s_Target doTrySpecialize_yiTp1nQi(const s_Target& into, const s_Target& overloadIdx, fu::view<s_SolvedNode> args_in, const fu_STR& mangle, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
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
        for (int i = 0; i < args_in.size(); i++)
            args.push(s_Type(args_in[i].type));
;
    for (int i = 0; i < conversions.size(); i++)
    {
        const fu_VEC<s_Target>& c = conversions[i];
        if (c)
            args.mutref(i) = s_Type(GET_ryFyPS6P(last_SLwrTQE9(c), ctx, module, _here, ss, _helpers, _helpers_data).type);

    };
    if (REST_TYPE)
        args.mutref(REST_START) = s_Type(REST_TYPE);

    const s_Target SPECFAIL_RentrySafety = s_Target { 2147483647, 0 };
    const s_Target& original = (overloadIdx ? overloadIdx : into ? into : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
    s_Template tEmplate { EXT_N3jS4trN(original, ctx, module, ss).tEmplate };
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    _here = EXT_N3jS4trN(original, ctx, module, ss).tEmplate.node.token;
    int parent_idx = EXT_N3jS4trN(original, ctx, module, ss).local_of;
    for (int i_1 = 0; i_1 < args.size(); i_1++)
    {
        const s_Type& arg_t = args[i_1];
        if (isAddrOfFn_mipI0b6h(arg_t))
            unpackAddrOfFn_AN5WVMgB(arg_t.vtype.canon, parent_idx, ctx, module, ss);

    };
    const bool isInline = !!(tEmplate.node.flags & s_Flags_F_INLINE);
    fu_VEC<fu_STR> mangles {};
    s_Target currentSpec { SPECFAIL_RentrySafety };
    if (!into && !isInline)
    {
        const bool allowReplaceNonSpecfails = false;
        if (add_P2VwYqz5(mangles, mangle))
        {
            const s_Target preexisting { get_jKIIMy2f(ss._specs, mangle) };
            if (preexisting)
            {
                rem_lXJbAxiW(mangles, mangle);
                resetSpec_5OB5uK9p(preexisting, allowReplaceNonSpecfails, isInline, mangles, currentSpec, ctx, module, _here, ss, _helpers, _helpers_data);
                return preexisting;
            }
            else
                setSpec_60Er3RXb(mangle, currentSpec, true, false, isInline, ctx, module, _here, ss, _helpers, _helpers_data);

        };
    };
    s_Target target {};

    {
        const s_ScopeMemo scope0 = Scope_snap_JtSt09Yg(ss._scope, _helpers);
        /*MOV*/ s_ScopeSkipMemos ss0 { ss._ss };
        const int helpers_data0 = _helpers_data.size();
        fu_DEFER(
        {
            Scope_pop_J3Z6pttr(ss._scope, scope0, _helpers);
            ss._ss = static_cast<s_ScopeSkipMemos&&>(ss0);
            _helpers_data.shrink(helpers_data0);
        });
        ScopeSkip_setup_Lg4MANUU(tEmplate, scope0, false, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data);
        fu_VEC<s_Node> items { tEmplate.node.items };
        s_Node& n_fn = tEmplate.node;
        if (n_fn.kind == s_kind_fn)
        {
            fu_STR error {};
            bool remangle = false;
            s_Map_UKvTd2mknh0 typeParams {};
            if (!into)
            {
                const s_kind kind = tEmplate.node.kind;
                const int numArgs = ((kind == s_kind_fn) ? (items.size() + FN_ARGS_BACK) : fail_7KwuQpwr(x7E_sTZRmMq1("TODO numArgs for template:"_fu, str_v3b7EcLt(kind)), ctx, module, _here, ss, _helpers, _helpers_data));
                fu_VEC<int> retypeIndices {};
                for (int pass_retype = 0; (pass_retype == 0) || ((pass_retype == 1) && retypeIndices); pass_retype++)
                {
                    for (int i_2 = 0; i_2 < numArgs; i_2++)
                    {
                        if (pass_retype)
                        {
                            if (!has_Q09HnW0u(retypeIndices, i_2))
                                continue;

                        };
                        s_Type inType { ((args.size() > i_2) ? args[i_2] : (*(const s_Type*)fu::NIL)) };
                        const s_SolvedNode& inValue = (reorder ? ((reorder.size() > i_2) && (reorder[i_2] >= 0) ? args_in[reorder[i_2]] : (*(const s_SolvedNode*)fu::NIL)) : ((args_in.size() > i_2) ? args_in[i_2] : (*(const s_SolvedNode*)fu::NIL)));
                        const s_Node* _0;
                        const s_Node& argNode = (*(_0 = &(items[i_2])) ? *_0 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
                        const s_Node& annot = argNode.items[LET_TYPE];
                        /*MOV*/ s_Argument host_arg { EXT_N3jS4trN(original, ctx, module, ss).args[i_2] };
                        s_SolvedNode inValue_1 { (inValue ? inValue : ((void)(inType = host_arg.dEfault.type), host_arg.dEfault)) };
                        if (couldRetype_ODsvI1qY(inValue_1))
                        {
                            const s_Type& paramType = ((annot.kind == s_kind_typeparam) ? ref_BwmIsKIm(typeParams, annot.value).matched : ((annot.kind == s_kind_call) && !annot.items ? Scope_lookupType_8Tke6K42(annot, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort) : (*(const s_Type*)fu::NIL)));
                            if (paramType)
                            {
                                /*MOV*/ s_Type retype = tryRetyping_yDcFD2W2(inValue_1, paramType, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
                                if (retype && (retype.vtype.canon != inType.vtype.canon))
                                {
                                    inType = static_cast<s_Type&&>(retype);
                                    if (args.size() > i_2)
                                        args.mutref(i_2) = s_Type(inType);

                                    remangle = true;
                                };
                            }
                            else if (!pass_retype)
                            {
                                retypeIndices.push(int(i_2));
                                continue;
                            };
                        };
                        if (argNode.kind == s_kind_let)
                        {
                            if (inType)
                            {
                                /*MOV*/ s_Type& exactType = host_arg.type;
                                if (exactType)
                                {
                                    if (args.size() > i_2)
                                        args.mutref(i_2) = static_cast<s_Type&&>(exactType);

                                    continue;
                                }
                                else
                                {
                                    const fu_STR& argName = (argNode.value ? argNode.value : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
                                    s_TypeParam& argName_typeParam = ref_BwmIsKIm(typeParams, ("$"_fu + argName));
                                    inType = add_ref_arUcTyoS(s_Type(inType), Lifetime_temporary_8nlJDPX0(), _here, ctx);
                                    (!argName_typeParam ? argName_typeParam : fail_7KwuQpwr((("Type param name collision with argument "_fu + qID_9QQZAztz(argName)) + "."_fu), ctx, module, _here, ss, _helpers, _helpers_data)).matched = s_Type(inType);
                                    if (annot)
                                    {
                                        const bool argOk = trySolveTypeParams_mayetygn(annot, s_Type(inType), typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                                        if (!error && !argOk)
                                            error = ((("Cannot solve argument "_fu + qID_9QQZAztz(argName)) + " pattern for "_fu) + humanizeType_3wOVPKQg(inType, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort));

                                        if (error && !remangle)
                                            break;

                                    };
                                };
                            };
                        }
                        else
                        {
                            BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
                        };
                    };
                };
                if (remangle && !isInline)
                {
                    const bool allowReplaceNonSpecfails = false;
                    int _1 {};
                    const int start = ((_1 = (find_ODCLAe2r(mangle, ' ') + 1)) ? _1 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
                    fu_STR mangle_1 = (fu::slice(mangle, 0, start) + mangleArgTypes_NiAl7b48(args));
                    if (add_P2VwYqz5(mangles, mangle_1))
                    {
                        const s_Target preexisting { get_jKIIMy2f(ss._specs, mangle_1) };
                        if (preexisting)
                        {
                            rem_lXJbAxiW(mangles, mangle_1);
                            resetSpec_5OB5uK9p(preexisting, allowReplaceNonSpecfails, isInline, mangles, currentSpec, ctx, module, _here, ss, _helpers, _helpers_data);
                            return preexisting;
                        }
                        else
                            setSpec_60Er3RXb(mangle_1, currentSpec, true, false, isInline, ctx, module, _here, ss, _helpers, _helpers_data);

                    };
                };
                if (error)
                    return SPECFAIL_iqIEl2wG(error, SPECFAIL_RentrySafety, isInline, mangles, currentSpec, ctx, module, _here, ss, _helpers, _helpers_data);
                else
                {
                    const s_Node* _2;
                    const s_Node& body = (*(_2 = &(items[(items.size() + FN_BODY_BACK)])) ? *_2 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
                    if (body.kind == s_kind_pattern)
                    {
                        s_Map_UKvTd2mknh0 undo { typeParams };
                        fu_VEC<s_Node> branches { body.items };
                        bool did_match = false;
                        for (int i_2 = 0; i_2 < branches.size(); i_2++)
                        {
                            const s_Node& cond = branches[i_2].items[0];
                            if (cond && !evalTypePattern_x7DQggP3(cond, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort))
                            {
                                typeParams = undo;
                                continue;
                            }
                            else
                            {
                                fu_VEC<s_Node> cons { branches[i_2].items };
                                fu::view_mut<s_Node> sig = n_fn.items;

                                {
                                    /*MOV*/ s_Node n_ret { cons[(cons.size() + FN_RET_BACK)] };
                                    if (n_ret)
                                        sig.mutref((sig.size() + FN_RET_BACK)) = static_cast<s_Node&&>(n_ret);

                                    const s_Node& n_body = cons[(cons.size() + FN_BODY_BACK)];
                                    sig.mutref((sig.size() + FN_BODY_BACK)) = s_Node((n_body ? n_body : BUG_k3P6Th3U("doTrySpec: no case/body."_fu, ctx, module, _here, ss, _helpers, _helpers_data)));
                                };
                                did_match = true;
                                break;
                            };
                        };
                        if (!did_match)
                            return SPECFAIL_iqIEl2wG("No body pattern matched."_fu, SPECFAIL_RentrySafety, isInline, mangles, currentSpec, ctx, module, _here, ss, _helpers, _helpers_data);

                    };
                    const s_Node& n_body = n_fn.items[(n_fn.items.size() + FN_BODY_BACK)];
                    if (isNativeBody_5P8nakwp(n_body))
                    {
                        for (int i_2 = 0; i_2 < numArgs; i_2++)
                        {
                            const s_Node* _3;
                            const s_Node& argNode = (*(_3 = &(items[i_2])) ? *_3 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
                            fu_STR id = ("$"_fu + argNode.value);
                            if_ref_s9a3Myb9(typeParams, id);
                        };
                    };
                };
            };
            target = (into ? s_Target(into) : Scope_create_EMDiTJHw(ss._scope, s_kind___no_kind_yet, (*(const fu_STR*)fu::NIL), (*(const s_Type*)fu::NIL), s_Flags{}, s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_LAZY)), 0, module));
            EXT_mut_ZuyZYWC3(target, module, ss).local_of = int(parent_idx);
            fu_VEC<s_ScopeItem> extra_items { (into ? EXT_N3jS4trN(original, ctx, module, ss).extra_items : (EXT_mut_ZuyZYWC3(target, module, ss).extra_items = intoScopeItems_u4gTrmsV(typeParams, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort))) };
            const s_Target& _current_fnort_1 = target;

            {
                s_Extended& o = EXT_mut_ZuyZYWC3(target, module, ss);
                if (o.revision++ > 0u)
                {
                    o.locals.clear();
                    if (ss._warnings.size() > target.index)
                    {
                        ss._warnings.mutref(target.index) = s_Warning{};
                    };
                };
            };
            /*MOV*/ fu_VEC<s_SolvedNode> TODO_FIX_convert_args0 { ss.TODO_FIX_convert_args };
            ss.TODO_FIX_convert_args.mutref(0) = SolvedNode_ROjBZjUC(s_kind___convert, s_Type{}, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
            fu_DEFER(ss.TODO_FIX_convert_args = static_cast<fu_VEC<s_SolvedNode>&&>(TODO_FIX_convert_args0));
            const s_DeclAsserts asserts = tEmplate.node.asserts;
            s_CurrentFn out = s_CurrentFn { solved_wmaa4w3Z(n_fn, X_addrofTarget_FJa7W3UK(target), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, _here), s_ScopeMemo(scope0), s_DeclAsserts(asserts), s_Flow{}, s_Effects{}, s_Events{}, ((n_fn.flags & s_Flags_F_TEMPLATE) ? 1 : 0), fu_VEC<s_Type>{}, 0, s_Postdom{} };
            const s_ScopeMemo root_scope0 { ss._root_scope };
            if (!root_scope0)
                ss._root_scope = scope0;

            std::swap(_current_fn, out);
            fu_DEFER(
            {
                std::swap(_current_fn, out);
                ss._root_scope = root_scope0;
            });
            fu::view<s_Node> inItems = n_fn.items;
            outItems_QydiSOHB(_current_fn).resize(inItems.size());
            ss._scope.items += extra_items;
            const bool isFirst = !GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).solved;
            const s_Flags isTemplate = (tEmplate.node.flags & s_Flags_F_TEMPLATE);
            const bool isSpec = (isTemplate && (!into || !isFirst));
            const bool isUnspec = (isTemplate && !isSpec);
            for (int i_2 = 0; i_2 < (inItems.size() + FN_ARGS_BACK); i_2++)
            {
                const s_Node& n_arg = inItems[i_2];
                if (isUnspec && ((n_arg.flags & s_Flags_F_TEMPLATE) || !n_arg.items[LET_TYPE]))
                {
                    s_SolvedNode init = (n_arg.items[LET_INIT] ? solveNode_3DHmcQXo(n_arg.items[LET_INIT], (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort_1) : s_SolvedNode{});
                    outItems_QydiSOHB(_current_fn).mutref(i_2) = SolvedNode_ROjBZjUC(s_kind_let, s_Type{}, n_arg.flags, n_arg.value, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, s_Helpers{}, _here);
                    continue;
                }
                else
                {
                    s_Type specType = (isSpec ? tryGetArgSpecType_K1YxUrEc(n_arg.value, extra_items, ctx, module, _here, ss, _helpers, _helpers_data) : s_Type{});
                    /*MOV*/ s_SolvedNode arg = solveLet_hoJP0epM(n_arg, specType, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort_1);
                    outItems_QydiSOHB(_current_fn).mutref(i_2) = static_cast<s_SolvedNode&&>(arg);
                };
            };
            const s_Node& n_ret = (!isUnspec ? inItems[(inItems.size() + FN_RET_BACK)] : (*(const s_Node*)fu::NIL));
            const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
            if (n_body)
            {
                const bool isNative = isNativeBody_5P8nakwp(n_body);
                /*MOV*/ s_Type ret_expect = (n_ret ? evalTypeAnnot_oDto04gx(n_ret, (*(const s_Map_UKvTd2mknh0*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort_1) : s_Type{});
                /*MOV*/ s_Type ret_seed { (n_ret ? (ret_expect ? ret_expect : BUG_k3P6Th3U(("falsy ret_expect: "_fu + n_fn.value), ctx, module, _here, ss, _helpers, _helpers_data)) : t_never) };
                if (ret_seed.lifetime)
                {
                    ret_seed.lifetime = (isNative ? Lifetime_fromNative_fBaE1IZe(inItems, fu::get_view(_current_fn.out.items, 0, (_current_fn.out.items.size() + FN_ARGS_BACK)), ret_seed, ctx, module, _here, ss, _helpers, _helpers_data) : Lifetime_static_8nlJDPX0());
                };
                if (isFirst)
                {

                    { {
                        const s_CurrentFn& out_1 = _current_fn;
                        s_Type retval { (isInline ? ret_expect : ret_seed) };
                        const bool maybeLast = false;
                        _here = (n_fn.token ? n_fn.token : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
                        if (GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).status & s_SolverStatus_SS_DIRTY)
                        {
                            GET_mut_UTaXftgW(target, module, ss).status |= s_SolverStatus_SS_UPDATED;
                            goto BL_71;
                        }
                        else
                        {
                            fu::view<s_SolvedNode> items_1 = out_1.out.items;
                            const int N = (items_1.size() + FN_ARGS_BACK);
                            int min = 0;
                            int max = 0;
                            const s_NativeHacks NativeHacks = (isNative ? NativeHacks_FkHhiw9v(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).name) : s_NativeHacks{});
                            int numArgsWritten = 0;
                            fu_VEC<s_Argument> args_1 {};
                            for (int i_3 = 0; i_3 < N; i_3++)
                            {
                                const s_SolvedNode& argNode = items_1[i_3];
                                if (!(argNode.kind == s_kind_letdef))
                                {
                                    if (argNode.target)
                                        BUG_k3P6Th3U(("Argnode is not letdef, but has a target: "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(argNode.target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);

                                };
                                const s_SolvedNode& argNode_1 = ((argNode.kind == s_kind_letdef) ? GET_ryFyPS6P(argNode.target, ctx, module, _here, ss, _helpers, _helpers_data).solved : argNode);
                                if (argNode_1.kind == s_kind_let)
                                {
                                    fu_STR name { argNode_1.value };
                                    /*MOV*/ fu_STR autocall = ((argNode_1.flags & s_Flags_F_COMPOUND_ID) ? CompoundArgID_outerSplice_c0PH6QuQ(name, ctx, module, _here, ss, _helpers, _helpers_data) : fu_STR{});
                                    const bool isImplicit = !!(argNode_1.flags & s_Flags_F_IMPLICIT);
                                    const s_Target& argTarget = argNode_1.target;
                                    const bool written_via = (!isUnspec && is_mutref_8RliRHyJ(argNode_1.type, _here, ctx) && (isNative || has_qNZlwBKS(out_1.events.ever_written, argTarget.index)));
                                    /*MOV*/ s_BitSet soft_risk {};
                                    /*MOV*/ s_BitSet hard_risk {};
                                    if (written_via)
                                    {
                                        numArgsWritten++;
                                        if (!isNative)
                                        {
                                            ArgsAtRisk_list_Mg6wScVC(soft_risk, out_1.flow, i_3, out_1.flow.at_soft_risk);
                                            ArgsAtRisk_list_Mg6wScVC(hard_risk, out_1.flow, i_3, out_1.flow.at_hard_risk);
                                            if (TODO_FIX_isArray_qNIEFFQB(argNode_1.type))
                                            {
                                                s_BitSet soft { soft_risk };
                                                and_not_assign_30J7m8SX(soft, hard_risk);
                                                each_0auK1NIk(soft, items_1, hard_risk, ctx, module, _here, ss, _helpers, _helpers_data);
                                            };
                                        }
                                        else
                                        {
                                            add_range_7V2wMoqU(soft_risk, N);
                                            rem_uczByTOp(soft_risk, i_3);
                                            if (!NativeHacks.soft_risk)
                                                hard_risk = soft_risk;

                                        };
                                    };
                                    if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE)) && written_via)
                                    {
                                        fail_7KwuQpwr(((((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not pure, writes to argument "_fu) + qID_9QQZAztz(human_yoPbxz1W(name, ctx, module, _here, ss, _helpers, _helpers_data))) + ":\n"_fu) + qSTACK_YECBRXJx(target, out_1.out, Region_fromLocal_eorXYpEE(argTarget.index), fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
                                    }
                                    else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_CTX)) && isImplicit && written_via)
                                    {
                                        fail_7KwuQpwr(((((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not purectx, writes to implicit argument "_fu) + qID_9QQZAztz(human_yoPbxz1W(name, ctx, module, _here, ss, _helpers, _helpers_data))) + ":\n"_fu) + qSTACK_YECBRXJx(target, out_1.out, Region_fromLocal_eorXYpEE(argTarget.index), fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
                                    }
                                    else if (maybeLast && s_DeclAsserts((asserts & s_DeclAsserts_A_NOVEC)) && !is_trivial_ChYpFATl(argNode_1.type, ctx, module) && (is_rx_copy_6qTx5aCK(argNode_1.type) || is_rx_resize_6qTx5aCK(argNode_1.type)))
                                        fail_7KwuQpwr(((((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not novec, argument "_fu) + qID_9QQZAztz(human_yoPbxz1W(name, ctx, module, _here, ss, _helpers, _helpers_data))) + " is "_fu) + humanizeType_3wOVPKQg(argNode_1.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort_1)), ctx, module, _here, ss, _helpers, _helpers_data);
                                    else
                                    {
                                        s_BitSet _4 {};
                                        s_Argument arg = (_4 = static_cast<s_BitSet&&>(soft_risk), s_Argument { fu_STR(name), static_cast<fu_STR&&>(autocall), s_Type(argNode_1.type), s_SolvedNode((!isImplicit ? argNode_1.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), (argNode_1.flags | (written_via ? s_Flags_F_WRITTEN_TO : s_Flags{})), int(argTarget.index), static_cast<s_BitSet&&>(_4), static_cast<s_BitSet&&>(hard_risk) });
                                        if (arg.type || isUnspec)
                                        {
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

                                            if (is_ref_qNIEFFQB(retval) && is_ref_qNIEFFQB(argNode_1.type))
                                            {
                                                const s_Region region = Region_fromLocal_eorXYpEE(argTarget.index);
                                                const int idx = find_7ZhIVZth(retval.lifetime.uni0n, region);
                                                if ((idx >= 0))
                                                {
                                                    retval.lifetime.uni0n.splice(idx, 1);
                                                    add_6jMUfMQL(retval.lifetime.uni0n, Region_fromArgPosition_BLLdCVw1(i_3));
                                                };
                                            };
                                        }
                                        else
                                            BUG_k3P6Th3U((("updateScope: Unexpected untyped argument: `"_fu + name) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

                                    };
                                }
                                else
                                {
                                    BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
                                };
                            };
                            s_Overload overload { GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data) };
                            s_Extended& ext = EXT_mut_ZuyZYWC3(target, module, ss);
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
                                        if (!((a.name == b.name) && (ignoreLocalLts_0FEz3MIz(s_Type(a.type), a) == ignoreLocalLts_0FEz3MIz(s_Type(b.type), a))))
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
                            if (!isNative)
                                ext.fx_mask = out_1.effects.fx_mask;

                            if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOTHROW)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Throws)))
                            {
                                fail_7KwuQpwr(((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not nothrow, throws here:\n"_fu) + qSTACK_XLAhGn9A(target, out_1.out, s_FxMask_Fx_Throws, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
                            }
                            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOCRASH)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Crashes)))
                            {
                                fail_7KwuQpwr(((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not nocrash, can crash here:\n"_fu) + qSTACK_XLAhGn9A(target, out_1.out, s_FxMask_Fx_Crashes, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
                            }
                            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOIO)) && s_FxMask((ext.fx_mask & s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)))))
                            {
                                fail_7KwuQpwr(((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not noio, performs I/O here:\n"_fu) + qSTACK_XLAhGn9A(target, out_1.out, s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)), fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
                            }
                            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_FX)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Output)))
                            {
                                fail_7KwuQpwr(((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not purefx, outputs here:\n"_fu) + qSTACK_XLAhGn9A(target, out_1.out, s_FxMask_Fx_Output, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
                            }
                            else
                            {
                                if (maybeLast)
                                {
                                    if (!(numArgsWritten || ext.fx_mask || !is_void_eqpYb5IC(retval) || (overload.flags & s_Flags_F_LAX)))
                                    {
                                        const s_TokenIdx& token = out_1.out.token;

                                        {
                                            s_Warning& a = grow_if_oob_wm6oIO3D(ss._warnings, _current_fn.out.target.index);
                                            if (!(a))
                                            {
                                                a = s_Warning { s_TokenIdx(token), fail_appendStack_ifcuNJ6t((((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " does nothing: returns void and has no effects. Make it "_fu) + qKW_9QQZAztz("lax"_fu)) + " if this is intentional."_fu), ctx, module, _here, ss, _helpers, _helpers_data) };
                                            };
                                        };
                                    };
                                };
                                s_Overload& overload_1 = GET_mut_UTaXftgW(target, module, ss);
                                overload_1.type = retval;
                                if (isInline)
                                    goto BL_71;
                                else if (retval)
                                {
                                    if (is_ref_qNIEFFQB(retval))
                                    {
                                        Lifetime_test_QQCOCwhD(retval.lifetime, false, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort_1);
                                    };
                                    each_yTuKobZL(retval.lifetime.uni0n, _current_fnort_1, retval, ctx, module, _here, ss, _helpers, _helpers_data);
                                    overload_1.flags = out_1.out.flags;

                                    {
                                        const bool rtl = ((args_1.size() == 2) && (overload_1.flags & s_Flags_F_OPERATOR) && hasAssignment_xj37xk9w(overload_1.name));
                                        isRTL_set_lAvCNnZQ(overload_1, rtl);
                                    };
                                    if (change)
                                        overload_1.status |= s_SolverStatus_SS_UPDATED;

                                    if (!isNative && !isInline && !isUnspec)
                                    {
                                        const int sourceModid = tEmplate.node.token.modid;
                                        fu_STR shortModuleName = ((sourceModid != module.modid) ? (sourceModid && module.modid ? getShortModuleName_ghRLOdAK(ctx.modules[sourceModid].fname) : fu_STR{}) : fu_STR(ss.shortModuleName));
                                        fu_STR sig = (((EXT_N3jS4trN(target, ctx, module, ss).local_of ? fu::i64dec(target.index) : fu_STR{}) + shortModuleName) + mangleSignature_BUyvFRff(EXT_N3jS4trN(target, ctx, module, ss).args));
                                        fu_STR _5 {};
                                        overload_1.sighash = (sig ? ((_5 = hash62_AxN9Pg5L(sig, 11)) ? static_cast<fu_STR&&>(_5) : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data)) : fu_STR{});
                                    };
                                    solved_set_YiwDWNfU(target, (!isUnspec ? out_1 : (*(const s_CurrentFn*)fu::NIL)).out, module, ss);
                                    if (!into && !isInline)
                                    {

                                        {
                                            fu::view<s_Argument> args_2 = EXT_N3jS4trN(target, ctx, module, ss).args;
                                            int _6 {};
                                            const int start = ((_6 = (find_ODCLAe2r(mangle, ' ') + 1)) ? _6 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
                                            fu_STR mangle_1 = (fu::slice(mangle, 0, start) + mangleArgTypes_mixhqiQx(args_2));
                                            if (add_P2VwYqz5(mangles, mangle_1))
                                            {
                                                const s_Target preexisting { get_jKIIMy2f(ss._specs, mangle_1) };
                                                if (preexisting)
                                                {
                                                    rem_lXJbAxiW(mangles, mangle_1);
                                                    resetSpec_5OB5uK9p(preexisting, maybeLast, isInline, mangles, currentSpec, ctx, module, _here, ss, _helpers, _helpers_data);
                                                    return preexisting;
                                                }
                                                else
                                                    setSpec_60Er3RXb(mangle_1, currentSpec, true, false, isInline, ctx, module, _here, ss, _helpers, _helpers_data);

                                            };
                                        };
                                        resetSpec_5OB5uK9p(target, false, isInline, mangles, currentSpec, ctx, module, _here, ss, _helpers, _helpers_data);
                                    };
                                }
                                else
                                    BUG_k3P6Th3U("updateScope: no return type."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

                            };
                        };
                      } BL_71:;
                    };
                    /*MOV*/ fu_STR name {};
                    s_FxMask fx_mask {};
                    if (isNative)
                    {
                        for (int i_3 = 0; i_3 < n_body.items.size(); i_3++)
                        {
                            const fu_STR& item = n_body.items[i_3].value;
                            if (starts_fjBQS6rr(item, '|'))
                            {
                                s_FxMask _7 {};
                                fx_mask |= ((item == "|output"_fu) ? s_FxMask(EFFECTS_output) : ((_7 = parse_ymQt1u86(fu::get_view(item, 1, item.size()), s_FxMask{})) ? _7 : fail_7KwuQpwr(("Invalid |Fx mask: "_fu + qBAD_9QQZAztz(item)), ctx, module, _here, ss, _helpers, _helpers_data)));
                            }
                            else
                                name += ("\n"_fu + item);

                        };
                    }
                    else
                        fx_mask |= s_FxMask((s_FxMask_Fx_NotDeadCode | s_FxMask_Fx_Throws));

                    if (!(name))
                        name = (n_fn.value ? n_fn.value : fail_7KwuQpwr("TODO anonymous fns"_fu, ctx, module, _here, ss, _helpers, _helpers_data));

                    s_Overload& overload = GET_mut_UTaXftgW(target, module, ss);
                    overload.name = static_cast<fu_STR&&>(name);
                    overload.kind = (isUnspec ? s_kind_template : (isNative ? s_kind___native : (isInline ? s_kind_inline : s_kind_fn)));
                    s_Extended& ext = EXT_mut_ZuyZYWC3(target, module, ss);
                    ext.tEmplate = tEmplate;
                    ext.spec_of = overloadIdx;
                    ext.fx_mask = fx_mask;
                };
                bool didSetBody = false;

                { {
                    if (!isInline && !isUnspec)
                    { {
                        /*MOV*/ s_Type retval = static_cast<s_Type&&>(ret_seed);
                        if (!isNative)
                        {
                            /*MOV*/ s_SolvedNode s_body = solveBlock_a06G0wq6(n_body, ret_expect, target.index, s_HelpersMask((s_HelpersMask((s_HelpersMask((s_HelpersMask_HM_Function | s_HelpersMask_HM_CanReturn)) | s_HelpersMask_HM_LabelUsed)) | ((n_fn.flags & s_Flags_F_LAMBDA) ? s_HelpersMask_HM_Lambda : s_HelpersMask{}))), n_fn.value, 0, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort_1);
                            fu_STR mustBecomeInlineBecause = currentFn_mustBecomeInline_Q8rXLTyL(_current_fn);
                            if (mustBecomeInlineBecause)
                            {
                                if (isFirst)
                                {
                                    if (asserts & s_DeclAsserts_A_NOFLOW)
                                        fail_7KwuQpwr(("Function is not noflow: "_fu + qBAD_9QQZAztz(mustBecomeInlineBecause)), ctx, module, _here, ss, _helpers, _helpers_data);
                                    else
                                    {
                                        s_Overload& o = GET_mut_UTaXftgW(target, module, ss);
                                        o.kind = s_kind_inline;
                                        o.type = static_cast<s_Type&&>(ret_expect);
                                        goto BL_131;
                                    };
                                }
                                else
                                    fail_7KwuQpwr("Function wants to become inline on after first solve."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

                            }
                            else
                            {
                                const s_HelpersData* BL_140_v;
                                retval = (__extension__ (
                                {
                                    const s_Helpers& h = s_body.helpers;
                                    BL_140_v = &(_helpers_data[h.index]);
                                (void)0;}), *BL_140_v).ret_actual;
                                checkAssignable_iqrEhneZ(retval, s_body.type, "reval after runAllPasses"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), false, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort_1);
                                const int idx_body = (outItems_QydiSOHB(_current_fn).size() + FN_BODY_BACK);
                                outItems_QydiSOHB(_current_fn).mutref(idx_body) = static_cast<s_SolvedNode&&>((s_body ? s_body : BUG_k3P6Th3U("falsy body"_fu, ctx, module, _here, ss, _helpers, _helpers_data)));
                                didSetBody = true;
                            };
                        };
                        const s_CurrentFn& out_1 = _current_fn;
                        s_Type retval_1 = static_cast<s_Type&&>(retval);
                        const bool maybeLast = true;
                        _here = (n_fn.token ? n_fn.token : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
                        if (GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).status & s_SolverStatus_SS_DIRTY)
                        {
                            GET_mut_UTaXftgW(target, module, ss).status |= s_SolverStatus_SS_UPDATED;
                            goto BL_132;
                        }
                        else
                        {
                            fu::view<s_SolvedNode> items_1 = out_1.out.items;
                            const int N = (items_1.size() + FN_ARGS_BACK);
                            int min = 0;
                            int max = 0;
                            const s_NativeHacks NativeHacks = (isNative ? NativeHacks_FkHhiw9v(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).name) : s_NativeHacks{});
                            int numArgsWritten = 0;
                            fu_VEC<s_Argument> args_1 {};
                            for (int i_3 = 0; i_3 < N; i_3++)
                            {
                                const s_SolvedNode& argNode = items_1[i_3];
                                if (!(argNode.kind == s_kind_letdef))
                                {
                                    if (argNode.target)
                                        BUG_k3P6Th3U(("Argnode is not letdef, but has a target: "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(argNode.target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);

                                };
                                const s_SolvedNode& argNode_1 = ((argNode.kind == s_kind_letdef) ? GET_ryFyPS6P(argNode.target, ctx, module, _here, ss, _helpers, _helpers_data).solved : argNode);
                                if (argNode_1.kind == s_kind_let)
                                {
                                    fu_STR name { argNode_1.value };
                                    /*MOV*/ fu_STR autocall = ((argNode_1.flags & s_Flags_F_COMPOUND_ID) ? CompoundArgID_outerSplice_c0PH6QuQ(name, ctx, module, _here, ss, _helpers, _helpers_data) : fu_STR{});
                                    const bool isImplicit = !!(argNode_1.flags & s_Flags_F_IMPLICIT);
                                    const s_Target& argTarget = argNode_1.target;
                                    const bool written_via = (!isUnspec && is_mutref_8RliRHyJ(argNode_1.type, _here, ctx) && (isNative || has_qNZlwBKS(out_1.events.ever_written, argTarget.index)));
                                    /*MOV*/ s_BitSet soft_risk {};
                                    /*MOV*/ s_BitSet hard_risk {};
                                    if (written_via)
                                    {
                                        numArgsWritten++;
                                        if (!isNative)
                                        {
                                            ArgsAtRisk_list_Mg6wScVC(soft_risk, out_1.flow, i_3, out_1.flow.at_soft_risk);
                                            ArgsAtRisk_list_Mg6wScVC(hard_risk, out_1.flow, i_3, out_1.flow.at_hard_risk);
                                            if (TODO_FIX_isArray_qNIEFFQB(argNode_1.type))
                                            {
                                                s_BitSet soft { soft_risk };
                                                and_not_assign_30J7m8SX(soft, hard_risk);
                                                each_LBIBUB5I(soft, items_1, hard_risk, ctx, module, _here, ss, _helpers, _helpers_data);
                                            };
                                        }
                                        else
                                        {
                                            add_range_7V2wMoqU(soft_risk, N);
                                            rem_uczByTOp(soft_risk, i_3);
                                            if (!NativeHacks.soft_risk)
                                                hard_risk = soft_risk;

                                        };
                                    };
                                    if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE)) && written_via)
                                    {
                                        fail_7KwuQpwr(((((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not pure, writes to argument "_fu) + qID_9QQZAztz(human_yoPbxz1W(name, ctx, module, _here, ss, _helpers, _helpers_data))) + ":\n"_fu) + qSTACK_YECBRXJx(target, out_1.out, Region_fromLocal_eorXYpEE(argTarget.index), fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
                                    }
                                    else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_CTX)) && isImplicit && written_via)
                                    {
                                        fail_7KwuQpwr(((((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not purectx, writes to implicit argument "_fu) + qID_9QQZAztz(human_yoPbxz1W(name, ctx, module, _here, ss, _helpers, _helpers_data))) + ":\n"_fu) + qSTACK_YECBRXJx(target, out_1.out, Region_fromLocal_eorXYpEE(argTarget.index), fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
                                    }
                                    else if (maybeLast && s_DeclAsserts((asserts & s_DeclAsserts_A_NOVEC)) && !is_trivial_ChYpFATl(argNode_1.type, ctx, module) && (is_rx_copy_6qTx5aCK(argNode_1.type) || is_rx_resize_6qTx5aCK(argNode_1.type)))
                                        fail_7KwuQpwr(((((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not novec, argument "_fu) + qID_9QQZAztz(human_yoPbxz1W(name, ctx, module, _here, ss, _helpers, _helpers_data))) + " is "_fu) + humanizeType_3wOVPKQg(argNode_1.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort_1)), ctx, module, _here, ss, _helpers, _helpers_data);
                                    else
                                    {
                                        s_BitSet _8 {};
                                        s_Argument arg = (_8 = static_cast<s_BitSet&&>(soft_risk), s_Argument { fu_STR(name), static_cast<fu_STR&&>(autocall), s_Type(argNode_1.type), s_SolvedNode((!isImplicit ? argNode_1.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), (argNode_1.flags | (written_via ? s_Flags_F_WRITTEN_TO : s_Flags{})), int(argTarget.index), static_cast<s_BitSet&&>(_8), static_cast<s_BitSet&&>(hard_risk) });
                                        if (arg.type || isUnspec)
                                        {
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

                                            if (is_ref_qNIEFFQB(retval_1) && is_ref_qNIEFFQB(argNode_1.type))
                                            {
                                                const s_Region region = Region_fromLocal_eorXYpEE(argTarget.index);
                                                const int idx = find_7ZhIVZth(retval_1.lifetime.uni0n, region);
                                                if ((idx >= 0))
                                                {
                                                    retval_1.lifetime.uni0n.splice(idx, 1);
                                                    add_6jMUfMQL(retval_1.lifetime.uni0n, Region_fromArgPosition_BLLdCVw1(i_3));
                                                };
                                            };
                                        }
                                        else
                                            BUG_k3P6Th3U((("updateScope: Unexpected untyped argument: `"_fu + name) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

                                    };
                                }
                                else
                                {
                                    BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
                                };
                            };
                            s_Overload overload { GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data) };
                            s_Extended& ext = EXT_mut_ZuyZYWC3(target, module, ss);
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
                                        if (!((a.name == b.name) && (ignoreLocalLts_9Mk3WuWo(s_Type(a.type), a) == ignoreLocalLts_9Mk3WuWo(s_Type(b.type), a))))
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
                            if (!isNative)
                                ext.fx_mask = out_1.effects.fx_mask;

                            if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOTHROW)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Throws)))
                            {
                                fail_7KwuQpwr(((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not nothrow, throws here:\n"_fu) + qSTACK_XLAhGn9A(target, out_1.out, s_FxMask_Fx_Throws, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
                            }
                            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOCRASH)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Crashes)))
                            {
                                fail_7KwuQpwr(((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not nocrash, can crash here:\n"_fu) + qSTACK_XLAhGn9A(target, out_1.out, s_FxMask_Fx_Crashes, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
                            }
                            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOIO)) && s_FxMask((ext.fx_mask & s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)))))
                            {
                                fail_7KwuQpwr(((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not noio, performs I/O here:\n"_fu) + qSTACK_XLAhGn9A(target, out_1.out, s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)), fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
                            }
                            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_FX)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Output)))
                            {
                                fail_7KwuQpwr(((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " is not purefx, outputs here:\n"_fu) + qSTACK_XLAhGn9A(target, out_1.out, s_FxMask_Fx_Output, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
                            }
                            else
                            {
                                if (maybeLast)
                                {
                                    if (!(numArgsWritten || ext.fx_mask || !is_void_eqpYb5IC(retval_1) || (overload.flags & s_Flags_F_LAX)))
                                    {
                                        const s_TokenIdx& token = out_1.out.token;

                                        {
                                            s_Warning& a = grow_if_oob_wm6oIO3D(ss._warnings, _current_fn.out.target.index);
                                            if (!(a))
                                            {
                                                a = s_Warning { s_TokenIdx(token), fail_appendStack_ifcuNJ6t((((qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + " does nothing: returns void and has no effects. Make it "_fu) + qKW_9QQZAztz("lax"_fu)) + " if this is intentional."_fu), ctx, module, _here, ss, _helpers, _helpers_data) };
                                            };
                                        };
                                    };
                                };
                                s_Overload& overload_1 = GET_mut_UTaXftgW(target, module, ss);
                                overload_1.type = retval_1;
                                if (isInline)
                                    goto BL_132;
                                else if (retval_1)
                                {
                                    if (is_ref_qNIEFFQB(retval_1))
                                    {
                                        Lifetime_test_QQCOCwhD(retval_1.lifetime, false, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort_1);
                                    };
                                    each_0my8lBqo(retval_1.lifetime.uni0n, _current_fnort_1, retval_1, ctx, module, _here, ss, _helpers, _helpers_data);
                                    overload_1.flags = out_1.out.flags;

                                    {
                                        const bool rtl = ((args_1.size() == 2) && (overload_1.flags & s_Flags_F_OPERATOR) && hasAssignment_xj37xk9w(overload_1.name));
                                        isRTL_set_lAvCNnZQ(overload_1, rtl);
                                    };
                                    if (change)
                                        overload_1.status |= s_SolverStatus_SS_UPDATED;

                                    if (!isNative && !isInline && !isUnspec)
                                    {
                                        const int sourceModid = tEmplate.node.token.modid;
                                        fu_STR shortModuleName = ((sourceModid != module.modid) ? (sourceModid && module.modid ? getShortModuleName_ghRLOdAK(ctx.modules[sourceModid].fname) : fu_STR{}) : fu_STR(ss.shortModuleName));
                                        fu_STR sig = (((EXT_N3jS4trN(target, ctx, module, ss).local_of ? fu::i64dec(target.index) : fu_STR{}) + shortModuleName) + mangleSignature_BUyvFRff(EXT_N3jS4trN(target, ctx, module, ss).args));
                                        fu_STR _9 {};
                                        overload_1.sighash = (sig ? ((_9 = hash62_AxN9Pg5L(sig, 11)) ? static_cast<fu_STR&&>(_9) : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data)) : fu_STR{});
                                    };
                                    solved_set_YiwDWNfU(target, (!isUnspec ? out_1 : (*(const s_CurrentFn*)fu::NIL)).out, module, ss);
                                    if (!into && !isInline)
                                    {

                                        {
                                            fu::view<s_Argument> args_2 = EXT_N3jS4trN(target, ctx, module, ss).args;
                                            int _10 {};
                                            const int start = ((_10 = (find_ODCLAe2r(mangle, ' ') + 1)) ? _10 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
                                            fu_STR mangle_1 = (fu::slice(mangle, 0, start) + mangleArgTypes_mixhqiQx(args_2));
                                            if (add_P2VwYqz5(mangles, mangle_1))
                                            {
                                                const s_Target preexisting { get_jKIIMy2f(ss._specs, mangle_1) };
                                                if (preexisting)
                                                {
                                                    rem_lXJbAxiW(mangles, mangle_1);
                                                    resetSpec_5OB5uK9p(preexisting, maybeLast, isInline, mangles, currentSpec, ctx, module, _here, ss, _helpers, _helpers_data);
                                                    return preexisting;
                                                }
                                                else
                                                    setSpec_60Er3RXb(mangle_1, currentSpec, true, false, isInline, ctx, module, _here, ss, _helpers, _helpers_data);

                                            };
                                        };
                                        resetSpec_5OB5uK9p(target, false, isInline, mangles, currentSpec, ctx, module, _here, ss, _helpers, _helpers_data);
                                    };
                                }
                                else
                                    BUG_k3P6Th3U("updateScope: no return type."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

                            };
                        };
                      } BL_132:;
                    };
                  } BL_131:;
                };
                if (!didSetBody)
                {
                    const s_Overload& o = GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data);
                    if (!(o.kind != s_kind_fn))
                        BUG_k3P6Th3U(((("did not set body on "_fu + qWHAT_vXP1PCtb(o, ctx, module, _here, ss, _helpers, _helpers_data)) + ": "_fu) + humanizeType_3wOVPKQg(o.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort_1)), ctx, module, _here, ss, _helpers, _helpers_data);

                };
            }
            else
                BUG_k3P6Th3U("solveFn: no body."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

        }
        else
            BUG_k3P6Th3U("n_fn not a `fn`."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

    };
    lazySolveEnd_dD7PN0OQ(target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    return target;
}

static bool lazySolveStart_uLb9QxPS(const s_Target& target, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (s_SolverStatus((GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_LAZY)))) != s_SolverStatus_SS_LAZY)
        return false;
    else
    {

        {
            s_Overload& o = GET_mut_UTaXftgW(target, module, ss);
            if (o.status & s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_FINALIZED | s_SolverStatus_SS_DID_START)) | s_SolverStatus_SS_DIRTY)))
                BUG_k3P6Th3U(x7E_sTZRmMq1("SS_DID_START: non-zero solver status: "_fu, str_uDKw0whO(o.status)), ctx, module, _here, ss, _helpers, _helpers_data);
            else
            {
                o.status |= s_SolverStatus_SS_DID_START;
                if (o.kind == s_kind_fn)
                {
                    doTrySpecialize_yiTp1nQi(target, s_Target{}, fu::view<s_SolvedNode>{}, (*(const fu_STR*)fu::NIL), fu::view<int>{}, false, fu::view<fu_VEC<s_Target>>{}, 0, (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                }
                else if (o.kind == s_kind_type)
                    __solveStruct_dyUPsgwi(true, s_Node(EXT_N3jS4trN(target, ctx, module, ss).tEmplate.node), target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                else
                    BUG_k3P6Th3U((x7E_sTZRmMq1("lazySolveStart: kind is `"_fu, str_v3b7EcLt(o.kind)) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

            };
        };
        return true;
    };
}

static fu_STR str_9fnQTj1E(const int min, const int max)
{
    if (min != max)
        return x7E_sTZRmMq1((x7E_sTZRmMq1("["_fu, fu::i64dec(min)) + ", "_fu), fu::i64dec(max)) + "]"_fu;
    else
        return fu::i64dec(min);

}

static void reorderByNumUsings_W26FmZfX(bool& use_reorder, fu_VEC<int>& reorder, fu::view<s_Argument> host_args, const int num_args, const int num_usings)
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

                                #ifndef DEF_find_51aX1qKygWk
                                #define DEF_find_51aX1qKygWk
inline int find_51aX1qKy(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static bool reorderByArgIDs_YLZkzyfx(bool& use_reorder, fu_VEC<int>& reorder, fu::view<fu_STR> names, s_BitSet&& optional, fu::view<s_Argument> host_args, const int num_usings, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    use_reorder = true;
    reorder.clear();
    int used = 0;
    int offset = 0;
    int usings_left = num_usings;
    for (int i = 0; i < host_args.size(); i++)
    {
        int idx = find_51aX1qKy(names, host_args[i].name);
        if (idx < 0)
        {
            if (usings_left > 0)
                usings_left--;
            else
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
            };
        }
        else
        {
            used++;
            rem_uczByTOp(optional, idx);
        };
        reorder.push(int(idx));
    };
    if (usings_left)
        BUG_k3P6Th3U("reorderByArgIDs: usings_left != 0"_fu, ctx, module, _here, ss, _helpers, _helpers_data);
    else
    {
        if (used != names.size())
        {
            for (int i_1 = 0; i_1 < names.size(); i_1++)
            {
                if (!names[i_1])
                    used++;

            };
            if ((used + popcount_AuAxMCl5(optional)) != names.size())
                return false;

        };

        {
            int trailing_misses = 0;
            int non_trailing_misses = 0;
            for (int i_1 = reorder.size(); i_1-- > 0; )
            {
                if ((reorder[i_1] >= 0))
                {
                    while (i_1-- > 0)
                    {
                        if (reorder[i_1] < 0)
                            non_trailing_misses++;

                    };
                    break;
                }
                else
                    trailing_misses++;

            };
            const int trailing_usings = max_F7KakSWb((num_usings - non_trailing_misses), 0);
            if (trailing_misses > trailing_usings)
                reorder.shrink((reorder.size() - (trailing_misses - trailing_usings)));

        };
        if (reorder.size() != names.size())
            return true;
        else
        {
            for (int i_1 = 0; i_1 < reorder.size(); i_1++)
            {
                if (reorder[i_1] != i_1)
                    return true;

            };
            reorder.clear();
            use_reorder = false;
            return true;
        };
    };
}

static fu_STR ERRMSG_findUnmatchedArgName_g2pYlJEG(fu::view<int> reorder, fu::view<fu_STR> names)
{
    s_BitSet used {};
    for (int i = 0; i < reorder.size(); i++)
    {
        const int pos = reorder[i];
        if ((pos >= 0))
            add_uczByTOp(used, pos);

    };
    for (int i_1 = 0; i_1 < names.size(); i_1++)
    {
        if (!has_qNZlwBKS(used, i_1))
            return fu_STR(names[i_1]);

    };
    return "[BUG: findUnmatchedArgName]"_fu;
}

static int findRestStart_ls6d8dRf(const s_Extended& ext)
{
    for (int i = ext.args.size(); i-- > 0; )
    {
        const s_Argument& arg = ext.args[i];
        if (arg.flags & s_Flags_F_REST_ARG)
            return i;
        else if (!(arg.flags & s_Flags_F_IMPLICIT))
            break;

    };
    return ext.args.size();
}

                                #ifndef DEF_grow_if_oob_QXPbltazCvj
                                #define DEF_grow_if_oob_QXPbltazCvj
inline fu_VEC<s_Target>& grow_if_oob_QXPbltaz(fu_VEC<fu_VEC<s_Target>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu_STR qWHAT_udEijxNe(const s_Argument& arg, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return (qKW_9QQZAztz("arg"_fu) + " "_fu) + qID_9QQZAztz(human_yoPbxz1W(arg.name, ctx, module, _here, ss, _helpers, _helpers_data));
}

                                #ifndef DEF_replace_ri7KHFHDbB0
                                #define DEF_replace_ri7KHFHDbB0
inline fu_STR replace_ri7KHFHD(const fu_STR& str, fu::view<char> all, fu::view<char> with)
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

                                #ifndef DEF_only_mJ1bhVdE0l7
                                #define DEF_only_mJ1bhVdE0l7
inline const fu_VEC<s_Target>& only_mJ1bhVdE(fu::view<fu_VEC<s_Target>> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_sTZRmMq1("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Type solveArrlit_itemType_init_uUT6lCU3(const s_Type& head, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_Type _0 {};
    return (_0 = clear_refs_qNIEFFQB(s_Type(head))) ? static_cast<s_Type&&>(_0) : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
}

static s_Type solveArrlit_done_9DFtRM33(const s_Type& itemType)
{
    return createArray_oj1mQ036(itemType);
}

                                #ifndef DEF_x7Ex3D_EHZEiPh81F6
                                #define DEF_x7Ex3D_EHZEiPh81F6
inline fu_STR& x7Ex3D_EHZEiPh8(fu_STR& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

                                #ifndef DEF_str_VIQbqQzTnE4
                                #define DEF_str_VIQbqQzTnE4
inline fu_STR str_VIQbqQzT(fu::view<int> arr)
{
    /*MOV*/ fu_STR result {};
    for (int i = 0; i < arr.size(); i++)
    {
        if ((i == 5) && (arr.size() > 16))
        {
            i = (arr.size() - 5);
            result += (x7E_sTZRmMq1(", ... ("_fu, fu::i64dec((arr.size() - 10))) + " more) ..."_fu);
        };
        result += (i ? ", "_fu : "[ "_fu);
        x7Ex3D_EHZEiPh8(result, fu::i64dec(arr[i]));
    };
    result += (result ? " ]"_fu : "[]"_fu);
    return /*NRVO*/ result;
}
                                #endif

static s_Target GETfn_SIvK7rr7(const int idx, const s_Module& module)
{
    return s_Target { int(module.modid), int(idx) };
}

static fu_STR fnName_qHUdCTUl(const int idx, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (idx)
        return ("`"_fu + GET_ryFyPS6P(GETfn_SIvK7rr7(idx, module), ctx, module, _here, ss, _helpers, _helpers_data).name) + "`"_fu;
    else
        return "global scope"_fu;

}

                                #ifndef DEF_last_gp6HauT4bf0
                                #define DEF_last_gp6HauT4bf0
inline const fu_STR& last_gp6HauT4(fu::view<fu_STR> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

static s_Target tryMatch__mutargs_IBT0nXHk(fu_STR&& id, fu_VEC<int>& reorder_out, fu_VEC<fu_VEC<s_Target>>& conversions_out, fu_STR& error, const bool local_scope, const bool type_annot, const s_Scope& misc_scope, fu::view<s_SolvedNode> args, const s_Flags flags, const s_Target& target, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const int error_len0 = error.size();
    if (SELF_TEST)
    {
        for (int i = 0; i < args.size(); i++)
        {
            if (!args[i].kind)
                BUG_k3P6Th3U("Falsy arg.kind!"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

        };
    };
    s_Target matchIdx {};
    int minArity = args.size();
    const int numUsings = (!type_annot ? countUsings_NBpYwXjU(local_scope, misc_scope, ctx, module, _here, ss, _helpers, _helpers_data) : int{});
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
            names.push(fu_STR(((arg.kind == s_kind_argid) ? (*(_0 = &(((void)(some = true), arg.value))) ? *_0 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data)) : (*(const fu_STR*)fu::NIL))));
            if (arg.flags & s_Flags_F_OPT_ARG)
            {
                minArity--;
                add_uczByTOp(optional, i);
            };
        };
        if (!(some))
        {
            BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
        };
    };
    fu_STR reusable_mangle {};
    fu_VEC<s_Target> extra_items {};
    if (local_scope && !target && !type_annot)
    {
        s_BitSet seen {};
        if (numUsings)
        {
            each_6kC7d1dY((local_scope ? ss._scope : misc_scope).usings, (local_scope ? ss._ss.usings : fu::view<s_ScopeSkip>{}), 0, id, local_scope, extra_items, seen, ctx, module, _here, ss, _helpers, _helpers_data);
        };
        if (flags & ((s_Flags_F_ACCESS | s_Flags_F_METHOD) | s_Flags_F_OPERATOR))
            for (int i = 0; i < args.size(); i++)
                visitTypeImports_YqU2qw9t(args[i].type, id, local_scope, extra_items, seen, ctx, module, ss);
;
    };
    const int considerFieldItems = (local_scope && !target && !type_annot && ((flags & s_Flags_F_ACCESS) || !minArity) && (minArity <= 1) ? maxArity : (*(const int*)fu::NIL));
    fu_VEC<fu_STR> alternate_ids {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    fu_VEC<int> reorder {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        if (!local_scope && (extra_items || field_items_qoS1rQUb(considerFieldItems, ss)))
            BUG_k3P6Th3U("!local_scope but extra_items or field_items"_fu, ctx, module, _here, ss, _helpers, _helpers_data);
        else
        {
            bool shadows {};
            while ((overloadIdx = (target ? search_RzUVEZib(target, scope_iterator) : (local_scope ? search_jNlWknKv(((flags & s_Flags_F_IMPLICIT) ? ss._scope.implicits : ss._scope.items), id, scope_iterator, ((flags & s_Flags_F_IMPLICIT) ? ss._ss.implicits : ss._ss.items), shadows, extra_items, fu_VEC<s_ScopeItem>(field_items_qoS1rQUb(considerFieldItems, ss))) : search_R5Xl5zvH(fu::get_view(misc_scope.items, 0, misc_scope.pub_items), id, scope_iterator)))))
            { {
                if (!local_scope && shadows)
                    BUG_k3P6Th3U("!local_scope but shadows"_fu, ctx, module, _here, ss, _helpers, _helpers_data);
                else
                {
                    bool DEBUG_mustMatch = false;
                    bool TODO_FIX_skip_autocalls = false;
                    bool TODO_FIX_dontBotherSpecializing = false;
                    conversions.clear();
                    reorder.clear();
                    while (true)
                    {
                        if (lazySolveStart_uLb9QxPS(overloadIdx, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort))
                            continue;
                        else
                        {
                            const s_Overload& overload = GET_ryFyPS6P(overloadIdx, ctx, module, _here, ss, _helpers, _helpers_data);
                            const s_kind kind = overload.kind;
                            const bool isType = (kind == s_kind_type);
                            if (!isType && type_annot)
                            {
                                if (DEBUG_mustMatch || error)
                                {
                                    fu_STR err = ((qWHAT_vXP1PCtb(GET_ryFyPS6P(overloadIdx, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + ": "_fu) + "Not a type."_fu);
                                    if (DEBUG_mustMatch)
                                        BUG_k3P6Th3U(("mustMatch.matchFail: "_fu + err), ctx, module, _here, ss, _helpers, _helpers_data);
                                    else
                                        error += ("\n\n\t"_fu + err);

                                };
                                goto BL_20;
                            }
                            else
                            {
                                if (minArity && isType && !target)
                                {
                                    const fu_STR& alt = overload.type.vtype.canon;
                                    if (alt != id)
                                        alternate_ids.push(fu_STR(alt));

                                };
                                const s_Extended& arity = EXT_N3jS4trN(overloadIdx, ctx, module, ss);
                                const bool isZeroInit = (isType && !explicitArity);
                                if (!isZeroInit && ((arity.max < minArity) || (arity.min > maxArity)))
                                {
                                    if (DEBUG_mustMatch || error)
                                    {
                                        fu_STR err = ((qWHAT_vXP1PCtb(GET_ryFyPS6P(overloadIdx, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + ": "_fu) + (((("Wrong number of arguments: expects "_fu + str_9fnQTj1E(arity.min, arity.max)) + ", got "_fu) + str_9fnQTj1E(minArity, maxArity)) + "."_fu));
                                        if (DEBUG_mustMatch)
                                            BUG_k3P6Th3U(("mustMatch.matchFail: "_fu + err), ctx, module, _here, ss, _helpers, _helpers_data);
                                        else
                                            error += ("\n\n\t"_fu + err);

                                    };
                                    goto BL_20;
                                }
                                else
                                {
                                    fu_VEC<s_Argument> host_args { arity.args };
                                    const int num_usings = (!isZeroInit && (arity.min > explicitArity) ? (arity.min - explicitArity) : int{});
                                    bool use_reorder = false;
                                    if (!names)
                                        reorderByNumUsings_W26FmZfX(use_reorder, reorder, host_args, args.size(), num_usings);
                                    else if (!reorderByArgIDs_YLZkzyfx(use_reorder, reorder, names, s_BitSet(optional), host_args, num_usings, ctx, module, _here, ss, _helpers, _helpers_data))
                                    {
                                        if (DEBUG_mustMatch || error)
                                        {
                                            fu_STR err = ((qWHAT_vXP1PCtb(GET_ryFyPS6P(overloadIdx, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + ": "_fu) + ("Unknown argument name: "_fu + ERRMSG_findUnmatchedArgName_g2pYlJEG(reorder, names)));
                                            if (DEBUG_mustMatch)
                                                BUG_k3P6Th3U(("mustMatch.matchFail: "_fu + err), ctx, module, _here, ss, _helpers, _helpers_data);
                                            else
                                                error += ("\n\n\t"_fu + err);

                                        };
                                        goto BL_20;
                                    };
                                    if (optional && reorder && (reorder.size() < args.size()) && (reorder.size() < arity.max))
                                    {
                                        if (DEBUG_mustMatch || error)
                                        {
                                            fu_STR err = ((qWHAT_vXP1PCtb(GET_ryFyPS6P(overloadIdx, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + ": "_fu) + "Optional argument ambiguity, not all optional arguments provided, and not all callsite arguments used. Cannot distinguish from a typo. [TODO LIST MISSING ARGS]"_fu);
                                            if (DEBUG_mustMatch)
                                                BUG_k3P6Th3U(("mustMatch.matchFail: "_fu + err), ctx, module, _here, ss, _helpers, _helpers_data);
                                            else
                                                error += ("\n\n\t"_fu + err);

                                        };
                                        goto BL_20;
                                    }
                                    else
                                    {
                                        s_Type REST_TYPE {};
                                        const int REST_START = findRestStart_ls6d8dRf(arity);
                                        const int N = max_F7KakSWb((use_reorder ? reorder.size() : args.size()), (!isZeroInit ? arity.min : (*(const int*)fu::NIL)));
                                        if (N)
                                        {
                                            s_Type REST_EXPECT {};
                                            if (REST_START < N)
                                            {
                                                const s_Type& expect = host_args[REST_START].type;
                                                if (expect)
                                                {
                                                    s_Type _1 {};
                                                    REST_EXPECT = ((_1 = tryClear_sliceable_qNIEFFQB(expect)) ? static_cast<s_Type&&>(_1) : fail_7KwuQpwr(((GET_ryFyPS6P(overloadIdx, ctx, module, _here, ss, _helpers, _helpers_data).name + ": Rest argument annotation is not an array: "_fu) + humanizeType_3wOVPKQg(expect, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data));
                                                };
                                                if (reorder && (reorder.size() < args.size()))
                                                {
                                                    for (int i = 0; i < args.size(); i++)
                                                    {
                                                        if (!has_qNZlwBKS(optional, i) && !has_Q09HnW0u(reorder, i))
                                                            reorder += int(i);

                                                    };
                                                };
                                            };
                                            if ((reorder.size() >= args.size()) || !reorder || optional)
                                            {
                                                for (int i = 0; i < N; i++)
                                                {
                                                    const bool rest = (i >= REST_START);
                                                    s_Argument host_arg { host_args[(rest ? REST_START : i)] };
                                                    s_Type expect { (rest ? REST_EXPECT : host_arg.type) };
                                                    if (TODO_FIX_skip_autocalls && rest)
                                                        continue;
                                                    else
                                                    {
                                                        const int callsiteIndex = (use_reorder ? int(reorder[i]) : ((i < args.size()) ? int(i) : -1));
                                                        if (callsiteIndex < 0)
                                                        {
                                                            if (host_arg.dEfault || (host_arg.flags & s_Flags_F_IMPLICIT))
                                                                continue;
                                                            else
                                                            {
                                                                if (!((host_arg.flags & s_Flags_F_MUSTNAME) || (flags & s_Flags_F_CONVERSION)))
                                                                {
                                                                    if (expect)
                                                                    {
                                                                        /*MOV*/ fu_VEC<s_Target> conversion = tryConvert_sOlyaEcz(expect, (*(const s_Type*)fu::NIL), (*(const s_SolvedNode*)fu::NIL), local_scope, misc_scope, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                                                                        if (conversion)
                                                                        {
                                                                            grow_if_oob_QXPbltaz(conversions, i) = static_cast<fu_VEC<s_Target>&&>(conversion);
                                                                            continue;
                                                                        };
                                                                    };
                                                                };
                                                                if (DEBUG_mustMatch || error)
                                                                {
                                                                    fu_STR err = ((qWHAT_vXP1PCtb(GET_ryFyPS6P(overloadIdx, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + ": "_fu) + ("Cannot infer missing argument "_fu + qWHAT_udEijxNe(host_arg, ctx, module, _here, ss, _helpers, _helpers_data)));
                                                                    if (DEBUG_mustMatch)
                                                                        BUG_k3P6Th3U(("mustMatch.matchFail: "_fu + err), ctx, module, _here, ss, _helpers, _helpers_data);
                                                                    else
                                                                        error += ("\n\n\t"_fu + err);

                                                                };
                                                                goto BL_20;
                                                            };
                                                        }
                                                        else
                                                        {
                                                            if (host_arg.flags & s_Flags_F_MUSTNAME)
                                                            {
                                                                if ((names.size() <= callsiteIndex) || !names[callsiteIndex])
                                                                {
                                                                    if (DEBUG_mustMatch || error)
                                                                    {
                                                                        fu_STR err = ((qWHAT_vXP1PCtb(GET_ryFyPS6P(overloadIdx, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + ": "_fu) + ("Argument must be :explicitly named "_fu + qWHAT_udEijxNe(host_arg, ctx, module, _here, ss, _helpers, _helpers_data)));
                                                                        if (DEBUG_mustMatch)
                                                                            BUG_k3P6Th3U(("mustMatch.matchFail: "_fu + err), ctx, module, _here, ss, _helpers, _helpers_data);
                                                                        else
                                                                            error += ("\n\n\t"_fu + err);

                                                                    };
                                                                    goto BL_20;
                                                                };
                                                            };
                                                            if (host_arg.autocall && !TODO_FIX_skip_autocalls)
                                                            {
                                                                fu_VEC<s_SolvedNode> autocall_args {};
                                                                fu_VEC<int> autocall_reorder {};
                                                                fu_VEC<fu_VEC<s_Target>> autocall_conversions {};
                                                                autocall_args.resize(1);
                                                                autocall_args.mutref(0) = s_SolvedNode(args[callsiteIndex]);
                                                                fu_STR autocall_error = (error ? (((("Cannot match argument "_fu + qWHAT_udEijxNe(host_arg, ctx, module, _here, ss, _helpers, _helpers_data)) + " autocall "_fu) + qCODE_9QQZAztz(host_arg.autocall)) + ": "_fu) : fu_STR{});
                                                                const s_Target t = tryMatch__mutargs_IBT0nXHk(fu_STR(host_arg.autocall), autocall_reorder, autocall_conversions, autocall_error, local_scope, false, misc_scope, autocall_args, s_Flags{}, s_Target{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                                                                if (!t)
                                                                {
                                                                    if (DEBUG_mustMatch || error)
                                                                    {
                                                                        fu_STR err = ((qWHAT_vXP1PCtb(GET_ryFyPS6P(overloadIdx, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + ": "_fu) + replace_ri7KHFHD(autocall_error, "\t"_fu, "\t\t"_fu));
                                                                        if (DEBUG_mustMatch)
                                                                            BUG_k3P6Th3U(("mustMatch.matchFail: "_fu + err), ctx, module, _here, ss, _helpers, _helpers_data);
                                                                        else
                                                                            error += ("\n\n\t"_fu + err);

                                                                    };
                                                                    goto BL_20;
                                                                }
                                                                else
                                                                {
                                                                    if (autocall_conversions)
                                                                    {
                                                                        grow_if_oob_QXPbltaz(conversions, i) += only_mJ1bhVdE(autocall_conversions);
                                                                    };
                                                                    grow_if_oob_QXPbltaz(conversions, i) += s_Target(t);
                                                                    if (autocall_reorder.size() < 2)
                                                                    {
                                                                        if (is_never_eqpYb5IC(GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).type))
                                                                            TODO_FIX_dontBotherSpecializing = true;

                                                                    }
                                                                    else
                                                                        BUG_k3P6Th3U("autocall: reorder"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

                                                                };
                                                            };
                                                            const int hasConv = ((conversions.size() > i) ? conversions[i].size() : int{});
                                                            s_Type actual { (hasConv ? GET_ryFyPS6P(last_SLwrTQE9(conversions[i]), ctx, module, _here, ss, _helpers, _helpers_data).type : args[callsiteIndex].type) };
                                                            if (!expect)
                                                            {
                                                                if ((host_arg.flags & s_Flags_F_REF) && !is_mutref_8RliRHyJ(actual, _here, ctx))
                                                                {
                                                                    if (DEBUG_mustMatch || error)
                                                                    {
                                                                        fu_STR err = ((qWHAT_vXP1PCtb(GET_ryFyPS6P(overloadIdx, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + ": "_fu) + ((("Argument "_fu + qWHAT_udEijxNe(host_arg, ctx, module, _here, ss, _helpers, _helpers_data)) + " expects a mutref, got "_fu) + humanizeType_3wOVPKQg(actual, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)));
                                                                        if (DEBUG_mustMatch)
                                                                            BUG_k3P6Th3U(("mustMatch.matchFail: "_fu + err), ctx, module, _here, ss, _helpers, _helpers_data);
                                                                        else
                                                                            error += ("\n\n\t"_fu + err);

                                                                    };
                                                                    goto BL_20;
                                                                }
                                                                else
                                                                    continue;

                                                            }
                                                            else if (isAssignableAsArgument_d2HKSF3T(expect, (actual ? actual : BUG_k3P6Th3U("tryMatch: !actual"_fu, ctx, module, _here, ss, _helpers, _helpers_data)), false))
                                                                continue;
                                                            else
                                                            {
                                                                if (!hasConv)
                                                                {
                                                                    const s_SolvedNode& arg = args[callsiteIndex];
                                                                    const s_SolvedNode& arg_1 = ((arg.kind == s_kind_argid) ? only_7ZMqiNoZ(arg.items) : arg);
                                                                    s_Type retype = tryRetyping_yDcFD2W2(arg_1, expect, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
                                                                    if (retype && isAssignableAsArgument_d2HKSF3T(expect, retype, false))
                                                                        continue;

                                                                };
                                                                if (!(flags & s_Flags_F_CONVERSION))
                                                                {
                                                                    fu_VEC<s_Target> conversion = tryConvert_sOlyaEcz(expect, actual, (!hasConv ? args[callsiteIndex] : (*(const s_SolvedNode*)fu::NIL)), local_scope, misc_scope, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                                                                    if (conversion)
                                                                    {
                                                                        grow_if_oob_QXPbltaz(conversions, i) += conversion;
                                                                        continue;
                                                                    };
                                                                };
                                                                if (DEBUG_mustMatch || error)
                                                                {
                                                                    fu_STR err = ((qWHAT_vXP1PCtb(GET_ryFyPS6P(overloadIdx, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + ": "_fu) + ((((("Argument "_fu + qWHAT_udEijxNe(host_arg, ctx, module, _here, ss, _helpers, _helpers_data)) + " expects "_fu) + humanizeType_3wOVPKQg(expect, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + ", got "_fu) + humanizeType_3wOVPKQg(actual, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)));
                                                                    if (DEBUG_mustMatch)
                                                                        BUG_k3P6Th3U(("mustMatch.matchFail: "_fu + err), ctx, module, _here, ss, _helpers, _helpers_data);
                                                                    else
                                                                        error += ("\n\n\t"_fu + err);

                                                                };
                                                                goto BL_20;
                                                            };
                                                        };
                                                    };
                                                };
                                                if (REST_START < N)
                                                {
                                                    for (int i_1 = REST_START; i_1 < N; i_1++)
                                                    {
                                                        const int hasConv = ((conversions.size() > i_1) ? conversions[i_1].size() : int{});
                                                        const int callsiteIndex = (use_reorder ? reorder[i_1] : i_1);
                                                        const s_Type& actual = (hasConv ? GET_ryFyPS6P(last_SLwrTQE9(conversions[i_1]), ctx, module, _here, ss, _helpers, _helpers_data).type : args[callsiteIndex].type);
                                                        s_Type _2 {};
                                                        fu::never BL_104_v {};
                                                        REST_TYPE = ((i_1 == REST_START) ? solveArrlit_itemType_init_uUT6lCU3(actual, ctx, module, _here, ss, _helpers, _helpers_data) : ((_2 = type_trySuper_HuTHARyU(REST_TYPE, actual, false)) ? static_cast<s_Type&&>(_2) : (__extension__ (
                                                        {
                                                            if (DEBUG_mustMatch || error)
                                                            {
                                                                fu_STR err = ((qWHAT_vXP1PCtb(GET_ryFyPS6P(overloadIdx, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + ": "_fu) + ((("Rest arguments have no common supertype: "_fu + humanizeType_3wOVPKQg(REST_TYPE, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + " <- "_fu) + humanizeType_3wOVPKQg(actual, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)));
                                                                if (DEBUG_mustMatch)
                                                                    BUG_k3P6Th3U(("mustMatch.matchFail: "_fu + err), ctx, module, _here, ss, _helpers, _helpers_data);
                                                                else
                                                                    error += ("\n\n\t"_fu + err);

                                                            };
                                                            goto BL_20;
                                                        (void)0;}), static_cast<fu::never&&>(BL_104_v))));
                                                    };
                                                    REST_TYPE = solveArrlit_done_9DFtRM33(REST_TYPE);
                                                };
                                            }
                                            else
                                                BUG_k3P6Th3U(x7E_sTZRmMq1((x7E_sTZRmMq1("reorder < args:\n\t\treorder="_fu, str_VIQbqQzT(reorder)) + "\n\t\t#args="_fu), fu::i64dec(args.size())), ctx, module, _here, ss, _helpers, _helpers_data);

                                        };
                                        if ((kind == s_kind_template) && !TODO_FIX_dontBotherSpecializing)
                                        {
                                            fu_STR cant_reuse {};
                                            fu_STR& args_mangled = ((use_reorder || conversions) ? cant_reuse : reusable_mangle);
                                            const s_Target specIdx = trySpecialize_ad6xSK3T(overloadIdx, args, args_mangled, REST_START, REST_TYPE, reorder, use_reorder, conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                                            if (is_SPECFAIL_eDkkXeHK(specIdx))
                                            {
                                                if (DEBUG_mustMatch || error)
                                                {
                                                    fu_STR err = ((qWHAT_vXP1PCtb(GET_ryFyPS6P(overloadIdx, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data) + ": "_fu) + ("Could not specialize: "_fu + ss._spec_errors[specIdx.index]));
                                                    if (DEBUG_mustMatch)
                                                        BUG_k3P6Th3U(("mustMatch.matchFail: "_fu + err), ctx, module, _here, ss, _helpers, _helpers_data);
                                                    else
                                                        error += ("\n\n\t"_fu + err);

                                                };
                                                goto BL_20;
                                            }
                                            else
                                            {
                                                overloadIdx = specIdx;
                                                DEBUG_mustMatch = true;
                                                TODO_FIX_skip_autocalls = true;
                                                continue;
                                            };
                                        }
                                        else if (matchIdx)
                                        {
                                            const s_Target& PREV = matchIdx;
                                            const s_Target& NEXT = overloadIdx;
                                            const int inner = localOf_JIWfMq4F(PREV, ctx, module, ss);
                                            const int outer = localOf_JIWfMq4F(NEXT, ctx, module, ss);
                                            const int callsite = _current_fn.out.target.index;
                                            if (SELF_TEST && (GET_ryFyPS6P(PREV, ctx, module, _here, ss, _helpers, _helpers_data).kind != s_kind_field))
                                            {
                                                int _c = callsite;
                                                while (_c > inner)
                                                    _c = localOf_JIWfMq4F(GETfn_SIvK7rr7(_c, module), ctx, module, ss);

                                                if (_c == inner)
                                                {
                                                    int _i = inner;
                                                    while (_i > outer)
                                                        _i = localOf_JIWfMq4F(GETfn_SIvK7rr7(_i, module), ctx, module, ss);

                                                    if (!(_i == outer))
                                                        BUG_k3P6Th3U(((((((((((("Leaking `"_fu + id) + "` between functions [inner/outer]: "_fu) + fnName_qHUdCTUl(inner, ctx, module, _here, ss, _helpers, _helpers_data)) + "::"_fu) + qWHAT_vXP1PCtb(GET_ryFyPS6P(PREV, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)) + " and "_fu) + fnName_qHUdCTUl(outer, ctx, module, _here, ss, _helpers, _helpers_data)) + "::"_fu) + qWHAT_vXP1PCtb(GET_ryFyPS6P(NEXT, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)) + " as seen from "_fu) + fnName_qHUdCTUl(callsite, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);

                                                }
                                                else
                                                    BUG_k3P6Th3U(((((((("Leaking `"_fu + id) + "` between functions [inner/callsite]: "_fu) + fnName_qHUdCTUl(inner, ctx, module, _here, ss, _helpers, _helpers_data)) + "::"_fu) + qWHAT_vXP1PCtb(GET_ryFyPS6P(PREV, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)) + " is seen from "_fu) + fnName_qHUdCTUl(callsite, ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);

                                            };
                                            fail_7KwuQpwr((((((((((((("Ambiguous callsite, matches multiple items in scope:"_fu + "\n\n\t"_fu) + explainWhichFn_WGGY3RRb(PREV, conversions_out, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + " from "_fu) + fnName_qHUdCTUl(inner, ctx, module, _here, ss, _helpers, _helpers_data)) + " and "_fu) + "\n\n\t"_fu) + explainWhichFn_WGGY3RRb(NEXT, conversions, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + " from "_fu) + fnName_qHUdCTUl(outer, ctx, module, _here, ss, _helpers, _helpers_data)) + ", as seen from "_fu) + fnName_qHUdCTUl(callsite, ctx, module, _here, ss, _helpers, _helpers_data)) + "."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
                                        }
                                        else
                                        {
                                            matchIdx = overloadIdx;
                                            std::swap(reorder, reorder_out);
                                            std::swap(conversions, conversions_out);
                                            if (shadows)
                                                goto LL_19;
                                            else
                                                break;

                                        };
                                    };
                                };
                            };
                        };
                    };
                };
              } BL_20:;
            } LL_19:;

            if (!alternate_ids)
                break;
            else
            {
                id = last_gp6HauT4(alternate_ids);
                alternate_ids.pop();
            };
        };
    };
    if (error && (error.size() == error_len0) && !matchIdx)
        error += (qID_9QQZAztz(id) + " is not defined here."_fu);

    return matchIdx;
}

static void foreach_xPnJLRgJ(const s_Target& t, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const s_Type& actual, const s_SolvedNode& retype, const bool local_scope, const s_Scope& misc_scope, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ s_Type arg0type0 { ss.TODO_FIX_convert_args[0].type };
    if (!nullary)
    {
        if (root && retype)
            ss.TODO_FIX_convert_args.mutref(0) = s_SolvedNode(retype);
        else
            ss.TODO_FIX_convert_args.mutref(0).type = s_Type(from);

    };
    fu_DEFER(if (!nullary)
    {
        if (root && retype)
            ss.TODO_FIX_convert_args.mutref(0) = s_SolvedNode(arg0);
        else
            ss.TODO_FIX_convert_args.mutref(0).type = static_cast<s_Type&&>(arg0type0);

    });
    fu_STR error {};
    s_Target candidate {};
    if (nullary || (candidate = tryMatch__mutargs_IBT0nXHk(fu_STR{}, TODO_FIX_reorder, TODO_FIX_conversions, error, false, false, (*(const s_Scope*)fu::NIL), fu_VEC<s_SolvedNode>(ss.TODO_FIX_convert_args), s_Flags_F_CONVERSION, t, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort)))
    {
        const s_Target& t_1 = (nullary ? t : candidate);
        const s_Overload& convert = GET_ryFyPS6P(t_1, ctx, module, _here, ss, _helpers, _helpers_data);
        if (convert.type)
        {
            s_Type convertType = ((convert.kind == s_kind_field) ? add_refs_BuHxEtjM((from ? from : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data)), s_Type(convert.type)) : s_Type(convert.type));
            const bool isStruct = isStruct_FNWlOhLB(convertType);
            if (!(s_SolverStatus((convert.status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_FINALIZED)))) == s_SolverStatus_SS_DID_START))
            {
                if (isAssignableAsArgument_d2HKSF3T(expect, convertType, false))
                {
                    if (match)
                    {
                        fu_STR suffix = (((("\n\t\t"_fu + explainConversion_lnYYvsS3(match, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + "\n\tand:"_fu) + "\n\t\t"_fu) + explainConversion_lnYYvsS3((path + t_1), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort));
                        if (actual)
                            fail_7KwuQpwr(((((("Conversion ambiguity, multiple ways to convert `"_fu + humanizeType_3wOVPKQg(actual, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + "` into `"_fu) + humanizeType_3wOVPKQg(expect, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + "`: "_fu) + suffix), ctx, module, _here, ss, _helpers, _helpers_data);
                        else
                            fail_7KwuQpwr(((("`using` ambiguity, multiple ways to obtain a `"_fu + humanizeType_3wOVPKQg(expect, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + "` in this scope: "_fu) + suffix), ctx, module, _here, ss, _helpers, _helpers_data);

                    }
                    else
                        match = (path + t_1);

                }
                else
                {
                    const bool mightHaveConversion = (isStruct || (local_scope ? ss._scope : misc_scope).converts);
                    if (mightHaveConversion)
                    {
                        if (path.size() > 10)
                        {
                            for (int i = path.size(); i-- > 0; )
                            {
                                if (path[i] == t_1)
                                {
                                    /*MOV*/ fu_STR err = "Conversion loop:\n"_fu;
                                    for (int i_1 = i; i_1 < path.size(); i_1++)
                                    {
                                        err += "\n\t    "_fu;
                                        const s_Overload& convert_1 = GET_ryFyPS6P(path[i_1], ctx, module, _here, ss, _helpers, _helpers_data);
                                        err += (((qWHAT_vXP1PCtb(convert_1, ctx, module, _here, ss, _helpers, _helpers_data) + ": "_fu) + humanizeType_3wOVPKQg(convertType, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + " ->"_fu);
                                    };
                                    err += ("\n\t        "_fu + qWHAT_vXP1PCtb(convert, ctx, module, _here, ss, _helpers, _helpers_data));
                                    fail_7KwuQpwr(static_cast<fu_STR&&>(err), ctx, module, _here, ss, _helpers, _helpers_data);
                                };
                            };
                        };
                        path.push(s_Target(t_1));
                        fu_DEFER(path.pop());
                        descend_Uy1R6LJB(convertType, false, isStruct, false, expect, actual, retype, local_scope, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                    };
                };
            };
        }
        else
            fail_7KwuQpwr((("No convert.type, perhaps a `using inline fn` without a return type annotation: `"_fu + qWHAT_vXP1PCtb(convert, ctx, module, _here, ss, _helpers, _helpers_data)) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

    };
}

                                #ifndef DEF_each_KbYy0Yzz0ml
                                #define DEF_each_KbYy0Yzz0ml
inline void each_KbYy0Yzz(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const s_Type& actual, const s_SolvedNode& retype, const bool local_scope, const s_Scope& misc_scope, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss_1 = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if ((ss_1.end <= i0))
            continue;
        else
        {
            const int i1 = ss_1.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
            {
                const s_Target& u = items[i_1];
                foreach_xPnJLRgJ(u, from, nullary, root, expect, actual, retype, local_scope, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            };
            i0 = ss_1.end;
        };
    };
}
                                #endif

                                #ifndef DEF_each_vKLVLq8pLBd
                                #define DEF_each_vKLVLq8pLBd
inline void each_vKLVLq8p(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const s_Type& actual, const s_SolvedNode& retype, const bool local_scope, const s_Scope& misc_scope, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss_1 = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if ((ss_1.end <= i0))
            continue;
        else
        {
            const int i1 = ss_1.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
                foreach_xPnJLRgJ(items[i_1], from, nullary, root, expect, actual, retype, local_scope, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

            i0 = ss_1.end;
        };
    };
}
                                #endif

static void descend_Uy1R6LJB(const s_Type& from, const bool nullary, const bool isStruct, const bool root, const s_Type& expect, const s_Type& actual, const s_SolvedNode& retype, const bool local_scope, const s_Scope& misc_scope, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (nullary)
        each_KbYy0Yzz(fu_VEC<s_Target>((local_scope ? ss._scope : misc_scope).usings), fu_VEC<s_ScopeSkip>((local_scope ? ss._ss.usings : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, from, nullary, root, expect, actual, retype, local_scope, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else
    {
        if (isStruct)
        {
            fu_VEC<s_Target> inner { lookupUserType_OSTRqvzG(from, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort).converts };
            for (int i = 0; i < inner.size(); i++)
                foreach_xPnJLRgJ(s_Target(inner[i]), from, nullary, root, expect, actual, retype, local_scope, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

        };
        if (has_converts)
            each_vKLVLq8p(fu_VEC<s_Target>((local_scope ? ss._scope : misc_scope).converts), fu_VEC<s_ScopeSkip>((local_scope ? ss._ss.converts : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, from, nullary, root, expect, actual, retype, local_scope, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);

    };
}

static fu_VEC<s_Target> tryConvert_sOlyaEcz(const s_Type& expect, const s_Type& actual, const s_SolvedNode& retype, const bool local_scope, const s_Scope& misc_scope, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ fu_VEC<s_Target> match {};
    fu_VEC<s_Target> path {};
    const int has_converts = (local_scope ? ss._scope : misc_scope).converts.size();
    s_SolvedNode arg0 { ss.TODO_FIX_convert_args[0] };
    fu_VEC<int> TODO_FIX_reorder {};
    fu_VEC<fu_VEC<s_Target>> TODO_FIX_conversions {};
    descend_Uy1R6LJB(actual, !actual, isStruct_FNWlOhLB(actual), true, expect, actual, retype, local_scope, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    return /*NRVO*/ match;
}

static s_Type solveArrlit_itemType_tbbm1x0Y(fu::view<s_SolvedNode> items, /*MOV*/ s_Type&& itemType, int start, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (!itemType)
    {
        if (start == items.size())
            fail_7KwuQpwr("Cannot infer empty arraylit."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
        else
            itemType = solveArrlit_itemType_init_uUT6lCU3(items[start++].type, ctx, module, _here, ss, _helpers, _helpers_data);

    }
    else if (is_ref_qNIEFFQB(itemType))
        fail_7KwuQpwr("Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

    for (int i = start; i < items.size(); i++)
        itemType = superType_3l7kQkbp("Array literal: "_fu, itemType, items[i].type, (*(const fu_STR*)fu::NIL), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);

    return static_cast<s_Type&&>(itemType);
}

static s_SolvedNode createArrlit_PoAFis0P(fu_VEC<s_SolvedNode>&& items, const s_Type& itemType, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    s_Type itemType_1 = solveArrlit_itemType_tbbm1x0Y(items, s_Type(itemType), 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
    return SolvedNode_ROjBZjUC(s_kind_arrlit, solveArrlit_done_9DFtRM33(itemType_1), s_Flags{}, (*(const fu_STR*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
}

static s_Type intersectionType_ByDJqlyd(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    s_Type _0 {};
    return (_0 = type_tryIntersect_F2WHZZjx(a, b)) ? static_cast<s_Type&&>(_0) : fail_7KwuQpwr(((((((id ? (qID_9QQZAztz(id) + ": "_fu) : fu_STR{}) + reason) + "Cannot intersect types: "_fu) + humanizeType_3wOVPKQg(a, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + " & "_fu) + humanizeType_3wOVPKQg(b, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);
}

static s_Target createLet_MMHt4GI6(const fu_STR& id, const s_Type& type, const s_Flags flags, bool& shadows, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    const s_Target target = Binding_12zkLRoW(id, s_Type(type), flags, shadows, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
    s_SolvedNode ret = SolvedNode_ROjBZjUC(s_kind_let, GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).type, flags, GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).name, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
    solved_set_YiwDWNfU(target, ret, module, ss);
    return target;
}

static s_Target injectImplicitArg_Rshn1yR9(const fu_STR& id, const s_Type& type, const s_Target& becauseOf, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    if (!_current_fn.out.items || (_current_fn.out.flags & s_Flags_F_EXTERN))
        fail_7KwuQpwr((((("No implicit "_fu + qBAD_9QQZAztz(id)) + " in scope, needed to call "_fu) + qWHAT_vXP1PCtb(GET_ryFyPS6P(becauseOf, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)) + "."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
    else
    {
        for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
        {
            s_SolvedNode& arg = _current_fn.out.items.mutref(i);
            const s_Target target { arg.target };
            s_SolvedNode& arg_1 = ((arg.kind == s_kind_letdef) ? GET_mut_UTaXftgW(target, module, ss).solved : arg);
            if (arg_1.value == id)
            {
                /*MOV*/ s_Type super = intersectionType_ByDJqlyd("Implicit argument collision: "_fu, add_ref_arUcTyoS(s_Type(type), arg_1.type.lifetime, _here, ctx), arg_1.type, id, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
                arg_1.type = super;
                GET_mut_UTaXftgW(target, module, ss).type = static_cast<s_Type&&>(super);
                return (target ? target : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
            };
        };
        bool shadows {};
        s_Flags flags = (((s_Flags_F_INJECTED | s_Flags_F_IMPLICIT) | s_Flags_F_ARG) | s_Flags_F_LAX);
        if (is_mutref_8RliRHyJ(type, _here, ctx))
            flags |= (s_Flags_F_REF | s_Flags_F_RELAXABLE_REF);

        const s_Target newArgTarget = createLet_MMHt4GI6(id, type, flags, shadows, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
        const int newArgIdx = (_current_fn.out.items.size() + FN_ARGS_BACK);
        /*MOV*/ s_SolvedNode newLetDef = createLetDef_NuncmRUF(newArgTarget, _here);
        _current_fn.out.items.insert(newArgIdx, static_cast<s_SolvedNode&&>(newLetDef));
        return newArgTarget;
    };
}

static s_SolvedNode bindImplicitArg_FWDmsvQ9(const fu_STR& name, const s_Type& type, const s_Target& becauseOf, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{

    {
        const s_ClosureID _ = tryParseClosureID_ESzTmva3(name);
        if (isLocal_fCRJFL21(_.target) && (localOf_JIWfMq4F(_.target, ctx, module, ss) == _current_fn.out.target.index))
        {
            if (_.revision == EXT_N3jS4trN(_current_fn.out.target, ctx, module, ss).revision)
            {
                if (GET_ryFyPS6P(_.target, ctx, module, _here, ss, _helpers, _helpers_data).kind == s_kind_var)
                {
                    return CallerNode_2ElqfYiA("__closure"_fu, s_Target(_.target), fu_VEC<s_SolvedNode>{}, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, _current_fnort, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data);
                }
                else
                    BUG_k3P6Th3U(("ClosureID.target is not a var: "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(_.target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);

            }
            else
                fail_7KwuQpwr(x7E_sTZRmMq1((x7E_sTZRmMq1((("ClosureID.revision mismatch: "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(_.target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)) + "\n\tCaptured at: "_fu), fu::u64dec(_.revision)) + "\n\tCurrent rev: "_fu), fu::u64dec(EXT_N3jS4trN(_current_fn.out.target, ctx, module, ss).revision)), ctx, module, _here, ss, _helpers, _helpers_data);

        };
    };
    fu_STR error {};
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    s_Target _0 {};
    const s_Target target = ((_0 = tryMatch__mutargs_IBT0nXHk(fu_STR(name), reorder, conversions, error, true, false, (*(const s_Scope*)fu::NIL), fu::view<s_SolvedNode>{}, s_Flags_F_IMPLICIT, s_Target{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort)) ? _0 : (_0 = injectImplicitArg_Rshn1yR9(name, type, becauseOf, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort)) ? _0 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data));
    const s_Overload& o = GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data);
    if (o.flags & s_Flags_F_IMPLICIT)
    {
        checkAssignable_iqrEhneZ(type, o.type, (("Implicit `"_fu + name) + "` type mismatch"_fu), (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), true, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
        return CallerNode_2ElqfYiA("__implicit"_fu, s_Target(target), fu_VEC<s_SolvedNode>{}, reorder, conversions, _current_fnort, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data);
    }
    else
        fail_7KwuQpwr((((("Matching a non-implicit item in scope: `"_fu + name) + "`, binds to call to `"_fu) + GET_ryFyPS6P(becauseOf, ctx, module, _here, ss, _helpers, _helpers_data).name) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

}

static s_SolvedNode createLet_lsSJmMV5(const fu_STR& id, const s_Flags flags, const s_SolvedNode& init, const s_Context& ctx, const s_Module& module, const s_Options& options, const s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    s_SolvedNode out = solveLetLike_dontTouchScope_wYmnkuMl(id, s_Flags(flags), init, (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _helpers, _helpers_data, _current_fnort);
    return solveLet_Ra1Gy3D0(out, id, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
}

static void detectRecursion_ldAOjr0p(const s_Target& target, const s_Context& ctx, const s_Module& module, const s_Options& options, const s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_Overload overload { GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data) };
    if (s_SolverStatus((overload.status & s_SolverStatus((s_SolverStatus_SS_FINALIZED | s_SolverStatus_SS_LAZY)))) != s_SolverStatus_SS_LAZY)
        return;
    else
    {
        const s_SolverNotes note = ((overload.kind == s_kind_type) ? s_SolverNotes_N_TypeRecursion : s_SolverNotes_N_FnRecursion);
        const s_SolverStatus status = ((overload.kind == s_kind_type) ? s_SolverStatus_SS_TYPE_RECUR : s_SolverStatus_SS_FN_RECUR);
        for (int i = _helpers.size(); i-- > 0; )
        {
            const s_Helpers& h = _helpers[i];
            if (!isFnOrType_tkK7MQy8(h, _helpers_data))
                continue;
            else if (_helpers_data[h.index].mask & s_HelpersMask_HM_Lambda)
                BUG_k3P6Th3U("Recursive lambda, what happened here?"_fu, ctx, module, _here, ss, _helpers, _helpers_data);
            else
            {
                GET_mut_UTaXftgW(_helpers_data[h.index].target, module, ss).status |= status;
                makeNote_jjqaKIrz(note, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
                if (_helpers_data[h.index].target == target)
                    return;

            };
        };
        BUG_k3P6Th3U((x7E_sTZRmMq1((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu), str_uDKw0whO(overload.status)) + ")`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
    };
}

static s_SolvedNode CallerNode_2ElqfYiA(const fu_STR& debug, s_Target&& target, /*MOV*/ fu_VEC<s_SolvedNode>&& args, const fu_VEC<int>& reorder, fu::view<fu_VEC<s_Target>> conversions, const s_Target& _current_fnort, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data)
{
    if (reorder)
    {
        /*MOV*/ fu_VEC<s_SolvedNode> args_out {};
        args_out.resize(reorder.size());
        for (int i = 0; i < reorder.size(); i++)
        {
            const int idx = reorder[i];
            if ((idx >= 0))
                args_out.mutref(i) = s_SolvedNode(args[idx]);

        };
        args = static_cast<fu_VEC<s_SolvedNode>&&>(args_out);
    };
    for (int argIdx = 0; argIdx < conversions.size(); argIdx++)
    {
        fu::view<s_Target> conversion = conversions[argIdx];
        if (applyConversion_CTEVKvNu(args.mutref(argIdx), conversion, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort))
        {
            args.shrink((argIdx + 1));
            makeNote_jjqaKIrz(s_SolverNotes_N_DeadConv, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
            return createBlock_aqSRQpGo(t_never, static_cast<fu_VEC<s_SolvedNode>&&>(args), s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        };
    };
    const int REST_START = findRestStart_ls6d8dRf(EXT_N3jS4trN(target, ctx, module, ss));
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
                args.mutref(i) = createArrlit_PoAFis0P(fu_VEC<s_SolvedNode>(rest), (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);

        };
    };
    const bool isZeroInit = ((GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).kind == s_kind_type) && !args.size());
    if (!isZeroInit)
    {
        fu_VEC<s_Argument> host_args { EXT_N3jS4trN(target, ctx, module, ss).args };
        args.resize(host_args.size());
        for (int i = 0; i < args.size(); i++)
        {
            if (!args[i])
            {
                const s_Argument& host_arg = host_args[i];
                args.mutref(i) = (host_arg.dEfault ? s_SolvedNode(host_arg.dEfault) : ((host_arg.flags & s_Flags_F_IMPLICIT) ? bindImplicitArg_FWDmsvQ9(fu_STR(host_arg.name), s_Type(host_arg.type), target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort) : fail_7KwuQpwr((((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + humanizeType_3wOVPKQg(host_arg.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data)));
                if (is_never_eqpYb5IC(args[i].type))
                {
                    args.shrink((i + 1));
                    return deadCall_qUDYxdPt(args, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                };
            };
        };
    };
    s_Type type { GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).type };
    if (GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).kind == s_kind_field)
    {
        const s_Type* _0;
        type = add_refs_BuHxEtjM((*(_0 = &(only_7ZMqiNoZ(args).type)) ? *_0 : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data)), s_Type(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).type));
    }
    else if (GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).kind == s_kind_var)
    {
        if (GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).flags & s_Flags_F_INLINE)
            return s_SolvedNode(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).solved.items[LET_INIT]);
        else if (type.lifetime.uni0n.size() == 1)
        {
            if (isLocal_fCRJFL21(target) && (localOf_JIWfMq4F(target, ctx, module, ss) != _current_fn.out.target.index))
            {
                s_ClosureID _1 {};
                unsigned _2 {};
                const s_ClosureID clID = ((_1 = tryParseClosureID_ESzTmva3(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).name)) ? _1 : s_ClosureID { s_Target(target), unsigned(((_2 = EXT_N3jS4trN(parent_G0CmT2rt(target, ctx, module, ss), ctx, module, ss).revision) ? _2 : BUG_k3P6Th3U(("ClosureID: about to serialize at rev 0: "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data))) });
                target = injectImplicitArg_Rshn1yR9(serialize_MMMW9sUK(clID), s_Type(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).type), target, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data, _current_fnort);
                const s_Type* _3;
                type = (*(_3 = &(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).type)) ? *_3 : BUG_k3P6Th3U(("CallerNode: !type on var "_fu + GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).name), ctx, module, _here, ss, _helpers, _helpers_data));
            };
        }
        else
        {
            BUG_k3P6Th3U((("CallerNode: var "_fu + GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).name) + " type.lifetime.len != 1"_fu), ctx, module, _here, ss, _helpers, _helpers_data);
        };
    }
    else
    {
        if (args)
        {
            fu::view<s_Argument> _4 {};
            fu::view<s_Argument> host_args = ((_4 = EXT_N3jS4trN(target, ctx, module, ss).args) ? static_cast<fu::view<s_Argument>&&>(_4) : BUG_k3P6Th3U(("CallerNode: no host args: "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data));
            if ((host_args.size() >= args.size()))
            {
                for (int i0 = 0; i0 < args.size(); i0++)
                {
                    const s_Argument& host_arg = host_args[i0];
                    s_SolvedNode& arg = args.mutref(i0);
                    if (arg.kind == s_kind_argid)
                        arg = only_7ZMqiNoZ(arg.items);

                    const s_Type& expect = host_arg.type;
                    s_Type retype = tryRetyping_yDcFD2W2(arg, expect, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
                    if (retype && isAssignableAsArgument_d2HKSF3T(expect, retype, false))
                        applyRetype_7oVcLMt3(arg, retype);

                };
            }
            else
                BUG_k3P6Th3U(("CallerNode: host_arg.len mismatch: "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);

        };
        if (GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).kind == s_kind_inline)
        {
            const s_ScopeMemo scope0 = Scope_snap_JtSt09Yg(ss._scope, _helpers);
            /*MOV*/ s_ScopeSkipMemos ss0 { ss._ss };
            const int autoshadow_ok0 = _current_fn.autoshadow_ok;
            fu_DEFER(
            {
                Scope_pop_J3Z6pttr(ss._scope, scope0, _helpers);
                ss._ss = static_cast<s_ScopeSkipMemos&&>(ss0);
                _current_fn.autoshadow_ok = autoshadow_ok0;
            });
            /*MOV*/ s_Template tEmplate { EXT_N3jS4trN(target, ctx, module, ss).tEmplate };
            ScopeSkip_setup_Lg4MANUU(tEmplate, scope0, true, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data);
            ss._scope.items += fu_VEC<s_ScopeItem>(EXT_N3jS4trN(target, ctx, module, ss).extra_items);
            if (tEmplate.node.flags & s_Flags_F_TEMPLATE)
                _current_fn.autoshadow_ok++;

            s_Node n_fn = static_cast<s_Node&&>(tEmplate.node);
            s_Node n_body { last_P1M39QT4(n_fn.items) };
            s_Type ret_expect { GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).type };
            fu_VEC<s_Argument> host_args { EXT_N3jS4trN(target, ctx, module, ss).args };
            fu_VEC<s_SolvedNode> arg_defs {};
            if (host_args.size() == args.size())
            {
                const int locals_start = (args ? GET_next_local_index_rUmUpdn0(_current_fnort, ss, _current_fn) : int{});
                for (int i = 0; i < args.size(); i++)
                {
                    s_Argument slot { host_args[i] };
                    /*MOV*/ s_SolvedNode arg_def = createLet_lsSJmMV5(n_fn.items[i].value, (slot.flags & ~s_Flags_F_ARG), args[i], ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                    if (arg_def.kind == s_kind_empty)
                        continue;
                    else
                    {
                        arg_defs += static_cast<s_SolvedNode&&>(arg_def);
                        if (slot.flags & s_Flags_F_INLINE)
                            arg_defs.pop();

                    };
                };
                /*MOV*/ s_SolvedNode s_body = solveBlock_a06G0wq6(n_body, ret_expect, 0, s_HelpersMask((s_HelpersMask((s_HelpersMask_HM_CanReturn | ((n_fn.flags & s_Flags_F_LAMBDA) ? s_HelpersMask_HM_Lambda : s_HelpersMask{}))) | (arg_defs ? s_HelpersMask_HM_KeepBlock : s_HelpersMask{}))), n_fn.value, locals_start, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                if (s_body.kind)
                {
                    s_body.items.splice(0, 0, arg_defs);
                    return /*NRVO*/ s_body;
                }
                else
                    BUG_k3P6Th3U("inline: no s_body.kind"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

            }
            else
                BUG_k3P6Th3U("inline: arglen mismatch"_fu, ctx, module, _here, ss, _helpers, _helpers_data);

        }
        else if (args && is_ref_qNIEFFQB(type))
        {
            type.lifetime = /* MOVE_FROM_CONST_REF */static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>(Lifetime_test_QQCOCwhD(Lifetime_replaceArgsAtCallsite_SxiGrtrh(target, args, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort), true, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)));
        };
    };
    /*MOV*/ s_SolvedNode callsite = SolvedNode_ROjBZjUC(s_kind_call, type, s_Flags{}, debug, args, target, s_Helpers{}, _here);
    if ((target.modid < 0) || (target.modid == module.modid))
    {
        const s_kind k = GET_ryFyPS6P(target, ctx, module, _here, ss, _helpers, _helpers_data).kind;
        if ((k == s_kind_fn) || (k == s_kind_type))
        {
            add_JL5WtWND(EXT_mut_ZuyZYWC3(target, module, ss).callers, _current_fnort.index);
            detectRecursion_ldAOjr0p(target, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
        };
    };
    return /*NRVO*/ callsite;
}

static bool applyConversion_CTEVKvNu(s_SolvedNode& arg, fu::view<s_Target> conversion, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    for (int i = 0; i < conversion.size(); i++)
    {
        const s_Target& t = conversion[i];
        if (EXT_N3jS4trN(t, ctx, module, ss).min || (EXT_N3jS4trN(t, ctx, module, ss).max && arg))
        {
            arg = CallerNode_2ElqfYiA("__using.a"_fu, s_Target(t), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(arg) } }, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, _current_fnort, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data);
        }
        else
        {
            if (i)
                fail_7KwuQpwr((("Bad conversion chain, non-leading nullary: `"_fu + GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data).name) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
            else if (arg)
                fail_7KwuQpwr("Bad conversion chain, about to throw away an argnode."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
            else
            {
                arg = CallerNode_2ElqfYiA("__using.b"_fu, s_Target(t), fu_VEC<s_SolvedNode>{}, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, _current_fnort, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data);
            };
        };
        if (is_never_eqpYb5IC(arg.type))
            return true;

    };
    return false;
}

static s_Type convertToSuperType_eeStdoQ2(fu::view<char> topic, s_SolvedNode& a, s_SolvedNode& b, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{

    {
        /*MOV*/ s_Type super = type_trySuper_HuTHARyU(a.type, b.type, false);
        if (super)
            return /*NRVO*/ super;

    };

    {
        s_Type aRetype = tryRetyping_yDcFD2W2(a, b.type, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
        s_Type bRetype = tryRetyping_yDcFD2W2(b, a.type, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
        if (aRetype)
        {
            if (bRetype)
                fail_7KwuQpwr(((((topic + ": Type ambiguity, literals can be retyped both ways: "_fu) + humanizeType_3wOVPKQg(a.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + " <-> "_fu) + humanizeType_3wOVPKQg(b.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);
            else
            {
                /*MOV*/ s_Type super = type_trySuper_HuTHARyU(aRetype, b.type, false);
                if (super)
                {
                    applyRetype_7oVcLMt3(a, aRetype);
                    return /*NRVO*/ super;
                };
            };
        };
        if (bRetype)
        {
            /*MOV*/ s_Type super = type_trySuper_HuTHARyU(bRetype, a.type, false);
            if (super)
            {
                applyRetype_7oVcLMt3(b, bRetype);
                return /*NRVO*/ super;
            };
        };
    };

    {
        fu_VEC<s_Target> aConv = tryConvert_sOlyaEcz(b.type, a.type, (*(const s_SolvedNode*)fu::NIL), true, (*(const s_Scope*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        fu_VEC<s_Target> bConv = tryConvert_sOlyaEcz(a.type, b.type, (*(const s_SolvedNode*)fu::NIL), true, (*(const s_Scope*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        if (aConv)
        {
            if (bConv)
                fail_7KwuQpwr(((((topic + ": Type ambiguity, conversions exist both ways: "_fu) + humanizeType_3wOVPKQg(a.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + " <-> "_fu) + humanizeType_3wOVPKQg(b.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);
            else
            {
                applyConversion_CTEVKvNu(a, aConv, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                return s_Type(b.type);
            };
        }
        else if (bConv)
        {
            applyConversion_CTEVKvNu(b, bConv, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            return s_Type(a.type);
        };
    };
    fail_7KwuQpwr(((((topic + ": No common supertype: "_fu) + humanizeType_3wOVPKQg(a.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + " <-> "_fu) + humanizeType_3wOVPKQg(b.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);
}

static s_SolvedNode createIf_l7xV3cCl(const s_SolvedNode& cond, /*MOV*/ s_SolvedNode&& cons, /*MOV*/ s_SolvedNode&& alt, s_Type&& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (!is_void_eqpYb5IC(type))
    {
        type = convertToSuperType_eeStdoQ2("if/else"_fu, cons, alt, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    };
    if (is_never_eqpYb5IC(cons.type) && is_never_eqpYb5IC(alt.type))
        type = t_never;

    return SolvedNode_ROjBZjUC(s_kind_if, (type ? type : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data)), s_Flags{}, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(cond), static_cast<s_SolvedNode&&>(cons), static_cast<s_SolvedNode&&>(alt) } }, s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode createBlock_aqSRQpGo(const s_Type& type, fu_VEC<s_SolvedNode>&& items, const s_Helpers& h, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    for (int x = 0; x < items.size(); x++)
    {
        if (!items[x].kind)
            fu::fail(x7E_sTZRmMq1("createBlock.before-flatten.items: no kind on item #"_fu, fu::i64dec(x)));

    };
    if (_here && (_helpers.size() > 10000001))
        fu::fail(x7E_sTZRmMq1("woot: "_fu, fu::i64dec(_helpers.size())));
    else
    {
        for (int i = items.size(); i-- > 0; )
        {
            s_SolvedNode& item = items.mutref(i);
            const s_kind k = item.kind;
            if (k == s_kind_block)
            {
                if (if_last_7ZMqiNoZ(item.items).kind == s_kind_unwrap)
                {
                    relinkJumps_fHVaXtUO(h, item, module, ss, _helpers_data);
                    items.splice(i, 1, fu::slice(item.items, 0, (item.items.size() - 1)));
                };
            }
            else if ((k == s_kind_empty) || (k == s_kind_bool))
            {
                if ((i < (items.size() - 1)) || ((i > 0) && is_void_eqpYb5IC(item.type) && is_void_eqpYb5IC(items[(i - 1)].type)))
                    items.splice(i, 1);

            };
        };
        if (h && (if_last_7ZMqiNoZ(items).kind == s_kind_block))
            relinkJumps_fHVaXtUO(h, last_PyOGoLWZ(items), module, ss, _helpers_data);

        if (OPTI_flatten_blocks)
        {
            while (items.size())
            {
                const s_SolvedNode& tail = last_7ZMqiNoZ(items);
                const s_HelpersData* BL_16_v;
                if ((tail.kind != s_kind_block) || (tail.helpers && s_HelpersMask(((__extension__ (
                {
                    const s_Helpers& h_1 = tail.helpers;
                    BL_16_v = &(_helpers_data[h_1.index]);
                (void)0;}), *BL_16_v).mask & s_HelpersMask_HM_LabelUsed))))
                    break;
                else
                {
                    fu_VEC<s_SolvedNode> unwrap { tail.items };
                    items.pop();
                    items += unwrap;
                };
            };
        };
        if (items)
        {
            s_SolvedNode& last = last_PyOGoLWZ(items);
            if ((last.kind == s_kind_jump) && (last.helpers == h) && !(s_HelpersMask((_helpers_data[h.index].mask & s_HelpersMask_HM_Function)) && !is_void_eqpYb5IC(only_7ZMqiNoZ(last.items).type)))
                last = only_7ZMqiNoZ(last.items);

        };
        for (int i_1 = items.size(); i_1-- > 0; )
        {
            const s_kind k = items[i_1].kind;
            if ((k == s_kind_empty) || (k == s_kind_bool))
                continue;
            else
            {
                if (k == s_kind_defer)
                {
                    s_SolvedNode& item = items.mutref(i_1);
                    item = only_7ZMqiNoZ(item.items);
                    if (!(is_void_eqpYb5IC(item.type) && (i_1 < (items.size() - 1))))
                    {
                        items += createEmpty_R642r6KV(s_kind_empty, t_void, s_Target{}, _here);
                    };
                };
                break;
            };
        };

        {
            int i_2 = items.size();
            int empties = 0;
            while (i_2-- > 0)
            {
                const s_kind k = items[i_2].kind;
                if ((k != s_kind_empty) && (k != s_kind_bool))
                    break;
                else
                    empties++;

            };
            while (i_2-- > 0)
            {
                const s_kind k = items[i_2].kind;
                if ((k == s_kind_and) || (k == s_kind_or))
                {
                    const s_SolvedNode& n = items[i_2];
                    if (is_never_eqpYb5IC(last_7ZMqiNoZ(n.items).type))
                    {
                        /*MOV*/ fu_VEC<s_SolvedNode> cond = fu::slice(n.items, 0, (n.items.size() - 1));
                        /*MOV*/ s_SolvedNode cons { n.items[(n.items.size() - 1)] };
                        fu_VEC<s_SolvedNode> alt = fu::slice(items, (i_2 + 1), (items.size() - empties));
                        items.splice((i_2 + 1), alt.size());
                        s_SolvedNode cond_1 = ((k == s_kind_and) ? createAnd_fwXZzazJ(cond, s_Type(t_bool), _here) : createOr_aJrU9XeP(static_cast<fu_VEC<s_SolvedNode>&&>(cond), s_Type(t_bool), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort));
                        /*MOV*/ s_SolvedNode alt_1 = createBlock_aqSRQpGo(last_7ZMqiNoZ(alt).type, fu_VEC<s_SolvedNode>(alt), s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                        s_SolvedNode _0 {};
                        /*MOV*/ s_SolvedNode replacement = (_0 = s_SolvedNode(((k == s_kind_and) ? cons : alt_1)), createIf_l7xV3cCl(cond_1, static_cast<s_SolvedNode&&>(_0), static_cast<s_SolvedNode&&>(((k == s_kind_and) ? alt_1 : cons)), s_Type((empties ? t_void : (*(const s_Type*)fu::NIL))), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort));
                        items.mutref(i_2) = static_cast<s_SolvedNode&&>(replacement);
                    };
                };
            };
        };
        if (!s_HelpersMask((_helpers_data[h.index].mask & s_HelpersMask((s_HelpersMask_HM_LabelUsed | s_HelpersMask_HM_KeepBlock)))) && (items.size() == 1))
            return s_SolvedNode(only_7ZMqiNoZ(items));
        else
        {
            return SolvedNode_ROjBZjUC(s_kind_block, type, s_Flags{}, (*(const fu_STR*)fu::NIL), items, s_Target{}, h, _here);
        };
    };
}

static s_SolvedNode deadCall_qUDYxdPt(const fu_VEC<s_SolvedNode>& args, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    makeNote_jjqaKIrz(s_SolverNotes_N_DeadCall, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
    return createBlock_aqSRQpGo(t_never, fu_VEC<s_SolvedNode>(args), s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
}

static const s_Module& findModule_RprOSxU4(const fu_STR& fuzimport, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu_STR fname = resolveFile_x_XQl8ylUG(fuzimport, ctx);
    fu::view<s_Module> modules = ctx.modules;
    for (int i = 1; i < modules.size(); i++)
    {
        const s_Module& m = modules[i];
        if (m.fname == fname)
            return m;

    };
    fail_7KwuQpwr(("Cannot locate: "_fu + fname), ctx, module, _here, ss, _helpers, _helpers_data);
}

static const s_Scope& dequalify_andGetScope_yyD3XWLQ(fu_STR& id, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const int split = find_ODCLAe2r(id, '\t');
    if ((split >= 0))
    {
        fu_STR fname = fu::slice(id, 0, split);
        id = fu::slice(id, (split + 1));
        const s_Module& other = findModule_RprOSxU4(fname, ctx, module, _here, ss, _helpers, _helpers_data);
        if (other.modid != module.modid)
            return other.out.solve.scope;
        else
        {
            fail_7KwuQpwr((("Qualified "_fu + qBAD_9QQZAztz(id)) + ":: access current module."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
        };
    }
    else
    {
        BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
    };
}

                                #ifndef DEF_map_TXpNz0JCtjc
                                #define DEF_map_TXpNz0JCtjc
inline fu_VEC<fu_STR> map_TXpNz0JC(fu::view<s_SolvedNode> a, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = humanizeType_3wOVPKQg(a[i].type, false, i, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_join_yaiqG1c4pfi
                                #define DEF_join_yaiqG1c4pfi
inline fu_STR join_yaiqG1c4(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
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
    };
}
                                #endif

static s_Target match__mutargs_ibl6DW9V(const s_Scope& misc_scope, const bool local_scope, const fu_STR& id, fu::view<s_SolvedNode> args, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, const s_Flags flags, const s_Target& target, const bool type_annot, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ fu_STR error {};
    const s_Target ret = tryMatch__mutargs_IBT0nXHk(fu_STR(id), reorder, conversions, error, local_scope, type_annot, misc_scope, args, flags, target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    if (ret)
        return ret;
    else
    {
        error = (((("Bad call to "_fu + qID_9QQZAztz(id)) + " ("_fu) + join_yaiqG1c4(map_TXpNz0JC(args, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort), ", "_fu)) + "): "_fu);
        const s_Target debug = tryMatch__mutargs_IBT0nXHk(fu_STR(id), reorder, conversions, error, local_scope, type_annot, misc_scope, args, flags, target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        if (debug)
            BUG_k3P6Th3U(("Did match on second pass: "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(debug, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
        else
            fail_7KwuQpwr(static_cast<fu_STR&&>(error), ctx, module, _here, ss, _helpers, _helpers_data);

    };
}

static s_SolvedNode solveCall_nKfJhHWQ(fu_STR&& id, /*MOV*/ fu_VEC<s_SolvedNode>&& args, const s_Flags flags, const s_Target& target, const bool type_annot, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (id || target)
    {
        if (is_never_eqpYb5IC(if_last_7ZMqiNoZ(args).type))
            return deadCall_qUDYxdPt(args, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        else
        {
            const s_Flags qualified = (flags & s_Flags_F_COMPOUND_ID);
            const s_Scope& misc_scope = (qualified ? dequalify_andGetScope_yyD3XWLQ(id, ctx, module, _here, ss, _helpers, _helpers_data) : (*(const s_Scope*)fu::NIL));
            fu_VEC<int> reorder {};
            fu_VEC<fu_VEC<s_Target>> conversions {};
            const s_Target callTargIdx = match__mutargs_ibl6DW9V(misc_scope, !qualified, id, args, reorder, conversions, flags, target, type_annot, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            return CallerNode_2ElqfYiA(id, s_Target(callTargIdx), static_cast<fu_VEC<s_SolvedNode>&&>(args), reorder, conversions, _current_fnort, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data);
        };
    }
    else
        BUG_k3P6Th3U("solveCall: No id, no target."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

}

static const s_Type& Scope_lookupType_GxJwJ0bk(fu_STR&& id, const s_Flags flags, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    s_SolvedNode callsite = solveCall_nKfJhHWQ(fu_STR(id), fu_VEC<s_SolvedNode>{}, flags, s_Target{}, true, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    if (GET_ryFyPS6P(callsite.target, ctx, module, _here, ss, _helpers, _helpers_data).kind != s_kind_type)
        fail_7KwuQpwr((("No type `"_fu + id) + "` in scope."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
    else if (callsite.items)
        fail_7KwuQpwr("Scope_lookupType: Wasting time setting up callargs."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
    else
        return GET_ryFyPS6P(callsite.target, ctx, module, _here, ss, _helpers, _helpers_data).type;

}

static const s_Type& Scope_lookupType_8Tke6K42(const s_Node& annot, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    return Scope_lookupType_GxJwJ0bk(fu_STR(annot.value), annot.flags, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
}

                                #ifndef DEF_only_P1M39QT4jne
                                #define DEF_only_P1M39QT4jne
inline const s_Node& only_P1M39QT4(fu::view<s_Node> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_sTZRmMq1("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Type T_VCuBMw8a(const s_Node& node, const s_Map_UKvTd2mknh0& typeParams, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    return evalTypeAnnot_oDto04gx(only_P1M39QT4(node.items), typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
}

static s_Type evalTypeAnnot_oDto04gx(const s_Node& node, const s_Map_UKvTd2mknh0& typeParams, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (node.kind == s_kind_call)
    {
        fu::view<s_Node> items = node.items;
        if (!items.size())
            return s_Type(Scope_lookupType_8Tke6K42(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort));
        else if (items.size() == 1)
        {
            if (node.value == "&"_fu)
            {
                s_Type _0 {};
                return (_0 = T_VCuBMw8a(node, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort), add_ref_arUcTyoS(static_cast<s_Type&&>(_0), Lifetime_temporary_8nlJDPX0(), _here, ctx));
            }
            else if (node.value == "&mut"_fu)
            {
                s_Type _1 {};
                return (_1 = T_VCuBMw8a(node, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort), add_mutref_arUcTyoS(static_cast<s_Type&&>(_1), Lifetime_temporary_8nlJDPX0(), _here, ctx));
            }
            else if (node.value == "[]"_fu)
                return createArray_oj1mQ036(T_VCuBMw8a(node, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort));
            else if (node.value == "typeof"_fu)
                return clear_refs_qNIEFFQB(solveNode_3DHmcQXo(only_P1M39QT4(node.items), (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort).type);

        };
    }
    else if (node.kind == s_kind_typeparam)
        return s_Type(evalTypeParam_ghZHazpS(node.value, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort));
    else if ((node.kind == s_kind_arrlit) && (node.items.size() == 1))
    {
        s_Type _2 {};
        return (_2 = T_VCuBMw8a(node, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort), createSlice_8h5rReSH(static_cast<s_Type&&>(_2), Lifetime_temporary_8nlJDPX0(), _here, ctx));
    }
    else if (node.kind == s_kind_definit)
        return s_Type(t_zeroes);

    fail_7KwuQpwr(((x7E_sTZRmMq1("Invalid type annotation: "_fu, str_v3b7EcLt(node.kind)) + " "_fu) + node.value), ctx, module, _here, ss, _helpers, _helpers_data);
}

                                #ifndef DEF_STRUCT_MEMBERS
                                #define DEF_STRUCT_MEMBERS
inline constexpr int STRUCT_MEMBERS = 1;
                                #endif

static s_SolvedNode solveMember_3ljes1dn(const s_Node& node, const bool isPrimDecl, const s_Target& _current_fnort, const s_Type& primType, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data)
{
    if (node.kind == s_kind_let)
    {
        if (!isPrimDecl && node.items[LET_INIT] && (node.items[LET_INIT].kind != s_kind_definit))
            fail_7KwuQpwr(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node.value) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
        else
        {
            return solveLetLike_dontTouchScope_pjqifGJN(node, (*(const s_Type*)fu::NIL), primType, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        };
    }
    else
        BUG_k3P6Th3U(x7E_sTZRmMq1("solveStructMembers_1: "_fu, str_v3b7EcLt(node.kind)), ctx, module, _here, ss, _helpers, _helpers_data);

}

                                #ifndef DEF_map_hd5vFQxcsnk
                                #define DEF_map_hd5vFQxcsnk
inline fu_VEC<s_SolvedNode> map_hd5vFQxc(fu::view<s_Node> a, const bool isPrimDecl, const s_Target& _current_fnort, const s_Type& primType, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data)
{
    /*MOV*/ fu_VEC<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember_3ljes1dn(a[i], isPrimDecl, _current_fnort, primType, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_unless_oob_ZPaTIXruNZj
                                #define DEF_unless_oob_ZPaTIXruNZj
inline const s_Node& unless_oob_ZPaTIXru(fu::view<s_Node> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Node*)fu::NIL);
}
                                #endif

                                #ifndef DEF_each_K8WgXYim56g
                                #define DEF_each_K8WgXYim56g
inline void each_K8WgXYim(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu_VEC<int>& structImports)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if ((ss.end <= i0))
            continue;
        else
        {
            const int i1 = ss.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
            {
                const int import = items[i_1];
                add_JL5WtWND(structImports, import);
            };
            i0 = ss.end;
        };
    };
}
                                #endif

static s_SolvedNode __solveStruct_dyUPsgwi(const bool solve, const s_Node& node, const s_Target& into, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const fu_STR& origId = node.value;
    fu_STR _0 {};
    fu_STR name = (origId ? fu_STR(origId) : (_current_fn.out.target ? (((_0 = fu_STR(GET_ryFyPS6P(_current_fn.out.target, ctx, module, _here, ss, _helpers, _helpers_data).name)) ? static_cast<fu_STR&&>(_0) : "Anon"_fu) + (GET_ryFyPS6P(_current_fn.out.target, ctx, module, _here, ss, _helpers, _helpers_data).sighash ? ("_"_fu + GET_ryFyPS6P(_current_fn.out.target, ctx, module, _here, ss, _helpers, _helpers_data).sighash) : fu_STR{})) : fu_STR{}));
    const s_kind kind = node.kind;
    const bool isStruct = (kind == s_kind_struct);
    const bool isUnion = (kind == s_kind_union);
    const bool isPrimDecl = (!isStruct && !isUnion);
    /*MOV*/ s_Type basePrimType {};
    fu_STR baseprim {};
    if (isPrimDecl)
    {
        const s_Node& baseannot = node.items[STRUCT_BASE];
        basePrimType = (baseannot ? evalTypeAnnot_oDto04gx(baseannot, (*(const s_Map_UKvTd2mknh0*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort) : s_Type(t_u8));
        baseprim = getBasePrimitive_4ZhrSzAz(basePrimType, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
    };
    const s_DeclAsserts asserts = node.asserts;
    s_Target out_target { into };
    /*MOV*/ s_Type out_type {};
    if (out_target)
        out_type = GET_ryFyPS6P(out_target, ctx, module, _here, ss, _helpers, _helpers_data).type;
    else
    {
        out_type = initStruct_9bFmV6wW(kind, baseprim, name, asserts, module);
        out_target = Scope_Typedef_ZZmCHu2D(ss._scope, origId, out_type, node.flags, name, s_SolverStatus_SS_LAZY, module);
        EXT_mut_ZuyZYWC3(out_target, module, ss).tEmplate = createTemplate_sqGK8ATk(node, ss, _current_fn, _helpers);
    };
    if (!solve)
        return createEmpty_R642r6KV(s_kind_empty, out_type, out_target, _here);
    else
    {
        const s_Target& _current_fnort_1 = out_target;
        GET_mut_UTaXftgW(out_target, module, ss).status |= s_SolverStatus_SS_DID_START;
        const int helpers0 = _helpers.size();
        const int helpers_data0 = _helpers_data.size();
        fu_DEFER(
        {
            _helpers.shrink(helpers0);
            _helpers_data.shrink(helpers_data0);
        });
        push_HdzROYqO(s_HelpersData { s_Target((out_target ? out_target : BUG_k3P6Th3U((("solveStruct: no out_target: `"_fu + origId) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data))), s_SolverPass{}, fu_STR{}, s_HelpersMask_HM_Struct, 0, 0, s_Type{}, s_Type{}, s_Postdom{} }, _helpers, _helpers_data);
        /*MOV*/ fu_VEC<s_Target> structConverts {};
        /*MOV*/ fu_VEC<int> structImports {};
        int flat_cnt {};
        int non_triv = (!is_rx_copy_6qTx5aCK(out_type) ? -1 : int{});
        const s_Type& primType = (isPrimDecl ? (out_type ? out_type : BUG_k3P6Th3U("Falsy isPrimDecl.out_type"_fu, ctx, module, _here, ss, _helpers, _helpers_data)) : (*(const s_Type*)fu::NIL));
        fu::view<s_Node> items = (node.items ? node.items[STRUCT_MEMBERS].items : fu::view<s_Node>{});
        fu_VEC<s_SolvedNode> members = map_hd5vFQxc(items, isPrimDecl, _current_fnort_1, primType, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data);

        {
            fu_VEC<s_ScopeItem>& innerScope = lookupUserType_mut_1kUrLo41(out_type.vtype.canon, module).items;
            if (!innerScope && members)
            {
                fu_VEC<s_Argument> args = (!isPrimDecl ? fu_VEC<s_Argument> { fu::slate<1, s_Argument> { s_Argument { "this"_fu, fu_STR{}, despeculateStruct_witzqGKx(s_Type(out_type)), s_SolvedNode{}, s_Flags{}, 0, s_BitSet{}, s_BitSet{} } } } : fu_VEC<s_Argument>{});
                for (int i = 0; i < members.size(); i++)
                {
                    const fu_STR& id = items[i].value;
                    const s_Flags isPredicate = (items[i].flags & s_Flags_F_PREDICATE);
                    const s_Target target = Scope_create_EMDiTJHw(ss._scope, (args ? s_kind_field : s_kind_enumv), (id ? id : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data)), (*(const s_Type*)fu::NIL), (s_Flags_F_PUB | isPredicate), s_SolverStatus{}, 0, module);
                    s_Extended& ext = EXT_mut_ZuyZYWC3(target, module, ss);
                    ext.args = args;
                    ext.min = args.size();
                    ext.max = args.size();
                    Scope_set_Wttt6h0n(innerScope, id, target, false);
                };
                if (isPrimDecl)
                    ss._scope.items += innerScope;
                else
                    ss._field_items += innerScope;

            };
            if (innerScope.size() == members.size())
            {
                for (int i = 0; i < innerScope.size(); i++)
                {
                    const s_ScopeItem& item = innerScope[i];
                    const s_SolvedNode& member = members[i];
                    if (item.id == member.value)
                    {
                        s_Overload& field = GET_mut_UTaXftgW(target_QZZ1cmZA(item), module, ss);
                        field.type = member.type;
                        int _1 {};
                        flat_cnt += ((_1 = int(tryLookupStruct_ChYpFATl(member.type, ctx, module).flat_cnt)) ? _1 : 1);
                        if (!non_triv && !is_trivial_ChYpFATl(member.type, ctx, module))
                            non_triv = (i + 1);

                        if (member.flags & s_Flags_F_USING)
                        {
                            structConverts.push(target_QZZ1cmZA(item));
                            const int m = modidOfOrigin_FNWlOhLB(field.type);
                            if (m && (m != module.modid))
                                add_JL5WtWND(structImports, m);

                            add_7jOCnS7y(structImports, lookupTypeImports_ChYpFATl(field.type, ctx, module));
                        };
                    }
                    else
                        BUG_k3P6Th3U("solveStructMembers_4: field id mismatch."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

                };
                if (isPrimDecl)
                {
                    const bool sIgned = (baseprim[0] == 'i');
                    const bool uNsigned = (baseprim[0] == 'u');
                    fu::view<char> size_str = fu::get_view(baseprim, 1, baseprim.size());
                    const fu::u8 size = ((size_str == "8"_fu) ? fu::u8(8u) : ((size_str == "16"_fu) ? fu::u8(16u) : ((size_str == "32"_fu) ? fu::u8(32u) : ((size_str == "64"_fu) ? fu::u8(64u) : ((size_str == "128"_fu) ? fu::u8(128u) : BUG_k3P6Th3U(("Enum auto-incrementer: unknown prim size: "_fu + size_str), ctx, module, _here, ss, _helpers, _helpers_data))))));
                    s_Intlit last {};
                    for (int i_1 = 0; i_1 < innerScope.size(); i_1++)
                    {
                        s_SolvedNode& init = GET_mut_UTaXftgW(target_QZZ1cmZA(innerScope[i_1]), module, ss).solved;
                        const s_SolvedNode& member = members[i_1];
                        init = member.items[LET_INIT];
                        _here = member.token;
                        if (init)
                        {
                            _here = init.token;
                            if (init.kind == s_kind_int)
                            {
                                last = Intlit_eSPjJZjJ(init.value);
                                if (last.error)
                                    fail_7KwuQpwr(fu_STR(last.error), ctx, module, _here, ss, _helpers, _helpers_data);
                                else
                                    continue;

                            }
                            else
                                last.error = "Cannot auto-increment, please provide an explicit value."_fu;

                        };
                        if (last.error)
                            fail_7KwuQpwr(fu_STR(last.error), ctx, module, _here, ss, _helpers, _helpers_data);
                        else if (last.negative)
                        {
                            fail_7KwuQpwr("Previous constant is negative, not sure how to increment, please specify an explicit value."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
                        }
                        else
                        {
                            /*MOV*/ s_Intlit next = Intlit_kulaZEKB(((kind == s_kind_flags) ? (i_1 ? (last.absval << 1ull) : 1ull) : (last.absval + 1ull)), false, fu_STR{}, uNsigned, sIgned, 10ull);
                            if (next.error || (next.absval > last.absval))
                            {
                                const fu::u8 minsize = (sIgned ? next.minsize_i : next.minsize_u);
                                if (minsize > size)
                                    fail_7KwuQpwr((x7E_sTZRmMq1((x7E_sTZRmMq1("Primitive range exhausted: requires "_fu, fu::u64dec(minsize)) + " bits, got "_fu), fu::u64dec(size)) + "."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
                                else
                                {
                                    last = next;
                                    if (sIgned || uNsigned)
                                    {
                                        init = SolvedNode_ROjBZjUC(s_kind_int, primType, s_Flags{}, x7E_sTZRmMq1((next.negative ? "-"_fu : fu_STR{}), fu::u64dec(next.absval)), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
                                    }
                                    else
                                        fail_7KwuQpwr(("Cannot auto-increment this type: "_fu + baseprim), ctx, module, _here, ss, _helpers, _helpers_data);

                                };
                            }
                            else
                                fail_7KwuQpwr((next.error ? static_cast<fu_STR&&>(next.error) : "Failed to auto-increment, range exhausted."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

                        };
                    };
                };
            }
            else
                BUG_k3P6Th3U((((x7E_sTZRmMq1((x7E_sTZRmMq1((x7E_sTZRmMq1("solveStructMembers_3: field lens mismatch: "_fu, fu::i64dec(innerScope.size())) + " vs "_fu), fu::i64dec(members.size())) + "/"_fu), fu::i64dec(items.size())) + ": `struct "_fu) + name) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

        };
        const int non_triv_1 = non_triv;
        if (non_triv_1 && s_DeclAsserts((asserts & s_DeclAsserts_A_TRIVIAL)))
            fail_7KwuQpwr((("Struct is not "_fu + qKW_9QQZAztz("trivial"_fu)) + ((non_triv_1 < 0) ? ((" because it is "_fu + qKW_9QQZAztz("nocopy"_fu)) + "."_fu) : (" because of non-trivial member "_fu + qID_9QQZAztz(unless_oob_ZPaTIXru(items, (non_triv_1 - 1)).value)))), ctx, module, _here, ss, _helpers, _helpers_data);
        else
        {
            each_K8WgXYim(ss._scope.imports, ss._ss.imports, 0, structImports);

            {
                bool CHANGE = false;
                int commonQuals = -1;
                for (int i = 0; i < members.size(); i++)
                    commonQuals &= members[i].type.vtype.quals;

                const int quals0 = out_type.vtype.quals;
                const int quals1 = (out_type.vtype.quals &= commonQuals);
                if (!(CHANGE))
                    CHANGE = (quals0 != quals1);


                {
                    s_Struct& s = lookupUserType_mut_1kUrLo41(out_type.vtype.canon, module);
                    s.target = (out_target ? out_target : BUG_k3P6Th3U("No struct/out_target."_fu, ctx, module, _here, ss, _helpers, _helpers_data));
                    s.converts = static_cast<fu_VEC<s_Target>&&>(structConverts);
                    s.imports = static_cast<fu_VEC<int>&&>(structImports);
                    const int flat0 = s.flat_cnt;
                    const bool triv0 = s.all_triv;
                    s.flat_cnt = flat_cnt;
                    s.all_triv = !non_triv_1;
                    if (!(CHANGE))
                        CHANGE = ((flat0 != s.flat_cnt) || (triv0 != s.all_triv));

                    if (!(GET_ryFyPS6P(s.target, ctx, module, _here, ss, _helpers, _helpers_data).status & s_SolverStatus_SS_DID_START))
                        BUG_k3P6Th3U("Setting stuff but missing SS_DID_START."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

                };
                int min = 0;
                /*MOV*/ fu_VEC<s_Argument> args {};
                if (isPrimDecl)
                {
                    args.push(s_Argument { "value"_fu, fu_STR{}, static_cast<s_Type&&>(basePrimType), s_SolvedNode{}, s_Flags{}, 0, s_BitSet{}, s_BitSet{} });
                }
                else
                {
                    int N = members.size();
                    if (N && isUnion)
                        N = 1;

                    for (int i_1 = 0; i_1 < N; i_1++)
                    {
                        const s_SolvedNode& member = members[i_1];
                        s_SolvedNode _2 {};
                        /*MOV*/ s_Argument arg = s_Argument { fu_STR((member.value ? member.value : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data))), fu_STR{}, s_Type((member.type ? member.type : BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data))), ((_2 = s_SolvedNode(member.items[LET_INIT])) ? static_cast<s_SolvedNode&&>(_2) : (isUnion ? createDefinit_zBcvnR2D(s_Type(member.type), ctx, module, _here, ss, _helpers, _helpers_data) : s_SolvedNode{})), (member.flags & s_Flags_F_MUSTNAME), 0, s_BitSet{}, s_BitSet{} };
                        if (!arg.dEfault)
                            min++;

                        args.push(static_cast<s_Argument&&>(arg));
                    };
                };
                const int max = args.size();
                if (max && !min)
                    min++;

                s_Extended& ext = EXT_mut_ZuyZYWC3(out_target, module, ss);
                ext.min = min;
                ext.max = max;
                ext.args = static_cast<fu_VEC<s_Argument>&&>(args);
                const int mustUpdate = (CHANGE ? ext.callers.size() : int{});
                s_Overload& overload = GET_mut_UTaXftgW(out_target, module, ss);
                overload.type = static_cast<s_Type&&>(out_type);
                if (mustUpdate)
                    overload.status |= s_SolverStatus_SS_UPDATED;

            };
            lazySolveEnd_dD7PN0OQ(out_target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort_1);
            return s_SolvedNode{};
        };
    };
}

static s_SolvedNode uPrepStruct_1bQHqbNe(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    return __solveStruct_dyUPsgwi(false, node, s_Target{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
}

static s_SolvedNode unorderedPrep_A_R1kqLcXg(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const s_kind kind = node.kind;
    if (kind == s_kind_fn)
        return uPrepFn_A_JNHb8yZs(node, module, _here, ss, _current_fn, _helpers);
    else if (isTypeDecl_cSKdQ6PB(kind))
        return uPrepStruct_1bQHqbNe(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else
        BUG_k3P6Th3U((x7E_sTZRmMq1("TODO: unorderedPrep_A("_fu, str_v3b7EcLt(node.kind)) + ")."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

}

static void unorderedPrep_B_BonrWxeN(fu::view<s_Node> nodes, fu::view<s_SolvedNode> results, const int unorderedClass, const s_Module& module, s_SolverState& ss)
{
    if (unorderedClass != 1)
        return;
    else
    {
        bool hasSnap = false;
        s_ScopeMemo lastSnap {};
        for (int i = nodes.size(); i-- > 0; )
        {
            const s_Node& node = nodes[i];
            const s_Target& target = results[i].target;
            s_Template& tEmplate = EXT_mut_ZuyZYWC3(target, module, ss).tEmplate;
            if (node.flags & s_Flags_F_CONVERSION)
                hasSnap = false;

            if (tEmplate.scope_memo)
            {
                if (!hasSnap)
                {
                    hasSnap = true;
                    lastSnap = tEmplate.scope_memo;
                }
                else
                    tEmplate.scope_memo = lastSnap;

            };
        };
    };
}

static fu_VEC<s_SolvedNode> solveNodes_EGJ2i2NT(fu::view<s_Node> nodes, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const fu_STR& static_eval_brk, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ fu_VEC<s_SolvedNode> result {};
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_Node& node = nodes[i];
        if (!node)
            continue;
        else
        {
            const int unorderedClass = unorderedClassify_flORhcLW(node.kind);
            if (!unorderedClass)
            {
                HERE_bcSKDjer(node.token, _here);
                const bool last = (i == (nodes.size() - 1));
                const s_Type& type = ((last && use_type_last) ? type_last : type_all);
                s_SolvedNode solved = solveNode_3DHmcQXo(node, type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                result += s_SolvedNode(solved);
                if (is_never_eqpYb5IC(solved.type))
                {
                    if (i < (nodes.size() - 1))
                        makeNote_jjqaKIrz(s_SolverNotes_N_DeadCode, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);

                    break;
                }
                else
                {
                    if (static_eval_brk && (solved.kind == s_kind_bool))
                    {
                        if (solved.value == static_eval_brk)
                            break;
                        else if (i < (nodes.size() - 1))
                            result.pop();

                    };
                    continue;
                };
            }
            else
            {
                const int i0 = i;
                int i1 = nodes.size();
                const int offset = (result.size() - i0);
                for (int i_1 = i0; i_1 < nodes.size(); i_1++)
                {
                    const s_Node* _0;
                    const s_Node& node_1 = (*(_0 = &(nodes[i_1])) ? *_0 : BUG_k3P6Th3U("solveNodes, prep-a: falsy node"_fu, ctx, module, _here, ss, _helpers, _helpers_data));
                    if (unorderedClassify_flORhcLW(node_1.kind) != unorderedClass)
                    {
                        i1 = i_1;
                        break;
                    }
                    else
                    {
                        HERE_bcSKDjer(node_1.token, _here);
                        result += unorderedPrep_A_R1kqLcXg(node_1, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
                    };
                };
                if (i1 > i0)
                {
                    i = (i1 - 1);
                    unorderedPrep_B_BonrWxeN(fu::get_view(nodes, i0, i1), fu::get_view(result, (i0 + offset), (i1 + offset)), unorderedClass, module, ss);
                    bool repeat = true;
                    while (repeat)
                    {
                        repeat = false;
                        for (int i_2 = i0; i_2 < i1; i_2++)
                        {
                            const s_Node* _1;
                            const s_Node& node_1 = (*(_1 = &(nodes[i_2])) ? *_1 : BUG_k3P6Th3U("solveNodes, solve: falsy node"_fu, ctx, module, _here, ss, _helpers, _helpers_data));
                            HERE_bcSKDjer(node_1.token, _here);
                            const s_Target& into = result[(i_2 + offset)].target;
                            if (lazySolveStart_uLb9QxPS(into, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort))
                                repeat = true;

                        };
                    };
                }
                else
                {
                    BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
                };
            };
        };
    };
    return /*NRVO*/ result;
}

static s_SolvedNode solveRoot_Br0MU9mB(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const s_Helpers helpers = s_Helpers { _helpers.size() };
    push_HdzROYqO(s_HelpersData{}, _helpers, _helpers_data);
    fu_VEC<s_SolvedNode> items = solveNodes_EGJ2i2NT(node.items, t_void, (*(const s_Type*)fu::NIL), false, (*(const fu_STR*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    if (!is_never_eqpYb5IC(if_last_7ZMqiNoZ(items).type))
    {
        /*MOV*/ s_SolvedNode root = SolvedNode_ROjBZjUC(s_kind_root, t_void, s_Flags{}, (*(const fu_STR*)fu::NIL), items, s_Target{}, helpers, _here);
        runAllPasses_S12QJajJ(root, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        return /*NRVO*/ root;
    }
    else
    {
        _here = last_7ZMqiNoZ(items).token;
        fail_7KwuQpwr("Noreturn during static init: this program will never finish booting."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
    };
}

static s_SolvedNode solveArgID_dtJdchCY(const s_Node& node, const s_Type& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    s_SolvedNode expr = solveNode_3DHmcQXo(only_P1M39QT4(node.items), type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    return solved_wmaa4w3Z(node, expr.type, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, _here);
}

static s_SolvedNode solveCall_Jb8DJVNy(const s_Node& node, const s_Target& target, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ fu_VEC<s_SolvedNode> args = solveNodes_EGJ2i2NT(node.items, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, (*(const fu_STR*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    return solveCall_nKfJhHWQ(fu_STR(node.value), static_cast<fu_VEC<s_SolvedNode>&&>(args), node.flags, target, false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
}

static s_SolvedNode solveArrlit_BfiDWCVe(const s_Node& node, const s_Type& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    s_Type itemType = (type ? tryClear_sliceable_qNIEFFQB(type) : s_Type{});
    if (!itemType && isStruct_FNWlOhLB(type))
        return solveCall_Jb8DJVNy(node, s_Target(lookupUserType_OSTRqvzG(type, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort).target), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else
    {
        /*MOV*/ fu_VEC<s_SolvedNode> args = solveNodes_EGJ2i2NT(node.items, itemType, (*(const s_Type*)fu::NIL), false, (*(const fu_STR*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        if (is_never_eqpYb5IC(if_last_7ZMqiNoZ(args).type))
        {
            makeNote_jjqaKIrz(s_SolverNotes_N_DeadArrlit, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
            return createBlock_aqSRQpGo(t_never, static_cast<fu_VEC<s_SolvedNode>&&>(args), s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        }
        else if (!(node.flags & s_Flags_F_NAMED_ARGS))
            return createArrlit_PoAFis0P(static_cast<fu_VEC<s_SolvedNode>&&>(args), itemType, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
        else
            fail_7KwuQpwr("TODO: solveArrlit: tryMatch by [ argnames: ... ] without function name."_fu, ctx, module, _here, ss, _helpers, _helpers_data);

    };
}

static s_SolvedNode createBool_aDDozPdz(const bool value, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    return createBool_6L5ZPRxh((value ? "true"_fu : "false"_fu), t_bool, ctx, module, _here, ss, _helpers, _helpers_data);
}

static s_SolvedNode createNot_Ew90ttev(const s_SolvedNode& item, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (item.kind == s_kind_bool)
    {
        if (item.value == "true"_fu)
            return createBool_aDDozPdz(false, ctx, module, _here, ss, _helpers, _helpers_data);
        else if (item.value == "false"_fu)
            return createBool_aDDozPdz(true, ctx, module, _here, ss, _helpers, _helpers_data);
        else
            BUG_k3P6Th3U(("Invalid bool literal: "_fu + qBAD_9QQZAztz(item.value)), ctx, module, _here, ss, _helpers, _helpers_data);

    }
    else
    {
        return SolvedNode_ROjBZjUC(s_kind_not, t_bool, s_Flags{}, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(item) } }, s_Target{}, s_Helpers{}, _here);
    };
}

static s_SolvedNode solveNot_Zx1adsgH(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    s_SolvedNode _0 {};
    return (_0 = solveNode_3DHmcQXo(only_P1M39QT4(node.items), t_bool, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort), createNot_Ew90ttev(static_cast<s_SolvedNode&&>(_0), ctx, module, _here, ss, _helpers, _helpers_data));
}

static s_SolvedNode popAndOr_693ai1cl(s_SolvedNode& node)
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

static s_SolvedNode if_A_and_NEVER_then_B_else_C_rESHbBxm(s_SolvedNode& cond, const s_Context& ctx, const s_Module& module, const s_Options& options, const s_TokenIdx& _here, const s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    makeNote_jjqaKIrz(s_SolverNotes_N_DeadIfCons, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
    return popAndOr_693ai1cl(cond);
}

static s_SolvedNode solveIf_ZPQ7QcNY(const s_Node& node, const s_Type& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ s_SolvedNode cond = solveNode_3DHmcQXo(node.items[0], t_bool, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    if (cond.kind == s_kind_bool)
        return solveNode_3DHmcQXo(node.items[((cond.value == "true"_fu) ? 1 : 2)], type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (is_never_eqpYb5IC(cond.type))
    {
        makeNote_jjqaKIrz(s_SolverNotes_N_DeadIfCond, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
        return /*NRVO*/ cond;
    }
    else
    {
        /*MOV*/ s_SolvedNode cons = (((cond.kind == s_kind_and) && is_never_eqpYb5IC(last_7ZMqiNoZ(cond.items).type)) ? if_A_and_NEVER_then_B_else_C_rESHbBxm(cond, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data) : solveBlock_a06G0wq6(node.items[1], type, 0, s_HelpersMask_HM_CanBreak, (*(const fu_STR*)fu::NIL), 0, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort));
        /*MOV*/ s_SolvedNode alt = solveBlock_a06G0wq6(node.items[2], type, 0, s_HelpersMask_HM_CanBreak, (*(const fu_STR*)fu::NIL), 0, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        return createIf_l7xV3cCl(cond, static_cast<s_SolvedNode&&>(cons), static_cast<s_SolvedNode&&>(alt), s_Type(type), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    };
}

static s_SolvedNode solveOr_nBazmpbE(const s_Node& node, const s_Type& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ fu_VEC<s_SolvedNode> items = solveNodes_EGJ2i2NT(node.items, (is_void_eqpYb5IC(type) ? t_bool : type), type, true, "true"_fu, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    return createOr_aJrU9XeP(static_cast<fu_VEC<s_SolvedNode>&&>(items), s_Type(type), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
}

static s_SolvedNode solveAnd_7GSiO82U(const s_Node& node, const s_Type& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    fu_VEC<s_SolvedNode> items = solveNodes_EGJ2i2NT(node.items, t_bool, type, true, "false"_fu, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    return createAnd_fwXZzazJ(items, s_Type(type), _here);
}

static s_SolvedNode solveLetStatement_00XQGF2Y(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (node.kind == s_kind_let)
        return solveNode_3DHmcQXo(node, t_void, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else
        BUG_k3P6Th3U((x7E_sTZRmMq1("Expected a `let` statement, got: `"_fu, str_v3b7EcLt(node.kind)) + "`."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

}

static s_SolvedNode solveLoop_uU1VEmRm(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const s_ScopeMemo scope0 = Scope_snap_JtSt09Yg(ss._scope, _helpers);
    fu_DEFER(Scope_pop_J3Z6pttr(ss._scope, scope0, _helpers));
    const int brk_idx = _helpers.size();
    push_HdzROYqO(s_HelpersData { s_Target{}, s_SolverPass{}, fu_STR(node.value), s_HelpersMask((s_HelpersMask_HM_Anon | s_HelpersMask_HM_CanBreak)), int(_current_fn.out.target.index), GET_next_local_index_rUmUpdn0(_current_fnort, ss, _current_fn), s_Type{}, s_Type(t_void), s_Postdom{} }, _helpers, _helpers_data);
    const s_Node& n_init = node.items[LOOP_INIT];
    const s_Node& n_pre_cond = node.items[LOOP_COND];
    const s_Node& n_body = node.items[LOOP_BODY];
    const s_Node& n_post_cond = node.items[LOOP_POST_COND];
    const s_Node& n_post = node.items[LOOP_POST];
    /*MOV*/ s_SolvedNode init = (n_init ? solveLetStatement_00XQGF2Y(n_init, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort) : s_SolvedNode{});
    if (is_never_eqpYb5IC(init.type))
    {
        makeNote_jjqaKIrz(s_SolverNotes_N_DeadLoopInit, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
        return /*NRVO*/ init;
    }
    else
    {
        /*MOV*/ s_SolvedNode pre_cond = (n_pre_cond ? solveNode_3DHmcQXo(n_pre_cond, t_bool, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode body = (n_body ? solveBlock_a06G0wq6(n_body, t_void, 0, s_HelpersMask_HM_CanBreak, (*(const fu_STR*)fu::NIL), 0, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode post_cond = (n_post_cond ? solveNode_3DHmcQXo(n_post_cond, t_bool, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode post = (n_post ? solveNode_3DHmcQXo(n_post, t_void, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort) : s_SolvedNode{});
        const s_Helpers& h = _helpers[brk_idx];
        const s_Type& type = ((!pre_cond && !post_cond && !s_HelpersMask((_helpers_data[h.index].mask & s_HelpersMask_HM_LabelUsed))) ? t_never : t_void);
        return SolvedNode_ROjBZjUC(s_kind_loop, type, s_Flags{}, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<5, s_SolvedNode> { static_cast<s_SolvedNode&&>(init), static_cast<s_SolvedNode&&>(pre_cond), static_cast<s_SolvedNode&&>(body), static_cast<s_SolvedNode&&>(post_cond), static_cast<s_SolvedNode&&>(post) } }, s_Target{}, h, _here);
    };
}

static int Scope_lookupReturn_Hyiq3DVu(const fu_STR& id, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{

    {
        fu::view<s_ScopeSkip> ss_1 = ss._ss.helpers;
        int ssi = (ss_1.size() - 1);
        int ssN = ((ssi >= 0) ? (ss_1[ssi].end - 1) : int{});
        for (int i = _helpers.size(); i-- > 0; )
        {
            if ((ssi >= 0) && (i == ssN))
            {
                i = ss_1[ssi--].start;
                ssN = ((ssi >= 0) ? (ss_1[ssi].end - 1) : int{});
                continue;
            }
            else
            {
                const s_Helpers& item = _helpers[i];
                const s_HelpersData* BL_6_v;
                const s_HelpersData* BL_8_v;
                const s_HelpersData* BL_10_v;
                if (!s_HelpersMask(((__extension__ (
                {
                    const s_Helpers& h = item;
                    BL_6_v = &(_helpers_data[h.index]);
                (void)0;}), *BL_6_v).mask & s_HelpersMask_HM_CanReturn)))
                    continue;
                else if ((__extension__ (
                {
                    const s_Helpers& h = item;
                    BL_8_v = &(_helpers_data[h.index]);
                (void)0;}), *BL_8_v).mask & s_HelpersMask_HM_Lambda)
                    continue;
                else if (id && ((__extension__ (
                {
                    const s_Helpers& h = item;
                    BL_10_v = &(_helpers_data[h.index]);
                (void)0;}), *BL_10_v).id != id))
                    continue;
                else
                    return i;

            };
        };
    };
    fail_7KwuQpwr((("No return `"_fu + id) + "` in scope."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
}

static int Scope_lookupLabel_4RvjTOcw(const fu_STR& id, const bool cont, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    int CONTINUE_BELOW {};

    {
        fu::view<s_ScopeSkip> ss_1 = ss._ss.helpers;
        int ssi = (ss_1.size() - 1);
        int ssN = ((ssi >= 0) ? (ss_1[ssi].end - 1) : int{});
        for (int i = _helpers.size(); i-- > 0; )
        {
            if ((ssi >= 0) && (i == ssN))
            {
                i = ss_1[ssi--].start;
                ssN = ((ssi >= 0) ? (ss_1[ssi].end - 1) : int{});
                continue;
            }
            else
            {
                const s_Helpers& item = _helpers[i];
                if (i < (CONTINUE_BELOW - 1))
                    i++;

                const s_HelpersData* BL_7_v;
                if (!s_HelpersMask(((__extension__ (
                {
                    const s_Helpers& h = item;
                    BL_7_v = &(_helpers_data[h.index]);
                (void)0;}), *BL_7_v).mask & s_HelpersMask_HM_CanBreak)))
                {
                    if (!CONTINUE_BELOW)
                    {
                        const s_HelpersData* BL_10_v;
                        if (id || !s_HelpersMask(((__extension__ (
                        {
                            const s_Helpers& h = item;
                            BL_10_v = &(_helpers_data[h.index]);
                        (void)0;}), *BL_10_v).mask & s_HelpersMask_HM_Lambda)))
                            continue;
                        else if (!cont)
                        {
                            CONTINUE_BELOW = i;
                            continue;
                        };
                    };
                    return i;
                }
                else
                {
                    if (!CONTINUE_BELOW)
                    {
                        const s_HelpersData* BL_15_v;
                        const s_HelpersData* BL_16_v;
                        if (!(id ? ((__extension__ (
                        {
                            const s_Helpers& h = item;
                            BL_15_v = &(_helpers_data[h.index]);
                        (void)0;}), *BL_15_v).id == id) : !!s_HelpersMask(((__extension__ (
                        {
                            const s_Helpers& h = item;
                            BL_16_v = &(_helpers_data[h.index]);
                        (void)0;}), *BL_16_v).mask & s_HelpersMask_HM_Anon))))
                            continue;
                        else if (cont)
                        {
                            i++;
                            if (!(i < _helpers.size()))
                                fail_7KwuQpwr((("Cannot continue to label `"_fu + id) + "` from here, did you mean to `break`?"_fu), ctx, module, _here, ss, _helpers, _helpers_data);

                        };
                    };
                    return i;
                };
            };
        };
    };
    fail_7KwuQpwr((("No label `"_fu + id) + "` in scope."_fu), ctx, module, _here, ss, _helpers, _helpers_data);
}

static s_SolvedNode createJump_lTmUmCsT(const s_Helpers& h, const s_SolvedNode& expr, const s_TokenIdx& _here)
{
    return SolvedNode_ROjBZjUC(s_kind_jump, t_never, s_Flags{}, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, h, _here);
}

static void injectJumps_aC7eqyg4(const s_Helpers& h, s_SolvedNode& expr, const s_TokenIdx& _here)
{
    if ((expr.kind == s_kind_block) && expr.items)
    {
        s_SolvedNode& expr_1 = last_PyOGoLWZ(expr.items);
        if (!is_never_eqpYb5IC(expr_1.type))
            injectJumps_aC7eqyg4(h, expr_1, _here);

    }
    else if (expr.kind == s_kind_if)
    {
        injectJumps_aC7eqyg4(h, expr.items.mutref(1), _here);
        injectJumps_aC7eqyg4(h, expr.items.mutref(2), _here);
        expr.type = t_never;
    }
    else
        expr = createJump_lTmUmCsT(h, expr, _here);

}

static s_SolvedNode solveJump_66NnCWWr(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const int helpers_idx = ((node.kind == s_kind_return) ? Scope_lookupReturn_Hyiq3DVu(node.value, ctx, module, _here, ss, _helpers, _helpers_data) : Scope_lookupLabel_4RvjTOcw(node.value, (node.kind == s_kind_continue), ctx, module, _here, ss, _helpers, _helpers_data));
    const s_Helpers h { _helpers[helpers_idx] };
    const s_Type* _0;
    /*MOV*/ s_SolvedNode expr = (!node.items ? createEmpty_R642r6KV(s_kind_empty, t_void, s_Target{}, _here) : solveNode_3DHmcQXo(only_P1M39QT4(node.items), s_Type((*(_0 = &(_helpers_data[h.index].ret_actual)) ? *_0 : _helpers_data[h.index].ret_expect)), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort));
    if (is_never_eqpYb5IC(expr.type))
        return /*NRVO*/ expr;
    else if (_helpers_data[h.index].local_of != _current_fn.out.target.index)
    {
        add_JL5WtWND(_current_fn.effects.far_jumps, _helpers_data[h.index].local_of);
        return createEmpty_R642r6KV(s_kind___far_jump, t_never, s_Target{}, _here);
    }
    else
    {
        _helpers_data.mutref(h.index).mask |= s_HelpersMask_HM_LabelUsed;
        reportReturnType_qYkj1e6Q(h, expr.type, ((node.flags & s_Flags_F_IMPLICIT) && !node.items), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
        if (is_void_eqpYb5IC(expr.type) && (node.flags & s_Flags_F_IMPLICIT))
            return /*NRVO*/ expr;
        else
        {
            relinkJumps_fHVaXtUO(h, expr, module, ss, _helpers_data);
            injectJumps_aC7eqyg4(h, expr, _here);
            return /*NRVO*/ expr;
        };
    };
}

static s_SolvedNode solveInt_v2WuGvf6(const s_Node& node, const s_Type& type, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    return solved_wmaa4w3Z(node, solveInt_M8GoO5uR(node.value, type, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveReal_oAsaTrlj(const s_Node& node, const s_Type& type, const s_TokenIdx& _here)
{
    return solved_wmaa4w3Z(node, solveReal_t90qkLYy(node.value, type), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveString_Jp7wTvmJ(const s_Node& node, const s_Type& type, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_Type type_1 = solveString_HCTIquZP(node.value, type, ctx, module);
    if (!node.value && type_isSliceable_mipI0b6h(t_string))
    {
        return createDefinit_zBcvnR2D(add_ref_arUcTyoS(s_Type(t_string), Lifetime_temporary_8nlJDPX0(), _here, ctx), ctx, module, _here, ss, _helpers, _helpers_data);
    }
    else
    {
        return solved_wmaa4w3Z(node, type_1, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
    };
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

static s_SolvedNode solveChar_Uc6ArIdy(const s_Node& node, const s_TokenIdx& _here)
{
    return solved_wmaa4w3Z(node, t_byte, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveDefinit_jkiJ0EKU(const s_Type& type, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort)
{
    s_Type _0 {};
    return createDefinit_zBcvnR2D(((_0 = trySolveDefinit_ER69Znmi(type)) ? static_cast<s_Type&&>(_0) : fail_7KwuQpwr(("Cannot definit type: "_fu + humanizeType_3wOVPKQg(type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data)), ctx, module, _here, ss, _helpers, _helpers_data);
}

static void visit_3s0h7DWq(const int modid, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (!Scope_import_5Hdx0N1E(modid, ctx, module, _here, ss, _helpers, _helpers_data))
        return;
    else
    {
        const s_Scope& s = ctx.modules[modid].out.solve.scope;
        for (int i = 0; i < s.imports.size(); i++)
            visit_3s0h7DWq(s.imports[i], ctx, module, _here, ss, _helpers, _helpers_data);

    };
}

static s_SolvedNode solveImport_3vAJtaSe(const s_Node& node, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const s_Module& m = findModule_RprOSxU4(node.value, ctx, module, _here, ss, _helpers, _helpers_data);
    visit_3s0h7DWq(m.modid, ctx, module, _here, ss, _helpers, _helpers_data);
    if (node.flags & s_Flags_F_PUB)
    {
        if (_current_fn.scope0)
            fail_7KwuQpwr("Cannot pub import from here."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
        else
            add_JL5WtWND(ss._pub_imports, m.modid);

    };
    return createEmpty_R642r6KV(s_kind_empty, t_void, s_Target{}, _here);
}

static s_SolvedNode solveDefer_kjr7JgGw(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    /*MOV*/ s_SolvedNode item = solveNode_3DHmcQXo(only_P1M39QT4(node.items), t_void, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    return solved_wmaa4w3Z(node, t_void, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { static_cast<s_SolvedNode&&>(item) } }, s_Target{}, _here);
}

static s_SolvedNode solveTryCatch_I5IorLNz(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (node.items.size() == 3)
    {
        const s_ScopeMemo scope0 = Scope_snap_JtSt09Yg(ss._scope, _helpers);
        /*MOV*/ s_SolvedNode tRy = solveNode_3DHmcQXo(node.items[0], t_void, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        Scope_pop_J3Z6pttr(ss._scope, scope0, _helpers);
        const s_ScopeMemo scope0_1 = Scope_snap_JtSt09Yg(ss._scope, _helpers);
        /*MOV*/ s_SolvedNode err = solveLetStatement_00XQGF2Y(node.items[1], ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        /*MOV*/ s_SolvedNode cAtch = solveNode_3DHmcQXo(node.items[2], t_void, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        Scope_pop_J3Z6pttr(ss._scope, scope0_1, _helpers);
        if ((err.kind == s_kind_letdef) && isAssignableAsArgument_d2HKSF3T(GET_ryFyPS6P(err.target, ctx, module, _here, ss, _helpers, _helpers_data).solved.type, t_string, false))
        {
            const s_Type& type = ((is_never_eqpYb5IC(tRy.type) && is_never_eqpYb5IC(cAtch.type)) ? t_never : t_void);
            return solved_wmaa4w3Z(node, type, fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { static_cast<s_SolvedNode&&>(tRy), static_cast<s_SolvedNode&&>(err), static_cast<s_SolvedNode&&>(cAtch) } }, s_Target{}, _here);
        }
        else
            fail_7KwuQpwr(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

    }
    else
    {
        BUG_k3P6Th3U(fu_STR{}, ctx, module, _here, ss, _helpers, _helpers_data);
    };
}

static s_SolvedNode solveTypedef_cM52cZvk(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    s_Type annot = evalTypeAnnot_oDto04gx(only_P1M39QT4(node.items), (*(const s_Map_UKvTd2mknh0*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    const s_Target target = Scope_Typedef_ZZmCHu2D(ss._scope, node.value, annot, node.flags, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    const s_Struct& s = tryLookupUserType_ChYpFATl(annot, ctx, module);
    if (s.target)
    {
        GET_mut_UTaXftgW(target, module, ss) = s_Overload(GET_ryFyPS6P(s.target, ctx, module, _here, ss, _helpers, _helpers_data));
        EXT_mut_ZuyZYWC3(target, module, ss) = s_Extended(EXT_N3jS4trN(s.target, ctx, module, ss));
    };
    return createEmpty_R642r6KV(s_kind_empty, t_void, s_Target{}, _here);
}

static s_SolvedNode solveTypeCast_OeZKYfxq(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const s_Node& left = node.items[0];
    const s_Node& right = node.items[1];
    s_Type expect = evalTypeAnnot_oDto04gx(right, (*(const s_Map_UKvTd2mknh0*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    /*MOV*/ s_SolvedNode actual = solveNode_3DHmcQXo(left, expect, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    if (isAssignable_zQyU0CZE(expect, actual.type, false, false))
        return /*NRVO*/ actual;
    else
    {
        fu_VEC<s_Target> conv = tryConvert_sOlyaEcz(expect, actual.type, (*(const s_SolvedNode*)fu::NIL), true, (*(const s_Scope*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
        if (!conv)
            fail_7KwuQpwr(((("Cannot convert: "_fu + humanizeType_3wOVPKQg(expect, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)) + " <- "_fu) + humanizeType_3wOVPKQg(actual.type, false, 0, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)), ctx, module, _here, ss, _helpers, _helpers_data);
        else
        {
            applyConversion_CTEVKvNu(actual, conv, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
            return /*NRVO*/ actual;
        };
    };
}

static s_SolvedNode solveTypeAssert_45HA0eIK(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    s_Map_UKvTd2mknh0 typeParams {};
    bool _0 {};
    return (_0 = evalTypePattern_x7DQggP3(node, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort), createBool_aDDozPdz(bool(_0), ctx, module, _here, ss, _helpers, _helpers_data));
}

static s_SolvedNode solveTypeParam_D34RwKZk(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    const s_Type* _0;
    return (_0 = &(evalTypeParam_ghZHazpS(node.value, (*(const s_Map_UKvTd2mknh0*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort)), solved_wmaa4w3Z(node, *_0, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here));
}

static void visitScope_cgQI5zT7(const bool local_scope, fu::view<s_ScopeItem> items, fu::view<char> id, const bool shadow, fu_VEC<s_Target>& result, s_SolverState& ss)
{
    int scope_iterator {};
    s_Target target {};
    bool shadows {};
    while (!shadow && (target = (local_scope ? search_jNlWknKv(ss._scope.items, id, scope_iterator, ss._ss.items, shadows, fu::view<s_Target>{}, fu::view<s_ScopeItem>{}) : search_R5Xl5zvH(items, id, scope_iterator))))
    {
        result.unshift(s_Target(target));
    };
}

                                #ifndef DEF_each_bVLnsZ2oQN4
                                #define DEF_each_bVLnsZ2oQN4
inline void each_bVLnsZ2o(fu::view<s_Struct> a, fu::view<char> id, const bool shadow, fu_VEC<s_Target>& result, s_SolverState& ss)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Struct& sTruct = a[i];
        visitScope_cgQI5zT7(false, sTruct.items, id, shadow, result, ss);
    };
}
                                #endif

static void visitTypes_SZuVDwFN(const s_Module& module, fu::view<char> id, const bool shadow, fu_VEC<s_Target>& result, s_SolverState& ss)
{
    each_bVLnsZ2o(module.out.types, id, shadow, result, ss);
}

                                #ifndef DEF_each_2uHYpGGiE6d
                                #define DEF_each_2uHYpGGiE6d
inline void each_2uHYpGGi(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu::view<char> id, const bool shadow, fu_VEC<s_Target>& result, const s_Context& ctx, s_SolverState& ss)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss_1 = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if ((ss_1.end <= i0))
            continue;
        else
        {
            const int i1 = ss_1.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
            {
                const int import = items[i_1];
                visitTypes_SZuVDwFN(ctx.modules[import], id, shadow, result, ss);
            };
            i0 = ss_1.end;
        };
    };
}
                                #endif

static fu_VEC<s_Target> solveAddrOfFn_qJy9QJ6t(fu::view<char> id, const s_Flags flags, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const bool shadow = false;
    /*MOV*/ fu_VEC<s_Target> result {};
    visitScope_cgQI5zT7(true, fu::view<s_ScopeItem>{}, id, shadow, result, ss);
    if (flags & s_Flags_F_ACCESS)
    {
        visitTypes_SZuVDwFN(module, id, shadow, result, ss);
        each_2uHYpGGi(fu_VEC<int>(ss._scope.imports), fu_VEC<s_ScopeSkip>(ss._ss.imports), 0, id, shadow, result, ctx, ss);
    };
    return static_cast<fu_VEC<s_Target>&&>((result ? result : fail_7KwuQpwr((("No `fn "_fu + id) + "` in scope."_fu), ctx, module, _here, ss, _helpers, _helpers_data)));
}

static s_SolvedNode solveAddrOfFn_MLTP5Dsi(const s_Node& node, const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu::view<char> id = node.value;
    fu_VEC<s_Target> result = solveAddrOfFn_qJy9QJ6t(id, node.flags, ctx, module, _here, ss, _helpers, _helpers_data);
    s_Type type = s_Type { s_ValueType { 0, packAddrOfFn_KJaKO9Hx(result) }, s_Lifetime{} };
    return createEmpty_R642r6KV(s_kind_empty, type, s_Target{}, _here);
}

                                #ifndef DEF_starts_Nz2mqu34wT8
                                #define DEF_starts_Nz2mqu34wT8
inline bool starts_Nz2mqu34(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEF_ends_Nz2mqu34wT8
                                #define DEF_ends_Nz2mqu34wT8
inline bool ends_Nz2mqu34(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

static void walk_I9oilqRR(s_Node& node, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    for (int i = 0; i < node.items.size(); i++)
        walk_I9oilqRR(node.items.mutref(i), placeholder, prefix, suffix, inside, field);

    const int idx = ((node.value == placeholder) ? 0 : (starts_Nz2mqu34(node.value, prefix) ? 0 : (ends_Nz2mqu34(node.value, suffix) ? (node.value.size() - placeholder.size()) : fu::lfind(node.value, inside))));
    if ((idx >= 0))
    {
        if (node.kind == s_kind_call)
            node.value.splice(idx, placeholder.size(), field.id);
        else if (node.kind == s_kind_str)
            node.value.splice(idx, placeholder.size(), field.id);

    };
}

inline static s_Node astReplace_mtnvYRAU(const s_Node& node, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    /*MOV*/ s_Node node_1 { node };
    walk_I9oilqRR(node_1, placeholder, prefix, suffix, inside, field);
    return /*NRVO*/ node_1;
}

static s_SolvedNode solveForFieldsOf_d2ebv1JQ(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    fu::view<char> placeholder = node.value;
    const s_Node& body_template = node.items[1];
    fu_STR prefix = (placeholder + "_"_fu);
    fu_STR suffix = ("_"_fu + placeholder);
    fu_STR inside = (("_"_fu + placeholder) + "_"_fu);
    s_Type _0 {};
    fu::view<s_ScopeItem> _1 {};
    fu::view<s_ScopeItem> fields = ((_1 = (_0 = evalTypeAnnot_oDto04gx(node.items[0], (*(const s_Map_UKvTd2mknh0*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort), lookupUserType_OSTRqvzG(static_cast<s_Type&&>(_0), ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort)).items) ? static_cast<fu::view<s_ScopeItem>&&>(_1) : BUG_k3P6Th3U("Empty struct/enum."_fu, ctx, module, _here, ss, _helpers, _helpers_data));
    fu_VEC<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        items_ast += astReplace_mtnvYRAU(body_template, placeholder, prefix, suffix, inside, field);
    };
    /*MOV*/ fu_VEC<s_SolvedNode> items = solveNodes_EGJ2i2NT(items_ast, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, (*(const fu_STR*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    const s_Type& type = (is_never_eqpYb5IC(if_last_7ZMqiNoZ(items).type) ? t_never : t_void);
    return createBlock_aqSRQpGo(type, static_cast<fu_VEC<s_SolvedNode>&&>(items), s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
}

static void compilerBreak_tjERlAMq(const s_Context& ctx, const s_Module& module, const s_TokenIdx& _here, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    /*MOV*/ fu_STR debug = "\nCompiler break:"_fu;
    if (_current_fn.out.target)
    {
        const s_Target& t = _current_fn.out.target;
        debug += (x7E_sTZRmMq1((x7E_sTZRmMq1((("\n    Current fn: "_fu + qWHAT_vXP1PCtb(GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data), ctx, module, _here, ss, _helpers, _helpers_data)) + " at ("_fu), fu::i64dec(t.modid)) + ", "_fu), fu::i64dec(t.index)) + "):"_fu);
        fu::view<s_Overload> locals = EXT_N3jS4trN(t, ctx, module, ss).locals;
        for (int i = 0; i < locals.size(); i++)
        {
            const s_Overload& item = locals[i];
            debug += ("\n        "_fu + qWHAT_vXP1PCtb(item, ctx, module, _here, ss, _helpers, _helpers_data));
        };
    };
    if (debug)
    {
        fu_STR* BL_5_v;
        fu::println((fu::slate<1, fu_STR> { static_cast<fu_STR&&>((__extension__ (
        {
            /*MOV*/ fu_STR& x = debug;
            BL_5_v = &(x);
        (void)0;}), *BL_5_v)) }));
    };
    bReak_DX6KImTN();
}

static s_SolvedNode executeCompilerPragma_o7FwDtKu(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    if (node.value != "break"_fu)
    {
        fu_VEC<s_SolvedNode> _0 {};
        return (_0 = solveNodes_EGJ2i2NT(node.items, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, (*(const fu_STR*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort), SolvedNode_ROjBZjUC(s_kind_pragma, t_void, s_Flags{}, node.value, static_cast<fu_VEC<s_SolvedNode>&&>(_0), s_Target{}, s_Helpers{}, _here));
    }
    else
    {
        compilerBreak_tjERlAMq(ctx, module, _here, ss, _current_fn, _helpers, _helpers_data);
        return createEmpty_R642r6KV(s_kind_empty, t_void, s_Target{}, _here);
    };
}

static s_SolvedNode createUnwrap_c2oggOHP(const s_TokenIdx& _here)
{
    return SolvedNode_ROjBZjUC(s_kind_unwrap, t_void, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode solveDeclExpr_pBppagfB(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    return s_SolvedNode(only_7ZMqiNoZ(solveNodes_EGJ2i2NT((fu::slate<1, s_Node> { s_Node(node) }), (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, (*(const fu_STR*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort)));
}

static s_SolvedNode solveNode_3DHmcQXo(const s_Node& node, const s_Type& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort)
{
    HERE_bcSKDjer(node.token, _here);
    const s_kind k = node.kind;
    if (k == s_kind_root)
        return solveRoot_Br0MU9mB(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_block)
        return solveBlock_a06G0wq6(node, type, 0, s_HelpersMask_HM_CanBreak, (*(const fu_STR*)fu::NIL), 0, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_argid)
        return solveArgID_dtJdchCY(node, type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_let)
        return solveLet_hoJP0epM(node, (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_call)
    {
        return solveCall_Jb8DJVNy(node, s_Target{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    }
    else if (k == s_kind_arrlit)
        return solveArrlit_BfiDWCVe(node, type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_not)
        return solveNot_Zx1adsgH(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_if)
        return solveIf_ZPQ7QcNY(node, type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_or)
        return solveOr_nBazmpbE(node, type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_and)
        return solveAnd_7GSiO82U(node, type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_loop)
        return solveLoop_uU1VEmRm(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_break)
        return solveJump_66NnCWWr(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_return)
        return solveJump_66NnCWWr(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_continue)
        return solveJump_66NnCWWr(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_int)
        return solveInt_v2WuGvf6(node, type, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_real)
        return solveReal_oAsaTrlj(node, type, _here);
    else if (k == s_kind_str)
        return solveString_Jp7wTvmJ(node, type, ctx, module, _here, ss, _helpers, _helpers_data);
    else if (k == s_kind_char)
        return solveChar_Uc6ArIdy(node, _here);
    else if (k == s_kind_bool)
        return createBool_6L5ZPRxh(node.value, t_bool, ctx, module, _here, ss, _helpers, _helpers_data);
    else if (k == s_kind_definit)
        return solveDefinit_jkiJ0EKU(type, ctx, module, _here, ss, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_import)
        return solveImport_3vAJtaSe(node, ctx, module, _here, ss, _current_fn, _helpers, _helpers_data);
    else if (k == s_kind_defer)
        return solveDefer_kjr7JgGw(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_try)
        return solveTryCatch_I5IorLNz(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_typedef)
        return solveTypedef_cM52cZvk(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_typecast)
        return solveTypeCast_OeZKYfxq(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_typeassert)
        return solveTypeAssert_45HA0eIK(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_typeparam)
        return solveTypeParam_D34RwKZk(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_addroffn)
        return solveAddrOfFn_MLTP5Dsi(node, ctx, module, _here, ss, _helpers, _helpers_data);
    else if (k == s_kind_forfieldsof)
        return solveForFieldsOf_d2ebv1JQ(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_pragma)
        return executeCompilerPragma_o7FwDtKu(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else if (k == s_kind_void)
    {
        return createEmpty_R642r6KV(s_kind_empty, t_void, s_Target{}, _here);
    }
    else if (k == s_kind_unwrap)
        return createUnwrap_c2oggOHP(_here);
    else if (unorderedClassify_flORhcLW(k))
        return solveDeclExpr_pBppagfB(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    else
        fail_7KwuQpwr((x7E_sTZRmMq1("TODO: solveNode("_fu, str_v3b7EcLt(k)) + ")."_fu), ctx, module, _here, ss, _helpers, _helpers_data);

}

static void Scope_observeDefects_asUq8ogd(fu::view<s_ScopeItem> items, const s_Context& ctx, const s_Module& module, const s_Options& options, const s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    bool hasLets = false;
    bool hasPubTemplates = false;
    fu_VEC<s_Target> privates {};
    for (int i = 0; i < items.size(); i++)
    {
        const s_Target t = target_QZZ1cmZA(items[i]);
        if (t.modid != module.modid)
            continue;
        else
        {
            const s_Overload& o = GET_ryFyPS6P(t, ctx, module, _here, ss, _helpers, _helpers_data);
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
    };
    if (hasLets)
        makeNote_jjqaKIrz(s_SolverNotes_N_SD_HasStaticInit, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);

    if (privates && hasPubTemplates)
    {
        makeNote_jjqaKIrz(s_SolverNotes_N_SD_ExternPrivates, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
        for (int i_1 = 0; i_1 < privates.size(); i_1++)
        {
            s_Overload& o = GET_mut_UTaXftgW(privates[i_1], module, ss);
            o.flags |= s_Flags_F_EXTERN;
        };
    };
}

s_SolverOutput solve_Bpfv4cFz(const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_TokenIdx _here {};
    s_SolverState ss {};
    s_SolverNotes _notes {};
    s_CurrentFn _current_fn {};
    fu_VEC<s_Helpers> _helpers {};
    fu_VEC<s_HelpersData> _helpers_data {};
    ss.shortModuleName = (module.modid ? getShortModuleName_ghRLOdAK(module.fname) : fu_STR{});
    ss._spec_errors = fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "BUG: Specializer reentry."_fu } };
    ss.TODO_FIX_convert_args = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode{} } };
    ss._scope.extended += s_Extended{};
    push_HdzROYqO(s_HelpersData{}, _helpers, _helpers_data);
    if (module.modid)
    {
        ss._scope.imports += int(module.modid);
        _Scope_import__forceCopy_2xGqZyw5(0, ctx, ss);
    }
    else
        ss._scope = listGlobals_5RKSmq8W(module);

    const s_Target _current_fnort = s_Target { int(module.modid), 0 };
    /*MOV*/ s_SolvedNode root = solveNode_3DHmcQXo(s_Node(module.in.parse.root), (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _helpers_data, _current_fnort);
    if (_current_fn)
        BUG_k3P6Th3U("non-empty _current_fn."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
    else if (_helpers_data[0])
        BUG_k3P6Th3U("non-empty _helpers_data[0]."_fu, ctx, module, _here, ss, _helpers, _helpers_data);
    else
    {
        Scope_observeDefects_asUq8ogd(ss._scope.items, ctx, module, options, _here, ss, _notes, _helpers, _helpers_data);
        for (int i = 0; i < ss._warnings.size(); i++)
        {
            const s_Warning& w = ss._warnings[i];
            if (w.token)
            {
                _here = w.token;
                fail_7KwuQpwr(fu_STR(w.message), ctx, module, _here, ss, _helpers, _helpers_data);
            };
        };
        return s_SolverOutput { static_cast<s_SolvedNode&&>(root), Scope_exports_81X8EeCo(ss._scope, module.modid, ss._field_items, ss._pub_imports), s_SolverNotes(_notes) };
    };
}

#endif

#pragma GCC diagnostic pop
