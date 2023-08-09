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
typedef fu::u8 s_VFacts;
struct s_Target;
struct s_Scope;
struct s_Overload;
typedef uint16_t s_SolverStatus;
struct s_Extended;
struct s_Argument;
struct s_BitSet;
struct s_COWInside;
typedef fu::u8 s_ExitPaths;
struct s_Template;
struct s_Node;
typedef uint16_t s_DeclAsserts;
typedef fu::u8 s_ParseSyntax;
typedef uint16_t s_FxMask;
struct s_ScopeItem;
typedef int s_SolverNotes;
struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
struct s_LineColChars;
struct s_ParserOutput;
struct s_ModuleOrder;
struct s_ModuleOutputs;
struct s_Struct;
struct s_CodegenOutput;
typedef fu::u8 s_CGDefects;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Map_qfSmCKRS93e;
struct s_Options;
struct s_Lint;
typedef fu::u8 s_DevOptions;
struct s_SolverState;
struct s_ScopeMemo;
struct s_ScopeSkipMemos;
struct s_ScopeSkip;
struct s_HelpersData;
enum s_SolverPass: fu::u8;
typedef fu::u8 s_HelpersMask;
struct s_Postdom;
struct s_PostdomSnap;
struct s_Ephemeral;
struct s_ChildTarget;
struct s_Map_E6hvIBLiDIl;
struct s_Warning;
struct s_CurrentFn;
struct s_Flow;
struct s_Effects;
struct s_Events;
struct s_EventsSnap;
struct s_WriteID;
struct s_ReadID;
struct s_RWEvent;
struct s_Usage;
enum s_StaticEval: fu::u8;
struct s_ClosureID;
struct s_Map_uYRcurSQUL8;
struct s_TypeParam;
struct s_Intlit;
typedef fu::u8 s_CodeFmt;
struct s_Mi;
struct s_NativeHacks;
enum s_ArgQuery: fu::u8;
struct s_UnpackedOffset;
struct s_StructCanon;
enum s_BorrowCheckPass: fu::u8;
fu::str getShortModuleName_Y2f94oTr(const fu::str&);
s_Scope listGlobals_dbXPIQ4v(const s_Module&);
void HERE_WgKYH8CN(const s_TokenIdx&, s_TokenIdx&);
static s_SolvedNode solveNode_A7YoMoA6(const s_Node&, const s_Type&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
bool is_never_8KZIyCKE(const s_Type&);
fu::str qBAD_bF2G8fJR(fu::view<char>);
const s_Token& _token_yZ5HaS8S(const s_TokenIdx&, const s_Context&);
[[noreturn]] static fu::never fail_pNB52ATY(fu::str&&, fu::view<char>, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>);
static const s_Overload& GET_etmeeocQ(const s_Target&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>);
fu::str qKW_bF2G8fJR(fu::view<char>);
s_ClosureID tryParseClosureID_WIMP5mdY(fu::view<char>);
fu::str qID_bF2G8fJR(fu::view<char>);
const fu::str& _fname_uP3EjQNl(const s_TokenIdx&, const s_Context&);
[[noreturn]] fu::never FAIL_XGLZHzGg(fu::view<char>, const s_TokenIdx&, const s_Context&);
s_Target Scope_create_LHVUyYFV(s_Scope&, s_kind, const fu::str&, const s_Type&, s_Flags, s_SolverStatus, int, const s_Module&);
void Scope_set_E3Ir4Jje(s_Scope&, const fu::str&, const s_Target&, bool);
s_ScopeMemo Scope_snap_bI1J4XJR(const s_Scope&, fu::view<s_Helpers>);
fu::str packAddrOfFn_7Lj6A1O1(fu::view<s_Target>);
static s_Type evalTypeAnnot_ctbW9IO5(const s_Node&, const s_Map_uYRcurSQUL8&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
s_Lifetime Lifetime_temporary_8nlJDPX0();
s_Type add_ref_SU0caH0t(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type add_mutref_SU0caH0t(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type createArray_FLt6d9WO(const s_Type&);
s_Type relax_typeParam_57qzYcmt(s_Type&&);
fu::str resolveFile_x_VkBaqzGv(const fu::str&, const s_Context&);
void add_mle9fepo(s_BitSet&, int);
const fu::vec<int>& lookupTypeImports_LriKPDIk(const s_ValueType&, const s_Context&, const s_Module&);
int modidOfOrigin_u8EynJdr(const s_Type&);
bool has_35mEQu7d(const s_BitSet&, int);
bool add_once_mle9fepo(s_BitSet&, int);
s_Target target_7YqD2G7N(const s_ScopeItem&);
s_Target search_bSS3Hele(const s_Target&, int&);
s_Target search_UCBpCBiH(fu::view_mut<s_ScopeItem>, fu::view<char>, int&, fu::view<s_ScopeSkip>, bool&, fu::view<s_Target>, fu::view<s_ScopeItem>);
s_Target search_Jzv8sHaW(fu::view<s_ScopeItem>, fu::view<char>, int&);
static bool couldRetype_IkqpfGaP(const s_SolvedNode&, const s_SolverState&);
static const s_Type& Scope_lookupType_RwiDICQJ(fu::str&&, s_Flags, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
bool is_arithmetic_6bkyMkO3(const s_ValueType&);
s_Intlit Intlit_SQ4NkHfH(fu::view<char>);
bool is_primitive_6bkyMkO3(const s_ValueType&);
int basePrimPrefixLen_VyAVtbGI(fu::view<char>);
const s_Struct& tryLookupUserType_LriKPDIk(const s_ValueType&, const s_Context&, const s_Module&);
bool isStruct_ddyKn6V4(const s_ValueType&);
static const s_Struct& lookupUserType_d3zNJ4dJ(const s_Type&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, const s_Target&);
fu::str humanizeQuals_bHDaAhyO(unsigned);
bool Region_isStatic_28foEZVg(const s_Region&);
bool Region_isTemp_28foEZVg(const s_Region&);
bool Region_isArgPosition_28foEZVg(const s_Region&);
int Region_toArgPosition_28foEZVg(const s_Region&);
int Region_toLocal_28foEZVg(const s_Region&);
s_Type clear_refs_57qzYcmt(s_Type&&);
s_Type definitType_57qzYcmt(s_Type&&);
static s_Type tryRetyping_2YiDIUlF(const s_SolvedNode&, const s_Type&, const s_Context&, const s_Module&, const s_Options&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, const s_Target&);
s_Type type_trySuper_uwryF4aS(const s_Type&, const s_Type&, bool);
s_Type tryClear_ref_tkXzsAAo(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_mutref_tkXzsAAo(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_array_DOKZ61Hc(const s_Type&);
static bool trySolveTypeParams_Yy4toJD0(const s_Node&, s_Type&&, s_Map_uYRcurSQUL8&, fu::vec<s_Warning>&, bool, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
bool isAssignable_Ptvwgj5A(const s_Type&, const s_Type&, bool, bool);
s_Type tryClear_sliceable_QUN697Dd(const s_ValueType&);
fu::str serializeType_CSxk94aZ(const s_Type&, fu::view<char>);
static bool evalTypePattern_17W8iDcf(const s_Node&, s_Map_uYRcurSQUL8&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
bool is_trivial_LriKPDIk(const s_ValueType&, const s_Context&, const s_Module&);
bool is_rx_copy_UHdpdATk(const s_Type&);
bool is_bitfield_6bkyMkO3(const s_ValueType&);
bool is_integral_6bkyMkO3(const s_ValueType&);
bool is_unsigned_6bkyMkO3(const s_ValueType&);
bool is_floating_pt_6bkyMkO3(const s_ValueType&);
bool is_mutref_tkXzsAAo(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_enum_6bkyMkO3(const s_ValueType&);
bool is_flags_6bkyMkO3(const s_ValueType&);
s_Type type_tryIntersect_mxQ2bIFx(const s_Type&, const s_Type&);
void Scope_pop_VKZbhWNz(s_Scope&, const s_ScopeMemo&, fu::vec<s_Helpers>&);
void Scope_set_EJ5xtBX6(fu::vec<s_ScopeItem>&, const fu::str&, const s_Target&, bool);
bool isAssignableAsArgument_aTMI25ej(const s_Type&, const s_Type&, bool);
static s_Target tryMatch__mutargs_zJaFYih8(fu::str&&, fu::vec<int>&, fu::vec<fu::vec<s_Target>>&, fu::str&, bool, bool, const s_Scope&, fu::view<s_SolvedNode>, s_Flags, const s_Target&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
s_Type add_refs_4HVscqUr(const s_Type&, s_Type&&);
fu::str formatCodeSnippet_M4QtP2oD(fu::vec<s_TokenIdx>&&, int, s_CodeFmt, const s_Context&);
static fu::str explainConversion_YRKhvPnB(fu::view<s_Target>, fu::view<char>, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>);
static void descend_oRdYwUGH(const s_Type&, bool, bool, bool, const s_Type&, bool, const s_Type&, const s_SolvedNode&, const s_Scope&, fu::vec<s_Target>&, fu::vec<s_Target>&, int, const s_SolvedNode&, fu::vec<int>&, fu::vec<fu::vec<s_Target>>&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
static bool applyConversion_NgnaiepD(s_SolvedNode&, fu::view<s_Target>, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
bool is_ref_vcLGyw8p(const s_Type&);
static void visitNode_lcEHMgtc(s_SolvedNode&, int, const s_Target&, fu::vec<s_Target>&, const s_Target&, int, int, fu::vec<s_Helpers>&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
s_Lifetime Lifetime_static_8nlJDPX0();
s_Region Region_fromLocal_Uj5ZOr54(int);
static s_SolvedNode CallerNode_McBUm2lt(const fu::str&, s_Target&&, fu::vec<s_SolvedNode>&&, fu::view<int>, fu::view<fu::vec<s_Target>>, const s_Target&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&);
static fu::str qSTACK_implicit_prd0e4Te(const s_Target&, const s_SolvedNode&, fu::view<char>, const s_Type&, fu::view<s_Target>, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>);
bool is_zeroes_8KZIyCKE(const s_Type&);
fu::str serialize_LOriaAgo(const s_ClosureID&);
static bool Lifetime_allowsMutrefReturn_SvgzT2ei(const s_Lifetime&, int, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, const s_Target&);
s_Type clear_mutref_57qzYcmt(s_Type&&);
bool is_ref2temp_4LT7MLM3(const s_Type&);
int Region_asLocal_AEPMcxRF(const s_Region&);
static void applyRetype_NY3WS2yC(s_SolvedNode&, const s_Type&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>);
static s_SolvedNode solveLetLike_dontTouchScope_7m9op4ZP(const fu::str&, s_Flags, s_SolvedNode&&, const s_Type&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
bool isAddrOfFn_KM2rbsyR(const s_Type&);
s_Mi parseMi_Uqhjg5wd(int&, fu::view<char>);
static fu::str str_JtWMSeZV(const s_SolvedNode&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, const s_Target&);
s_Lifetime Lifetime_union_xefCvVZD(const s_Lifetime&, const s_Lifetime&);
s_Lifetime Lifetime_makeShared_lRM9WkdT(const s_Lifetime&);
s_NativeHacks NativeHacks_o6l3osDy(fu::view<char>);
void add_range_45N7jBpR(s_BitSet&, int);
bool rem_mle9fepo(s_BitSet&, int);
void ArgsAtRisk_list_7PSobXwc(s_BitSet&, const s_Flow&, int, fu::view<fu::vec<int>>);
bool TODO_FIX_isArray_DOKZ61Hc(const s_Type&);
s_BitSet& and_not_assign_Eu2YEyBH(s_BitSet&, const s_BitSet&);
bool is_rx_resize_UHdpdATk(const s_Type&);
static fu::str qSTACK_Yv9WlDnV(const s_Target&, const s_SolvedNode&, const s_Region&, fu::view<s_Target>, s_ArgQuery, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>);
s_Region Region_fromArgPosition_vmMI39NZ(int);
bool isPassByValue_6bkyMkO3(const s_ValueType&);
static fu::str qSTACK_KuMhtrnj(const s_Target&, const s_SolvedNode&, s_FxMask, fu::view<s_Target>, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>);
bool is_void_8KZIyCKE(const s_Type&);
bool isIrrelevant_DOKZ61Hc(const s_Type&);
bool hasAssignment_z64rfJDX(fu::view<char>);
s_Flags& isRTL_set_bEV6ngdT(s_Overload&, bool);
static bool astChange_CJKCvzNX(const s_SolvedNode&, const s_SolvedNode&);
fu::str hash62_FVPTYzIy(fu::view<char>, int);
void force_relax_LUN3uPs9(s_Type&, unsigned);
static fu::vec<s_SolvedNode> solveNodes_Udt6cwcF(fu::view<s_Node>, bool, const s_Type&, const s_Type&, bool, s_StaticEval, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
static void test_node_jdIq0p9e(const s_SolvedNode&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, const s_Target&);
bool is_ref2static_4LT7MLM3(const s_Type&);
static void definitWrap_nb579lmy(s_SolvedNode&, const s_Type&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, const s_Target&);
bool is_boolean_6bkyMkO3(const s_ValueType&);
bool try_relax_KcQXgxxc(s_Type&, const s_Type&, unsigned);
static void propagateType_Mh9g8ikC(s_SolvedNode&, const s_Type&, unsigned, const s_Helpers&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
s_BitSet& operator|=(s_BitSet&, const s_BitSet&);
[[noreturn]] fu::never BUG_XGLZHzGg(fu::str&&, const s_TokenIdx&, const s_Context&);
bool propositionOK_tkXzsAAo(const s_Type&, const s_TokenIdx&, const s_Context&);
static s_SolvedNode createAnd_4n5O7WqG(const fu::vec<s_SolvedNode>&, s_Type&&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
void clear_5jPCgdrm(s_BitSet&, int);
s_Type USAGE_structUsageFromFieldUsage_mNmZS1Du(s_Type&&, int);
static bool trackUse_vREkq3gL(const s_Lifetime&, s_BitSet&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_Target&);
static s_Target doTrySpecialize_YUQsTQlC(int, const s_Target&, const s_Target&, fu::view<s_SolvedNode>, const fu::str&, fu::view<int>, bool, fu::view<fu::vec<s_Target>>, int, const s_Type&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
static void ensureLazySolved_2LDJ3uNu(const s_Target&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
static void cannotCOW_climbParents_pASyzuMq(const s_Lifetime&, const s_SolvedNode&, const s_TokenIdx&, const s_Target&, const s_Argument&, bool, s_BitSet&, const s_Context&, const s_Module&, const s_Options&, s_TokenIdx&, const s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::view<s_Helpers>, const s_Target&);
static bool type_maybeInside_nJM4n9tr(const s_ValueType&, const s_ValueType&, fu::vec<s_StructCanon>&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>);
s_StructCanon parseStructCanon_degpQC5i(fu::view<char>);
const s_Struct& lookupUserType_kzfZN3HV(const s_StructCanon&, const s_Module&, const s_Context&);
static fu::str qSTACK_cow_inside_zWASPqg3(const s_Target&, const s_SolvedNode&, const s_Argument&, const s_TokenIdx&, fu::view<s_Target>, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>);
static void cannotCOW_descendChildren_W9cHpqsu(int, const s_SolvedNode&, const s_TokenIdx&, const s_Target&, const s_Argument&, bool, s_BitSet&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_Target&);
static int needsHardRisk_zQhQwjZZ(int, const s_Overload&, const s_SolvedNode&, const s_Target&, const s_Argument&, bool, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_Target&);
s_Type USAGE_fieldUsageFromStructUsage_jD2J2619(s_Type&&, unsigned, int, int);
bool isRTL_lOupdufN(const s_Overload&);
static void callarg_trackWriteIndirect_7UsXZdsY(int, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, s_CurrentFn&, fu::view<s_Helpers>, const s_Target&);
void add_vot6EQuV(s_BitSet&, const s_BitSet&);
void clear_rcMo7uZV(s_BitSet&);
int getFlatCount_LriKPDIk(const s_ValueType&, const s_Context&, const s_Module&);
unsigned getMaxUsage_oViGE7XZ(int);
bool USAGE_justOneThing_iR4FMLgu(unsigned, int);
static bool isFieldChain_mwWi49a4(const s_SolvedNode&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>);
s_Type make_copyable_57qzYcmt(s_Type&&);
static void Lifetime_F_MOVED_FROM_O89kup5H(const s_Lifetime&, const s_Context&, const s_Module&, s_TokenIdx&, s_SolverState&, fu::view<s_Helpers>, const s_Target&);
static void trackJustMoved_9ngtsiMy(const s_Lifetime&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, s_CurrentFn&, fu::view<s_Helpers>, const s_Target&);
s_Type clear_sliceable_PUTlNd47(const s_Type&, const s_TokenIdx&, const s_Context&);
static bool tryInjectJumps_i7cqEK4H(s_SolvedNode&, const s_Helpers&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>, const s_Target&);
void clear_WLuE9DC4(s_Flow&);
void Reference_trackArgument_uPYDkWNH(s_Flow&, int, int, const s_TokenIdx&, const s_Context&);
static bool RESOLVE_byAAR_9RqxdSn8(int, int, bool, s_BorrowCheckPass, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, s_CurrentFn&, fu::view<s_Helpers>, const s_Target&);
inline fu::vec<s_Region> inter_Z7to7PdZ(const fu::vec<s_Region>&, const fu::vec<s_Region>&);
static void bck_node_i2XLbfvW(s_SolvedNode&, const s_SolvedNode&, s_BorrowCheckPass, const s_Context&, const s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::view<s_Helpers>, const s_Target&);
s_Lifetime Lifetime_inter_xefCvVZD(const s_Lifetime&, const s_Lifetime&);
static void tagWritten_duaTTM0T(int, s_CurrentFn&);
void Reference_trackLocalRef_Gyc662BZ(s_Flow&, int, const s_Lifetime&);
static bool lazySolveStart_soM8XEbj(const s_Target&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
static s_SolvedNode __solveStruct_TuMO8NWv(bool, const s_Node&, const s_Target&, const s_Context&, s_Module&, const s_Options&, s_TokenIdx&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, const s_Target&);
int popcount_LkpkIIRn(const s_BitSet&);
fu::str qCODE_bF2G8fJR(fu::view<char>);
s_Type createSlice_W7D1KJFU(const s_Type&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type initStruct_hPB3vi4F(s_kind, const fu::str&, const fu::str&, s_DeclAsserts, int, s_Module&);
s_Target Scope_Typedef_Ax34jExv(s_Scope&, const fu::str&, s_Type&&, s_Flags, const fu::str&, s_SolverStatus, const s_Module&);
s_Struct& lookupUserType_mut_CHFnIcLE(fu::view<char>, s_Module&);
s_Type despeculateStruct_57qzYcmt(s_Type&&);
static fu::str getRecursionError_XibmETQB(const s_Struct&, const s_Type&, const s_Target&, const s_Context&, const s_Module&, s_TokenIdx&, const s_SolverState&, fu::view<s_Helpers>);
s_Intlit Intlit_n2M83GG7(uint64_t, bool, fu::str&&, bool, bool, uint64_t);
s_Type make_non_copyable_57qzYcmt(s_Type&&);
void USAGE_setMaxUsage_p12gjuFA(s_Type&, int);
s_Type clear_vfacts_57qzYcmt(s_Type&&);
bool is_sliceable_6bkyMkO3(const s_ValueType&);
static void visit_TU42CtZH(int, const s_Context&, const s_Module&, s_TokenIdx&, s_SolverState&, fu::view<s_Helpers>);
static void walk_O2FyHH1q(s_Node&, fu::view<char>, fu::view<char>, fu::view<char>, fu::view<char>, const s_ScopeItem&);
void bReak_DX6KImTN();
s_Scope Scope_exports_p1TVwdqG(const s_Scope&, int, const fu::vec<s_ScopeItem>&, const fu::vec<int>&);

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
    s_kind_not = 16u,
    s_kind_call = 17u,
    s_kind_argid = 18u,
    s_kind_root = 19u,
    s_kind_block = 20u,
    s_kind_if = 21u,
    s_kind_or = 22u,
    s_kind_and = 23u,
    s_kind_loop = 24u,
    s_kind_jump = 25u,
    s_kind___far_jump = 26u,
    s_kind_defer = 27u,
    s_kind_try = 28u,
    s_kind_let = 29u,
    s_kind_letdef = 30u,
    s_kind_typedef = 31u,
    s_kind_typecast = 32u,
    s_kind_typeassert = 33u,
    s_kind_typeparam = 34u,
    s_kind_unwrap = 35u,
    s_kind_pragma = 36u,
    s_kind_break = 37u,
    s_kind_return = 38u,
    s_kind_continue = 39u,
    s_kind_import = 40u,
    s_kind_addroffn = 41u,
    s_kind_forfieldsof = 42u,
    s_kind_struct = 43u,
    s_kind_union = 44u,
    s_kind_primitive = 45u,
    s_kind_flags = 46u,
    s_kind_enum = 47u,
    s_kind_members = 48u,
    s_kind_fndef = 49u,
    s_kind_fn = 50u,
    s_kind_fnbranch = 51u,
    s_kind_pattern = 52u,
    s_kind_typeunion = 53u,
    s_kind_typetag = 54u,
    s_kind___relaxed = 55u,
    s_kind___convert = 56u,
    s_kind___no_kind_yet = 57u,
    s_kind_type = 58u,
    s_kind_var = 59u,
    s_kind_field = 60u,
    s_kind_enumv = 61u,
    s_kind_template = 62u,
    s_kind___native = 63u,
    s_kind_inline = 64u,
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
inline constexpr s_Flags s_Flags_F_COW_INSIDE = 128u;
inline constexpr s_Flags s_Flags_F_MOVED_FROM = 256u;
inline constexpr s_Flags s_Flags_F_CONVERSION = 512u;
inline constexpr s_Flags s_Flags_F_OPT_ARG = 1024u;
inline constexpr s_Flags s_Flags_F_MUT = 2048u;
inline constexpr s_Flags s_Flags_F_REF = 4096u;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 8192u;
inline constexpr s_Flags s_Flags_F_USING = 16384u;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 32768u;
inline constexpr s_Flags s_Flags_F_SHADOW = 65536u;
inline constexpr s_Flags s_Flags_F_PUB = 131072u;
inline constexpr s_Flags s_Flags_F_EXTERN = 262144u;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 524288u;
inline constexpr s_Flags s_Flags_F_PREDICATE = 1048576u;
inline constexpr s_Flags s_Flags_F_NAMED_ARGS = 2097152u;
inline constexpr s_Flags s_Flags_F_OOE_RTL = 4194304u;
inline constexpr s_Flags s_Flags_F_REST_ARG = 8388608u;
inline constexpr s_Flags s_Flags_F_RELAXABLE_REF = 16777216u;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 33554432u;
inline constexpr s_Flags s_Flags_F_INLINE = 67108864u;
inline constexpr s_Flags s_Flags_F_LAMBDA = 134217728u;
inline constexpr s_Flags s_Flags_F_INJECTED = 268435456u;

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_F_METHOD
    | s_Flags_F_OPERATOR
    | s_Flags_F_ACCESS
    | s_Flags_F_COMPOUND_ID
    | s_Flags_F_WRITTEN_TO
    | s_Flags_F_LAX
    | s_Flags_F_ARG
    | s_Flags_F_COW_INSIDE
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

                                #ifndef DEF_s_VFacts
                                #define DEF_s_VFacts
inline constexpr s_VFacts s_VFacts_AlwaysTrue = s_VFacts(1u);
inline constexpr s_VFacts s_VFacts_AlwaysFalse = s_VFacts(2u);
inline constexpr s_VFacts s_VFacts_Typename = s_VFacts(4u);

inline constexpr s_VFacts MASK_s_VFacts
    = s_VFacts_AlwaysTrue
    | s_VFacts_AlwaysFalse
    | s_VFacts_Typename;
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
inline constexpr s_SolverStatus s_SolverStatus_SS_MATCHED = s_SolverStatus(512u);
inline constexpr s_SolverStatus s_SolverStatus_SS_Debug_AllPassesComplete = s_SolverStatus(1024u);

inline constexpr s_SolverStatus MASK_s_SolverStatus
    = s_SolverStatus_SS_LAZY
    | s_SolverStatus_SS_DID_START
    | s_SolverStatus_SS_DIRTY
    | s_SolverStatus_SS_FINALIZED
    | s_SolverStatus_SS_UPDATED
    | s_SolverStatus_SS_TYPE_RECUR
    | s_SolverStatus_SS_FN_RECUR
    | s_SolverStatus_SS_HOIST
    | s_SolverStatus_SS_UNUSED
    | s_SolverStatus_SS_MATCHED
    | s_SolverStatus_SS_Debug_AllPassesComplete;
                                #endif

                                #ifndef DEF_s_ExitPaths
                                #define DEF_s_ExitPaths
inline constexpr s_ExitPaths s_ExitPaths_XP_NonEmptyReturn = s_ExitPaths(1u);
inline constexpr s_ExitPaths s_ExitPaths_XP_EmptyReturn = s_ExitPaths(2u);
inline constexpr s_ExitPaths s_ExitPaths_XP_NoReturn = s_ExitPaths(4u);

inline constexpr s_ExitPaths MASK_s_ExitPaths
    = s_ExitPaths_XP_NonEmptyReturn
    | s_ExitPaths_XP_EmptyReturn
    | s_ExitPaths_XP_NoReturn;
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
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOINLINE = s_DeclAsserts(2048u);

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
    | s_DeclAsserts_A_FAST
    | s_DeclAsserts_A_NOINLINE;
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
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedTry = 524288;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedAndOr = 1048576;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedIfElse = 2097152;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedArrlit = 4194304;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedLet = 8388608;
inline constexpr s_SolverNotes s_SolverNotes_N_BckMustSeq = 16777216;
inline constexpr s_SolverNotes s_SolverNotes_N_AARMustSeq = 33554432;
inline constexpr s_SolverNotes s_SolverNotes_N_AARSoftRisk = 67108864;
inline constexpr s_SolverNotes s_SolverNotes_N_MoveMustSeq = 134217728;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_HasStaticInit = 268435456;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_ExternPrivates = 536870912;
inline constexpr s_SolverNotes s_SolverNotes_N_COWRestrict = 1073741824;

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
    | s_SolverNotes_N_UnusedTry
    | s_SolverNotes_N_UnusedAndOr
    | s_SolverNotes_N_UnusedIfElse
    | s_SolverNotes_N_UnusedArrlit
    | s_SolverNotes_N_UnusedLet
    | s_SolverNotes_N_BckMustSeq
    | s_SolverNotes_N_AARMustSeq
    | s_SolverNotes_N_AARSoftRisk
    | s_SolverNotes_N_MoveMustSeq
    | s_SolverNotes_N_SD_HasStaticInit
    | s_SolverNotes_N_SD_ExternPrivates
    | s_SolverNotes_N_COWRestrict;
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

                                #ifndef DEF_s_BitSet
                                #define DEF_s_BitSet
struct s_BitSet
{
    fu::vec<fu::u8> _data;
    explicit operator bool() const noexcept
    {
        return false
            || _data
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu::vec<s_Region> uni0n;
    explicit operator bool() const noexcept
    {
        return false
            || uni0n
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
    fu::str id;
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
    unsigned quals;
    fu::str canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
            || canon
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Scope
                                #define DEF_s_Scope
struct s_Scope
{
    fu::vec<s_Overload> overloads;
    fu::vec<s_Extended> extended;
    fu::vec<s_ScopeItem> items;
    fu::vec<s_ScopeItem> implicits;
    fu::vec<int> imports;
    fu::vec<int> privates;
    fu::vec<s_Target> usings;
    fu::vec<s_Target> converts;
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

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    s_ValueType vtype;
    s_Lifetime lifetime;
    s_VFacts vfacts;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
            || vfacts
        ;
    }
};
                                #endif

                                #ifndef DEF_s_COWInside
                                #define DEF_s_COWInside
struct s_COWInside
{
    s_ValueType vtype;
    s_TokenIdx token;
    int argTarget;
    int mayEscapeVia;
    s_ExitPaths exitPaths;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || token
            || argTarget
            || mayEscapeVia
            || exitPaths
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    s_kind kind;
    s_DeclAsserts asserts;
    s_ParseSyntax syntax;
    s_Flags flags;
    fu::str value;
    fu::vec<s_Node> items;
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

                                #ifndef DEF_s_Template
                                #define DEF_s_Template
struct s_Template
{
    s_Node node;
    fu::vec<int> imports;
    explicit operator bool() const noexcept
    {
        return false
            || node
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
    fu::str value;
    fu::vec<s_SolvedNode> items;
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
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    s_kind kind;
    s_Flags flags;
    s_SolverStatus status;
    fu::str name;
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

                                #ifndef DEF_s_Extended
                                #define DEF_s_Extended
struct s_Extended
{
    int min;
    int max;
    fu::vec<s_Argument> args;
    fu::vec<s_COWInside> cows_inside;
    s_Target spec_of;
    s_Template tEmplate;
    fu::vec<s_Overload> locals;
    fu::str sighash;
    s_FxMask fx_mask;
    explicit operator bool() const noexcept
    {
        return false
            || tEmplate
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu::str name;
    fu::str autocall;
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

                                #ifndef DEF_s_CGDefects
                                #define DEF_s_CGDefects
inline constexpr s_CGDefects s_CGDefects_GNUStmtExpr = s_CGDefects(1u);
inline constexpr s_CGDefects s_CGDefects_Goto = s_CGDefects(2u);
inline constexpr s_CGDefects s_CGDefects_PointlessMustSeq = s_CGDefects(4u);
inline constexpr s_CGDefects s_CGDefects_LocalConstBool = s_CGDefects(8u);
inline constexpr s_CGDefects s_CGDefects_ConstCast = s_CGDefects(16u);
inline constexpr s_CGDefects s_CGDefects_PointlessLocal = s_CGDefects(32u);
inline constexpr s_CGDefects s_CGDefects_IrrelevantLiteral = s_CGDefects(64u);

inline constexpr s_CGDefects MASK_s_CGDefects
    = s_CGDefects_GNUStmtExpr
    | s_CGDefects_Goto
    | s_CGDefects_PointlessMustSeq
    | s_CGDefects_LocalConstBool
    | s_CGDefects_ConstCast
    | s_CGDefects_PointlessLocal
    | s_CGDefects_IrrelevantLiteral;
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

                                #ifndef DEF_s_LexerOutput
                                #define DEF_s_LexerOutput
struct s_LexerOutput
{
    fu::vec<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || tokens
        ;
    }
};
                                #endif

                                #ifndef DEF_s_LineColChars
                                #define DEF_s_LineColChars
struct s_LineColChars
{
    int line;
    int col;
    int chars;
    explicit operator bool() const noexcept
    {
        return false
            || line
            || col
            || chars
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Map_qfSmCKRS93e
                                #define DEF_s_Map_qfSmCKRS93e
struct s_Map_qfSmCKRS93e
{
    fu::vec<fu::str> keys;
    fu::vec<fu::str> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
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

                                #ifndef DEF_s_CodegenOutput
                                #define DEF_s_CodegenOutput
struct s_CodegenOutput
{
    fu::str src;
    fu::vec<fu::str> link;
    fu::vec<fu::str> include_dirs;
    fu::vec<fu::str> extra_sources;
    fu::vec<int> live;
    s_CGDefects defects;
    explicit operator bool() const noexcept
    {
        return false
            || src
            || link
            || include_dirs
            || extra_sources
            || live
            || defects
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    s_kind kind;
    s_LineColChars lcc;
    fu::str value;
    explicit operator bool() const noexcept
    {
        return false
            || kind
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

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu::vec<s_Module> modules;
    fu::vec<int> dep_order;
    s_Map_qfSmCKRS93e files;
    s_Map_qfSmCKRS93e fuzzy;
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

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    s_kind kind;
    fu::str name;
    s_Target target;
    fu::vec<s_ScopeItem> items;
    fu::vec<int> imports;
    fu::vec<s_Target> converts;
    fu::str base;
    int flatCount;
    int declDepth;
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
            || flatCount
            || declDepth
            || all_triv
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ParserOutput
                                #define DEF_s_ParserOutput
struct s_ParserOutput
{
    s_Node root;
    fu::vec<fu::str> fuzimports;
    fu::vec<fu::str> warnings;
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
    fu::str src;
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

                                #ifndef DEF_s_ModuleOutputs
                                #define DEF_s_ModuleOutputs
struct s_ModuleOutputs
{
    fu::vec<s_Struct> types;
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

                                #ifndef DEF_s_Module
                                #define DEF_s_Module
struct s_Module
{
    int modid;
    fu::str fname;
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

                                #ifndef DEF_s_DevOptions
                                #define DEF_s_DevOptions
inline constexpr s_DevOptions s_DevOptions_DEV_PrintAST = s_DevOptions(1u);
inline constexpr s_DevOptions s_DevOptions_DEV_PrintCG = s_DevOptions(2u);
inline constexpr s_DevOptions s_DevOptions_DEV_Parallel = s_DevOptions(4u);
inline constexpr s_DevOptions s_DevOptions_DEV_ExpectFail = s_DevOptions(8u);
inline constexpr s_DevOptions s_DevOptions_DEV_DontFoldLiterals = s_DevOptions(16u);

inline constexpr s_DevOptions MASK_s_DevOptions
    = s_DevOptions_DEV_PrintAST
    | s_DevOptions_DEV_PrintCG
    | s_DevOptions_DEV_Parallel
    | s_DevOptions_DEV_ExpectFail
    | s_DevOptions_DEV_DontFoldLiterals;
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
    s_CGDefects break_defects;
    s_DevOptions dev;
    unsigned shuffle;
    explicit operator bool() const noexcept
    {
        return false
            || lint
            || break_notes
            || break_defects
            || dev
            || shuffle
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
    s_SolverPass_ArgumentsAtRisk = 3u,
    s_SolverPass_MaybeCopyOrMove = 4u,
    s_SolverPass_RelaxCopyResize = 5u,
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
inline constexpr s_HelpersMask s_HelpersMask_HM_LoopPreheader = s_HelpersMask(128u);

inline constexpr s_HelpersMask MASK_s_HelpersMask
    = s_HelpersMask_HM_CanBreak
    | s_HelpersMask_HM_CanReturn
    | s_HelpersMask_HM_Anon
    | s_HelpersMask_HM_Function
    | s_HelpersMask_HM_Lambda
    | s_HelpersMask_HM_Struct
    | s_HelpersMask_HM_LabelUsed
    | s_HelpersMask_HM_LoopPreheader;
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

                                #ifndef DEF_s_Map_E6hvIBLiDIl
                                #define DEF_s_Map_E6hvIBLiDIl
struct s_Map_E6hvIBLiDIl
{
    fu::vec<fu::str> keys;
    fu::vec<s_Target> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
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

                                #ifndef DEF_s_ScopeSkipMemos
                                #define DEF_s_ScopeSkipMemos
struct s_ScopeSkipMemos
{
    fu::vec<s_ScopeSkip> items;
    fu::vec<s_ScopeSkip> implicits;
    fu::vec<s_ScopeSkip> imports;
    fu::vec<s_ScopeSkip> privates;
    fu::vec<s_ScopeSkip> usings;
    fu::vec<s_ScopeSkip> converts;
    fu::vec<s_ScopeSkip> helpers;
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

                                #ifndef DEF_s_Warning
                                #define DEF_s_Warning
struct s_Warning
{
    s_TokenIdx token;
    fu::str message;
    explicit operator bool() const noexcept
    {
        return false
            || token
            || message
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ChildTarget
                                #define DEF_s_ChildTarget
struct s_ChildTarget
{
    s_TokenIdx token;
    unsigned parent_rev;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || token
            || parent_rev
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_PostdomSnap
                                #define DEF_s_PostdomSnap
struct s_PostdomSnap
{
    s_BitSet used_again;
    s_BitSet just_moved;
    s_BitSet just_used;
    s_BitSet written_directly;
    s_BitSet written_indirectly;
    int mayEscapeVia;
    s_ExitPaths exitPaths;
    explicit operator bool() const noexcept
    {
        return false
            || used_again
            || just_moved
            || just_used
            || written_directly
            || written_indirectly
            || mayEscapeVia
            || exitPaths
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Ephemeral
                                #define DEF_s_Ephemeral
struct s_Ephemeral
{
    int local_of;
    unsigned revision;
    s_ScopeMemo scope_memo;
    s_ScopeSkipMemos scope_skip;
    fu::vec<s_ScopeItem> extra_items;
    fu::vec<int> callers;
    fu::vec<int> calls;
    fu::vec<s_ChildTarget> children;
    s_Map_E6hvIBLiDIl specs;
    explicit operator bool() const noexcept
    {
        return false
            || local_of
            || revision
            || scope_memo
            || scope_skip
            || extra_items
            || callers
            || calls
            || children
            || specs
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
    fu::vec<s_ScopeItem> _field_items;
    fu::vec<int> _pub_imports;
    fu::vec<s_HelpersData> _helpers_data;
    fu::vec<s_Ephemeral> _ephemeral;
    fu::vec<fu::str> _spec_errors;
    fu::vec<s_Warning> _warnings;
    fu::str shortModuleName;
    fu::vec<s_SolvedNode> TODO_FIX_convert_args;
    int TODO_FIX_inline_safety;
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
            || _helpers_data
            || _ephemeral
            || _spec_errors
            || _warnings
            || shortModuleName
            || TODO_FIX_convert_args
            || TODO_FIX_inline_safety
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Postdom
                                #define DEF_s_Postdom
struct s_Postdom
{
    s_PostdomSnap snap;
    int loop_start;
    explicit operator bool() const noexcept
    {
        return false
            || snap
            || loop_start
        ;
    }
};
                                #endif

                                #ifndef DEF_s_HelpersData
                                #define DEF_s_HelpersData
struct s_HelpersData
{
    s_Target target;
    s_SolverPass pass;
    fu::str id;
    s_HelpersMask mask;
    int local_of;
    int locals_start;
    s_Type ret_expect;
    s_Type ret_actual;
    fu::vec<s_Type> usage;
    s_Postdom postdom;
    s_Postdom loop_PREVITER;
    s_Helpers kills;
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
            || usage
            || postdom
            || loop_PREVITER
            || kills
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
    fu::vec<fu::vec<s_WriteID>> invalidated_by;
    explicit operator bool() const noexcept
    {
        return false
            || invalidated_by
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Effects
                                #define DEF_s_Effects
struct s_Effects
{
    fu::vec<int> far_jumps;
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

                                #ifndef DEF_s_Usage
                                #define DEF_s_Usage
struct s_Usage
{
    s_BitSet done_relaxing;
    fu::vec<s_Type> var_usage;
    explicit operator bool() const noexcept
    {
        return false
            || done_relaxing
            || var_usage
        ;
    }
};
                                #endif

                                #ifndef DEF_s_RWEvent
                                #define DEF_s_RWEvent
struct s_RWEvent
{
    int rw_target;
    s_TokenIdx token;
    int position;
    explicit operator bool() const noexcept
    {
        return false
            || rw_target
            || token
            || position
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Events
                                #define DEF_s_Events
struct s_Events
{
    s_EventsSnap snap;
    fu::vec<s_ReadID> used_in_a_loop;
    s_BitSet ever_written;
    fu::vec<s_COWInside> cows_inside;
    fu::vec<s_RWEvent> reads;
    fu::vec<s_RWEvent> writes;
    explicit operator bool() const noexcept
    {
        return false
            || snap
            || used_in_a_loop
            || ever_written
            || cows_inside
            || reads
            || writes
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Flow
                                #define DEF_s_Flow
struct s_Flow
{
    fu::vec<fu::vec<int>> parents;
    fu::vec<fu::vec<int>> invalidates;
    fu::vec<fu::vec<int>> arg_parents;
    fu::vec<fu::vec<int>> at_soft_risk;
    fu::vec<fu::vec<int>> at_hard_risk;
    s_BitSet is_arg;
    fu::vec<int> arg_targets;
    fu::vec<int> arg_positions;
    fu::vec<fu::vec<int>> children;
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
            || children
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
    s_Usage relaxed;
    int TODO_FIX_defers;
    bool TODO_FIX_isInline;
    int TODO_FIX_catches;
    fu::vec<s_Target> now_inlining;
    s_Postdom postdom;
    fu::vec<fu::vec<int>> TODO_FIX_children;
    explicit operator bool() const noexcept
    {
        return false
            || out
        ;
    }
};
                                #endif

                                #ifndef DEF_s_StaticEval
                                #define DEF_s_StaticEval
enum s_StaticEval: fu::u8
{
    s_StaticEval_SE_Unknown = 0u,
    s_StaticEval_SE_False = 1u,
    s_StaticEval_SE_True = 2u,
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

                                #ifndef DEF_s_Map_uYRcurSQUL8
                                #define DEF_s_Map_uYRcurSQUL8
struct s_Map_uYRcurSQUL8
{
    fu::vec<fu::str> keys;
    fu::vec<s_TypeParam> vals;
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
    s_Type invariant;
    s_Type consumed;
    explicit operator bool() const noexcept
    {
        return false
            || matched
            || invariant
            || consumed
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
    fu::str error;
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

                                #ifndef DEF_s_CodeFmt
                                #define DEF_s_CodeFmt
inline constexpr s_CodeFmt s_CodeFmt_FullContext = s_CodeFmt(1u);
inline constexpr s_CodeFmt s_CodeFmt_NoLeadContext = s_CodeFmt(2u);
inline constexpr s_CodeFmt s_CodeFmt_NoTailContext = s_CodeFmt(4u);
inline constexpr s_CodeFmt s_CodeFmt_NoContext = s_CodeFmt(8u);

inline constexpr s_CodeFmt MASK_s_CodeFmt
    = s_CodeFmt_FullContext
    | s_CodeFmt_NoLeadContext
    | s_CodeFmt_NoTailContext
    | s_CodeFmt_NoContext;
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

                                #ifndef DEF_s_ArgQuery
                                #define DEF_s_ArgQuery
enum s_ArgQuery: fu::u8
{
    s_ArgQuery_AQ_WhyNotNovec = 1u,
};
                                #endif

                                #ifndef DEF_s_UnpackedOffset
                                #define DEF_s_UnpackedOffset
struct s_UnpackedOffset
{
    int memberFlatOffset;
    int memberFlatCount;
    explicit operator bool() const noexcept
    {
        return false
            || memberFlatOffset
            || memberFlatCount
        ;
    }
};
                                #endif

                                #ifndef DEF_s_StructCanon
                                #define DEF_s_StructCanon
struct s_StructCanon
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

                                #ifndef DEF_s_BorrowCheckPass
                                #define DEF_s_BorrowCheckPass
enum s_BorrowCheckPass: fu::u8
{
    s_BorrowCheckPass_BCK_bck = 1u,
    s_BorrowCheckPass_BCK_aar = 2u,
    s_BorrowCheckPass_BCK_ooe = 3u,
};
                                #endif

#ifndef fu_NO_fdefs

static s_Helpers push_sUG9wPGl(const s_HelpersData& data, s_SolverState& ss, fu::vec<s_Helpers>& _helpers)
{
    const s_Helpers ret = s_Helpers { ss._helpers_data.size() };
    _helpers += s_Helpers(ret);
    ss._helpers_data += s_HelpersData(data);
    return ret;
}

static void _Scope_import__forceCopy_2NQA1bZW(const int modid, const s_Context& ctx, s_SolverState& ss)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    ss._scope.items += fu::get_view(s.items, 0, s.pub_items);
    ss._scope.converts += fu::get_view(s.converts, 0, s.pub_cnvrts);
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void;
                                #endif

static bool isTypeDecl_b84LMof6(const s_kind kind)
{
    return (kind == s_kind_struct) || (kind == s_kind_union) || (kind == s_kind_primitive) || (kind == s_kind_enum) || (kind == s_kind_flags);
}

static int unorderedClassify_SbEkBe2d(const s_kind kind)
{
    if (kind == s_kind_fn)
        return 1;
    else if (isTypeDecl_b84LMof6(kind))
        return 10;
    else
        return 0;

}

                                #ifndef DEF_str_7NcqyHupk37
                                #define DEF_str_7NcqyHupk37
inline fu::str str_7NcqyHup(const s_SolverNotes n)
{
    /*MOV*/ fu::str res {};

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

        if (n & s_SolverNotes_N_UnusedTry)
            res += ("N_UnusedTry"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedAndOr)
            res += ("N_UnusedAndOr"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedIfElse)
            res += ("N_UnusedIfElse"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedArrlit)
            res += ("N_UnusedArrlit"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedLet)
            res += ("N_UnusedLet"_fu + ", "_fu);

        if (n & s_SolverNotes_N_BckMustSeq)
            res += ("N_BckMustSeq"_fu + ", "_fu);

        if (n & s_SolverNotes_N_AARMustSeq)
            res += ("N_AARMustSeq"_fu + ", "_fu);

        if (n & s_SolverNotes_N_AARSoftRisk)
            res += ("N_AARSoftRisk"_fu + ", "_fu);

        if (n & s_SolverNotes_N_MoveMustSeq)
            res += ("N_MoveMustSeq"_fu + ", "_fu);

        if (n & s_SolverNotes_N_SD_HasStaticInit)
            res += ("N_SD_HasStaticInit"_fu + ", "_fu);

        if (n & s_SolverNotes_N_SD_ExternPrivates)
            res += ("N_SD_ExternPrivates"_fu + ", "_fu);

        if (n & s_SolverNotes_N_COWRestrict)
            res += ("N_COWRestrict"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_x3Cx3E_AsFD7H8Nlu6
                                #define DEF_x3Cx3E_AsFD7H8Nlu6
inline int x3Cx3E_AsFD7H8N(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_f0RieKMU2n0
                                #define DEF_x3Cx3E_f0RieKMU2n0
inline int x3Cx3E_f0RieKMU(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_r7bhmB7DrQ0
                                #define DEF_x3Cx3E_r7bhmB7DrQ0
inline int x3Cx3E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_AsFD7H8N(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_f0RieKMU(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_r7bhmB7DrQ0
                                #define DEF_x3Dx3D_r7bhmB7DrQ0
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_r7bhmB7D(a, b);
}
                                #endif

static s_TokenIdx tryBacktrack_MIoWkAip(const s_TokenIdx& from, fu::view<char> v, const s_kind k, const s_Context& ctx)
{
    s_TokenIdx here { from };
    while (here.tokidx-- > 0)
    {
        const s_Token& token = _token_yZ5HaS8S(here, ctx);
        if (token.kind != k)
            break;
        else if (token.value == v)
            return here;

    };
    return s_TokenIdx{};
}

static bool isFnOrType_Fo3vFfbD(const s_Helpers& h, const s_SolverState& ss)
{
    return !!s_HelpersMask((ss._helpers_data[h.index].mask & s_HelpersMask((s_HelpersMask_HM_Function | s_HelpersMask_HM_Struct))));
}

                                #ifndef DEF_str_M111qm3Obvl
                                #define DEF_str_M111qm3Obvl
inline fu::str str_M111qm3O(const s_SolverPass n)
{
    if (n == s_SolverPass_Solving)
        return "Solving"_fu;
    else if (n == s_SolverPass_RelaxMut)
        return "RelaxMut"_fu;
    else if (n == s_SolverPass_BorrowCheck)
        return "BorrowCheck"_fu;
    else if (n == s_SolverPass_ArgumentsAtRisk)
        return "ArgumentsAtRisk"_fu;
    else if (n == s_SolverPass_MaybeCopyOrMove)
        return "MaybeCopyOrMove"_fu;
    else if (n == s_SolverPass_RelaxCopyResize)
        return "RelaxCopyResize"_fu;

    return fu::i64dec(int64_t(n));
}
                                #endif

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_max_AsFD7H8Nlu6
                                #define DEF_max_AsFD7H8Nlu6
inline int max_AsFD7H8N(const int a, const int b)
{
    if ((a >= b))
        return a;
    else
        return b;

}
                                #endif

static bool isLocal_HC98KjW6(const s_Target& target)
{
    return target.modid < 0;
}

[[noreturn]] static fu::never BUG_JWcxU72K(/*MOV*/ fu::str&& reason, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    fail_pNB52ATY(("COMPILER BUG:\n\n\t"_fu + (reason ? static_cast<fu::str&&>(reason) : "Assertion failed."_fu)), fu::view<char>{}, ctx, module, _here, ss, _helpers);
}

static s_Target parent_TCLJMIrs(const s_Target& target, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (isLocal_HC98KjW6(target))
    {
        return s_Target { module.modid, -target.modid };
    }
    else
        BUG_JWcxU72K("Using .parent with a fn"_fu, ctx, module, _here, ss, _helpers);

}

                                #ifndef DEF_str_k2hK9UHjiD5
                                #define DEF_str_k2hK9UHjiD5
inline fu::str str_k2hK9UHj(const s_kind n)
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

static fu::str human_5244l4QN(const fu::str& id, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const s_Target t = tryParseClosureID_WIMP5mdY(id).target;
    if (!t)
        return fu::str(id);
    else
    {
        s_Target _0 {};
        fu::str _1 {};
        return (_1 = ((_0 = parent_TCLJMIrs(t, ctx, module, _here, ss, _helpers), GET_etmeeocQ(static_cast<s_Target&&>(_0), ctx, module, _here, ss, _helpers)).name + ":"_fu), (static_cast<fu::str&&>(_1) + GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).name));
    };
}

static fu::str str_1mm3y0E0(const s_Overload& o, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const s_kind kind = o.kind;
    fu::str prefix = str_k2hK9UHj(kind);
    if (kind == s_kind_var)
    {
        fu::str _0 {};
        prefix = ((_0 = (((((o.flags & s_Flags_F_INJECTED) ? "injected "_fu : fu::str{}) + ((o.flags & s_Flags_F_IMPLICIT) ? "implicit "_fu : fu::str{})) + ((o.flags & s_Flags_F_REF) ? "ref "_fu : fu::str{})) + ((o.flags & s_Flags_F_ARG) ? "arg "_fu : fu::str{}))) ? static_cast<fu::str&&>(_0) : "var "_fu);
        prefix.pop();
    };
    return (qKW_bF2G8fJR(prefix) + " "_fu) + qID_bF2G8fJR(human_5244l4QN(o.name, ctx, module, _here, ss, _helpers));
}

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static const s_Overload& GET_etmeeocQ(const s_Target& target, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (isLocal_HC98KjW6(target))
    {
        if ((ss._scope.extended.size() <= -target.modid))
            BUG_JWcxU72K("Invalid local target -modid."_fu, ctx, module, _here, ss, _helpers);
        else
        {
            fu::view<s_Overload> locals = ss._scope.extended[-target.modid].locals;
            if (locals.size() < target.index)
            {
                s_Target _0 {};
                const s_Overload* _1;
                fu::str _2 {};
                fu::str _3 {};
                (_3 = (_2 = (x7E_r7bhmB7D((x7E_r7bhmB7D("Out of range local target from: "_fu, (_1 = &((_0 = parent_TCLJMIrs(target, ctx, module, _here, ss, _helpers), GET_etmeeocQ(static_cast<s_Target&&>(_0), ctx, module, _here, ss, _helpers))), str_1mm3y0E0(*_1, ctx, module, _here, ss, _helpers))) + "\n\tlocals="_fu), fu::i64dec(locals.size())) + "\n\tindex="_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_2), fu::i64dec(target.index))), BUG_JWcxU72K(static_cast<fu::str&&>(_3), ctx, module, _here, ss, _helpers));
            }
            else
                return locals[(target.index - 1)];

        };
    }
    else if (target.modid == module.modid)
        return ss._scope.overloads[(target.index - 1)];
    else
        return ctx.modules[target.modid].out.solve.scope.overloads[(target.index - 1)];

}

                                #ifndef DEF_x7Ex3D_ljOD9ybkNH8
                                #define DEF_x7Ex3D_ljOD9ybkNH8
inline fu::str& x7Ex3D_ljOD9ybk(fu::str& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

static fu::str fail_appendStack_UWVoDyaJ(/*MOV*/ fu::str&& reason, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    int callstack = 0;
    s_SolverPass pass0 {};
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (isFnOrType_Fo3vFfbD(h, ss))
        {
            if (!callstack++)
                reason += "\n"_fu;

            s_SolverPass _0 {};
            fu::str pass = (((_0 = pass0, (_0 != (pass0 = ss._helpers_data[h.index].pass))) || (callstack == 1)) ? x7E_r7bhmB7D(str_M111qm3O(ss._helpers_data[h.index].pass), " "_fu) : fu::str{});
            reason += (fu::get_view("\n                "_fu, 0, max_AsFD7H8N((17 - pass.size()), 1)) + pass);
            const s_Overload& o = GET_etmeeocQ(ss._helpers_data[h.index].target, ctx, module, _here, ss, _helpers);
            x7Ex3D_ljOD9ybk(reason, str_1mm3y0E0(o, ctx, module, _here, ss, _helpers));
            const s_TokenIdx& token = o.solved.token;
            if (token)
                reason += x7E_r7bhmB7D((x7E_r7bhmB7D(((" "_fu + _fname_uP3EjQNl(token, ctx)) + ":"_fu), fu::i64dec(_token_yZ5HaS8S(token, ctx).lcc.line)) + ":"_fu), fu::i64dec(_token_yZ5HaS8S(token, ctx).lcc.col));

        };
    };
    return static_cast<fu::str&&>(reason);
}

[[noreturn]] static fu::never fail_pNB52ATY(/*MOV*/ fu::str&& reason, fu::view<char> backtrack, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (backtrack)
    {
        s_TokenIdx _0 {};
        _here = ((_0 = tryBacktrack_MIoWkAip(_here, backtrack, s_kind_id, ctx)) ? _0 : s_TokenIdx(_here));
    };
    if (reason)
        FAIL_XGLZHzGg(fail_appendStack_UWVoDyaJ(static_cast<fu::str&&>(reason), ctx, module, _here, ss, _helpers), _here, ctx);
    else
    {
        BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
    };
}

static s_StaticEval tryAbstractEvalAsBool_6xGBowKZ(const s_SolvedNode& cond, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (cond.type.vfacts & s_VFacts((s_VFacts_AlwaysTrue | s_VFacts_AlwaysFalse)))
    {
        if (!s_VFacts((cond.type.vfacts & s_VFacts_AlwaysTrue)))
            return s_StaticEval_SE_False;
        else if (!s_VFacts((cond.type.vfacts & s_VFacts_AlwaysFalse)))
            return s_StaticEval_SE_True;
        else
            BUG_JWcxU72K("Expression both AlwaysTrue and AlwaysFalse."_fu, ctx, module, _here, ss, _helpers);

    }
    else
        return s_StaticEval_SE_Unknown;

}

                                #ifndef DEF_unless_oob_a6qPgNvVfNc
                                #define DEF_unless_oob_a6qPgNvVfNc
inline const s_Ephemeral& unless_oob_a6qPgNvV(fu::view<s_Ephemeral> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_Ephemeral*)fu::NIL);

}
                                #endif

static const s_Ephemeral& EPH_t5Sfn87m(const s_Target& target, const s_Module& module, const s_SolverState& ss)
{
    if (target.modid == module.modid)
        return unless_oob_a6qPgNvV(ss._ephemeral, target.index);
    else
        return (*(const s_Ephemeral*)fu::NIL);

}

                                #ifndef DEF_grow_if_oob_XDFOEqWkqBh
                                #define DEF_grow_if_oob_XDFOEqWkqBh
inline s_Ephemeral& grow_if_oob_XDFOEqWk(fu::vec<s_Ephemeral>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static s_Ephemeral& EPH_mut_oUaxTGiU(const int index, s_SolverState& ss)
{
    return grow_if_oob_XDFOEqWk(ss._ephemeral, index);
}

static s_Ephemeral& EPH_mut_5Rks4Tyc(const s_Target& target, const s_Module& module, s_SolverState& ss)
{
    if (target.modid == module.modid)
        return EPH_mut_oUaxTGiU(target.index, ss);
    else
        fu_ASSERT();

}

                                #ifndef DEF_x3Cx3E_RJuDZZHkXL5
                                #define DEF_x3Cx3E_RJuDZZHkXL5
inline int x3Cx3E_RJuDZZHk(const s_TokenIdx& a, const s_TokenIdx& b)
{

    {

        {
            const int cmp = x3Cx3E_AsFD7H8N(a.modid, b.modid);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_AsFD7H8N(a.tokidx, b.tokidx);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x21x3D_RJuDZZHkXL5
                                #define DEF_x21x3D_RJuDZZHkXL5
inline bool operator!=(const s_TokenIdx& a, const s_TokenIdx& b)
{
    return !!x3Cx3E_RJuDZZHk(a, b);
}
                                #endif

static bool is_SPECFAIL_JPJKHVxn(const s_Target& target)
{
    return target.modid == 2147483647;
}

static s_Overload& GET_mut_TpIPZdoW(const s_Target& target, const s_Module& module, s_SolverState& ss)
{
    if (target.modid < 0)
    {
        int _0 {};
        return (_0 = (target.index - 1), ss._scope.extended.mutref(-target.modid).locals.mutref(_0));
    }
    else if ((target.index > 0) && (target.modid == module.modid))
        return ss._scope.overloads.mutref((target.index - 1));
    else
        fu_ASSERT();

}

                                #ifndef DEF_steal_zXr795CtdO8
                                #define DEF_steal_zXr795CtdO8
inline fu::vec<int> steal_zXr795Ct(fu::vec<int>& v)
{
    /*MOV*/ fu::vec<int> ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

                                #ifndef DEF_rem_ys5ADtDpSIk
                                #define DEF_rem_ys5ADtDpSIk
inline bool rem_ys5ADtDp(fu::vec<int>& keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_AsFD7H8N(keys[i], item);
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

                                #ifndef DEF_grow_if_oob_PBg2VmZMA33
                                #define DEF_grow_if_oob_PBg2VmZMA33
inline s_Extended& grow_if_oob_PBg2VmZM(fu::vec<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static s_Extended& EXT_mut_XoqMpqSw(const s_Target& target, const s_Module& module, s_SolverState& ss)
{
    if (target.modid == module.modid)
    {
        return grow_if_oob_PBg2VmZM(ss._scope.extended, target.index);
    }
    else
        fu_ASSERT();

}

static void resetChild_cipivtYw(const s_Target& target, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (!(is_SPECFAIL_JPJKHVxn(target) || (GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).kind == s_kind_template)))
    {
        s_SolverStatus& status = GET_mut_TpIPZdoW(target, module, ss).status;
        if (status & s_SolverStatus_SS_LAZY)
        {
            status &= s_SolverStatus(~s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_FINALIZED)) | s_SolverStatus_SS_DIRTY)));
            fu::vec<int> calls = steal_zXr795Ct(EPH_mut_5Rks4Tyc(target, module, ss).calls);
            for (int i = 0; i < calls.size(); i++)
            {
                const s_Target callee = s_Target { module.modid, calls[i] };
                int _0 {};
                if (!((_0 = target.index, rem_ys5ADtDp(EPH_mut_5Rks4Tyc(callee, module, ss).callers, _0))))
                {
                    const s_Overload* _1;
                    fu::str _2 {};
                    (_2 = x7E_r7bhmB7D("resetChild: Missing in callers on "_fu, (_1 = &(GET_etmeeocQ(callee, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_1, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_2), ctx, module, _here, ss, _helpers));
                };
            };
            fu::vec<int> callers = steal_zXr795Ct(EPH_mut_5Rks4Tyc(target, module, ss).callers);
            for (int i_1 = 0; i_1 < callers.size(); i_1++)
            {
                const s_Target caller = s_Target { module.modid, callers[i_1] };
                int _3 {};
                if (!((_3 = target.index, rem_ys5ADtDp(EPH_mut_5Rks4Tyc(caller, module, ss).calls, _3))))
                {
                    const s_Overload* _4;
                    fu::str _5 {};
                    (_5 = x7E_r7bhmB7D("resetChild: Missing in calls on "_fu, (_4 = &(GET_etmeeocQ(caller, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_4, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_5), ctx, module, _here, ss, _helpers));
                };
            };
            fu::vec<s_Argument>& args = EXT_mut_XoqMpqSw(target, module, ss).args;
            for (int i_2 = args.size(); i_2-- > 0; )
            {
                if (args[i_2].flags & s_Flags_F_INJECTED)
                    args.splice(i_2, 1);

            };
            if (EPH_t5Sfn87m(target, module, ss).calls)
            {
                BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
            };
        }
        else
        {
            const s_Overload* _6;
            fu::str _7 {};
            (_7 = x7E_r7bhmB7D("resetChild: not SS_LAZY: "_fu, (_6 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_6, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_7), ctx, module, _here, ss, _helpers));
        };
    };
}

inline static void l_27_17_Typj5AKS(const s_Target& target, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    resetChild_cipivtYw(target, ctx, module, _here, ss, _helpers);
}

static s_Template createTemplate_2uGHike3(const s_Node& node, const s_SolverState& ss, const s_CurrentFn& _current_fn)
{
    return s_Template { s_Node(node), fu::vec<int>((!_current_fn ? ss._scope.imports : (*(const fu::vec<int>*)fu::NIL))) };
}

inline static void l_27_16_spG3Dv26(const s_Target& target, const s_Node& node, const s_SolverStatus status, const s_Module& module, s_SolverState& ss, const s_CurrentFn& _current_fn)
{
    s_Overload& o = GET_mut_TpIPZdoW(target, module, ss);
    o.kind = s_kind_fn;
    o.name = ("prep "_fu + node.value);
    o.flags = node.flags;
    o.status = status;
    s_Extended& ext = EXT_mut_XoqMpqSw(target, module, ss);
    ext.tEmplate = createTemplate_2uGHike3(node, ss, _current_fn);
    ext.min = int(0x7fffffffu);
    ext.max = 0;
}

inline static s_Target getOrCreateChild_eJ7WXf4p(const s_Node& node, const s_Node& node_1, const s_SolverStatus status, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    const s_Target& parent = _current_fn.out.target;
    if (parent)
    {
        const unsigned parent_rev = EPH_t5Sfn87m(parent, module, ss).revision;
        fu::view_mut<s_ChildTarget> children = EPH_mut_5Rks4Tyc(parent, module, ss).children;
        for (int i = 0; i < children.size(); i++)
        {
            s_ChildTarget& child = children.mutref(i);
            if (!((child.token != node.token) || (child.parent_rev == parent_rev)))
            {
                child.parent_rev = parent_rev;
                const s_Target target { child.target };
                l_27_17_Typj5AKS(target, ctx, module, _here, ss, _helpers);
                return target;
            };
        };
    };
    const s_Target target = Scope_create_LHVUyYFV(ss._scope, s_kind___no_kind_yet, (*(const fu::str*)fu::NIL), (*(const s_Type*)fu::NIL), s_Flags{}, s_SolverStatus{}, 0, module);
    l_27_16_spG3Dv26(target, node_1, status, module, ss, _current_fn);
    if (parent)
    {
        const unsigned parent_rev = EPH_t5Sfn87m(parent, module, ss).revision;
        fu::vec<s_ChildTarget>& children = EPH_mut_5Rks4Tyc(parent, module, ss).children;
        children += s_ChildTarget { s_TokenIdx(node.token), parent_rev, s_Target(target) };
    };
    return target;
}

static bool shouldAutoshadow_3HkaPiBM(fu::view<char> id, const s_SolverState& ss)
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
            if (!((ss_1.end <= i0)))
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
}

static void autoshadow_X9vjTcmU(bool& shadows, const int local_of, fu::view<char> id, const s_SolverState& ss, const s_CurrentFn& _current_fn)
{
    if (!(!_current_fn.autoshadow_ok))
    {
        if (!shadows && local_of && shouldAutoshadow_3HkaPiBM(id, ss))
            shadows = true;

    };
}

static s_Type X_addrofTarget_6iKgn5Mp(fu::view<s_Target> targets)
{
    return s_Type { s_ValueType { 0u, packAddrOfFn_7Lj6A1O1(targets) }, s_Lifetime{}, s_VFacts{} };
}

static s_Type X_addrofTarget_SVXD82dG(const s_Target& target)
{
    return X_addrofTarget_6iKgn5Mp((fu::slate<1, s_Target> { s_Target(target) }));
}

static s_SolvedNode SolvedNode_Ob5YrUkY(const s_kind kind, const s_Type& type, const s_Flags flags, const fu::str& value, const fu::vec<s_SolvedNode>& items, const s_Target& target, const s_Helpers& helpers, const s_TokenIdx& _here)
{
    return s_SolvedNode { kind, s_Helpers(helpers), flags, 0, fu::str(value), fu::vec<s_SolvedNode>(items), s_TokenIdx(_here), s_Type(type), s_Target(target) };
}

static s_SolvedNode createFnDef_88eFkvjH(const s_Type& type, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_Ob5YrUkY(s_kind_fndef, type, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_SolvedNode uPrepFn_A_kQXlm9nb(const s_Node& node, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    const fu::str& id = node.value;
    const int local_of = _current_fn.out.target.index;
    const s_SolverStatus status = s_SolverStatus_SS_LAZY;
    const s_Target target = getOrCreateChild_eJ7WXf4p(node, node, status, ctx, module, _here, ss, _current_fn, _helpers);
    bool shadows = !!(node.flags & s_Flags_F_SHADOW);
    autoshadow_X9vjTcmU(shadows, local_of, id, ss, _current_fn);
    Scope_set_E3Ir4Jje(ss._scope, id, target, shadows);
    /*MOV*/ s_ScopeSkipMemos scope_skip { (_current_fn ? ss._ss : (*(const s_ScopeSkipMemos*)fu::NIL)) };
    s_Ephemeral& eph = EPH_mut_5Rks4Tyc(target, module, ss);
    eph.local_of = local_of;
    eph.scope_memo = (_current_fn ? Scope_snap_bI1J4XJR(ss._scope, _helpers) : s_ScopeMemo{});
    eph.scope_skip = static_cast<s_ScopeSkipMemos&&>(scope_skip);
    if (node.flags & s_Flags_F_CONVERSION)
        ss._scope.converts.push(s_Target(target));

    return createFnDef_88eFkvjH(X_addrofTarget_SVXD82dG(target), target, _here);
}

                                #ifndef DEF_unless_oob_KgnnxsX5Re3
                                #define DEF_unless_oob_KgnnxsX5Re3
inline const s_Extended& unless_oob_KgnnxsX5(fu::view<s_Extended> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_Extended*)fu::NIL);

}
                                #endif

static const s_Extended& EXT_EOYtG69B(const s_Target& target, const s_Context& ctx, const s_Module& module, const s_SolverState& ss)
{
    if (target.modid == module.modid)
        return unless_oob_KgnnxsX5(ss._scope.extended, target.index);
    else if ((target.modid >= 0))
        return unless_oob_KgnnxsX5(ctx.modules[target.modid].out.solve.scope.extended, target.index);
    else
        return (*(const s_Extended*)fu::NIL);

}

                                #ifndef DEF_STRUCT_BASE
                                #define DEF_STRUCT_BASE
inline constexpr int STRUCT_BASE = 0;
                                #endif

                                #ifndef DEF_only_HNT2v2R9tlh
                                #define DEF_only_HNT2v2R9tlh
inline const s_Node& only_HNT2v2R9(fu::view<s_Node> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_r7bhmB7D("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Type T_DqcE4eQV(const s_Node& node, const s_Map_uYRcurSQUL8& typeParams, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    return evalTypeAnnot_ctbW9IO5(only_HNT2v2R9(node.items), typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
}

                                #ifndef DEF_get_w2Cltjmgvsf
                                #define DEF_get_w2Cltjmgvsf
inline const s_TypeParam& get_w2Cltjmg(fu::view<fu::str> keys, fu::view<char> item, fu::view<s_TypeParam> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_r7bhmB7D(keys[i], item);
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

                                #ifndef DEF_get_SEN5uSkJxgf
                                #define DEF_get_SEN5uSkJxgf
inline const s_TypeParam& get_SEN5uSkJ(const s_Map_uYRcurSQUL8& _, fu::view<char> key)
{
    return get_w2Cltjmg(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_find_POzvwmtfK11
                                #define DEF_find_POzvwmtfK11
inline int find_POzvwmtf(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static const s_Module& findModule_3xDEFYIx(const fu::str& fuzimport, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    fu::str fname = resolveFile_x_VkBaqzGv(fuzimport, ctx);
    fu::view<s_Module> modules = ctx.modules;
    for (int i = 1; i < modules.size(); i++)
    {
        const s_Module& m = modules[i];
        if (m.fname == fname)
            return m;

    };
    fail_pNB52ATY(("Cannot locate: "_fu + fname), fu::view<char>{}, ctx, module, _here, ss, _helpers);
}

static const s_Scope& dequalify_andGetScope_4LjLR0As(fu::str& id, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const int split = find_POzvwmtf(id, '\t');
    if ((split >= 0))
    {
        fu::str fname = fu::slice(id, 0, split);
        id = fu::slice(id, (split + 1));
        const s_Module& other = findModule_3xDEFYIx(fname, ctx, module, _here, ss, _helpers);
        if (other.modid != module.modid)
            return other.out.solve.scope;
        else
        {
            fail_pNB52ATY((("Qualified "_fu + qBAD_bF2G8fJR(id)) + ":: access current module."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
        };
    }
    else
    {
        BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
    };
}

inline static int l_27_3_y1Kz0RME(const s_Target& u, int& count, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (u)
        return count++;
    else
    {
        BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
    };
}

                                #ifndef DEF_each_oH48yEVAYV8
                                #define DEF_each_oH48yEVAYV8
inline void each_oH48yEVA(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, int& count, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss_1 = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if (!((ss_1.end <= i0)))
        {
            const int i1 = ss_1.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
                l_27_3_y1Kz0RME(items[i_1], count, ctx, module, _here, ss, _helpers);

            i0 = ss_1.end;
        };
    };
}
                                #endif

static int countUsings_Ae8ugeUV(const bool local_scope, const s_Scope& misc_scope, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const s_Scope& scope = (local_scope ? ss._scope : misc_scope);
    int count = 0;
    if (scope.usings)
    {
        each_oH48yEVA(scope.usings, (local_scope ? ss._ss.usings : fu::view<s_ScopeSkip>{}), 0, count, ctx, module, _here, ss, _helpers);
    };
    return count;
}

inline static void l_27_4_xehWFYA7(const int modid, s_BitSet& seen)
{
    add_mle9fepo(seen, modid);
}

                                #ifndef DEF_each_Gl2nZdAm2pa
                                #define DEF_each_Gl2nZdAm2pa
inline void each_Gl2nZdAm(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, s_BitSet& seen)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if (!((ss.end <= i0)))
        {
            const int i1 = ss.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
                l_27_4_xehWFYA7(items[i_1], seen);

            i0 = ss.end;
        };
    };
}
                                #endif

static void visitTypeImports_Sa6PfkWP(const s_Type& type, fu::view<char> id, const bool local_scope, fu::vec<s_Target>& extra_items, s_BitSet& seen, const s_Context& ctx, const s_Module& module, const s_SolverState& ss)
{
    fu::view<int> visit = lookupTypeImports_LriKPDIk(type.vtype, ctx, module);
    for (int i = -1; i < visit.size(); i++)
    {
        const int modid = ((i >= 0) ? visit[i] : modidOfOrigin_u8EynJdr(type));
        if (!(has_35mEQu7d(seen, modid)))
        {
            if (!seen)
            {
                add_mle9fepo(seen, 0);
                add_mle9fepo(seen, module.modid);
                each_Gl2nZdAm(ss._scope.imports, (local_scope ? ss._ss.imports : fu::view<s_ScopeSkip>{}), 0, seen);
            };
            if (!(!add_once_mle9fepo(seen, modid)))
            {
                fu::view<s_ScopeItem> items = ctx.modules[modid].out.solve.scope.items;
                for (int i_1 = 0; i_1 < items.size(); i_1++)
                {
                    if (items[i_1].id == id)
                        extra_items.push(target_7YqD2G7N(items[i_1]));

                };
            };
        };
    };
}

inline static void l_27_5_wqWlcM6r(const s_Target& u, fu::view<char> id, const bool local_scope, fu::vec<s_Target>& extra_items, s_BitSet& seen, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const s_Type* _0;
    (_0 = &(GET_etmeeocQ(u, ctx, module, _here, ss, _helpers).type), visitTypeImports_Sa6PfkWP(*_0, id, local_scope, extra_items, seen, ctx, module, ss));
}

                                #ifndef DEF_each_Af8MLtMD2N4
                                #define DEF_each_Af8MLtMD2N4
inline void each_Af8MLtMD(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu::view<char> id, const bool local_scope, fu::vec<s_Target>& extra_items, s_BitSet& seen, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss_1 = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if (!((ss_1.end <= i0)))
        {
            const int i1 = ss_1.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
                l_27_5_wqWlcM6r(items[i_1], id, local_scope, extra_items, seen, ctx, module, _here, ss, _helpers);

            i0 = ss_1.end;
        };
    };
}
                                #endif

static const fu::vec<s_ScopeItem>& field_items_699D7fQo(const int considerFieldItems, const s_SolverState& ss)
{
    if (considerFieldItems)
        return ss._field_items;
    else
        return (*(const fu::vec<s_ScopeItem>*)fu::NIL);

}

                                #ifndef DEF_str_N7InCVnaGQ1
                                #define DEF_str_N7InCVnaGQ1
inline fu::str str_N7InCVna(const s_SolverStatus n)
{
    /*MOV*/ fu::str res {};

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

        if (n & s_SolverStatus_SS_MATCHED)
            res += ("SS_MATCHED"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_Debug_AllPassesComplete)
            res += ("SS_Debug_AllPassesComplete"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
extern const int FN_ARGS_BACK;
                                #endif

                                #ifndef DEF_last_i8rpRxaZQge
                                #define DEF_last_i8rpRxaZQge
inline const s_Target& last_i8rpRxaZ(fu::view<s_Target> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_has_grHbGBLZCvh
                                #define DEF_has_grHbGBLZCvh
inline bool has_grHbGBLZ(fu::view<int> a, const int b)
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

                                #ifndef DEF_all_eyizUO4X7f6
                                #define DEF_all_eyizUO4X7f6
inline bool all_eyizUO4X(fu::view<s_SolvedNode> a, const s_SolverState& ss)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_SolvedNode& item = a[i];
        if (!couldRetype_IkqpfGaP(item, ss))
            return false;

    };
    return true;
}
                                #endif

                                #ifndef DEF_last_fLVI01Cfxkf
                                #define DEF_last_fLVI01Cfxkf
inline const s_SolvedNode& last_fLVI01Cf(fu::view<s_SolvedNode> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static bool couldRetype_IkqpfGaP(const s_SolvedNode& node, const s_SolverState& ss)
{
    const s_HelpersData* BL_1_v;
    return (node.kind == s_kind_int) || (node.kind == s_kind_real) || (node.kind == s_kind_definit) || (node.kind == s_kind_str) || ((node.kind == s_kind_if) && all_eyizUO4X(fu::get_view(node.items, 1, 3), ss)) || ((node.kind == s_kind_block) && !s_HelpersMask(((__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_1_v = &(ss._helpers_data[h.index]);
    (void)0;}), *BL_1_v).mask & s_HelpersMask_HM_LabelUsed)) && couldRetype_IkqpfGaP(last_fLVI01Cf(node.items), ss));
}

static fu::vec<fu::str>& l_6_2_j454NuLr(s_Map_uYRcurSQUL8& _)
{
    return _.keys;
}

static fu::vec<s_TypeParam>& l_6_3_qrgZAK01(s_Map_uYRcurSQUL8& _)
{
    return _.vals;
}

inline static int bfind_CO3j1dZK(fu::view<char> item, const fu::str& item_1, s_Map_uYRcurSQUL8& _)
{
    int lo = 0;
    int hi = l_6_2_j454NuLr(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_r7bhmB7D(l_6_2_j454NuLr(_)[i], item);
        if (cmp == 0)
            return i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_2_j454NuLr(_).insert(lo, fu::str(item_1));
    l_6_3_qrgZAK01(_).insert(lo, s_TypeParam{});
    return lo;
}

                                #ifndef DEF_ref_V1T7KCDSwFa
                                #define DEF_ref_V1T7KCDSwFa
inline s_TypeParam& ref_V1T7KCDS(const fu::str& item, s_Map_uYRcurSQUL8& _)
{
    const int idx = bfind_CO3j1dZK(item, item, _);
    return l_6_3_qrgZAK01(_).mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_WzIoqQB9iy7
                                #define DEF_ref_WzIoqQB9iy7
inline s_TypeParam& ref_WzIoqQB9(s_Map_uYRcurSQUL8& _, const fu::str& key)
{
    return ref_V1T7KCDS(key, _);
}
                                #endif

static const s_Type& Scope_lookupType_apNa2EhE(const s_Node& annot, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    return Scope_lookupType_RwiDICQJ(fu::str(annot.value), annot.flags, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
}

                                #ifndef DEF_q_TAGS
                                #define DEF_q_TAGS
extern const unsigned q_TAGS;
                                #endif

                                #ifndef DEF_q_USAGE
                                #define DEF_q_USAGE
extern const unsigned q_USAGE;
                                #endif

                                #ifndef DEF_x3Cx3E_gKq3fKpBDkd
                                #define DEF_x3Cx3E_gKq3fKpBDkd
inline int x3Cx3E_gKq3fKpB(const s_Region& a, const s_Region& b)
{

    {
        const int cmp = x3Cx3E_AsFD7H8N(a.index, b.index);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_WWeqOnEsMxk
                                #define DEF_x3Cx3E_WWeqOnEsMxk
inline int x3Cx3E_WWeqOnEs(fu::view<s_Region> a, fu::view<s_Region> b)
{
    int cmp = x3Cx3E_AsFD7H8N(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_gKq3fKpB(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Cx3E_LnUQELnIRj8
                                #define DEF_x3Cx3E_LnUQELnIRj8
inline int x3Cx3E_LnUQELnI(const s_Lifetime& a, const s_Lifetime& b)
{

    {
        const int cmp = x3Cx3E_WWeqOnEs(a.uni0n, b.uni0n);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x21x3D_LnUQELnIRj8
                                #define DEF_x21x3D_LnUQELnIRj8
inline bool operator!=(const s_Lifetime& a, const s_Lifetime& b)
{
    return !!x3Cx3E_LnUQELnI(a, b);
}
                                #endif

static s_Target nested_J0V7rPI4(const int index, const s_Target& from, const s_Module& module)
{
    int _0 {};
    return s_Target { ((_0 = -from.index) ? _0 : module.modid), index };
}

static s_Target nested_YRYXainn(const int index, const s_Target& _current_fnort, const s_Module& module)
{
    return nested_J0V7rPI4(index, _current_fnort, module);
}

static const s_Overload& Region_GET_moKQEKlj(const s_Region& r, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    return GET_etmeeocQ(nested_YRYXainn(Region_toLocal_28foEZVg(r), _current_fnort, module), ctx, module, _here, ss, _helpers);
}

static fu::str str_T4NUFXf9(fu::view<s_Region> regions, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ fu::str str {};
    for (int i = 0; i < regions.size(); i++)
    {
        if (i)
            str += "|"_fu;

        const s_Region& r = regions[i];
        if (Region_isStatic_28foEZVg(r))
            str += "static"_fu;
        else if (Region_isTemp_28foEZVg(r))
            str += "temp"_fu;
        else if (Region_isArgPosition_28foEZVg(r))
            str += x7E_r7bhmB7D("arg#"_fu, fu::i64dec(Region_toArgPosition_28foEZVg(r)));
        else
        {
            const s_Overload* _0;
            x7Ex3D_ljOD9ybk(str, (_0 = &(Region_GET_moKQEKlj(r, ctx, module, _here, ss, _helpers, _current_fnort)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers)));
        };
    };
    return /*NRVO*/ str;
}

                                #ifndef DEF_str_jpcHMEXS8w1
                                #define DEF_str_jpcHMEXS8w1
inline fu::str str_jpcHMEXS(const s_VFacts n)
{
    /*MOV*/ fu::str res {};

    {
        if (n & s_VFacts_AlwaysTrue)
            res += ("AlwaysTrue"_fu + ", "_fu);

        if (n & s_VFacts_AlwaysFalse)
            res += ("AlwaysFalse"_fu + ", "_fu);

        if (n & s_VFacts_Typename)
            res += ("Typename"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

static fu::str humanizeType_XI6W2OpL(const s_Type& type, bool lt, bool no_quals, bool usage, const s_Type& diff, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (diff)
    {
        no_quals = ((type.vtype.quals & q_TAGS) == (diff.vtype.quals & q_TAGS));
        usage = ((type.vtype.quals & q_USAGE) != (diff.vtype.quals & q_USAGE));
        lt = (type.lifetime != diff.lifetime);
    };
    /*MOV*/ fu::str result { (isStruct_ddyKn6V4(type.vtype) ? lookupUserType_d3zNJ4dJ(type, ctx, module, _here, ss, _helpers, _current_fnort).name : type.vtype.canon) };
    if (!no_quals)
        result += humanizeQuals_bHDaAhyO(type.vtype.quals);

    if (usage)
    {
        unsigned usage_1 = (type.vtype.quals & q_USAGE);
        int offset = -3;
        result += " { "_fu;
        while (usage_1)
        {
            if (usage_1 & 1u)
                result += (x7E_r7bhmB7D("#"_fu, fu::i64dec(offset)) + " "_fu);

            usage_1 >>= 1u;
            offset++;
        };
        result += "}"_fu;
    };
    if (lt && type.lifetime)
    {
        result += x7E_r7bhmB7D("`"_fu, str_T4NUFXf9(type.lifetime.uni0n, ctx, module, _here, ss, _helpers, _current_fnort));
    };
    if (type.vfacts)
        result += x7E_r7bhmB7D(" "_fu, str_jpcHMEXS(type.vfacts));

    return /*NRVO*/ result;
}

static const s_Struct& lookupUserType_d3zNJ4dJ(const s_Type& type, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    const s_Struct* _0;
    fu::str _1 {};
    return *(_0 = &(tryLookupUserType_LriKPDIk(type.vtype, ctx, module))) ? *_0 : (_1 = ("Not a struct nor custom primitive: "_fu + humanizeType_XI6W2OpL(type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)), fail_pNB52ATY(static_cast<fu::str&&>(_1), fu::view<char>{}, ctx, module, _here, ss, _helpers));
}

static const fu::str& getBasePrimitive_351Pzggw(const s_Type& type, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    const int offset = basePrimPrefixLen_VyAVtbGI(type.vtype.canon);
    if (offset < type.vtype.canon.size())
        return lookupUserType_d3zNJ4dJ(type, ctx, module, _here, ss, _helpers, _current_fnort).base;
    else
        return type.vtype.canon;

}

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32;
                                #endif

static bool want_cmv483zx(const s_Type& t, fu::view<char> c)
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

static const s_Type& check_60rpL0Nt(const s_Type& type, const s_Intlit& parse, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (type && is_primitive_6bkyMkO3(type.vtype))
    {
        fu::view<char> c = getBasePrimitive_351Pzggw(type, ctx, module, _here, ss, _helpers, _current_fnort);
        if (!parse.uNsigned)
        {
            if (((parse.minsize_f <= fu::u8(32u)) && want_cmv483zx(t_f32, c)) || ((parse.minsize_f <= fu::u8(64u)) && want_cmv483zx(t_f64, c)) || ((parse.minsize_i <= fu::u8(32u)) && want_cmv483zx(t_i32, c)) || ((parse.minsize_i <= fu::u8(64u)) && want_cmv483zx(t_i64, c)) || ((parse.minsize_i <= fu::u8(16u)) && want_cmv483zx(t_i16, c)) || ((parse.minsize_i <= fu::u8(8u)) && want_cmv483zx(t_i8, c)))
                return type;

        };
        if (!parse.sIgned)
        {
            if (((parse.minsize_u <= fu::u8(32u)) && want_cmv483zx(t_u32, c)) || ((parse.minsize_u <= fu::u8(64u)) && want_cmv483zx(t_u64, c)) || ((parse.minsize_u <= fu::u8(16u)) && want_cmv483zx(t_u16, c)) || ((parse.minsize_u <= fu::u8(8u)) && want_cmv483zx(t_u8, c)))
                return type;

        };
    };
    if (parse.uNsigned || (!parse.sIgned && (parse.base != fu::u8(10u))))
    {
        if ((parse.minsize_u <= fu::u8(32u)))
            return t_u32;
        else if ((parse.minsize_u <= fu::u8(64u)))
            return t_u64;

    }
    else if ((parse.minsize_i <= fu::u8(32u)))
        return t_i32;
    else if ((parse.minsize_i <= fu::u8(64u)))
        return t_i64;

    fail_pNB52ATY("Bad int literal."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers);
}

static s_Type solveInt_EMgPGkWk(fu::view<char> v, const s_Type& type, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ s_Intlit parse = Intlit_SQ4NkHfH(v);
    if (parse.error)
    {
        fail_pNB52ATY(static_cast<fu::str&&>(parse.error), fu::view<char>{}, ctx, module, _here, ss, _helpers);
    }
    else
    {
        /*MOV*/ s_Type type_1 = clear_refs_57qzYcmt(s_Type(check_60rpL0Nt(type, parse, ctx, module, _here, ss, _helpers, _current_fnort)));
        if (!s_DevOptions((options.dev & s_DevOptions_DEV_DontFoldLiterals)))
            type_1.vfacts = (parse.absval ? s_VFacts_AlwaysTrue : s_VFacts_AlwaysFalse);

        return /*NRVO*/ type_1;
    };
}

static const s_Type& solveReal_97MHpTIx(const s_Type& type)
{
    if (type.vtype.canon == t_f32.vtype.canon)
        return t_f32;
    else
        return t_f64;

}

                                #ifndef DEF_t_string
                                #define DEF_t_string
extern const s_Type t_string;
                                #endif

static s_Type solveString_9phR1p2w(fu::view<char> v, const s_Type& type, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (type && is_primitive_6bkyMkO3(type.vtype))
    {
        fu::view<s_ScopeItem> members = tryLookupUserType_LriKPDIk(type.vtype, ctx, module).items;
        for (int i = 0; i < members.size(); i++)
        {
            if (members[i].id == v)
                return clear_refs_57qzYcmt(s_Type(type));

        };
    };
    /*MOV*/ s_Type ret { t_string };
    if (!s_DevOptions((options.dev & s_DevOptions_DEV_DontFoldLiterals)))
        ret.vfacts = (v.size() ? s_VFacts_AlwaysTrue : s_VFacts_AlwaysFalse);

    return /*NRVO*/ ret;
}

static s_Type tryRetyping_2YiDIUlF(const s_SolvedNode& node, const s_Type& expect, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (is_arithmetic_6bkyMkO3(node.type.vtype) && is_arithmetic_6bkyMkO3(expect.vtype))
    {
        if (node.kind == s_kind_int)
            return solveInt_EMgPGkWk(node.value, expect, ctx, module, options, _here, ss, _helpers, _current_fnort);
        else if (node.kind == s_kind_real)
            return s_Type(solveReal_97MHpTIx(expect));

    };
    if (node.kind == s_kind_definit)
        return definitType_57qzYcmt(s_Type(expect));
    else if (node.kind == s_kind_str)
        return solveString_9phR1p2w(node.value, expect, ctx, module, options);
    else if (node.kind == s_kind_if)
    {
        s_Type left = tryRetyping_2YiDIUlF(node.items[1], expect, ctx, module, options, _here, ss, _helpers, _current_fnort);
        s_Type right = tryRetyping_2YiDIUlF(node.items[2], expect, ctx, module, options, _here, ss, _helpers, _current_fnort);
        if (left && right)
            return type_trySuper_uwryF4aS(left, right, false);
        else
        {
            return s_Type{};
        };
    }
    else if (node.kind == s_kind_block)
    {
        const s_HelpersData* BL_10_v;
        if (!s_HelpersMask(((__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_10_v = &(ss._helpers_data[h.index]);
        (void)0;}), *BL_10_v).mask & s_HelpersMask_HM_LabelUsed)))
            return tryRetyping_2YiDIUlF(last_fLVI01Cf(node.items), expect, ctx, module, options, _here, ss, _helpers, _current_fnort);
        else
        {
            return s_Type{};
        };
    }
    else
    {
        return s_Type{};
    };
}

                                #ifndef DEF_x21x3D_r7bhmB7DrQ0
                                #define DEF_x21x3D_r7bhmB7DrQ0
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_r7bhmB7D(a, b);
}
                                #endif

static fu::str str_J4YCysO5(const s_Argument& arg, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    fu::str prefix = ((((arg.flags & s_Flags_F_INJECTED) ? "injected "_fu : fu::str{}) + ((arg.flags & s_Flags_F_IMPLICIT) ? "implicit "_fu : fu::str{})) + ((arg.flags & s_Flags_F_REF) ? "ref "_fu : fu::str{}));
    prefix += "arg"_fu;
    return (qKW_bF2G8fJR(prefix) + (prefix ? " "_fu : fu::str{})) + qID_bF2G8fJR(human_5244l4QN(arg.name, ctx, module, _here, ss, _helpers));
}

static const bool DONT_match_zeroes = true;

static fu::str explainTypeDiff_A4hoEuWr(const s_Type& a, const s_Type& b, fu::view<char> sep, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    fu::str _0 {};
    fu::str _1 {};
    return (_1 = ((_0 = (humanizeType_XI6W2OpL(a, false, false, false, b, ctx, module, _here, ss, _helpers, _current_fnort) + " "_fu), (static_cast<fu::str&&>(_0) + sep)) + " "_fu), (static_cast<fu::str&&>(_1) + humanizeType_XI6W2OpL(b, false, false, false, a, ctx, module, _here, ss, _helpers, _current_fnort)));
}

static bool trySolveTypeParams_Yy4toJD0(const s_Node& node, /*MOV*/ s_Type&& type, s_Map_uYRcurSQUL8& typeParams, fu::vec<s_Warning>& errout, bool invariant, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
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
            s_Type _0 {};
            fu::never BL_5_v {};
            s_Type _2 {};
            fu::never BL_7_v {};
            s_Type _4 {};
            fu::never BL_9_v {};
            fu::never BL_11_v {};
            /*MOV*/ s_Type t = ((node.value == "&"_fu) ? ((_0 = tryClear_ref_tkXzsAAo(type, _here, ctx)) ? static_cast<s_Type&&>(_0) : (__extension__ (
            {
                if (errout)
                {
                    s_TokenIdx _1 {};
                    errout += (_1 = s_TokenIdx(node.token), s_Warning { static_cast<s_TokenIdx&&>(_1), ("Not a reference: "_fu + humanizeType_XI6W2OpL(type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)) });
                };
                return false;
            (void)0;}), static_cast<fu::never&&>(BL_5_v))) : ((node.value == "&mut"_fu) ? ((_2 = tryClear_mutref_tkXzsAAo(type, _here, ctx)) ? static_cast<s_Type&&>(_2) : (__extension__ (
            {
                if (errout)
                {
                    s_TokenIdx _3 {};
                    errout += (_3 = s_TokenIdx(node.token), s_Warning { static_cast<s_TokenIdx&&>(_3), ("Not a mutref: "_fu + humanizeType_XI6W2OpL(type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)) });
                };
                return false;
            (void)0;}), static_cast<fu::never&&>(BL_7_v))) : ((node.value == "[]"_fu) ? ((_4 = tryClear_array_DOKZ61Hc(type)) ? static_cast<s_Type&&>(_4) : (__extension__ (
            {
                if (errout)
                {
                    s_TokenIdx _5 {};
                    errout += (_5 = s_TokenIdx(node.token), s_Warning { static_cast<s_TokenIdx&&>(_5), ("Not an array: "_fu + humanizeType_XI6W2OpL(type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)) });
                };
                return false;
            (void)0;}), static_cast<fu::never&&>(BL_9_v))) : (__extension__ (
            {
                goto BL_1;
            (void)0;}), static_cast<fu::never&&>(BL_11_v)))));
            if (t)
            {
                if (node.value == "[]"_fu)
                    invariant = true;

                const s_Node* _6;
                const s_Node* _7;
                return (_7 = &((*(_6 = &(items[0])) ? *_6 : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers))), trySolveTypeParams_Yy4toJD0(*_7, static_cast<s_Type&&>(t), typeParams, errout, invariant, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
            }
            else
            {
                BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
            };
        };
      } BL_1:;
    }
    else if (node.kind == s_kind_typeparam)
    {
        const fu::str& id = (node.value ? node.value : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers));
        type = relax_typeParam_57qzYcmt(s_Type(type));
        s_TypeParam& param = ref_WzIoqQB9(typeParams, id);
        if (param)
        {
            if (invariant)
            {
                if (!isAssignable_Ptvwgj5A(type, param.matched, DONT_match_zeroes, false))
                {
                    if (errout)
                    {
                        s_TokenIdx _8 {};
                        fu::str _9 {};
                        errout += (_8 = s_TokenIdx(node.token), s_Warning { static_cast<s_TokenIdx&&>(_8), (_9 = (("Incompatible types for "_fu + qBAD_bF2G8fJR(id)) + ": "_fu), (static_cast<fu::str&&>(_9) + explainTypeDiff_A4hoEuWr(param.matched, type, "->"_fu, ctx, module, _here, ss, _helpers, _current_fnort))) });
                    };
                    return false;
                };
            }
            else
            {
                /*MOV*/ s_Type uNion = type_trySuper_uwryF4aS(param.matched, type, DONT_match_zeroes);
                if (!uNion)
                {
                    if (errout)
                    {
                        s_TokenIdx _10 {};
                        fu::str _11 {};
                        errout += (_10 = s_TokenIdx(node.token), s_Warning { static_cast<s_TokenIdx&&>(_10), (_11 = (("Incompatible types for "_fu + qBAD_bF2G8fJR(id)) + ": "_fu), (static_cast<fu::str&&>(_11) + explainTypeDiff_A4hoEuWr(param.matched, type, "<->"_fu, ctx, module, _here, ss, _helpers, _current_fnort))) });
                    };
                    return false;
                }
                else
                    type = static_cast<s_Type&&>(uNion);

            };
            if (param.invariant && !isAssignable_Ptvwgj5A(param.invariant, type, DONT_match_zeroes, false))
            {
                if (errout)
                {
                    s_TokenIdx _12 {};
                    fu::str _13 {};
                    errout += (_12 = s_TokenIdx(node.token), s_Warning { static_cast<s_TokenIdx&&>(_12), (_13 = (("Incompatible types for "_fu + qBAD_bF2G8fJR(id)) + ": "_fu), (static_cast<fu::str&&>(_13) + explainTypeDiff_A4hoEuWr(param.invariant, type, "<-"_fu, ctx, module, _here, ss, _helpers, _current_fnort))) });
                };
                return false;
            };
        };
        param.matched = type;
        if (invariant)
            param.invariant = static_cast<s_Type&&>(type);

        return true;
    }
    else if ((node.kind == s_kind_arrlit) && (node.items.size() == 1))
    {
        invariant = true;
        s_Type _14 {};
        fu::never BL_28_v {};
        /*MOV*/ s_Type t = ((_14 = tryClear_sliceable_QUN697Dd(type.vtype)) ? static_cast<s_Type&&>(_14) : (__extension__ (
        {
            if (errout)
            {
                s_TokenIdx _15 {};
                errout += (_15 = s_TokenIdx(node.token), s_Warning { static_cast<s_TokenIdx&&>(_15), ("Not sliceable: "_fu + humanizeType_XI6W2OpL(type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)) });
            };
            return false;
        (void)0;}), static_cast<fu::never&&>(BL_28_v)));
        const s_Node* _16;
        const s_Node* _17;
        return (_17 = &((*(_16 = &(node.items[0])) ? *_16 : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers))), trySolveTypeParams_Yy4toJD0(*_17, static_cast<s_Type&&>(t), typeParams, errout, invariant, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
    }
    else if (node.kind == s_kind_typeunion)
    {
        const int errout0 = errout.size();
        s_Map_uYRcurSQUL8 typeParams0 { typeParams };
        for (int i = 0; i < node.items.size(); i++)
        {
            if (trySolveTypeParams_Yy4toJD0(node.items[i], s_Type(type), typeParams, errout, invariant, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort))
            {
                errout.shrink(errout0);
                return true;
            }
            else
                typeParams = typeParams0;

        };
        return false;
    };
    s_Type expect = evalTypeAnnot_ctbW9IO5(node, (*(const s_Map_uYRcurSQUL8*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    if (!isAssignable_Ptvwgj5A(expect, type, DONT_match_zeroes, false))
    {
        if (errout)
        {
            s_TokenIdx _18 {};
            errout += (_18 = s_TokenIdx(node.token), s_Warning { static_cast<s_TokenIdx&&>(_18), ("Incompatible types: "_fu + explainTypeDiff_A4hoEuWr(expect, type, "<-"_fu, ctx, module, _here, ss, _helpers, _current_fnort)) });
        };
        return false;
    }
    else
        return true;

}

inline static fu::str mangleArgTypes_IzkDStD6(fu::view<s_Type> args)
{
    /*MOV*/ fu::str mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ',';

        const s_Type& argType = args[i];
        if (argType)
            mangle += serializeType_CSxk94aZ(argType, "mangle[$T]"_fu);

    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_add_DOlKANOTjIa
                                #define DEF_add_DOlKANOTjIa
inline bool add_DOlKANOT(fu::vec<fu::str>& keys, const fu::str& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_r7bhmB7D(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, fu::str(item));
    return true;
}
                                #endif

static s_Map_E6hvIBLiDIl& getSpecs_AXXGDTv1(const int parent_idx, s_SolverState& ss)
{
    return EPH_mut_oUaxTGiU(parent_idx, ss).specs;
}

                                #ifndef DEF_get_x6ERhoIbxsj
                                #define DEF_get_x6ERhoIbxsj
inline const s_Target& get_x6ERhoIb(fu::view<fu::str> keys, fu::view<char> item, fu::view<s_Target> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_r7bhmB7D(keys[i], item);
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

                                #ifndef DEF_get_axePiRUHTFa
                                #define DEF_get_axePiRUHTFa
inline const s_Target& get_axePiRUH(const s_Map_E6hvIBLiDIl& _, fu::view<char> key)
{
    return get_x6ERhoIb(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_rem_4Xs1Rg9Xxj4
                                #define DEF_rem_4Xs1Rg9Xxj4
inline bool rem_4Xs1Rg9X(fu::vec<fu::str>& keys, fu::view<char> item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_r7bhmB7D(keys[i], item);
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

                                #ifndef DEF_x3Cx3E_u5s5w3qsBek
                                #define DEF_x3Cx3E_u5s5w3qsBek
inline int x3Cx3E_u5s5w3qs(const s_Target& a, const s_Target& b)
{

    {

        {
            const int cmp = x3Cx3E_AsFD7H8N(a.modid, b.modid);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_AsFD7H8N(a.index, b.index);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_u5s5w3qsBek
                                #define DEF_x3Dx3D_u5s5w3qsBek
inline bool operator==(const s_Target& a, const s_Target& b)
{
    return !x3Cx3E_u5s5w3qs(a, b);
}
                                #endif

static fu::vec<fu::str>& l_6_2_LPuyl7KA(s_Map_E6hvIBLiDIl& _)
{
    return _.keys;
}

static fu::vec<s_Target>& l_6_3_QKKT67bV(s_Map_E6hvIBLiDIl& _)
{
    return _.vals;
}

inline static int bfind_IAgpRlEw(fu::view<char> item, const fu::str& item_1, s_Map_E6hvIBLiDIl& _)
{
    int lo = 0;
    int hi = l_6_2_LPuyl7KA(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_r7bhmB7D(l_6_2_LPuyl7KA(_)[i], item);
        if (cmp == 0)
            return i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_2_LPuyl7KA(_).insert(lo, fu::str(item_1));
    l_6_3_QKKT67bV(_).insert(lo, s_Target{});
    return lo;
}

                                #ifndef DEF_ref_Eqe9T4uLGI3
                                #define DEF_ref_Eqe9T4uLGI3
inline s_Target& ref_Eqe9T4uL(const fu::str& item, s_Map_E6hvIBLiDIl& _)
{
    const int idx = bfind_IAgpRlEw(item, item, _);
    return l_6_3_QKKT67bV(_).mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_8WedmPXITSj
                                #define DEF_ref_8WedmPXITSj
inline s_Target& ref_8WedmPXI(s_Map_E6hvIBLiDIl& _, const fu::str& key)
{
    return ref_Eqe9T4uL(key, _);
}
                                #endif

inline static fu::str id_WJHgFxUs(const s_Target& target, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (is_SPECFAIL_JPJKHVxn(target))
        return "SPEC_FAIL"_fu;
    else
        return ("`"_fu + GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).name) + "`"_fu;

}

static void setSpec_M39gePtu(const fu::str& mangle, const s_Target& target, const bool nx, const bool allowReplaceNonSpecfails, const int parent_idx, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    s_Target& t = ref_8WedmPXI(getSpecs_AXXGDTv1(parent_idx, ss), mangle);
    if ((!t == nx) && (!t || is_SPECFAIL_JPJKHVxn(t) || allowReplaceNonSpecfails))
        t = target;
    else
    {
        fu::str _0 {};
        fu::str _1 {};
        fu::str _2 {};
        (_2 = (_1 = ((_0 = (((x7E_r7bhmB7D((x7E_r7bhmB7D("About to screw up royally, replacing spec: "_fu, fu::i64dec(t.index)) + " with "_fu), fu::i64dec(target.index)) + ", mangle: "_fu) + mangle) + ", that's: "_fu), (static_cast<fu::str&&>(_0) + id_WJHgFxUs(t, ctx, module, _here, ss, _helpers))) + " becoming "_fu), (static_cast<fu::str&&>(_1) + id_WJHgFxUs(target, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_2), ctx, module, _here, ss, _helpers));
    };
}

static void resetSpec_BQn2rNGp(const s_Target& spec, const bool allowReplaceNonSpecfails, const int parent_idx, fu::view<fu::str> mangles, s_Target& currentSpec, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (!(spec == currentSpec))
    {
        currentSpec = spec;
        for (int i = 0; i < mangles.size(); i++)
            setSpec_M39gePtu(mangles[i], spec, false, allowReplaceNonSpecfails, parent_idx, ctx, module, _here, ss, _helpers);

    };
}

static s_Target SPECFAIL_gZeUGKbO(const fu::str& reason, const int parent_idx, const s_Target& SPECFAIL_RentrySafety, fu::view<fu::str> mangles, s_Target& currentSpec, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const int index = ss._spec_errors.size();
    ss._spec_errors += fu::str(reason);
    const s_Target spec = s_Target { SPECFAIL_RentrySafety.modid, index };
    resetSpec_BQn2rNGp(spec, false, parent_idx, mangles, currentSpec, ctx, module, _here, ss, _helpers);
    return spec;
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

static bool type_has_wdZPhsFX(const s_Type& type, fu::view<char> tag, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (tag == "trivial"_fu)
        return is_trivial_LriKPDIk(type.vtype, ctx, module);
    else if (tag == "copy"_fu)
        return is_rx_copy_UHdpdATk(type);
    else if (tag == "arithmetic"_fu)
        return is_arithmetic_6bkyMkO3(type.vtype);
    else if (tag == "primitive"_fu)
        return is_primitive_6bkyMkO3(type.vtype);
    else if (tag == "bitfield"_fu)
        return is_bitfield_6bkyMkO3(type.vtype);
    else if (tag == "integral"_fu)
        return is_integral_6bkyMkO3(type.vtype);
    else if (tag == "unsigned"_fu)
        return is_unsigned_6bkyMkO3(type.vtype);
    else if (tag == "floating_point"_fu)
        return is_floating_pt_6bkyMkO3(type.vtype);
    else if (tag == "mutref"_fu)
        return is_mutref_tkXzsAAo(type, _here, ctx);
    else if (tag == "enum"_fu)
        return is_enum_6bkyMkO3(type.vtype);
    else if (tag == "flags"_fu)
        return is_flags_6bkyMkO3(type.vtype);
    else
        BUG_JWcxU72K((("Unknown type tag: `"_fu + tag) + "`."_fu), ctx, module, _here, ss, _helpers);

}

static bool evalTypePattern_17W8iDcf(const s_Node& node, s_Map_uYRcurSQUL8& typeParams, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (node.kind == s_kind_and)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (!evalTypePattern_17W8iDcf(node.items[i], typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort))
                return false;

        };
        return true;
    }
    else if (node.kind == s_kind_or)
    {
        s_Map_uYRcurSQUL8 undo { typeParams };
        for (int i = 0; i < node.items.size(); i++)
        {
            if (evalTypePattern_17W8iDcf(node.items[i], typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort))
                return true;
            else
                typeParams = undo;

        };
        return false;
    }
    else if (node.kind == s_kind_typeassert)
    {
        const s_Node* _0;
        const s_Node& left = (*(_0 = &(node.items[0])) ? *_0 : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers));
        const s_Node* _1;
        const s_Node& right = (*(_1 = &(node.items[1])) ? *_1 : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers));
        if (right.kind == s_kind_typetag)
        {
            s_Type _2 {};
            fu::view<char> _3 {};
            return (_2 = evalTypeAnnot_ctbW9IO5(left, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort), _3 = (right.value ? right.value : fail_pNB52ATY("Falsy type tag."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers)), type_has_wdZPhsFX(static_cast<s_Type&&>(_2), static_cast<fu::view<char>&&>(_3), ctx, module, _here, ss, _helpers));
        }
        else
        {
            /*MOV*/ s_Type actual = evalTypeAnnot_ctbW9IO5(left, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            fu::vec<s_Warning> errout {};
            const bool ok = trySolveTypeParams_Yy4toJD0(right, static_cast<s_Type&&>(actual), typeParams, errout, false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            if (errout)
                BUG_JWcxU72K("Inefficient: trySolveTypeParams pushing errors when told not to (falsy errout)."_fu, ctx, module, _here, ss, _helpers);
            else
            {
                if (ok && (left.kind == s_kind_typeparam))
                {
                    /*MOV*/ s_Type expect = evalTypeAnnot_ctbW9IO5(right, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                    const fu::str& id = left.value;
                    s_TypeParam& tp = ref_WzIoqQB9(typeParams, id);
                    s_Type _4 {};
                    tp.consumed = (tp.consumed ? ((_4 = type_tryIntersect_mxQ2bIFx(tp.consumed, expect)) ? static_cast<s_Type&&>(_4) : fail_pNB52ATY("typeassert intersect fail."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers)) : static_cast<s_Type&&>(expect));
                };
                return ok;
            };
        };
    }
    else if (node.kind == s_kind_not)
        return !evalTypePattern_17W8iDcf(only_HNT2v2R9(node.items), typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

    fail_pNB52ATY((x7E_r7bhmB7D((x7E_r7bhmB7D("TODO evalTypePattern fallthrough: "_fu, str_k2hK9UHj(node.kind)) + "("_fu), fu::i64dec(node.items.size())) + ")"_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
}

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

static bool isNativeBody_3T3CMxFt(const s_Node& n_body)
{
    if (n_body.kind == s_kind_call)
        return n_body.value == "__native"_fu;
    else
        return false;

}

static fu::vec<fu::str>& l_6_4_FOPjCjJG(s_Map_uYRcurSQUL8& _)
{
    return _.keys;
}

static fu::vec<s_TypeParam>& l_6_5_vuiDoBFC(s_Map_uYRcurSQUL8& _)
{
    return _.vals;
}

inline static s_Type& l_27_20_R6gGfk4U(s_TypeParam& tp)
{
    return (tp.matched = tp.consumed);
}

                                #ifndef DEF_if_ref_WxlwdRCYMRc
                                #define DEF_if_ref_WxlwdRCYMRc
inline bool if_ref_WxlwdRCY(fu::view<char> item, s_Map_uYRcurSQUL8& _)
{
    int lo = 0;
    int hi = l_6_4_FOPjCjJG(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_r7bhmB7D(l_6_4_FOPjCjJG(_)[i], item);
        if (cmp == 0)
        {
            l_27_20_R6gGfk4U(l_6_5_vuiDoBFC(_).mutref(i));
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

                                #ifndef DEF_if_ref_kRdUgSmcHE2
                                #define DEF_if_ref_kRdUgSmcHE2
inline bool if_ref_kRdUgSmc(s_Map_uYRcurSQUL8& _, fu::view<char> key)
{
    return if_ref_WxlwdRCY(key, _);
}
                                #endif

                                #ifndef DEF_if_last_qDpRvH2v8Be
                                #define DEF_if_last_qDpRvH2v8Be
inline const s_ScopeSkip& if_last_qDpRvH2v(fu::view<s_ScopeSkip> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return (*(const s_ScopeSkip*)fu::NIL);

}
                                #endif

                                #ifndef DEF_last_gKiwRA7JCBd
                                #define DEF_last_gKiwRA7JCBd
inline s_ScopeSkip& last_gKiwRA7J(fu::view_mut<s_ScopeSkip> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static void ScopeSkip_push_kDYEP7Bv(fu::vec<s_ScopeSkip>& scope_skip, const int start, const int end, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if ((start <= end))
    {
        if (!(end == start))
        {
            const s_ScopeSkip& last = if_last_qDpRvH2v(scope_skip);
            if ((last.end <= start))
            {
                if (scope_skip && (last.end == start))
                    last_gKiwRA7J(scope_skip).end = end;
                else
                {
                    scope_skip += s_ScopeSkip { start, end };
                };
            }
            else
                BUG_JWcxU72K("ScopeSkip_push: last.end > start."_fu, ctx, module, _here, ss, _helpers);

        };
    }
    else
        BUG_JWcxU72K("ScopeSkip_push: bad args."_fu, ctx, module, _here, ss, _helpers);

}

static bool Scope_import_aSuXr0ey(const int modid, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers)
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
            if (!((ss_1.end <= i0)))
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
        ss._scope.imports += modid;
        _Scope_import__forceCopy_2NQA1bZW(modid, ctx, ss);
        return true;
    }
    else
        BUG_JWcxU72K("Attempting to import modid-0."_fu, ctx, module, _here, ss, _helpers);

}

static void _Scope_import__forceCopy_privates_eB9IHg4h(const int modid, const s_Context& ctx, s_SolverState& ss)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    ss._scope.items += fu::get_view(s.items, s.pub_items, s.items.size());
    ss._scope.converts += fu::get_view(s.converts, s.pub_cnvrts, s.converts.size());
}

static void Scope_import_privates_WjcsjLkI(const int modid, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers)
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
            if (!((ss_1.end <= i0)))
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
        ss._scope.privates += modid;
        _Scope_import__forceCopy_privates_eB9IHg4h(modid, ctx, ss);
    }
    else
        BUG_JWcxU72K("Attempting to import_privates modid-0."_fu, ctx, module, _here, ss, _helpers);

}

                                #ifndef DEF_x3Cx3E_4DcPa2sKB77
                                #define DEF_x3Cx3E_4DcPa2sKB77
inline int x3Cx3E_4DcPa2sK(const unsigned a, const unsigned b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_RUPyCmgi9hi
                                #define DEF_x3Cx3E_RUPyCmgi9hi
inline int x3Cx3E_RUPyCmgi(const s_ValueType& a, const s_ValueType& b)
{

    {

        {
            const int cmp = x3Cx3E_4DcPa2sK(a.quals, b.quals);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_r7bhmB7D(a.canon, b.canon);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_hqRI1L0qElh
                                #define DEF_x3Cx3E_hqRI1L0qElh
inline int x3Cx3E_hqRI1L0q(const s_VFacts a, const s_VFacts b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_PU4onwQu6j2
                                #define DEF_x3Cx3E_PU4onwQu6j2
inline int x3Cx3E_PU4onwQu(const s_Type& a, const s_Type& b)
{

    {

        {
            const int cmp = x3Cx3E_RUPyCmgi(a.vtype, b.vtype);
            if (cmp)
                return cmp;

        };

        {
            const int cmp = x3Cx3E_LnUQELnI(a.lifetime, b.lifetime);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_hqRI1L0q(a.vfacts, b.vfacts);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_PU4onwQu6j2
                                #define DEF_x3Dx3D_PU4onwQu6j2
inline bool operator==(const s_Type& a, const s_Type& b)
{
    return !x3Cx3E_PU4onwQu(a, b);
}
                                #endif

static const s_Target& checkStruct_SUaXoSYW(const s_Type& type, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    const s_Target& t = lookupUserType_d3zNJ4dJ(type, ctx, module, _here, ss, _helpers, _current_fnort).target;
    if (GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).type == type)
        return t;
    else
        return (*(const s_Target*)fu::NIL);

}

inline static void l_27_24_mymYJX9J(const fu::str& id, const s_TypeParam& tp, fu::vec<s_ScopeItem>& res, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    const s_Type& type = tp.matched;
    if (!(!type))
    {
        s_Target _0 {};
        const s_Target target = ((_0 = s_Target((isStruct_ddyKn6V4(type.vtype) ? checkStruct_SUaXoSYW(type, ctx, module, _here, ss, _helpers, _current_fnort) : (*(const s_Target*)fu::NIL)))) ? _0 : Scope_create_LHVUyYFV(ss._scope, s_kind_type, id, type, s_Flags{}, s_SolverStatus{}, 0, module));
        Scope_set_EJ5xtBX6(res, id, target, false);
    };
}

                                #ifndef DEF_pairs_2fJkqC3FSU1
                                #define DEF_pairs_2fJkqC3FSU1
inline void pairs_2fJkqC3F(const s_Map_uYRcurSQUL8& _, fu::vec<s_ScopeItem>& res, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    for (int i = 0; i < _.keys.size(); i++)
        l_27_24_mymYJX9J(_.keys[i], _.vals[i], res, ctx, module, _here, ss, _helpers, _current_fnort);

}
                                #endif

static fu::vec<s_ScopeItem> intoScopeItems_YXy8d3uk(const s_Map_uYRcurSQUL8& typeParams, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ fu::vec<s_ScopeItem> res {};
    pairs_2fJkqC3F(typeParams, res, ctx, module, _here, ss, _helpers, _current_fnort);
    return /*NRVO*/ res;
}

static s_SolvedNode solved_tFunRNAy(const s_Node& node, const s_Type& type, const fu::vec<s_SolvedNode>& items, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_Ob5YrUkY(node.kind, type, node.flags, node.value, items, target, s_Helpers{}, _here);
}

static fu::vec<s_SolvedNode>& outItems_S0SebFEP(s_CurrentFn& _current_fn)
{
    return _current_fn.out.items;
}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

static s_Type tryGetArgSpecType_YaPkgEFx(fu::view<char> id, fu::view<s_ScopeItem> extra_items, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    fu::str param = ("$"_fu + id);
    for (int i = 0; i < extra_items.size(); i++)
    {
        const s_ScopeItem& m = extra_items[i];
        if (m.id == param)
        {
            const s_Overload& o = GET_etmeeocQ(target_7YqD2G7N(m), ctx, module, _here, ss, _helpers);
            if (o.kind == s_kind_type)
            {
                fu::str _0 {};
                return s_Type((o.type ? o.type : (_0 = x7E_r7bhmB7D("tryGetArgSpecType: no type on "_fu, str_1mm3y0E0(o, ctx, module, _here, ss, _helpers)), BUG_JWcxU72K(static_cast<fu::str&&>(_0), ctx, module, _here, ss, _helpers))));
            }
            else
            {
                fail_pNB52ATY((x7E_r7bhmB7D((((x7E_r7bhmB7D("tryGetArgSpecType: Not a typeparam: `"_fu, str_k2hK9UHj(o.kind)) + ":"_fu) + param) + "("_fu), fu::i64dec(EXT_EOYtG69B(target_7YqD2G7N(m), ctx, module, ss).max)) + ")`."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
            };
        };
    };
    return s_Type{};
}

static const s_TokenIdx& token_BlZT1Rr5(const s_Target& target, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const s_TokenIdx* _0;
    return *(_0 = &(EXT_EOYtG69B(target, ctx, module, ss).tEmplate.node.token)) ? *_0 : GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).solved.token;
}

static fu::str addr_and_snippet_YNpW6K7i(const s_TokenIdx& token, const s_CodeFmt fmt, fu::view<char> backtrack, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::vec<s_TokenIdx> tokens = fu::vec<s_TokenIdx> { fu::slate<1, s_TokenIdx> { s_TokenIdx(token) } };
    if (backtrack)
    {
        const s_TokenIdx other = tryBacktrack_MIoWkAip(token, backtrack, s_kind_id, ctx);
        if (other)
        {
            tokens.unshift(s_TokenIdx(other));
        };
    };
    return formatCodeSnippet_M4QtP2oD(static_cast<fu::vec<s_TokenIdx>&&>(tokens), module.modid, fmt, ctx);
}

static fu::str explainWhichFn_4p0QhTu9(const s_Target& t, fu::view<fu::vec<s_Target>> conversions, fu::view<char> backtrack, const s_CodeFmt fmt, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const s_Overload* _0;
    fu::str _1 {};
    const s_TokenIdx* _2;
    /*MOV*/ fu::str result = (_1 = x7E_r7bhmB7D((_0 = &(GET_etmeeocQ(t, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers)), " at "_fu), (static_cast<fu::str&&>(_1) + (_2 = &(token_BlZT1Rr5(t, ctx, module, _here, ss, _helpers)), addr_and_snippet_YNpW6K7i(*_2, fmt, backtrack, ctx, module))));
    for (int i = 0; i < conversions.size(); i++)
    {
        fu::view<s_Target> c = conversions[i];
        if (c)
        {
            fu::view<s_Target> _3 {};
            fu::str _4 {};
            result += (_3 = c, _4 = ((EXT_EOYtG69B(t, ctx, module, ss).args.size() > 1) ? x7E_r7bhmB7D(str_J4YCysO5(EXT_EOYtG69B(t, ctx, module, ss).args[i], ctx, module, _here, ss, _helpers), ": "_fu) : fu::str{}), explainConversion_YRKhvPnB(static_cast<fu::view<s_Target>&&>(_3), static_cast<fu::str&&>(_4), ctx, module, _here, ss, _helpers));
        };
    };
    return /*NRVO*/ result;
}

static fu::str explainConversion_YRKhvPnB(fu::view<s_Target> path, fu::view<char> prefix, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    /*MOV*/ fu::str res {};
    for (int i = 0; i < path.size(); i++)
    {
        if (!i)
            res += "\n"_fu;

        res += "\t    "_fu;
        if (!i && prefix)
            res += prefix;

        res += (qKW_bF2G8fJR("using"_fu) + " "_fu);
        res += explainWhichFn_4p0QhTu9(path[i], fu::view<fu::vec<s_Target>>{}, "using"_fu, s_CodeFmt_NoContext, ctx, module, _here, ss, _helpers);
    };
    return /*NRVO*/ res;
}

static void foreach_8AGqhexy(const s_Target& t, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, fu::vec<int>& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
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
    fu::str error {};
    s_Target candidate {};
    if (nullary || (candidate = tryMatch__mutargs_zJaFYih8(fu::str{}, TODO_FIX_reorder, TODO_FIX_conversions, error, false, false, (*(const s_Scope*)fu::NIL), fu::vec<s_SolvedNode>(ss.TODO_FIX_convert_args), s_Flags_F_CONVERSION, t, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort)))
    {
        const s_Target& t_1 = (nullary ? t : candidate);
        const s_Overload& convert = GET_etmeeocQ(t_1, ctx, module, _here, ss, _helpers);
        if (convert.type)
        {
            s_Type convertType = ((convert.kind == s_kind_field) ? add_refs_4HVscqUr((from ? from : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers)), s_Type(convert.type)) : s_Type(convert.type));
            const bool isStruct = isStruct_ddyKn6V4(convertType.vtype);
            if (!(s_SolverStatus((convert.status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_FINALIZED)))) == s_SolverStatus_SS_DID_START))
            {
                if (isAssignableAsArgument_aTMI25ej(expect, convertType, false))
                {
                    if (match)
                    {
                        fu::str _0 {};
                        fu::str suffix = (_0 = (("\n"_fu + explainConversion_YRKhvPnB(match, fu::view<char>{}, ctx, module, _here, ss, _helpers)) + "\n\tand:\n"_fu), (static_cast<fu::str&&>(_0) + explainConversion_YRKhvPnB((path + t_1), fu::view<char>{}, ctx, module, _here, ss, _helpers)));
                        if (actual)
                        {
                            fu::str _1 {};
                            fu::str _2 {};
                            (_2 = (((_1 = (("Conversion ambiguity, multiple ways to convert "_fu + humanizeType_XI6W2OpL(actual, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)) + " into "_fu), (static_cast<fu::str&&>(_1) + humanizeType_XI6W2OpL(expect, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))) + ":"_fu) + suffix), fail_pNB52ATY(static_cast<fu::str&&>(_2), fu::view<char>{}, ctx, module, _here, ss, _helpers));
                        }
                        else
                        {
                            fu::str _3 {};
                            (_3 = ((((qBAD_bF2G8fJR("using"_fu) + " ambiguity, multiple ways to obtain a "_fu) + humanizeType_XI6W2OpL(expect, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)) + " in this scope:"_fu) + suffix), fail_pNB52ATY(static_cast<fu::str&&>(_3), fu::view<char>{}, ctx, module, _here, ss, _helpers));
                        };
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
                                    /*MOV*/ fu::str err = "Conversion loop:\n"_fu;
                                    for (int i_1 = i; i_1 < path.size(); i_1++)
                                    {
                                        err += "\n\t    "_fu;
                                        const s_Overload& convert_1 = GET_etmeeocQ(path[i_1], ctx, module, _here, ss, _helpers);
                                        fu::str _4 {};
                                        err += ((_4 = x7E_r7bhmB7D(str_1mm3y0E0(convert_1, ctx, module, _here, ss, _helpers), ": "_fu), (static_cast<fu::str&&>(_4) + humanizeType_XI6W2OpL(convertType, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))) + " ->"_fu);
                                    };
                                    err += x7E_r7bhmB7D("\n\t        "_fu, str_1mm3y0E0(convert, ctx, module, _here, ss, _helpers));
                                    fail_pNB52ATY(static_cast<fu::str&&>(err), fu::view<char>{}, ctx, module, _here, ss, _helpers);
                                };
                            };
                        };
                        path.push(s_Target(t_1));
                        fu_DEFER(path.pop());
                        descend_oRdYwUGH(convertType, false, isStruct, false, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                    };
                };
            };
        }
        else
        {
            fu::str _5 {};
            (_5 = (x7E_r7bhmB7D("No convert.type, perhaps a `using inline fn` without a return type annotation: `"_fu, str_1mm3y0E0(convert, ctx, module, _here, ss, _helpers)) + "`."_fu), fail_pNB52ATY(static_cast<fu::str&&>(_5), fu::view<char>{}, ctx, module, _here, ss, _helpers));
        };
    };
}

inline static void l_27_6_2cinPtvY(const s_Target& u, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, fu::vec<int>& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    foreach_8AGqhexy(u, from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
}

                                #ifndef DEF_each_aapkiXeQmGb
                                #define DEF_each_aapkiXeQmGb
inline void each_aapkiXeQ(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, fu::vec<int>& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss_1 = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if (!((ss_1.end <= i0)))
        {
            const int i1 = ss_1.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
                l_27_6_2cinPtvY(items[i_1], from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

            i0 = ss_1.end;
        };
    };
}
                                #endif

                                #ifndef DEF_each_07T7ehSsFhh
                                #define DEF_each_07T7ehSsFhh
inline void each_07T7ehSs(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, fu::vec<int>& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss_1 = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if (!((ss_1.end <= i0)))
        {
            const int i1 = ss_1.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
                foreach_8AGqhexy(items[i_1], from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

            i0 = ss_1.end;
        };
    };
}
                                #endif

static void descend_oRdYwUGH(const s_Type& from, const bool nullary, const bool isStruct, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, fu::vec<int>& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (nullary)
        each_aapkiXeQ(fu::vec<s_Target>((local_scope ? ss._scope : misc_scope).usings), fu::vec<s_ScopeSkip>((local_scope ? ss._ss.usings : (*(const fu::vec<s_ScopeSkip>*)fu::NIL))), 0, from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else
    {
        if (isStruct)
        {
            fu::vec<s_Target> inner { lookupUserType_d3zNJ4dJ(from, ctx, module, _here, ss, _helpers, _current_fnort).converts };
            for (int i = 0; i < inner.size(); i++)
                foreach_8AGqhexy(s_Target(inner[i]), from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

        };
        if (has_converts)
            each_07T7ehSs(fu::vec<s_Target>((local_scope ? ss._scope : misc_scope).converts), fu::vec<s_ScopeSkip>((local_scope ? ss._ss.converts : (*(const fu::vec<s_ScopeSkip>*)fu::NIL))), 0, from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

    };
}

static fu::vec<s_Target> tryConvert_K3gQKVtM(const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ fu::vec<s_Target> match {};
    fu::vec<s_Target> path {};
    const int has_converts = (local_scope ? ss._scope : misc_scope).converts.size();
    s_SolvedNode arg0 { ss.TODO_FIX_convert_args[0] };
    fu::vec<int> TODO_FIX_reorder {};
    fu::vec<fu::vec<s_Target>> TODO_FIX_conversions {};
    descend_oRdYwUGH(actual, !actual, isStruct_ddyKn6V4(actual.vtype), true, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    return /*NRVO*/ match;
}

                                #ifndef DEF_steal_MN85i44z16k
                                #define DEF_steal_MN85i44z16k
inline s_SolvedNode steal_MN85i44z(s_SolvedNode& v)
{
    /*MOV*/ s_SolvedNode ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never;
                                #endif

                                #ifndef DEF_if_last_fLVI01Cfxkf
                                #define DEF_if_last_fLVI01Cfxkf
inline const s_SolvedNode& if_last_fLVI01Cf(fu::view<s_SolvedNode> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return (*(const s_SolvedNode*)fu::NIL);

}
                                #endif

static s_SolvedNode createBlock_Q2a0BBmY(const s_Type& type, fu::vec<s_SolvedNode>&& items, const s_Helpers& h, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    for (int i = items.size(); i-- > 0; )
    {
        const s_SolvedNode& item = items[i];
        const s_kind k = item.kind;
        if (k == s_kind_block)
        {
            if (if_last_fLVI01Cf(item.items).kind == s_kind_unwrap)
            {
                const s_HelpersData* BL_5_v;
                if ((item.kind == s_kind_block) && !s_HelpersMask(((__extension__ (
                {
                    const s_Helpers& h_1 = item.helpers;
                    BL_5_v = &(ss._helpers_data[h_1.index]);
                (void)0;}), *BL_5_v).mask & s_HelpersMask_HM_LabelUsed)))
                    items.splice(i, 1, fu::slice(item.items, 0, (item.items.size() - 1)));
                else
                {
                    fail_pNB52ATY("`unwrap` doesn't currently support early returns."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers);
                };
            };
        };
    };
    return SolvedNode_Ob5YrUkY(s_kind_block, type, s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, h, _here);
}

static int findRestStart_pfM9smn4(const s_Extended& ext)
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

static s_Type solveArrlit_itemType_init_eoMyNVOn(const s_Type& head, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    s_Type _0 {};
    return (_0 = clear_refs_57qzYcmt(s_Type(head))) ? static_cast<s_Type&&>(_0) : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
}

static s_Type superType_gCDGWKHo(fu::view<char> reason, const s_Type& a, const s_Type& b, fu::view<char> id, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    s_Type _0 {};
    fu::str _1 {};
    fu::str _2 {};
    fu::str _3 {};
    return (_0 = type_trySuper_uwryF4aS(a, b, false)) ? static_cast<s_Type&&>(_0) : (_3 = (_2 = ((_1 = (((id ? (qID_bF2G8fJR(id) + ": "_fu) : fu::str{}) + reason) + "No common supertype: "_fu), (static_cast<fu::str&&>(_1) + humanizeType_XI6W2OpL(a, true, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))) + " | "_fu), (static_cast<fu::str&&>(_2) + humanizeType_XI6W2OpL(b, true, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), fail_pNB52ATY(static_cast<fu::str&&>(_3), fu::view<char>{}, ctx, module, _here, ss, _helpers));
}

static s_Type solveArrlit_itemType_XcR8OBaa(fu::view<s_SolvedNode> items, /*MOV*/ s_Type&& itemType, int start, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (!itemType)
    {
        if (start == items.size())
        {
            fail_pNB52ATY("Cannot infer empty arraylit."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers);
        }
        else
            itemType = solveArrlit_itemType_init_eoMyNVOn(items[start++].type, ctx, module, _here, ss, _helpers);

    }
    else if (is_ref_vcLGyw8p(itemType))
    {
        fail_pNB52ATY("Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers);
    };
    for (int i = start; i < items.size(); i++)
    {
        itemType = superType_gCDGWKHo("Array literal: "_fu, itemType, items[i].type, fu::view<char>{}, ctx, module, _here, ss, _helpers, _current_fnort);
    };
    return static_cast<s_Type&&>(itemType);
}

static s_Type solveArrlit_done_UUNTSelc(const s_Type& itemType, const int itemCount, const s_Options& options)
{
    /*MOV*/ s_Type arrayType = createArray_FLt6d9WO(itemType);
    if ((itemCount >= 0) && !s_DevOptions((options.dev & s_DevOptions_DEV_DontFoldLiterals)))
        arrayType.vfacts = (itemCount ? s_VFacts_AlwaysTrue : s_VFacts_AlwaysFalse);

    return /*NRVO*/ arrayType;
}

static s_SolvedNode createArrlit_1EQc3HSU(fu::vec<s_SolvedNode>&& items, const s_Type& itemType, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    s_Type itemType_1 = solveArrlit_itemType_XcR8OBaa(items, s_Type(itemType), 0, ctx, module, _here, ss, _helpers, _current_fnort);
    return SolvedNode_Ob5YrUkY(s_kind_arrlit, solveArrlit_done_UUNTSelc(itemType_1, items.size(), options), s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
}

static int GET_next_local_index_zHd1WF14(const s_Target& _current_fnort, const s_SolverState& ss, const s_CurrentFn& _current_fn)
{
    if (_current_fn.out.target.index)
        return ss._scope.extended[_current_fnort.index].locals.size() + 1;
    else
        return 0;

}

                                #ifndef DEF_grow_if_oob_i7FZwAah1R9
                                #define DEF_grow_if_oob_i7FZwAah1R9
inline s_Helpers& grow_if_oob_i7FZwAah(fu::vec<s_Helpers>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static const s_Overload& GET_crossmodule_PeOnLpKY(const s_Target& target, const s_Target& from, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (isLocal_HC98KjW6(target) && (from.modid != module.modid))
    {
        const s_Module& module_1 = ctx.modules[from.modid];
        fu::view<s_Overload> locals = module_1.out.solve.scope.extended[-target.modid].locals;
        if (locals.size() < target.index)
        {
            s_Target _0 {};
            const s_Overload* _1;
            fu::str _2 {};
            fu::str _3 {};
            (_3 = (_2 = (x7E_r7bhmB7D((x7E_r7bhmB7D("Out of range local target from: "_fu, (_1 = &((_0 = parent_TCLJMIrs(target, ctx, module, _here, ss, _helpers), GET_etmeeocQ(static_cast<s_Target&&>(_0), ctx, module, _here, ss, _helpers))), str_1mm3y0E0(*_1, ctx, module, _here, ss, _helpers))) + "\n\tlocals="_fu), fu::i64dec(locals.size())) + "\n\tindex="_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_2), fu::i64dec(target.index))), BUG_JWcxU72K(static_cast<fu::str&&>(_3), ctx, module, _here, ss, _helpers));
        }
        else
            return locals[(target.index - 1)];

    }
    else
        return GET_etmeeocQ(target, ctx, module, _here, ss, _helpers);

}

                                #ifndef DEF_grow_if_oob_xxoUtkGuKs5
                                #define DEF_grow_if_oob_xxoUtkGuKs5
inline s_Target& grow_if_oob_xxoUtkGu(fu::vec<s_Target>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static s_Lifetime Lifetime_fromBinding_hcrnsi9o(const s_Target& target, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if ((target.modid < 0) || (target.modid < 0) || (target.modid == module.modid))
    {
        if (!isLocal_HC98KjW6(target))
        {
            return Lifetime_static_8nlJDPX0();
        }
        else
        {
            const int index = target.index;
            const s_Region region = Region_fromLocal_Uj5ZOr54(index);
            return s_Lifetime { fu::vec<s_Region> { fu::slate<1, s_Region> { s_Region(region) } } };
        };
    }
    else
        BUG_JWcxU72K("not from this module"_fu, ctx, module, _here, ss, _helpers);

}

                                #ifndef DEF_x3Dx3D_LnUQELnIRj8
                                #define DEF_x3Dx3D_LnUQELnIRj8
inline bool operator==(const s_Lifetime& a, const s_Lifetime& b)
{
    return !x3Cx3E_LnUQELnI(a, b);
}
                                #endif

                                #ifndef DEF_unless_oob_wfcBQ6FK3H5
                                #define DEF_unless_oob_wfcBQ6FK3H5
inline const s_Target& unless_oob_wfcBQ6FK(fu::view<s_Target> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_Target*)fu::NIL);

}
                                #endif

static int localOf_PZFCjFk6(const s_Target& target, const s_Module& module, const s_SolverState& ss)
{
    if (isLocal_HC98KjW6(target))
        return -target.modid;
    else
        return EPH_t5Sfn87m(target, module, ss).local_of;

}

inline static s_SolvedNode TODO_FIX_pop_EFWwDKIB(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static const s_Overload& GET_crossmodule_PwJIgzg5(const s_Target& target, const s_Target& _current_fnort, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    return GET_crossmodule_PeOnLpKY(target, _current_fnort, ctx, module, _here, ss, _helpers);
}

                                #ifndef DEF_has_SWM1va5blI2
                                #define DEF_has_SWM1va5blI2
inline bool has_SWM1va5b(fu::view<s_Target> a, const s_Target& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu::str qSTACK_implicit_prd0e4Te(const s_Target& target, const s_SolvedNode& node, fu::view<char> id, const s_Type& type, fu::view<s_Target> seen, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    fu::str candidates {};
    fu::vec<s_Target> seen_1 = (seen + target);

    {
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_EFWwDKIB(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_crossmodule_PwJIgzg5(node_1.target, target, ctx, module, _here, ss, _helpers).solved : node_1);

            { {
                if (node_2.kind == s_kind_let)
                {
                    const s_Target& candidate = node_2.target;
                    fu::view<char> _0 {};
                    if (!(GET_etmeeocQ(candidate, ctx, module, _here, ss, _helpers).flags & s_Flags_F_INJECTED) && (_0 = GET_etmeeocQ(candidate, ctx, module, _here, ss, _helpers).name, (static_cast<fu::view<char>&&>(_0) == id)) && isAssignableAsArgument_aTMI25ej(type, GET_etmeeocQ(candidate, ctx, module, _here, ss, _helpers).type, false))
                    {
                        const s_Overload* _1;
                        candidates += (x7E_r7bhmB7D("\n        Possible candidate in "_fu, (_1 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_1, ctx, module, _here, ss, _helpers))) + ": "_fu);
                        if (!(GET_etmeeocQ(candidate, ctx, module, _here, ss, _helpers).flags & s_Flags_F_IMPLICIT))
                            candidates += qBAD_bF2G8fJR("NOT implicit "_fu);

                        candidates += explainWhichFn_4p0QhTu9(candidate, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ctx, module, _here, ss, _helpers);
                    };
                };
                if (!((node_2.kind != s_kind_call) || isLocal_HC98KjW6(node_2.target)))
                {
                    if (!(has_SWM1va5b(seen_1, node_2.target)))
                    {

                        { {
                            fu::view<s_Argument> host_args = EXT_EOYtG69B(node_2.target, ctx, module, ss).args;
                            for (int i = 0; i < host_args.size(); i++)
                            {
                                const s_Argument& host_arg = host_args[i];
                                if ((host_arg.flags & s_Flags_F_IMPLICIT) && (host_arg.name == id) && isAssignableAsArgument_aTMI25ej(host_arg.type, type, false))
                                    goto BL_10;

                            };
                            goto BL_4;
                          } BL_10:;
                        };
                        const s_SolvedNode* _2;
                        fu::str peek = (_2 = &(GET_etmeeocQ(node_2.target, ctx, module, _here, ss, _helpers).solved), qSTACK_implicit_prd0e4Te(node_2.target, *_2, id, type, seen_1, ctx, module, _here, ss, _helpers));
                        const s_Overload* _3;
                        fu::str _4 {};
                        return ((_4 = (x7E_r7bhmB7D(("\n            "_fu + "because of call to "_fu), (_3 = &(GET_etmeeocQ(node_2.target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_3, ctx, module, _here, ss, _helpers))) + " at "_fu), (static_cast<fu::str&&>(_4) + addr_and_snippet_YNpW6K7i(node_2.token, s_CodeFmt{}, fu::view<char>{}, ctx, module))) + peek) + candidates;
                    };
                };
              } BL_4:;
            };
            for (int i = node_2.items.size(); i-- > 0; )
                stack += s_SolvedNode(node_2.items[i]);

        };
    };
    fu::view<s_Argument> host_args = EXT_EOYtG69B(target, ctx, module, ss).args;
    for (int i = 0; i < host_args.size(); i++)
    {
        const s_Argument& host_arg = host_args[i];
        if ((host_arg.flags & s_Flags_F_IMPLICIT) && (host_arg.name == id) && isAssignableAsArgument_aTMI25ej(host_arg.type, type, false))
        {
            const s_Target local = nested_YRYXainn(host_arg.local, target, module);
            return ("\n            "_fu + "because of "_fu) + explainWhichFn_4p0QhTu9(local, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ctx, module, _here, ss, _helpers);
        };
    };
    return fu::str{};
}

static s_Type intersectionType_Q5GqnPd6(fu::view<char> reason, const s_Type& a, const s_Type& b, fu::view<char> id, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    s_Type _0 {};
    fu::str _1 {};
    fu::str _2 {};
    fu::str _3 {};
    return (_0 = type_tryIntersect_mxQ2bIFx(a, b)) ? static_cast<s_Type&&>(_0) : (_3 = (_2 = ((_1 = (((id ? (qID_bF2G8fJR(id) + ": "_fu) : fu::str{}) + reason) + "Cannot intersect types: "_fu), (static_cast<fu::str&&>(_1) + humanizeType_XI6W2OpL(a, true, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))) + " & "_fu), (static_cast<fu::str&&>(_2) + humanizeType_XI6W2OpL(b, true, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), fail_pNB52ATY(static_cast<fu::str&&>(_3), fu::view<char>{}, ctx, module, _here, ss, _helpers));
}

static s_Target Binding_1ZeYZHjI(const fu::str& id, /*MOV*/ s_Type&& type, const s_Flags flags, bool& shadows, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    const fu::str& name = id;
    const int local_of = _current_fn.out.target.index;
    if (ss._root_scope)
        autoshadow_X9vjTcmU(shadows, local_of, id, ss, _current_fn);

    const s_Target target = Scope_create_LHVUyYFV(ss._scope, s_kind_var, name, (*(const s_Type*)fu::NIL), flags, s_SolverStatus{}, local_of, module);
    s_Overload& overload = GET_mut_TpIPZdoW(target, module, ss);

    {
        s_Lifetime lifetime = (is_zeroes_8KZIyCKE(type) ? Lifetime_static_8nlJDPX0() : Lifetime_fromBinding_hcrnsi9o(target, ctx, module, _here, ss, _helpers));
        type.lifetime = s_Lifetime{};
        overload.type = ((flags & s_Flags_F_MUT) ? add_mutref_SU0caH0t(static_cast<s_Type&&>(type), lifetime, _here, ctx) : add_ref_SU0caH0t(static_cast<s_Type&&>(type), lifetime, _here, ctx));
        if (is_mutref_tkXzsAAo(overload.type, _here, ctx) || (flags & s_Flags_F_ARG))
        {
            overload.type.vfacts = s_VFacts{};
        };
    };
    return target;
}

static s_SolvedNode& solved_set_F4MSv0RS(const s_Target& target, const s_SolvedNode& node, const s_Module& module, s_SolverState& ss)
{
    return (GET_mut_TpIPZdoW(target, module, ss).solved = s_SolvedNode(node));
}

static s_Target createLet_Tllir0Lc(const fu::str& id, const s_Type& type, const s_Flags flags, bool& shadows, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    const s_Target target = Binding_1ZeYZHjI(id, s_Type(type), flags, shadows, ctx, module, _here, ss, _current_fn, _helpers);
    const s_Type* _0;
    const fu::str* _1;
    s_SolvedNode ret = (_0 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).type), _1 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).name), SolvedNode_Ob5YrUkY(s_kind_let, *_0, flags, *_1, (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here));
    solved_set_F4MSv0RS(target, ret, module, ss);
    return target;
}

static s_SolvedNode createLetDef_WW1PJrri(const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_Ob5YrUkY(s_kind_letdef, t_void, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_Target injectImplicitArg_0QOeqI5B(const fu::str& id, const s_Type& type, const s_Target& becauseOf, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (!_current_fn.out.items || (_current_fn.out.flags & s_Flags_F_EXTERN))
    {
        fu::str _0 {};
        fu::str _1 {};
        const s_Overload* _2;
        fu::str _3 {};
        const s_SolvedNode* _4;
        fu::str _5 {};
        (_5 = (_3 = ((_1 = ((_0 = (("No implicit "_fu + qBAD_bF2G8fJR(id)) + ": "_fu), (static_cast<fu::str&&>(_0) + humanizeType_XI6W2OpL(type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))) + " in scope, needed to call "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_1), (_2 = &(GET_etmeeocQ(becauseOf, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_2, ctx, module, _here, ss, _helpers)))) + ":\n"_fu), (static_cast<fu::str&&>(_3) + (_4 = &(GET_etmeeocQ(becauseOf, ctx, module, _here, ss, _helpers).solved), qSTACK_implicit_prd0e4Te(becauseOf, *_4, id, type, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers)))), fail_pNB52ATY(static_cast<fu::str&&>(_5), fu::view<char>{}, ctx, module, _here, ss, _helpers));
    }
    else
    {
        for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
        {
            s_SolvedNode& arg = _current_fn.out.items.mutref(i);
            const s_Target target { arg.target };
            s_SolvedNode& arg_1 = ((arg.kind == s_kind_letdef) ? GET_mut_TpIPZdoW(target, module, ss).solved : arg);
            if ((arg_1.flags & s_Flags_F_IMPLICIT) && (arg_1.value == id))
            {
                if (arg_1.type == GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).type)
                {
                    /*MOV*/ s_Type super = intersectionType_Q5GqnPd6("Implicit argument collision: "_fu, add_ref_SU0caH0t(s_Type(type), arg_1.type.lifetime, _here, ctx), arg_1.type, id, ctx, module, _here, ss, _helpers, _current_fnort);
                    arg_1.type = super;
                    GET_mut_TpIPZdoW(target, module, ss).type = static_cast<s_Type&&>(super);
                    return (target ? target : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers));
                }
                else
                {
                    const s_Type* _6;
                    fu::str _7 {};
                    (_7 = ("injectImplicitArg: arg.type != target.type:\n\n\t    "_fu + (_6 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).type), explainTypeDiff_A4hoEuWr(arg_1.type, *_6, "<->"_fu, ctx, module, _here, ss, _helpers, _current_fnort))), BUG_JWcxU72K(static_cast<fu::str&&>(_7), ctx, module, _here, ss, _helpers));
                };
            };
        };
        bool shadows {};
        s_Flags flags = (((s_Flags_F_INJECTED | s_Flags_F_IMPLICIT) | s_Flags_F_ARG) | s_Flags_F_LAX);
        if (is_mutref_tkXzsAAo(type, _here, ctx))
            flags |= (s_Flags_F_REF | s_Flags_F_RELAXABLE_REF);

        const s_Target newArgTarget = createLet_Tllir0Lc(id, type, flags, shadows, ctx, module, _here, ss, _current_fn, _helpers);
        const int newArgIdx = (_current_fn.out.items.size() + FN_ARGS_BACK);
        /*MOV*/ s_SolvedNode newLetDef = createLetDef_WW1PJrri(newArgTarget, _here);
        _current_fn.out.items.insert(newArgIdx, static_cast<s_SolvedNode&&>(newLetDef));
        return newArgTarget;
    };
}

static void checkAssignable_zN6GOMnO(const s_Type& host, const s_Type& guest, fu::view<char> err, fu::view<char> id, const fu::str& sep, const bool asArgument, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    const s_Type* _0;
    if (!((_0 = &((host ? host : BUG_JWcxU72K("Bad host type."_fu, ctx, module, _here, ss, _helpers))), isAssignable_Ptvwgj5A(*_0, (guest ? guest : BUG_JWcxU72K("Bad guest type."_fu, ctx, module, _here, ss, _helpers)), false, asArgument))))
    {
        fu::str _1 {};
        fu::str _2 {};
        fu::str _3 {};
        fu::str _4 {};
        (_4 = (_3 = (_2 = (_1 = ((err + (id ? (" "_fu + qID_bF2G8fJR(id)) : fu::str{})) + ": "_fu), (static_cast<fu::str&&>(_1) + humanizeType_XI6W2OpL(host, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), (static_cast<fu::str&&>(_2) + (sep ? fu::str(sep) : " <- "_fu))), (static_cast<fu::str&&>(_3) + humanizeType_XI6W2OpL(guest, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), fail_pNB52ATY(static_cast<fu::str&&>(_4), fu::view<char>{}, ctx, module, _here, ss, _helpers));
    };
}

static s_SolvedNode bindImplicitArg_zbb9JXnT(const fu::str& name, const s_Type& type, const s_Target& becauseOf, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{

    {
        const s_ClosureID _ = tryParseClosureID_WIMP5mdY(name);
        if (isLocal_HC98KjW6(_.target) && (localOf_PZFCjFk6(_.target, module, ss) == _current_fn.out.target.index))
        {
            if (_.revision == EPH_t5Sfn87m(_current_fn.out.target, module, ss).revision)
            {
                if (GET_etmeeocQ(_.target, ctx, module, _here, ss, _helpers).kind == s_kind_var)
                {
                    return CallerNode_McBUm2lt("__closure"_fu, s_Target(_.target), fu::vec<s_SolvedNode>{}, fu::view<int>{}, fu::view<fu::vec<s_Target>>{}, _current_fnort, ctx, module, options, _here, ss, _notes, _current_fn, _helpers);
                }
                else
                {
                    const s_Overload* _0;
                    fu::str _1 {};
                    (_1 = x7E_r7bhmB7D("ClosureID.target is not a var: "_fu, (_0 = &(GET_etmeeocQ(_.target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_1), ctx, module, _here, ss, _helpers));
                };
            }
            else
            {
                const s_Overload* _2;
                fu::str _3 {};
                fu::str _4 {};
                (_4 = (_3 = (x7E_r7bhmB7D((x7E_r7bhmB7D("ClosureID.revision mismatch: "_fu, (_2 = &(GET_etmeeocQ(_.target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_2, ctx, module, _here, ss, _helpers))) + "\n\tCaptured at: "_fu), fu::u64dec(_.revision)) + "\n\tCurrent rev: "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_3), fu::u64dec(EPH_t5Sfn87m(_current_fn.out.target, module, ss).revision))), BUG_JWcxU72K(static_cast<fu::str&&>(_4), ctx, module, _here, ss, _helpers));
            };
        };
    };
    fu::str error {};
    fu::vec<int> reorder {};
    fu::vec<fu::vec<s_Target>> conversions {};
    s_Target _5 {};
    const s_Target target = ((_5 = tryMatch__mutargs_zJaFYih8(fu::str(name), reorder, conversions, error, true, false, (*(const s_Scope*)fu::NIL), fu::view<s_SolvedNode>{}, s_Flags_F_IMPLICIT, s_Target{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort)) ? _5 : (_5 = injectImplicitArg_0QOeqI5B(name, type, becauseOf, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort)) ? _5 : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers));
    /*MOV*/ s_SolvedNode call = CallerNode_McBUm2lt("__implicit"_fu, s_Target(target), fu::vec<s_SolvedNode>{}, reorder, conversions, _current_fnort, ctx, module, options, _here, ss, _notes, _current_fn, _helpers);
    checkAssignable_zN6GOMnO(type, call.type, (("Implicit "_fu + qBAD_bF2G8fJR(name)) + " type mismatch"_fu), fu::view<char>{}, (*(const fu::str*)fu::NIL), true, ctx, module, _here, ss, _helpers, _current_fnort);
    return /*NRVO*/ call;
}

static s_Target injectForeignLocal_fd1wea1L(const s_Target& target, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).kind == s_kind_var)
    {
        const s_ClosureID noClID = tryParseClosureID_WIMP5mdY(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).name);
        if (noClID)
        {
            const s_Overload* _0;
            fu::str _1 {};
            (_1 = x7E_r7bhmB7D("injectForeignLocal: Unexpected closure-id: "_fu, (_0 = &(GET_etmeeocQ(noClID.target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_1), ctx, module, _here, ss, _helpers));
        };
    }
    else
    {
        const s_Overload* _2;
        fu::str _3 {};
        (_3 = x7E_r7bhmB7D("injectForeignLocal: trying to inject a non-var: "_fu, (_2 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_2, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_3), ctx, module, _here, ss, _helpers));
    };
    s_Target _4 {};
    unsigned _5 {};
    const s_Overload* _6;
    fu::str _7 {};
    const s_ClosureID clID = (_4 = s_Target(target), s_ClosureID { static_cast<s_Target&&>(_4), ((_5 = EPH_t5Sfn87m(parent_TCLJMIrs(target, ctx, module, _here, ss, _helpers), module, ss).revision) ? _5 : (_7 = x7E_r7bhmB7D("injectForeignLocal: About to serialize at rev 0: "_fu, (_6 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_6, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_7), ctx, module, _here, ss, _helpers))) });
    s_Type _8 {};
    return (_8 = s_Type(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).type), injectImplicitArg_0QOeqI5B(serialize_LOriaAgo(clID), static_cast<s_Type&&>(_8), target, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort));
}

static s_Target matchReplicaOrInjectForeignLocal_ldXUYscb(const s_Target& target, const s_Target& from, fu::view<s_Target> letdefReplicas, const int letdefExpect, const int minLocalIdx, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (target.modid != letdefExpect)
        BUG_JWcxU72K(("matchReplicaOrInjectForeignLocal: target.modid != letdefExpect"_fu + ", will mess up the letdefReplicas minimap."_fu), ctx, module, _here, ss, _helpers);
    else
    {
        const s_Target& replica = unless_oob_wfcBQ6FK(letdefReplicas, target.index);
        if (replica)
            return replica;
        else if (from == _current_fn.out.target)
        {
            if (target.index < minLocalIdx)
                return target;
            else
            {
                const s_Overload* _0;
                fu::str _1 {};
                (_1 = x7E_r7bhmB7D("Missing a local replica for: "_fu, (_0 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_1), ctx, module, _here, ss, _helpers));
            };
        }
        else
        {
            const s_Overload& o = GET_crossmodule_PeOnLpKY(target, from, ctx, module, _here, ss, _helpers);
            if (o.flags & s_Flags_F_IMPLICIT)
                return bindImplicitArg_zbb9JXnT(fu::str(o.name), s_Type(o.type), from, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort).target;
            else if (from.modid != module.modid)
            {
                fu::str _2 {};
                (_2 = x7E_r7bhmB7D("inlineExpression: about to use injectForeignLocal with an off-module target: "_fu, str_1mm3y0E0(o, ctx, module, _here, ss, _helpers)), BUG_JWcxU72K(static_cast<fu::str&&>(_2), ctx, module, _here, ss, _helpers));
            }
            else
                return injectForeignLocal_fd1wea1L(target, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);

        };
    };
}

                                #ifndef DEF_unless_oob_3pb0fFNyBs7
                                #define DEF_unless_oob_3pb0fFNyBs7
inline const s_Helpers& unless_oob_3pb0fFNy(fu::view<s_Helpers> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_Helpers*)fu::NIL);

}
                                #endif

                                #ifndef DEF_only_fLVI01Cfxkf
                                #define DEF_only_fLVI01Cfxkf
inline const s_SolvedNode& only_fLVI01Cf(fu::view<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_r7bhmB7D("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static const s_Type& Lifetime_climbType_Fa4fH9yF(const s_Overload& o, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (o.kind == s_kind_var)
    {
        const s_SolvedNode& node = o.solved;
        if (is_ref_vcLGyw8p(node.type) && !(o.flags & s_Flags_F_ARG))
            return node.items[LET_INIT].type;
        else
            return (*(const s_Type*)fu::NIL);

    }
    else
    {
        fu::str _0 {};
        (_0 = x7E_r7bhmB7D("Lifetime_climbType: not a `var`: "_fu, str_1mm3y0E0(o, ctx, module, _here, ss, _helpers)), BUG_JWcxU72K(static_cast<fu::str&&>(_0), ctx, module, _here, ss, _helpers));
    };
}

static bool Lifetime_allowsMutrefReturn_SvgzT2ei(const s_Lifetime& lifetime, const int locals_start, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;
        else
        {
            if (!(Region_isTemp_28foEZVg(r)))
            {
                const s_Target t = nested_YRYXainn(Region_toLocal_28foEZVg(r), _current_fnort, module);
                if (is_mutref_tkXzsAAo(GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).type, _here, ctx))
                {
                    if ((GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).kind == s_kind_var) && !(GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).flags & s_Flags_F_REF))
                        return false;
                    else
                    {
                        const s_Overload* _0;
                        const s_Type& init = (_0 = &(GET_etmeeocQ(t, ctx, module, _here, ss, _helpers)), Lifetime_climbType_Fa4fH9yF(*_0, ctx, module, _here, ss, _helpers));
                        if (!Lifetime_allowsMutrefReturn_SvgzT2ei(init.lifetime, locals_start, ctx, module, _here, ss, _helpers, _current_fnort))
                            return false;

                    };
                }
                else
                {
                    const s_Overload* _1;
                    fu::str _2 {};
                    (_2 = x7E_r7bhmB7D("Checking for mutref-return-ok found non-mutref: "_fu, (_1 = &(GET_etmeeocQ(t, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_1, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_2), ctx, module, _here, ss, _helpers));
                };
            };
        };
    };
    return true;
}

static s_Type superType_neverOK_vBOtoAZk(fu::view<char> reason, const s_Type& a, const s_Type& b, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (is_never_8KZIyCKE(a))
        return s_Type(b);
    else if (is_never_8KZIyCKE(b))
        return s_Type(a);
    else
    {
        return superType_gCDGWKHo(reason, a, b, fu::view<char>{}, ctx, module, _here, ss, _helpers, _current_fnort);
    };
}

static void reportReturnType_Np5I4bmr(const s_Helpers& h, const s_Type& type, const bool NICEERR_missingReturn, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ s_Type type_1 = ((is_mutref_tkXzsAAo(type, _here, ctx) && !Lifetime_allowsMutrefReturn_SvgzT2ei(type.lifetime, ss._helpers_data[h.index].locals_start, ctx, module, _here, ss, _helpers, _current_fnort)) ? clear_mutref_57qzYcmt(s_Type(type)) : s_Type(type));
    /*MOV*/ s_Type type_2 = (is_ref2temp_4LT7MLM3(type_1) ? clear_refs_57qzYcmt(static_cast<s_Type&&>(type_1)) : static_cast<s_Type&&>(type_1));
    if (ss._helpers_data[h.index].ret_expect)
    {
        checkAssignable_zN6GOMnO(ss._helpers_data[h.index].ret_expect, type_2, "Actual return type does not match annotation"_fu, fu::view<char>{}, (*(const fu::str*)fu::NIL), false, ctx, module, _here, ss, _helpers, _current_fnort);
    };
    ss._helpers_data.mutref(h.index).ret_actual = (ss._helpers_data[h.index].ret_actual ? superType_neverOK_vBOtoAZk((NICEERR_missingReturn ? "Missing final return: "_fu : "Subsequent return: "_fu), ss._helpers_data[h.index].ret_actual, type_2, ctx, module, _here, ss, _helpers, _current_fnort) : static_cast<s_Type&&>(type_2));
    if (!(ss._helpers_data[h.index].ret_actual))
        BUG_JWcxU72K("reportReturnType: no ret_actual."_fu, ctx, module, _here, ss, _helpers);

}

static s_SolvedNode createJump_0b4ltlqy(const s_Helpers& h, const s_SolvedNode& expr, const s_TokenIdx& _here)
{
    return SolvedNode_Ob5YrUkY(s_kind_jump, t_never, s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, h, _here);
}

static s_SolvedNode solveJump_finish_bj5IrUVC(const s_Flags flags, const s_SolvedNode& expr, const s_Helpers& h, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    ss._helpers_data.mutref(h.index).mask |= s_HelpersMask_HM_LabelUsed;
    reportReturnType_Np5I4bmr(h, expr.type, !!(flags & s_Flags_F_IMPLICIT), ctx, module, _here, ss, _helpers, _current_fnort);
    return createJump_0b4ltlqy(h, expr, _here);
}

                                #ifndef DEF_add_ys5ADtDpSIk
                                #define DEF_add_ys5ADtDpSIk
inline bool add_ys5ADtDp(fu::vec<int>& keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_AsFD7H8N(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, item);
    return true;
}
                                #endif

                                #ifndef DEF_add_QGbB36XzIQi
                                #define DEF_add_QGbB36XzIQi
inline void add_QGbB36Xz(fu::vec<s_Region>& a, fu::view<s_Region> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        const int cmp = x3Cx3E_gKq3fKpB(X, Y);
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

                                #ifndef DEF_Region_STATIC
                                #define DEF_Region_STATIC
extern const s_Region Region_STATIC;
                                #endif

                                #ifndef DEF_add_tGQOAQFDT6k
                                #define DEF_add_tGQOAQFDT6k
inline bool add_tGQOAQFD(fu::vec<s_Region>& keys, const s_Region& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gKq3fKpB(keys[i], item);
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

static void visitType_AOLtWKG1(s_Type& type, const s_Target& from, fu::view<s_Target> letdefReplicas, const int letdefExpect, const int minLocalIdx, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    fu::vec<s_Region>& regions = type.lifetime.uni0n;
    fu::vec<s_Region> replacements {};
    for (int i = 0; i < regions.size(); i++)
    {
        const int index = Region_asLocal_AEPMcxRF(regions[i]);
        if (index)
        {
            const s_Target target = nested_J0V7rPI4(index, from, module);
            const s_Target local = matchReplicaOrInjectForeignLocal_ldXUYscb(target, from, letdefReplicas, letdefExpect, minLocalIdx, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            if (GET_etmeeocQ(local, ctx, module, _here, ss, _helpers).flags & s_Flags_F_INLINE)
            {
                const s_SolvedNode* _0;
                const s_SolvedNode& init = (*(_0 = &(GET_etmeeocQ(local, ctx, module, _here, ss, _helpers).solved.items[LET_INIT])) ? *_0 : BUG_JWcxU72K("inlineExpression: F_INLINE local has no LET_INIT."_fu, ctx, module, _here, ss, _helpers));
                add_QGbB36Xz(replacements, (init.type.lifetime ? s_Lifetime(init.type.lifetime) : Lifetime_temporary_8nlJDPX0()).uni0n);
            }
            else
            {
                s_Region r { Region_STATIC };
                if (isLocal_HC98KjW6(local))
                {
                    if (local.modid == -_current_fn.out.target.index)
                        r = Region_fromLocal_Uj5ZOr54(local.index);
                    else
                    {
                        const s_Overload* _1;
                        fu::str _2 {};
                        (_2 = x7E_r7bhmB7D("visitTypes: cant express lifetime to out-of-frame locals: "_fu, (_1 = &(GET_etmeeocQ(local, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_1, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_2), ctx, module, _here, ss, _helpers));
                    };
                };
                add_tGQOAQFD(replacements, r);
            };
            regions.splice(i, 1);
            i--;
        };
    };
    add_QGbB36Xz(regions, replacements);
}

static void visitNode_lcEHMgtc(s_SolvedNode& expr, const int locals_start, const s_Target& from, fu::vec<s_Target>& letdefReplicas, const s_Target& must_not_call, const int letdefExpect, const int minLocalIdx, fu::vec<s_Helpers>& helpersReplicas, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if ((expr.kind == s_kind_block) || (expr.kind == s_kind_loop))
    {
        const s_Helpers& foreign = expr.helpers;
        if (foreign)
        {
            const s_Helpers local = push_sUG9wPGl(s_HelpersData { s_Target{}, s_SolverPass{}, fu::str{}, s_HelpersMask{}, _current_fn.out.target.index, (locals_start ? locals_start : GET_next_local_index_zHd1WF14(_current_fnort, ss, _current_fn)), s_Type{}, s_Type(expr.type), fu::vec<s_Type>{}, s_Postdom{}, s_Postdom{}, s_Helpers{} }, ss, _helpers);
            grow_if_oob_i7FZwAah(helpersReplicas, foreign.index) = s_Helpers((local ? local : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers)));
            expr.helpers = local;
        };
    };
    for (int i = 0; i < expr.items.size(); i++)
        visitNode_lcEHMgtc(expr.items.mutref(i), 0, from, letdefReplicas, must_not_call, letdefExpect, minLocalIdx, helpersReplicas, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

    if (expr.kind == s_kind_letdef)
    {
        if (expr.target.modid != letdefExpect)
            BUG_JWcxU72K("inlineExpression: letdef doesn't match letdefExpect"_fu, ctx, module, _here, ss, _helpers);
        else
        {
            s_Overload BL_8_v {};
            /*MOV*/ s_Overload foreign = (__extension__ (
            {
                const s_Overload& __partcopy_ref = GET_crossmodule_PeOnLpKY(expr.target, from, ctx, module, _here, ss, _helpers);
                BL_8_v = (s_Overload { __partcopy_ref.kind, __partcopy_ref.flags, {}, fu::str(__partcopy_ref.name), s_Type(__partcopy_ref.type), s_SolvedNode(__partcopy_ref.solved) });
            (void)0;}), static_cast<s_Overload&&>(BL_8_v));
            const s_Target local = Scope_create_LHVUyYFV(ss._scope, s_kind___no_kind_yet, (*(const fu::str*)fu::NIL), (*(const s_Type*)fu::NIL), s_Flags{}, s_SolverStatus{}, _current_fn.out.target.index, module);
            grow_if_oob_xxoUtkGu(letdefReplicas, expr.target.index) = s_Target((local ? local : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers)));
            /*MOV*/ s_Type type { foreign.type };
            if (type.lifetime == Lifetime_fromBinding_hcrnsi9o(expr.target, ctx, module, _here, ss, _helpers))
            {
                type.lifetime = Lifetime_fromBinding_hcrnsi9o(local, ctx, module, _here, ss, _helpers);
                /*MOV*/ s_SolvedNode solved { foreign.solved };
                if ((solved.kind == s_kind_let) && (solved.target == expr.target))
                {
                    solved.target = local;
                    visitNode_lcEHMgtc(solved, 0, from, letdefReplicas, must_not_call, letdefExpect, minLocalIdx, helpersReplicas, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                    GET_mut_TpIPZdoW(local, module, ss) = s_Overload { foreign.kind, (foreign.flags & ~s_Flags_F_ARG), s_SolverStatus{}, static_cast<fu::str&&>(foreign.name), static_cast<s_Type&&>(type), static_cast<s_SolvedNode&&>(solved) };
                    expr.target = local;
                }
                else
                {
                    BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
                };
            }
            else
            {
                BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
            };
        };
    }
    else if (expr.kind == s_kind_call)
    {
        if (isLocal_HC98KjW6(expr.target))
        {
            const s_Target local = matchReplicaOrInjectForeignLocal_ldXUYscb(expr.target, from, letdefReplicas, letdefExpect, minLocalIdx, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

            {
                const s_Overload& foreign = GET_crossmodule_PeOnLpKY(expr.target, from, ctx, module, _here, ss, _helpers);
                if (!(isAssignable_Ptvwgj5A(foreign.type, GET_etmeeocQ(local, ctx, module, _here, ss, _helpers).type, false, false)))
                {
                    fu::str _0 {};
                    fu::str _1 {};
                    const s_Type* _2;
                    fu::str _3 {};
                    (_3 = (_1 = ((_0 = ((x7E_r7bhmB7D("matchReplicaOrInjectForeignLocal botched the type of "_fu, str_1mm3y0E0(foreign, ctx, module, _here, ss, _helpers)) + ":\n"_fu) + "\n\t\tExpect: "_fu), (static_cast<fu::str&&>(_0) + humanizeType_XI6W2OpL(foreign.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))) + "\n\t\tActual: "_fu), (static_cast<fu::str&&>(_1) + (_2 = &(GET_etmeeocQ(local, ctx, module, _here, ss, _helpers).type), humanizeType_XI6W2OpL(*_2, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)))), BUG_JWcxU72K(static_cast<fu::str&&>(_3), ctx, module, _here, ss, _helpers));
                };
            };
            expr.target = local;
            GET_mut_TpIPZdoW(local, module, ss).status |= s_SolverStatus_SS_MATCHED;
            expr.type.vfacts = GET_etmeeocQ(local, ctx, module, _here, ss, _helpers).type.vfacts;
        }
        else if (expr.target == must_not_call)
        {
            const s_Overload* _4;
            fu::str _5 {};
            (_5 = x7E_r7bhmB7D("Cannot inline self-recursive fns: "_fu, (_4 = &(GET_etmeeocQ(expr.target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_4, ctx, module, _here, ss, _helpers))), fail_pNB52ATY(static_cast<fu::str&&>(_5), fu::view<char>{}, ctx, module, _here, ss, _helpers));
        };
    }
    else if ((expr.kind == s_kind_jump) || (expr.kind == s_kind___far_jump))
    { {
        if (expr.kind == s_kind_jump)
        {
            const s_Helpers& foreign = expr.helpers;
            const s_Helpers& local = unless_oob_3pb0fFNy(helpersReplicas, foreign.index);
            if (local)
            {
                expr.helpers = local;
                ss._helpers_data.mutref(local.index).mask |= s_HelpersMask_HM_LabelUsed;
                goto BL_18;
            }
            else
                expr.kind = s_kind___far_jump;

        };
        const s_HelpersData* BL_22_v;
        if ((__extension__ (
        {
            const s_Helpers& h = expr.helpers;
            BL_22_v = &(ss._helpers_data[h.index]);
        (void)0;}), *BL_22_v).local_of == _current_fn.out.target.index)
            expr = solveJump_finish_bj5IrUVC(expr.flags, only_fLVI01Cf(expr.items), expr.helpers, ctx, module, _here, ss, _helpers, _current_fnort);
        else
        {
            const s_HelpersData* BL_25_v;
            add_ys5ADtDp(_current_fn.effects.far_jumps, (__extension__ (
            {
                const s_Helpers& h = expr.helpers;
                BL_25_v = &(ss._helpers_data[h.index]);
            (void)0;}), *BL_25_v).local_of);
        };
      } BL_18:;
    };
    visitType_AOLtWKG1(expr.type, from, letdefReplicas, letdefExpect, minLocalIdx, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    if (expr.kind == s_kind_call)
    {
        if (isLocal_HC98KjW6(expr.target) && (GET_etmeeocQ(expr.target, ctx, module, _here, ss, _helpers).flags & s_Flags_F_INLINE))
        {
            const s_SolvedNode* _6;
            expr = (*(_6 = &(GET_etmeeocQ(expr.target, ctx, module, _here, ss, _helpers).solved.items[LET_INIT])) ? *_6 : BUG_JWcxU72K("inlineExpression: F_INLINE local has no LET_INIT."_fu, ctx, module, _here, ss, _helpers));
        };
    }
    else if (expr.helpers)
    {
        if ((expr.kind == s_kind_block) || (expr.kind == s_kind_loop))
        {
            const s_HelpersData* BL_30_v;
            if ((__extension__ (
            {
                const s_Helpers& h = expr.helpers;
                BL_30_v = &(ss._helpers_data[h.index]);
            (void)0;}), *BL_30_v).ret_actual)
            {
                s_Type ret_actual {};
                s_HelpersData* BL_32_v;
                std::swap(ret_actual, (__extension__ (
                {
                    const s_Helpers& h = expr.helpers;
                    BL_32_v = &(ss._helpers_data.mutref(h.index));
                (void)0;}), *BL_32_v).ret_actual);
                visitType_AOLtWKG1(ret_actual, from, letdefReplicas, letdefExpect, minLocalIdx, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                s_HelpersData* BL_33_v;
                std::swap(ret_actual, (__extension__ (
                {
                    const s_Helpers& h = expr.helpers;
                    BL_33_v = &(ss._helpers_data.mutref(h.index));
                (void)0;}), *BL_33_v).ret_actual);
            };
        }
        else if ((expr.kind != s_kind_jump) && (expr.kind != s_kind___far_jump))
            BUG_JWcxU72K(x7E_r7bhmB7D("inlineExpression: TODO handle .helpers on a "_fu, str_k2hK9UHj(expr.kind)), ctx, module, _here, ss, _helpers);

    };
}

static s_SolvedNode inlineExpression_Uddc21RG(const s_Target& from, /*MOV*/ s_SolvedNode&& expr, fu::vec<s_Target>&& letdefReplicas, const int locals_start, const s_Target& must_not_call, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (from)
    {

        {
            const int helpers0 = _helpers.size();
            fu_DEFER(_helpers.shrink(helpers0));
            const int letdefExpect = -from.index;
            const int minLocalIdx = GET_next_local_index_zHd1WF14(_current_fnort, ss, _current_fn);
            fu::vec<s_Helpers> helpersReplicas {};
            visitNode_lcEHMgtc(expr, locals_start, from, letdefReplicas, must_not_call, letdefExpect, minLocalIdx, helpersReplicas, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        };
        return static_cast<s_SolvedNode&&>(expr);
    }
    else
        BUG_JWcxU72K("TODO inlining from global scope, never happened before, might work, remove assert as needed."_fu, ctx, module, _here, ss, _helpers);

}

static s_SolvedNode deadCall_CiiEWcui(const fu::vec<s_SolvedNode>& args, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, const s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers)
{

    {
        const s_SolverNotes note = s_SolverNotes_N_DeadCall;
        if (note & options.break_notes)
        {
            fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
        }
        else
            _notes |= note;

    };
    return createBlock_Q2a0BBmY(t_never, fu::vec<s_SolvedNode>(args), s_Helpers{}, ctx, module, _here, ss, _helpers);
}

static void detectRecursion_MvnJrZCT(const s_Target& target, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers)
{
    s_Overload BL_1_v {};
    s_Overload overload = (__extension__ (
    {
        const s_Overload& __partcopy_ref = GET_etmeeocQ(target, ctx, module, _here, ss, _helpers);
        BL_1_v = (s_Overload { __partcopy_ref.kind, {}, __partcopy_ref.status, fu::str(__partcopy_ref.name), {}, {} });
    (void)0;}), static_cast<s_Overload&&>(BL_1_v));
    if (!(s_SolverStatus((overload.status & s_SolverStatus((s_SolverStatus_SS_FINALIZED | s_SolverStatus_SS_LAZY)))) != s_SolverStatus_SS_LAZY))
    {
        const s_SolverNotes note = ((overload.kind == s_kind_type) ? s_SolverNotes_N_TypeRecursion : s_SolverNotes_N_FnRecursion);
        const s_SolverStatus status = ((overload.kind == s_kind_type) ? s_SolverStatus_SS_TYPE_RECUR : s_SolverStatus_SS_FN_RECUR);
        for (int i = _helpers.size(); i-- > 0; )
        {
            const s_Helpers& h = _helpers[i];
            if (!(!isFnOrType_Fo3vFfbD(h, ss)))
            {
                GET_mut_TpIPZdoW(ss._helpers_data[h.index].target, module, ss).status |= status;

                {
                    const s_SolverState& ss_1 = ss;
                    fu::view<s_Helpers> _helpers_1 = _helpers;
                    if (note & options.break_notes)
                    {
                        fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module, _here, ss_1, _helpers_1);
                    }
                    else
                        _notes |= note;

                };
                if (ss._helpers_data[h.index].target == target)
                    return;

            };
        };
        BUG_JWcxU72K((x7E_r7bhmB7D((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu), str_N7InCVna(overload.status)) + ")`."_fu), ctx, module, _here, ss, _helpers);
    };
}

                                #ifndef DEF_last_Yd6Gh1JU049
                                #define DEF_last_Yd6Gh1JU049
inline s_SolvedNode& last_Yd6Gh1JU(fu::view_mut<s_SolvedNode> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static void applyRetype_NY3WS2yC(s_SolvedNode& node, const s_Type& retype, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (node.kind == s_kind_if)
    {
        s_SolvedNode* _0;
        (_0 = &(node.items.mutref(1)), applyRetype_NY3WS2yC(*_0, retype, ctx, module, _here, ss, _helpers));
        s_SolvedNode* _1;
        (_1 = &(node.items.mutref(2)), applyRetype_NY3WS2yC(*_1, retype, ctx, module, _here, ss, _helpers));
    }
    else if (node.kind == s_kind_block)
    {
        const s_HelpersData* BL_3_v;
        if ((__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_3_v = &(ss._helpers_data[h.index]);
        (void)0;}), *BL_3_v).mask & s_HelpersMask_HM_LabelUsed)
            BUG_JWcxU72K("Trying to retype a labelled block, we cant do this still."_fu, ctx, module, _here, ss, _helpers);
        else
        {
            s_SolvedNode* _2;
            (_2 = &(last_Yd6Gh1JU(node.items)), applyRetype_NY3WS2yC(*_2, retype, ctx, module, _here, ss, _helpers));
        };
    };
    node.type = retype;
}

                                #ifndef DEF_find_OIHcVRad6D9
                                #define DEF_find_OIHcVRad6D9
inline int find_OIHcVRad(fu::view<char> a, const char b, int start)
{
    start = ((start > 0) ? start : 0);
    for (int i = start; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

inline static void l_27_34_wrMiz7od(const s_Target& target, const fu::str& id, const bool shadows, s_SolverState& ss)
{
    Scope_set_EJ5xtBX6(ss._scope.items, id, target, shadows);
}

                                #ifndef DEF_unpackAddrOfFn_ZeYAoBPZ8xd
                                #define DEF_unpackAddrOfFn_ZeYAoBPZ8xd
inline void unpackAddrOfFn_ZeYAoBPZ(fu::view<char> canon, const fu::str& id, const bool shadows, s_SolverState& ss)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            const s_Mi mi = parseMi_Uqhjg5wd(offset, canon);
            l_27_34_wrMiz7od(s_Target { mi.modid, mi.index }, id, shadows, ss);
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

static void Scope_set_P3lJtLFE(const s_Target& target, const s_SolvedNode& out, const bool setScope, const bool shadows, const fu::str& id, s_SolverState& ss)
{
    if (!(!setScope))
    {
        Scope_set_E3Ir4Jje(ss._scope, id, target, shadows);
        if (out.flags & s_Flags_F_IMPLICIT)
            Scope_set_EJ5xtBX6(ss._scope.implicits, id, target, shadows);

        if (out.flags & s_Flags_F_USING)
            ss._scope.usings.push(s_Target(target));

    };
}

static s_SolvedNode createEmpty_zptVo9Nn(const s_kind kind, const s_Type& type, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_Ob5YrUkY(kind, type, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_SolvedNode solveLet_createBindingAndGetLetdef_7DwoKNVg(/*MOV*/ s_SolvedNode&& out, const fu::str& id, const bool setScope, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    if (out.kind != s_kind_let)
    {
        if (is_never_8KZIyCKE(out.type))
            return static_cast<s_SolvedNode&&>(out);
        else
            BUG_JWcxU72K((((x7E_r7bhmB7D("solveLet: results in a `"_fu, str_k2hK9UHj(out.kind)) + ": "_fu) + id) + "`."_fu), ctx, module, _here, ss, _helpers);

    }
    else
    {
        bool shadows = !!(out.flags & s_Flags_F_SHADOW);
        const s_Flags isArg = (out.flags & s_Flags_F_ARG);
        fu::str cleanID {};
        if (out.flags & s_Flags_F_COMPOUND_ID)
        {
            const int start = (find_POzvwmtf(id, '!') + 1);
            const int end = find_OIHcVRad(id, '.', ((start > 0) ? start : 0));
            cleanID = fu::slice(id, ((start > 0) ? start : 0), ((end > 0) ? end : id.size()));
            if (!(cleanID && (cleanID.size() < id.size())))
                BUG_JWcxU72K("solveLet: F_COMPOUND_ID bad cleanID."_fu, ctx, module, _here, ss, _helpers);

        };
        const fu::str& id_1 = (cleanID ? cleanID : id);
        if (isAddrOfFn_KM2rbsyR(out.type))
        {
            const bool shadows_1 = true;
            if (setScope)
                unpackAddrOfFn_ZeYAoBPZ(out.type.vtype.canon, id_1, shadows_1, ss);

        }
        else
        {
            if (!isArg && !(out.flags & (s_Flags_F_PUB | s_Flags_F_MUT)))
            {
                const s_SolvedNode& init = out.items[LET_INIT];
                if ((init.kind == s_kind_call) && !init.items)
                {
                    const s_Target& target = init.target;
                    const s_Overload& other = GET_etmeeocQ(target, ctx, module, _here, ss, _helpers);
                    if (other.kind == s_kind_var)
                    {
                        if (isAssignable_Ptvwgj5A(other.type, out.type, false, false))
                        {
                            Scope_set_P3lJtLFE(target, out, setScope, shadows, id_1, ss);
                            out = createEmpty_zptVo9Nn(s_kind_empty, t_void, target, _here);
                            return static_cast<s_SolvedNode&&>(out);
                        };
                    };
                };
            };
            const s_Target& target = (out.target = Binding_1ZeYZHjI(id_1, s_Type(out.type), out.flags, shadows, ctx, module, _here, ss, _current_fn, _helpers));
            if (!is_ref2temp_4LT7MLM3(out.type) || isArg)
            {
                solved_set_F4MSv0RS(target, out, module, ss);
                Scope_set_P3lJtLFE(target, out, setScope, shadows, id_1, ss);
                return createLetDef_WW1PJrri(target, _here);
            }
            else
                BUG_JWcxU72K("solveLet_createBindingAndGetLetdef: Non-argument is_ref2temp"_fu, ctx, module, _here, ss, _helpers);

        };
        if (isArg)
            return static_cast<s_SolvedNode&&>(out);
        else
        {
            return createEmpty_zptVo9Nn(s_kind_empty, t_void, s_Target{}, _here);
        };
    };
}

static s_SolvedNode createLet_ROVwLAOE(const fu::str& id, const s_Flags flags, const s_SolvedNode& init, const bool setScope, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ s_SolvedNode out = solveLetLike_dontTouchScope_7m9op4ZP(id, flags, s_SolvedNode(init), (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    return solveLet_createBindingAndGetLetdef_7DwoKNVg(static_cast<s_SolvedNode&&>(out), id, setScope, ctx, module, _here, ss, _current_fn, _helpers);
}

static fu::str str_JtWMSeZV(const s_SolvedNode& n, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ fu::str src = qKW_bF2G8fJR(str_k2hK9UHj(n.kind));
    if ((n.kind == s_kind_call) || (n.kind == s_kind_let) || (n.kind == s_kind_letdef))
    {
        const s_Overload* _0;
        src += (x7E_r7bhmB7D("("_fu, (_0 = &(GET_etmeeocQ(n.target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers))) + ")"_fu);
    }
    else if (n.value)
        src += (("("_fu + qID_bF2G8fJR(n.value)) + ")"_fu);

    if (n.type)
        src += (" -> "_fu + humanizeType_XI6W2OpL(n.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort));

    if (n.items.size() == 1)
    {
        src += (x7E_r7bhmB7D(" { "_fu, str_JtWMSeZV(only_fLVI01Cf(n.items), ctx, module, _here, ss, _helpers, _current_fnort)) + " }"_fu);
    }
    else if (n.items.size() > 0)
    {
        src += (x7E_r7bhmB7D(" { "_fu, fu::i64dec(n.items.size())) + " }"_fu);
    };
    return /*NRVO*/ src;
}

static s_Lifetime Lifetime_replaceArgsAtCallsite_MFray2Dn(const s_Target& target, fu::view<s_SolvedNode> argNodes, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    s_Lifetime keep {};
    /*MOV*/ s_Lifetime replace {};
    const s_Lifetime& returned = GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).type.lifetime;
    for (int i = 0; i < returned.uni0n.size(); i++)
    {
        const s_Region& region = returned.uni0n[i];
        if (Region_isStatic_28foEZVg(region))
            keep.uni0n += s_Region(region);
        else if (Region_isTemp_28foEZVg(region))
        {
            fu::view<s_Region> _0 {};
            fu::str _1 {};
            (_1 = x7E_r7bhmB7D("Lifetime_replaceArgsAtCallsite: found a temp lt in: "_fu, (_0 = GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).type.lifetime.uni0n, str_T4NUFXf9(static_cast<fu::view<s_Region>&&>(_0), ctx, module, _here, ss, _helpers, _current_fnort))), BUG_JWcxU72K(static_cast<fu::str&&>(_1), ctx, module, _here, ss, _helpers));
        }
        else
        {
            const s_SolvedNode& argNode = argNodes[Region_toArgPosition_28foEZVg(region)];
            s_Lifetime argLt = (is_ref_vcLGyw8p(argNode.type) ? s_Lifetime(argNode.type.lifetime) : Lifetime_temporary_8nlJDPX0());
            replace = Lifetime_union_xefCvVZD(replace, (argLt ? argLt : BUG_JWcxU72K("refarg without lifetime"_fu, ctx, module, _here, ss, _helpers)));
        };
    };
    if (replace)
    {
        if (keep)
        {
            return Lifetime_union_xefCvVZD(keep, replace);
        }
        else
            return /*NRVO*/ replace;

    }
    else
    {
        return s_Lifetime(returned);
    };
}

static const s_Lifetime& Lifetime_test_yNTCCzEE(const s_Lifetime& lifetime, const bool tempsOK, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (!lifetime.uni0n.size())
    {
        BUG_JWcxU72K("Lifetime_test: no region set."_fu, ctx, module, _here, ss, _helpers);
    }
    else
    {
        s_Region _last {};
        for (int i = 0; i < lifetime.uni0n.size(); i++)
        {
            const s_Region& region = lifetime.uni0n[i];
            if (!i || (x3Cx3E_gKq3fKpB(region, _last) > 0))
                _last = region;
            else
            {
                BUG_JWcxU72K("Lifetime_test: not a sorted set"_fu, ctx, module, _here, ss, _helpers);
            };
            if (!(Region_isArgPosition_28foEZVg(region)))
            {
                if (Region_isTemp_28foEZVg(region))
                {
                    if (!((i == (lifetime.uni0n.size() - 1)) && tempsOK))
                    {
                        BUG_JWcxU72K("Lifetime_test: unexpected temporary."_fu, ctx, module, _here, ss, _helpers);
                    };
                }
                else
                {
                    const int index = Region_toLocal_28foEZVg(region);
                    if (index)
                    {
                        const s_Overload& o = GET_etmeeocQ(nested_YRYXainn(index, _current_fnort, module), ctx, module, _here, ss, _helpers);
                        if (!(o.kind == s_kind_var))
                        {
                            BUG_JWcxU72K(((x7E_r7bhmB7D("Lifetime_test: local is not a var: "_fu, str_k2hK9UHj(o.kind)) + " "_fu) + o.name), ctx, module, _here, ss, _helpers);
                        };
                    };
                };
            };
        };
    };
    return lifetime;
}

static s_SolvedNode CallerNode_McBUm2lt(const fu::str& debug, s_Target&& target, /*MOV*/ fu::vec<s_SolvedNode>&& args, fu::view<int> reorder, fu::view<fu::vec<s_Target>> conversions, const s_Target& _current_fnort, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers)
{
    if (reorder)
    {
        /*MOV*/ fu::vec<s_SolvedNode> args_out {};
        args_out.resize(reorder.size());
        for (int i = 0; i < reorder.size(); i++)
        {
            const int idx = reorder[i];
            if ((idx >= 0))
                args_out.mutref(i) = steal_MN85i44z(args.mutref(idx));

        };
        args = static_cast<fu::vec<s_SolvedNode>&&>(args_out);
    };
    for (int argIdx = 0; argIdx < conversions.size(); argIdx++)
    {
        fu::view<s_Target> conversion = conversions[argIdx];
        if (applyConversion_NgnaiepD(args.mutref(argIdx), conversion, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort))
        {
            args.shrink((argIdx + 1));

            {
                const s_SolverNotes note = s_SolverNotes_N_DeadConv;
                const s_Module& module_1 = module;
                const s_SolverState& ss_1 = ss;
                fu::view<s_Helpers> _helpers_1 = _helpers;
                if (note & options.break_notes)
                {
                    fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
                }
                else
                    _notes |= note;

            };
            return createBlock_Q2a0BBmY(t_never, static_cast<fu::vec<s_SolvedNode>&&>(args), s_Helpers{}, ctx, module, _here, ss, _helpers);
        };
    };
    const int REST_START = findRestStart_pfM9smn4(EXT_EOYtG69B(target, ctx, module, ss));
    if (REST_START < args.size())
    {
        fu::vec<s_SolvedNode> rest {};
        rest.resize((args.size() - REST_START));
        for (int i = args.size(); i-- > REST_START; )
        {
            std::swap(rest.mutref((i - REST_START)), args.mutref(i));
            if (i > REST_START)
                args.splice(i, 1);
            else
                args.mutref(i) = createArrlit_1EQc3HSU(fu::vec<s_SolvedNode>(rest), (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _helpers, _current_fnort);

        };
    };
    const s_kind kind = GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).kind;
    const bool isZeroInit = ((kind == s_kind_type) ? !args.size() : false);
    if (!isZeroInit)
    {
        fu::vec<s_Argument> host_args { EXT_EOYtG69B(target, ctx, module, ss).args };
        args.resize(host_args.size());
        for (int i = 0; i < args.size(); i++)
        {
            s_Argument host_arg { host_args[i] };
            if (!args[i])
            {
                if (host_arg.dEfault)
                {
                    args.mutref(i) = inlineExpression_Uddc21RG(target, s_SolvedNode(host_arg.dEfault), fu::vec<s_Target>{}, 0, s_Target{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                }
                else if (host_arg.flags & s_Flags_F_IMPLICIT)
                    args.mutref(i) = bindImplicitArg_zbb9JXnT(host_arg.name, host_arg.type, target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                else
                {
                    fu::str _0 {};
                    (_0 = (((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + humanizeType_XI6W2OpL(host_arg.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)) + "`."_fu), BUG_JWcxU72K(static_cast<fu::str&&>(_0), ctx, module, _here, ss, _helpers));
                };
            };
            if (is_never_8KZIyCKE(args[i].type) && !(host_arg.flags & s_Flags_F_INLINE))
            {
                args.shrink((i + 1));
                return deadCall_CiiEWcui(args, ctx, module, options, _here, ss, _notes, _helpers);
            };
        };
    };
    s_Type type { GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).type };
    if (kind == s_kind_field)
    {
        const s_Type* _1;
        const s_Type* _2;
        type = (_2 = &((*(_1 = &(only_fLVI01Cf(args).type)) ? *_1 : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers))), add_refs_4HVscqUr(*_2, s_Type(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).type)));
    }
    else if (kind == s_kind_var)
    {
        if (type.lifetime.uni0n.size() == 1)
        {
            if (isLocal_HC98KjW6(target) && (localOf_PZFCjFk6(target, module, ss) != _current_fn.out.target.index))
            {
                target = injectForeignLocal_fd1wea1L(target, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
                const s_Type* _3;
                fu::str _4 {};
                type = (*(_3 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).type)) ? *_3 : (_4 = ("CallerNode: !type on var "_fu + GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).name), BUG_JWcxU72K(static_cast<fu::str&&>(_4), ctx, module, _here, ss, _helpers)));
            };
            if ((target.modid < 0) || ((target.modid == module.modid) && !(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).flags & s_Flags_F_PUB)))
                GET_mut_TpIPZdoW(target, module, ss).status |= s_SolverStatus_SS_MATCHED;

        }
        else
        {
            fu::str _5 {};
            (_5 = (("CallerNode: var "_fu + GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).name) + " type.lifetime.len != 1"_fu), BUG_JWcxU72K(static_cast<fu::str&&>(_5), ctx, module, _here, ss, _helpers));
        };
    }
    else
    {
        if (target.modid == module.modid)
        {
            if ((kind == s_kind_fn) || (kind == s_kind_type) || (kind == s_kind_inline))
            {
                int _6 {};
                if ((_6 = _current_fnort.index, add_ys5ADtDp(EPH_mut_5Rks4Tyc(target, module, ss).callers, _6)))
                    add_ys5ADtDp(EPH_mut_5Rks4Tyc(_current_fnort, module, ss).calls, target.index);

                detectRecursion_MvnJrZCT(target, ctx, module, options, _here, ss, _notes, _helpers);
            };
        };
        if (args)
        {
            if (kind == s_kind_type)
                type.vfacts &= s_VFacts(~s_VFacts_Typename);

            fu::view<s_Argument> _7 {};
            const s_Overload* _8;
            fu::str _9 {};
            fu::view<s_Argument> host_args = ((_7 = EXT_EOYtG69B(target, ctx, module, ss).args) ? static_cast<fu::view<s_Argument>&&>(_7) : (_9 = x7E_r7bhmB7D("CallerNode: no host args: "_fu, (_8 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_8, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_9), ctx, module, _here, ss, _helpers)));
            if (host_args.size() == args.size())
            {
                for (int i0 = 0; i0 < args.size(); i0++)
                {
                    const s_Argument& host_arg = host_args[i0];
                    s_SolvedNode& arg = args.mutref(i0);
                    if (arg.kind == s_kind_argid)
                        arg = only_fLVI01Cf(arg.items);

                    const s_Type& expect = host_arg.type;
                    s_Type retype = tryRetyping_2YiDIUlF(arg, expect, ctx, module, options, _here, ss, _helpers, _current_fnort);
                    if (retype && isAssignableAsArgument_aTMI25ej(expect, retype, false))
                        applyRetype_NY3WS2yC(arg, retype, ctx, module, _here, ss, _helpers);

                };
            }
            else
            {
                const s_Overload* _10;
                fu::str _11 {};
                (_11 = x7E_r7bhmB7D("CallerNode: host_arg.len mismatch: "_fu, (_10 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_10, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_11), ctx, module, _here, ss, _helpers));
            };
        };
        if (kind == s_kind_inline)
        {
            if ((target.modid != module.modid) || (EPH_t5Sfn87m(target, module, ss).revision > 0u))
            {
                if (!(ss.TODO_FIX_inline_safety++ < 24))
                {
                    const s_Overload* _12;
                    fu::str _13 {};
                    (_13 = x7E_r7bhmB7D("Inliner recursion, something is off: "_fu, (_12 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_12, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_13), ctx, module, _here, ss, _helpers));
                };
            }
            else
            {
                const s_Overload* _14;
                fu::str _15 {};
                (_15 = (x7E_r7bhmB7D("Inlining "_fu, (_14 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_14, ctx, module, _here, ss, _helpers))) + " at revision 0."_fu), BUG_JWcxU72K(static_cast<fu::str&&>(_15), ctx, module, _here, ss, _helpers));
            };
            fu_DEFER(ss.TODO_FIX_inline_safety--);
            if (!(s_SolverStatus((GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_FINALIZED)))) == s_SolverStatus_SS_DID_START))
            {
                fu::vec<s_SolvedNode> argdefs {};
                /*MOV*/ fu::vec<s_Target> letdefReplicas {};
                const int locals_start = GET_next_local_index_zHd1WF14(_current_fnort, ss, _current_fn);
                fu::vec<s_Argument> host_args { EXT_EOYtG69B(target, ctx, module, ss).args };
                if (host_args.size() == args.size())
                {
                    for (int i = 0; i < args.size(); i++)
                    {
                        s_Argument host_arg { host_args[i] };
                        if (!(!host_arg.local))
                        {
                            s_SolvedNode argdef = createLet_ROVwLAOE(fu::str(host_args[i].name), (((host_arg.flags & ~s_Flags_F_ARG) & ~s_Flags_F_COMPOUND_ID) | (((host_arg.flags & s_Flags_F_INJECTED) && is_mutref_tkXzsAAo(host_arg.type, _here, ctx)) ? s_Flags_F_REF : s_Flags{})), args[i], false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                            if ((argdef.kind == s_kind_empty) || (argdef.kind == s_kind_letdef))
                            {
                                if (!(argdef.target))
                                {
                                    fu::str _16 {};
                                    (_16 = x7E_r7bhmB7D("Inliner: no argdef.target: "_fu, str_JtWMSeZV(argdef, ctx, module, _here, ss, _helpers, _current_fnort)), BUG_JWcxU72K(static_cast<fu::str&&>(_16), ctx, module, _here, ss, _helpers));
                                };
                            }
                            else
                            {
                                fu::str _17 {};
                                (_17 = x7E_r7bhmB7D("Inliner: argdef neither letdef nor empty: "_fu, str_JtWMSeZV(argdef, ctx, module, _here, ss, _helpers, _current_fnort)), BUG_JWcxU72K(static_cast<fu::str&&>(_17), ctx, module, _here, ss, _helpers));
                            };
                            if ((argdef.kind != s_kind_empty) && !(GET_etmeeocQ(argdef.target, ctx, module, _here, ss, _helpers).flags & s_Flags_F_INLINE))
                                argdefs += s_SolvedNode(argdef);

                            const s_Target foreign = nested_J0V7rPI4(host_arg.local, target, module);
                            grow_if_oob_xxoUtkGu(letdefReplicas, foreign.index) = s_Target((argdef.target ? argdef.target : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers)));
                            const s_Overload& foreign_1 = GET_crossmodule_PeOnLpKY(foreign, target, ctx, module, _here, ss, _helpers);
                            if (!(isAssignable_Ptvwgj5A(foreign_1.type, GET_etmeeocQ(argdef.target, ctx, module, _here, ss, _helpers).type, false, false)))
                            {
                                fu::str _18 {};
                                fu::str _19 {};
                                const s_Type* _20;
                                fu::str _21 {};
                                (_21 = (_19 = ((_18 = ((x7E_r7bhmB7D("Inliner botching the argdef type of "_fu, str_1mm3y0E0(foreign_1, ctx, module, _here, ss, _helpers)) + ":\n"_fu) + "\n\t\tExpect: "_fu), (static_cast<fu::str&&>(_18) + humanizeType_XI6W2OpL(foreign_1.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))) + "\n\t\tActual: "_fu), (static_cast<fu::str&&>(_19) + (_20 = &(GET_etmeeocQ(argdef.target, ctx, module, _here, ss, _helpers).type), humanizeType_XI6W2OpL(*_20, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)))), BUG_JWcxU72K(static_cast<fu::str&&>(_21), ctx, module, _here, ss, _helpers));
                            };
                        };
                    };
                    const s_SolvedNode& n_body = last_fLVI01Cf(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).solved.items);
                    /*MOV*/ s_SolvedNode s_body = inlineExpression_Uddc21RG(target, s_SolvedNode(n_body), static_cast<fu::vec<s_Target>&&>(letdefReplicas), locals_start, target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                    if (argdefs)
                    {
                        if (s_body.kind)
                        {
                            if (s_body.kind != s_kind_block)
                            {
                                s_body = createBlock_Q2a0BBmY(s_body.type, (argdefs + s_body), s_Helpers{}, ctx, module, _here, ss, _helpers);
                            }
                            else
                                s_body.items.splice(0, 0, argdefs);

                        }
                        else
                            BUG_JWcxU72K("inline: no s_body.kind"_fu, ctx, module, _here, ss, _helpers);

                    };
                    return /*NRVO*/ s_body;
                }
                else
                    BUG_JWcxU72K("inline: arglen mismatch"_fu, ctx, module, _here, ss, _helpers);

            };
        };
        if (args && is_ref_vcLGyw8p(type))
        {
            s_Lifetime _22 {};
            type.lifetime = static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>((_22 = Lifetime_replaceArgsAtCallsite_MFray2Dn(target, args, ctx, module, _here, ss, _helpers, _current_fnort), Lifetime_test_yNTCCzEE(static_cast<s_Lifetime&&>(_22), true, ctx, module, _here, ss, _helpers, _current_fnort))));
        };
    };
    return SolvedNode_Ob5YrUkY(s_kind_call, type, s_Flags{}, debug, args, target, s_Helpers{}, _here);
}

static bool applyConversion_NgnaiepD(s_SolvedNode& arg, fu::view<s_Target> conversion, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    for (int i = 0; i < conversion.size(); i++)
    {
        const s_Target& t = conversion[i];
        if (EXT_EOYtG69B(t, ctx, module, ss).min || (EXT_EOYtG69B(t, ctx, module, ss).max && arg))
        {
            arg = CallerNode_McBUm2lt("__using.a"_fu, s_Target(t), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(arg) } }, fu::view<int>{}, fu::view<fu::vec<s_Target>>{}, _current_fnort, ctx, module, options, _here, ss, _notes, _current_fn, _helpers);
        }
        else if (i)
        {
            fu::str _0 {};
            (_0 = (("Bad conversion chain, non-leading nullary: `"_fu + GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).name) + "`."_fu), fail_pNB52ATY(static_cast<fu::str&&>(_0), fu::view<char>{}, ctx, module, _here, ss, _helpers));
        }
        else if (arg)
        {
            fail_pNB52ATY("Bad conversion chain, about to throw away an argnode."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers);
        }
        else
        {
            arg = CallerNode_McBUm2lt("__using.b"_fu, s_Target(t), fu::vec<s_SolvedNode>{}, fu::view<int>{}, fu::view<fu::vec<s_Target>>{}, _current_fnort, ctx, module, options, _here, ss, _notes, _current_fn, _helpers);
        };
        if (is_never_8KZIyCKE(arg.type))
            return true;

    };
    return false;
}

static void convertIfNeeded_fQFFqlKG(s_SolvedNode& actual, const s_Type& expect, fu::view<char> err, fu::view<char> id, const fu::str& sep, const bool asArgument, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (!(isAssignable_Ptvwgj5A(expect, actual.type, false, asArgument)))
    {
        fu::vec<s_Target> conv = tryConvert_K3gQKVtM(expect, true, actual.type, (*(const s_SolvedNode*)fu::NIL), (*(const s_Scope*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        if (!conv)
        {
            fu::str _0 {};
            fu::str _1 {};
            fu::str _2 {};
            fu::str _3 {};
            (_3 = (_2 = (_1 = (_0 = ((err + (id ? (" "_fu + qID_bF2G8fJR(id)) : fu::str{})) + ": "_fu), (static_cast<fu::str&&>(_0) + humanizeType_XI6W2OpL(expect, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), (static_cast<fu::str&&>(_1) + (sep ? fu::str(sep) : " <- "_fu))), (static_cast<fu::str&&>(_2) + humanizeType_XI6W2OpL(actual.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), fail_pNB52ATY(static_cast<fu::str&&>(_3), fu::view<char>{}, ctx, module, _here, ss, _helpers));
        }
        else
            applyConversion_NgnaiepD(actual, conv, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

    };
}

static s_SolvedNode solveLetLike_dontTouchScope_7m9op4ZP(const fu::str& id, s_Flags flags, /*MOV*/ s_SolvedNode&& init, const s_Type& annot, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (annot || init.type)
    {
        const bool init_isNever = is_never_8KZIyCKE(init.type);
        if (init_isNever && !(flags & (s_Flags_F_ARG | s_Flags_F_INLINE)))
        {

            {
                const s_SolverNotes note = s_SolverNotes_N_DeadLet;
                if (note & options.break_notes)
                {
                    fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
                }
                else
                    _notes |= note;

            };
            return static_cast<s_SolvedNode&&>(init);
        }
        else
        {
            if (annot && init.type && !init_isNever)
                convertIfNeeded_fQFFqlKG(init, annot, "Type annotation does not match init expression"_fu, id, " <- "_fu, !!(flags & s_Flags_F_ARG), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

            const s_Type& t_init = init.type;
            /*MOV*/ s_Type t_init_1 = (is_ref2temp_4LT7MLM3(t_init) ? clear_refs_57qzYcmt(s_Type(t_init)) : s_Type(t_init));
            if (is_mutref_tkXzsAAo(annot, _here, ctx))
                flags |= s_Flags_F_REF;

            if (flags & s_Flags_F_REF)
            {
                if (!(is_mutref_tkXzsAAo(t_init_1, _here, ctx) || (is_never_8KZIyCKE(t_init_1) && annot) || (!init && (flags & s_Flags_F_ARG))))
                {
                    fu::str _0 {};
                    fu::str _1 {};
                    (_1 = (_0 = (("`ref` variables must be initialized to a mutable reference: `"_fu + id) + "`"_fu), (static_cast<fu::str&&>(_0) + (t_init_1 ? (" = "_fu + humanizeType_XI6W2OpL(t_init_1, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)) : "."_fu))), fail_pNB52ATY(static_cast<fu::str&&>(_1), fu::view<char>{}, ctx, module, _here, ss, _helpers));
                };
            };
            s_Type t_let = ((annot && ((flags & s_Flags_F_ARG) || !t_init_1)) ? s_Type(annot) : ((is_mutref_tkXzsAAo(t_init_1, _here, ctx) && !(flags & s_Flags_F_REF)) ? clear_mutref_57qzYcmt(static_cast<s_Type&&>(t_init_1)) : static_cast<s_Type&&>(t_init_1)));
            if ((flags & s_Flags_F_ARG) && !(flags & s_Flags_F_MUT))
            {
                t_let = add_ref_SU0caH0t(s_Type(t_let), Lifetime_temporary_8nlJDPX0(), _here, ctx);
            };
            return SolvedNode_Ob5YrUkY(s_kind_let, t_let, flags, id, fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, static_cast<s_SolvedNode&&>(init) } }, s_Target{}, s_Helpers{}, _here);
        };
    }
    else
    {
        fail_pNB52ATY((("Variable declarations without type annotations must be initialized: `"_fu + id) + "`."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
    };
}

static s_SolvedNode solveLetLike_dontTouchScope_kFAvO49K(const s_Node& node, const s_Type& specType, const s_Type& primType, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const s_Node& n_annot = node.items[LET_TYPE];
    s_Type annot = ((n_annot && (n_annot.kind != s_kind_typeunion)) ? evalTypeAnnot_ctbW9IO5(n_annot, (*(const s_Map_uYRcurSQUL8*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort) : s_Type{});
    s_Flags flags = node.flags;
    if (is_mutref_tkXzsAAo(specType, _here, ctx) && !((flags & s_Flags_F_REF) || is_mutref_tkXzsAAo(annot, _here, ctx)))
        flags |= s_Flags_F_RELAXABLE_REF;

    const s_Type& annot_1 = (specType ? specType : primType ? primType : annot);
    s_Type annot_2 = ((annot_1 && (node.flags & s_Flags_F_REF)) ? add_mutref_SU0caH0t(s_Type(annot_1), Lifetime_temporary_8nlJDPX0(), _here, ctx) : s_Type(annot_1));
    const s_Node& n_init = node.items[LET_INIT];
    /*MOV*/ s_SolvedNode init = (n_init ? solveNode_A7YoMoA6(n_init, annot_2, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort) : s_SolvedNode{});
    /*MOV*/ s_SolvedNode init_1 = ((specType && init.type && !isAssignableAsArgument_aTMI25ej(specType, init.type, false)) ? s_SolvedNode{} : static_cast<s_SolvedNode&&>(init));
    _here = node.token;
    return solveLetLike_dontTouchScope_7m9op4ZP(node.value, flags, static_cast<s_SolvedNode&&>(init_1), annot_2, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
}

static s_SolvedNode solveLet_W1roIZE3(const s_Node& node, const s_Type& specType, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    s_SolvedNode out = solveLetLike_dontTouchScope_kFAvO49K(node, specType, (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    const fu::str& id = out.value;
    return solveLet_createBindingAndGetLetdef_7DwoKNVg(s_SolvedNode(out), id, true, ctx, module, _here, ss, _current_fn, _helpers);
}

                                #ifndef DEF_only_u1BvfftQbGh
                                #define DEF_only_u1BvfftQbGh
inline const s_Region& only_u1BvfftQ(fu::view<s_Region> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_r7bhmB7D("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Lifetime Lifetime_fromNative_yjG04nGm(fu::view<s_Node> sig, fu::view<s_SolvedNode> args, const s_Type& actual, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if ((sig.size() + FN_ARGS_BACK) == args.size())
    {
        const s_Node& ret = sig[(sig.size() + FN_RET_BACK)];
        bool mutref = (((ret.kind == s_kind_call) && (ret.items.size() == 1)) ? (ret.value == "&mut"_fu) : false);
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
                        fail_pNB52ATY("Ambiguous __native lifetime."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers);
                    }
                    else
                    {
                        res = GET_etmeeocQ(args[i].target, ctx, module, _here, ss, _helpers).type;
                        if (!(res.lifetime))
                        {
                            fail_pNB52ATY("Missing arg lifetime."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers);
                        };
                    };
                };
            };
            if (!mutref || res.lifetime)
                break;
            else
                mutref = false;

        };
        if (Region_asLocal_AEPMcxRF(only_u1BvfftQ(res.lifetime.uni0n)))
        {
            if (!isAssignable_Ptvwgj5A(actual, res, false, false))
            {
                return Lifetime_makeShared_lRM9WkdT(res.lifetime);
            }
            else
            {
                return static_cast<s_Lifetime&&>(res.lifetime);
            };
        }
        else
        {
            fail_pNB52ATY("Non-single-local __native lifetime."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers);
        };
    }
    else
        BUG_JWcxU72K("sig.len != args.len"_fu, ctx, module, _here, ss, _helpers);

}

                                #ifndef DEF_starts_90iSu77lC9e
                                #define DEF_starts_90iSu77lC9e
inline bool starts_90iSu77l(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_EFFECTS_output
                                #define DEF_EFFECTS_output
extern const s_FxMask EFFECTS_output;
                                #endif

                                #ifndef DEF_parse_Xs4j38EKYqh
                                #define DEF_parse_Xs4j38EKYqh
inline s_FxMask parse_Xs4j38EK(fu::view<char> v)
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

static fu::str currentFn_mustBecomeInline_ZwdoEqSr(const s_CurrentFn& _current_fn)
{
    if (_current_fn.TODO_FIX_isInline)
        return "Explicitly marked inline."_fu;
    else if (_current_fn.effects.far_jumps)
        return "Contains non-local control flow."_fu;
    else
    {
        return fu::str{};
    };
}

static fu::str CompoundArgID_outerSplice_pcsgknaw(fu::str& name, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    bool exclam = false;
    for (int i = 0; i < name.size(); i++)
    {
        const char c = name[i];
        if (c == '!')
        {
            if (exclam)
                BUG_JWcxU72K((("CompoundArgID: double bang in `"_fu + name) + "`."_fu), ctx, module, _here, ss, _helpers);
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
            };
        }
        else if (c == '.')
        {
            /*MOV*/ fu::str ret = fu::slice(name, (i + 1));
            name.shrink(i);
            return /*NRVO*/ ret;
        };
    };
    if (!exclam)
        BUG_JWcxU72K((("CompoundArgID: no `.` nor `!` in id `"_fu + name) + "`."_fu), ctx, module, _here, ss, _helpers);
    else
    {
        return fu::str{};
    };
}

static void l_27_21_vTBk58vA(const int index, fu::view<s_SolvedNode> items, s_BitSet& hard_risk, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const s_SolvedNode& other = GET_etmeeocQ(items[index].target, ctx, module, _here, ss, _helpers).solved;
    if (!TODO_FIX_isArray_DOKZ61Hc(other.type))
        add_mle9fepo(hard_risk, index);

}

                                #ifndef DEF_each_7AyeiUvcVD5
                                #define DEF_each_7AyeiUvcVD5
inline void each_7AyeiUvc(const s_BitSet& _, fu::view<s_SolvedNode> items, s_BitSet& hard_risk, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
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
                    l_27_21_vTBk58vA(((i << 3) | int(b)), items, hard_risk, ctx, module, _here, ss, _helpers);

            };
        };
    };
}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_R91TVWp1(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static bool isNoVec_yegoQ3iT(const s_Type& t, const s_Context& ctx, const s_Module& module)
{
    return is_trivial_LriKPDIk(t.vtype, ctx, module) || !(is_rx_copy_UHdpdATk(t) || is_rx_resize_UHdpdATk(t));
}

inline static void l_27_27_TsTi3Rri(const s_Target& t, int& i, s_Lifetime& lifetime, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    const s_Overload* _0;
    const s_Type& init = (_0 = &(GET_crossmodule_PwJIgzg5(t, _current_fnort, ctx, module, _here, ss, _helpers)), Lifetime_climbType_Fa4fH9yF(*_0, ctx, module, _here, ss, _helpers));
    if (!(!is_ref_vcLGyw8p(init)))
    {
        if (init.lifetime.uni0n.size())
        {
            lifetime.uni0n.splice(i, 1);
            const int N0 = lifetime.uni0n.size();
            lifetime = Lifetime_union_xefCvVZD(lifetime, init.lifetime);
            const int N1 = lifetime.uni0n.size();
            i += (N1 - N0);
        }
        else
        {
            BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
        };
    };
}

inline static void Lifetime_each_RJvLmFz8(s_Lifetime& lifetime, const int locals_start, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;
        else
        {
            if (!(Region_isTemp_28foEZVg(r)))
            {
                const s_Target t = nested_YRYXainn(Region_toLocal_28foEZVg(r), _current_fnort, module);
                l_27_27_TsTi3Rri(t, i, lifetime, ctx, module, _here, ss, _helpers, _current_fnort);
            };
        };
    };
}

static s_Lifetime Lifetime_unwind_5T70CmHN(/*MOV*/ s_Lifetime&& lifetime, const int locals_start, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    Lifetime_each_RJvLmFz8(lifetime, locals_start, ctx, module, _here, ss, _helpers, _current_fnort);
    return static_cast<s_Lifetime&&>(lifetime);
}

                                #ifndef DEF_x3Dx3D_gKq3fKpBDkd
                                #define DEF_x3Dx3D_gKq3fKpBDkd
inline bool operator==(const s_Region& a, const s_Region& b)
{
    return !x3Cx3E_gKq3fKpB(a, b);
}
                                #endif

                                #ifndef DEF_has_6Ghn5RigfKj
                                #define DEF_has_6Ghn5RigfKj
inline bool has_6Ghn5Rig(fu::view<s_Region> a, const s_Region& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu::str qSTACK_fPNxzzlv(const s_Target& target, const s_Region& region, fu::view<s_Target> seen, const s_ArgQuery query, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const s_SolvedNode* _0;
    return (_0 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).solved), qSTACK_Yv9WlDnV(target, *_0, region, seen, query, ctx, module, _here, ss, _helpers));
}

static fu::str qSTACK_84yMNGFC(const s_Target& target, const int position, fu::view<s_Target> seen, const s_ArgQuery query, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    return qSTACK_fPNxzzlv(target, Region_fromLocal_Uj5ZOr54(EXT_EOYtG69B(target, ctx, module, ss).args[position].local), seen, query, ctx, module, _here, ss, _helpers);
}

static fu::str qSTACK_Yv9WlDnV(const s_Target& target, const s_SolvedNode& node, const s_Region& region, fu::view<s_Target> seen, const s_ArgQuery query, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    fu::vec<s_Target> seen_1 = (seen + target);

    {
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_R91TVWp1(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_crossmodule_PwJIgzg5(node_1.target, target, ctx, module, _here, ss, _helpers).solved : node_1);
            if (!(node_2.kind != s_kind_call))
            {
                if (!(has_SWM1va5b(seen_1, node_2.target)))
                {
                    fu::view<s_Argument> host_args = EXT_EOYtG69B(node_2.target, ctx, module, ss).args;
                    for (int i = 0; i < host_args.size(); i++)
                    {
                        const s_Argument& host_arg = host_args[i];
                        if (query == s_ArgQuery_AQ_WhyNotNovec)
                        {
                            if (isNoVec_yegoQ3iT(host_arg.type, ctx, module))
                                continue;

                        }
                        else if (!(host_arg.flags & s_Flags_F_WRITTEN_TO))
                            continue;

                        const s_SolvedNode& arg = node_2.items[i];
                        if (!(!has_6Ghn5Rig(Lifetime_unwind_5T70CmHN(s_Lifetime(arg.type.lifetime), 0, ctx, module, _here, ss, _helpers, target).uni0n, region)))
                        {
                            fu::str peek = qSTACK_84yMNGFC(node_2.target, i, seen_1, query, ctx, module, _here, ss, _helpers);
                            if (!(!peek && (GET_etmeeocQ(node_2.target, ctx, module, _here, ss, _helpers).kind == s_kind_fn)))
                            {
                                const s_Overload* _0;
                                fu::str _1 {};
                                return (_1 = (x7E_r7bhmB7D(("\n            "_fu + "via "_fu), (_0 = &(GET_etmeeocQ(node_2.target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers))) + " at "_fu), (static_cast<fu::str&&>(_1) + addr_and_snippet_YNpW6K7i(node_2.token, s_CodeFmt{}, fu::view<char>{}, ctx, module))) + peek;
                            };
                        };
                    };
                };
            };
            for (int i = node_2.items.size(); i-- > 0; )
                stack += s_SolvedNode(node_2.items[i]);

        };
    };
    return fu::str{};
}

inline static bool l_27_22_kF0Cdqtp(const s_COWInside& cow, const s_Target& argTarget)
{
    return cow.argTarget == argTarget.index;
}

                                #ifndef DEF_some_KRtlQbOVPN0
                                #define DEF_some_KRtlQbOVPN0
inline bool some_KRtlQbOV(fu::view<s_COWInside> a, const s_Target& argTarget)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_COWInside& item = a[i];
        if (l_27_22_kF0Cdqtp(item, argTarget))
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEF_rem_tGQOAQFDT6k
                                #define DEF_rem_tGQOAQFDT6k
inline bool rem_tGQOAQFD(fu::vec<s_Region>& keys, const s_Region& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gKq3fKpB(keys[i], item);
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

static bool acceptsTempCopies_xP75sVQ4(const s_Argument& arg, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (!(arg.flags & (s_Flags_F_IMPLICIT | s_Flags_F_REF)))
        return !is_mutref_tkXzsAAo(arg.type, _here, ctx);
    else
        return false;

}

static bool willPassByValue_5bZp5K54(const s_Argument& arg, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (acceptsTempCopies_xP75sVQ4(arg, ctx, _here))
        return isPassByValue_6bkyMkO3(arg.type.vtype);
    else
        return false;

}

                                #ifndef DEF_if_only_u1BvfftQbGh
                                #define DEF_if_only_u1BvfftQbGh
inline const s_Region& if_only_u1BvfftQ(fu::view<s_Region> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return (*(const s_Region*)fu::NIL);

}
                                #endif

static s_Type ignoreLocalLts_eXzpE7U0(/*MOV*/ s_Type&& type, const s_Argument& a)
{
    if (Region_asLocal_AEPMcxRF(if_only_u1BvfftQ(a.type.lifetime.uni0n)))
    {
        type.lifetime = Lifetime_temporary_8nlJDPX0();
    };
    return static_cast<s_Type&&>(type);
}

inline static s_SolvedNode TODO_FIX_pop_qjfrYHw0(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static fu::str qSTACK_KuMhtrnj(const s_Target& target, const s_SolvedNode& node, const s_FxMask fx_mask, fu::view<s_Target> seen, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    fu::vec<s_Target> seen_1 = (seen + target);

    {
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_qjfrYHw0(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_crossmodule_PwJIgzg5(node_1.target, target, ctx, module, _here, ss, _helpers).solved : node_1);
            if (!((node_2.kind != s_kind_call) || isLocal_HC98KjW6(node_2.target)))
            {
                if (!(has_SWM1va5b(seen_1, node_2.target)))
                {
                    if (!(!s_FxMask((EXT_EOYtG69B(node_2.target, ctx, module, ss).fx_mask & fx_mask))))
                    {
                        const s_SolvedNode* _0;
                        fu::str peek = (_0 = &(GET_etmeeocQ(node_2.target, ctx, module, _here, ss, _helpers).solved), qSTACK_KuMhtrnj(node_2.target, *_0, fx_mask, seen_1, ctx, module, _here, ss, _helpers));
                        if (!(!peek && (GET_etmeeocQ(node_2.target, ctx, module, _here, ss, _helpers).kind == s_kind_fn)))
                        {
                            const s_Overload* _1;
                            fu::str _2 {};
                            return (_2 = (x7E_r7bhmB7D(("\n            "_fu + "via "_fu), (_1 = &(GET_etmeeocQ(node_2.target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_1, ctx, module, _here, ss, _helpers))) + " at "_fu), (static_cast<fu::str&&>(_2) + addr_and_snippet_YNpW6K7i(node_2.token, s_CodeFmt{}, fu::view<char>{}, ctx, module))) + peek;
                        };
                    };
                };
            };
            for (int i = node_2.items.size(); i-- > 0; )
                stack += s_SolvedNode(node_2.items[i]);

        };
    };
    return fu::str{};
}

                                #ifndef DEF_grow_if_oob_177Uu4fg8I1
                                #define DEF_grow_if_oob_177Uu4fg8I1
inline s_Warning& grow_if_oob_177Uu4fg(fu::vec<s_Warning>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

inline static bool l_27_23_2Cx6mfiB(const s_Region& r, const s_Type& retval, const s_Target& _current_fnort, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const s_Overload* _0;
    fu::str _1 {};
    fu::str _2 {};
    return Region_isArgPosition_28foEZVg(r) || Region_isStatic_28foEZVg(r) || (_2 = (_1 = (x7E_r7bhmB7D("updateScope: Non-static/non-arg leaked:\n\t"_fu, (_0 = &(Region_GET_moKQEKlj(r, ctx, module, _here, ss, _helpers, _current_fnort)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers))) + "\n\n\tIn retval lifetime:\n\t"_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_1), str_T4NUFXf9(retval.lifetime.uni0n, ctx, module, _here, ss, _helpers, _current_fnort))), BUG_JWcxU72K(static_cast<fu::str&&>(_2), ctx, module, _here, ss, _helpers));
}

                                #ifndef DEF_each_ZyJoKE6SDE6
                                #define DEF_each_ZyJoKE6SDE6
inline void each_ZyJoKE6S(fu::view<s_Region> a, const s_Type& retval, const s_Target& _current_fnort, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    for (int i = 0; i < a.size(); i++)
        l_27_23_2Cx6mfiB(a[i], retval, _current_fnort, ctx, module, _here, ss, _helpers);

}
                                #endif

static bool astChange_CJKCvzNX(const s_SolvedNode& a, const s_SolvedNode& b)
{
    if ((a.kind != b.kind) || (a.items.size() != b.items.size()))
        return true;
    else
    {
        for (int i = a.items.size(); i-- > 0; )
        {
            if (astChange_CJKCvzNX(a.items[i], b.items[i]))
                return true;

        };
        return false;
    };
}

static fu::str mangleSignature_3RnedeY0(fu::view<s_Argument> args)
{
    /*MOV*/ fu::str mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ", "_fu;

        mangle += args[i].name;
        mangle += ':';
        mangle += serializeType_CSxk94aZ(args[i].type, "mangleSignature"_fu);
    };
    return /*NRVO*/ mangle;
}

inline static fu::str mangleArgTypes_VcM3h0PQ(fu::view<s_Argument> args)
{
    /*MOV*/ fu::str mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ',';

        const s_Type& argType = args[i].type;
        if (argType)
            mangle += serializeType_CSxk94aZ(argType, "mangle[$T]"_fu);

    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
extern const unsigned RELAX_all;
                                #endif

                                #ifndef DEF_last_HNT2v2R9tlh
                                #define DEF_last_HNT2v2R9tlh
inline const s_Node& last_HNT2v2R9(fu::view<s_Node> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_last_JmX1sOIFCI5
                                #define DEF_last_JmX1sOIFCI5
inline s_Node& last_JmX1sOIF(fu::view_mut<s_Node> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static bool compare_xejVRyes(const s_SolvedNode& a, const s_SolvedNode& b, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const s_Overload& a_1 = GET_etmeeocQ(a.target, ctx, module, _here, ss, _helpers);
    const s_Overload& b_1 = GET_etmeeocQ(b.target, ctx, module, _here, ss, _helpers);
    const fu::str& an = a_1.name;
    const fu::str& bn = b_1.name;
    const s_ClosureID acid = tryParseClosureID_WIMP5mdY(an);
    const s_ClosureID bcid = tryParseClosureID_WIMP5mdY(bn);
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

static void sort_7mLs5gCM(fu::view_mut<s_SolvedNode> a, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    s_SolvedNode l {};
    s_SolvedNode r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = compare_xejVRyes(l, r, ctx, module, _here, ss, _helpers);
    return lt;
            });

}

                                #ifndef DEF_sort_rn0LIIQT95l
                                #define DEF_sort_rn0LIIQT95l
inline void sort_rn0LIIQT(fu::view_mut<s_SolvedNode> a, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    sort_7mLs5gCM(a, ctx, module, _here, ss, _helpers);
}
                                #endif

static void sortInjectedArguments_dMnJRTGh(const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    fu::view_mut<s_SolvedNode> args = fu::get_view_mut(_current_fn.out.items, 0, (_current_fn.out.items.size() + FN_ARGS_BACK));
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg = args[i];
        if (arg.target && (GET_etmeeocQ(arg.target, ctx, module, _here, ss, _helpers).flags & s_Flags_F_INJECTED))
        {
            fu::view_mut<s_SolvedNode> _0 {};
            return (_0 = fu::get_view_mut(args, i, args.size()), sort_rn0LIIQT(static_cast<fu::view_mut<s_SolvedNode>&&>(_0), ctx, module, _here, ss, _helpers));
        };
    };
}

[[noreturn]] static fu::never err_gTmVaKOB(fu::view<char> reason, const s_SolvedNode& node, const s_Overload& o, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    fu::str _0 {};
    fu::str _1 {};
    fu::str _2 {};
    (_2 = (_1 = ((_0 = x7E_r7bhmB7D(str_JtWMSeZV(node, ctx, module, _here, ss, _helpers, _current_fnort), " "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_0), str_1mm3y0E0(o, ctx, module, _here, ss, _helpers))) + ": "_fu), (static_cast<fu::str&&>(_1) + reason)), BUG_JWcxU72K(static_cast<fu::str&&>(_2), ctx, module, _here, ss, _helpers));
}

inline static fu::str mangleArgTypes_FCwbHFcy(fu::view<s_SolvedNode> args)
{
    /*MOV*/ fu::str mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ',';

        const s_Type& argType = args[i].type;
        if (argType)
            mangle += serializeType_CSxk94aZ(argType, "mangle[$T]"_fu);

    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_rem_QGbB36XzIQi
                                #define DEF_rem_QGbB36XzIQi
inline fu::vec<s_Region>& rem_QGbB36Xz(fu::vec<s_Region>& a, fu::view<s_Region> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        const int cmp = x3Cx3E_gKq3fKpB(X, Y);
        if (cmp == 0)
        {
            a.splice(x, 1);
            y++;
        }
        else if (cmp > 0)
            y++;
        else
            x++;

    };
    return a;
}
                                #endif

static void checkLt_fj8F5kRd(const s_Type& actual, fu::view<char> actualCopy, const s_SolvedNode& expect, fu::view<char> expectCopy, const s_SolvedNode& node, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (!(!is_ref_vcLGyw8p(expect.type)))
    {
        fu::vec<s_Region> tail { actual.lifetime.uni0n };
        rem_QGbB36Xz(tail, node.type.lifetime.uni0n);
        if (tail)
        {
            fu::str _0 {};
            fu::str _1 {};
            fu::str _2 {};
            fu::str _3 {};
            fu::str _4 {};
            fu::str _5 {};
            fu::str _6 {};
            fu::str _7 {};
            (_7 = (_6 = ((_5 = ((_4 = ((_3 = ((_2 = ((_1 = ((_0 = x7E_r7bhmB7D(str_JtWMSeZV(node, ctx, module, _here, ss, _helpers, _current_fnort), ": "_fu), (static_cast<fu::str&&>(_0) + actualCopy)) + " mentions a lifetime not listed in "_fu), (static_cast<fu::str&&>(_1) + expectCopy)) + ": "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_2), str_T4NUFXf9(tail, ctx, module, _here, ss, _helpers, _current_fnort))) + "\n\n\t\t"_fu), (static_cast<fu::str&&>(_3) + actualCopy)) + ":\t"_fu), (static_cast<fu::str&&>(_4) + humanizeType_XI6W2OpL(actual, true, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))) + "\n\n\t\t"_fu), (static_cast<fu::str&&>(_5) + expectCopy)) + ":\t"_fu), (static_cast<fu::str&&>(_6) + humanizeType_XI6W2OpL(expect.type, true, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), BUG_JWcxU72K(static_cast<fu::str&&>(_7), ctx, module, _here, ss, _helpers));
        };
    };
}

static void test_node_jdIq0p9e(const s_SolvedNode& node, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    for (int i = 0; i < node.items.size(); i++)
        test_node_jdIq0p9e(node.items[i], ctx, module, _here, ss, _helpers, _current_fnort);

    _here = node.token;
    unsigned BL_3_v {};
    if (is_never_8KZIyCKE(node.type) && (__extension__ (
    {
        const s_Type& type = node.type;
        BL_3_v = ((type.vtype.quals & q_USAGE));
    (void)0;}), BL_3_v))
        BUG_JWcxU72K("node.is_never but some usage bits set"_fu, ctx, module, _here, ss, _helpers);
    else
    {
        const s_kind k = node.kind;
        if (!is_ref_vcLGyw8p(node.type) == !node.type.lifetime)
        {
            if (k == s_kind_call)
            {
                const s_Overload& o = GET_etmeeocQ(node.target, ctx, module, _here, ss, _helpers);
                const s_kind k_1 = o.kind;
                fu::view<s_Argument> host_args = EXT_EOYtG69B(node.target, ctx, module, ss).args;
                fu::view<s_SolvedNode> args = node.items;
                if ((host_args.size() == args.size()) || ((k_1 == s_kind_type) && !args.size()))
                {
                    if (!((o.kind == s_kind_type) && (tryLookupUserType_LriKPDIk(o.type.vtype, ctx, module).kind == s_kind_struct)))
                    {
                        for (int i_1 = 0; i_1 < args.size(); i_1++)
                        {
                            const s_Argument& host_arg = host_args[i_1];
                            const s_SolvedNode& arg = args[i_1];
                            if (!(isIrrelevant_DOKZ61Hc(host_arg.type)))
                            {
                                if (!(isAssignableAsArgument_aTMI25ej(host_arg.type, arg.type, false)))
                                {
                                    fu::str _0 {};
                                    fu::str _1 {};
                                    (_1 = (_0 = (((x7E_r7bhmB7D("Arg #"_fu, fu::i64dec(i_1)) + ", "_fu) + qID_bF2G8fJR(human_5244l4QN(host_arg.name, ctx, module, _here, ss, _helpers))) + " not assignable to host_arg: "_fu), (static_cast<fu::str&&>(_0) + explainTypeDiff_A4hoEuWr(host_arg.type, arg.type, "<-"_fu, ctx, module, _here, ss, _helpers, _current_fnort))), err_gTmVaKOB(static_cast<fu::str&&>(_1), node, o, ctx, module, _here, ss, _helpers, _current_fnort));
                                };
                            };
                        };
                    };
                    if (o.kind != s_kind_field)
                    {
                        if (!(isAssignable_Ptvwgj5A(node.type, o.type, false, false)))
                        {
                            fu::str _2 {};
                            fu::str _3 {};
                            (_3 = (_2 = (x7E_r7bhmB7D("Return value of "_fu, str_JtWMSeZV(node, ctx, module, _here, ss, _helpers, _current_fnort)) + " not assignable to node.type: "_fu), (static_cast<fu::str&&>(_2) + explainTypeDiff_A4hoEuWr(node.type, o.type, "<-"_fu, ctx, module, _here, ss, _helpers, _current_fnort))), err_gTmVaKOB(static_cast<fu::str&&>(_3), node, o, ctx, module, _here, ss, _helpers, _current_fnort));
                        };
                    };
                }
                else
                {
                    fu::str _4 {};
                    fu::str _5 {};
                    (_5 = (_4 = ((((x7E_r7bhmB7D((x7E_r7bhmB7D("host_args.len ("_fu, fu::i64dec(host_args.size())) + ") != args.len ("_fu), fu::i64dec(args.size())) + "):"_fu) + "\n\t\t"_fu) + mangleArgTypes_FCwbHFcy(args)) + "\n\t\t"_fu), (static_cast<fu::str&&>(_4) + explainWhichFn_4p0QhTu9(node.target, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module, _here, ss, _helpers))), err_gTmVaKOB(static_cast<fu::str&&>(_5), node, o, ctx, module, _here, ss, _helpers, _current_fnort));
                };
            }
            else if (k == s_kind_let)
            {
                if (node.items.size() == 2)
                {
                    if (node.items[0])
                        BUG_JWcxU72K(x7E_r7bhmB7D("let.items[0] not empty: "_fu, str_k2hK9UHj(node.items[0].kind)), ctx, module, _here, ss, _helpers);

                }
                else
                    BUG_JWcxU72K(x7E_r7bhmB7D("let.items.len: "_fu, fu::i64dec(node.items.size())), ctx, module, _here, ss, _helpers);

            }
            else if ((k == s_kind_block) || (k == s_kind_and) || (k == s_kind_or) || (k == s_kind_if))
            {
                if (k == s_kind_block)
                {
                    checkLt_fj8F5kRd(if_last_fLVI01Cf(node.items).type, "block.tail"_fu, node, x7E_r7bhmB7D(str_k2hK9UHj(node.kind), ".type"_fu), node, ctx, module, _here, ss, _helpers, _current_fnort);
                    const s_HelpersData* BL_23_v;
                    const s_HelpersData* BL_24_v;
                    if ((__extension__ (
                    {
                        const s_Helpers& h = node.helpers;
                        BL_23_v = &(ss._helpers_data[h.index]);
                    (void)0;}), *BL_23_v).ret_actual && !s_HelpersMask(((__extension__ (
                    {
                        const s_Helpers& h = node.helpers;
                        BL_24_v = &(ss._helpers_data[h.index]);
                    (void)0;}), *BL_24_v).mask & s_HelpersMask_HM_Function)))
                    {
                        const s_HelpersData* BL_26_v;
                        checkLt_fj8F5kRd((__extension__ (
                        {
                            const s_Helpers& h = node.helpers;
                            BL_26_v = &(ss._helpers_data[h.index]);
                        (void)0;}), *BL_26_v).ret_actual, "helpers.ret_actual"_fu, node, x7E_r7bhmB7D(str_k2hK9UHj(node.kind), ".type"_fu), node, ctx, module, _here, ss, _helpers, _current_fnort);
                    };
                }
                else if ((k == s_kind_and) || (k == s_kind_or))
                {
                    if ((node.items.size() >= 2))
                    {
                        const int start = (((k == s_kind_and) && !is_mutref_tkXzsAAo(node.type, _here, ctx)) ? (node.items.size() - 1) : 0);
                        for (int i_1 = start; i_1 < node.items.size(); i_1++)
                            checkLt_fj8F5kRd(node.items[i_1].type, (x7E_r7bhmB7D(x7E_r7bhmB7D(str_k2hK9UHj(k), ".items["_fu), fu::i64dec(i_1)) + "]"_fu), node, x7E_r7bhmB7D(str_k2hK9UHj(node.kind), ".type"_fu), node, ctx, module, _here, ss, _helpers, _current_fnort);

                    }
                    else
                    {
                        fu::str _6 {};
                        fu::str _7 {};
                        (_7 = (_6 = x7E_r7bhmB7D(str_JtWMSeZV(node, ctx, module, _here, ss, _helpers, _current_fnort), ".len: "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_6), fu::i64dec(node.items.size()))), BUG_JWcxU72K(static_cast<fu::str&&>(_7), ctx, module, _here, ss, _helpers));
                    };
                }
                else if (k == s_kind_if)
                {
                    if (node.items.size() == 3)
                    {
                        if (is_never_8KZIyCKE(node.type))
                        {
                            if (is_never_8KZIyCKE(node.items[1].type))
                            {
                                if (!(is_never_8KZIyCKE(node.items[2].type)))
                                {
                                    fu::str _8 {};
                                    fu::str _9 {};
                                    (_9 = (_8 = x7E_r7bhmB7D(str_JtWMSeZV(node, ctx, module, _here, ss, _helpers, _current_fnort), " never.alt not never: "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_8), str_JtWMSeZV(node.items[2], ctx, module, _here, ss, _helpers, _current_fnort))), BUG_JWcxU72K(static_cast<fu::str&&>(_9), ctx, module, _here, ss, _helpers));
                                };
                            }
                            else
                            {
                                fu::str _10 {};
                                fu::str _11 {};
                                (_11 = (_10 = x7E_r7bhmB7D(str_JtWMSeZV(node, ctx, module, _here, ss, _helpers, _current_fnort), " never.cons not never: "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_10), str_JtWMSeZV(node.items[1], ctx, module, _here, ss, _helpers, _current_fnort))), BUG_JWcxU72K(static_cast<fu::str&&>(_11), ctx, module, _here, ss, _helpers));
                            };
                        };
                        checkLt_fj8F5kRd(node.items[1].type, "if.then"_fu, node, x7E_r7bhmB7D(str_k2hK9UHj(node.kind), ".type"_fu), node, ctx, module, _here, ss, _helpers, _current_fnort);
                        checkLt_fj8F5kRd(node.items[2].type, "if.else"_fu, node, x7E_r7bhmB7D(str_k2hK9UHj(node.kind), ".type"_fu), node, ctx, module, _here, ss, _helpers, _current_fnort);
                    }
                    else
                    {
                        fu::str _12 {};
                        fu::str _13 {};
                        (_13 = (_12 = x7E_r7bhmB7D(str_JtWMSeZV(node, ctx, module, _here, ss, _helpers, _current_fnort), ".len: "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_12), fu::i64dec(node.items.size()))), BUG_JWcxU72K(static_cast<fu::str&&>(_13), ctx, module, _here, ss, _helpers));
                    };
                };
                fu::view<s_SolvedNode> items = node.items;
                for (int i_1 = 0; i_1 < items.size(); i_1++)
                {
                    if (!(items[i_1].kind))
                    {
                        fu::str _14 {};
                        (_14 = (x7E_r7bhmB7D(x7E_r7bhmB7D(str_JtWMSeZV(node, ctx, module, _here, ss, _helpers, _current_fnort), ": No .kind on item["_fu), fu::i64dec(i_1)) + "]."_fu), BUG_JWcxU72K(static_cast<fu::str&&>(_14), ctx, module, _here, ss, _helpers));
                    };
                };
            };
        }
        else
        {
            fu::str _15 {};
            fu::str _16 {};
            (_16 = (_15 = x7E_r7bhmB7D(str_JtWMSeZV(node, ctx, module, _here, ss, _helpers, _current_fnort), ": !!ref != !!lt: "_fu), (static_cast<fu::str&&>(_15) + humanizeType_XI6W2OpL(node.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), BUG_JWcxU72K(static_cast<fu::str&&>(_16), ctx, module, _here, ss, _helpers));
        };
    };
}

static void Postdom_resetAtFnEnd_61RfVtA1(s_Postdom& postdom)
{
    postdom = s_Postdom{};
    postdom.loop_start = 1;
    postdom.snap.exitPaths = s_ExitPaths_XP_EmptyReturn;
}

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
extern const unsigned RELAX_before_bck;
                                #endif

                                #ifndef DEF_CANNOT_definit_mutrefs
                                #define DEF_CANNOT_definit_mutrefs
extern const bool CANNOT_definit_mutrefs;
                                #endif

static s_SolvedNode createBool_NTIL6Vft(const fu::str& value, s_Type&& type, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    type.vfacts = ((value == "true"_fu) ? s_VFacts_AlwaysTrue : ((value == "false"_fu) ? s_VFacts_AlwaysFalse : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers)));
    return SolvedNode_Ob5YrUkY(s_kind_bool, type, s_Flags{}, value, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode createDefinit_s19RiMA4(const s_Type& type, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (is_ref_vcLGyw8p(type))
    {
        if (is_mutref_tkXzsAAo(type, _here, ctx))
        {
            fu::str _0 {};
            (_0 = ("createDefinit: Cannot definit a mutref: "_fu + humanizeType_XI6W2OpL(type, true, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)), BUG_JWcxU72K(static_cast<fu::str&&>(_0), ctx, module, _here, ss, _helpers));
        }
        else if (!is_ref2static_4LT7MLM3(type))
        {
            fu::str _1 {};
            (_1 = ("createDefinit: Cannot definit a non-static reference: "_fu + humanizeType_XI6W2OpL(type, true, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)), BUG_JWcxU72K(static_cast<fu::str&&>(_1), ctx, module, _here, ss, _helpers));
        };
    };
    if (is_integral_6bkyMkO3(type.vtype))
    {
        return SolvedNode_Ob5YrUkY(s_kind_int, type, s_Flags{}, "0"_fu, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    }
    else if (is_floating_pt_6bkyMkO3(type.vtype))
    {
        return SolvedNode_Ob5YrUkY(s_kind_real, type, s_Flags{}, "0"_fu, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    }
    else if (is_boolean_6bkyMkO3(type.vtype))
        return createBool_NTIL6Vft("false"_fu, s_Type(type), ctx, module, _here, ss, _helpers);
    else
    {
        return SolvedNode_Ob5YrUkY(s_kind_definit, type, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    };
}

static s_SolvedNode createBlock_ZR7NaTMf(/*MOV*/ s_SolvedNode&& a, /*MOV*/ s_SolvedNode&& b, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (b.kind == s_kind_block)
    {
        b.items.unshift(static_cast<s_SolvedNode&&>(a));
        return static_cast<s_SolvedNode&&>(b);
    }
    else
    {
        return createBlock_Q2a0BBmY(b.type, fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { static_cast<s_SolvedNode&&>(a), s_SolvedNode(b) } }, s_Helpers{}, ctx, module, _here, ss, _helpers);
    };
}

static void definitWrap_nb579lmy(s_SolvedNode& node, const s_Type& slot, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (is_mutref_tkXzsAAo(slot, _here, ctx))
    {
        fu::str _0 {};
        (_0 = ("Trying to definitWrap a mutref: "_fu + humanizeType_XI6W2OpL(slot, true, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)), BUG_JWcxU72K(static_cast<fu::str&&>(_0), ctx, module, _here, ss, _helpers));
    }
    else if (is_ref_vcLGyw8p(slot) && !is_ref2static_4LT7MLM3(slot))
    {
        if (is_ref2temp_4LT7MLM3(slot))
            definitWrap_nb579lmy(node, clear_refs_57qzYcmt(s_Type(slot)), ctx, module, _here, ss, _helpers, _current_fnort);
        else
        {
            fu::str _1 {};
            (_1 = ("Trying to definitWrap a non-static reference: "_fu + humanizeType_XI6W2OpL(slot, true, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)), BUG_JWcxU72K(static_cast<fu::str&&>(_1), ctx, module, _here, ss, _helpers));
        };
    }
    else if (node.kind == s_kind_definit)
        node.type = slot;
    else
    {
        s_SolvedNode _2 {};
        s_SolvedNode _3 {};
        node = (_2 = s_SolvedNode(node), _3 = createDefinit_s19RiMA4(slot, ctx, module, _here, ss, _helpers, _current_fnort), createBlock_ZR7NaTMf(static_cast<s_SolvedNode&&>(_2), static_cast<s_SolvedNode&&>(_3), ctx, module, _here, ss, _helpers));
    };
}

static void maybeCopyOrMove_x3JkHTxN(s_SolvedNode& node, const s_Type& slot, const bool isArgument, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (!(isIrrelevant_DOKZ61Hc(slot)))
    {
        if (is_never_8KZIyCKE(slot) && (slot.vtype.quals & q_USAGE))
            BUG_JWcxU72K("maybeCopyOrMove: slot.is_never but some usage bits set"_fu, ctx, module, _here, ss, _helpers);
        else if ((slot.vtype.canon != node.type.vtype.canon) && !is_never_8KZIyCKE(node.type))
        {
            if (is_zeroes_8KZIyCKE(node.type) && !(is_mutref_tkXzsAAo(slot, _here, ctx) && CANNOT_definit_mutrefs))
                definitWrap_nb579lmy(node, slot, ctx, module, _here, ss, _helpers, _current_fnort);
            else
            {
                fu::str _0 {};
                fu::str _1 {};
                (_1 = (_0 = (("Considering copy or move for incompatible types: "_fu + humanizeType_XI6W2OpL(slot, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)) + " <- "_fu), (static_cast<fu::str&&>(_0) + humanizeType_XI6W2OpL(node.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), BUG_JWcxU72K(static_cast<fu::str&&>(_1), ctx, module, _here, ss, _helpers));
            };
        }
        else if (is_ref_vcLGyw8p(slot))
        {
            if (is_trivial_LriKPDIk(node.type.vtype, ctx, module))
            {
                if ((node.kind == s_kind_definit) && isArgument)
                    node.type = clear_refs_57qzYcmt(s_Type(node.type));

            };
        }
        else
        {
            if (!(!is_ref_vcLGyw8p(node.type)))
            {
                if (node.kind == s_kind_definit)
                    node.type = clear_refs_57qzYcmt(s_Type(node.type));
                else if (is_zeroes_8KZIyCKE(node.type))
                    definitWrap_nb579lmy(node, slot, ctx, module, _here, ss, _helpers, _current_fnort);
                else
                {
                    const s_TokenIdx here0 { _here };
                    fu_DEFER(_here = here0);
                    _here = node.token;
                    node = SolvedNode_Ob5YrUkY(s_kind_copy, clear_refs_57qzYcmt(s_Type(node.type)), s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, s_Helpers{}, _here);
                };
            };
        };
    };
}

                                #ifndef DEF_unless_oob_DgYXPTx4EOh
                                #define DEF_unless_oob_DgYXPTx4EOh
inline const s_Type& unless_oob_DgYXPTx4(fu::view<s_Type> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_Type*)fu::NIL);

}
                                #endif

static void relaxBlockVar_MOe4Wcpw(const s_Target& t, const unsigned relax_mask, const bool canDiscard, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    s_Overload BL_1_v {};
    s_Overload o = (__extension__ (
    {
        const s_Overload& __partcopy_ref = GET_etmeeocQ(t, ctx, module, _here, ss, _helpers);
        BL_1_v = (s_Overload { {}, __partcopy_ref.flags, __partcopy_ref.status, fu::str(__partcopy_ref.name), s_Type { s_ValueType { {}, fu::str(__partcopy_ref.type.vtype.canon) }, {}, {} }, s_SolvedNode { {}, {}, {}, {}, {}, {}, s_TokenIdx(__partcopy_ref.solved.token), {}, {} } });
    (void)0;}), static_cast<s_Overload&&>(BL_1_v));
    if (_current_fn)
    {
        const s_Type& usage = unless_oob_DgYXPTx4(_current_fn.relaxed.var_usage, t.index);
        const bool isUnused = !usage;
        if (isUnused && !((o.flags & s_Flags_F_LAX) || s_SolverStatus((o.status & s_SolverStatus_SS_MATCHED)) || is_zeroes_8KZIyCKE(o.type)))
        {
            const s_TokenIdx token { o.solved.token };
            s_Warning& a = grow_if_oob_177Uu4fg(ss._warnings, _current_fn.out.target.index);
            if (!(a))
            {
                a = s_Warning { s_TokenIdx(token), fail_appendStack_UWVoDyaJ((((("Unused variable: "_fu + qBAD_bF2G8fJR(o.name)) + ": make it "_fu) + qKW_bF2G8fJR("lax"_fu)) + " if this is intentional."_fu), ctx, module, _here, ss, _helpers) };
            };
        };
        if (is_rx_copy_UHdpdATk(usage) && isIrrelevant_DOKZ61Hc(usage))
        {
            const s_Overload* _0;
            fu::str _1 {};
            fu::str _2 {};
            (_2 = (_1 = x7E_r7bhmB7D((_0 = &(GET_etmeeocQ(t, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers)), ": Usage is copy but no usage bits set: "_fu), (static_cast<fu::str&&>(_1) + humanizeType_XI6W2OpL(usage, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), BUG_JWcxU72K(static_cast<fu::str&&>(_2), ctx, module, _here, ss, _helpers));
        }
        else
        {
            s_Overload& o_1 = GET_mut_TpIPZdoW(t, module, ss);
            if (isUnused)
                o_1.status |= s_SolverStatus_SS_UNUSED;
            else if (o_1.status & s_SolverStatus_SS_UNUSED)
            {
                fu::str _3 {};
                fu::str _4 {};
                (_4 = (_3 = (x7E_r7bhmB7D("relaxBlockVar: previously SS_UNUSED "_fu, str_1mm3y0E0(o_1, ctx, module, _here, ss, _helpers)) + " now used as "_fu), (static_cast<fu::str&&>(_3) + humanizeType_XI6W2OpL(usage, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), BUG_JWcxU72K(static_cast<fu::str&&>(_4), ctx, module, _here, ss, _helpers));
            };
            if (isUnused && canDiscard)
                o_1.solved.type = t_void;

            try_relax_KcQXgxxc(o_1.type, usage, relax_mask);
            s_SolvedNode& node = o_1.solved;
            if (node.type)
            {
                try_relax_KcQXgxxc(node.type, usage, relax_mask);
                if (o_1.flags & s_Flags_F_MUT)
                {
                    if (is_mutref_tkXzsAAo(usage, _here, ctx))
                    {
                        /*MOV*/ s_Type type = clear_refs_57qzYcmt(s_Type(node.type));
                        node.type = static_cast<s_Type&&>(type);
                    }
                    else
                        o_1.flags &= ~s_Flags_F_MUT;

                };
                s_Overload& o_2 = GET_mut_TpIPZdoW(t, module, ss);
                if (o_2.flags & s_Flags_F_RELAXABLE_REF)
                {
                    const s_Flags strip = (s_Flags_F_RELAXABLE_REF | (!is_mutref_tkXzsAAo(usage, _here, ctx) ? s_Flags_F_REF : s_Flags{}));
                    o_2.flags &= ~strip;
                    o_2.solved.flags &= ~strip;
                };
            }
            else
                BUG_JWcxU72K("relaxBlockVar: !var.solved.type, can`t propagateType"_fu, ctx, module, _here, ss, _helpers);

        };
    };
    s_SolvedNode& node = GET_mut_TpIPZdoW(t, module, ss).solved;
    if (node.items && node.items[LET_INIT] && !(o.flags & s_Flags_F_ARG))
    {
        s_SolvedNode init {};
        std::swap(init, node.items.mutref(LET_INIT));
        propagateType_Mh9g8ikC(init, s_Type(node.type), relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        s_Overload& o_1 = GET_mut_TpIPZdoW(t, module, ss);
        s_SolvedNode& node_1 = o_1.solved;
        if (is_ref_vcLGyw8p(node_1.type) && !(node_1.flags & s_Flags_F_ARG))
        {
            node_1.type.lifetime = init.type.lifetime;
        };
        std::swap(init, node_1.items.mutref(LET_INIT));
    };
    add_mle9fepo(_current_fn.relaxed.done_relaxing, t.index);
}

                                #ifndef DEF_t_proposition
                                #define DEF_t_proposition
extern const s_Type t_proposition;
                                #endif

static bool isShallowLiteral_wVps8BlK(const s_kind kind)
{
    return (kind == s_kind_int) || (kind == s_kind_real) || (kind == s_kind_char) || (kind == s_kind_str) || (kind == s_kind_bool) || (kind == s_kind_definit);
}

static bool isDiscardable_CdTNpSbI(const s_SolvedNode& node, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (node.items)
        return false;
    else if ((node.kind == s_kind_call) || (node.kind == s_kind_letdef))
        return false;
    else if ((node.kind == s_kind_empty) || (node.kind == s_kind_block) || (node.kind == s_kind_fndef) || isShallowLiteral_wVps8BlK(node.kind))
        return true;
    else
        BUG_JWcxU72K((x7E_r7bhmB7D("TODO: isDiscardable("_fu, str_k2hK9UHj(node.kind)) + ")"_fu), ctx, module, _here, ss, _helpers);

}

                                #ifndef DEF_x3Cx3E_UGJAVwdu03a
                                #define DEF_x3Cx3E_UGJAVwdu03a
inline int x3Cx3E_UGJAVwdu(const fu::u8 a, const fu::u8 b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_S02OqI7TVq3
                                #define DEF_x3Cx3E_S02OqI7TVq3
inline int x3Cx3E_S02OqI7T(fu::view<fu::u8> a, fu::view<fu::u8> b)
{
    int cmp = x3Cx3E_AsFD7H8N(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_UGJAVwdu(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Cx3E_BHJBtZ9Rydb
                                #define DEF_x3Cx3E_BHJBtZ9Rydb
inline int x3Cx3E_BHJBtZ9R(const s_BitSet& a, const s_BitSet& b)
{

    {
        const int cmp = x3Cx3E_S02OqI7T(a._data, b._data);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_KnOZpsvgPtd
                                #define DEF_x3Cx3E_KnOZpsvgPtd
inline int x3Cx3E_KnOZpsvg(const s_ExitPaths a, const s_ExitPaths b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_Z1xTLfiinu8
                                #define DEF_x3Cx3E_Z1xTLfiinu8
inline int x3Cx3E_Z1xTLfii(const s_PostdomSnap& a, const s_PostdomSnap& b)
{

    {

        {
            const int cmp = x3Cx3E_BHJBtZ9R(a.used_again, b.used_again);
            if (cmp)
                return cmp;

        };

        {
            const int cmp = x3Cx3E_BHJBtZ9R(a.just_moved, b.just_moved);
            if (cmp)
                return cmp;

        };

        {
            const int cmp = x3Cx3E_BHJBtZ9R(a.just_used, b.just_used);
            if (cmp)
                return cmp;

        };

        {
            const int cmp = x3Cx3E_BHJBtZ9R(a.written_directly, b.written_directly);
            if (cmp)
                return cmp;

        };

        {
            const int cmp = x3Cx3E_BHJBtZ9R(a.written_indirectly, b.written_indirectly);
            if (cmp)
                return cmp;

        };

        {
            const int cmp = x3Cx3E_AsFD7H8N(a.mayEscapeVia, b.mayEscapeVia);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_KnOZpsvg(a.exitPaths, b.exitPaths);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_dbLZQIVKAK0
                                #define DEF_x3Cx3E_dbLZQIVKAK0
inline int x3Cx3E_dbLZQIVK(const s_Postdom& a, const s_Postdom& b)
{

    {

        {
            const int cmp = x3Cx3E_Z1xTLfii(a.snap, b.snap);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_AsFD7H8N(a.loop_start, b.loop_start);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_dbLZQIVKAK0
                                #define DEF_x3Dx3D_dbLZQIVKAK0
inline bool operator==(const s_Postdom& a, const s_Postdom& b)
{
    return !x3Cx3E_dbLZQIVK(a, b);
}
                                #endif

static void branch_SmdPtklL(s_Postdom& dest, const s_Postdom& src, const s_Context& ctx, const s_TokenIdx& _here)
{

    {
        dest.snap.used_again |= src.snap.used_again;
        dest.snap.just_moved |= src.snap.just_moved;
        dest.snap.just_used |= src.snap.just_used;
        dest.snap.written_directly |= src.snap.written_directly;
        dest.snap.written_indirectly |= src.snap.written_indirectly;
        dest.snap.mayEscapeVia |= src.snap.mayEscapeVia;
        dest.snap.exitPaths |= src.snap.exitPaths;
    };
    dest.loop_start = max_AsFD7H8N((dest.loop_start ? dest.loop_start : BUG_XGLZHzGg(fu::str{}, _here, ctx)), (src.loop_start ? src.loop_start : BUG_XGLZHzGg(fu::str{}, _here, ctx)));
}

                                #ifndef DEF_if_only_fLVI01Cfxkf
                                #define DEF_if_only_fLVI01Cfxkf
inline const s_SolvedNode& if_only_fLVI01Cf(fu::view<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return (*(const s_SolvedNode*)fu::NIL);

}
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

static s_SolvedNode createOr_f3YOZ9vs(fu::vec<s_SolvedNode>&& items, s_Type&& type, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (items.size() < 2)
        return s_SolvedNode(only_fLVI01Cf(items));
    else
    {
        if (!(propositionOK_tkXzsAAo(type, _here, ctx) || is_void_8KZIyCKE(type)))
        { {
            /*MOV*/ s_Type sumType {};
            bool hasNever = false;
            for (int i = items.size(); i-- > 0; )
            {
                const s_SolvedNode& item = items[i];
                if (is_never_8KZIyCKE(item.type))
                    hasNever = true;
                else if (sumType)
                {
                    sumType = type_trySuper_uwryF4aS(sumType, item.type, false);
                    if (!sumType)
                    {
                        for (int i_1 = 0; i_1 < items.size(); i_1++)
                        {
                            const s_SolvedNode& item_1 = items[i_1];
                            if (item_1.type.vtype.canon == t_bool.vtype.canon)
                            {
                                type = t_bool;
                                goto BL_3;
                            };
                        };
                        fu::str _0 {};
                        fu::str _1 {};
                        (_1 = (_0 = (("Ambiguous ||, incompatible operands in a non-bool context: "_fu + humanizeType_XI6W2OpL(item.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)) + " || "_fu), (static_cast<fu::str&&>(_0) + humanizeType_XI6W2OpL(sumType, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), fail_pNB52ATY(static_cast<fu::str&&>(_1), fu::view<char>{}, ctx, module, _here, ss, _helpers));
                    };
                }
                else
                    sumType = item.type;

            };
            if (!sumType)
                type = t_bool;
            else
                type = static_cast<s_Type&&>(sumType);

          } BL_3:;
        }
        else
            type = t_bool;

        if (is_never_8KZIyCKE(last_fLVI01Cf(items).type))
            type.vfacts = s_VFacts_AlwaysTrue;

        return SolvedNode_Ob5YrUkY(s_kind_or, type, s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
    };
}

static s_SolvedNode solveDefinit_2nzV5xHZ(const s_Type& type, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    return createDefinit_s19RiMA4(definitType_57qzYcmt(s_Type(type)), ctx, module, _here, ss, _helpers, _current_fnort);
}

static fu::str& explain_ueGfsBcE(const s_Type& a, const s_Type& b, fu::view<s_Target> chain, fu::str& error, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    fu::str _0 {};
    return (error += (_0 = (("\n\t"_fu + explainTypeDiff_A4hoEuWr(a, b, "->"_fu, ctx, module, _here, ss, _helpers, _current_fnort)) + ":"_fu), (static_cast<fu::str&&>(_0) + explainConversion_YRKhvPnB(chain, fu::view<char>{}, ctx, module, _here, ss, _helpers))));
}

static s_Type convertToSuperType_WLQzeh8P(fu::view<char> topic, s_SolvedNode& a, s_SolvedNode& b, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{

    {
        /*MOV*/ s_Type super = type_trySuper_uwryF4aS(a.type, b.type, false);
        if (super)
            return /*NRVO*/ super;

    };

    {
        s_Type aRetype = tryRetyping_2YiDIUlF(a, b.type, ctx, module, options, _here, ss, _helpers, _current_fnort);
        s_Type bRetype = tryRetyping_2YiDIUlF(b, a.type, ctx, module, options, _here, ss, _helpers, _current_fnort);
        if (aRetype)
        {
            if (bRetype)
            {
                fu::str _0 {};
                fu::str _1 {};
                fu::str _2 {};
                (_2 = (_1 = ((_0 = (topic + ": Type ambiguity, literals can be retyped both ways: "_fu), (static_cast<fu::str&&>(_0) + humanizeType_XI6W2OpL(a.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))) + " <-> "_fu), (static_cast<fu::str&&>(_1) + humanizeType_XI6W2OpL(b.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), fail_pNB52ATY(static_cast<fu::str&&>(_2), fu::view<char>{}, ctx, module, _here, ss, _helpers));
            }
            else
            {
                /*MOV*/ s_Type super = type_trySuper_uwryF4aS(aRetype, b.type, false);
                if (super)
                {
                    applyRetype_NY3WS2yC(a, aRetype, ctx, module, _here, ss, _helpers);
                    return /*NRVO*/ super;
                };
            };
        };
        if (bRetype)
        {
            /*MOV*/ s_Type super = type_trySuper_uwryF4aS(bRetype, a.type, false);
            if (super)
            {
                applyRetype_NY3WS2yC(b, bRetype, ctx, module, _here, ss, _helpers);
                return /*NRVO*/ super;
            };
        };
    };

    {
        fu::vec<s_Target> aConv = tryConvert_K3gQKVtM(b.type, true, a.type, (*(const s_SolvedNode*)fu::NIL), (*(const s_Scope*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        fu::vec<s_Target> bConv = tryConvert_K3gQKVtM(a.type, true, b.type, (*(const s_SolvedNode*)fu::NIL), (*(const s_Scope*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        if (aConv)
        {
            if (bConv)
            {
                /*MOV*/ fu::str error = (topic + ": Type ambiguity, conversions exist both ways:\n"_fu);
                explain_ueGfsBcE(a.type, b.type, aConv, error, ctx, module, _here, ss, _helpers, _current_fnort);
                explain_ueGfsBcE(b.type, a.type, bConv, error, ctx, module, _here, ss, _helpers, _current_fnort);
                fail_pNB52ATY(static_cast<fu::str&&>(error), fu::view<char>{}, ctx, module, _here, ss, _helpers);
            }
            else
            {
                applyConversion_NgnaiepD(a, aConv, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                return s_Type(b.type);
            };
        }
        else if (bConv)
        {
            applyConversion_NgnaiepD(b, bConv, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            return s_Type(a.type);
        };
    };
    fu::str _3 {};
    fu::str _4 {};
    fu::str _5 {};
    (_5 = (_4 = ((_3 = (topic + ": No common supertype: "_fu), (static_cast<fu::str&&>(_3) + humanizeType_XI6W2OpL(a.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))) + " <-> "_fu), (static_cast<fu::str&&>(_4) + humanizeType_XI6W2OpL(b.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), fail_pNB52ATY(static_cast<fu::str&&>(_5), fu::view<char>{}, ctx, module, _here, ss, _helpers));
}

static s_SolvedNode createIf_HnLK3uFo(const s_SolvedNode& cond, /*MOV*/ s_SolvedNode&& cons, /*MOV*/ s_SolvedNode&& alt, /*MOV*/ s_Type&& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (is_never_8KZIyCKE(cond.type))
        BUG_JWcxU72K("createIf: cond.is_never"_fu, ctx, module, _here, ss, _helpers);
    else
    {
        const bool cons_isNever = is_never_8KZIyCKE(cons.type);
        const bool alt_isNever = is_never_8KZIyCKE(alt.type);
        if (cons_isNever && alt_isNever)
            type = t_never;
        else if (!is_void_8KZIyCKE(type))
        {
            type = (cons_isNever ? s_Type(alt.type) : (alt_isNever ? s_Type(cons.type) : convertToSuperType_WLQzeh8P("if/else"_fu, cons, alt, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort)));
        };
        if (cond && (cond.kind != s_kind_empty))
        {
            if (cons)
            {
                if (alt)
                {
                    if (cons.kind == s_kind_empty)
                    {
                        if (alt.kind == s_kind_empty)
                        {
                            return createBlock_Q2a0BBmY(type, fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(cond) } }, s_Helpers{}, ctx, module, _here, ss, _helpers);
                        }
                        else
                        {
                            return createOr_f3YOZ9vs(fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(cond), static_cast<s_SolvedNode&&>(alt) } }, static_cast<s_Type&&>(type), ctx, module, _here, ss, _helpers, _current_fnort);
                        };
                    }
                    else if (alt.kind == s_kind_empty)
                    {
                        return createAnd_4n5O7WqG(fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(cond), static_cast<s_SolvedNode&&>(cons) } }, static_cast<s_Type&&>(type), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                    };
                }
                else
                    BUG_JWcxU72K("!alt"_fu, ctx, module, _here, ss, _helpers);

            }
            else
                BUG_JWcxU72K("!cons"_fu, ctx, module, _here, ss, _helpers);

        }
        else
            BUG_JWcxU72K("!cond || cond.empty"_fu, ctx, module, _here, ss, _helpers);

        const s_Type* _0;
        return (_0 = &((type ? type : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers))), SolvedNode_Ob5YrUkY(s_kind_if, *_0, s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(cond), static_cast<s_SolvedNode&&>(cons), static_cast<s_SolvedNode&&>(alt) } }, s_Target{}, s_Helpers{}, _here));
    };
}

static s_SolvedNode createAnd_4n5O7WqG(const fu::vec<s_SolvedNode>& items, s_Type&& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (items.size() < 2)
        return s_SolvedNode(only_fLVI01Cf(items));
    else
    {
        if (!(propositionOK_tkXzsAAo(type, _here, ctx) || is_void_8KZIyCKE(type)))
        {
            /*MOV*/ s_Type sumType {};
            for (int i = items.size(); i-- > 0; )
            {
                const s_SolvedNode& item = items[i];
                if (!(is_never_8KZIyCKE(item.type)))
                {
                    if (sumType)
                    {
                        sumType = type_trySuper_uwryF4aS(sumType, item.type, false);
                        if (!is_ref_vcLGyw8p(sumType))
                            break;

                    }
                    else
                    {
                        type = item.type;
                        sumType = item.type;
                        if (is_zeroes_8KZIyCKE(type))
                            break;

                    };
                };
            };
            if (!is_ref_vcLGyw8p(sumType))
            {
                fu::vec<s_SolvedNode> cond = fu::slice(items, 0, (items.size() - 1));
                const s_SolvedNode& cons = last_fLVI01Cf(items);
                s_SolvedNode _0 {};
                s_SolvedNode _1 {};
                s_SolvedNode _2 {};
                return (_0 = createAnd_4n5O7WqG(cond, s_Type(t_bool), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort), _1 = s_SolvedNode(cons), _2 = solveDefinit_2nzV5xHZ(type, ctx, module, _here, ss, _helpers, _current_fnort), createIf_HnLK3uFo(static_cast<s_SolvedNode&&>(_0), static_cast<s_SolvedNode&&>(_1), static_cast<s_SolvedNode&&>(_2), s_Type{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
            }
            else
                type = static_cast<s_Type&&>(sumType);

        }
        else
            type = t_bool;

        if (is_never_8KZIyCKE(last_fLVI01Cf(items).type))
            type.vfacts = s_VFacts_AlwaysFalse;

        return SolvedNode_Ob5YrUkY(s_kind_and, type, s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
    };
}

static s_SolvedNode& recover_tvzpHNSM(s_SolvedNode& node)
{
    return node.items.mutref(2);
}

static s_SolvedNode& error_3vHqxBAF(s_SolvedNode& node)
{
    return node.items.mutref(1);
}

static s_SolvedNode& attempt_zlQ5ilpm(s_SolvedNode& node)
{
    return node.items.mutref(0);
}

static void Breakable_begin_VYfRgzXf(const bool loop_PREVITER, const s_SolvedNode& node, const unsigned relax_mask, const s_Context& ctx, const s_TokenIdx& _here, s_SolverState& ss, s_CurrentFn& _current_fn)
{
    if (node.helpers)
    {
        s_HelpersData* BL_2_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_2_v = &(ss._helpers_data.mutref(h.index));
        (void)0;}), *BL_2_v).postdom = s_Postdom(_current_fn.postdom);
    };
    if (loop_PREVITER && (relax_mask == RELAX_all))
    {
        const s_HelpersData* BL_4_v;
        branch_SmdPtklL(_current_fn.postdom, (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_4_v = &(ss._helpers_data[h.index]);
        (void)0;}), *BL_4_v).loop_PREVITER, ctx, _here);
    };
}

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 5;
                                #endif

static s_SolvedNode& post_cond_PvYke1qY(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST_COND);
}

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static s_SolvedNode& post_rA2tSl12(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST);
}

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 3;
                                #endif

static s_SolvedNode& body_8L7INrcT(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_BODY);
}

                                #ifndef DEF_LOOP_PRE
                                #define DEF_LOOP_PRE
inline constexpr int LOOP_PRE = 2;
                                #endif

static s_SolvedNode& pre_SUxS24Lx(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_PRE);
}

                                #ifndef DEF_LOOP_PRE_COND
                                #define DEF_LOOP_PRE_COND
inline constexpr int LOOP_PRE_COND = 1;
                                #endif

static s_SolvedNode& pre_cond_LP9TkGvb(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_PRE_COND);
}

static void Breakable_end_c4ppKYNy(const bool loop_PREVITER, const s_SolvedNode& node, const unsigned relax_mask, const s_Context& ctx, const s_TokenIdx& _here, s_SolverState& ss, s_CurrentFn& _current_fn)
{
    if (loop_PREVITER && !(relax_mask == RELAX_all))
    {
        s_HelpersData* BL_2_v;
        s_Postdom& previter = (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_2_v = &(ss._helpers_data.mutref(h.index));
        (void)0;}), *BL_2_v).loop_PREVITER;
        previter = _current_fn.postdom;
        const s_HelpersData* BL_3_v;
        const int loop_start = (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_3_v = &(ss._helpers_data[h.index]);
        (void)0;}), *BL_3_v).locals_start;
        clear_5jPCgdrm(previter.snap.used_again, loop_start);
        clear_5jPCgdrm(previter.snap.just_moved, loop_start);
        clear_5jPCgdrm(previter.snap.just_used, loop_start);
        clear_5jPCgdrm(previter.snap.written_directly, loop_start);
        clear_5jPCgdrm(previter.snap.written_indirectly, loop_start);
    };
    if (node.helpers)
    {
        const s_HelpersData* BL_5_v;
        branch_SmdPtklL(_current_fn.postdom, (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_5_v = &(ss._helpers_data[h.index]);
        (void)0;}), *BL_5_v).postdom, ctx, _here);
    };
}

                                #ifndef DEF_grow_if_oob_1xRnmd6enRk
                                #define DEF_grow_if_oob_1xRnmd6enRk
inline s_Type& grow_if_oob_1xRnmd6e(fu::vec<s_Type>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void trackVarUsage_CAbMarlD(fu::vec<s_Type>& usage, const int index, const s_Type& slot, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (is_rx_copy_UHdpdATk(slot) && isIrrelevant_DOKZ61Hc(slot))
    {
        const s_Overload* _0;
        fu::str _1 {};
        fu::str _2 {};
        (_2 = (_1 = x7E_r7bhmB7D((_0 = &(GET_etmeeocQ(nested_YRYXainn(index, _current_fnort, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers)), ", trackVarUsage: slot is both copy & irrelevant: "_fu), (static_cast<fu::str&&>(_1) + humanizeType_XI6W2OpL(slot, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), BUG_JWcxU72K(static_cast<fu::str&&>(_2), ctx, module, _here, ss, _helpers));
    }
    else if (is_ref2temp_4LT7MLM3(slot))
    {
        const s_Overload* _3;
        fu::str _4 {};
        fu::str _5 {};
        (_5 = (_4 = x7E_r7bhmB7D((_3 = &(GET_etmeeocQ(nested_YRYXainn(index, _current_fnort, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_3, ctx, module, _here, ss, _helpers)), ", trackVarUsage: slot is ref2temp: "_fu), (static_cast<fu::str&&>(_4) + humanizeType_XI6W2OpL(slot, true, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), BUG_JWcxU72K(static_cast<fu::str&&>(_5), ctx, module, _here, ss, _helpers));
    };
    s_Type& usage_1 = grow_if_oob_1xRnmd6e(usage, index);
    if (!usage_1)
        usage_1 = slot;
    else
    {
        s_Type _6 {};
        const s_Overload* _7;
        fu::str _8 {};
        fu::str _9 {};
        usage_1 = ((_6 = type_tryIntersect_mxQ2bIFx(usage_1, slot)) ? static_cast<s_Type&&>(_6) : (_9 = (_8 = x7E_r7bhmB7D((_7 = &(GET_etmeeocQ(nested_YRYXainn(index, _current_fnort, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_7, ctx, module, _here, ss, _helpers)), ": Usage intersection failure: "_fu), (static_cast<fu::str&&>(_8) + explainTypeDiff_A4hoEuWr(usage_1, slot, "&"_fu, ctx, module, _here, ss, _helpers, _current_fnort))), BUG_JWcxU72K(static_cast<fu::str&&>(_9), ctx, module, _here, ss, _helpers)));
    };
}

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

static s_SolvedNode& init_cH91peiS(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_INIT);
}

                                #ifndef DEF_only_Yd6Gh1JU049
                                #define DEF_only_Yd6Gh1JU049
inline s_SolvedNode& only_Yd6Gh1JU(fu::view_mut<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s.mutref(0);
    else
        fu::fail(x7E_r7bhmB7D("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_UnpackedOffset field_unpackOffset_nJsQdrUW(const s_Overload& o, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (o.kind == s_kind_field)
    {
        const int packed = o.solved.helpers.index;
        return s_UnpackedOffset { (packed & 0xffff), (packed >> 16) };
    }
    else
        BUG_JWcxU72K("field_unpackOffset: Not a field."_fu, ctx, module, _here, ss, _helpers);

}

static bool trackUse_bgw2dMPe(const s_Target& t, s_BitSet& bitset, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (!add_once_mle9fepo(bitset, t.index))
        return false;
    else
    {
        const s_Overload& o = GET_etmeeocQ(t, ctx, module, _here, ss, _helpers);
        const s_SolvedNode& letNode = o.solved;
        if (is_ref_vcLGyw8p(letNode.type))
        {
            const s_Lifetime* _0;
            if (o.flags & s_Flags_F_ARG)
                return false;
            else if (!(_0 = &(Lifetime_climbType_Fa4fH9yF(o, ctx, module, _here, ss, _helpers).lifetime), trackUse_vREkq3gL(*_0, bitset, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort)))
                return false;

        };
        return (t.index >= _current_fn.postdom.loop_start);
    };
}

static bool trackUse_vREkq3gL(const s_Lifetime& lt, s_BitSet& bitset, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    bool allTrue = true;
    for (int i = 0; i < lt.uni0n.size(); i++)
    {
        const s_Region& r = lt.uni0n[i];
        if (!(Region_isTemp_28foEZVg(r)))
        {
            const int local = Region_asLocal_AEPMcxRF(r);
            if (!(local && trackUse_bgw2dMPe(nested_YRYXainn(local, _current_fnort, module), bitset, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort)))
                allTrue = false;

        };
    };
    return allTrue;
}

static bool tryTrackLastUse_pOE6hj2D(const s_Lifetime& lt, const unsigned relax_mask, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (relax_mask == RELAX_all)
        return trackUse_vREkq3gL(lt, _current_fn.postdom.snap.used_again, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
    else
        return false;

}

                                #ifndef DEF_min_AsFD7H8Nlu6
                                #define DEF_min_AsFD7H8Nlu6
inline int min_AsFD7H8N(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

static fu::str mangleArgTypes_PyMYnmjO(fu::view<s_SolvedNode> args, fu::view<int> reorder, const bool use_reorder, fu::view<fu::vec<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    /*MOV*/ fu::str mangle {};
    const int REST_END = (use_reorder ? reorder.size() : args.size());
    const int N = min_AsFD7H8N(REST_END, REST_START);
    for (int i = 0; i < N; i++)
    {
        if (i)
            mangle += ',';

        const int callsiteIndex = (use_reorder ? reorder[i] : i);
        if ((conversions.size() > i) && conversions[i].size())
            mangle += serializeType_CSxk94aZ(GET_etmeeocQ(last_i8rpRxaZ(conversions[i]), ctx, module, _here, ss, _helpers).type, "mangle.conv"_fu);
        else if ((callsiteIndex >= 0) && (callsiteIndex <= args.size()))
            mangle += serializeType_CSxk94aZ(args[callsiteIndex].type, "mangle.no-conv"_fu);

    };
    if (REST_START < REST_END)
    {
        if (REST_START)
            mangle += ',';

        mangle += serializeType_CSxk94aZ(REST_TYPE, "mangle[Nodes].rest"_fu);
    };
    return /*NRVO*/ mangle;
}

inline static void l_27_18_Hjf1eJ11(const s_Target& target, int& parent_idx, const s_Module& module, const s_SolverState& ss)
{
    if ((target.modid < 0) || (target.modid == module.modid))
    {
        const int local_of = localOf_PZFCjFk6(target, module, ss);
        if (parent_idx < local_of)
            parent_idx = local_of;

    };
}

                                #ifndef DEF_unpackAddrOfFn_0ZHiFw7CEH8
                                #define DEF_unpackAddrOfFn_0ZHiFw7CEH8
inline void unpackAddrOfFn_0ZHiFw7C(fu::view<char> canon, int& parent_idx, const s_Module& module, const s_SolverState& ss)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            const s_Mi mi = parseMi_Uqhjg5wd(offset, canon);
            l_27_18_Hjf1eJ11(s_Target { mi.modid, mi.index }, parent_idx, module, ss);
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

static s_Target trySpecialize_hUa3JVC0(const s_Target& overloadIdx, fu::view<s_SolvedNode> args, fu::str& args_mangled, const int REST_START, const s_Type& REST_TYPE, fu::view<int> reorder, const bool use_reorder, fu::view<fu::vec<s_Target>> conversions, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (!(args_mangled))
        args_mangled = mangleArgTypes_PyMYnmjO(args, reorder, use_reorder, conversions, REST_START, REST_TYPE, ctx, module, _here, ss, _helpers);

    int parent_idx = EPH_t5Sfn87m(overloadIdx, module, ss).local_of;
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg_t = args[i];
        if (isAddrOfFn_KM2rbsyR(arg_t.type))
            unpackAddrOfFn_0ZHiFw7C(arg_t.type.vtype.canon, parent_idx, module, ss);

    };
    fu::str mangle = ((x7E_r7bhmB7D(x7E_r7bhmB7D(fu::i64dec(overloadIdx.modid), "#"_fu), fu::i64dec(overloadIdx.index)) + " "_fu) + args_mangled);
    s_Target _0 {};
    return (_0 = s_Target(get_axePiRUH(getSpecs_AXXGDTv1(parent_idx, ss), mangle))) ? _0 : (_0 = doTrySpecialize_YUQsTQlC(parent_idx, s_Target{}, overloadIdx, args, mangle, reorder, use_reorder, conversions, REST_START, REST_TYPE, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort)) ? _0 : BUG_JWcxU72K("doTrySpecialize returns empty target."_fu, ctx, module, _here, ss, _helpers);
}

static bool isDiscardable_7PgWohcX(const s_Target& t, const s_Context& ctx, const s_Module& module, const s_SolverState& ss)
{
    if (EXT_EOYtG69B(t, ctx, module, ss).fx_mask & s_FxMask_Fx_NotDeadCode)
        return false;
    else
    {
        fu::view<s_Argument> host_args = EXT_EOYtG69B(t, ctx, module, ss).args;
        for (int i = 0; i < host_args.size(); i++)
        {
            if (host_args[i].flags & s_Flags_F_WRITTEN_TO)
                return false;

        };
        return true;
    };
}

static void discardIntoBlock_MM3KAxQ6(s_SolvedNode& node, const s_Type& slot, const unsigned relax_mask, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    node = createBlock_Q2a0BBmY(t_void, fu::vec<s_SolvedNode>(node.items), s_Helpers{}, ctx, module, _here, ss, _helpers);
    propagateType_Mh9g8ikC(node, slot, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
}

                                #ifndef DEF_unless_oob_N2HKpGLLLNl
                                #define DEF_unless_oob_N2HKpGLLLNl
inline const fu::vec<int>& unless_oob_N2HKpGLL(fu::view<fu::vec<int>> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const fu::vec<int>*)fu::NIL);

}
                                #endif

                                #ifndef DEF_x3Cx3E_YAQG8Vo8Io8
                                #define DEF_x3Cx3E_YAQG8Vo8Io8
inline int x3Cx3E_YAQG8Vo8(const s_StructCanon& a, const s_StructCanon& b)
{

    {

        {
            const int cmp = x3Cx3E_AsFD7H8N(a.modid, b.modid);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_AsFD7H8N(a.index, b.index);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_add_jDMAntheHgi
                                #define DEF_add_jDMAntheHgi
inline bool add_jDMAnthe(fu::vec<s_StructCanon>& keys, const s_StructCanon& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YAQG8Vo8(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, s_StructCanon(item));
    return true;
}
                                #endif

static bool type_maybeInside_nJM4n9tr(const s_ValueType& host, const s_ValueType& guest, fu::vec<s_StructCanon>& seen, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (host.canon == guest.canon)
        return true;
    else if (s_Type itemType = tryClear_sliceable_QUN697Dd(host))
        return type_maybeInside_nJM4n9tr(itemType.vtype, guest, seen, ctx, module, _here, ss, _helpers);
    else
    {
        if (isStruct_ddyKn6V4(host))
        {
            const s_StructCanon scp = parseStructCanon_degpQC5i(host.canon);
            const s_Struct& s = lookupUserType_kzfZN3HV(scp, module, ctx);
            if ((!s.all_triv || is_trivial_LriKPDIk(guest, ctx, module)) && add_jDMAnthe(seen, scp))
            {
                for (int i = 0; i < s.items.size(); i++)
                {
                    const s_Target f = target_7YqD2G7N(s.items[i]);
                    const s_ValueType* _0;
                    if ((_0 = &(GET_etmeeocQ(f, ctx, module, _here, ss, _helpers).type.vtype), type_maybeInside_nJM4n9tr(*_0, guest, seen, ctx, module, _here, ss, _helpers)))
                        return true;

                };
            };
        };
        return false;
    };
}

inline static s_SolvedNode TODO_FIX_pop_O9kDNMCk(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

                                #ifndef DEF_x3Dx3D_RJuDZZHkXL5
                                #define DEF_x3Dx3D_RJuDZZHkXL5
inline bool operator==(const s_TokenIdx& a, const s_TokenIdx& b)
{
    return !x3Cx3E_RJuDZZHk(a, b);
}
                                #endif

inline static bool l_27_40_9MMKXjFi(const s_COWInside& cow, const s_Argument& host_arg, const s_TokenIdx& cow_inside)
{
    if (cow.argTarget == host_arg.local)
        return cow.token == cow_inside;
    else
        return false;

}

                                #ifndef DEF_some_EAAR3iwGcUk
                                #define DEF_some_EAAR3iwGcUk
inline bool some_EAAR3iwG(fu::view<s_COWInside> a, const s_Argument& host_arg, const s_TokenIdx& cow_inside)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_COWInside& item = a[i];
        if (l_27_40_9MMKXjFi(item, host_arg, cow_inside))
            return true;

    };
    return false;
}
                                #endif

static fu::str qSTACK_cow_inside_zWASPqg3(const s_Target& target, const s_SolvedNode& node, const s_Argument& host_arg, const s_TokenIdx& cow_inside, fu::view<s_Target> seen, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const s_Region arg_region = Region_fromLocal_Uj5ZOr54(host_arg.local);
    fu::view<char> candidates = fu::view<char>{};
    fu::vec<s_Target> seen_1 = (seen + target);

    {
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_O9kDNMCk(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_crossmodule_PwJIgzg5(node_1.target, target, ctx, module, _here, ss, _helpers).solved : node_1);
            if ((node_2.kind == s_kind_copy) && (only_fLVI01Cf(node_2.items).token == cow_inside))
            {
                const s_Overload* _0;
                fu::str _1 {};
                return (_1 = (x7E_r7bhmB7D(("\n            "_fu + "in "_fu), (_0 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers))) + " at "_fu), (static_cast<fu::str&&>(_1) + addr_and_snippet_YNpW6K7i(cow_inside, s_CodeFmt{}, fu::view<char>{}, ctx, module)));
            }
            else
            {
                if (!((node_2.kind != s_kind_call) || !node_2.items))
                {
                    if (!(has_SWM1va5b(seen_1, node_2.target)))
                    {
                        fu::view<s_Argument> host_args = EXT_EOYtG69B(node_2.target, ctx, module, ss).args;
                        for (int i = 0; i < host_args.size(); i++)
                        {
                            const s_Argument& host_arg_1 = host_args[i];
                            if ((host_arg_1.flags & s_Flags_F_COW_INSIDE) && some_EAAR3iwG(EXT_EOYtG69B(node_2.target, ctx, module, ss).cows_inside, host_arg_1, cow_inside) && has_6Ghn5Rig(Lifetime_unwind_5T70CmHN(s_Lifetime(node_2.items[i].type.lifetime), 0, ctx, module, _here, ss, _helpers, target).uni0n, arg_region))
                            {
                                const s_SolvedNode* _2;
                                fu::str peek = (_2 = &(GET_etmeeocQ(node_2.target, ctx, module, _here, ss, _helpers).solved), qSTACK_cow_inside_zWASPqg3(node_2.target, *_2, host_arg_1, cow_inside, seen_1, ctx, module, _here, ss, _helpers));
                                const s_Overload* _3;
                                fu::str _4 {};
                                const s_Overload* _5;
                                fu::str _6 {};
                                return ((_6 = ((_4 = (x7E_r7bhmB7D(("\n            "_fu + "in "_fu), (_3 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_3, ctx, module, _here, ss, _helpers))) + " via "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_4), (_5 = &(GET_etmeeocQ(node_2.target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_5, ctx, module, _here, ss, _helpers)))) + " at "_fu), (static_cast<fu::str&&>(_6) + addr_and_snippet_YNpW6K7i(node_2.token, s_CodeFmt{}, fu::view<char>{}, ctx, module))) + peek) + candidates;
                            };
                        };
                    };
                };
            };
            for (int i = node_2.items.size(); i-- > 0; )
                stack += s_SolvedNode(node_2.items[i]);

        };
    };
    return fu::str{};
}

inline static void l_27_12_4lKFIZvV(const s_ValueType& vtype, const s_TokenIdx& token, const s_Target& t, const s_Overload& o, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    fu::vec<s_StructCanon> seen {};
    if (type_maybeInside_nJM4n9tr(vtype, o.type.vtype, seen, ctx, module, _here, ss, _helpers))
    {
        fu::str _0 {};
        const s_Overload* _1;
        fu::str _2 {};
        const s_SolvedNode* _3;
        /*MOV*/ fu::str err = (!callee ? "A copy is needed, but "_fu : ((_2 = ((_0 = x7E_r7bhmB7D(str_J4YCysO5(host_arg, ctx, module, _here, ss, _helpers), " to "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_0), (_1 = &(GET_etmeeocQ(callee, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_1, ctx, module, _here, ss, _helpers)))) + " is indirectly copied from:\n"_fu), (static_cast<fu::str&&>(_2) + (_3 = &(GET_etmeeocQ(callee, ctx, module, _here, ss, _helpers).solved), qSTACK_cow_inside_zWASPqg3(callee, *_3, host_arg, token, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers)))) + "\n\t... but "_fu));
        err += ("COW will break due to pre-existing mutref: "_fu + explainWhichFn_4p0QhTu9(t, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ctx, module, _here, ss, _helpers));
        _here = here;
        fail_pNB52ATY(static_cast<fu::str&&>(err), fu::view<char>{}, ctx, module, _here, ss, _helpers);
    };
}

inline static void eachCOWInside_GVFyOkC1(const s_Target& t, const s_Overload& o, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (callee)
    {
        fu::view<s_COWInside> callee_cows = EXT_EOYtG69B(callee, ctx, module, ss).cows_inside;
        for (int i = 0; i < callee_cows.size(); i++)
        {
            const s_COWInside& callee_cow = callee_cows[i];
            if (!(calleeReturnDiscarded && !callee_cow.mayEscapeVia))
            {
                if (callee_cow.argTarget == host_arg.local)
                    l_27_12_4lKFIZvV(callee_cow.vtype, callee_cow.token, t, o, here, callee, host_arg, ctx, module, _here, ss, _helpers);

            };
        };
    }
    else
        l_27_12_4lKFIZvV(item.type.vtype, s_TokenIdx(_here), t, o, here, callee, host_arg, ctx, module, _here, ss, _helpers);

}

inline static void l_27_11_Xe0XNpGe(const int child, const s_Target& t, const s_Overload& o, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_BitSet& seen, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (!(!add_once_mle9fepo(seen, child)))
    {
        if (has_35mEQu7d(_current_fn.postdom.snap.written_directly, child))
            eachCOWInside_GVFyOkC1(t, o, item, here, callee, host_arg, calleeReturnDiscarded, ctx, module, _here, ss, _helpers);

        cannotCOW_descendChildren_W9cHpqsu(child, item, here, callee, host_arg, calleeReturnDiscarded, seen, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
    };
}

inline static void eachLiveChildMutref_7GZBRR16(const int index, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_BitSet& seen, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    fu::view<int> children = unless_oob_N2HKpGLL(_current_fn.TODO_FIX_children, index);
    for (int i = 0; i < children.size(); i++)
    {
        const int child = children[i];
        const s_Target t = nested_YRYXainn(child, _current_fnort, module);
        const s_Overload& o = GET_etmeeocQ(t, ctx, module, _here, ss, _helpers);
        if (!(!is_mutref_tkXzsAAo(o.solved.type, _here, ctx)))
        {
            if (!(has_35mEQu7d(_current_fn.relaxed.done_relaxing, child)))
                l_27_11_Xe0XNpGe(child, t, o, item, here, callee, host_arg, calleeReturnDiscarded, seen, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);

        };
    };
}

static void cannotCOW_descendChildren_W9cHpqsu(const int index, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_BitSet& seen, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    eachLiveChildMutref_7GZBRR16(index, item, here, callee, host_arg, calleeReturnDiscarded, seen, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
}

                                #ifndef DEF_has_FbeDzC1laG0
                                #define DEF_has_FbeDzC1laG0
inline bool has_FbeDzC1l(fu::view<int> keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_AsFD7H8N(keys[i], item);
        if (cmp == 0)
            return true;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return false;
}
                                #endif

static int needsHardRisk_zQhQwjZZ(const int index, const s_Overload& o, const s_SolvedNode& item, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{

    {
        fu::view<int> children = unless_oob_N2HKpGLL(_current_fn.TODO_FIX_children, index);
        for (int i = 0; i < children.size(); i++)
        {
            const int child = children[i];
            const s_Target t = nested_YRYXainn(child, _current_fnort, module);
            const s_Overload& o_1 = GET_etmeeocQ(t, ctx, module, _here, ss, _helpers);
            if (!(!is_mutref_tkXzsAAo(o_1.solved.type, _here, ctx)))
            {
                if (!(has_35mEQu7d(_current_fn.relaxed.done_relaxing, child)))
                {
                    const s_CurrentFn& _current_fn_1 = _current_fn;
                    const int reason = needsHardRisk_zQhQwjZZ(child, o, item, callee, host_arg, calleeReturnDiscarded, ctx, module, _here, ss, _current_fn_1, _helpers, _current_fnort);
                    if (reason)
                        return reason;

                };
            };
        };
    };
    if (has_35mEQu7d(_current_fn.postdom.snap.written_directly, index))
    {
        if (callee)
        {
            fu::view<s_COWInside> callee_cows = EXT_EOYtG69B(callee, ctx, module, ss).cows_inside;
            for (int i = 0; i < callee_cows.size(); i++)
            {
                const s_COWInside& callee_cow = callee_cows[i];
                if (!(calleeReturnDiscarded && !callee_cow.mayEscapeVia))
                {
                    if (callee_cow.argTarget == host_arg.local)
                    {
                        const s_ValueType& vtype = callee_cow.vtype;
                        const bool uncaughtThrowOnly = ((callee_cow.exitPaths == s_ExitPaths_XP_NoReturn) ? !_current_fn.TODO_FIX_catches : false);
                        if (!(uncaughtThrowOnly))
                        {
                            fu::vec<s_StructCanon> seen {};
                            if (type_maybeInside_nJM4n9tr(vtype, o.type.vtype, seen, ctx, module, _here, ss, _helpers))
                                return index;

                        };
                    };
                };
            };
        }
        else
        {
            const s_ValueType& vtype = item.type.vtype;
            fu::vec<s_StructCanon> seen {};
            if (type_maybeInside_nJM4n9tr(vtype, o.type.vtype, seen, ctx, module, _here, ss, _helpers))
                return index;

        };
    };
    return 0;
}

                                #ifndef DEF_grow_if_oob_rttDpjXHlnf
                                #define DEF_grow_if_oob_rttDpjXHlnf
inline fu::vec<int>& grow_if_oob_rttDpjXH(fu::vec<fu::vec<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void cannotCOW_climbParents_pASyzuMq(const s_Lifetime& lifetime, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_BitSet& seen, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, const s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    for (int i = 0; i < lifetime.uni0n.size(); i++)
    {
        const int index = Region_asLocal_AEPMcxRF(lifetime.uni0n[i]);
        if (index)
        {
            if (!add_once_mle9fepo(seen, index))
                continue;
            else
            {
                const s_Overload& o = GET_etmeeocQ(nested_YRYXainn(index, _current_fnort, module), ctx, module, _here, ss, _helpers);
                if (o.kind == s_kind_var)
                {
                    const s_Lifetime* _0;
                    (_0 = &(Lifetime_climbType_Fa4fH9yF(o, ctx, module, _here, ss, _helpers).lifetime), cannotCOW_climbParents_pASyzuMq(*_0, item, here, callee, host_arg, calleeReturnDiscarded, seen, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
                    cannotCOW_descendChildren_W9cHpqsu(index, item, here, callee, host_arg, calleeReturnDiscarded, seen, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
                    s_Flow& flow = _current_fn.flow;
                    if (o.flags & s_Flags_F_ARG)
                    {
                        fu::vec<int> arg_targets { flow.arg_targets };
                        for (int i_1 = 0; i_1 < arg_targets.size(); i_1++)
                        {
                            const int t = arg_targets[i_1];
                            if (!(!t || (t == index)))
                            {
                                const s_Overload& o_1 = GET_etmeeocQ(nested_YRYXainn(t, _current_fnort, module), ctx, module, _here, ss, _helpers);
                                if (!(!is_mutref_tkXzsAAo(o_1.solved.type, _here, ctx)))
                                {
                                    if (!(has_FbeDzC1l(unless_oob_N2HKpGLL(flow.at_hard_risk, t), index)))
                                    {
                                        const int reason = needsHardRisk_zQhQwjZZ(t, o_1, item, callee, host_arg, calleeReturnDiscarded, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
                                        if (reason)
                                        {

                                            {
                                                const s_SolverNotes note = s_SolverNotes_N_COWRestrict;
                                                if (note & options.break_notes)
                                                {
                                                    const s_Overload* _1;
                                                    fu::str _2 {};
                                                    const s_Overload* _3;
                                                    fu::str _4 {};
                                                    const s_Overload* _5;
                                                    const s_Overload* _6;
                                                    fu::str _7 {};
                                                    const s_Overload* _8;
                                                    fu::str _9 {};
                                                    const s_Overload* _10;
                                                    fu::str _11 {};
                                                    (_11 = (("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + ((_4 = ((_2 = x7E_r7bhmB7D((_1 = &(GET_etmeeocQ(nested_YRYXainn(index, _current_fnort, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_1, ctx, module, _here, ss, _helpers)), " at risk from "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_2), (_3 = &(GET_etmeeocQ(nested_YRYXainn(t, _current_fnort, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_3, ctx, module, _here, ss, _helpers)))) + " via "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_4), (_5 = &(GET_etmeeocQ(nested_YRYXainn(reason, _current_fnort, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_5, ctx, module, _here, ss, _helpers)))) ? ("\n\t\t"_fu + (_9 = ((_7 = x7E_r7bhmB7D((_6 = &(GET_etmeeocQ(nested_YRYXainn(index, _current_fnort, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_6, ctx, module, _here, ss, _helpers)), " at risk from "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_7), (_8 = &(GET_etmeeocQ(nested_YRYXainn(t, _current_fnort, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_8, ctx, module, _here, ss, _helpers)))) + " via "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_9), (_10 = &(GET_etmeeocQ(nested_YRYXainn(reason, _current_fnort, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_10, ctx, module, _here, ss, _helpers))))) : "."_fu)), fail_pNB52ATY(static_cast<fu::str&&>(_11), fu::view<char>{}, ctx, module, _here, ss, _helpers));
                                                }
                                                else
                                                    _notes |= note;

                                            };
                                            add_ys5ADtDp(grow_if_oob_rttDpjXH(flow.at_soft_risk, t), index);
                                            if (reason != t)
                                            {
                                                add_ys5ADtDp(grow_if_oob_rttDpjXH(flow.at_hard_risk, t), index);
                                            };
                                        };
                                    };
                                };
                            };
                        };
                        if (callee)
                        {
                            fu::view<s_COWInside> callee_cows = EXT_EOYtG69B(callee, ctx, module, ss).cows_inside;
                            for (int i_2 = 0; i_2 < callee_cows.size(); i_2++)
                            {
                                const s_COWInside& callee_cow = callee_cows[i_2];
                                if (!(calleeReturnDiscarded && !callee_cow.mayEscapeVia))
                                {
                                    if (callee_cow.argTarget == host_arg.local)
                                    {
                                        const s_ValueType& vtype = callee_cow.vtype;
                                        const s_TokenIdx& token = callee_cow.token;
                                        const bool uncaughtThrowOnly = ((callee_cow.exitPaths == s_ExitPaths_XP_NoReturn) ? !_current_fn.TODO_FIX_catches : false);
                                        const int mayEscapeVia = _current_fn.postdom.snap.mayEscapeVia;
                                        const s_ExitPaths exitPaths = (uncaughtThrowOnly ? s_ExitPaths_XP_NoReturn : (_current_fn.postdom.snap.exitPaths ? _current_fn.postdom.snap.exitPaths : BUG_JWcxU72K("No current_fn.exitPaths"_fu, ctx, module, _here, ss, _helpers)));
                                        fu::vec<s_COWInside>& my_cows = _current_fn.events.cows_inside;
                                        for (int i_3 = 0; i_3 < my_cows.size(); i_3++)
                                        {
                                            s_COWInside& my_cow = my_cows.mutref(i_3);
                                            if ((my_cow.argTarget == index) && (my_cow.vtype.canon == vtype.canon))
                                            {
                                                my_cow.vtype.quals |= vtype.quals;
                                                my_cow.mayEscapeVia |= mayEscapeVia;
                                                my_cow.exitPaths |= exitPaths;
                                                return;
                                            };
                                        };
                                        my_cows += s_COWInside { s_ValueType(vtype), s_TokenIdx(token), index, mayEscapeVia, exitPaths };
                                    };
                                };
                            };
                        }
                        else
                        {
                            const s_ValueType& vtype = item.type.vtype;
                            const int mayEscapeVia = _current_fn.postdom.snap.mayEscapeVia;
                            const s_ExitPaths exitPaths = (_current_fn.postdom.snap.exitPaths ? _current_fn.postdom.snap.exitPaths : BUG_JWcxU72K("No current_fn.exitPaths"_fu, ctx, module, _here, ss, _helpers));
                            fu::vec<s_COWInside>& my_cows = _current_fn.events.cows_inside;
                            for (int i_2 = 0; i_2 < my_cows.size(); i_2++)
                            {
                                s_COWInside& my_cow = my_cows.mutref(i_2);
                                if ((my_cow.argTarget == index) && (my_cow.vtype.canon == vtype.canon))
                                {
                                    my_cow.vtype.quals |= vtype.quals;
                                    my_cow.mayEscapeVia |= mayEscapeVia;
                                    my_cow.exitPaths |= exitPaths;
                                    return;
                                };
                            };
                            my_cows += s_COWInside { s_ValueType(vtype), s_TokenIdx(_here), index, mayEscapeVia, exitPaths };
                        };
                    };
                }
                else
                {
                    fu::str _12 {};
                    (_12 = x7E_r7bhmB7D("cannotCOW_climbParents found a non-var: "_fu, str_1mm3y0E0(o, ctx, module, _here, ss, _helpers)), BUG_JWcxU72K(static_cast<fu::str&&>(_12), ctx, module, _here, ss, _helpers));
                };
            };
        };
    };
}

static void validateCOW_eBl2oCzc(const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, const s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    s_BitSet seen {};
    cannotCOW_climbParents_pASyzuMq(item.type.lifetime, item, here, callee, host_arg, calleeReturnDiscarded, seen, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
}

static void callarg_trackWriteIndirect_7UsXZdsY(const int index, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (add_once_mle9fepo(_current_fn.postdom.snap.written_indirectly, index))
    {
        const s_Target t = nested_YRYXainn(index, _current_fnort, module);
        const s_Overload* _0;
        fu::view<s_Region> lt = (_0 = &(GET_etmeeocQ(t, ctx, module, _here, ss, _helpers)), Lifetime_climbType_Fa4fH9yF(*_0, ctx, module, _here, ss, _helpers)).lifetime.uni0n;
        for (int i = 0; i < lt.size(); i++)
        {
            const int parent = Region_asLocal_AEPMcxRF(lt[i]);
            if (parent)
                callarg_trackWriteIndirect_7UsXZdsY(parent, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);

        };
        if (GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).flags & s_Flags_F_ARG)
            _current_fn.postdom.snap.mayEscapeVia |= (1 << (index % 32));

    };
}

static void callarg_trackWrites_ZNyTLrq7(const s_Lifetime& lt, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    for (int i = 0; i < lt.uni0n.size(); i++)
    {
        const int index = Region_asLocal_AEPMcxRF(lt.uni0n[i]);
        if (index && add_once_mle9fepo(_current_fn.postdom.snap.written_directly, index))
            callarg_trackWriteIndirect_7UsXZdsY(index, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);

    };
}

                                #ifndef DEF_each_xyFBY2CY3Ol
                                #define DEF_each_xyFBY2CY3Ol
inline void each_xyFBY2CY(const s_BitSet& _, const s_BitSet& just_moved0, const int mustSeq, const s_BitSet& just_moved00, int& MUSTSEQ_mask, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, const s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers)
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
                    if (has_35mEQu7d(just_moved0, index) && !has_35mEQu7d(just_moved00, index))
                    {
                        MUSTSEQ_mask |= (1 << (mustSeq & 31));

                        {
                            const s_SolverNotes note = s_SolverNotes_N_MoveMustSeq;
                            if (note & options.break_notes)
                            {
                                fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
                            }
                            else
                                _notes |= note;

                        };
                        return;
                    };
                };
            };
        };
    };
}
                                #endif

inline static void l_27_13_f9aEAtHz(const int i, const s_Argument& host_arg, const bool ooe_isLast, s_SolvedNode& node, const unsigned relax_mask, const bool ooe_isUndef, s_BitSet& just_used1, const s_BitSet& just_moved00, int& MUSTSEQ_mask, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    s_SolvedNode& arg = node.items.mutref(i);
    s_BitSet just_moved0 { ((ooe_isUndef && !ooe_isLast) ? _current_fn.postdom.snap.just_moved : (*(const s_BitSet*)fu::NIL)) };
    if (relax_mask == RELAX_all)
        maybeCopyOrMove_x3JkHTxN(arg, host_arg.type, true, ctx, module, _here, ss, _helpers, _current_fnort);

    propagateType_Mh9g8ikC(arg, host_arg.type, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    if (host_arg.flags & s_Flags_F_WRITTEN_TO)
    {
        callarg_trackWrites_ZNyTLrq7(arg.type.lifetime, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
    };
    if (ooe_isUndef)
    {
        if (just_moved0)
        {
            const int mustSeq = i;
            each_xyFBY2CY(_current_fn.postdom.snap.just_used, just_moved0, mustSeq, just_moved00, MUSTSEQ_mask, ctx, module, options, _here, ss, _notes, _helpers);
        };
        add_vot6EQuV(just_used1, _current_fn.postdom.snap.just_used);
        clear_rcMo7uZV(_current_fn.postdom.snap.just_used);
    };
}

                                #ifndef DEF_argsReverse_ytwz76RAuuk
                                #define DEF_argsReverse_ytwz76RAuuk
inline void argsReverse_ytwz76RA(const bool RTL, fu::view<s_Argument> host_args, s_SolvedNode& node, const unsigned relax_mask, const bool ooe_isUndef, s_BitSet& just_used1, const s_BitSet& just_moved00, int& MUSTSEQ_mask, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort, const s_TokenIdx& _here_1, const s_Context& ctx_1)
{
    int lastPass = 1;
    bool ooe_isLast = true;
    for (int pass = 2; pass-- > lastPass; )
    {
        for (int i = host_args.size(); i-- > 0; )
        {
            const s_Argument& host_arg = host_args[i];
            if (!!pass != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_tkXzsAAo(host_arg.type, _here_1, ctx_1))))
                lastPass = 0;
            else
            {
                l_27_13_f9aEAtHz(i, host_arg, ooe_isLast, node, relax_mask, ooe_isUndef, just_used1, just_moved00, MUSTSEQ_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                ooe_isLast = false;
            };
        };
    };
}
                                #endif

static bool isFieldChain_mwWi49a4(const s_SolvedNode& arg, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (arg.kind != s_kind_call)
        return false;
    else
    {
        const s_kind t = GET_etmeeocQ(arg.target, ctx, module, _here, ss, _helpers).kind;
        return (t == s_kind_var) || ((t == s_kind_field) && isFieldChain_mwWi49a4(only_fLVI01Cf(arg.items), ctx, module, _here, ss, _helpers));
    };
}

inline static void l_27_28_cgZ9JLtu(const s_Target& t, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    s_Overload& o = GET_mut_TpIPZdoW(t, module, ss);
    if (!(o.flags & s_Flags_F_MOVED_FROM))
    {
        o.flags |= s_Flags_F_MOVED_FROM;
        const s_Type& init = Lifetime_climbType_Fa4fH9yF(o, ctx, module, _here, ss, _helpers);
        if (is_ref_vcLGyw8p(init))
        {
            Lifetime_F_MOVED_FROM_O89kup5H(s_Lifetime(init.lifetime), ctx, module, _here, ss, _helpers, _current_fnort);
        };
    };
}

inline static void Lifetime_each_PwGr269e(const s_Lifetime& lifetime, const int locals_start, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;
        else
        {
            if (!(Region_isTemp_28foEZVg(r)))
            {
                const s_Target t = nested_YRYXainn(Region_toLocal_28foEZVg(r), _current_fnort, module);
                l_27_28_cgZ9JLtu(t, ctx, module, _here, ss, _helpers, _current_fnort);
            };
        };
    };
}

static void Lifetime_F_MOVED_FROM_O89kup5H(const s_Lifetime& lifetime, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    Lifetime_each_PwGr269e(lifetime, 0, ctx, module, _here, ss, _helpers, _current_fnort);
}

static void trackJustMoved_9ngtsiMy(const s_Lifetime& lt, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    for (int i = 0; i < lt.uni0n.size(); i++)
    {
        const s_Region& r = lt.uni0n[i];
        if (!(Region_isTemp_28foEZVg(r)))
        {
            int _0 {};
            const int local = ((_0 = Region_asLocal_AEPMcxRF(r)) ? _0 : BUG_JWcxU72K("trackJustMoved: found a non-local."_fu, ctx, module, _here, ss, _helpers));
            const s_Target target = nested_YRYXainn(local, _current_fnort, module);
            if (add_once_mle9fepo(_current_fn.postdom.snap.just_moved, target.index))
            {
                const s_Overload* _1;
                const s_Lifetime* _2;
                (_2 = &((_1 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), Lifetime_climbType_Fa4fH9yF(*_1, ctx, module, _here, ss, _helpers)).lifetime), trackJustMoved_9ngtsiMy(*_2, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort));
            }
            else
                BUG_JWcxU72K("trackJustMoved: already moved."_fu, ctx, module, _here, ss, _helpers);

        };
    };
}

static void injectJumps_NMgUzBco(s_SolvedNode& expr, const s_Helpers& h, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (!tryInjectJumps_i7cqEK4H(expr, h, ctx, module, _here, ss, _helpers, _current_fnort))
        expr = createJump_0b4ltlqy(h, expr, _here);

}

static bool tryInjectJumps_i7cqEK4H(s_SolvedNode& expr, const s_Helpers& h, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    const s_HelpersData* BL_2_v;
    if (is_never_8KZIyCKE(expr.type))
        return true;
    else if ((__extension__ (
    {
        const s_Helpers& h_1 = h;
        BL_2_v = &(ss._helpers_data[h_1.index]);
    (void)0;}), *BL_2_v).ret_actual)
    {
        const s_HelpersData* BL_4_v;
        if (is_void_8KZIyCKE((__extension__ (
        {
            const s_Helpers& h_1 = h;
            BL_4_v = &(ss._helpers_data[h_1.index]);
        (void)0;}), *BL_4_v).ret_actual) && !is_void_8KZIyCKE(expr.type))
        {
            if (expr.kind != s_kind_block)
            {
                expr = createBlock_Q2a0BBmY(t_void, fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Helpers{}, ctx, module, _here, ss, _helpers);
            };
            if (is_void_8KZIyCKE(if_last_fLVI01Cf(expr.items).type))
            {
                fu::str _0 {};
                (_0 = ("tryInjectJumps: Block tail is void, but block.type isn't: "_fu + humanizeType_XI6W2OpL(expr.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)), BUG_JWcxU72K(static_cast<fu::str&&>(_0), ctx, module, _here, ss, _helpers));
            }
            else
            {
                expr.items += createEmpty_zptVo9Nn(s_kind_empty, t_void, s_Target{}, _here);
            };
        };
        const s_HelpersData* BL_9_v;
        if ((expr.kind == s_kind_block) && expr.items && !s_HelpersMask(((__extension__ (
        {
            const s_Helpers& h_1 = expr.helpers;
            BL_9_v = &(ss._helpers_data[h_1.index]);
        (void)0;}), *BL_9_v).mask & s_HelpersMask_HM_LabelUsed)))
        {
            s_SolvedNode* _1;
            (_1 = &(last_Yd6Gh1JU(expr.items)), injectJumps_NMgUzBco(*_1, h, ctx, module, _here, ss, _helpers, _current_fnort));
            expr.type = t_never;
            return true;
        }
        else if (expr.kind == s_kind_if)
        {
            for (int i = 1; i < expr.items.size(); i++)
            {
                s_SolvedNode* _2;
                (_2 = &(expr.items.mutref(i)), injectJumps_NMgUzBco(*_2, h, ctx, module, _here, ss, _helpers, _current_fnort));
            };
            expr.type = t_never;
            return true;
        };
        return false;
    }
    else
        BUG_JWcxU72K(x7E_r7bhmB7D("tryInjectJumps: no h.ret_actual on #"_fu, fu::i64dec(h.index)), ctx, module, _here, ss, _helpers);

}

static bool isRefArg_zct70A6w(const s_Overload& o)
{
    return (o.flags & s_Flags_F_ARG) && (o.kind == s_kind_var) && is_ref_vcLGyw8p(o.solved.type);
}

static int Lifetime_vs_UdZMXhKU(const s_Lifetime& lifetime, const int locals_start, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    bool neg = false;
    bool pos = false;
    fu::view<s_Region> r = lifetime.uni0n;
    for (int i = 0; (i < r.size()) && !(pos && neg); i++)
    {
        const s_Region& r_1 = r[i];
        if (Region_toLocal_28foEZVg(r_1) < locals_start)
            neg = true;
        else if (Region_isTemp_28foEZVg(r_1))
            pos = true;
        else if (isRefArg_zct70A6w(Region_GET_moKQEKlj(r_1, ctx, module, _here, ss, _helpers, _current_fnort)))
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

static fu::vec<int> Lifetime_slotsUp2_UR1bAXyc(const s_Lifetime& lifetime, const int locals_start, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    fu::vec<s_Region> unwound = Lifetime_unwind_5T70CmHN(s_Lifetime(lifetime), locals_start, ctx, module, _here, ss, _helpers, _current_fnort).uni0n;
    /*MOV*/ fu::vec<int> result {};
    for (int i = 0; i < unwound.size(); i++)
    {
        const s_Region& r = unwound[i];
        if ((r.index >= locals_start))
            result += r.index;

    };
    return /*NRVO*/ result;
}

inline static void l_27_50_tGfVVG0x(const int index, const s_Module& module, s_SolverState& ss, const s_Target& _current_fnort)
{
    s_Overload& o = GET_mut_TpIPZdoW(nested_YRYXainn(index, _current_fnort, module), module, ss);
    if (!(o.flags & s_Flags_F_ARG))
        o.status |= s_SolverStatus_SS_HOIST;

}

                                #ifndef DEF_each_bSchT8DlFS0
                                #define DEF_each_bSchT8DlFS0
inline void each_bSchT8Dl(fu::view<int> a, const s_Module& module, s_SolverState& ss, const s_Target& _current_fnort)
{
    for (int i = 0; i < a.size(); i++)
        l_27_50_tGfVVG0x(a[i], module, ss, _current_fnort);

}
                                #endif

static void mcom_BlockReturns_CopyOrMoveDecision_ClXRgAzD(const s_Helpers& h, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (!(!is_ref_vcLGyw8p(ss._helpers_data[h.index].ret_actual)))
    {
        if (ss._helpers_data[h.index].mask & s_HelpersMask_HM_Function)
        {
            /*MOV*/ s_Lifetime unwind = Lifetime_unwind_5T70CmHN(s_Lifetime(ss._helpers_data[h.index].ret_actual.lifetime), 0, ctx, module, _here, ss, _helpers, _current_fnort);
            if (Lifetime_vs_UdZMXhKU(unwind, ss._helpers_data[h.index].locals_start, ctx, module, _here, ss, _helpers, _current_fnort) < 0)
            {
                ss._helpers_data.mutref(h.index).ret_actual.lifetime = static_cast<s_Lifetime&&>(unwind);
            }
            else
                reportReturnType_Np5I4bmr(h, clear_refs_57qzYcmt(s_Type(ss._helpers_data[h.index].ret_actual)), false, ctx, module, _here, ss, _helpers, _current_fnort);

        }
        else
        {
            fu::vec<int> _0 {};
            (_0 = Lifetime_slotsUp2_UR1bAXyc(ss._helpers_data[h.index].ret_actual.lifetime, ss._helpers_data[h.index].locals_start, ctx, module, _here, ss, _helpers, _current_fnort), each_bSchT8Dl(static_cast<fu::vec<int>&&>(_0), module, ss, _current_fnort));
        };
    };
}

inline static void l_27_15_Enizc1yQ(const s_Target& t, const int position, const unsigned relax_mask, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    relaxBlockVar_MOe4Wcpw(t, relax_mask, false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    if (s_SolverStatus((GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).status & s_SolverStatus_SS_UNUSED)) && (GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).flags & s_Flags_F_IMPLICIT))
    {

        {
            const s_SolverNotes note = s_SolverNotes_N_UnusedImplicit;
            const s_Module& module_1 = module;
            const s_SolverState& ss_1 = ss;
            fu::view<s_Helpers> _helpers_1 = _helpers;
            if (note & options.break_notes)
            {
                fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
            }
            else
                _notes |= note;

        };
        if (_current_fn.out.items[position].target == t)
            _current_fn.out.items.splice(position, 1);
        else
        {
            BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
        };
    };
}

inline static void _current_fn_eachArg_BACK_kk4Gefwg(const unsigned relax_mask, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    for (int i = (_current_fn.out.items.size() + FN_ARGS_BACK); i-- > 0; )
    {
        const s_Target t { _current_fn.out.items[i].target };
        if (t && (GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).flags & s_Flags_F_ARG))
            l_27_15_Enizc1yQ(t, i, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

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

static void propagateType_Mh9g8ikC(s_SolvedNode& node, const s_Type& slot, const unsigned relax_mask, const s_Helpers& kills, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const s_kind k = node.kind;
    const s_TokenIdx here0 { _here };
    _here = node.token;
    fu_DEFER(_here = here0);
    const bool canDiscard = isIrrelevant_DOKZ61Hc(slot);
    if ((k == s_kind_let) || (k == s_kind_letdef))
    {
        if (!(!node.target))
        {
            if (relax_mask == RELAX_all)
            {
                s_SolvedNode& node_1 = GET_mut_TpIPZdoW(node.target, module, ss).solved;
                s_Type type { node_1.type };
                s_SolvedNode& init = node_1.items.mutref(LET_INIT);
                if (init)
                    maybeCopyOrMove_x3JkHTxN(init, type, false, ctx, module, _here, ss, _helpers, _current_fnort);

            };
            relaxBlockVar_MOe4Wcpw(node.target, relax_mask, canDiscard, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            if (k == s_kind_letdef)
            {
                if (GET_etmeeocQ(node.target, ctx, module, _here, ss, _helpers).status & s_SolverStatus_SS_UNUSED)
                {

                    {
                        const s_SolverNotes note = s_SolverNotes_N_UnusedLet;
                        const s_Module& module_1 = module;
                        const s_SolverState& ss_1 = ss;
                        fu::view<s_Helpers> _helpers_1 = _helpers;
                        if (note & options.break_notes)
                        {
                            fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
                        }
                        else
                            _notes |= note;

                    };
                    s_SolvedNode _0 {};
                    node = ((_0 = s_SolvedNode(GET_etmeeocQ(node.target, ctx, module, _here, ss, _helpers).solved.items[LET_INIT])) ? static_cast<s_SolvedNode&&>(_0) : createEmpty_zptVo9Nn(s_kind_empty, t_void, s_Target{}, _here));
                };
            }
            else
                BUG_JWcxU72K("Unexpected let node."_fu, ctx, module, _here, ss, _helpers);

        };
    }
    else
    {
        try_relax_KcQXgxxc(node.type, slot, relax_mask);
        if ((k == s_kind_and) || (k == s_kind_or))
        {
            s_Type type { node.type };
            const s_Type& rest = ((!canDiscard && ((k == s_kind_or) || (is_mutref_tkXzsAAo(slot, _here, ctx) && CANNOT_definit_mutrefs))) ? slot : t_proposition);
            s_Postdom postdom0 { _current_fn.postdom };
            const bool mcomOrItems = (((k == s_kind_or) && (relax_mask == RELAX_all) && !canDiscard) ? !is_boolean_6bkyMkO3(type.vtype) : false);
            fu::vec<s_SolvedNode>& items = node.items;
            for (int i = items.size(); i-- > 0; )
            {
                s_SolvedNode& item = items.mutref(i);
                if (mcomOrItems)
                    maybeCopyOrMove_x3JkHTxN(item, type, false, ctx, module, _here, ss, _helpers, _current_fnort);

                propagateType_Mh9g8ikC(item, s_Type(((i == (items.size() - 1)) ? slot : rest)), relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                if (canDiscard && (i == (items.size() - 1)) && isDiscardable_CdTNpSbI(item, ctx, module, _here, ss, _helpers))
                {

                    {
                        const s_SolverNotes note = s_SolverNotes_N_UnusedAndOr;
                        const s_Module& module_1 = module;
                        const s_SolverState& ss_1 = ss;
                        fu::view<s_Helpers> _helpers_1 = _helpers;
                        if (note & options.break_notes)
                        {
                            fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
                        }
                        else
                            _notes |= note;

                    };
                    items.pop();
                    if (!(_current_fn.postdom == postdom0))
                    {
                        BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
                    };
                };
                if (i)
                    branch_SmdPtklL(_current_fn.postdom, postdom0, ctx, _here);

            };
            if (items.size() < 2)
            {
                s_SolvedNode _1 {};
                node = ((_1 = s_SolvedNode(if_only_fLVI01Cf(items))) ? static_cast<s_SolvedNode&&>(_1) : createEmpty_zptVo9Nn(s_kind_empty, t_void, s_Target{}, _here));
            }
            else if (canDiscard)
                node.type = t_bool;

        }
        else if (k == s_kind_if)
        {
            s_Type type { node.type };
            fu::vec<s_SolvedNode>& items = node.items;
            if ((relax_mask == RELAX_all) && !canDiscard)
            {
                for (int i = items.size(); i-- > 1; )
                {
                    s_SolvedNode* _2;
                    (_2 = &(items.mutref(i)), maybeCopyOrMove_x3JkHTxN(*_2, type, false, ctx, module, _here, ss, _helpers, _current_fnort));
                };
            };
            s_Postdom postdom0 { _current_fn.postdom };
            bool canDiscard_cond = canDiscard;
            for (int i = items.size(); i-- > 0; )
            {
                if (i == 1)
                    std::swap(postdom0, _current_fn.postdom);
                else if (i == 0)
                    branch_SmdPtklL(_current_fn.postdom, postdom0, ctx, _here);

                const s_Type* _3;
                const s_Helpers* _4;
                (_3 = &((((i != 0) || canDiscard_cond) ? slot : t_proposition)), _4 = &(((i != 0) ? kills : (*(const s_Helpers*)fu::NIL))), propagateType_Mh9g8ikC(items.mutref(i), *_3, relax_mask, *_4, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
                if (canDiscard_cond && i && !isDiscardable_CdTNpSbI(items[i], ctx, module, _here, ss, _helpers))
                    canDiscard_cond = false;

            };
            if (canDiscard)
            {
                if (canDiscard_cond)
                {

                    {
                        const s_SolverNotes note = s_SolverNotes_N_UnusedIfElse;
                        const s_Module& module_1 = module;
                        const s_SolverState& ss_1 = ss;
                        fu::view<s_Helpers> _helpers_1 = _helpers;
                        if (note & options.break_notes)
                        {
                            fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
                        }
                        else
                            _notes |= note;

                    };
                    node = items[0];
                }
                else if (isDiscardable_CdTNpSbI(items[1], ctx, module, _here, ss, _helpers))
                {
                    node = createOr_f3YOZ9vs(fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(items[0]), s_SolvedNode(items[2]) } }, s_Type(t_void), ctx, module, _here, ss, _helpers, _current_fnort);
                }
                else if (isDiscardable_CdTNpSbI(items[2], ctx, module, _here, ss, _helpers))
                    node = createAnd_4n5O7WqG(fu::slice(items, 0, 2), s_Type(t_void), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                else
                    node.type = t_void;

            }
            else if (kills)
            {
                node.type = superType_neverOK_vBOtoAZk("if/else after control flow simplification: "_fu, items[1].type, items[2].type, ctx, module, _here, ss, _helpers, _current_fnort);
            };
        }
        else if (k == s_kind_try)
        {
            s_Postdom postdom0 { _current_fn.postdom };
            propagateType_Mh9g8ikC(recover_tvzpHNSM(node), t_void, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            branch_SmdPtklL(_current_fn.postdom, postdom0, ctx, _here);
            propagateType_Mh9g8ikC(error_3vHqxBAF(node), t_string, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            const s_FxMask throws0 = s_FxMask((_current_fn.effects.fx_mask & s_FxMask_Fx_Throws));
            _current_fn.effects.fx_mask &= s_FxMask(~s_FxMask_Fx_Throws);
            _current_fn.TODO_FIX_catches++;
            propagateType_Mh9g8ikC(attempt_zlQ5ilpm(node), t_void, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            _current_fn.TODO_FIX_catches--;
            if (!s_FxMask((_current_fn.effects.fx_mask & s_FxMask_Fx_Throws)))
            {

                {
                    const s_SolverNotes note = s_SolverNotes_N_UnusedTry;
                    const s_Module& module_1 = module;
                    const s_SolverState& ss_1 = ss;
                    fu::view<s_Helpers> _helpers_1 = _helpers;
                    if (note & options.break_notes)
                    {
                        fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
                    }
                    else
                        _notes |= note;

                };
                node = attempt_zlQ5ilpm(node);
            };
            _current_fn.effects.fx_mask &= s_FxMask(~s_FxMask_Fx_Throws);
            _current_fn.effects.fx_mask |= throws0;
        }
        else if (k == s_kind_loop)
        {
            Breakable_begin_VYfRgzXf(true, node, relax_mask, ctx, _here, ss, _current_fn);
            const int loop_start0 = (_current_fn.postdom.loop_start ? _current_fn.postdom.loop_start : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers));
            const s_HelpersData* BL_48_v;
            int _5 {};
            _current_fn.postdom.loop_start = ((_5 = (__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_48_v = &(ss._helpers_data[h.index]);
            (void)0;}), *BL_48_v).locals_start) ? _5 : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers));
            /*MOV*/ fu::vec<s_Type> var_usage0 {};
            std::swap(_current_fn.relaxed.var_usage, var_usage0);
            if (post_cond_PvYke1qY(node))
            {
                propagateType_Mh9g8ikC(post_cond_PvYke1qY(node), t_proposition, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            };
            if (post_rA2tSl12(node))
            {
                const s_SolvedNode* _6;
                if ((_6 = &(post_rA2tSl12(node)), isDiscardable_CdTNpSbI(*_6, ctx, module, _here, ss, _helpers)))
                {
                    post_rA2tSl12(node) = s_SolvedNode{};
                }
                else
                {
                    propagateType_Mh9g8ikC(post_rA2tSl12(node), t_void, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                };
            };
            if (body_8L7INrcT(node))
            {
                const s_SolvedNode* _7;
                if ((_7 = &(body_8L7INrcT(node)), isDiscardable_CdTNpSbI(*_7, ctx, module, _here, ss, _helpers)))
                {
                    body_8L7INrcT(node) = s_SolvedNode{};
                }
                else
                {
                    propagateType_Mh9g8ikC(body_8L7INrcT(node), t_void, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                };
            };
            if (pre_SUxS24Lx(node))
            {
                s_Postdom postdom0 { _current_fn.postdom };
                const s_SolvedNode* _8;
                if ((_8 = &(pre_SUxS24Lx(node)), isDiscardable_CdTNpSbI(*_8, ctx, module, _here, ss, _helpers)))
                {
                    pre_SUxS24Lx(node) = s_SolvedNode{};
                }
                else
                {
                    propagateType_Mh9g8ikC(pre_SUxS24Lx(node), t_void, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                };
                branch_SmdPtklL(_current_fn.postdom, postdom0, ctx, _here);
            };
            if (pre_cond_LP9TkGvb(node))
            {
                propagateType_Mh9g8ikC(pre_cond_LP9TkGvb(node), t_proposition, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            };
            _current_fn.postdom.loop_start = loop_start0;
            Breakable_end_c4ppKYNy(true, node, relax_mask, ctx, _here, ss, _current_fn);
            if (_current_fn.postdom.loop_start == loop_start0)
            {
                fu::vec<s_Type>& fn_usage = _current_fn.relaxed.var_usage;
                std::swap(fn_usage, var_usage0);
                for (int i = 0; i < var_usage0.size(); i++)
                {
                    const s_Type& slot_1 = var_usage0[i];
                    if (slot_1)
                        trackVarUsage_CAbMarlD(fn_usage, i, slot_1, ctx, module, _here, ss, _helpers, _current_fnort);

                };
                s_HelpersData* BL_64_v;
                (__extension__ (
                {
                    const s_Helpers& h = node.helpers;
                    BL_64_v = &(ss._helpers_data.mutref(h.index));
                (void)0;}), *BL_64_v).usage = static_cast<fu::vec<s_Type>&&>(var_usage0);
                if (init_cH91peiS(node))
                {
                    propagateType_Mh9g8ikC(init_cH91peiS(node), t_void, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                };
            }
            else
            {
                BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
            };
        }
        else if (k == s_kind_not)
        {
            if (canDiscard)
            {
                node = only_fLVI01Cf(node.items);
                propagateType_Mh9g8ikC(node, t_void, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            }
            else
            {
                propagateType_Mh9g8ikC(only_Yd6Gh1JU(node.items), t_proposition, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            };
        }
        else if (k == s_kind_call)
        {
            node._loop_start = _current_fn.postdom.loop_start;
            const s_Target t { node.target };
            if (GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).kind == s_kind_field)
            {
                const s_Overload* _9;
                const s_UnpackedOffset _ = (_9 = &(GET_etmeeocQ(t, ctx, module, _here, ss, _helpers)), field_unpackOffset_nJsQdrUW(*_9, ctx, module, _here, ss, _helpers));
                s_Type slot_1 = USAGE_structUsageFromFieldUsage_mNmZS1Du(s_Type(slot), _.memberFlatOffset);
                if (canDiscard)
                {
                    node = only_fLVI01Cf(node.items);
                    propagateType_Mh9g8ikC(node, slot_1, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                }
                else
                {
                    propagateType_Mh9g8ikC(only_Yd6Gh1JU(node.items), slot_1, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                };
            }
            else if (GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).kind == s_kind_var)
            {
                if (canDiscard)
                {
                    node = createEmpty_zptVo9Nn(s_kind_empty, t_void, s_Target{}, _here);
                }
                else if (isLocal_HC98KjW6(t))
                {
                    trackVarUsage_CAbMarlD(_current_fn.relaxed.var_usage, t.index, node.type, ctx, module, _here, ss, _helpers, _current_fnort);
                    tryTrackLastUse_pOE6hj2D(node.type.lifetime, relax_mask, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
                    trackUse_vREkq3gL(node.type.lifetime, _current_fn.postdom.snap.just_used, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
                };
            }
            else
            {
                if (EXT_EOYtG69B(t, ctx, module, ss).spec_of && is_ref_vcLGyw8p(GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).type))
                {
                    fu::vec<s_SolvedNode> relaxed {};
                    for (int i = 0; i < node.items.size(); i++)
                    {
                        const s_SolvedNode& orig = node.items[i];
                        if (has_6Ghn5Rig(GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).type.lifetime.uni0n, Region_fromArgPosition_vmMI39NZ(i)))
                        {
                            const unsigned relax_mask_1 = (relax_mask & ~q_USAGE);
                            s_Type type { orig.type };
                            if (try_relax_KcQXgxxc(type, slot, relax_mask_1))
                            {
                                if (!relaxed)
                                    relaxed = fu::slice(node.items, 0, i);

                                relaxed += SolvedNode_Ob5YrUkY(s_kind___relaxed, type, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
                                continue;
                            };
                        };
                        if (relaxed)
                            relaxed += s_SolvedNode(orig);

                    };
                    if (relaxed)
                    {
                        fu::str args_mangled {};
                        const s_Target spec = trySpecialize_hUa3JVC0(s_Target(EXT_EOYtG69B(t, ctx, module, ss).spec_of), relaxed, args_mangled, relaxed.size(), (*(const s_Type*)fu::NIL), fu::view<int>{}, false, fu::view<fu::vec<s_Target>>{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                        if (!is_SPECFAIL_JPJKHVxn(spec) && !(spec == t))
                        {
                            ensureLazySolved_2LDJ3uNu(spec, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                            if (EXT_EOYtG69B(spec, ctx, module, ss).args.size() == EXT_EOYtG69B(t, ctx, module, ss).args.size())
                            {
                                const s_Type* _10;
                                (_10 = &(GET_etmeeocQ(spec, ctx, module, _here, ss, _helpers).type), checkAssignable_zN6GOMnO(node.type, *_10, "Relaxed specialization does not return a subtype"_fu, fu::view<char>{}, (*(const fu::str*)fu::NIL), false, ctx, module, _here, ss, _helpers, _current_fnort));
                                if (is_ref_vcLGyw8p(node.type))
                                {
                                    s_Lifetime _11 {};
                                    node.type.lifetime = static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>((_11 = Lifetime_replaceArgsAtCallsite_MFray2Dn(spec, relaxed, ctx, module, _here, ss, _helpers, _current_fnort), Lifetime_test_yNTCCzEE(static_cast<s_Lifetime&&>(_11), true, ctx, module, _here, ss, _helpers, _current_fnort))));
                                };
                                node.target = spec;
                                const s_SolverNotes note = s_SolverNotes_N_RelaxRespec;
                                const s_Module& module_1 = module;
                                const s_SolverState& ss_1 = ss;
                                fu::view<s_Helpers> _helpers_1 = _helpers;
                                if (note & options.break_notes)
                                {
                                    fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
                                }
                                else
                                    _notes |= note;

                            }
                            else
                                BUG_JWcxU72K("Relaxed spec.args.len != original.args.len"_fu, ctx, module, _here, ss, _helpers);

                        };
                    };
                };
                if (canDiscard && isDiscardable_7PgWohcX(node.target, ctx, module, ss))
                {

                    {
                        const s_SolverNotes note = s_SolverNotes_N_UnusedCall;
                        const s_Module& module_1 = module;
                        const s_SolverState& ss_1 = ss;
                        fu::view<s_Helpers> _helpers_1 = _helpers;
                        if (note & options.break_notes)
                        {
                            fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
                        }
                        else
                            _notes |= note;

                    };
                    discardIntoBlock_MM3KAxQ6(node, slot, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                }
                else
                {
                    if (is_never_8KZIyCKE(GET_etmeeocQ(node.target, ctx, module, _here, ss, _helpers).type) && !_current_fn.TODO_FIX_catches)
                    {
                        _current_fn.postdom.snap = s_PostdomSnap{};
                        _current_fn.postdom.snap.exitPaths = s_ExitPaths_XP_NoReturn;
                    };
                    _current_fn.effects.fx_mask |= EXT_EOYtG69B(node.target, ctx, module, ss).fx_mask;
                    if ((relax_mask == RELAX_all) && node.items)
                    {
                        fu::view<s_Argument> host_args = EXT_EOYtG69B(t, ctx, module, ss).args;
                        for (int i = 0; i < host_args.size(); i++)
                        {
                            const s_SolvedNode& arg = node.items[i];
                            const s_Argument& host_arg = host_args[i];
                            if (is_ref_vcLGyw8p(host_arg.type))
                            {
                                tryTrackLastUse_pOE6hj2D(arg.type.lifetime, relax_mask, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
                            };
                            if (host_arg.flags & s_Flags_F_COW_INSIDE)
                                validateCOW_eBl2oCzc(arg, arg.token, node.target, host_arg, canDiscard, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

                        };
                    };
                    if (node.items)
                    { {
                        if (GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).kind == s_kind_type)
                        {
                            s_Struct BL_105_v {};
                            s_Struct s = (__extension__ (
                            {
                                const s_Struct& __partcopy_ref = tryLookupUserType_LriKPDIk(GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).type.vtype, ctx, module);
                                BL_105_v = (s_Struct { __partcopy_ref.kind, {}, {}, fu::vec<s_ScopeItem>(__partcopy_ref.items), {}, {}, {}, {}, {}, {} });
                            (void)0;}), static_cast<s_Struct&&>(BL_105_v));
                            if (!(s.kind != s_kind_struct))
                            {
                                if (s.items.size() == node.items.size())
                                {
                                    for (int i = node.items.size(); i-- > 0; )
                                    {
                                        const s_Overload& field = GET_etmeeocQ(target_7YqD2G7N(s.items[i]), ctx, module, _here, ss, _helpers);
                                        s_SolvedNode& arg = node.items.mutref(i);
                                        const s_UnpackedOffset _ = field_unpackOffset_nJsQdrUW(field, ctx, module, _here, ss, _helpers);
                                        s_Type slot_1 = USAGE_fieldUsageFromStructUsage_jD2J2619(s_Type(field.type), (slot.vtype.quals & q_USAGE), _.memberFlatOffset, _.memberFlatCount);
                                        if (relax_mask == RELAX_all)
                                            maybeCopyOrMove_x3JkHTxN(arg, slot_1, true, ctx, module, _here, ss, _helpers, _current_fnort);

                                        propagateType_Mh9g8ikC(arg, slot_1, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                                    };
                                    goto BL_103;
                                }
                                else
                                    BUG_JWcxU72K("Call(type): struct.items.len != call.items.len"_fu, ctx, module, _here, ss, _helpers);

                            };
                        };
                        fu::vec<s_Argument> host_args { EXT_EOYtG69B(node.target, ctx, module, ss).args };
                        const bool RTL = isRTL_lOupdufN(GET_etmeeocQ(node.target, ctx, module, _here, ss, _helpers));
                        const bool ooe_isUndef = (!RTL ? (node.items.size() > 1) : false);
                        if (host_args.size() == node.items.size())
                        {
                            s_BitSet just_used1 {};
                            if (ooe_isUndef)
                                std::swap(_current_fn.postdom.snap.just_used, just_used1);

                            fu_DEFER(if (ooe_isUndef)
                                std::swap(_current_fn.postdom.snap.just_used, just_used1););
                            s_BitSet just_moved00 { (ooe_isUndef ? _current_fn.postdom.snap.just_moved : (*(const s_BitSet*)fu::NIL)) };
                            int MUSTSEQ_mask = 0;
                            argsReverse_ytwz76RA(RTL, host_args, node, relax_mask, ooe_isUndef, just_used1, just_moved00, MUSTSEQ_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort, _here, ctx);
                            node.helpers.index |= MUSTSEQ_mask;
                        }
                        else
                        {
                            const s_Overload* _12;
                            fu::str _13 {};
                            (_13 = x7E_r7bhmB7D("propagateType(call) args.len != host_args.len at call to "_fu, (_12 = &(GET_etmeeocQ(node.target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_12, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_13), ctx, module, _here, ss, _helpers));
                        };
                      } BL_103:;
                    };
                };
            };
        }
        else if (isShallowLiteral_wVps8BlK(k))
        {
            if (canDiscard)
            {
                if (node.items)
                    BUG_JWcxU72K((x7E_r7bhmB7D("propagateType canDiscard("_fu, str_k2hK9UHj(k)) + ") has items."_fu), ctx, module, _here, ss, _helpers);
                else
                {
                    node.kind = s_kind_empty;
                    node.value = fu::str{};
                };
            };
        }
        else
        {
            if (!((k == s_kind_empty) || (k == s_kind_fndef)))
            {
                if (k == s_kind_copy)
                {
                    if (canDiscard)
                    {
                        fu::str _14 {};
                        (_14 = x7E_r7bhmB7D("Trying to discard a copy: "_fu, str_JtWMSeZV(node, ctx, module, _here, ss, _helpers, _current_fnort)), BUG_JWcxU72K(static_cast<fu::str&&>(_14), ctx, module, _here, ss, _helpers));
                    }
                    else if (relax_mask != RELAX_all)
                    {
                        fu::str _15 {};
                        (_15 = x7E_r7bhmB7D("Found a copy node during first relax: "_fu, str_JtWMSeZV(node, ctx, module, _here, ss, _helpers, _current_fnort)), BUG_JWcxU72K(static_cast<fu::str&&>(_15), ctx, module, _here, ss, _helpers));
                    }
                    else
                    {
                        const s_SolvedNode& item = only_fLVI01Cf(node.items);
                        bool isCopy = true;
                        if (!is_trivial_LriKPDIk(item.type.vtype, ctx, module))
                        {
                            if (tryTrackLastUse_pOE6hj2D(item.type.lifetime, relax_mask, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort))
                                isCopy = false;
                            else
                            {
                                if (!is_trivial_LriKPDIk(item.type.vtype, ctx, module))
                                {
                                    validateCOW_eBl2oCzc(item, s_TokenIdx(_here), s_Target{}, (*(const s_Argument*)fu::NIL), false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                                };
                                unsigned BL_130_v {};
                                const unsigned usage = (__extension__ (
                                {
                                    const s_Type& type = node.type;
                                    BL_130_v = ((type.vtype.quals & q_USAGE));
                                (void)0;}), BL_130_v);
                                const int flatCount = getFlatCount_LriKPDIk(node.type.vtype, ctx, module);
                                const unsigned maxUsage = getMaxUsage_oViGE7XZ(flatCount);
                                if (usage != maxUsage)
                                {
                                    s_Struct BL_132_v {};
                                    s_Struct s = (__extension__ (
                                    {
                                        const s_Struct& __partcopy_ref = tryLookupUserType_LriKPDIk(node.type.vtype, ctx, module);
                                        BL_132_v = (s_Struct { __partcopy_ref.kind, {}, s_Target(__partcopy_ref.target), fu::vec<s_ScopeItem>(__partcopy_ref.items), {}, {}, {}, {}, {}, {} });
                                    (void)0;}), static_cast<s_Struct&&>(BL_132_v));
                                    if (!(s.kind != s_kind_struct))
                                    {
                                        if (!USAGE_justOneThing_iR4FMLgu(usage, flatCount) && !isFieldChain_mwWi49a4(item, ctx, module, _here, ss, _helpers))
                                        {
                                            /*MOV*/ s_SolvedNode letdef = createLet_ROVwLAOE("__partcopy_ref"_fu, s_Flags{}, item, false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                                            s_Target _16 {};
                                            only_Yd6Gh1JU(node.items) = (_16 = s_Target((letdef.target ? letdef.target : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers))), CallerNode_McBUm2lt("__partcopy_ref"_fu, static_cast<s_Target&&>(_16), fu::vec<s_SolvedNode>{}, fu::view<int>{}, fu::view<fu::vec<s_Target>>{}, _current_fnort, ctx, module, options, _here, ss, _notes, _current_fn, _helpers));
                                            node = createBlock_ZR7NaTMf(static_cast<s_SolvedNode&&>(letdef), s_SolvedNode(node), ctx, module, _here, ss, _helpers);
                                        }
                                        else
                                        {
                                            /*MOV*/ fu::vec<s_SolvedNode> args {};
                                            for (int i = 0; i < s.items.size(); i++)
                                            {
                                                const s_Target fieldTarget = target_7YqD2G7N(s.items[i]);
                                                const s_Overload& field = GET_etmeeocQ(fieldTarget, ctx, module, _here, ss, _helpers);
                                                const s_UnpackedOffset _ = field_unpackOffset_nJsQdrUW(field, ctx, module, _here, ss, _helpers);
                                                /*MOV*/ s_Type usedFieldType = USAGE_fieldUsageFromStructUsage_jD2J2619(s_Type(field.type), usage, _.memberFlatOffset, _.memberFlatCount);
                                                if (isIrrelevant_DOKZ61Hc(usedFieldType))
                                                    args += createDefinit_s19RiMA4(field.type, ctx, module, _here, ss, _helpers, _current_fnort);
                                                else
                                                {
                                                    /*MOV*/ s_SolvedNode copy { node };
                                                    copy.type = static_cast<s_Type&&>(usedFieldType);
                                                    copy.items = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { CallerNode_McBUm2lt("__partcopy_field"_fu, s_Target(fieldTarget), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(item) } }, fu::view<int>{}, fu::view<fu::vec<s_Target>>{}, _current_fnort, ctx, module, options, _here, ss, _notes, _current_fn, _helpers) } };
                                                    args += static_cast<s_SolvedNode&&>(copy);
                                                };
                                            };
                                            /*MOV*/ s_Type type0 { node.type };
                                            node = CallerNode_McBUm2lt("__partcopy_struct"_fu, s_Target(s.target), static_cast<fu::vec<s_SolvedNode>&&>(args), fu::view<int>{}, fu::view<fu::vec<s_Target>>{}, _current_fnort, ctx, module, options, _here, ss, _notes, _current_fn, _helpers);
                                            node.type = static_cast<s_Type&&>(type0);
                                        };
                                        return propagateType_Mh9g8ikC(node, slot, relax_mask, kills, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                                    };
                                };
                                const s_SolvedNode& item_1 = only_fLVI01Cf(node.items);
                                if (!is_rx_copy_UHdpdATk(item_1.type))
                                {
                                    fu::str _17 {};
                                    (_17 = x7E_r7bhmB7D("A value is needed, but can neither copy nor move from: "_fu, str_JtWMSeZV(item_1, ctx, module, _here, ss, _helpers, _current_fnort)), fail_pNB52ATY(static_cast<fu::str&&>(_17), fu::view<char>{}, ctx, module, _here, ss, _helpers));
                                }
                                else if (!is_trivial_LriKPDIk(node.type.vtype, ctx, module))
                                {
                                    const s_SolverNotes note = s_SolverNotes_N_NonTrivAutoCopy;
                                    const s_Module& module_1 = module;
                                    const s_SolverState& ss_1 = ss;
                                    fu::view<s_Helpers> _helpers_1 = _helpers;
                                    if (note & options.break_notes)
                                    {
                                        fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
                                    }
                                    else
                                        _notes |= note;

                                };
                            };
                        };
                        s_SolvedNode& item_1 = only_Yd6Gh1JU(node.items);
                        propagateType_Mh9g8ikC(item_1, (isCopy ? make_copyable_57qzYcmt(s_Type(slot)) : s_Type(slot)), relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                        if (is_ref_vcLGyw8p(item_1.type))
                        {
                            if (!isCopy)
                            {
                                Lifetime_F_MOVED_FROM_O89kup5H(item_1.type.lifetime, ctx, module, _here, ss, _helpers, _current_fnort);
                                trackJustMoved_9ngtsiMy(item_1.type.lifetime, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
                                node.kind = s_kind_move;
                            };
                        }
                        else
                        {
                            fu::str _18 {};
                            (_18 = x7E_r7bhmB7D("Nothing to copy, item is not a ref: "_fu, str_JtWMSeZV(item_1, ctx, module, _here, ss, _helpers, _current_fnort)), BUG_JWcxU72K(static_cast<fu::str&&>(_18), ctx, module, _here, ss, _helpers));
                        };
                    };
                }
                else if (k == s_kind_arrlit)
                {
                    if (canDiscard)
                    {

                        {
                            const s_SolverNotes note = s_SolverNotes_N_UnusedArrlit;
                            const s_Module& module_1 = module;
                            const s_SolverState& ss_1 = ss;
                            fu::view<s_Helpers> _helpers_1 = _helpers;
                            if (note & options.break_notes)
                            {
                                fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
                            }
                            else
                                _notes |= note;

                        };
                        discardIntoBlock_MM3KAxQ6(node, slot, relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                    }
                    else
                    {
                        fu::view_mut<s_SolvedNode> items = node.items;
                        s_Type itemSlot = clear_sliceable_PUTlNd47(node.type, _here, ctx);
                        if (relax_mask == RELAX_all)
                        {
                            for (int i = 0; i < items.size(); i++)
                            {
                                s_SolvedNode* _19;
                                (_19 = &(items.mutref(i)), maybeCopyOrMove_x3JkHTxN(*_19, itemSlot, false, ctx, module, _here, ss, _helpers, _current_fnort));
                            };
                        };
                        for (int i = 0; i < items.size(); i++)
                        {
                            propagateType_Mh9g8ikC(items.mutref(i), itemSlot, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                        };
                    };
                }
                else if (k == s_kind_argid)
                {
                    node = only_fLVI01Cf(node.items);
                    propagateType_Mh9g8ikC(node, slot, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                }
                else if (k == s_kind_jump)
                {
                    s_Helpers h { node.helpers };
                    const s_HelpersData* BL_160_v;
                    while ((__extension__ (
                    {
                        const s_Helpers& h_1 = h;
                        BL_160_v = &(ss._helpers_data[h_1.index]);
                    (void)0;}), *BL_160_v).kills)
                    {
                        const s_HelpersData* BL_163_v;
                        h = (node.helpers = (__extension__ (
                        {
                            const s_Helpers& h_1 = h;
                            BL_163_v = &(ss._helpers_data[h_1.index]);
                        (void)0;}), *BL_163_v).kills);
                    };
                    const s_HelpersData* BL_164_v;
                    if ((__extension__ (
                    {
                        const s_Helpers& h_1 = h;
                        BL_164_v = &(ss._helpers_data[h_1.index]);
                    (void)0;}), *BL_164_v).ret_actual)
                    {
                        s_SolvedNode& expr = only_Yd6Gh1JU(node.items);
                        if (!_current_fn.TODO_FIX_defers)
                        {
                            const s_HelpersData* BL_167_v;
                            const s_Postdom* _20;
                            _current_fn.postdom = (*(_20 = &((__extension__ (
                            {
                                const s_Helpers& h_1 = h;
                                BL_167_v = &(ss._helpers_data[h_1.index]);
                            (void)0;}), *BL_167_v).postdom)) ? *_20 : BUG_JWcxU72K(x7E_r7bhmB7D("propagateType(jump): h.loop_start not available: #"_fu, fu::i64dec(h.index)), ctx, module, _here, ss, _helpers));
                            const s_HelpersData* BL_168_v;
                            if ((__extension__ (
                            {
                                const s_Helpers& h_1 = h;
                                BL_168_v = &(ss._helpers_data[h_1.index]);
                            (void)0;}), *BL_168_v).mask & s_HelpersMask_HM_Function)
                            {
                                const s_kind kind = expr.kind;
                                _current_fn.postdom.snap.exitPaths = (((kind == s_kind_empty) || (kind == s_kind_definit)) ? s_ExitPaths_XP_EmptyReturn : s_ExitPaths_XP_NonEmptyReturn);
                            };
                        };
                        const bool redundant = (kills ? (kills.index <= h.index) : false);
                        const s_Helpers& kills_1 = (redundant ? kills : h);
                        if (relax_mask == RELAX_all)
                        {
                            const s_HelpersData* BL_171_v;
                            maybeCopyOrMove_x3JkHTxN(expr, (__extension__ (
                            {
                                const s_Helpers& h_1 = h;
                                BL_171_v = &(ss._helpers_data[h_1.index]);
                            (void)0;}), *BL_171_v).ret_actual, false, ctx, module, _here, ss, _helpers, _current_fnort);
                        };
                        const s_HelpersData* BL_172_v;
                        propagateType_Mh9g8ikC(expr, s_Type((__extension__ (
                        {
                            const s_Helpers& h_1 = h;
                            BL_172_v = &(ss._helpers_data[h_1.index]);
                        (void)0;}), *BL_172_v).ret_actual), relax_mask, kills_1, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                        if (redundant)
                            node = expr;
                        else
                        {
                            s_HelpersData* BL_175_v;
                            (__extension__ (
                            {
                                const s_Helpers& h_1 = h;
                                BL_175_v = &(ss._helpers_data.mutref(h_1.index));
                            (void)0;}), *BL_175_v).mask |= s_HelpersMask_HM_LabelUsed;
                            if (tryInjectJumps_i7cqEK4H(expr, h, ctx, module, _here, ss, _helpers, _current_fnort))
                                node = expr;

                        };
                    }
                    else
                        BUG_JWcxU72K(x7E_r7bhmB7D("propagateType(jump): h.ret_actual not available: #"_fu, fu::i64dec(h.index)), ctx, module, _here, ss, _helpers);

                }
                else if (k == s_kind_block)
                {
                    const s_Helpers h { node.helpers };
                    if (ss._helpers_data[h.index].ret_actual)
                    {
                        if (relax_mask == RELAX_all)
                            mcom_BlockReturns_CopyOrMoveDecision_ClXRgAzD(h, ctx, module, _here, ss, _helpers, _current_fnort);

                        try_relax_KcQXgxxc(ss._helpers_data.mutref(h.index).ret_actual, slot, relax_mask);
                        if ((relax_mask == RELAX_all) && !canDiscard && !is_never_8KZIyCKE(ss._helpers_data[h.index].ret_actual))
                        {
                            const s_Type* _21;
                            s_SolvedNode* _22;
                            (_21 = &(ss._helpers_data[h.index].ret_actual), _22 = &(last_Yd6Gh1JU(node.items)), maybeCopyOrMove_x3JkHTxN(*_22, *_21, false, ctx, module, _here, ss, _helpers, _current_fnort));
                        };
                    };
                    if (h)
                    {
                        ss._helpers_data.mutref(h.index).mask &= s_HelpersMask(~s_HelpersMask_HM_LabelUsed);
                        ss._helpers_data.mutref(h.index).kills = s_Helpers(kills);
                    };
                    Breakable_begin_VYfRgzXf(false, node, relax_mask, ctx, _here, ss, _current_fn);
                    fu_DEFER(Breakable_end_c4ppKYNy(false, node, relax_mask, ctx, _here, ss, _current_fn));
                    fu::vec<s_SolvedNode>& items = node.items;

                    {
                        int TODO_FIX_defers = 0;
                        for (int i = 0; i < (items.size() - 1); i++)
                        {
                            s_SolvedNode& node_1 = items.mutref(i);
                            const s_kind k_1 = node_1.kind;
                            if (k_1 == s_kind_defer)
                            {
                                TODO_FIX_defers++;
                                s_SolvedNode& expr = only_Yd6Gh1JU(node_1.items);
                                propagateType_Mh9g8ikC(expr, t_void, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                                if (isDiscardable_CdTNpSbI(expr, ctx, module, _here, ss, _helpers))
                                {

                                    {
                                        const s_SolverNotes note = s_SolverNotes_N_UnusedDefer;
                                        const s_Module& module_1 = module;
                                        const s_SolverState& ss_1 = ss;
                                        fu::view<s_Helpers> _helpers_1 = _helpers;
                                        if (note & options.break_notes)
                                        {
                                            fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
                                        }
                                        else
                                            _notes |= note;

                                    };
                                    items.splice(i--, 1);
                                };
                            }
                            else if ((k_1 == s_kind_and) || (k_1 == s_kind_or))
                            {
                                if (is_never_8KZIyCKE(last_fLVI01Cf(node_1.items).type))
                                {
                                    /*MOV*/ fu::vec<s_SolvedNode> cond = fu::slice(node_1.items, 0, (node_1.items.size() - 1));
                                    /*MOV*/ s_SolvedNode cons { node_1.items[(node_1.items.size() - 1)] };
                                    fu::vec<s_SolvedNode> alt = fu::slice(items, (i + 1), items.size());
                                    items.splice((i + 1), alt.size());
                                    s_SolvedNode cond_1 = ((k_1 == s_kind_and) ? createAnd_4n5O7WqG(cond, s_Type(t_proposition), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort) : createOr_f3YOZ9vs(static_cast<fu::vec<s_SolvedNode>&&>(cond), s_Type(t_proposition), ctx, module, _here, ss, _helpers, _current_fnort));
                                    /*MOV*/ s_SolvedNode alt_1 = createBlock_Q2a0BBmY(last_fLVI01Cf(alt).type, fu::vec<s_SolvedNode>(alt), s_Helpers{}, ctx, module, _here, ss, _helpers);
                                    s_SolvedNode _23 {};
                                    /*MOV*/ s_SolvedNode replacement = (_23 = s_SolvedNode(((k_1 == s_kind_and) ? cons : alt_1)), createIf_HnLK3uFo(cond_1, static_cast<s_SolvedNode&&>(_23), static_cast<s_SolvedNode&&>(((k_1 == s_kind_and) ? alt_1 : cons)), s_Type{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
                                    items.mutref(i) = static_cast<s_SolvedNode&&>(replacement);
                                };
                            };
                        };
                        _current_fn.TODO_FIX_defers += TODO_FIX_defers;
                        while (items)
                        {
                            s_SolvedNode& tail = last_Yd6Gh1JU(items);
                            if (tail.kind == s_kind_defer)
                            {
                                tail = ((tail.value == "err"_fu) ? createEmpty_zptVo9Nn(s_kind_empty, t_void, s_Target{}, _here) : s_SolvedNode(only_fLVI01Cf(tail.items)));
                            };
                            const s_Helpers kills_1 { (!(s_HelpersMask((ss._helpers_data[h.index].mask & s_HelpersMask_HM_Function)) && !is_void_8KZIyCKE(ss._helpers_data[h.index].ret_actual)) ? (kills ? kills : h) : (*(const s_Helpers*)fu::NIL)) };
                            propagateType_Mh9g8ikC(tail, slot, relax_mask, kills_1, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                            if (!canDiscard || !isDiscardable_CdTNpSbI(tail, ctx, module, _here, ss, _helpers))
                                break;
                            else
                                items.pop();

                        };
                        for (int i_1 = (items.size() - 1); i_1-- > 0; )
                        {
                            s_SolvedNode& expr = items.mutref(i_1);
                            if (expr.kind != s_kind_defer)
                            {
                                propagateType_Mh9g8ikC(expr, t_void, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                                if (isDiscardable_CdTNpSbI(expr, ctx, module, _here, ss, _helpers))
                                    items.splice(i_1, 1);

                            };
                        };
                        _current_fn.TODO_FIX_defers -= TODO_FIX_defers;
                    };
                    if (ss._helpers_data[h.index].target == _current_fn.out.target)
                        _current_fn_eachArg_BACK_kk4Gefwg(relax_mask, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

                    if (!items && !s_HelpersMask((ss._helpers_data[h.index].mask & s_HelpersMask_HM_Function)))
                    {
                        if (!canDiscard)
                        {
                            fu::str _24 {};
                            (_24 = ("Empty block type is relevant: "_fu + humanizeType_XI6W2OpL(node.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)), BUG_JWcxU72K(static_cast<fu::str&&>(_24), ctx, module, _here, ss, _helpers));
                        }
                        else
                        {
                            node.kind = s_kind_empty;
                            node.helpers = s_Helpers{};
                        };
                    }
                    else if ((items.size() == 1) && !s_HelpersMask((ss._helpers_data[h.index].mask & s_HelpersMask((s_HelpersMask_HM_LabelUsed | s_HelpersMask_HM_Function)))))
                        node = only_fLVI01Cf(items);
                    else
                    {
                        if (canDiscard)
                            node.type = t_void;
                        else if (kills)
                        {
                            if (items)
                            {
                                const s_SolvedNode& tail = last_fLVI01Cf(items);
                                if (ss._helpers_data[h.index].ret_actual)
                                {
                                    reportReturnType_Np5I4bmr(h, tail.type, false, ctx, module, _here, ss, _helpers, _current_fnort);
                                    node.type = ss._helpers_data[h.index].ret_actual;
                                }
                                else
                                    node.type = tail.type;

                            };
                        };
                        const s_SolvedNode& tail = if_last_fLVI01Cf(node.items);
                        const s_HelpersData* BL_213_v;
                        if ((tail.kind == s_kind_block) && !s_HelpersMask(((__extension__ (
                        {
                            const s_Helpers& h_1 = tail.helpers;
                            BL_213_v = &(ss._helpers_data[h_1.index]);
                        (void)0;}), *BL_213_v).mask & s_HelpersMask_HM_LabelUsed)))
                            node.items.splice((node.items.size() - 1), 1, fu::vec<s_SolvedNode>(tail.items));

                    };
                }
                else if (k == s_kind_root)
                {
                    for (int i = node.items.size(); i-- > 0; )
                    {
                        propagateType_Mh9g8ikC(node.items.mutref(i), t_void, relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                    };
                }
                else if (k == s_kind_pragma)
                {
                    for (int i = 0; i < node.items.size(); i++)
                    {
                        s_Type _25 {};
                        (_25 = s_Type(node.items[i].type), propagateType_Mh9g8ikC(node.items.mutref(i), static_cast<s_Type&&>(_25), relax_mask, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
                    };
                    if (node.value == "clock"_fu)
                        _current_fn.effects.fx_mask |= EFFECTS_clock;
                    else if (node.value == "input"_fu)
                        _current_fn.effects.fx_mask |= EFFECTS_input;
                    else if (node.value == "output"_fu)
                        _current_fn.effects.fx_mask |= EFFECTS_output;

                }
                else
                {
                    fail_pNB52ATY((x7E_r7bhmB7D("TODO: propagateType("_fu, str_k2hK9UHj(k)) + ")."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
                };
            };
        };
    };
}

static bool acceptsTempCopies_FKJ8qA7s(const s_Overload& o, const s_Context& ctx, const s_TokenIdx& _here)
{
    if ((o.kind == s_kind_var) && !(o.flags & (s_Flags_F_IMPLICIT | s_Flags_F_REF)))
        return !is_mutref_tkXzsAAo(o.type, _here, ctx);
    else
        return false;

}

static bool willPassByValue_tIY7ZAba(const s_Overload& o, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (acceptsTempCopies_FKJ8qA7s(o, ctx, _here))
        return isPassByValue_6bkyMkO3(o.type.vtype);
    else
        return false;

}

inline static void l_27_48_PTpBYwRD(const s_Target& target, fu::vec<int>& consts, fu::vec<int>& refs, bool& outOfOrderArgTargets, int& last, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    if (target.modid == -_current_fn.out.target.index)
    {
        const int t = target.index;
        if (last == t)
        {
            BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
        }
        else
        {
            int _0 {};
            if ((_0 = last, (_0 > (last = t))))
                outOfOrderArgTargets = true;

            const s_Type& type = GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).solved.type;
            if (is_mutref_tkXzsAAo(type, _here, ctx) && has_35mEQu7d(_current_fn.events.ever_written, target.index))
                refs += t;
            else if (is_ref_vcLGyw8p(type) && !willPassByValue_tIY7ZAba(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers), ctx, _here))
                consts += t;

        };
    }
    else
    {
        BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
    };
}

inline static void _current_fn_eachArg_FWD_g8BtucJr(fu::vec<int>& consts, fu::vec<int>& refs, bool& outOfOrderArgTargets, int& last, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = _current_fn.out.items[i].target;
        if (t && (GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).flags & s_Flags_F_ARG))
            l_27_48_PTpBYwRD(t, consts, refs, outOfOrderArgTargets, last, ctx, module, _here, ss, _current_fn, _helpers);

    };
}

                                #ifndef DEF_sort_nIMPg2Lpmx1
                                #define DEF_sort_nIMPg2Lpmx1
inline void sort_nIMPg2Lp(fu::vec<int>& a)
{
    auto* data = a.data_mut();
    std::sort(data, data + a.size());

}
                                #endif

static void clear_U4dtihtV(s_Events& events)
{
    events = s_Events{};
}

inline static void l_27_49_gGeY440q(const s_Target& target, const int position, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    if (target.modid == -_current_fn.out.target.index)
        Reference_trackArgument_uPYDkWNH(_current_fn.flow, target.index, position, _here, ctx);
    else
    {
        const s_Overload* _0;
        fu::str _1 {};
        (_1 = x7E_r7bhmB7D("Arg target not local to current-fn: "_fu, (_0 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_1), ctx, module, _here, ss, _helpers));
    };
}

inline static void _current_fn_eachArg_FWD_N06igmyl(const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = _current_fn.out.items[i].target;
        if (t && (GET_etmeeocQ(t, ctx, module, _here, ss, _helpers).flags & s_Flags_F_ARG))
            l_27_49_gGeY440q(t, i, ctx, module, _here, ss, _current_fn, _helpers);

    };
}

                                #ifndef DEF_add_DLIRqEDZnd9
                                #define DEF_add_DLIRqEDZnd9
inline void add_DLIRqEDZ(fu::vec<int>& a, fu::view<int> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const int X = a[x];
        const int Y = b[y];
        const int cmp = x3Cx3E_AsFD7H8N(X, Y);
        if ((cmp >= 0))
        {
            if (cmp != 0)
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

static fu::vec<s_SolvedNode>& args_7DNlhEOT(s_SolvedNode& callsite)
{
    return callsite.items;
}

static s_Target& target_yd5vrCD7(s_SolvedNode& callsite)
{
    return callsite.target;
}

static s_Events& events_Up7G3VfM(s_CurrentFn& _current_fn)
{
    return _current_fn.events;
}

static s_RWEvent& RWEvent_gPjG4yM1(const s_WriteID& write, s_CurrentFn& _current_fn)
{
    return _current_fn.events.writes.mutref((write.id - 1));
}

static bool acceptsSoftRisk_939FpG3i(const s_Overload& o, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (o.flags & s_Flags_F_ARG)
        return !acceptsTempCopies_FKJ8qA7s(o, ctx, _here);
    else
        return false;

}

static bool RESOLVE_byAAR_9RqxdSn8(const int read, const int write, const bool trySoft, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (pass == s_BorrowCheckPass_BCK_aar)
    {
        if (read != write)
        {
            if ((!trySoft || !acceptsSoftRisk_939FpG3i(GET_etmeeocQ(nested_YRYXainn(read, _current_fnort, module), ctx, module, _here, ss, _helpers), ctx, _here)) && !add_ys5ADtDp(grow_if_oob_rttDpjXH(_current_fn.flow.at_hard_risk, write), read))
                return true;
            else if (!add_ys5ADtDp(grow_if_oob_rttDpjXH(_current_fn.flow.at_soft_risk, write), read))
                return true;
            else
            {
                const bool firstTry_to_ascendWrites = (write > read);
                for (int i = 0; i < 2; i++)
                {
                    if (!i == firstTry_to_ascendWrites)
                    {
                        fu::vec<int> parents { unless_oob_N2HKpGLL(_current_fn.flow.arg_parents, write) };
                        if (parents)
                        {
                            for (int i_1 = 0; i_1 < parents.size(); i_1++)
                            {
                                const int parent = parents[i_1];
                                if (parent != read)
                                    RESOLVE_byAAR_9RqxdSn8(read, parent, trySoft, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);

                            };
                            return true;
                        };
                    }
                    else
                    {
                        fu::vec<int> parents { unless_oob_N2HKpGLL(_current_fn.flow.arg_parents, read) };
                        if (parents)
                        {
                            for (int i_1 = 0; i_1 < parents.size(); i_1++)
                            {
                                const int parent = parents[i_1];
                                if (parent != write)
                                    RESOLVE_byAAR_9RqxdSn8(parent, write, false, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);

                            };
                            return true;
                        };
                    };
                };
                return true;
            };
        }
        else
            BUG_JWcxU72K("RESOLVE_byAAR: read == write"_fu, ctx, module, _here, ss, _helpers);

    }
    else
    {
        BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
    };
}

static bool RESOLVE_byAAR_uUwmIeVL(fu::view<s_WriteID> writes, const int read, const bool trySoft, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    for (int i = 0; i < writes.size(); i++)
    {
        int _0 {};
        (_0 = RWEvent_gPjG4yM1(writes[i], _current_fn).rw_target, RESOLVE_byAAR_9RqxdSn8(read, _0, trySoft, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort));
    };
    return true;
}

static bool RESOLVE_byMutvar_GAoYI60E(const int target, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (pass == s_BorrowCheckPass_BCK_bck)
    {
        const s_Target t = nested_YRYXainn(target, _current_fnort, module);
        s_Overload& o = GET_mut_TpIPZdoW(t, module, ss);
        if (!acceptsTempCopies_FKJ8qA7s(o, ctx, _here))
            return false;
        else if (is_mutref_tkXzsAAo(o.type, _here, ctx))
        {
            fu::str _0 {};
            (_0 = (x7E_r7bhmB7D(str_1mm3y0E0(o, ctx, module, _here, ss, _helpers), ": Not F_REF but type.is_mutref"_fu) + " in RESOLVE_byMutvar: is this a problem?"_fu), BUG_JWcxU72K(static_cast<fu::str&&>(_0), ctx, module, _here, ss, _helpers));
        }
        else if (o.kind == s_kind_var)
        {
            if (o.type.lifetime.uni0n.size() == 1)
            {
                if (!is_rx_copy_UHdpdATk(o.type))
                    return false;
                else
                {
                    if (!(o.flags & s_Flags_F_MUT))
                    {
                        o.flags |= s_Flags_F_MUT;
                        /*MOV*/ s_Type t_let = clear_refs_57qzYcmt(s_Type(o.type));
                        o.solved.type = static_cast<s_Type&&>(t_let);
                    };
                    return true;
                };
            }
            else
                BUG_JWcxU72K("RESOLVE_byMutvar: lt.len != 1"_fu, ctx, module, _here, ss, _helpers);

        }
        else
            BUG_JWcxU72K("RESOLVE_byMutvar: Not a variable."_fu, ctx, module, _here, ss, _helpers);

    }
    else
    {
        BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
    };
}

                                #ifndef DEF_first_I2knUJR1OI2
                                #define DEF_first_I2knUJR1OI2
inline const s_WriteID& first_I2knUJR1(fu::view<s_WriteID> s)
{
    if (s.size())
        return s[0];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_0Nh9J6yF(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

inline static bool l_27_46_I7fc9G7N(const s_SolvedNode& node, const s_RWEvent& w, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (((node.kind == s_kind_call) || (w.position < 0)) && (node.items.size() > w.position) && (node.token == w.token))
    {
        const s_SolvedNode& arg = ((w.position < 0) ? node : node.items[w.position]);
        if (is_mutref_tkXzsAAo(arg.type, _here, ctx))
        {
            return has_6Ghn5Rig(arg.type.lifetime.uni0n, Region_fromLocal_Uj5ZOr54(w.rw_target));
        }
        else
            return false;

    }
    else
        return false;

}

inline static const s_SolvedNode& l_27_44_Bnurb74b(const s_SolvedNode& node, s_SolvedNode& result, const s_RWEvent& w, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (l_27_46_I7fc9G7N(node, w, ctx, _here))
        return (result = node);
    else
        return (*(const s_SolvedNode*)fu::NIL);

}

inline static void SLOW_traverse_BGNcvt1R(const s_SolvedNode& node, s_SolvedNode& result, const s_RWEvent& w, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
    while (stack)
    {
        s_SolvedNode node_1 = TODO_FIX_pop_0Nh9J6yF(stack);
        const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_crossmodule_PwJIgzg5(node_1.target, _current_fnort, ctx, module, _here, ss, _helpers).solved : node_1);
        l_27_44_Bnurb74b(node_2, result, w, ctx, _here);
        for (int i = node_2.items.size(); i-- > 0; )
            stack += s_SolvedNode(node_2.items[i]);

    };
}

inline static s_SolvedNode SLOW_find_LjL3Q7BQ(const s_RWEvent& w, const s_SolvedNode& root, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ s_SolvedNode result {};
    SLOW_traverse_BGNcvt1R(root, result, w, ctx, module, _here, ss, _helpers, _current_fnort);
    return /*NRVO*/ result;
}

static s_SolvedNode SLOW_findByWriteID_mcnJDkEC(const s_WriteID& write, const s_SolvedNode& root, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    const s_RWEvent& w = RWEvent_gPjG4yM1(write, _current_fn);
    s_SolvedNode _0 {};
    return (_0 = SLOW_find_LjL3Q7BQ(w, root, ctx, module, _here, ss, _helpers, _current_fnort)) ? static_cast<s_SolvedNode&&>(_0) : BUG_JWcxU72K((x7E_r7bhmB7D("Cannot find WriteID("_fu, fu::i64dec(write.id)) + ")."_fu), ctx, module, _here, ss, _helpers);
}

inline static void l_7_19_Ep6g4sbe(const s_Region& item, fu::vec<s_Region>& result, const bool useResult)
{
    if (useResult)
        result += s_Region(item);

}

inline static void l_7_17_HOo07hqL(const int left, const fu::vec<s_Region>& l, fu::vec<s_Region>& result, bool& useResult)
{
    if (!useResult)
    {
        useResult = true;
        result = fu::slice(l, 0, left);
    };
}

inline static void merge_nywl0F9B(fu::view<s_Region> l, fu::view<s_Region> r, const fu::vec<s_Region>& l_1, fu::vec<s_Region>& result, bool& useResult)
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
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : +1) : (r_done ? -1 : x3Cx3E_gKq3fKpB(l[li], r[ri])));
        if (cmp == 0)
        {
            l_7_19_Ep6g4sbe(l[li], result, useResult);
            li++;
            ri++;
        }
        else if (cmp < 0)
        {
            l_7_17_HOo07hqL(li, l_1, result, useResult);
            li++;
        }
        else
            ri++;

    };
}

                                #ifndef DEF_inter_Z7to7PdZ5lc
                                #define DEF_inter_Z7to7PdZ5lc
inline fu::vec<s_Region> inter_Z7to7PdZ(const fu::vec<s_Region>& l, const fu::vec<s_Region>& r)
{
    if (r.size() < l.size())
        return inter_Z7to7PdZ(r, l);
    else
    {
        /*MOV*/ fu::vec<s_Region> result {};
        bool useResult = false;
        merge_nywl0F9B(l, r, l, result, useResult);
        if (useResult)
            return /*NRVO*/ result;
        else
            return fu::vec<s_Region>(l);

    };
}
                                #endif

static fu::str RWEvent_stack_6Jl3t5fT(const s_WriteID& write, const s_SolvedNode& root, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    s_SolvedNode node = SLOW_findByWriteID_mcnJDkEC(write, root, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
    if (node.kind != s_kind_call)
        return "\n\tVia "_fu + qKW_bF2G8fJR(str_k2hK9UHj(node.kind));
    else
    {
        fu::str stack {};

        {
            s_Target _0 {};
            const fu::vec<s_Region>& uni0n = (_0 = nested_YRYXainn(RWEvent_gPjG4yM1(write, _current_fn).rw_target, _current_fnort, module), GET_etmeeocQ(static_cast<s_Target&&>(_0), ctx, module, _here, ss, _helpers)).type.lifetime.uni0n;
            if (uni0n)
            {
                for (int i = 0; i < node.items.size(); i++)
                {
                    const s_SolvedNode& arg = node.items[i];
                    if (inter_Z7to7PdZ(arg.type.lifetime.uni0n, uni0n))
                    {
                        const s_Argument& host_arg = EXT_EOYtG69B(node.target, ctx, module, ss).args[i];
                        if (host_arg.flags & s_Flags_F_WRITTEN_TO)
                        {
                            stack = qSTACK_84yMNGFC(node.target, i, fu::view<s_Target>{}, s_ArgQuery{}, ctx, module, _here, ss, _helpers);
                            break;
                        };
                    };
                };
            };
        };
        const s_Overload& o = GET_etmeeocQ(node.target, ctx, module, _here, ss, _helpers);
        return ((addr_and_snippet_YNpW6K7i(node.token, s_CodeFmt{}, fu::view<char>{}, ctx, module) + "\n\tAt call to "_fu) + qID_bF2G8fJR(o.name)) + stack;
    };
}

                                #ifndef DEF_str_Gux4tE3mN19
                                #define DEF_str_Gux4tE3mN19
inline fu::str str_Gux4tE3m(const s_BorrowCheckPass n)
{
    if (n == s_BorrowCheckPass_BCK_bck)
        return "BCK_bck"_fu;
    else if (n == s_BorrowCheckPass_BCK_aar)
        return "BCK_aar"_fu;
    else if (n == s_BorrowCheckPass_BCK_ooe)
        return "BCK_ooe"_fu;

    return fu::i64dec(int64_t(n));
}
                                #endif

[[noreturn]] static fu::never cannotFailAfterBCK_bOKaNxcM(const fu::str& reason, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (pass == s_BorrowCheckPass_BCK_bck)
    {
        fail_pNB52ATY(fu::str(reason), fu::view<char>{}, ctx, module, _here, ss, _helpers);
    }
    else
        BUG_JWcxU72K((x7E_r7bhmB7D(str_Gux4tE3m(pass), " is trying to emit an error:\n\n\t"_fu) + reason), ctx, module, _here, ss, _helpers);

}

                                #ifndef DEF_grow_if_oob_SWVaNBjZc57
                                #define DEF_grow_if_oob_SWVaNBjZc57
inline s_ReadID& grow_if_oob_SWVaNBjZ(fu::vec<s_ReadID>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void bck_trackRead_RwdAhaNA(const s_SolvedNode& callsite, const s_SolvedNode& root, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (!(!isLocal_HC98KjW6(callsite.target)))
    {
        _here = callsite.token;
        const int target = callsite.target.index;
        const int loop_start = (callsite._loop_start ? callsite._loop_start : BUG_JWcxU72K("bck_trackRead: loop_start not set on callsite."_fu, ctx, module, _here, ss, _helpers));
        if (events_Up7G3VfM(_current_fn).snap.invalidated_by.size() > target)
        {
            fu::vec<s_WriteID> u { events_Up7G3VfM(_current_fn).snap.invalidated_by[target] };
            if (u)
            {
                if (((pass == s_BorrowCheckPass_BCK_aar) ? !RESOLVE_byAAR_uUwmIeVL(u, target, true, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort) : !RESOLVE_byMutvar_GAoYI60E(target, pass, ctx, module, _here, ss, _helpers, _current_fnort)))
                {
                    const s_Overload* _0;
                    fu::str _1 {};
                    s_Target _2 {};
                    const s_Overload* _3;
                    fu::str _4 {};
                    fu::str _5 {};
                    (_5 = (_4 = ((_1 = ((x7E_r7bhmB7D(("Cannot access"_fu + " "_fu), (_0 = &(GET_etmeeocQ(nested_YRYXainn(target, _current_fnort, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers))) + ", reference invalidated by write to"_fu) + " "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_1), (_3 = &((_2 = nested_YRYXainn(RWEvent_gPjG4yM1(first_I2knUJR1(u), _current_fn).rw_target, _current_fnort, module), GET_etmeeocQ(static_cast<s_Target&&>(_2), ctx, module, _here, ss, _helpers))), str_1mm3y0E0(*_3, ctx, module, _here, ss, _helpers)))) + " at "_fu), (static_cast<fu::str&&>(_4) + RWEvent_stack_6Jl3t5fT(first_I2knUJR1(u), root, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort))), cannotFailAfterBCK_bOKaNxcM(static_cast<fu::str&&>(_5), pass, ctx, module, _here, ss, _helpers));
                }
                else
                {
                    events_Up7G3VfM(_current_fn).snap.invalidated_by.mutref(target) = fu::vec<s_WriteID>{};
                };
            };
        };
        events_Up7G3VfM(_current_fn).reads += s_RWEvent { target, s_TokenIdx(callsite.token), 0 };
        const s_ReadID readID = s_ReadID { events_Up7G3VfM(_current_fn).reads.size() };
        if (target < loop_start)
        {
            s_ReadID& a = grow_if_oob_SWVaNBjZ(events_Up7G3VfM(_current_fn).used_in_a_loop, target);
            if (!(a))
                a = readID;

        };
    };
}

                                #ifndef DEF_grow_oob_iCoTajH5ug7
                                #define DEF_grow_oob_iCoTajH5ug7
inline int& grow_oob_iCoTajH5(fu::vec<int>& a, const int i, const int fill)
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

inline static void l_27_47_prBWiw7f(const int i, const int seqIdx, s_SolvedNode& callsite, fu::vec<int>& ooe_reads, fu::vec<int>& ooe_writes, fu::vec<int>& ooe_argIdx, int& ooe_read0, int& ooe_write0, const s_SolvedNode& root, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    ooe_argIdx += i;
    s_SolvedNode* _0;
    (_0 = &(args_7DNlhEOT(callsite).mutref(i)), bck_node_i2XLbfvW(*_0, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
    const int r1 = _current_fn.events.reads.size();
    const int w1 = _current_fn.events.writes.size();
    if (r1 > ooe_read0)
        grow_oob_iCoTajH5(ooe_reads, seqIdx, ooe_read0) = r1;

    if (w1 > ooe_write0)
        grow_oob_iCoTajH5(ooe_writes, seqIdx, ooe_write0) = w1;

    ooe_read0 = r1;
    ooe_write0 = w1;
}

                                #ifndef DEF_argsForward_zyiga2hRE54
                                #define DEF_argsForward_zyiga2hRE54
inline void argsForward_zyiga2hR(const bool RTL, fu::view<s_Argument> host_args, const int seqIdx_start, s_SolvedNode& callsite, fu::vec<int>& ooe_reads, fu::vec<int>& ooe_writes, fu::vec<int>& ooe_argIdx, int& ooe_read0, int& ooe_write0, const s_SolvedNode& root, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort, const s_TokenIdx& _here_1, const s_Context& ctx_1)
{
    int seqIdx = 0;
    int lastPass = 1;
    for (int pass_1 = 0; pass_1 < lastPass; pass_1++)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const s_Argument& host_arg = host_args[i];
            if (!!pass_1 != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_tkXzsAAo(host_arg.type, _here_1, ctx_1))))
                lastPass = 2;
            else
            {
                if ((seqIdx_start <= seqIdx))
                    l_27_47_prBWiw7f(i, seqIdx, callsite, ooe_reads, ooe_writes, ooe_argIdx, ooe_read0, ooe_write0, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

                seqIdx++;
            };
        };
    };
}
                                #endif

                                #ifndef DEF_if_first_u1BvfftQbGh
                                #define DEF_if_first_u1BvfftQbGh
inline const s_Region& if_first_u1BvfftQ(fu::view<s_Region> s)
{
    if (s.size())
        return s[0];
    else
        return (*(const s_Region*)fu::NIL);

}
                                #endif

static s_Lifetime Lifetime_unwind_noStatic_SHtPTd8F(/*MOV*/ s_Lifetime&& lifetime, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (Region_isStatic_28foEZVg(if_first_u1BvfftQ(lifetime.uni0n)))
    {
        lifetime.uni0n.shift();
    };
    return Lifetime_unwind_5T70CmHN(static_cast<s_Lifetime&&>(lifetime), 0, ctx, module, _here, ss, _helpers, _current_fnort);
}

static bool softRiskSafe_qSinJ0n3(const s_SolvedNode& arg, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    return isFieldChain_mwWi49a4(arg, ctx, module, _here, ss, _helpers);
}

static s_Flow& flow_PEAdUGfe(s_CurrentFn& _current_fn)
{
    return _current_fn.flow;
}

                                #ifndef DEF_has_inter_8z4LAFxNgpb
                                #define DEF_has_inter_8z4LAFxNgpb
inline bool has_inter_8z4LAFxN(fu::view<int> l, fu::view<int> r)
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
            (void)0;}), static_cast<fu::never&&>(BL_4_v)) : +1) : (r_done ? -1 : x3Cx3E_AsFD7H8N(l[li], r[ri])));
            if (cmp == 0)
                return true;
            else if (cmp < 0)
                li++;
            else
                ri++;

        };
      } BL_1:;
    };
    return false;
}
                                #endif

static bool isInvalidatedBy_2QOSlQ4X(fu::view<s_Region> read, fu::view<s_Region> write, s_CurrentFn& _current_fn)
{
    fu::view<int> read_1 = fu::view_of(read, int{});
    for (int i = 0; i < write.size(); i++)
    {
        const int w = Region_asLocal_AEPMcxRF(write[i]);
        if (w && has_inter_8z4LAFxN(unless_oob_N2HKpGLL(flow_PEAdUGfe(_current_fn).invalidates, w), read_1))
            return true;

    };
    return false;
}

static bool RESOLVE_byMutvar_ikTAJ22N(const s_Target& target, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (target.modid == -_current_fn.out.target.index)
        return RESOLVE_byMutvar_GAoYI60E(target.index, pass, ctx, module, _here, ss, _helpers, _current_fnort);
    else
        return false;

}

static bool RESOLVE_byTempCopy_lRNCJNPU(s_SolvedNode& node, const s_Type& slot, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    s_Type slot_1 = make_copyable_57qzYcmt(clear_refs_57qzYcmt(s_Type(slot)));
    maybeCopyOrMove_x3JkHTxN(node, slot_1, false, ctx, module, _here, ss, _helpers, _current_fnort);
    return true;
}

static bool RESOLVE_byTempCopy_luyuhaat(s_SolvedNode& callsite, const int position, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (pass == s_BorrowCheckPass_BCK_bck)
    {
        if (_current_fn.asserts & s_DeclAsserts_A_FAST)
            return false;
        else
        {
            const s_Target& target = callsite.target;
            fu::vec<s_Argument> host_args { EXT_EOYtG69B(target, ctx, module, ss).args };
            s_Argument BL_4_v {};
            s_Argument host_arg = (__extension__ (
            {
                const s_Argument& __partcopy_ref = host_args[position];
                BL_4_v = (s_Argument { {}, {}, s_Type(__partcopy_ref.type), {}, __partcopy_ref.flags, {}, {}, {} });
            (void)0;}), static_cast<s_Argument&&>(BL_4_v));
            const s_SolvedNode& arg = callsite.items[position];
            if (!is_rx_copy_UHdpdATk(arg.type))
                return false;
            else if ((arg.kind == s_kind_call) && RESOLVE_byMutvar_ikTAJ22N(arg.target, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort))
                return true;
            else if (!acceptsTempCopies_xP75sVQ4(host_arg, ctx, _here))
                return false;
            else
            {
                const s_Region argLt = Region_fromArgPosition_vmMI39NZ(position);
                const bool isReturned = has_6Ghn5Rig(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).type.lifetime.uni0n, argLt);
                if (isReturned)
                    return false;
                else
                {
                    s_SolvedNode* _0;
                    return (_0 = &(callsite.items.mutref(position)), RESOLVE_byTempCopy_lRNCJNPU(*_0, host_args[position].type, ctx, module, _here, ss, _helpers, _current_fnort));
                };
            };
        };
    }
    else
    {
        BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
    };
}

static void validate_DVjCYXja(const int i1, s_SolvedNode& callsite, fu::view<s_Argument> host_args, fu::view<s_Lifetime> bck_unwound, const int arg_first, const int arg_last, const int i0, const s_Argument& host_arg0, const s_SolvedNode& arg0, const s_Lifetime& shallow0, const s_Lifetime& unwound0, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    const s_Argument& host_arg1 = host_args[i1];
    if (!(!has_35mEQu7d(host_arg0.soft_risk, i1) && !has_35mEQu7d(host_arg1.soft_risk, i0)))
    {
        const s_SolvedNode& arg1 = args_7DNlhEOT(callsite)[i1];
        const s_Lifetime& shallow1 = arg1.type.lifetime;
        if (pass == s_BorrowCheckPass_BCK_aar)
        {
            if ((i0 >= arg_first) && (i0 <= arg_last) && (i1 >= arg_first) && (i1 <= arg_last))
            {
                for (int r0 = 0; r0 < shallow0.uni0n.size(); r0++)
                {
                    const int region0 = Region_asLocal_AEPMcxRF(shallow0.uni0n[r0]);
                    if (region0)
                    {
                        for (int r1 = 0; r1 < shallow1.uni0n.size(); r1++)
                        {
                            const int region1 = Region_asLocal_AEPMcxRF(shallow1.uni0n[r1]);
                            if (region1 && (region0 != region1))
                            {
                                if (is_mutref_tkXzsAAo(host_arg0.type, _here, ctx))
                                {
                                    bool _0 {};
                                    (_0 = (!has_35mEQu7d(host_arg0.hard_risk, i1) ? softRiskSafe_qSinJ0n3(arg1, ctx, module, _here, ss, _helpers) : false), RESOLVE_byAAR_9RqxdSn8(region1, region0, _0, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort));
                                };
                                if (is_mutref_tkXzsAAo(host_arg1.type, _here, ctx))
                                {
                                    bool _1 {};
                                    (_1 = (!has_35mEQu7d(host_arg1.hard_risk, i0) ? softRiskSafe_qSinJ0n3(arg0, ctx, module, _here, ss, _helpers) : false), RESOLVE_byAAR_9RqxdSn8(region0, region1, _1, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort));
                                };
                            };
                        };
                    };
                };
            };
        }
        else
        {
            const s_Lifetime& unwound1 = bck_unwound[i1];
            s_Lifetime inter = Lifetime_inter_xefCvVZD(unwound0, unwound1);
            if (!(!inter))
            {
                if (!has_35mEQu7d(host_arg0.hard_risk, i1) && !has_35mEQu7d(host_arg1.hard_risk, i0))
                {
                    if ((!has_35mEQu7d(host_arg0.soft_risk, i1) || (softRiskSafe_qSinJ0n3(arg1, ctx, module, _here, ss, _helpers) && !isInvalidatedBy_2QOSlQ4X(shallow1.uni0n, shallow0.uni0n, _current_fn))) && (!has_35mEQu7d(host_arg1.soft_risk, i0) || (softRiskSafe_qSinJ0n3(arg0, ctx, module, _here, ss, _helpers) && !isInvalidatedBy_2QOSlQ4X(shallow0.uni0n, shallow1.uni0n, _current_fn))))
                    {
                        const s_SolverNotes note = s_SolverNotes_N_AARSoftRisk;
                        if (note & options.break_notes)
                        {
                            fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
                        }
                        else
                        {
                            _notes |= note;
                            return;
                        };
                    };
                };
                if (!RESOLVE_byTempCopy_luyuhaat(callsite, i0, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort) && !RESOLVE_byTempCopy_luyuhaat(callsite, i1, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort))
                {
                    const s_Overload* _2;
                    fu::str err = (_2 = &(GET_etmeeocQ(target_yd5vrCD7(callsite), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_2, ctx, module, _here, ss, _helpers));
                    fu::str _3 {};
                    fu::str _4 {};
                    err += (((host_args.size() == 2) && (GET_etmeeocQ(target_yd5vrCD7(callsite), ctx, module, _here, ss, _helpers).flags & s_Flags_F_OPERATOR)) ? ": Both operands alias:\n"_fu : ((_4 = (x7E_r7bhmB7D(((_3 = (x7E_r7bhmB7D(": Arguments:\n\n\t    "_fu, fu::i64dec((i0 + 1))) + ":\t"_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_3), str_J4YCysO5(host_arg0, ctx, module, _here, ss, _helpers))) + " and\n\t    "_fu), fu::i64dec((i1 + 1))) + ":\t"_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_4), str_J4YCysO5(host_arg1, ctx, module, _here, ss, _helpers))) + "\n\n\t    both alias:\n"_fu));
                    for (int i = 0; i < inter.uni0n.size(); i++)
                    {
                        const s_Target t = nested_YRYXainn(inter.uni0n[i].index, _current_fnort, module);
                        err += ("\n            "_fu + explainWhichFn_4p0QhTu9(t, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ctx, module, _here, ss, _helpers));
                    };
                    _here = args_7DNlhEOT(callsite)[i0].token;
                    cannotFailAfterBCK_bOKaNxcM(err, pass, ctx, module, _here, ss, _helpers);
                };
            };
        };
    };
}

                                #ifndef DEF_add_jWWYlfBUNDk
                                #define DEF_add_jWWYlfBUNDk
inline void add_jWWYlfBU(fu::vec<s_Region>& a, fu::view<s_Region> b, fu::vec<int>& extras, const int extra)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        const int cmp = x3Cx3E_gKq3fKpB(X, Y);
        if ((cmp >= 0))
        {
            if (cmp != 0)
            {
                a.insert(x, s_Region(Y));
                extras.insert(x, extra);
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
            extras += extra;

    };
}
                                #endif

                                #ifndef DEF_unless_oob_O7CzT116Tde
                                #define DEF_unless_oob_O7CzT116Tde
inline const s_ReadID& unless_oob_O7CzT116(fu::view<s_ReadID> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_ReadID*)fu::NIL);

}
                                #endif

static s_RWEvent& RWEvent_iQ51vqDr(const s_ReadID& read, s_CurrentFn& _current_fn)
{
    return _current_fn.events.reads.mutref((read.id - 1));
}

inline static s_SolvedNode TODO_FIX_pop_QjB1lAka(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

inline static bool l_27_45_PSU9eb4A(const s_SolvedNode& node, const s_RWEvent& r)
{
    if ((node.kind == s_kind_call) && isLocal_HC98KjW6(node.target) && (node.target.index == r.rw_target))
        return node.token == r.token;
    else
        return false;

}

inline static const s_SolvedNode& l_27_44_EDxwlpoF(const s_SolvedNode& node, s_SolvedNode& result, const s_RWEvent& r)
{
    if (l_27_45_PSU9eb4A(node, r))
        return (result = node);
    else
        return (*(const s_SolvedNode*)fu::NIL);

}

inline static void SLOW_traverse_r36nfCKH(const s_SolvedNode& node, s_SolvedNode& result, const s_RWEvent& r, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
    while (stack)
    {
        s_SolvedNode node_1 = TODO_FIX_pop_QjB1lAka(stack);
        const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_crossmodule_PwJIgzg5(node_1.target, _current_fnort, ctx, module, _here, ss, _helpers).solved : node_1);
        l_27_44_EDxwlpoF(node_2, result, r);
        for (int i = node_2.items.size(); i-- > 0; )
            stack += s_SolvedNode(node_2.items[i]);

    };
}

inline static s_SolvedNode SLOW_find_7pSU5CPa(const s_RWEvent& r, const s_SolvedNode& root, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ s_SolvedNode result {};
    SLOW_traverse_r36nfCKH(root, result, r, ctx, module, _here, ss, _helpers, _current_fnort);
    return /*NRVO*/ result;
}

static s_SolvedNode SLOW_findByReadID_RrwKNQeE(const s_ReadID& read, const s_SolvedNode& root, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    const s_RWEvent& r = RWEvent_iQ51vqDr(read, _current_fn);
    s_SolvedNode _0 {};
    return (_0 = SLOW_find_7pSU5CPa(r, root, ctx, module, _here, ss, _helpers, _current_fnort)) ? static_cast<s_SolvedNode&&>(_0) : BUG_JWcxU72K((x7E_r7bhmB7D("Cannot find ReadID("_fu, fu::i64dec(read.id)) + ")."_fu), ctx, module, _here, ss, _helpers);
}

static int position_oKTJud5D(fu::view<int> positions, const int i)
{
    if (positions)
        return positions[i];
    else
        return -1;

}

                                #ifndef DEF_grow_if_oob_TiBrmsXbqfc
                                #define DEF_grow_if_oob_TiBrmsXbqfc
inline fu::vec<s_WriteID>& grow_if_oob_TiBrmsXb(fu::vec<fu::vec<s_WriteID>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_each_H9Ru5RlgUoc
                                #define DEF_each_H9Ru5RlgUoc
inline void each_H9Ru5Rlg(fu::view<int> a, s_CurrentFn& _current_fn)
{
    for (int i = 0; i < a.size(); i++)
        tagWritten_duaTTM0T(a[i], _current_fn);

}
                                #endif

static void tagWritten_duaTTM0T(const int target, s_CurrentFn& _current_fn)
{
    if (add_once_mle9fepo(events_Up7G3VfM(_current_fn).ever_written, target))
        each_H9Ru5Rlg(fu::vec<int>(unless_oob_N2HKpGLL(flow_PEAdUGfe(_current_fn).parents, target)), _current_fn);

}

static void bck_trackWrites_NvU9oEwi(const s_SolvedNode& callsite, fu::view<s_Region> regions, fu::view<int> positions, const s_SolvedNode& root, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    _here = callsite.token;
    const int loop_start = (callsite._loop_start ? callsite._loop_start : BUG_JWcxU72K("bck_trackWrites: _loop_start not set on callsite."_fu, ctx, module, _here, ss, _helpers));
    const bool OPTI_isLoop = ((loop_start != 1) ? (events_Up7G3VfM(_current_fn).used_in_a_loop.size() > 0) : false);
    for (int i = 0; i < regions.size(); i++)
    {
        const int target = Region_asLocal_AEPMcxRF(regions[i]);
        if (!(!target))
        {
            fu::vec<int> invalidates { unless_oob_N2HKpGLL(flow_PEAdUGfe(_current_fn).invalidates, target) };
            if (has_grHbGBLZ(invalidates, target))
            {
                const s_Overload* _0;
                fu::str _1 {};
                (_1 = x7E_r7bhmB7D("flow.invalidates[target].has(target): "_fu, (_0 = &(GET_etmeeocQ(nested_YRYXainn(target, _current_fnort, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_1), ctx, module, _here, ss, _helpers));
            }
            else
            {
                if (OPTI_isLoop)
                {
                    for (int i_1 = 0; i_1 < invalidates.size(); i_1++)
                    {
                        const int read = invalidates[i_1];
                        if (read < loop_start)
                        {
                            const s_ReadID readID { unless_oob_O7CzT116(events_Up7G3VfM(_current_fn).used_in_a_loop, read) };
                            if (readID)
                            {
                                if (pass == s_BorrowCheckPass_BCK_aar)
                                    RESOLVE_byAAR_9RqxdSn8(read, target, true, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
                                else
                                {
                                    if (!(RESOLVE_byMutvar_GAoYI60E(read, pass, ctx, module, _here, ss, _helpers, _current_fnort)))
                                    {
                                        const s_Overload* _2;
                                        fu::str _3 {};
                                        const s_Overload* _4;
                                        fu::str _5 {};
                                        const s_Overload* _6;
                                        fu::str _7 {};
                                        s_TokenIdx _8 {};
                                        fu::str _9 {};
                                        fu::str _10 {};
                                        (_10 = (_9 = ((_7 = ((_5 = ((_3 = (x7E_r7bhmB7D("Write to "_fu, (_2 = &(GET_etmeeocQ(nested_YRYXainn(target, _current_fnort, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_2, ctx, module, _here, ss, _helpers))) + " at call to "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_3), (_4 = &(GET_etmeeocQ(callsite.target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_4, ctx, module, _here, ss, _helpers)))) + " invalidates the use of "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_5), (_6 = &(GET_etmeeocQ(nested_YRYXainn(read, _current_fnort, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_6, ctx, module, _here, ss, _helpers)))) + " at "_fu), (static_cast<fu::str&&>(_7) + (_8 = SLOW_findByReadID_RrwKNQeE(readID, root, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort).token, addr_and_snippet_YNpW6K7i(static_cast<s_TokenIdx&&>(_8), s_CodeFmt{}, fu::view<char>{}, ctx, module)))) + "\n\t... on next loop iteration.\n\n\tWritten"_fu), (static_cast<fu::str&&>(_9) + (positions ? qSTACK_84yMNGFC(callsite.target, position_oKTJud5D(positions, i), fu::view<s_Target>{}, s_ArgQuery{}, ctx, module, _here, ss, _helpers) : fu::str{}))), cannotFailAfterBCK_bOKaNxcM(static_cast<fu::str&&>(_10), pass, ctx, module, _here, ss, _helpers));
                                    };
                                };
                            };
                        };
                    };
                };
                events_Up7G3VfM(_current_fn).writes += s_RWEvent { target, s_TokenIdx(callsite.token), position_oKTJud5D(positions, i) };
                const s_WriteID writeID = s_WriteID { events_Up7G3VfM(_current_fn).writes.size() };
                for (int i_1 = 0; i_1 < invalidates.size(); i_1++)
                {
                    fu::vec<s_WriteID>& set = grow_if_oob_TiBrmsXb(events_Up7G3VfM(_current_fn).snap.invalidated_by, invalidates[i_1]);
                    if ((pass == s_BorrowCheckPass_BCK_aar) || !set)
                        set += s_WriteID(writeID);

                };
                tagWritten_duaTTM0T(target, _current_fn);
            };
        };
    };
}

                                #ifndef DEF_has_inter_7qAb5HpLVD5
                                #define DEF_has_inter_7qAb5HpLVD5
inline bool has_inter_7qAb5HpL(fu::view<s_Region> l, fu::view<s_Region> r)
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
            (void)0;}), static_cast<fu::never&&>(BL_4_v)) : +1) : (r_done ? -1 : x3Cx3E_gKq3fKpB(l[li], r[ri])));
            if (cmp == 0)
                return true;
            else if (cmp < 0)
                li++;
            else
                ri++;

        };
      } BL_1:;
    };
    return false;
}
                                #endif

static bool RESOLVE_byAAR_1Uml0Oc3(const int write, fu::view<s_Region> reads, const bool trySoft, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    for (int r = 0; r < reads.size(); r++)
    {
        const int read = Region_asLocal_AEPMcxRF(reads[r]);
        if (read && (read != write))
            RESOLVE_byAAR_9RqxdSn8(read, write, trySoft, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);

    };
    return true;
}

                                #ifndef DEF_last_u1BvfftQbGh
                                #define DEF_last_u1BvfftQbGh
inline const s_Region& last_u1BvfftQ(fu::view<s_Region> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static void bck_call_NtRWGF9K(s_SolvedNode& callsite, const s_SolvedNode& root, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (!args_7DNlhEOT(callsite))
    {
        if (GET_etmeeocQ(target_yd5vrCD7(callsite), ctx, module, _here, ss, _helpers).kind == s_kind_var)
            bck_trackRead_RwdAhaNA(callsite, root, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);

    }
    else
    {
        fu::vec<s_Argument> host_args { EXT_EOYtG69B(target_yd5vrCD7(callsite), ctx, module, ss).args };
        const int ooe_read0 = _current_fn.events.reads.size();
        const int ooe_write0 = _current_fn.events.writes.size();
        fu::vec<int> ooe_reads {};
        fu::vec<int> ooe_writes {};
        fu::vec<int> ooe_argIdx {};
        const bool RTL = isRTL_lOupdufN(GET_etmeeocQ(target_yd5vrCD7(callsite), ctx, module, _here, ss, _helpers));
        const bool ooe_isUndef = !RTL;

        {
            int ooe_read0_1 = ooe_read0;
            int ooe_write0_1 = ooe_write0;
            argsForward_zyiga2hR(RTL, host_args, 0, callsite, ooe_reads, ooe_writes, ooe_argIdx, ooe_read0_1, ooe_write0_1, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort, _here, ctx);
        };
        fu::vec<s_Region> bck_writes {};
        fu::vec<int> bck_positions {};
        int mutref_first = -1;
        int mutref_last = -1;
        int ref_first = -1;
        int ref_last = -1;
        fu::vec<s_Lifetime> bck_unwound {};
        int arg_first = -1;
        int arg_last = -1;
        for (int i0 = 0; i0 < args_7DNlhEOT(callsite).size(); i0++)
        {
            s_Argument BL_7_v {};
            s_Argument host_arg0 = (__extension__ (
            {
                const s_Argument& __partcopy_ref = host_args[i0];
                BL_7_v = (s_Argument { fu::str(__partcopy_ref.name), {}, s_Type(__partcopy_ref.type), {}, __partcopy_ref.flags, {}, s_BitSet(__partcopy_ref.soft_risk), s_BitSet(__partcopy_ref.hard_risk) });
            (void)0;}), static_cast<s_Argument&&>(BL_7_v));
            s_Type expect { host_arg0.type };
            if (is_ref_vcLGyw8p(expect))
            {
                if (!bck_unwound)
                {
                    if ((mutref_first >= 0) || ((ref_first >= 0) && is_mutref_tkXzsAAo(expect, _here, ctx)))
                    {
                        bck_unwound.resize(args_7DNlhEOT(callsite).size());
                        for (int i0_1 = ref_first; (i0_1 <= ref_last); i0_1++)
                        {
                            const s_Lifetime& unwound = (bck_unwound.mutref(i0_1) = Lifetime_unwind_noStatic_SHtPTd8F(s_Lifetime(args_7DNlhEOT(callsite)[i0_1].type.lifetime), ctx, module, _here, ss, _helpers, _current_fnort));
                            for (int i = 0; i < unwound.uni0n.size(); i++)
                            {
                                if (Region_asLocal_AEPMcxRF(unwound.uni0n[i]))
                                {
                                    arg_first = ((arg_first < 0) ? i0_1 : arg_first);
                                    arg_last = i0_1;
                                };
                            };
                        };
                    };
                };
                if (bck_unwound)
                {
                    s_SolvedNode BL_17_v {};
                    s_SolvedNode arg0 = (__extension__ (
                    {
                        const s_SolvedNode& __partcopy_ref = args_7DNlhEOT(callsite)[i0];
                        BL_17_v = (s_SolvedNode { __partcopy_ref.kind, {}, {}, {}, {}, fu::vec<s_SolvedNode>(__partcopy_ref.items), {}, s_Type { {}, s_Lifetime(__partcopy_ref.type.lifetime), {} }, s_Target(__partcopy_ref.target) });
                    (void)0;}), static_cast<s_SolvedNode&&>(BL_17_v));
                    s_Lifetime shallow0 { arg0.type.lifetime };
                    const s_Lifetime& unwound0 = (bck_unwound.mutref(i0) = Lifetime_unwind_noStatic_SHtPTd8F(s_Lifetime(shallow0), ctx, module, _here, ss, _helpers, _current_fnort));
                    for (int i = 0; i < unwound0.uni0n.size(); i++)
                    {
                        if (Region_asLocal_AEPMcxRF(unwound0.uni0n[i]))
                        {
                            arg_first = ((arg_first < 0) ? i0 : arg_first);
                            arg_last = i0;
                        };
                    };
                    if (is_mutref_tkXzsAAo(expect, _here, ctx))
                    {
                        for (int i_1 = ref_first; (i_1 <= ref_last); i_1++)
                        {
                            if (is_ref_vcLGyw8p(host_args[i_1].type))
                                validate_DVjCYXja(i_1, callsite, host_args, bck_unwound, arg_first, arg_last, i0, host_arg0, arg0, shallow0, unwound0, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

                        };
                    }
                    else
                    {
                        for (int i_1 = mutref_first; (i_1 <= mutref_last); i_1++)
                        {
                            if (is_mutref_tkXzsAAo(host_args[i_1].type, _here, ctx))
                                validate_DVjCYXja(i_1, callsite, host_args, bck_unwound, arg_first, arg_last, i0, host_arg0, arg0, shallow0, unwound0, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

                        };
                    };
                };

                {
                    if (ref_first < 0)
                        ref_first = i0;

                    ref_last = i0;
                };
                if (is_mutref_tkXzsAAo(expect, _here, ctx))
                {
                    if (mutref_first < 0)
                        mutref_first = i0;

                    mutref_last = i0;
                    if (host_arg0.flags & s_Flags_F_WRITTEN_TO)
                    {
                        const s_SolvedNode& arg0 = args_7DNlhEOT(callsite)[i0];
                        if (is_mutref_tkXzsAAo(host_arg0.type, _here, ctx))
                        {
                            if (is_mutref_tkXzsAAo(arg0.type, _here, ctx))
                            {
                                add_jWWYlfBU(bck_writes, arg0.type.lifetime.uni0n, bck_positions, i0);
                            }
                            else
                            {
                                fu::str _0 {};
                                (_0 = (qID_bF2G8fJR(human_5244l4QN(host_arg0.name, ctx, module, _here, ss, _helpers)) + ": host_arg0.written but !arg.is_mutref"_fu), BUG_JWcxU72K(static_cast<fu::str&&>(_0), ctx, module, _here, ss, _helpers));
                            };
                        }
                        else
                        {
                            fu::str _1 {};
                            (_1 = (qID_bF2G8fJR(human_5244l4QN(host_arg0.name, ctx, module, _here, ss, _helpers)) + ": host_arg0.written but !host_arg0.is_mutref"_fu), BUG_JWcxU72K(static_cast<fu::str&&>(_1), ctx, module, _here, ss, _helpers));
                        };
                    };
                };
            };
        };
        if (bck_writes)
        {
            if (bck_positions.size() == bck_writes.size())
                bck_trackWrites_NvU9oEwi(callsite, bck_writes, bck_positions, root, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
            else
                BUG_JWcxU72K("bck_position.len is off"_fu, ctx, module, _here, ss, _helpers);

        };
        int MUSTSEQ_mask = 0;

        {
            int ooe_write0_1 = ooe_write0;
            for (int ooe_iw = 0; ooe_iw < ooe_writes.size(); ooe_iw++)
            {
                const int ooe_write1 = ooe_writes[ooe_iw];
                if (!(ooe_write1 == ooe_write0_1))
                {
                    for (int w = ooe_write0_1; w < ooe_write1; w++)
                    {
                        const s_WriteID writeID = s_WriteID { (w + 1) };
                        const int write = RWEvent_gPjG4yM1(writeID, _current_fn).rw_target;
                        const bool iw_evalsFirst = (ooe_iw == 0);
                        fu::vec<s_Region> all_written = fu::vec<s_Region> { fu::slate<1, s_Region> { Region_fromLocal_Uj5ZOr54(write) } };

                        {
                            fu::view<int> parents = unless_oob_N2HKpGLL(flow_PEAdUGfe(_current_fn).parents, write);
                            add_QGbB36Xz(all_written, fu::view_of(parents, s_Region{}));
                        };
                        fu::vec<s_Region> all_written_and_invalidated {};
                        if (!iw_evalsFirst)
                        {
                            all_written_and_invalidated = all_written;
                            fu::view<int> invalidates = unless_oob_N2HKpGLL(flow_PEAdUGfe(_current_fn).invalidates, write);
                            add_QGbB36Xz(all_written_and_invalidated, fu::view_of(invalidates, s_Region{}));
                        };
                        int ooe_read0_1 = ooe_read0;
                        for (int ooe_ir = 0; ooe_ir < ooe_reads.size(); ooe_ir++)
                        {
                            const int ooe_read1 = ooe_reads[ooe_ir];
                            if (ooe_ir != ooe_iw)
                            {
                                const bool ooe_ir_evalsBefore_iw = (ooe_ir < ooe_iw);
                                const fu::vec<s_Region>& written = (ooe_ir_evalsBefore_iw ? all_written_and_invalidated : all_written);
                                if (written)
                                {
                                    for (int r = ooe_read0_1; r < ooe_read1; r++)
                                    {
                                        const s_RWEvent& read = _current_fn.events.reads[r];
                                        fu::view<s_Region> regions = GET_etmeeocQ(nested_YRYXainn(read.rw_target, _current_fnort, module), ctx, module, _here, ss, _helpers).type.lifetime.uni0n;
                                        if (!(!has_inter_7qAb5HpL(regions, written)))
                                        {
                                            const int r_1 = ooe_argIdx[ooe_ir];
                                            const int w_1 = ooe_argIdx[ooe_iw];
                                            const s_Argument& host_arg = host_args[r_1];
                                            if (ooe_ir_evalsBefore_iw && is_ref_vcLGyw8p(host_arg.type))
                                            {
                                                s_SolvedNode BL_57_v {};
                                                s_SolvedNode arg = (__extension__ (
                                                {
                                                    const s_SolvedNode& __partcopy_ref = args_7DNlhEOT(callsite)[r_1];
                                                    BL_57_v = (s_SolvedNode { __partcopy_ref.kind, {}, {}, {}, {}, fu::vec<s_SolvedNode>(__partcopy_ref.items), s_TokenIdx(__partcopy_ref.token), s_Type { {}, s_Lifetime(__partcopy_ref.type.lifetime), {} }, s_Target(__partcopy_ref.target) });
                                                (void)0;}), static_cast<s_SolvedNode&&>(BL_57_v));
                                                const fu::vec<s_Region>& bound = arg.type.lifetime.uni0n;
                                                fu::vec<s_Region> inter = inter_Z7to7PdZ(bound, written);
                                                if (inter)
                                                {
                                                    bool _2 {};
                                                    if (((pass == s_BorrowCheckPass_BCK_aar) ? !(_2 = softRiskSafe_qSinJ0n3(arg, ctx, module, _here, ss, _helpers), RESOLVE_byAAR_1Uml0Oc3(write, inter, _2, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort)) : !RESOLVE_byTempCopy_luyuhaat(callsite, r_1, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort)))
                                                    {
                                                        _here = callsite.token;
                                                        const s_Overload* _3;
                                                        fu::str _4 {};
                                                        fu::str _5 {};
                                                        fu::str _6 {};
                                                        const s_Overload* _7;
                                                        fu::str _8 {};
                                                        fu::str _9 {};
                                                        fu::str _10 {};
                                                        (_10 = (_9 = (x7E_r7bhmB7D(((_8 = ((_6 = ((_5 = (x7E_r7bhmB7D(((_4 = (x7E_r7bhmB7D("At call to "_fu, (_3 = &(GET_etmeeocQ(target_yd5vrCD7(callsite), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_3, ctx, module, _here, ss, _helpers))) + ", binding for "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_4), str_J4YCysO5(host_args[r_1], ctx, module, _here, ss, _helpers))) + " (arg #"_fu), fu::i64dec(r_1)) + ") at "_fu), (static_cast<fu::str&&>(_5) + addr_and_snippet_YNpW6K7i(arg.token, s_CodeFmt{}, fu::view<char>{}, ctx, module))) + "\n\t... invalidated by subsequent write to "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_6), (_7 = &(Region_GET_moKQEKlj(last_u1BvfftQ(all_written), ctx, module, _here, ss, _helpers, _current_fnort)), str_1mm3y0E0(*_7, ctx, module, _here, ss, _helpers)))) + " upon evaluation of "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_8), str_J4YCysO5(host_args[w_1], ctx, module, _here, ss, _helpers))) + " (arg #"_fu), fu::i64dec(w_1)) + ") at "_fu), (static_cast<fu::str&&>(_9) + RWEvent_stack_6Jl3t5fT(writeID, root, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort))), cannotFailAfterBCK_bOKaNxcM(static_cast<fu::str&&>(_10), pass, ctx, module, _here, ss, _helpers));
                                                    };
                                                };
                                            };
                                            if (ooe_isUndef)
                                            {
                                                const int mustSeq = (ooe_ir_evalsBefore_iw ? r_1 : w_1);
                                                MUSTSEQ_mask |= (1 << (mustSeq & 31));
                                                const s_SolverNotes note = ((pass == s_BorrowCheckPass_BCK_aar) ? s_SolverNotes_N_AARMustSeq : s_SolverNotes_N_BckMustSeq);
                                                const s_SolverState& ss_1 = ss;
                                                if (note & options.break_notes)
                                                {
                                                    fu::str _11 {};
                                                    fu::str _12 {};
                                                    fu::str _13 {};
                                                    (_13 = (("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + ((_11 = (x7E_r7bhmB7D(" read: "_fu, str_JtWMSeZV(args_7DNlhEOT(callsite)[r_1], ctx, module, _here, ss, _helpers, _current_fnort)) + "\n\t\twrite: "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_11), str_JtWMSeZV(args_7DNlhEOT(callsite)[w_1], ctx, module, _here, ss, _helpers, _current_fnort))) ? ("\n\t\t"_fu + (_12 = (x7E_r7bhmB7D(" read: "_fu, str_JtWMSeZV(args_7DNlhEOT(callsite)[r_1], ctx, module, _here, ss, _helpers, _current_fnort)) + "\n\t\twrite: "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_12), str_JtWMSeZV(args_7DNlhEOT(callsite)[w_1], ctx, module, _here, ss, _helpers, _current_fnort)))) : "."_fu)), fail_pNB52ATY(static_cast<fu::str&&>(_13), fu::view<char>{}, ctx, module, _here, ss_1, _helpers));
                                                }
                                                else
                                                    _notes |= note;

                                            };
                                            break;
                                        };
                                    };
                                }
                                else
                                {
                                    BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
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
        if (!helpers || (pass == s_BorrowCheckPass_BCK_aar))
        {
            helpers = s_Helpers { (MUSTSEQ_mask | helpers.index) };
        }
        else
            BUG_JWcxU72K("MUSTSEQ_mask: helpers already contain something"_fu, ctx, module, _here, ss, _helpers);

    };
}

static void bck_loop_EpjHElKW(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    s_SolvedNode* _0;
    (_0 = &(items.mutref(0)), bck_node_i2XLbfvW(*_0, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
    /*MOV*/ fu::vec<s_ReadID> events0 { _current_fn.events.used_in_a_loop };
    fu_DEFER(_current_fn.events.used_in_a_loop = static_cast<fu::vec<s_ReadID>&&>(events0));
    for (int i = 1; i < items.size(); i++)
    {
        s_SolvedNode* _1;
        (_1 = &(items.mutref(i)), bck_node_i2XLbfvW(*_1, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
    };
}

                                #ifndef DEF_unless_oob_MOGekjN3np5
                                #define DEF_unless_oob_MOGekjN3np5
inline const fu::vec<s_WriteID>& unless_oob_MOGekjN3(fu::view<fu::vec<s_WriteID>> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const fu::vec<s_WriteID>*)fu::NIL);

}
                                #endif

static void bck_trackInit_kaHtttqA(const s_Target& target, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    const int index = target.index;
    if (!(!index))
    {
        if (unless_oob_MOGekjN3(events_Up7G3VfM(_current_fn).snap.invalidated_by, index))
        {
            BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
        };
    };
}

static void bck_let_LCWkLDEC(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    s_SolvedNode* _0;
    (_0 = &(node.items.mutref(LET_INIT)), bck_node_i2XLbfvW(*_0, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
    if (is_ref_vcLGyw8p(node.type) && !willPassByValue_tIY7ZAba(GET_etmeeocQ(node.target, ctx, module, _here, ss, _helpers), ctx, _here))
    {
        if (node.flags & s_Flags_F_ARG)
            BUG_JWcxU72K("bck_let: Found an argument!"_fu, ctx, module, _here, ss, _helpers);
        else
        {
            const s_SolvedNode& init = node.items[LET_INIT];
            if (is_ref_vcLGyw8p(init.type))
            {
                Reference_trackLocalRef_Gyc662BZ(_current_fn.flow, node.target.index, init.type.lifetime);
            }
            else
                BUG_JWcxU72K("What!"_fu, ctx, module, _here, ss, _helpers);

        };
    };
    bck_trackInit_kaHtttqA(node.target, ctx, module, _here, ss, _current_fn, _helpers);
}

                                #ifndef DEF_x3Cx3E_XQuwIJNWTgi
                                #define DEF_x3Cx3E_XQuwIJNWTgi
inline int x3Cx3E_XQuwIJNW(const s_WriteID& a, const s_WriteID& b)
{

    {
        const int cmp = x3Cx3E_AsFD7H8N(a.id, b.id);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_add_cEWxVRpR3Ba
                                #define DEF_add_cEWxVRpR3Ba
inline void add_cEWxVRpR(fu::vec<s_WriteID>& a, fu::view<s_WriteID> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_WriteID& X = a[x];
        const s_WriteID& Y = b[y];
        const int cmp = x3Cx3E_XQuwIJNW(X, Y);
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

inline static void Events_merge_3eFAZFLw(fu::vec<fu::vec<s_WriteID>>& dest, fu::view<fu::vec<s_WriteID>> src)
{
    if (dest.size() < src.size())
        dest.grow(src.size());

    for (int i = 0; i < src.size(); i++)
    {
        fu::view<s_WriteID> src_1 = src[i];
        if (src_1)
        {
            fu::view<s_WriteID> _0 {};
            (_0 = src_1, add_cEWxVRpR(dest.mutref(i), static_cast<fu::view<s_WriteID>&&>(_0)));
        };
    };
}

static void Events_merge_PLQShALp(s_Events& events, const s_EventsSnap& snap)
{
    Events_merge_3eFAZFLw(events.snap.invalidated_by, snap.invalidated_by);
}

static void bck_if_HADWGtz7(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    s_SolvedNode& cond = items.mutref(0);
    bck_node_i2XLbfvW(cond, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    const s_StaticEval ae_cond = tryAbstractEvalAsBool_6xGBowKZ(cond, ctx, module, _here, ss, _helpers);
    if (ae_cond)
    {
        s_SolvedNode& cons = items.mutref(((ae_cond == s_StaticEval_SE_True) ? 1 : 2));
        bck_node_i2XLbfvW(cons, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        node = createBlock_ZR7NaTMf(s_SolvedNode(items[0]), s_SolvedNode(cons), ctx, module, _here, ss, _helpers);
    }
    else
    {
        /*MOV*/ s_EventsSnap e_Restore_AfterCond { _current_fn.events.snap };
        s_SolvedNode* _0;
        (_0 = &(items.mutref(1)), bck_node_i2XLbfvW(*_0, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
        s_EventsSnap e_Merge_AfterCons { _current_fn.events.snap };
        _current_fn.events.snap = static_cast<s_EventsSnap&&>(e_Restore_AfterCond);
        s_SolvedNode* _1;
        (_1 = &(items.mutref(2)), bck_node_i2XLbfvW(*_1, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
        Events_merge_PLQShALp(_current_fn.events, e_Merge_AfterCons);
    };
}

static void bck_and_or_8RhN4dcZ(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    fu::vec<s_SolvedNode>& items = node.items;
    for (int i = 0; i < items.size(); i++)
    {
        s_SolvedNode& expr = items.mutref(i);
        bck_node_i2XLbfvW(expr, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        const s_StaticEval ae_expr = tryAbstractEvalAsBool_6xGBowKZ(expr, ctx, module, _here, ss, _helpers);
        if (ae_expr)
        {
            const bool isAnd = (node.kind == s_kind_and);
            if (isAnd == (ae_expr == s_StaticEval_SE_False))
            {
                items.shrink((i + 1));
                node.type.vfacts |= (isAnd ? s_VFacts_AlwaysFalse : s_VFacts_AlwaysTrue);
                break;
            }
            else if (i < (items.size() - 1))
            {
                /*MOV*/ s_SolvedNode cond = steal_MN85i44z(expr);
                items.splice(i, 1);
                s_SolvedNode& cons = items.mutref(i--);
                cons = createBlock_ZR7NaTMf(static_cast<s_SolvedNode&&>(cond), s_SolvedNode(cons), ctx, module, _here, ss, _helpers);
            };
        };
    };
    if (node.items.size() < 2)
        node = only_fLVI01Cf(node.items);

}

static void bck_not_4ymgHzgp(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    s_SolvedNode& expr = only_Yd6Gh1JU(node.items);
    bck_node_i2XLbfvW(expr, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    const s_StaticEval ae_expr = tryAbstractEvalAsBool_6xGBowKZ(expr, ctx, module, _here, ss, _helpers);
    if (ae_expr)
        node.type.vfacts |= ((ae_expr == s_StaticEval_SE_True) ? s_VFacts_AlwaysFalse : s_VFacts_AlwaysTrue);

}

static void bck_block_e8OZYgmD(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    fu::vec<s_SolvedNode> defers {};
    fu::vec<s_SolvedNode>& items = node.items;
    for (int i = 0; i < items.size(); i++)
    {
        s_SolvedNode& stmt = items.mutref(i);
        if (stmt.kind == s_kind_defer)
            defers += s_SolvedNode(only_fLVI01Cf(stmt.items));
        else
            bck_node_i2XLbfvW(stmt, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

        if (is_never_8KZIyCKE(stmt.type))
        {
            if (stmt.kind == s_kind_defer)
                BUG_JWcxU72K("bck, block: defer.is_never"_fu, ctx, module, _here, ss, _helpers);
            else
            {
                items.shrink((i + 1));
                const s_HelpersData* BL_8_v;
                if (!s_HelpersMask(((__extension__ (
                {
                    const s_Helpers& h = node.helpers;
                    BL_8_v = &(ss._helpers_data[h.index]);
                (void)0;}), *BL_8_v).mask & s_HelpersMask_HM_LabelUsed)))
                    node.type = t_never;

                break;
            };
        };
    };
    for (int i_1 = defers.size(); i_1-- > 0; )
        bck_node_i2XLbfvW(defers.mutref(i_1), root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

}

static void bck_node_i2XLbfvW(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    const s_kind k = node.kind;
    if (k == s_kind_call)
        bck_call_NtRWGF9K(node, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_loop)
        bck_loop_EpjHElKW(node, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_letdef)
    {
        std::swap(GET_mut_TpIPZdoW(node.target, module, ss).solved, node);
        bck_node_i2XLbfvW(node, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        std::swap(GET_mut_TpIPZdoW(node.target, module, ss).solved, node);
    }
    else if (k == s_kind_let)
        bck_let_LCWkLDEC(node, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_if)
    {
        bck_if_HADWGtz7(node, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    }
    else if ((k == s_kind_and) || (k == s_kind_or))
        bck_and_or_8RhN4dcZ(node, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_not)
        bck_not_4ymgHzgp(node, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_block)
        bck_block_e8OZYgmD(node, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if ((k == s_kind_root) || (k == s_kind_jump) || (k == s_kind_try) || (k == s_kind_copy) || (k == s_kind_move) || (k == s_kind_arrlit))
    {
        fu::view_mut<s_SolvedNode> items = node.items;
        for (int i = 0; i < items.size(); i++)
        {
            s_SolvedNode* _0;
            (_0 = &(items.mutref(i)), bck_node_i2XLbfvW(*_0, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
        };
    }
    else if (k == s_kind_pragma)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (is_mutref_tkXzsAAo(item.type, _here, ctx))
            {
                bck_trackWrites_NvU9oEwi(item, item.type.lifetime.uni0n, fu::view<int>{}, root, pass, ctx, module, _here, ss, _current_fn, _helpers, _current_fnort);
            };
        };
    }
    else if (node.items)
        cannotFailAfterBCK_bOKaNxcM((x7E_r7bhmB7D("TODO: bck_node(non-empty "_fu, str_k2hK9UHj(k)) + ")."_fu), pass, ctx, module, _here, ss, _helpers);

}

static void PASS_borrowCheck_WoE444Wn(s_SolvedNode& root, const s_BorrowCheckPass pass, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    if (pass == s_BorrowCheckPass_BCK_aar)
    {
        fu::vec<int> consts {};
        fu::vec<int> refs {};
        bool outOfOrderArgTargets = false;

        {
            int last = 0;
            _current_fn_eachArg_FWD_g8BtucJr(consts, refs, outOfOrderArgTargets, last, ctx, module, _here, ss, _current_fn, _helpers);
        };
        if (!refs || ((refs.size() == 1) && !consts))
            return;
        else
        {
            if (outOfOrderArgTargets)
            {
                sort_nIMPg2Lp(refs);
                sort_nIMPg2Lp(consts);
            };
            clear_WLuE9DC4(_current_fn.flow);
            clear_U4dtihtV(_current_fn.events);
            _current_fn_eachArg_FWD_N06igmyl(ctx, module, _here, ss, _current_fn, _helpers);
            s_Flow& flow = _current_fn.flow;
            for (int i = 0; i < refs.size(); i++)
            {
                const int target = refs[i];
                if (consts)
                {
                    fu::vec<int>* _0;
                    (!*(_0 = &(grow_if_oob_rttDpjXH(flow.invalidates, target))) ? *_0 : BUG_JWcxU72K("AAR: ref arg already has invalidates."_fu, ctx, module, _here, ss, _helpers)) = fu::vec<int>(consts);
                };
                if (refs.size() > 1)
                {
                    fu::vec<int> refs_1 { refs };
                    rem_ys5ADtDp(refs_1, target);
                    add_DLIRqEDZ(grow_if_oob_rttDpjXH(flow.invalidates, target), refs_1);
                };
                if ((refs.size() > 1) || consts)
                {
                    const fu::vec<int>* _1;
                    fu::vec<int>* _2;
                    (!*(_2 = &(grow_if_oob_rttDpjXH(flow.parents, target))) ? *_2 : BUG_JWcxU72K("AAR: ref arg already has parents."_fu, ctx, module, _here, ss, _helpers)) = fu::vec<int>((*(_1 = &(unless_oob_N2HKpGLL(flow.invalidates, target))) ? *_1 : BUG_JWcxU72K("AAR: (refs.len > 1 || consts), but no invalidates."_fu, ctx, module, _here, ss, _helpers)));
                };
            };
            if (refs)
            {
                for (int i_1 = 0; i_1 < consts.size(); i_1++)
                {
                    fu::vec<int>* _3;
                    (!*(_3 = &(grow_if_oob_rttDpjXH(flow.invalidates, consts[i_1]))) ? *_3 : BUG_JWcxU72K("AAR: const arg already has invalidates."_fu, ctx, module, _here, ss, _helpers)) = fu::vec<int>(refs);
                };
            };
            if (refs)
            {
                _current_fn.events = s_Events{};
            }
            else
                BUG_JWcxU72K("Wasting time on AAR without ref args."_fu, ctx, module, _here, ss, _helpers);

        };
    };
    bck_node_i2XLbfvW(root, root, pass, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
}

static void runAllPasses_1hAiFIVG(s_SolvedNode& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (_current_fn)
    {
        if (currentFn_mustBecomeInline_ZwdoEqSr(_current_fn))
            return;
        else if (GET_etmeeocQ(_current_fn.out.target, ctx, module, _here, ss, _helpers).status & s_SolverStatus_SS_Debug_AllPassesComplete)
            BUG_JWcxU72K("runAllPasses: All passes already complete."_fu, ctx, module, _here, ss, _helpers);

    };
    test_node_jdIq0p9e(node, ctx, module, _here, ss, _helpers, _current_fnort);
    s_HelpersData* BL_4_v;
    (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_4_v = &(ss._helpers_data.mutref(h.index));
    (void)0;}), *BL_4_v).pass = s_SolverPass_RelaxMut;
    if (_current_fn.relaxed.var_usage)
        BUG_JWcxU72K("_current_fn.var_usage not empty before propagateType."_fu, ctx, module, _here, ss, _helpers);
    else if (_current_fn.postdom)
        BUG_JWcxU72K("_current_fn.postdom not empty before propagateType."_fu, ctx, module, _here, ss, _helpers);
    else
    {
        Postdom_resetAtFnEnd_61RfVtA1(_current_fn.postdom);
        propagateType_Mh9g8ikC(node, s_Type(node.type), RELAX_before_bck, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        test_node_jdIq0p9e(node, ctx, module, _here, ss, _helpers, _current_fnort);
        s_HelpersData* BL_8_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_8_v = &(ss._helpers_data.mutref(h.index));
        (void)0;}), *BL_8_v).pass = s_SolverPass_BorrowCheck;
        PASS_borrowCheck_WoE444Wn(node, s_BorrowCheckPass_BCK_bck, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        s_HelpersData* BL_9_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_9_v = &(ss._helpers_data.mutref(h.index));
        (void)0;}), *BL_9_v).pass = s_SolverPass_ArgumentsAtRisk;
        _current_fn.TODO_FIX_children = _current_fn.flow.children;
        PASS_borrowCheck_WoE444Wn(node, s_BorrowCheckPass_BCK_aar, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        test_node_jdIq0p9e(node, ctx, module, _here, ss, _helpers, _current_fnort);
        s_HelpersData* BL_10_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_10_v = &(ss._helpers_data.mutref(h.index));
        (void)0;}), *BL_10_v).pass = s_SolverPass_RelaxCopyResize;
        _current_fn.effects.fx_mask = s_FxMask{};
        _current_fn.relaxed = s_Usage{};
        if (_current_fn.postdom.loop_start == 1)
        {
            Postdom_resetAtFnEnd_61RfVtA1(_current_fn.postdom);
            propagateType_Mh9g8ikC(node, s_Type(node.type), RELAX_all, s_Helpers{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            test_node_jdIq0p9e(node, ctx, module, _here, ss, _helpers, _current_fnort);
            if (_current_fn)
            {
                if (currentFn_mustBecomeInline_ZwdoEqSr(_current_fn))
                    BUG_JWcxU72K("runAllPasses: currentFn_mustBecomeInline after all."_fu, ctx, module, _here, ss, _helpers);
                else
                    GET_mut_TpIPZdoW(_current_fn.out.target, module, ss).status |= s_SolverStatus_SS_Debug_AllPassesComplete;

            };
        }
        else
            BUG_JWcxU72K(x7E_r7bhmB7D("_current_fn.loop_start leak: "_fu, fu::i64dec(_current_fn.postdom.loop_start)), ctx, module, _here, ss, _helpers);

    };
}

static s_SolvedNode solveBlock_SoEtv2T3(const s_Node& node, const s_Type& type, const int fnbody_of, const s_HelpersMask mask, const fu::str& id, const int locals_start, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    fu::vec<s_Node> nodes = ((node.kind == s_kind_block) ? fu::vec<s_Node>(node.items) : fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(node) } });
    const fu::str& id_1 = (id ? id : ((node.kind == s_kind_block) ? node.value : (*(const fu::str*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap_bI1J4XJR(ss._scope, _helpers);
    fu_DEFER(if (!s_HelpersMask((mask & s_HelpersMask_HM_LoopPreheader)))
        Scope_pop_VKZbhWNz(ss._scope, scope0, _helpers););
    const int helpers_idx = _helpers.size();
    push_sUG9wPGl(s_HelpersData { (fnbody_of ? s_Target { module.modid, fnbody_of } : s_Target{}), s_SolverPass{}, fu::str(id_1), mask, (fnbody_of ? fnbody_of : _current_fn.out.target.index), (fnbody_of ? +1 : (locals_start ? locals_start : GET_next_local_index_zHd1WF14(_current_fnort, ss, _current_fn))), s_Type(type), s_Type{}, fu::vec<s_Type>{}, s_Postdom{}, s_Postdom{}, s_Helpers{} }, ss, _helpers);
    const s_Helpers h { _helpers[helpers_idx] };
    if (fnbody_of && nodes)
    {
        const s_kind k = last_HNT2v2R9(nodes).kind;
        if (k == s_kind_unwrap)
            _current_fn.TODO_FIX_isInline = true;
        else
        {
            last_JmX1sOIF(nodes) = s_Node { s_kind_return, s_DeclAsserts{}, s_ParseSyntax{}, s_Flags_F_IMPLICIT, fu::str{}, ((last_HNT2v2R9(nodes).kind != s_kind_empty) ? fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(last_HNT2v2R9(nodes)) } } : fu::vec<s_Node>{}), s_TokenIdx(last_HNT2v2R9(nodes).token) };
        };
    };
    /*MOV*/ fu::vec<s_SolvedNode> items = solveNodes_Udt6cwcF(nodes, true, t_void, type, !is_void_8KZIyCKE(type), s_StaticEval{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    if (!fnbody_of)
    {
        ss._helpers_data.mutref(h.index).ret_expect = s_Type{};
    };

    {
        const s_Type& tail = (items ? last_fLVI01Cf(items).type : t_void);
        if (!is_never_8KZIyCKE(tail))
            reportReturnType_Np5I4bmr(h, (items ? last_fLVI01Cf(items).type : t_void), false, ctx, module, _here, ss, _helpers, _current_fnort);
        else if (!ss._helpers_data[h.index].ret_actual)
            ss._helpers_data.mutref(h.index).ret_actual = s_Type(t_never);

    };
    if (ss._helpers_data[h.index].ret_actual)
    {
        const s_Type* _0;
        const s_Type* _1;
        /*MOV*/ s_SolvedNode block = (_1 = &((*(_0 = &(ss._helpers_data[h.index].ret_actual)) ? *_0 : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers))), createBlock_Q2a0BBmY(*_1, static_cast<fu::vec<s_SolvedNode>&&>(items), h, ctx, module, _here, ss, _helpers));
        if (fnbody_of)
        {
            const s_SolverStatus status = GET_etmeeocQ(s_Target { module.modid, fnbody_of }, ctx, module, _here, ss, _helpers).status;
            if (!s_SolverStatus((status & s_SolverStatus_SS_DIRTY)))
            {
                sortInjectedArguments_dMnJRTGh(ctx, module, _here, ss, _current_fn, _helpers);
                if (!currentFn_mustBecomeInline_ZwdoEqSr(_current_fn))
                    runAllPasses_1hAiFIVG(block, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                else
                    mcom_BlockReturns_CopyOrMoveDecision_ClXRgAzD(h, ctx, module, _here, ss, _helpers, _current_fnort);

            };
        };
        return /*NRVO*/ block;
    }
    else
        BUG_JWcxU72K("No ret_actual"_fu, ctx, module, _here, ss, _helpers);

}

static void lazySolveEnd_IiQllcub(const s_Target& t, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    s_Overload& o = GET_mut_TpIPZdoW(t, module, ss);
    fu::vec<int> reopen {};
    const int parent = EPH_t5Sfn87m(t, module, ss).local_of;
    if (o.status & s_SolverStatus_SS_UPDATED)
    {
        o.status &= s_SolverStatus(~s_SolverStatus_SS_UPDATED);
        fu::vec<int> callers { EPH_mut_5Rks4Tyc(t, module, ss).callers };
        for (int i = 0; i < callers.size(); i++)
        { {
            int index = callers[i];
            for (; ; )
            {
                const s_Target t_1 = s_Target { module.modid, index };
                s_Overload& o_1 = GET_mut_TpIPZdoW(t_1, module, ss);
                if (s_SolverStatus((o_1.status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)))) != s_SolverStatus_SS_DID_START)
                    goto BL_3;
                else if (!s_SolverStatus((o_1.status & s_SolverStatus_SS_FINALIZED)))
                {
                    o_1.status |= s_SolverStatus_SS_DIRTY;
                    goto BL_3;
                }
                else
                {
                    const int up = EPH_t5Sfn87m(t_1, module, ss).local_of;
                    if (up != parent)
                    {
                        if (up > parent)
                            index = up;
                        else
                            BUG_JWcxU72K("lazySolveEnd: about to climb up the wrong tree."_fu, ctx, module, _here, ss, _helpers);

                    }
                    else
                    {

                        {
                            const s_SolverNotes note = ((o_1.kind == s_kind_type) ? s_SolverNotes_N_TypeReopen : s_SolverNotes_N_FnReopen);
                            const s_Module& module_1 = module;
                            const s_SolverState& ss_1 = ss;
                            if (note & options.break_notes)
                            {
                                fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers);
                            }
                            else
                                _notes |= note;

                        };
                        o_1.status &= s_SolverStatus(~s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)) | s_SolverStatus_SS_FINALIZED)));
                        reopen += index;
                        goto BL_3;
                    };
                };
            };
          } BL_3:;
        };
    };
    s_Overload& o_1 = GET_mut_TpIPZdoW(t, module, ss);
    if (!s_SolverStatus((o_1.status & s_SolverStatus_SS_DIRTY)))
        o_1.status |= s_SolverStatus_SS_FINALIZED;
    else if (o_1.status & s_SolverStatus_SS_FINALIZED)
        BUG_JWcxU72K("Stray SS_FINALIZED."_fu, ctx, module, _here, ss, _helpers);
    else
    {
        o_1.status &= s_SolverStatus(~s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)));
        const s_SolverNotes note = ((o_1.kind == s_kind_type) ? s_SolverNotes_N_TypeResolve : s_SolverNotes_N_FnResolve);
        const s_Module& module_1 = module;
        const s_SolverState& ss_1 = ss;
        if (note & options.break_notes)
        {
            fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers);
        }
        else
            _notes |= note;

    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t_1 = s_Target { module.modid, reopen[i] };
        lazySolveStart_soM8XEbj(t_1, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    };
}

static s_Target doTrySpecialize_YUQsTQlC(const int parent_idx, const s_Target& into, const s_Target& overloadIdx, fu::view<s_SolvedNode> args_in, const fu::str& mangle, fu::view<int> reorder, const bool use_reorder, fu::view<fu::vec<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const s_Target SPECFAIL_RentrySafety = s_Target { 2147483647, 0 };
    const s_Target& original = (overloadIdx ? overloadIdx : into ? into : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers));
    s_Template tEmplate { EXT_EOYtG69B(original, ctx, module, ss).tEmplate };
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    _here = EXT_EOYtG69B(original, ctx, module, ss).tEmplate.node.token;
    fu::vec<fu::str> mangles {};
    s_Target currentSpec { SPECFAIL_RentrySafety };
    fu::vec<s_Node> items { tEmplate.node.items };
    const int numArgs = ((tEmplate.node.kind == s_kind_fn) ? (items.size() + FN_ARGS_BACK) : BUG_JWcxU72K("template.node.kind != `fn`"_fu, ctx, module, _here, ss, _helpers));
    s_Map_uYRcurSQUL8 typeParams {};
    if (!into)
    {
        fu::str error {};
        fu::vec<s_Type> args {};
        if (use_reorder)
        {
            for (int i = 0; i < reorder.size(); i++)
            {
                const int callsiteIndex = reorder[i];
                args.push(s_Type((((callsiteIndex >= 0) && (callsiteIndex < args_in.size())) ? args_in[callsiteIndex].type : (*(const s_Type*)fu::NIL))));
            };
        }
        else
            for (int i = 0; i < args_in.size(); i++)
                args.push(s_Type(args_in[i].type));
;
        for (int i = 0; i < conversions.size(); i++)
        {
            fu::view<s_Target> c = conversions[i];
            if (c)
                args.mutref(i) = s_Type(GET_etmeeocQ(last_i8rpRxaZ(c), ctx, module, _here, ss, _helpers).type);

        };
        if (REST_TYPE)
            args.mutref(REST_START) = s_Type(REST_TYPE);

        fu::vec<int> retypeIndices {};
        fu::vec<s_Warning> errout = fu::vec<s_Warning> { fu::slate<1, s_Warning> { s_Warning{} } };
        for (int pass_retype = 0; (pass_retype == 0) || ((pass_retype == 1) && retypeIndices); pass_retype++)
        {
            for (int i_1 = 0; i_1 < numArgs; i_1++)
            {
                if (pass_retype)
                {
                    if (!has_grHbGBLZ(retypeIndices, i_1))
                        continue;

                };
                /*MOV*/ s_Type inType { ((args.size() > i_1) ? args[i_1] : (*(const s_Type*)fu::NIL)) };
                const s_SolvedNode& inValue = (reorder ? (((reorder.size() > i_1) && (reorder[i_1] >= 0)) ? args_in[reorder[i_1]] : (*(const s_SolvedNode*)fu::NIL)) : ((args_in.size() > i_1) ? args_in[i_1] : (*(const s_SolvedNode*)fu::NIL)));
                const s_Node* _0;
                const s_Node& argNode = (*(_0 = &(items[i_1])) ? *_0 : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers));
                const s_Node& annot = argNode.items[LET_TYPE];
                s_Argument BL_18_v {};
                /*MOV*/ s_Argument host_arg = (__extension__ (
                {
                    const s_Argument& __partcopy_ref = EXT_EOYtG69B(original, ctx, module, ss).args[i_1];
                    BL_18_v = (s_Argument { fu::str(__partcopy_ref.name), {}, s_Type(__partcopy_ref.type), s_SolvedNode { __partcopy_ref.dEfault.kind, s_Helpers(__partcopy_ref.dEfault.helpers), {}, {}, fu::str(__partcopy_ref.dEfault.value), fu::vec<s_SolvedNode>(__partcopy_ref.dEfault.items), {}, s_Type(__partcopy_ref.dEfault.type), {} }, __partcopy_ref.flags, {}, {}, {} });
                (void)0;}), static_cast<s_Argument&&>(BL_18_v));
                s_SolvedNode BL_19_v {};
                s_SolvedNode inValue_1 = (__extension__ (
                {
                    const s_SolvedNode& __partcopy_ref = (inValue ? inValue : ((inType = host_arg.dEfault.type), host_arg.dEfault));
                    BL_19_v = (s_SolvedNode { __partcopy_ref.kind, s_Helpers(__partcopy_ref.helpers), {}, {}, fu::str(__partcopy_ref.value), fu::vec<s_SolvedNode>(__partcopy_ref.items), {}, s_Type { s_ValueType { {}, fu::str(__partcopy_ref.type.vtype.canon) }, {}, {} }, {} });
                (void)0;}), static_cast<s_SolvedNode&&>(BL_19_v));
                if (couldRetype_IkqpfGaP(inValue_1, ss))
                {
                    if (!pass_retype)
                    {
                        retypeIndices.push(i_1);
                        continue;
                    }
                    else
                    {
                        const s_Type& paramType = ((annot.kind == s_kind_typeparam) ? ref_WzIoqQB9(typeParams, annot.value).matched : (((annot.kind == s_kind_call) && !annot.items) ? Scope_lookupType_apNa2EhE(annot, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort) : (*(const s_Type*)fu::NIL)));
                        if (paramType)
                        {
                            /*MOV*/ s_Type retype = tryRetyping_2YiDIUlF(inValue_1, paramType, ctx, module, options, _here, ss, _helpers, _current_fnort);
                            if (retype && (retype.vtype.canon != inType.vtype.canon))
                            {
                                inType = static_cast<s_Type&&>(retype);
                                if (args.size() > i_1)
                                    args.mutref(i_1) = s_Type(inType);

                            };
                        };
                    };
                };
                if (!pass_retype && (annot.kind == s_kind_typeunion))
                    retypeIndices.push(i_1);
                else if (argNode.kind == s_kind_let)
                {
                    if (inType)
                    {
                        /*MOV*/ s_Type& exactType = host_arg.type;
                        if (exactType)
                        {
                            if (args.size() > i_1)
                                args.mutref(i_1) = static_cast<s_Type&&>(exactType);

                            continue;
                        }
                        else
                        {
                            fu::view<char> argName = (argNode.value ? argNode.value : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers));
                            s_TypeParam& argName_typeParam = ref_WzIoqQB9(typeParams, ("$"_fu + argName));
                            inType = add_ref_SU0caH0t(s_Type(inType), Lifetime_temporary_8nlJDPX0(), _here, ctx);
                            fu::str _1 {};
                            (!argName_typeParam ? argName_typeParam : (_1 = (x7E_r7bhmB7D("Type param name collision with "_fu, str_J4YCysO5(host_arg, ctx, module, _here, ss, _helpers)) + "."_fu), fail_pNB52ATY(static_cast<fu::str&&>(_1), fu::view<char>{}, ctx, module, _here, ss, _helpers))).matched = s_Type(inType);
                            if (annot)
                            {
                                const bool argOk = trySolveTypeParams_Yy4toJD0(annot, static_cast<s_Type&&>(inType), typeParams, errout, false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                                if (!error && !argOk)
                                {
                                    error = (((qKW_bF2G8fJR("arg"_fu) + " "_fu) + qID_bF2G8fJR(argName)) + ":"_fu);
                                    if (errout.size() > 1)
                                        for (int i_2 = 1; i_2 < errout.size(); i_2++)
                                            error += ("\n\t    "_fu + errout[i_2].message);

                                    else
                                        BUG_JWcxU72K("BUG trySolveTypeParams did not provide an explanation."_fu, ctx, module, _here, ss, _helpers);

                                };
                                if (error)
                                    break;

                            };
                        };
                    };
                }
                else
                {
                    BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
                };
            };
        };

        {
            const bool allowReplaceNonSpecfails = false;
            const s_Module& module_1 = module;
            fu::view<s_Helpers> _helpers_1 = _helpers;
            int _2 {};
            const int start = ((_2 = (find_POzvwmtf(mangle, ' ') + 1)) ? _2 : BUG_JWcxU72K(fu::str{}, ctx, module_1, _here, ss, _helpers_1));
            fu::str mangle_1 = (fu::slice(mangle, 0, start) + mangleArgTypes_IzkDStD6(args));
            if (add_DOlKANOT(mangles, mangle_1))
            {
                const s_Target preexisting { get_axePiRUH(getSpecs_AXXGDTv1(parent_idx, ss), mangle_1) };
                if (preexisting)
                {
                    rem_4Xs1Rg9X(mangles, mangle_1);
                    resetSpec_BQn2rNGp(preexisting, allowReplaceNonSpecfails, parent_idx, mangles, currentSpec, ctx, module_1, _here, ss, _helpers_1);
                    return preexisting;
                }
                else
                    setSpec_M39gePtu(mangle_1, currentSpec, true, false, parent_idx, ctx, module_1, _here, ss, _helpers_1);

            };
        };
        if (error)
            return SPECFAIL_gZeUGKbO(error, parent_idx, SPECFAIL_RentrySafety, mangles, currentSpec, ctx, module, _here, ss, _helpers);

    };
    s_Node& n_fn = tEmplate.node;
    if (!into)
    {
        const s_Node* _3;
        const s_Node& body = (*(_3 = &(items[(items.size() + FN_BODY_BACK)])) ? *_3 : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers));
        if (body.kind == s_kind_pattern)
        {
            s_Map_uYRcurSQUL8 undo { typeParams };
            fu::vec<s_Node> branches { body.items };
            bool did_match = false;
            for (int i = 0; i < branches.size(); i++)
            {
                const s_Node& cond = branches[i].items[0];
                if (cond && !evalTypePattern_17W8iDcf(cond, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort))
                    typeParams = undo;
                else
                {
                    fu::vec<s_Node> cons { branches[i].items };
                    fu::view_mut<s_Node> sig = n_fn.items;

                    {
                        const s_Node& n_ret = cons[(cons.size() + FN_RET_BACK)];
                        if (n_ret)
                            sig.mutref((sig.size() + FN_RET_BACK)) = s_Node(n_ret);

                        const s_Node& n_body = cons[(cons.size() + FN_BODY_BACK)];
                        sig.mutref((sig.size() + FN_BODY_BACK)) = s_Node((n_body ? n_body : BUG_JWcxU72K("doTrySpec: no case/body."_fu, ctx, module, _here, ss, _helpers)));
                    };
                    did_match = true;
                    break;
                };
            };
            if (!did_match)
                return SPECFAIL_gZeUGKbO("No body pattern matched."_fu, parent_idx, SPECFAIL_RentrySafety, mangles, currentSpec, ctx, module, _here, ss, _helpers);

        };
        const s_Node& n_body = n_fn.items[(n_fn.items.size() + FN_BODY_BACK)];
        if (isNativeBody_3T3CMxFt(n_body))
        {
            for (int i = 0; i < numArgs; i++)
            {
                const s_Node* _4;
                const s_Node& argNode = (*(_4 = &(items[i])) ? *_4 : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers));
                fu::str id = ("$"_fu + argNode.value);
                if_ref_kRdUgSmc(typeParams, id);
            };
        };
    };
    s_Target target {};

    {
        const s_ScopeMemo scope0 = Scope_snap_bI1J4XJR(ss._scope, _helpers);
        /*MOV*/ s_ScopeSkipMemos ss0 { ss._ss };
        const int helpers_data0 = ss._helpers_data.size();
        fu_DEFER(
        {
            Scope_pop_VKZbhWNz(ss._scope, scope0, _helpers);
            ss._ss = static_cast<s_ScopeSkipMemos&&>(ss0);
            ss._helpers_data.shrink(helpers_data0);
        });

        {
            if (ss._root_scope)
            {
                const s_Target* _5;
                const s_Ephemeral& eph = EPH_t5Sfn87m((*(_5 = &(EXT_EOYtG69B(original, ctx, module, ss).spec_of)) ? *_5 : original), module, ss);
                const s_ScopeMemo start { (eph.scope_memo ? eph.scope_memo : ss._root_scope) };
                ss._ss = eph.scope_skip;
                ScopeSkip_push_kDYEP7Bv(ss._ss.items, start.items_len, scope0.items_len, ctx, module, _here, ss, _helpers);
                ScopeSkip_push_kDYEP7Bv(ss._ss.implicits, start.implicits_len, scope0.implicits_len, ctx, module, _here, ss, _helpers);
                ScopeSkip_push_kDYEP7Bv(ss._ss.imports, start.imports_len, scope0.imports_len, ctx, module, _here, ss, _helpers);
                ScopeSkip_push_kDYEP7Bv(ss._ss.privates, start.privates_len, scope0.privates_len, ctx, module, _here, ss, _helpers);
                ScopeSkip_push_kDYEP7Bv(ss._ss.usings, start.usings_len, scope0.usings_len, ctx, module, _here, ss, _helpers);
                ScopeSkip_push_kDYEP7Bv(ss._ss.converts, start.converts_len, scope0.converts_len, ctx, module, _here, ss, _helpers);
                ScopeSkip_push_kDYEP7Bv(ss._ss.helpers, start.helpers_len, scope0.helpers_len, ctx, module, _here, ss, _helpers);
            };
            fu::view<int> imports = tEmplate.imports;
            for (int i = 0; i < imports.size(); i++)
            {
                Scope_import_aSuXr0ey(imports[i], ctx, module, _here, ss, _helpers);
                if (i == 0)
                    Scope_import_privates_WjcsjLkI(imports[i], ctx, module, _here, ss, _helpers);

            };
        };
        target = (into ? s_Target(into) : Scope_create_LHVUyYFV(ss._scope, s_kind___no_kind_yet, (*(const fu::str*)fu::NIL), (*(const s_Type*)fu::NIL), s_Flags{}, s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_LAZY)), 0, module));
        s_Ephemeral& eph = EPH_mut_5Rks4Tyc(target, module, ss);
        eph.local_of = parent_idx;
        fu::vec<s_ScopeItem> extra_items { (into ? EPH_t5Sfn87m(into, module, ss).extra_items : (EPH_mut_5Rks4Tyc(target, module, ss).extra_items = intoScopeItems_YXy8d3uk(typeParams, ctx, module, _here, ss, _helpers, _current_fnort))) };
        const s_Target& _current_fnort_1 = target;

        {
            s_Ephemeral& eph_1 = EPH_mut_5Rks4Tyc(target, module, ss);
            const unsigned rev0 = eph_1.revision++;
            if (rev0)
            {
                if ((rev0 >= 1024u))
                {
                    const s_Overload* _6;
                    fu::str _7 {};
                    (_7 = (x7E_r7bhmB7D("Looping forever: "_fu, (_6 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_6, ctx, module, _here, ss, _helpers))) + ".revision >= 1024"_fu), BUG_JWcxU72K(static_cast<fu::str&&>(_7), ctx, module, _here, ss, _helpers));
                }
                else
                {
                    s_Extended& o = EXT_mut_XoqMpqSw(target, module, ss);
                    o.locals.clear();
                    if (ss._warnings.size() > target.index)
                    {
                        ss._warnings.mutref(target.index) = s_Warning{};
                    };
                    fu::vec<s_Target> specs { EPH_t5Sfn87m(target, module, ss).specs.vals };
                    for (int i = 0; i < specs.size(); i++)
                        resetChild_cipivtYw(s_Target(specs[i]), ctx, module, _here, ss, _helpers);

                };
            };
        };
        const s_DeclAsserts asserts = tEmplate.node.asserts;
        s_CurrentFn out = s_CurrentFn { solved_tFunRNAy(n_fn, X_addrofTarget_SVXD82dG(target), (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, _here), s_ScopeMemo(scope0), asserts, s_Flow{}, s_Effects{}, s_Events{}, ((n_fn.flags & s_Flags_F_TEMPLATE) ? 1 : 0), s_Usage{}, 0, false, 0, fu::vec<s_Target>{}, s_Postdom{}, fu::vec<fu::vec<int>>{} };
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
        outItems_S0SebFEP(_current_fn).resize(inItems.size());
        ss._scope.items += extra_items;
        const bool isFirst = (!into || !GET_etmeeocQ(into, ctx, module, _here, ss, _helpers).solved);
        const s_Flags isTemplate = (tEmplate.node.flags & s_Flags_F_TEMPLATE);
        const bool isSpec = (isTemplate ? (!into || !isFirst) : false);
        const bool isUnspec = (isTemplate ? !isSpec : false);
        for (int i = 0; i < (inItems.size() + FN_ARGS_BACK); i++)
        {
            const s_Node& n_arg = inItems[i];
            _here = n_arg.token;
            if (isUnspec && ((n_arg.flags & s_Flags_F_TEMPLATE) || !n_arg.items[LET_TYPE]))
            {
                s_SolvedNode init = (n_arg.items[LET_INIT] ? solveNode_A7YoMoA6(n_arg.items[LET_INIT], (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort_1) : s_SolvedNode{});
                outItems_S0SebFEP(_current_fn).mutref(i) = SolvedNode_Ob5YrUkY(s_kind_let, s_Type{}, n_arg.flags, n_arg.value, fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, s_Helpers{}, _here);
            }
            else
            {
                s_Type specType = (isSpec ? tryGetArgSpecType_YaPkgEFx(n_arg.value, extra_items, ctx, module, _here, ss, _helpers) : s_Type{});
                /*MOV*/ s_SolvedNode arg = solveLet_W1roIZE3(n_arg, specType, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort_1);
                outItems_S0SebFEP(_current_fn).mutref(i) = static_cast<s_SolvedNode&&>(arg);
            };
        };
        const s_Node& n_ret = (!isUnspec ? inItems[(inItems.size() + FN_RET_BACK)] : (*(const s_Node*)fu::NIL));
        const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
        if (n_body)
        {
            const bool isNative = isNativeBody_3T3CMxFt(n_body);
            s_Type ret_expect = (n_ret ? evalTypeAnnot_ctbW9IO5(n_ret, (*(const s_Map_uYRcurSQUL8*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort_1) : s_Type{});
            /*MOV*/ s_Type ret_seed { (n_ret ? (ret_expect ? ret_expect : BUG_JWcxU72K(("falsy ret_expect: "_fu + n_fn.value), ctx, module, _here, ss, _helpers)) : t_never) };
            if (ret_seed.lifetime)
            {
                ret_seed.lifetime = (isNative ? Lifetime_fromNative_yjG04nGm(inItems, fu::get_view(_current_fn.out.items, 0, (_current_fn.out.items.size() + FN_ARGS_BACK)), ret_seed, ctx, module, _here, ss, _helpers) : Lifetime_static_8nlJDPX0());
            };
            if (isFirst)
            {
                /*MOV*/ fu::str name {};
                s_FxMask fx_mask {};
                if (isNative)
                {
                    for (int i_1 = 0; i_1 < n_body.items.size(); i_1++)
                    {
                        fu::view<char> item = n_body.items[i_1].value;
                        if (starts_90iSu77l(item, '|'))
                        {
                            s_FxMask _8 {};
                            fx_mask |= ((item == "|output"_fu) ? EFFECTS_output : ((_8 = parse_Xs4j38EK(fu::get_view(item, 1, item.size()))) ? _8 : BUG_JWcxU72K(("Invalid |Fx mask: "_fu + qBAD_bF2G8fJR(item)), ctx, module, _here, ss, _helpers)));
                        }
                        else
                            name += ("\n"_fu + item);

                    };
                };
                if (!(name))
                    name = (n_fn.value ? n_fn.value : BUG_JWcxU72K("TODO anonymous fns"_fu, ctx, module, _here, ss, _helpers));

                s_Overload& overload = GET_mut_TpIPZdoW(target, module, ss);
                overload.name = static_cast<fu::str&&>(name);
                s_Extended& ext = EXT_mut_XoqMpqSw(target, module, ss);
                ext.tEmplate = tEmplate;
                ext.spec_of = overloadIdx;
                ext.fx_mask = fx_mask;
                const s_CurrentFn& out_1 = _current_fn;
                /*MOV*/ s_Type retval = static_cast<s_Type&&>(ret_seed);
                const bool maybeLast = (isNative ? !isUnspec : false);
                fu::view<s_Helpers> _helpers_1 = _helpers;
                _here = (n_fn.token ? n_fn.token : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers_1));
                if (GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1).status & s_SolverStatus_SS_DIRTY)
                    GET_mut_TpIPZdoW(target, module, ss).status |= s_SolverStatus_SS_UPDATED;
                else
                {
                    fu::view<s_SolvedNode> items_1 = out_1.out.items;
                    fu::str mustBecomeInline = currentFn_mustBecomeInline_ZwdoEqSr(_current_fn);
                    const int N = (items_1.size() + FN_ARGS_BACK);
                    int min = 0;
                    int max = 0;
                    const s_NativeHacks NativeHacks = (isNative ? NativeHacks_o6l3osDy(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1).name) : s_NativeHacks{});
                    int numArgsWritten = 0;
                    fu::vec<s_Argument> args {};
                    for (int i_1 = 0; i_1 < N; i_1++)
                    {
                        const s_SolvedNode& argNode = items_1[i_1];
                        if (!(argNode.kind == s_kind_letdef))
                        {
                            if (argNode.target)
                            {
                                const s_Overload* _9;
                                fu::str _10 {};
                                (_10 = x7E_r7bhmB7D("Argnode is not letdef, but has a target: "_fu, (_9 = &(GET_etmeeocQ(argNode.target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_9, ctx, module, _here, ss, _helpers_1))), BUG_JWcxU72K(static_cast<fu::str&&>(_10), ctx, module, _here, ss, _helpers_1));
                            };
                        };
                        const s_SolvedNode& argNode_1 = ((argNode.kind == s_kind_letdef) ? GET_etmeeocQ(argNode.target, ctx, module, _here, ss, _helpers_1).solved : argNode);
                        if (argNode_1.kind == s_kind_let)
                        {
                            fu::str name_1 { argNode_1.value };
                            /*MOV*/ fu::str autocall = ((argNode_1.flags & s_Flags_F_COMPOUND_ID) ? CompoundArgID_outerSplice_pcsgknaw(name_1, ctx, module, _here, ss, _helpers_1) : fu::str{});
                            const bool isImplicit = !!(argNode_1.flags & s_Flags_F_IMPLICIT);
                            const bool isInjected = !!(argNode_1.flags & s_Flags_F_INJECTED);
                            const s_Target& argTarget = argNode_1.target;
                            const bool written_via = ((!isUnspec && is_mutref_tkXzsAAo(argNode_1.type, _here, ctx)) ? (isNative || has_35mEQu7d(out_1.events.ever_written, argTarget.index)) : false);
                            /*MOV*/ s_BitSet soft_risk {};
                            /*MOV*/ s_BitSet hard_risk {};
                            if (written_via)
                            {
                                numArgsWritten++;
                                if (isNative)
                                {
                                    add_range_45N7jBpR(soft_risk, N);
                                    rem_mle9fepo(soft_risk, i_1);
                                    if (!NativeHacks.soft_risk)
                                        hard_risk = soft_risk;

                                }
                                else
                                {
                                    ArgsAtRisk_list_7PSobXwc(soft_risk, out_1.flow, i_1, out_1.flow.at_soft_risk);
                                    ArgsAtRisk_list_7PSobXwc(hard_risk, out_1.flow, i_1, out_1.flow.at_hard_risk);
                                    if (TODO_FIX_isArray_DOKZ61Hc(argNode_1.type))
                                    {
                                        s_BitSet soft { soft_risk };
                                        and_not_assign_Eu2YEyBH(soft, hard_risk);
                                        each_7AyeiUvc(soft, items_1, hard_risk, ctx, module, _here, ss, _helpers_1);
                                    };
                                };
                            };
                            if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE)) && written_via)
                            {
                                const s_Overload* _11;
                                fu::str _12 {};
                                const s_Overload* _13;
                                fu::str _14 {};
                                fu::str _15 {};
                                (_15 = (_14 = ((_12 = x7E_r7bhmB7D((_11 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_11, ctx, module, _here, ss, _helpers_1)), " is not pure, writes to "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_12), (_13 = &(GET_etmeeocQ(argTarget, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_13, ctx, module, _here, ss, _helpers_1)))) + ":\n"_fu), (static_cast<fu::str&&>(_14) + qSTACK_Yv9WlDnV(target, out_1.out, Region_fromLocal_Uj5ZOr54(argTarget.index), fu::view<s_Target>{}, s_ArgQuery{}, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_15), "pure"_fu, ctx, module, _here, ss, _helpers_1));
                            }
                            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_CTX)) && isImplicit && written_via)
                            {
                                const s_Overload* _16;
                                fu::str _17 {};
                                const s_Overload* _18;
                                fu::str _19 {};
                                fu::str _20 {};
                                (_20 = (_19 = ((_17 = x7E_r7bhmB7D((_16 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_16, ctx, module, _here, ss, _helpers_1)), " is not purectx, writes to "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_17), (_18 = &(GET_etmeeocQ(argTarget, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_18, ctx, module, _here, ss, _helpers_1)))) + ":\n"_fu), (static_cast<fu::str&&>(_19) + qSTACK_Yv9WlDnV(target, out_1.out, Region_fromLocal_Uj5ZOr54(argTarget.index), fu::view<s_Target>{}, s_ArgQuery{}, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_20), "purectx"_fu, ctx, module, _here, ss, _helpers_1));
                            }
                            else if (maybeLast && s_DeclAsserts((asserts & s_DeclAsserts_A_NOVEC)) && !isNoVec_yegoQ3iT(argNode_1.type, ctx, module) && !mustBecomeInline)
                            {
                                const s_Overload* _21;
                                fu::str _22 {};
                                const s_Overload* _23;
                                fu::str _24 {};
                                fu::str _25 {};
                                fu::str _26 {};
                                (_26 = (_25 = ((_24 = ((_22 = x7E_r7bhmB7D((_21 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_21, ctx, module, _here, ss, _helpers_1)), " is not novec, "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_22), (_23 = &(GET_etmeeocQ(argTarget, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_23, ctx, module, _here, ss, _helpers_1)))) + " is "_fu), (static_cast<fu::str&&>(_24) + humanizeType_XI6W2OpL(argNode_1.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers_1, _current_fnort_1))) + ":\n"_fu), (static_cast<fu::str&&>(_25) + qSTACK_Yv9WlDnV(target, out_1.out, Region_fromLocal_Uj5ZOr54(argTarget.index), fu::view<s_Target>{}, s_ArgQuery_AQ_WhyNotNovec, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_26), "novec"_fu, ctx, module, _here, ss, _helpers_1));
                            }
                            else
                            {
                                const bool cow_inside = some_KRtlQbOV(out_1.events.cows_inside, argTarget);
                                if (has_35mEQu7d(soft_risk, i_1))
                                {
                                    const s_Overload* _27;
                                    fu::str _28 {};
                                    (_28 = (x7E_r7bhmB7D("updateScope: "_fu, (_27 = &(GET_etmeeocQ(argTarget, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_27, ctx, module, _here, ss, _helpers_1))) + " soft_risk lists self"_fu), BUG_JWcxU72K(static_cast<fu::str&&>(_28), ctx, module, _here, ss, _helpers_1));
                                }
                                else if (has_35mEQu7d(hard_risk, i_1))
                                {
                                    const s_Overload* _29;
                                    fu::str _30 {};
                                    (_30 = (x7E_r7bhmB7D("updateScope: "_fu, (_29 = &(GET_etmeeocQ(argTarget, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_29, ctx, module, _here, ss, _helpers_1))) + " hard_risk lists self"_fu), BUG_JWcxU72K(static_cast<fu::str&&>(_30), ctx, module, _here, ss, _helpers_1));
                                };
                                /*MOV*/ s_Argument arg = s_Argument { fu::str(name_1), static_cast<fu::str&&>(autocall), s_Type(argNode_1.type), s_SolvedNode((!isImplicit ? argNode_1.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), ((argNode_1.flags | (written_via ? s_Flags_F_WRITTEN_TO : s_Flags{})) | (cow_inside ? s_Flags_F_COW_INSIDE : s_Flags{})), argTarget.index, static_cast<s_BitSet&&>(soft_risk), static_cast<s_BitSet&&>(hard_risk) };
                                if (arg.type || isUnspec)
                                {
                                    if (!isInjected)
                                    {
                                        if (max != int(0x7fffffffu))
                                            max++;

                                        if (!arg.dEfault && !isImplicit)
                                            min++;

                                    };
                                    if (arg.flags & s_Flags_F_REST_ARG)
                                        max = int(0x7fffffffu);

                                    if (is_ref_vcLGyw8p(argNode_1.type))
                                    {
                                        const s_Region region = Region_fromLocal_Uj5ZOr54(argTarget.index);
                                        if (is_ref_vcLGyw8p(retval) && rem_tGQOAQFD(retval.lifetime.uni0n, region))
                                        {
                                            add_tGQOAQFD(retval.lifetime.uni0n, Region_fromArgPosition_vmMI39NZ(i_1));
                                        }
                                        else if (willPassByValue_5bZp5K54(arg, ctx, _here))
                                            arg.type = clear_refs_57qzYcmt(s_Type(arg.type));

                                    };
                                    args.push(static_cast<s_Argument&&>(arg));
                                }
                                else
                                    BUG_JWcxU72K((("updateScope: Unexpected untyped argument: `"_fu + name_1) + "`."_fu), ctx, module, _here, ss, _helpers_1);

                            };
                        }
                        else
                        {
                            BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers_1);
                        };
                    };
                    s_Overload BL_114_v {};
                    s_Overload overload_1 = (__extension__ (
                    {
                        const s_Overload& __partcopy_ref = GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1);
                        BL_114_v = (s_Overload { {}, __partcopy_ref.flags, {}, {}, s_Type(__partcopy_ref.type), {} });
                    (void)0;}), static_cast<s_Overload&&>(BL_114_v));
                    s_Extended& ext_1 = EXT_mut_XoqMpqSw(target, module, ss);
                    bool change = false;
                    const bool hasCallers = !!EPH_t5Sfn87m(target, module, ss).callers;
                    if (hasCallers)
                    {
                        if (!(change))
                            change = ((args.size() != ext_1.args.size()) || !(overload_1.type == retval));

                        if (!change)
                        {
                            for (int i_2 = 0; i_2 < args.size(); i_2++)
                            {
                                const s_Argument& a = args[i_2];
                                const s_Argument& b = ext_1.args[i_2];
                                if (!((a.name == b.name) && (ignoreLocalLts_eXzpE7U0(s_Type(a.type), a) == ignoreLocalLts_eXzpE7U0(s_Type(b.type), a))))
                                {
                                    change = true;
                                    break;
                                };
                            };
                        };
                    };
                    ext_1.min = min;
                    ext_1.max = max;
                    ext_1.args = args;
                    if (!isNative)
                        ext_1.fx_mask = out_1.effects.fx_mask;

                    ext_1.cows_inside = out_1.events.cows_inside;
                    if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOTHROW)) && s_FxMask((ext_1.fx_mask & s_FxMask_Fx_Throws)))
                    {
                        const s_Overload* _31;
                        fu::str _32 {};
                        fu::str _33 {};
                        (_33 = (_32 = x7E_r7bhmB7D((_31 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_31, ctx, module, _here, ss, _helpers_1)), " is not nothrow, throws here:\n"_fu), (static_cast<fu::str&&>(_32) + qSTACK_KuMhtrnj(target, out_1.out, s_FxMask_Fx_Throws, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_33), fu::view<char>{}, ctx, module, _here, ss, _helpers_1));
                    }
                    else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOCRASH)) && s_FxMask((ext_1.fx_mask & s_FxMask_Fx_Crashes)))
                    {
                        const s_Overload* _34;
                        fu::str _35 {};
                        fu::str _36 {};
                        (_36 = (_35 = x7E_r7bhmB7D((_34 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_34, ctx, module, _here, ss, _helpers_1)), " is not nocrash, can crash here:\n"_fu), (static_cast<fu::str&&>(_35) + qSTACK_KuMhtrnj(target, out_1.out, s_FxMask_Fx_Crashes, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_36), fu::view<char>{}, ctx, module, _here, ss, _helpers_1));
                    }
                    else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOIO)) && s_FxMask((ext_1.fx_mask & s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)))))
                    {
                        const s_Overload* _37;
                        fu::str _38 {};
                        fu::str _39 {};
                        (_39 = (_38 = x7E_r7bhmB7D((_37 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_37, ctx, module, _here, ss, _helpers_1)), " is not noio, performs I/O here:\n"_fu), (static_cast<fu::str&&>(_38) + qSTACK_KuMhtrnj(target, out_1.out, s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)), fu::view<s_Target>{}, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_39), fu::view<char>{}, ctx, module, _here, ss, _helpers_1));
                    }
                    else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_FX)) && s_FxMask((ext_1.fx_mask & s_FxMask_Fx_Output)))
                    {
                        const s_Overload* _40;
                        fu::str _41 {};
                        fu::str _42 {};
                        (_42 = (_41 = x7E_r7bhmB7D((_40 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_40, ctx, module, _here, ss, _helpers_1)), " is not purefx, outputs here:\n"_fu), (static_cast<fu::str&&>(_41) + qSTACK_KuMhtrnj(target, out_1.out, s_FxMask_Fx_Output, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_42), fu::view<char>{}, ctx, module, _here, ss, _helpers_1));
                    }
                    else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOFLOW)) && _current_fn.effects.far_jumps)
                    {
                        const s_Overload* _43;
                        fu::str _44 {};
                        const s_Overload* _45;
                        fu::str _46 {};
                        (_46 = ((_44 = x7E_r7bhmB7D((_43 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_43, ctx, module, _here, ss, _helpers_1)), " is not noflow: contains non-local control flow, jumping out to "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_44), (_45 = &(GET_etmeeocQ(s_Target { module.modid, _current_fn.effects.far_jumps[0] }, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_45, ctx, module, _here, ss, _helpers_1)))) + "."_fu), fail_pNB52ATY(static_cast<fu::str&&>(_46), fu::view<char>{}, ctx, module, _here, ss, _helpers_1));
                    }
                    else
                    {
                        if (maybeLast && !mustBecomeInline)
                        {
                            if (!(numArgsWritten || ext_1.fx_mask || !is_void_8KZIyCKE(retval) || (overload_1.flags & s_Flags_F_LAX)))
                            {
                                const s_TokenIdx& token = out_1.out.token;
                                const s_Module& module_1 = module;
                                s_Warning& a = grow_if_oob_177Uu4fg(ss._warnings, _current_fn.out.target.index);
                                if (!(a))
                                {
                                    s_TokenIdx _47 {};
                                    const s_Overload* _48;
                                    fu::str _49 {};
                                    a = (_47 = s_TokenIdx(token), s_Warning { static_cast<s_TokenIdx&&>(_47), (_49 = ((x7E_r7bhmB7D((_48 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_48, ctx, module, _here, ss, _helpers_1)), " does nothing: returns void and has no effects. Make it "_fu) + qKW_bF2G8fJR("lax"_fu)) + " if this is intentional."_fu), fail_appendStack_UWVoDyaJ(static_cast<fu::str&&>(_49), ctx, module_1, _here, ss, _helpers_1)) });
                                };
                            };
                        };
                        if (retval)
                        {
                            if (is_ref_vcLGyw8p(retval))
                            {
                                if (isIrrelevant_DOKZ61Hc(retval))
                                {
                                    retval.lifetime = Lifetime_static_8nlJDPX0();
                                };
                                Lifetime_test_yNTCCzEE(retval.lifetime, false, ctx, module, _here, ss, _helpers_1, _current_fnort_1);
                            };
                            each_ZyJoKE6S(retval.lifetime.uni0n, retval, _current_fnort_1, ctx, module, _here, ss, _helpers_1);
                            s_Overload& overload_2 = GET_mut_TpIPZdoW(target, module, ss);
                            overload_2.type = static_cast<s_Type&&>(retval);
                            overload_2.flags = out_1.out.flags;
                            const s_kind kind = (isUnspec ? s_kind_template : (isNative ? s_kind___native : (mustBecomeInline ? s_kind_inline : s_kind_fn)));
                            if (kind != overload_2.kind)
                            {
                                overload_2.kind = kind;
                                change = true;
                            };

                            {
                                const bool rtl = (((args.size() == 2) && (overload_2.flags & s_Flags_F_OPERATOR)) ? hasAssignment_z64rfJDX(overload_2.name) : false);
                                isRTL_set_bEV6ngdT(overload_2, rtl);
                            };
                            const s_SolvedNode& solved = (!isUnspec ? out_1.out : (*(const s_SolvedNode*)fu::NIL));
                            if (hasCallers)
                            {
                                if (!change && (kind == s_kind_inline))
                                    change = astChange_CJKCvzNX(overload_2.solved, solved);

                                if (change)
                                    overload_2.status |= s_SolverStatus_SS_UPDATED;

                            };
                            overload_2.solved = solved;
                            if (!isNative && !isUnspec)
                            {
                                const int sourceModid = tEmplate.node.token.modid;
                                fu::str shortModuleName = ((sourceModid != module.modid) ? ((sourceModid && module.modid) ? getShortModuleName_Y2f94oTr(ctx.modules[sourceModid].fname) : fu::str{}) : fu::str(ss.shortModuleName));
                                fu::str sig = (((EPH_t5Sfn87m(target, module, ss).local_of ? fu::i64dec(target.index) : fu::str{}) + shortModuleName) + mangleSignature_3RnedeY0(EXT_EOYtG69B(target, ctx, module, ss).args));
                                fu::str _50 {};
                                EXT_mut_XoqMpqSw(target, module, ss).sighash = (sig ? ((_50 = hash62_FVPTYzIy(sig, 11)) ? static_cast<fu::str&&>(_50) : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers_1)) : fu::str{});
                            };
                            if (!into)
                            {

                                {
                                    fu::view<s_Argument> args_1 = EXT_EOYtG69B(target, ctx, module, ss).args;
                                    const s_Module& module_1 = module;
                                    int _51 {};
                                    const int start = ((_51 = (find_POzvwmtf(mangle, ' ') + 1)) ? _51 : BUG_JWcxU72K(fu::str{}, ctx, module_1, _here, ss, _helpers_1));
                                    fu::str mangle_1 = (fu::slice(mangle, 0, start) + mangleArgTypes_VcM3h0PQ(args_1));
                                    if (add_DOlKANOT(mangles, mangle_1))
                                    {
                                        const s_Target preexisting { get_axePiRUH(getSpecs_AXXGDTv1(parent_idx, ss), mangle_1) };
                                        if (preexisting)
                                        {
                                            rem_4Xs1Rg9X(mangles, mangle_1);
                                            resetSpec_BQn2rNGp(preexisting, maybeLast, parent_idx, mangles, currentSpec, ctx, module_1, _here, ss, _helpers_1);
                                            return preexisting;
                                        }
                                        else
                                            setSpec_M39gePtu(mangle_1, currentSpec, true, false, parent_idx, ctx, module_1, _here, ss, _helpers_1);

                                    };
                                };
                                resetSpec_BQn2rNGp(target, false, parent_idx, mangles, currentSpec, ctx, module, _here, ss, _helpers_1);
                            };
                        }
                        else
                            BUG_JWcxU72K("updateScope: no return type."_fu, ctx, module, _here, ss, _helpers_1);

                    };
                };
            };
            bool didSetBody = false;
            if (!isUnspec && !isNative)
            {
                if (isFirst)
                {
                    s_Extended& ext = EXT_mut_XoqMpqSw(target, module, ss);
                    for (int i_1 = 0; i_1 < ext.args.size(); i_1++)
                        force_relax_LUN3uPs9(ext.args.mutref(i_1).type, (RELAX_all & ~q_USAGE));

                    ext.fx_mask |= s_FxMask((s_FxMask_Fx_NotDeadCode | s_FxMask_Fx_Throws));
                };

                {
                    const int self = target.index;
                    fu::vec<int> calls = steal_zXr795Ct(EPH_mut_5Rks4Tyc(target, module, ss).calls);
                    for (int i_1 = 0; i_1 < calls.size(); i_1++)
                    {
                        const s_Target call = s_Target { module.modid, calls[i_1] };
                        if (!(rem_ys5ADtDp(EPH_mut_5Rks4Tyc(call, module, ss).callers, self)))
                        {
                            const s_Overload* _52;
                            fu::str _53 {};
                            const s_Overload* _54;
                            fu::str _55 {};
                            (_55 = (_53 = (x7E_r7bhmB7D("doTrySpec: "_fu, (_52 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_52, ctx, module, _here, ss, _helpers))) + " not listed as a caller of "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_53), (_54 = &(GET_etmeeocQ(call, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_54, ctx, module, _here, ss, _helpers)))), BUG_JWcxU72K(static_cast<fu::str&&>(_55), ctx, module, _here, ss, _helpers));
                        };
                    };
                };
                const s_SolverStatus status = (GET_mut_TpIPZdoW(target, module, ss).status &= s_SolverStatus(~s_SolverStatus_SS_Debug_AllPassesComplete));
                if (s_SolverStatus((status & s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_DIRTY | s_SolverStatus_SS_FINALIZED)) | s_SolverStatus_SS_DID_START)))) != s_SolverStatus_SS_DID_START)
                {
                    const s_Overload* _56;
                    fu::str _57 {};
                    (_57 = x7E_r7bhmB7D(x7E_r7bhmB7D((_56 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_56, ctx, module, _here, ss, _helpers)), " is not SS_DID_START just before solve: "_fu), str_N7InCVna(status)), BUG_JWcxU72K(static_cast<fu::str&&>(_57), ctx, module, _here, ss, _helpers));
                }
                else
                {
                    _current_fn.TODO_FIX_isInline = !!(tEmplate.node.flags & s_Flags_F_INLINE);
                    /*MOV*/ s_SolvedNode s_body = solveBlock_SoEtv2T3(n_body, ret_expect, target.index, s_HelpersMask((s_HelpersMask((s_HelpersMask((s_HelpersMask_HM_Function | s_HelpersMask_HM_CanReturn)) | s_HelpersMask_HM_LabelUsed)) | ((n_fn.flags & s_Flags_F_LAMBDA) ? s_HelpersMask_HM_Lambda : s_HelpersMask{}))), n_fn.value, 0, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort_1);
                    const s_HelpersData* BL_156_v;
                    const s_Type* _58;
                    const s_Type& retval = (*(_58 = &((__extension__ (
                    {
                        const s_Helpers& h = s_body.helpers;
                        BL_156_v = &(ss._helpers_data[h.index]);
                    (void)0;}), *BL_156_v).ret_actual)) ? *_58 : BUG_JWcxU72K("doTrySpec: no body.ret_actual"_fu, ctx, module, _here, ss, _helpers));
                    const int idx_body = (outItems_S0SebFEP(_current_fn).size() + FN_BODY_BACK);
                    outItems_S0SebFEP(_current_fn).mutref(idx_body) = static_cast<s_SolvedNode&&>((s_body ? s_body : BUG_JWcxU72K("falsy body"_fu, ctx, module, _here, ss, _helpers)));
                    didSetBody = true;
                    const s_CurrentFn& out_1 = _current_fn;
                    /*MOV*/ s_Type retval_1 { retval };
                    const bool maybeLast = true;
                    fu::view<s_Helpers> _helpers_1 = _helpers;
                    _here = (n_fn.token ? n_fn.token : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers_1));
                    if (GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1).status & s_SolverStatus_SS_DIRTY)
                        GET_mut_TpIPZdoW(target, module, ss).status |= s_SolverStatus_SS_UPDATED;
                    else
                    {
                        fu::view<s_SolvedNode> items_1 = out_1.out.items;
                        fu::str mustBecomeInline = currentFn_mustBecomeInline_ZwdoEqSr(_current_fn);
                        const int N = (items_1.size() + FN_ARGS_BACK);
                        int min = 0;
                        int max = 0;
                        const s_NativeHacks NativeHacks = (isNative ? NativeHacks_o6l3osDy(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1).name) : s_NativeHacks{});
                        int numArgsWritten = 0;
                        fu::vec<s_Argument> args {};
                        for (int i_1 = 0; i_1 < N; i_1++)
                        {
                            const s_SolvedNode& argNode = items_1[i_1];
                            if (!(argNode.kind == s_kind_letdef))
                            {
                                if (argNode.target)
                                {
                                    const s_Overload* _59;
                                    fu::str _60 {};
                                    (_60 = x7E_r7bhmB7D("Argnode is not letdef, but has a target: "_fu, (_59 = &(GET_etmeeocQ(argNode.target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_59, ctx, module, _here, ss, _helpers_1))), BUG_JWcxU72K(static_cast<fu::str&&>(_60), ctx, module, _here, ss, _helpers_1));
                                };
                            };
                            const s_SolvedNode& argNode_1 = ((argNode.kind == s_kind_letdef) ? GET_etmeeocQ(argNode.target, ctx, module, _here, ss, _helpers_1).solved : argNode);
                            if (argNode_1.kind == s_kind_let)
                            {
                                fu::str name { argNode_1.value };
                                /*MOV*/ fu::str autocall = ((argNode_1.flags & s_Flags_F_COMPOUND_ID) ? CompoundArgID_outerSplice_pcsgknaw(name, ctx, module, _here, ss, _helpers_1) : fu::str{});
                                const bool isImplicit = !!(argNode_1.flags & s_Flags_F_IMPLICIT);
                                const bool isInjected = !!(argNode_1.flags & s_Flags_F_INJECTED);
                                const s_Target& argTarget = argNode_1.target;
                                const bool written_via = ((!isUnspec && is_mutref_tkXzsAAo(argNode_1.type, _here, ctx)) ? (isNative || has_35mEQu7d(out_1.events.ever_written, argTarget.index)) : false);
                                /*MOV*/ s_BitSet soft_risk {};
                                /*MOV*/ s_BitSet hard_risk {};
                                if (written_via)
                                {
                                    numArgsWritten++;
                                    if (isNative)
                                    {
                                        add_range_45N7jBpR(soft_risk, N);
                                        rem_mle9fepo(soft_risk, i_1);
                                        if (!NativeHacks.soft_risk)
                                            hard_risk = soft_risk;

                                    }
                                    else
                                    {
                                        ArgsAtRisk_list_7PSobXwc(soft_risk, out_1.flow, i_1, out_1.flow.at_soft_risk);
                                        ArgsAtRisk_list_7PSobXwc(hard_risk, out_1.flow, i_1, out_1.flow.at_hard_risk);
                                        if (TODO_FIX_isArray_DOKZ61Hc(argNode_1.type))
                                        {
                                            s_BitSet soft { soft_risk };
                                            and_not_assign_Eu2YEyBH(soft, hard_risk);
                                            each_7AyeiUvc(soft, items_1, hard_risk, ctx, module, _here, ss, _helpers_1);
                                        };
                                    };
                                };
                                if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE)) && written_via)
                                {
                                    const s_Overload* _61;
                                    fu::str _62 {};
                                    const s_Overload* _63;
                                    fu::str _64 {};
                                    fu::str _65 {};
                                    (_65 = (_64 = ((_62 = x7E_r7bhmB7D((_61 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_61, ctx, module, _here, ss, _helpers_1)), " is not pure, writes to "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_62), (_63 = &(GET_etmeeocQ(argTarget, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_63, ctx, module, _here, ss, _helpers_1)))) + ":\n"_fu), (static_cast<fu::str&&>(_64) + qSTACK_Yv9WlDnV(target, out_1.out, Region_fromLocal_Uj5ZOr54(argTarget.index), fu::view<s_Target>{}, s_ArgQuery{}, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_65), "pure"_fu, ctx, module, _here, ss, _helpers_1));
                                }
                                else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_CTX)) && isImplicit && written_via)
                                {
                                    const s_Overload* _66;
                                    fu::str _67 {};
                                    const s_Overload* _68;
                                    fu::str _69 {};
                                    fu::str _70 {};
                                    (_70 = (_69 = ((_67 = x7E_r7bhmB7D((_66 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_66, ctx, module, _here, ss, _helpers_1)), " is not purectx, writes to "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_67), (_68 = &(GET_etmeeocQ(argTarget, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_68, ctx, module, _here, ss, _helpers_1)))) + ":\n"_fu), (static_cast<fu::str&&>(_69) + qSTACK_Yv9WlDnV(target, out_1.out, Region_fromLocal_Uj5ZOr54(argTarget.index), fu::view<s_Target>{}, s_ArgQuery{}, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_70), "purectx"_fu, ctx, module, _here, ss, _helpers_1));
                                }
                                else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOVEC)) && !isNoVec_yegoQ3iT(argNode_1.type, ctx, module) && !mustBecomeInline)
                                {
                                    const s_Overload* _71;
                                    fu::str _72 {};
                                    const s_Overload* _73;
                                    fu::str _74 {};
                                    fu::str _75 {};
                                    fu::str _76 {};
                                    (_76 = (_75 = ((_74 = ((_72 = x7E_r7bhmB7D((_71 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_71, ctx, module, _here, ss, _helpers_1)), " is not novec, "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_72), (_73 = &(GET_etmeeocQ(argTarget, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_73, ctx, module, _here, ss, _helpers_1)))) + " is "_fu), (static_cast<fu::str&&>(_74) + humanizeType_XI6W2OpL(argNode_1.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers_1, _current_fnort_1))) + ":\n"_fu), (static_cast<fu::str&&>(_75) + qSTACK_Yv9WlDnV(target, out_1.out, Region_fromLocal_Uj5ZOr54(argTarget.index), fu::view<s_Target>{}, s_ArgQuery_AQ_WhyNotNovec, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_76), "novec"_fu, ctx, module, _here, ss, _helpers_1));
                                }
                                else
                                {
                                    const bool cow_inside = some_KRtlQbOV(out_1.events.cows_inside, argTarget);
                                    if (has_35mEQu7d(soft_risk, i_1))
                                    {
                                        const s_Overload* _77;
                                        fu::str _78 {};
                                        (_78 = (x7E_r7bhmB7D("updateScope: "_fu, (_77 = &(GET_etmeeocQ(argTarget, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_77, ctx, module, _here, ss, _helpers_1))) + " soft_risk lists self"_fu), BUG_JWcxU72K(static_cast<fu::str&&>(_78), ctx, module, _here, ss, _helpers_1));
                                    }
                                    else if (has_35mEQu7d(hard_risk, i_1))
                                    {
                                        const s_Overload* _79;
                                        fu::str _80 {};
                                        (_80 = (x7E_r7bhmB7D("updateScope: "_fu, (_79 = &(GET_etmeeocQ(argTarget, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_79, ctx, module, _here, ss, _helpers_1))) + " hard_risk lists self"_fu), BUG_JWcxU72K(static_cast<fu::str&&>(_80), ctx, module, _here, ss, _helpers_1));
                                    };
                                    /*MOV*/ s_Argument arg = s_Argument { fu::str(name), static_cast<fu::str&&>(autocall), s_Type(argNode_1.type), s_SolvedNode((!isImplicit ? argNode_1.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), ((argNode_1.flags | (written_via ? s_Flags_F_WRITTEN_TO : s_Flags{})) | (cow_inside ? s_Flags_F_COW_INSIDE : s_Flags{})), argTarget.index, static_cast<s_BitSet&&>(soft_risk), static_cast<s_BitSet&&>(hard_risk) };
                                    if (arg.type || isUnspec)
                                    {
                                        if (!isInjected)
                                        {
                                            if (max != int(0x7fffffffu))
                                                max++;

                                            if (!arg.dEfault && !isImplicit)
                                                min++;

                                        };
                                        if (arg.flags & s_Flags_F_REST_ARG)
                                            max = int(0x7fffffffu);

                                        if (is_ref_vcLGyw8p(argNode_1.type))
                                        {
                                            const s_Region region = Region_fromLocal_Uj5ZOr54(argTarget.index);
                                            if (is_ref_vcLGyw8p(retval_1) && rem_tGQOAQFD(retval_1.lifetime.uni0n, region))
                                            {
                                                add_tGQOAQFD(retval_1.lifetime.uni0n, Region_fromArgPosition_vmMI39NZ(i_1));
                                            }
                                            else if (willPassByValue_5bZp5K54(arg, ctx, _here))
                                                arg.type = clear_refs_57qzYcmt(s_Type(arg.type));

                                        };
                                        args.push(static_cast<s_Argument&&>(arg));
                                    }
                                    else
                                        BUG_JWcxU72K((("updateScope: Unexpected untyped argument: `"_fu + name) + "`."_fu), ctx, module, _here, ss, _helpers_1);

                                };
                            }
                            else
                            {
                                BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers_1);
                            };
                        };
                        s_Overload BL_185_v {};
                        s_Overload overload = (__extension__ (
                        {
                            const s_Overload& __partcopy_ref = GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1);
                            BL_185_v = (s_Overload { {}, __partcopy_ref.flags, {}, {}, s_Type(__partcopy_ref.type), {} });
                        (void)0;}), static_cast<s_Overload&&>(BL_185_v));
                        s_Extended& ext = EXT_mut_XoqMpqSw(target, module, ss);
                        bool change = false;
                        const bool hasCallers = !!EPH_t5Sfn87m(target, module, ss).callers;
                        if (hasCallers)
                        {
                            if (!(change))
                                change = ((args.size() != ext.args.size()) || !(overload.type == retval_1));

                            if (!change)
                            {
                                for (int i_2 = 0; i_2 < args.size(); i_2++)
                                {
                                    const s_Argument& a = args[i_2];
                                    const s_Argument& b = ext.args[i_2];
                                    if (!((a.name == b.name) && (ignoreLocalLts_eXzpE7U0(s_Type(a.type), a) == ignoreLocalLts_eXzpE7U0(s_Type(b.type), a))))
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
                        if (!isNative)
                            ext.fx_mask = out_1.effects.fx_mask;

                        ext.cows_inside = out_1.events.cows_inside;
                        if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOTHROW)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Throws)))
                        {
                            const s_Overload* _81;
                            fu::str _82 {};
                            fu::str _83 {};
                            (_83 = (_82 = x7E_r7bhmB7D((_81 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_81, ctx, module, _here, ss, _helpers_1)), " is not nothrow, throws here:\n"_fu), (static_cast<fu::str&&>(_82) + qSTACK_KuMhtrnj(target, out_1.out, s_FxMask_Fx_Throws, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_83), fu::view<char>{}, ctx, module, _here, ss, _helpers_1));
                        }
                        else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOCRASH)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Crashes)))
                        {
                            const s_Overload* _84;
                            fu::str _85 {};
                            fu::str _86 {};
                            (_86 = (_85 = x7E_r7bhmB7D((_84 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_84, ctx, module, _here, ss, _helpers_1)), " is not nocrash, can crash here:\n"_fu), (static_cast<fu::str&&>(_85) + qSTACK_KuMhtrnj(target, out_1.out, s_FxMask_Fx_Crashes, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_86), fu::view<char>{}, ctx, module, _here, ss, _helpers_1));
                        }
                        else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOIO)) && s_FxMask((ext.fx_mask & s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)))))
                        {
                            const s_Overload* _87;
                            fu::str _88 {};
                            fu::str _89 {};
                            (_89 = (_88 = x7E_r7bhmB7D((_87 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_87, ctx, module, _here, ss, _helpers_1)), " is not noio, performs I/O here:\n"_fu), (static_cast<fu::str&&>(_88) + qSTACK_KuMhtrnj(target, out_1.out, s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)), fu::view<s_Target>{}, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_89), fu::view<char>{}, ctx, module, _here, ss, _helpers_1));
                        }
                        else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_FX)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Output)))
                        {
                            const s_Overload* _90;
                            fu::str _91 {};
                            fu::str _92 {};
                            (_92 = (_91 = x7E_r7bhmB7D((_90 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_90, ctx, module, _here, ss, _helpers_1)), " is not purefx, outputs here:\n"_fu), (static_cast<fu::str&&>(_91) + qSTACK_KuMhtrnj(target, out_1.out, s_FxMask_Fx_Output, fu::view<s_Target>{}, ctx, module, _here, ss, _helpers_1))), fail_pNB52ATY(static_cast<fu::str&&>(_92), fu::view<char>{}, ctx, module, _here, ss, _helpers_1));
                        }
                        else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOFLOW)) && _current_fn.effects.far_jumps)
                        {
                            const s_Overload* _93;
                            fu::str _94 {};
                            const s_Overload* _95;
                            fu::str _96 {};
                            (_96 = ((_94 = x7E_r7bhmB7D((_93 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_93, ctx, module, _here, ss, _helpers_1)), " is not noflow: contains non-local control flow, jumping out to "_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_94), (_95 = &(GET_etmeeocQ(s_Target { module.modid, _current_fn.effects.far_jumps[0] }, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_95, ctx, module, _here, ss, _helpers_1)))) + "."_fu), fail_pNB52ATY(static_cast<fu::str&&>(_96), fu::view<char>{}, ctx, module, _here, ss, _helpers_1));
                        }
                        else
                        {
                            if (!mustBecomeInline)
                            {
                                if (!(numArgsWritten || ext.fx_mask || !is_void_8KZIyCKE(retval_1) || (overload.flags & s_Flags_F_LAX)))
                                {
                                    const s_TokenIdx& token = out_1.out.token;
                                    const s_Module& module_1 = module;
                                    s_Warning& a = grow_if_oob_177Uu4fg(ss._warnings, _current_fn.out.target.index);
                                    if (!(a))
                                    {
                                        s_TokenIdx _97 {};
                                        const s_Overload* _98;
                                        fu::str _99 {};
                                        a = (_97 = s_TokenIdx(token), s_Warning { static_cast<s_TokenIdx&&>(_97), (_99 = ((x7E_r7bhmB7D((_98 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers_1)), str_1mm3y0E0(*_98, ctx, module, _here, ss, _helpers_1)), " does nothing: returns void and has no effects. Make it "_fu) + qKW_bF2G8fJR("lax"_fu)) + " if this is intentional."_fu), fail_appendStack_UWVoDyaJ(static_cast<fu::str&&>(_99), ctx, module_1, _here, ss, _helpers_1)) });
                                    };
                                };
                            };
                            if (retval_1)
                            {
                                if (is_ref_vcLGyw8p(retval_1))
                                {
                                    if (isIrrelevant_DOKZ61Hc(retval_1))
                                    {
                                        retval_1.lifetime = Lifetime_static_8nlJDPX0();
                                    };
                                    Lifetime_test_yNTCCzEE(retval_1.lifetime, false, ctx, module, _here, ss, _helpers_1, _current_fnort_1);
                                };
                                each_ZyJoKE6S(retval_1.lifetime.uni0n, retval_1, _current_fnort_1, ctx, module, _here, ss, _helpers_1);
                                s_Overload& overload_1 = GET_mut_TpIPZdoW(target, module, ss);
                                overload_1.type = static_cast<s_Type&&>(retval_1);
                                overload_1.flags = out_1.out.flags;
                                const s_kind kind = (isUnspec ? s_kind_template : (isNative ? s_kind___native : (mustBecomeInline ? s_kind_inline : s_kind_fn)));
                                if (kind != overload_1.kind)
                                {
                                    overload_1.kind = kind;
                                    change = true;
                                };

                                {
                                    const bool rtl = (((args.size() == 2) && (overload_1.flags & s_Flags_F_OPERATOR)) ? hasAssignment_z64rfJDX(overload_1.name) : false);
                                    isRTL_set_bEV6ngdT(overload_1, rtl);
                                };
                                const s_SolvedNode& solved = (!isUnspec ? out_1.out : (*(const s_SolvedNode*)fu::NIL));
                                if (hasCallers)
                                {
                                    if (!change && (kind == s_kind_inline))
                                        change = astChange_CJKCvzNX(overload_1.solved, solved);

                                    if (change)
                                        overload_1.status |= s_SolverStatus_SS_UPDATED;

                                };
                                overload_1.solved = solved;
                                if (!isNative && !isUnspec)
                                {
                                    const int sourceModid = tEmplate.node.token.modid;
                                    fu::str shortModuleName = ((sourceModid != module.modid) ? ((sourceModid && module.modid) ? getShortModuleName_Y2f94oTr(ctx.modules[sourceModid].fname) : fu::str{}) : fu::str(ss.shortModuleName));
                                    fu::str sig = (((EPH_t5Sfn87m(target, module, ss).local_of ? fu::i64dec(target.index) : fu::str{}) + shortModuleName) + mangleSignature_3RnedeY0(EXT_EOYtG69B(target, ctx, module, ss).args));
                                    fu::str _100 {};
                                    EXT_mut_XoqMpqSw(target, module, ss).sighash = (sig ? ((_100 = hash62_FVPTYzIy(sig, 11)) ? static_cast<fu::str&&>(_100) : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers_1)) : fu::str{});
                                };
                                if (!into)
                                {

                                    {
                                        fu::view<s_Argument> args_1 = EXT_EOYtG69B(target, ctx, module, ss).args;
                                        const s_Module& module_1 = module;
                                        int _101 {};
                                        const int start = ((_101 = (find_POzvwmtf(mangle, ' ') + 1)) ? _101 : BUG_JWcxU72K(fu::str{}, ctx, module_1, _here, ss, _helpers_1));
                                        fu::str mangle_1 = (fu::slice(mangle, 0, start) + mangleArgTypes_VcM3h0PQ(args_1));
                                        if (add_DOlKANOT(mangles, mangle_1))
                                        {
                                            const s_Target preexisting { get_axePiRUH(getSpecs_AXXGDTv1(parent_idx, ss), mangle_1) };
                                            if (preexisting)
                                            {
                                                rem_4Xs1Rg9X(mangles, mangle_1);
                                                resetSpec_BQn2rNGp(preexisting, maybeLast, parent_idx, mangles, currentSpec, ctx, module_1, _here, ss, _helpers_1);
                                                return preexisting;
                                            }
                                            else
                                                setSpec_M39gePtu(mangle_1, currentSpec, true, false, parent_idx, ctx, module_1, _here, ss, _helpers_1);

                                        };
                                    };
                                    resetSpec_BQn2rNGp(target, false, parent_idx, mangles, currentSpec, ctx, module, _here, ss, _helpers_1);
                                };
                            }
                            else
                                BUG_JWcxU72K("updateScope: no return type."_fu, ctx, module, _here, ss, _helpers_1);

                        };
                    };
                };
            };
            if (!didSetBody)
            {
                const s_Overload& o = GET_etmeeocQ(target, ctx, module, _here, ss, _helpers);
                if (!(o.kind != s_kind_fn))
                {
                    fu::str _102 {};
                    fu::str _103 {};
                    (_103 = (_102 = (x7E_r7bhmB7D("did not set body on "_fu, str_1mm3y0E0(o, ctx, module, _here, ss, _helpers)) + ": "_fu), (static_cast<fu::str&&>(_102) + humanizeType_XI6W2OpL(o.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort_1))), BUG_JWcxU72K(static_cast<fu::str&&>(_103), ctx, module, _here, ss, _helpers));
                };
            };
        }
        else
            BUG_JWcxU72K("solveFn: no body."_fu, ctx, module, _here, ss, _helpers);

    };
    lazySolveEnd_IiQllcub(target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    return target;
}

static bool lazySolveStart_soM8XEbj(const s_Target& target, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (s_SolverStatus((GET_etmeeocQ(target, ctx, module, _here, ss, _helpers).status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_LAZY)))) != s_SolverStatus_SS_LAZY)
        return false;
    else
    {

        {
            s_Overload& o = GET_mut_TpIPZdoW(target, module, ss);
            if (o.status & s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_FINALIZED | s_SolverStatus_SS_DID_START)) | s_SolverStatus_SS_DIRTY)))
                BUG_JWcxU72K(x7E_r7bhmB7D("SS_DID_START: non-zero solver status: "_fu, str_N7InCVna(o.status)), ctx, module, _here, ss, _helpers);
            else
            {
                o.status |= s_SolverStatus_SS_DID_START;
                if ((o.kind == s_kind_fn) || (o.kind == s_kind_inline))
                {
                    doTrySpecialize_YUQsTQlC(EPH_t5Sfn87m(target, module, ss).local_of, target, s_Target{}, fu::view<s_SolvedNode>{}, (*(const fu::str*)fu::NIL), fu::view<int>{}, false, fu::view<fu::vec<s_Target>>{}, 0, (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                }
                else if (o.kind == s_kind_type)
                    __solveStruct_TuMO8NWv(true, s_Node(EXT_EOYtG69B(target, ctx, module, ss).tEmplate.node), target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                else
                    BUG_JWcxU72K((x7E_r7bhmB7D("lazySolveStart: kind is `"_fu, str_k2hK9UHj(o.kind)) + "`."_fu), ctx, module, _here, ss, _helpers);

            };
        };
        return true;
    };
}

static void ensureLazySolved_2LDJ3uNu(const s_Target& target, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    int repeats = 0;
    while (lazySolveStart_soM8XEbj(target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort))
    {
        if (repeats++ > 1000)
        {
            const s_Overload* _0;
            fu::str _1 {};
            (_1 = x7E_r7bhmB7D("Repeat-solved too many times: "_fu, (_0 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_1), ctx, module, _here, ss, _helpers));
        };
    };
}

static fu::str str_Kzjf2MZD(const int min, const int max)
{
    if (min != max)
        return x7E_r7bhmB7D((x7E_r7bhmB7D("["_fu, fu::i64dec(min)) + ", "_fu), fu::i64dec(max)) + "]"_fu;
    else
        return fu::i64dec(min);

}

static void reorderByNumUsings_XNfx1thI(bool& use_reorder, fu::vec<int>& reorder, fu::view<s_Argument> host_args, const int num_args, const int num_usings)
{
    reorder.clear();
    if (num_usings)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const int x = (i - num_usings);
            reorder.push((((x >= 0) && (x < num_args)) ? x : -1));
        };
    };
    use_reorder = !!reorder;
}

                                #ifndef DEF_find_E59mf3XC9N1
                                #define DEF_find_E59mf3XC9N1
inline int find_E59mf3XC(fu::view<fu::str> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static bool reorderByArgIDs_t2ZQYStA(bool& use_reorder, fu::vec<int>& reorder, fu::view<fu::str> names, s_BitSet&& optional, fu::view<s_Argument> host_args, const int num_usings, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    use_reorder = true;
    reorder.clear();
    int used = 0;
    int offset = 0;
    int usings_left = num_usings;
    for (int i = 0; i < host_args.size(); i++)
    {
        int idx = find_E59mf3XC(names, host_args[i].name);
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
            rem_mle9fepo(optional, idx);
        };
        reorder.push(idx);
    };
    if (usings_left)
        BUG_JWcxU72K("reorderByArgIDs: usings_left != 0"_fu, ctx, module, _here, ss, _helpers);
    else
    {
        if (used != names.size())
        {
            for (int i_1 = 0; i_1 < names.size(); i_1++)
            {
                if (!names[i_1])
                    used++;

            };
            if ((used + popcount_LkpkIIRn(optional)) != names.size())
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
            const int trailing_usings = max_AsFD7H8N((num_usings - non_trailing_misses), 0);
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

static fu::str ERRMSG_findUnmatchedArgName_iyc0FpV7(fu::view<int> reorder, fu::view<fu::str> names)
{
    s_BitSet used {};
    for (int i = 0; i < reorder.size(); i++)
    {
        const int pos = reorder[i];
        if ((pos >= 0))
            add_mle9fepo(used, pos);

    };
    for (int i_1 = 0; i_1 < names.size(); i_1++)
    {
        if (!has_35mEQu7d(used, i_1))
            return fu::str(names[i_1]);

    };
    return "[BUG: findUnmatchedArgName]"_fu;
}

                                #ifndef DEF_grow_if_oob_mAo8X4gioQe
                                #define DEF_grow_if_oob_mAo8X4gioQe
inline fu::vec<s_Target>& grow_if_oob_mAo8X4gi(fu::vec<fu::vec<s_Target>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_replace_KFDHCttmOi9
                                #define DEF_replace_KFDHCttmOi9
inline fu::str replace_KFDHCttm(const fu::str& str, fu::view<char> all, fu::view<char> with)
{
    /*MOV*/ fu::str result {};

    {
        int last = 0;
        int next = 0;
        const int N = all.size();
        if (N)
        {
            while (((next = fu::lfind(str, all, last)) >= 0))
            {

                {
                    fu::str substr = fu::slice(str, last, next);
                    const bool first = !last;
                    if (!first)
                        result += with;

                    result += substr;
                };
                last = (next + N);
            };
        };
        if (last)
        {
            fu::str substr = fu::slice(str, last);
            result += with;
            result += substr;
        }
        else
            return fu::str(str);

    };
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_only_nwX2t0h1lFi
                                #define DEF_only_nwX2t0h1lFi
inline const fu::vec<s_Target>& only_nwX2t0h1(fu::view<fu::vec<s_Target>> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_r7bhmB7D("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

                                #ifndef DEF_str_grCCrdEVEF8
                                #define DEF_str_grCCrdEVEF8
inline fu::str str_grCCrdEV(fu::view<int> arr)
{
    /*MOV*/ fu::str result {};
    for (int i = 0; i < arr.size(); i++)
    {
        if ((i == 5) && (arr.size() > 16))
        {
            i = (arr.size() - 5);
            result += (x7E_r7bhmB7D(", ... ("_fu, fu::i64dec((arr.size() - 10))) + " more) ..."_fu);
        };
        result += (i ? ", "_fu : "[ "_fu);
        x7Ex3D_ljOD9ybk(result, fu::i64dec(arr[i]));
    };
    result += (result ? " ]"_fu : "[]"_fu);
    return /*NRVO*/ result;
}
                                #endif

static s_Target GETfn_NvsHXZvV(const int idx, const s_Module& module)
{
    return s_Target { module.modid, idx };
}

static fu::str fnName_3oRltZ50(const int idx, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (idx)
    {
        const s_Overload* _0;
        return (_0 = &(GET_etmeeocQ(GETfn_NvsHXZvV(idx, module), ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers));
    }
    else
        return "global scope"_fu;

}

                                #ifndef DEF_last_xhmyKdWo0vj
                                #define DEF_last_xhmyKdWo0vj
inline const fu::str& last_xhmyKdWo(fu::view<fu::str> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static s_Target tryMatch__mutargs_zJaFYih8(fu::str&& id, fu::vec<int>& reorder_out, fu::vec<fu::vec<s_Target>>& conversions_out, fu::str& error, const bool local_scope, const bool type_annot, const s_Scope& misc_scope, fu::view<s_SolvedNode> args, const s_Flags flags, const s_Target& target, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const int error_len0 = error.size();
    for (int i = 0; i < args.size(); i++)
    {
        if (!args[i].kind)
            BUG_JWcxU72K("Falsy arg.kind!"_fu, ctx, module, _here, ss, _helpers);

    };
    s_Target matchIdx {};
    s_Target ambigOkIdx {};
    int minArity = args.size();
    const int numUsings = (!type_annot ? countUsings_Ae8ugeUV(local_scope, misc_scope, ctx, module, _here, ss, _helpers) : 0);
    const int explicitArity = minArity;
    const int maxArity = (explicitArity + numUsings);
    fu::vec<fu::str> names {};
    s_BitSet optional {};
    if (flags & s_Flags_F_NAMED_ARGS)
    {
        bool some = false;
        for (int i_1 = 0; i_1 < args.size(); i_1++)
        {
            const s_SolvedNode& arg = args[i_1];
            const fu::str* _0;
            names.push(fu::str(((arg.kind == s_kind_argid) ? (*(_0 = &(((some = true), arg.value))) ? *_0 : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers)) : (*(const fu::str*)fu::NIL))));
            if (arg.flags & s_Flags_F_OPT_ARG)
            {
                minArity--;
                add_mle9fepo(optional, i_1);
            };
        };
        if (!(some))
        {
            BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
        };
    };
    fu::str reusable_mangle {};
    fu::vec<s_Target> extra_items {};
    if (local_scope && !target && !type_annot)
    {
        s_BitSet seen {};
        if (numUsings)
        {
            each_Af8MLtMD((local_scope ? ss._scope : misc_scope).usings, (local_scope ? ss._ss.usings : fu::view<s_ScopeSkip>{}), 0, id, local_scope, extra_items, seen, ctx, module, _here, ss, _helpers);
        };
        if (flags & ((s_Flags_F_ACCESS | s_Flags_F_METHOD) | s_Flags_F_OPERATOR))
            for (int i_1 = 0; i_1 < args.size(); i_1++)
                visitTypeImports_Sa6PfkWP(args[i_1].type, id, local_scope, extra_items, seen, ctx, module, ss);
;
    };
    const int considerFieldItems = ((local_scope && !target && !type_annot && ((flags & s_Flags_F_ACCESS) || !minArity) && (minArity <= 1)) ? maxArity : 0);
    fu::vec<fu::str> alternate_ids {};
    fu::vec<fu::vec<s_Target>> conversions {};
    fu::vec<int> reorder {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        if (!local_scope && (extra_items || field_items_699D7fQo(considerFieldItems, ss)))
            BUG_JWcxU72K("!local_scope but extra_items or field_items"_fu, ctx, module, _here, ss, _helpers);
        else
        {
            bool shadows {};
            while ((overloadIdx = (target ? search_bSS3Hele(target, scope_iterator) : (local_scope ? search_UCBpCBiH(((flags & s_Flags_F_IMPLICIT) ? ss._scope.implicits : ss._scope.items), id, scope_iterator, ((flags & s_Flags_F_IMPLICIT) ? ss._ss.implicits : ss._ss.items), shadows, extra_items, fu::vec<s_ScopeItem>(field_items_699D7fQo(considerFieldItems, ss))) : search_Jzv8sHaW(fu::get_view(misc_scope.items, 0, misc_scope.pub_items), id, scope_iterator)))))
            { {
                if (!local_scope && shadows)
                    BUG_JWcxU72K("!local_scope but shadows"_fu, ctx, module, _here, ss, _helpers);
                else
                {
                    bool TODO_FIX_dontBotherSpecializing = false;
                    conversions.clear();
                    reorder.clear();
                    while (true)
                    {
                        ensureLazySolved_2LDJ3uNu(overloadIdx, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                        const s_Overload& overload = GET_etmeeocQ(overloadIdx, ctx, module, _here, ss, _helpers);
                        const s_kind kind = overload.kind;
                        const bool isType = (kind == s_kind_type);
                        if (!isType && type_annot)
                        {
                            const s_Module& module_1 = module;
                            const s_SolverState& ss_1 = ss;
                            fu::view<s_Helpers> _helpers_1 = _helpers;
                            if (error)
                            {
                                error += ((("\n\n\t"_fu + explainWhichFn_4p0QhTu9(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module_1, _here, ss_1, _helpers_1)) + "\n\t    "_fu) + "Not a type."_fu);
                            };
                            goto BL_19;
                        }
                        else
                        {
                            if (minArity && isType && !target)
                            {
                                const fu::str& alt = overload.type.vtype.canon;
                                if (alt != id)
                                    alternate_ids.push(fu::str(alt));

                            };
                            const s_Extended& arity = EXT_EOYtG69B(overloadIdx, ctx, module, ss);
                            const bool isZeroInit = (isType ? !explicitArity : false);
                            if (!isZeroInit && ((arity.max < minArity) || (arity.min > maxArity)))
                            {
                                const s_Module& module_1 = module;
                                const s_SolverState& ss_1 = ss;
                                fu::view<s_Helpers> _helpers_1 = _helpers;
                                if (error)
                                {
                                    error += ((("\n\n\t"_fu + explainWhichFn_4p0QhTu9(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module_1, _here, ss_1, _helpers_1)) + "\n\t    "_fu) + (((("Wrong number of arguments: expects "_fu + str_Kzjf2MZD(arity.min, arity.max)) + ", got "_fu) + str_Kzjf2MZD(minArity, maxArity)) + "."_fu));
                                };
                                goto BL_19;
                            }
                            else
                            {
                                fu::vec<s_Argument> host_args { arity.args };
                                const int num_usings = ((!isZeroInit && (arity.min > explicitArity)) ? (arity.min - explicitArity) : 0);
                                bool use_reorder = false;
                                if (!names)
                                    reorderByNumUsings_XNfx1thI(use_reorder, reorder, host_args, args.size(), num_usings);
                                else if (!reorderByArgIDs_t2ZQYStA(use_reorder, reorder, names, s_BitSet(optional), host_args, num_usings, ctx, module, _here, ss, _helpers))
                                {
                                    const s_Module& module_1 = module;
                                    const s_SolverState& ss_1 = ss;
                                    fu::view<s_Helpers> _helpers_1 = _helpers;
                                    if (error)
                                    {
                                        error += ((("\n\n\t"_fu + explainWhichFn_4p0QhTu9(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module_1, _here, ss_1, _helpers_1)) + "\n\t    "_fu) + ("Unknown argument name: "_fu + ERRMSG_findUnmatchedArgName_iyc0FpV7(reorder, names)));
                                    };
                                    goto BL_19;
                                };
                                if (optional && reorder && (reorder.size() < args.size()) && (reorder.size() < arity.max))
                                {
                                    const s_Module& module_1 = module;
                                    const s_SolverState& ss_1 = ss;
                                    fu::view<s_Helpers> _helpers_1 = _helpers;
                                    if (error)
                                    {
                                        error += ((("\n\n\t"_fu + explainWhichFn_4p0QhTu9(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module_1, _here, ss_1, _helpers_1)) + "\n\t    "_fu) + "Optional argument ambiguity, not all optional arguments provided, and not all callsite arguments used. Cannot distinguish from a typo. [TODO LIST MISSING ARGS]"_fu);
                                    };
                                    goto BL_19;
                                }
                                else
                                {
                                    s_Type REST_TYPE {};
                                    const int REST_START = findRestStart_pfM9smn4(arity);
                                    if ((REST_START < host_args.size()) && use_reorder && (reorder.size() < args.size()))
                                    {
                                        for (int i_1 = 0; i_1 < args.size(); i_1++)
                                        {
                                            if (!has_35mEQu7d(optional, i_1) && !has_grHbGBLZ(reorder, i_1))
                                                reorder += i_1;

                                        };
                                    };
                                    const int N = max_AsFD7H8N((use_reorder ? reorder.size() : args.size()), (!isZeroInit ? arity.min : 0));
                                    if (N)
                                    {
                                        if (REST_START < N)
                                        {
                                            const s_Type& expect = host_args[REST_START].type;
                                            if (expect)
                                            {
                                                s_Type _1 {};
                                                fu::str _2 {};
                                                fu::str _3 {};
                                                REST_TYPE = ((_1 = tryClear_sliceable_QUN697Dd(expect.vtype)) ? static_cast<s_Type&&>(_1) : (_3 = (_2 = (GET_etmeeocQ(overloadIdx, ctx, module, _here, ss, _helpers).name + ": Rest argument annotation is not an array: "_fu), (static_cast<fu::str&&>(_2) + humanizeType_XI6W2OpL(expect, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))), fail_pNB52ATY(static_cast<fu::str&&>(_3), fu::view<char>{}, ctx, module, _here, ss, _helpers)));
                                            };
                                        };
                                        if ((reorder.size() >= args.size()) || !reorder || optional)
                                        {
                                            for (int i_1 = 0; i_1 < N; i_1++)
                                            {
                                                const bool rest = (i_1 >= REST_START);
                                                s_Argument host_arg { host_args[(rest ? REST_START : i_1)] };
                                                s_Type expect { (rest ? REST_TYPE : host_arg.type) };
                                                const int callsiteIndex = (use_reorder ? reorder[i_1] : ((i_1 < args.size()) ? i_1 : -1));
                                                if (callsiteIndex < 0)
                                                {
                                                    if (!(host_arg.dEfault || (host_arg.flags & s_Flags_F_IMPLICIT)))
                                                    {
                                                        if (!((host_arg.flags & s_Flags_F_MUSTNAME) || (flags & s_Flags_F_CONVERSION)))
                                                        {
                                                            if (expect)
                                                            {
                                                                /*MOV*/ fu::vec<s_Target> conversion = tryConvert_K3gQKVtM(expect, local_scope, (*(const s_Type*)fu::NIL), (*(const s_SolvedNode*)fu::NIL), misc_scope, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                                                                if (conversion)
                                                                {
                                                                    grow_if_oob_mAo8X4gi(conversions, i_1) = static_cast<fu::vec<s_Target>&&>(conversion);
                                                                    continue;
                                                                };
                                                            };
                                                        };
                                                        const s_Module& module_1 = module;
                                                        const s_SolverState& ss_1 = ss;
                                                        fu::view<s_Helpers> _helpers_1 = _helpers;
                                                        if (error)
                                                        {
                                                            fu::str _4 {};
                                                            error += (_4 = (("\n\n\t"_fu + explainWhichFn_4p0QhTu9(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module_1, _here, ss_1, _helpers_1)) + "\n\t    "_fu), (static_cast<fu::str&&>(_4) + x7E_r7bhmB7D("Cannot infer missing "_fu, str_J4YCysO5(host_arg, ctx, module, _here, ss, _helpers))));
                                                        };
                                                        goto BL_19;
                                                    };
                                                }
                                                else
                                                {
                                                    if (host_arg.flags & s_Flags_F_MUSTNAME)
                                                    {
                                                        if ((names.size() <= callsiteIndex) || !names[callsiteIndex])
                                                        {
                                                            const s_Module& module_1 = module;
                                                            const s_SolverState& ss_1 = ss;
                                                            fu::view<s_Helpers> _helpers_1 = _helpers;
                                                            if (error)
                                                            {
                                                                fu::str _5 {};
                                                                error += (_5 = (("\n\n\t"_fu + explainWhichFn_4p0QhTu9(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module_1, _here, ss_1, _helpers_1)) + "\n\t    "_fu), (static_cast<fu::str&&>(_5) + x7E_r7bhmB7D(str_J4YCysO5(host_arg, ctx, module, _here, ss, _helpers), " must be :explicitly named."_fu)));
                                                            };
                                                            goto BL_19;
                                                        };
                                                    };
                                                    if (host_arg.autocall)
                                                    {
                                                        fu::vec<s_SolvedNode> autocall_args {};
                                                        fu::vec<int> autocall_reorder {};
                                                        fu::vec<fu::vec<s_Target>> autocall_conversions {};
                                                        autocall_args.resize(1);
                                                        autocall_args.mutref(0) = s_SolvedNode(args[callsiteIndex]);
                                                        fu::str autocall_error = (error ? (((x7E_r7bhmB7D("Cannot match "_fu, str_J4YCysO5(host_arg, ctx, module, _here, ss, _helpers)) + " autocall "_fu) + qCODE_bF2G8fJR(host_arg.autocall)) + ": "_fu) : fu::str{});
                                                        const s_Target t = tryMatch__mutargs_zJaFYih8(fu::str(host_arg.autocall), autocall_reorder, autocall_conversions, autocall_error, local_scope, false, misc_scope, autocall_args, s_Flags{}, s_Target{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                                                        if (!t)
                                                        {
                                                            const s_Module& module_1 = module;
                                                            const s_SolverState& ss_1 = ss;
                                                            fu::view<s_Helpers> _helpers_1 = _helpers;
                                                            if (error)
                                                            {
                                                                error += ((("\n\n\t"_fu + explainWhichFn_4p0QhTu9(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module_1, _here, ss_1, _helpers_1)) + "\n\t    "_fu) + replace_KFDHCttm(autocall_error, "\t"_fu, "\t\t"_fu));
                                                            };
                                                            goto BL_19;
                                                        }
                                                        else
                                                        {
                                                            if (autocall_conversions)
                                                            {
                                                                grow_if_oob_mAo8X4gi(conversions, i_1) += only_nwX2t0h1(autocall_conversions);
                                                            };
                                                            grow_if_oob_mAo8X4gi(conversions, i_1) += s_Target(t);
                                                            if (!(autocall_reorder.size() < 2))
                                                                BUG_JWcxU72K("autocall: reorder"_fu, ctx, module, _here, ss, _helpers);

                                                        };
                                                    };
                                                    const int hasConv = ((conversions.size() > i_1) ? conversions[i_1].size() : 0);
                                                    s_Type actual { (hasConv ? GET_etmeeocQ(last_i8rpRxaZ(conversions[i_1]), ctx, module, _here, ss, _helpers).type : args[callsiteIndex].type) };
                                                    if (is_never_8KZIyCKE(actual))
                                                    {
                                                        if (!(host_arg.flags & s_Flags_F_INLINE))
                                                            TODO_FIX_dontBotherSpecializing = true;

                                                    }
                                                    else if (!expect)
                                                    {
                                                        if ((host_arg.flags & s_Flags_F_REF) && !is_mutref_tkXzsAAo(actual, _here, ctx))
                                                        {
                                                            const s_Module& module_1 = module;
                                                            const s_SolverState& ss_1 = ss;
                                                            fu::view<s_Helpers> _helpers_1 = _helpers;
                                                            if (error)
                                                            {
                                                                fu::str _6 {};
                                                                fu::str _7 {};
                                                                error += (_6 = (("\n\n\t"_fu + explainWhichFn_4p0QhTu9(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module_1, _here, ss_1, _helpers_1)) + "\n\t    "_fu), (static_cast<fu::str&&>(_6) + (_7 = x7E_r7bhmB7D(str_J4YCysO5(host_arg, ctx, module, _here, ss, _helpers), " expects a mutref, got "_fu), (static_cast<fu::str&&>(_7) + humanizeType_XI6W2OpL(actual, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)))));
                                                            };
                                                            goto BL_19;
                                                        };
                                                    }
                                                    else
                                                    {
                                                        if (!(isAssignableAsArgument_aTMI25ej(expect, (actual ? actual : BUG_JWcxU72K("tryMatch: !actual"_fu, ctx, module, _here, ss, _helpers)), false)))
                                                        {
                                                            if (!hasConv)
                                                            {
                                                                const s_SolvedNode& arg = args[callsiteIndex];
                                                                const s_SolvedNode& arg_1 = ((arg.kind == s_kind_argid) ? only_fLVI01Cf(arg.items) : arg);
                                                                s_Type retype = tryRetyping_2YiDIUlF(arg_1, expect, ctx, module, options, _here, ss, _helpers, _current_fnort);
                                                                if (retype && isAssignableAsArgument_aTMI25ej(expect, retype, false))
                                                                    continue;

                                                            };
                                                            if (!(flags & s_Flags_F_CONVERSION))
                                                            {
                                                                fu::vec<s_Target> conversion = tryConvert_K3gQKVtM(expect, local_scope, actual, (!hasConv ? args[callsiteIndex] : (*(const s_SolvedNode*)fu::NIL)), misc_scope, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                                                                if (conversion)
                                                                {
                                                                    grow_if_oob_mAo8X4gi(conversions, i_1) += conversion;
                                                                    continue;
                                                                };
                                                            };
                                                            const s_Module& module_1 = module;
                                                            const s_SolverState& ss_1 = ss;
                                                            fu::view<s_Helpers> _helpers_1 = _helpers;
                                                            if (error)
                                                            {
                                                                fu::str _8 {};
                                                                fu::str _9 {};
                                                                fu::str _10 {};
                                                                error += (_8 = (("\n\n\t"_fu + explainWhichFn_4p0QhTu9(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module_1, _here, ss_1, _helpers_1)) + "\n\t    "_fu), (static_cast<fu::str&&>(_8) + (_10 = ((_9 = x7E_r7bhmB7D(str_J4YCysO5(host_arg, ctx, module, _here, ss, _helpers), " expects "_fu), (static_cast<fu::str&&>(_9) + humanizeType_XI6W2OpL(expect, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort))) + ", got "_fu), (static_cast<fu::str&&>(_10) + humanizeType_XI6W2OpL(actual, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)))));
                                                            };
                                                            goto BL_19;
                                                        };
                                                    };
                                                };
                                            };
                                            if (REST_START < N)
                                            {
                                                for (int i_2 = REST_START; i_2 < N; i_2++)
                                                {
                                                    const int hasConv = ((conversions.size() > i_2) ? conversions[i_2].size() : 0);
                                                    const int callsiteIndex = (use_reorder ? reorder[i_2] : i_2);
                                                    const s_Type& actual = (hasConv ? GET_etmeeocQ(last_i8rpRxaZ(conversions[i_2]), ctx, module, _here, ss, _helpers).type : args[callsiteIndex].type);
                                                    s_Type _11 {};
                                                    fu::never BL_79_v {};
                                                    REST_TYPE = ((i_2 == REST_START) ? solveArrlit_itemType_init_eoMyNVOn(actual, ctx, module, _here, ss, _helpers) : ((_11 = type_trySuper_uwryF4aS(REST_TYPE, actual, false)) ? static_cast<s_Type&&>(_11) : (__extension__ (
                                                    {
                                                        const s_Module& module_1 = module;
                                                        const s_SolverState& ss_1 = ss;
                                                        fu::view<s_Helpers> _helpers_1 = _helpers;
                                                        if (error)
                                                        {
                                                            fu::str _12 {};
                                                            fu::str _13 {};
                                                            error += (_12 = (("\n\n\t"_fu + explainWhichFn_4p0QhTu9(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module_1, _here, ss_1, _helpers_1)) + "\n\t    "_fu), (static_cast<fu::str&&>(_12) + (_13 = (("Rest arguments have no common supertype: "_fu + humanizeType_XI6W2OpL(REST_TYPE, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)) + " <- "_fu), (static_cast<fu::str&&>(_13) + humanizeType_XI6W2OpL(actual, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort)))));
                                                        };
                                                        goto BL_19;
                                                    (void)0;}), static_cast<fu::never&&>(BL_79_v))));
                                                };
                                                REST_TYPE = solveArrlit_done_UUNTSelc(REST_TYPE, -1, options);
                                            };
                                        }
                                        else
                                            BUG_JWcxU72K(x7E_r7bhmB7D((x7E_r7bhmB7D("reorder < args:\n\t\treorder="_fu, str_grCCrdEV(reorder)) + "\n\t\t#args="_fu), fu::i64dec(args.size())), ctx, module, _here, ss, _helpers);

                                    };
                                    if ((kind == s_kind_template) && !TODO_FIX_dontBotherSpecializing)
                                    {
                                        fu::str cant_reuse {};
                                        fu::str& args_mangled = ((use_reorder || conversions) ? cant_reuse : reusable_mangle);
                                        const s_Target specIdx = trySpecialize_hUa3JVC0(overloadIdx, args, args_mangled, REST_START, REST_TYPE, reorder, use_reorder, conversions, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                                        if (is_SPECFAIL_JPJKHVxn(specIdx))
                                        {
                                            const s_Module& module_1 = module;
                                            const s_SolverState& ss_1 = ss;
                                            fu::view<s_Helpers> _helpers_1 = _helpers;
                                            if (error)
                                            {
                                                fu::str _14 {};
                                                fu::str _15 {};
                                                error += (_14 = (("\n\n\t"_fu + explainWhichFn_4p0QhTu9(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module_1, _here, ss_1, _helpers_1)) + "\n\t    "_fu), (static_cast<fu::str&&>(_14) + ((_15 = fu::str(ss._spec_errors[specIdx.index])) ? static_cast<fu::str&&>(_15) : "Could not specialize."_fu)));
                                            };
                                            goto BL_19;
                                        }
                                        else
                                            ensureLazySolved_2LDJ3uNu((overloadIdx = specIdx), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);

                                    };
                                    if (ambigOkIdx && !TODO_FIX_dontBotherSpecializing)
                                        matchIdx = ambigOkIdx;

                                    if (matchIdx)
                                    {
                                        const s_Target& PREV = matchIdx;
                                        const s_Target& NEXT = overloadIdx;
                                        if (GET_etmeeocQ(PREV, ctx, module, _here, ss, _helpers).kind != s_kind_field)
                                        {
                                            const int inner = localOf_PZFCjFk6(PREV, module, ss);
                                            const int outer = localOf_PZFCjFk6(NEXT, module, ss);
                                            const int callsite = _current_fn.out.target.index;
                                            int _c = callsite;
                                            while (_c > inner)
                                                _c = localOf_PZFCjFk6(GETfn_NvsHXZvV(_c, module), module, ss);

                                            if (_c == inner)
                                            {
                                                int _i = inner;
                                                while (_i > outer)
                                                    _i = localOf_PZFCjFk6(GETfn_NvsHXZvV(_i, module), module, ss);

                                                if (!(_i == outer))
                                                {
                                                    fu::str _16 {};
                                                    const s_Overload* _17;
                                                    fu::str _18 {};
                                                    fu::str _19 {};
                                                    const s_Overload* _20;
                                                    fu::str _21 {};
                                                    fu::str _22 {};
                                                    (_22 = (_21 = ((_19 = ((_18 = ((_16 = (((("Leaking `"_fu + id) + "` between functions [inner/outer]: "_fu) + fnName_3oRltZ50(inner, ctx, module, _here, ss, _helpers)) + "::"_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_16), (_17 = &(GET_etmeeocQ(PREV, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_17, ctx, module, _here, ss, _helpers)))) + " and "_fu), (static_cast<fu::str&&>(_18) + fnName_3oRltZ50(outer, ctx, module, _here, ss, _helpers))) + "::"_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_19), (_20 = &(GET_etmeeocQ(NEXT, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_20, ctx, module, _here, ss, _helpers)))) + " as seen from "_fu), (static_cast<fu::str&&>(_21) + fnName_3oRltZ50(callsite, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_22), ctx, module, _here, ss, _helpers));
                                                };
                                            }
                                            else
                                            {
                                                fu::str _23 {};
                                                const s_Overload* _24;
                                                fu::str _25 {};
                                                fu::str _26 {};
                                                (_26 = (_25 = ((_23 = (((("Leaking `"_fu + id) + "` between functions [inner/callsite]: "_fu) + fnName_3oRltZ50(inner, ctx, module, _here, ss, _helpers)) + "::"_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_23), (_24 = &(GET_etmeeocQ(PREV, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_24, ctx, module, _here, ss, _helpers)))) + " is seen from "_fu), (static_cast<fu::str&&>(_25) + fnName_3oRltZ50(callsite, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_26), ctx, module, _here, ss, _helpers));
                                            };
                                        };
                                        fu::str _27 {};
                                        fu::str _28 {};
                                        (_28 = (_27 = ((("Ambiguous callsite, matches multiple items in scope:\n"_fu + "\n\t"_fu) + explainWhichFn_4p0QhTu9(PREV, conversions_out, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module, _here, ss, _helpers)) + "\n\t"_fu), (static_cast<fu::str&&>(_27) + explainWhichFn_4p0QhTu9(NEXT, conversions, fu::view<char>{}, s_CodeFmt_NoContext, ctx, module, _here, ss, _helpers))), fail_pNB52ATY(static_cast<fu::str&&>(_28), fu::view<char>{}, ctx, module, _here, ss, _helpers));
                                    }
                                    else
                                    {
                                        if (TODO_FIX_dontBotherSpecializing)
                                            ambigOkIdx = overloadIdx;
                                        else
                                            matchIdx = overloadIdx;

                                        std::swap(reorder, reorder_out);
                                        std::swap(conversions, conversions_out);
                                        if (shadows)
                                            goto LL_18;
                                        else
                                            break;

                                    };
                                };
                            };
                        };
                    };
                };
              } BL_19:;
            } LL_18:;

            if (!alternate_ids)
                break;
            else
            {
                id = last_xhmyKdWo(alternate_ids);
                alternate_ids.pop();
            };
        };
    };
    if (error && (error.size() == error_len0) && !matchIdx)
        error += (qID_bF2G8fJR(id) + " is not defined here."_fu);

    return (matchIdx ? matchIdx : ambigOkIdx);
}

inline static fu::str l_27_7_FEoC1a2v(const s_SolvedNode& l_27_7, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    return humanizeType_XI6W2OpL(l_27_7.type, false, false, false, (*(const s_Type*)fu::NIL), ctx, module, _here, ss, _helpers, _current_fnort);
}

                                #ifndef DEF_map_qUtLXMQcG16
                                #define DEF_map_qUtLXMQcG16
inline fu::vec<fu::str> map_qUtLXMQc(fu::view<s_SolvedNode> a, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = l_27_7_FEoC1a2v(a[i], ctx, module, _here, ss, _helpers, _current_fnort);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_join_9dTc0Ds4535
                                #define DEF_join_9dTc0Ds4535
inline fu::str join_9dTc0Ds4(fu::view<fu::str> a, fu::view<char> sep)
{
    if (a.size() < 2)
    {
        if (a.size())
            return fu::str(a[0]);
        else
        {
            return fu::str{};
        };
    }
    else
    {
        const int N = sep.size();
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu::str res {};
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

static s_Target match__mutargs_sn1DqsOW(const s_Scope& misc_scope, const bool local_scope, const fu::str& id, fu::view<s_SolvedNode> args, fu::vec<int>& reorder, fu::vec<fu::vec<s_Target>>& conversions, const s_Flags flags, const s_Target& target, const bool type_annot, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ fu::str error {};
    const s_Target ret = tryMatch__mutargs_zJaFYih8(fu::str(id), reorder, conversions, error, local_scope, type_annot, misc_scope, args, flags, target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    if (ret)
        return ret;
    else
    {
        const s_Overload* _0;
        fu::str _1 {};
        error = ((_1 = ("Bad call to "_fu + (target ? (_0 = &(GET_etmeeocQ(target, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers)) : qID_bF2G8fJR(id))), (static_cast<fu::str&&>(_1) + (args ? ((" with args ("_fu + join_9dTc0Ds4(map_qUtLXMQc(args, ctx, module, _here, ss, _helpers, _current_fnort), ", "_fu)) + ")"_fu) : fu::str{}))) + ": "_fu);
        const s_Target debug = tryMatch__mutargs_zJaFYih8(fu::str(id), reorder, conversions, error, local_scope, type_annot, misc_scope, args, flags, target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        if (debug)
        {
            const s_Overload* _2;
            fu::str _3 {};
            (_3 = x7E_r7bhmB7D("Did match on second pass: "_fu, (_2 = &(GET_etmeeocQ(debug, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_2, ctx, module, _here, ss, _helpers))), BUG_JWcxU72K(static_cast<fu::str&&>(_3), ctx, module, _here, ss, _helpers));
        }
        else
        {
            fail_pNB52ATY(static_cast<fu::str&&>(error), fu::view<char>{}, ctx, module, _here, ss, _helpers);
        };
    };
}

static s_SolvedNode solveCall_FCNRcUGb(fu::str&& id, /*MOV*/ fu::vec<s_SolvedNode>&& args, const s_Flags flags, const s_Target& target, const bool type_annot, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (id || target)
    {
        const s_Flags qualified = (flags & s_Flags_F_COMPOUND_ID);
        const s_Scope& misc_scope = (qualified ? dequalify_andGetScope_4LjLR0As(id, ctx, module, _here, ss, _helpers) : (*(const s_Scope*)fu::NIL));
        fu::vec<int> reorder {};
        fu::vec<fu::vec<s_Target>> conversions {};
        const s_Target callTargIdx = match__mutargs_sn1DqsOW(misc_scope, !qualified, id, args, reorder, conversions, flags, target, type_annot, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        return CallerNode_McBUm2lt(id, s_Target(callTargIdx), static_cast<fu::vec<s_SolvedNode>&&>(args), reorder, conversions, _current_fnort, ctx, module, options, _here, ss, _notes, _current_fn, _helpers);
    }
    else
        BUG_JWcxU72K("solveCall: No id, no target."_fu, ctx, module, _here, ss, _helpers);

}

static const s_Type& Scope_lookupType_RwiDICQJ(fu::str&& id, const s_Flags flags, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    s_SolvedNode callsite = solveCall_FCNRcUGb(fu::str(id), fu::vec<s_SolvedNode>{}, flags, s_Target{}, true, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    if (GET_etmeeocQ(callsite.target, ctx, module, _here, ss, _helpers).kind != s_kind_type)
    {
        fail_pNB52ATY((("No type `"_fu + id) + "` in scope."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
    }
    else if (callsite.items)
    {
        fail_pNB52ATY("Scope_lookupType: Wasting time setting up callargs."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers);
    }
    else
        return GET_etmeeocQ(callsite.target, ctx, module, _here, ss, _helpers).type;

}

static const s_Type& evalTypeParam_GDH1e4z4(const fu::str& id, const s_Map_uYRcurSQUL8& typeParams, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const s_Type* _0;
    fu::str _1 {};
    return *(_0 = &(get_SEN5uSkJ(typeParams, id).matched)) ? *_0 : *(_0 = &((_1 = fu::str((id ? id : fail_pNB52ATY("Falsy type param id."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers))), Scope_lookupType_RwiDICQJ(static_cast<fu::str&&>(_1), s_Flags{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort)))) ? *_0 : fail_pNB52ATY((("No type param "_fu + qID_bF2G8fJR(id)) + " in scope."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
}

                                #ifndef DEF_t_zeroes
                                #define DEF_t_zeroes
extern const s_Type t_zeroes;
                                #endif

static s_Type evalTypeAnnot_ctbW9IO5(const s_Node& node, const s_Map_uYRcurSQUL8& typeParams, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    _here = node.token;
    if (node.kind == s_kind_call)
    {
        fu::view<s_Node> items = node.items;
        if (items.size() == 1)
        {
            if (node.value == "&"_fu)
            {
                s_Type _0 {};
                return (_0 = T_DqcE4eQV(node, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort), add_ref_SU0caH0t(static_cast<s_Type&&>(_0), Lifetime_temporary_8nlJDPX0(), _here, ctx));
            }
            else if (node.value == "&mut"_fu)
            {
                s_Type _1 {};
                return (_1 = T_DqcE4eQV(node, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort), add_mutref_SU0caH0t(static_cast<s_Type&&>(_1), Lifetime_temporary_8nlJDPX0(), _here, ctx));
            }
            else if (node.value == "[]"_fu)
                return createArray_FLt6d9WO(T_DqcE4eQV(node, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
            else if (node.value == "typeof"_fu)
                return relax_typeParam_57qzYcmt(solveNode_A7YoMoA6(only_HNT2v2R9(node.items), (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort).type);

        };
    }
    else if (node.kind == s_kind_typeparam)
        return s_Type(evalTypeParam_GDH1e4z4(node.value, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
    else if ((node.kind == s_kind_arrlit) && (node.items.size() == 1))
    {
        s_Type _2 {};
        return (_2 = T_DqcE4eQV(node, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort), createSlice_W7D1KJFU(static_cast<s_Type&&>(_2), Lifetime_temporary_8nlJDPX0(), _here, ctx));
    }
    else if (node.kind == s_kind_definit)
        return s_Type(t_zeroes);

    /*MOV*/ s_Type exprType = solveNode_A7YoMoA6(node, (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort).type;
    if (!s_VFacts((exprType.vfacts & s_VFacts_Typename)))
    {
        fail_pNB52ATY(("Invalid type annotation: evaluates to a value, not a type."_fu + " Consider wrapping it in typeof()."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
    }
    else
        exprType.vfacts &= s_VFacts(~s_VFacts_Typename);

    return /*NRVO*/ exprType;
}

                                #ifndef DEF_STRUCT_MEMBERS
                                #define DEF_STRUCT_MEMBERS
inline constexpr int STRUCT_MEMBERS = 1;
                                #endif

static s_SolvedNode solveMember_f1uOYbt5(const s_Node& node, const bool isPrimDecl, const s_Target& _current_fnort, const s_Type& primType, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers)
{
    if (node.kind == s_kind_let)
    {
        if (!isPrimDecl && node.items[LET_INIT] && (node.items[LET_INIT].kind != s_kind_definit))
        {
            fail_pNB52ATY(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node.value) + "`."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
        }
        else
        {
            /*MOV*/ s_SolvedNode ret = solveLetLike_dontTouchScope_kFAvO49K(node, (*(const s_Type*)fu::NIL), primType, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            ret.type.vfacts = s_VFacts{};
            return /*NRVO*/ ret;
        };
    }
    else
        BUG_JWcxU72K(x7E_r7bhmB7D("solveStructMembers_1: "_fu, str_k2hK9UHj(node.kind)), ctx, module, _here, ss, _helpers);

}

                                #ifndef DEF_map_VAyoyX3rYm4
                                #define DEF_map_VAyoyX3rYm4
inline fu::vec<s_SolvedNode> map_VAyoyX3r(fu::view<s_Node> a, const bool isPrimDecl, const s_Target& _current_fnort, const s_Type& primType, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers)
{
    /*MOV*/ fu::vec<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember_f1uOYbt5(a[i], isPrimDecl, _current_fnort, primType, ctx, module, options, _here, ss, _notes, _current_fn, _helpers);

    return /*NRVO*/ res;
}
                                #endif

static fu::str getRecursionError_XibmETQB(const s_Struct& s, const s_Type& out_type, const s_Target& _current_fnort, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    for (int i = 0; i < s.items.size(); i++)
    {
        const s_Target item = target_7YqD2G7N(s.items[i]);
        const s_Type& itemType = GET_etmeeocQ(item, ctx, module, _here, ss, _helpers).type;
        if (isStruct_ddyKn6V4(itemType.vtype))
        {
            fu::str rec {};
            const s_Struct* _0;
            if ((itemType.vtype.canon == out_type.vtype.canon) || (rec = (_0 = &(lookupUserType_d3zNJ4dJ(itemType, ctx, module, _here, ss, _helpers, _current_fnort)), getRecursionError_XibmETQB(*_0, out_type, _current_fnort, ctx, module, _here, ss, _helpers))))
            {
                return ("\n\t\tvia "_fu + explainWhichFn_4p0QhTu9(item, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ctx, module, _here, ss, _helpers)) + rec;
            };
        };
    };
    return fu::str{};
}

static void field_packOffset_Sni6utdv(s_Overload& o, const int memberFlatOffset, const int memberFlatCount, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const int packed = (memberFlatOffset | (memberFlatCount << 16));
    if (o.kind == s_kind_field)
    {
        o.solved.helpers = s_Helpers { packed };
    }
    else
        BUG_JWcxU72K("field_packOffset: Not a field."_fu, ctx, module, _here, ss, _helpers);

}

                                #ifndef DEF_unless_oob_FCjNhOXES4c
                                #define DEF_unless_oob_FCjNhOXES4c
inline const s_Node& unless_oob_FCjNhOXE(fu::view<s_Node> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_Node*)fu::NIL);

}
                                #endif

inline static bool l_27_25_h4WQj5ZY(const int import, fu::vec<int>& structImports)
{
    return add_ys5ADtDp(structImports, import);
}

                                #ifndef DEF_each_ZRwPhrD7EHa
                                #define DEF_each_ZRwPhrD7EHa
inline void each_ZRwPhrD7(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu::vec<int>& structImports)
{
    const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
    int i0 = start;
    for (int i = 0; i < (scope_skip.size() + 1); i++)
    {
        const s_ScopeSkip& ss = ((i < scope_skip.size()) ? scope_skip[i] : END_DUMMY);
        if (!((ss.end <= i0)))
        {
            const int i1 = ss.start;
            for (int i_1 = i0; i_1 < i1; i_1++)
                l_27_25_h4WQj5ZY(items[i_1], structImports);

            i0 = ss.end;
        };
    };
}
                                #endif

inline static bool l_27_26_Hwz3qTse(const s_SolvedNode& member)
{
    return !is_rx_copy_UHdpdATk(member.type);
}

                                #ifndef DEF_some_J4Ra2tvWCL5
                                #define DEF_some_J4Ra2tvWCL5
inline bool some_J4Ra2tvW(fu::view<s_SolvedNode> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_SolvedNode& item = a[i];
        if (l_27_26_Hwz3qTse(item))
            return true;

    };
    return false;
}
                                #endif

static s_SolvedNode __solveStruct_TuMO8NWv(const bool solve, const s_Node& node, const s_Target& into, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const fu::str& origId = node.value;
    fu::str _0 {};
    fu::str _1 {};
    fu::str name = (origId ? fu::str(origId) : (_current_fn.out.target ? (_1 = ((_0 = fu::str(GET_etmeeocQ(_current_fn.out.target, ctx, module, _here, ss, _helpers).name)) ? static_cast<fu::str&&>(_0) : "Anon"_fu), (static_cast<fu::str&&>(_1) + (EXT_EOYtG69B(_current_fn.out.target, ctx, module, ss).sighash ? ("_"_fu + EXT_EOYtG69B(_current_fn.out.target, ctx, module, ss).sighash) : fu::str{}))) : fu::str{}));
    const s_kind kind = node.kind;
    const bool isStruct = (kind == s_kind_struct);
    const bool isUnion = (kind == s_kind_union);
    const bool isPrimDecl = (!isStruct ? !isUnion : false);
    /*MOV*/ s_Type basePrimType {};
    fu::str baseprim {};
    if (isPrimDecl)
    {
        const s_Node& baseannot = node.items[STRUCT_BASE];
        basePrimType = (baseannot ? evalTypeAnnot_ctbW9IO5(baseannot, (*(const s_Map_uYRcurSQUL8*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort) : s_Type(t_u8));
        baseprim = getBasePrimitive_351Pzggw(basePrimType, ctx, module, _here, ss, _helpers, _current_fnort);
    };
    const s_DeclAsserts asserts = node.asserts;
    s_Target out_target { into };
    /*MOV*/ s_Type out_type {};
    int flatCount = (isPrimDecl ? 1 : 0);
    int declDepth = 0;
    if (out_target)
        out_type = GET_etmeeocQ(out_target, ctx, module, _here, ss, _helpers).type;
    else
    {
        out_type = initStruct_hPB3vi4F(kind, baseprim, name, asserts, flatCount, module);
        out_target = Scope_Typedef_Ax34jExv(ss._scope, origId, s_Type(out_type), node.flags, name, s_SolverStatus_SS_LAZY, module);
        EXT_mut_XoqMpqSw(out_target, module, ss).tEmplate = createTemplate_2uGHike3(node, ss, _current_fn);
    };
    if (!solve)
        return createEmpty_zptVo9Nn(s_kind_empty, t_void, out_target, _here);
    else
    {
        const s_Target& _current_fnort_1 = out_target;
        GET_mut_TpIPZdoW(out_target, module, ss).status |= s_SolverStatus_SS_DID_START;
        const int helpers0 = _helpers.size();
        const int helpers_data0 = ss._helpers_data.size();
        fu_DEFER(
        {
            _helpers.shrink(helpers0);
            ss._helpers_data.shrink(helpers_data0);
        });
        push_sUG9wPGl(s_HelpersData { s_Target((out_target ? out_target : BUG_JWcxU72K((("solveStruct: no out_target: `"_fu + origId) + "`."_fu), ctx, module, _here, ss, _helpers))), s_SolverPass{}, fu::str{}, s_HelpersMask_HM_Struct, 0, 0, s_Type{}, s_Type{}, fu::vec<s_Type>{}, s_Postdom{}, s_Postdom{}, s_Helpers{} }, ss, _helpers);
        /*MOV*/ fu::vec<s_Target> structConverts {};
        /*MOV*/ fu::vec<int> structImports {};
        int non_triv = (!is_rx_copy_UHdpdATk(out_type) ? -1 : 0);
        const s_Type& primType = (isPrimDecl ? (out_type ? out_type : BUG_JWcxU72K("Falsy isPrimDecl.out_type"_fu, ctx, module, _here, ss, _helpers)) : (*(const s_Type*)fu::NIL));
        fu::view<s_Node> items = (!node.items ? node.items : node.items[STRUCT_MEMBERS].items);
        fu::vec<s_SolvedNode> members = map_VAyoyX3r(items, isPrimDecl, _current_fnort_1, primType, ctx, module, options, _here, ss, _notes, _current_fn, _helpers);

        {
            fu::vec<s_ScopeItem>& innerScope = lookupUserType_mut_CHFnIcLE(out_type.vtype.canon, module).items;
            if (!innerScope && members)
            {
                fu::vec<s_Argument> args = (!isPrimDecl ? fu::vec<s_Argument> { fu::slate<1, s_Argument> { s_Argument { "this"_fu, fu::str{}, despeculateStruct_57qzYcmt(s_Type(out_type)), s_SolvedNode{}, s_Flags{}, 0, s_BitSet{}, s_BitSet{} } } } : fu::vec<s_Argument>{});
                for (int i = 0; i < members.size(); i++)
                {
                    const fu::str& id = items[i].value;
                    const s_Flags isPredicate = (items[i].flags & s_Flags_F_PREDICATE);
                    const fu::str* _2;
                    const s_Target target = (_2 = &((id ? id : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers))), Scope_create_LHVUyYFV(ss._scope, (args ? s_kind_field : s_kind_enumv), *_2, (*(const s_Type*)fu::NIL), (s_Flags_F_PUB | isPredicate), s_SolverStatus{}, 0, module));
                    s_Extended& ext = EXT_mut_XoqMpqSw(target, module, ss);
                    ext.args = args;
                    ext.min = args.size();
                    ext.max = args.size();
                    ext.tEmplate.node.token = items[i].token;
                    Scope_set_EJ5xtBX6(innerScope, id, target, false);
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
                        const s_Target field_target = target_7YqD2G7N(item);
                        s_Overload& field = GET_mut_TpIPZdoW(field_target, module, ss);
                        field.type = member.type;
                        const bool member_isStruct = isStruct_ddyKn6V4(member.type.vtype);
                        const s_Struct& member_userType = (member_isStruct ? lookupUserType_d3zNJ4dJ(member.type, ctx, module, _here, ss, _helpers, _current_fnort_1) : (*(const s_Struct*)fu::NIL));
                        const int memberFlatCount = (member_isStruct ? member_userType.flatCount : 1);
                        if (isStruct_ddyKn6V4(member.type.vtype))
                            declDepth = max_AsFD7H8N(declDepth, (member_userType.declDepth + 1));

                        fu::str recursionError = (member_isStruct ? getRecursionError_XibmETQB(member_userType, out_type, _current_fnort_1, ctx, module, _here, ss, _helpers) : fu::str{});
                        if (recursionError)
                        {
                            fail_pNB52ATY(((("Type "_fu + qBAD_bF2G8fJR(name)) + " is self-recursive:\n"_fu) + recursionError), fu::view<char>{}, ctx, module, _here, ss, _helpers);
                        }
                        else
                        {
                            const int memberFlatOffset = (!isPrimDecl ? flatCount : 0);
                            if (!isPrimDecl)
                                flatCount += memberFlatCount;

                            if (!non_triv && !is_trivial_LriKPDIk(member.type.vtype, ctx, module))
                                non_triv = (i + 1);

                            if (member.flags & s_Flags_F_USING)
                            {
                                structConverts.push(target_7YqD2G7N(item));
                                const int m = modidOfOrigin_u8EynJdr(field.type);
                                if (m && (m != module.modid))
                                    add_ys5ADtDp(structImports, m);

                                add_DLIRqEDZ(structImports, lookupTypeImports_LriKPDIk(field.type.vtype, ctx, module));
                            };
                            if (!isPrimDecl)
                                field_packOffset_Sni6utdv(field, memberFlatOffset, memberFlatCount, ctx, module, _here, ss, _helpers);

                        };
                    }
                    else
                        BUG_JWcxU72K("solveStructMembers_4: field id mismatch."_fu, ctx, module, _here, ss, _helpers);

                };
                if (isPrimDecl)
                {
                    const bool sIgned = (baseprim[0] == 'i');
                    const bool uNsigned = (baseprim[0] == 'u');
                    fu::view<char> size_str = fu::get_view(baseprim, 1, baseprim.size());
                    const fu::u8 size = ((size_str == "8"_fu) ? fu::u8(8u) : ((size_str == "16"_fu) ? fu::u8(16u) : ((size_str == "32"_fu) ? fu::u8(32u) : ((size_str == "64"_fu) ? fu::u8(64u) : ((size_str == "128"_fu) ? fu::u8(128u) : BUG_JWcxU72K(("Enum auto-incrementer: unknown prim size: "_fu + size_str), ctx, module, _here, ss, _helpers))))));
                    s_Intlit last {};
                    for (int i_1 = 0; i_1 < innerScope.size(); i_1++)
                    {
                        s_SolvedNode& init = GET_mut_TpIPZdoW(target_7YqD2G7N(innerScope[i_1]), module, ss).solved;
                        const s_SolvedNode& member = members[i_1];
                        init = member.items[LET_INIT];
                        _here = member.token;
                        if (init)
                        {
                            _here = init.token;
                            if (init.kind == s_kind_int)
                            {
                                last = Intlit_SQ4NkHfH(init.value);
                                if (last.error)
                                {
                                    fail_pNB52ATY(fu::str(last.error), fu::view<char>{}, ctx, module, _here, ss, _helpers);
                                }
                                else
                                    continue;

                            }
                            else
                                last.error = "Cannot auto-increment, please provide an explicit value."_fu;

                        };
                        if (last.error)
                        {
                            fail_pNB52ATY(fu::str(last.error), fu::view<char>{}, ctx, module, _here, ss, _helpers);
                        }
                        else if (last.negative)
                        {
                            fail_pNB52ATY("Previous constant is negative, not sure how to increment, please specify an explicit value."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers);
                        }
                        else
                        {
                            /*MOV*/ s_Intlit next = Intlit_n2M83GG7(((kind == s_kind_flags) ? (i_1 ? (last.absval << 1ull) : 1ull) : (last.absval + 1ull)), false, fu::str{}, uNsigned, sIgned, 10ull);
                            if (next.error || (next.absval > last.absval))
                            {
                                const fu::u8 minsize = (sIgned ? next.minsize_i : next.minsize_u);
                                if (minsize > size)
                                {
                                    fail_pNB52ATY((x7E_r7bhmB7D((x7E_r7bhmB7D("Primitive range exhausted: requires "_fu, fu::u64dec(minsize)) + " bits, got "_fu), fu::u64dec(size)) + "."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
                                }
                                else
                                {
                                    last = next;
                                    if (sIgned || uNsigned)
                                    {
                                        init = SolvedNode_Ob5YrUkY(s_kind_int, primType, s_Flags{}, x7E_r7bhmB7D((next.negative ? "-"_fu : fu::str{}), fu::u64dec(next.absval)), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
                                    }
                                    else
                                    {
                                        fail_pNB52ATY(("Cannot auto-increment this type: "_fu + baseprim), fu::view<char>{}, ctx, module, _here, ss, _helpers);
                                    };
                                };
                            }
                            else
                            {
                                fail_pNB52ATY((next.error ? static_cast<fu::str&&>(next.error) : "Failed to auto-increment, range exhausted."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
                            };
                        };
                    };
                };
            }
            else
                BUG_JWcxU72K((((x7E_r7bhmB7D((x7E_r7bhmB7D((x7E_r7bhmB7D("solveStructMembers_3: field lens mismatch: "_fu, fu::i64dec(innerScope.size())) + " vs "_fu), fu::i64dec(members.size())) + "/"_fu), fu::i64dec(items.size())) + ": `struct "_fu) + name) + "`."_fu), ctx, module, _here, ss, _helpers);

        };
        const int non_triv_1 = non_triv;
        if (non_triv_1 && s_DeclAsserts((asserts & s_DeclAsserts_A_TRIVIAL)))
        {
            fail_pNB52ATY((("Struct is not "_fu + qKW_bF2G8fJR("trivial"_fu)) + ((non_triv_1 < 0) ? ((" because it is "_fu + qKW_bF2G8fJR("nocopy"_fu)) + "."_fu) : (" because of non-trivial member "_fu + qID_bF2G8fJR(unless_oob_FCjNhOXE(items, (non_triv_1 - 1)).value)))), fu::view<char>{}, ctx, module, _here, ss, _helpers);
        }
        else
        {
            each_ZRwPhrD7(ss._scope.imports, ss._ss.imports, 0, structImports);

            {
                bool CHANGE = false;
                if (is_rx_copy_UHdpdATk(out_type) && some_J4Ra2tvW(members))
                {
                    CHANGE = true;
                    out_type = make_non_copyable_57qzYcmt(s_Type(out_type));
                };
                if (!isStruct && !isUnion)
                {
                    if (!(flatCount == 1))
                        BUG_JWcxU72K(x7E_r7bhmB7D((((x7E_r7bhmB7D("Bad flat count: "_fu, str_k2hK9UHj(kind)) + " "_fu) + name) + " flatCount="_fu), fu::i64dec(flatCount)), ctx, module, _here, ss, _helpers);

                };

                {
                    s_Struct& s = lookupUserType_mut_CHFnIcLE(out_type.vtype.canon, module);
                    s.target = (out_target ? out_target : BUG_JWcxU72K("No struct/out_target."_fu, ctx, module, _here, ss, _helpers));
                    s.converts = static_cast<fu::vec<s_Target>&&>(structConverts);
                    s.imports = static_cast<fu::vec<int>&&>(structImports);
                    const int flat0 = s.flatCount;
                    const bool triv0 = s.all_triv;
                    s.flatCount = flatCount;
                    s.declDepth = declDepth;
                    s.all_triv = !non_triv_1;
                    if (!(CHANGE))
                        CHANGE = ((flat0 != s.flatCount) || (triv0 != s.all_triv));

                    if (GET_etmeeocQ(s.target, ctx, module, _here, ss, _helpers).status & s_SolverStatus_SS_DID_START)
                    {

                        {
                            const int actual = getFlatCount_LriKPDIk(out_type.vtype, ctx, module);
                            if (actual != flatCount)
                                BUG_JWcxU72K(x7E_r7bhmB7D((x7E_r7bhmB7D("getFlatCount actual="_fu, fu::i64dec(actual)) + " expect="_fu), fu::i64dec(flatCount)), ctx, module, _here, ss, _helpers);

                        };
                        USAGE_setMaxUsage_p12gjuFA(out_type, flatCount);
                    }
                    else
                        BUG_JWcxU72K("Setting stuff but missing SS_DID_START."_fu, ctx, module, _here, ss, _helpers);

                };
                int min = 0;
                /*MOV*/ fu::vec<s_Argument> args {};
                if (isPrimDecl)
                {
                    args.push(s_Argument { "value"_fu, fu::str{}, static_cast<s_Type&&>(basePrimType), s_SolvedNode{}, s_Flags{}, 0, s_BitSet{}, s_BitSet{} });
                }
                else
                {
                    int N = members.size();
                    if (N && isUnion)
                        N = 1;

                    for (int i = 0; i < N; i++)
                    {
                        const s_SolvedNode& member = members[i];
                        fu::str _3 {};
                        s_Type _4 {};
                        s_SolvedNode _5 {};
                        /*MOV*/ s_Argument arg = (_3 = fu::str((member.value ? member.value : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers))), _4 = s_Type((member.type ? member.type : BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers))), s_Argument { static_cast<fu::str&&>(_3), fu::str{}, static_cast<s_Type&&>(_4), ((_5 = s_SolvedNode(member.items[LET_INIT])) ? static_cast<s_SolvedNode&&>(_5) : (isUnion ? createDefinit_s19RiMA4(member.type, ctx, module, _here, ss, _helpers, _current_fnort_1) : s_SolvedNode{})), (member.flags & s_Flags_F_MUSTNAME), 0, s_BitSet{}, s_BitSet{} });
                        if (!arg.dEfault)
                            min++;

                        args.push(static_cast<s_Argument&&>(arg));
                    };
                };
                const int max = args.size();
                if (max && !min)
                    min++;

                s_Extended& ext = EXT_mut_XoqMpqSw(out_target, module, ss);
                ext.min = min;
                ext.max = max;
                ext.args = static_cast<fu::vec<s_Argument>&&>(args);
                const int mustUpdate = (CHANGE ? EPH_t5Sfn87m(out_target, module, ss).callers.size() : 0);
                s_Overload& overload = GET_mut_TpIPZdoW(out_target, module, ss);
                overload.type = static_cast<s_Type&&>(out_type);
                if (mustUpdate)
                    overload.status |= s_SolverStatus_SS_UPDATED;

            };
            lazySolveEnd_IiQllcub(out_target, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort_1);
            return s_SolvedNode{};
        };
    };
}

static s_SolvedNode uPrepStruct_iK1ZnVhT(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    return __solveStruct_TuMO8NWv(false, node, s_Target{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
}

static s_SolvedNode unorderedPrep_A_iSEfRD8Z(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const s_kind kind = node.kind;
    if (kind == s_kind_fn)
        return uPrepFn_A_kQXlm9nb(node, ctx, module, _here, ss, _current_fn, _helpers);
    else if (isTypeDecl_b84LMof6(kind))
        return uPrepStruct_iK1ZnVhT(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else
        BUG_JWcxU72K((x7E_r7bhmB7D("TODO: unorderedPrep_A("_fu, str_k2hK9UHj(node.kind)) + ")."_fu), ctx, module, _here, ss, _helpers);

}

static void unorderedPrep_B_Ji8KKqZ9(fu::view<s_Node> nodes, fu::view<s_SolvedNode> results, const int unorderedClass, const s_Module& module, s_SolverState& ss)
{
    if (!(unorderedClass != 1))
    {
        bool hasSnap = false;
        s_ScopeMemo lastSnap {};
        for (int i = nodes.size(); i-- > 0; )
        {
            const s_Node& node = nodes[i];
            if (node.flags & s_Flags_F_CONVERSION)
                hasSnap = false;

            const s_Target& target = results[i].target;
            s_Ephemeral& eph = EPH_mut_5Rks4Tyc(target, module, ss);
            if (eph.scope_memo)
            {
                if (!hasSnap)
                {
                    hasSnap = true;
                    lastSnap = eph.scope_memo;
                }
                else
                    eph.scope_memo = lastSnap;

            };
        };
    };
}

static fu::vec<s_SolvedNode> solveNodes_Udt6cwcF(fu::view<s_Node> nodes, const bool dead_brk, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const s_StaticEval static_eval_brk, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ fu::vec<s_SolvedNode> result {};
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    int ae_first = int(0x7fffffffu);
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_Node& node = nodes[i];
        if (!(!node))
        {
            const int unorderedClass = unorderedClassify_SbEkBe2d(node.kind);
            if (!unorderedClass)
            {
                HERE_WgKYH8CN(node.token, _here);
                const bool last = (i == (nodes.size() - 1));
                const s_Type& type = ((last && use_type_last) ? type_last : type_all);
                s_SolvedNode solved = solveNode_A7YoMoA6(node, type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                result += s_SolvedNode(solved);
                if (is_never_8KZIyCKE(solved.type) && dead_brk)
                {
                    if (i < (nodes.size() - 1))
                    {
                        const s_SolverNotes note = s_SolverNotes_N_DeadCode;
                        const s_Module& module_1 = module;
                        const s_SolverState& ss_1 = ss;
                        fu::view<s_Helpers> _helpers_1 = _helpers;
                        if (note & options.break_notes)
                        {
                            fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
                        }
                        else
                            _notes |= note;

                    };
                    break;
                }
                else if (static_eval_brk)
                {
                    const s_StaticEval ae_item = tryAbstractEvalAsBool_6xGBowKZ(solved, ctx, module, _here, ss, _helpers);
                    if (ae_item)
                    {
                        if (static_eval_brk == ae_item)
                            break;
                        else if (ae_first > result.size())
                            ae_first = (result.size() - 1);

                    };
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
                    const s_Node& node_1 = (*(_0 = &(nodes[i_1])) ? *_0 : BUG_JWcxU72K("solveNodes, prep-a: falsy node"_fu, ctx, module, _here, ss, _helpers));
                    if (unorderedClassify_SbEkBe2d(node_1.kind) != unorderedClass)
                    {
                        i1 = i_1;
                        break;
                    }
                    else
                    {
                        HERE_WgKYH8CN(node_1.token, _here);
                        result += unorderedPrep_A_iSEfRD8Z(node_1, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
                    };
                };
                if (i1 > i0)
                {
                    i = (i1 - 1);
                    unorderedPrep_B_Ji8KKqZ9(fu::get_view(nodes, i0, i1), fu::get_view(result, (i0 + offset), (i1 + offset)), unorderedClass, module, ss);
                    bool repeat = true;
                    while (repeat)
                    {
                        repeat = false;
                        for (int i_2 = i0; i_2 < i1; i_2++)
                        {
                            const s_Node* _1;
                            const s_Node& node_1 = (*(_1 = &(nodes[i_2])) ? *_1 : BUG_JWcxU72K("solveNodes, solve: falsy node"_fu, ctx, module, _here, ss, _helpers));
                            HERE_WgKYH8CN(node_1.token, _here);
                            const s_Target& into = result[(i_2 + offset)].target;
                            if (lazySolveStart_soM8XEbj(into, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort))
                                repeat = true;

                        };
                    };
                }
                else
                {
                    BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
                };
            };
        };
    };
    if (static_eval_brk)
    {
        for (int i_1 = (result.size() - 1); i_1-- > ae_first; )
        {
            if (tryAbstractEvalAsBool_6xGBowKZ(result[i_1], ctx, module, _here, ss, _helpers))
            {
                /*MOV*/ s_SolvedNode cond { result[i_1] };
                result.splice(i_1, 1);
                s_SolvedNode& cons = result.mutref(i_1);
                cons = createBlock_ZR7NaTMf(static_cast<s_SolvedNode&&>(cond), s_SolvedNode(cons), ctx, module, _here, ss, _helpers);
            };
        };
    };
    return /*NRVO*/ result;
}

static s_SolvedNode solveRoot_0sTMPm9H(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const s_Helpers helpers = s_Helpers { _helpers.size() };
    push_sUG9wPGl(s_HelpersData{}, ss, _helpers);
    fu::vec<s_SolvedNode> items = solveNodes_Udt6cwcF(node.items, true, t_void, (*(const s_Type*)fu::NIL), false, s_StaticEval{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    if (is_never_8KZIyCKE(if_last_fLVI01Cf(items).type))
    {
        _here = last_fLVI01Cf(items).token;
        fail_pNB52ATY("Noreturn during static init: this program will never finish booting."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers);
    }
    else
    {
        /*MOV*/ s_SolvedNode root = SolvedNode_Ob5YrUkY(s_kind_root, t_void, s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, helpers, _here);
        runAllPasses_1hAiFIVG(root, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        return /*NRVO*/ root;
    };
}

static s_SolvedNode solveArgID_x0RfONnM(const s_Node& node, const s_Type& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    s_SolvedNode expr = solveNode_A7YoMoA6(only_HNT2v2R9(node.items), type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    return solved_tFunRNAy(node, expr.type, fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, _here);
}

static s_SolvedNode solveCall_ilDrAAFz(const s_Node& node, const s_Target& target, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ fu::vec<s_SolvedNode> args = solveNodes_Udt6cwcF(node.items, false, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, s_StaticEval{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    return solveCall_FCNRcUGb(fu::str(node.value), static_cast<fu::vec<s_SolvedNode>&&>(args), node.flags, target, false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
}

static s_SolvedNode solveArrlit_f4D0K6U6(const s_Node& node, const s_Type& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    s_Type itemType = (type ? tryClear_sliceable_QUN697Dd(type.vtype) : s_Type{});
    if (!itemType && isStruct_ddyKn6V4(type.vtype))
        return solveCall_ilDrAAFz(node, s_Target(lookupUserType_d3zNJ4dJ(type, ctx, module, _here, ss, _helpers, _current_fnort).target), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else
    {
        /*MOV*/ fu::vec<s_SolvedNode> args = solveNodes_Udt6cwcF(node.items, true, itemType, (*(const s_Type*)fu::NIL), false, s_StaticEval{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        if (is_never_8KZIyCKE(if_last_fLVI01Cf(args).type))
        {

            {
                const s_SolverNotes note = s_SolverNotes_N_DeadArrlit;
                const s_Module& module_1 = module;
                const s_SolverState& ss_1 = ss;
                fu::view<s_Helpers> _helpers_1 = _helpers;
                if (note & options.break_notes)
                {
                    fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
                }
                else
                    _notes |= note;

            };
            return createBlock_Q2a0BBmY(t_never, static_cast<fu::vec<s_SolvedNode>&&>(args), s_Helpers{}, ctx, module, _here, ss, _helpers);
        }
        else if (!(node.flags & s_Flags_F_NAMED_ARGS))
            return createArrlit_1EQc3HSU(static_cast<fu::vec<s_SolvedNode>&&>(args), itemType, ctx, module, options, _here, ss, _helpers, _current_fnort);
        else
        {
            fail_pNB52ATY("TODO: solveArrlit: tryMatch by [ argnames: ... ] without function name."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers);
        };
    };
}

static s_SolvedNode createBool_wPvN1EBv(const bool value, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    return createBool_NTIL6Vft((value ? "true"_fu : "false"_fu), s_Type(t_bool), ctx, module, _here, ss, _helpers);
}

static s_SolvedNode createNot_AzhD2KnV(const s_SolvedNode& item, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (item.kind == s_kind_bool)
    {
        if (item.value == "true"_fu)
            return createBool_wPvN1EBv(false, ctx, module, _here, ss, _helpers);
        else if (item.value == "false"_fu)
            return createBool_wPvN1EBv(true, ctx, module, _here, ss, _helpers);
        else
            BUG_JWcxU72K(("Invalid bool literal: "_fu + qBAD_bF2G8fJR(item.value)), ctx, module, _here, ss, _helpers);

    }
    else
    {
        s_Type type { t_bool };
        const s_StaticEval ae = tryAbstractEvalAsBool_6xGBowKZ(item, ctx, module, _here, ss, _helpers);
        if (ae)
            type.vfacts = ((ae == s_StaticEval_SE_True) ? s_VFacts_AlwaysFalse : s_VFacts_AlwaysTrue);

        return SolvedNode_Ob5YrUkY(s_kind_not, type, s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(item) } }, s_Target{}, s_Helpers{}, _here);
    };
}

static s_SolvedNode solveNot_CqLd4XFz(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    s_SolvedNode _0 {};
    return (_0 = solveNode_A7YoMoA6(only_HNT2v2R9(node.items), t_proposition, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort), createNot_AzhD2KnV(static_cast<s_SolvedNode&&>(_0), ctx, module, _here, ss, _helpers));
}

static s_SolvedNode solveIf_Oyf4Yt0w(const s_Node& node, const s_Type& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ s_SolvedNode cond = solveNode_A7YoMoA6(node.items[0], t_proposition, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    if (is_never_8KZIyCKE(cond.type))
    {

        {
            const s_SolverNotes note = s_SolverNotes_N_DeadIfCond;
            const s_Module& module_1 = module;
            const s_SolverState& ss_1 = ss;
            fu::view<s_Helpers> _helpers_1 = _helpers;
            if (note & options.break_notes)
            {
                fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
            }
            else
                _notes |= note;

        };
        return /*NRVO*/ cond;
    }
    else
    {
        const s_StaticEval ae_cond = tryAbstractEvalAsBool_6xGBowKZ(cond, ctx, module, _here, ss, _helpers);
        if (ae_cond)
        {
            s_SolvedNode _0 {};
            return (_0 = solveNode_A7YoMoA6(node.items[((ae_cond == s_StaticEval_SE_True) ? 1 : 2)], type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort), createBlock_ZR7NaTMf(static_cast<s_SolvedNode&&>(cond), static_cast<s_SolvedNode&&>(_0), ctx, module, _here, ss, _helpers));
        }
        else
        {
            /*MOV*/ s_SolvedNode cons = solveBlock_SoEtv2T3(node.items[1], type, 0, s_HelpersMask_HM_CanBreak, (*(const fu::str*)fu::NIL), 0, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            /*MOV*/ s_SolvedNode alt = solveBlock_SoEtv2T3(node.items[2], type, 0, s_HelpersMask_HM_CanBreak, (*(const fu::str*)fu::NIL), 0, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
            _here = node.token;
            return createIf_HnLK3uFo(cond, static_cast<s_SolvedNode&&>(cons), static_cast<s_SolvedNode&&>(alt), s_Type(type), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        };
    };
}

static s_SolvedNode solveOr_Prg1TKVZ(const s_Node& node, const s_Type& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ fu::vec<s_SolvedNode> items = solveNodes_Udt6cwcF(node.items, true, (is_void_8KZIyCKE(type) ? t_proposition : type), type, true, s_StaticEval_SE_True, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    return createOr_f3YOZ9vs(static_cast<fu::vec<s_SolvedNode>&&>(items), s_Type(type), ctx, module, _here, ss, _helpers, _current_fnort);
}

static s_SolvedNode solveAnd_u8Ju1ZhJ(const s_Node& node, const s_Type& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    fu::vec<s_SolvedNode> items = solveNodes_Udt6cwcF(node.items, true, t_proposition, type, true, s_StaticEval_SE_False, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    return createAnd_4n5O7WqG(items, s_Type(type), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
}

static s_SolvedNode solveLetStatement_q8KE6rsT(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (node.kind == s_kind_let)
        return solveNode_A7YoMoA6(node, t_void, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else
        BUG_JWcxU72K((x7E_r7bhmB7D("Expected a `let` statement, got: `"_fu, str_k2hK9UHj(node.kind)) + "`."_fu), ctx, module, _here, ss, _helpers);

}

static s_SolvedNode solveLoop_Qvok3T3F(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const s_ScopeMemo scope0 = Scope_snap_bI1J4XJR(ss._scope, _helpers);
    fu_DEFER(Scope_pop_VKZbhWNz(ss._scope, scope0, _helpers));
    const int brk_idx = _helpers.size();
    push_sUG9wPGl(s_HelpersData { s_Target{}, s_SolverPass{}, fu::str(node.value), s_HelpersMask((s_HelpersMask_HM_Anon | s_HelpersMask_HM_CanBreak)), _current_fn.out.target.index, GET_next_local_index_zHd1WF14(_current_fnort, ss, _current_fn), s_Type{}, s_Type(t_void), fu::vec<s_Type>{}, s_Postdom{}, s_Postdom{}, s_Helpers{} }, ss, _helpers);
    const s_Node& n_init = node.items[LOOP_INIT];
    const s_Node& n_pre_cond = node.items[LOOP_PRE_COND];
    const s_Node& n_pre = node.items[LOOP_PRE];
    const s_Node& n_body = node.items[LOOP_BODY];
    const s_Node& n_post = node.items[LOOP_POST];
    const s_Node& n_post_cond = node.items[LOOP_POST_COND];
    /*MOV*/ s_SolvedNode init = (n_init ? solveLetStatement_q8KE6rsT(n_init, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort) : s_SolvedNode{});
    if (is_never_8KZIyCKE(init.type))
    {

        {
            const s_SolverNotes note = s_SolverNotes_N_DeadLoopInit;
            const s_Module& module_1 = module;
            const s_SolverState& ss_1 = ss;
            fu::view<s_Helpers> _helpers_1 = _helpers;
            if (note & options.break_notes)
            {
                fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss_1, _helpers_1);
            }
            else
                _notes |= note;

        };
        return /*NRVO*/ init;
    }
    else
    {
        /*MOV*/ s_SolvedNode pre_cond = (n_pre_cond ? solveNode_A7YoMoA6(n_pre_cond, t_proposition, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode pre = (n_pre ? solveBlock_SoEtv2T3(n_pre, t_void, 0, s_HelpersMask_HM_LoopPreheader, (*(const fu::str*)fu::NIL), 0, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode body = (n_body ? solveBlock_SoEtv2T3(n_body, t_void, 0, s_HelpersMask_HM_CanBreak, (*(const fu::str*)fu::NIL), 0, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode post = (n_post ? solveBlock_SoEtv2T3(n_post, t_void, 0, s_HelpersMask_HM_CanBreak, (*(const fu::str*)fu::NIL), 0, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode post_cond = (n_post_cond ? solveNode_A7YoMoA6(n_post_cond, t_proposition, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort) : s_SolvedNode{});
        const s_Helpers& h = _helpers[brk_idx];
        const s_Type& type = ((!pre_cond && !post_cond && !s_HelpersMask((ss._helpers_data[h.index].mask & s_HelpersMask_HM_LabelUsed))) ? t_never : t_void);
        return SolvedNode_Ob5YrUkY(s_kind_loop, type, s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<6, s_SolvedNode> { static_cast<s_SolvedNode&&>(init), static_cast<s_SolvedNode&&>(pre_cond), static_cast<s_SolvedNode&&>(pre), static_cast<s_SolvedNode&&>(body), static_cast<s_SolvedNode&&>(post), static_cast<s_SolvedNode&&>(post_cond) } }, s_Target{}, h, _here);
    };
}

static s_Helpers& Scope_lookupReturn_D1db97RP(fu::view<char> id, const bool lambdaOK, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view_mut<s_Helpers> _helpers)
{

    {
        fu::view<s_ScopeSkip> ss_1 = ss._ss.helpers;
        int ssi = (ss_1.size() - 1);
        int ssN = ((ssi >= 0) ? (ss_1[ssi].end - 1) : 0);
        for (int i = _helpers.size(); i-- > 0; )
        {
            if ((ssi >= 0) && (i == ssN))
            {
                i = ss_1[ssi--].start;
                ssN = ((ssi >= 0) ? (ss_1[ssi].end - 1) : 0);
            }
            else
            {
                s_Helpers& item = _helpers.mutref(i);
                const s_HelpersData* BL_6_v;
                if (!(!s_HelpersMask(((__extension__ (
                {
                    const s_Helpers& h = item;
                    BL_6_v = &(ss._helpers_data[h.index]);
                (void)0;}), *BL_6_v).mask & s_HelpersMask_HM_CanReturn))))
                {
                    const s_HelpersData* BL_8_v;
                    if (!(s_HelpersMask(((__extension__ (
                    {
                        const s_Helpers& h = item;
                        BL_8_v = &(ss._helpers_data[h.index]);
                    (void)0;}), *BL_8_v).mask & s_HelpersMask_HM_Lambda)) && !lambdaOK))
                    {
                        const s_HelpersData* BL_10_v;
                        if (!(id && ((__extension__ (
                        {
                            const s_Helpers& h = item;
                            BL_10_v = &(ss._helpers_data[h.index]);
                        (void)0;}), *BL_10_v).id != id)))
                            return item;

                    };
                };
            };
        };
    };
    fail_pNB52ATY((("No return `"_fu + id) + "` in scope."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
}

                                #ifndef DEF_each_H4qnJ69u029
                                #define DEF_each_H4qnJ69u029
inline void each_H4qnJ69u(fu::view<s_ScopeSkip> a, int& i)
{
    for (int i_1 = 0; i_1 < a.size(); i_1++)
    {
        const s_ScopeSkip& skip = a[i_1];
        if (i == skip.start)
            i = skip.end;
        else if (i < skip.start)
            return;

    };
}
                                #endif

static s_Helpers& Scope_lookupLabel_uuGbr8KD(fu::view<char> id, const bool cont, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, fu::view_mut<s_Helpers> _helpers)
{
    int CONTINUE_BELOW {};

    {
        fu::view<s_ScopeSkip> ss_1 = ss._ss.helpers;
        int ssi = (ss_1.size() - 1);
        int ssN = ((ssi >= 0) ? (ss_1[ssi].end - 1) : 0);
        for (int i = _helpers.size(); i-- > 0; )
        {
            if ((ssi >= 0) && (i == ssN))
            {
                i = ss_1[ssi--].start;
                ssN = ((ssi >= 0) ? (ss_1[ssi].end - 1) : 0);
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
                    BL_7_v = &(ss._helpers_data[h.index]);
                (void)0;}), *BL_7_v).mask & s_HelpersMask_HM_CanBreak)))
                {
                    if (!CONTINUE_BELOW)
                    {
                        const s_HelpersData* BL_10_v;
                        if (id || !s_HelpersMask(((__extension__ (
                        {
                            const s_Helpers& h = item;
                            BL_10_v = &(ss._helpers_data[h.index]);
                        (void)0;}), *BL_10_v).mask & s_HelpersMask_HM_Lambda)))
                            continue;
                        else if (!cont)
                        {
                            CONTINUE_BELOW = i;
                            continue;
                        };
                    };
                }
                else if (!CONTINUE_BELOW)
                {
                    const s_HelpersData* BL_14_v;
                    const s_HelpersData* BL_15_v;
                    if (!(id ? ((__extension__ (
                    {
                        const s_Helpers& h = item;
                        BL_14_v = &(ss._helpers_data[h.index]);
                    (void)0;}), *BL_14_v).id == id) : !!s_HelpersMask(((__extension__ (
                    {
                        const s_Helpers& h = item;
                        BL_15_v = &(ss._helpers_data[h.index]);
                    (void)0;}), *BL_15_v).mask & s_HelpersMask_HM_Anon))))
                        continue;
                    else if (cont)
                    {
                        i++;
                        each_H4qnJ69u(ss._ss.helpers, i);
                        if (!(i < _helpers.size()))
                        {
                            fail_pNB52ATY((((("Cannot "_fu + qBAD_bF2G8fJR(("continue :"_fu + id))) + " from here, did you mean to "_fu) + qKW_bF2G8fJR("break"_fu)) + "?"_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
                        };
                    };
                };
                return _helpers.mutref(i);
            };
        };
    };
    fail_pNB52ATY((("No label `"_fu + id) + "` in scope."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
}

static s_SolvedNode solveJump_o2liqbV0(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const s_Helpers h { ((node.kind == s_kind_return) ? Scope_lookupReturn_D1db97RP(node.value, !!(node.flags & s_Flags_F_IMPLICIT), ctx, module, _here, ss, _helpers) : Scope_lookupLabel_uuGbr8KD(node.value, (node.kind == s_kind_continue), ctx, module, _here, ss, _helpers)) };
    /*MOV*/ s_SolvedNode expr = (!node.items ? createEmpty_zptVo9Nn(s_kind_empty, t_void, s_Target{}, _here) : solveNode_A7YoMoA6(only_HNT2v2R9(node.items), (ss._helpers_data[h.index].ret_actual ? clear_vfacts_57qzYcmt(s_Type(ss._helpers_data[h.index].ret_actual)) : s_Type(ss._helpers_data[h.index].ret_expect)), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort));
    if (is_never_8KZIyCKE(expr.type))
        return /*NRVO*/ expr;
    else
    {
        if (ss._helpers_data[h.index].ret_expect)
        {
            convertIfNeeded_fQFFqlKG(expr, s_Type(ss._helpers_data[h.index].ret_expect), "Actual return type does not match annotation"_fu, fu::view<char>{}, (*(const fu::str*)fu::NIL), false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        };
        if (ss._helpers_data[h.index].local_of != _current_fn.out.target.index)
        {
            add_ys5ADtDp(_current_fn.effects.far_jumps, ss._helpers_data[h.index].local_of);
            return SolvedNode_Ob5YrUkY(s_kind___far_jump, t_never, node.flags, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { static_cast<s_SolvedNode&&>(expr) } }, s_Target{}, h, _here);
        }
        else
            return solveJump_finish_bj5IrUVC(node.flags, expr, h, ctx, module, _here, ss, _helpers, _current_fnort);

    };
}

static s_SolvedNode solveInt_73glRT8f(const s_Node& node, const s_Type& type, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    s_Type _0 {};
    return (_0 = solveInt_EMgPGkWk(node.value, type, ctx, module, options, _here, ss, _helpers, _current_fnort), solved_tFunRNAy(node, static_cast<s_Type&&>(_0), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here));
}

static s_SolvedNode solveReal_tuM7boA2(const s_Node& node, const s_Type& type, const s_TokenIdx& _here)
{
    return solved_tFunRNAy(node, solveReal_97MHpTIx(type), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveString_JxJAuOVG(const s_Node& node, const s_Type& type, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_Target& _current_fnort)
{
    s_Type type_1 = solveString_9phR1p2w(node.value, type, ctx, module, options);
    if (!node.value && is_sliceable_6bkyMkO3(t_string.vtype))
    {
        return createDefinit_s19RiMA4(add_ref_SU0caH0t(s_Type(t_string), Lifetime_static_8nlJDPX0(), _here, ctx), ctx, module, _here, ss, _helpers, _current_fnort);
    }
    else
    {
        return solved_tFunRNAy(node, type_1, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
    };
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

static s_SolvedNode solveChar_V757cu2P(const s_Node& node, const s_TokenIdx& _here)
{
    return solved_tFunRNAy(node, t_byte, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static void visit_TU42CtZH(const int modid, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    if (!(!Scope_import_aSuXr0ey(modid, ctx, module, _here, ss, _helpers)))
    {
        const s_Scope& s = ctx.modules[modid].out.solve.scope;
        for (int i = 0; i < s.imports.size(); i++)
            visit_TU42CtZH(s.imports[i], ctx, module, _here, ss, _helpers);

    };
}

static s_SolvedNode solveImport_5fW4rFmM(const s_Node& node, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    const s_Module& m = findModule_3xDEFYIx(node.value, ctx, module, _here, ss, _helpers);
    visit_TU42CtZH(m.modid, ctx, module, _here, ss, _helpers);
    if (node.flags & s_Flags_F_PUB)
    {
        if (_current_fn.scope0)
        {
            fail_pNB52ATY("Cannot pub import from here."_fu, fu::view<char>{}, ctx, module, _here, ss, _helpers);
        }
        else
            add_ys5ADtDp(ss._pub_imports, m.modid);

    };
    return createEmpty_zptVo9Nn(s_kind_empty, t_void, s_Target{}, _here);
}

static s_SolvedNode solveDefer_aM3ZjhNo(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ s_SolvedNode item = solveNode_A7YoMoA6(only_HNT2v2R9(node.items), t_void, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    return solved_tFunRNAy(node, t_void, fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { static_cast<s_SolvedNode&&>(item) } }, s_Target{}, _here);
}

static s_SolvedNode solveTryCatch_uilJH3Uq(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (node.items.size() == 3)
    {
        const s_ScopeMemo scope0 = Scope_snap_bI1J4XJR(ss._scope, _helpers);
        /*MOV*/ s_SolvedNode tRy = solveNode_A7YoMoA6(node.items[0], t_void, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        Scope_pop_VKZbhWNz(ss._scope, scope0, _helpers);
        const s_ScopeMemo scope0_1 = Scope_snap_bI1J4XJR(ss._scope, _helpers);
        /*MOV*/ s_SolvedNode err = solveLetStatement_q8KE6rsT(node.items[1], ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        /*MOV*/ s_SolvedNode cAtch = solveNode_A7YoMoA6(node.items[2], t_void, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
        Scope_pop_VKZbhWNz(ss._scope, scope0_1, _helpers);
        if ((err.kind == s_kind_letdef) && isAssignableAsArgument_aTMI25ej(GET_etmeeocQ(err.target, ctx, module, _here, ss, _helpers).solved.type, t_string, false))
        {
            const s_Type& type = ((is_never_8KZIyCKE(tRy.type) && is_never_8KZIyCKE(cAtch.type)) ? t_never : t_void);
            return solved_tFunRNAy(node, type, fu::vec<s_SolvedNode> { fu::slate<3, s_SolvedNode> { static_cast<s_SolvedNode&&>(tRy), static_cast<s_SolvedNode&&>(err), static_cast<s_SolvedNode&&>(cAtch) } }, s_Target{}, _here);
        }
        else
        {
            fail_pNB52ATY(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
        };
    }
    else
    {
        BUG_JWcxU72K(fu::str{}, ctx, module, _here, ss, _helpers);
    };
}

static s_SolvedNode solveTypedef_bKO7Wefh(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    s_Type annot = evalTypeAnnot_ctbW9IO5(only_HNT2v2R9(node.items), (*(const s_Map_uYRcurSQUL8*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    const s_Target target = Scope_Typedef_Ax34jExv(ss._scope, node.value, s_Type(annot), node.flags, (*(const fu::str*)fu::NIL), s_SolverStatus{}, module);
    const s_Struct& s = tryLookupUserType_LriKPDIk(annot.vtype, ctx, module);
    if (s.target)
    {
        GET_mut_TpIPZdoW(target, module, ss) = s_Overload(GET_etmeeocQ(s.target, ctx, module, _here, ss, _helpers));
        EXT_mut_XoqMpqSw(target, module, ss) = s_Extended(EXT_EOYtG69B(s.target, ctx, module, ss));
    };
    return createEmpty_zptVo9Nn(s_kind_empty, t_void, s_Target{}, _here);
}

static s_SolvedNode solveTypeCast_pniSdibG(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const s_Node& left = node.items[0];
    const s_Node& right = node.items[1];
    s_Type expect = evalTypeAnnot_ctbW9IO5(right, (*(const s_Map_uYRcurSQUL8*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    /*MOV*/ s_SolvedNode actual = solveNode_A7YoMoA6(left, expect, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    convertIfNeeded_fQFFqlKG(actual, expect, "Cannot convert: "_fu, fu::view<char>{}, (*(const fu::str*)fu::NIL), false, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    return /*NRVO*/ actual;
}

static s_SolvedNode solveTypeAssert_4XBD4jFc(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    s_Map_uYRcurSQUL8 typeParams {};
    bool _0 {};
    return (_0 = evalTypePattern_17W8iDcf(node, typeParams, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort), createBool_wPvN1EBv(_0, ctx, module, _here, ss, _helpers));
}

static s_SolvedNode solveTypeParam_Dvaozghw(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    const s_Type* _0;
    return (_0 = &(evalTypeParam_GDH1e4z4(node.value, (*(const s_Map_uYRcurSQUL8*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort)), solved_tFunRNAy(node, *_0, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here));
}

static void visitScope_VD8gYXwm(const bool local_scope, fu::view<s_ScopeItem> items, fu::view<char> id, const bool shadow, fu::vec<s_Target>& result, s_SolverState& ss)
{
    int scope_iterator {};
    s_Target target {};
    bool shadows {};
    while (!shadow && (target = (local_scope ? search_UCBpCBiH(ss._scope.items, id, scope_iterator, ss._ss.items, shadows, fu::view<s_Target>{}, fu::view<s_ScopeItem>{}) : search_Jzv8sHaW(items, id, scope_iterator))))
    {
        result.unshift(s_Target(target));
    };
}

static fu::vec<s_Target> solveAddrOfFn_7b1eSd0x(fu::str&& id, const s_Flags flags, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const bool shadow = false;
    /*MOV*/ fu::vec<s_Target> result {};
    const s_Flags qualified = (flags & s_Flags_F_COMPOUND_ID);
    fu::view<s_ScopeItem> _0 {};
    (_0 = (qualified ? dequalify_andGetScope_4LjLR0As(id, ctx, module, _here, ss, _helpers).items : fu::view<s_ScopeItem>{}), visitScope_VD8gYXwm(!qualified, static_cast<fu::view<s_ScopeItem>&&>(_0), id, shadow, result, ss));
    return static_cast<fu::vec<s_Target>&&>((result ? result : fail_pNB52ATY((("No `fn "_fu + id) + "` in scope."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers)));
}

static s_SolvedNode solveAddrOfFn_R95rBofM(const s_Node& node, const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, s_SolverState& ss, fu::view<s_Helpers> _helpers)
{
    const fu::str& id = node.value;
    s_Type type = X_addrofTarget_6iKgn5Mp(solveAddrOfFn_7b1eSd0x(fu::str(id), node.flags, ctx, module, _here, ss, _helpers));
    return createEmpty_zptVo9Nn(s_kind_empty, type, s_Target{}, _here);
}

                                #ifndef DEF_starts_1wDddajZEEk
                                #define DEF_starts_1wDddajZEEk
inline bool starts_1wDddajZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEF_ends_1wDddajZEEk
                                #define DEF_ends_1wDddajZEEk
inline bool ends_1wDddajZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

static void l_27_33_8QDIVuCX(s_Node& item, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    const int idx = ((item.value == placeholder) ? 0 : (starts_1wDddajZ(item.value, prefix) ? 0 : (ends_1wDddajZ(item.value, suffix) ? (item.value.size() - placeholder.size()) : fu::lfind(item.value, inside))));
    if ((idx >= 0))
    {
        if (item.kind == s_kind_call)
            item.value.splice(idx, placeholder.size(), field.id);
        else if (item.kind == s_kind_str)
            item.value.splice(idx, placeholder.size(), field.id);

    };
}

static void walk_O2FyHH1q(s_Node& node, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    for (int i = 0; i < node.items.size(); i++)
    {
        s_Node* _0;
        (_0 = &(node.items.mutref(i)), walk_O2FyHH1q(*_0, placeholder, prefix, suffix, inside, field));
    };
    l_27_33_8QDIVuCX(node, placeholder, prefix, suffix, inside, field);
}

inline static s_Node astReplace_yFfbyqtJ(const s_Node& node, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    /*MOV*/ s_Node node_1 { node };
    walk_O2FyHH1q(node_1, placeholder, prefix, suffix, inside, field);
    return /*NRVO*/ node_1;
}

static s_SolvedNode solveForFieldsOf_HtmSWzgv(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    fu::view<char> placeholder = node.value;
    const s_Node& body_template = node.items[1];
    fu::str prefix = (placeholder + "_"_fu);
    fu::str suffix = ("_"_fu + placeholder);
    fu::str inside = (("_"_fu + placeholder) + "_"_fu);
    s_Type _0 {};
    fu::view<s_ScopeItem> fields = (_0 = evalTypeAnnot_ctbW9IO5(node.items[0], (*(const s_Map_uYRcurSQUL8*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort), lookupUserType_d3zNJ4dJ(static_cast<s_Type&&>(_0), ctx, module, _here, ss, _helpers, _current_fnort)).items;
    fu::vec<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        items_ast += astReplace_yFfbyqtJ(body_template, placeholder, prefix, suffix, inside, field);
    };
    /*MOV*/ fu::vec<s_SolvedNode> items = solveNodes_Udt6cwcF(items_ast, true, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, s_StaticEval{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    const s_Type& type = (is_never_8KZIyCKE(if_last_fLVI01Cf(items).type) ? t_never : t_void);
    return createBlock_Q2a0BBmY(type, static_cast<fu::vec<s_SolvedNode>&&>(items), s_Helpers{}, ctx, module, _here, ss, _helpers);
}

static void compilerBreak_8nDQtcUM(const s_Context& ctx, const s_Module& module, s_TokenIdx& _here, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    /*MOV*/ fu::str debug = "\nCompiler break:"_fu;
    if (_current_fn.out.target)
    {
        const s_Target& t = _current_fn.out.target;
        const s_Overload* _0;
        debug += (x7E_r7bhmB7D((x7E_r7bhmB7D((x7E_r7bhmB7D("\n    Current fn: "_fu, (_0 = &(GET_etmeeocQ(t, ctx, module, _here, ss, _helpers)), str_1mm3y0E0(*_0, ctx, module, _here, ss, _helpers))) + " at ("_fu), fu::i64dec(t.modid)) + ", "_fu), fu::i64dec(t.index)) + "):"_fu);
        fu::view<s_Overload> locals = EXT_EOYtG69B(t, ctx, module, ss).locals;
        for (int i = 0; i < locals.size(); i++)
        {
            const s_Overload& item = locals[i];
            debug += x7E_r7bhmB7D("\n        "_fu, str_1mm3y0E0(item, ctx, module, _here, ss, _helpers));
        };
    };
    if (debug)
    {
        fu::str* BL_5_v;
        fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((__extension__ (
        {
            /*MOV*/ fu::str& x = debug;
            BL_5_v = &(x);
        (void)0;}), *BL_5_v)) }));
    };
    bReak_DX6KImTN();
}

static s_SolvedNode executeCompilerPragma_63btRQrG(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    if (node.value != "break"_fu)
    {
        fu::vec<s_SolvedNode> _0 {};
        return (_0 = solveNodes_Udt6cwcF(node.items, false, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, s_StaticEval{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort), SolvedNode_Ob5YrUkY(s_kind_pragma, t_void, s_Flags{}, node.value, static_cast<fu::vec<s_SolvedNode>&&>(_0), s_Target{}, s_Helpers{}, _here));
    }
    else
    {
        compilerBreak_8nDQtcUM(ctx, module, _here, ss, _current_fn, _helpers);
        return createEmpty_zptVo9Nn(s_kind_empty, t_void, s_Target{}, _here);
    };
}

static s_SolvedNode createUnwrap_qSQC0HGZ(const s_TokenIdx& _here)
{
    return SolvedNode_Ob5YrUkY(s_kind_unwrap, t_void, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode solveDeclExpr_gcobrRcW(const s_Node& node, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    /*MOV*/ s_SolvedNode res { only_fLVI01Cf(solveNodes_Udt6cwcF((fu::slate<1, s_Node> { s_Node(node) }), false, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, s_StaticEval{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort)) };
    if (res.target && (GET_etmeeocQ(res.target, ctx, module, _here, ss, _helpers).kind == s_kind_type))
        res.type = GET_etmeeocQ(res.target, ctx, module, _here, ss, _helpers).type;

    return /*NRVO*/ res;
}

static s_SolvedNode solveNode_A7YoMoA6(const s_Node& node, const s_Type& type, const s_Context& ctx, s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_Target& _current_fnort)
{
    HERE_WgKYH8CN(node.token, _here);
    const s_kind k = node.kind;
    if (k == s_kind_root)
        return solveRoot_0sTMPm9H(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_block)
        return solveBlock_SoEtv2T3(node, type, 0, s_HelpersMask_HM_CanBreak, (*(const fu::str*)fu::NIL), 0, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_argid)
        return solveArgID_x0RfONnM(node, type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_let)
        return solveLet_W1roIZE3(node, (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_call)
    {
        return solveCall_ilDrAAFz(node, s_Target{}, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    }
    else if (k == s_kind_arrlit)
        return solveArrlit_f4D0K6U6(node, type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_not)
        return solveNot_CqLd4XFz(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_if)
        return solveIf_Oyf4Yt0w(node, type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_or)
        return solveOr_Prg1TKVZ(node, type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_and)
        return solveAnd_u8Ju1ZhJ(node, type, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_loop)
        return solveLoop_Qvok3T3F(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_break)
        return solveJump_o2liqbV0(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_return)
        return solveJump_o2liqbV0(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_continue)
        return solveJump_o2liqbV0(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_int)
        return solveInt_73glRT8f(node, type, ctx, module, options, _here, ss, _helpers, _current_fnort);
    else if (k == s_kind_real)
        return solveReal_tuM7boA2(node, type, _here);
    else if (k == s_kind_str)
        return solveString_JxJAuOVG(node, type, ctx, module, options, _here, ss, _helpers, _current_fnort);
    else if (k == s_kind_char)
        return solveChar_V757cu2P(node, _here);
    else if (k == s_kind_bool)
        return createBool_NTIL6Vft(node.value, s_Type(t_bool), ctx, module, _here, ss, _helpers);
    else if (k == s_kind_definit)
        return solveDefinit_2nzV5xHZ(type, ctx, module, _here, ss, _helpers, _current_fnort);
    else if (k == s_kind_import)
        return solveImport_5fW4rFmM(node, ctx, module, _here, ss, _current_fn, _helpers);
    else if (k == s_kind_defer)
        return solveDefer_aM3ZjhNo(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_try)
        return solveTryCatch_uilJH3Uq(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_typedef)
        return solveTypedef_bKO7Wefh(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_typecast)
        return solveTypeCast_pniSdibG(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_typeassert)
        return solveTypeAssert_4XBD4jFc(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_typeparam)
        return solveTypeParam_Dvaozghw(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_addroffn)
        return solveAddrOfFn_R95rBofM(node, ctx, module, _here, ss, _helpers);
    else if (k == s_kind_forfieldsof)
        return solveForFieldsOf_HtmSWzgv(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_pragma)
        return executeCompilerPragma_63btRQrG(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else if (k == s_kind_empty)
    {
        return createEmpty_zptVo9Nn(s_kind_empty, t_void, s_Target{}, _here);
    }
    else if (k == s_kind_unwrap)
        return createUnwrap_qSQC0HGZ(_here);
    else if (unorderedClassify_SbEkBe2d(k))
        return solveDeclExpr_gcobrRcW(node, ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    else
    {
        fail_pNB52ATY((x7E_r7bhmB7D("TODO: solveNode("_fu, str_k2hK9UHj(k)) + ")."_fu), fu::view<char>{}, ctx, module, _here, ss, _helpers);
    };
}

static void Scope_observeDefects_Quz7lF7R(fu::view<s_ScopeItem> items, const s_Context& ctx, const s_Module& module, const s_Options& options, s_TokenIdx& _here, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers)
{
    bool hasLets = false;
    bool hasPubTemplates = false;
    fu::vec<s_Target> privates {};
    for (int i = 0; i < items.size(); i++)
    {
        const s_Target t = target_7YqD2G7N(items[i]);
        if (!(t.modid != module.modid))
        {
            const s_Overload& o = GET_etmeeocQ(t, ctx, module, _here, ss, _helpers);
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
    {
        const s_SolverNotes note = s_SolverNotes_N_SD_HasStaticInit;
        const s_Module& module_1 = module;
        if (note & options.break_notes)
        {
            fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss, _helpers);
        }
        else
            _notes |= note;

    };
    if (privates && hasPubTemplates)
    {

        {
            const s_SolverNotes note = s_SolverNotes_N_SD_ExternPrivates;
            const s_Module& module_1 = module;
            if (note & options.break_notes)
            {
                fail_pNB52ATY((("`break_notes`: Unwanted event: "_fu + qBAD_bF2G8fJR(str_7NcqyHup(note))) + "."_fu), fu::view<char>{}, ctx, module_1, _here, ss, _helpers);
            }
            else
                _notes |= note;

        };
        for (int i_1 = 0; i_1 < privates.size(); i_1++)
        {
            s_Overload& o = GET_mut_TpIPZdoW(privates[i_1], module, ss);
            o.flags |= s_Flags_F_EXTERN;
        };
    };
}

s_SolverOutput solve_wxNPSagY(const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_TokenIdx _here {};
    s_SolverState ss {};
    s_SolverNotes _notes {};
    s_CurrentFn _current_fn {};
    fu::vec<s_Helpers> _helpers {};
    ss.shortModuleName = (module.modid ? getShortModuleName_Y2f94oTr(module.fname) : fu::str{});
    ss._spec_errors = fu::vec<fu::str> { fu::slate<1, fu::str> { "BUG: Specializer reentry."_fu } };
    ss.TODO_FIX_convert_args = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode{} } };
    ss.TODO_FIX_convert_args.mutref(0).kind = s_kind___convert;
    ss._scope.extended += s_Extended{};
    push_sUG9wPGl(s_HelpersData{}, ss, _helpers);
    if (module.modid)
    {
        ss._scope.imports += module.modid;
        _Scope_import__forceCopy_2NQA1bZW(0, ctx, ss);
    }
    else
        ss._scope = listGlobals_dbXPIQ4v(module);

    const s_Target _current_fnort = s_Target { module.modid, 0 };
    /*MOV*/ s_SolvedNode root = solveNode_A7YoMoA6(s_Node(module.in.parse.root), (*(const s_Type*)fu::NIL), ctx, module, options, _here, ss, _notes, _current_fn, _helpers, _current_fnort);
    if (_current_fn)
        BUG_JWcxU72K("non-empty _current_fn."_fu, ctx, module, _here, ss, _helpers);
    else if (ss._helpers_data[0])
        BUG_JWcxU72K("non-empty _helpers_data[0]."_fu, ctx, module, _here, ss, _helpers);
    else
    {
        Scope_observeDefects_Quz7lF7R(ss._scope.items, ctx, module, options, _here, ss, _notes, _helpers);
        for (int i = 0; i < ss._warnings.size(); i++)
        {
            const s_Warning& w = ss._warnings[i];
            if (w.token)
            {
                _here = w.token;
                fail_pNB52ATY(fu::str(w.message), fu::view<char>{}, ctx, module, _here, ss, _helpers);
            };
        };
        return s_SolverOutput { static_cast<s_SolvedNode&&>(root), Scope_exports_p1TVwdqG(ss._scope, module.modid, ss._field_items, ss._pub_imports), _notes };
    };
}

#endif
