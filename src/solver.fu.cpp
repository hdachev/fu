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
struct s_Import;
struct s_ModuleOrder;
struct s_ModuleOutputs;
struct s_Struct;
struct s_CodegenOutput;
typedef fu::u8 s_CGDefects;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Map_iIYL7rECCBg;
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
struct s_EventsSnap;
struct s_WriteID;
struct s_Ephemeral;
struct s_SpecExtras;
struct s_Map_GCAYRMKeHTh;
struct s_ChildTarget;
struct s_Map_NKYdFuVcECe;
struct s_Warning;
struct s_Map_KlcLuPSIt9g;
struct s_TypeParam;
typedef fu::u8 s_TypeParamFlags;
struct s_CurrentFn;
struct s_Flow;
struct s_Effects;
struct s_Events;
struct s_PrecedingRefArg;
struct s_Usage;
enum s_DeadBreak: fu::u8;
enum s_StaticEval: fu::u8;
struct s_ClosureID;
typedef fu::u8 s_CodeFmt;
struct s_Reorder;
struct s_Intlit;
struct s_NativeHacks;
enum s_ArgQuery: fu::u8;
enum s_ArgRationale: fu::u8;
struct s_UnpackedOffset;
struct s_StructCanon;
enum s_BorrowCheckPass: fu::u8;
struct s_Unsequenced;
struct s_Regions;
fu::str getShortModuleName_UQKMOJue(const fu::str&);
s_Type into_Typename_40rRB6L8(s_Type&&);
s_Target Scope_create_B5w8Fu3I(s_Scope&, s_kind, const fu::str&, const s_Type&, s_Flags, s_SolverStatus, int, const s_Module&);
void Scope_set_5Z1f2QqZ(s_Scope&, const fu::str&, const s_Target&, bool);
void HERE_hEi2PUi5(const s_TokenIdx&, s_TokenIdx&);
static s_SolvedNode solveNode_xfI3NW7o(const s_Node&, const s_Type&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
bool is_never_FfV8Zuj5(const s_Type&);
unsigned is_AssumeNever_WhileSolvingRecursion_GSunVkiW(const s_Type&);
fu::str qBAD_3PsDzMvu(const fu::str&);
[[noreturn]] static fu::never fail_Ulv2WHKu(const fu::str&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Target Target_2jgCJZJY(int, int, int);
static const s_Overload& GET_emAmLQ3D(const s_Target&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
fu::str qKW_3PsDzMvu(const fu::str&);
s_ClosureID tryParseClosureID_54NQWyOV(fu::view<char>, const s_TokenIdx&, const s_Context&);
fu::str qID_3PsDzMvu(const fu::str&);
bool isStruct_jSb6u57z(const s_ValueType&);
const s_Struct& lookupUserType_XVsnoQiv(const s_ValueType&, const s_Context&, const s_Module&);
s_Type tryClear_sliceable_dB532Fe7(const s_ValueType&);
static fu::str humanizeTypeName_RBqu7oGP(const s_Type&, const s_Context&, const s_Module&);
bool TODO_FIX_isArray_40rRB6L8(const s_Type&);
fu::str formatTokenCoord_eAP4tnAP(const s_TokenIdx&, int, const s_Context&);
[[noreturn]] fu::never FAIL_lTxCw5lL(fu::view<char>, const s_TokenIdx&, const s_Context&);
bool isIrrelevant_40rRB6L8(const s_Type&);
fu::str humanizeQuals_3VLS0hFo(unsigned);
unsigned parseRegion(int&, fu::view<char>);
fu::str qLT_3PsDzMvu(const fu::str&);
const s_Token& _token_AZUIslP2(const s_TokenIdx&, const s_Context&);
fu::str formatCodeSnippet_FyeOqRfp(fu::vec<s_TokenIdx>&&, int, s_CodeFmt, const s_Context&);
static fu::str explainWhichFn_9BM72ZzG(const s_Target&, fu::view<fu::vec<s_Target>>, fu::view<char>, s_CodeFmt, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_ScopeMemo Scope_snap_dcsfJwX5(const s_Scope&, fu::view<s_Helpers>);
fu::str packAddrOfFn_aofyNfjF(fu::view<s_Target>);
fu::str hash62_nHEuzL2I(fu::view<char>, int);
static s_Type evalTypeAnnot_NMH9TBVW(const s_Node&, bool, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
s_Type add_ref_XBf6EmLx(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type add_mutref_XBf6EmLx(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type createArray_i5AzHnyb(const s_Type&);
s_Type createSlice_Sedu2ErD(const s_Type&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type relax_typeParam_40rRB6L8(s_Type&&);
s_Type clear_Typename_40rRB6L8(s_Type&&);
fu::str resolveFile_x_aHG8xqFm(const fu::str&, const s_Context&);
void add_U5p6nLOf(s_BitSet&, int);
const fu::vec<int>& lookupTypeImports_XVsnoQiv(const s_ValueType&, const s_Context&, const s_Module&);
int modidOfOrigin_u9sdbuWn(const s_Type&);
bool has_QTGTghRU(const s_BitSet&, int);
bool add_once_U5p6nLOf(s_BitSet&, int);
s_Target target_NWTdzsfF(const s_ScopeItem&);
s_Target search_KfdOrUQd(const s_Target&, int&);
s_Target search_ihIw5OEs(fu::view_mut<s_ScopeItem>, fu::view<char>, int&, fu::view<s_ScopeSkip>, bool&, fu::view<s_Target>, fu::view<s_ScopeItem>);
s_Target search_yfyUVvrQ(fu::view<s_ScopeItem>, fu::view<char>, int&);
static bool couldRetype_gb3b8CD9(const s_SolvedNode&, const s_SolverState&);
static const s_Type& Scope_lookupType_nf7me08O(const fu::str&, s_Flags, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
bool is_arithmetic_3t4EwFeQ(const s_ValueType&);
s_Intlit Intlit_sNwIFkW3(fu::view<char>);
bool is_primitive_3t4EwFeQ(const s_ValueType&);
int basePrimPrefixLen_OaQVyIZB(fu::view<char>);
const s_Struct& tryLookupUserType_XVsnoQiv(const s_ValueType&, const s_Context&, const s_Module&);
s_Type clear_refs_40rRB6L8(s_Type&&);
s_Type definitType_hoadAQC0(s_Type&&, const s_TokenIdx&, const s_Context&);
static s_Type tryRetyping_omCvj6H0(const s_SolvedNode&, const s_Type&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
s_Type type_trySuper_2nNLpyR4(const s_Type&, const s_Type&, bool, const s_TokenIdx&, const s_Context&);
void ref_anonymize_ucOr4Guq(s_Type&);
fu::str cleanID_j6ljQymd(const fu::str&);
s_Type tryClear_ref_hoadAQC0(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_mutref_hoadAQC0(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_array_40rRB6L8(const s_Type&);
static bool trySolveTypeParams_ES9vPDa7(const s_Node&, s_Type&&, fu::vec<s_Warning>&, bool, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
bool isAssignable_v8EzC34Q(const s_Type&, const s_Type&, bool, bool, const s_TokenIdx&, const s_Context&);
fu::view<char> tryGetPattern_sFkr07K7(fu::view<char>);
s_Target parseGlobal_qtvefzpE(fu::view<char>, int&);
bool scan(fu::view<char>, char, int&, bool&);
s_ValueType parseType_cWRn30lS(fu::view<char>);
fu::str serializeType_NOIpmQqe(const s_Type&, fu::view<char>);
static void intoTombstone_a1bfOdN8(const s_Target&, s_SolverState&, const s_Module&);
static bool evalTypePattern_VGcTurMu(const s_Node&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
bool is_trivial_XVsnoQiv(const s_ValueType&, const s_Context&, const s_Module&);
bool is_rx_copy_GSunVkiW(const s_Type&);
bool is_bitfield_3t4EwFeQ(const s_ValueType&);
bool is_integral_3t4EwFeQ(const s_ValueType&);
bool is_unsigned_3t4EwFeQ(const s_ValueType&);
bool is_floating_pt_3t4EwFeQ(const s_ValueType&);
bool is_mutref_hoadAQC0(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_enum_3t4EwFeQ(const s_ValueType&);
bool is_flags_3t4EwFeQ(const s_ValueType&);
bool is_reinterpretable_XVsnoQiv(const s_ValueType&, const s_Context&, const s_Module&);
s_Type type_tryIntersect_RYGee21D(const s_Type&, const s_Type&);
void Scope_pop_5cTQENbb(s_Scope&, const s_ScopeMemo&, fu::vec<s_Helpers>&);
bool isAssignableAsArgument_E3uCShzQ(const s_Type&, const s_Type&, bool, const s_TokenIdx&, const s_Context&);
static s_Target tryMatch__mutargs_A8RYaxmX(fu::str&&, s_Reorder&, fu::vec<fu::vec<s_Target>>&, fu::str&, bool, const s_Scope&, fu::view<s_SolvedNode>, s_Flags, const s_Target&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
s_Type add_refs_u1ljuBgp(const s_Type&, s_Type&&);
static void descend_GwAnut0U(const s_Type&, bool, bool, bool, const s_Type&, bool, const s_Type&, const s_SolvedNode&, const s_Scope&, fu::vec<s_Target>&, fu::vec<s_Target>&, int, const s_SolvedNode&, s_Reorder&, fu::vec<fu::vec<s_Target>>&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
static bool applyConversion_4Gb9aRGW(s_SolvedNode&, fu::view<s_Target>, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
bool is_ref_gBx1AgSx(const s_Type&);
static void visitNode_JKLKgnXF(s_SolvedNode&, int, const s_Target&, fu::vec<s_Target>&, const s_Target&, int, int, fu::vec<s_Helpers>&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
bool is_zst_XVsnoQiv(const s_ValueType&, const s_Context&, const s_Module&);
int getFlatCount_XVsnoQiv(const s_ValueType&, const s_Context&, const s_Module&);
s_Lifetime Lifetime_from_LEyvF4Am(int, const s_TokenIdx&, const s_Context&);
static s_SolvedNode CallerNode_SJHMcAaU(const fu::str&, s_Target&&, fu::vec<s_SolvedNode>&&, const s_Reorder&, fu::view<fu::vec<s_Target>>, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
static fu::str qSTACK_implicit_8Y6tWuev(const s_Target&, const s_SolvedNode&, fu::view<char>, const s_Type&, fu::view<s_Target>, s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
fu::str serialize_LBuqoCCv(const s_ClosureID&, const s_TokenIdx&, const s_Context&);
static bool Lifetime_allowsMutrefReturn_aArQuLX0(const s_Lifetime&, int, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Type clear_mutref_40rRB6L8(s_Type&&);
bool hasTemporary_Sd1Oo4TV(const s_Lifetime&);
void Lifetime_add_PKO62rQ1(s_Lifetime&, const s_Lifetime&);
s_Lifetime Lifetime_union_doHetu2L(const s_Lifetime&, const s_Lifetime&);
static void applyRetype_y49lzuvP(s_SolvedNode&, const s_Type&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
bool isRTL_N4q4L7uF(const s_Overload&);
static s_SolvedNode solveLetLike_dontTouchScope_fHqdpLzV(const fu::str&, s_Flags, s_SolvedNode&&, const s_Type&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
bool isAddrOfFn_gBx1AgSx(const s_Type&);
s_Target parseLocalOrGlobal_qtvefzpE(fu::view<char>, int&);
void Scope_set_pOqhE364(fu::vec<s_ScopeItem>&, const fu::str&, const s_Target&, bool);
static fu::str str_cmTVYQgp(const s_SolvedNode&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Lifetime Lifetime_makeShared_PkVF5Di3(const s_Lifetime&);
s_NativeHacks NativeHacks_aylVahSQ(fu::view<char>);
void add_range_y5kfkU4t(s_BitSet&, int);
bool rem_U5p6nLOf(s_BitSet&, int);
s_BitSet& and_not_assign_Brhxxkwh(s_BitSet&, const s_BitSet&);
bool is_rx_resize_GSunVkiW(const s_Type&);
static void visit_WtptXLzE(const s_Lifetime&, s_Lifetime&, bool&, int, bool, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
bool Lifetime_has_62UtfSbx(const s_Lifetime&, int);
static fu::str qSTACK_2AB99c5f(const s_Target&, const s_SolvedNode&, int, fu::view<s_Target>, s_ArgQuery, s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_BitSet negated_zHKqtB3x(const s_BitSet&, int);
s_Lifetime Lifetime_from_OWsbkiDb(int, const s_TokenIdx&, const s_Context&);
bool isPassByValue_3t4EwFeQ(const s_ValueType&);
static fu::str qSTACK_uhExINTi(const s_Target&, const s_SolvedNode&, s_FxMask, fu::view<s_Target>, s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
bool is_void_FfV8Zuj5(const s_Type&);
bool hasAssignment_nLKt53sX(fu::view<char>);
void isRTL_set_Dys3hpLB(s_Overload&, bool);
static bool astChange_Wc5QxhUH(const s_SolvedNode&, const s_SolvedNode&);
void force_relax_p4VopRXr(s_Type&, unsigned);
static fu::vec<s_SolvedNode> solveNodes_OBTKdcXG(fu::view<s_Node>, s_DeadBreak, const s_Type&, const s_Type&, bool, s_StaticEval, bool, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
static void test_node_iOkpABYf(const s_SolvedNode&, s_SolverPass, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, s_TokenIdx&, const s_Context&, const s_Module&);
bool isCanonAssignable_IaeizMuX(fu::view<char>, fu::view<char>);
bool is_zeroes_FfV8Zuj5(const s_Type&);
bool hasStatic_Sd1Oo4TV(const s_Lifetime&);
static void definitWrap_LXMYAWJ8(s_SolvedNode&, const s_Type&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
bool is_boolean_3t4EwFeQ(const s_ValueType&);
bool try_relax_c5Z7RHRf(s_Type&, const s_Type&, unsigned);
static void propagateType_0IjBDgsa(s_SolvedNode&, const s_Type&, unsigned, const s_Helpers&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
s_BitSet& operator|=(s_BitSet&, const s_BitSet&);
[[noreturn]] fu::never BUG_9SZtRVJ0(fu::str&&, const s_TokenIdx&, const s_Context&);
bool propositionOK_hoadAQC0(const s_Type&, const s_TokenIdx&, const s_Context&);
static s_SolvedNode createAnd_w6k6Jw1i(fu::vec<s_SolvedNode>&&, s_Type&&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
s_Type clear_vfacts_40rRB6L8(s_Type&&);
void clear_quDuppI6(s_BitSet&, int);
s_Type USAGE_structUsageFromFieldUsage_AK7SzNqx(s_Type&&, int);
static bool trackUse_oUlJSDNi(const s_Lifetime&, s_BitSet&, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
bool Lifetime_has_NRjdLNHo(const s_Lifetime&, int);
static s_Target doTrySpecialize_mdB4qvQU(int, const s_Target&, const s_Target&, fu::view<s_SolvedNode>, const fu::str&, const s_Reorder&, fu::view<fu::vec<s_Target>>, int, const s_Type&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
static void ensureLazySolved_xqnKwZRS(const s_Target&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
static void cannotCOW_climbParents_pTmHM6bE(const s_Lifetime&, const s_SolvedNode&, const s_TokenIdx&, const s_Target&, const s_Argument&, bool, s_BitSet&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::view<s_Helpers>, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
static bool type_maybeInside_rVMG3iJf(const s_ValueType&, const s_ValueType&, fu::vec<s_StructCanon>&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_StructCanon parseStructCanon_9HOct2P6(fu::view<char>);
const s_Struct& lookupUserType_1TAwTGhV(const s_StructCanon&, const s_Module&, const s_Context&);
static fu::str qSTACK_cow_inside_76yq9Te1(const s_Target&, const s_SolvedNode&, const s_Argument&, const s_TokenIdx&, fu::view<s_Target>, s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
static void cannotCOW_descendChildren_uCjo9Wfc(int, const s_SolvedNode&, const s_TokenIdx&, const s_Target&, const s_Argument&, bool, s_BitSet&, s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, s_TokenIdx&, const s_Context&, const s_Module&);
static int needsHardRisk_YQlGjm4F(int, const s_Overload&, const s_SolvedNode&, const s_Target&, const s_Argument&, bool, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
bool is_sliceable_3t4EwFeQ(const s_ValueType&);
s_Type USAGE_fieldUsageFromStructUsage_gOpgTaZ7(s_Type&&, unsigned, int, int);
static void callarg_trackWrites_w1UMBWbV(const s_Lifetime&, const s_SolverState&, s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
unsigned getMaxUsage_Ew3ru92f(int);
bool USAGE_justOneThing_XyuwAq2h(unsigned, int);
static bool isFieldChain_Y9zjA4WJ(const s_SolvedNode&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Type make_copyable_40rRB6L8(s_Type&&);
static void Lifetime_F_MOVED_FROM_2luwKq5a(const s_Lifetime&, s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
static void trackJustMoved_KGNHJVcq(const s_Lifetime&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Type clear_sliceable_hoadAQC0(const s_Type&, const s_TokenIdx&, const s_Context&);
static bool tryInjectJumps_r0AwQteC(s_SolvedNode&, const s_Helpers&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
void clear_gNKGEQWi(s_BitSet&);
static bool RESOLVE_byAAR_0CZ0X26h(int, int, bool, s_BorrowCheckPass, const s_SolverState&, s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
static void bck_node_4MFkhCFQ(s_SolvedNode&, const s_SolvedNode&, s_BorrowCheckPass, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::view<s_Helpers>, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
s_Lifetime Lifetime_inter_k7qB83TF(const s_Lifetime&, const s_Lifetime&);
bool Lifetime_hasInter_k7qB83TF(const s_Lifetime&, const s_Lifetime&);
static bool checkLoopStart_4pRAGZnL(int, int, const s_SolverState&);
static bool lazySolveStart_djaF7il8(const s_Target&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
static s_SolvedNode __solveStruct_kbXV2I4a(bool, const s_Node&, const s_Target&, bool, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
int popcount_5BwgL1Pz(const s_BitSet&);
fu::str qCODE_3PsDzMvu(const fu::str&);
void appendGlobal_bpRG0scY(fu::str&, const s_Target&);
s_Type initStruct_6PfOvswQ(s_kind, const fu::str&, const fu::str&, s_DeclAsserts, int, fu::view<char>, s_Module&);
s_Struct& lookupUserType_mut_FnbaZnpH(fu::view<char>, s_Module&);
s_Type despeculateStruct_40rRB6L8(s_Type&&);
static fu::str getRecursionError_5ABeQliy(const s_Struct&, const s_Type&, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Intlit Intlit_LmjxY9JB(uint64_t, bool, fu::str&&, bool, bool, uint64_t);
s_Type make_non_copyable_40rRB6L8(s_Type&&);
void USAGE_setMaxUsage_1rUpvgQK(s_Type&, int);
static void visit_57yVGEpD(int, s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
static void walk_e6LfyD0V(s_Node&, fu::view<char>, fu::view<char>, fu::view<char>, fu::view<char>, const s_ScopeItem&);
void bReak_DX6KImTN();
static void flag_H0fafkKX(s_Regions&, const s_Lifetime&, bool, fu::view<s_BitSet>, fu::view<int>, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
static void visit_yIay3ksG(s_SolvedNode&, fu::view<s_BitSet>, fu::view<int>, int&, s_Unsequenced&, s_SolverState&, s_SolverNotes&, fu::view<s_Helpers>, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
bool has_inter_gae63pSm(const s_BitSet&, const s_BitSet&);
s_Scope Scope_exports_KDliHbWi(const s_Scope&, int, const fu::vec<s_ScopeItem>&, const fu::vec<int>&);

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
    s_kind_typecast = 31u,
    s_kind_typeassert = 32u,
    s_kind_typeparam = 33u,
    s_kind_unwrap = 34u,
    s_kind_pragma = 35u,
    s_kind_break = 36u,
    s_kind_return = 37u,
    s_kind_continue = 38u,
    s_kind_import = 39u,
    s_kind_addroffn = 40u,
    s_kind_forfieldsof = 41u,
    s_kind_struct = 42u,
    s_kind_union = 43u,
    s_kind_primitive = 44u,
    s_kind_flags = 45u,
    s_kind_enum = 46u,
    s_kind_members = 47u,
    s_kind_fndef = 48u,
    s_kind_fn = 49u,
    s_kind_fnbranch = 50u,
    s_kind_pattern = 51u,
    s_kind_typeunion = 52u,
    s_kind_typetag = 53u,
    s_kind___relaxed = 54u,
    s_kind___convert = 55u,
    s_kind___preceding_ref_arg = 56u,
    s_kind___no_kind_yet = 57u,
    s_kind___tombstone = 58u,
    s_kind_type = 59u,
    s_kind_var = 60u,
    s_kind_field = 61u,
    s_kind_enumv = 62u,
    s_kind_template = 63u,
    s_kind___native = 64u,
    s_kind_inline = 65u,
};
                                #endif

                                #ifndef DEF_s_Flags
                                #define DEF_s_Flags
inline constexpr s_Flags s_Flags_F_METHOD = 1u;
inline constexpr s_Flags s_Flags_F_OPERATOR = 2u;
inline constexpr s_Flags s_Flags_F_ACCESS = 4u;
inline constexpr s_Flags s_Flags_F_TYPENAME = 8u;
inline constexpr s_Flags s_Flags_F_COMPOUND_ID = 16u;
inline constexpr s_Flags s_Flags_F_WRITTEN_TO = 32u;
inline constexpr s_Flags s_Flags_F_LAX = 64u;
inline constexpr s_Flags s_Flags_F_ARG = 128u;
inline constexpr s_Flags s_Flags_F_COW_INSIDE = 256u;
inline constexpr s_Flags s_Flags_F_MOVED_FROM = 512u;
inline constexpr s_Flags s_Flags_F_CONVERSION = 1024u;
inline constexpr s_Flags s_Flags_F_OPT_ARG = 2048u;
inline constexpr s_Flags s_Flags_F_MUT = 4096u;
inline constexpr s_Flags s_Flags_F_REF = 8192u;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 16384u;
inline constexpr s_Flags s_Flags_F_USING = 32768u;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 65536u;
inline constexpr s_Flags s_Flags_F_SHADOW = 131072u;
inline constexpr s_Flags s_Flags_F_PUB = 262144u;
inline constexpr s_Flags s_Flags_F_EXTERN = 524288u;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 1048576u;
inline constexpr s_Flags s_Flags_F_PREDICATE = 2097152u;
inline constexpr s_Flags s_Flags_F_NAMED_ARGS = 4194304u;
inline constexpr s_Flags s_Flags_F_OOE_RTL = 8388608u;
inline constexpr s_Flags s_Flags_F_REST_ARG = 16777216u;
inline constexpr s_Flags s_Flags_F_RELAXABLE_REF = 33554432u;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 67108864u;
inline constexpr s_Flags s_Flags_F_INLINE = 134217728u;
inline constexpr s_Flags s_Flags_F_LAMBDA = 268435456u;
inline constexpr s_Flags s_Flags_F_INJECTED = 536870912u;

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_F_METHOD
    | s_Flags_F_OPERATOR
    | s_Flags_F_ACCESS
    | s_Flags_F_TYPENAME
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
inline constexpr s_ParseSyntax s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL = s_ParseSyntax(8u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_ALWAYS_DISCARD = s_ParseSyntax(16u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_NOT_AN_EXPRESSION = s_ParseSyntax(32u);

inline constexpr s_ParseSyntax MASK_s_ParseSyntax
    = s_ParseSyntax_PS_ID
    | s_ParseSyntax_PS_PARENS
    | s_ParseSyntax_PS_SEMI
    | s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL
    | s_ParseSyntax_PS_ALWAYS_DISCARD
    | s_ParseSyntax_PS_NOT_AN_EXPRESSION;
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
inline constexpr s_SolverNotes s_SolverNotes_N_DeadArrlit = 512;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadLoopInit = 1024;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadConv = 2048;
inline constexpr s_SolverNotes s_SolverNotes_N_NonTrivAutoCopy = 4096;
inline constexpr s_SolverNotes s_SolverNotes_N_RelaxRespec = 8192;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedImplicit = 16384;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedCall = 32768;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedDefer = 65536;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedTry = 131072;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedAndOr = 262144;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedIfElse = 524288;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedArrlit = 1048576;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedLet = 2097152;
inline constexpr s_SolverNotes s_SolverNotes_N_BckMustSeq = 4194304;
inline constexpr s_SolverNotes s_SolverNotes_N_AARMustSeq = 8388608;
inline constexpr s_SolverNotes s_SolverNotes_N_AARSoftRisk = 16777216;
inline constexpr s_SolverNotes s_SolverNotes_N_MoveMustSeq = 33554432;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_HasStaticInit = 67108864;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_ExternPrivates = 134217728;
inline constexpr s_SolverNotes s_SolverNotes_N_COWRestrict = 268435456;

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

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
{
    uint64_t _packed;
    explicit operator bool() const noexcept
    {
        return false
            || _packed
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu::str uni0n;
    explicit operator bool() const noexcept
    {
        return false
            || uni0n
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

                                #ifndef DEF_s_ScopeItem
                                #define DEF_s_ScopeItem
struct s_ScopeItem
{
    fu::str id;
    uint64_t _packed;
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
    s_Target target;
    s_BitSet may_invalidate;
    s_BitSet may_alias;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || target
            || may_invalidate
            || may_alias
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

                                #ifndef DEF_s_Map_iIYL7rECCBg
                                #define DEF_s_Map_iIYL7rECCBg
struct s_Map_iIYL7rECCBg
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

                                #ifndef DEF_s_Import
                                #define DEF_s_Import
struct s_Import
{
    s_TokenIdx token;
    fu::str value;
    explicit operator bool() const noexcept
    {
        return false
            || token
            || value
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
    fu::str base_dir;
    fu::vec<s_Module> modules;
    fu::vec<int> dep_order;
    s_Map_iIYL7rECCBg files;
    s_Map_iIYL7rECCBg fuzzy;
    s_Context(const s_Context&) = delete;
    s_Context(s_Context&&) = default;
    s_Context& operator=(const s_Context&) = delete;
    s_Context& operator=(s_Context&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || base_dir
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
    fu::vec<s_Import> imports;
    fu::vec<fu::str> warnings;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || imports
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
inline constexpr s_DevOptions s_DevOptions_DEV_CG_LifetimeAnnots = s_DevOptions(32u);

inline constexpr s_DevOptions MASK_s_DevOptions
    = s_DevOptions_DEV_PrintAST
    | s_DevOptions_DEV_PrintCG
    | s_DevOptions_DEV_Parallel
    | s_DevOptions_DEV_ExpectFail
    | s_DevOptions_DEV_DontFoldLiterals
    | s_DevOptions_DEV_CG_LifetimeAnnots;
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

                                #ifndef DEF_s_TypeParamFlags
                                #define DEF_s_TypeParamFlags
inline constexpr s_TypeParamFlags s_TypeParamFlags_TP_isArgSpec = s_TypeParamFlags(1u);
inline constexpr s_TypeParamFlags s_TypeParamFlags_TP_isTypenameArgSpec = s_TypeParamFlags(2u);
inline constexpr s_TypeParamFlags s_TypeParamFlags_TP_needsConsumedTypes = s_TypeParamFlags(4u);

inline constexpr s_TypeParamFlags MASK_s_TypeParamFlags
    = s_TypeParamFlags_TP_isArgSpec
    | s_TypeParamFlags_TP_isTypenameArgSpec
    | s_TypeParamFlags_TP_needsConsumedTypes;
                                #endif

                                #ifndef DEF_s_WriteID
                                #define DEF_s_WriteID
struct s_WriteID
{
    unsigned _locid_and_hash;
    explicit operator bool() const noexcept
    {
        return false
            || _locid_and_hash
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

                                #ifndef DEF_s_Map_GCAYRMKeHTh
                                #define DEF_s_Map_GCAYRMKeHTh
struct s_Map_GCAYRMKeHTh
{
    fu::vec<fu::str> keys;
    fu::vec<s_Type> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Map_NKYdFuVcECe
                                #define DEF_s_Map_NKYdFuVcECe
struct s_Map_NKYdFuVcECe
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

                                #ifndef DEF_s_Map_KlcLuPSIt9g
                                #define DEF_s_Map_KlcLuPSIt9g
struct s_Map_KlcLuPSIt9g
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

                                #ifndef DEF_s_SpecExtras
                                #define DEF_s_SpecExtras
struct s_SpecExtras
{
    fu::vec<s_ScopeItem> scope_items;
    s_Map_GCAYRMKeHTh arg_spec_types;
    explicit operator bool() const noexcept
    {
        return false
            || scope_items
            || arg_spec_types
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
    s_BitSet ever_written;
    int mayEscapeVia;
    s_ExitPaths exitPaths;
    explicit operator bool() const noexcept
    {
        return false
            || used_again
            || ever_written
            || mayEscapeVia
            || exitPaths
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
    s_Map_KlcLuPSIt9g _typeParams;
    s_Target _solvingFnort;
    s_Target _nestingFnort;
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
            || _typeParams
            || _solvingFnort
            || _nestingFnort
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Postdom
                                #define DEF_s_Postdom
struct s_Postdom
{
    s_PostdomSnap snap;
    int parent_loop_start;
    explicit operator bool() const noexcept
    {
        return false
            || snap
            || parent_loop_start
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
    s_TypeParamFlags flags;
    explicit operator bool() const noexcept
    {
        return false
            || matched
            || invariant
            || consumed
            || flags
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
    s_SpecExtras spec_extras;
    fu::vec<int> callers;
    fu::vec<int> calls;
    fu::vec<s_ChildTarget> children;
    s_Map_NKYdFuVcECe specs;
    explicit operator bool() const noexcept
    {
        return false
            || local_of
            || revision
            || scope_memo
            || scope_skip
            || spec_extras
            || callers
            || calls
            || children
            || specs
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
    s_EventsSnap postevt;
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
            || postevt
            || kills
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

                                #ifndef DEF_s_Events
                                #define DEF_s_Events
struct s_Events
{
    s_EventsSnap snap;
    s_BitSet used_in_a_loop;
    fu::vec<s_PrecedingRefArg> preceding_ref_args;
    fu::vec<s_COWInside> cows_inside;
    explicit operator bool() const noexcept
    {
        return false
            || snap
            || used_in_a_loop
            || preceding_ref_args
            || cows_inside
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Flow
                                #define DEF_s_Flow
struct s_Flow
{
    fu::vec<s_Lifetime> rg_parents;
    fu::vec<s_Lifetime> rg_invalidates;
    fu::vec<fu::vec<int>> rg_children;
    fu::vec<s_BitSet> at_soft_risk;
    fu::vec<s_BitSet> at_hard_risk;
    s_BitSet is_arg;
    fu::vec<fu::vec<int>> arg_parents;
    fu::vec<int> arg_targets;
    explicit operator bool() const noexcept
    {
        return false
            || rg_parents
            || rg_invalidates
            || rg_children
            || at_soft_risk
            || at_hard_risk
            || is_arg
            || arg_parents
            || arg_targets
        ;
    }
};
                                #endif

                                #ifndef DEF_s_PrecedingRefArg
                                #define DEF_s_PrecedingRefArg
struct s_PrecedingRefArg
{
    s_TokenIdx callsite_token;
    s_Target target;
    int r;
    int w;
    s_SolvedNode arg;
    explicit operator bool() const noexcept
    {
        return false
            || callsite_token
            || target
            || r
            || w
            || arg
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
    bool TODO_FIX_isInline;
    int TODO_FIX_catches;
    fu::vec<s_Target> now_inlining;
    s_Postdom postdom;
    fu::vec<fu::vec<int>> TODO_FIX_children;
    int TODO_FIX_unique;
    explicit operator bool() const noexcept
    {
        return false
            || out
        ;
    }
};
                                #endif

                                #ifndef DEF_s_DeadBreak
                                #define DEF_s_DeadBreak
enum s_DeadBreak: fu::u8
{
    s_DeadBreak_DeadBreak_Dont = 0u,
    s_DeadBreak_DeadBreak_Always = 1u,
    s_DeadBreak_DeadBreak_Only_WhileSolvingRecursion = 2u,
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

                                #ifndef DEF_s_Reorder
                                #define DEF_s_Reorder
struct s_Reorder
{
    bool applicable;
    fu::vec<int> map;
    explicit operator bool() const noexcept
    {
        return false
            || applicable
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

                                #ifndef DEF_s_ArgRationale
                                #define DEF_s_ArgRationale
enum s_ArgRationale: fu::u8
{
    s_ArgRationale_CantTempCopy_HostArg_Ref = 1u,
    s_ArgRationale_CantTempCopy_HostArg_MutRef = 2u,
    s_ArgRationale_CantTempCopy_HostArg_Implicit = 3u,
    s_ArgRationale_CantTempCopy_FastFn = 4u,
    s_ArgRationale_CantTempCopy_NonCopiable = 5u,
    s_ArgRationale_CantTempCopy_ReturnedFromFn = 6u,
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

                                #ifndef DEF_s_Regions
                                #define DEF_s_Regions
struct s_Regions
{
    s_BitSet locals;
    s_BitSet arguments;
    explicit operator bool() const noexcept
    {
        return false
            || locals
            || arguments
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Unsequenced
                                #define DEF_s_Unsequenced
struct s_Unsequenced
{
    s_Regions writes;
    s_Regions moves;
    s_Regions reads;
    explicit operator bool() const noexcept
    {
        return false
            || writes
            || moves
            || reads
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static s_Helpers push_lQ0cD0js(const s_HelpersData& data, s_SolverState& ss, fu::vec<s_Helpers>& _helpers)
{
    const s_Helpers ret = s_Helpers { ss._helpers_data.size() };
    _helpers += s_Helpers(ret);
    ss._helpers_data += s_HelpersData(data);
    return ret;
}

static void _Scope_import__forceCopy_hAHAQV1M(const int modid, s_SolverState& ss, const s_Context& ctx)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    ss._scope.items += fu::get_view_start0(s.items, s.pub_items);
    ss._scope.converts += fu::get_view_start0(s.converts, s.pub_cnvrts);
}

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
extern const s_Type t_i8;
                                #endif

static s_Target createRawTypedef_rDHIpaKD(const fu::str& id, s_Type&& type, const s_Flags flags, const fu::str& name, const s_SolverStatus status, s_SolverState& ss, const s_Module& module)
{
    type = into_Typename_40rRB6L8(s_Type(type));
    const s_Target target = Scope_create_B5w8Fu3I(ss._scope, s_kind_type, (name ? name : id), type, flags, status, 0, module);
    if (id)
        Scope_set_5Z1f2QqZ(ss._scope, id, target, !!(flags & s_Flags_F_SHADOW));

    return target;
}

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
extern const s_Type t_i16;
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
extern const s_Type t_i32;
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
extern const s_Type t_i64;
                                #endif

                                #ifndef DEF_t_i128
                                #define DEF_t_i128
extern const s_Type t_i128;
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8;
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
extern const s_Type t_u16;
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
extern const s_Type t_u32;
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
extern const s_Type t_u64;
                                #endif

                                #ifndef DEF_t_u128
                                #define DEF_t_u128
extern const s_Type t_u128;
                                #endif

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32;
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
extern const s_Type t_f64;
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void;
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never;
                                #endif

static bool isTypeDecl_4G8nHCpA(const s_kind kind)
{
    return (kind == s_kind_struct) || (kind == s_kind_union) || (kind == s_kind_primitive) || (kind == s_kind_enum) || (kind == s_kind_flags);
}

static int unorderedClassify_j0FXxmzA(const s_kind kind)
{
    if (kind == s_kind_fn)
        return 1;
    else if (isTypeDecl_4G8nHCpA(kind))
        return 10;
    else
        return 0;

}

                                #ifndef DEF_str_0xO8zo50Duf
                                #define DEF_str_0xO8zo50Duf
inline fu::str str_0xO8zo50(const s_SolverNotes n)
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

static bool isFnOrType_ebyzFAhm(const s_Helpers& h, const s_SolverState& ss)
{
    return !!s_HelpersMask((ss._helpers_data[h.index].mask & s_HelpersMask((s_HelpersMask_HM_Function | s_HelpersMask_HM_Struct))));
}

                                #ifndef DEF_str_oZEOu4M5y04
                                #define DEF_str_oZEOu4M5y04
inline fu::str str_oZEOu4M5(const s_SolverPass n)
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

                                #ifndef DEF_x7E_gCeFmDFw0L8
                                #define DEF_x7E_gCeFmDFw0L8
inline fu::str x7E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_max_mJGU9byOmI4
                                #define DEF_max_mJGU9byOmI4
inline int max_mJGU9byO(const int a, const int b)
{
    if ((a >= b))
        return a;
    else
        return b;

}
                                #endif

[[noreturn]] static fu::never BUG_V2MSl2gg(/*MOV*/ fu::str&& reason, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fail_Ulv2WHKu(("COMPILER BUG:\n\n\t"_fu + (reason ? static_cast<fu::str&&>(reason) : "Assertion failed."_fu)), ss, _helpers, _here, ctx, module);
}

static bool isLocal_iPYw45vv(const s_Target& target)
{
    return !!int(unsigned(((target._packed >> 40ull) & 0xfffffull)));
}

static s_Target parent_T9Vrzynx(const s_Target& target, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (isLocal_iPYw45vv(target))
        return Target_2jgCJZJY(module.modid, int(unsigned(((target._packed >> 20ull) & 0xfffffull))), 0);
    else
        BUG_V2MSl2gg("Using .parent on a non-local"_fu, ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_str_ZGqrvxJv2z0
                                #define DEF_str_ZGqrvxJv2z0
inline fu::str str_ZGqrvxJv(const s_kind n)
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
    else if (n == s_kind___preceding_ref_arg)
        return "__preceding_ref_arg"_fu;
    else if (n == s_kind___no_kind_yet)
        return "__no_kind_yet"_fu;
    else if (n == s_kind___tombstone)
        return "__tombstone"_fu;
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

static fu::str human_nPzEVTlg(const fu::str& id, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target t = tryParseClosureID_54NQWyOV(id, _here, ctx).target;
    if (!t)
        return fu::str(id);
    else
        return (GET_emAmLQ3D(parent_T9Vrzynx(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module).name + ":"_fu) + GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).name;

}

static fu::str str_3AjvLtSQ(const s_Overload& o, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_kind kind = o.kind;
    fu::str prefix = str_ZGqrvxJv(kind);
    if (kind == s_kind_var)
    {
        fu::str _0 {};
        prefix = ((_0 = (((((o.flags & s_Flags_F_INJECTED) ? "injected "_fu : fu::str{}) + ((o.flags & s_Flags_F_IMPLICIT) ? "implicit "_fu : fu::str{})) + ((o.flags & s_Flags_F_REF) ? "ref "_fu : fu::str{})) + ((o.flags & s_Flags_F_ARG) ? "arg "_fu : fu::str{}))) ? static_cast<fu::str&&>(_0) : "var "_fu);
        prefix.pop();
    };
    return (qKW_3PsDzMvu(prefix) + " "_fu) + qID_3PsDzMvu(human_nPzEVTlg(o.name, ss, _helpers, _here, ctx, module));
}

                                #ifndef DEF_x7E_gCeFmDFw0L8
                                #define DEF_x7E_gCeFmDFw0L8
inline fu::str x7E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static const s_Overload& GET_emAmLQ3D(const s_Target& target, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int modid = int(unsigned((target._packed & 0xfffffull)));
    const int globid = int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
    const int locid = int(unsigned(((target._packed >> 40ull) & 0xfffffull)));
    const s_Scope& _scope = ((modid == module.modid) ? ss._scope : ctx.modules[modid].out.solve.scope);
    if (locid)
    {
        if ((_scope.extended.size() <= globid))
            BUG_V2MSl2gg("Invalid local target -modid."_fu, ss, _helpers, _here, ctx, module);
        else
        {
            fu::view<s_Overload> locals = _scope.extended[globid].locals;
            if (locals.size() < locid)
                BUG_V2MSl2gg(x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("Out of range local target from: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(parent_T9Vrzynx(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + "\n\tlocals="_fu), fu::i64dec(locals.size())) + "\n\tlocal="_fu), fu::i64dec(locid)), ss, _helpers, _here, ctx, module);
            else
                return locals[(locid - 1)];

        };
    }
    else
        return _scope.overloads[(globid - 1)];

}

                                #ifndef DEF_x7Ex3D_vuSW0Q9ulEj
                                #define DEF_x7Ex3D_vuSW0Q9ulEj
inline fu::str& x7Ex3D_vuSW0Q9u(fu::str& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

                                #ifndef DEF_unless_oob_V6ixZvDgVTl
                                #define DEF_unless_oob_V6ixZvDgVTl
inline const s_Extended& unless_oob_V6ixZvDg(fu::view<s_Extended> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_Extended*)fu::NIL);

}
                                #endif

static const s_Extended& EXT_7eVl0gy6(const s_Target& target, const s_SolverState& ss, const s_Context& ctx, const s_Module& module)
{
    if (int(unsigned(((target._packed >> 40ull) & 0xfffffull))))
        return (*(const s_Extended*)fu::NIL);
    else
    {
        const int modid = int(unsigned((target._packed & 0xfffffull)));
        const int globid = int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
        const s_Scope& _scope = ((modid == module.modid) ? ss._scope : ctx.modules[modid].out.solve.scope);
        return unless_oob_V6ixZvDg(_scope.extended, globid);
    };
}

                                #ifndef DEF_x3Cx3E_zFPXQHIyFS9
                                #define DEF_x3Cx3E_zFPXQHIyFS9
inline int x3Cx3E_zFPXQHIy(const s_VFacts a, const s_VFacts b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_6K8lyb3JRba
                                #define DEF_x3Cx3E_6K8lyb3JRba
inline int x3Cx3E_6K8lyb3J(const unsigned a, const unsigned b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_mJGU9byOmI4
                                #define DEF_x3Cx3E_mJGU9byOmI4
inline int x3Cx3E_mJGU9byO(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sOVQcK2JOH3
                                #define DEF_x3Cx3E_sOVQcK2JOH3
inline int x3Cx3E_sOVQcK2J(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_gCeFmDFw0L8
                                #define DEF_x3Cx3E_gCeFmDFw0L8
inline int x3Cx3E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_mJGU9byO(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_sOVQcK2J(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Cx3E_s8jaxngdfJ9
                                #define DEF_x3Cx3E_s8jaxngdfJ9
inline int x3Cx3E_s8jaxngd(const s_ValueType& a, const s_ValueType& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_6K8lyb3J(a.quals, b.quals)))
        return cmp;
    else if ((cmp = x3Cx3E_gCeFmDFw(a.canon, b.canon)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_YBtWEgFnAid
                                #define DEF_x3Cx3E_YBtWEgFnAid
inline int x3Cx3E_YBtWEgFn(const s_Lifetime& a, const s_Lifetime& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_gCeFmDFw(a.uni0n, b.uni0n)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_JfI1olDoSg3
                                #define DEF_x3Cx3E_JfI1olDoSg3
inline int x3Cx3E_JfI1olDo(const s_Type& a, const s_Type& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_zFPXQHIy(a.vfacts, b.vfacts)))
        return cmp;
    else
    {
        if ((cmp = x3Cx3E_s8jaxngd(a.vtype, b.vtype)))
            return cmp;
        else if ((cmp = x3Cx3E_YBtWEgFn(a.lifetime, b.lifetime)))
            return cmp;

        return 0;
    };
}
                                #endif

                                #ifndef DEF_x3Dx3D_JfI1olDoSg3
                                #define DEF_x3Dx3D_JfI1olDoSg3
inline bool operator==(const s_Type& a, const s_Type& b)
{
    return !x3Cx3E_JfI1olDo(a, b);
}
                                #endif

                                #ifndef DEF_x3Dx3D_gCeFmDFw0L8
                                #define DEF_x3Dx3D_gCeFmDFw0L8
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

static fu::str humanizeTypeName_RBqu7oGP(const s_Type& type, const s_Context& ctx, const s_Module& module)
{
    if (isStruct_jSb6u57z(type.vtype))
        return fu::str(lookupUserType_XVsnoQiv(type.vtype, ctx, module).name);
    else if (s_Type itemType = tryClear_sliceable_dB532Fe7(type.vtype))
    {
        if (itemType == t_byte)
            return "string"_fu;
        else
            return humanizeTypeName_RBqu7oGP(itemType, ctx, module) + (TODO_FIX_isArray_40rRB6L8(type) ? "[]"_fu : "[:]"_fu);

    }
    else if (type.vtype.canon == t_bool.vtype.canon)
        return "bool"_fu;
    else if (type.vtype.canon == t_byte.vtype.canon)
        return "byte"_fu;
    else
        return fu::str(type.vtype.canon);

}

static fu::str fail_appendStack_t2nNPGED(/*MOV*/ fu::str&& reason, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int callstack = 0;
    s_SolverPass pass0 {};
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (isFnOrType_ebyzFAhm(h, ss))
        {
            if (!callstack++)
                reason += "\n"_fu;

            s_SolverPass _0 {};
            fu::str pass = (((_0 = pass0, (_0 != (pass0 = ss._helpers_data[h.index].pass))) || (callstack == 1)) ? x7E_gCeFmDFw(str_oZEOu4M5(ss._helpers_data[h.index].pass), " "_fu) : fu::str{});
            reason += (fu::get_view_start0("\n                "_fu, max_mJGU9byO((17 - pass.size()), 1)) + pass);
            const s_Overload& o = GET_emAmLQ3D(ss._helpers_data[h.index].target, ss, _helpers, _here, ctx, module);
            x7Ex3D_vuSW0Q9u(reason, str_3AjvLtSQ(o, ss, _helpers, _here, ctx, module));

            {
                fu::str argsOut = ""_fu;
                fu::view<s_Argument> args = EXT_7eVl0gy6(ss._helpers_data[h.index].target, ss, ctx, module).args;
                for (int i_1 = 0; i_1 < args.size(); i_1++)
                {
                    if (!argsOut)
                        argsOut += "("_fu;
                    else
                        argsOut += ", "_fu;

                    argsOut += humanizeTypeName_RBqu7oGP(args[i_1].type, ctx, module);
                };
                if (argsOut)
                    reason += (argsOut += ")"_fu);

            };
            const s_TokenIdx& token = o.solved.token;
            if (token)
                reason += (" at "_fu + formatTokenCoord_eAP4tnAP(token, module.modid, ctx));

        };
    };
    return static_cast<fu::str&&>(reason);
}

[[noreturn]] static fu::never fail_Ulv2WHKu(const fu::str& reason, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (reason)
        FAIL_lTxCw5lL(fail_appendStack_t2nNPGED(fu::str(reason), ss, _helpers, _here, ctx, module), _here, ctx);
    else
        BUG_V2MSl2gg("fail(): No reason."_fu, ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_grow_if_oob_fnaTFAcUjJ2
                                #define DEF_grow_if_oob_fnaTFAcUjJ2
inline s_Warning& grow_if_oob_fnaTFAcU(fu::vec<s_Warning>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_q_TAGS
                                #define DEF_q_TAGS
extern const unsigned q_TAGS;
                                #endif

                                #ifndef DEF_q_USAGE
                                #define DEF_q_USAGE
extern const unsigned q_USAGE;
                                #endif

                                #ifndef DEF_x21x3D_YBtWEgFnAid
                                #define DEF_x21x3D_YBtWEgFnAid
inline bool operator!=(const s_Lifetime& a, const s_Lifetime& b)
{
    return !!x3Cx3E_YBtWEgFn(a, b);
}
                                #endif

static s_Target nested_Xjq8iMzb(const int index, const s_Target& from)
{
    if (index > 0)
        return Target_2jgCJZJY(int(unsigned((from._packed & 0xfffffull))), int(unsigned(((from._packed >> 20ull) & 0xfffffull))), index);
    else
        fu_ASSERT();

}

static s_Target nested_nWBn0vig(const int index, const s_SolverState& ss)
{
    return nested_Xjq8iMzb(index, ss._nestingFnort);
}

inline static void l_27_5_7KusZueV(const int locid, const bool isStatic, const bool isTemp, const bool isArgIdx, const int argidx, fu::str& str, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (str)
        str += "|"_fu;

    str += (locid ? str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module) : (isStatic ? qLT_3PsDzMvu("static"_fu) : (isTemp ? qLT_3PsDzMvu("temp"_fu) : (isArgIdx ? x7E_gCeFmDFw("arg#"_fu, fu::i64dec(argidx)) : BUG_V2MSl2gg("invalid region"_fu, ss, _helpers, _here, ctx, module)))));
}

                                #ifndef DEF_Lifetime_each_XMNbRemYF6b
                                #define DEF_Lifetime_each_XMNbRemYF6b
inline void Lifetime_each_XMNbRemY(const s_Lifetime& lifetime, fu::str& str, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_5_7KusZueV(int(((r & 1u) ? 0u : (r >> 1u))), (r == 0u), (r == 1u), ((r & 3u) == 3u), int(((r & 1u) ? (r >> 2u) : 0u)), str, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static fu::str str_cj9SdYXi(const s_Lifetime& lifetime, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::str str = ""_fu;
    Lifetime_each_XMNbRemY(lifetime, str, ss, _helpers, _here, ctx, module);
    return /*NRVO*/ str;
}

                                #ifndef DEF_str_RakViOYyDX0
                                #define DEF_str_RakViOYyDX0
inline fu::str str_RakViOYy(const s_VFacts n)
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

static fu::str humanizeType_adoPoPLu(const s_Type& type, bool lt, bool no_quals, bool usage, const s_Type& diff, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (diff)
    {
        no_quals = ((type.vtype.quals & q_TAGS) == (diff.vtype.quals & q_TAGS));
        usage = ((type.vtype.quals & q_USAGE) != (diff.vtype.quals & q_USAGE));
        lt = (type.lifetime != diff.lifetime);
    };
    /*MOV*/ fu::str result = humanizeTypeName_RBqu7oGP(type, ctx, module);
    if (!no_quals)
        result += humanizeQuals_3VLS0hFo(type.vtype.quals);

    if (usage)
    {
        unsigned usage_1 = (type.vtype.quals & q_USAGE);
        int offset = -3;
        result += " { "_fu;
        while (usage_1)
        {
            if (usage_1 & 1u)
                result += (x7E_gCeFmDFw("#"_fu, fu::i64dec(offset)) + " "_fu);

            usage_1 >>= 1u;
            offset++;
        };
        result += "}"_fu;
    };
    if (lt && type.lifetime)
    {
        result += x7E_gCeFmDFw("`"_fu, str_cj9SdYXi(type.lifetime, ss, _helpers, _here, ctx, module));
    };
    if (type.vfacts)
        result += x7E_gCeFmDFw(" "_fu, str_RakViOYy(type.vfacts));

    return /*NRVO*/ result;
}

static const s_TokenIdx& token_MUOdvjka(const s_Target& target, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_TokenIdx* _0;
    return *(_0 = &(EXT_7eVl0gy6(target, ss, ctx, module).tEmplate.node.token)) ? *_0 : GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).solved.token;
}

static s_TokenIdx tryBacktrack_JWT7n8Gs(const s_TokenIdx& from, fu::view<char> v, const s_kind k, const s_Context& ctx)
{
    s_TokenIdx here { from };
    while (here.tokidx-- > 0)
    {
        const s_Token& token = _token_AZUIslP2(here, ctx);
        if (token.kind != k)
            break;
        else if (token.value == v)
            return here;

    };
    return s_TokenIdx{};
}

static fu::str addr_and_snippet_LWjqt07q(const s_TokenIdx& token, const s_CodeFmt fmt, fu::view<char> backtrack, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::vec<s_TokenIdx> tokens = fu::vec<s_TokenIdx> { fu::slate<1, s_TokenIdx> { s_TokenIdx(token) } };
    if (backtrack)
    {
        const s_TokenIdx other = tryBacktrack_JWT7n8Gs(token, backtrack, s_kind_id, ctx);
        if (other)
        {
            tokens.unshift(s_TokenIdx(other));
        };
    };
    return formatCodeSnippet_FyeOqRfp(static_cast<fu::vec<s_TokenIdx>&&>(tokens), module.modid, fmt, ctx);
}

                                #ifndef DEF_x3Cx3E_62dxnA0Dbb1
                                #define DEF_x3Cx3E_62dxnA0Dbb1
inline int x3Cx3E_62dxnA0D(const uint64_t a, const uint64_t b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_LngZZmWAHm3
                                #define DEF_x3Cx3E_LngZZmWAHm3
inline int x3Cx3E_LngZZmWA(const s_Target& a, const s_Target& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_62dxnA0D(a._packed, b._packed)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x21x3D_LngZZmWAHm3
                                #define DEF_x21x3D_LngZZmWAHm3
inline bool operator!=(const s_Target& a, const s_Target& b)
{
    return !!x3Cx3E_LngZZmWA(a, b);
}
                                #endif

static fu::str str_N3Nir9Bo(const s_Argument& arg, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::str prefix = ((((arg.flags & s_Flags_F_INJECTED) ? "injected "_fu : fu::str{}) + ((arg.flags & s_Flags_F_IMPLICIT) ? "implicit "_fu : fu::str{})) + ((arg.flags & s_Flags_F_REF) ? "ref "_fu : fu::str{}));
    prefix += "arg"_fu;
    fu::str fn = ((arg.target && (arg.target != _current_fn.out.target)) ? (qID_3PsDzMvu(human_nPzEVTlg(GET_emAmLQ3D(parent_T9Vrzynx(arg.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module).name, ss, _helpers, _here, ctx, module)) + ":"_fu) : fu::str{});
    return ((qKW_3PsDzMvu(prefix) + " "_fu) + fn) + qID_3PsDzMvu(human_nPzEVTlg(arg.name, ss, _helpers, _here, ctx, module));
}

static fu::str explainConversion_MC5S46hy(fu::view<s_Target> path, fu::view<char> prefix, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::str res = ""_fu;
    for (int i = 0; i < path.size(); i++)
    {
        if (!i)
            res += "\n"_fu;

        res += "\t    "_fu;
        if (!i && prefix)
            res += prefix;

        res += (qKW_3PsDzMvu("using"_fu) + " "_fu);
        res += explainWhichFn_9BM72ZzG(path[i], fu::view<fu::vec<s_Target>>{}, "using"_fu, s_CodeFmt_NoContext, ss, _current_fn, _helpers, _here, ctx, module);
    };
    return /*NRVO*/ res;
}

static fu::str explainWhichFn_9BM72ZzG(const s_Target& t, fu::view<fu::vec<s_Target>> conversions, fu::view<char> backtrack, const s_CodeFmt fmt, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::str result = str_3AjvLtSQ(GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module);
    if (GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).flags & s_Flags_F_INJECTED)
        result += "\n"_fu;
    else
    {
        result += (" at "_fu + addr_and_snippet_LWjqt07q(token_MUOdvjka(t, ss, _helpers, _here, ctx, module), fmt, backtrack, ctx, module));
        for (int i = 0; i < conversions.size(); i++)
        {
            fu::view<s_Target> c = conversions[i];
            if (c)
            {
                result += explainConversion_MC5S46hy(c, ((EXT_7eVl0gy6(t, ss, ctx, module).args.size() > 1) ? x7E_gCeFmDFw(str_N3Nir9Bo(EXT_7eVl0gy6(t, ss, ctx, module).args[i], ss, _current_fn, _helpers, _here, ctx, module), ": "_fu) : fu::str{}), ss, _current_fn, _helpers, _here, ctx, module);
            };
        };
    };
    return /*NRVO*/ result;
}

static s_StaticEval tryAbstractEvalAsBool_OmcawlSX(const s_SolvedNode& cond, const bool voidOk, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (cond.type.vfacts & s_VFacts((s_VFacts_AlwaysTrue | s_VFacts_AlwaysFalse)))
    {
        if (!s_VFacts((cond.type.vfacts & s_VFacts_AlwaysTrue)))
            return s_StaticEval_SE_False;
        else if (!s_VFacts((cond.type.vfacts & s_VFacts_AlwaysFalse)))
            return s_StaticEval_SE_True;
        else
            BUG_V2MSl2gg("Expression both AlwaysTrue and AlwaysFalse."_fu, ss, _helpers, _here, ctx, module);

    }
    else if (isIrrelevant_40rRB6L8(cond.type))
    {
        if (!(voidOk))
        {
            const s_TokenIdx& token = _here;
            int BL_7_v {};
            s_Warning& a = grow_if_oob_fnaTFAcU(ss._warnings, (__extension__ (
            {
                const s_Target& t = _current_fn.out.target;
                BL_7_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
            (void)0;}), BL_7_v));
            if (!(a))
            {
                a = s_Warning { s_TokenIdx(token), fail_appendStack_t2nNPGED((("Condition is "_fu + humanizeType_adoPoPLu(cond.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + ((cond.kind == s_kind_call) ? (", returned from "_fu + explainWhichFn_9BM72ZzG(cond.target, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn, _helpers, _here, ctx, module)) : ", not meaningful in a boolean context."_fu)), ss, _helpers, _here, ctx, module) };
            };
        };
        return s_StaticEval_SE_False;
    }
    else
        return s_StaticEval_SE_Unknown;

}

                                #ifndef DEF_unless_oob_OUCWkWgUQT4
                                #define DEF_unless_oob_OUCWkWgUQT4
inline const s_Ephemeral& unless_oob_OUCWkWgU(fu::view<s_Ephemeral> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_Ephemeral*)fu::NIL);

}
                                #endif

static const s_Ephemeral& EPH_rI6gXXKb(const s_Target& target, const s_SolverState& ss, const s_Module& module)
{
    if (int(unsigned((target._packed & 0xfffffull))) == module.modid)
        return unless_oob_OUCWkWgU(ss._ephemeral, int(unsigned(((target._packed >> 20ull) & 0xfffffull))));
    else
        return (*(const s_Ephemeral*)fu::NIL);

}

                                #ifndef DEF_grow_if_oob_XunIdQNdBjd
                                #define DEF_grow_if_oob_XunIdQNdBjd
inline s_Ephemeral& grow_if_oob_XunIdQNd(fu::vec<s_Ephemeral>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static s_Ephemeral& EPH_mut_Y1BUOWP9(const int index, s_SolverState& ss)
{
    return grow_if_oob_XunIdQNd(ss._ephemeral, index);
}

static s_Ephemeral& EPH_mut_i08XmyeL(const s_Target& target, s_SolverState& ss, const s_Module& module)
{
    if (int(unsigned((target._packed & 0xfffffull))) == module.modid)
        return EPH_mut_Y1BUOWP9(int(unsigned(((target._packed >> 20ull) & 0xfffffull))), ss);
    else
        fu_ASSERT();

}

                                #ifndef DEF_x3Cx3E_epTRPTjENcj
                                #define DEF_x3Cx3E_epTRPTjENcj
inline int x3Cx3E_epTRPTjE(const s_TokenIdx& a, const s_TokenIdx& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_mJGU9byO(a.modid, b.modid)))
        return cmp;
    else if ((cmp = x3Cx3E_mJGU9byO(a.tokidx, b.tokidx)))
        return cmp;

    return 0;
}
                                #endif

                                #ifndef DEF_x21x3D_epTRPTjENcj
                                #define DEF_x21x3D_epTRPTjENcj
inline bool operator!=(const s_TokenIdx& a, const s_TokenIdx& b)
{
    return !!x3Cx3E_epTRPTjE(a, b);
}
                                #endif

static bool is_SPECFAIL_EveZl8g6(const s_Target& target)
{
    return !!(target._packed & 0x8000000000000000ull);
}

static s_Overload& GET_mut_uE8Nb6mH(const s_Target& target, s_SolverState& ss, const s_Module& module)
{
    const int globid = int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
    const int locid = int(unsigned(((target._packed >> 40ull) & 0xfffffull)));
    if ((globid > 0) && (int(unsigned((target._packed & 0xfffffull))) == module.modid))
    {
        if (locid)
            return ss._scope.extended.mutref(globid).locals.mutref((locid - 1));
        else
            return ss._scope.overloads.mutref((globid - 1));

    }
    else
        fu_ASSERT();

}

                                #ifndef DEF_steal_lZF84WJGokf
                                #define DEF_steal_lZF84WJGokf
inline fu::vec<int> steal_lZF84WJG(fu::vec<int>& v)
{
    /*MOV*/ fu::vec<int> ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

static s_Target localfn_PcV0GIQj(const int index, const s_Module& module)
{
    return Target_2jgCJZJY(module.modid, index, 0);
}

                                #ifndef DEF_rem_jzOp5jol7cb
                                #define DEF_rem_jzOp5jol7cb
inline bool rem_jzOp5jol(fu::vec<int>& keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_mJGU9byO(keys[i], item);
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

                                #ifndef DEF_grow_if_oob_fu2c8orlZra
                                #define DEF_grow_if_oob_fu2c8orlZra
inline s_Extended& grow_if_oob_fu2c8orl(fu::vec<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static s_Extended& EXT_mut_JHD4gxS4(const s_Target& target, s_SolverState& ss, const s_Module& module)
{
    if (int(unsigned((target._packed & 0xfffffull))) == module.modid)
    {
        return grow_if_oob_fu2c8orl(ss._scope.extended, int(unsigned(((target._packed >> 20ull) & 0xfffffull))));
    }
    else
        fu_ASSERT();

}

static void resetChild_PwSXgWl7(const s_Target& target, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(is_SPECFAIL_EveZl8g6(target) || (GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).kind == s_kind_template)))
    {
        s_SolverStatus& status = GET_mut_uE8Nb6mH(target, ss, module).status;
        if (status & s_SolverStatus_SS_LAZY)
        {
            status &= s_SolverStatus(~s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_FINALIZED)) | s_SolverStatus_SS_DIRTY)));
            fu::vec<int> calls = steal_lZF84WJG(EPH_mut_i08XmyeL(target, ss, module).calls);
            for (int i = 0; i < calls.size(); i++)
            {
                const s_Target callee = localfn_PcV0GIQj(calls[i], module);
                if (!(rem_jzOp5jol(EPH_mut_i08XmyeL(callee, ss, module).callers, int(unsigned(((target._packed >> 20ull) & 0xfffffull))))))
                    BUG_V2MSl2gg(x7E_gCeFmDFw("resetChild: Missing in callers on "_fu, str_3AjvLtSQ(GET_emAmLQ3D(callee, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

            };
            fu::vec<int> callers = steal_lZF84WJG(EPH_mut_i08XmyeL(target, ss, module).callers);
            for (int i_1 = 0; i_1 < callers.size(); i_1++)
            {
                const s_Target caller = localfn_PcV0GIQj(callers[i_1], module);
                if (!(rem_jzOp5jol(EPH_mut_i08XmyeL(caller, ss, module).calls, int(unsigned(((target._packed >> 20ull) & 0xfffffull))))))
                    BUG_V2MSl2gg(x7E_gCeFmDFw("resetChild: Missing in calls on "_fu, str_3AjvLtSQ(GET_emAmLQ3D(caller, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

            };
            fu::vec<s_Argument>& args = EXT_mut_JHD4gxS4(target, ss, module).args;
            for (int i_2 = args.size(); i_2-- > 0; )
            {
                if (args[i_2].flags & s_Flags_F_INJECTED)
                    args.splice(i_2, 1);

            };
            if (EPH_rI6gXXKb(target, ss, module).calls)
            {
                BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
            };
        }
        else
            BUG_V2MSl2gg(x7E_gCeFmDFw("resetChild: not SS_LAZY: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    };
}

inline static void l_27_28_MkYk0QpB(const s_Target& target, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    resetChild_PwSXgWl7(target, ss, _helpers, _here, ctx, module);
}

static s_Template createTemplate_OUGBkyoP(const s_Node& node, const s_SolverState& ss, const s_CurrentFn& _current_fn)
{
    return s_Template { s_Node(node), fu::vec<int>((!_current_fn ? ss._scope.imports : (*(const fu::vec<int>*)fu::NIL))) };
}

inline static void l_27_27_GQ97f8co(const s_Target& target, const s_Node& node, const s_SolverStatus status, s_SolverState& ss, const s_CurrentFn& _current_fn, const s_Module& module)
{
    s_Overload& o = GET_mut_uE8Nb6mH(target, ss, module);
    o.kind = s_kind_fn;
    o.name = ("prep "_fu + node.value);
    o.flags = node.flags;
    o.status = status;
    s_Extended& ext = EXT_mut_JHD4gxS4(target, ss, module);
    ext.tEmplate = createTemplate_OUGBkyoP(node, ss, _current_fn);
    ext.min = int(0x7fffffffu);
    ext.max = 0;
}

inline static s_Target getOrCreateChild_owZe9oi3(const s_Node& node, const s_Node& node_1, const s_SolverStatus status, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target& parent = _current_fn.out.target;
    if (parent)
    {
        const unsigned parent_rev = EPH_rI6gXXKb(parent, ss, module).revision;
        fu::view_mut<s_ChildTarget> children = EPH_mut_i08XmyeL(parent, ss, module).children;
        for (int i = 0; i < children.size(); i++)
        {
            s_ChildTarget& child = children.mutref(i);
            if (!((child.token != node.token) || (child.parent_rev == parent_rev)))
            {
                child.parent_rev = parent_rev;
                const s_Target target { child.target };
                l_27_28_MkYk0QpB(target, ss, _helpers, _here, ctx, module);
                return target;
            };
        };
    };
    const s_Target target = Scope_create_B5w8Fu3I(ss._scope, s_kind___no_kind_yet, (*(const fu::str*)fu::NIL), (*(const s_Type*)fu::NIL), s_Flags{}, s_SolverStatus{}, 0, module);
    l_27_27_GQ97f8co(target, node_1, status, ss, _current_fn, module);
    if (parent)
    {
        const unsigned parent_rev = EPH_rI6gXXKb(parent, ss, module).revision;
        fu::vec<s_ChildTarget>& children = EPH_mut_i08XmyeL(parent, ss, module).children;
        children += s_ChildTarget { s_TokenIdx(node.token), parent_rev, s_Target(target) };
    };
    return target;
}

static bool shouldAutoshadow_84tkNgoT(fu::view<char> id, const s_SolverState& ss)
{

    {
        const int start = 0;
        fu::view<s_ScopeItem> items = ss._scope.items;
        fu::view<s_ScopeSkip> scope_skip = ss._ss.items;
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

static void autoshadow_HOmWyAvb(bool& shadows, const int local_of, fu::view<char> id, const s_SolverState& ss, const s_CurrentFn& _current_fn)
{
    if (!(!_current_fn.autoshadow_ok))
    {
        if (!shadows && local_of && shouldAutoshadow_84tkNgoT(id, ss))
            shadows = true;

    };
}

static s_Type X_addrofTarget_N5pMnDZT(fu::view<s_Target> targets)
{
    return s_Type { s_ValueType { 0u, packAddrOfFn_aofyNfjF(targets) }, s_Lifetime{}, s_VFacts{} };
}

static s_Type X_addrofTarget_CXyelUbL(const s_Target& target)
{
    return X_addrofTarget_N5pMnDZT((fu::slate<1, s_Target> { s_Target(target) }));
}

static s_SolvedNode SolvedNode_clCALdMt(const s_kind kind, const s_Type& type, const s_Flags flags, const fu::str& value, const fu::vec<s_SolvedNode>& items, const s_Target& target, const s_Helpers& helpers, const s_TokenIdx& _here)
{
    return s_SolvedNode { kind, s_Helpers(helpers), flags, 0, fu::str(value), fu::vec<s_SolvedNode>(items), s_TokenIdx(_here), s_Type(type), s_Target(target) };
}

static s_SolvedNode createFnDef_bFKiwhhu(const s_Type& type, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_clCALdMt(s_kind_fndef, type, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_SolvedNode uPrepFn_A_AULLsBpm(const s_Node& node, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const fu::str& id = node.value;
    int BL_1_v {};
    const int local_of = (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v);
    const s_SolverStatus status = s_SolverStatus_SS_LAZY;
    const s_Target target = getOrCreateChild_owZe9oi3(node, node, status, ss, _current_fn, _helpers, _here, ctx, module);
    bool shadows = !!(node.flags & s_Flags_F_SHADOW);
    autoshadow_HOmWyAvb(shadows, local_of, id, ss, _current_fn);
    Scope_set_5Z1f2QqZ(ss._scope, id, target, shadows);
    /*MOV*/ s_ScopeSkipMemos scope_skip { (_current_fn ? ss._ss : (*(const s_ScopeSkipMemos*)fu::NIL)) };
    s_Ephemeral& eph = EPH_mut_i08XmyeL(target, ss, module);
    eph.local_of = local_of;
    eph.scope_memo = (_current_fn ? Scope_snap_dcsfJwX5(ss._scope, _helpers) : s_ScopeMemo{});
    eph.scope_skip = static_cast<s_ScopeSkipMemos&&>(scope_skip);
    if (node.flags & s_Flags_F_CONVERSION)
        ss._scope.converts.push(s_Target(target));

    return createFnDef_bFKiwhhu(X_addrofTarget_CXyelUbL(target), target, _here);
}

static fu::str stableTypeID_9xIpgBS2(const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return humanizeType_adoPoPLu(type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module);
}

inline static fu::str& l_27_42_PX9Yypao(const s_TypeParam& tp, fu::view<char> key, fu::str& unique, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::str _0 {};
    return (_0 = ((key + ":"_fu) + stableTypeID_9xIpgBS2(tp.matched, ss, _helpers, _here, ctx, module)), ((unique ? (unique += ","_fu) : unique) += static_cast<fu::str&&>(_0)));
}

                                #ifndef DEF_each_ZvhfrCZGbqe
                                #define DEF_each_ZvhfrCZGbqe
inline void each_ZvhfrCZG(const s_Map_KlcLuPSIt9g& _, fu::str& unique, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < _.vals.size(); i++)
        l_27_42_PX9Yypao(_.vals[i], _.keys[i], unique, ss, _helpers, _here, ctx, module);

}
                                #endif

                                #ifndef DEF_STRUCT_BASE
                                #define DEF_STRUCT_BASE
inline constexpr int STRUCT_BASE = 0;
                                #endif

                                #ifndef DEF_only_a6qr8qgsAa4
                                #define DEF_only_a6qr8qgsAa4
inline const s_Node& only_a6qr8qgs(fu::view<s_Node> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_gCeFmDFw("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Type T_ejhgfPxu(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    return evalTypeAnnot_NMH9TBVW(only_a6qr8qgs(node.items), false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

                                #ifndef DEF_Lifetime_temporary
                                #define DEF_Lifetime_temporary
extern const s_Lifetime Lifetime_temporary;
                                #endif

                                #ifndef DEF_t_zeroes
                                #define DEF_t_zeroes
extern const s_Type t_zeroes;
                                #endif

                                #ifndef DEF_get_F2OKB3lJsRb
                                #define DEF_get_F2OKB3lJsRb
inline const s_TypeParam& get_F2OKB3lJ(fu::view<fu::str> keys, fu::view<char> item, fu::view<s_TypeParam> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(keys[i], item);
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

                                #ifndef DEF_get_XmCAq2jwtQf
                                #define DEF_get_XmCAq2jwtQf
inline const s_TypeParam& get_XmCAq2jw(const s_Map_KlcLuPSIt9g& _, fu::view<char> key)
{
    return get_F2OKB3lJ(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_find_KonMQ4KBuu5
                                #define DEF_find_KonMQ4KBuu5
inline int find_KonMQ4KB(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static const s_Module& findModule_QnEP4499(const fu::str& fuzimport, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::str fname = resolveFile_x_aHG8xqFm(fuzimport, ctx);
    fu::view<s_Module> modules = ctx.modules;
    for (int i = 1; i < modules.size(); i++)
    {
        const s_Module& m = modules[i];
        if (m.fname == fname)
            return m;

    };
    BUG_V2MSl2gg(("findModule: cannot locate: "_fu + fname), ss, _helpers, _here, ctx, module);
}

static const s_Scope& dequalify_andGetScope_3b0R6943(fu::str& id, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int split = find_KonMQ4KB(id, '\t');
    if ((split >= 0))
    {
        fu::str fname = fu::slice(id, 0, split);
        id = fu::slice(id, (split + 1));
        const s_Module& other = findModule_QnEP4499(fname, ss, _helpers, _here, ctx, module);
        if (other.modid != module.modid)
            return other.out.solve.scope;
        else
        {
            fail_Ulv2WHKu((("Qualified "_fu + qBAD_3PsDzMvu(id)) + ":: access current module."_fu), ss, _helpers, _here, ctx, module);
        };
    }
    else
    {
        BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

inline static int l_27_10_Iuuw2cOw(const s_Target& u, int& count, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (u)
        return count++;
    else
    {
        BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_each_BV54nHPxoUc
                                #define DEF_each_BV54nHPxoUc
inline void each_BV54nHPx(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, int& count, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
                l_27_10_Iuuw2cOw(items[i_1], count, ss, _helpers, _here, ctx, module);

            i0 = ss_1.end;
        };
    };
}
                                #endif

static int countUsings_JzC7fAo7(const bool local_scope, const s_Scope& misc_scope, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Scope& scope = (local_scope ? ss._scope : misc_scope);
    int count = 0;
    if (scope.usings)
    {
        each_BV54nHPx(scope.usings, (local_scope ? ss._ss.usings : fu::view<s_ScopeSkip>{}), 0, count, ss, _helpers, _here, ctx, module);
    };
    return count;
}

inline static void l_27_11_OXOaMLVC(const int modid, s_BitSet& seen)
{
    add_U5p6nLOf(seen, modid);
}

                                #ifndef DEF_each_SNEfcrZF0k8
                                #define DEF_each_SNEfcrZF0k8
inline void each_SNEfcrZF(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, s_BitSet& seen)
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
                l_27_11_OXOaMLVC(items[i_1], seen);

            i0 = ss.end;
        };
    };
}
                                #endif

static void visitTypeImports_Dlq5Vrpk(const s_Type& type, fu::view<char> id, const bool local_scope, fu::vec<s_Target>& extra_items, s_BitSet& seen, const s_SolverState& ss, const s_Context& ctx, const s_Module& module)
{
    fu::view<int> visit = lookupTypeImports_XVsnoQiv(type.vtype, ctx, module);
    for (int i = -1; i < visit.size(); i++)
    {
        const int modid = ((i >= 0) ? visit[i] : modidOfOrigin_u9sdbuWn(type));
        if (!(has_QTGTghRU(seen, modid)))
        {
            if (!seen)
            {
                add_U5p6nLOf(seen, 0);
                add_U5p6nLOf(seen, module.modid);
                each_SNEfcrZF(ss._scope.imports, (local_scope ? ss._ss.imports : fu::view<s_ScopeSkip>{}), 0, seen);
            };
            if (!(!add_once_U5p6nLOf(seen, modid)))
            {
                const s_Scope& s = ctx.modules[modid].out.solve.scope;
                for (int i_1 = 0; i_1 < s.pub_items; i_1++)
                {
                    if (s.items[i_1].id == id)
                        extra_items.push(target_NWTdzsfF(s.items[i_1]));

                };
            };
        };
    };
}

inline static void l_27_12_fHkSiC6K(const s_Target& u, fu::view<char> id, const bool local_scope, fu::vec<s_Target>& extra_items, s_BitSet& seen, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    visitTypeImports_Dlq5Vrpk(GET_emAmLQ3D(u, ss, _helpers, _here, ctx, module).type, id, local_scope, extra_items, seen, ss, ctx, module);
}

                                #ifndef DEF_each_esSp3ZiIXEi
                                #define DEF_each_esSp3ZiIXEi
inline void each_esSp3ZiI(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu::view<char> id, const bool local_scope, fu::vec<s_Target>& extra_items, s_BitSet& seen, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
                l_27_12_fHkSiC6K(items[i_1], id, local_scope, extra_items, seen, ss, _helpers, _here, ctx, module);

            i0 = ss_1.end;
        };
    };
}
                                #endif

static const fu::vec<s_ScopeItem>& field_items_Jwyp1wek(const int considerFieldItems, const s_SolverState& ss)
{
    if (considerFieldItems)
        return ss._field_items;
    else
        return (*(const fu::vec<s_ScopeItem>*)fu::NIL);

}

static void clear_4cAoWJb3(s_Reorder& reorder)
{
    reorder.applicable = false;
    reorder.map.clear();
}

                                #ifndef DEF_str_MgDgAP7tMJ3
                                #define DEF_str_MgDgAP7tMJ3
inline fu::str str_MgDgAP7t(const s_SolverStatus n)
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

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
inline constexpr int FN_ARGS_BACK = FN_RET_BACK;
                                #endif

                                #ifndef DEF_steal_AYMWowQgqJe
                                #define DEF_steal_AYMWowQgqJe
inline s_Map_KlcLuPSIt9g steal_AYMWowQg(s_Map_KlcLuPSIt9g& v)
{
    /*MOV*/ s_Map_KlcLuPSIt9g ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

                                #ifndef DEF_last_ohJwrXiS6ud
                                #define DEF_last_ohJwrXiS6ud
inline const s_Target& last_ohJwrXiS(fu::view<s_Target> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_has_wxSKDW5VMoc
                                #define DEF_has_wxSKDW5VMoc
inline bool has_wxSKDW5V(fu::view<int> a, const int b)
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

                                #ifndef DEF_all_uCXEhS6q3N1
                                #define DEF_all_uCXEhS6q3N1
inline bool all_uCXEhS6q(fu::view<s_SolvedNode> a, const s_SolverState& ss)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_SolvedNode& item = a[i];
        if (!couldRetype_gb3b8CD9(item, ss))
            return false;

    };
    return true;
}
                                #endif

                                #ifndef DEF_last_GN4mikiykv7
                                #define DEF_last_GN4mikiykv7
inline const s_SolvedNode& last_GN4mikiy(fu::view<s_SolvedNode> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static bool couldRetype_gb3b8CD9(const s_SolvedNode& node, const s_SolverState& ss)
{
    const s_HelpersData* BL_1_v;
    return (node.kind == s_kind_int) || (node.kind == s_kind_real) || (node.kind == s_kind_definit) || (node.kind == s_kind_str) || ((node.kind == s_kind_if) && all_uCXEhS6q(fu::get_view(node.items, 1, 3), ss)) || ((node.kind == s_kind_block) && !s_HelpersMask(((__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_1_v = &(ss._helpers_data[h.index]);
    (void)0;}), *BL_1_v).mask & s_HelpersMask_HM_LabelUsed)) && couldRetype_gb3b8CD9(last_GN4mikiy(node.items), ss));
}

static fu::vec<fu::str>& l_6_2_IBJ5D7Hr(s_Map_KlcLuPSIt9g& _)
{
    return _.keys;
}

static fu::vec<s_TypeParam>& l_6_3_9orT489s(s_Map_KlcLuPSIt9g& _)
{
    return _.vals;
}

inline static int bfind_e5rlg5oe(fu::view<char> item, const fu::str& item_1, s_Map_KlcLuPSIt9g& _)
{
    int lo = 0;
    int hi = l_6_2_IBJ5D7Hr(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(l_6_2_IBJ5D7Hr(_)[i], item);
        if (cmp == 0)
            return i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_2_IBJ5D7Hr(_).insert(lo, fu::str(item_1));
    l_6_3_9orT489s(_).insert(lo, s_TypeParam{});
    return lo;
}

                                #ifndef DEF_ref_YlLOIcOwNp5
                                #define DEF_ref_YlLOIcOwNp5
inline s_TypeParam& ref_YlLOIcOw(const fu::str& item, s_Map_KlcLuPSIt9g& _)
{
    const int idx = bfind_e5rlg5oe(item, item, _);
    return l_6_3_9orT489s(_).mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_Yr2SlHAwl9d
                                #define DEF_ref_Yr2SlHAwl9d
inline s_TypeParam& ref_Yr2SlHAw(s_Map_KlcLuPSIt9g& _, const fu::str& key)
{
    return ref_YlLOIcOw(key, _);
}
                                #endif

static const s_Struct& lookupUserType_Dk03wXlJ(const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Struct* _0;
    return *(_0 = &(tryLookupUserType_XVsnoQiv(type.vtype, ctx, module))) ? *_0 : fail_Ulv2WHKu(("Not a struct nor custom primitive: "_fu + humanizeType_adoPoPLu(type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
}

static const fu::str& getBasePrimitive_CP1q4geP(const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int offset = basePrimPrefixLen_OaQVyIZB(type.vtype.canon);
    if (offset < type.vtype.canon.size())
        return lookupUserType_Dk03wXlJ(type, ss, _helpers, _here, ctx, module).base;
    else
        return type.vtype.canon;

}

static bool want_Me0MpyjZ(const s_Type& t, fu::view<char> c)
{
    return c == t.vtype.canon;
}

static const s_Type& check_eD7zFPWR(const s_Type& type, const s_Intlit& parse, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (type && is_primitive_3t4EwFeQ(type.vtype))
    {
        fu::view<char> c = getBasePrimitive_CP1q4geP(type, ss, _helpers, _here, ctx, module);
        if (!parse.uNsigned)
        {
            if (((parse.minsize_f <= fu::u8(32u)) && want_Me0MpyjZ(t_f32, c)) || ((parse.minsize_f <= fu::u8(64u)) && want_Me0MpyjZ(t_f64, c)) || ((parse.minsize_i <= fu::u8(32u)) && want_Me0MpyjZ(t_i32, c)) || ((parse.minsize_i <= fu::u8(64u)) && want_Me0MpyjZ(t_i64, c)) || ((parse.minsize_i <= fu::u8(16u)) && want_Me0MpyjZ(t_i16, c)) || ((parse.minsize_i <= fu::u8(8u)) && want_Me0MpyjZ(t_i8, c)))
                return type;

        };
        if (!parse.sIgned)
        {
            if (((parse.minsize_u <= fu::u8(32u)) && want_Me0MpyjZ(t_u32, c)) || ((parse.minsize_u <= fu::u8(64u)) && want_Me0MpyjZ(t_u64, c)) || ((parse.minsize_u <= fu::u8(16u)) && want_Me0MpyjZ(t_u16, c)) || ((parse.minsize_u <= fu::u8(8u)) && want_Me0MpyjZ(t_u8, c)))
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

    fail_Ulv2WHKu("Bad int literal."_fu, ss, _helpers, _here, ctx, module);
}

static s_Type solveInt_4mim8lyG(fu::view<char> v, const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    s_Intlit parse = Intlit_sNwIFkW3(v);
    if (parse.error)
        fail_Ulv2WHKu(parse.error, ss, _helpers, _here, ctx, module);
    else
    {
        /*MOV*/ s_Type type_1 = clear_refs_40rRB6L8(s_Type(check_eD7zFPWR(type, parse, ss, _helpers, _here, ctx, module)));
        if (!s_DevOptions((options.dev & s_DevOptions_DEV_DontFoldLiterals)))
            type_1.vfacts = (parse.absval ? s_VFacts_AlwaysTrue : s_VFacts_AlwaysFalse);

        return /*NRVO*/ type_1;
    };
}

static const s_Type& solveReal_D8StToEJ(const s_Type& type)
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

static s_Type solveString_UFuarO8J(fu::view<char> v, const s_Type& type, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (type && is_primitive_3t4EwFeQ(type.vtype))
    {
        fu::view<s_ScopeItem> members = tryLookupUserType_XVsnoQiv(type.vtype, ctx, module).items;
        for (int i = 0; i < members.size(); i++)
        {
            if (members[i].id == v)
                return clear_refs_40rRB6L8(s_Type(type));

        };
    };
    /*MOV*/ s_Type ret { t_string };
    if (!s_DevOptions((options.dev & s_DevOptions_DEV_DontFoldLiterals)))
        ret.vfacts = (v.size() ? s_VFacts_AlwaysTrue : s_VFacts_AlwaysFalse);

    return /*NRVO*/ ret;
}

static s_Type tryRetyping_omCvj6H0(const s_SolvedNode& node, const s_Type& expect, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (is_arithmetic_3t4EwFeQ(node.type.vtype) && is_arithmetic_3t4EwFeQ(expect.vtype))
    {
        if (node.kind == s_kind_int)
            return solveInt_4mim8lyG(node.value, expect, ss, _helpers, _here, ctx, module, options);
        else if (node.kind == s_kind_real)
            return s_Type(solveReal_D8StToEJ(expect));

    };
    if (node.kind == s_kind_definit)
        return definitType_hoadAQC0(s_Type(expect), _here, ctx);
    else if (node.kind == s_kind_str)
        return solveString_UFuarO8J(node.value, expect, ctx, module, options);
    else if (node.kind == s_kind_if)
    {
        s_Type left = tryRetyping_omCvj6H0(node.items[1], expect, ss, _helpers, _here, ctx, module, options);
        s_Type right = tryRetyping_omCvj6H0(node.items[2], expect, ss, _helpers, _here, ctx, module, options);
        if (left && right)
            return type_trySuper_2nNLpyR4(left, right, false, _here, ctx);
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
            return tryRetyping_omCvj6H0(last_GN4mikiy(node.items), expect, ss, _helpers, _here, ctx, module, options);
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

                                #ifndef DEF_x21x3D_gCeFmDFw0L8
                                #define DEF_x21x3D_gCeFmDFw0L8
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

                                #ifndef DEF_DONT_match_zeroes
                                #define DEF_DONT_match_zeroes
inline constexpr bool DONT_match_zeroes = true;
                                #endif

static fu::str explainTypeDiff_adOaK2Pt(const s_Type& a, const s_Type& b, fu::view<char> sep, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return (((humanizeType_adoPoPLu(a, false, false, false, b, ss, _helpers, _here, ctx, module) + " "_fu) + sep) + " "_fu) + humanizeType_adoPoPLu(b, false, false, false, a, ss, _helpers, _here, ctx, module);
}

                                #ifndef DEF_add_eY6ht47hj1l
                                #define DEF_add_eY6ht47hj1l
inline bool add_eY6ht47h(fu::vec<s_Target>& keys, const s_Target& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_LngZZmWA(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, s_Target(item));
    return true;
}
                                #endif

static void visitScope_moTyzInw(const bool local_scope, fu::view<s_ScopeItem> items, fu::view<char> id, const bool shadow, fu::vec<s_Target>& result, s_SolverState& ss)
{
    int scope_iterator {};
    s_Target target {};
    bool shadows {};
    while (!shadow && (target = (local_scope ? search_ihIw5OEs(ss._scope.items, id, scope_iterator, ss._ss.items, shadows, fu::view<s_Target>{}, fu::view<s_ScopeItem>{}) : search_yfyUVvrQ(items, id, scope_iterator))))
        add_eY6ht47h(result, target);

}

static fu::vec<s_Target> solveAddrOfFn_D4uoFhbA(fu::str&& id, const s_Flags flags, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const bool shadow = false;
    /*MOV*/ fu::vec<s_Target> result {};
    const s_Flags qualified = (flags & s_Flags_F_COMPOUND_ID);
    fu::view<s_ScopeItem> _0 {};
    (_0 = (qualified ? dequalify_andGetScope_3b0R6943(id, ss, _helpers, _here, ctx, module).items : fu::view<s_ScopeItem>{}), visitScope_moTyzInw(!qualified, static_cast<fu::view<s_ScopeItem>&&>(_0), id, shadow, result, ss));
    return static_cast<fu::vec<s_Target>&&>((result ? result : fail_Ulv2WHKu((("No `fn "_fu + id) + "` in scope."_fu), ss, _helpers, _here, ctx, module)));
}

static fu::str isNotDefinedHere_RaGRksBr(const fu::str& id)
{
    return qID_3PsDzMvu(id) + " is not defined here."_fu;
}

                                #ifndef DEF_x3Dx3D_LngZZmWAHm3
                                #define DEF_x3Dx3D_LngZZmWAHm3
inline bool operator==(const s_Target& a, const s_Target& b)
{
    return !x3Cx3E_LngZZmWA(a, b);
}
                                #endif

                                #ifndef DEF_find_P9xEJb6w1f3
                                #define DEF_find_P9xEJb6w1f3
inline int find_P9xEJb6w(fu::view<s_Target> a, const s_Target& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static bool trySolveTypeParams_ES9vPDa7(const s_Node& node, /*MOV*/ s_Type&& type, fu::vec<s_Warning>& errout, bool invariant, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.kind == s_kind_call)
    { {
        fu::view<s_Node> items = node.items;
        if (items.size() == 1)
        {
            s_Type _0 {};
            fu::never BL_3_v {};
            s_Type _1 {};
            fu::never BL_5_v {};
            s_Type _2 {};
            fu::never BL_7_v {};
            s_Type _3 {};
            fu::never BL_9_v {};
            fu::never BL_11_v {};
            /*MOV*/ s_Type t = ((node.value == "&"_fu) ? ((_0 = tryClear_ref_hoadAQC0(type, _here, ctx)) ? static_cast<s_Type&&>(_0) : (__extension__ (
            {
                if (errout)
                {
                    errout += s_Warning { s_TokenIdx(node.token), ("Not a reference: "_fu + humanizeType_adoPoPLu(type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) };
                };
                return false;
            (void)0;}), static_cast<fu::never&&>(BL_3_v))) : ((node.value == "&mut"_fu) ? ((_1 = tryClear_mutref_hoadAQC0(type, _here, ctx)) ? static_cast<s_Type&&>(_1) : (__extension__ (
            {
                if (errout)
                {
                    errout += s_Warning { s_TokenIdx(node.token), ("Not a mutref: "_fu + humanizeType_adoPoPLu(type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) };
                };
                return false;
            (void)0;}), static_cast<fu::never&&>(BL_5_v))) : ((node.value == "[]"_fu) ? ((_2 = tryClear_array_40rRB6L8(type)) ? static_cast<s_Type&&>(_2) : (__extension__ (
            {
                if (errout)
                {
                    errout += s_Warning { s_TokenIdx(node.token), ("Not an array: "_fu + humanizeType_adoPoPLu(type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) };
                };
                return false;
            (void)0;}), static_cast<fu::never&&>(BL_7_v))) : ((node.value == "[:]"_fu) ? ((_3 = tryClear_sliceable_dB532Fe7(type.vtype)) ? static_cast<s_Type&&>(_3) : (__extension__ (
            {
                if (errout)
                {
                    errout += s_Warning { s_TokenIdx(node.token), ("Not sliceable: "_fu + humanizeType_adoPoPLu(type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) };
                };
                return false;
            (void)0;}), static_cast<fu::never&&>(BL_9_v))) : (__extension__ (
            {
                goto BL_1;
            (void)0;}), static_cast<fu::never&&>(BL_11_v))))));
            if ((node.value == "[]"_fu) || (node.value == "[:]"_fu))
                invariant = true;

            const s_Node* _4;
            return trySolveTypeParams_ES9vPDa7((*(_4 = &(node.items[0])) ? *_4 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module)), static_cast<s_Type&&>(t), errout, invariant, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        };
      } BL_1:;
    }
    else if (node.kind == s_kind_typeparam)
    { {
        const fu::str& id = (node.value ? node.value : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
        type = relax_typeParam_40rRB6L8(s_Type(type));
        s_TypeParam& param = ref_Yr2SlHAw(ss._typeParams, id);
        if (param)
        {
            if (param.flags & s_TypeParamFlags_TP_isArgSpec)
                goto BL_13;
            else
            {
                if (invariant)
                {
                    if (!isAssignable_v8EzC34Q(type, param.matched, DONT_match_zeroes, false, _here, ctx))
                    {
                        if (errout)
                        {
                            errout += s_Warning { s_TokenIdx(node.token), ((("Incompatible types for "_fu + qBAD_3PsDzMvu(id)) + ": "_fu) + explainTypeDiff_adOaK2Pt(param.matched, type, "->"_fu, ss, _helpers, _here, ctx, module)) };
                        };
                        return false;
                    };
                }
                else
                {
                    /*MOV*/ s_Type uNion = type_trySuper_2nNLpyR4(param.matched, type, DONT_match_zeroes, _here, ctx);
                    if (!uNion)
                    {
                        if (errout)
                        {
                            errout += s_Warning { s_TokenIdx(node.token), ((("Incompatible types for "_fu + qBAD_3PsDzMvu(id)) + ": "_fu) + explainTypeDiff_adOaK2Pt(param.matched, type, "<->"_fu, ss, _helpers, _here, ctx, module)) };
                        };
                        return false;
                    }
                    else
                        type = static_cast<s_Type&&>(uNion);

                };
                if (param.invariant && !isAssignable_v8EzC34Q(param.invariant, type, DONT_match_zeroes, false, _here, ctx))
                {
                    if (errout)
                    {
                        errout += s_Warning { s_TokenIdx(node.token), ((("Incompatible types for "_fu + qBAD_3PsDzMvu(id)) + ": "_fu) + explainTypeDiff_adOaK2Pt(param.invariant, type, "<-"_fu, ss, _helpers, _here, ctx, module)) };
                    };
                    return false;
                };
            };
        };
        param.matched = type;
        if (invariant)
            param.invariant = static_cast<s_Type&&>(type);

        return true;
      } BL_13:;
    }
    else if ((node.kind == s_kind_arrlit) && (node.items.size() == 1))
    {
        invariant = true;
        s_Type _5 {};
        fu::never BL_28_v {};
        /*MOV*/ s_Type t = ((_5 = tryClear_sliceable_dB532Fe7(type.vtype)) ? static_cast<s_Type&&>(_5) : (__extension__ (
        {
            if (errout)
            {
                errout += s_Warning { s_TokenIdx(node.token), ("Not sliceable: "_fu + humanizeType_adoPoPLu(type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) };
            };
            return false;
        (void)0;}), static_cast<fu::never&&>(BL_28_v)));
        const s_Node* _6;
        return trySolveTypeParams_ES9vPDa7((*(_6 = &(node.items[0])) ? *_6 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module)), static_cast<s_Type&&>(t), errout, invariant, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    }
    else if (node.kind == s_kind_typeunion)
    {
        const int errout0 = errout.size();
        s_Map_KlcLuPSIt9g typeParams0 { ss._typeParams };
        for (int i = 0; i < node.items.size(); i++)
        {
            if (trySolveTypeParams_ES9vPDa7(node.items[i], s_Type(type), errout, invariant, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
            {
                errout.shrink(errout0);
                return true;
            }
            else
                ss._typeParams = typeParams0;

        };
        return false;
    };
    if ((node.kind == s_kind_call) && (node.flags & s_Flags_F_TEMPLATE) && (node.value != "typeof"_fu))
    {
        fu::vec<s_Target> targets = solveAddrOfFn_D4uoFhbA(fu::str(node.value), s_Flags{}, ss, _helpers, _here, ctx, module);
        if (!targets)
        {
            if (errout)
            {
                errout += s_Warning { s_TokenIdx(node.token), isNotDefinedHere_RaGRksBr(node.value) };
            };
            return false;
        }
        else
        {
            fu::view<char> pattern = tryGetPattern_sFkr07K7(type.vtype.canon);
            if (pattern)
            {
                int offset = 0;
                for (; ; )
                {
                    const s_Target spec_of = parseGlobal_qtvefzpE(pattern, offset);
                    const int start = offset;
                    bool isLastSubPattern {};
                    scan(pattern, '|', offset, isLastSubPattern);

                    { {
                        fu::view<char> pattern_1 = fu::get_view(pattern, start, offset);
                        const int targetsIdx = find_P9xEJb6w(targets, spec_of);
                        if (!(targetsIdx < 0))
                        {
                            targets.splice(targetsIdx, 1);
                            int numArgs = 0;

                            {
                                int offset_1 = 1;
                                for (; ; )
                                {
                                    const int start_1 = offset_1;
                                    bool isLastArgSpecType {};
                                    scan(pattern_1, ':', offset_1, isLastArgSpecType);

                                    {
                                        fu::view<char> argSpecType = fu::get_view(pattern_1, start_1, offset_1);
                                        const int argIdx = numArgs++;
                                        if ((argIdx >= node.items.size()))
                                        {
                                            if (errout)
                                            {
                                                errout += s_Warning { s_TokenIdx(node.token), x7E_gCeFmDFw((x7E_gCeFmDFw("Missing type argument for "_fu, str_3AjvLtSQ(GET_emAmLQ3D(spec_of, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ": "_fu), str_N3Nir9Bo(EXT_7eVl0gy6(spec_of, ss, ctx, module).args[argIdx], ss, _current_fn, _helpers, _here, ctx, module)) };
                                            };
                                            goto BL_42;
                                        }
                                        else
                                        {
                                            const s_Node& node_1 = node.items[argIdx];
                                            /*MOV*/ s_Type type_1 = s_Type { parseType_cWRn30lS(argSpecType), s_Lifetime{}, s_VFacts{} };
                                            if (!trySolveTypeParams_ES9vPDa7(node_1, static_cast<s_Type&&>(type_1), errout, true, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
                                                goto BL_42;

                                        };
                                    };
                                    if (isLastArgSpecType)
                                        break;
                                    else
                                        offset_1++;

                                };
                            };
                            if (numArgs != node.items.size())
                            {
                                if (errout)
                                {
                                    errout += s_Warning { s_TokenIdx(node.token), (x7E_gCeFmDFw("Too many type arguments for "_fu, str_3AjvLtSQ(GET_emAmLQ3D(spec_of, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + "."_fu) };
                                };
                            }
                            else
                                return true;

                        };
                      } BL_42:;
                    };
                    if (isLastSubPattern)
                        break;
                    else
                        offset++;

                };
            };
            if (errout && targets)
            {
                for (int i = 0; i < targets.size(); i++)
                {
                    errout += s_Warning { s_TokenIdx(node.token), ((x7E_gCeFmDFw("Not produced by "_fu, str_3AjvLtSQ(GET_emAmLQ3D(targets[i], ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ": "_fu) + humanizeType_adoPoPLu(type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) };
                };
            };
            return false;
        };
    }
    else
    {
        s_Type expect = evalTypeAnnot_NMH9TBVW(node, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (!isAssignable_v8EzC34Q(expect, type, DONT_match_zeroes, false, _here, ctx))
        {
            if (errout)
            {
                errout += s_Warning { s_TokenIdx(node.token), ("Incompatible types: "_fu + explainTypeDiff_adOaK2Pt(expect, type, "<-"_fu, ss, _helpers, _here, ctx, module)) };
            };
            return false;
        }
        else
            return true;

    };
}

inline static fu::str mangleArgTypes_mWWjzwjY(fu::view<s_Type> args)
{
    /*MOV*/ fu::str mangle = ""_fu;
    int numNonInjected = 0;
    for (int i = 0; i < args.size(); i++)
    {
        const s_Type& arg = args[i];
        if (numNonInjected++)
            mangle += ',';

        if (arg)
            mangle += serializeType_NOIpmQqe(arg, "mangle[$T]"_fu);

    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_add_mts1NXJ4Qz0
                                #define DEF_add_mts1NXJ4Qz0
inline bool add_mts1NXJ4(fu::vec<fu::str>& keys, const fu::str& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(keys[i], item);
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

static s_Map_NKYdFuVcECe& getSpecs_WybGsFZ9(const int parent_idx, s_SolverState& ss)
{
    return EPH_mut_Y1BUOWP9(parent_idx, ss).specs;
}

                                #ifndef DEF_get_vf84OWnYmE1
                                #define DEF_get_vf84OWnYmE1
inline const s_Target& get_vf84OWnY(fu::view<fu::str> keys, fu::view<char> item, fu::view<s_Target> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(keys[i], item);
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

                                #ifndef DEF_get_55pvGtB1bJ7
                                #define DEF_get_55pvGtB1bJ7
inline const s_Target& get_55pvGtB1(const s_Map_NKYdFuVcECe& _, fu::view<char> key)
{
    return get_vf84OWnY(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_rem_3FUJFPIiV2a
                                #define DEF_rem_3FUJFPIiV2a
inline bool rem_3FUJFPIi(fu::vec<fu::str>& keys, fu::view<char> item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(keys[i], item);
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

inline static void l_27_30_zMuEGg1o(const s_Target& spec, s_SolverState& ss, const s_Module& module)
{
    intoTombstone_a1bfOdN8(spec, ss, module);
}

                                #ifndef DEF_each_Vs2yBB0ff49
                                #define DEF_each_Vs2yBB0ff49
inline void each_Vs2yBB0f(const s_Map_NKYdFuVcECe& _, s_SolverState& ss, const s_Module& module)
{
    for (int i = 0; i < _.vals.size(); i++)
        l_27_30_zMuEGg1o(_.vals[i], ss, module);

}
                                #endif

static void intoTombstone_a1bfOdN8(const s_Target& t, s_SolverState& ss, const s_Module& module)
{
    s_Extended& ext = EXT_mut_JHD4gxS4(t, ss, module);
    ext = s_Extended{};
    s_Overload& o = GET_mut_uE8Nb6mH(t, ss, module);
    o = s_Overload{};
    o.kind = s_kind___tombstone;
    fu::vec<s_ChildTarget> children { EPH_rI6gXXKb(t, ss, module).children };
    for (int i = 0; i < children.size(); i++)
        intoTombstone_a1bfOdN8(s_Target(children[i].target), ss, module);

    s_Map_NKYdFuVcECe specs = s_Map_NKYdFuVcECe { {}, fu::vec<s_Target>(EPH_rI6gXXKb(t, ss, module).specs.vals) };
    each_Vs2yBB0f(specs, ss, module);
}

static void destroyOverload_utLnuMSL(const s_Target& t, s_SolverState& ss, const s_Module& module)
{
    intoTombstone_a1bfOdN8(t, ss, module);
}

static fu::vec<fu::str>& l_6_2_yUqxqrYD(s_Map_NKYdFuVcECe& _)
{
    return _.keys;
}

static fu::vec<s_Target>& l_6_3_Vqt3aRqH(s_Map_NKYdFuVcECe& _)
{
    return _.vals;
}

inline static int bfind_SKiDFzIk(fu::view<char> item, const fu::str& item_1, s_Map_NKYdFuVcECe& _)
{
    int lo = 0;
    int hi = l_6_2_yUqxqrYD(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(l_6_2_yUqxqrYD(_)[i], item);
        if (cmp == 0)
            return i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_2_yUqxqrYD(_).insert(lo, fu::str(item_1));
    l_6_3_Vqt3aRqH(_).insert(lo, s_Target{});
    return lo;
}

                                #ifndef DEF_ref_6EuISyZdZi1
                                #define DEF_ref_6EuISyZdZi1
inline s_Target& ref_6EuISyZd(const fu::str& item, s_Map_NKYdFuVcECe& _)
{
    const int idx = bfind_SKiDFzIk(item, item, _);
    return l_6_3_Vqt3aRqH(_).mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_4YbBPAwj1Pa
                                #define DEF_ref_4YbBPAwj1Pa
inline s_Target& ref_4YbBPAwj(s_Map_NKYdFuVcECe& _, const fu::str& key)
{
    return ref_6EuISyZd(key, _);
}
                                #endif

inline static fu::str id_vsB0WMIq(const s_Target& target, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_SPECFAIL_EveZl8g6(target))
        return "SPEC_FAIL"_fu;
    else
        return ("`"_fu + GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).name) + "`"_fu;

}

static void setSpec_UHuEX1dK(const fu::str& mangle, const s_Target& target, const bool nx, const bool allowReplaceNonSpecfails, const int parent_idx, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    s_Target& t = ref_4YbBPAwj(getSpecs_WybGsFZ9(parent_idx, ss), mangle);
    if ((!t == nx) && (!t || is_SPECFAIL_EveZl8g6(t) || allowReplaceNonSpecfails))
        t = target;
    else
    {
        int BL_3_v {};
        BUG_V2MSl2gg(((((((x7E_gCeFmDFw((x7E_gCeFmDFw("About to screw up royally, replacing spec: "_fu, fu::i64dec((__extension__ (
        {
            const s_Target& t_1 = t;
            BL_3_v = (int(unsigned(((t_1._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_3_v))) + " with "_fu), fu::i64dec(int(unsigned(((target._packed >> 20ull) & 0xfffffull))))) + ", mangle: "_fu) + mangle) + ", that's: "_fu) + id_vsB0WMIq(t, ss, _helpers, _here, ctx, module)) + " becoming "_fu) + id_vsB0WMIq(target, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    };
}

static void resetSpec_DEroi3bE(const s_Target& spec, const bool allowReplaceNonSpecfails, const int parent_idx, fu::view<fu::str> mangles, s_Target& currentSpec, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(spec == currentSpec))
    {
        currentSpec = spec;
        for (int i = 0; i < mangles.size(); i++)
            setSpec_UHuEX1dK(mangles[i], spec, false, allowReplaceNonSpecfails, parent_idx, ss, _helpers, _here, ctx, module);

    };
}

static s_Target SPECFAIL_30OHBErt(const fu::str& reason, const int parent_idx, const s_Target& SPECFAIL_RentrySafety, fu::view<fu::str> mangles, s_Target& currentSpec, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int index = ss._spec_errors.size();
    ss._spec_errors += fu::str(reason);
    const s_Target spec = s_Target { (SPECFAIL_RentrySafety._packed | uint64_t(unsigned(index))) };
    resetSpec_DEroi3bE(spec, false, parent_idx, mangles, currentSpec, ss, _helpers, _here, ctx, module);
    return spec;
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

static bool isNativeBody_dOd4JUZE(const s_Node& n_body)
{
    if (n_body.kind == s_kind_call)
        return n_body.value == "__native"_fu;
    else
        return false;

}

inline static bool useConsumedType_ifNative_vq8WjXBF(const s_TypeParam& tp)
{
    return s_TypeParamFlags((tp.flags & s_TypeParamFlags((s_TypeParamFlags_TP_isArgSpec | s_TypeParamFlags_TP_isTypenameArgSpec)))) == s_TypeParamFlags_TP_isArgSpec;
}

inline static void l_27_32_i3JbLo6N(s_TypeParam& tp)
{
    if (useConsumedType_ifNative_vq8WjXBF(tp))
        tp.flags |= s_TypeParamFlags_TP_needsConsumedTypes;

}

                                #ifndef DEF_each_whga5C8w2Xi
                                #define DEF_each_whga5C8w2Xi
inline void each_whga5C8w(s_Map_KlcLuPSIt9g& _)
{
    for (int i = 0; i < _.vals.size(); i++)
        l_27_32_i3JbLo6N(_.vals.mutref(i));

}
                                #endif

static bool type_has_ltVcdoTA(const s_Type& type, fu::view<char> tag, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (tag == "trivial"_fu)
        return is_trivial_XVsnoQiv(type.vtype, ctx, module);
    else if (tag == "copy"_fu)
        return is_rx_copy_GSunVkiW(type);
    else if (tag == "arithmetic"_fu)
        return is_arithmetic_3t4EwFeQ(type.vtype);
    else if (tag == "primitive"_fu)
        return is_primitive_3t4EwFeQ(type.vtype);
    else if (tag == "bitfield"_fu)
        return is_bitfield_3t4EwFeQ(type.vtype);
    else if (tag == "integral"_fu)
        return is_integral_3t4EwFeQ(type.vtype);
    else if (tag == "unsigned"_fu)
        return is_unsigned_3t4EwFeQ(type.vtype);
    else if (tag == "floating_point"_fu)
        return is_floating_pt_3t4EwFeQ(type.vtype);
    else if (tag == "mutref"_fu)
        return is_mutref_hoadAQC0(type, _here, ctx);
    else if (tag == "enum"_fu)
        return is_enum_3t4EwFeQ(type.vtype);
    else if (tag == "flags"_fu)
        return is_flags_3t4EwFeQ(type.vtype);
    else if (tag == "reinterpretable"_fu)
        return is_reinterpretable_XVsnoQiv(type.vtype, ctx, module);
    else
        BUG_V2MSl2gg((("Unknown type tag: `"_fu + tag) + "`."_fu), ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_if_only_a6qr8qgsAa4
                                #define DEF_if_only_a6qr8qgsAa4
inline const s_Node& if_only_a6qr8qgs(fu::view<s_Node> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return (*(const s_Node*)fu::NIL);

}
                                #endif

static bool evalTypePattern_VGcTurMu(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.kind == s_kind_and)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (!evalTypePattern_VGcTurMu(node.items[i], ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
                return false;

        };
        return true;
    }
    else if (node.kind == s_kind_or)
    {
        s_Map_KlcLuPSIt9g undo { ss._typeParams };
        for (int i = 0; i < node.items.size(); i++)
        {
            if (evalTypePattern_VGcTurMu(node.items[i], ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
                return true;
            else
                ss._typeParams = undo;

        };
        return false;
    }
    else if (node.kind == s_kind_typeassert)
    {
        const s_Node* _0;
        const s_Node& left = (*(_0 = &(node.items[0])) ? *_0 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
        const s_Node* _1;
        const s_Node& right = (*(_1 = &(node.items[1])) ? *_1 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
        /*MOV*/ s_Type actual = evalTypeAnnot_NMH9TBVW(left, true, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (right.kind == s_kind_typetag)
            return type_has_ltVcdoTA(actual, (right.value ? right.value : fail_Ulv2WHKu("Falsy type tag."_fu, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
        else
        {
            fu::vec<s_Warning> errout {};
            const bool ok = trySolveTypeParams_ES9vPDa7(right, static_cast<s_Type&&>(actual), errout, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            if (errout)
                BUG_V2MSl2gg("Inefficient: trySolveTypeParams pushing errors when told not to (falsy errout)."_fu, ss, _helpers, _here, ctx, module);
            else
            {
                if (ok)
                {
                    const s_Node* _2;
                    const s_Node& left_1 = (*(_2 = &((((left.kind == s_kind_call) && (left.value == "typeof"_fu)) ? if_only_a6qr8qgs(left.items) : (*(const s_Node*)fu::NIL)))) ? *_2 : left);
                    if (left_1.kind == s_kind_typeparam)
                    {
                        const fu::str& id = left_1.value;
                        if (get_XmCAq2jw(ss._typeParams, id).flags & s_TypeParamFlags_TP_needsConsumedTypes)
                        {
                            /*MOV*/ s_Type expect = evalTypeAnnot_NMH9TBVW(right, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                            s_TypeParam& tp = ref_Yr2SlHAw(ss._typeParams, id);
                            s_Type _3 {};
                            tp.consumed = (tp.consumed ? ((_3 = type_tryIntersect_RYGee21D(tp.consumed, expect)) ? static_cast<s_Type&&>(_3) : fail_Ulv2WHKu("typeassert intersect fail."_fu, ss, _helpers, _here, ctx, module)) : static_cast<s_Type&&>(expect));
                        };
                    };
                };
                return ok;
            };
        };
    }
    else if (node.kind == s_kind_not)
        return !evalTypePattern_VGcTurMu(only_a6qr8qgs(node.items), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

    fail_Ulv2WHKu("Invalid type pattern."_fu, ss, _helpers, _here, ctx, module);
}

static s_Node& n_fn_Ahq9YW7H(s_Template& tEmplate)
{
    return tEmplate.node;
}

static fu::vec<s_Node>& sig_aguy45dI(s_Template& tEmplate)
{
    return n_fn_Ahq9YW7H(tEmplate).items;
}

inline static void l_27_33_QKerjdbg(s_TypeParam& tp)
{
    if (useConsumedType_ifNative_vq8WjXBF(tp))
        tp.matched = tp.consumed;

}

                                #ifndef DEF_each_Ls3aY7Esx9l
                                #define DEF_each_Ls3aY7Esx9l
inline void each_Ls3aY7Es(s_Map_KlcLuPSIt9g& _)
{
    for (int i = 0; i < _.vals.size(); i++)
        l_27_33_QKerjdbg(_.vals.mutref(i));

}
                                #endif

                                #ifndef DEF_if_last_Bvu8bFCucW6
                                #define DEF_if_last_Bvu8bFCucW6
inline const s_ScopeSkip& if_last_Bvu8bFCu(fu::view<s_ScopeSkip> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return (*(const s_ScopeSkip*)fu::NIL);

}
                                #endif

                                #ifndef DEF_last_8ftQmkLMSK7
                                #define DEF_last_8ftQmkLMSK7
inline s_ScopeSkip& last_8ftQmkLM(fu::view_mut<s_ScopeSkip> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static void ScopeSkip_push_ySB0HIEa(fu::vec<s_ScopeSkip>& scope_skip, const int start, const int end, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if ((start <= end))
    {
        if (!(end == start))
        {
            const s_ScopeSkip& last = if_last_Bvu8bFCu(scope_skip);
            if ((last.end <= start))
            {
                if (scope_skip && (last.end == start))
                    last_8ftQmkLM(scope_skip).end = end;
                else
                {
                    scope_skip += s_ScopeSkip { start, end };
                };
            }
            else
                BUG_V2MSl2gg("ScopeSkip_push: last.end > start."_fu, ss, _helpers, _here, ctx, module);

        };
    }
    else
        BUG_V2MSl2gg("ScopeSkip_push: bad args."_fu, ss, _helpers, _here, ctx, module);

}

static bool Scope_import_JpwYQuNq(const int modid, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    {
        const int start = 0;
        fu::view<int> items = ss._scope.imports;
        fu::view<s_ScopeSkip> scope_skip = ss._ss.imports;
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
        _Scope_import__forceCopy_hAHAQV1M(modid, ss, ctx);
        return true;
    }
    else
        BUG_V2MSl2gg("Attempting to import modid-0."_fu, ss, _helpers, _here, ctx, module);

}

static void _Scope_import__forceCopy_privates_xW64Lr5k(const int modid, s_SolverState& ss, const s_Context& ctx)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    ss._scope.items += fu::get_view(s.items, s.pub_items);
    ss._scope.converts += fu::get_view(s.converts, s.pub_cnvrts);
}

static void Scope_import_privates_c51hW63z(const int modid, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    {
        const int start = 0;
        fu::view<int> items = ss._scope.privates;
        fu::view<s_ScopeSkip> scope_skip = ss._ss.privates;
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
        _Scope_import__forceCopy_privates_xW64Lr5k(modid, ss, ctx);
    }
    else
        BUG_V2MSl2gg("Attempting to import_privates modid-0."_fu, ss, _helpers, _here, ctx, module);

}

static fu::vec<fu::str>& l_6_0_jDsr7tqA(s_Map_GCAYRMKeHTh& _)
{
    return _.keys;
}

static fu::vec<s_Type>& l_6_1_rqEP7IF6(s_Map_GCAYRMKeHTh& _)
{
    return _.vals;
}

                                #ifndef DEF_update_koYMkymDXld
                                #define DEF_update_koYMkymDXld
inline bool update_koYMkymD(const fu::str& item, const s_Type& extra, s_Map_GCAYRMKeHTh& _)
{
    int lo = 0;
    int hi = l_6_0_jDsr7tqA(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(l_6_0_jDsr7tqA(_)[i], item);
        if (cmp == 0)
        {
            l_6_1_rqEP7IF6(_).mutref(i) = s_Type(extra);
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_0_jDsr7tqA(_).insert(lo, fu::str(item));
    l_6_1_rqEP7IF6(_).insert(lo, s_Type(extra));
    return true;
}
                                #endif

                                #ifndef DEF_set_mUPT2O59u6j
                                #define DEF_set_mUPT2O59u6j
inline bool set_mUPT2O59(s_Map_GCAYRMKeHTh& _, const fu::str& key, const s_Type& value)
{
    return update_koYMkymD(key, value, _);
}
                                #endif

static void createTypedef_3zlE9IU2(const fu::str& id, const s_Type& annot, const s_Flags flags, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Struct& s = tryLookupUserType_XVsnoQiv(annot.vtype, ctx, module);
    if (s.target && !(flags & s_Flags_F_PUB))
        Scope_set_5Z1f2QqZ(ss._scope, id, s.target, !!(flags & s_Flags_F_SHADOW));
    else
    {
        const s_Target target = createRawTypedef_rDHIpaKD(id, s_Type(annot), flags, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        if (s.target)
        {
            GET_mut_uE8Nb6mH(target, ss, module) = s_Overload(GET_emAmLQ3D(s.target, ss, _helpers, _here, ctx, module));
            EXT_mut_JHD4gxS4(target, ss, module) = s_Extended(EXT_7eVl0gy6(s.target, ss, ctx, module));
        };
    };
}

inline static void l_27_41_CE6j5W9U(const fu::str& id, const s_TypeParam& tp, s_SpecExtras& res, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Type& type = tp.matched;
    if (!(!type))
    {
        if (tp.flags & s_TypeParamFlags_TP_isArgSpec)
            set_mUPT2O59(res.arg_spec_types, id, type);
        else
        {
            createTypedef_3zlE9IU2(id, type, s_Flags{}, ss, _helpers, _here, ctx, module);
        };
    };
}

                                #ifndef DEF_pairs_JealifvB0ml
                                #define DEF_pairs_JealifvB0ml
inline void pairs_JealifvB(const s_Map_KlcLuPSIt9g& _, s_SpecExtras& res, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < _.keys.size(); i++)
        l_27_41_CE6j5W9U(_.keys[i], _.vals[i], res, ss, _helpers, _here, ctx, module);

}
                                #endif

                                #ifndef DEF_steal_t1nNqERaqj3
                                #define DEF_steal_t1nNqERaqj3
inline fu::vec<s_ScopeItem> steal_t1nNqERa(fu::vec<s_ScopeItem>& a, const int start)
{
    /*MOV*/ fu::vec<s_ScopeItem> ret {};
    ret.resize((a.size() - start));
    for (int i = 0; i < ret.size(); i++)
        std::swap(ret.mutref(i), a.mutref((i + start)));

    a.shrink(start);
    return /*NRVO*/ ret;
}
                                #endif

static s_SpecExtras intoSpecExtras_iyEOU8qY(const s_Map_KlcLuPSIt9g& typeParams, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ s_SpecExtras res {};
    const int scopeItems0 = ss._scope.items.size();
    pairs_JealifvB(typeParams, res, ss, _helpers, _here, ctx, module);
    res.scope_items = steal_t1nNqERa(ss._scope.items, scopeItems0);
    return /*NRVO*/ res;
}

                                #ifndef DEF_exchange_jPHBkujOq4j
                                #define DEF_exchange_jPHBkujOq4j
inline s_Target exchange_jPHBkujO(s_Target& a, s_Target&& b)
{
    std::swap(a, b);
    return b;
}
                                #endif

static s_SolvedNode solved_ImEnL8ng(const s_Node& node, const s_Type& type, const fu::vec<s_SolvedNode>& items, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_clCALdMt(node.kind, type, node.flags, node.value, items, target, s_Helpers{}, _here);
}

static fu::vec<s_SolvedNode>& outItems_OolfJB5B(s_CurrentFn& _current_fn)
{
    return _current_fn.out.items;
}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

                                #ifndef DEF_get_LBOp06VfYBi
                                #define DEF_get_LBOp06VfYBi
inline const s_Type& get_LBOp06Vf(fu::view<fu::str> keys, fu::view<char> item, fu::view<s_Type> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(keys[i], item);
        if (cmp == 0)
            return extras[i];
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return (*(const s_Type*)fu::NIL);
}
                                #endif

                                #ifndef DEF_get_OJ3gYwrzlC8
                                #define DEF_get_OJ3gYwrzlC8
inline const s_Type& get_OJ3gYwrz(const s_Map_GCAYRMKeHTh& _, fu::view<char> key)
{
    return get_LBOp06Vf(_.keys, key, _.vals);
}
                                #endif

static s_SolvedNode createEmpty_3tvTwH58(const s_kind kind, const s_Type& type, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_clCALdMt(kind, type, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_SolvedNode solveTypedef_P3xel9zM(const s_Node& node, const s_Type& specType, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.items[LET_TYPE])
    {
        _here = node.items[LET_TYPE].token;
        fail_Ulv2WHKu("Type annotations on type aliases are not supported."_fu, ss, _helpers, _here, ctx, module);
    }
    else if (specType && !s_VFacts((specType.vfacts & s_VFacts_Typename)))
        BUG_V2MSl2gg("solveTypedef: specType is not a Typename"_fu, ss, _helpers, _here, ctx, module);
    else
    {
        const s_Node* _0;
        /*MOV*/ s_Type annot = (specType ? s_Type(specType) : evalTypeAnnot_NMH9TBVW((*(_0 = &(node.items[LET_INIT])) ? *_0 : fail_Ulv2WHKu("Type aliases must be initialized."_fu, ss, _helpers, _here, ctx, module)), false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
        fu::str id = ((node.flags & s_Flags_F_COMPOUND_ID) ? cleanID_j6ljQymd(node.value) : fu::str(node.value));
        createTypedef_3zlE9IU2(id, annot, node.flags, ss, _helpers, _here, ctx, module);
        if (node.flags & s_Flags_F_ARG)
        {
            s_Type relaxed = static_cast<s_Type&&>(annot);
            relaxed.vtype.quals &= ~q_USAGE;
            return createEmpty_3tvTwH58(s_kind_empty, relaxed, s_Target{}, _here);
        }
        else
        {
            return createEmpty_3tvTwH58(s_kind_empty, t_void, s_Target{}, _here);
        };
    };
}

                                #ifndef DEF_only_w5gyl1MppVj
                                #define DEF_only_w5gyl1MppVj
inline const fu::vec<s_Target>& only_w5gyl1Mp(fu::view<fu::vec<s_Target>> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_gCeFmDFw("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static void foreach_IdnAIzs3(const s_Target& t, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, s_Reorder& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
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
    if (nullary || (candidate = tryMatch__mutargs_A8RYaxmX(""_fu, TODO_FIX_reorder, TODO_FIX_conversions, error, false, (*(const s_Scope*)fu::NIL), fu::vec<s_SolvedNode>(ss.TODO_FIX_convert_args), s_Flags_F_CONVERSION, t, ss, _notes, _current_fn, _helpers, _here, ctx, module, options)))
    {
        const s_Target& t_1 = (nullary ? t : candidate);
        const s_Overload& convert = GET_emAmLQ3D(t_1, ss, _helpers, _here, ctx, module);
        if (convert.type)
        {
            s_Type convertType = ((convert.kind == s_kind_field) ? add_refs_u1ljuBgp((from ? from : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module)), s_Type(convert.type)) : s_Type(convert.type));
            const bool isStruct = isStruct_jSb6u57z(convertType.vtype);
            if (!(s_SolverStatus((convert.status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_FINALIZED)))) == s_SolverStatus_SS_DID_START))
            {
                if (isAssignableAsArgument_E3uCShzQ(expect, convertType, false, _here, ctx))
                {
                    if (match)
                    {
                        fu::str suffix = ((("\n"_fu + explainConversion_MC5S46hy(match, fu::view<char>{}, ss, _current_fn, _helpers, _here, ctx, module)) + "\n\tand:\n"_fu) + explainConversion_MC5S46hy((path + t_1), fu::view<char>{}, ss, _current_fn, _helpers, _here, ctx, module));
                        if (actual)
                            fail_Ulv2WHKu(((((("Conversion ambiguity, multiple ways to convert "_fu + humanizeType_adoPoPLu(actual, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " into "_fu) + humanizeType_adoPoPLu(expect, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + ":"_fu) + suffix), ss, _helpers, _here, ctx, module);
                        else
                            fail_Ulv2WHKu(((((qBAD_3PsDzMvu("using"_fu) + " ambiguity, multiple ways to obtain a "_fu) + humanizeType_adoPoPLu(expect, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " in this scope:"_fu) + suffix), ss, _helpers, _here, ctx, module);

                    }
                    else
                    {
                        match = path;
                        if (TODO_FIX_conversions)
                            match += only_w5gyl1Mp(TODO_FIX_conversions);

                        match += s_Target(t_1);
                    };
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
                                    fu::str err = "Conversion loop:\n"_fu;
                                    for (int i_1 = i; i_1 < path.size(); i_1++)
                                    {
                                        err += "\n\t    "_fu;
                                        const s_Overload& convert_1 = GET_emAmLQ3D(path[i_1], ss, _helpers, _here, ctx, module);
                                        err += ((x7E_gCeFmDFw(str_3AjvLtSQ(convert_1, ss, _helpers, _here, ctx, module), ": "_fu) + humanizeType_adoPoPLu(convertType, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " ->"_fu);
                                    };
                                    err += x7E_gCeFmDFw("\n\t        "_fu, str_3AjvLtSQ(convert, ss, _helpers, _here, ctx, module));
                                    fail_Ulv2WHKu(err, ss, _helpers, _here, ctx, module);
                                };
                            };
                        };
                        const int path0 = path.size();
                        fu_DEFER(path.shrink(path0));
                        if (TODO_FIX_conversions)
                            path += only_w5gyl1Mp(TODO_FIX_conversions);

                        path += s_Target(t_1);
                        descend_GwAnut0U(convertType, false, isStruct, false, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    };
                };
            };
        }
        else
            fail_Ulv2WHKu((x7E_gCeFmDFw("No convert.type, perhaps a `using inline fn` without a return type annotation: `"_fu, str_3AjvLtSQ(convert, ss, _helpers, _here, ctx, module)) + "`."_fu), ss, _helpers, _here, ctx, module);

    };
}

inline static void l_27_13_tbRyArJz(const s_Target& u, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, s_Reorder& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    foreach_IdnAIzs3(u, from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

                                #ifndef DEF_each_Fw94oyXQf2i
                                #define DEF_each_Fw94oyXQf2i
inline void each_Fw94oyXQ(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, s_Reorder& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
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
                l_27_13_tbRyArJz(items[i_1], from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

            i0 = ss_1.end;
        };
    };
}
                                #endif

                                #ifndef DEF_each_lYQ5CbunM0h
                                #define DEF_each_lYQ5CbunM0h
inline void each_lYQ5Cbun(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, s_Reorder& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
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
                foreach_IdnAIzs3(items[i_1], from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

            i0 = ss_1.end;
        };
    };
}
                                #endif

static void descend_GwAnut0U(const s_Type& from, const bool nullary, const bool isStruct, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, s_Reorder& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (nullary)
        each_Fw94oyXQ(fu::vec<s_Target>((local_scope ? ss._scope : misc_scope).usings), fu::vec<s_ScopeSkip>((local_scope ? ss._ss.usings : (*(const fu::vec<s_ScopeSkip>*)fu::NIL))), 0, from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else
    {
        if (isStruct)
        {
            fu::vec<s_Target> inner { lookupUserType_Dk03wXlJ(from, ss, _helpers, _here, ctx, module).converts };
            for (int i = 0; i < inner.size(); i++)
                foreach_IdnAIzs3(s_Target(inner[i]), from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

        };
        if (has_converts)
            each_lYQ5Cbun(fu::vec<s_Target>((local_scope ? ss._scope : misc_scope).converts), fu::vec<s_ScopeSkip>((local_scope ? ss._ss.converts : (*(const fu::vec<s_ScopeSkip>*)fu::NIL))), 0, from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

    };
}

static fu::vec<s_Target> tryConvert_72F8WtpU(const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::vec<s_Target> match {};
    fu::vec<s_Target> path {};
    const int has_converts = (local_scope ? ss._scope : misc_scope).converts.size();
    s_SolvedNode arg0 { ss.TODO_FIX_convert_args[0] };
    s_Reorder TODO_FIX_reorder {};
    fu::vec<fu::vec<s_Target>> TODO_FIX_conversions {};
    descend_GwAnut0U(actual, !actual, isStruct_jSb6u57z(actual.vtype), true, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return /*NRVO*/ match;
}

                                #ifndef DEF_steal_LyWpwxOay3c
                                #define DEF_steal_LyWpwxOay3c
inline s_SolvedNode steal_LyWpwxOa(s_SolvedNode& v)
{
    /*MOV*/ s_SolvedNode ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

                                #ifndef DEF_if_last_GN4mikiykv7
                                #define DEF_if_last_GN4mikiykv7
inline const s_SolvedNode& if_last_GN4mikiy(fu::view<s_SolvedNode> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return (*(const s_SolvedNode*)fu::NIL);

}
                                #endif

static s_SolvedNode createBlock_UZ3zi9cx(const s_Type& type, fu::vec<s_SolvedNode>&& items, const s_Helpers& h, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = items.size(); i-- > 0; )
    {
        const s_SolvedNode& item = items[i];
        const s_kind k = item.kind;
        if (k == s_kind_block)
        {
            if (if_last_GN4mikiy(item.items).kind == s_kind_unwrap)
            {
                const s_HelpersData* BL_5_v;
                if ((item.kind == s_kind_block) && !s_HelpersMask(((__extension__ (
                {
                    const s_Helpers& h_1 = item.helpers;
                    BL_5_v = &(ss._helpers_data[h_1.index]);
                (void)0;}), *BL_5_v).mask & s_HelpersMask_HM_LabelUsed)))
                    items.splice(i, 1, fu::slice(item.items, 0, (item.items.size() - 1)));
                else
                    fail_Ulv2WHKu("`unwrap` doesn't currently support early returns."_fu, ss, _helpers, _here, ctx, module);

            };
        };
    };
    return SolvedNode_clCALdMt(s_kind_block, type, s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, h, _here);
}

static int findRestStart_Fe91zW83(const s_Extended& ext)
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

static s_Type solveArrlit_itemType_init_YDl5Iciz(const s_Type& head, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    s_Type _0 {};
    return (_0 = clear_refs_40rRB6L8(s_Type(head))) ? static_cast<s_Type&&>(_0) : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
}

static s_Type superType_t4L5sdd8(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu::str& id, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    s_Type _0 {};
    return (_0 = type_trySuper_2nNLpyR4(a, b, false, _here, ctx)) ? static_cast<s_Type&&>(_0) : fail_Ulv2WHKu(((((((id ? (qID_3PsDzMvu(id) + ": "_fu) : fu::str{}) + reason) + "No common supertype: "_fu) + humanizeType_adoPoPLu(a, true, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " | "_fu) + humanizeType_adoPoPLu(b, true, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
}

static s_Type solveArrlit_itemType_mKGuFl6v(fu::view<s_SolvedNode> items, /*MOV*/ s_Type&& itemType, int start, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!itemType)
    {
        if (start == items.size())
            fail_Ulv2WHKu("Cannot infer empty arraylit."_fu, ss, _helpers, _here, ctx, module);
        else
            itemType = solveArrlit_itemType_init_YDl5Iciz(items[start++].type, ss, _helpers, _here, ctx, module);

    }
    else if (is_ref_gBx1AgSx(itemType))
        fail_Ulv2WHKu("Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu, ss, _helpers, _here, ctx, module);

    for (int i = start; i < items.size(); i++)
        itemType = superType_t4L5sdd8("Array literal: "_fu, itemType, items[i].type, (*(const fu::str*)fu::NIL), ss, _helpers, _here, ctx, module);

    return static_cast<s_Type&&>(itemType);
}

static s_Type solveArrlit_done_JH9h3Ykv(const s_Type& itemType, const int itemCount, const s_Options& options)
{
    /*MOV*/ s_Type arrayType = createArray_i5AzHnyb(itemType);
    if ((itemCount >= 0) && !s_DevOptions((options.dev & s_DevOptions_DEV_DontFoldLiterals)))
        arrayType.vfacts = (itemCount ? s_VFacts_AlwaysTrue : s_VFacts_AlwaysFalse);

    return /*NRVO*/ arrayType;
}

static s_SolvedNode createArrlit_GhCOY9XZ(fu::vec<s_SolvedNode>&& items, const s_Type& itemType, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    s_Type itemType_1 = solveArrlit_itemType_mKGuFl6v(items, s_Type(itemType), 0, ss, _helpers, _here, ctx, module);
    return SolvedNode_clCALdMt(s_kind_arrlit, solveArrlit_done_JH9h3Ykv(itemType_1, items.size(), options), s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
}

static int GET_next_local_index_m7ZM3Mg2(const s_SolverState& ss, const s_CurrentFn& _current_fn)
{
    int BL_1_v {};
    const int globid = (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v);
    if (globid)
        return ss._scope.extended[globid].locals.size() + 1;
    else
        return 0;

}

                                #ifndef DEF_grow_if_oob_ym0SxAmdto9
                                #define DEF_grow_if_oob_ym0SxAmdto9
inline s_Helpers& grow_if_oob_ym0SxAmd(fu::vec<s_Helpers>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_grow_if_oob_sxKS3noZIQj
                                #define DEF_grow_if_oob_sxKS3noZIQj
inline s_Target& grow_if_oob_sxKS3noZ(fu::vec<s_Target>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_Lifetime_static
                                #define DEF_Lifetime_static
extern const s_Lifetime Lifetime_static;
                                #endif

                                #ifndef DEF_x3Dx3D_YBtWEgFnAid
                                #define DEF_x3Dx3D_YBtWEgFnAid
inline bool operator==(const s_Lifetime& a, const s_Lifetime& b)
{
    return !x3Cx3E_YBtWEgFn(a, b);
}
                                #endif

                                #ifndef DEF_TODO_FIX_static_ZSTs
                                #define DEF_TODO_FIX_static_ZSTs
inline constexpr bool TODO_FIX_static_ZSTs = true;
                                #endif

static s_Lifetime Lifetime_fromBinding_3Hs7tAj6(const s_Target& target, const int flatCount, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) || (int(unsigned((target._packed & 0xfffffull))) == module.modid))
    {
        const int locid = int(unsigned(((target._packed >> 40ull) & 0xfffffull)));
        if (locid && (flatCount || !TODO_FIX_static_ZSTs))
        {
            return Lifetime_from_LEyvF4Am(locid, _here, ctx);
        }
        else
        {
            return s_Lifetime(Lifetime_static);
        };
    }
    else
        BUG_V2MSl2gg("not from this module"_fu, ss, _helpers, _here, ctx, module);

}

static void TEST_LifetimeEqual_Dc1hWtSk(const s_Lifetime& a, fu::view<char> aa, const s_Lifetime& b, fu::view<char> bb, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(a == b))
    {
        BUG_V2MSl2gg((x7E_gCeFmDFw((((((x7E_gCeFmDFw((((("visitNode TEST_LifetimeEqual:"_fu + "\n\n\t    "_fu) + aa) + ":\t"_fu) + "("_fu), str_cj9SdYXi(a, ss, _helpers, _here, ctx, module)) + ")"_fu) + "\n\n\t    "_fu) + bb) + ":\t"_fu) + "("_fu), str_cj9SdYXi(b, ss, _helpers, _here, ctx, module)) + ")"_fu), ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_unless_oob_4dUJUNPZ2Ql
                                #define DEF_unless_oob_4dUJUNPZ2Ql
inline const s_Target& unless_oob_4dUJUNPZ(fu::view<s_Target> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_Target*)fu::NIL);

}
                                #endif

static int localOf_DvqCQ2NA(const s_Target& target, const s_SolverState& ss, const s_Module& module)
{
    if (isLocal_iPYw45vv(target))
        return int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
    else
        return EPH_rI6gXXKb(target, ss, module).local_of;

}

inline static s_SolvedNode TODO_FIX_pop_EY0kPFls(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

                                #ifndef DEF_has_P9xEJb6w1f3
                                #define DEF_has_P9xEJb6w1f3
inline bool has_P9xEJb6w(fu::view<s_Target> a, const s_Target& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu::str qSTACK_implicit_8Y6tWuev(const s_Target& target, const s_SolvedNode& node, fu::view<char> id, const s_Type& type, fu::view<s_Target> seen, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target nestingFnort0 = exchange_jPHBkujO(ss._nestingFnort, s_Target(target));
    fu_DEFER(ss._nestingFnort = nestingFnort0);
    fu::str candidates = ""_fu;
    fu::vec<s_Target> seen_1 = (seen + target);

    {
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_EY0kPFls(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_emAmLQ3D(node_1.target, ss, _helpers, _here, ctx, module).solved : node_1);
            s_SolvedNode BL_4_v {};
            s_SolvedNode node_3 = (__extension__ (
            {
                const s_SolvedNode& __partcopy_ref = ((node_2.kind == s_kind___preceding_ref_arg) ? _current_fn.events.preceding_ref_args[node_2.helpers.index].arg : node_2);
                BL_4_v = (s_SolvedNode { __partcopy_ref.kind, {}, {}, {}, {}, fu::vec<s_SolvedNode>(__partcopy_ref.items), s_TokenIdx(__partcopy_ref.token), {}, s_Target(__partcopy_ref.target) });
            (void)0;}), static_cast<s_SolvedNode&&>(BL_4_v));

            { {
                const s_CurrentFn& _current_fn_1 = _current_fn;
                if (node_3.kind == s_kind_let)
                {
                    const s_Target& candidate = node_3.target;
                    if (!(GET_emAmLQ3D(candidate, ss, _helpers, _here, ctx, module).flags & s_Flags_F_INJECTED) && (GET_emAmLQ3D(candidate, ss, _helpers, _here, ctx, module).name == id) && isAssignableAsArgument_E3uCShzQ(type, GET_emAmLQ3D(candidate, ss, _helpers, _here, ctx, module).type, false, _here, ctx))
                    {
                        candidates += (x7E_gCeFmDFw("\n        Possible candidate in "_fu, str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ": "_fu);
                        if (!(GET_emAmLQ3D(candidate, ss, _helpers, _here, ctx, module).flags & s_Flags_F_IMPLICIT))
                            candidates += qBAD_3PsDzMvu("NOT implicit "_fu);

                        candidates += explainWhichFn_9BM72ZzG(candidate, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn_1, _helpers, _here, ctx, module);
                    };
                };
                if (!((node_3.kind != s_kind_call) || isLocal_iPYw45vv(node_3.target)))
                {
                    if (!(has_P9xEJb6w(seen_1, node_3.target)))
                    {

                        { {
                            fu::view<s_Argument> host_args = EXT_7eVl0gy6(node_3.target, ss, ctx, module).args;
                            for (int i = 0; i < host_args.size(); i++)
                            {
                                const s_Argument& host_arg = host_args[i];
                                if ((host_arg.flags & s_Flags_F_IMPLICIT) && (host_arg.name == id) && isAssignableAsArgument_E3uCShzQ(host_arg.type, type, false, _here, ctx))
                                    goto BL_11;

                            };
                            goto BL_5;
                          } BL_11:;
                        };
                        fu::str peek = qSTACK_implicit_8Y6tWuev(s_Target(node_3.target), s_SolvedNode(GET_emAmLQ3D(node_3.target, ss, _helpers, _here, ctx, module).solved), id, type, seen_1, ss, _current_fn_1, _helpers, _here, ctx, module);
                        return (((x7E_gCeFmDFw(("\n            "_fu + "because of call to "_fu), str_3AjvLtSQ(GET_emAmLQ3D(node_3.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu) + addr_and_snippet_LWjqt07q(node_3.token, s_CodeFmt{}, fu::view<char>{}, ctx, module)) + peek) + candidates;
                    };
                };
              } BL_5:;
            };
            for (int i = node_3.items.size(); i-- > 0; )
                stack += s_SolvedNode(node_3.items[i]);

        };
    };
    fu::view<s_Argument> host_args = EXT_7eVl0gy6(target, ss, ctx, module).args;
    for (int i = 0; i < host_args.size(); i++)
    {
        const s_Argument& host_arg = host_args[i];
        if ((host_arg.flags & s_Flags_F_IMPLICIT) && (host_arg.name == id) && isAssignableAsArgument_E3uCShzQ(host_arg.type, type, false, _here, ctx))
        {
            return ("\n            "_fu + "because of "_fu) + explainWhichFn_9BM72ZzG(host_arg.target, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn, _helpers, _here, ctx, module);
        };
    };
    return ""_fu;
}

static s_Type intersectionType_G5CBbyH4(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu::str& id, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    s_Type _0 {};
    return (_0 = type_tryIntersect_RYGee21D(a, b)) ? static_cast<s_Type&&>(_0) : fail_Ulv2WHKu(((((((id ? (qID_3PsDzMvu(id) + ": "_fu) : fu::str{}) + reason) + "Cannot intersect types: "_fu) + humanizeType_adoPoPLu(a, true, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " & "_fu) + humanizeType_adoPoPLu(b, true, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
}

static s_Target Binding_tcXPG9gL(const fu::str& id, /*MOV*/ s_Type&& type, const s_Flags flags, bool& shadows, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const fu::str& name = id;
    int BL_1_v {};
    const int local_of = (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v);
    if (ss._root_scope)
        autoshadow_HOmWyAvb(shadows, local_of, id, ss, _current_fn);

    const s_Target target = Scope_create_B5w8Fu3I(ss._scope, s_kind_var, name, (*(const s_Type*)fu::NIL), flags, s_SolverStatus{}, local_of, module);
    s_Overload& overload = GET_mut_uE8Nb6mH(target, ss, module);

    {
        s_Lifetime lifetime = Lifetime_fromBinding_3Hs7tAj6(target, getFlatCount_XVsnoQiv(type.vtype, ctx, module), ss, _helpers, _here, ctx, module);
        type.lifetime = s_Lifetime{};
        overload.type = ((flags & s_Flags_F_MUT) ? add_mutref_XBf6EmLx(static_cast<s_Type&&>(type), lifetime, _here, ctx) : add_ref_XBf6EmLx(static_cast<s_Type&&>(type), lifetime, _here, ctx));
    };
    return target;
}

static s_SolvedNode& solved_set_gLBLu8o0(const s_Target& target, const s_SolvedNode& node, s_SolverState& ss, const s_Module& module)
{
    return (GET_mut_uE8Nb6mH(target, ss, module).solved = s_SolvedNode(node));
}

static s_Target createLet_implicitArg_xa8GEJwG(const fu::str& id, const s_Type& type, const s_Flags flags, bool& shadows, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target target = Binding_tcXPG9gL(id, s_Type(type), flags, shadows, ss, _current_fn, _helpers, _here, ctx, module);
    s_SolvedNode ret = SolvedNode_clCALdMt(s_kind_let, GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).type, flags, GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).name, (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
    solved_set_gLBLu8o0(target, ret, ss, module);
    return target;
}

                                #ifndef DEF_t_proposition
                                #define DEF_t_proposition
extern const s_Type t_proposition;
                                #endif

static s_SolvedNode createLetDef_BRRHta3h(const s_Target& target, const s_Type& letdefType, const s_TokenIdx& _here)
{
    return SolvedNode_clCALdMt(s_kind_letdef, ((letdefType == t_proposition) ? t_bool : t_void), s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_Target injectImplicitArg_i2ap4jTh(const fu::str& id, const s_Type& type, const s_Target& becauseOf, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!_current_fn.out.items || (_current_fn.out.flags & s_Flags_F_EXTERN))
    {
        fu::str _0 {};
        fu::str _1 {};
        (_1 = (_0 = (x7E_gCeFmDFw((((("No implicit "_fu + qBAD_3PsDzMvu(id)) + ": "_fu) + humanizeType_adoPoPLu(type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " in scope, needed to call "_fu), str_3AjvLtSQ(GET_emAmLQ3D(becauseOf, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ":\n"_fu), (static_cast<fu::str&&>(_0) + qSTACK_implicit_8Y6tWuev(becauseOf, s_SolvedNode(GET_emAmLQ3D(becauseOf, ss, _helpers, _here, ctx, module).solved), id, type, fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Ulv2WHKu(static_cast<fu::str&&>(_1), ss, _helpers, _here, ctx, module));
    }
    else
    {
        for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
        {
            s_SolvedNode& arg = _current_fn.out.items.mutref(i);
            const s_Target target { arg.target };
            s_SolvedNode& arg_1 = ((arg.kind == s_kind_letdef) ? GET_mut_uE8Nb6mH(target, ss, module).solved : arg);
            if ((arg_1.flags & s_Flags_F_IMPLICIT) && (arg_1.value == id))
            {
                if (arg_1.type == GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).type)
                {
                    /*MOV*/ s_Type super = intersectionType_G5CBbyH4("Implicit argument collision: "_fu, add_ref_XBf6EmLx(s_Type(type), arg_1.type.lifetime, _here, ctx), arg_1.type, id, ss, _helpers, _here, ctx, module);
                    arg_1.type = super;
                    GET_mut_uE8Nb6mH(target, ss, module).type = static_cast<s_Type&&>(super);
                    return (target ? target : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
                }
                else
                {
                    BUG_V2MSl2gg(("injectImplicitArg: arg.type != target.type:\n\n\t    "_fu + explainTypeDiff_adOaK2Pt(arg_1.type, GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).type, "<->"_fu, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                };
            };
        };
        bool shadows {};
        s_Flags flags = (((s_Flags_F_INJECTED | s_Flags_F_IMPLICIT) | s_Flags_F_ARG) | s_Flags_F_LAX);
        if (is_mutref_hoadAQC0(type, _here, ctx))
            flags |= (s_Flags_F_REF | s_Flags_F_RELAXABLE_REF);

        const s_Target newArgTarget = createLet_implicitArg_xa8GEJwG(id, type, flags, shadows, ss, _current_fn, _helpers, _here, ctx, module);
        const int newArgIdx = (_current_fn.out.items.size() + FN_ARGS_BACK);
        /*MOV*/ s_SolvedNode newLetDef = createLetDef_BRRHta3h(newArgTarget, (*(const s_Type*)fu::NIL), _here);
        _current_fn.out.items.insert(newArgIdx, static_cast<s_SolvedNode&&>(newLetDef));
        return newArgTarget;
    };
}

static void checkAssignable_Kg6rKWSk(const s_Type& host, const s_Type& guest, fu::view<char> err, const fu::str& id, const fu::str& sep, const bool asArgument, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(isAssignable_v8EzC34Q((host ? host : BUG_V2MSl2gg("Bad host type."_fu, ss, _helpers, _here, ctx, module)), (guest ? guest : BUG_V2MSl2gg("Bad guest type."_fu, ss, _helpers, _here, ctx, module)), false, asArgument, _here, ctx)))
    {
        fail_Ulv2WHKu((((((err + (id ? (" "_fu + qID_3PsDzMvu(id)) : fu::str{})) + ": "_fu) + humanizeType_adoPoPLu(host, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + (sep ? fu::str(sep) : " <- "_fu)) + humanizeType_adoPoPLu(guest, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    };
}

static s_SolvedNode bindImplicitArg_XpjA1BUN(const fu::str& name, const s_Type& type, const s_Target& becauseOf, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{

    {
        const s_ClosureID _ = tryParseClosureID_54NQWyOV(name, _here, ctx);
        int BL_2_v {};
        if (isLocal_iPYw45vv(_.target) && (localOf_DvqCQ2NA(_.target, ss, module) == (__extension__ (
        {
            const s_Target& t = _current_fn.out.target;
            BL_2_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_2_v)))
        {
            if (_.revision == EPH_rI6gXXKb(_current_fn.out.target, ss, module).revision)
            {
                if (GET_emAmLQ3D(_.target, ss, _helpers, _here, ctx, module).kind == s_kind_var)
                {
                    return CallerNode_SJHMcAaU("__closure"_fu, s_Target(_.target), fu::vec<s_SolvedNode>{}, (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                }
                else
                    BUG_V2MSl2gg(x7E_gCeFmDFw("ClosureID.target is not a var: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(_.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

            }
            else
                BUG_V2MSl2gg(x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("ClosureID.revision mismatch: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(_.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + "\n\tCaptured at: "_fu), fu::u64dec(_.revision)) + "\n\tCurrent rev: "_fu), fu::u64dec(EPH_rI6gXXKb(_current_fn.out.target, ss, module).revision)), ss, _helpers, _here, ctx, module);

        };
    };
    fu::str error {};
    s_Reorder reorder {};
    fu::vec<fu::vec<s_Target>> conversions {};
    s_Target _0 {};
    const s_Target target = ((_0 = tryMatch__mutargs_A8RYaxmX(fu::str(name), reorder, conversions, error, true, (*(const s_Scope*)fu::NIL), fu::view<s_SolvedNode>{}, s_Flags_F_IMPLICIT, s_Target{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options)) ? _0 : (_0 = injectImplicitArg_i2ap4jTh(name, type, becauseOf, ss, _current_fn, _helpers, _here, ctx, module)) ? _0 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
    /*MOV*/ s_SolvedNode call = CallerNode_SJHMcAaU("__implicit"_fu, s_Target(target), fu::vec<s_SolvedNode>{}, reorder, conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    checkAssignable_Kg6rKWSk(type, call.type, (("Implicit "_fu + qBAD_3PsDzMvu(name)) + " type mismatch"_fu), (*(const fu::str*)fu::NIL), (*(const fu::str*)fu::NIL), true, ss, _helpers, _here, ctx, module);
    return /*NRVO*/ call;
}

static s_Target injectForeignLocal_UxFJiX70(const s_Target& target, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).kind == s_kind_var)
    {
        const s_ClosureID noClID = tryParseClosureID_54NQWyOV(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).name, _here, ctx);
        if (noClID)
            BUG_V2MSl2gg(x7E_gCeFmDFw("injectForeignLocal: Unexpected closure-id: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(noClID.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    }
    else
        BUG_V2MSl2gg(x7E_gCeFmDFw("injectForeignLocal: trying to inject a non-var: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    if (GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).flags & s_Flags_F_IMPLICIT)
        return injectImplicitArg_i2ap4jTh(fu::str(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).name), s_Type(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).type), target, ss, _current_fn, _helpers, _here, ctx, module);
    else
    {
        unsigned _0 {};
        const s_ClosureID clID = s_ClosureID { s_Target(target), ((_0 = EPH_rI6gXXKb(parent_T9Vrzynx(target, ss, _helpers, _here, ctx, module), ss, module).revision) ? _0 : BUG_V2MSl2gg(x7E_gCeFmDFw("injectForeignLocal: About to serialize at rev 0: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module)) };
        return injectImplicitArg_i2ap4jTh(serialize_LBuqoCCv(clID, _here, ctx), s_Type(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).type), target, ss, _current_fn, _helpers, _here, ctx, module);
    };
}

static s_Target matchReplicaOrInjectForeignLocal_aAxEDCP9(const s_Target& target, const s_Type& slot, const s_Target& from, fu::view<s_Target> letdefReplicas, const int globidExpect, const int minLocalIdx, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (int(unsigned(((target._packed >> 20ull) & 0xfffffull))) != globidExpect)
        BUG_V2MSl2gg(("matchReplicaOrInjectForeignLocal: target.globid != globidExpect"_fu + ", will mess up the letdefReplicas minimap."_fu), ss, _helpers, _here, ctx, module);
    else
    {
        const s_Target& replica = unless_oob_4dUJUNPZ(letdefReplicas, int(unsigned(((target._packed >> 40ull) & 0xfffffull))));
        if (replica)
            return replica;
        else if (from == _current_fn.out.target)
        {
            if (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) < minLocalIdx)
                return target;
            else
                BUG_V2MSl2gg(x7E_gCeFmDFw("Missing a local replica for: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        }
        else
        {
            const s_Overload& o = GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module);
            if (o.flags & s_Flags_F_IMPLICIT)
                return bindImplicitArg_XpjA1BUN(fu::str(o.name), s_Type((slot ? slot : o.type)), from, ss, _notes, _current_fn, _helpers, _here, ctx, module, options).target;
            else if (int(unsigned((from._packed & 0xfffffull))) != module.modid)
                BUG_V2MSl2gg(x7E_gCeFmDFw("inlineExpression: about to use injectForeignLocal with an off-module target: "_fu, str_3AjvLtSQ(o, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
            else
                return injectForeignLocal_UxFJiX70(target, ss, _current_fn, _helpers, _here, ctx, module);

        };
    };
}

                                #ifndef DEF_unless_oob_BJxn0BDSPaa
                                #define DEF_unless_oob_BJxn0BDSPaa
inline const s_Helpers& unless_oob_BJxn0BDS(fu::view<s_Helpers> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_Helpers*)fu::NIL);

}
                                #endif

                                #ifndef DEF_only_GN4mikiykv7
                                #define DEF_only_GN4mikiykv7
inline const s_SolvedNode& only_GN4mikiy(fu::view<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_gCeFmDFw("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static const s_Type& Lifetime_climbType_n6B2CKz9(const s_Overload& o, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (o.kind == s_kind_var)
    {
        const s_SolvedNode& node = o.solved;
        if (is_ref_gBx1AgSx(node.type) && !(o.flags & s_Flags_F_ARG))
            return node.items[LET_INIT].type;
        else
            return (*(const s_Type*)fu::NIL);

    }
    else
    {
        BUG_V2MSl2gg(x7E_gCeFmDFw("Lifetime_climbType: not a `var`: "_fu, str_3AjvLtSQ(o, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    };
}

static bool Lifetime_allowsMutrefReturn_aArQuLX0(const s_Lifetime& lifetime, const int locals_start, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    { {
        fu::view<char> chars = lifetime.uni0n;
        int offset = 0;
        while (offset < chars.size())
        {
            const unsigned r = parseRegion(offset, chars);
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            if (!(!locid))
            {
                if (locid < locals_start)
                    goto BL_1;
                else
                {
                    const s_Overload& o = GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module);
                    if (is_mutref_hoadAQC0(o.type, _here, ctx))
                    {
                        if ((o.kind == s_kind_var) && !(o.flags & s_Flags_F_REF))
                            return false;
                        else
                        {
                            const s_Type& init = Lifetime_climbType_n6B2CKz9(o, ss, _helpers, _here, ctx, module);
                            if (!Lifetime_allowsMutrefReturn_aArQuLX0(init.lifetime, locals_start, ss, _helpers, _here, ctx, module))
                                return false;

                        };
                    }
                    else
                    {
                        BUG_V2MSl2gg(x7E_gCeFmDFw("Lifetime_allowsMutrefReturn: found non-mutref: "_fu, str_3AjvLtSQ(o, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                    };
                };
            };
        };
      } BL_1:;
    };
    return true;
}

static s_Type superType_neverOK_Sy4d8472(fu::view<char> reason, const s_Type& a, const s_Type& b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_never_FfV8Zuj5(a))
        return s_Type(b);
    else if (is_never_FfV8Zuj5(b))
        return s_Type(a);
    else
        return superType_t4L5sdd8(reason, a, b, (*(const fu::str*)fu::NIL), ss, _helpers, _here, ctx, module);

}

static void reportReturnType_fmwhJ2Cl(const s_Helpers& h, const s_Type& type, const bool NICEERR_missingReturn, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ s_Type type_1 = ((is_mutref_hoadAQC0(type, _here, ctx) && !Lifetime_allowsMutrefReturn_aArQuLX0(type.lifetime, ss._helpers_data[h.index].locals_start, ss, _helpers, _here, ctx, module)) ? clear_mutref_40rRB6L8(s_Type(type)) : s_Type(type));
    /*MOV*/ s_Type type_2 = (hasTemporary_Sd1Oo4TV(type_1.lifetime) ? clear_refs_40rRB6L8(static_cast<s_Type&&>(type_1)) : static_cast<s_Type&&>(type_1));
    if (ss._helpers_data[h.index].ret_expect)
        checkAssignable_Kg6rKWSk(ss._helpers_data[h.index].ret_expect, type_2, "Actual return type does not match annotation"_fu, (*(const fu::str*)fu::NIL), (*(const fu::str*)fu::NIL), false, ss, _helpers, _here, ctx, module);

    ss._helpers_data.mutref(h.index).ret_actual = (ss._helpers_data[h.index].ret_actual ? superType_neverOK_Sy4d8472((NICEERR_missingReturn ? "Missing final return: "_fu : "Subsequent return: "_fu), ss._helpers_data[h.index].ret_actual, type_2, ss, _helpers, _here, ctx, module) : static_cast<s_Type&&>(type_2));
    if (!(ss._helpers_data[h.index].ret_actual))
        BUG_V2MSl2gg("reportReturnType: no ret_actual."_fu, ss, _helpers, _here, ctx, module);

}

static s_SolvedNode createJump_LyIkrfb4(const s_Helpers& h, const s_SolvedNode& expr, const s_TokenIdx& _here)
{
    return SolvedNode_clCALdMt(s_kind_jump, t_never, s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, h, _here);
}

static s_SolvedNode solveJump_finish_u7T3VdOh(const s_Flags flags, const s_SolvedNode& expr, const s_Helpers& h, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    ss._helpers_data.mutref(h.index).mask |= s_HelpersMask_HM_LabelUsed;
    reportReturnType_fmwhJ2Cl(h, expr.type, !!(flags & s_Flags_F_IMPLICIT), ss, _helpers, _here, ctx, module);
    return createJump_LyIkrfb4(h, expr, _here);
}

                                #ifndef DEF_add_jzOp5jol7cb
                                #define DEF_add_jzOp5jol7cb
inline bool add_jzOp5jol(fu::vec<int>& keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_mJGU9byO(keys[i], item);
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

static void visit_Do827q26(const s_Lifetime& lifetime, s_Lifetime& result, bool& maybeOutOfOrder, const s_Target& from, fu::view<s_Target> letdefReplicas, const int globidExpect, const int minLocalIdx, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parseRegion(offset, chars);

        {
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            if (!(!locid))
            {
                const s_Target foreign = nested_Xjq8iMzb(locid, from);
                const s_Target local = matchReplicaOrInjectForeignLocal_aAxEDCP9(foreign, (*(const s_Type*)fu::NIL), from, letdefReplicas, globidExpect, minLocalIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                if (GET_emAmLQ3D(local, ss, _helpers, _here, ctx, module).flags & s_Flags_F_INLINE)
                {
                    const s_SolvedNode* _0;
                    const s_SolvedNode& init = (*(_0 = &(GET_emAmLQ3D(local, ss, _helpers, _here, ctx, module).solved.items[LET_INIT])) ? *_0 : BUG_V2MSl2gg("inlineExpression: F_INLINE local has no LET_INIT."_fu, ss, _helpers, _here, ctx, module));
                    const s_Lifetime& replacement = (init.type.lifetime ? init.type.lifetime : Lifetime_temporary);
                    maybeOutOfOrder = true;
                    Lifetime_add_PKO62rQ1(result, replacement);
                    continue;
                }
                else
                {
                    const s_Lifetime* _1;
                    const s_Lifetime& replacement = (*(_1 = &(GET_emAmLQ3D(local, ss, _helpers, _here, ctx, module).type.lifetime)) ? *_1 : BUG_V2MSl2gg("visitType: !local.type.lifetime"_fu, ss, _helpers, _here, ctx, module));
                    maybeOutOfOrder = true;
                    Lifetime_add_PKO62rQ1(result, replacement);
                    continue;
                };
            };
        };
        if (maybeOutOfOrder)
        {
            result = Lifetime_union_doHetu2L(result, s_Lifetime { fu::slice(chars, offset0, offset) });
        }
        else
            result.uni0n += fu::get_view(chars, offset0, offset);

    };
}

                                #ifndef DEF_Lifetime_process_lS4IlOeEgQ3
                                #define DEF_Lifetime_process_lS4IlOeEgQ3
inline s_Lifetime Lifetime_process_lS4IlOeE(const s_Lifetime& lifetime, const s_Target& from, fu::view<s_Target> letdefReplicas, const int globidExpect, const int minLocalIdx, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ s_Lifetime result {};
    bool maybeOutOfOrder = false;
    visit_Do827q26(lifetime, result, maybeOutOfOrder, from, letdefReplicas, globidExpect, minLocalIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return /*NRVO*/ result;
}
                                #endif

static void visitType_JOm7nBEK(s_Type& type, const s_Target& from, fu::view<s_Target> letdefReplicas, const int globidExpect, const int minLocalIdx, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    type.lifetime = Lifetime_process_lS4IlOeE(type.lifetime, from, letdefReplicas, globidExpect, minLocalIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

static void visitNode_JKLKgnXF(s_SolvedNode& expr, const int locals_start, const s_Target& from, fu::vec<s_Target>& letdefReplicas, const s_Target& must_not_call, const int globidExpect, const int minLocalIdx, fu::vec<s_Helpers>& helpersReplicas, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if ((expr.kind == s_kind_block) || (expr.kind == s_kind_loop))
    {
        const s_Helpers& foreign = expr.helpers;
        if (foreign)
        {
            int BL_3_v {};
            const s_Helpers local = push_lQ0cD0js(s_HelpersData { s_Target{}, s_SolverPass{}, fu::str{}, s_HelpersMask{}, (__extension__ (
            {
                const s_Target& t = _current_fn.out.target;
                BL_3_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
            (void)0;}), BL_3_v), (locals_start ? locals_start : GET_next_local_index_m7ZM3Mg2(ss, _current_fn)), s_Type{}, s_Type(expr.type), fu::vec<s_Type>{}, s_Postdom{}, s_Postdom{}, s_EventsSnap{}, s_Helpers{} }, ss, _helpers);
            grow_if_oob_ym0SxAmd(helpersReplicas, foreign.index) = s_Helpers((local ? local : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module)));
            expr.helpers = local;
        };
    };
    for (int i = 0; i < expr.items.size(); i++)
        visitNode_JKLKgnXF(expr.items.mutref(i), 0, from, letdefReplicas, must_not_call, globidExpect, minLocalIdx, helpersReplicas, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

    if (expr.kind == s_kind_letdef)
    {
        int BL_7_v {};
        if ((__extension__ (
        {
            const s_Target& t = expr.target;
            BL_7_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_7_v) != globidExpect)
            BUG_V2MSl2gg("inlineExpression: letdef doesn't match globidExpect"_fu, ss, _helpers, _here, ctx, module);
        else
        {
            /*MOV*/ s_Overload foreign { GET_emAmLQ3D(expr.target, ss, _helpers, _here, ctx, module) };
            int BL_10_v {};
            const s_Target local = Scope_create_B5w8Fu3I(ss._scope, s_kind___no_kind_yet, (*(const fu::str*)fu::NIL), (*(const s_Type*)fu::NIL), s_Flags{}, s_SolverStatus{}, (__extension__ (
            {
                const s_Target& t = _current_fn.out.target;
                BL_10_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
            (void)0;}), BL_10_v), module);
            int BL_11_v {};
            grow_if_oob_sxKS3noZ(letdefReplicas, (__extension__ (
            {
                const s_Target& t = expr.target;
                BL_11_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
            (void)0;}), BL_11_v)) = s_Target((local ? local : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module)));
            /*MOV*/ s_Type type { foreign.type };
            if (type.lifetime == Lifetime_static)
            {
                if (!(is_zst_XVsnoQiv(type.vtype, ctx, module)))
                {
                    BUG_V2MSl2gg(x7E_gCeFmDFw("Unexpected static lifetime on "_fu, str_3AjvLtSQ(foreign, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                };
            }
            else
            {
                const int flatCount = getFlatCount_XVsnoQiv(type.vtype, ctx, module);
                TEST_LifetimeEqual_Dc1hWtSk(type.lifetime, "foreign.type.lifetime"_fu, Lifetime_fromBinding_3Hs7tAj6(expr.target, flatCount, ss, _helpers, _here, ctx, module), "Lifetime_fromBinding"_fu, ss, _helpers, _here, ctx, module);
                type.lifetime = Lifetime_fromBinding_3Hs7tAj6(local, flatCount, ss, _helpers, _here, ctx, module);
            };
            /*MOV*/ s_SolvedNode solved { foreign.solved };
            if ((solved.kind == s_kind_let) && (solved.target == expr.target))
            {
                solved.target = local;
                visitNode_JKLKgnXF(solved, 0, from, letdefReplicas, must_not_call, globidExpect, minLocalIdx, helpersReplicas, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                GET_mut_uE8Nb6mH(local, ss, module) = s_Overload { foreign.kind, (foreign.flags & ~s_Flags_F_ARG), s_SolverStatus((foreign.status & s_SolverStatus_SS_MATCHED)), static_cast<fu::str&&>(foreign.name), static_cast<s_Type&&>(type), static_cast<s_SolvedNode&&>(solved) };
                expr.target = local;
            }
            else
            {
                BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
            };
        };
    }
    else if (expr.kind == s_kind_call)
    {
        if (isLocal_iPYw45vv(expr.target))
        {
            const s_Target local = matchReplicaOrInjectForeignLocal_aAxEDCP9(expr.target, expr.type, from, letdefReplicas, globidExpect, minLocalIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

            {
                const s_Overload& foreign = GET_emAmLQ3D(expr.target, ss, _helpers, _here, ctx, module);
                if (!(isAssignable_v8EzC34Q(foreign.type, GET_emAmLQ3D(local, ss, _helpers, _here, ctx, module).type, false, false, _here, ctx) || (is_never_FfV8Zuj5(GET_emAmLQ3D(local, ss, _helpers, _here, ctx, module).type) && (GET_emAmLQ3D(local, ss, _helpers, _here, ctx, module).flags & s_Flags_F_INLINE))))
                    BUG_V2MSl2gg((((((x7E_gCeFmDFw("matchReplicaOrInjectForeignLocal botching the type of "_fu, str_3AjvLtSQ(foreign, ss, _helpers, _here, ctx, module)) + ":\n"_fu) + "\n\t\tExpect: "_fu) + humanizeType_adoPoPLu(foreign.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + "\n\t\tActual: "_fu) + humanizeType_adoPoPLu(GET_emAmLQ3D(local, ss, _helpers, _here, ctx, module).type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

            };
            expr.target = local;
            GET_mut_uE8Nb6mH(local, ss, module).status |= s_SolverStatus_SS_MATCHED;
            expr.type.vfacts = GET_emAmLQ3D(local, ss, _helpers, _here, ctx, module).type.vfacts;
        }
        else if (expr.target == must_not_call)
            fail_Ulv2WHKu(x7E_gCeFmDFw("Cannot inline self-recursive fns: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(expr.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    }
    else if ((expr.kind == s_kind_jump) || (expr.kind == s_kind___far_jump))
    { {
        if (expr.kind == s_kind_jump)
        {
            const s_Helpers& foreign = expr.helpers;
            const s_Helpers& local = unless_oob_BJxn0BDS(helpersReplicas, foreign.index);
            if (local)
            {
                expr.helpers = local;
                ss._helpers_data.mutref(local.index).mask |= s_HelpersMask_HM_LabelUsed;
                goto BL_22;
            }
            else
                expr.kind = s_kind___far_jump;

        };
        const s_HelpersData* BL_26_v;
        int BL_27_v {};
        if ((__extension__ (
        {
            const s_Helpers& h = expr.helpers;
            BL_26_v = &(ss._helpers_data[h.index]);
        (void)0;}), *BL_26_v).local_of == (__extension__ (
        {
            const s_Target& t = _current_fn.out.target;
            BL_27_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_27_v))
            expr = solveJump_finish_u7T3VdOh(expr.flags, only_GN4mikiy(expr.items), expr.helpers, ss, _helpers, _here, ctx, module);
        else
        {
            const s_HelpersData* BL_30_v;
            add_jzOp5jol(_current_fn.effects.far_jumps, (__extension__ (
            {
                const s_Helpers& h = expr.helpers;
                BL_30_v = &(ss._helpers_data[h.index]);
            (void)0;}), *BL_30_v).local_of);
        };
      } BL_22:;
    };
    visitType_JOm7nBEK(expr.type, from, letdefReplicas, globidExpect, minLocalIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (expr.kind == s_kind_call)
    {
        if (isLocal_iPYw45vv(expr.target) && (GET_emAmLQ3D(expr.target, ss, _helpers, _here, ctx, module).flags & s_Flags_F_INLINE))
        {
            const s_SolvedNode* _0;
            expr = (*(_0 = &(GET_emAmLQ3D(expr.target, ss, _helpers, _here, ctx, module).solved.items[LET_INIT])) ? *_0 : BUG_V2MSl2gg("inlineExpression: F_INLINE local has no LET_INIT."_fu, ss, _helpers, _here, ctx, module));
        };
    }
    else if (expr.helpers)
    {
        if ((expr.kind == s_kind_block) || (expr.kind == s_kind_loop))
        {
            const s_HelpersData* BL_35_v;
            if ((__extension__ (
            {
                const s_Helpers& h = expr.helpers;
                BL_35_v = &(ss._helpers_data[h.index]);
            (void)0;}), *BL_35_v).ret_actual)
            {
                s_Type ret_actual {};
                s_HelpersData* BL_37_v;
                std::swap(ret_actual, (__extension__ (
                {
                    const s_Helpers& h = expr.helpers;
                    BL_37_v = &(ss._helpers_data.mutref(h.index));
                (void)0;}), *BL_37_v).ret_actual);
                visitType_JOm7nBEK(ret_actual, from, letdefReplicas, globidExpect, minLocalIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                s_HelpersData* BL_38_v;
                std::swap(ret_actual, (__extension__ (
                {
                    const s_Helpers& h = expr.helpers;
                    BL_38_v = &(ss._helpers_data.mutref(h.index));
                (void)0;}), *BL_38_v).ret_actual);
            };
        }
        else if ((expr.kind != s_kind_jump) && (expr.kind != s_kind___far_jump))
            BUG_V2MSl2gg(x7E_gCeFmDFw("inlineExpression: TODO handle .helpers on a "_fu, str_ZGqrvxJv(expr.kind)), ss, _helpers, _here, ctx, module);

    };
}

static s_SolvedNode inlineExpression_vv4lxccS(const s_Target& from, /*MOV*/ s_SolvedNode&& expr, fu::vec<s_Target>&& letdefReplicas, const int locals_start, const s_Target& must_not_call, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (from)
    {

        {
            const int helpers0 = _helpers.size();
            fu_DEFER(_helpers.shrink(helpers0));
            const int globidExpect = int(unsigned(((from._packed >> 20ull) & 0xfffffull)));
            const int minLocalIdx = GET_next_local_index_m7ZM3Mg2(ss, _current_fn);
            fu::vec<s_Helpers> helpersReplicas {};
            visitNode_JKLKgnXF(expr, locals_start, from, letdefReplicas, must_not_call, globidExpect, minLocalIdx, helpersReplicas, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        };
        return static_cast<s_SolvedNode&&>(expr);
    }
    else
        BUG_V2MSl2gg("TODO inlining from global scope, never happened before, might work, remove assert as needed."_fu, ss, _helpers, _here, ctx, module);

}

static s_SolvedNode deadCall_pmuC8X9l(const fu::vec<s_SolvedNode>& args, const s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{

    {
        const s_SolverNotes note = s_SolverNotes_N_DeadCall;
        if (note & options.break_notes)
            fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss, _helpers, _here, ctx, module);
        else
            _notes |= note;

    };
    return createBlock_UZ3zi9cx(t_never, fu::vec<s_SolvedNode>(args), s_Helpers{}, ss, _helpers, _here, ctx, module);
}

inline static bool l_27_4_efcKvGjk(const int locid, const bool isStatic, const bool staticOK, const int expect)
{
    return (locid ? (!expect || (locid == expect)) : false) || (!isStatic ? isStatic : staticOK);
}

                                #ifndef DEF_Lifetime_if_only_ZVzCteew89c
                                #define DEF_Lifetime_if_only_ZVzCteew89c
inline bool Lifetime_if_only_ZVzCteew(const s_Lifetime& lifetime, const bool staticOK, const int expect)
{
    bool first = true;

    { {
        fu::view<char> chars = lifetime.uni0n;
        int offset = 0;
        while (offset < chars.size())
        {
            const unsigned r = parseRegion(offset, chars);
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            const bool isStatic = (r == 0u);
            if (!first)
                goto BL_1;
            else
            {
                first = false;
                if (l_27_4_efcKvGjk(locid, isStatic, staticOK, expect))
                    return true;

            };
        };
      } BL_1:;
    };
    return false;
}
                                #endif

static void TEST_varLifetime_YYo9tRSJ(const s_Lifetime& lifetime, const bool staticOK, const int expect, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!Lifetime_if_only_ZVzCteew(lifetime, staticOK, expect))
    {
        BUG_V2MSl2gg(x7E_gCeFmDFw("Bad local lifetime: "_fu, str_cj9SdYXi(lifetime, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    };
}

static void detectRecursion_zINRgXCk(const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Overload& overload = GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module);
    if (!(s_SolverStatus((overload.status & s_SolverStatus((s_SolverStatus_SS_FINALIZED | s_SolverStatus_SS_LAZY)))) != s_SolverStatus_SS_LAZY))
    {
        const s_SolverNotes note = ((overload.kind == s_kind_type) ? s_SolverNotes_N_TypeRecursion : s_SolverNotes_N_FnRecursion);
        const s_SolverStatus status = ((overload.kind == s_kind_type) ? s_SolverStatus_SS_TYPE_RECUR : s_SolverStatus_SS_FN_RECUR);
        for (int i = _helpers.size(); i-- > 0; )
        {
            const s_Helpers& h = _helpers[i];
            if (!(!isFnOrType_ebyzFAhm(h, ss)))
            {
                GET_mut_uE8Nb6mH(ss._helpers_data[h.index].target, ss, module).status |= status;

                {
                    const s_SolverState& ss_1 = ss;
                    if (note & options.break_notes)
                        fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                    else
                        _notes |= note;

                };
                if (ss._helpers_data[h.index].target == target)
                    return;

            };
        };
        BUG_V2MSl2gg((x7E_gCeFmDFw((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu), str_MgDgAP7t(overload.status)) + ")`."_fu), ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_last_Iovd0TM6VE8
                                #define DEF_last_Iovd0TM6VE8
inline s_SolvedNode& last_Iovd0TM6(fu::view_mut<s_SolvedNode> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static void applyRetype_y49lzuvP(s_SolvedNode& node, const s_Type& retype, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (node.kind == s_kind_if)
    {
        s_SolvedNode* _0;
        (_0 = &(node.items.mutref(1)), applyRetype_y49lzuvP(*_0, retype, ss, _helpers, _here, ctx, module));
        s_SolvedNode* _1;
        (_1 = &(node.items.mutref(2)), applyRetype_y49lzuvP(*_1, retype, ss, _helpers, _here, ctx, module));
    }
    else if (node.kind == s_kind_block)
    {
        const s_HelpersData* BL_3_v;
        if ((__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_3_v = &(ss._helpers_data[h.index]);
        (void)0;}), *BL_3_v).mask & s_HelpersMask_HM_LabelUsed)
            BUG_V2MSl2gg("Trying to retype a labelled block, we cant do this still."_fu, ss, _helpers, _here, ctx, module);
        else
        {
            s_SolvedNode* _2;
            (_2 = &(last_Iovd0TM6(node.items)), applyRetype_y49lzuvP(*_2, retype, ss, _helpers, _here, ctx, module));
        };
    };
    node.type = retype;
}

inline static void l_27_52_y26YVXJ9(const s_Target& target, const fu::str& id, const bool shadows, s_SolverState& ss)
{
    Scope_set_pOqhE364(ss._scope.items, id, target, shadows);
}

                                #ifndef DEF_unpackAddrOfFn_IAOAOO9RfO3
                                #define DEF_unpackAddrOfFn_IAOAOO9RfO3
inline void unpackAddrOfFn_IAOAOO9R(fu::view<char> canon, const fu::str& id, const bool shadows, s_SolverState& ss)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            const s_Target mi = parseLocalOrGlobal_qtvefzpE(canon, offset);
            l_27_52_y26YVXJ9(Target_2jgCJZJY(int(unsigned((mi._packed & 0xfffffull))), int(unsigned(((mi._packed >> 20ull) & 0xfffffull))), int(unsigned(((mi._packed >> 40ull) & 0xfffffull)))), id, shadows, ss);
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

static void Scope_set_S1ZSNL0k(const s_Target& target, const s_SolvedNode& out, const bool setScope, const bool shadows, const fu::str& id, s_SolverState& ss)
{
    if (!(!setScope))
    {
        Scope_set_5Z1f2QqZ(ss._scope, id, target, shadows);
        if (out.flags & s_Flags_F_IMPLICIT)
            Scope_set_pOqhE364(ss._scope.implicits, id, target, shadows);

        if (out.flags & s_Flags_F_USING)
            ss._scope.usings.push(s_Target(target));

    };
}

static s_SolvedNode solveLet_createBindingAndGetLetdef_24Uai0gR(/*MOV*/ s_SolvedNode&& out, const fu::str& id, const bool setScope, const s_Type& letdefType, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (out.kind != s_kind_let)
    {
        if (is_never_FfV8Zuj5(out.type))
            return static_cast<s_SolvedNode&&>(out);
        else
            BUG_V2MSl2gg((((x7E_gCeFmDFw("solveLet: results in a `"_fu, str_ZGqrvxJv(out.kind)) + ": "_fu) + id) + "`."_fu), ss, _helpers, _here, ctx, module);

    }
    else
    {
        bool shadows = !!(out.flags & s_Flags_F_SHADOW);
        const s_Flags isArg = (out.flags & s_Flags_F_ARG);
        fu::str id_1 = ((out.flags & s_Flags_F_COMPOUND_ID) ? cleanID_j6ljQymd(id) : fu::str(id));
        if (isAddrOfFn_gBx1AgSx(out.type))
        {
            const bool shadows_1 = true;
            if (setScope)
                unpackAddrOfFn_IAOAOO9R(out.type.vtype.canon, id_1, shadows_1, ss);

        }
        else
        {
            if (!isArg && !(out.flags & (s_Flags_F_PUB | s_Flags_F_MUT)))
            {
                const s_SolvedNode& init = out.items[LET_INIT];
                if ((init.kind == s_kind_call) && !init.items)
                {
                    const s_Target& target = init.target;
                    const s_Overload& other = GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module);
                    if (other.kind == s_kind_var)
                    {
                        if (isAssignable_v8EzC34Q(other.type, out.type, false, false, _here, ctx))
                        {
                            Scope_set_S1ZSNL0k(target, out, setScope, shadows, id_1, ss);
                            out = createEmpty_3tvTwH58(s_kind_empty, t_void, target, _here);
                            return static_cast<s_SolvedNode&&>(out);
                        };
                    };
                };
            };
            const s_Target& target = (out.target = Binding_tcXPG9gL(id_1, s_Type(out.type), out.flags, shadows, ss, _current_fn, _helpers, _here, ctx, module));
            if (!hasTemporary_Sd1Oo4TV(out.type.lifetime) || isArg)
            {
                if (out.type.vfacts & s_VFacts_Typename)
                    BUG_V2MSl2gg("solveLet_createBindingAndGetLetdef: Ended up with a Typename"_fu, ss, _helpers, _here, ctx, module);

            }
            else
            {
                BUG_V2MSl2gg("solveLet_createBindingAndGetLetdef: Non-argument lifetime.hasTemporary"_fu, ss, _helpers, _here, ctx, module);
            };
            solved_set_gLBLu8o0(target, out, ss, module);
            Scope_set_S1ZSNL0k(target, out, setScope, shadows, id_1, ss);
            return createLetDef_BRRHta3h(target, letdefType, _here);
        };
        if (isArg)
        {
            if (isAddrOfFn_gBx1AgSx(out.type))
                out.type = clear_refs_40rRB6L8(s_Type(out.type));

            return static_cast<s_SolvedNode&&>(out);
        }
        else
        {
            return createEmpty_3tvTwH58(s_kind_empty, t_void, s_Target{}, _here);
        };
    };
}

static s_SolvedNode createLet_XLWvNSXP(const fu::str& id, const s_Flags flags, const s_SolvedNode& init, const bool setScope, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ s_SolvedNode out = solveLetLike_dontTouchScope_fHqdpLzV(id, flags, s_SolvedNode(init), (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return solveLet_createBindingAndGetLetdef_24Uai0gR(static_cast<s_SolvedNode&&>(out), id, setScope, (*(const s_Type*)fu::NIL), ss, _current_fn, _helpers, _here, ctx, module);
}

static fu::str str_cmTVYQgp(const s_SolvedNode& n, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::str src = qKW_3PsDzMvu(str_ZGqrvxJv(n.kind));
    if ((n.kind == s_kind_call) || (n.kind == s_kind_let) || (n.kind == s_kind_letdef))
        src += (x7E_gCeFmDFw("("_fu, str_3AjvLtSQ(GET_emAmLQ3D(n.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ")"_fu);
    else if (n.value)
        src += (("("_fu + qID_3PsDzMvu(n.value)) + ")"_fu);

    if (n.type)
        src += (" -> "_fu + humanizeType_adoPoPLu(n.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module));

    if (n.items.size() == 1)
    {
        src += (x7E_gCeFmDFw(" { "_fu, str_cmTVYQgp(only_GN4mikiy(n.items), ss, _helpers, _here, ctx, module)) + " }"_fu);
    }
    else if (n.items.size() > 0)
    {
        src += (x7E_gCeFmDFw(" { "_fu, fu::i64dec(n.items.size())) + " }"_fu);
    };
    return /*NRVO*/ src;
}

inline static void l_27_64_DLLfNNie(const int i, fu::view<s_SolvedNode> args, fu::vec<s_SolvedNode>& argdefs, fu::vec<s_Target>& letdefReplicas, fu::view<s_Argument> host_args, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Argument& host_arg = host_args[i];
    if (!(!host_arg.target))
    {
        s_SolvedNode argdef = createLet_XLWvNSXP(host_args[i].name, (((host_arg.flags & ~s_Flags_F_ARG) & ~s_Flags_F_COMPOUND_ID) | (((host_arg.flags & s_Flags_F_INJECTED) && is_mutref_hoadAQC0(host_arg.type, _here, ctx)) ? s_Flags_F_REF : s_Flags{})), args[i], false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if ((argdef.kind == s_kind_empty) || (argdef.kind == s_kind_letdef))
        {
            if (!(argdef.target))
                BUG_V2MSl2gg(x7E_gCeFmDFw("Inliner: no argdef.target: "_fu, str_cmTVYQgp(argdef, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        }
        else
            BUG_V2MSl2gg(x7E_gCeFmDFw("Inliner: argdef neither letdef nor empty: "_fu, str_cmTVYQgp(argdef, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        if ((argdef.kind != s_kind_empty) && !(GET_emAmLQ3D(argdef.target, ss, _helpers, _here, ctx, module).flags & s_Flags_F_INLINE))
            argdefs += s_SolvedNode(argdef);

        const s_Target& foreign = host_arg.target;
        grow_if_oob_sxKS3noZ(letdefReplicas, int(unsigned(((foreign._packed >> 40ull) & 0xfffffull)))) = s_Target((argdef.target ? argdef.target : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module)));
        const s_Overload& foreign_1 = GET_emAmLQ3D(foreign, ss, _helpers, _here, ctx, module);
        if (!(isAssignable_v8EzC34Q(foreign_1.type, GET_emAmLQ3D(argdef.target, ss, _helpers, _here, ctx, module).type, false, false, _here, ctx) || (is_never_FfV8Zuj5(GET_emAmLQ3D(argdef.target, ss, _helpers, _here, ctx, module).type) && (GET_emAmLQ3D(argdef.target, ss, _helpers, _here, ctx, module).flags & s_Flags_F_INLINE))))
            BUG_V2MSl2gg((((((x7E_gCeFmDFw("Inliner botching the argdef type of "_fu, str_3AjvLtSQ(foreign_1, ss, _helpers, _here, ctx, module)) + ":\n"_fu) + "\n\t\tExpect: "_fu) + humanizeType_adoPoPLu(foreign_1.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + "\n\t\tActual: "_fu) + humanizeType_adoPoPLu(GET_emAmLQ3D(argdef.target, ss, _helpers, _here, ctx, module).type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    };
}

                                #ifndef DEF_argsForward_SPlJwNptKb0
                                #define DEF_argsForward_SPlJwNptKb0
inline void argsForward_SPlJwNpt(const bool RTL, fu::view<s_Argument> host_args, const int seqIdx_start, fu::view<s_SolvedNode> args, fu::vec<s_SolvedNode>& argdefs, fu::vec<s_Target>& letdefReplicas, fu::view<s_Argument> host_args_1, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    int seqIdx = 0;
    int lastPass = 1;
    for (int pass = 0; pass < lastPass; pass++)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const s_Argument& host_arg = host_args[i];
            if (!!pass != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_hoadAQC0(host_arg.type, _here, ctx))))
                lastPass = 2;
            else
            {
                if ((seqIdx_start <= seqIdx))
                    l_27_64_DLLfNNie(i, args, argdefs, letdefReplicas, host_args_1, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                seqIdx++;
            };
        };
    };
}
                                #endif

static void visit_DXdggtrw(const s_Lifetime& lifetime, s_Lifetime& result, bool& maybeOutOfOrder, fu::view<s_SolvedNode> argNodes, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parseRegion(offset, chars);

        {
            const bool isStatic = (r == 0u);
            const bool isTemp = (r == 1u);
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            const int argidx = int(((r & 1u) ? (r >> 2u) : 0u));
            if (!(isStatic))
            {
                if (isTemp || locid)
                {
                    BUG_V2MSl2gg("Lifetime_replaceArgsAtCallsite: Found a temp or locid."_fu, ss, _helpers, _here, ctx, module);
                }
                else
                {
                    const s_SolvedNode& argNode = argNodes[argidx];
                    const s_Lifetime& argLt = (is_ref_gBx1AgSx(argNode.type) ? argNode.type.lifetime : Lifetime_temporary);
                    maybeOutOfOrder = true;
                    Lifetime_add_PKO62rQ1(result, argLt);
                    continue;
                };
            };
        };
        if (maybeOutOfOrder)
        {
            result = Lifetime_union_doHetu2L(result, s_Lifetime { fu::slice(chars, offset0, offset) });
        }
        else
            result.uni0n += fu::get_view(chars, offset0, offset);

    };
}

                                #ifndef DEF_Lifetime_process_0Ig1QA2oAg5
                                #define DEF_Lifetime_process_0Ig1QA2oAg5
inline s_Lifetime Lifetime_process_0Ig1QA2o(const s_Lifetime& lifetime, fu::view<s_SolvedNode> argNodes, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ s_Lifetime result {};
    bool maybeOutOfOrder = false;
    visit_DXdggtrw(lifetime, result, maybeOutOfOrder, argNodes, ss, _helpers, _here, ctx, module);
    return /*NRVO*/ result;
}
                                #endif

static s_Lifetime Lifetime_replaceArgsAtCallsite_tu6HtRg4(const s_Target& target, fu::view<s_SolvedNode> argNodes, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return Lifetime_process_0Ig1QA2o(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).type.lifetime, argNodes, ss, _helpers, _here, ctx, module);
}

inline static void l_27_3_C6reniu6(const int locid, const bool isStatic, const bool isTemp, const bool isArgIdx, const int argidx, const bool tempsOK, const bool argPositionsOK, bool& first, bool& hasStatic, int& lastLocid, int& lastArgIdx, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!hasStatic)
    {
        if (isStatic)
            hasStatic = true;

        if (isTemp)
        {
            if (tempsOK)
            {
                if (!(first))
                {
                    BUG_V2MSl2gg("TEST_Lifetime: temporary is not first"_fu, ss, _helpers, _here, ctx, module);
                };
            }
            else
            {
                BUG_V2MSl2gg("TEST_Lifetime: unexpected temporary"_fu, ss, _helpers, _here, ctx, module);
            };
        };
        first = false;
        if (locid)
        {
            if (lastArgIdx == 1000000)
            {
                if (lastLocid > locid)
                    lastLocid = locid;
                else
                {
                    BUG_V2MSl2gg("TEST_Lifetime: locid out of order"_fu, ss, _helpers, _here, ctx, module);
                };
            }
            else
            {
                BUG_V2MSl2gg("TEST_Lifetime: local after argpos"_fu, ss, _helpers, _here, ctx, module);
            };
        };
        if (isArgIdx)
        {
            if (argPositionsOK)
            {
                if (lastLocid == 1000000)
                {
                    if (lastArgIdx > argidx)
                        lastArgIdx = argidx;
                    else
                    {
                        BUG_V2MSl2gg("TEST_Lifetime: argidx out of order"_fu, ss, _helpers, _here, ctx, module);
                    };
                }
                else
                {
                    BUG_V2MSl2gg("TEST_Lifetime: argidx after local"_fu, ss, _helpers, _here, ctx, module);
                };
            }
            else
            {
                BUG_V2MSl2gg("TEST_Lifetime: unexpected argidx"_fu, ss, _helpers, _here, ctx, module);
            };
        };
    }
    else
    {
        BUG_V2MSl2gg("TEST_Lifetime: static is not last"_fu, ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_Lifetime_each_gJ24nNnMqH1
                                #define DEF_Lifetime_each_gJ24nNnMqH1
inline void Lifetime_each_gJ24nNnM(const s_Lifetime& lifetime, const bool tempsOK, const bool argPositionsOK, bool& first, bool& hasStatic, int& lastLocid, int& lastArgIdx, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_3_C6reniu6(int(((r & 1u) ? 0u : (r >> 1u))), (r == 0u), (r == 1u), ((r & 3u) == 3u), int(((r & 1u) ? (r >> 2u) : 0u)), tempsOK, argPositionsOK, first, hasStatic, lastLocid, lastArgIdx, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static const s_Lifetime& TEST_Lifetime_Rhs2skr1(const s_Lifetime& lifetime, const bool tempsOK, const bool argPositionsOK, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!lifetime)
    {
        BUG_V2MSl2gg("TEST_Lifetime: empty lifetime"_fu, ss, _helpers, _here, ctx, module);
    }
    else
    {
        bool first = true;
        bool hasStatic = false;
        int lastLocid = 1000000;
        int lastArgIdx = 1000000;
        Lifetime_each_gJ24nNnM(lifetime, tempsOK, argPositionsOK, first, hasStatic, lastLocid, lastArgIdx, ss, _helpers, _here, ctx, module);
    };
    return lifetime;
}

static s_SolvedNode CallerNode_SJHMcAaU(const fu::str& debug, s_Target&& target, /*MOV*/ fu::vec<s_SolvedNode>&& args, const s_Reorder& reorder, fu::view<fu::vec<s_Target>> conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (reorder)
    {
        /*MOV*/ fu::vec<s_SolvedNode> args_out {};
        args_out.resize(reorder.map.size());
        for (int i = 0; i < reorder.map.size(); i++)
        {
            const int idx = reorder.map[i];
            if ((idx >= 0))
                args_out.mutref(i) = steal_LyWpwxOa(args.mutref(idx));

        };
        args = static_cast<fu::vec<s_SolvedNode>&&>(args_out);
    };
    for (int argIdx = 0; argIdx < conversions.size(); argIdx++)
    {
        fu::view<s_Target> conversion = conversions[argIdx];
        if (applyConversion_4Gb9aRGW(args.mutref(argIdx), conversion, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
        {
            args.shrink((argIdx + 1));

            {
                const s_SolverNotes note = s_SolverNotes_N_DeadConv;
                const s_SolverState& ss_1 = ss;
                if (note & options.break_notes)
                    fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                else
                    _notes |= note;

            };
            return createBlock_UZ3zi9cx(t_never, static_cast<fu::vec<s_SolvedNode>&&>(args), s_Helpers{}, ss, _helpers, _here, ctx, module);
        };
    };
    const int REST_START = findRestStart_Fe91zW83(EXT_7eVl0gy6(target, ss, ctx, module));
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
                args.mutref(i) = createArrlit_GhCOY9XZ(fu::vec<s_SolvedNode>(rest), (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module, options);

        };
    };
    const s_kind kind = GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).kind;
    const bool isZeroInit = ((kind == s_kind_type) ? !args.size() : false);
    if (!isZeroInit)
    {
        fu::vec<s_Argument> host_args { EXT_7eVl0gy6(target, ss, ctx, module).args };
        args.resize(host_args.size());
        for (int i = 0; i < args.size(); i++)
        {
            s_Argument host_arg { host_args[i] };
            if (!args[i])
            {
                if (host_arg.dEfault)
                {
                    args.mutref(i) = inlineExpression_vv4lxccS(target, s_SolvedNode(host_arg.dEfault), fu::vec<s_Target>{}, 0, s_Target{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                }
                else if (host_arg.flags & s_Flags_F_IMPLICIT)
                    args.mutref(i) = bindImplicitArg_XpjA1BUN(host_arg.name, host_arg.type, target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                else
                    BUG_V2MSl2gg((((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + humanizeType_adoPoPLu(host_arg.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + "`."_fu), ss, _helpers, _here, ctx, module);

            };
            if (is_never_FfV8Zuj5(args[i].type) && !(host_arg.flags & s_Flags_F_INLINE))
            {
                args.shrink((i + 1));
                return deadCall_pmuC8X9l(args, ss, _notes, _helpers, _here, ctx, module, options);
            };
        };
    };
    s_Type type { GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).type };
    if (kind == s_kind_field)
    {
        const s_Type* _0;
        type = add_refs_u1ljuBgp((*(_0 = &(only_GN4mikiy(args).type)) ? *_0 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module)), s_Type(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).type));
    }
    else if (kind == s_kind_var)
    {
        TEST_varLifetime_YYo9tRSJ(type.lifetime, true, 0, ss, _helpers, _here, ctx, module);
        int BL_26_v {};
        int BL_27_v {};
        if ((__extension__ (
        {
            const s_Target& t = target;
            BL_26_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
        (void)0;}), BL_26_v) || (((__extension__ (
        {
            const s_Target& t = target;
            BL_27_v = (int(unsigned((t._packed & 0xfffffull))));
        (void)0;}), BL_27_v) == module.modid) && !(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).flags & s_Flags_F_PUB)))
            GET_mut_uE8Nb6mH(target, ss, module).status |= s_SolverStatus_SS_MATCHED;

        int BL_29_v {};
        if (isLocal_iPYw45vv(target) && (localOf_DvqCQ2NA(target, ss, module) != (__extension__ (
        {
            const s_Target& t = _current_fn.out.target;
            BL_29_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_29_v)))
        {
            target = injectForeignLocal_UxFJiX70(target, ss, _current_fn, _helpers, _here, ctx, module);
            const s_Type* _1;
            type = (*(_1 = &(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).type)) ? *_1 : BUG_V2MSl2gg(("CallerNode: !type on var "_fu + GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).name), ss, _helpers, _here, ctx, module));
        };
    }
    else
    {
        int BL_32_v {};
        if ((__extension__ (
        {
            const s_Target& t = target;
            BL_32_v = (int(unsigned((t._packed & 0xfffffull))));
        (void)0;}), BL_32_v) == module.modid)
        {
            if ((kind == s_kind_fn) || (kind == s_kind_type) || (kind == s_kind_inline))
            {
                if (ss._solvingFnort)
                {
                    int BL_36_v {};
                    int _2 {};
                    if ((_2 = (__extension__ (
                    {
                        const s_Target& t = ss._solvingFnort;
                        BL_36_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                    (void)0;}), BL_36_v), add_jzOp5jol(EPH_mut_i08XmyeL(target, ss, module).callers, _2)))
                    {
                        int BL_38_v {};
                        add_jzOp5jol(EPH_mut_i08XmyeL(ss._solvingFnort, ss, module).calls, (__extension__ (
                        {
                            const s_Target& t = target;
                            BL_38_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                        (void)0;}), BL_38_v));
                    };
                    detectRecursion_zINRgXCk(target, ss, _notes, _helpers, _here, ctx, module, options);
                };
            };
        };
        if (args)
        {
            if (kind == s_kind_type)
                type.vfacts &= s_VFacts(~s_VFacts_Typename);

            fu::view<s_Argument> _3 {};
            fu::view<s_Argument> host_args = ((_3 = EXT_7eVl0gy6(target, ss, ctx, module).args) ? static_cast<fu::view<s_Argument>&&>(_3) : BUG_V2MSl2gg(x7E_gCeFmDFw("CallerNode: no host args: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module));
            if (host_args.size() == args.size())
            {
                for (int i0 = 0; i0 < args.size(); i0++)
                {
                    const s_Argument& host_arg = host_args[i0];
                    s_SolvedNode& arg = args.mutref(i0);
                    if (arg.kind == s_kind_argid)
                        arg = only_GN4mikiy(arg.items);

                    const s_Type& expect = host_arg.type;
                    s_Type retype = tryRetyping_omCvj6H0(arg, expect, ss, _helpers, _here, ctx, module, options);
                    if (retype && isAssignableAsArgument_E3uCShzQ(expect, retype, false, _here, ctx))
                        applyRetype_y49lzuvP(arg, retype, ss, _helpers, _here, ctx, module);

                };
            }
            else
                BUG_V2MSl2gg(x7E_gCeFmDFw("CallerNode: host_arg.len mismatch: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        };
        if (kind == s_kind_inline)
        {
            int BL_48_v {};
            if (((__extension__ (
            {
                const s_Target& t = target;
                BL_48_v = (int(unsigned((t._packed & 0xfffffull))));
            (void)0;}), BL_48_v) != module.modid) || (EPH_rI6gXXKb(target, ss, module).revision > 0u))
            {
                if (!(ss.TODO_FIX_inline_safety++ < 24))
                    BUG_V2MSl2gg(x7E_gCeFmDFw("Inliner recursion, something is off: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

            }
            else
                BUG_V2MSl2gg((x7E_gCeFmDFw("Inlining "_fu, str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at revision 0."_fu), ss, _helpers, _here, ctx, module);

            fu_DEFER(ss.TODO_FIX_inline_safety--);
            if (!(s_SolverStatus((GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_FINALIZED)))) == s_SolverStatus_SS_DID_START))
            {
                fu::vec<s_SolvedNode> argdefs {};
                /*MOV*/ fu::vec<s_Target> letdefReplicas {};
                const int locals_start = GET_next_local_index_m7ZM3Mg2(ss, _current_fn);
                fu::vec<s_Argument> host_args { EXT_7eVl0gy6(target, ss, ctx, module).args };
                if (host_args.size() == args.size())
                {
                    const bool RTL = isRTL_N4q4L7uF(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module));
                    argsForward_SPlJwNpt(RTL, host_args, 0, args, argdefs, letdefReplicas, host_args, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    const s_SolvedNode& n_body = last_GN4mikiy(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).solved.items);
                    /*MOV*/ s_SolvedNode s_body = inlineExpression_vv4lxccS(target, s_SolvedNode(n_body), static_cast<fu::vec<s_Target>&&>(letdefReplicas), locals_start, target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    if (argdefs)
                    {
                        if (s_body.kind)
                        {
                            if (s_body.kind != s_kind_block)
                            {
                                s_body = createBlock_UZ3zi9cx(s_body.type, (argdefs + s_body), s_Helpers{}, ss, _helpers, _here, ctx, module);
                            }
                            else
                                s_body.items.splice(0, 0, argdefs);

                        }
                        else
                            BUG_V2MSl2gg("inline: no s_body.kind"_fu, ss, _helpers, _here, ctx, module);

                    };
                    return /*NRVO*/ s_body;
                }
                else
                    BUG_V2MSl2gg("inline: arglen mismatch"_fu, ss, _helpers, _here, ctx, module);

            };
        };
        if (args && is_ref_gBx1AgSx(type))
        {
            type.lifetime = static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>(TEST_Lifetime_Rhs2skr1(Lifetime_replaceArgsAtCallsite_tu6HtRg4(target, args, ss, _helpers, _here, ctx, module), true, false, ss, _helpers, _here, ctx, module)));
        };
    };
    return SolvedNode_clCALdMt(s_kind_call, type, s_Flags{}, debug, args, target, s_Helpers{}, _here);
}

static bool applyConversion_4Gb9aRGW(s_SolvedNode& arg, fu::view<s_Target> conversion, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    for (int i = 0; i < conversion.size(); i++)
    {
        const s_Target& t = conversion[i];
        if (EXT_7eVl0gy6(t, ss, ctx, module).min || (EXT_7eVl0gy6(t, ss, ctx, module).max && arg))
        {
            arg = CallerNode_SJHMcAaU("__using.a"_fu, s_Target(t), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(arg) } }, (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        }
        else if (i)
            fail_Ulv2WHKu((("Bad conversion chain, non-leading nullary: `"_fu + GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).name) + "`."_fu), ss, _helpers, _here, ctx, module);
        else if (arg)
            fail_Ulv2WHKu("Bad conversion chain, about to throw away an argnode."_fu, ss, _helpers, _here, ctx, module);
        else
        {
            arg = CallerNode_SJHMcAaU("__using.b"_fu, s_Target(t), fu::vec<s_SolvedNode>{}, (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        };
        if (is_never_FfV8Zuj5(arg.type))
            return true;

    };
    return false;
}

static void convertIfNeeded_O16mMgHA(s_SolvedNode& actual, const s_Type& expect, fu::view<char> err, const fu::str& id, const fu::str& sep, const bool asArgument, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (!(isAssignable_v8EzC34Q(expect, actual.type, false, asArgument, _here, ctx)))
    {
        fu::vec<s_Target> conv = tryConvert_72F8WtpU(expect, true, actual.type, (*(const s_SolvedNode*)fu::NIL), (*(const s_Scope*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (!conv)
        {
            fail_Ulv2WHKu((((((err + (id ? (" "_fu + qID_3PsDzMvu(id)) : fu::str{})) + ": "_fu) + humanizeType_adoPoPLu(expect, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + (sep ? fu::str(sep) : " <- "_fu)) + humanizeType_adoPoPLu(actual.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
        }
        else
            applyConversion_4Gb9aRGW(actual, conv, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

    };
}

static s_SolvedNode solveLetLike_dontTouchScope_fHqdpLzV(const fu::str& id, s_Flags flags, /*MOV*/ s_SolvedNode&& init, const s_Type& annot, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (annot || init.type)
    {
        const bool init_isNever = is_never_FfV8Zuj5(init.type);
        if (init_isNever && !(flags & (s_Flags_F_ARG | s_Flags_F_INLINE)))
        {

            {
                const s_SolverNotes note = s_SolverNotes_N_DeadLet;
                if (note & options.break_notes)
                    fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss, _helpers, _here, ctx, module);
                else
                    _notes |= note;

            };
            return static_cast<s_SolvedNode&&>(init);
        }
        else
        {
            if (annot && init.type && !init_isNever)
                convertIfNeeded_O16mMgHA(init, annot, "Type annotation does not match init expression"_fu, id, " <- "_fu, !!(flags & s_Flags_F_ARG), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

            /*MOV*/ s_Type t_init = clear_Typename_40rRB6L8(s_Type(init.type));
            if (flags & (s_Flags_F_ARG | s_Flags_F_MUT))
            {
                t_init.vfacts = s_VFacts{};
            };
            /*MOV*/ s_Type t_init_1 = (hasTemporary_Sd1Oo4TV(t_init.lifetime) ? clear_refs_40rRB6L8(static_cast<s_Type&&>(t_init)) : static_cast<s_Type&&>(t_init));
            if (is_mutref_hoadAQC0(annot, _here, ctx))
                flags |= s_Flags_F_REF;

            if (flags & s_Flags_F_REF)
            {
                if (!(is_mutref_hoadAQC0(t_init_1, _here, ctx) || (is_never_FfV8Zuj5(t_init_1) && annot) || (!init && (flags & s_Flags_F_ARG))))
                    fail_Ulv2WHKu((((qBAD_3PsDzMvu("ref"_fu) + " variables must be initialized to a mutable reference: "_fu) + qBAD_3PsDzMvu(id)) + (t_init_1 ? (" = "_fu + humanizeType_adoPoPLu(t_init_1, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) : "."_fu)), ss, _helpers, _here, ctx, module);

            };
            s_Type t_let = ((annot && ((flags & s_Flags_F_ARG) || !t_init_1)) ? s_Type(annot) : ((is_mutref_hoadAQC0(t_init_1, _here, ctx) && !(flags & s_Flags_F_REF)) ? clear_mutref_40rRB6L8(static_cast<s_Type&&>(t_init_1)) : static_cast<s_Type&&>(t_init_1)));
            if (flags & s_Flags_F_ARG)
                ref_anonymize_ucOr4Guq(t_let);

            if ((flags & s_Flags_F_ARG) && !(flags & s_Flags_F_MUT))
            {
                t_let = add_ref_XBf6EmLx(s_Type(t_let), Lifetime_temporary, _here, ctx);
            };
            unsigned BL_15_v {};
            if (t_let.vfacts & s_VFacts_Typename)
                BUG_V2MSl2gg("solveLetLike_dontTouchScope: Ended up with a Typename"_fu, ss, _helpers, _here, ctx, module);
            else if (((flags & s_Flags_F_ARG) || (flags & s_Flags_F_MUT)) && s_VFacts((t_let.vfacts & s_VFacts((s_VFacts_AlwaysTrue | s_VFacts_AlwaysFalse)))) && (__extension__ (
            {
                const s_Type& type = t_let;
                BL_15_v = ((type.vtype.quals & q_USAGE));
            (void)0;}), BL_15_v))
                BUG_V2MSl2gg("solveLetLike_dontTouchScope: Ended up with an AlwaysTrue/False"_fu, ss, _helpers, _here, ctx, module);

            return SolvedNode_clCALdMt(s_kind_let, t_let, flags, id, fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, static_cast<s_SolvedNode&&>(init) } }, s_Target{}, s_Helpers{}, _here);
        };
    }
    else
        fail_Ulv2WHKu((("Variable declarations without type annotations must be initialized: `"_fu + id) + "`."_fu), ss, _helpers, _here, ctx, module);

}

static s_SolvedNode solveLetLike_dontTouchScope_ydooB2u9(const s_Node& node, const s_Type& specType, const s_Type& primType, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Node& n_annot = node.items[LET_TYPE];
    s_Type annot = ((n_annot && (n_annot.kind != s_kind_typeunion)) ? evalTypeAnnot_NMH9TBVW(n_annot, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_Type{});
    s_Flags flags = node.flags;
    if (is_mutref_hoadAQC0(specType, _here, ctx) && !((flags & s_Flags_F_REF) || is_mutref_hoadAQC0(annot, _here, ctx)))
        flags |= s_Flags_F_RELAXABLE_REF;

    const s_Type& annot_1 = (specType ? specType : primType ? primType : annot);
    s_Type annot_2 = ((annot_1 && (node.flags & s_Flags_F_REF)) ? add_mutref_XBf6EmLx(s_Type(annot_1), Lifetime_temporary, _here, ctx) : s_Type(annot_1));
    const s_Node& n_init = node.items[LET_INIT];
    /*MOV*/ s_SolvedNode init = (n_init ? solveNode_xfI3NW7o(n_init, annot_2, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
    /*MOV*/ s_SolvedNode init_1 = ((specType && init.type && !isAssignableAsArgument_E3uCShzQ(specType, init.type, false, _here, ctx)) ? s_SolvedNode{} : static_cast<s_SolvedNode&&>(init));
    _here = node.token;
    return solveLetLike_dontTouchScope_fHqdpLzV(node.value, flags, static_cast<s_SolvedNode&&>(init_1), annot_2, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

static s_SolvedNode solveLet_K4QDx2st(const s_Node& node, const s_Type& specType, const s_Type& letdefType, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.flags & s_Flags_F_TYPENAME)
        return solveTypedef_P3xel9zM(node, specType, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else
    {
        s_SolvedNode out = solveLetLike_dontTouchScope_ydooB2u9(node, specType, (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        const fu::str& id = out.value;
        return solveLet_createBindingAndGetLetdef_24Uai0gR(s_SolvedNode(out), id, true, letdefType, ss, _current_fn, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_t_AssumeNever_WhileSolvingRecursion
                                #define DEF_t_AssumeNever_WhileSolvingRecursion
extern const s_Type t_AssumeNever_WhileSolvingRecursion;
                                #endif

inline static bool l_27_2_xRnRkJEA(const int locid)
{
    return !!locid;
}

                                #ifndef DEF_Lifetime_if_only_PL03aTCap6l
                                #define DEF_Lifetime_if_only_PL03aTCap6l
inline bool Lifetime_if_only_PL03aTCa(const s_Lifetime& lifetime)
{
    bool first = true;

    { {
        fu::view<char> chars = lifetime.uni0n;
        int offset = 0;
        while (offset < chars.size())
        {
            const unsigned r = parseRegion(offset, chars);
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            if (!first)
                goto BL_1;
            else
            {
                first = false;
                if (l_27_2_xRnRkJEA(locid))
                    return true;

            };
        };
      } BL_1:;
    };
    return false;
}
                                #endif

static s_Lifetime Lifetime_fromNative_qsctlHNl(fu::view<s_Node> sig, fu::view<s_SolvedNode> args, const s_Type& actual, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
                if ((annot.items.size() == 1) && (((annot.kind == s_kind_call) && ((!mutref && ((annot.value == "&"_fu) || (annot.value == "[:]"_fu))) || (annot.value == "&mut"_fu))) || (!mutref && (annot.kind == s_kind_arrlit))))
                {
                    if (res)
                    {
                        fail_Ulv2WHKu("Ambiguous __native lifetime."_fu, ss, _helpers, _here, ctx, module);
                    }
                    else
                    {
                        res = GET_emAmLQ3D(args[i].target, ss, _helpers, _here, ctx, module).type;
                        if (!(res.lifetime))
                        {
                            fail_Ulv2WHKu("Missing arg lifetime."_fu, ss, _helpers, _here, ctx, module);
                        };
                    };
                };
            };
            if (!mutref || res.lifetime)
                break;
            else
                mutref = false;

        };
        if (Lifetime_if_only_PL03aTCa(res.lifetime))
        {
            if (!isAssignable_v8EzC34Q(actual, res, false, false, _here, ctx))
            {
                return Lifetime_makeShared_PkVF5Di3(res.lifetime);
            }
            else
            {
                return static_cast<s_Lifetime&&>(res.lifetime);
            };
        }
        else
        {
            fail_Ulv2WHKu("Non-single-local __native lifetime."_fu, ss, _helpers, _here, ctx, module);
        };
    }
    else
        BUG_V2MSl2gg("sig.len != args.len"_fu, ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_starts_Db9eGFmCKDj
                                #define DEF_starts_Db9eGFmCKDj
inline bool starts_Db9eGFmC(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_EFFECTS_output
                                #define DEF_EFFECTS_output
extern const s_FxMask EFFECTS_output;
                                #endif

                                #ifndef DEF_parse_IqpMq0sBJY2
                                #define DEF_parse_IqpMq0sBJY2
inline s_FxMask parse_IqpMq0sB(fu::view<char> v)
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

static fu::str currentFn_mustBecomeInline_wWAsH7tM(const s_CurrentFn& _current_fn)
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

                                #ifndef DEF_grow_if_oob_yq7gHTQsrb1
                                #define DEF_grow_if_oob_yq7gHTQsrb1
inline int& grow_if_oob_yq7gHTQs(fu::vec<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu::str CompoundArgID_outerSplice_fE5lsTgm(fu::str& name, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    bool exclam = false;
    for (int i = 0; i < name.size(); i++)
    {
        const char c = name[i];
        if (c == '!')
        {
            if (exclam)
                BUG_V2MSl2gg((("CompoundArgID: double bang in `"_fu + name) + "`."_fu), ss, _helpers, _here, ctx, module);
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
        BUG_V2MSl2gg((("CompoundArgID: no `.` nor `!` in id `"_fu + name) + "`."_fu), ss, _helpers, _here, ctx, module);
    else
    {
        return fu::str{};
    };
}

                                #ifndef DEF_unless_oob_yoNyPnA3ZMb
                                #define DEF_unless_oob_yoNyPnA3ZMb
inline const s_BitSet& unless_oob_yoNyPnA3(fu::view<s_BitSet> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_BitSet*)fu::NIL);

}
                                #endif

                                #ifndef DEF_unless_oob_iUAHahkVGh0
                                #define DEF_unless_oob_iUAHahkVGh0
inline int unless_oob_iUAHahkV(fu::view<int> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return 0;

}
                                #endif

inline static void l_27_34_v9zniTCj(const int other, s_BitSet& output, fu::view<int> argPos_1b)
{
    const int otherPos_1b = unless_oob_iUAHahkV(argPos_1b, other);
    if (otherPos_1b)
        add_U5p6nLOf(output, (otherPos_1b - 1));

}

                                #ifndef DEF_each_mBSIRsrUs5h
                                #define DEF_each_mBSIRsrUs5h
inline void each_mBSIRsrU(const s_BitSet& _, s_BitSet& output, fu::view<int> argPos_1b)
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
                    l_27_34_v9zniTCj(((i << 3) | int(b)), output, argPos_1b);

            };
        };
    };
}
                                #endif

static void ArgsAtRisk_list_YzrDw7IM(s_BitSet& output, fu::view<s_BitSet> at_risk, fu::view<int> argPos_1b, const s_Target& argTarget)
{
    each_mBSIRsrU(unless_oob_yoNyPnA3(at_risk, int(unsigned(((argTarget._packed >> 40ull) & 0xfffffull)))), output, argPos_1b);
}

static void l_27_35_bqj2hZeH(const int index, fu::view<s_SolvedNode> items, s_BitSet& hard_risk, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_SolvedNode& other = GET_emAmLQ3D(items[index].target, ss, _helpers, _here, ctx, module).solved;
    if (!TODO_FIX_isArray_40rRB6L8(other.type))
        add_U5p6nLOf(hard_risk, index);

}

                                #ifndef DEF_each_LgUtsbGUnL9
                                #define DEF_each_LgUtsbGUnL9
inline void each_LgUtsbGU(const s_BitSet& _, fu::view<s_SolvedNode> items, s_BitSet& hard_risk, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
                    l_27_35_bqj2hZeH(((i << 3) | int(b)), items, hard_risk, ss, _helpers, _here, ctx, module);

            };
        };
    };
}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_bJFMtkoT(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static bool isNoVec_L1WPSqxW(const s_Type& t, const s_Context& ctx, const s_Module& module)
{
    return is_trivial_XVsnoQiv(t.vtype, ctx, module) || !(is_rx_copy_GSunVkiW(t) || is_rx_resize_GSunVkiW(t));
}

static void visit_WtptXLzE(const s_Lifetime& lifetime, s_Lifetime& result, bool& maybeOutOfOrder, const int locals_start, const bool locals_only, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parseRegion(offset, chars);

        { {

            { {
                const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
                if (!locid)
                {
                    if (locals_only)
                        goto BL_4;

                }
                else if ((locid >= locals_start))
                {
                    const s_Type& init = Lifetime_climbType_n6B2CKz9(GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module);
                    if (is_ref_gBx1AgSx(init))
                    {
                        const s_Lifetime& parent = init.lifetime;
                        fu::view<s_Helpers> _helpers_1 = _helpers;
                        const s_TokenIdx& _here_1 = _here;
                        const s_Module& module_1 = module;
                        maybeOutOfOrder = true;
                        visit_WtptXLzE(parent, result, maybeOutOfOrder, locals_start, locals_only, ss, _helpers_1, _here_1, ctx, module_1);
                        continue;
                    };
                };
                goto BL_3;
              } BL_4:;
            };
            continue;
          } BL_3:;
        };
        if (maybeOutOfOrder)
        {
            result = Lifetime_union_doHetu2L(result, s_Lifetime { fu::slice(chars, offset0, offset) });
        }
        else
            result.uni0n += fu::get_view(chars, offset0, offset);

    };
}

                                #ifndef DEF_Lifetime_process_t395h2A7xO1
                                #define DEF_Lifetime_process_t395h2A7xO1
inline s_Lifetime Lifetime_process_t395h2A7(const s_Lifetime& lifetime, const int locals_start, const bool locals_only, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ s_Lifetime result {};
    bool maybeOutOfOrder = false;
    visit_WtptXLzE(lifetime, result, maybeOutOfOrder, locals_start, locals_only, ss, _helpers, _here, ctx, module);
    return /*NRVO*/ result;
}
                                #endif

static s_Lifetime Lifetime_unwind_2lvWiRLJ(const s_Lifetime& lifetime, const int locals_start, const bool locals_only, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return Lifetime_process_t395h2A7(lifetime, locals_start, locals_only, ss, _helpers, _here, ctx, module);
}

static fu::str qSTACK_gOz12Vbo(const s_Target& target, const int locid, fu::view<s_Target> seen, const s_ArgQuery query, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return qSTACK_2AB99c5f(target, s_SolvedNode(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).solved), locid, seen, query, ss, _current_fn, _helpers, _here, ctx, module);
}

static fu::str qSTACK_SjlFsNxw(const s_Target& target, const int position, fu::view<s_Target> seen, const s_ArgQuery query, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int BL_1_v {};
    return qSTACK_gOz12Vbo(target, (__extension__ (
    {
        const s_Target& t = EXT_7eVl0gy6(target, ss, ctx, module).args[position].target;
        BL_1_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
    (void)0;}), BL_1_v), seen, query, ss, _current_fn, _helpers, _here, ctx, module);
}

static fu::str qSTACK_2AB99c5f(const s_Target& target, const s_SolvedNode& node, const int locid, fu::view<s_Target> seen, const s_ArgQuery query, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target nestingFnort0 = exchange_jPHBkujO(ss._nestingFnort, s_Target(target));
    fu_DEFER(ss._nestingFnort = nestingFnort0);
    fu::vec<s_Target> seen_1 = (seen + target);

    {
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_bJFMtkoT(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_emAmLQ3D(node_1.target, ss, _helpers, _here, ctx, module).solved : node_1);
            s_SolvedNode BL_4_v {};
            s_SolvedNode node_3 = (__extension__ (
            {
                const s_SolvedNode& __partcopy_ref = ((node_2.kind == s_kind___preceding_ref_arg) ? _current_fn.events.preceding_ref_args[node_2.helpers.index].arg : node_2);
                BL_4_v = (s_SolvedNode { __partcopy_ref.kind, {}, {}, {}, {}, fu::vec<s_SolvedNode>(__partcopy_ref.items), s_TokenIdx(__partcopy_ref.token), {}, s_Target(__partcopy_ref.target) });
            (void)0;}), static_cast<s_SolvedNode&&>(BL_4_v));

            {
                const s_CurrentFn& _current_fn_1 = _current_fn;
                if (!(node_3.kind != s_kind_call))
                {
                    if (!(has_P9xEJb6w(seen_1, node_3.target)))
                    {
                        fu::vec<s_SolvedNode> args { node_3.items };
                        fu::vec<s_Argument> host_args { EXT_7eVl0gy6(node_3.target, ss, ctx, module).args };
                        if (args.size() == host_args.size())
                        {
                            for (int i = 0; i < host_args.size(); i++)
                            {
                                const s_Argument& host_arg = host_args[i];
                                if (query == s_ArgQuery_AQ_WhyNotNovec)
                                {
                                    if (isNoVec_L1WPSqxW(host_arg.type, ctx, module))
                                        continue;

                                }
                                else if (!(host_arg.flags & s_Flags_F_WRITTEN_TO))
                                    continue;

                                const s_SolvedNode& arg = args[i];
                                s_Lifetime unwound = Lifetime_unwind_2lvWiRLJ(arg.type.lifetime, 0, false, ss, _helpers, _here, ctx, module);
                                if (!(!Lifetime_has_62UtfSbx(unwound, locid)))
                                {
                                    fu::str peek = qSTACK_SjlFsNxw(s_Target(node_3.target), i, seen_1, query, ss, _current_fn_1, _helpers, _here, ctx, module);
                                    if (!(!peek && (GET_emAmLQ3D(node_3.target, ss, _helpers, _here, ctx, module).kind == s_kind_fn)))
                                    {
                                        return ((x7E_gCeFmDFw(("\n            "_fu + "via "_fu), str_3AjvLtSQ(GET_emAmLQ3D(node_3.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu) + addr_and_snippet_LWjqt07q(node_3.token, s_CodeFmt{}, fu::view<char>{}, ctx, module)) + peek;
                                    };
                                };
                            };
                        };
                    };
                };
            };
            for (int i = node_3.items.size(); i-- > 0; )
                stack += s_SolvedNode(node_3.items[i]);

        };
    };
    return ""_fu;
}

[[noreturn]] static fu::never fail_VDjVI8g2(const fu::str& reason, fu::view<char> backtrack, const s_SolverState& ss, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (backtrack)
    {
        s_TokenIdx _0 {};
        _here = ((_0 = tryBacktrack_JWT7n8Gs(_here, backtrack, s_kind_id, ctx)) ? _0 : s_TokenIdx(_here));
    };
    fail_Ulv2WHKu(reason, ss, _helpers, _here, ctx, module);
}

inline static bool l_27_36_IYq66eXN(const s_COWInside& cow, const s_Target& argTarget)
{
    return cow.argTarget == int(unsigned(((argTarget._packed >> 40ull) & 0xfffffull)));
}

                                #ifndef DEF_some_7xrHko44nqi
                                #define DEF_some_7xrHko44nqi
inline bool some_7xrHko44(fu::view<s_COWInside> a, const s_Target& argTarget)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_COWInside& item = a[i];
        if (l_27_36_IYq66eXN(item, argTarget))
            return true;

    };
    return false;
}
                                #endif

static void visit_UAUrgHdF(const s_Lifetime& lifetime, s_Lifetime& result, bool& maybeOutOfOrder, fu::view<int> argPos_1b, fu::view<s_Argument> args, s_BitSet& returned, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parseRegion(offset, chars);

        {
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            const bool isStatic = (r == 0u);
            if (!locid)
            {
                if (!(isStatic))
                {
                    BUG_V2MSl2gg("Non-local/non-static in retval.lifetime."_fu, ss, _helpers, _here, ctx, module);
                };
            }
            else
            {
                int _0 {};
                const int argPos_1b_1 = ((_0 = unless_oob_iUAHahkV(argPos_1b, locid)) ? _0 : BUG_V2MSl2gg(x7E_gCeFmDFw("Non-argument local in retval.lifetime: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module));
                const int i = (argPos_1b_1 - 1);
                const s_Argument& arg = args[i];
                if (is_ref_gBx1AgSx(arg.type))
                {
                    add_U5p6nLOf(returned, i);
                    s_Lifetime replacement = ((void) getFlatCount_XVsnoQiv(arg.type.vtype, ctx, module), Lifetime_from_OWsbkiDb(i, _here, ctx));
                    maybeOutOfOrder = true;
                    Lifetime_add_PKO62rQ1(result, replacement);
                    continue;
                }
                else
                {
                    BUG_V2MSl2gg(x7E_gCeFmDFw("Non-ref argument in retval.lifetime: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                };
            };
        };
        if (maybeOutOfOrder)
        {
            result = Lifetime_union_doHetu2L(result, s_Lifetime { fu::slice(chars, offset0, offset) });
        }
        else
            result.uni0n += fu::get_view(chars, offset0, offset);

    };
}

                                #ifndef DEF_Lifetime_process_0CTuqdlpOG2
                                #define DEF_Lifetime_process_0CTuqdlpOG2
inline s_Lifetime Lifetime_process_0CTuqdlp(const s_Lifetime& lifetime, fu::view<int> argPos_1b, fu::view<s_Argument> args, s_BitSet& returned, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ s_Lifetime result {};
    bool maybeOutOfOrder = false;
    visit_UAUrgHdF(lifetime, result, maybeOutOfOrder, argPos_1b, args, returned, ss, _helpers, _here, ctx, module);
    return /*NRVO*/ result;
}
                                #endif

static s_ArgRationale rejectsTempCopies_vs7DHx4n(const s_Argument& arg, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (arg.flags & s_Flags_F_IMPLICIT)
        return s_ArgRationale_CantTempCopy_HostArg_Implicit;
    else if (arg.flags & s_Flags_F_REF)
        return s_ArgRationale_CantTempCopy_HostArg_Ref;
    else if (is_mutref_hoadAQC0(arg.type, _here, ctx))
        return s_ArgRationale_CantTempCopy_HostArg_MutRef;
    else
    {
        return s_ArgRationale{};
    };
}

static bool acceptsTempCopies_MmjZ7oMr(const s_Argument& arg, const s_TokenIdx& _here, const s_Context& ctx)
{
    return !rejectsTempCopies_vs7DHx4n(arg, _here, ctx);
}

static bool willPassByValue_lEyEq0mH(const s_Argument& arg, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (acceptsTempCopies_MmjZ7oMr(arg, _here, ctx))
        return isPassByValue_3t4EwFeQ(arg.type.vtype);
    else
        return false;

}

inline static bool l_27_38_z7vzqLTU(const bool isArgIdx, const bool isStatic, const s_Type& retval, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return isArgIdx ? isArgIdx : isStatic ? isStatic : BUG_V2MSl2gg(x7E_gCeFmDFw("updateScope: Non-static/non-arg leaked:\n\t"_fu, str_cj9SdYXi(retval.lifetime, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
}

                                #ifndef DEF_Lifetime_each_SQdDbsI6B62
                                #define DEF_Lifetime_each_SQdDbsI6B62
inline void Lifetime_each_SQdDbsI6(const s_Lifetime& lifetime, const s_Type& retval, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_38_z7vzqLTU(((r & 3u) == 3u), (r == 0u), retval, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static const s_Type& ignoreLocalLts_8C2p38GN(const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_ref_gBx1AgSx(type))
    {
        if (!(type.lifetime == Lifetime_temporary))
        {
            BUG_V2MSl2gg("type.lifetime != Lifetime_temporary"_fu, ss, _helpers, _here, ctx, module);
        };
    };
    return type;
}

inline static s_SolvedNode TODO_FIX_pop_UtUE27BM(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static fu::str qSTACK_uhExINTi(const s_Target& target, const s_SolvedNode& node, const s_FxMask fx_mask, fu::view<s_Target> seen, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target nestingFnort0 = exchange_jPHBkujO(ss._nestingFnort, s_Target(target));
    fu_DEFER(ss._nestingFnort = nestingFnort0);
    fu::vec<s_Target> seen_1 = (seen + target);

    {
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_UtUE27BM(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_emAmLQ3D(node_1.target, ss, _helpers, _here, ctx, module).solved : node_1);
            s_SolvedNode BL_4_v {};
            s_SolvedNode node_3 = (__extension__ (
            {
                const s_SolvedNode& __partcopy_ref = ((node_2.kind == s_kind___preceding_ref_arg) ? _current_fn.events.preceding_ref_args[node_2.helpers.index].arg : node_2);
                BL_4_v = (s_SolvedNode { __partcopy_ref.kind, {}, {}, {}, {}, fu::vec<s_SolvedNode>(__partcopy_ref.items), s_TokenIdx(__partcopy_ref.token), {}, s_Target(__partcopy_ref.target) });
            (void)0;}), static_cast<s_SolvedNode&&>(BL_4_v));

            {
                const s_CurrentFn& _current_fn_1 = _current_fn;
                if (!((node_3.kind != s_kind_call) || isLocal_iPYw45vv(node_3.target)))
                {
                    if (!(has_P9xEJb6w(seen_1, node_3.target)))
                    {
                        if (!(!s_FxMask((EXT_7eVl0gy6(node_3.target, ss, ctx, module).fx_mask & fx_mask))))
                        {
                            fu::str peek = qSTACK_uhExINTi(s_Target(node_3.target), s_SolvedNode(GET_emAmLQ3D(node_3.target, ss, _helpers, _here, ctx, module).solved), fx_mask, seen_1, ss, _current_fn_1, _helpers, _here, ctx, module);
                            if (!(!peek && (GET_emAmLQ3D(node_3.target, ss, _helpers, _here, ctx, module).kind == s_kind_fn)))
                            {
                                return ((x7E_gCeFmDFw(("\n            "_fu + "via "_fu), str_3AjvLtSQ(GET_emAmLQ3D(node_3.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu) + addr_and_snippet_LWjqt07q(node_3.token, s_CodeFmt{}, fu::view<char>{}, ctx, module)) + peek;
                            };
                        };
                    };
                };
            };
            for (int i = node_3.items.size(); i-- > 0; )
                stack += s_SolvedNode(node_3.items[i]);

        };
    };
    return ""_fu;
}

static bool astChange_Wc5QxhUH(const s_SolvedNode& a, const s_SolvedNode& b)
{
    if ((a.kind != b.kind) || (a.items.size() != b.items.size()))
        return true;
    else
    {
        for (int i = a.items.size(); i-- > 0; )
        {
            if (astChange_Wc5QxhUH(a.items[i], b.items[i]))
                return true;

        };
        return false;
    };
}

inline static fu::str l_27_40_wqPMc53f(const s_Argument& arg, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (arg.flags & s_Flags_F_INJECTED)
        return ""_fu;
    else
        return (arg.name + ":"_fu) + stableTypeID_9xIpgBS2(arg.type, ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_map_5LdxJiMfyyk
                                #define DEF_map_5LdxJiMfyyk
inline fu::vec<fu::str> map_5LdxJiMf(fu::view<s_Argument> a, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = l_27_40_wqPMc53f(a[i], ss, _helpers, _here, ctx, module);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_join_jCe9HYtvP9c
                                #define DEF_join_jCe9HYtvP9c
inline fu::str join_jCe9HYtv(fu::view<fu::str> a, fu::view<char> sep)
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
        fu::view_assign(fu::get_view_start0_mut(res, head.size()), head);
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

inline static fu::str mangleArgTypes_xChQVQEN(fu::view<s_Argument> args)
{
    /*MOV*/ fu::str mangle = ""_fu;
    int numNonInjected = 0;
    for (int i = 0; i < args.size(); i++)
    {
        const s_Argument& arg = args[i];
        if (!(arg.flags & s_Flags_F_INJECTED))
        {
            if (numNonInjected++)
                mangle += ',';

            const s_Type& argType = arg.type;
            if (argType)
                mangle += serializeType_NOIpmQqe(argType, "mangle[$T]"_fu);

        };
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
extern const unsigned RELAX_all;
                                #endif

                                #ifndef DEF_last_a6qr8qgsAa4
                                #define DEF_last_a6qr8qgsAa4
inline const s_Node& last_a6qr8qgs(fu::view<s_Node> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_last_4PVbatPg4uj
                                #define DEF_last_4PVbatPg4uj
inline s_Node& last_4PVbatPg(fu::view_mut<s_Node> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static bool compare_xwtec2ch(const s_SolvedNode& a, const s_SolvedNode& b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Overload& a_1 = GET_emAmLQ3D(a.target, ss, _helpers, _here, ctx, module);
    const s_Overload& b_1 = GET_emAmLQ3D(b.target, ss, _helpers, _here, ctx, module);
    const fu::str& an = a_1.name;
    const fu::str& bn = b_1.name;
    const s_ClosureID acid = tryParseClosureID_54NQWyOV(an, _here, ctx);
    const s_ClosureID bcid = tryParseClosureID_54NQWyOV(bn, _here, ctx);
    if (acid)
    {
        if (bcid)
        {
            int BL_3_v {};
            int BL_4_v {};
            int _0 {};
            int BL_5_v {};
            int BL_6_v {};
            const int cmp = ((_0 = ((__extension__ (
            {
                const s_Target& t = bcid.target;
                BL_3_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
            (void)0;}), BL_3_v) - (__extension__ (
            {
                const s_Target& t = acid.target;
                BL_4_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
            (void)0;}), BL_4_v))) ? _0 : ((__extension__ (
            {
                const s_Target& t = acid.target;
                BL_5_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
            (void)0;}), BL_5_v) - (__extension__ (
            {
                const s_Target& t = bcid.target;
                BL_6_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
            (void)0;}), BL_6_v)));
            return cmp < 0;
        }
        else
            return true;

    }
    else if (bcid)
        return false;

    return an < bn;
}

static void sort_4zLws3mp(fu::view_mut<s_SolvedNode> a, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    s_SolvedNode l {};
    s_SolvedNode r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = compare_xwtec2ch(l, r, ss, _helpers, _here, ctx, module);
    return lt;
            });

}

                                #ifndef DEF_sort_6jUAFIKKcf2
                                #define DEF_sort_6jUAFIKKcf2
inline void sort_6jUAFIKK(fu::view_mut<s_SolvedNode> a, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    sort_4zLws3mp(a, ss, _helpers, _here, ctx, module);
}
                                #endif

static void sortInjectedArguments_SDX2555W(const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view_mut<s_SolvedNode> args = fu::get_view_start0_mut(_current_fn.out.items, (_current_fn.out.items.size() + FN_ARGS_BACK));
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg = args[i];
        if (arg.target && (GET_emAmLQ3D(arg.target, ss, _helpers, _here, ctx, module).flags & s_Flags_F_INJECTED))
        {
            fu::view_mut<s_SolvedNode> _0 {};
            (_0 = fu::get_view_mut(args, i), sort_6jUAFIKK(static_cast<fu::view_mut<s_SolvedNode>&&>(_0), ss, _helpers, _here, ctx, module));
            return;
        };
    };
}

[[noreturn]] static fu::never err_a5pPkFfG(fu::view<char> reason, const s_SolvedNode& node, const s_Overload& o, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    BUG_V2MSl2gg(((x7E_gCeFmDFw(x7E_gCeFmDFw(str_cmTVYQgp(node, ss, _helpers, _here, ctx, module), " "_fu), str_3AjvLtSQ(o, ss, _helpers, _here, ctx, module)) + ": "_fu) + reason), ss, _helpers, _here, ctx, module);
}

inline static fu::str mangleArgTypes_f1EJFJcX(fu::view<s_SolvedNode> args)
{
    /*MOV*/ fu::str mangle = ""_fu;
    int numNonInjected = 0;
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg = args[i];
        if (numNonInjected++)
            mangle += ',';

        const s_Type& argType = arg.type;
        if (argType)
            mangle += serializeType_NOIpmQqe(argType, "mangle[$T]"_fu);

    };
    return /*NRVO*/ mangle;
}

static void checkLt_dEYS3s91(const s_Type& actual, fu::view<char> actualCopy, const s_SolvedNode& expect, fu::view<char> expectCopy, const s_SolvedNode& node, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!is_ref_gBx1AgSx(expect.type)))
    {
        s_Lifetime uNion = Lifetime_union_doHetu2L(expect.type.lifetime, actual.lifetime);
        if (uNion != expect.type.lifetime)
        {
            BUG_V2MSl2gg(((((((((((((x7E_gCeFmDFw(str_cmTVYQgp(node, ss, _helpers, _here, ctx, module), ": "_fu) + actualCopy) + " mentions a lifetime not listed in "_fu) + expectCopy) + ":"_fu) + "\n\n\t\t"_fu) + actualCopy) + ":\t"_fu) + humanizeType_adoPoPLu(actual, true, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + "\n\n\t\t"_fu) + expectCopy) + ":\t"_fu) + humanizeType_adoPoPLu(expect.type, true, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
        };
    };
}

                                #ifndef DEF_TRY_ERR
                                #define DEF_TRY_ERR
inline constexpr int TRY_ERR = 1;
                                #endif

static void test_node_iOkpABYf(const s_SolvedNode& node, const s_SolverPass pass, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < node.items.size(); i++)
        test_node_iOkpABYf(node.items[i], pass, ss, _current_fn, _helpers, _here, ctx, module);

    _here = node.token;
    unsigned BL_3_v {};
    if (is_never_FfV8Zuj5(node.type) && (__extension__ (
    {
        const s_Type& type = node.type;
        BL_3_v = ((type.vtype.quals & q_USAGE));
    (void)0;}), BL_3_v))
        BUG_V2MSl2gg("node.is_never but some usage bits set"_fu, ss, _helpers, _here, ctx, module);
    else
    {
        const s_kind k = node.kind;
        if (!is_ref_gBx1AgSx(node.type) == !node.type.lifetime)
        {
            if (k == s_kind_call)
            {
                const s_Overload& o = GET_emAmLQ3D(node.target, ss, _helpers, _here, ctx, module);
                const s_kind k_1 = o.kind;
                fu::view<s_Argument> host_args = EXT_7eVl0gy6(node.target, ss, ctx, module).args;
                fu::view<s_SolvedNode> args = node.items;
                if ((host_args.size() == args.size()) || ((k_1 == s_kind_type) && !args.size()))
                {
                    if (!((o.kind == s_kind_type) && (tryLookupUserType_XVsnoQiv(o.type.vtype, ctx, module).kind == s_kind_struct)))
                    {
                        for (int i_1 = 0; i_1 < args.size(); i_1++)
                        {
                            const s_Argument& host_arg = host_args[i_1];
                            const s_SolvedNode& arg = args[i_1];
                            if (!(isIrrelevant_40rRB6L8(host_arg.type)))
                            {
                                if (!(isAssignableAsArgument_E3uCShzQ(host_arg.type, arg.type, false, _here, ctx)))
                                {
                                    err_a5pPkFfG(((((x7E_gCeFmDFw("Arg #"_fu, fu::i64dec(i_1)) + ", "_fu) + qID_3PsDzMvu(human_nPzEVTlg(host_arg.name, ss, _helpers, _here, ctx, module))) + " not assignable to host_arg: "_fu) + explainTypeDiff_adOaK2Pt(host_arg.type, arg.type, "<-"_fu, ss, _helpers, _here, ctx, module)), node, o, ss, _helpers, _here, ctx, module);
                                };
                            };
                        };
                    };
                    if (o.kind != s_kind_field)
                    {
                        if (!(isAssignable_v8EzC34Q(node.type, o.type, false, false, _here, ctx)))
                        {
                            err_a5pPkFfG(((x7E_gCeFmDFw("Return value of "_fu, str_cmTVYQgp(node, ss, _helpers, _here, ctx, module)) + " not assignable to node.type: "_fu) + explainTypeDiff_adOaK2Pt(node.type, o.type, "<-"_fu, ss, _helpers, _here, ctx, module)), node, o, ss, _helpers, _here, ctx, module);
                        };
                    };
                }
                else
                {
                    err_a5pPkFfG((((((x7E_gCeFmDFw((x7E_gCeFmDFw("host_args.len ("_fu, fu::i64dec(host_args.size())) + ") != args.len ("_fu), fu::i64dec(args.size())) + "):"_fu) + "\n\t\t"_fu) + mangleArgTypes_f1EJFJcX(args)) + "\n\t\t"_fu) + explainWhichFn_9BM72ZzG(node.target, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss, _current_fn, _helpers, _here, ctx, module)), node, o, ss, _helpers, _here, ctx, module);
                };
            }
            else if (k == s_kind_let)
            {
                if (node.items.size() == 2)
                {
                    if (node.items[0])
                        BUG_V2MSl2gg(x7E_gCeFmDFw("let.items[0] not empty: "_fu, str_ZGqrvxJv(node.items[0].kind)), ss, _helpers, _here, ctx, module);

                }
                else
                    BUG_V2MSl2gg(x7E_gCeFmDFw("let.items.len: "_fu, fu::i64dec(node.items.size())), ss, _helpers, _here, ctx, module);

            }
            else if ((k == s_kind_block) || (k == s_kind_and) || (k == s_kind_or) || (k == s_kind_if))
            {
                if (k == s_kind_block)
                {
                    checkLt_dEYS3s91(if_last_GN4mikiy(node.items).type, "block.tail"_fu, node, x7E_gCeFmDFw(str_ZGqrvxJv(node.kind), ".type"_fu), node, ss, _helpers, _here, ctx, module);
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
                        checkLt_dEYS3s91((__extension__ (
                        {
                            const s_Helpers& h = node.helpers;
                            BL_26_v = &(ss._helpers_data[h.index]);
                        (void)0;}), *BL_26_v).ret_actual, "helpers.ret_actual"_fu, node, x7E_gCeFmDFw(str_ZGqrvxJv(node.kind), ".type"_fu), node, ss, _helpers, _here, ctx, module);
                    };
                }
                else if ((k == s_kind_and) || (k == s_kind_or))
                {
                    if ((node.items.size() >= 2))
                    {
                        const int start = (((k == s_kind_and) && !is_mutref_hoadAQC0(node.type, _here, ctx)) ? (node.items.size() - 1) : 0);
                        for (int i_1 = start; i_1 < node.items.size(); i_1++)
                            checkLt_dEYS3s91(node.items[i_1].type, (x7E_gCeFmDFw(x7E_gCeFmDFw(str_ZGqrvxJv(k), ".items["_fu), fu::i64dec(i_1)) + "]"_fu), node, x7E_gCeFmDFw(str_ZGqrvxJv(node.kind), ".type"_fu), node, ss, _helpers, _here, ctx, module);

                    }
                    else
                        BUG_V2MSl2gg(x7E_gCeFmDFw(x7E_gCeFmDFw(str_cmTVYQgp(node, ss, _helpers, _here, ctx, module), ".len: "_fu), fu::i64dec(node.items.size())), ss, _helpers, _here, ctx, module);

                }
                else if (k == s_kind_if)
                {
                    if (node.items.size() == 3)
                    {
                        if (is_never_FfV8Zuj5(node.type))
                        {
                            if (is_never_FfV8Zuj5(node.items[1].type))
                            {
                                if (!(is_never_FfV8Zuj5(node.items[2].type)))
                                    BUG_V2MSl2gg(x7E_gCeFmDFw(x7E_gCeFmDFw(str_cmTVYQgp(node, ss, _helpers, _here, ctx, module), " never.alt not never: "_fu), str_cmTVYQgp(node.items[2], ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                            }
                            else
                                BUG_V2MSl2gg(x7E_gCeFmDFw(x7E_gCeFmDFw(str_cmTVYQgp(node, ss, _helpers, _here, ctx, module), " never.cons not never: "_fu), str_cmTVYQgp(node.items[1], ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                        };
                        checkLt_dEYS3s91(node.items[1].type, "if.then"_fu, node, x7E_gCeFmDFw(str_ZGqrvxJv(node.kind), ".type"_fu), node, ss, _helpers, _here, ctx, module);
                        checkLt_dEYS3s91(node.items[2].type, "if.else"_fu, node, x7E_gCeFmDFw(str_ZGqrvxJv(node.kind), ".type"_fu), node, ss, _helpers, _here, ctx, module);
                    }
                    else
                        BUG_V2MSl2gg(x7E_gCeFmDFw(x7E_gCeFmDFw(str_cmTVYQgp(node, ss, _helpers, _here, ctx, module), ".len: "_fu), fu::i64dec(node.items.size())), ss, _helpers, _here, ctx, module);

                };
                fu::view<s_SolvedNode> items = node.items;
                for (int i_1 = 0; i_1 < items.size(); i_1++)
                {
                    if (!(items[i_1].kind))
                        BUG_V2MSl2gg((x7E_gCeFmDFw(x7E_gCeFmDFw(str_cmTVYQgp(node, ss, _helpers, _here, ctx, module), ": No .kind on item["_fu), fu::i64dec(i_1)) + "]."_fu), ss, _helpers, _here, ctx, module);

                };
            }
            else if (k == s_kind_jump)
            {
                if ((pass >= s_SolverPass_RelaxCopyResize))
                {
                    const s_Helpers& h = node.helpers;
                    const s_SolvedNode& expr = only_GN4mikiy(node.items);
                    if (!(isAssignable_v8EzC34Q(ss._helpers_data[h.index].ret_actual, expr.type, false, false, _here, ctx)))
                        BUG_V2MSl2gg(x7E_gCeFmDFw(((((("BROKEN JUMP TYPE"_fu + "\n\t\tret_actual: "_fu) + (ss._helpers_data[h.index].ret_actual ? humanizeType_adoPoPLu(ss._helpers_data[h.index].ret_actual, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module) : qBAD_3PsDzMvu("N/A"_fu))) + "\n\t\tret_expect: "_fu) + (ss._helpers_data[h.index].ret_expect ? humanizeType_adoPoPLu(ss._helpers_data[h.index].ret_expect, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module) : qBAD_3PsDzMvu("N/A"_fu))) + "\n\t\texpr: "_fu), str_cmTVYQgp(expr, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                };
            }
            else if (k == s_kind_try)
            {
                if (node.items.size() == 3)
                {
                    const s_SolvedNode& err = node.items[TRY_ERR];
                    if (!((err.kind == s_kind_letdef) || (err.kind == s_kind_empty)))
                        BUG_V2MSl2gg(x7E_gCeFmDFw("TRY_ERR not a letdef/empty: "_fu, str_cmTVYQgp(node.items[TRY_ERR], ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                }
                else
                    BUG_V2MSl2gg("try.items.len != 3"_fu, ss, _helpers, _here, ctx, module);

            };
        }
        else
            BUG_V2MSl2gg((x7E_gCeFmDFw(str_cmTVYQgp(node, ss, _helpers, _here, ctx, module), ": !!ref != !!lt: "_fu) + humanizeType_adoPoPLu(node.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    };
}

static void Postdom_resetAtFnEnd_T7PPyDMa(s_Postdom& postdom)
{
    postdom = s_Postdom{};
    postdom.parent_loop_start = 1;
    postdom.snap.exitPaths = s_ExitPaths_XP_EmptyReturn;
}

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
extern const unsigned RELAX_before_bck;
                                #endif

                                #ifndef DEF_CANNOT_definit_mutrefs
                                #define DEF_CANNOT_definit_mutrefs
inline constexpr bool CANNOT_definit_mutrefs = true;
                                #endif

static s_SolvedNode createBool_259f8rFk(const fu::str& value, s_Type&& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    type.vfacts = ((value == "true"_fu) ? s_VFacts_AlwaysTrue : ((value == "false"_fu) ? s_VFacts_AlwaysFalse : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module)));
    return SolvedNode_clCALdMt(s_kind_bool, type, s_Flags{}, value, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode createDefinit_ER0vXD5i(const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_ref_gBx1AgSx(type))
    {
        if (is_mutref_hoadAQC0(type, _here, ctx))
            BUG_V2MSl2gg(("createDefinit: Cannot definit a mutref: "_fu + humanizeType_adoPoPLu(type, true, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
        else if (!hasStatic_Sd1Oo4TV(type.lifetime))
            BUG_V2MSl2gg(("createDefinit: Cannot definit a non-static reference: "_fu + humanizeType_adoPoPLu(type, true, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    };
    if (is_integral_3t4EwFeQ(type.vtype))
    {
        return SolvedNode_clCALdMt(s_kind_int, type, s_Flags{}, "0"_fu, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    }
    else if (is_floating_pt_3t4EwFeQ(type.vtype))
    {
        return SolvedNode_clCALdMt(s_kind_real, type, s_Flags{}, "0"_fu, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    }
    else if (is_boolean_3t4EwFeQ(type.vtype))
        return createBool_259f8rFk("false"_fu, s_Type(type), ss, _helpers, _here, ctx, module);
    else
    {
        return SolvedNode_clCALdMt(s_kind_definit, type, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    };
}

static s_SolvedNode createBlock_IBT2J1Wh(/*MOV*/ s_SolvedNode&& a, /*MOV*/ s_SolvedNode&& b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (b.kind == s_kind_block)
    {
        b.items.unshift(static_cast<s_SolvedNode&&>(a));
        return static_cast<s_SolvedNode&&>(b);
    }
    else
    {
        return createBlock_UZ3zi9cx(b.type, fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { static_cast<s_SolvedNode&&>(a), s_SolvedNode(b) } }, s_Helpers{}, ss, _helpers, _here, ctx, module);
    };
}

static void definitWrap_LXMYAWJ8(s_SolvedNode& node, const s_Type& slot, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_mutref_hoadAQC0(slot, _here, ctx))
        BUG_V2MSl2gg(("Trying to definitWrap a mutref: "_fu + humanizeType_adoPoPLu(slot, true, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    else if (is_ref_gBx1AgSx(slot) && !hasStatic_Sd1Oo4TV(slot.lifetime))
    {
        if (hasTemporary_Sd1Oo4TV(slot.lifetime))
            definitWrap_LXMYAWJ8(node, clear_refs_40rRB6L8(s_Type(slot)), ss, _helpers, _here, ctx, module);
        else
            BUG_V2MSl2gg(("Trying to definitWrap a non-static reference: "_fu + humanizeType_adoPoPLu(slot, true, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    }
    else if (node.kind == s_kind_definit)
        node.type = slot;
    else
        node = createBlock_IBT2J1Wh(s_SolvedNode(node), createDefinit_ER0vXD5i(slot, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module);

}

static void maybeCopyOrMove_w5W0tdPX(s_SolvedNode& node, const s_Type& slot, const bool isArgument, const s_SolverState& ss, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(isIrrelevant_40rRB6L8(slot)))
    {
        if (is_never_FfV8Zuj5(slot) && (slot.vtype.quals & q_USAGE))
            BUG_V2MSl2gg("maybeCopyOrMove: slot.is_never but some usage bits set"_fu, ss, _helpers, _here, ctx, module);
        else if (!isCanonAssignable_IaeizMuX(slot.vtype.canon, node.type.vtype.canon) && !is_never_FfV8Zuj5(node.type))
        {
            if (is_zeroes_FfV8Zuj5(node.type) && !(is_mutref_hoadAQC0(slot, _here, ctx) && CANNOT_definit_mutrefs))
                definitWrap_LXMYAWJ8(node, slot, ss, _helpers, _here, ctx, module);
            else
                BUG_V2MSl2gg(((("Considering copy or move for incompatible types: "_fu + humanizeType_adoPoPLu(slot, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " <- "_fu) + humanizeType_adoPoPLu(node.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        }
        else if (is_ref_gBx1AgSx(slot))
        {
            if (is_trivial_XVsnoQiv(node.type.vtype, ctx, module))
            {
                if ((node.kind == s_kind_definit) && isArgument)
                    node.type = clear_refs_40rRB6L8(s_Type(node.type));

            };
        }
        else
        {
            if (!(!is_ref_gBx1AgSx(node.type)))
            {
                if (node.kind == s_kind_definit)
                    node.type = clear_refs_40rRB6L8(s_Type(node.type));
                else if (is_zeroes_FfV8Zuj5(node.type))
                    definitWrap_LXMYAWJ8(node, slot, ss, _helpers, _here, ctx, module);
                else
                {
                    const s_TokenIdx here0 { _here };
                    fu_DEFER(_here = here0);
                    _here = node.token;
                    node = SolvedNode_clCALdMt(s_kind_copy, clear_refs_40rRB6L8(s_Type(node.type)), s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, s_Helpers{}, _here);
                };
            };
        };
    };
}

                                #ifndef DEF_unless_oob_sNTK8wKWEK0
                                #define DEF_unless_oob_sNTK8wKWEK0
inline const s_Type& unless_oob_sNTK8wKW(fu::view<s_Type> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_Type*)fu::NIL);

}
                                #endif

static void relaxBlockVar_aP78JKMB(const s_Target& t, const unsigned relax_mask, const bool canDiscard, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_Overload BL_1_v {};
    s_Overload o = (__extension__ (
    {
        const s_Overload& __partcopy_ref = GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module);
        BL_1_v = (s_Overload { __partcopy_ref.kind, __partcopy_ref.flags, __partcopy_ref.status, fu::str(__partcopy_ref.name), s_Type { s_ValueType { {}, fu::str(__partcopy_ref.type.vtype.canon) }, {}, {} }, s_SolvedNode { {}, {}, {}, {}, {}, {}, s_TokenIdx(__partcopy_ref.solved.token), {}, {} } });
    (void)0;}), static_cast<s_Overload&&>(BL_1_v));
    if (_current_fn)
    {
        const s_Type& usage = unless_oob_sNTK8wKW(_current_fn.relaxed.var_usage, int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
        const bool isUnused = !usage;
        if (isUnused)
        {
            if (!((o.flags & s_Flags_F_LAX) || s_SolverStatus((o.status & s_SolverStatus_SS_MATCHED)) || is_zst_XVsnoQiv(o.type.vtype, ctx, module)))
            {
                const s_TokenIdx token { o.solved.token };
                int BL_5_v {};
                s_Warning& a = grow_if_oob_fnaTFAcU(ss._warnings, (__extension__ (
                {
                    const s_Target& t_1 = _current_fn.out.target;
                    BL_5_v = (int(unsigned(((t_1._packed >> 20ull) & 0xfffffull))));
                (void)0;}), BL_5_v));
                if (!(a))
                {
                    a = s_Warning { s_TokenIdx(token), fail_appendStack_t2nNPGED((((x7E_gCeFmDFw("Unused variable: "_fu, str_3AjvLtSQ(o, ss, _helpers, _here, ctx, module)) + ": make it "_fu) + qKW_3PsDzMvu("lax"_fu)) + " if this is intentional."_fu), ss, _helpers, _here, ctx, module) };
                };
            };
        };

        {
            const s_SolverState& ss_1 = ss;
            if (is_rx_copy_GSunVkiW(usage) && isIrrelevant_40rRB6L8(usage) && !is_zst_XVsnoQiv(usage.vtype, ctx, module))
                BUG_V2MSl2gg(((x7E_gCeFmDFw("relaxBlockVar "_fu, str_3AjvLtSQ(GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ": Usage is copy but no usage bits set: "_fu) + humanizeType_adoPoPLu(usage, false, false, false, (*(const s_Type*)fu::NIL), ss_1, _helpers, _here, ctx, module)), ss_1, _helpers, _here, ctx, module);

        };
        s_Overload& o_1 = GET_mut_uE8Nb6mH(t, ss, module);
        if (isUnused)
            o_1.status |= s_SolverStatus_SS_UNUSED;
        else if (o_1.status & s_SolverStatus_SS_UNUSED)
            BUG_V2MSl2gg(((x7E_gCeFmDFw("relaxBlockVar: previously SS_UNUSED "_fu, str_3AjvLtSQ(o_1, ss, _helpers, _here, ctx, module)) + " now used as "_fu) + humanizeType_adoPoPLu(usage, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        if (isUnused && canDiscard)
            o_1.solved.type = t_void;

        try_relax_c5Z7RHRf(o_1.type, usage, relax_mask);
        s_SolvedNode& node = o_1.solved;
        if (node.type)
        {
            try_relax_c5Z7RHRf(node.type, usage, relax_mask);
            if (o_1.flags & s_Flags_F_MUT)
            {
                if (is_mutref_hoadAQC0(usage, _here, ctx))
                {
                    /*MOV*/ s_Type type = clear_refs_40rRB6L8(s_Type(node.type));
                    node.type = static_cast<s_Type&&>(type);
                }
                else
                    o_1.flags &= ~s_Flags_F_MUT;

            };
            s_Overload& o_2 = GET_mut_uE8Nb6mH(t, ss, module);
            if (o_2.flags & s_Flags_F_RELAXABLE_REF)
            {
                const s_Flags strip = (s_Flags_F_RELAXABLE_REF | (!is_mutref_hoadAQC0(usage, _here, ctx) ? s_Flags_F_REF : s_Flags{}));
                o_2.flags &= ~strip;
                o_2.solved.flags &= ~strip;
            };
        }
        else
            BUG_V2MSl2gg("relaxBlockVar: !var.solved.type, can`t propagateType"_fu, ss, _helpers, _here, ctx, module);

    };
    s_SolvedNode& node = GET_mut_uE8Nb6mH(t, ss, module).solved;
    if (node.items && node.items[LET_INIT] && !(o.flags & s_Flags_F_ARG))
    {
        s_SolvedNode init {};
        std::swap(init, node.items.mutref(LET_INIT));
        propagateType_0IjBDgsa(init, s_Type(node.type), relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        s_Overload& o_1 = GET_mut_uE8Nb6mH(t, ss, module);
        s_SolvedNode& node_1 = o_1.solved;
        if (is_ref_gBx1AgSx(node_1.type) && !(node_1.flags & s_Flags_F_ARG))
        {
            node_1.type.lifetime = init.type.lifetime;
        };
        std::swap(init, node_1.items.mutref(LET_INIT));
    };
    add_U5p6nLOf(_current_fn.relaxed.done_relaxing, int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
}

static bool isShallowLiteral_dFhywy4j(const s_kind kind)
{
    return (kind == s_kind_int) || (kind == s_kind_real) || (kind == s_kind_char) || (kind == s_kind_str) || (kind == s_kind_bool) || (kind == s_kind_definit);
}

static bool isDiscardable_7SPn8aqY(const s_SolvedNode& node, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (node.items)
        return false;
    else if ((node.kind == s_kind_call) || (node.kind == s_kind_letdef))
        return false;
    else if ((node.kind == s_kind_empty) || (node.kind == s_kind_block) || (node.kind == s_kind_fndef) || isShallowLiteral_dFhywy4j(node.kind))
        return true;
    else
        BUG_V2MSl2gg((x7E_gCeFmDFw("TODO: isDiscardable("_fu, str_ZGqrvxJv(node.kind)) + ")"_fu), ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_x3Cx3E_dblqY4xTsyl
                                #define DEF_x3Cx3E_dblqY4xTsyl
inline int x3Cx3E_dblqY4xT(const s_ExitPaths a, const s_ExitPaths b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_OomanMwaVKk
                                #define DEF_x3Cx3E_OomanMwaVKk
inline int x3Cx3E_OomanMwa(const fu::u8 a, const fu::u8 b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_5spcNyaYRzj
                                #define DEF_x3Cx3E_5spcNyaYRzj
inline int x3Cx3E_5spcNyaY(fu::view<fu::u8> a, fu::view<fu::u8> b)
{
    int cmp = x3Cx3E_mJGU9byO(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_OomanMwa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Cx3E_MS1pv7Rt6Xe
                                #define DEF_x3Cx3E_MS1pv7Rt6Xe
inline int x3Cx3E_MS1pv7Rt(const s_BitSet& a, const s_BitSet& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_5spcNyaY(a._data, b._data)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_l8mfy64Uhcc
                                #define DEF_x3Cx3E_l8mfy64Uhcc
inline int x3Cx3E_l8mfy64U(const s_PostdomSnap& a, const s_PostdomSnap& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_mJGU9byO(a.mayEscapeVia, b.mayEscapeVia)))
        return cmp;
    else if ((cmp = x3Cx3E_dblqY4xT(a.exitPaths, b.exitPaths)))
        return cmp;

    if ((cmp = x3Cx3E_MS1pv7Rt(a.used_again, b.used_again)))
        return cmp;
    else if ((cmp = x3Cx3E_MS1pv7Rt(a.ever_written, b.ever_written)))
        return cmp;

    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_YftrFGvzmNb
                                #define DEF_x3Cx3E_YftrFGvzmNb
inline int x3Cx3E_YftrFGvz(const s_Postdom& a, const s_Postdom& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_mJGU9byO(a.parent_loop_start, b.parent_loop_start)))
        return cmp;
    else if ((cmp = x3Cx3E_l8mfy64U(a.snap, b.snap)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Dx3D_YftrFGvzmNb
                                #define DEF_x3Dx3D_YftrFGvzmNb
inline bool operator==(const s_Postdom& a, const s_Postdom& b)
{
    return !x3Cx3E_YftrFGvz(a, b);
}
                                #endif

static void branch_JgIkV0Yd(s_Postdom& dest, const s_Postdom& src, const s_TokenIdx& _here, const s_Context& ctx)
{

    {
        dest.snap.used_again |= src.snap.used_again;
        dest.snap.ever_written |= src.snap.ever_written;
        dest.snap.mayEscapeVia |= src.snap.mayEscapeVia;
        dest.snap.exitPaths |= src.snap.exitPaths;
    };
    dest.parent_loop_start = max_mJGU9byO((dest.parent_loop_start ? dest.parent_loop_start : BUG_9SZtRVJ0(fu::str{}, _here, ctx)), (src.parent_loop_start ? src.parent_loop_start : BUG_9SZtRVJ0(fu::str{}, _here, ctx)));
}

                                #ifndef DEF_if_only_GN4mikiykv7
                                #define DEF_if_only_GN4mikiykv7
inline const s_SolvedNode& if_only_GN4mikiy(fu::view<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return (*(const s_SolvedNode*)fu::NIL);

}
                                #endif

static int createAndOr_staticEvalFold_YyEgkR2M(fu::vec<s_SolvedNode>& items, const s_StaticEval static_eval_fold, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int trim = 0;
    for (int i = (items.size() - 1); i-- > 0; )
    {
        const s_StaticEval se = tryAbstractEvalAsBool_OmcawlSX(items[i], false, ss, _current_fn, _helpers, _here, ctx, module);
        if (se == static_eval_fold)
        {
            /*MOV*/ s_SolvedNode cond { items[i] };
            items.splice(i, 1);
            if (trim)
                trim--;

            s_SolvedNode& cons = items.mutref(i);
            cons = createBlock_IBT2J1Wh(static_cast<s_SolvedNode&&>(cond), s_SolvedNode(cons), ss, _helpers, _here, ctx, module);
        }
        else if (se)
            trim = (i + 1);

    };
    return trim;
}

static s_SolvedNode createOr_6Eo1FhDy(fu::vec<s_SolvedNode>&& items, s_Type&& type, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    {
        const int trim = createAndOr_staticEvalFold_YyEgkR2M(items, s_StaticEval_SE_False, ss, _current_fn, _helpers, _here, ctx, module);
        const s_VFacts vfacts = s_VFacts_AlwaysTrue;
        if (trim)
        {
            items.shrink(trim);
            type.vfacts |= vfacts;
        };
        if (items.size() < 2)
        {
            const s_SolvedNode& only = only_GN4mikiy(items);
            return s_SolvedNode(only);
        };
    };
    if (!(propositionOK_hoadAQC0(type, _here, ctx) || is_void_FfV8Zuj5(type)))
    { {
        /*MOV*/ s_Type sumType {};
        for (int i = items.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items[i];
            if (!(is_never_FfV8Zuj5(item.type)))
            {
                if (sumType)
                {
                    s_Type _0 {};
                    fu::never BL_9_v {};
                    sumType = ((_0 = type_trySuper_2nNLpyR4(sumType, item.type, false, _here, ctx)) ? static_cast<s_Type&&>(_0) : (__extension__ (
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
                        fail_Ulv2WHKu(((("Ambiguous ||, incompatible operands in a non-bool context: "_fu + humanizeType_adoPoPLu(item.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " || "_fu) + humanizeType_adoPoPLu(sumType, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                    (void)0;}), static_cast<fu::never&&>(BL_9_v)));
                }
                else
                    sumType = item.type;

            };
        };
        if (!sumType)
            type = t_bool;
        else
            type = static_cast<s_Type&&>(sumType);

      } BL_4:;
    }
    else
        type = t_bool;

    if (is_never_FfV8Zuj5(last_GN4mikiy(items).type))
        type.vfacts = s_VFacts_AlwaysTrue;

    return SolvedNode_clCALdMt(s_kind_or, type, s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode solveDefinit_ITxkOehH(const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return createDefinit_ER0vXD5i(definitType_hoadAQC0(s_Type(type), _here, ctx), ss, _helpers, _here, ctx, module);
}

static fu::str& explain_fn5jxolp(const s_Type& a, const s_Type& b, fu::view<s_Target> chain, fu::str& error, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return (error += ((("\n\t"_fu + explainTypeDiff_adOaK2Pt(a, b, "->"_fu, ss, _helpers, _here, ctx, module)) + ":"_fu) + explainConversion_MC5S46hy(chain, fu::view<char>{}, ss, _current_fn, _helpers, _here, ctx, module)));
}

static s_Type convertToSuperType_Frr358Fx(fu::view<char> topic, s_SolvedNode& a, s_SolvedNode& b, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{

    {
        /*MOV*/ s_Type super = type_trySuper_2nNLpyR4(a.type, b.type, false, _here, ctx);
        if (super)
            return /*NRVO*/ super;

    };
    s_Type b_T = clear_vfacts_40rRB6L8(s_Type(b.type));
    s_Type a_T = clear_vfacts_40rRB6L8(s_Type(a.type));

    {
        s_Type aRetype = tryRetyping_omCvj6H0(a, b_T, ss, _helpers, _here, ctx, module, options);
        s_Type bRetype = tryRetyping_omCvj6H0(b, a_T, ss, _helpers, _here, ctx, module, options);
        if (aRetype)
        {
            if (bRetype)
                fail_Ulv2WHKu(((((topic + ": Type ambiguity, literals can be retyped both ways: "_fu) + humanizeType_adoPoPLu(a.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " <-> "_fu) + humanizeType_adoPoPLu(b.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
            else
            {
                /*MOV*/ s_Type super = type_trySuper_2nNLpyR4(aRetype, b.type, false, _here, ctx);
                if (super)
                {
                    applyRetype_y49lzuvP(a, aRetype, ss, _helpers, _here, ctx, module);
                    return /*NRVO*/ super;
                };
            };
        };
        if (bRetype)
        {
            /*MOV*/ s_Type super = type_trySuper_2nNLpyR4(bRetype, a.type, false, _here, ctx);
            if (super)
            {
                applyRetype_y49lzuvP(b, bRetype, ss, _helpers, _here, ctx, module);
                return /*NRVO*/ super;
            };
        };
    };

    {
        fu::vec<s_Target> aConv = tryConvert_72F8WtpU(b_T, true, a.type, (*(const s_SolvedNode*)fu::NIL), (*(const s_Scope*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        fu::vec<s_Target> bConv = tryConvert_72F8WtpU(a_T, true, b.type, (*(const s_SolvedNode*)fu::NIL), (*(const s_Scope*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (aConv)
        {
            if (bConv)
            {
                fu::str error = (topic + ": Type ambiguity, conversions exist both ways:\n"_fu);
                explain_fn5jxolp(a.type, b.type, aConv, error, ss, _current_fn, _helpers, _here, ctx, module);
                explain_fn5jxolp(b.type, a.type, bConv, error, ss, _current_fn, _helpers, _here, ctx, module);
                fail_Ulv2WHKu(error, ss, _helpers, _here, ctx, module);
            }
            else
            {
                applyConversion_4Gb9aRGW(a, aConv, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                s_Type _0 {};
                return (_0 = type_trySuper_2nNLpyR4(a.type, b.type, false, _here, ctx)) ? static_cast<s_Type&&>(_0) : BUG_V2MSl2gg("convertToSuper: aConv super"_fu, ss, _helpers, _here, ctx, module);
            };
        }
        else if (bConv)
        {
            applyConversion_4Gb9aRGW(b, bConv, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            s_Type _1 {};
            return (_1 = type_trySuper_2nNLpyR4(a.type, b.type, false, _here, ctx)) ? static_cast<s_Type&&>(_1) : BUG_V2MSl2gg("convertToSuper: bConv super"_fu, ss, _helpers, _here, ctx, module);
        };
    };
    fail_Ulv2WHKu(((((topic + ": No common supertype: "_fu) + humanizeType_adoPoPLu(a.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " <-> "_fu) + humanizeType_adoPoPLu(b.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
}

static s_SolvedNode createIf_ayEiHZB3(const s_SolvedNode& cond, /*MOV*/ s_SolvedNode&& cons, /*MOV*/ s_SolvedNode&& alt, /*MOV*/ s_Type&& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (is_never_FfV8Zuj5(cond.type))
        BUG_V2MSl2gg("createIf: cond.is_never"_fu, ss, _helpers, _here, ctx, module);
    else if (const s_StaticEval ae_cond = tryAbstractEvalAsBool_OmcawlSX(cond, false, ss, _current_fn, _helpers, _here, ctx, module))
        return createBlock_IBT2J1Wh(s_SolvedNode(cond), static_cast<s_SolvedNode&&>(((ae_cond == s_StaticEval_SE_True) ? cons : ((ae_cond == s_StaticEval_SE_False) ? alt : BUG_V2MSl2gg("createIf: ae_cond, neither True nor False."_fu, ss, _helpers, _here, ctx, module)))), ss, _helpers, _here, ctx, module);
    else
    {
        const bool cons_isNever = is_never_FfV8Zuj5(cons.type);
        const bool alt_isNever = is_never_FfV8Zuj5(alt.type);
        if (cons_isNever && alt_isNever)
            type = t_never;
        else if (!is_void_FfV8Zuj5(type))
        {
            type = (cons_isNever ? s_Type(alt.type) : (alt_isNever ? s_Type(cons.type) : convertToSuperType_Frr358Fx("if/else"_fu, cons, alt, ss, _notes, _current_fn, _helpers, _here, ctx, module, options)));
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
                            return createBlock_UZ3zi9cx(type, fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(cond) } }, s_Helpers{}, ss, _helpers, _here, ctx, module);
                        }
                        else
                        {
                            return createOr_6Eo1FhDy(fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(cond), static_cast<s_SolvedNode&&>(alt) } }, static_cast<s_Type&&>(type), ss, _current_fn, _helpers, _here, ctx, module);
                        };
                    }
                    else if (alt.kind == s_kind_empty)
                    {
                        return createAnd_w6k6Jw1i(fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(cond), static_cast<s_SolvedNode&&>(cons) } }, static_cast<s_Type&&>(type), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    };
                }
                else
                    BUG_V2MSl2gg("!alt"_fu, ss, _helpers, _here, ctx, module);

            }
            else
                BUG_V2MSl2gg("!cons"_fu, ss, _helpers, _here, ctx, module);

        }
        else
            BUG_V2MSl2gg("!cond || cond.empty"_fu, ss, _helpers, _here, ctx, module);

        return SolvedNode_clCALdMt(s_kind_if, (type ? type : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module)), s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(cond), static_cast<s_SolvedNode&&>(cons), static_cast<s_SolvedNode&&>(alt) } }, s_Target{}, s_Helpers{}, _here);
    };
}

static s_SolvedNode createAnd_w6k6Jw1i(fu::vec<s_SolvedNode>&& items, s_Type&& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const int trim = createAndOr_staticEvalFold_YyEgkR2M(items, s_StaticEval_SE_True, ss, _current_fn, _helpers, _here, ctx, module);
    if ((items.size() > 1) && !(propositionOK_hoadAQC0(type, _here, ctx) || is_void_FfV8Zuj5(type)))
    {
        /*MOV*/ s_Type sumType {};
        for (int i = items.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items[i];
            if (!(is_never_FfV8Zuj5(item.type)))
            {
                if (sumType)
                {
                    sumType = type_trySuper_2nNLpyR4(sumType, item.type, false, _here, ctx);
                    if (!is_ref_gBx1AgSx(sumType))
                        break;

                }
                else
                {
                    type = item.type;
                    sumType = item.type;
                    if (is_zeroes_FfV8Zuj5(type))
                        break;

                };
            };
        };
        if (!is_ref_gBx1AgSx(sumType))
        {
            /*MOV*/ fu::vec<s_SolvedNode> cond = fu::slice(items, 0, (items.size() - 1));
            const s_SolvedNode& cons = last_GN4mikiy(items);
            s_SolvedNode _0 {};
            return (_0 = createAnd_w6k6Jw1i(static_cast<fu::vec<s_SolvedNode>&&>(cond), s_Type(t_bool), ss, _notes, _current_fn, _helpers, _here, ctx, module, options), createIf_ayEiHZB3(static_cast<s_SolvedNode&&>(_0), s_SolvedNode(cons), solveDefinit_ITxkOehH(type, ss, _helpers, _here, ctx, module), s_Type{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
        }
        else
            type = static_cast<s_Type&&>(sumType);

    }
    else
        type = t_bool;


    {
        const s_VFacts vfacts = s_VFacts_AlwaysFalse;
        if (trim)
        {
            items.shrink(trim);
            type.vfacts |= vfacts;
        };
        if (items.size() < 2)
        {
            const s_SolvedNode& only = only_GN4mikiy(items);
            return s_SolvedNode(only);
        };
    };
    if (is_never_FfV8Zuj5(last_GN4mikiy(items).type))
        type.vfacts = s_VFacts_AlwaysFalse;

    return SolvedNode_clCALdMt(s_kind_and, type, s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
}

                                #ifndef DEF_TRY_CATCH
                                #define DEF_TRY_CATCH
inline constexpr int TRY_CATCH = 2;
                                #endif

static s_SolvedNode& recover_B5X8colD(s_SolvedNode& node)
{
    return node.items.mutref(TRY_CATCH);
}

static s_SolvedNode& error_vpF7hGUq(s_SolvedNode& node)
{
    return node.items.mutref(TRY_ERR);
}

                                #ifndef DEF_TRY_TRY
                                #define DEF_TRY_TRY
inline constexpr int TRY_TRY = 0;
                                #endif

static s_SolvedNode& attempt_rAyflzSA(s_SolvedNode& node)
{
    return node.items.mutref(TRY_TRY);
}

static void Breakable_begin_K692EePS(const bool loop_PREVITER, const s_SolvedNode& node, const unsigned relax_mask, s_SolverState& ss, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx)
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
        branch_JgIkV0Yd(_current_fn.postdom, (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_4_v = &(ss._helpers_data[h.index]);
        (void)0;}), *BL_4_v).loop_PREVITER, _here, ctx);
    };
}

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 5;
                                #endif

static s_SolvedNode& post_cond_oOn9CB9W(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST_COND);
}

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static s_SolvedNode& post_gekd1hZE(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST);
}

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 3;
                                #endif

static s_SolvedNode& body_lGeyCSym(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_BODY);
}

                                #ifndef DEF_LOOP_PRE
                                #define DEF_LOOP_PRE
inline constexpr int LOOP_PRE = 2;
                                #endif

static s_SolvedNode& pre_JAoFRyiB(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_PRE);
}

                                #ifndef DEF_LOOP_PRE_COND
                                #define DEF_LOOP_PRE_COND
inline constexpr int LOOP_PRE_COND = 1;
                                #endif

static s_SolvedNode& pre_cond_b5oWFBYE(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_PRE_COND);
}

static void Breakable_end_f9BqCEoJ(const bool loop_PREVITER, const s_SolvedNode& node, const unsigned relax_mask, s_SolverState& ss, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx)
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
        clear_quDuppI6(previter.snap.used_again, loop_start);
        clear_quDuppI6(previter.snap.ever_written, loop_start);
    };
    if (node.helpers)
    {
        const s_HelpersData* BL_5_v;
        branch_JgIkV0Yd(_current_fn.postdom, (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_5_v = &(ss._helpers_data[h.index]);
        (void)0;}), *BL_5_v).postdom, _here, ctx);
    };
}

                                #ifndef DEF_grow_if_oob_8tYvLc8b1M8
                                #define DEF_grow_if_oob_8tYvLc8b1M8
inline s_Type& grow_if_oob_8tYvLc8b(fu::vec<s_Type>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void trackVarUsage_mx8qL1TF(const int locid, const s_Type& slot, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_rx_copy_GSunVkiW(slot) && isIrrelevant_40rRB6L8(slot) && !is_zst_XVsnoQiv(slot.vtype, ctx, module))
        BUG_V2MSl2gg(((x7E_gCeFmDFw("trackVarUsage "_fu, str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ": Usage is copy but no usage bits set: "_fu) + humanizeType_adoPoPLu(slot, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    else if (hasTemporary_Sd1Oo4TV(slot.lifetime))
        BUG_V2MSl2gg((x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ", trackVarUsage: slot is ref2temp: "_fu) + humanizeType_adoPoPLu(slot, true, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    s_Type& usage = grow_if_oob_8tYvLc8b(_current_fn.relaxed.var_usage, locid);
    if (!usage)
        usage = slot;
    else
    {
        s_Type _0 {};
        usage = ((_0 = type_tryIntersect_RYGee21D(usage, slot)) ? static_cast<s_Type&&>(_0) : BUG_V2MSl2gg((x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ": Usage intersection failure: "_fu) + explainTypeDiff_adOaK2Pt(usage, slot, "&"_fu, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module));
    };
}

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

static s_SolvedNode& init_notdxdZN(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_INIT);
}

                                #ifndef DEF_only_Iovd0TM6VE8
                                #define DEF_only_Iovd0TM6VE8
inline s_SolvedNode& only_Iovd0TM6(fu::view_mut<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s.mutref(0);
    else
        fu::fail(x7E_gCeFmDFw("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_UnpackedOffset field_unpackOffset_ZweBlDlz(const s_Overload& o, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (o.kind == s_kind_field)
    {
        const int packed = o.solved.helpers.index;
        return s_UnpackedOffset { (packed & 0xffff), (packed >> 16) };
    }
    else
        BUG_V2MSl2gg("field_unpackOffset: Not a field."_fu, ss, _helpers, _here, ctx, module);

}

static bool trackUse_Vokpgg2y(const s_Target& t, s_BitSet& bitset, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int locid = int(unsigned(((t._packed >> 40ull) & 0xfffffull)));
    if (!add_once_U5p6nLOf(bitset, locid))
        return false;
    else
    {
        const s_Overload& o = GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module);
        const s_SolvedNode& letNode = o.solved;
        if (is_ref_gBx1AgSx(letNode.type))
        {
            if (o.flags & s_Flags_F_ARG)
                return false;
            else if (!trackUse_oUlJSDNi(Lifetime_climbType_n6B2CKz9(o, ss, _helpers, _here, ctx, module).lifetime, bitset, ss, _current_fn, _helpers, _here, ctx, module))
                return false;

        };
        return (locid >= _current_fn.postdom.parent_loop_start);
    };
}

inline static void l_27_21_53Wc9pE7(const int locid, const bool isTemp, s_BitSet& bitset, bool& allTrue, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(isTemp))
    {
        if (!(locid && trackUse_Vokpgg2y(nested_nWBn0vig(locid, ss), bitset, ss, _current_fn, _helpers, _here, ctx, module)))
            allTrue = false;

    };
}

                                #ifndef DEF_Lifetime_each_I3URFyJ5W5g
                                #define DEF_Lifetime_each_I3URFyJ5W5g
inline void Lifetime_each_I3URFyJ5(const s_Lifetime& lifetime, s_BitSet& bitset, bool& allTrue, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_21_53Wc9pE7(int(((r & 1u) ? 0u : (r >> 1u))), (r == 1u), bitset, allTrue, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static bool trackUse_oUlJSDNi(const s_Lifetime& lt, s_BitSet& bitset, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    bool allTrue = true;
    Lifetime_each_I3URFyJ5(lt, bitset, allTrue, ss, _current_fn, _helpers, _here, ctx, module);
    return allTrue;
}

static bool tryTrackLastUse_BdqzFH1C(const s_Lifetime& lt, const unsigned relax_mask, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (relax_mask == RELAX_all)
        return trackUse_oUlJSDNi(lt, _current_fn.postdom.snap.used_again, ss, _current_fn, _helpers, _here, ctx, module);
    else
        return false;

}

                                #ifndef DEF_min_mJGU9byOmI4
                                #define DEF_min_mJGU9byOmI4
inline int min_mJGU9byO(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

static fu::str mangleArgTypes_bUd6kdA0(fu::view<s_SolvedNode> args, const s_Reorder& reorder, fu::view<fu::vec<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::str mangle = ""_fu;
    const int REST_END = (reorder ? reorder.map.size() : args.size());
    const int N = min_mJGU9byO(REST_END, REST_START);
    for (int i = 0; i < N; i++)
    {
        if (i)
            mangle += ',';

        const int callsiteIndex = (reorder ? reorder.map[i] : i);
        if ((conversions.size() > i) && conversions[i].size())
            mangle += serializeType_NOIpmQqe(GET_emAmLQ3D(last_ohJwrXiS(conversions[i]), ss, _helpers, _here, ctx, module).type, "mangle.conv"_fu);
        else if ((callsiteIndex >= 0) && (callsiteIndex <= args.size()))
            mangle += serializeType_NOIpmQqe(args[callsiteIndex].type, "mangle.no-conv"_fu);

    };
    if (REST_START < REST_END)
    {
        if (REST_START)
            mangle += ',';

        mangle += serializeType_NOIpmQqe(REST_TYPE, "mangle[Nodes].rest"_fu);
    };
    return /*NRVO*/ mangle;
}

inline static void l_27_29_ZwPmCnpX(const s_Target& target, int& parent_idx, const s_SolverState& ss, const s_Module& module)
{
    if (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) || (int(unsigned((target._packed & 0xfffffull))) == module.modid))
    {
        const int local_of = localOf_DvqCQ2NA(target, ss, module);
        if (parent_idx < local_of)
            parent_idx = local_of;

    };
}

                                #ifndef DEF_unpackAddrOfFn_IUvl8B15Kmj
                                #define DEF_unpackAddrOfFn_IUvl8B15Kmj
inline void unpackAddrOfFn_IUvl8B15(fu::view<char> canon, int& parent_idx, const s_SolverState& ss, const s_Module& module)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            const s_Target mi = parseLocalOrGlobal_qtvefzpE(canon, offset);
            l_27_29_ZwPmCnpX(Target_2jgCJZJY(int(unsigned((mi._packed & 0xfffffull))), int(unsigned(((mi._packed >> 20ull) & 0xfffffull))), int(unsigned(((mi._packed >> 40ull) & 0xfffffull)))), parent_idx, ss, module);
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

static s_Target trySpecialize_ow9DQawS(const s_Target& overloadIdx, fu::view<s_SolvedNode> args, fu::str& args_mangled, const int REST_START, const s_Type& REST_TYPE, const s_Reorder& reorder, fu::view<fu::vec<s_Target>> conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (!(args_mangled))
        args_mangled = mangleArgTypes_bUd6kdA0(args, reorder, conversions, REST_START, REST_TYPE, ss, _helpers, _here, ctx, module);

    int parent_idx = EPH_rI6gXXKb(overloadIdx, ss, module).local_of;
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg_t = args[i];
        if (isAddrOfFn_gBx1AgSx(arg_t.type))
            unpackAddrOfFn_IUvl8B15(arg_t.type.vtype.canon, parent_idx, ss, module);

    };
    fu::str mangle = ((x7E_gCeFmDFw(x7E_gCeFmDFw(fu::i64dec(int(unsigned((overloadIdx._packed & 0xfffffull)))), "#"_fu), fu::i64dec(int(unsigned(((overloadIdx._packed >> 20ull) & 0xfffffull))))) + " "_fu) + args_mangled);
    s_Target _0 {};
    return (_0 = s_Target(get_55pvGtB1(getSpecs_WybGsFZ9(parent_idx, ss), mangle))) ? _0 : (_0 = doTrySpecialize_mdB4qvQU(parent_idx, s_Target{}, overloadIdx, args, mangle, reorder, conversions, REST_START, REST_TYPE, ss, _notes, _current_fn, _helpers, _here, ctx, module, options)) ? _0 : BUG_V2MSl2gg("doTrySpecialize returns empty target."_fu, ss, _helpers, _here, ctx, module);
}

static void redirectCallTarget_lK2O0v6I(const s_Target& spec, s_SolvedNode& node, const s_Target& t, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (!(spec == node.target))
    {
        ensureLazySolved_xqnKwZRS(spec, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (EXT_7eVl0gy6(spec, ss, ctx, module).args.size() == EXT_7eVl0gy6(t, ss, ctx, module).args.size())
        {
            checkAssignable_Kg6rKWSk(node.type, GET_emAmLQ3D(spec, ss, _helpers, _here, ctx, module).type, "Relaxed specialization does not return a subtype"_fu, (*(const fu::str*)fu::NIL), (*(const fu::str*)fu::NIL), false, ss, _helpers, _here, ctx, module);
            if (is_ref_gBx1AgSx(node.type))
            {
                node.type.lifetime = static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>(TEST_Lifetime_Rhs2skr1(Lifetime_replaceArgsAtCallsite_tu6HtRg4(spec, node.items, ss, _helpers, _here, ctx, module), true, false, ss, _helpers, _here, ctx, module)));
            };
            node.target = spec;
            const s_SolverNotes note = s_SolverNotes_N_RelaxRespec;
            const s_SolverState& ss_1 = ss;
            if (note & options.break_notes)
                fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
            else
                _notes |= note;

        }
        else
            BUG_V2MSl2gg("Relaxed spec.args.len != original.args.len"_fu, ss, _helpers, _here, ctx, module);

    };
}

static bool isDiscardable_syuU7tpR(const s_Target& t, const s_SolverState& ss, const s_Context& ctx, const s_Module& module)
{
    if (EXT_7eVl0gy6(t, ss, ctx, module).fx_mask & s_FxMask_Fx_NotDeadCode)
        return false;
    else
    {
        fu::view<s_Argument> host_args = EXT_7eVl0gy6(t, ss, ctx, module).args;
        for (int i = 0; i < host_args.size(); i++)
        {
            if (host_args[i].flags & s_Flags_F_WRITTEN_TO)
                return false;

        };
        return true;
    };
}

static void discardIntoBlock_vpwm9X31(s_SolvedNode& node, const s_Type& slot, const unsigned relax_mask, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    node = createBlock_UZ3zi9cx(slot, fu::vec<s_SolvedNode>(node.items), s_Helpers{}, ss, _helpers, _here, ctx, module);
    propagateType_0IjBDgsa(node, slot, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

                                #ifndef DEF_unless_oob_6AZJyJXOagd
                                #define DEF_unless_oob_6AZJyJXOagd
inline const fu::vec<int>& unless_oob_6AZJyJXO(fu::view<fu::vec<int>> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const fu::vec<int>*)fu::NIL);

}
                                #endif

                                #ifndef DEF_x3Cx3E_f6ZUelrTG99
                                #define DEF_x3Cx3E_f6ZUelrTG99
inline int x3Cx3E_f6ZUelrT(const s_StructCanon& a, const s_StructCanon& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_mJGU9byO(a.modid, b.modid)))
        return cmp;
    else if ((cmp = x3Cx3E_mJGU9byO(a.index, b.index)))
        return cmp;

    return 0;
}
                                #endif

                                #ifndef DEF_add_p4YxMLtOoT2
                                #define DEF_add_p4YxMLtOoT2
inline bool add_p4YxMLtO(fu::vec<s_StructCanon>& keys, const s_StructCanon& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_f6ZUelrT(keys[i], item);
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

static bool type_maybeInside_rVMG3iJf(const s_ValueType& host, const s_ValueType& guest, fu::vec<s_StructCanon>& seen, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (host.canon == guest.canon)
        return true;
    else if (s_Type itemType = tryClear_sliceable_dB532Fe7(host))
        return type_maybeInside_rVMG3iJf(itemType.vtype, guest, seen, ss, _helpers, _here, ctx, module);
    else
    {
        if (isStruct_jSb6u57z(host))
        {
            const s_StructCanon scp = parseStructCanon_9HOct2P6(host.canon);
            const s_Struct& s = lookupUserType_1TAwTGhV(scp, module, ctx);
            if ((!s.all_triv || is_trivial_XVsnoQiv(guest, ctx, module)) && add_p4YxMLtO(seen, scp))
            {
                for (int i = 0; i < s.items.size(); i++)
                {
                    const s_Target f = target_NWTdzsfF(s.items[i]);
                    if (type_maybeInside_rVMG3iJf(GET_emAmLQ3D(f, ss, _helpers, _here, ctx, module).type.vtype, guest, seen, ss, _helpers, _here, ctx, module))
                        return true;

                };
            };
        };
        return false;
    };
}

static bool type_mayPointInto_Wo90s0uN(const s_ValueType& host, const s_ValueType& guest, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_reinterpretable_XVsnoQiv(guest, ctx, module))
        return true;
    else
    {
        s_Type slice_T = tryClear_sliceable_dB532Fe7(guest);
        if (slice_T && is_reinterpretable_XVsnoQiv(slice_T.vtype, ctx, module))
            return true;
        else
        {
            fu::vec<s_StructCanon> seen {};
            return type_maybeInside_rVMG3iJf(host, guest, seen, ss, _helpers, _here, ctx, module);
        };
    };
}

inline static s_SolvedNode TODO_FIX_pop_yXbWfvcw(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

                                #ifndef DEF_x3Dx3D_epTRPTjENcj
                                #define DEF_x3Dx3D_epTRPTjENcj
inline bool operator==(const s_TokenIdx& a, const s_TokenIdx& b)
{
    return !x3Cx3E_epTRPTjE(a, b);
}
                                #endif

inline static bool l_27_62_Y6UuWW7T(const s_COWInside& cow, const s_Argument& host_arg, const s_TokenIdx& cow_inside)
{
    int BL_1_v {};
    if (cow.argTarget == (__extension__ (
    {
        const s_Target& t = host_arg.target;
        BL_1_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
    (void)0;}), BL_1_v))
        return cow.token == cow_inside;
    else
        return false;

}

                                #ifndef DEF_some_GDAwi7Hv3j5
                                #define DEF_some_GDAwi7Hv3j5
inline bool some_GDAwi7Hv(fu::view<s_COWInside> a, const s_Argument& host_arg, const s_TokenIdx& cow_inside)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_COWInside& item = a[i];
        if (l_27_62_Y6UuWW7T(item, host_arg, cow_inside))
            return true;

    };
    return false;
}
                                #endif

static fu::str qSTACK_cow_inside_76yq9Te1(const s_Target& target, const s_SolvedNode& node, const s_Argument& host_arg, const s_TokenIdx& cow_inside, fu::view<s_Target> seen, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target nestingFnort0 = exchange_jPHBkujO(ss._nestingFnort, s_Target(target));
    fu_DEFER(ss._nestingFnort = nestingFnort0);
    int BL_1_v {};
    const int locid = (__extension__ (
    {
        const s_Target& t = host_arg.target;
        BL_1_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
    (void)0;}), BL_1_v);
    fu::str candidates = ""_fu;
    fu::vec<s_Target> seen_1 = (seen + target);

    {
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_yXbWfvcw(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_emAmLQ3D(node_1.target, ss, _helpers, _here, ctx, module).solved : node_1);
            s_SolvedNode node_3 { ((node_2.kind == s_kind___preceding_ref_arg) ? _current_fn.events.preceding_ref_args[node_2.helpers.index].arg : node_2) };

            {
                const s_CurrentFn& _current_fn_1 = _current_fn;
                if ((node_3.kind == s_kind_copy) && (only_GN4mikiy(node_3.items).token == cow_inside))
                {
                    return (x7E_gCeFmDFw(("\n            "_fu + "in "_fu), str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu) + addr_and_snippet_LWjqt07q(cow_inside, s_CodeFmt{}, fu::view<char>{}, ctx, module);
                }
                else
                {
                    if (!((node_3.kind != s_kind_call) || !node_3.items))
                    {
                        if (!(has_P9xEJb6w(seen_1, node_3.target)))
                        {
                            fu::view<s_Argument> host_args = EXT_7eVl0gy6(node_3.target, ss, ctx, module).args;
                            for (int i = 0; i < host_args.size(); i++)
                            {
                                s_Argument BL_12_v {};
                                s_Argument host_arg_1 = (__extension__ (
                                {
                                    const s_Argument& __partcopy_ref = host_args[i];
                                    BL_12_v = (s_Argument { {}, {}, {}, {}, __partcopy_ref.flags, s_Target(__partcopy_ref.target), {}, {} });
                                (void)0;}), static_cast<s_Argument&&>(BL_12_v));
                                if ((host_arg_1.flags & s_Flags_F_COW_INSIDE) && some_GDAwi7Hv(EXT_7eVl0gy6(node_3.target, ss, ctx, module).cows_inside, host_arg_1, cow_inside) && Lifetime_has_62UtfSbx(Lifetime_unwind_2lvWiRLJ(node_3.items[i].type.lifetime, 0, false, ss, _helpers, _here, ctx, module), locid))
                                {
                                    fu::str peek = qSTACK_cow_inside_76yq9Te1(s_Target(node_3.target), s_SolvedNode(GET_emAmLQ3D(node_3.target, ss, _helpers, _here, ctx, module).solved), host_arg_1, cow_inside, seen_1, ss, _current_fn_1, _helpers, _here, ctx, module);
                                    return (((x7E_gCeFmDFw((x7E_gCeFmDFw(("\n            "_fu + "in "_fu), str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " via "_fu), str_3AjvLtSQ(GET_emAmLQ3D(node_3.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu) + addr_and_snippet_LWjqt07q(node_3.token, s_CodeFmt{}, fu::view<char>{}, ctx, module)) + peek) + candidates;
                                };
                            };
                        };
                    };
                };
            };
            for (int i = node_3.items.size(); i-- > 0; )
                stack += s_SolvedNode(node_3.items[i]);

        };
    };
    return ""_fu;
}

inline static void l_27_20_38Pj6qVg(const s_ValueType& vtype, const s_TokenIdx& token, const s_Target& t, const s_Overload& o, const int index, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (type_mayPointInto_Wo90s0uN(vtype, o.type.vtype, ss, _helpers, _here, ctx, module))
    {
        fu::str _0 {};
        fu::str err = (!callee ? "A copy is needed, but "_fu : ((_0 = (x7E_gCeFmDFw(x7E_gCeFmDFw(str_N3Nir9Bo(host_arg, ss, _current_fn, _helpers, _here, ctx, module), " to "_fu), str_3AjvLtSQ(GET_emAmLQ3D(callee, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " is indirectly copied from:\n"_fu), (static_cast<fu::str&&>(_0) + qSTACK_cow_inside_76yq9Te1(callee, s_SolvedNode(GET_emAmLQ3D(callee, ss, _helpers, _here, ctx, module).solved), host_arg, token, fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))) + "\n\t... but "_fu));
        err += ("COW will break due to pre-existing mutref: "_fu + explainWhichFn_9BM72ZzG(t, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn, _helpers, _here, ctx, module));
        err += ("\n\tBoth refer to: "_fu + explainWhichFn_9BM72ZzG(nested_nWBn0vig(index, ss), fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn, _helpers, _here, ctx, module));
        _here = here;
        fail_Ulv2WHKu(err, ss, _helpers, _here, ctx, module);
    };
}

inline static void eachCOWInside_mPdgZ796(const s_Target& t, const s_Overload& o, const int index, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (callee)
    {
        fu::vec<s_COWInside> callee_cows { EXT_7eVl0gy6(callee, ss, ctx, module).cows_inside };
        for (int i = 0; i < callee_cows.size(); i++)
        {
            const s_COWInside& callee_cow = callee_cows[i];
            if (!(calleeReturnDiscarded && !callee_cow.mayEscapeVia))
            {
                int BL_5_v {};
                if (callee_cow.argTarget == (__extension__ (
                {
                    const s_Target& t_1 = host_arg.target;
                    BL_5_v = (int(unsigned(((t_1._packed >> 40ull) & 0xfffffull))));
                (void)0;}), BL_5_v))
                    l_27_20_38Pj6qVg(callee_cow.vtype, s_TokenIdx(callee_cow.token), t, o, index, here, callee, host_arg, ss, _current_fn, _helpers, _here, ctx, module);

            };
        };
    }
    else
        l_27_20_38Pj6qVg(item.type.vtype, _here, t, o, index, here, callee, host_arg, ss, _current_fn, _helpers, _here, ctx, module);

}

inline static void l_27_19_biZ6wwdN(const int child, const s_Target& t, const s_Overload& o, const int index, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_BitSet& seen, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!add_once_U5p6nLOf(seen, child)))
    {
        if (has_QTGTghRU(_current_fn.postdom.snap.ever_written, child))
            eachCOWInside_mPdgZ796(t, o, index, item, here, callee, host_arg, calleeReturnDiscarded, ss, _current_fn, _helpers, _here, ctx, module);

        cannotCOW_descendChildren_uCjo9Wfc(child, item, here, callee, host_arg, calleeReturnDiscarded, seen, ss, _current_fn, _helpers, _here, ctx, module);
    };
}

inline static void eachLiveChildMutref_ZhyZqLam(const int index, const int index_1, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_BitSet& seen, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<int> children = unless_oob_6AZJyJXO(_current_fn.TODO_FIX_children, index);
    for (int i = 0; i < children.size(); i++)
    {
        const int child = children[i];
        const s_Target t = nested_nWBn0vig(child, ss);
        const s_Overload& o = GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module);
        if (!(!is_mutref_hoadAQC0(o.solved.type, _here, ctx)))
        {
            if (!(has_QTGTghRU(_current_fn.relaxed.done_relaxing, child)))
                l_27_19_biZ6wwdN(child, t, o, index_1, item, here, callee, host_arg, calleeReturnDiscarded, seen, ss, _current_fn, _helpers, _here, ctx, module);

        };
    };
}

static void cannotCOW_descendChildren_uCjo9Wfc(const int index, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_BitSet& seen, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    eachLiveChildMutref_ZhyZqLam(index, index, item, here, callee, host_arg, calleeReturnDiscarded, seen, ss, _current_fn, _helpers, _here, ctx, module);
}

static int needsHardRisk_YQlGjm4F(const int index, const s_Overload& o, const s_SolvedNode& item, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    {
        fu::view<int> children = unless_oob_6AZJyJXO(_current_fn.TODO_FIX_children, index);
        for (int i = 0; i < children.size(); i++)
        {
            const int child = children[i];
            const s_Target t = nested_nWBn0vig(child, ss);
            const s_Overload& o_1 = GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module);
            if (!(!is_mutref_hoadAQC0(o_1.solved.type, _here, ctx)))
            {
                if (!(has_QTGTghRU(_current_fn.relaxed.done_relaxing, child)))
                {
                    const s_CurrentFn& _current_fn_1 = _current_fn;
                    const int reason = needsHardRisk_YQlGjm4F(child, o, item, callee, host_arg, calleeReturnDiscarded, ss, _current_fn_1, _helpers, _here, ctx, module);
                    if (reason)
                        return reason;

                };
            };
        };
    };
    if (has_QTGTghRU(_current_fn.postdom.snap.ever_written, index))
    {
        if (callee)
        {
            fu::view<s_COWInside> callee_cows = EXT_7eVl0gy6(callee, ss, ctx, module).cows_inside;
            for (int i = 0; i < callee_cows.size(); i++)
            {
                const s_COWInside& callee_cow = callee_cows[i];
                if (!(calleeReturnDiscarded && !callee_cow.mayEscapeVia))
                {
                    int BL_12_v {};
                    if (callee_cow.argTarget == (__extension__ (
                    {
                        const s_Target& t = host_arg.target;
                        BL_12_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
                    (void)0;}), BL_12_v))
                    {
                        const s_ValueType& vtype = callee_cow.vtype;
                        const bool uncaughtThrowOnly = ((callee_cow.exitPaths == s_ExitPaths_XP_NoReturn) ? !_current_fn.TODO_FIX_catches : false);
                        if (!(uncaughtThrowOnly))
                        {
                            if (type_mayPointInto_Wo90s0uN(vtype, o.type.vtype, ss, _helpers, _here, ctx, module))
                                return index;

                        };
                    };
                };
            };
        }
        else
        {
            const s_ValueType& vtype = item.type.vtype;
            if (type_mayPointInto_Wo90s0uN(vtype, o.type.vtype, ss, _helpers, _here, ctx, module))
                return index;

        };
    };
    return 0;
}

                                #ifndef DEF_grow_if_oob_ibzQKImiomc
                                #define DEF_grow_if_oob_ibzQKImiomc
inline s_BitSet& grow_if_oob_ibzQKImi(fu::vec<s_BitSet>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static bool TODO_FIX_slicesAgain_XVuV0OzV(const int t, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return is_sliceable_3t4EwFeQ(GET_emAmLQ3D(nested_nWBn0vig(t, ss), ss, _helpers, _here, ctx, module).type.vtype);
}

static void cannotCOW_climbParents_pTmHM6bE(const s_Lifetime& lifetime, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_BitSet& seen, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
        if (!(!locid || !add_once_U5p6nLOf(seen, locid)))
        {
            s_Overload BL_4_v {};
            s_Overload o = (__extension__ (
            {
                const s_Overload& __partcopy_ref = GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module);
                BL_4_v = (s_Overload { __partcopy_ref.kind, __partcopy_ref.flags, {}, fu::str(__partcopy_ref.name), {}, s_SolvedNode { {}, {}, {}, {}, {}, fu::vec<s_SolvedNode>(__partcopy_ref.solved.items), {}, s_Type(__partcopy_ref.solved.type), {} } });
            (void)0;}), static_cast<s_Overload&&>(BL_4_v));
            if (o.kind == s_kind_var)
            {
                cannotCOW_climbParents_pTmHM6bE(s_Lifetime(Lifetime_climbType_n6B2CKz9(o, ss, _helpers, _here, ctx, module).lifetime), item, here, callee, host_arg, calleeReturnDiscarded, seen, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                cannotCOW_descendChildren_uCjo9Wfc(locid, item, here, callee, host_arg, calleeReturnDiscarded, seen, ss, _current_fn, _helpers, _here, ctx, module);
                s_Flow& flow = _current_fn.flow;
                if (o.flags & s_Flags_F_ARG)
                {
                    fu::vec<int> arg_targets { flow.arg_targets };
                    for (int i = 0; i < arg_targets.size(); i++)
                    {
                        const int t = arg_targets[i];
                        if (!(!t || (t == locid)))
                        {
                            const s_Overload& o_1 = GET_emAmLQ3D(nested_nWBn0vig(t, ss), ss, _helpers, _here, ctx, module);
                            if (!(!is_mutref_hoadAQC0(o_1.solved.type, _here, ctx)))
                            {
                                if (!(has_QTGTghRU(unless_oob_yoNyPnA3(flow.at_hard_risk, t), locid)))
                                {
                                    const int reason = needsHardRisk_YQlGjm4F(t, o_1, item, callee, host_arg, calleeReturnDiscarded, ss, _current_fn, _helpers, _here, ctx, module);
                                    if (reason)
                                    {

                                        {
                                            const s_SolverNotes note = s_SolverNotes_N_COWRestrict;
                                            const s_SolverState& ss_1 = ss;
                                            if (note & options.break_notes)
                                                fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + (x7E_gCeFmDFw((x7E_gCeFmDFw(x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " at risk from "_fu), str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(t, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " via "_fu), str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(reason, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) ? ("\n\t\t"_fu + x7E_gCeFmDFw((x7E_gCeFmDFw(x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " at risk from "_fu), str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(t, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " via "_fu), str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(reason, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module))) : "."_fu)), ss_1, _helpers, _here, ctx, module);
                                            else
                                                _notes |= note;

                                        };
                                        add_U5p6nLOf(grow_if_oob_ibzQKImi(flow.at_soft_risk, t), locid);
                                        if ((reason != t) || TODO_FIX_slicesAgain_XVuV0OzV(t, ss, _helpers, _here, ctx, module))
                                        {
                                            add_U5p6nLOf(grow_if_oob_ibzQKImi(flow.at_hard_risk, t), locid);
                                        };
                                    };
                                };
                            };
                        };
                    };
                    const s_SolverState& ss_1 = ss;
                    if (callee)
                    {
                        fu::view<s_COWInside> callee_cows = EXT_7eVl0gy6(callee, ss_1, ctx, module).cows_inside;
                        for (int i_1 = 0; i_1 < callee_cows.size(); i_1++)
                        {
                            const s_COWInside& callee_cow = callee_cows[i_1];
                            if (!(calleeReturnDiscarded && !callee_cow.mayEscapeVia))
                            {
                                int BL_21_v {};
                                if (callee_cow.argTarget == (__extension__ (
                                {
                                    const s_Target& t = host_arg.target;
                                    BL_21_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
                                (void)0;}), BL_21_v))
                                {
                                    const s_ValueType& vtype = callee_cow.vtype;
                                    const s_TokenIdx& token = callee_cow.token;
                                    const bool uncaughtThrowOnly = ((callee_cow.exitPaths == s_ExitPaths_XP_NoReturn) ? !_current_fn.TODO_FIX_catches : false);
                                    const int mayEscapeVia = _current_fn.postdom.snap.mayEscapeVia;
                                    const s_ExitPaths exitPaths = (uncaughtThrowOnly ? s_ExitPaths_XP_NoReturn : (_current_fn.postdom.snap.exitPaths ? _current_fn.postdom.snap.exitPaths : BUG_V2MSl2gg("No current_fn.exitPaths"_fu, ss_1, _helpers, _here, ctx, module)));
                                    fu::vec<s_COWInside>& my_cows = _current_fn.events.cows_inside;
                                    for (int i_2 = 0; i_2 < my_cows.size(); i_2++)
                                    {
                                        s_COWInside& my_cow = my_cows.mutref(i_2);
                                        if ((my_cow.argTarget == locid) && (my_cow.vtype.canon == vtype.canon))
                                        {
                                            my_cow.vtype.quals |= vtype.quals;
                                            my_cow.mayEscapeVia |= mayEscapeVia;
                                            my_cow.exitPaths |= exitPaths;
                                            return;
                                        };
                                    };
                                    my_cows += s_COWInside { s_ValueType(vtype), s_TokenIdx(token), locid, mayEscapeVia, exitPaths };
                                };
                            };
                        };
                    }
                    else
                    {
                        const s_ValueType& vtype = item.type.vtype;
                        const int mayEscapeVia = _current_fn.postdom.snap.mayEscapeVia;
                        const s_ExitPaths exitPaths = (_current_fn.postdom.snap.exitPaths ? _current_fn.postdom.snap.exitPaths : BUG_V2MSl2gg("No current_fn.exitPaths"_fu, ss_1, _helpers, _here, ctx, module));
                        fu::vec<s_COWInside>& my_cows = _current_fn.events.cows_inside;
                        for (int i_1 = 0; i_1 < my_cows.size(); i_1++)
                        {
                            s_COWInside& my_cow = my_cows.mutref(i_1);
                            if ((my_cow.argTarget == locid) && (my_cow.vtype.canon == vtype.canon))
                            {
                                my_cow.vtype.quals |= vtype.quals;
                                my_cow.mayEscapeVia |= mayEscapeVia;
                                my_cow.exitPaths |= exitPaths;
                                return;
                            };
                        };
                        my_cows += s_COWInside { s_ValueType(vtype), s_TokenIdx(_here), locid, mayEscapeVia, exitPaths };
                    };
                };
            }
            else
                BUG_V2MSl2gg(x7E_gCeFmDFw("cannotCOW_climbParents found a non-var: "_fu, str_3AjvLtSQ(o, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        };
    };
}

static void validateCOW_vtIRMY9A(const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    s_BitSet seen {};
    cannotCOW_climbParents_pTmHM6bE(item.type.lifetime, item, here, callee, host_arg, calleeReturnDiscarded, seen, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

inline static void l_27_23_GhlOsIhT(const int locid, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (locid && add_once_U5p6nLOf(_current_fn.postdom.snap.ever_written, locid))
    {
        const s_Target t = nested_nWBn0vig(locid, ss);
        callarg_trackWrites_w1UMBWbV(Lifetime_climbType_n6B2CKz9(GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module).lifetime, ss, _current_fn, _helpers, _here, ctx, module);
        if (GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).flags & s_Flags_F_ARG)
            _current_fn.postdom.snap.mayEscapeVia |= (1 << (locid % 32));

    };
}

                                #ifndef DEF_Lifetime_each_NAQ8ge9i6tk
                                #define DEF_Lifetime_each_NAQ8ge9i6tk
inline void Lifetime_each_NAQ8ge9i(const s_Lifetime& lifetime, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_23_GhlOsIhT(int(((r & 1u) ? 0u : (r >> 1u))), ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static void callarg_trackWrites_w1UMBWbV(const s_Lifetime& lt, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    Lifetime_each_NAQ8ge9i(lt, ss, _current_fn, _helpers, _here, ctx, module);
}

inline static void l_27_25_xHoGruBh(const int i, const s_Argument& host_arg, s_SolvedNode& node, const unsigned relax_mask, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_SolvedNode& arg = node.items.mutref(i);
    if (relax_mask == RELAX_all)
        maybeCopyOrMove_w5W0tdPX(arg, host_arg.type, true, ss, _helpers, _here, ctx, module);

    propagateType_0IjBDgsa(arg, host_arg.type, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (host_arg.flags & s_Flags_F_WRITTEN_TO)
    {
        callarg_trackWrites_w1UMBWbV(arg.type.lifetime, ss, _current_fn, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_argsReverse_0xwk31cWTT9
                                #define DEF_argsReverse_0xwk31cWTT9
inline void argsReverse_0xwk31cW(const bool RTL, fu::view<s_Argument> host_args, s_SolvedNode& node, const unsigned relax_mask, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    int revSeqIdx = 0;
    int lastPass = 1;
    bool ooe_isLast = true;
    for (int pass = 2; pass-- > lastPass; )
    {
        for (int i = host_args.size(); i-- > 0; )
        {
            const s_Argument& host_arg = host_args[i];
            if (!!pass != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_hoadAQC0(host_arg.type, _here, ctx))))
                lastPass = 0;
            else
            {
                l_27_25_xHoGruBh(i, host_arg, node, relax_mask, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                ooe_isLast = false;
                revSeqIdx++;
            };
        };
    };
}
                                #endif

static bool isFieldChain_Y9zjA4WJ(const s_SolvedNode& arg, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (arg.kind != s_kind_call)
        return false;
    else
    {
        const s_kind t = GET_emAmLQ3D(arg.target, ss, _helpers, _here, ctx, module).kind;
        return (t == s_kind_var) || ((t == s_kind_field) && isFieldChain_Y9zjA4WJ(only_GN4mikiy(arg.items), ss, _helpers, _here, ctx, module));
    };
}

inline static void l_27_46_qEvhqJd1(const int locid, const bool isTemp, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!locid)
    {
        if (!(isTemp))
            BUG_V2MSl2gg("Attempting to move from a non-local, non-temporary region."_fu, ss, _helpers, _here, ctx, module);

    }
    else
    {
        s_Overload& o = GET_mut_uE8Nb6mH(nested_nWBn0vig(locid, ss), ss, module);
        if (!(o.flags & s_Flags_F_MOVED_FROM))
        {
            o.flags |= s_Flags_F_MOVED_FROM;
            const s_Type& init = Lifetime_climbType_n6B2CKz9(o, ss, _helpers, _here, ctx, module);
            if (is_ref_gBx1AgSx(init))
            {
                Lifetime_F_MOVED_FROM_2luwKq5a(s_Lifetime(init.lifetime), ss, _helpers, _here, ctx, module);
            };
        };
    };
}

                                #ifndef DEF_Lifetime_each_uqksc8H6E3c
                                #define DEF_Lifetime_each_uqksc8H6E3c
inline void Lifetime_each_uqksc8H6(const s_Lifetime& lifetime, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_46_qEvhqJd1(int(((r & 1u) ? 0u : (r >> 1u))), (r == 1u), ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static void Lifetime_F_MOVED_FROM_2luwKq5a(const s_Lifetime& lifetime, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    Lifetime_each_uqksc8H6(lifetime, ss, _helpers, _here, ctx, module);
}

inline static void l_27_22_HCtgKNiQ(const int locid, const bool isTemp, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(isTemp))
    {
        if (locid)
        {
            trackJustMoved_KGNHJVcq(Lifetime_climbType_n6B2CKz9(GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module).lifetime, ss, _helpers, _here, ctx, module);
        }
        else
            BUG_V2MSl2gg("trackJustMoved: found a non-local."_fu, ss, _helpers, _here, ctx, module);

    };
}

                                #ifndef DEF_Lifetime_each_tpZr4A3qWXe
                                #define DEF_Lifetime_each_tpZr4A3qWXe
inline void Lifetime_each_tpZr4A3q(const s_Lifetime& lifetime, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_22_HCtgKNiQ(int(((r & 1u) ? 0u : (r >> 1u))), (r == 1u), ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static void trackJustMoved_KGNHJVcq(const s_Lifetime& lt, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    Lifetime_each_tpZr4A3q(lt, ss, _helpers, _here, ctx, module);
}

static void injectJumps_NMKzWIOu(s_SolvedNode& expr, const s_Helpers& h, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!tryInjectJumps_r0AwQteC(expr, h, ss, _helpers, _here, ctx, module))
        expr = createJump_LyIkrfb4(h, expr, _here);

}

static bool tryInjectJumps_r0AwQteC(s_SolvedNode& expr, const s_Helpers& h, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_HelpersData* BL_2_v;
    if (is_never_FfV8Zuj5(expr.type))
        return true;
    else if ((__extension__ (
    {
        const s_Helpers& h_1 = h;
        BL_2_v = &(ss._helpers_data[h_1.index]);
    (void)0;}), *BL_2_v).ret_actual)
    {
        const s_HelpersData* BL_4_v;
        if (is_void_FfV8Zuj5((__extension__ (
        {
            const s_Helpers& h_1 = h;
            BL_4_v = &(ss._helpers_data[h_1.index]);
        (void)0;}), *BL_4_v).ret_actual) && !is_void_FfV8Zuj5(expr.type))
        {
            if (expr.kind != s_kind_block)
            {
                expr = createBlock_UZ3zi9cx(t_void, fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Helpers{}, ss, _helpers, _here, ctx, module);
            };
            if (is_void_FfV8Zuj5(if_last_GN4mikiy(expr.items).type))
                BUG_V2MSl2gg(("tryInjectJumps: Block tail is void, but block.type isn't: "_fu + humanizeType_adoPoPLu(expr.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
            else
            {
                expr.items += createEmpty_3tvTwH58(s_kind_empty, t_void, s_Target{}, _here);
            };
        };
        const s_HelpersData* BL_9_v;
        if ((expr.kind == s_kind_block) && expr.items && !s_HelpersMask(((__extension__ (
        {
            const s_Helpers& h_1 = expr.helpers;
            BL_9_v = &(ss._helpers_data[h_1.index]);
        (void)0;}), *BL_9_v).mask & s_HelpersMask_HM_LabelUsed)))
        {
            s_SolvedNode* _0;
            (_0 = &(last_Iovd0TM6(expr.items)), injectJumps_NMKzWIOu(*_0, h, ss, _helpers, _here, ctx, module));
            expr.type = t_never;
            return true;
        }
        else if (expr.kind == s_kind_if)
        {
            for (int i = 1; i < expr.items.size(); i++)
            {
                s_SolvedNode* _1;
                (_1 = &(expr.items.mutref(i)), injectJumps_NMKzWIOu(*_1, h, ss, _helpers, _here, ctx, module));
            };
            expr.type = t_never;
            return true;
        };
        return false;
    }
    else
        BUG_V2MSl2gg(x7E_gCeFmDFw("tryInjectJumps: no h.ret_actual on #"_fu, fu::i64dec(h.index)), ss, _helpers, _here, ctx, module);

}

static bool isRefArg_svJpgyxH(const s_Overload& o)
{
    if ((o.flags & s_Flags_F_ARG) && (o.kind == s_kind_var))
        return is_ref_gBx1AgSx(o.solved.type);
    else
        return false;

}

inline static void l_27_91_XcjyeitE(const bool isTemp, const int locid, const int locals_start, bool& neg, bool& pos, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (isTemp)
        pos = true;
    else if (locid < locals_start)
        neg = true;
    else if (isRefArg_svJpgyxH(GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module)))
        neg = true;
    else
        pos = true;

}

                                #ifndef DEF_Lifetime_each_g4DN7acqiN8
                                #define DEF_Lifetime_each_g4DN7acqiN8
inline void Lifetime_each_g4DN7acq(const s_Lifetime& lifetime, const int locals_start, bool& neg, bool& pos, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_91_XcjyeitE((r == 1u), int(((r & 1u) ? 0u : (r >> 1u))), locals_start, neg, pos, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static int Lifetime_vs_2pLmP0Cq(const s_Lifetime& lifetime, const int locals_start, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (locals_start)
    {
        bool neg = false;
        bool pos = false;
        Lifetime_each_g4DN7acq(lifetime, locals_start, neg, pos, ss, _helpers, _here, ctx, module);
        if (neg == pos)
            return 0;
        else if (neg)
            return -1;
        else
            return +1;

    }
    else
    {
        BUG_V2MSl2gg("Lifetime_vs: No locals_start"_fu, ss, _helpers, _here, ctx, module);
    };
}

inline static void l_27_92_A5Oo0yI2(const int locid, const int locals_start, s_SolverState& ss, const s_Module& module)
{
    if ((locid >= locals_start))
    {
        s_Overload& o = GET_mut_uE8Nb6mH(nested_nWBn0vig(locid, ss), ss, module);
        if (!(o.flags & s_Flags_F_ARG))
            o.status |= s_SolverStatus_SS_HOIST;

    };
}

                                #ifndef DEF_Lifetime_each_FtaDXvqz7Bc
                                #define DEF_Lifetime_each_FtaDXvqz7Bc
inline void Lifetime_each_FtaDXvqz(const s_Lifetime& lifetime, const int locals_start, s_SolverState& ss, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_92_A5Oo0yI2(int(((r & 1u) ? 0u : (r >> 1u))), locals_start, ss, module);
    };
}
                                #endif

static void mcom_BlockReturns_CopyOrMoveDecision_2APyjpDB(const s_Helpers& h, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!is_ref_gBx1AgSx(ss._helpers_data[h.index].ret_actual)))
    {
        if (ss._helpers_data[h.index].mask & s_HelpersMask_HM_Function)
        {
            /*MOV*/ s_Lifetime unwind = Lifetime_unwind_2lvWiRLJ(ss._helpers_data[h.index].ret_actual.lifetime, 0, false, ss, _helpers, _here, ctx, module);
            if (Lifetime_vs_2pLmP0Cq(unwind, ss._helpers_data[h.index].locals_start, ss, _helpers, _here, ctx, module) < 0)
            {
                ss._helpers_data.mutref(h.index).ret_actual.lifetime = static_cast<s_Lifetime&&>(unwind);
            }
            else
                reportReturnType_fmwhJ2Cl(h, clear_refs_40rRB6L8(s_Type(ss._helpers_data[h.index].ret_actual)), false, ss, _helpers, _here, ctx, module);

        }
        else
        {
            const int locals_start = ss._helpers_data[h.index].locals_start;
            s_Lifetime unwound = Lifetime_unwind_2lvWiRLJ(ss._helpers_data[h.index].ret_actual.lifetime, locals_start, false, ss, _helpers, _here, ctx, module);
            Lifetime_each_FtaDXvqz(unwound, locals_start, ss, module);
        };
    };
}

inline static void l_27_26_q29kkUzj(const s_Target& t, const int position, const unsigned relax_mask, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    relaxBlockVar_aP78JKMB(t, relax_mask, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (s_SolverStatus((GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_UNUSED)) && (GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).flags & s_Flags_F_IMPLICIT))
    {

        {
            const s_SolverNotes note = s_SolverNotes_N_UnusedImplicit;
            const s_SolverState& ss_1 = ss;
            if (note & options.break_notes)
                fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
            else
                _notes |= note;

        };
        if (_current_fn.out.items[position].target == t)
            _current_fn.out.items.splice(position, 1);
        else
        {
            BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
        };
    };
}

inline static void _current_fn_eachArg_BACK_yGE8ecrA(const unsigned relax_mask, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    for (int i = (_current_fn.out.items.size() + FN_ARGS_BACK); i-- > 0; )
    {
        const s_Target t { _current_fn.out.items[i].target };
        if (t && (GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).flags & s_Flags_F_ARG))
            l_27_26_q29kkUzj(t, i, relax_mask, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

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

static void propagateType_0IjBDgsa(s_SolvedNode& node, const s_Type& slot, const unsigned relax_mask, const s_Helpers& kills, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_kind k = node.kind;
    const s_TokenIdx here0 { _here };
    _here = node.token;
    fu_DEFER(_here = here0);
    const bool canDiscard = isIrrelevant_40rRB6L8(slot);
    if ((k == s_kind_let) || (k == s_kind_letdef))
    {
        if (!(!node.target))
        {
            if (relax_mask == RELAX_all)
            {
                s_SolvedNode& node_1 = GET_mut_uE8Nb6mH(node.target, ss, module).solved;
                s_Type type { node_1.type };
                s_SolvedNode& init = node_1.items.mutref(LET_INIT);
                if (init)
                    maybeCopyOrMove_w5W0tdPX(init, type, false, ss, _helpers, _here, ctx, module);

            };
            relaxBlockVar_aP78JKMB(node.target, relax_mask, canDiscard, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            if (k == s_kind_letdef)
            {
                if (GET_emAmLQ3D(node.target, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_UNUSED)
                {

                    {
                        const s_SolverNotes note = s_SolverNotes_N_UnusedLet;
                        const s_SolverState& ss_1 = ss;
                        if (note & options.break_notes)
                            fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                        else
                            _notes |= note;

                    };
                    s_SolvedNode _0 {};
                    node = ((_0 = s_SolvedNode(GET_emAmLQ3D(node.target, ss, _helpers, _here, ctx, module).solved.items[LET_INIT])) ? static_cast<s_SolvedNode&&>(_0) : createEmpty_3tvTwH58(s_kind_empty, t_void, s_Target{}, _here));
                };
            }
            else
                BUG_V2MSl2gg("Unexpected let node."_fu, ss, _helpers, _here, ctx, module);

        };
    }
    else
    {
        try_relax_c5Z7RHRf(node.type, slot, relax_mask);
        if ((k == s_kind_and) || (k == s_kind_or))
        {
            s_Type type { node.type };
            const s_Type& rest = ((!canDiscard && ((k == s_kind_or) || (is_mutref_hoadAQC0(slot, _here, ctx) && CANNOT_definit_mutrefs))) ? slot : t_proposition);
            s_Postdom postdom0 { _current_fn.postdom };
            const bool mcomOrItems = (((k == s_kind_or) && (relax_mask == RELAX_all) && !canDiscard) ? !is_boolean_3t4EwFeQ(type.vtype) : false);
            fu::vec<s_SolvedNode>& items = node.items;
            for (int i = items.size(); i-- > 0; )
            {
                s_SolvedNode& item = items.mutref(i);
                if (mcomOrItems)
                    maybeCopyOrMove_w5W0tdPX(item, type, false, ss, _helpers, _here, ctx, module);

                propagateType_0IjBDgsa(item, ((i == (items.size() - 1)) ? slot : rest), relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                if (canDiscard && (i == (items.size() - 1)) && isDiscardable_7SPn8aqY(item, ss, _helpers, _here, ctx, module))
                {

                    {
                        const s_SolverNotes note = s_SolverNotes_N_UnusedAndOr;
                        const s_SolverState& ss_1 = ss;
                        if (note & options.break_notes)
                            fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                        else
                            _notes |= note;

                    };
                    items.pop();
                    if (!(_current_fn.postdom == postdom0))
                    {
                        BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
                    };
                };
                if (i)
                    branch_JgIkV0Yd(_current_fn.postdom, postdom0, _here, ctx);

            };
            if (items.size() < 2)
            {
                s_SolvedNode _1 {};
                node = ((_1 = s_SolvedNode(if_only_GN4mikiy(items))) ? static_cast<s_SolvedNode&&>(_1) : createEmpty_3tvTwH58(s_kind_empty, slot, s_Target{}, _here));
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
                    (_2 = &(items.mutref(i)), maybeCopyOrMove_w5W0tdPX(*_2, type, false, ss, _helpers, _here, ctx, module));
                };
            };
            s_Postdom postdom0 { _current_fn.postdom };
            bool canDiscard_cond = canDiscard;
            for (int i = items.size(); i-- > 0; )
            {
                if (i == 1)
                    std::swap(postdom0, _current_fn.postdom);
                else if (i == 0)
                    branch_JgIkV0Yd(_current_fn.postdom, postdom0, _here, ctx);

                propagateType_0IjBDgsa(items.mutref(i), (((i != 0) || canDiscard_cond) ? slot : t_proposition), relax_mask, ((i != 0) ? kills : (*(const s_Helpers*)fu::NIL)), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                if (canDiscard_cond && i && !isDiscardable_7SPn8aqY(items[i], ss, _helpers, _here, ctx, module))
                    canDiscard_cond = false;

            };
            if (canDiscard)
            {
                if (canDiscard_cond)
                {

                    {
                        const s_SolverNotes note = s_SolverNotes_N_UnusedIfElse;
                        const s_SolverState& ss_1 = ss;
                        if (note & options.break_notes)
                            fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                        else
                            _notes |= note;

                    };
                    node = items[0];
                }
                else if (isDiscardable_7SPn8aqY(items[1], ss, _helpers, _here, ctx, module))
                {
                    node = createOr_6Eo1FhDy(fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(items[0]), s_SolvedNode(items[2]) } }, s_Type(t_void), ss, _current_fn, _helpers, _here, ctx, module);
                }
                else if (isDiscardable_7SPn8aqY(items[2], ss, _helpers, _here, ctx, module))
                    node = createAnd_w6k6Jw1i(fu::slice(items, 0, 2), s_Type(t_void), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                else
                    node.type = t_void;

            }
            else if (kills)
            {
                node.type = superType_neverOK_Sy4d8472("if/else after control flow simplification: "_fu, items[1].type, items[2].type, ss, _helpers, _here, ctx, module);
            };
            node._loop_start = _current_fn.postdom.parent_loop_start;
        }
        else if (k == s_kind_try)
        {
            s_Postdom postdom0 { _current_fn.postdom };
            propagateType_0IjBDgsa(recover_B5X8colD(node), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            branch_JgIkV0Yd(_current_fn.postdom, postdom0, _here, ctx);
            propagateType_0IjBDgsa(error_vpF7hGUq(node), t_string, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            const s_FxMask throws0 = s_FxMask((_current_fn.effects.fx_mask & s_FxMask_Fx_Throws));
            _current_fn.effects.fx_mask &= s_FxMask(~s_FxMask_Fx_Throws);
            _current_fn.TODO_FIX_catches++;
            propagateType_0IjBDgsa(attempt_rAyflzSA(node), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            _current_fn.TODO_FIX_catches--;
            if (!s_FxMask((_current_fn.effects.fx_mask & s_FxMask_Fx_Throws)))
            {

                {
                    const s_SolverNotes note = s_SolverNotes_N_UnusedTry;
                    const s_SolverState& ss_1 = ss;
                    if (note & options.break_notes)
                        fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                    else
                        _notes |= note;

                };
                node = attempt_rAyflzSA(node);
            };
            _current_fn.effects.fx_mask &= s_FxMask(~s_FxMask_Fx_Throws);
            _current_fn.effects.fx_mask |= throws0;
        }
        else if (k == s_kind_loop)
        {
            Breakable_begin_K692EePS(true, node, relax_mask, ss, _current_fn, _here, ctx);
            const int loop_start0 = (_current_fn.postdom.parent_loop_start ? _current_fn.postdom.parent_loop_start : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
            const s_HelpersData* BL_48_v;
            int _3 {};
            _current_fn.postdom.parent_loop_start = ((_3 = (__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_48_v = &(ss._helpers_data[h.index]);
            (void)0;}), *BL_48_v).locals_start) ? _3 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
            /*MOV*/ fu::vec<s_Type> var_usage0 {};
            std::swap(_current_fn.relaxed.var_usage, var_usage0);
            if (post_cond_oOn9CB9W(node))
            {
                propagateType_0IjBDgsa(post_cond_oOn9CB9W(node), t_proposition, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            };
            if (post_gekd1hZE(node))
            {
                const s_SolvedNode* _4;
                if ((_4 = &(post_gekd1hZE(node)), isDiscardable_7SPn8aqY(*_4, ss, _helpers, _here, ctx, module)))
                {
                    post_gekd1hZE(node) = s_SolvedNode{};
                }
                else
                {
                    propagateType_0IjBDgsa(post_gekd1hZE(node), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
            };
            if (body_lGeyCSym(node))
            {
                const s_SolvedNode* _5;
                if ((_5 = &(body_lGeyCSym(node)), isDiscardable_7SPn8aqY(*_5, ss, _helpers, _here, ctx, module)))
                {
                    body_lGeyCSym(node) = s_SolvedNode{};
                }
                else
                {
                    propagateType_0IjBDgsa(body_lGeyCSym(node), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
            };
            if (pre_JAoFRyiB(node))
            {
                s_Postdom postdom0 { _current_fn.postdom };
                const s_SolvedNode* _6;
                if ((_6 = &(pre_JAoFRyiB(node)), isDiscardable_7SPn8aqY(*_6, ss, _helpers, _here, ctx, module)))
                {
                    pre_JAoFRyiB(node) = s_SolvedNode{};
                }
                else
                {
                    propagateType_0IjBDgsa(pre_JAoFRyiB(node), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
                branch_JgIkV0Yd(_current_fn.postdom, postdom0, _here, ctx);
            };
            if (pre_cond_b5oWFBYE(node))
            {
                propagateType_0IjBDgsa(pre_cond_b5oWFBYE(node), t_proposition, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            };
            _current_fn.postdom.parent_loop_start = loop_start0;
            Breakable_end_f9BqCEoJ(true, node, relax_mask, ss, _current_fn, _here, ctx);
            if (_current_fn.postdom.parent_loop_start == loop_start0)
            {
                std::swap(_current_fn.relaxed.var_usage, var_usage0);
                for (int i = 0; i < var_usage0.size(); i++)
                {
                    const s_Type& slot_1 = var_usage0[i];
                    if (slot_1)
                        trackVarUsage_mx8qL1TF(i, slot_1, ss, _current_fn, _helpers, _here, ctx, module);

                };
                s_HelpersData* BL_64_v;
                (__extension__ (
                {
                    const s_Helpers& h = node.helpers;
                    BL_64_v = &(ss._helpers_data.mutref(h.index));
                (void)0;}), *BL_64_v).usage = static_cast<fu::vec<s_Type>&&>(var_usage0);
                if (init_notdxdZN(node))
                {
                    propagateType_0IjBDgsa(init_notdxdZN(node), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
            }
            else
            {
                BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
            };
        }
        else if (k == s_kind_not)
        {
            if (canDiscard)
            {
                node = only_GN4mikiy(node.items);
                propagateType_0IjBDgsa(node, t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            }
            else
            {
                propagateType_0IjBDgsa(only_Iovd0TM6(node.items), t_proposition, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            };
        }
        else if (k == s_kind_call)
        {
            node._loop_start = _current_fn.postdom.parent_loop_start;
            const s_Target t { node.target };
            if (GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).kind == s_kind_field)
            {
                const s_UnpackedOffset _ = field_unpackOffset_ZweBlDlz(GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module);
                s_Type slot_1 = USAGE_structUsageFromFieldUsage_AK7SzNqx(s_Type(slot), _.memberFlatOffset);
                if (canDiscard)
                {
                    node = only_GN4mikiy(node.items);
                    propagateType_0IjBDgsa(node, slot_1, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                }
                else
                {
                    propagateType_0IjBDgsa(only_Iovd0TM6(node.items), slot_1, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
            }
            else if (GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).kind == s_kind_var)
            {
                if (canDiscard)
                {
                    node = createEmpty_3tvTwH58(s_kind_empty, slot, s_Target{}, _here);
                }
                else if (isLocal_iPYw45vv(t))
                {
                    trackVarUsage_mx8qL1TF(int(unsigned(((t._packed >> 40ull) & 0xfffffull))), node.type, ss, _current_fn, _helpers, _here, ctx, module);
                    tryTrackLastUse_BdqzFH1C(node.type.lifetime, relax_mask, ss, _current_fn, _helpers, _here, ctx, module);
                };
            }
            else
            {
                if (EXT_7eVl0gy6(t, ss, ctx, module).spec_of && is_ref_gBx1AgSx(GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).type))
                {
                    fu::vec<s_SolvedNode> relaxed {};
                    for (int i = 0; i < node.items.size(); i++)
                    {
                        const s_SolvedNode& orig = node.items[i];
                        if (Lifetime_has_NRjdLNHo(GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).type.lifetime, i))
                        {
                            const unsigned relax_mask_1 = (relax_mask & ~q_USAGE);
                            s_Type type { orig.type };
                            if (try_relax_c5Z7RHRf(type, slot, relax_mask_1))
                            {
                                if (!relaxed)
                                    relaxed = fu::slice(node.items, 0, i);

                                relaxed += SolvedNode_clCALdMt(s_kind___relaxed, type, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
                                continue;
                            };
                        };
                        if (relaxed)
                            relaxed += s_SolvedNode(orig);

                    };
                    if (relaxed)
                    {
                        fu::str args_mangled {};
                        const s_Target spec = trySpecialize_ow9DQawS(s_Target(EXT_7eVl0gy6(t, ss, ctx, module).spec_of), relaxed, args_mangled, relaxed.size(), (*(const s_Type*)fu::NIL), (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                        if (!is_SPECFAIL_EveZl8g6(spec))
                            redirectCallTarget_lK2O0v6I(spec, node, t, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                    };
                };
                if (canDiscard && isDiscardable_syuU7tpR(node.target, ss, ctx, module))
                {

                    {
                        const s_SolverNotes note = s_SolverNotes_N_UnusedCall;
                        const s_SolverState& ss_1 = ss;
                        if (note & options.break_notes)
                            fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                        else
                            _notes |= note;

                    };
                    discardIntoBlock_vpwm9X31(node, slot, relax_mask, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                }
                else
                {
                    if (is_never_FfV8Zuj5(GET_emAmLQ3D(node.target, ss, _helpers, _here, ctx, module).type) && !_current_fn.TODO_FIX_catches)
                    {
                        _current_fn.postdom.snap = s_PostdomSnap{};
                        _current_fn.postdom.snap.exitPaths = s_ExitPaths_XP_NoReturn;
                    };
                    _current_fn.effects.fx_mask |= EXT_7eVl0gy6(node.target, ss, ctx, module).fx_mask;
                    if ((relax_mask == RELAX_all) && node.items)
                    {
                        fu::vec<s_Argument> host_args { EXT_7eVl0gy6(t, ss, ctx, module).args };
                        for (int i = 0; i < host_args.size(); i++)
                        {
                            const s_SolvedNode& arg = node.items[i];
                            s_Argument host_arg { host_args[i] };
                            if (is_ref_gBx1AgSx(host_arg.type))
                            {
                                tryTrackLastUse_BdqzFH1C(arg.type.lifetime, relax_mask, ss, _current_fn, _helpers, _here, ctx, module);
                            };
                            if (host_arg.flags & s_Flags_F_COW_INSIDE)
                                validateCOW_vtIRMY9A(arg, arg.token, node.target, host_arg, canDiscard, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                        };
                    };
                    if (node.items)
                    { {
                        if (GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).kind == s_kind_type)
                        {
                            s_Struct BL_100_v {};
                            s_Struct s = (__extension__ (
                            {
                                const s_Struct& __partcopy_ref = tryLookupUserType_XVsnoQiv(GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).type.vtype, ctx, module);
                                BL_100_v = (s_Struct { __partcopy_ref.kind, {}, {}, fu::vec<s_ScopeItem>(__partcopy_ref.items), {}, {}, {}, {}, {}, {} });
                            (void)0;}), static_cast<s_Struct&&>(BL_100_v));
                            if (!(s.kind != s_kind_struct))
                            {
                                if (s.items.size() == node.items.size())
                                {
                                    for (int i = node.items.size(); i-- > 0; )
                                    {
                                        const s_Overload& field = GET_emAmLQ3D(target_NWTdzsfF(s.items[i]), ss, _helpers, _here, ctx, module);
                                        s_SolvedNode& arg = node.items.mutref(i);
                                        const s_UnpackedOffset _ = field_unpackOffset_ZweBlDlz(field, ss, _helpers, _here, ctx, module);
                                        s_Type slot_1 = USAGE_fieldUsageFromStructUsage_gOpgTaZ7(s_Type(field.type), (slot.vtype.quals & q_USAGE), _.memberFlatOffset, _.memberFlatCount);
                                        if (relax_mask == RELAX_all)
                                            maybeCopyOrMove_w5W0tdPX(arg, slot_1, true, ss, _helpers, _here, ctx, module);

                                        propagateType_0IjBDgsa(arg, slot_1, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                    };
                                    goto BL_98;
                                }
                                else
                                    BUG_V2MSl2gg("Call(type): struct.items.len != call.items.len"_fu, ss, _helpers, _here, ctx, module);

                            };
                        };
                        fu::vec<s_Argument> host_args { EXT_7eVl0gy6(node.target, ss, ctx, module).args };
                        const bool RTL = isRTL_N4q4L7uF(GET_emAmLQ3D(node.target, ss, _helpers, _here, ctx, module));
                        if (host_args.size() == node.items.size())
                            argsReverse_0xwk31cW(RTL, host_args, node, relax_mask, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                        else
                            BUG_V2MSl2gg(x7E_gCeFmDFw("propagateType(call) args.len != host_args.len at call to "_fu, str_3AjvLtSQ(GET_emAmLQ3D(node.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                      } BL_98:;
                    };
                };
            };
        }
        else if (isShallowLiteral_dFhywy4j(k))
        {
            if (canDiscard)
            {
                if (node.items)
                    BUG_V2MSl2gg((x7E_gCeFmDFw("propagateType canDiscard("_fu, str_ZGqrvxJv(k)) + ") has items."_fu), ss, _helpers, _here, ctx, module);
                else
                {
                    node.kind = s_kind_empty;
                    node.value = ""_fu;
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
                        BUG_V2MSl2gg(x7E_gCeFmDFw("Trying to discard a copy: "_fu, str_cmTVYQgp(node, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                    else if (relax_mask != RELAX_all)
                        BUG_V2MSl2gg(x7E_gCeFmDFw("Found a copy node during first relax: "_fu, str_cmTVYQgp(node, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                    else
                    {
                        const s_SolvedNode& item = only_GN4mikiy(node.items);
                        bool isCopy = true;
                        if (!is_trivial_XVsnoQiv(item.type.vtype, ctx, module))
                        {
                            if (tryTrackLastUse_BdqzFH1C(item.type.lifetime, relax_mask, ss, _current_fn, _helpers, _here, ctx, module))
                                isCopy = false;
                            else
                            {
                                if (!is_trivial_XVsnoQiv(item.type.vtype, ctx, module))
                                {
                                    validateCOW_vtIRMY9A(item, s_TokenIdx(_here), s_Target{}, (*(const s_Argument*)fu::NIL), false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                };
                                unsigned BL_123_v {};
                                const unsigned usage = (__extension__ (
                                {
                                    const s_Type& type = node.type;
                                    BL_123_v = ((type.vtype.quals & q_USAGE));
                                (void)0;}), BL_123_v);
                                const int flatCount = getFlatCount_XVsnoQiv(node.type.vtype, ctx, module);
                                const unsigned maxUsage = getMaxUsage_Ew3ru92f(flatCount);
                                if (usage != maxUsage)
                                {
                                    s_Struct BL_125_v {};
                                    s_Struct s = (__extension__ (
                                    {
                                        const s_Struct& __partcopy_ref = tryLookupUserType_XVsnoQiv(node.type.vtype, ctx, module);
                                        BL_125_v = (s_Struct { __partcopy_ref.kind, {}, s_Target(__partcopy_ref.target), fu::vec<s_ScopeItem>(__partcopy_ref.items), {}, {}, {}, {}, {}, {} });
                                    (void)0;}), static_cast<s_Struct&&>(BL_125_v));
                                    if (!(s.kind != s_kind_struct))
                                    {
                                        if (!USAGE_justOneThing_XyuwAq2h(usage, flatCount) && !isFieldChain_Y9zjA4WJ(item, ss, _helpers, _here, ctx, module))
                                        {
                                            /*MOV*/ s_SolvedNode letdef = createLet_XLWvNSXP("__partcopy_ref"_fu, s_Flags{}, item, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                            only_Iovd0TM6(node.items) = CallerNode_SJHMcAaU("__partcopy_ref"_fu, s_Target((letdef.target ? letdef.target : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module))), fu::vec<s_SolvedNode>{}, (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                            node = createBlock_IBT2J1Wh(static_cast<s_SolvedNode&&>(letdef), s_SolvedNode(node), ss, _helpers, _here, ctx, module);
                                        }
                                        else
                                        {
                                            /*MOV*/ fu::vec<s_SolvedNode> args {};
                                            for (int i = 0; i < s.items.size(); i++)
                                            {
                                                const s_Target fieldTarget = target_NWTdzsfF(s.items[i]);
                                                const s_Overload& field = GET_emAmLQ3D(fieldTarget, ss, _helpers, _here, ctx, module);
                                                const s_UnpackedOffset _ = field_unpackOffset_ZweBlDlz(field, ss, _helpers, _here, ctx, module);
                                                /*MOV*/ s_Type usedFieldType = USAGE_fieldUsageFromStructUsage_gOpgTaZ7(s_Type(field.type), usage, _.memberFlatOffset, _.memberFlatCount);
                                                if (isIrrelevant_40rRB6L8(usedFieldType))
                                                    args += createDefinit_ER0vXD5i(field.type, ss, _helpers, _here, ctx, module);
                                                else
                                                {
                                                    /*MOV*/ s_SolvedNode copy { node };
                                                    copy.type = static_cast<s_Type&&>(usedFieldType);
                                                    copy.items = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { CallerNode_SJHMcAaU("__partcopy_field"_fu, s_Target(fieldTarget), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(item) } }, (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) } };
                                                    args += static_cast<s_SolvedNode&&>(copy);
                                                };
                                            };
                                            /*MOV*/ s_Type type0 { node.type };
                                            node = CallerNode_SJHMcAaU("__partcopy_struct"_fu, s_Target(s.target), static_cast<fu::vec<s_SolvedNode>&&>(args), (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                            node.type = static_cast<s_Type&&>(type0);
                                        };
                                        propagateType_0IjBDgsa(node, slot, relax_mask, kills, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                        return;
                                    };
                                };
                                const s_SolvedNode& item_1 = only_GN4mikiy(node.items);
                                if (!is_rx_copy_GSunVkiW(item_1.type))
                                    fail_Ulv2WHKu(x7E_gCeFmDFw("A value is needed, but can neither copy nor move from: "_fu, str_cmTVYQgp(item_1, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                                else if (!is_trivial_XVsnoQiv(node.type.vtype, ctx, module))
                                {
                                    const s_SolverNotes note = s_SolverNotes_N_NonTrivAutoCopy;
                                    const s_SolverState& ss_1 = ss;
                                    if (note & options.break_notes)
                                        fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                                    else
                                        _notes |= note;

                                };
                            };
                        };
                        s_SolvedNode& item_1 = only_Iovd0TM6(node.items);
                        propagateType_0IjBDgsa(item_1, (isCopy ? make_copyable_40rRB6L8(s_Type(slot)) : s_Type(slot)), relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                        if (is_ref_gBx1AgSx(item_1.type))
                        {
                            if (!isCopy)
                            {
                                Lifetime_F_MOVED_FROM_2luwKq5a(item_1.type.lifetime, ss, _helpers, _here, ctx, module);
                                trackJustMoved_KGNHJVcq(item_1.type.lifetime, ss, _helpers, _here, ctx, module);
                                node.kind = s_kind_move;
                            };
                        }
                        else
                            BUG_V2MSl2gg(x7E_gCeFmDFw("Nothing to copy, item is not a ref: "_fu, str_cmTVYQgp(item_1, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                    };
                }
                else if (k == s_kind_arrlit)
                {
                    if (canDiscard)
                    {

                        {
                            const s_SolverNotes note = s_SolverNotes_N_UnusedArrlit;
                            const s_SolverState& ss_1 = ss;
                            if (note & options.break_notes)
                                fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                            else
                                _notes |= note;

                        };
                        discardIntoBlock_vpwm9X31(node, slot, relax_mask, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    }
                    else
                    {
                        fu::view_mut<s_SolvedNode> items = node.items;
                        s_Type itemSlot = clear_sliceable_hoadAQC0(node.type, _here, ctx);
                        if (relax_mask == RELAX_all)
                        {
                            for (int i = 0; i < items.size(); i++)
                            {
                                s_SolvedNode* _7;
                                (_7 = &(items.mutref(i)), maybeCopyOrMove_w5W0tdPX(*_7, itemSlot, false, ss, _helpers, _here, ctx, module));
                            };
                        };
                        for (int i = 0; i < items.size(); i++)
                        {
                            propagateType_0IjBDgsa(items.mutref(i), itemSlot, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                        };
                    };
                }
                else if (k == s_kind_argid)
                {
                    node = only_GN4mikiy(node.items);
                    propagateType_0IjBDgsa(node, slot, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                }
                else if (k == s_kind_jump)
                {
                    s_Helpers h { node.helpers };
                    const s_HelpersData* BL_153_v;
                    while ((__extension__ (
                    {
                        const s_Helpers& h_1 = h;
                        BL_153_v = &(ss._helpers_data[h_1.index]);
                    (void)0;}), *BL_153_v).kills)
                    {
                        const s_HelpersData* BL_156_v;
                        h = (node.helpers = (__extension__ (
                        {
                            const s_Helpers& h_1 = h;
                            BL_156_v = &(ss._helpers_data[h_1.index]);
                        (void)0;}), *BL_156_v).kills);
                    };
                    const s_HelpersData* BL_157_v;
                    if ((__extension__ (
                    {
                        const s_Helpers& h_1 = h;
                        BL_157_v = &(ss._helpers_data[h_1.index]);
                    (void)0;}), *BL_157_v).ret_actual)
                    {
                        s_SolvedNode& expr = only_Iovd0TM6(node.items);

                        {
                            const s_HelpersData* BL_160_v;
                            const s_Postdom* _8;
                            _current_fn.postdom = (*(_8 = &((__extension__ (
                            {
                                const s_Helpers& h_1 = h;
                                BL_160_v = &(ss._helpers_data[h_1.index]);
                            (void)0;}), *BL_160_v).postdom)) ? *_8 : BUG_V2MSl2gg(x7E_gCeFmDFw("propagateType(jump): h.loop_start not available: #"_fu, fu::i64dec(h.index)), ss, _helpers, _here, ctx, module));
                            const s_HelpersData* BL_161_v;
                            if ((__extension__ (
                            {
                                const s_Helpers& h_1 = h;
                                BL_161_v = &(ss._helpers_data[h_1.index]);
                            (void)0;}), *BL_161_v).mask & s_HelpersMask_HM_Function)
                            {
                                const s_kind kind = expr.kind;
                                _current_fn.postdom.snap.exitPaths = (((kind == s_kind_empty) || (kind == s_kind_definit)) ? s_ExitPaths_XP_EmptyReturn : s_ExitPaths_XP_NonEmptyReturn);
                            };
                        };
                        const bool redundant = (kills ? (kills.index <= h.index) : false);
                        const s_Helpers& kills_1 = (redundant ? kills : h);
                        if (relax_mask == RELAX_all)
                        {
                            const s_HelpersData* BL_164_v;
                            maybeCopyOrMove_w5W0tdPX(expr, (__extension__ (
                            {
                                const s_Helpers& h_1 = h;
                                BL_164_v = &(ss._helpers_data[h_1.index]);
                            (void)0;}), *BL_164_v).ret_actual, false, ss, _helpers, _here, ctx, module);
                        };
                        const s_HelpersData* BL_165_v;
                        propagateType_0IjBDgsa(expr, s_Type((__extension__ (
                        {
                            const s_Helpers& h_1 = h;
                            BL_165_v = &(ss._helpers_data[h_1.index]);
                        (void)0;}), *BL_165_v).ret_actual), relax_mask, kills_1, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                        if (redundant)
                            node = expr;
                        else
                        {
                            s_HelpersData* BL_168_v;
                            (__extension__ (
                            {
                                const s_Helpers& h_1 = h;
                                BL_168_v = &(ss._helpers_data.mutref(h_1.index));
                            (void)0;}), *BL_168_v).mask |= s_HelpersMask_HM_LabelUsed;
                            const s_HelpersData* BL_169_v;
                            if (isIrrelevant_40rRB6L8((__extension__ (
                            {
                                const s_Helpers& h_1 = h;
                                BL_169_v = &(ss._helpers_data[h_1.index]);
                            (void)0;}), *BL_169_v).ret_actual))
                            {
                                if (expr.kind == s_kind_empty)
                                {
                                    const s_HelpersData* BL_172_v;
                                    expr.type = (__extension__ (
                                    {
                                        const s_Helpers& h_1 = h;
                                        BL_172_v = &(ss._helpers_data[h_1.index]);
                                    (void)0;}), *BL_172_v).ret_actual;
                                }
                                else
                                {
                                    const s_HelpersData* BL_174_v;
                                    /*MOV*/ s_SolvedNode not_empty = createEmpty_3tvTwH58(s_kind_empty, (__extension__ (
                                    {
                                        const s_Helpers& h_1 = h;
                                        BL_174_v = &(ss._helpers_data[h_1.index]);
                                    (void)0;}), *BL_174_v).ret_actual, s_Target{}, _here);
                                    std::swap(expr, not_empty);
                                    node = createBlock_IBT2J1Wh(static_cast<s_SolvedNode&&>(not_empty), s_SolvedNode(node), ss, _helpers, _here, ctx, module);
                                };
                            }
                            else if (tryInjectJumps_r0AwQteC(expr, h, ss, _helpers, _here, ctx, module))
                                node = expr;

                        };
                    }
                    else
                        BUG_V2MSl2gg(x7E_gCeFmDFw("propagateType(jump): h.ret_actual not available: #"_fu, fu::i64dec(h.index)), ss, _helpers, _here, ctx, module);

                }
                else if (k == s_kind_block)
                {
                    const s_Helpers h { node.helpers };
                    if (ss._helpers_data[h.index].ret_actual)
                    {
                        if (relax_mask == RELAX_all)
                            mcom_BlockReturns_CopyOrMoveDecision_2APyjpDB(h, ss, _helpers, _here, ctx, module);

                        try_relax_c5Z7RHRf(ss._helpers_data.mutref(h.index).ret_actual, slot, relax_mask);
                        if ((relax_mask == RELAX_all) && !canDiscard && !is_never_FfV8Zuj5(ss._helpers_data[h.index].ret_actual))
                        {
                            s_SolvedNode* _9;
                            (_9 = &(last_Iovd0TM6(node.items)), maybeCopyOrMove_w5W0tdPX(*_9, ss._helpers_data[h.index].ret_actual, false, ss, _helpers, _here, ctx, module));
                        };
                    };
                    if (h)
                    {
                        ss._helpers_data.mutref(h.index).mask &= s_HelpersMask(~s_HelpersMask_HM_LabelUsed);
                        ss._helpers_data.mutref(h.index).kills = s_Helpers(kills);
                    };
                    fu::vec<s_SolvedNode>& items = node.items;

                    {
                        for (int i = 0; i < (items.size() - 1); i++)
                        {
                            s_SolvedNode& node_1 = items.mutref(i);
                            const s_kind k_1 = node_1.kind;
                            if (k_1 == s_kind_defer)
                            {
                                s_SolvedNode& expr = only_Iovd0TM6(node_1.items);
                                propagateType_0IjBDgsa(expr, t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                if (isDiscardable_7SPn8aqY(expr, ss, _helpers, _here, ctx, module))
                                {

                                    {
                                        const s_SolverNotes note = s_SolverNotes_N_UnusedDefer;
                                        const s_SolverState& ss_1 = ss;
                                        if (note & options.break_notes)
                                            fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                                        else
                                            _notes |= note;

                                    };
                                    items.splice(i--, 1);
                                };
                            }
                            else if ((k_1 == s_kind_and) || (k_1 == s_kind_or))
                            {
                                if (is_never_FfV8Zuj5(last_GN4mikiy(node_1.items).type))
                                {
                                    /*MOV*/ fu::vec<s_SolvedNode> cond = fu::slice(node_1.items, 0, (node_1.items.size() - 1));
                                    /*MOV*/ s_SolvedNode cons { node_1.items[(node_1.items.size() - 1)] };
                                    fu::vec<s_SolvedNode> alt = fu::slice(items, (i + 1), items.size());
                                    items.splice((i + 1), alt.size());
                                    s_SolvedNode cond_1 = ((k_1 == s_kind_and) ? createAnd_w6k6Jw1i(static_cast<fu::vec<s_SolvedNode>&&>(cond), s_Type(t_proposition), ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : createOr_6Eo1FhDy(static_cast<fu::vec<s_SolvedNode>&&>(cond), s_Type(t_proposition), ss, _current_fn, _helpers, _here, ctx, module));
                                    /*MOV*/ s_SolvedNode alt_1 = createBlock_UZ3zi9cx(last_GN4mikiy(alt).type, fu::vec<s_SolvedNode>(alt), s_Helpers{}, ss, _helpers, _here, ctx, module);
                                    /*MOV*/ s_SolvedNode replacement = createIf_ayEiHZB3(cond_1, s_SolvedNode(((k_1 == s_kind_and) ? cons : alt_1)), static_cast<s_SolvedNode&&>(((k_1 == s_kind_and) ? alt_1 : cons)), s_Type{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                    items.mutref(i) = static_cast<s_SolvedNode&&>(replacement);
                                };
                            };
                        };
                        Breakable_begin_K692EePS(false, node, relax_mask, ss, _current_fn, _here, ctx);
                        fu_DEFER(Breakable_end_f9BqCEoJ(false, node, relax_mask, ss, _current_fn, _here, ctx));
                        while (items)
                        {
                            s_SolvedNode& tail = last_Iovd0TM6(items);
                            if (tail.kind == s_kind_defer)
                            {
                                tail = ((tail.value == "err"_fu) ? createEmpty_3tvTwH58(s_kind_empty, t_void, s_Target{}, _here) : s_SolvedNode(only_GN4mikiy(tail.items)));
                            };
                            const s_Helpers& kills_1 = (!(s_HelpersMask((ss._helpers_data[h.index].mask & s_HelpersMask_HM_Function)) && !is_void_FfV8Zuj5(ss._helpers_data[h.index].ret_actual)) ? (kills ? kills : h) : (*(const s_Helpers*)fu::NIL));
                            propagateType_0IjBDgsa(tail, slot, relax_mask, kills_1, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                            if (!canDiscard || !isDiscardable_7SPn8aqY(tail, ss, _helpers, _here, ctx, module))
                                break;
                            else
                                items.pop();

                        };
                        for (int i_1 = (items.size() - 1); i_1-- > 0; )
                        {
                            s_SolvedNode& expr = items.mutref(i_1);
                            if (expr.kind != s_kind_defer)
                            {
                                propagateType_0IjBDgsa(expr, t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                if (isDiscardable_7SPn8aqY(expr, ss, _helpers, _here, ctx, module))
                                    items.splice(i_1, 1);

                            };
                        };
                    };
                    if (ss._helpers_data[h.index].target == _current_fn.out.target)
                        _current_fn_eachArg_BACK_yGE8ecrA(relax_mask, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                    if (!items && !s_HelpersMask((ss._helpers_data[h.index].mask & s_HelpersMask_HM_Function)))
                    {
                        if (!canDiscard)
                            BUG_V2MSl2gg(("Empty block type is relevant: "_fu + humanizeType_adoPoPLu(node.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                        else
                        {
                            node.kind = s_kind_empty;
                            node.helpers = s_Helpers{};
                        };
                    }
                    else if ((items.size() == 1) && !s_HelpersMask((ss._helpers_data[h.index].mask & s_HelpersMask((s_HelpersMask_HM_LabelUsed | s_HelpersMask_HM_Function)))))
                        node = only_GN4mikiy(items);
                    else
                    {
                        if (canDiscard)
                            node.type = t_void;
                        else if (kills)
                        {
                            if (items)
                            {
                                const s_SolvedNode& tail = last_GN4mikiy(items);
                                if (ss._helpers_data[h.index].ret_actual)
                                {
                                    reportReturnType_fmwhJ2Cl(h, tail.type, false, ss, _helpers, _here, ctx, module);
                                    node.type = ss._helpers_data[h.index].ret_actual;
                                }
                                else
                                    node.type = tail.type;

                            };
                        };
                        const s_SolvedNode& tail = if_last_GN4mikiy(node.items);
                        const s_HelpersData* BL_212_v;
                        if ((tail.kind == s_kind_block) && !s_HelpersMask(((__extension__ (
                        {
                            const s_Helpers& h_1 = tail.helpers;
                            BL_212_v = &(ss._helpers_data[h_1.index]);
                        (void)0;}), *BL_212_v).mask & s_HelpersMask_HM_LabelUsed)))
                            node.items.splice((node.items.size() - 1), 1, fu::vec<s_SolvedNode>(tail.items));

                    };
                }
                else if (k == s_kind_root)
                {
                    for (int i = node.items.size(); i-- > 0; )
                    {
                        propagateType_0IjBDgsa(node.items.mutref(i), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    };
                }
                else if (k == s_kind_pragma)
                {
                    node._loop_start = _current_fn.postdom.parent_loop_start;
                    for (int i = 0; i < node.items.size(); i++)
                    {
                        s_SolvedNode& item = node.items.mutref(i);
                        propagateType_0IjBDgsa(item, s_Type(node.items[i].type), relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                        if (is_mutref_hoadAQC0(item.type, _here, ctx))
                        {
                            callarg_trackWrites_w1UMBWbV(item.type.lifetime, ss, _current_fn, _helpers, _here, ctx, module);
                        };
                    };
                    if (node.value == "clock"_fu)
                        _current_fn.effects.fx_mask |= EFFECTS_clock;
                    else if (node.value == "input"_fu)
                        _current_fn.effects.fx_mask |= EFFECTS_input;
                    else if (node.value == "output"_fu)
                        _current_fn.effects.fx_mask |= EFFECTS_output;

                }
                else
                    fail_Ulv2WHKu((x7E_gCeFmDFw("TODO: propagateType("_fu, str_ZGqrvxJv(k)) + ")."_fu), ss, _helpers, _here, ctx, module);

            };
        };
    };
}

inline static void l_27_72_lJnDkbHU(const int locid, const bool isStatic, int& left, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(isStatic))
    {
        (!left ? left : BUG_V2MSl2gg("Lifetime_getRefLocid_unlessStatic: multiple locids in left_lt"_fu, ss, _helpers, _here, ctx, module)) = (locid ? locid : BUG_V2MSl2gg("Lifetime_getRefLocid_unlessStatic: non-locid/non-static in left_lt"_fu, ss, _helpers, _here, ctx, module));
    };
}

                                #ifndef DEF_Lifetime_each_nLFRsosrkS2
                                #define DEF_Lifetime_each_nLFRsosrkS2
inline void Lifetime_each_nLFRsosr(const s_Lifetime& lifetime, int& left, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_72_lJnDkbHU(int(((r & 1u) ? 0u : (r >> 1u))), (r == 0u), left, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static int Lifetime_getRefLocid_unlessStatic_yQzp6dYE(const s_Lifetime& lifetime, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int left {};
    Lifetime_each_nLFRsosr(lifetime, left, ss, _helpers, _here, ctx, module);
    return left;
}

static bool acceptsTempCopies_Vrru0Rf5(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    if ((o.kind == s_kind_var) && !(o.flags & (s_Flags_F_IMPLICIT | s_Flags_F_REF)))
        return !is_mutref_hoadAQC0(o.type, _here, ctx);
    else
        return false;

}

static bool willPassByValue_G82rXa1z(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (acceptsTempCopies_Vrru0Rf5(o, _here, ctx))
        return isPassByValue_3t4EwFeQ(o.type.vtype);
    else
        return false;

}

inline static void l_27_86_zn50kuBR(const s_Target& target, s_Lifetime& consts, s_Lifetime& refs, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int BL_1_v {};
    if (int(unsigned(((target._packed >> 20ull) & 0xfffffull))) == (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v))
    {
        const s_Type& type = GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).solved.type;
        const s_Lifetime& region = GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).type.lifetime;
        if (!(!Lifetime_getRefLocid_unlessStatic_yQzp6dYE(region, ss, _helpers, _here, ctx, module)))
        {
            if (is_mutref_hoadAQC0(type, _here, ctx) && has_QTGTghRU(_current_fn.postdom.snap.ever_written, int(unsigned(((target._packed >> 40ull) & 0xfffffull)))))
            {
                Lifetime_add_PKO62rQ1(refs, region);
            }
            else if (is_ref_gBx1AgSx(type) && !willPassByValue_G82rXa1z(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), _here, ctx))
            {
                Lifetime_add_PKO62rQ1(consts, region);
            };
        };
    }
    else
    {
        BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

inline static void _current_fn_eachArg_FWD_dNq01a0E(s_Lifetime& consts, s_Lifetime& refs, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = _current_fn.out.items[i].target;
        if (t && (GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).flags & s_Flags_F_ARG))
            l_27_86_zn50kuBR(t, consts, refs, ss, _current_fn, _helpers, _here, ctx, module);

    };
}

inline static void l_27_87_PACQ84yu(const int locid, int& refs_len, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (locid)
        refs_len++;
    else
        BUG_V2MSl2gg("AAR: refs contains non-locals"_fu, ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_Lifetime_each_09jOV7RX1Mj
                                #define DEF_Lifetime_each_09jOV7RX1Mj
inline void Lifetime_each_09jOV7RX(const s_Lifetime& lifetime, int& refs_len, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_87_PACQ84yu(int(((r & 1u) ? 0u : (r >> 1u))), refs_len, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static void clear_3uWX1Ibs(s_Flow& flow)
{
    if (flow.at_hard_risk || flow.at_soft_risk)
        fu::fail("Flow.clear(): Non-empty at-risk tables."_fu);
    else
    {
        flow.rg_parents.clear();
        flow.rg_invalidates.clear();
        flow.rg_children.clear();
        flow.at_soft_risk.clear();
        flow.at_hard_risk.clear();
        clear_gNKGEQWi(flow.is_arg);
        flow.arg_parents.clear();
        flow.arg_targets.clear();
    };
}

static void clear_gYmR7DqI(s_Events& events)
{
    events = s_Events{};
}

static s_Flow& flow_qlrB8xCs(s_CurrentFn& _current_fn)
{
    return _current_fn.flow;
}

static void Reference_trackArgument_OAknhCem(const int target, const int position, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if ((flow_qlrB8xCs(_current_fn).arg_targets.size() <= position))
    {
        flow_qlrB8xCs(_current_fn).arg_targets.grow((position + 1));
        flow_qlrB8xCs(_current_fn).arg_targets.mutref(position) = target;
        add_U5p6nLOf(flow_qlrB8xCs(_current_fn).is_arg, target);
    }
    else
        BUG_V2MSl2gg("Reference_trackArgument: positions out of order."_fu, ss, _helpers, _here, ctx, module);

}

inline static void l_27_88_QfvIXe29(const s_Target& target, const int position, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int BL_1_v {};
    if (int(unsigned(((target._packed >> 20ull) & 0xfffffull))) == (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v))
        Reference_trackArgument_OAknhCem(int(unsigned(((target._packed >> 40ull) & 0xfffffull))), position, ss, _current_fn, _helpers, _here, ctx, module);
    else
        BUG_V2MSl2gg(x7E_gCeFmDFw("Arg target not local to current-fn: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

}

inline static void _current_fn_eachArg_FWD_CmVM9TfR(const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = _current_fn.out.items[i].target;
        if (t && (GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module).flags & s_Flags_F_ARG))
            l_27_88_QfvIXe29(t, i, ss, _current_fn, _helpers, _here, ctx, module);

    };
}

                                #ifndef DEF_grow_if_oob_UaKCknOxVBg
                                #define DEF_grow_if_oob_UaKCknOxVBg
inline s_Lifetime& grow_if_oob_UaKCknOx(fu::vec<s_Lifetime>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_unless_oob_pcvjJeirOI1
                                #define DEF_unless_oob_pcvjJeirOI1
inline const s_Lifetime& unless_oob_pcvjJeir(fu::view<s_Lifetime> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
    {
        return (*(const s_Lifetime*)fu::NIL);
    };
}
                                #endif

inline static void l_27_89_ne3YHJTH(const int target, const s_Lifetime& others, const s_Lifetime& consts, const int refs_len, s_Flow& flow, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (target)
    {
        if (consts)
        {
            s_Lifetime* _0;
            (!*(_0 = &(grow_if_oob_UaKCknOx(flow.rg_invalidates, target))) ? *_0 : BUG_V2MSl2gg("AAR: ref arg already has invalidates."_fu, ss, _helpers, _here, ctx, module)) = s_Lifetime(consts);
        };
        if (others)
        {
            Lifetime_add_PKO62rQ1(grow_if_oob_UaKCknOx(flow.rg_invalidates, target), others);
        };
        if ((refs_len > 1) || consts)
        {
            const s_Lifetime* _1;
            s_Lifetime* _2;
            (!*(_2 = &(grow_if_oob_UaKCknOx(flow.rg_parents, target))) ? *_2 : BUG_V2MSl2gg("AAR: ref arg already has parents."_fu, ss, _helpers, _here, ctx, module)) = s_Lifetime((*(_1 = &(unless_oob_pcvjJeir(flow.rg_invalidates, target))) ? *_1 : BUG_V2MSl2gg("AAR: (refs.len > 1 || consts), but no invalidates."_fu, ss, _helpers, _here, ctx, module)));
        };
    }
    else
    {
        BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_Lifetime_each_fN1FnPvGKM7
                                #define DEF_Lifetime_each_fN1FnPvGKM7
inline void Lifetime_each_fN1FnPvG(const s_Lifetime& lifetime, const s_Lifetime& consts, const int refs_len, s_Flow& flow, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parseRegion(offset, chars);
        l_27_89_ne3YHJTH(int(((r & 1u) ? 0u : (r >> 1u))), s_Lifetime { (fu::get_view_start0(chars, offset0) + fu::get_view(chars, offset)) }, consts, refs_len, flow, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

inline static void l_27_90_9DgPFv1c(const int target, const s_Lifetime& refs, s_Flow& flow, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (target)
    {
        s_Lifetime* _0;
        (!*(_0 = &(grow_if_oob_UaKCknOx(flow.rg_invalidates, target))) ? *_0 : BUG_V2MSl2gg("AAR: const arg already has invalidates."_fu, ss, _helpers, _here, ctx, module)) = s_Lifetime(refs);
    }
    else
    {
        BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_Lifetime_each_UZalbBLJzoi
                                #define DEF_Lifetime_each_UZalbBLJzoi
inline void Lifetime_each_UZalbBLJ(const s_Lifetime& lifetime, const s_Lifetime& refs, s_Flow& flow, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_90_9DgPFv1c(int(((r & 1u) ? 0u : (r >> 1u))), refs, flow, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static fu::vec<s_SolvedNode>& args_GuOB76kF(s_SolvedNode& callsite)
{
    return callsite.items;
}

static s_Target& target_XhSLQ0G3(s_SolvedNode& callsite)
{
    return callsite.target;
}

static s_Events& events_DIxgpMSL(s_CurrentFn& _current_fn)
{
    return _current_fn.events;
}

static int locid_1JpybOO5(const s_WriteID& w)
{
    return int((w._locid_and_hash & 0xfffffu));
}

static bool acceptsSoftRisk_w1pYZcYP(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (o.flags & s_Flags_F_ARG)
        return !acceptsTempCopies_Vrru0Rf5(o, _here, ctx);
    else
        return false;

}

static bool RESOLVE_byAAR_0CZ0X26h(const int read, const int write, const bool trySoft, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (pass == s_BorrowCheckPass_BCK_aar)
    {
        if (read != write)
        {
            if ((!trySoft || !acceptsSoftRisk_w1pYZcYP(GET_emAmLQ3D(nested_nWBn0vig(read, ss), ss, _helpers, _here, ctx, module), _here, ctx)) && !add_once_U5p6nLOf(grow_if_oob_ibzQKImi(_current_fn.flow.at_hard_risk, write), read))
                return true;
            else if (!add_once_U5p6nLOf(grow_if_oob_ibzQKImi(_current_fn.flow.at_soft_risk, write), read))
                return true;
            else
            {
                const bool firstTry_to_ascendWrites = (write > read);
                for (int i = 0; i < 2; i++)
                {
                    if (!i == firstTry_to_ascendWrites)
                    {
                        fu::vec<int> parents { unless_oob_6AZJyJXO(_current_fn.flow.arg_parents, write) };
                        if (parents)
                        {
                            for (int i_1 = 0; i_1 < parents.size(); i_1++)
                            {
                                const int parent = parents[i_1];
                                if (parent != read)
                                    RESOLVE_byAAR_0CZ0X26h(read, parent, trySoft, pass, ss, _current_fn, _helpers, _here, ctx, module);

                            };
                            return true;
                        };
                    }
                    else
                    {
                        fu::vec<int> parents { unless_oob_6AZJyJXO(_current_fn.flow.arg_parents, read) };
                        if (parents)
                        {
                            for (int i_1 = 0; i_1 < parents.size(); i_1++)
                            {
                                const int parent = parents[i_1];
                                if (parent != write)
                                    RESOLVE_byAAR_0CZ0X26h(parent, write, false, pass, ss, _current_fn, _helpers, _here, ctx, module);

                            };
                            return true;
                        };
                    };
                };
                return true;
            };
        }
        else
            BUG_V2MSl2gg("RESOLVE_byAAR: read == write"_fu, ss, _helpers, _here, ctx, module);

    }
    else
    {
        BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

static bool RESOLVE_byAAR_JJkBkTcI(fu::view<s_WriteID> writes, const int read, const bool trySoft, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < writes.size(); i++)
        RESOLVE_byAAR_0CZ0X26h(read, locid_1JpybOO5(writes[i]), trySoft, pass, ss, _current_fn, _helpers, _here, ctx, module);

    return true;
}

static bool RESOLVE_byMutvar_EIPPYxvJ(const int target, const s_BorrowCheckPass pass, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (pass == s_BorrowCheckPass_BCK_bck)
    {
        const s_Target t = nested_nWBn0vig(target, ss);
        s_Overload& o = GET_mut_uE8Nb6mH(t, ss, module);
        if (!acceptsTempCopies_Vrru0Rf5(o, _here, ctx))
            return false;
        else if (is_mutref_hoadAQC0(o.type, _here, ctx))
            BUG_V2MSl2gg((x7E_gCeFmDFw(str_3AjvLtSQ(o, ss, _helpers, _here, ctx, module), ": Not F_REF but type.is_mutref"_fu) + " in RESOLVE_byMutvar: is this a problem?"_fu), ss, _helpers, _here, ctx, module);
        else if (o.kind == s_kind_var)
        {
            TEST_varLifetime_YYo9tRSJ(o.type.lifetime, false, 0, ss, _helpers, _here, ctx, module);
            if (!is_rx_copy_GSunVkiW(o.type))
                return false;
            else
            {
                if (!(o.flags & s_Flags_F_MUT))
                {
                    o.flags |= s_Flags_F_MUT;
                    /*MOV*/ s_Type t_let = clear_refs_40rRB6L8(s_Type(o.type));
                    o.solved.type = static_cast<s_Type&&>(t_let);
                };
                return true;
            };
        }
        else
            BUG_V2MSl2gg("RESOLVE_byMutvar: Not a variable."_fu, ss, _helpers, _here, ctx, module);

    }
    else
    {
        BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_first_B5STuDZh0mc
                                #define DEF_first_B5STuDZh0mc
inline const s_WriteID& first_B5STuDZh(fu::view<s_WriteID> s)
{
    if (s.size())
        return s[0];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_IYZ5SpLW(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static unsigned tokenHash_fxDaqgfE(const s_TokenIdx& token)
{
    return ((unsigned(token.modid) * 9973u) ^ unsigned(token.tokidx)) << 20u;
}

static unsigned tokenHash_iF89vlrR(const s_WriteID& w)
{
    return w._locid_and_hash & 0xfff00000u;
}

static fu::str RWEvent_stack_ACN7w3wD(const s_WriteID& write, const s_SolvedNode& root, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int locid = locid_1JpybOO5(write);

    {
        const s_SolvedNode& node = root;
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_IYZ5SpLW(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_emAmLQ3D(node_1.target, ss, _helpers, _here, ctx, module).solved : node_1);
            const s_SolvedNode& node_3 = ((node_2.kind == s_kind___preceding_ref_arg) ? _current_fn.events.preceding_ref_args[node_2.helpers.index].arg : node_2);

            {
                const s_CurrentFn& _current_fn_1 = _current_fn;
                if (!(tokenHash_fxDaqgfE(node_3.token) != tokenHash_iF89vlrR(write)))
                {
                    if (!((node_3.kind != s_kind_call) && (node_3.kind != s_kind_pragma)))
                    {
                        if (node_3.kind == s_kind_call)
                        {
                            for (int i = 0; i < node_3.items.size(); i++)
                            {
                                const s_SolvedNode& arg = node_3.items[i];
                                if (Lifetime_has_62UtfSbx(arg.type.lifetime, locid))
                                {
                                    const s_Argument& host_arg = EXT_7eVl0gy6(node_3.target, ss, ctx, module).args[i];
                                    if (host_arg.flags & s_Flags_F_WRITTEN_TO)
                                    {
                                        fu::str _0 {};
                                        return (_0 = x7E_gCeFmDFw((addr_and_snippet_LWjqt07q(node_3.token, s_CodeFmt{}, fu::view<char>{}, ctx, module) + "\n\tAt call to "_fu), str_3AjvLtSQ(GET_emAmLQ3D(node_3.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), (static_cast<fu::str&&>(_0) + qSTACK_SjlFsNxw(s_Target(node_3.target), i, fu::view<s_Target>{}, s_ArgQuery{}, ss, _current_fn_1, _helpers, _here, ctx, module)));
                                    };
                                };
                            };
                        }
                        else if (node_3.kind == s_kind_pragma)
                        {
                            for (int i = 0; i < node_3.items.size(); i++)
                            {
                                const s_SolvedNode& arg = node_3.items[i];
                                if (is_mutref_hoadAQC0(arg.type, _here, ctx) && Lifetime_has_62UtfSbx(arg.type.lifetime, locid))
                                {
                                    return (addr_and_snippet_LWjqt07q(arg.token, s_CodeFmt{}, fu::view<char>{}, ctx, module) + "\n\tvia pragma "_fu) + qID_3PsDzMvu(node_3.value);
                                };
                            };
                        };
                    };
                };
            };
            for (int i = node_3.items.size(); i-- > 0; )
                stack += s_SolvedNode(node_3.items[i]);

        };
    };
    return x7E_gCeFmDFw("\n\n\tCOMPILER BUG: RWEvent_stack could not find write to "_fu, str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(locid_1JpybOO5(write), ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module));
}

                                #ifndef DEF_str_UmHRqxjXcu8
                                #define DEF_str_UmHRqxjXcu8
inline fu::str str_UmHRqxjX(const s_BorrowCheckPass n)
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

[[noreturn]] static fu::never cannotFailAfterBCK_ONUD9EDZ(const fu::str& reason, const s_BorrowCheckPass pass, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (pass == s_BorrowCheckPass_BCK_bck)
        fail_Ulv2WHKu(reason, ss, _helpers, _here, ctx, module);
    else
        BUG_V2MSl2gg((x7E_gCeFmDFw(str_UmHRqxjX(pass), " is trying to emit an error:\n\n\t"_fu) + reason), ss, _helpers, _here, ctx, module);

}

static void bck_trackRead_v8wqpqBM(const s_SolvedNode& callsite, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!isLocal_iPYw45vv(callsite.target)))
    {
        _here = callsite.token;
        int BL_2_v {};
        const int target = (__extension__ (
        {
            const s_Target& t = callsite.target;
            BL_2_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
        (void)0;}), BL_2_v);
        const int loop_start = (callsite._loop_start ? callsite._loop_start : BUG_V2MSl2gg("bck_trackRead: loop_start not set on callsite."_fu, ss, _helpers, _here, ctx, module));
        TEST_varLifetime_YYo9tRSJ(callsite.type.lifetime, TODO_FIX_static_ZSTs, target, ss, _helpers, _here, ctx, module);
        if (events_DIxgpMSL(_current_fn).snap.invalidated_by.size() > target)
        {
            fu::vec<s_WriteID> u { events_DIxgpMSL(_current_fn).snap.invalidated_by[target] };
            if (u)
            {
                if (((pass == s_BorrowCheckPass_BCK_aar) ? !RESOLVE_byAAR_JJkBkTcI(u, target, true, pass, ss, _current_fn, _helpers, _here, ctx, module) : !RESOLVE_byMutvar_EIPPYxvJ(target, pass, ss, _helpers, _here, ctx, module)))
                {
                    fu::str _0 {};
                    fu::str _1 {};
                    (_1 = (_0 = (x7E_gCeFmDFw(((x7E_gCeFmDFw(("Cannot access"_fu + " "_fu), str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(target, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ", reference invalidated by write to"_fu) + " "_fu), str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(locid_1JpybOO5(first_B5STuDZh(u)), ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu), (static_cast<fu::str&&>(_0) + RWEvent_stack_ACN7w3wD(first_B5STuDZh(u), root, ss, _current_fn, _helpers, _here, ctx, module))), cannotFailAfterBCK_ONUD9EDZ(static_cast<fu::str&&>(_1), pass, ss, _helpers, _here, ctx, module));
                }
                else
                {
                    events_DIxgpMSL(_current_fn).snap.invalidated_by.mutref(target) = fu::vec<s_WriteID>{};
                };
            };
        };
        if (target < loop_start)
            add_U5p6nLOf(events_DIxgpMSL(_current_fn).used_in_a_loop, target);

    };
}

inline static void l_27_80_TeCkL17r(const int i, const s_Argument& host_arg, const bool ooe_isLast, s_SolvedNode& callsite, int& pra_first, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if ((pra_first >= 0))
        _current_fn.events.preceding_ref_args.mutref(pra_first).w = i;

    s_SolvedNode& arg = args_GuOB76kF(callsite).mutref(i);
    bck_node_4MFkhCFQ(arg, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (!ooe_isLast && is_ref_gBx1AgSx(arg.type) && is_ref_gBx1AgSx(host_arg.type))
    {
        /*MOV*/ s_SolvedNode pra {};
        pra.kind = s_kind___preceding_ref_arg;
        const int pra_index = _current_fn.events.preceding_ref_args.size();
        pra.helpers.index = pra_index;
        if (pra_first < 0)
            pra_first = pra_index;

        std::swap(pra, arg);
        _current_fn.events.preceding_ref_args += s_PrecedingRefArg { s_TokenIdx(callsite.token), s_Target(target_XhSLQ0G3(callsite)), i, -1, static_cast<s_SolvedNode&&>(pra) };
    };
}

                                #ifndef DEF_argsForward_PsLVo8Stf2b
                                #define DEF_argsForward_PsLVo8Stf2b
inline void argsForward_PsLVo8St(const bool RTL, fu::view<s_Argument> host_args, const int seqIdx_start, s_SolvedNode& callsite, int& pra_first, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    int seqIdx = 0;
    int lastPass = 1;
    for (int pass_1 = 0; pass_1 < lastPass; pass_1++)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const s_Argument& host_arg = host_args[i];
            if (!!pass_1 != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_hoadAQC0(host_arg.type, _here, ctx))))
                lastPass = 2;
            else
            {
                if ((seqIdx_start <= seqIdx))
                    l_27_80_TeCkL17r(i, host_arg, (seqIdx == (host_args.size() - 1)), callsite, pra_first, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                seqIdx++;
            };
        };
    };
}
                                #endif

inline static void l_27_81_oR7n5MHl(const int locid, int& arg_first, int& arg_last, const int i0)
{
    if (locid)
    {
        arg_first = ((arg_first < 0) ? i0 : arg_first);
        arg_last = i0;
    };
}

                                #ifndef DEF_Lifetime_each_h9dRwZZHqF9
                                #define DEF_Lifetime_each_h9dRwZZHqF9
inline void Lifetime_each_h9dRwZZH(const s_Lifetime& lifetime, int& arg_first, int& arg_last, const int i0)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_81_oR7n5MHl(int(((r & 1u) ? 0u : (r >> 1u))), arg_first, arg_last, i0);
    };
}
                                #endif

inline static void l_27_82_tybYVl26(const int locid, int& arg_first, int& arg_last, const int i0)
{
    if (locid)
    {
        arg_first = ((arg_first < 0) ? i0 : arg_first);
        arg_last = i0;
    };
}

                                #ifndef DEF_Lifetime_each_Wg3KLXIU3bb
                                #define DEF_Lifetime_each_Wg3KLXIU3bb
inline void Lifetime_each_Wg3KLXIU(const s_Lifetime& lifetime, int& arg_first, int& arg_last, const int i0)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_82_tybYVl26(int(((r & 1u) ? 0u : (r >> 1u))), arg_first, arg_last, i0);
    };
}
                                #endif

static bool softRiskSafe_y61oaKLn(const s_SolvedNode& arg, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return isFieldChain_Y9zjA4WJ(arg, ss, _helpers, _here, ctx, module);
}

inline static void l_27_84_DAVaXRQa(const int region1, const int region0, const int i1, const s_Argument& host_arg1, const s_SolvedNode& arg1, const int i0, const s_Argument& host_arg0, const s_SolvedNode& arg0, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!(region1 && (region0 != region1))))
    {
        if (is_mutref_hoadAQC0(host_arg0.type, _here, ctx))
            RESOLVE_byAAR_0CZ0X26h(region1, region0, (has_QTGTghRU(host_arg0.may_alias, i1) ? softRiskSafe_y61oaKLn(arg1, ss, _helpers, _here, ctx, module) : false), pass, ss, _current_fn, _helpers, _here, ctx, module);

        if (is_mutref_hoadAQC0(host_arg1.type, _here, ctx))
            RESOLVE_byAAR_0CZ0X26h(region0, region1, (has_QTGTghRU(host_arg1.may_alias, i0) ? softRiskSafe_y61oaKLn(arg0, ss, _helpers, _here, ctx, module) : false), pass, ss, _current_fn, _helpers, _here, ctx, module);

    };
}

                                #ifndef DEF_Lifetime_each_hqqN5wWqFA2
                                #define DEF_Lifetime_each_hqqN5wWqFA2
inline void Lifetime_each_hqqN5wWq(const s_Lifetime& lifetime, const int region0, const int i1, const s_Argument& host_arg1, const s_SolvedNode& arg1, const int i0, const s_Argument& host_arg0, const s_SolvedNode& arg0, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_84_DAVaXRQa(int(((r & 1u) ? 0u : (r >> 1u))), region0, i1, host_arg1, arg1, i0, host_arg0, arg0, pass, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

inline static void l_27_83_zOkb63x6(const int region0, const int i1, const s_Argument& host_arg1, const s_SolvedNode& arg1, const s_Lifetime& shallow1, const int i0, const s_Argument& host_arg0, const s_SolvedNode& arg0, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!region0))
    {
        Lifetime_each_hqqN5wWq(shallow1, region0, i1, host_arg1, arg1, i0, host_arg0, arg0, pass, ss, _current_fn, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_Lifetime_each_PZ8EEGgxyUb
                                #define DEF_Lifetime_each_PZ8EEGgxyUb
inline void Lifetime_each_PZ8EEGgx(const s_Lifetime& lifetime, const int i1, const s_Argument& host_arg1, const s_SolvedNode& arg1, const s_Lifetime& shallow1, const int i0, const s_Argument& host_arg0, const s_SolvedNode& arg0, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_83_zOkb63x6(int(((r & 1u) ? 0u : (r >> 1u))), i1, host_arg1, arg1, shallow1, i0, host_arg0, arg0, pass, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static bool isInvalidatedBy_ZhSsIGRf(const s_Lifetime& read, const s_Lifetime& write, s_CurrentFn& _current_fn)
{

    {
        fu::view<char> chars = write.uni0n;
        int offset = 0;
        while (offset < chars.size())
        {
            const unsigned r = parseRegion(offset, chars);
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            if (locid && Lifetime_hasInter_k7qB83TF(read, unless_oob_pcvjJeir(flow_qlrB8xCs(_current_fn).rg_invalidates, locid)))
                return true;

        };
    };
    return false;
}

static bool RESOLVE_byMutvar_xmynrnGT(const s_Target& target, const s_BorrowCheckPass pass, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int BL_1_v {};
    if (int(unsigned(((target._packed >> 20ull) & 0xfffffull))) == (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v))
        return RESOLVE_byMutvar_EIPPYxvJ(int(unsigned(((target._packed >> 40ull) & 0xfffffull))), pass, ss, _helpers, _here, ctx, module);
    else
        return false;

}

static s_ArgRationale RESOLVE_byTempCopy_fo5S1QL2(s_SolvedNode& arg, const s_Target& target, const int position, const s_BorrowCheckPass pass, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (pass == s_BorrowCheckPass_BCK_bck)
    {
        if (_current_fn.asserts & s_DeclAsserts_A_FAST)
            return s_ArgRationale_CantTempCopy_FastFn;
        else
        {
            fu::vec<s_Argument> host_args { EXT_7eVl0gy6(target, ss, ctx, module).args };
            s_Argument BL_4_v {};
            s_Argument host_arg = (__extension__ (
            {
                const s_Argument& __partcopy_ref = host_args[position];
                BL_4_v = (s_Argument { {}, {}, s_Type(__partcopy_ref.type), {}, __partcopy_ref.flags, {}, {}, {} });
            (void)0;}), static_cast<s_Argument&&>(BL_4_v));
            if (!is_rx_copy_GSunVkiW(arg.type))
                return s_ArgRationale_CantTempCopy_NonCopiable;
            else if ((arg.kind == s_kind_call) && RESOLVE_byMutvar_xmynrnGT(arg.target, pass, ss, _current_fn, _helpers, _here, ctx, module))
            {
                return s_ArgRationale{};
            }
            else
            {
                const s_ArgRationale r = rejectsTempCopies_vs7DHx4n(host_arg, _here, ctx);
                if (r)
                    return r;
                else
                {
                    const bool isReturned = Lifetime_has_NRjdLNHo(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).type.lifetime, position);
                    if (isReturned)
                        return s_ArgRationale_CantTempCopy_ReturnedFromFn;
                    else
                    {
                        const s_Type& slot = host_args[position].type;
                        s_Type slot_1 = make_copyable_40rRB6L8(clear_refs_40rRB6L8(s_Type(slot)));
                        maybeCopyOrMove_w5W0tdPX(arg, slot_1, false, ss, _helpers, _here, ctx, module);
                        return s_ArgRationale{};
                    };
                };
            };
        };
    }
    else
    {
        BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

static s_ArgRationale RESOLVE_byTempCopy_xopsxhQJ(s_SolvedNode& callsite, const int position, const s_BorrowCheckPass pass, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target target { callsite.target };
    s_SolvedNode& arg = callsite.items.mutref(position);
    return RESOLVE_byTempCopy_fo5S1QL2(arg, target, position, pass, ss, _current_fn, _helpers, _here, ctx, module);
}

inline static void l_27_85_youcgOTk(const int locid, fu::str& err, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (locid)
    {
        err += ("\n\t    "_fu + explainWhichFn_9BM72ZzG(nested_nWBn0vig(locid, ss), fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn, _helpers, _here, ctx, module));
    };
}

                                #ifndef DEF_Lifetime_each_lPKEgbBSxU1
                                #define DEF_Lifetime_each_lPKEgbBSxU1
inline void Lifetime_each_lPKEgbBS(const s_Lifetime& lifetime, fu::str& err, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_85_youcgOTk(int(((r & 1u) ? 0u : (r >> 1u))), err, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static fu::str ArgRationale_explain_mTuVbHik(const s_ArgRationale r, const s_Target& callee, const s_SolvedNode& arg, const s_Argument& host_arg, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (r == s_ArgRationale_CantTempCopy_FastFn)
        return "Temporary copies not allowed in fast fns."_fu;
    else if (r == s_ArgRationale_CantTempCopy_NonCopiable)
        return x7E_gCeFmDFw(str_N3Nir9Bo(host_arg, ss, _current_fn, _helpers, _here, ctx, module), " is non-copyable: "_fu) + humanizeType_adoPoPLu(arg.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module);
    else if (r == s_ArgRationale_CantTempCopy_HostArg_Ref)
        return x7E_gCeFmDFw(str_N3Nir9Bo(host_arg, ss, _current_fn, _helpers, _here, ctx, module), " is "_fu) + qBAD_3PsDzMvu("ref"_fu);
    else if (r == s_ArgRationale_CantTempCopy_HostArg_Implicit)
        return x7E_gCeFmDFw(str_N3Nir9Bo(host_arg, ss, _current_fn, _helpers, _here, ctx, module), " is "_fu) + qBAD_3PsDzMvu("implicit"_fu);
    else if (r == s_ArgRationale_CantTempCopy_HostArg_MutRef)
        return x7E_gCeFmDFw(str_N3Nir9Bo(host_arg, ss, _current_fn, _helpers, _here, ctx, module), " is a mutref: "_fu) + humanizeType_adoPoPLu(arg.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module);
    else if (r == s_ArgRationale_CantTempCopy_ReturnedFromFn)
        return x7E_gCeFmDFw(x7E_gCeFmDFw(str_N3Nir9Bo(host_arg, ss, _current_fn, _helpers, _here, ctx, module), " is ref-returned from "_fu), str_3AjvLtSQ(GET_emAmLQ3D(callee, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module));
    else
        BUG_V2MSl2gg("Unknown reason."_fu, ss, _helpers, _here, ctx, module);

}

static void validate_urbyleCF(const int i1, s_SolvedNode& callsite, fu::view<s_Argument> host_args, fu::view<s_Lifetime> bck_unwound, const int arg_first, const int arg_last, const int i0, const s_Argument& host_arg0, const s_SolvedNode& arg0, const s_Lifetime& shallow0, const s_Lifetime& unwound0, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Argument& host_arg1 = host_args[i1];
    if (!(has_QTGTghRU(host_arg0.may_invalidate, i1) && has_QTGTghRU(host_arg1.may_invalidate, i0)))
    {
        s_SolvedNode BL_2_v {};
        s_SolvedNode arg1 = (__extension__ (
        {
            const s_SolvedNode& __partcopy_ref = args_GuOB76kF(callsite)[i1];
            BL_2_v = (s_SolvedNode { __partcopy_ref.kind, {}, {}, {}, {}, fu::vec<s_SolvedNode>(__partcopy_ref.items), {}, s_Type(__partcopy_ref.type), s_Target(__partcopy_ref.target) });
        (void)0;}), static_cast<s_SolvedNode&&>(BL_2_v));
        const s_Lifetime& shallow1 = arg1.type.lifetime;
        if (pass == s_BorrowCheckPass_BCK_aar)
        {
            if ((i0 >= arg_first) && (i0 <= arg_last) && (i1 >= arg_first) && (i1 <= arg_last))
            {
                Lifetime_each_PZ8EEGgx(shallow0, i1, host_arg1, arg1, shallow1, i0, host_arg0, arg0, pass, ss, _current_fn, _helpers, _here, ctx, module);
            };
        }
        else
        {
            const s_Lifetime& unwound1 = bck_unwound[i1];
            s_Lifetime inter = Lifetime_inter_k7qB83TF(unwound0, unwound1);
            if (!(!inter))
            {
                if (has_QTGTghRU(host_arg0.may_alias, i1) && has_QTGTghRU(host_arg1.may_alias, i0))
                {
                    if ((has_QTGTghRU(host_arg0.may_invalidate, i1) || (softRiskSafe_y61oaKLn(arg1, ss, _helpers, _here, ctx, module) && !isInvalidatedBy_ZhSsIGRf(shallow1, shallow0, _current_fn))) && (has_QTGTghRU(host_arg1.may_invalidate, i0) || (softRiskSafe_y61oaKLn(arg0, ss, _helpers, _here, ctx, module) && !isInvalidatedBy_ZhSsIGRf(shallow0, shallow1, _current_fn))))
                    {

                        {
                            const s_SolverNotes note = s_SolverNotes_N_AARSoftRisk;
                            if (note & options.break_notes)
                                fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss, _helpers, _here, ctx, module);
                            else
                                _notes |= note;

                        };
                        return;
                    };
                };
                s_ArgRationale noTempCopy0 {};
                s_ArgRationale noTempCopy1 {};
                if ((noTempCopy0 = RESOLVE_byTempCopy_xopsxhQJ(callsite, i0, pass, ss, _current_fn, _helpers, _here, ctx, module)) && (noTempCopy1 = RESOLVE_byTempCopy_xopsxhQJ(callsite, i1, pass, ss, _current_fn, _helpers, _here, ctx, module)))
                {
                    fu::str err = ("At call to "_fu + str_3AjvLtSQ(GET_emAmLQ3D(target_XhSLQ0G3(callsite), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module));
                    err += (((host_args.size() == 2) && (GET_emAmLQ3D(target_XhSLQ0G3(callsite), ss, _helpers, _here, ctx, module).flags & s_Flags_F_OPERATOR)) ? ", both operands alias:\n"_fu : (x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw(", arguments:\n\n\t    "_fu, fu::i64dec((i0 + 1))) + ":\t"_fu), str_N3Nir9Bo(host_arg0, ss, _current_fn, _helpers, _here, ctx, module)) + " and\n\t    "_fu), fu::i64dec((i1 + 1))) + ":\t"_fu), str_N3Nir9Bo(host_arg1, ss, _current_fn, _helpers, _here, ctx, module)) + "\n\n\t    both alias:\n"_fu));
                    Lifetime_each_lPKEgbBS(inter, err, ss, _current_fn, _helpers, _here, ctx, module);
                    fu::str noTempCopy0_1 = ArgRationale_explain_mTuVbHik(noTempCopy0, target_XhSLQ0G3(callsite), arg0, host_arg0, ss, _current_fn, _helpers, _here, ctx, module);
                    fu::str noTempCopy1_1 = ArgRationale_explain_mTuVbHik(noTempCopy1, target_XhSLQ0G3(callsite), arg1, host_arg1, ss, _current_fn, _helpers, _here, ctx, module);
                    err += "\n\tCan't resolve aliasing by a temporary copy:"_fu;
                    err += ("\n\n\t    "_fu + noTempCopy0_1);
                    if (noTempCopy0_1 != noTempCopy1_1)
                        err += ("\n\n\t    "_fu + noTempCopy1_1);

                    _here = args_GuOB76kF(callsite)[i0].token;
                    cannotFailAfterBCK_ONUD9EDZ(err, pass, ss, _helpers, _here, ctx, module);
                };
            };
        };
    };
}

inline static s_SolvedNode TODO_FIX_pop_EGpZPjZ4(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static bool checkLoopStart_4pRAGZnL(const int _loop_start, const int loop_start, const s_SolverState& ss)
{
    if ((_loop_start <= loop_start))
        return _loop_start == loop_start;
    else
    {
        for (int i = 0; i < ss._helpers_data.size(); i++)
        {
            const s_HelpersData& h = ss._helpers_data[i];
            if (h.locals_start == _loop_start)
                return checkLoopStart_4pRAGZnL(h.postdom.parent_loop_start, loop_start, ss);

        };
        return false;
    };
}

inline static bool l_27_70_dF9enuh4(const s_SolvedNode& node, const int read, const int loop_start, const s_SolverState& ss)
{
    int BL_1_v {};
    if ((node.kind == s_kind_call) && isLocal_iPYw45vv(node.target) && ((__extension__ (
    {
        const s_Target& t = node.target;
        BL_1_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
    (void)0;}), BL_1_v) == read))
        return checkLoopStart_4pRAGZnL(node._loop_start, loop_start, ss);
    else
        return false;

}

inline static s_SolvedNode SLOW_find_dJaylMVw(const int read, const int loop_start, const s_SolvedNode& root, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    {
        const s_SolvedNode& node = root;
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_EGpZPjZ4(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_emAmLQ3D(node_1.target, ss, _helpers, _here, ctx, module).solved : node_1);
            const s_SolvedNode& node_3 = ((node_2.kind == s_kind___preceding_ref_arg) ? _current_fn.events.preceding_ref_args[node_2.helpers.index].arg : node_2);
            if (l_27_70_dF9enuh4(node_3, read, loop_start, ss))
                return s_SolvedNode(node_3);
            else
                for (int i = node_3.items.size(); i-- > 0; )
                    stack += s_SolvedNode(node_3.items[i]);
;
        };
    };
    return s_SolvedNode{};
}

static s_SolvedNode SLOW_findByReadID_vT1y0d1w(const int read, const int loop_start, const s_SolvedNode& root, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    s_SolvedNode _0 {};
    return (_0 = SLOW_find_dJaylMVw(read, loop_start, root, ss, _current_fn, _helpers, _here, ctx, module)) ? static_cast<s_SolvedNode&&>(_0) : BUG_V2MSl2gg((x7E_gCeFmDFw((x7E_gCeFmDFw("Cannot find read("_fu, str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(read, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ") in loop("_fu), fu::i64dec(loop_start)) + ")."_fu), ss, _helpers, _here, ctx, module);
}

static fu::str qSTACK_LiSMQr2r(const s_SolvedNode& callsite, const int write, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<s_SolvedNode> args = callsite.items;
    fu::view<s_Argument> host_args = ((callsite.kind == s_kind_call) ? EXT_7eVl0gy6(callsite.target, ss, ctx, module).args : fu::view<s_Argument>{});
    if (args.size() == host_args.size())
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const s_Argument& host_arg = host_args[i];
            if (!(!(host_arg.flags & s_Flags_F_WRITTEN_TO)))
            {
                const s_SolvedNode& arg = args[i];
                if (!(!Lifetime_has_62UtfSbx(arg.type.lifetime, write)))
                {
                    return qSTACK_SjlFsNxw(callsite.target, i, fu::view<s_Target>{}, s_ArgQuery{}, ss, _current_fn, _helpers, _here, ctx, module);
                };
            };
        };
    };
    return ""_fu;
}

inline static void l_27_78_8EF2E4ME(const int read, const int write, const s_SolvedNode& callOrPragma, const int loop_start, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (read)
    {
        if (read < loop_start)
        {
            if (has_QTGTghRU(events_DIxgpMSL(_current_fn).used_in_a_loop, read))
            {
                if (pass == s_BorrowCheckPass_BCK_aar)
                    RESOLVE_byAAR_0CZ0X26h(read, write, true, pass, ss, _current_fn, _helpers, _here, ctx, module);
                else
                {
                    if (!(RESOLVE_byMutvar_EIPPYxvJ(read, pass, ss, _helpers, _here, ctx, module)))
                    {
                        fu::str _0 {};
                        fu::str _1 {};
                        (_1 = (_0 = (((x7E_gCeFmDFw(((x7E_gCeFmDFw("Write to "_fu, str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(write, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ((callOrPragma.kind == s_kind_call) ? x7E_gCeFmDFw(" at call to "_fu, str_3AjvLtSQ(GET_emAmLQ3D(callOrPragma.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) : fu::str{})) + " invalidates the use of "_fu), str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(read, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu) + addr_and_snippet_LWjqt07q(SLOW_findByReadID_vT1y0d1w(read, loop_start, root, ss, _current_fn, _helpers, _here, ctx, module).token, s_CodeFmt{}, fu::view<char>{}, ctx, module)) + "\n\t... on next loop iteration.\n\n\tWritten"_fu), (static_cast<fu::str&&>(_0) + qSTACK_LiSMQr2r(callOrPragma, write, ss, _current_fn, _helpers, _here, ctx, module))), cannotFailAfterBCK_ONUD9EDZ(static_cast<fu::str&&>(_1), pass, ss, _helpers, _here, ctx, module));
                    };
                };
            };
        };
    }
    else
        BUG_V2MSl2gg("bck_trackWrites: invalidates contains non-locals."_fu, ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_Lifetime_each_YwROp2st0Gc
                                #define DEF_Lifetime_each_YwROp2st0Gc
inline void Lifetime_each_YwROp2st(const s_Lifetime& lifetime, const int write, const s_SolvedNode& callOrPragma, const int loop_start, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_78_8EF2E4ME(int(((r & 1u) ? 0u : (r >> 1u))), write, callOrPragma, loop_start, root, pass, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static s_WriteID WriteID_n6jGlT1L(const int locid, const s_TokenIdx& token, const s_BorrowCheckPass pass)
{
    return s_WriteID { (unsigned(locid) | ((pass == s_BorrowCheckPass_BCK_bck) ? tokenHash_fxDaqgfE(token) : 0u)) };
}

inline static void l_27_67_TYb1R5gK(const int read, const int write, const bool trySoft, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (read && (read != write))
        RESOLVE_byAAR_0CZ0X26h(read, write, trySoft, pass, ss, _current_fn, _helpers, _here, ctx, module);

}

                                #ifndef DEF_Lifetime_each_K1PIVQGK9W2
                                #define DEF_Lifetime_each_K1PIVQGK9W2
inline void Lifetime_each_K1PIVQGK(const s_Lifetime& lifetime, const int write, const bool trySoft, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_67_TYb1R5gK(int(((r & 1u) ? 0u : (r >> 1u))), write, trySoft, pass, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static bool RESOLVE_byAAR_NJYkziFr(const int write, const s_Lifetime& reads, const bool trySoft, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    Lifetime_each_K1PIVQGK(reads, write, trySoft, pass, ss, _current_fn, _helpers, _here, ctx, module);
    return true;
}

                                #ifndef DEF_grow_if_oob_RboYuHKWYag
                                #define DEF_grow_if_oob_RboYuHKWYag
inline fu::vec<s_WriteID>& grow_if_oob_RboYuHKW(fu::vec<fu::vec<s_WriteID>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_x3Cx3E_RNH6roQC8Ne
                                #define DEF_x3Cx3E_RNH6roQC8Ne
inline int x3Cx3E_RNH6roQC(const s_WriteID& a, const s_WriteID& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_6K8lyb3J(a._locid_and_hash, b._locid_and_hash)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_add_9xxHJudCWxd
                                #define DEF_add_9xxHJudCWxd
inline bool add_9xxHJudC(fu::vec<s_WriteID>& keys, const s_WriteID& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_RNH6roQC(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, s_WriteID(item));
    return true;
}
                                #endif

inline static void l_27_79_guYxobzN(const int invalidatee, const int write, const s_WriteID& writeID, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::vec<s_WriteID>& set = grow_if_oob_RboYuHKW(events_DIxgpMSL(_current_fn).snap.invalidated_by, invalidatee);
    if (pass == s_BorrowCheckPass_BCK_bck)
    {
        if (!set)
            set += s_WriteID(writeID);

    }
    else if (int(writeID._locid_and_hash) == write)
        add_9xxHJudC(set, writeID);
    else
        BUG_V2MSl2gg("AAR: set::add wont dedupe"_fu, ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_Lifetime_each_LQD3sRKDhLf
                                #define DEF_Lifetime_each_LQD3sRKDhLf
inline void Lifetime_each_LQD3sRKD(const s_Lifetime& lifetime, const int write, const s_WriteID& writeID, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_79_guYxobzN(int(((r & 1u) ? 0u : (r >> 1u))), write, writeID, pass, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

inline static void l_27_77_Imb951hU(const int write, const s_Lifetime& region, const s_SolvedNode& callOrPragma, const int loop_start, const bool OPTI_isLoop, const bool OPTI_hasPRA, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!write))
    {
        s_Lifetime invalidates { unless_oob_pcvjJeir(flow_qlrB8xCs(_current_fn).rg_invalidates, write) };
        if (Lifetime_has_62UtfSbx(invalidates, write))
            BUG_V2MSl2gg(x7E_gCeFmDFw("flow.invalidates[write].has(write): "_fu, str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(write, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
        else
        {
            if (OPTI_isLoop)
            {
                Lifetime_each_YwROp2st(invalidates, write, callOrPragma, loop_start, root, pass, ss, _current_fn, _helpers, _here, ctx, module);
            };
            const s_WriteID writeID = WriteID_n6jGlT1L(write, callOrPragma.token, pass);
            if (OPTI_hasPRA)
            {
                s_Lifetime all_written { (Lifetime_getRefLocid_unlessStatic_yQzp6dYE(region, ss, _helpers, _here, ctx, module) ? region : (*(const s_Lifetime*)fu::NIL)) };

                {
                    Lifetime_add_PKO62rQ1(all_written, unless_oob_pcvjJeir(flow_qlrB8xCs(_current_fn).rg_parents, write));
                    Lifetime_add_PKO62rQ1(all_written, unless_oob_pcvjJeir(flow_qlrB8xCs(_current_fn).rg_invalidates, write));
                };
                int w = -1;
                for (int i = 0; i < _current_fn.events.preceding_ref_args.size(); i++)
                {
                    s_PrecedingRefArg& pra = _current_fn.events.preceding_ref_args.mutref(i);
                    if (pra.w < 0)
                    {
                        if (!((w >= 0)))
                            BUG_V2MSl2gg("preceding_ref_args: No leading .w position."_fu, ss, _helpers, _here, ctx, module);

                    }
                    else
                        w = pra.w;

                    const int r = pra.r;
                    const s_Lifetime& all_written_1 = (all_written ? all_written : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
                    const s_Lifetime& bound = pra.arg.type.lifetime;
                    s_Lifetime inter = Lifetime_inter_k7qB83TF(bound, all_written_1);
                    if (!(!inter))
                    {
                        if (((pass == s_BorrowCheckPass_BCK_aar) ? !RESOLVE_byAAR_NJYkziFr(write, inter, softRiskSafe_y61oaKLn(pra.arg, ss, _helpers, _here, ctx, module), pass, ss, _current_fn, _helpers, _here, ctx, module) : !!RESOLVE_byTempCopy_fo5S1QL2(pra.arg, pra.target, r, pass, ss, _current_fn, _helpers, _here, ctx, module)))
                        {
                            const s_PrecedingRefArg& pra_1 = _current_fn.events.preceding_ref_args[i];
                            _here = pra_1.callsite_token;
                            fu::str _0 {};
                            fu::str _1 {};
                            (_1 = (_0 = (x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw((((x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("At call to "_fu, str_3AjvLtSQ(GET_emAmLQ3D(pra_1.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ", binding for "_fu), str_N3Nir9Bo(EXT_7eVl0gy6(pra_1.target, ss, ctx, module).args[r], ss, _current_fn, _helpers, _here, ctx, module)) + " (arg #"_fu), fu::i64dec(r)) + ") at "_fu) + addr_and_snippet_LWjqt07q(pra_1.arg.token, s_CodeFmt{}, fu::view<char>{}, ctx, module)) + "\n\t... invalidated by subsequent write to "_fu), str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(write, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " upon evaluation of "_fu), str_N3Nir9Bo(EXT_7eVl0gy6(pra_1.target, ss, ctx, module).args[w], ss, _current_fn, _helpers, _here, ctx, module)) + " (arg #"_fu), fu::i64dec(w)) + ") at "_fu), (static_cast<fu::str&&>(_0) + RWEvent_stack_ACN7w3wD(writeID, root, ss, _current_fn, _helpers, _here, ctx, module))), cannotFailAfterBCK_ONUD9EDZ(static_cast<fu::str&&>(_1), pass, ss, _helpers, _here, ctx, module));
                        };
                    };
                };
            };
            Lifetime_each_LQD3sRKD(invalidates, write, writeID, pass, ss, _current_fn, _helpers, _here, ctx, module);
        };
    };
}

                                #ifndef DEF_Lifetime_each_HIfWyvSbalk
                                #define DEF_Lifetime_each_HIfWyvSbalk
inline void Lifetime_each_HIfWyvSb(const s_Lifetime& lifetime, const s_SolvedNode& callOrPragma, const int loop_start, const bool OPTI_isLoop, const bool OPTI_hasPRA, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parseRegion(offset, chars);
        l_27_77_Imb951hU(int(((r & 1u) ? 0u : (r >> 1u))), s_Lifetime { fu::slice(chars, offset0, offset) }, callOrPragma, loop_start, OPTI_isLoop, OPTI_hasPRA, root, pass, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static void bck_trackWrites_3Mmv0NtF(const s_SolvedNode& callOrPragma, const s_Lifetime& lifetime, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int loop_start = (callOrPragma._loop_start ? callOrPragma._loop_start : BUG_V2MSl2gg("bck_trackWrites: _loop_start not set on callsite."_fu, ss, _helpers, _here, ctx, module));
    const bool OPTI_isLoop = ((loop_start != 1) ? !!events_DIxgpMSL(_current_fn).used_in_a_loop : false);
    const bool OPTI_hasPRA = !!events_DIxgpMSL(_current_fn).preceding_ref_args;
    Lifetime_each_HIfWyvSb(lifetime, callOrPragma, loop_start, OPTI_isLoop, OPTI_hasPRA, root, pass, ss, _current_fn, _helpers, _here, ctx, module);
}

static void bck_call_ZjeKsvzk(s_SolvedNode& callsite, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (!args_GuOB76kF(callsite))
    {
        if (GET_emAmLQ3D(target_XhSLQ0G3(callsite), ss, _helpers, _here, ctx, module).kind == s_kind_var)
            bck_trackRead_v8wqpqBM(callsite, root, pass, ss, _current_fn, _helpers, _here, ctx, module);

    }
    else
    {
        const bool RTL = isRTL_N4q4L7uF(GET_emAmLQ3D(target_XhSLQ0G3(callsite), ss, _helpers, _here, ctx, module));
        fu::vec<s_Argument> host_args { EXT_7eVl0gy6(target_XhSLQ0G3(callsite), ss, ctx, module).args };

        {
            const int pra_len0 = _current_fn.events.preceding_ref_args.size();
            int pra_first = -1;
            argsForward_PsLVo8St(RTL, host_args, 0, callsite, pra_first, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            for (int i = 0; i < args_GuOB76kF(callsite).size(); i++)
            {
                s_SolvedNode& arg = args_GuOB76kF(callsite).mutref(i);
                if (arg.kind == s_kind___preceding_ref_arg)
                {
                    s_PrecedingRefArg& pra = _current_fn.events.preceding_ref_args.mutref(arg.helpers.index);
                    if ((pra.target == target_XhSLQ0G3(callsite)) && (pra.r == i))
                        std::swap(arg, pra.arg);
                    else
                        BUG_V2MSl2gg("preceding_ref_args got messed up"_fu, ss, _helpers, _here, ctx, module);

                };
            };
            _current_fn.events.preceding_ref_args.shrink(pra_len0);
        };
        s_Lifetime bck_writes {};
        int mutref_first = -1;
        int mutref_last = -1;
        int ref_first = -1;
        int ref_last = -1;
        fu::vec<s_Lifetime> bck_unwound {};
        int arg_first = -1;
        int arg_last = -1;
        for (int i0 = 0; i0 < args_GuOB76kF(callsite).size(); i0++)
        {
            s_Argument host_arg0 { host_args[i0] };
            s_Type expect { host_arg0.type };
            if (is_ref_gBx1AgSx(expect))
            {
                if (!bck_unwound)
                {
                    if ((mutref_first >= 0) || ((ref_first >= 0) && is_mutref_hoadAQC0(expect, _here, ctx)))
                    {
                        bck_unwound.resize(args_GuOB76kF(callsite).size());
                        for (int i0_1 = ref_first; (i0_1 <= ref_last); i0_1++)
                        {
                            const s_Lifetime& unwound = (bck_unwound.mutref(i0_1) = Lifetime_unwind_2lvWiRLJ(args_GuOB76kF(callsite)[i0_1].type.lifetime, 0, true, ss, _helpers, _here, ctx, module));
                            Lifetime_each_h9dRwZZH(unwound, arg_first, arg_last, i0_1);
                        };
                    };
                };
                if (bck_unwound)
                {
                    s_SolvedNode BL_18_v {};
                    s_SolvedNode arg0 = (__extension__ (
                    {
                        const s_SolvedNode& __partcopy_ref = args_GuOB76kF(callsite)[i0];
                        BL_18_v = (s_SolvedNode { __partcopy_ref.kind, {}, {}, {}, {}, fu::vec<s_SolvedNode>(__partcopy_ref.items), {}, s_Type(__partcopy_ref.type), s_Target(__partcopy_ref.target) });
                    (void)0;}), static_cast<s_SolvedNode&&>(BL_18_v));
                    s_Lifetime shallow0 { arg0.type.lifetime };
                    const s_Lifetime& unwound0 = (bck_unwound.mutref(i0) = Lifetime_unwind_2lvWiRLJ(shallow0, 0, true, ss, _helpers, _here, ctx, module));
                    Lifetime_each_Wg3KLXIU(unwound0, arg_first, arg_last, i0);
                    if (is_mutref_hoadAQC0(expect, _here, ctx))
                    {
                        for (int i = ref_first; (i <= ref_last); i++)
                        {
                            if (is_ref_gBx1AgSx(host_args[i].type))
                                validate_urbyleCF(i, callsite, host_args, bck_unwound, arg_first, arg_last, i0, host_arg0, arg0, shallow0, unwound0, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                        };
                    }
                    else
                    {
                        for (int i = mutref_first; (i <= mutref_last); i++)
                        {
                            if (is_mutref_hoadAQC0(host_args[i].type, _here, ctx))
                                validate_urbyleCF(i, callsite, host_args, bck_unwound, arg_first, arg_last, i0, host_arg0, arg0, shallow0, unwound0, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                        };
                    };
                };

                {
                    if (ref_first < 0)
                        ref_first = i0;

                    ref_last = i0;
                };
                if (is_mutref_hoadAQC0(expect, _here, ctx))
                {
                    if (mutref_first < 0)
                        mutref_first = i0;

                    mutref_last = i0;
                    if (host_arg0.flags & s_Flags_F_WRITTEN_TO)
                    {
                        const s_SolvedNode& arg0 = args_GuOB76kF(callsite)[i0];
                        if (is_mutref_hoadAQC0(host_arg0.type, _here, ctx))
                        {
                            if (is_mutref_hoadAQC0(arg0.type, _here, ctx))
                            {
                                Lifetime_add_PKO62rQ1(bck_writes, arg0.type.lifetime);
                            }
                            else
                                BUG_V2MSl2gg((qID_3PsDzMvu(human_nPzEVTlg(host_arg0.name, ss, _helpers, _here, ctx, module)) + ": host_arg0.written but !arg.is_mutref"_fu), ss, _helpers, _here, ctx, module);

                        }
                        else
                            BUG_V2MSl2gg((qID_3PsDzMvu(human_nPzEVTlg(host_arg0.name, ss, _helpers, _here, ctx, module)) + ": host_arg0.written but !host_arg0.is_mutref"_fu), ss, _helpers, _here, ctx, module);

                    };
                };
            };
        };
        if (bck_writes)
        {
            _here = callsite.token;
            bck_trackWrites_3Mmv0NtF(callsite, bck_writes, root, pass, ss, _current_fn, _helpers, _here, ctx, module);
        };
    };
}

static void bck_loop_Xfu9NLLE(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    s_SolvedNode* _0;
    (_0 = &(items.mutref(0)), bck_node_4MFkhCFQ(*_0, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
    for (int i = 1; i < items.size(); i++)
    {
        s_SolvedNode* _1;
        (_1 = &(items.mutref(i)), bck_node_4MFkhCFQ(*_1, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
    };
    const s_HelpersData* BL_3_v;
    int _2 {};
    const int parent_loop_start = ((_2 = (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_3_v = &(ss._helpers_data[h.index]);
    (void)0;}), *BL_3_v).postdom.parent_loop_start) ? _2 : BUG_V2MSl2gg("bck_loop: parent_loop_start not set."_fu, ss, _helpers, _here, ctx, module));
    clear_quDuppI6(_current_fn.events.used_in_a_loop, parent_loop_start);
}

static void visit_C6mdHS65(const s_Lifetime& lifetime, s_Lifetime& result, const bool maybeOutOfOrder)
{
    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parseRegion(offset, chars);

        { {

            {
                const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
                if (locid)
                    goto BL_3;

            };
            continue;
          } BL_3:;
        };
        if (maybeOutOfOrder)
        {
            result = Lifetime_union_doHetu2L(result, s_Lifetime { fu::slice(chars, offset0, offset) });
        }
        else
            result.uni0n += fu::get_view(chars, offset0, offset);

    };
}

                                #ifndef DEF_Lifetime_process_DINxkikkTx3
                                #define DEF_Lifetime_process_DINxkikkTx3
inline s_Lifetime Lifetime_process_DINxkikk(const s_Lifetime& lifetime)
{
    /*MOV*/ s_Lifetime result {};
    const bool maybeOutOfOrder = false;
    visit_C6mdHS65(lifetime, result, maybeOutOfOrder);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_grow_if_oob_8tJoRZmSJG8
                                #define DEF_grow_if_oob_8tJoRZmSJG8
inline fu::vec<int>& grow_if_oob_8tJoRZmS(fu::vec<fu::vec<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

inline static void l_27_74_gds8mrby(const int right, const s_Type& t_left, const int left, s_Lifetime& parents, s_Lifetime& siblings, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!right))
    {
        if (!right)
            BUG_V2MSl2gg("Reference_trackLocalRef: right has non-locals."_fu, ss, _helpers, _here, ctx, module);
        else
        {
            const s_Type& t_right = GET_emAmLQ3D(nested_nWBn0vig(right, ss), ss, _helpers, _here, ctx, module).type;
            if (!(type_mayPointInto_Wo90s0uN(t_right.vtype, t_left.vtype, ss, _helpers, _here, ctx, module)))
                BUG_V2MSl2gg(x7E_gCeFmDFw((x7E_gCeFmDFw("type_mayPointInto fails for "_fu, str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(left, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " := "_fu), str_3AjvLtSQ(GET_emAmLQ3D(nested_nWBn0vig(right, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        };
        int _0 {};
        (_0 = left, add_jzOp5jol(grow_if_oob_8tJoRZmS(flow_qlrB8xCs(_current_fn).rg_children, right), _0));
        Lifetime_add_PKO62rQ1(parents, unless_oob_pcvjJeir(flow_qlrB8xCs(_current_fn).rg_parents, right));
        Lifetime_add_PKO62rQ1(siblings, unless_oob_pcvjJeir(flow_qlrB8xCs(_current_fn).rg_invalidates, right));
        if (has_QTGTghRU(flow_qlrB8xCs(_current_fn).is_arg, right))
        {
            add_U5p6nLOf(flow_qlrB8xCs(_current_fn).is_arg, left);
            add_jzOp5jol(grow_if_oob_8tJoRZmS(flow_qlrB8xCs(_current_fn).arg_parents, left), right);
        };
    };
}

                                #ifndef DEF_Lifetime_each_ORIkxAFAk98
                                #define DEF_Lifetime_each_ORIkxAFAk98
inline void Lifetime_each_ORIkxAFA(const s_Lifetime& lifetime, const s_Type& t_left, const int left, s_Lifetime& parents, s_Lifetime& siblings, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_74_gds8mrby(int(((r & 1u) ? 0u : (r >> 1u))), t_left, left, parents, siblings, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

inline static void l_27_75_r9OZLms8(const int sibling, const s_Type& t_left, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!sibling)
        BUG_V2MSl2gg("Reference_trackLocalRef: siblings has non-locals."_fu, ss, _helpers, _here, ctx, module);
    else
    {
        Lifetime_add_PKO62rQ1(grow_if_oob_UaKCknOx(flow_qlrB8xCs(_current_fn).rg_invalidates, sibling), t_left.lifetime);
    };
}

                                #ifndef DEF_Lifetime_each_6LZr0uphMe1
                                #define DEF_Lifetime_each_6LZr0uphMe1
inline void Lifetime_each_6LZr0uph(const s_Lifetime& lifetime, const s_Type& t_left, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_75_r9OZLms8(int(((r & 1u) ? 0u : (r >> 1u))), t_left, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

inline static void l_27_76_nFFBHTy2(const int parent, const s_Type& t_left, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!parent)
        BUG_V2MSl2gg("Reference_trackLocalRef: parents has non-locals."_fu, ss, _helpers, _here, ctx, module);
    else
    {
        Lifetime_add_PKO62rQ1(grow_if_oob_UaKCknOx(flow_qlrB8xCs(_current_fn).rg_invalidates, parent), t_left.lifetime);
    };
}

                                #ifndef DEF_Lifetime_each_33TqPKuHgf6
                                #define DEF_Lifetime_each_33TqPKuHgf6
inline void Lifetime_each_33TqPKuH(const s_Lifetime& lifetime, const s_Type& t_left, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_76_nFFBHTy2(int(((r & 1u) ? 0u : (r >> 1u))), t_left, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static void Reference_trackLocalRef_J3sxlpCy(const s_Type& t_left, const s_Lifetime& right, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int left = Lifetime_getRefLocid_unlessStatic_yQzp6dYE(t_left.lifetime, ss, _helpers, _here, ctx, module);
    if (!(!left))
    {
        s_Lifetime right_1 = Lifetime_process_DINxkikk(right);
        s_Lifetime parents {};
        s_Lifetime siblings {};
        Lifetime_add_PKO62rQ1(parents, right_1);
        Lifetime_each_ORIkxAFA(right_1, t_left, left, parents, siblings, ss, _current_fn, _helpers, _here, ctx, module);
        if (siblings)
        {
            if (Lifetime_has_62UtfSbx(siblings, left))
                BUG_V2MSl2gg("siblings.has(left)"_fu, ss, _helpers, _here, ctx, module);
            else
            {
                s_Lifetime* _0;
                (!*(_0 = &(grow_if_oob_UaKCknOx(flow_qlrB8xCs(_current_fn).rg_invalidates, left))) ? *_0 : BUG_V2MSl2gg("rg_invalidates already set"_fu, ss, _helpers, _here, ctx, module)) = s_Lifetime(siblings);
                Lifetime_each_6LZr0uph(siblings, t_left, ss, _current_fn, _helpers, _here, ctx, module);
            };
        };
        if (parents)
        {
            s_Lifetime* _1;
            (!*(_1 = &(grow_if_oob_UaKCknOx(flow_qlrB8xCs(_current_fn).rg_parents, left))) ? *_1 : BUG_V2MSl2gg("rg_parents already set"_fu, ss, _helpers, _here, ctx, module)) = s_Lifetime(parents);
            Lifetime_each_33TqPKuH(parents, t_left, ss, _current_fn, _helpers, _here, ctx, module);
        };
    };
}

                                #ifndef DEF_unless_oob_HinAk6KESdj
                                #define DEF_unless_oob_HinAk6KESdj
inline const fu::vec<s_WriteID>& unless_oob_HinAk6KE(fu::view<fu::vec<s_WriteID>> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const fu::vec<s_WriteID>*)fu::NIL);

}
                                #endif

static void bck_trackInit_mEDCuZDH(const s_Target& target, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int index = int(unsigned(((target._packed >> 40ull) & 0xfffffull)));
    if (!(!index))
    {
        if (unless_oob_HinAk6KE(events_DIxgpMSL(_current_fn).snap.invalidated_by, index))
        {
            BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
        };
    };
}

static void bck_let_srQeXfzc(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    s_SolvedNode* _0;
    (_0 = &(node.items.mutref(LET_INIT)), bck_node_4MFkhCFQ(*_0, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
    if (is_ref_gBx1AgSx(node.type) && !willPassByValue_G82rXa1z(GET_emAmLQ3D(node.target, ss, _helpers, _here, ctx, module), _here, ctx))
    {
        if (node.flags & s_Flags_F_ARG)
            BUG_V2MSl2gg("bck_let: Found an argument!"_fu, ss, _helpers, _here, ctx, module);
        else
        {
            const s_SolvedNode& init = node.items[LET_INIT];
            if (is_ref_gBx1AgSx(init.type))
            {
                Reference_trackLocalRef_J3sxlpCy(GET_emAmLQ3D(node.target, ss, _helpers, _here, ctx, module).type, init.type.lifetime, ss, _current_fn, _helpers, _here, ctx, module);
            }
            else
                BUG_V2MSl2gg("What!"_fu, ss, _helpers, _here, ctx, module);

        };
    };
    bck_trackInit_mEDCuZDH(node.target, ss, _current_fn, _helpers, _here, ctx, module);
}

inline static void Events_restore_28xiDukK(fu::vec<fu::vec<s_WriteID>>& dest, fu::view<fu::vec<s_WriteID>> src, const int parent_loop_start)
{
    if (dest.size() > parent_loop_start)
        dest.shrink(parent_loop_start);

    if (src.size() > parent_loop_start)
    {
        dest.grow(parent_loop_start);
        dest += fu::get_view(src, parent_loop_start);
    };
}

static void Events_restore_3uedat36(s_Events& events, const s_EventsSnap& restore, const int parent_loop_start, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!parent_loop_start)
        BUG_9SZtRVJ0("Events_restore: no parent_loop_start, cant decide which events need to be survive"_fu, _here, ctx);
    else if (parent_loop_start == 1)
        events.snap = restore;
    else
        Events_restore_28xiDukK(events.snap.invalidated_by, restore.invalidated_by, parent_loop_start);

}

                                #ifndef DEF_add_hYkgE2puZFg
                                #define DEF_add_hYkgE2puZFg
inline void add_hYkgE2pu(fu::vec<s_WriteID>& a, fu::view<s_WriteID> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_WriteID& X = a[x];
        const s_WriteID& Y = b[y];
        const int cmp = x3Cx3E_RNH6roQC(X, Y);
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
        a += fu::get_view(b, y);

}
                                #endif

inline static void Events_merge_LYYyJG4H(fu::vec<fu::vec<s_WriteID>>& dest, fu::view<fu::vec<s_WriteID>> src)
{
    if (dest.size() < src.size())
        dest.grow(src.size());

    for (int i = 0; i < src.size(); i++)
    {
        fu::view<s_WriteID> src_1 = src[i];
        if (src_1)
            add_hYkgE2pu(dest.mutref(i), src_1);

    };
}

static void Events_merge_jZy25MzM(s_EventsSnap& events, const s_EventsSnap& snap)
{
    Events_merge_LYYyJG4H(events.invalidated_by, snap.invalidated_by);
}

static void bck_if_7L5fLEC4(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    s_SolvedNode& cond = items.mutref(0);
    bck_node_4MFkhCFQ(cond, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    const s_StaticEval ae_cond = tryAbstractEvalAsBool_OmcawlSX(cond, false, ss, _current_fn, _helpers, _here, ctx, module);
    if (ae_cond)
    {
        s_SolvedNode& cons = items.mutref(((ae_cond == s_StaticEval_SE_True) ? 1 : 2));
        bck_node_4MFkhCFQ(cons, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        node = createBlock_IBT2J1Wh(s_SolvedNode(items[0]), s_SolvedNode(cons), ss, _helpers, _here, ctx, module);
    }
    else
    {
        s_EventsSnap e_Restore_AfterCond { _current_fn.events.snap };
        s_SolvedNode* _0;
        (_0 = &(items.mutref(1)), bck_node_4MFkhCFQ(*_0, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
        s_EventsSnap e_Merge_AfterCons { _current_fn.events.snap };
        Events_restore_3uedat36(_current_fn.events, e_Restore_AfterCond, node._loop_start, _here, ctx);
        s_SolvedNode* _1;
        (_1 = &(items.mutref(2)), bck_node_4MFkhCFQ(*_1, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
        Events_merge_jZy25MzM(_current_fn.events.snap, e_Merge_AfterCons);
    };
}

static void bck_and_or_olrwT4xW(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::vec<s_SolvedNode>& items = node.items;
    for (int i = 0; i < items.size(); i++)
    {
        s_SolvedNode& expr = items.mutref(i);
        bck_node_4MFkhCFQ(expr, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        const s_StaticEval ae_expr = tryAbstractEvalAsBool_OmcawlSX(expr, (i == (items.size() - 1)), ss, _current_fn, _helpers, _here, ctx, module);
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
                /*MOV*/ s_SolvedNode cond = steal_LyWpwxOa(expr);
                items.splice(i, 1);
                s_SolvedNode& cons = items.mutref(i--);
                cons = createBlock_IBT2J1Wh(static_cast<s_SolvedNode&&>(cond), s_SolvedNode(cons), ss, _helpers, _here, ctx, module);
            };
        };
    };
    if (node.items.size() < 2)
        node = only_GN4mikiy(node.items);

}

static void bck_not_iIkOrbrw(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    s_SolvedNode& expr = only_Iovd0TM6(node.items);
    bck_node_4MFkhCFQ(expr, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    const s_StaticEval ae_expr = tryAbstractEvalAsBool_OmcawlSX(expr, false, ss, _current_fn, _helpers, _here, ctx, module);
    if (ae_expr)
        node.type.vfacts |= ((ae_expr == s_StaticEval_SE_True) ? s_VFacts_AlwaysFalse : s_VFacts_AlwaysTrue);

}

static void bck_block_RNDATnh5(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::vec<s_SolvedNode> defers {};
    fu::vec<s_SolvedNode>& items = node.items;
    for (int i = 0; i < items.size(); i++)
    {
        s_SolvedNode& stmt = items.mutref(i);
        if (stmt.kind == s_kind_defer)
            defers += s_SolvedNode(only_GN4mikiy(stmt.items));
        else
            bck_node_4MFkhCFQ(stmt, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

        if (is_never_FfV8Zuj5(stmt.type))
        {
            if (stmt.kind == s_kind_defer)
                BUG_V2MSl2gg("bck, block: defer.is_never"_fu, ss, _helpers, _here, ctx, module);
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
    const s_HelpersData* BL_10_v;
    Events_merge_jZy25MzM(_current_fn.events.snap, (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_10_v = &(ss._helpers_data[h.index]);
    (void)0;}), *BL_10_v).postevt);
    for (int i_1 = defers.size(); i_1-- > 0; )
        bck_node_4MFkhCFQ(defers.mutref(i_1), root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

}

static void bck_node_4MFkhCFQ(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_kind k = node.kind;
    if (k == s_kind_call)
        bck_call_ZjeKsvzk(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_loop)
        bck_loop_Xfu9NLLE(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_letdef)
    {
        std::swap(GET_mut_uE8Nb6mH(node.target, ss, module).solved, node);
        bck_node_4MFkhCFQ(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        std::swap(GET_mut_uE8Nb6mH(node.target, ss, module).solved, node);
    }
    else if (k == s_kind_let)
        bck_let_srQeXfzc(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_if)
    {
        bck_if_7L5fLEC4(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    }
    else if ((k == s_kind_and) || (k == s_kind_or))
        bck_and_or_olrwT4xW(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_not)
        bck_not_iIkOrbrw(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_block)
        bck_block_RNDATnh5(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if ((k == s_kind_root) || (k == s_kind_jump) || (k == s_kind_try) || (k == s_kind_copy) || (k == s_kind_move) || (k == s_kind_arrlit))
    {
        fu::view_mut<s_SolvedNode> items = node.items;
        for (int i = 0; i < items.size(); i++)
        {
            s_SolvedNode* _0;
            (_0 = &(items.mutref(i)), bck_node_4MFkhCFQ(*_0, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
        };
        if (k == s_kind_jump)
        {
            const s_HelpersData* BL_13_v;
            if ((__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_13_v = &(ss._helpers_data[h.index]);
            (void)0;}), *BL_13_v).postevt)
            {
                s_HelpersData* BL_15_v;
                Events_merge_jZy25MzM((__extension__ (
                {
                    const s_Helpers& h = node.helpers;
                    BL_15_v = &(ss._helpers_data.mutref(h.index));
                (void)0;}), *BL_15_v).postevt, _current_fn.events.snap);
            }
            else
            {
                s_HelpersData* BL_17_v;
                (__extension__ (
                {
                    const s_Helpers& h = node.helpers;
                    BL_17_v = &(ss._helpers_data.mutref(h.index));
                (void)0;}), *BL_17_v).postevt = s_EventsSnap(_current_fn.events.snap);
            };
            const s_HelpersData* BL_18_v;
            int _1 {};
            Events_restore_3uedat36(_current_fn.events, (*(const s_EventsSnap*)fu::NIL), ((_1 = (__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_18_v = &(ss._helpers_data[h.index]);
            (void)0;}), *BL_18_v).postdom.parent_loop_start) ? _1 : BUG_V2MSl2gg("bck_node(jump): helpers.postdom.parent_loop_start not set."_fu, ss, _helpers, _here, ctx, module)), _here, ctx);
        };
    }
    else if (k == s_kind_pragma)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            s_SolvedNode& item = node.items.mutref(i);
            bck_node_4MFkhCFQ(item, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            if (is_mutref_hoadAQC0(item.type, _here, ctx))
            {
                _here = item.token;
                bck_trackWrites_3Mmv0NtF(node, item.type.lifetime, root, pass, ss, _current_fn, _helpers, _here, ctx, module);
            };
        };
    }
    else if (node.items)
        cannotFailAfterBCK_ONUD9EDZ((x7E_gCeFmDFw("TODO: bck_node(non-empty "_fu, str_ZGqrvxJv(k)) + ")."_fu), pass, ss, _helpers, _here, ctx, module);

}

static void PASS_borrowCheck_KsDQFJuI(s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (pass == s_BorrowCheckPass_BCK_aar)
    {
        s_Lifetime consts {};
        s_Lifetime refs {};
        _current_fn_eachArg_FWD_dNq01a0E(consts, refs, ss, _current_fn, _helpers, _here, ctx, module);
        int refs_len = 0;
        Lifetime_each_09jOV7RX(refs, refs_len, ss, _helpers, _here, ctx, module);
        if (!refs_len || ((refs_len == 1) && !consts))
            return;
        else
        {
            clear_3uWX1Ibs(_current_fn.flow);
            clear_gYmR7DqI(_current_fn.events);
            _current_fn_eachArg_FWD_CmVM9TfR(ss, _current_fn, _helpers, _here, ctx, module);
            s_Flow& flow = _current_fn.flow;
            Lifetime_each_fN1FnPvG(refs, consts, refs_len, flow, ss, _helpers, _here, ctx, module);
            if (refs)
            {
                Lifetime_each_UZalbBLJ(consts, refs, flow, ss, _helpers, _here, ctx, module);
            };
            if (refs)
            {
                _current_fn.events = s_Events{};
            }
            else
                BUG_V2MSl2gg("Wasting time on AAR without ref args."_fu, ss, _helpers, _here, ctx, module);

        };
    };
    bck_node_4MFkhCFQ(root, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

static void runAllPasses_PccI5bd0(s_SolvedNode& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (_current_fn)
    {
        if (currentFn_mustBecomeInline_wWAsH7tM(_current_fn))
            return;
        else if (GET_emAmLQ3D(_current_fn.out.target, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_Debug_AllPassesComplete)
            BUG_V2MSl2gg("runAllPasses: All passes already complete."_fu, ss, _helpers, _here, ctx, module);

    };
    const s_HelpersData* BL_4_v;
    test_node_iOkpABYf(node, (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_4_v = &(ss._helpers_data[h.index]);
    (void)0;}), *BL_4_v).pass, ss, _current_fn, _helpers, _here, ctx, module);
    s_HelpersData* BL_5_v;
    (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_5_v = &(ss._helpers_data.mutref(h.index));
    (void)0;}), *BL_5_v).pass = s_SolverPass_RelaxMut;
    if (_current_fn.relaxed.var_usage)
        BUG_V2MSl2gg("_current_fn.var_usage not empty before propagateType."_fu, ss, _helpers, _here, ctx, module);
    else if (_current_fn.postdom)
        BUG_V2MSl2gg("_current_fn.postdom not empty before propagateType."_fu, ss, _helpers, _here, ctx, module);
    else
    {
        Postdom_resetAtFnEnd_T7PPyDMa(_current_fn.postdom);
        propagateType_0IjBDgsa(node, s_Type(node.type), RELAX_before_bck, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        const s_HelpersData* BL_9_v;
        test_node_iOkpABYf(node, (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_9_v = &(ss._helpers_data[h.index]);
        (void)0;}), *BL_9_v).pass, ss, _current_fn, _helpers, _here, ctx, module);
        s_HelpersData* BL_10_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_10_v = &(ss._helpers_data.mutref(h.index));
        (void)0;}), *BL_10_v).pass = s_SolverPass_BorrowCheck;
        PASS_borrowCheck_KsDQFJuI(node, s_BorrowCheckPass_BCK_bck, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        s_HelpersData* BL_11_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_11_v = &(ss._helpers_data.mutref(h.index));
        (void)0;}), *BL_11_v).pass = s_SolverPass_ArgumentsAtRisk;
        _current_fn.TODO_FIX_children = _current_fn.flow.rg_children;
        PASS_borrowCheck_KsDQFJuI(node, s_BorrowCheckPass_BCK_aar, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        const s_HelpersData* BL_12_v;
        test_node_iOkpABYf(node, (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_12_v = &(ss._helpers_data[h.index]);
        (void)0;}), *BL_12_v).pass, ss, _current_fn, _helpers, _here, ctx, module);
        s_HelpersData* BL_13_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_13_v = &(ss._helpers_data.mutref(h.index));
        (void)0;}), *BL_13_v).pass = s_SolverPass_RelaxCopyResize;
        _current_fn.effects.fx_mask = s_FxMask{};
        _current_fn.relaxed = s_Usage{};
        if (_current_fn.postdom.parent_loop_start == 1)
        {
            Postdom_resetAtFnEnd_T7PPyDMa(_current_fn.postdom);
            propagateType_0IjBDgsa(node, s_Type(node.type), RELAX_all, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            const s_HelpersData* BL_15_v;
            test_node_iOkpABYf(node, (__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_15_v = &(ss._helpers_data[h.index]);
            (void)0;}), *BL_15_v).pass, ss, _current_fn, _helpers, _here, ctx, module);
            if (_current_fn)
            {
                if (currentFn_mustBecomeInline_wWAsH7tM(_current_fn))
                    BUG_V2MSl2gg("runAllPasses: currentFn_mustBecomeInline after all."_fu, ss, _helpers, _here, ctx, module);
                else
                    GET_mut_uE8Nb6mH(_current_fn.out.target, ss, module).status |= s_SolverStatus_SS_Debug_AllPassesComplete;

            };
        }
        else
            BUG_V2MSl2gg("_current_fn.loop_start leak."_fu, ss, _helpers, _here, ctx, module);

    };
}

static s_SolvedNode solveBlock_Rlp5uE9C(const s_Node& node, const s_Type& type, const int fnbody_of, const s_HelpersMask mask, const fu::str& id, const int locals_start, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    fu::vec<s_Node> nodes = ((node.kind == s_kind_block) ? fu::vec<s_Node>(node.items) : fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(node) } });
    const fu::str& id_1 = (id ? id : ((node.kind == s_kind_block) ? node.value : (*(const fu::str*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
    fu_DEFER(if (!s_HelpersMask((mask & s_HelpersMask_HM_LoopPreheader)))
        Scope_pop_5cTQENbb(ss._scope, scope0, _helpers););
    const int helpers_idx = _helpers.size();
    int BL_2_v {};
    push_lQ0cD0js(s_HelpersData { (fnbody_of ? localfn_PcV0GIQj(fnbody_of, module) : s_Target{}), s_SolverPass{}, fu::str(id_1), mask, (fnbody_of ? fnbody_of : (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_2_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_2_v)), (fnbody_of ? +1 : (locals_start ? locals_start : GET_next_local_index_m7ZM3Mg2(ss, _current_fn))), s_Type(type), s_Type{}, fu::vec<s_Type>{}, s_Postdom{}, s_Postdom{}, s_EventsSnap{}, s_Helpers{} }, ss, _helpers);
    const s_Helpers h { _helpers[helpers_idx] };
    if (fnbody_of && nodes)
    {
        const s_kind k = last_a6qr8qgs(nodes).kind;
        if (k == s_kind_unwrap)
            _current_fn.TODO_FIX_isInline = true;
        else
        {
            last_4PVbatPg(nodes) = s_Node { s_kind_return, s_DeclAsserts{}, s_ParseSyntax{}, s_Flags_F_IMPLICIT, fu::str{}, ((last_a6qr8qgs(nodes).kind != s_kind_empty) ? fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(last_a6qr8qgs(nodes)) } } : fu::vec<s_Node>{}), s_TokenIdx(last_a6qr8qgs(nodes).token) };
        };
    };
    /*MOV*/ fu::vec<s_SolvedNode> items = solveNodes_OBTKdcXG(nodes, s_DeadBreak_DeadBreak_Always, t_void, type, !is_void_FfV8Zuj5(type), s_StaticEval{}, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (!fnbody_of)
    {
        ss._helpers_data.mutref(h.index).ret_expect = s_Type{};
    };

    {
        const s_Type& tail = (items ? last_GN4mikiy(items).type : t_void);
        if (!is_never_FfV8Zuj5(tail))
            reportReturnType_fmwhJ2Cl(h, (items ? last_GN4mikiy(items).type : t_void), false, ss, _helpers, _here, ctx, module);
        else if (!ss._helpers_data[h.index].ret_actual)
            ss._helpers_data.mutref(h.index).ret_actual = s_Type(t_never);

    };
    if (ss._helpers_data[h.index].ret_actual)
    {
        const s_Type* _0;
        /*MOV*/ s_SolvedNode block = createBlock_UZ3zi9cx((*(_0 = &(ss._helpers_data[h.index].ret_actual)) ? *_0 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module)), static_cast<fu::vec<s_SolvedNode>&&>(items), h, ss, _helpers, _here, ctx, module);
        if (fnbody_of)
        {
            const s_SolverStatus status = GET_emAmLQ3D(localfn_PcV0GIQj(fnbody_of, module), ss, _helpers, _here, ctx, module).status;
            if (!s_SolverStatus((status & s_SolverStatus_SS_DIRTY)))
            {
                sortInjectedArguments_SDX2555W(ss, _current_fn, _helpers, _here, ctx, module);
                if (!currentFn_mustBecomeInline_wWAsH7tM(_current_fn))
                    runAllPasses_PccI5bd0(block, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                else
                    mcom_BlockReturns_CopyOrMoveDecision_2APyjpDB(h, ss, _helpers, _here, ctx, module);

            };
        };
        return /*NRVO*/ block;
    }
    else
        BUG_V2MSl2gg("No ret_actual"_fu, ss, _helpers, _here, ctx, module);

}

static void lazySolveEnd_ZqULxTfD(const s_Target& t, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_Overload& o = GET_mut_uE8Nb6mH(t, ss, module);
    fu::vec<int> reopen {};
    const int parent = EPH_rI6gXXKb(t, ss, module).local_of;
    if (o.status & s_SolverStatus_SS_UPDATED)
    {
        o.status &= s_SolverStatus(~s_SolverStatus_SS_UPDATED);
        fu::vec<int> callers { EPH_mut_i08XmyeL(t, ss, module).callers };
        for (int i = 0; i < callers.size(); i++)
        { {
            int index = callers[i];
            for (; ; )
            {
                const s_Target t_1 = localfn_PcV0GIQj(index, module);
                s_Overload& o_1 = GET_mut_uE8Nb6mH(t_1, ss, module);
                if (s_SolverStatus((o_1.status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)))) != s_SolverStatus_SS_DID_START)
                    goto BL_3;
                else if (!s_SolverStatus((o_1.status & s_SolverStatus_SS_FINALIZED)))
                {
                    o_1.status |= s_SolverStatus_SS_DIRTY;
                    goto BL_3;
                }
                else
                {
                    const int up = EPH_rI6gXXKb(t_1, ss, module).local_of;
                    if (up != parent)
                    {
                        if (up > parent)
                            index = up;
                        else
                            BUG_V2MSl2gg("lazySolveEnd: about to climb up the wrong tree."_fu, ss, _helpers, _here, ctx, module);

                    }
                    else
                    {

                        {
                            const s_SolverNotes note = ((o_1.kind == s_kind_type) ? s_SolverNotes_N_TypeReopen : s_SolverNotes_N_FnReopen);
                            const s_SolverState& ss_1 = ss;
                            if (note & options.break_notes)
                                fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
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
    s_Overload& o_1 = GET_mut_uE8Nb6mH(t, ss, module);
    if (!s_SolverStatus((o_1.status & s_SolverStatus_SS_DIRTY)))
        o_1.status |= s_SolverStatus_SS_FINALIZED;
    else if (o_1.status & s_SolverStatus_SS_FINALIZED)
        BUG_V2MSl2gg("Stray SS_FINALIZED."_fu, ss, _helpers, _here, ctx, module);
    else
    {
        o_1.status &= s_SolverStatus(~s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)));
        const s_SolverNotes note = ((o_1.kind == s_kind_type) ? s_SolverNotes_N_TypeResolve : s_SolverNotes_N_FnResolve);
        const s_SolverState& ss_1 = ss;
        if (note & options.break_notes)
            fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
        else
            _notes |= note;

    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t_1 = localfn_PcV0GIQj(reopen[i], module);
        lazySolveStart_djaF7il8(t_1, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    };
}

static s_Target doTrySpecialize_mdB4qvQU(const int parent_idx, const s_Target& into, const s_Target& overloadIdx, fu::view<s_SolvedNode> args_in, const fu::str& mangle, const s_Reorder& reorder, fu::view<fu::vec<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Target SPECFAIL_RentrySafety = s_Target { 0x8000000000000000ull };
    const s_Target& original = (overloadIdx ? overloadIdx : into ? into : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
    s_Template tEmplate { EXT_7eVl0gy6(original, ss, ctx, module).tEmplate };
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    _here = EXT_7eVl0gy6(original, ss, ctx, module).tEmplate.node.token;
    fu::vec<fu::str> mangles {};
    s_Target currentSpec { SPECFAIL_RentrySafety };
    fu::view<s_Node> items = tEmplate.node.items;
    const int numArgs = ((tEmplate.node.kind == s_kind_fn) ? (items.size() + FN_ARGS_BACK) : BUG_V2MSl2gg("template.node.kind != `fn`"_fu, ss, _helpers, _here, ctx, module));
    s_Map_KlcLuPSIt9g typeParams0 = steal_AYMWowQg(ss._typeParams);
    fu_DEFER(std::swap(ss._typeParams, typeParams0));
    if (!into)
    {
        fu::str error = ""_fu;
        fu::vec<s_Type> args {};
        if (reorder)
        {
            for (int i = 0; i < reorder.map.size(); i++)
            {
                const int callsiteIndex = reorder.map[i];
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
                args.mutref(i) = s_Type(GET_emAmLQ3D(last_ohJwrXiS(c), ss, _helpers, _here, ctx, module).type);

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
                    if (!has_wxSKDW5V(retypeIndices, i_1))
                        continue;

                };
                /*MOV*/ s_Type inType { ((args.size() > i_1) ? args[i_1] : (*(const s_Type*)fu::NIL)) };
                const s_SolvedNode& inValue = (reorder ? (((reorder.map.size() > i_1) && (reorder.map[i_1] >= 0)) ? args_in[reorder.map[i_1]] : (*(const s_SolvedNode*)fu::NIL)) : ((args_in.size() > i_1) ? args_in[i_1] : (*(const s_SolvedNode*)fu::NIL)));
                const s_Node* _0;
                const s_Node& argNode = (*(_0 = &(items[i_1])) ? *_0 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
                const s_Node& annot = argNode.items[LET_TYPE];
                /*MOV*/ s_Argument host_arg { EXT_7eVl0gy6(original, ss, ctx, module).args[i_1] };
                s_SolvedNode BL_18_v {};
                s_SolvedNode inValue_1 = (__extension__ (
                {
                    const s_SolvedNode& __partcopy_ref = (inValue ? inValue : ((inType = host_arg.dEfault.type), host_arg.dEfault));
                    BL_18_v = (s_SolvedNode { __partcopy_ref.kind, s_Helpers(__partcopy_ref.helpers), {}, {}, fu::str(__partcopy_ref.value), fu::vec<s_SolvedNode>(__partcopy_ref.items), {}, s_Type { s_ValueType { {}, fu::str(__partcopy_ref.type.vtype.canon) }, {}, {} }, {} });
                (void)0;}), static_cast<s_SolvedNode&&>(BL_18_v));
                if (couldRetype_gb3b8CD9(inValue_1, ss))
                {
                    if (!pass_retype)
                    {
                        retypeIndices.push(i_1);
                        continue;
                    }
                    else
                    {
                        const s_Type& paramType = ((annot.kind == s_kind_typeparam) ? ref_Yr2SlHAw(ss._typeParams, annot.value).matched : (((annot.kind == s_kind_call) && !annot.items) ? Scope_lookupType_nf7me08O(annot.value, annot.flags, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : (*(const s_Type*)fu::NIL)));
                        if (paramType)
                        {
                            /*MOV*/ s_Type retype = tryRetyping_omCvj6H0(inValue_1, paramType, ss, _helpers, _here, ctx, module, options);
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
                        ref_anonymize_ucOr4Guq(inType);
                        /*MOV*/ s_Type& exactType = host_arg.type;
                        if (exactType)
                        {
                            if (args.size() > i_1)
                                args.mutref(i_1) = static_cast<s_Type&&>(exactType);

                            continue;
                        }
                        else
                        {
                            fu::str argName = ((argNode.flags & s_Flags_F_COMPOUND_ID) ? cleanID_j6ljQymd(argNode.value) : fu::str(argNode.value));
                            if (argName)
                            {
                                s_TypeParam& argName_typeParam = ref_Yr2SlHAw(ss._typeParams, argName);
                                const bool isTypedef = !!(argNode.flags & s_Flags_F_TYPENAME);
                                if (isTypedef)
                                {
                                    if (!(inType.vfacts & s_VFacts_Typename))
                                        BUG_V2MSl2gg(((argName + " not a typename: "_fu) + humanizeType_adoPoPLu(inType, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                                }
                                else
                                    inType = clear_Typename_40rRB6L8(s_Type(inType));

                                inType.vfacts = (isTypedef ? s_VFacts_Typename : s_VFacts{});
                                (!argName_typeParam ? argName_typeParam : fail_Ulv2WHKu((x7E_gCeFmDFw("Type param name collision with "_fu, str_N3Nir9Bo(host_arg, ss, _current_fn, _helpers, _here, ctx, module)) + "."_fu), ss, _helpers, _here, ctx, module)).matched = s_Type(inType);
                                argName_typeParam.flags |= s_TypeParamFlags_TP_isArgSpec;
                                if (isTypedef)
                                    argName_typeParam.flags |= s_TypeParamFlags_TP_isTypenameArgSpec;

                                if (annot)
                                {
                                    const bool argOk = trySolveTypeParams_ES9vPDa7(annot, static_cast<s_Type&&>(inType), errout, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                    if (!error && !argOk)
                                    {
                                        error = (((qKW_3PsDzMvu("arg"_fu) + " "_fu) + qID_3PsDzMvu(argName)) + ":"_fu);
                                        if (errout.size() > 1)
                                            for (int i_2 = 1; i_2 < errout.size(); i_2++)
                                                error += ("\n\t    "_fu + errout[i_2].message);

                                        else
                                            BUG_V2MSl2gg("BUG trySolveTypeParams did not provide an explanation."_fu, ss, _helpers, _here, ctx, module);

                                    };
                                    if (error)
                                        break;

                                };
                            }
                            else
                                BUG_V2MSl2gg("No argName"_fu, ss, _helpers, _here, ctx, module);

                        };
                    };
                }
                else
                {
                    BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
                };
            };
        };

        {
            const bool allowReplaceNonSpecfails = false;
            int _1 {};
            const int start = ((_1 = (find_KonMQ4KB(mangle, ' ') + 1)) ? _1 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
            fu::str mangle_1 = (fu::slice(mangle, 0, start) + mangleArgTypes_mWWjzwjY(args));
            if (add_mts1NXJ4(mangles, mangle_1))
            {
                const s_Target preexisting { get_55pvGtB1(getSpecs_WybGsFZ9(parent_idx, ss), mangle_1) };
                if (preexisting)
                {
                    rem_3FUJFPIi(mangles, mangle_1);
                    if (!is_SPECFAIL_EveZl8g6(currentSpec))
                        destroyOverload_utLnuMSL(currentSpec, ss, module);

                    resetSpec_DEroi3bE(preexisting, allowReplaceNonSpecfails, parent_idx, mangles, currentSpec, ss, _helpers, _here, ctx, module);
                    return preexisting;
                }
                else
                    setSpec_UHuEX1dK(mangle_1, currentSpec, true, false, parent_idx, ss, _helpers, _here, ctx, module);

            };
        };
        if (error)
            return SPECFAIL_30OHBErt(error, parent_idx, SPECFAIL_RentrySafety, mangles, currentSpec, ss, _helpers, _here, ctx, module);

    };
    if (!into)
    {
        const s_Node* _2;
        const s_Node& body = (*(_2 = &(items[(items.size() + FN_BODY_BACK)])) ? *_2 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
        if (body.kind == s_kind_pattern)
        {
            s_Map_KlcLuPSIt9g undo { ss._typeParams };
            fu::view<s_Node> branches = body.items;
            bool did_match = false;
            for (int i = 0; i < branches.size(); i++)
            {
                fu::view<s_Node> branch = branches[i].items;
                /*MOV*/ s_Node n_body { branch[(branch.size() + FN_BODY_BACK)] };
                if (isNativeBody_dOd4JUZE(n_body))
                    each_whga5C8w(ss._typeParams);

                const s_Node& cond = branches[i].items[0];
                if (cond && !evalTypePattern_VGcTurMu(cond, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
                    ss._typeParams = undo;
                else
                {

                    {
                        const s_Node& n_ret = branch[(branch.size() + FN_RET_BACK)];
                        if (n_ret)
                            sig_aguy45dI(tEmplate).mutref((sig_aguy45dI(tEmplate).size() + FN_RET_BACK)) = s_Node(n_ret);

                        sig_aguy45dI(tEmplate).mutref((sig_aguy45dI(tEmplate).size() + FN_BODY_BACK)) = static_cast<s_Node&&>((n_body ? n_body : BUG_V2MSl2gg("doTrySpec: no case/body."_fu, ss, _helpers, _here, ctx, module)));
                    };
                    did_match = true;
                    break;
                };
            };
            if (!did_match)
                return SPECFAIL_30OHBErt("No body pattern matched."_fu, parent_idx, SPECFAIL_RentrySafety, mangles, currentSpec, ss, _helpers, _here, ctx, module);

        };
        const s_Node& n_body = n_fn_Ahq9YW7H(tEmplate).items[(n_fn_Ahq9YW7H(tEmplate).items.size() + FN_BODY_BACK)];
        if (isNativeBody_dOd4JUZE(n_body))
            each_Ls3aY7Es(ss._typeParams);

    };
    s_Target target {};

    {
        const s_ScopeMemo scope0 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
        /*MOV*/ s_ScopeSkipMemos ss0 { ss._ss };
        const int helpers_data0 = ss._helpers_data.size();
        fu_DEFER(
        {
            Scope_pop_5cTQENbb(ss._scope, scope0, _helpers);
            ss._ss = static_cast<s_ScopeSkipMemos&&>(ss0);
            ss._helpers_data.shrink(helpers_data0);
        });

        {
            if (ss._root_scope)
            {
                const s_Target* _3;
                const s_Ephemeral& eph = EPH_rI6gXXKb((*(_3 = &(EXT_7eVl0gy6(original, ss, ctx, module).spec_of)) ? *_3 : original), ss, module);
                const s_ScopeMemo start { (eph.scope_memo ? eph.scope_memo : ss._root_scope) };
                ss._ss = eph.scope_skip;
                ScopeSkip_push_ySB0HIEa(ss._ss.items, start.items_len, scope0.items_len, ss, _helpers, _here, ctx, module);
                ScopeSkip_push_ySB0HIEa(ss._ss.implicits, start.implicits_len, scope0.implicits_len, ss, _helpers, _here, ctx, module);
                ScopeSkip_push_ySB0HIEa(ss._ss.imports, start.imports_len, scope0.imports_len, ss, _helpers, _here, ctx, module);
                ScopeSkip_push_ySB0HIEa(ss._ss.privates, start.privates_len, scope0.privates_len, ss, _helpers, _here, ctx, module);
                ScopeSkip_push_ySB0HIEa(ss._ss.usings, start.usings_len, scope0.usings_len, ss, _helpers, _here, ctx, module);
                ScopeSkip_push_ySB0HIEa(ss._ss.converts, start.converts_len, scope0.converts_len, ss, _helpers, _here, ctx, module);
                ScopeSkip_push_ySB0HIEa(ss._ss.helpers, start.helpers_len, scope0.helpers_len, ss, _helpers, _here, ctx, module);
            };
            fu::view<int> imports = tEmplate.imports;
            for (int i = 0; i < imports.size(); i++)
            {
                Scope_import_JpwYQuNq(imports[i], ss, _helpers, _here, ctx, module);
                if (i == 0)
                    Scope_import_privates_c51hW63z(imports[i], ss, _helpers, _here, ctx, module);

            };
        };
        target = (into ? s_Target(into) : Scope_create_B5w8Fu3I(ss._scope, s_kind___no_kind_yet, (*(const fu::str*)fu::NIL), (*(const s_Type*)fu::NIL), s_Flags{}, s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_LAZY)), 0, module));
        s_Ephemeral& eph = EPH_mut_i08XmyeL(target, ss, module);
        eph.local_of = parent_idx;
        s_SpecExtras spec_extras { (into ? EPH_rI6gXXKb(into, ss, module).spec_extras : (EPH_mut_i08XmyeL(target, ss, module).spec_extras = intoSpecExtras_iyEOU8qY(s_Map_KlcLuPSIt9g(ss._typeParams), ss, _helpers, _here, ctx, module))) };
        const s_Target solvingFnort0 = exchange_jPHBkujO(ss._solvingFnort, s_Target(target));
        const s_Target nestingFnort0 = exchange_jPHBkujO(ss._nestingFnort, s_Target(target));
        fu_DEFER(
        {
            ss._solvingFnort = solvingFnort0;
            ss._nestingFnort = nestingFnort0;
        });

        {
            s_Ephemeral& eph_1 = EPH_mut_i08XmyeL(target, ss, module);
            const unsigned rev0 = eph_1.revision++;
            if (rev0)
            {
                if ((rev0 >= 1024u))
                    BUG_V2MSl2gg((x7E_gCeFmDFw("Looping forever: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ".revision >= 1024"_fu), ss, _helpers, _here, ctx, module);
                else
                {
                    s_Extended& o = EXT_mut_JHD4gxS4(target, ss, module);
                    o.locals.clear();
                    int BL_74_v {};
                    if (ss._warnings.size() > (__extension__ (
                    {
                        const s_Target& t = target;
                        BL_74_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                    (void)0;}), BL_74_v))
                    {
                        int BL_76_v {};
                        ss._warnings.mutref((__extension__ (
                        {
                            const s_Target& t = target;
                            BL_76_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                        (void)0;}), BL_76_v)) = s_Warning{};
                    };
                    fu::vec<s_Target> specs { EPH_rI6gXXKb(target, ss, module).specs.vals };
                    for (int i = 0; i < specs.size(); i++)
                        resetChild_PwSXgWl7(s_Target(specs[i]), ss, _helpers, _here, ctx, module);

                };
            };
        };
        const s_DeclAsserts asserts = tEmplate.node.asserts;
        s_CurrentFn out = s_CurrentFn { solved_ImEnL8ng(n_fn_Ahq9YW7H(tEmplate), X_addrofTarget_CXyelUbL(target), (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, _here), s_ScopeMemo(scope0), asserts, s_Flow{}, s_Effects{}, s_Events{}, ((n_fn_Ahq9YW7H(tEmplate).flags & s_Flags_F_TEMPLATE) ? 1 : 0), s_Usage{}, false, 0, fu::vec<s_Target>{}, s_Postdom{}, fu::vec<fu::vec<int>>{}, 0 };
        const s_ScopeMemo root_scope0 { ss._root_scope };
        if (!root_scope0)
            ss._root_scope = scope0;

        std::swap(_current_fn, out);
        fu_DEFER(
        {
            std::swap(_current_fn, out);
            ss._root_scope = root_scope0;
        });
        fu::view<s_Node> inItems = n_fn_Ahq9YW7H(tEmplate).items;
        outItems_OolfJB5B(_current_fn).resize(inItems.size());
        ss._scope.items += spec_extras.scope_items;
        const bool isFirst = (!into || !GET_emAmLQ3D(into, ss, _helpers, _here, ctx, module).solved);
        const s_Flags isTemplate = (tEmplate.node.flags & s_Flags_F_TEMPLATE);
        const bool isSpec = (isTemplate ? (!into || !isFirst) : false);
        const bool isUnspec = (isTemplate ? !isSpec : false);
        for (int i = 0; i < (inItems.size() + FN_ARGS_BACK); i++)
        {
            const s_Node& n_arg = inItems[i];
            _here = n_arg.token;
            if (isUnspec && ((n_arg.flags & s_Flags_F_TEMPLATE) || !n_arg.items[LET_TYPE]))
            {
                s_SolvedNode init = (n_arg.items[LET_INIT] ? solveNode_xfI3NW7o(n_arg.items[LET_INIT], (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
                outItems_OolfJB5B(_current_fn).mutref(i) = SolvedNode_clCALdMt(s_kind_let, s_Type{}, n_arg.flags, n_arg.value, fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, s_Helpers{}, _here);
            }
            else
            {
                const s_Type& specType = (isSpec ? get_OJ3gYwrz(spec_extras.arg_spec_types, ((n_arg.flags & s_Flags_F_COMPOUND_ID) ? cleanID_j6ljQymd(n_arg.value) : fu::str(n_arg.value))) : (*(const s_Type*)fu::NIL));
                /*MOV*/ s_SolvedNode arg = solveLet_K4QDx2st(n_arg, specType, (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                outItems_OolfJB5B(_current_fn).mutref(i) = static_cast<s_SolvedNode&&>(arg);
            };
        };
        const s_Node& n_ret = (!isUnspec ? inItems[(inItems.size() + FN_RET_BACK)] : (*(const s_Node*)fu::NIL));
        const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
        if (n_body)
        {
            const bool isNative = isNativeBody_dOd4JUZE(n_body);
            s_Type ret_expect = (n_ret ? evalTypeAnnot_NMH9TBVW(n_ret, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_Type{});
            /*MOV*/ s_Type ret_seed { (n_ret ? (ret_expect ? ret_expect : BUG_V2MSl2gg(("falsy ret_expect: "_fu + n_fn_Ahq9YW7H(tEmplate).value), ss, _helpers, _here, ctx, module)) : t_AssumeNever_WhileSolvingRecursion) };
            if (ret_seed.lifetime)
            {
                ret_seed.lifetime = (isNative ? Lifetime_fromNative_qsctlHNl(inItems, fu::get_view_start0(_current_fn.out.items, (_current_fn.out.items.size() + FN_ARGS_BACK)), ret_seed, ss, _helpers, _here, ctx, module) : s_Lifetime(Lifetime_static));
            };
            if (isFirst)
            {
                /*MOV*/ fu::str name = ""_fu;
                s_FxMask fx_mask {};
                if (isNative)
                {
                    for (int i_1 = 0; i_1 < n_body.items.size(); i_1++)
                    {
                        const fu::str& item = n_body.items[i_1].value;
                        if (starts_Db9eGFmC(item, '|'))
                        {
                            s_FxMask _4 {};
                            fx_mask |= ((item == "|output"_fu) ? EFFECTS_output : ((_4 = parse_IqpMq0sB(fu::get_view(item, 1))) ? _4 : BUG_V2MSl2gg(("Invalid |Fx mask: "_fu + qBAD_3PsDzMvu(item)), ss, _helpers, _here, ctx, module)));
                        }
                        else
                            name += ("\n"_fu + item);

                    };
                };
                if (!(name))
                {
                    const fu::str* _5;
                    name = (*(_5 = &(n_fn_Ahq9YW7H(tEmplate).value)) ? *_5 : BUG_V2MSl2gg("TODO anonymous fns"_fu, ss, _helpers, _here, ctx, module));
                };
                s_Overload& overload = GET_mut_uE8Nb6mH(target, ss, module);
                overload.name = static_cast<fu::str&&>(name);
                s_Extended& ext = EXT_mut_JHD4gxS4(target, ss, module);
                ext.tEmplate = tEmplate;
                ext.spec_of = overloadIdx;
                ext.fx_mask = fx_mask;
                const s_CurrentFn& out_1 = _current_fn;
                /*MOV*/ s_Type retval = static_cast<s_Type&&>(ret_seed);
                const bool maybeLast = (isNative ? !isUnspec : false);
                const s_TokenIdx* _6;
                _here = (*(_6 = &(n_fn_Ahq9YW7H(tEmplate).token)) ? *_6 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
                if (GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_DIRTY)
                    GET_mut_uE8Nb6mH(target, ss, module).status |= s_SolverStatus_SS_UPDATED;
                else
                {
                    fu::view<s_SolvedNode> items_1 = out_1.out.items;
                    fu::str mustBecomeInline = currentFn_mustBecomeInline_wWAsH7tM(_current_fn);
                    const int N = (items_1.size() + FN_ARGS_BACK);
                    int min = 0;
                    int max = 0;
                    const s_NativeHacks NativeHacks = (isNative ? NativeHacks_aylVahSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).name) : s_NativeHacks{});
                    int numArgsWritten = 0;
                    fu::vec<int> argPos_1b {};
                    for (int i_1 = 0; i_1 < N; i_1++)
                    {
                        const s_SolvedNode& argNode = items_1[i_1];
                        const s_Target& argTarget = argNode.target;
                        if (argTarget)
                        {
                            grow_if_oob_yq7gHTQs(argPos_1b, int(unsigned(((argTarget._packed >> 40ull) & 0xfffffull)))) = (i_1 + 1);
                        };
                    };
                    fu::vec<s_Argument> args {};
                    for (int i_2 = 0; i_2 < N; i_2++)
                    {
                        const s_SolvedNode& argNode = items_1[i_2];
                        if (!(argNode.kind == s_kind_letdef))
                        {
                            if (argNode.target)
                                BUG_V2MSl2gg(x7E_gCeFmDFw("Argnode is not letdef, but has a target: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(argNode.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                        };
                        const s_SolvedNode& argNode_1 = ((argNode.kind == s_kind_letdef) ? GET_emAmLQ3D(argNode.target, ss, _helpers, _here, ctx, module).solved : argNode);
                        if ((argNode_1.kind == s_kind_let) || (argNode_1.kind == s_kind_empty))
                        {
                            /*MOV*/ fu::str name_1 { argNode_1.value };
                            /*MOV*/ fu::str autocall = ((argNode_1.flags & s_Flags_F_COMPOUND_ID) ? CompoundArgID_outerSplice_fE5lsTgm(name_1, ss, _helpers, _here, ctx, module) : fu::str{});
                            const bool isImplicit = !!(argNode_1.flags & s_Flags_F_IMPLICIT);
                            const bool isInjected = !!(argNode_1.flags & s_Flags_F_INJECTED);
                            const s_Target& argTarget = argNode_1.target;
                            const bool written_via = ((!isUnspec && is_mutref_hoadAQC0(argNode_1.type, _here, ctx)) ? (isNative || has_QTGTghRU(out_1.postdom.snap.ever_written, int(unsigned(((argTarget._packed >> 40ull) & 0xfffffull))))) : false);
                            s_BitSet soft_risk {};
                            s_BitSet hard_risk {};
                            if (written_via)
                            {
                                numArgsWritten++;
                                if (isNative)
                                {
                                    add_range_y5kfkU4t(soft_risk, N);
                                    rem_U5p6nLOf(soft_risk, i_2);
                                    if (!NativeHacks.soft_risk)
                                        hard_risk = soft_risk;

                                }
                                else
                                {
                                    ArgsAtRisk_list_YzrDw7IM(soft_risk, out_1.flow.at_soft_risk, argPos_1b, argTarget);
                                    ArgsAtRisk_list_YzrDw7IM(hard_risk, out_1.flow.at_hard_risk, argPos_1b, argTarget);
                                    if (TODO_FIX_isArray_40rRB6L8(argNode_1.type))
                                    {
                                        s_BitSet soft { soft_risk };
                                        and_not_assign_Brhxxkwh(soft, hard_risk);
                                        each_LgUtsbGU(soft, items_1, hard_risk, ss, _helpers, _here, ctx, module);
                                    };
                                };
                            };
                            if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE)) && written_via)
                            {
                                fu::str _7 {};
                                fu::str _8 {};
                                (_8 = (_7 = (x7E_gCeFmDFw(x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not pure, writes to "_fu), str_3AjvLtSQ(GET_emAmLQ3D(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ":\n"_fu), (static_cast<fu::str&&>(_7) + qSTACK_2AB99c5f(target, out_1.out, int(unsigned(((argTarget._packed >> 40ull) & 0xfffffull))), fu::view<s_Target>{}, s_ArgQuery{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_VDjVI8g2(static_cast<fu::str&&>(_8), "pure"_fu, ss, _helpers, _here, ctx, module));
                            }
                            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_CTX)) && isImplicit && written_via)
                            {
                                fu::str _9 {};
                                fu::str _10 {};
                                (_10 = (_9 = (x7E_gCeFmDFw(x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not purectx, writes to "_fu), str_3AjvLtSQ(GET_emAmLQ3D(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ":\n"_fu), (static_cast<fu::str&&>(_9) + qSTACK_2AB99c5f(target, out_1.out, int(unsigned(((argTarget._packed >> 40ull) & 0xfffffull))), fu::view<s_Target>{}, s_ArgQuery{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_VDjVI8g2(static_cast<fu::str&&>(_10), "purectx"_fu, ss, _helpers, _here, ctx, module));
                            }
                            else if (maybeLast && s_DeclAsserts((asserts & s_DeclAsserts_A_NOVEC)) && !isNoVec_L1WPSqxW(argNode_1.type, ctx, module) && !mustBecomeInline)
                            {
                                fu::str _11 {};
                                fu::str _12 {};
                                (_12 = (_11 = (((x7E_gCeFmDFw(x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not novec, "_fu), str_3AjvLtSQ(GET_emAmLQ3D(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " is "_fu) + humanizeType_adoPoPLu(argNode_1.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + ":\n"_fu), (static_cast<fu::str&&>(_11) + qSTACK_2AB99c5f(target, out_1.out, int(unsigned(((argTarget._packed >> 40ull) & 0xfffffull))), fu::view<s_Target>{}, s_ArgQuery_AQ_WhyNotNovec, ss, _current_fn, _helpers, _here, ctx, module))), fail_VDjVI8g2(static_cast<fu::str&&>(_12), "novec"_fu, ss, _helpers, _here, ctx, module));
                            }
                            else
                            {
                                const bool cow_inside = some_7xrHko44(out_1.events.cows_inside, argTarget);
                                if (has_QTGTghRU(soft_risk, i_2))
                                    BUG_V2MSl2gg((x7E_gCeFmDFw("updateScope: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " soft_risk lists self"_fu), ss, _helpers, _here, ctx, module);
                                else if (has_QTGTghRU(hard_risk, i_2))
                                    BUG_V2MSl2gg((x7E_gCeFmDFw("updateScope: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " hard_risk lists self"_fu), ss, _helpers, _here, ctx, module);

                                /*MOV*/ s_BitSet may_alias = negated_zHKqtB3x(hard_risk, N);
                                /*MOV*/ s_BitSet may_invalidate = negated_zHKqtB3x(soft_risk, N);
                                /*MOV*/ s_Argument arg = s_Argument { static_cast<fu::str&&>(name_1), static_cast<fu::str&&>(autocall), s_Type(argNode_1.type), s_SolvedNode(((!isImplicit && argNode_1.items) ? argNode_1.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), ((argNode_1.flags | (written_via ? s_Flags_F_WRITTEN_TO : s_Flags{})) | (cow_inside ? s_Flags_F_COW_INSIDE : s_Flags{})), s_Target(argTarget), static_cast<s_BitSet&&>(may_invalidate), static_cast<s_BitSet&&>(may_alias) };
                                if (arg.type.lifetime && !(arg.flags & s_Flags_F_INJECTED))
                                {
                                    if (!(arg.type.lifetime == Lifetime_temporary))
                                        BUG_V2MSl2gg(x7E_gCeFmDFw("Non-temporary lt on ref arg: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                                }
                                else
                                    ref_anonymize_ucOr4Guq(arg.type);

                                if (arg.type || isUnspec)
                                {
                                    unsigned BL_119_v {};
                                    if (s_VFacts((arg.type.vfacts & s_VFacts((s_VFacts_AlwaysTrue | s_VFacts_AlwaysFalse)))) && (__extension__ (
                                    {
                                        const s_Type& type = arg.type;
                                        BL_119_v = ((type.vtype.quals & q_USAGE));
                                    (void)0;}), BL_119_v) && !tryParseClosureID_54NQWyOV(arg.name, _here, ctx))
                                        BUG_V2MSl2gg("updateScope: arg.type is AlwaysTrue/False."_fu, ss, _helpers, _here, ctx, module);

                                }
                                else
                                    BUG_V2MSl2gg("updateScope: Unexpected untyped argument."_fu, ss, _helpers, _here, ctx, module);

                                if (!isInjected)
                                {
                                    if (max != int(0x7fffffffu))
                                        max++;

                                    if (!arg.dEfault && !isImplicit)
                                        min++;

                                };
                                if (arg.flags & s_Flags_F_REST_ARG)
                                    max = int(0x7fffffffu);

                                args.push(static_cast<s_Argument&&>(arg));
                            };
                        }
                        else
                        {
                            BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
                        };
                    };

                    {
                        s_BitSet returned {};
                        retval.lifetime = Lifetime_process_0CTuqdlp(retval.lifetime, argPos_1b, args, returned, ss, _helpers, _here, ctx, module);
                        for (int i_3 = 0; i_3 < args.size(); i_3++)
                        {
                            if (!(has_QTGTghRU(returned, i_3)))
                            {
                                s_Argument& arg = args.mutref(i_3);
                                if (is_ref_gBx1AgSx(arg.type) && willPassByValue_lEyEq0mH(arg, _here, ctx))
                                    arg.type = clear_refs_40rRB6L8(s_Type(arg.type));

                            };
                        };
                    };
                    if (retval)
                    {
                        if (is_ref_gBx1AgSx(retval))
                        {
                            if (isIrrelevant_40rRB6L8(retval))
                            {
                                retval.lifetime = Lifetime_static;
                            };
                            TEST_Lifetime_Rhs2skr1(retval.lifetime, false, true, ss, _helpers, _here, ctx, module);
                        };
                        Lifetime_each_SQdDbsI6(retval.lifetime, retval, ss, _helpers, _here, ctx, module);
                        s_Overload BL_135_v {};
                        s_Overload overload_1 = (__extension__ (
                        {
                            const s_Overload& __partcopy_ref = GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module);
                            BL_135_v = (s_Overload { {}, __partcopy_ref.flags, {}, {}, s_Type(__partcopy_ref.type), {} });
                        (void)0;}), static_cast<s_Overload&&>(BL_135_v));
                        s_Extended& ext_1 = EXT_mut_JHD4gxS4(target, ss, module);
                        bool change = false;
                        const bool hasCallers = !!EPH_rI6gXXKb(target, ss, module).callers;
                        if (hasCallers)
                        {
                            if (!(change))
                                change = ((args.size() != ext_1.args.size()) || !(overload_1.type == retval));

                            if (!change)
                            {
                                for (int i_3 = 0; i_3 < args.size(); i_3++)
                                {
                                    const s_Argument& a = args[i_3];
                                    const s_Argument& b = ext_1.args[i_3];
                                    if (!((a.name == b.name) && (ignoreLocalLts_8C2p38GN(a.type, ss, _helpers, _here, ctx, module) == ignoreLocalLts_8C2p38GN(b.type, ss, _helpers, _here, ctx, module))))
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
                            fu::str _13 {};
                            fu::str _14 {};
                            (_14 = (_13 = x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not nothrow, throws here:\n"_fu), (static_cast<fu::str&&>(_13) + qSTACK_uhExINTi(target, out_1.out, s_FxMask_Fx_Throws, fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Ulv2WHKu(static_cast<fu::str&&>(_14), ss, _helpers, _here, ctx, module));
                        }
                        else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOCRASH)) && s_FxMask((ext_1.fx_mask & s_FxMask_Fx_Crashes)))
                        {
                            fu::str _15 {};
                            fu::str _16 {};
                            (_16 = (_15 = x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not nocrash, can crash here:\n"_fu), (static_cast<fu::str&&>(_15) + qSTACK_uhExINTi(target, out_1.out, s_FxMask_Fx_Crashes, fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Ulv2WHKu(static_cast<fu::str&&>(_16), ss, _helpers, _here, ctx, module));
                        }
                        else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOIO)) && s_FxMask((ext_1.fx_mask & s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)))))
                        {
                            fu::str _17 {};
                            fu::str _18 {};
                            (_18 = (_17 = x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not noio, performs I/O here:\n"_fu), (static_cast<fu::str&&>(_17) + qSTACK_uhExINTi(target, out_1.out, s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)), fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Ulv2WHKu(static_cast<fu::str&&>(_18), ss, _helpers, _here, ctx, module));
                        }
                        else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_FX)) && s_FxMask((ext_1.fx_mask & s_FxMask_Fx_Output)))
                        {
                            fu::str _19 {};
                            fu::str _20 {};
                            (_20 = (_19 = x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not purefx, outputs here:\n"_fu), (static_cast<fu::str&&>(_19) + qSTACK_uhExINTi(target, out_1.out, s_FxMask_Fx_Output, fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Ulv2WHKu(static_cast<fu::str&&>(_20), ss, _helpers, _here, ctx, module));
                        }
                        else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOFLOW)) && _current_fn.effects.far_jumps)
                            fail_Ulv2WHKu((x7E_gCeFmDFw(x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not noflow: contains non-local control flow, jumping out to "_fu), str_3AjvLtSQ(GET_emAmLQ3D(localfn_PcV0GIQj(_current_fn.effects.far_jumps[0], module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + "."_fu), ss, _helpers, _here, ctx, module);
                        else
                        {
                            if (maybeLast && !mustBecomeInline)
                            {
                                if (!(numArgsWritten || ext_1.fx_mask || !is_void_FfV8Zuj5(retval) || (overload_1.flags & s_Flags_F_LAX)))
                                {
                                    const s_TokenIdx& token = out_1.out.token;
                                    int BL_151_v {};
                                    s_Warning& a = grow_if_oob_fnaTFAcU(ss._warnings, (__extension__ (
                                    {
                                        const s_Target& t = _current_fn.out.target;
                                        BL_151_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                                    (void)0;}), BL_151_v));
                                    if (!(a))
                                    {
                                        a = s_Warning { s_TokenIdx(token), fail_appendStack_t2nNPGED(((x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " does nothing: returns void and has no effects. Make it "_fu) + qKW_3PsDzMvu("lax"_fu)) + " if this is intentional."_fu), ss, _helpers, _here, ctx, module) };
                                    };
                                };
                            };
                            s_Overload& overload_2 = GET_mut_uE8Nb6mH(target, ss, module);
                            overload_2.type = static_cast<s_Type&&>(retval);
                            overload_2.flags = out_1.out.flags;
                            const s_kind kind = (isUnspec ? s_kind_template : (isNative ? s_kind___native : (mustBecomeInline ? s_kind_inline : s_kind_fn)));
                            if (kind != overload_2.kind)
                            {
                                overload_2.kind = kind;
                                change = true;
                            };

                            {
                                const bool rtl = (((args.size() == 2) && (overload_2.flags & s_Flags_F_OPERATOR)) ? hasAssignment_nLKt53sX(overload_2.name) : false);
                                isRTL_set_Dys3hpLB(overload_2, rtl);
                            };
                            const s_SolvedNode& solved = (!isUnspec ? out_1.out : (*(const s_SolvedNode*)fu::NIL));
                            if (hasCallers)
                            {
                                if (!change && (kind == s_kind_inline))
                                    change = astChange_Wc5QxhUH(overload_2.solved, solved);

                                if (change)
                                    overload_2.status |= s_SolverStatus_SS_UPDATED;

                            };
                            overload_2.solved = solved;
                            if (!isNative && !isUnspec)
                            {
                                const int sourceModid = tEmplate.node.token.modid;
                                fu::str shortModuleName = ((sourceModid != module.modid) ? ((sourceModid && module.modid) ? getShortModuleName_UQKMOJue(ctx.modules[sourceModid].fname) : fu::str{}) : fu::str(ss.shortModuleName));
                                int BL_159_v {};
                                fu::str sig = (((EPH_rI6gXXKb(target, ss, module).local_of ? fu::i64dec((__extension__ (
                                {
                                    const s_Target& t = target;
                                    BL_159_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                                (void)0;}), BL_159_v)) : fu::str{}) + shortModuleName) + join_jCe9HYtv(map_5LdxJiMf(EXT_7eVl0gy6(target, ss, ctx, module).args, ss, _helpers, _here, ctx, module), ","_fu));
                                fu::str _21 {};
                                EXT_mut_JHD4gxS4(target, ss, module).sighash = (sig ? ((_21 = hash62_nHEuzL2I(sig, 11)) ? static_cast<fu::str&&>(_21) : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module)) : fu::str{});
                            };
                            if (!into)
                            {

                                {
                                    fu::view<s_Argument> args_1 = EXT_7eVl0gy6(target, ss, ctx, module).args;
                                    int _22 {};
                                    const int start = ((_22 = (find_KonMQ4KB(mangle, ' ') + 1)) ? _22 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
                                    fu::str mangle_1 = (fu::slice(mangle, 0, start) + mangleArgTypes_xChQVQEN(args_1));
                                    if (add_mts1NXJ4(mangles, mangle_1))
                                    {
                                        const s_Target preexisting { get_55pvGtB1(getSpecs_WybGsFZ9(parent_idx, ss), mangle_1) };
                                        if (preexisting)
                                        {
                                            rem_3FUJFPIi(mangles, mangle_1);
                                            if (!is_SPECFAIL_EveZl8g6(currentSpec))
                                                destroyOverload_utLnuMSL(currentSpec, ss, module);

                                            resetSpec_DEroi3bE(preexisting, maybeLast, parent_idx, mangles, currentSpec, ss, _helpers, _here, ctx, module);
                                            return preexisting;
                                        }
                                        else
                                            setSpec_UHuEX1dK(mangle_1, currentSpec, true, false, parent_idx, ss, _helpers, _here, ctx, module);

                                    };
                                };
                                resetSpec_DEroi3bE(target, false, parent_idx, mangles, currentSpec, ss, _helpers, _here, ctx, module);
                            };
                        };
                    }
                    else
                        BUG_V2MSl2gg("updateScope: no return type."_fu, ss, _helpers, _here, ctx, module);

                };
            };
            bool didSetBody = false;
            if (!isUnspec && !isNative)
            {
                if (isFirst)
                {
                    s_Extended& ext = EXT_mut_JHD4gxS4(target, ss, module);
                    for (int i_1 = 0; i_1 < ext.args.size(); i_1++)
                        force_relax_p4VopRXr(ext.args.mutref(i_1).type, (RELAX_all & ~q_USAGE));

                    ext.fx_mask |= s_FxMask((s_FxMask_Fx_NotDeadCode | s_FxMask_Fx_Throws));
                };

                {
                    int BL_172_v {};
                    const int self = (__extension__ (
                    {
                        const s_Target& t = target;
                        BL_172_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                    (void)0;}), BL_172_v);
                    fu::vec<int> calls = steal_lZF84WJG(EPH_mut_i08XmyeL(target, ss, module).calls);
                    for (int i_1 = 0; i_1 < calls.size(); i_1++)
                    {
                        const s_Target call = localfn_PcV0GIQj(calls[i_1], module);
                        if (!(rem_jzOp5jol(EPH_mut_i08XmyeL(call, ss, module).callers, self)))
                            BUG_V2MSl2gg(x7E_gCeFmDFw((x7E_gCeFmDFw("doTrySpec: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " not listed as a caller of "_fu), str_3AjvLtSQ(GET_emAmLQ3D(call, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                    };
                };
                const s_SolverStatus status = (GET_mut_uE8Nb6mH(target, ss, module).status &= s_SolverStatus(~s_SolverStatus_SS_Debug_AllPassesComplete));
                if (s_SolverStatus((status & s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_DIRTY | s_SolverStatus_SS_FINALIZED)) | s_SolverStatus_SS_DID_START)))) != s_SolverStatus_SS_DID_START)
                    BUG_V2MSl2gg(x7E_gCeFmDFw(x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not SS_DID_START just before solve: "_fu), str_MgDgAP7t(status)), ss, _helpers, _here, ctx, module);
                else
                {
                    _current_fn.TODO_FIX_isInline = !!(tEmplate.node.flags & s_Flags_F_INLINE);
                    int BL_178_v {};
                    /*MOV*/ s_SolvedNode s_body = solveBlock_Rlp5uE9C(n_body, ret_expect, (__extension__ (
                    {
                        const s_Target& t = target;
                        BL_178_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                    (void)0;}), BL_178_v), s_HelpersMask((s_HelpersMask((s_HelpersMask((s_HelpersMask_HM_Function | s_HelpersMask_HM_CanReturn)) | s_HelpersMask_HM_LabelUsed)) | ((n_fn_Ahq9YW7H(tEmplate).flags & s_Flags_F_LAMBDA) ? s_HelpersMask_HM_Lambda : s_HelpersMask{}))), n_fn_Ahq9YW7H(tEmplate).value, 0, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    const s_HelpersData* BL_179_v;
                    const s_Type* _23;
                    const s_Type& retval = (*(_23 = &((__extension__ (
                    {
                        const s_Helpers& h = s_body.helpers;
                        BL_179_v = &(ss._helpers_data[h.index]);
                    (void)0;}), *BL_179_v).ret_actual)) ? *_23 : BUG_V2MSl2gg("doTrySpec: no body.ret_actual"_fu, ss, _helpers, _here, ctx, module));
                    const int idx_body = (outItems_OolfJB5B(_current_fn).size() + FN_BODY_BACK);
                    outItems_OolfJB5B(_current_fn).mutref(idx_body) = static_cast<s_SolvedNode&&>((s_body ? s_body : BUG_V2MSl2gg("falsy body"_fu, ss, _helpers, _here, ctx, module)));
                    didSetBody = true;
                    const s_CurrentFn& out_1 = _current_fn;
                    /*MOV*/ s_Type retval_1 { retval };
                    const bool maybeLast = true;
                    const s_TokenIdx* _24;
                    _here = (*(_24 = &(n_fn_Ahq9YW7H(tEmplate).token)) ? *_24 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
                    if (GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_DIRTY)
                        GET_mut_uE8Nb6mH(target, ss, module).status |= s_SolverStatus_SS_UPDATED;
                    else
                    {
                        fu::view<s_SolvedNode> items_1 = out_1.out.items;
                        fu::str mustBecomeInline = currentFn_mustBecomeInline_wWAsH7tM(_current_fn);
                        const int N = (items_1.size() + FN_ARGS_BACK);
                        int min = 0;
                        int max = 0;
                        const s_NativeHacks NativeHacks = (isNative ? NativeHacks_aylVahSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).name) : s_NativeHacks{});
                        int numArgsWritten = 0;
                        fu::vec<int> argPos_1b {};
                        for (int i_1 = 0; i_1 < N; i_1++)
                        {
                            const s_SolvedNode& argNode = items_1[i_1];
                            const s_Target& argTarget = argNode.target;
                            if (argTarget)
                            {
                                grow_if_oob_yq7gHTQs(argPos_1b, int(unsigned(((argTarget._packed >> 40ull) & 0xfffffull)))) = (i_1 + 1);
                            };
                        };
                        fu::vec<s_Argument> args {};
                        for (int i_2 = 0; i_2 < N; i_2++)
                        {
                            const s_SolvedNode& argNode = items_1[i_2];
                            if (!(argNode.kind == s_kind_letdef))
                            {
                                if (argNode.target)
                                    BUG_V2MSl2gg(x7E_gCeFmDFw("Argnode is not letdef, but has a target: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(argNode.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                            };
                            const s_SolvedNode& argNode_1 = ((argNode.kind == s_kind_letdef) ? GET_emAmLQ3D(argNode.target, ss, _helpers, _here, ctx, module).solved : argNode);
                            if ((argNode_1.kind == s_kind_let) || (argNode_1.kind == s_kind_empty))
                            {
                                /*MOV*/ fu::str name { argNode_1.value };
                                /*MOV*/ fu::str autocall = ((argNode_1.flags & s_Flags_F_COMPOUND_ID) ? CompoundArgID_outerSplice_fE5lsTgm(name, ss, _helpers, _here, ctx, module) : fu::str{});
                                const bool isImplicit = !!(argNode_1.flags & s_Flags_F_IMPLICIT);
                                const bool isInjected = !!(argNode_1.flags & s_Flags_F_INJECTED);
                                const s_Target& argTarget = argNode_1.target;
                                const bool written_via = ((!isUnspec && is_mutref_hoadAQC0(argNode_1.type, _here, ctx)) ? (isNative || has_QTGTghRU(out_1.postdom.snap.ever_written, int(unsigned(((argTarget._packed >> 40ull) & 0xfffffull))))) : false);
                                s_BitSet soft_risk {};
                                s_BitSet hard_risk {};
                                if (written_via)
                                {
                                    numArgsWritten++;
                                    if (isNative)
                                    {
                                        add_range_y5kfkU4t(soft_risk, N);
                                        rem_U5p6nLOf(soft_risk, i_2);
                                        if (!NativeHacks.soft_risk)
                                            hard_risk = soft_risk;

                                    }
                                    else
                                    {
                                        ArgsAtRisk_list_YzrDw7IM(soft_risk, out_1.flow.at_soft_risk, argPos_1b, argTarget);
                                        ArgsAtRisk_list_YzrDw7IM(hard_risk, out_1.flow.at_hard_risk, argPos_1b, argTarget);
                                        if (TODO_FIX_isArray_40rRB6L8(argNode_1.type))
                                        {
                                            s_BitSet soft { soft_risk };
                                            and_not_assign_Brhxxkwh(soft, hard_risk);
                                            each_LgUtsbGU(soft, items_1, hard_risk, ss, _helpers, _here, ctx, module);
                                        };
                                    };
                                };
                                if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE)) && written_via)
                                {
                                    fu::str _25 {};
                                    fu::str _26 {};
                                    (_26 = (_25 = (x7E_gCeFmDFw(x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not pure, writes to "_fu), str_3AjvLtSQ(GET_emAmLQ3D(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ":\n"_fu), (static_cast<fu::str&&>(_25) + qSTACK_2AB99c5f(target, out_1.out, int(unsigned(((argTarget._packed >> 40ull) & 0xfffffull))), fu::view<s_Target>{}, s_ArgQuery{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_VDjVI8g2(static_cast<fu::str&&>(_26), "pure"_fu, ss, _helpers, _here, ctx, module));
                                }
                                else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_CTX)) && isImplicit && written_via)
                                {
                                    fu::str _27 {};
                                    fu::str _28 {};
                                    (_28 = (_27 = (x7E_gCeFmDFw(x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not purectx, writes to "_fu), str_3AjvLtSQ(GET_emAmLQ3D(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ":\n"_fu), (static_cast<fu::str&&>(_27) + qSTACK_2AB99c5f(target, out_1.out, int(unsigned(((argTarget._packed >> 40ull) & 0xfffffull))), fu::view<s_Target>{}, s_ArgQuery{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_VDjVI8g2(static_cast<fu::str&&>(_28), "purectx"_fu, ss, _helpers, _here, ctx, module));
                                }
                                else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOVEC)) && !isNoVec_L1WPSqxW(argNode_1.type, ctx, module) && !mustBecomeInline)
                                {
                                    fu::str _29 {};
                                    fu::str _30 {};
                                    (_30 = (_29 = (((x7E_gCeFmDFw(x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not novec, "_fu), str_3AjvLtSQ(GET_emAmLQ3D(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " is "_fu) + humanizeType_adoPoPLu(argNode_1.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + ":\n"_fu), (static_cast<fu::str&&>(_29) + qSTACK_2AB99c5f(target, out_1.out, int(unsigned(((argTarget._packed >> 40ull) & 0xfffffull))), fu::view<s_Target>{}, s_ArgQuery_AQ_WhyNotNovec, ss, _current_fn, _helpers, _here, ctx, module))), fail_VDjVI8g2(static_cast<fu::str&&>(_30), "novec"_fu, ss, _helpers, _here, ctx, module));
                                }
                                else
                                {
                                    const bool cow_inside = some_7xrHko44(out_1.events.cows_inside, argTarget);
                                    if (has_QTGTghRU(soft_risk, i_2))
                                        BUG_V2MSl2gg((x7E_gCeFmDFw("updateScope: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " soft_risk lists self"_fu), ss, _helpers, _here, ctx, module);
                                    else if (has_QTGTghRU(hard_risk, i_2))
                                        BUG_V2MSl2gg((x7E_gCeFmDFw("updateScope: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " hard_risk lists self"_fu), ss, _helpers, _here, ctx, module);

                                    /*MOV*/ s_BitSet may_alias = negated_zHKqtB3x(hard_risk, N);
                                    /*MOV*/ s_BitSet may_invalidate = negated_zHKqtB3x(soft_risk, N);
                                    /*MOV*/ s_Argument arg = s_Argument { static_cast<fu::str&&>(name), static_cast<fu::str&&>(autocall), s_Type(argNode_1.type), s_SolvedNode(((!isImplicit && argNode_1.items) ? argNode_1.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), ((argNode_1.flags | (written_via ? s_Flags_F_WRITTEN_TO : s_Flags{})) | (cow_inside ? s_Flags_F_COW_INSIDE : s_Flags{})), s_Target(argTarget), static_cast<s_BitSet&&>(may_invalidate), static_cast<s_BitSet&&>(may_alias) };
                                    if (arg.type.lifetime && !(arg.flags & s_Flags_F_INJECTED))
                                    {
                                        if (!(arg.type.lifetime == Lifetime_temporary))
                                            BUG_V2MSl2gg(x7E_gCeFmDFw("Non-temporary lt on ref arg: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                                    }
                                    else
                                        ref_anonymize_ucOr4Guq(arg.type);

                                    if (arg.type || isUnspec)
                                    {
                                        unsigned BL_205_v {};
                                        if (s_VFacts((arg.type.vfacts & s_VFacts((s_VFacts_AlwaysTrue | s_VFacts_AlwaysFalse)))) && (__extension__ (
                                        {
                                            const s_Type& type = arg.type;
                                            BL_205_v = ((type.vtype.quals & q_USAGE));
                                        (void)0;}), BL_205_v) && !tryParseClosureID_54NQWyOV(arg.name, _here, ctx))
                                            BUG_V2MSl2gg("updateScope: arg.type is AlwaysTrue/False."_fu, ss, _helpers, _here, ctx, module);

                                    }
                                    else
                                        BUG_V2MSl2gg("updateScope: Unexpected untyped argument."_fu, ss, _helpers, _here, ctx, module);

                                    if (!isInjected)
                                    {
                                        if (max != int(0x7fffffffu))
                                            max++;

                                        if (!arg.dEfault && !isImplicit)
                                            min++;

                                    };
                                    if (arg.flags & s_Flags_F_REST_ARG)
                                        max = int(0x7fffffffu);

                                    args.push(static_cast<s_Argument&&>(arg));
                                };
                            }
                            else
                            {
                                BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
                            };
                        };

                        {
                            s_BitSet returned {};
                            retval_1.lifetime = Lifetime_process_0CTuqdlp(retval_1.lifetime, argPos_1b, args, returned, ss, _helpers, _here, ctx, module);
                            for (int i_3 = 0; i_3 < args.size(); i_3++)
                            {
                                if (!(has_QTGTghRU(returned, i_3)))
                                {
                                    s_Argument& arg = args.mutref(i_3);
                                    if (is_ref_gBx1AgSx(arg.type) && willPassByValue_lEyEq0mH(arg, _here, ctx))
                                        arg.type = clear_refs_40rRB6L8(s_Type(arg.type));

                                };
                            };
                        };
                        if (retval_1)
                        {
                            if (is_ref_gBx1AgSx(retval_1))
                            {
                                if (isIrrelevant_40rRB6L8(retval_1))
                                {
                                    retval_1.lifetime = Lifetime_static;
                                };
                                TEST_Lifetime_Rhs2skr1(retval_1.lifetime, false, true, ss, _helpers, _here, ctx, module);
                            };
                            Lifetime_each_SQdDbsI6(retval_1.lifetime, retval_1, ss, _helpers, _here, ctx, module);
                            s_Overload BL_221_v {};
                            s_Overload overload = (__extension__ (
                            {
                                const s_Overload& __partcopy_ref = GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module);
                                BL_221_v = (s_Overload { {}, __partcopy_ref.flags, {}, {}, s_Type(__partcopy_ref.type), {} });
                            (void)0;}), static_cast<s_Overload&&>(BL_221_v));
                            s_Extended& ext = EXT_mut_JHD4gxS4(target, ss, module);
                            bool change = false;
                            const bool hasCallers = !!EPH_rI6gXXKb(target, ss, module).callers;
                            if (hasCallers)
                            {
                                if (!(change))
                                    change = ((args.size() != ext.args.size()) || !(overload.type == retval_1));

                                if (!change)
                                {
                                    for (int i_3 = 0; i_3 < args.size(); i_3++)
                                    {
                                        const s_Argument& a = args[i_3];
                                        const s_Argument& b = ext.args[i_3];
                                        if (!((a.name == b.name) && (ignoreLocalLts_8C2p38GN(a.type, ss, _helpers, _here, ctx, module) == ignoreLocalLts_8C2p38GN(b.type, ss, _helpers, _here, ctx, module))))
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
                                fu::str _31 {};
                                fu::str _32 {};
                                (_32 = (_31 = x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not nothrow, throws here:\n"_fu), (static_cast<fu::str&&>(_31) + qSTACK_uhExINTi(target, out_1.out, s_FxMask_Fx_Throws, fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Ulv2WHKu(static_cast<fu::str&&>(_32), ss, _helpers, _here, ctx, module));
                            }
                            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOCRASH)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Crashes)))
                            {
                                fu::str _33 {};
                                fu::str _34 {};
                                (_34 = (_33 = x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not nocrash, can crash here:\n"_fu), (static_cast<fu::str&&>(_33) + qSTACK_uhExINTi(target, out_1.out, s_FxMask_Fx_Crashes, fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Ulv2WHKu(static_cast<fu::str&&>(_34), ss, _helpers, _here, ctx, module));
                            }
                            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOIO)) && s_FxMask((ext.fx_mask & s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)))))
                            {
                                fu::str _35 {};
                                fu::str _36 {};
                                (_36 = (_35 = x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not noio, performs I/O here:\n"_fu), (static_cast<fu::str&&>(_35) + qSTACK_uhExINTi(target, out_1.out, s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)), fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Ulv2WHKu(static_cast<fu::str&&>(_36), ss, _helpers, _here, ctx, module));
                            }
                            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_FX)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Output)))
                            {
                                fu::str _37 {};
                                fu::str _38 {};
                                (_38 = (_37 = x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not purefx, outputs here:\n"_fu), (static_cast<fu::str&&>(_37) + qSTACK_uhExINTi(target, out_1.out, s_FxMask_Fx_Output, fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Ulv2WHKu(static_cast<fu::str&&>(_38), ss, _helpers, _here, ctx, module));
                            }
                            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOFLOW)) && _current_fn.effects.far_jumps)
                                fail_Ulv2WHKu((x7E_gCeFmDFw(x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not noflow: contains non-local control flow, jumping out to "_fu), str_3AjvLtSQ(GET_emAmLQ3D(localfn_PcV0GIQj(_current_fn.effects.far_jumps[0], module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + "."_fu), ss, _helpers, _here, ctx, module);
                            else
                            {
                                if (!mustBecomeInline)
                                {
                                    if (!(numArgsWritten || ext.fx_mask || !is_void_FfV8Zuj5(retval_1) || (overload.flags & s_Flags_F_LAX)))
                                    {
                                        const s_TokenIdx& token = out_1.out.token;
                                        int BL_237_v {};
                                        s_Warning& a = grow_if_oob_fnaTFAcU(ss._warnings, (__extension__ (
                                        {
                                            const s_Target& t = _current_fn.out.target;
                                            BL_237_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                                        (void)0;}), BL_237_v));
                                        if (!(a))
                                        {
                                            a = s_Warning { s_TokenIdx(token), fail_appendStack_t2nNPGED(((x7E_gCeFmDFw(str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " does nothing: returns void and has no effects. Make it "_fu) + qKW_3PsDzMvu("lax"_fu)) + " if this is intentional."_fu), ss, _helpers, _here, ctx, module) };
                                        };
                                    };
                                };
                                s_Overload& overload_1 = GET_mut_uE8Nb6mH(target, ss, module);
                                overload_1.type = static_cast<s_Type&&>(retval_1);
                                overload_1.flags = out_1.out.flags;
                                const s_kind kind = (isUnspec ? s_kind_template : (isNative ? s_kind___native : (mustBecomeInline ? s_kind_inline : s_kind_fn)));
                                if (kind != overload_1.kind)
                                {
                                    overload_1.kind = kind;
                                    change = true;
                                };

                                {
                                    const bool rtl = (((args.size() == 2) && (overload_1.flags & s_Flags_F_OPERATOR)) ? hasAssignment_nLKt53sX(overload_1.name) : false);
                                    isRTL_set_Dys3hpLB(overload_1, rtl);
                                };
                                const s_SolvedNode& solved = (!isUnspec ? out_1.out : (*(const s_SolvedNode*)fu::NIL));
                                if (hasCallers)
                                {
                                    if (!change && (kind == s_kind_inline))
                                        change = astChange_Wc5QxhUH(overload_1.solved, solved);

                                    if (change)
                                        overload_1.status |= s_SolverStatus_SS_UPDATED;

                                };
                                overload_1.solved = solved;
                                if (!isNative && !isUnspec)
                                {
                                    const int sourceModid = tEmplate.node.token.modid;
                                    fu::str shortModuleName = ((sourceModid != module.modid) ? ((sourceModid && module.modid) ? getShortModuleName_UQKMOJue(ctx.modules[sourceModid].fname) : fu::str{}) : fu::str(ss.shortModuleName));
                                    int BL_245_v {};
                                    fu::str sig = (((EPH_rI6gXXKb(target, ss, module).local_of ? fu::i64dec((__extension__ (
                                    {
                                        const s_Target& t = target;
                                        BL_245_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                                    (void)0;}), BL_245_v)) : fu::str{}) + shortModuleName) + join_jCe9HYtv(map_5LdxJiMf(EXT_7eVl0gy6(target, ss, ctx, module).args, ss, _helpers, _here, ctx, module), ","_fu));
                                    fu::str _39 {};
                                    EXT_mut_JHD4gxS4(target, ss, module).sighash = (sig ? ((_39 = hash62_nHEuzL2I(sig, 11)) ? static_cast<fu::str&&>(_39) : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module)) : fu::str{});
                                };
                                if (!into)
                                {

                                    {
                                        fu::view<s_Argument> args_1 = EXT_7eVl0gy6(target, ss, ctx, module).args;
                                        int _40 {};
                                        const int start = ((_40 = (find_KonMQ4KB(mangle, ' ') + 1)) ? _40 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module));
                                        fu::str mangle_1 = (fu::slice(mangle, 0, start) + mangleArgTypes_xChQVQEN(args_1));
                                        if (add_mts1NXJ4(mangles, mangle_1))
                                        {
                                            const s_Target preexisting { get_55pvGtB1(getSpecs_WybGsFZ9(parent_idx, ss), mangle_1) };
                                            if (preexisting)
                                            {
                                                rem_3FUJFPIi(mangles, mangle_1);
                                                if (!is_SPECFAIL_EveZl8g6(currentSpec))
                                                    destroyOverload_utLnuMSL(currentSpec, ss, module);

                                                resetSpec_DEroi3bE(preexisting, maybeLast, parent_idx, mangles, currentSpec, ss, _helpers, _here, ctx, module);
                                                return preexisting;
                                            }
                                            else
                                                setSpec_UHuEX1dK(mangle_1, currentSpec, true, false, parent_idx, ss, _helpers, _here, ctx, module);

                                        };
                                    };
                                    resetSpec_DEroi3bE(target, false, parent_idx, mangles, currentSpec, ss, _helpers, _here, ctx, module);
                                };
                            };
                        }
                        else
                            BUG_V2MSl2gg("updateScope: no return type."_fu, ss, _helpers, _here, ctx, module);

                    };
                };
            };
            if (!didSetBody)
            {
                const s_Overload& o = GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module);
                if (!(o.kind != s_kind_fn))
                    BUG_V2MSl2gg(((x7E_gCeFmDFw("did not set body on "_fu, str_3AjvLtSQ(o, ss, _helpers, _here, ctx, module)) + ": "_fu) + humanizeType_adoPoPLu(o.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

            };
        }
        else
            BUG_V2MSl2gg("solveFn: no body."_fu, ss, _helpers, _here, ctx, module);

    };
    lazySolveEnd_ZqULxTfD(target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return target;
}

static bool lazySolveStart_djaF7il8(const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (s_SolverStatus((GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module).status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_LAZY)))) != s_SolverStatus_SS_LAZY)
        return false;
    else
    {

        {
            s_Overload& o = GET_mut_uE8Nb6mH(target, ss, module);
            if (o.status & s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_FINALIZED | s_SolverStatus_SS_DID_START)) | s_SolverStatus_SS_DIRTY)))
                BUG_V2MSl2gg(x7E_gCeFmDFw("SS_DID_START: non-zero solver status: "_fu, str_MgDgAP7t(o.status)), ss, _helpers, _here, ctx, module);
            else
            {
                o.status |= s_SolverStatus_SS_DID_START;
                if ((o.kind == s_kind_fn) || (o.kind == s_kind_inline))
                {
                    doTrySpecialize_mdB4qvQU(EPH_rI6gXXKb(target, ss, module).local_of, target, s_Target{}, fu::view<s_SolvedNode>{}, (*(const fu::str*)fu::NIL), (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, 0, (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                }
                else if (o.kind == s_kind_type)
                    __solveStruct_kbXV2I4a(true, s_Node(EXT_7eVl0gy6(target, ss, ctx, module).tEmplate.node), target, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                else
                    BUG_V2MSl2gg((x7E_gCeFmDFw("lazySolveStart: kind is `"_fu, str_ZGqrvxJv(o.kind)) + "`."_fu), ss, _helpers, _here, ctx, module);

            };
        };
        return true;
    };
}

static void ensureLazySolved_xqnKwZRS(const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    int repeats = 0;
    while (lazySolveStart_djaF7il8(target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
    {
        if (repeats++ > 1000)
            BUG_V2MSl2gg(x7E_gCeFmDFw("Repeat-solved too many times: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    };
}

static fu::str str_PKBRlu5b(const int min, const int max)
{
    if (min != max)
        return x7E_gCeFmDFw((x7E_gCeFmDFw("["_fu, fu::i64dec(min)) + " upto "_fu), fu::i64dec(max)) + "]"_fu;
    else
        return fu::i64dec(min);

}

static void reorderByNumUsings_7m90p0YK(s_Reorder& reorder, fu::view<s_Argument> host_args, const int num_args, const int num_usings)
{
    reorder.map.clear();
    if (num_usings)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const int x = (i - num_usings);
            reorder.map.push((((x >= 0) && (x < num_args)) ? x : -1));
        };
    };
    reorder.applicable = !!reorder.map;
}

                                #ifndef DEF_find_g5ZsWtbdNfi
                                #define DEF_find_g5ZsWtbdNfi
inline int find_g5ZsWtbd(fu::view<fu::str> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static bool reorderByArgIDs_yZ8lOsjg(s_Reorder& reorder, fu::view<fu::str> names, s_BitSet&& optional, fu::view<s_Argument> host_args, const int num_usings, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    reorder.applicable = true;
    reorder.map.clear();
    int used = 0;
    int offset = 0;
    int usings_left = num_usings;
    for (int i = 0; i < host_args.size(); i++)
    {
        int idx = find_g5ZsWtbd(names, host_args[i].name);
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
            rem_U5p6nLOf(optional, idx);
        };
        reorder.map.push(idx);
    };
    if (usings_left)
        BUG_V2MSl2gg("reorderByArgIDs: usings_left != 0"_fu, ss, _helpers, _here, ctx, module);
    else
    {
        if (used != names.size())
        {
            for (int i_1 = 0; i_1 < names.size(); i_1++)
            {
                if (!names[i_1])
                    used++;

            };
            if ((used + popcount_5BwgL1Pz(optional)) != names.size())
                return false;

        };

        {
            int trailing_misses = 0;
            int non_trailing_misses = 0;
            for (int i_1 = reorder.map.size(); i_1-- > 0; )
            {
                if ((reorder.map[i_1] >= 0))
                {
                    while (i_1-- > 0)
                    {
                        if (reorder.map[i_1] < 0)
                            non_trailing_misses++;

                    };
                    break;
                }
                else
                    trailing_misses++;

            };
            const int trailing_usings = max_mJGU9byO((num_usings - non_trailing_misses), 0);
            if (trailing_misses > trailing_usings)
                reorder.map.shrink((reorder.map.size() - (trailing_misses - trailing_usings)));

        };
        if (reorder.map.size() != names.size())
            return true;
        else
        {
            for (int i_1 = 0; i_1 < reorder.map.size(); i_1++)
            {
                if (reorder.map[i_1] != i_1)
                    return true;

            };
            clear_4cAoWJb3(reorder);
            return true;
        };
    };
}

inline static void l_27_9_hUFvzZIw(fu::view<char> n, const int i, fu::view<char> name, int& count, int& first)
{
    if ((n == name) && !count++)
        first = i;

}

                                #ifndef DEF_each_WaarT1dkV9a
                                #define DEF_each_WaarT1dkV9a
inline void each_WaarT1dk(fu::view<fu::str> a, fu::view<char> name, int& count, int& first)
{
    for (int i = 0; i < a.size(); i++)
        l_27_9_hUFvzZIw(a[i], i, name, count, first);

}
                                #endif

static fu::str ERRMSG_findUnmatchedArgName_vSKzqvzj(const s_Reorder& reorder, fu::view<fu::str> names)
{
    s_BitSet used {};
    for (int i = 0; i < reorder.map.size(); i++)
    {
        const int pos = reorder.map[i];
        if ((pos >= 0))
            add_U5p6nLOf(used, pos);

    };
    for (int i_1 = 0; i_1 < names.size(); i_1++)
    {
        fu::view<char> name = names[i_1];
        if (!(has_QTGTghRU(used, i_1)))
        {
            int count = 0;
            int first = names.size();
            each_WaarT1dk(names, name, count, first);
            if (first < i_1)
                return ((("Duplicate explicitly named arguments: "_fu + qBAD_3PsDzMvu(fu::i64dec(count))) + " args named "_fu) + qBAD_3PsDzMvu(names[i_1])) + "."_fu;
            else
                return ("Explicit named argument mismatch: no arg "_fu + qBAD_3PsDzMvu(names[i_1])) + "."_fu;

        };
    };
    return "Explicit argument name related error.\n\n\tBUG failed to explain what's wrong."_fu;
}

                                #ifndef DEF_grow_if_oob_24KgrG1wiQ1
                                #define DEF_grow_if_oob_24KgrG1wiQ1
inline fu::vec<s_Target>& grow_if_oob_24KgrG1w(fu::vec<fu::vec<s_Target>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_replace_t9kb9bFxF28
                                #define DEF_replace_t9kb9bFxF28
inline fu::str replace_t9kb9bFx(const fu::str& str, fu::view<char> all, fu::view<char> with)
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

static fu::str fnName_GTBO5XLZ(const int idx, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (idx)
        return str_3AjvLtSQ(GET_emAmLQ3D(localfn_PcV0GIQj(idx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module);
    else
        return "global scope"_fu;

}

                                #ifndef DEF_last_dHu5rBA1qqg
                                #define DEF_last_dHu5rBA1qqg
inline const fu::str& last_dHu5rBA1(fu::view<fu::str> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static s_Target tryMatch__mutargs_A8RYaxmX(fu::str&& id, s_Reorder& reorder_out, fu::vec<fu::vec<s_Target>>& conversions_out, fu::str& error, const bool local_scope, const s_Scope& misc_scope, fu::view<s_SolvedNode> args, const s_Flags flags, const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const int error_len0 = error.size();
    for (int i = 0; i < args.size(); i++)
    {
        if (!args[i].kind)
            BUG_V2MSl2gg("Falsy arg.kind!"_fu, ss, _helpers, _here, ctx, module);

    };
    s_Target matchIdx {};
    s_Target ambigOkIdx {};
    int minArity = args.size();
    const int numUsings = countUsings_JzC7fAo7(local_scope, misc_scope, ss, _helpers, _here, ctx, module);
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
            names.push(((arg.kind == s_kind_argid) ? fu::str((*(_0 = &(((some = true), arg.value))) ? *_0 : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module))) : ""_fu));
            if (arg.flags & s_Flags_F_OPT_ARG)
            {
                minArity--;
                add_U5p6nLOf(optional, i_1);
            };
        };
        if (!(some))
        {
            BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
        };
    };
    fu::str reusable_mangle {};
    fu::vec<s_Target> extra_items {};
    if (local_scope && !target)
    {
        s_BitSet seen {};
        if (numUsings)
        {
            each_esSp3ZiI((local_scope ? ss._scope : misc_scope).usings, (local_scope ? ss._ss.usings : fu::view<s_ScopeSkip>{}), 0, id, local_scope, extra_items, seen, ss, _helpers, _here, ctx, module);
        };
        if (flags & ((s_Flags_F_ACCESS | s_Flags_F_METHOD) | s_Flags_F_OPERATOR))
            for (int i_1 = 0; i_1 < args.size(); i_1++)
                visitTypeImports_Dlq5Vrpk(args[i_1].type, id, local_scope, extra_items, seen, ss, ctx, module);
;
    };
    const int considerFieldItems = ((local_scope && !target && ((flags & s_Flags_F_ACCESS) || !minArity) && (minArity <= 1)) ? maxArity : 0);
    fu::vec<fu::str> alternate_ids {};
    fu::vec<fu::vec<s_Target>> conversions {};
    s_Reorder reorder {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        if (!local_scope && (extra_items || field_items_Jwyp1wek(considerFieldItems, ss)))
            BUG_V2MSl2gg("!local_scope but extra_items or field_items"_fu, ss, _helpers, _here, ctx, module);
        else
        {
            bool shadows {};
            while ((overloadIdx = (target ? search_KfdOrUQd(target, scope_iterator) : (local_scope ? search_ihIw5OEs(((flags & s_Flags_F_IMPLICIT) ? ss._scope.implicits : ss._scope.items), id, scope_iterator, ((flags & s_Flags_F_IMPLICIT) ? ss._ss.implicits : ss._ss.items), shadows, extra_items, fu::vec<s_ScopeItem>(field_items_Jwyp1wek(considerFieldItems, ss))) : search_yfyUVvrQ(fu::get_view_start0(misc_scope.items, misc_scope.pub_items), id, scope_iterator)))))
            { {
                if (!local_scope && shadows)
                    BUG_V2MSl2gg("!local_scope but shadows"_fu, ss, _helpers, _here, ctx, module);
                else
                {
                    bool TODO_FIX_dontBotherSpecializing = false;
                    conversions.clear();
                    clear_4cAoWJb3(reorder);
                    ensureLazySolved_xqnKwZRS(overloadIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    const s_Overload& overload = GET_emAmLQ3D(overloadIdx, ss, _helpers, _here, ctx, module);
                    const s_kind kind = overload.kind;
                    const bool isType = (kind == s_kind_type);
                    if (minArity && isType && !target)
                    {
                        const fu::str& alt = overload.type.vtype.canon;
                        if (alt != id)
                            alternate_ids.push(fu::str(alt));

                    };
                    const s_Extended& arity = EXT_7eVl0gy6(overloadIdx, ss, ctx, module);
                    const bool isZeroInit = (isType ? !explicitArity : false);
                    if (!isZeroInit && ((arity.max < minArity) || (arity.min > maxArity)))
                    {
                        if (arity.min > arity.max)
                        {
                            const s_SolverState& ss_1 = ss;
                            const s_CurrentFn& _current_fn_1 = _current_fn;
                            if (error)
                            {
                                error += ((("\n\n\t"_fu + explainWhichFn_9BM72ZzG(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + (((x7E_gCeFmDFw(((("Declaration cycle, signature not yet available."_fu + "\n\n\t    To fix this, you might need to shuffle functions around"_fu) + "\n\t\tuntil every dependency (type annot or arg default expr)"_fu) + "\n\t\tof "_fu), str_3AjvLtSQ(GET_emAmLQ3D(overloadIdx, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " is declared above it."_fu) + "\n\n\t    This borders on a compiler bug, sorry about it,"_fu) + "\n\t\twe gotta come up with a better solve order algorithm."_fu));
                            };
                        }
                        else
                        {
                            const s_SolverState& ss_1 = ss;
                            const s_CurrentFn& _current_fn_1 = _current_fn;
                            if (error)
                            {
                                error += ((("\n\n\t"_fu + explainWhichFn_9BM72ZzG(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + (((("Wrong number of arguments: expects "_fu + str_PKBRlu5b(arity.min, arity.max)) + ", got "_fu) + str_PKBRlu5b(minArity, maxArity)) + "."_fu));
                            };
                        };
                    }
                    else
                    {
                        fu::vec<s_Argument> host_args { arity.args };
                        const int num_usings = ((!isZeroInit && (arity.min > explicitArity)) ? (arity.min - explicitArity) : 0);
                        if (!names)
                            reorderByNumUsings_7m90p0YK(reorder, host_args, args.size(), num_usings);
                        else if (!reorderByArgIDs_yZ8lOsjg(reorder, names, s_BitSet(optional), host_args, num_usings, ss, _helpers, _here, ctx, module))
                        {
                            const s_SolverState& ss_1 = ss;
                            const s_CurrentFn& _current_fn_1 = _current_fn;
                            if (error)
                            {
                                error += ((("\n\n\t"_fu + explainWhichFn_9BM72ZzG(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + ERRMSG_findUnmatchedArgName_vSKzqvzj(reorder, names));
                            };
                            continue;
                        };
                        if (optional && reorder && (reorder.map.size() < args.size()) && (reorder.map.size() < arity.max))
                        {
                            const s_SolverState& ss_1 = ss;
                            const s_CurrentFn& _current_fn_1 = _current_fn;
                            if (error)
                            {
                                error += ((("\n\n\t"_fu + explainWhichFn_9BM72ZzG(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + "Optional argument ambiguity, not all optional arguments provided, and not all callsite arguments used. Cannot distinguish from a typo. [TODO LIST MISSING ARGS]"_fu);
                            };
                        }
                        else
                        {
                            s_Type REST_TYPE {};
                            const int REST_START = findRestStart_Fe91zW83(arity);
                            if ((REST_START < host_args.size()) && reorder && (reorder.map.size() < args.size()))
                            {
                                for (int i_1 = 0; i_1 < args.size(); i_1++)
                                {
                                    if (!has_QTGTghRU(optional, i_1) && !has_wxSKDW5V(reorder.map, i_1))
                                        reorder.map += i_1;

                                };
                            };
                            const int N = max_mJGU9byO((reorder ? reorder.map.size() : args.size()), (!isZeroInit ? arity.min : 0));
                            if (N)
                            {
                                if (REST_START < N)
                                {
                                    const s_Type& expect = host_args[REST_START].type;
                                    if (expect)
                                    {
                                        s_Type _1 {};
                                        REST_TYPE = ((_1 = tryClear_sliceable_dB532Fe7(expect.vtype)) ? static_cast<s_Type&&>(_1) : fail_Ulv2WHKu(((GET_emAmLQ3D(overloadIdx, ss, _helpers, _here, ctx, module).name + ": Rest argument annotation is not an array: "_fu) + humanizeType_adoPoPLu(expect, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module));
                                    };
                                };
                                if ((reorder.map.size() >= args.size()) || !reorder || optional)
                                {
                                    for (int i_1 = 0; i_1 < N; i_1++)
                                    {
                                        const bool rest = (i_1 >= REST_START);
                                        s_Argument host_arg { host_args[(rest ? REST_START : i_1)] };
                                        s_Type expect { (rest ? REST_TYPE : host_arg.type) };
                                        const int callsiteIndex = (reorder ? reorder.map[i_1] : ((i_1 < args.size()) ? i_1 : -1));
                                        if (callsiteIndex < 0)
                                        {
                                            if (!(host_arg.dEfault || (host_arg.flags & s_Flags_F_IMPLICIT)))
                                            {
                                                if (!((host_arg.flags & s_Flags_F_MUSTNAME) || (flags & s_Flags_F_CONVERSION)))
                                                {
                                                    if (expect)
                                                    {
                                                        /*MOV*/ fu::vec<s_Target> conversion = tryConvert_72F8WtpU(expect, local_scope, (*(const s_Type*)fu::NIL), (*(const s_SolvedNode*)fu::NIL), misc_scope, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                                        if (conversion)
                                                        {
                                                            grow_if_oob_24KgrG1w(conversions, i_1) = static_cast<fu::vec<s_Target>&&>(conversion);
                                                            continue;
                                                        };
                                                    };
                                                };
                                                const s_SolverState& ss_1 = ss;
                                                const s_CurrentFn& _current_fn_1 = _current_fn;
                                                if (error)
                                                {
                                                    error += ((("\n\n\t"_fu + explainWhichFn_9BM72ZzG(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + x7E_gCeFmDFw("Cannot infer missing "_fu, str_N3Nir9Bo(host_arg, ss, _current_fn, _helpers, _here, ctx, module)));
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
                                                    const s_SolverState& ss_1 = ss;
                                                    const s_CurrentFn& _current_fn_1 = _current_fn;
                                                    if (error)
                                                    {
                                                        error += ((("\n\n\t"_fu + explainWhichFn_9BM72ZzG(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + x7E_gCeFmDFw(str_N3Nir9Bo(host_arg, ss, _current_fn, _helpers, _here, ctx, module), " must be :explicitly named."_fu));
                                                    };
                                                    goto BL_19;
                                                };
                                            };
                                            if (host_arg.autocall)
                                            {
                                                fu::vec<s_SolvedNode> autocall_args {};
                                                s_Reorder autocall_reorder {};
                                                fu::vec<fu::vec<s_Target>> autocall_conversions {};
                                                autocall_args.resize(1);
                                                autocall_args.mutref(0) = s_SolvedNode(args[callsiteIndex]);
                                                fu::str autocall_error = (error ? (((x7E_gCeFmDFw("Cannot match "_fu, str_N3Nir9Bo(host_arg, ss, _current_fn, _helpers, _here, ctx, module)) + " autocall "_fu) + qCODE_3PsDzMvu(host_arg.autocall)) + ": "_fu) : fu::str{});
                                                const s_Target t = tryMatch__mutargs_A8RYaxmX(fu::str(host_arg.autocall), autocall_reorder, autocall_conversions, autocall_error, true, (*(const s_Scope*)fu::NIL), autocall_args, s_Flags_F_ACCESS, s_Target{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                                if (!t)
                                                {
                                                    const s_SolverState& ss_1 = ss;
                                                    const s_CurrentFn& _current_fn_1 = _current_fn;
                                                    if (error)
                                                    {
                                                        error += ((("\n\n\t"_fu + explainWhichFn_9BM72ZzG(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + replace_t9kb9bFx(autocall_error, "\t"_fu, "\t\t"_fu));
                                                    };
                                                    goto BL_19;
                                                }
                                                else
                                                {
                                                    if (autocall_conversions)
                                                    {
                                                        grow_if_oob_24KgrG1w(conversions, i_1) += only_w5gyl1Mp(autocall_conversions);
                                                    };
                                                    grow_if_oob_24KgrG1w(conversions, i_1) += s_Target(t);
                                                    if (!(autocall_reorder.map.size() < 2))
                                                        BUG_V2MSl2gg("autocall: reorder"_fu, ss, _helpers, _here, ctx, module);

                                                };
                                            };
                                            const int hasConv = ((conversions.size() > i_1) ? conversions[i_1].size() : 0);
                                            s_Type actual { (hasConv ? GET_emAmLQ3D(last_ohJwrXiS(conversions[i_1]), ss, _helpers, _here, ctx, module).type : args[callsiteIndex].type) };
                                            if (is_never_FfV8Zuj5(actual))
                                            {
                                                if (!(host_arg.flags & s_Flags_F_INLINE))
                                                    TODO_FIX_dontBotherSpecializing = true;

                                            }
                                            else if (!expect)
                                            {
                                                if ((host_arg.flags & s_Flags_F_REF) && !is_mutref_hoadAQC0(actual, _here, ctx))
                                                {
                                                    const s_SolverState& ss_1 = ss;
                                                    const s_CurrentFn& _current_fn_1 = _current_fn;
                                                    if (error)
                                                    {
                                                        error += ((("\n\n\t"_fu + explainWhichFn_9BM72ZzG(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + (x7E_gCeFmDFw(str_N3Nir9Bo(host_arg, ss, _current_fn, _helpers, _here, ctx, module), " expects a mutref, got "_fu) + humanizeType_adoPoPLu(actual, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)));
                                                    };
                                                    goto BL_19;
                                                }
                                                else if ((host_arg.flags & s_Flags_F_TYPENAME) && !s_VFacts((actual.vfacts & s_VFacts_Typename)))
                                                {
                                                    const s_SolverState& ss_1 = ss;
                                                    const s_CurrentFn& _current_fn_1 = _current_fn;
                                                    if (error)
                                                    {
                                                        error += ((("\n\n\t"_fu + explainWhichFn_9BM72ZzG(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + (x7E_gCeFmDFw(str_N3Nir9Bo(host_arg, ss, _current_fn, _helpers, _here, ctx, module), " expects a type, got a value: "_fu) + humanizeType_adoPoPLu(actual, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)));
                                                    };
                                                    goto BL_19;
                                                };
                                            }
                                            else
                                            {
                                                if (!(isAssignableAsArgument_E3uCShzQ(expect, (actual ? actual : BUG_V2MSl2gg("tryMatch: !actual"_fu, ss, _helpers, _here, ctx, module)), false, _here, ctx)))
                                                {
                                                    if (!hasConv)
                                                    {
                                                        const s_SolvedNode& arg = args[callsiteIndex];
                                                        const s_SolvedNode& arg_1 = ((arg.kind == s_kind_argid) ? only_GN4mikiy(arg.items) : arg);
                                                        s_Type retype = tryRetyping_omCvj6H0(arg_1, expect, ss, _helpers, _here, ctx, module, options);
                                                        if (retype && isAssignableAsArgument_E3uCShzQ(expect, retype, false, _here, ctx))
                                                            continue;

                                                    };
                                                    if (!(flags & s_Flags_F_CONVERSION))
                                                    {
                                                        fu::vec<s_Target> conversion = tryConvert_72F8WtpU(expect, local_scope, actual, (!hasConv ? args[callsiteIndex] : (*(const s_SolvedNode*)fu::NIL)), misc_scope, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                                        if (conversion)
                                                        {
                                                            grow_if_oob_24KgrG1w(conversions, i_1) += conversion;
                                                            continue;
                                                        };
                                                    };
                                                    const s_SolverState& ss_1 = ss;
                                                    const s_CurrentFn& _current_fn_1 = _current_fn;
                                                    if (error)
                                                    {
                                                        error += ((("\n\n\t"_fu + explainWhichFn_9BM72ZzG(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + (((x7E_gCeFmDFw(str_N3Nir9Bo(host_arg, ss, _current_fn, _helpers, _here, ctx, module), " expects "_fu) + humanizeType_adoPoPLu(expect, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + ", got "_fu) + humanizeType_adoPoPLu(actual, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)));
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
                                            const int callsiteIndex = (reorder ? reorder.map[i_2] : i_2);
                                            const s_Type& actual = (hasConv ? GET_emAmLQ3D(last_ohJwrXiS(conversions[i_2]), ss, _helpers, _here, ctx, module).type : args[callsiteIndex].type);
                                            s_Type _2 {};
                                            fu::never BL_79_v {};
                                            REST_TYPE = ((i_2 == REST_START) ? solveArrlit_itemType_init_YDl5Iciz(actual, ss, _helpers, _here, ctx, module) : ((_2 = type_trySuper_2nNLpyR4(REST_TYPE, actual, false, _here, ctx)) ? static_cast<s_Type&&>(_2) : (__extension__ (
                                            {
                                                const s_SolverState& ss_1 = ss;
                                                const s_CurrentFn& _current_fn_1 = _current_fn;
                                                if (error)
                                                {
                                                    error += ((("\n\n\t"_fu + explainWhichFn_9BM72ZzG(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + ((("Rest arguments have no common supertype: "_fu + humanizeType_adoPoPLu(REST_TYPE, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " <- "_fu) + humanizeType_adoPoPLu(actual, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)));
                                                };
                                                goto BL_19;
                                            (void)0;}), static_cast<fu::never&&>(BL_79_v))));
                                        };
                                        REST_TYPE = solveArrlit_done_JH9h3Ykv(REST_TYPE, -1, options);
                                    };
                                }
                                else
                                    BUG_V2MSl2gg(x7E_gCeFmDFw((x7E_gCeFmDFw("reorder < args:\n\t\treorder="_fu, fu::i64dec(reorder.map.size())) + "\n\t\t#args="_fu), fu::i64dec(args.size())), ss, _helpers, _here, ctx, module);

                            };
                            if ((kind == s_kind_template) && !TODO_FIX_dontBotherSpecializing)
                            {
                                fu::str cant_reuse {};
                                fu::str& args_mangled = ((reorder || conversions) ? cant_reuse : reusable_mangle);
                                const s_Target specIdx = trySpecialize_ow9DQawS(overloadIdx, args, args_mangled, REST_START, REST_TYPE, reorder, conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                if (is_SPECFAIL_EveZl8g6(specIdx))
                                {
                                    const s_SolverState& ss_1 = ss;
                                    const s_CurrentFn& _current_fn_1 = _current_fn;
                                    if (error)
                                    {
                                        fu::str _3 {};
                                        error += ((("\n\n\t"_fu + explainWhichFn_9BM72ZzG(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + ((_3 = fu::str(ss._spec_errors[int(unsigned(specIdx._packed))])) ? static_cast<fu::str&&>(_3) : "Could not specialize."_fu));
                                    };
                                    continue;
                                }
                                else
                                    ensureLazySolved_xqnKwZRS((overloadIdx = specIdx), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                            };
                            if (ambigOkIdx && !TODO_FIX_dontBotherSpecializing)
                                matchIdx = ambigOkIdx;

                            if (matchIdx)
                            {
                                const s_Target& PREV = matchIdx;
                                const s_Target& NEXT = overloadIdx;

                                {
                                    const int inner = localOf_DvqCQ2NA(PREV, ss, module);
                                    const int outer = localOf_DvqCQ2NA(NEXT, ss, module);
                                    int BL_89_v {};
                                    const int callsite = (__extension__ (
                                    {
                                        const s_Target& t = _current_fn.out.target;
                                        BL_89_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                                    (void)0;}), BL_89_v);
                                    int _c = callsite;
                                    while (_c > inner)
                                        _c = localOf_DvqCQ2NA(localfn_PcV0GIQj(_c, module), ss, module);

                                    if (_c == inner)
                                    {
                                        int _i = inner;
                                        while (_i > outer)
                                            _i = localOf_DvqCQ2NA(localfn_PcV0GIQj(_i, module), ss, module);

                                        if (!(_i == outer))
                                            BUG_V2MSl2gg(((x7E_gCeFmDFw((((x7E_gCeFmDFw((((("Leaking `"_fu + id) + "` between functions [inner/outer]: "_fu) + fnName_GTBO5XLZ(inner, ss, _helpers, _here, ctx, module)) + "::"_fu), str_3AjvLtSQ(GET_emAmLQ3D(PREV, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " and "_fu) + fnName_GTBO5XLZ(outer, ss, _helpers, _here, ctx, module)) + "::"_fu), str_3AjvLtSQ(GET_emAmLQ3D(NEXT, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " as seen from "_fu) + fnName_GTBO5XLZ(callsite, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                                    }
                                    else
                                        BUG_V2MSl2gg(((x7E_gCeFmDFw((((("Leaking `"_fu + id) + "` between functions [inner/callsite]: "_fu) + fnName_GTBO5XLZ(inner, ss, _helpers, _here, ctx, module)) + "::"_fu), str_3AjvLtSQ(GET_emAmLQ3D(PREV, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " is seen from "_fu) + fnName_GTBO5XLZ(callsite, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                                };
                                fail_Ulv2WHKu((((((("Ambiguous "_fu + (id ? ("call to "_fu + qBAD_3PsDzMvu(id)) : "callsite"_fu)) + ", matches multiple items in scope:\n"_fu) + "\n\t"_fu) + explainWhichFn_9BM72ZzG(PREV, conversions_out, fu::view<char>{}, s_CodeFmt_NoContext, ss, _current_fn, _helpers, _here, ctx, module)) + "\n\t"_fu) + explainWhichFn_9BM72ZzG(NEXT, conversions, fu::view<char>{}, s_CodeFmt_NoContext, ss, _current_fn, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
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
                                    break;

                            };
                        };
                    };
                };
              } BL_19:;
            };
            if (!alternate_ids)
                break;
            else
            {
                id = last_dHu5rBA1(alternate_ids);
                alternate_ids.pop();
            };
        };
    };
    if (error && (error.size() == error_len0) && !matchIdx)
        error += isNotDefinedHere_RaGRksBr(id);

    return (matchIdx ? matchIdx : ambigOkIdx);
}

inline static fu::str l_27_14_6Zu74Yp3(const s_SolvedNode& l_27_14, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return humanizeType_adoPoPLu(l_27_14.type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module);
}

                                #ifndef DEF_map_k0hbaidAPUa
                                #define DEF_map_k0hbaidAPUa
inline fu::vec<fu::str> map_k0hbaidA(fu::view<s_SolvedNode> a, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = l_27_14_6Zu74Yp3(a[i], ss, _helpers, _here, ctx, module);

    return /*NRVO*/ res;
}
                                #endif

static s_Target match__mutargs_IWShj7np(const s_Scope& misc_scope, const bool local_scope, const fu::str& id, fu::view<s_SolvedNode> args, s_Reorder& reorder, fu::vec<fu::vec<s_Target>>& conversions, const s_Flags flags, const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    fu::str error {};
    const s_Target ret = tryMatch__mutargs_A8RYaxmX(fu::str(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (ret)
        return ret;
    else
    {
        error = ((("Bad call to "_fu + (target ? str_3AjvLtSQ(GET_emAmLQ3D(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module) : qID_3PsDzMvu(id))) + (args ? ((" with args ("_fu + join_jCe9HYtv(map_k0hbaidA(args, ss, _helpers, _here, ctx, module), ", "_fu)) + ")"_fu) : fu::str{})) + ": "_fu);
        const s_Target debug = tryMatch__mutargs_A8RYaxmX(fu::str(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (debug)
            BUG_V2MSl2gg(x7E_gCeFmDFw("Did match on second pass: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(debug, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
        else
            fail_Ulv2WHKu(error, ss, _helpers, _here, ctx, module);

    };
}

static s_SolvedNode solveCall_HzBO8Cm0(fu::str&& id, /*MOV*/ fu::vec<s_SolvedNode>&& args, const s_Flags flags, const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (id || target)
    {
        const s_Flags qualified = (flags & s_Flags_F_COMPOUND_ID);
        const s_Scope& misc_scope = (qualified ? dequalify_andGetScope_3b0R6943(id, ss, _helpers, _here, ctx, module) : (*(const s_Scope*)fu::NIL));
        s_Reorder reorder {};
        fu::vec<fu::vec<s_Target>> conversions {};
        const s_Target callTargIdx = match__mutargs_IWShj7np(misc_scope, !qualified, id, args, reorder, conversions, flags, target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        return CallerNode_SJHMcAaU(id, s_Target(callTargIdx), static_cast<fu::vec<s_SolvedNode>&&>(args), reorder, conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    }
    else
        BUG_V2MSl2gg("solveCall: No id, no target."_fu, ss, _helpers, _here, ctx, module);

}

static const s_Type& Scope_lookupType_nf7me08O(const fu::str& id, const s_Flags flags, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_SolvedNode callsite = solveCall_HzBO8Cm0(fu::str(id), fu::vec<s_SolvedNode>{}, flags, s_Target{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (GET_emAmLQ3D(callsite.target, ss, _helpers, _here, ctx, module).kind != s_kind_type)
        fail_Ulv2WHKu((("No type "_fu + qBAD_3PsDzMvu(id)) + " in scope."_fu), ss, _helpers, _here, ctx, module);
    else if (callsite.items)
        fail_Ulv2WHKu("Scope_lookupType: Wasting time setting up callargs."_fu, ss, _helpers, _here, ctx, module);
    else
        return GET_emAmLQ3D(callsite.target, ss, _helpers, _here, ctx, module).type;

}

static const s_Type& evalTypeParam_BoCAENML(const fu::str& id, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Type* _0;
    return *(_0 = &(get_XmCAq2jw(ss._typeParams, id).matched)) ? *_0 : *(_0 = &(Scope_lookupType_nf7me08O((id ? id : fail_Ulv2WHKu("Falsy type param id."_fu, ss, _helpers, _here, ctx, module)), s_Flags{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))) ? *_0 : fail_Ulv2WHKu((("No type param "_fu + qID_3PsDzMvu(id)) + " in scope."_fu), ss, _helpers, _here, ctx, module);
}

static s_Type evalTypeAnnot_NMH9TBVW(const s_Node& node, const bool TODO_FIX_typeof_dontStripRefs, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
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
                return add_ref_XBf6EmLx(T_ejhgfPxu(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), Lifetime_temporary, _here, ctx);
            }
            else if (node.value == "&mut"_fu)
            {
                return add_mutref_XBf6EmLx(T_ejhgfPxu(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), Lifetime_temporary, _here, ctx);
            }
            else if (node.value == "[]"_fu)
                return createArray_i5AzHnyb(T_ejhgfPxu(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
            else if (node.value == "[:]"_fu)
            {
                return createSlice_Sedu2ErD(T_ejhgfPxu(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), Lifetime_temporary, _here, ctx);
            }
            else if (node.value == "typeof"_fu)
            {
                /*MOV*/ s_Type type = solveNode_xfI3NW7o(only_a6qr8qgs(node.items), (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options).type;
                if (type.vfacts & s_VFacts_Typename)
                {
                    _here = only_a6qr8qgs(node.items).token;
                    fail_Ulv2WHKu(((("Redundant "_fu + qBAD_3PsDzMvu("typeof"_fu)) + ", this is a type, not a value: "_fu) + humanizeType_adoPoPLu(type, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                }
                else
                {
                    if (!TODO_FIX_typeof_dontStripRefs)
                        type = clear_Typename_40rRB6L8(relax_typeParam_40rRB6L8(s_Type(type)));

                    return /*NRVO*/ type;
                };
            };
        };
    }
    else if ((node.kind == s_kind_arrlit) && (node.items.size() == 1))
    {
        return createSlice_Sedu2ErD(T_ejhgfPxu(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), Lifetime_temporary, _here, ctx);
    }
    else if (node.kind == s_kind_definit)
        return s_Type(t_zeroes);

    /*MOV*/ s_Type exprType = ((node.kind == s_kind_typeparam) ? s_Type(evalTypeParam_BoCAENML(node.value, ss, _notes, _current_fn, _helpers, _here, ctx, module, options)) : solveNode_xfI3NW7o(node, (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options).type);
    if (!s_VFacts((exprType.vfacts & s_VFacts_Typename)))
        fail_Ulv2WHKu(("Invalid type annotation: evaluates to a value, not a type."_fu + " Consider wrapping it in typeof()."_fu), ss, _helpers, _here, ctx, module);
    else
        return clear_Typename_40rRB6L8(static_cast<s_Type&&>(exprType));

}

static fu::str TODO_FIX_getSpecPat_4KhXN7Tl(const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target& spec_of = (!_current_fn.out.target ? _current_fn.out.target : EXT_7eVl0gy6(_current_fn.out.target, ss, ctx, module).spec_of);
    if (!spec_of)
        return ""_fu;
    else
    {
        /*MOV*/ fu::str specPat = ""_fu;
        for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
        {
            const s_SolvedNode& arg = _current_fn.out.items[i];
            const s_SolvedNode& arg_1 = ((arg.kind == s_kind_letdef) ? GET_emAmLQ3D(arg.target, ss, _helpers, _here, ctx, module).solved : arg);
            if (!specPat)
            {
                specPat = "("_fu;
                appendGlobal_bpRG0scY(specPat, spec_of);
            };
            specPat += ":"_fu;
            specPat += serializeType_NOIpmQqe(arg_1.type, "TODO_FIX_getSpecPat"_fu);
        };
        if (specPat)
            specPat += ")"_fu;

        return /*NRVO*/ specPat;
    };
}

                                #ifndef DEF_STRUCT_MEMBERS
                                #define DEF_STRUCT_MEMBERS
inline constexpr int STRUCT_MEMBERS = 1;
                                #endif

static s_SolvedNode solveMember_YyoYdHuX(const s_Node& node, const bool isPrimDecl, const s_Type& primType, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.kind == s_kind_let)
    {
        if (!isPrimDecl && node.items[LET_INIT] && (node.items[LET_INIT].kind != s_kind_definit))
            fail_Ulv2WHKu(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node.value) + "`."_fu), ss, _helpers, _here, ctx, module);
        else
        {
            /*MOV*/ s_SolvedNode ret = solveLetLike_dontTouchScope_ydooB2u9(node, (*(const s_Type*)fu::NIL), primType, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            ret.type.vfacts = s_VFacts{};
            return /*NRVO*/ ret;
        };
    }
    else
        BUG_V2MSl2gg(x7E_gCeFmDFw("solveStructMembers_1: "_fu, str_ZGqrvxJv(node.kind)), ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_map_akw1Okmefoi
                                #define DEF_map_akw1Okmefoi
inline fu::vec<s_SolvedNode> map_akw1Okme(fu::view<s_Node> a, const bool isPrimDecl, const s_Type& primType, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::vec<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember_YyoYdHuX(a[i], isPrimDecl, primType, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_q_USAGE_bitsize
                                #define DEF_q_USAGE_bitsize
extern const int q_USAGE_bitsize;
                                #endif

static fu::str getRecursionError_5ABeQliy(const s_Struct& s, const s_Type& out_type, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < s.items.size(); i++)
    {
        const s_Target item = target_NWTdzsfF(s.items[i]);
        const s_Type& itemType = GET_emAmLQ3D(item, ss, _helpers, _here, ctx, module).type;
        if (isStruct_jSb6u57z(itemType.vtype))
        {
            fu::str rec = ""_fu;
            if ((itemType.vtype.canon == out_type.vtype.canon) || (rec = getRecursionError_5ABeQliy(lookupUserType_Dk03wXlJ(itemType, ss, _helpers, _here, ctx, module), out_type, ss, _current_fn, _helpers, _here, ctx, module)))
            {
                return ("\n\t\tvia "_fu + explainWhichFn_9BM72ZzG(item, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn, _helpers, _here, ctx, module)) + rec;
            };
        };
    };
    return ""_fu;
}

                                #ifndef DEF_add_HFuH3ZyJMv7
                                #define DEF_add_HFuH3ZyJMv7
inline void add_HFuH3ZyJ(fu::vec<int>& a, fu::view<int> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const int X = a[x];
        const int Y = b[y];
        const int cmp = x3Cx3E_mJGU9byO(X, Y);
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
        a += fu::get_view(b, y);

}
                                #endif

static void field_packOffset_HhBTglVa(s_Overload& o, const int memberFlatOffset, const int memberFlatCount, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int packed = (memberFlatOffset | (memberFlatCount << 16));
    if (o.kind == s_kind_field)
    {
        o.solved.helpers = s_Helpers { packed };
    }
    else
        BUG_V2MSl2gg("field_packOffset: Not a field."_fu, ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_unless_oob_tDd5KGnR17k
                                #define DEF_unless_oob_tDd5KGnR17k
inline const s_Node& unless_oob_tDd5KGnR(fu::view<s_Node> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_Node*)fu::NIL);

}
                                #endif

inline static bool l_27_43_ViyAIGme(const int import, fu::vec<int>& structImports)
{
    return add_jzOp5jol(structImports, import);
}

                                #ifndef DEF_each_wREeadvYJ4l
                                #define DEF_each_wREeadvYJ4l
inline void each_wREeadvY(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu::vec<int>& structImports)
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
                l_27_43_ViyAIGme(items[i_1], structImports);

            i0 = ss.end;
        };
    };
}
                                #endif

inline static bool l_27_44_o2sHMW1V(const s_SolvedNode& member)
{
    return !is_rx_copy_GSunVkiW(member.type);
}

                                #ifndef DEF_some_pHcWYcBYPWb
                                #define DEF_some_pHcWYcBYPWb
inline bool some_pHcWYcBY(fu::view<s_SolvedNode> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_SolvedNode& item = a[i];
        if (l_27_44_o2sHMW1V(item))
            return true;

    };
    return false;
}
                                #endif

static s_SolvedNode __solveStruct_kbXV2I4a(const bool solve, const s_Node& node, const s_Target& into, const bool TODO_FIX_useSpecPath, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const fu::str& origId = node.value;
    fu::str _0 {};
    fu::str _1 {};
    fu::str name = (origId ? fu::str(origId) : (_1 = ((_0 = fu::str((_current_fn.out.target ? GET_emAmLQ3D(_current_fn.out.target, ss, _helpers, _here, ctx, module).name : (*(const fu::str*)fu::NIL)))) ? static_cast<fu::str&&>(_0) : "Anon"_fu), (static_cast<fu::str&&>(_1) + (_current_fn.TODO_FIX_unique++ ? x7E_gCeFmDFw("_"_fu, fu::i64dec(_current_fn.TODO_FIX_unique++)) : fu::str{}))));

    {
        fu::str unique = ""_fu;
        each_ZvhfrCZG(ss._typeParams, unique, ss, _helpers, _here, ctx, module);
        if (unique)
            name += ("_"_fu + hash62_nHEuzL2I(unique, 11));

    };
    const s_kind kind = node.kind;
    const bool isStruct = (kind == s_kind_struct);
    const bool isUnion = (kind == s_kind_union);
    const bool isPrimDecl = (!isStruct ? !isUnion : false);
    /*MOV*/ s_Type basePrimType {};
    fu::str baseprim {};
    if (isPrimDecl)
    {
        const s_Node& baseannot = node.items[STRUCT_BASE];
        basePrimType = (baseannot ? evalTypeAnnot_NMH9TBVW(baseannot, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_Type(t_u8));
        baseprim = getBasePrimitive_CP1q4geP(basePrimType, ss, _helpers, _here, ctx, module);
    };
    const s_DeclAsserts asserts = node.asserts;
    s_Target out_target { into };
    /*MOV*/ s_Type out_type {};
    int flatCount = (isPrimDecl ? 1 : 0);
    int declDepth = 0;
    if (out_target)
        out_type = GET_emAmLQ3D(out_target, ss, _helpers, _here, ctx, module).type;
    else
    {
        fu::str specPat = ((!origId && TODO_FIX_useSpecPath) ? TODO_FIX_getSpecPat_4KhXN7Tl(ss, _current_fn, _helpers, _here, ctx, module) : fu::str{});
        out_type = initStruct_6PfOvswQ(kind, baseprim, name, asserts, flatCount, specPat, module);
        out_target = createRawTypedef_rDHIpaKD(origId, s_Type(out_type), node.flags, name, s_SolverStatus_SS_LAZY, ss, module);
        EXT_mut_JHD4gxS4(out_target, ss, module).tEmplate = createTemplate_OUGBkyoP(node, ss, _current_fn);
    };
    if (!solve)
        return createEmpty_3tvTwH58(s_kind_empty, t_void, out_target, _here);
    else
    {
        const s_Target solvingFnort0 = exchange_jPHBkujO(ss._solvingFnort, s_Target(out_target));
        fu_DEFER(ss._solvingFnort = solvingFnort0);
        GET_mut_uE8Nb6mH(out_target, ss, module).status |= s_SolverStatus_SS_DID_START;
        const int helpers0 = _helpers.size();
        const int helpers_data0 = ss._helpers_data.size();
        fu_DEFER(
        {
            _helpers.shrink(helpers0);
            ss._helpers_data.shrink(helpers_data0);
        });
        push_lQ0cD0js(s_HelpersData { s_Target((out_target ? out_target : BUG_V2MSl2gg((("solveStruct: no out_target: `"_fu + origId) + "`."_fu), ss, _helpers, _here, ctx, module))), s_SolverPass{}, fu::str{}, s_HelpersMask_HM_Struct, 0, 0, s_Type{}, s_Type{}, fu::vec<s_Type>{}, s_Postdom{}, s_Postdom{}, s_EventsSnap{}, s_Helpers{} }, ss, _helpers);
        /*MOV*/ fu::vec<s_Target> structConverts {};
        /*MOV*/ fu::vec<int> structImports {};
        int non_triv = (!is_rx_copy_GSunVkiW(out_type) ? -1 : 0);
        s_Type primType = (isPrimDecl ? clear_Typename_40rRB6L8(s_Type((out_type ? out_type : BUG_V2MSl2gg("Falsy isPrimDecl.out_type"_fu, ss, _helpers, _here, ctx, module)))) : s_Type{});
        fu::view<s_Node> items = (!node.items ? node.items : node.items[STRUCT_MEMBERS].items);
        fu::vec<s_SolvedNode> members = map_akw1Okme(items, isPrimDecl, primType, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

        {
            fu::vec<s_ScopeItem>& innerScope = lookupUserType_mut_FnbaZnpH(out_type.vtype.canon, module).items;
            if (!innerScope && members)
            {
                const bool isUnscoped = !!(node.flags & s_Flags_F_USING);
                fu::vec<s_Argument> args = (!isPrimDecl ? fu::vec<s_Argument> { fu::slate<1, s_Argument> { s_Argument { "this"_fu, fu::str{}, despeculateStruct_40rRB6L8(s_Type(out_type)), s_SolvedNode{}, s_Flags{}, s_Target{}, s_BitSet{}, s_BitSet{} } } } : fu::vec<s_Argument> { fu::slate<1, s_Argument> { s_Argument { "This"_fu, fu::str{}, into_Typename_40rRB6L8(s_Type(out_type)), (isUnscoped ? createEmpty_3tvTwH58(s_kind_empty, into_Typename_40rRB6L8(s_Type(out_type)), s_Target{}, _here) : s_SolvedNode{}), s_Flags{}, s_Target{}, s_BitSet{}, s_BitSet{} } } });
                for (int i = 0; i < members.size(); i++)
                {
                    const fu::str& id = items[i].value;
                    const s_Flags isPredicate = (items[i].flags & s_Flags_F_PREDICATE);
                    const s_Target target = Scope_create_B5w8Fu3I(ss._scope, (!isPrimDecl ? s_kind_field : s_kind_enumv), (id ? id : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module)), (*(const s_Type*)fu::NIL), (s_Flags_F_PUB | isPredicate), s_SolverStatus{}, 0, module);
                    s_Extended& ext = EXT_mut_JHD4gxS4(target, ss, module);
                    ext.args = args;
                    ext.min = ((isUnscoped && isPrimDecl) ? 0 : args.size());
                    ext.max = args.size();
                    ext.tEmplate.node.token = items[i].token;
                    Scope_set_pOqhE364(innerScope, id, target, false);
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
                        const s_Target field_target = target_NWTdzsfF(item);
                        s_Overload& field = GET_mut_uE8Nb6mH(field_target, ss, module);
                        field.type = member.type;
                        const bool member_isStruct = isStruct_jSb6u57z(member.type.vtype);
                        const s_Struct& member_userType = (member_isStruct ? lookupUserType_Dk03wXlJ(member.type, ss, _helpers, _here, ctx, module) : (*(const s_Struct*)fu::NIL));
                        const int memberFlatCount = getFlatCount_XVsnoQiv(member.type.vtype, ctx, module);

                        {
                            const int popcount_expect = min_mJGU9byO(memberFlatCount, q_USAGE_bitsize);
                            unsigned BL_20_v {};
                            if (!((__builtin_popcount((__extension__ (
                            {
                                const s_Type& type = member.type;
                                BL_20_v = ((type.vtype.quals & q_USAGE));
                            (void)0;}), BL_20_v)) == popcount_expect) || member_userType))
                                BUG_V2MSl2gg("member.type.usage popcount != memberFlatCount"_fu, ss, _helpers, _here, ctx, module);

                        };
                        if (isStruct_jSb6u57z(member.type.vtype))
                            declDepth = max_mJGU9byO(declDepth, (member_userType.declDepth + 1));

                        fu::str recursionError = (member_isStruct ? getRecursionError_5ABeQliy(member_userType, out_type, ss, _current_fn, _helpers, _here, ctx, module) : fu::str{});
                        if (recursionError)
                            fail_Ulv2WHKu(((("Type "_fu + qBAD_3PsDzMvu(name)) + " is self-recursive:\n"_fu) + recursionError), ss, _helpers, _here, ctx, module);
                        else
                        {
                            const int memberFlatOffset = (!isPrimDecl ? flatCount : 0);
                            if (!isPrimDecl)
                                flatCount += memberFlatCount;

                            if (!non_triv && !is_trivial_XVsnoQiv(member.type.vtype, ctx, module))
                                non_triv = (i + 1);

                            if (member.flags & s_Flags_F_USING)
                            {
                                structConverts.push(target_NWTdzsfF(item));
                                const int m = modidOfOrigin_u9sdbuWn(field.type);
                                if (m && (m != module.modid))
                                    add_jzOp5jol(structImports, m);

                                add_HFuH3ZyJ(structImports, lookupTypeImports_XVsnoQiv(field.type.vtype, ctx, module));
                            };
                            if (!isPrimDecl)
                                field_packOffset_HhBTglVa(field, memberFlatOffset, memberFlatCount, ss, _helpers, _here, ctx, module);

                        };
                    }
                    else
                        BUG_V2MSl2gg("solveStructMembers_4: field id mismatch."_fu, ss, _helpers, _here, ctx, module);

                };
                if (isPrimDecl)
                {
                    const bool sIgned = (baseprim[0] == 'i');
                    const bool uNsigned = (baseprim[0] == 'u');
                    fu::view<char> size_str = fu::get_view(baseprim, 1);
                    const fu::u8 size = ((size_str == "8"_fu) ? fu::u8(8u) : ((size_str == "16"_fu) ? fu::u8(16u) : ((size_str == "32"_fu) ? fu::u8(32u) : ((size_str == "64"_fu) ? fu::u8(64u) : ((size_str == "128"_fu) ? fu::u8(128u) : BUG_V2MSl2gg(("Enum auto-incrementer: unknown prim size: "_fu + size_str), ss, _helpers, _here, ctx, module))))));
                    s_Intlit last {};
                    for (int i_1 = 0; i_1 < innerScope.size(); i_1++)
                    {
                        s_SolvedNode& init = GET_mut_uE8Nb6mH(target_NWTdzsfF(innerScope[i_1]), ss, module).solved;
                        const s_SolvedNode& member = members[i_1];
                        init = member.items[LET_INIT];
                        _here = member.token;
                        if (init)
                        {
                            _here = init.token;
                            if (init.kind == s_kind_int)
                            {
                                last = Intlit_sNwIFkW3(init.value);
                                if (last.error)
                                    fail_Ulv2WHKu(last.error, ss, _helpers, _here, ctx, module);
                                else
                                    continue;

                            }
                            else
                                last.error = "Cannot auto-increment, please provide an explicit value."_fu;

                        };
                        if (last.error)
                            fail_Ulv2WHKu(last.error, ss, _helpers, _here, ctx, module);
                        else if (last.negative)
                        {
                            fail_Ulv2WHKu("Previous constant is negative, not sure how to increment, please specify an explicit value."_fu, ss, _helpers, _here, ctx, module);
                        }
                        else
                        {
                            /*MOV*/ s_Intlit next = Intlit_LmjxY9JB(((kind == s_kind_flags) ? (i_1 ? (last.absval << 1ull) : 1ull) : (last.absval + 1ull)), false, fu::str{}, uNsigned, sIgned, 10ull);
                            if (next.error || (next.absval > last.absval))
                            {
                                const fu::u8 minsize = (sIgned ? next.minsize_i : next.minsize_u);
                                if (minsize > size)
                                    fail_Ulv2WHKu((x7E_gCeFmDFw((x7E_gCeFmDFw("Primitive range exhausted: requires "_fu, fu::u64dec(minsize)) + " bits, got "_fu), fu::u64dec(size)) + "."_fu), ss, _helpers, _here, ctx, module);
                                else
                                {
                                    last = next;
                                    if (sIgned || uNsigned)
                                    {
                                        init = SolvedNode_clCALdMt(s_kind_int, primType, s_Flags{}, x7E_gCeFmDFw((next.negative ? "-"_fu : fu::str{}), fu::u64dec(next.absval)), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
                                    }
                                    else
                                        fail_Ulv2WHKu(("Cannot auto-increment this type: "_fu + baseprim), ss, _helpers, _here, ctx, module);

                                };
                            }
                            else
                                fail_Ulv2WHKu((next.error ? static_cast<fu::str&&>(next.error) : "Failed to auto-increment, range exhausted."_fu), ss, _helpers, _here, ctx, module);

                        };
                    };
                };
            }
            else
                BUG_V2MSl2gg((((x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("solveStructMembers_3: field lens mismatch: "_fu, fu::i64dec(innerScope.size())) + " vs "_fu), fu::i64dec(members.size())) + "/"_fu), fu::i64dec(items.size())) + ": `struct "_fu) + name) + "`."_fu), ss, _helpers, _here, ctx, module);

        };
        const int non_triv_1 = non_triv;
        if (non_triv_1 && s_DeclAsserts((asserts & s_DeclAsserts_A_TRIVIAL)))
            fail_Ulv2WHKu((("Struct is not "_fu + qKW_3PsDzMvu("trivial"_fu)) + ((non_triv_1 < 0) ? ((" because it is "_fu + qKW_3PsDzMvu("nocopy"_fu)) + "."_fu) : (" because of non-trivial member "_fu + qID_3PsDzMvu(unless_oob_tDd5KGnR(items, (non_triv_1 - 1)).value)))), ss, _helpers, _here, ctx, module);
        else
        {
            each_wREeadvY(ss._scope.imports, ss._ss.imports, 0, structImports);

            {
                bool CHANGE = false;
                if (is_rx_copy_GSunVkiW(out_type) && some_pHcWYcBY(members))
                {
                    CHANGE = true;
                    out_type = make_non_copyable_40rRB6L8(s_Type(out_type));
                };
                if (!isStruct && !isUnion)
                {
                    if (!(flatCount == 1))
                        BUG_V2MSl2gg(x7E_gCeFmDFw((((x7E_gCeFmDFw("Bad flat count: "_fu, str_ZGqrvxJv(kind)) + " "_fu) + name) + " flatCount="_fu), fu::i64dec(flatCount)), ss, _helpers, _here, ctx, module);

                };

                {
                    s_Struct& s = lookupUserType_mut_FnbaZnpH(out_type.vtype.canon, module);
                    s.target = (out_target ? out_target : BUG_V2MSl2gg("No struct/out_target."_fu, ss, _helpers, _here, ctx, module));
                    s.converts = static_cast<fu::vec<s_Target>&&>(structConverts);
                    s.imports = static_cast<fu::vec<int>&&>(structImports);
                    const int flat0 = s.flatCount;
                    const bool triv0 = s.all_triv;
                    s.flatCount = flatCount;
                    s.declDepth = declDepth;
                    s.all_triv = !non_triv_1;
                    if (!(CHANGE))
                        CHANGE = ((flat0 != s.flatCount) || (triv0 != s.all_triv));

                    if (GET_emAmLQ3D(s.target, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_DID_START)
                    {

                        {
                            const int actual = getFlatCount_XVsnoQiv(out_type.vtype, ctx, module);
                            if (actual != flatCount)
                                BUG_V2MSl2gg(x7E_gCeFmDFw((x7E_gCeFmDFw("getFlatCount actual="_fu, fu::i64dec(actual)) + " expect="_fu), fu::i64dec(flatCount)), ss, _helpers, _here, ctx, module);

                        };
                        USAGE_setMaxUsage_1rUpvgQK(out_type, flatCount);
                    }
                    else
                        BUG_V2MSl2gg("Setting stuff but missing SS_DID_START."_fu, ss, _helpers, _here, ctx, module);

                };
                int min = 0;
                /*MOV*/ fu::vec<s_Argument> args {};
                if (isPrimDecl)
                {
                    args.push(s_Argument { "value"_fu, fu::str{}, static_cast<s_Type&&>(basePrimType), s_SolvedNode{}, s_Flags{}, s_Target{}, s_BitSet{}, s_BitSet{} });
                }
                else
                {
                    int N = members.size();
                    if (N && isUnion)
                        N = 1;

                    for (int i = 0; i < N; i++)
                    {
                        const s_SolvedNode& member = members[i];
                        s_SolvedNode _2 {};
                        /*MOV*/ s_Argument arg = s_Argument { fu::str((member.value ? member.value : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module))), fu::str{}, s_Type((member.type ? member.type : BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module))), ((_2 = s_SolvedNode(member.items[LET_INIT])) ? static_cast<s_SolvedNode&&>(_2) : (isUnion ? createDefinit_ER0vXD5i(member.type, ss, _helpers, _here, ctx, module) : s_SolvedNode{})), (member.flags & s_Flags_F_MUSTNAME), s_Target{}, s_BitSet{}, s_BitSet{} };
                        if (!arg.dEfault)
                            min++;

                        args.push(static_cast<s_Argument&&>(arg));
                    };
                };
                const int max = args.size();
                if (max && !min)
                    min++;

                s_Extended& ext = EXT_mut_JHD4gxS4(out_target, ss, module);
                ext.min = min;
                ext.max = max;
                ext.args = static_cast<fu::vec<s_Argument>&&>(args);
                const int mustUpdate = (CHANGE ? EPH_rI6gXXKb(out_target, ss, module).callers.size() : 0);
                s_Overload& overload = GET_mut_uE8Nb6mH(out_target, ss, module);
                overload.type = static_cast<s_Type&&>(out_type);
                if (mustUpdate)
                    overload.status |= s_SolverStatus_SS_UPDATED;

            };
            lazySolveEnd_ZqULxTfD(out_target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            return s_SolvedNode{};
        };
    };
}

static s_SolvedNode uPrepStruct_GoNcB3ar(const s_Node& node, const bool TODO_FIX_useSpecPath, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    return __solveStruct_kbXV2I4a(false, node, s_Target{}, TODO_FIX_useSpecPath, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

static s_SolvedNode unorderedPrep_A_YmvrFmzv(const s_Node& node, const bool TODO_FIX_useSpecPath, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_kind kind = node.kind;
    if (kind == s_kind_fn)
        return uPrepFn_A_AULLsBpm(node, ss, _current_fn, _helpers, _here, ctx, module);
    else if (isTypeDecl_4G8nHCpA(kind))
        return uPrepStruct_GoNcB3ar(node, TODO_FIX_useSpecPath, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else
        BUG_V2MSl2gg((x7E_gCeFmDFw("TODO: unorderedPrep_A("_fu, str_ZGqrvxJv(node.kind)) + ")."_fu), ss, _helpers, _here, ctx, module);

}

static void unorderedPrep_B_CmGbrAiR(fu::view<s_Node> nodes, fu::view<s_SolvedNode> results, const int unorderedClass, s_SolverState& ss, const s_Module& module)
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
            s_Ephemeral& eph = EPH_mut_i08XmyeL(target, ss, module);
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

static fu::vec<s_SolvedNode> solveNodes_OBTKdcXG(fu::view<s_Node> nodes, const s_DeadBreak dead_brk, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const s_StaticEval static_eval_brk, const bool TODO_FIX_useSpecPath, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::vec<s_SolvedNode> result {};
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_Node& node = nodes[i];
        if (!(!node))
        {
            const int unorderedClass = unorderedClassify_j0FXxmzA(node.kind);
            if (!unorderedClass)
            {
                HERE_hEi2PUi5(node.token, _here);
                const bool last = (i == (nodes.size() - 1));
                const s_Type& type = ((last && use_type_last) ? type_last : type_all);
                s_SolvedNode solved = solveNode_xfI3NW7o(node, type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                result += s_SolvedNode(solved);
                if (is_never_FfV8Zuj5(solved.type) && dead_brk && ((dead_brk != s_DeadBreak_DeadBreak_Only_WhileSolvingRecursion) || is_AssumeNever_WhileSolvingRecursion_GSunVkiW(solved.type)))
                {
                    if (i < (nodes.size() - 1))
                    {
                        const s_SolverNotes note = s_SolverNotes_N_DeadCode;
                        const s_SolverState& ss_1 = ss;
                        if (note & options.break_notes)
                            fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                        else
                            _notes |= note;

                    };
                    break;
                }
                else if (static_eval_brk)
                {
                    const s_StaticEval ae_item = tryAbstractEvalAsBool_OmcawlSX(solved, (i == (nodes.size() - 1)), ss, _current_fn, _helpers, _here, ctx, module);
                    if (ae_item == static_eval_brk)
                        break;

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
                    const s_Node& node_1 = (*(_0 = &(nodes[i_1])) ? *_0 : BUG_V2MSl2gg("solveNodes, prep-a: falsy node"_fu, ss, _helpers, _here, ctx, module));
                    if (unorderedClassify_j0FXxmzA(node_1.kind) != unorderedClass)
                    {
                        i1 = i_1;
                        break;
                    }
                    else
                    {
                        HERE_hEi2PUi5(node_1.token, _here);
                        result += unorderedPrep_A_YmvrFmzv(node_1, TODO_FIX_useSpecPath, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    };
                };
                if (i1 > i0)
                {
                    i = (i1 - 1);
                    unorderedPrep_B_CmGbrAiR(fu::get_view(nodes, i0, i1), fu::get_view(result, (i0 + offset), (i1 + offset)), unorderedClass, ss, module);
                    bool repeat = true;
                    while (repeat)
                    {
                        repeat = false;
                        for (int i_2 = i0; i_2 < i1; i_2++)
                        {
                            const s_Node* _1;
                            const s_Node& node_1 = (*(_1 = &(nodes[i_2])) ? *_1 : BUG_V2MSl2gg("solveNodes, solve: falsy node"_fu, ss, _helpers, _here, ctx, module));
                            HERE_hEi2PUi5(node_1.token, _here);
                            const s_Target& into = result[(i_2 + offset)].target;
                            if (lazySolveStart_djaF7il8(into, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
                                repeat = true;

                        };
                    };
                }
                else
                {
                    BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
                };
            };
        };
    };
    return /*NRVO*/ result;
}

static s_SolvedNode solveRoot_gMz6SXsx(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Helpers helpers = s_Helpers { _helpers.size() };
    push_lQ0cD0js(s_HelpersData{}, ss, _helpers);
    fu::vec<s_SolvedNode> items = solveNodes_OBTKdcXG(node.items, s_DeadBreak_DeadBreak_Always, t_void, (*(const s_Type*)fu::NIL), false, s_StaticEval{}, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (is_never_FfV8Zuj5(if_last_GN4mikiy(items).type))
    {
        _here = last_GN4mikiy(items).token;
        fail_Ulv2WHKu("Noreturn during static init: this program will never finish booting."_fu, ss, _helpers, _here, ctx, module);
    }
    else
    {
        /*MOV*/ s_SolvedNode root = SolvedNode_clCALdMt(s_kind_root, t_void, s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, helpers, _here);
        runAllPasses_PccI5bd0(root, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        return /*NRVO*/ root;
    };
}

static s_SolvedNode solveArgID_6Hw4A6Rh(const s_Node& node, const s_Type& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_SolvedNode expr = solveNode_xfI3NW7o(only_a6qr8qgs(node.items), type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return solved_ImEnL8ng(node, expr.type, fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, _here);
}

static s_SolvedNode solveCall_OI5IlGj4(const s_Node& node, const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::vec<s_SolvedNode> args = solveNodes_OBTKdcXG(node.items, s_DeadBreak_DeadBreak_Only_WhileSolvingRecursion, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, s_StaticEval{}, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (is_AssumeNever_WhileSolvingRecursion_GSunVkiW(if_last_GN4mikiy(args).type))
        return s_SolvedNode(last_GN4mikiy(args));
    else
        return solveCall_HzBO8Cm0(fu::str(node.value), static_cast<fu::vec<s_SolvedNode>&&>(args), node.flags, target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

}

static s_SolvedNode solveArrlit_HHg66VEa(const s_Node& node, const s_Type& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_Type itemType = (type ? tryClear_sliceable_dB532Fe7(type.vtype) : s_Type{});
    if (!itemType && isStruct_jSb6u57z(type.vtype))
        return solveCall_OI5IlGj4(node, s_Target(lookupUserType_Dk03wXlJ(type, ss, _helpers, _here, ctx, module).target), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else
    {
        /*MOV*/ fu::vec<s_SolvedNode> args = solveNodes_OBTKdcXG(node.items, s_DeadBreak_DeadBreak_Always, itemType, (*(const s_Type*)fu::NIL), false, s_StaticEval{}, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (is_never_FfV8Zuj5(if_last_GN4mikiy(args).type))
        {

            {
                const s_SolverNotes note = s_SolverNotes_N_DeadArrlit;
                const s_SolverState& ss_1 = ss;
                if (note & options.break_notes)
                    fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                else
                    _notes |= note;

            };
            return createBlock_UZ3zi9cx(t_never, static_cast<fu::vec<s_SolvedNode>&&>(args), s_Helpers{}, ss, _helpers, _here, ctx, module);
        }
        else if (!(node.flags & s_Flags_F_NAMED_ARGS))
            return createArrlit_GhCOY9XZ(static_cast<fu::vec<s_SolvedNode>&&>(args), itemType, ss, _helpers, _here, ctx, module, options);
        else
            fail_Ulv2WHKu("TODO: solveArrlit: tryMatch by [ argnames: ... ] without function name."_fu, ss, _helpers, _here, ctx, module);

    };
}

static s_SolvedNode createBool_um3jgb3S(const bool value, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return createBool_259f8rFk((value ? "true"_fu : "false"_fu), s_Type(t_bool), ss, _helpers, _here, ctx, module);
}

static s_SolvedNode createNot_Zdj9DBsT(const s_SolvedNode& item, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (item.kind == s_kind_bool)
    {
        if (item.value == "true"_fu)
            return createBool_um3jgb3S(false, ss, _helpers, _here, ctx, module);
        else if (item.value == "false"_fu)
            return createBool_um3jgb3S(true, ss, _helpers, _here, ctx, module);
        else
            BUG_V2MSl2gg(("Invalid bool literal: "_fu + qBAD_3PsDzMvu(item.value)), ss, _helpers, _here, ctx, module);

    }
    else
    {
        s_Type type { t_bool };
        const s_StaticEval ae = tryAbstractEvalAsBool_OmcawlSX(item, false, ss, _current_fn, _helpers, _here, ctx, module);
        if (ae)
            type.vfacts = ((ae == s_StaticEval_SE_True) ? s_VFacts_AlwaysFalse : s_VFacts_AlwaysTrue);

        return SolvedNode_clCALdMt(s_kind_not, type, s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(item) } }, s_Target{}, s_Helpers{}, _here);
    };
}

static s_SolvedNode solveNot_kjQbSuaf(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_SolvedNode item = solveNode_xfI3NW7o(only_a6qr8qgs(node.items), t_proposition, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    _here = node.token;
    return createNot_Zdj9DBsT(item, ss, _current_fn, _helpers, _here, ctx, module);
}

static s_SolvedNode solveIf_n3Rp2vSN(const s_Node& node, const s_Type& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_ScopeMemo scope0 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
    fu_DEFER(Scope_pop_5cTQENbb(ss._scope, scope0, _helpers));
    /*MOV*/ s_SolvedNode cond = solveNode_xfI3NW7o(node.items[0], t_proposition, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (is_never_FfV8Zuj5(cond.type))
        return /*NRVO*/ cond;
    else
    {
        const s_StaticEval ae_cond = tryAbstractEvalAsBool_OmcawlSX(cond, false, ss, _current_fn, _helpers, _here, ctx, module);
        if (ae_cond)
        {
            s_SolvedNode _0 {};
            return (_0 = solveNode_xfI3NW7o(node.items[((ae_cond == s_StaticEval_SE_True) ? 1 : 2)], type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), createBlock_IBT2J1Wh(static_cast<s_SolvedNode&&>(cond), static_cast<s_SolvedNode&&>(_0), ss, _helpers, _here, ctx, module));
        }
        else
        {
            /*MOV*/ s_SolvedNode cons = solveNode_xfI3NW7o(node.items[1], type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            fu_DEFER(Scope_pop_5cTQENbb(ss._scope, scope0, _helpers));
            /*MOV*/ s_SolvedNode alt = solveNode_xfI3NW7o(node.items[2], type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            _here = node.token;
            return createIf_ayEiHZB3(cond, static_cast<s_SolvedNode&&>(cons), static_cast<s_SolvedNode&&>(alt), s_Type(type), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        };
    };
}

static s_SolvedNode solveOr_NavoFjAD(const s_Node& node, const s_Type& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_ScopeMemo scope0 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
    fu_DEFER(Scope_pop_5cTQENbb(ss._scope, scope0, _helpers));
    /*MOV*/ fu::vec<s_SolvedNode> items = solveNodes_OBTKdcXG(node.items, s_DeadBreak_DeadBreak_Always, (is_void_FfV8Zuj5(type) ? t_proposition : type), type, true, s_StaticEval_SE_True, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return createOr_6Eo1FhDy(static_cast<fu::vec<s_SolvedNode>&&>(items), s_Type(type), ss, _current_fn, _helpers, _here, ctx, module);
}

static s_SolvedNode solveAnd_eabNHJ4F(const s_Node& node, const s_Type& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_ScopeMemo scope0 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
    fu_DEFER(Scope_pop_5cTQENbb(ss._scope, scope0, _helpers));
    const bool staticEvalBrk = ((type == t_void) || propositionOK_hoadAQC0(type, _here, ctx));
    /*MOV*/ fu::vec<s_SolvedNode> items = solveNodes_OBTKdcXG(node.items, s_DeadBreak_DeadBreak_Always, t_proposition, type, true, (staticEvalBrk ? s_StaticEval_SE_False : s_StaticEval{}), false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return createAnd_w6k6Jw1i(static_cast<fu::vec<s_SolvedNode>&&>(items), s_Type(type), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

static s_SolvedNode solveLetStatement_IlxCZBQ5(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.kind == s_kind_let)
        return solveNode_xfI3NW7o(node, t_void, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else
        BUG_V2MSl2gg((x7E_gCeFmDFw("Expected a `let` statement, got: `"_fu, str_ZGqrvxJv(node.kind)) + "`."_fu), ss, _helpers, _here, ctx, module);

}

static s_SolvedNode solveLoop_MpKpflMl(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_ScopeMemo scope0 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
    fu_DEFER(Scope_pop_5cTQENbb(ss._scope, scope0, _helpers));
    const int brk_idx = _helpers.size();
    int BL_1_v {};
    push_lQ0cD0js(s_HelpersData { s_Target{}, s_SolverPass{}, fu::str(node.value), s_HelpersMask((s_HelpersMask_HM_Anon | s_HelpersMask_HM_CanBreak)), (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v), GET_next_local_index_m7ZM3Mg2(ss, _current_fn), s_Type{}, s_Type(t_void), fu::vec<s_Type>{}, s_Postdom{}, s_Postdom{}, s_EventsSnap{}, s_Helpers{} }, ss, _helpers);
    const s_Node& n_init = node.items[LOOP_INIT];
    const s_Node& n_pre_cond = node.items[LOOP_PRE_COND];
    const s_Node& n_pre = node.items[LOOP_PRE];
    const s_Node& n_body = node.items[LOOP_BODY];
    const s_Node& n_post = node.items[LOOP_POST];
    const s_Node& n_post_cond = node.items[LOOP_POST_COND];
    /*MOV*/ s_SolvedNode init = (n_init ? solveLetStatement_IlxCZBQ5(n_init, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
    if (is_never_FfV8Zuj5(init.type))
    {

        {
            const s_SolverNotes note = s_SolverNotes_N_DeadLoopInit;
            const s_SolverState& ss_1 = ss;
            if (note & options.break_notes)
                fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
            else
                _notes |= note;

        };
        return /*NRVO*/ init;
    }
    else
    {
        /*MOV*/ s_SolvedNode pre_cond = (n_pre_cond ? solveNode_xfI3NW7o(n_pre_cond, t_proposition, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode pre = (n_pre ? solveBlock_Rlp5uE9C(n_pre, t_void, 0, s_HelpersMask_HM_LoopPreheader, (*(const fu::str*)fu::NIL), 0, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode body = (n_body ? solveBlock_Rlp5uE9C(n_body, t_void, 0, s_HelpersMask_HM_CanBreak, (*(const fu::str*)fu::NIL), 0, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode post = (n_post ? solveBlock_Rlp5uE9C(n_post, t_void, 0, s_HelpersMask_HM_CanBreak, (*(const fu::str*)fu::NIL), 0, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode post_cond = (n_post_cond ? solveNode_xfI3NW7o(n_post_cond, t_proposition, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
        const s_Helpers& h = _helpers[brk_idx];
        const s_Type& type = ((!pre_cond && !post_cond && !s_HelpersMask((ss._helpers_data[h.index].mask & s_HelpersMask_HM_LabelUsed))) ? t_never : t_void);
        return SolvedNode_clCALdMt(s_kind_loop, type, s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<6, s_SolvedNode> { static_cast<s_SolvedNode&&>(init), static_cast<s_SolvedNode&&>(pre_cond), static_cast<s_SolvedNode&&>(pre), static_cast<s_SolvedNode&&>(body), static_cast<s_SolvedNode&&>(post), static_cast<s_SolvedNode&&>(post_cond) } }, s_Target{}, h, _here);
    };
}

static s_Helpers& Scope_lookupReturn_WJ2HHw4V(fu::view<char> id, const bool lambdaOK, const s_SolverState& ss, fu::view_mut<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
    fail_Ulv2WHKu((("No return `"_fu + id) + "` in scope."_fu), ss, _helpers, _here, ctx, module);
}

                                #ifndef DEF_each_NwL80lS9ESg
                                #define DEF_each_NwL80lS9ESg
inline void each_NwL80lS9(fu::view<s_ScopeSkip> a, int& i)
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

static s_Helpers& Scope_lookupLabel_WLhqWy7r(fu::view<char> id, const bool cont, const s_SolverState& ss, fu::view_mut<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
                        each_NwL80lS9(ss._ss.helpers, i);
                        if (!(i < _helpers.size()))
                            fail_Ulv2WHKu((((("Cannot "_fu + qBAD_3PsDzMvu(("continue :"_fu + id))) + " from here, did you mean to "_fu) + qKW_3PsDzMvu("break"_fu)) + "?"_fu), ss, _helpers, _here, ctx, module);

                    };
                };
                return _helpers.mutref(i);
            };
        };
    };
    fail_Ulv2WHKu((("No label `"_fu + id) + "` in scope."_fu), ss, _helpers, _here, ctx, module);
}

static s_SolvedNode solveDeclExpr_i0PXsJG1(const s_Node& node, const bool TODO_FIX_useSpecPath, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ s_SolvedNode res { only_GN4mikiy(solveNodes_OBTKdcXG((fu::slate<1, s_Node> { s_Node(node) }), s_DeadBreak_DeadBreak_Dont, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, s_StaticEval{}, TODO_FIX_useSpecPath, ss, _notes, _current_fn, _helpers, _here, ctx, module, options)) };
    if (res.target && (GET_emAmLQ3D(res.target, ss, _helpers, _here, ctx, module).kind == s_kind_type))
        res.type = GET_emAmLQ3D(res.target, ss, _helpers, _here, ctx, module).type;

    return /*NRVO*/ res;
}

static s_SolvedNode solveJump_2dqG9Kb1(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Helpers h { ((node.kind == s_kind_return) ? Scope_lookupReturn_WJ2HHw4V(node.value, !!(node.flags & s_Flags_F_IMPLICIT), ss, _helpers, _here, ctx, module) : Scope_lookupLabel_WLhqWy7r(node.value, (node.kind == s_kind_continue), ss, _helpers, _here, ctx, module)) };
    const s_Node& n_expr = if_only_a6qr8qgs(node.items);
    /*MOV*/ s_SolvedNode expr = (!n_expr ? createEmpty_3tvTwH58(s_kind_empty, t_void, s_Target{}, _here) : (unorderedClassify_j0FXxmzA(n_expr.kind) ? solveDeclExpr_i0PXsJG1(n_expr, (ss._helpers_data[h.index].target == _current_fn.out.target), ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : solveNode_xfI3NW7o(n_expr, (ss._helpers_data[h.index].ret_actual ? clear_vfacts_40rRB6L8(s_Type(ss._helpers_data[h.index].ret_actual)) : s_Type(ss._helpers_data[h.index].ret_expect)), ss, _notes, _current_fn, _helpers, _here, ctx, module, options)));
    if (is_never_FfV8Zuj5(expr.type))
        return /*NRVO*/ expr;
    else
    {
        if (ss._helpers_data[h.index].ret_expect)
            convertIfNeeded_O16mMgHA(expr, s_Type(ss._helpers_data[h.index].ret_expect), "Actual return type does not match annotation"_fu, (*(const fu::str*)fu::NIL), (*(const fu::str*)fu::NIL), false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

        int BL_4_v {};
        if (ss._helpers_data[h.index].local_of != (__extension__ (
        {
            const s_Target& t = _current_fn.out.target;
            BL_4_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_4_v))
        {
            add_jzOp5jol(_current_fn.effects.far_jumps, ss._helpers_data[h.index].local_of);
            return SolvedNode_clCALdMt(s_kind___far_jump, t_never, node.flags, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { static_cast<s_SolvedNode&&>(expr) } }, s_Target{}, h, _here);
        }
        else
            return solveJump_finish_u7T3VdOh(node.flags, expr, h, ss, _helpers, _here, ctx, module);

    };
}

static s_SolvedNode solveInt_UVltXceU(const s_Node& node, const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return solved_ImEnL8ng(node, solveInt_4mim8lyG(node.value, type, ss, _helpers, _here, ctx, module, options), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveReal_GiSZSn3o(const s_Node& node, const s_Type& type, const s_TokenIdx& _here)
{
    return solved_ImEnL8ng(node, solveReal_D8StToEJ(type), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveString_sB7P2cpk(const s_Node& node, const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return solved_ImEnL8ng(node, solveString_UFuarO8J(node.value, type, ctx, module, options), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveChar_Ekd3sZTG(const s_Node& node, const s_TokenIdx& _here)
{
    return solved_ImEnL8ng(node, t_byte, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static void visit_57yVGEpD(const int modid, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!Scope_import_JpwYQuNq(modid, ss, _helpers, _here, ctx, module)))
    {
        const s_Scope& s = ctx.modules[modid].out.solve.scope;
        for (int i = 0; i < s.imports.size(); i++)
            visit_57yVGEpD(s.imports[i], ss, _helpers, _here, ctx, module);

    };
}

static s_SolvedNode solveImport_l7ZcDoms(const s_Node& node, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Module& m = findModule_QnEP4499(node.value, ss, _helpers, _here, ctx, module);
    visit_57yVGEpD(m.modid, ss, _helpers, _here, ctx, module);
    if (node.flags & s_Flags_F_PUB)
    {
        if (_current_fn.scope0)
            fail_Ulv2WHKu("Cannot pub import from here."_fu, ss, _helpers, _here, ctx, module);
        else
            add_jzOp5jol(ss._pub_imports, m.modid);

    };
    return createEmpty_3tvTwH58(s_kind_empty, t_void, s_Target{}, _here);
}

static s_SolvedNode solveDefer_acPrG2GW(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ s_SolvedNode item = solveNode_xfI3NW7o(only_a6qr8qgs(node.items), t_void, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return solved_ImEnL8ng(node, t_void, fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { static_cast<s_SolvedNode&&>(item) } }, s_Target{}, _here);
}

static s_SolvedNode solveTryCatch_BCQfsMMc(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.items.size() == 3)
    {
        const s_ScopeMemo scope0 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
        /*MOV*/ s_SolvedNode tRy = solveNode_xfI3NW7o(node.items[0], t_void, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        Scope_pop_5cTQENbb(ss._scope, scope0, _helpers);
        const s_ScopeMemo scope0_1 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
        /*MOV*/ s_SolvedNode err = solveLetStatement_IlxCZBQ5(node.items[1], ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        /*MOV*/ s_SolvedNode cAtch = solveNode_xfI3NW7o(node.items[2], t_void, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        Scope_pop_5cTQENbb(ss._scope, scope0_1, _helpers);
        if ((err.kind == s_kind_letdef) && isAssignableAsArgument_E3uCShzQ(GET_emAmLQ3D(err.target, ss, _helpers, _here, ctx, module).solved.type, t_string, false, _here, ctx))
        {
            const s_Type& type = ((is_never_FfV8Zuj5(tRy.type) && is_never_FfV8Zuj5(cAtch.type)) ? t_never : t_void);
            return solved_ImEnL8ng(node, type, fu::vec<s_SolvedNode> { fu::slate<3, s_SolvedNode> { static_cast<s_SolvedNode&&>(tRy), static_cast<s_SolvedNode&&>(err), static_cast<s_SolvedNode&&>(cAtch) } }, s_Target{}, _here);
        }
        else
            fail_Ulv2WHKu(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), ss, _helpers, _here, ctx, module);

    }
    else
    {
        BUG_V2MSl2gg(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

static s_SolvedNode solveTypeCast_lBDMGHuk(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Node& left = node.items[0];
    const s_Node& right = node.items[1];
    s_Type expect = evalTypeAnnot_NMH9TBVW(right, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    /*MOV*/ s_SolvedNode actual = solveNode_xfI3NW7o(left, expect, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    convertIfNeeded_O16mMgHA(actual, expect, "Cannot convert: "_fu, (*(const fu::str*)fu::NIL), (*(const fu::str*)fu::NIL), false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return /*NRVO*/ actual;
}

static s_SolvedNode solveTypeAssert_SIdVh7fJ(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_Map_KlcLuPSIt9g typeParams0 = steal_AYMWowQg(ss._typeParams);
    fu_DEFER(std::swap(ss._typeParams, typeParams0));
    bool _0 {};
    return (_0 = evalTypePattern_VGcTurMu(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), createBool_um3jgb3S(_0, ss, _helpers, _here, ctx, module));
}

static s_SolvedNode solveTypeParam_DBfasIQK(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Type* _0;
    return (_0 = &(evalTypeParam_BoCAENML(node.value, ss, _notes, _current_fn, _helpers, _here, ctx, module, options)), solved_ImEnL8ng(node, *_0, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here));
}

static s_SolvedNode solveAddrOfFn_MpAkaNtV(const s_Node& node, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const fu::str& id = node.value;
    s_Type type = X_addrofTarget_N5pMnDZT(solveAddrOfFn_D4uoFhbA(fu::str(id), node.flags, ss, _helpers, _here, ctx, module));
    return createEmpty_3tvTwH58(s_kind_empty, type, s_Target{}, _here);
}

                                #ifndef DEF_starts_t2TApdnqRc8
                                #define DEF_starts_t2TApdnqRc8
inline bool starts_t2TApdnq(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

                                #ifndef DEF_ends_t2TApdnqRc8
                                #define DEF_ends_t2TApdnqRc8
inline bool ends_t2TApdnq(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

static void l_27_51_osIHCdhj(s_Node& item, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    const int idx = ((item.value == placeholder) ? 0 : (starts_t2TApdnq(item.value, prefix) ? 0 : (ends_t2TApdnq(item.value, suffix) ? (item.value.size() - placeholder.size()) : fu::lfind(item.value, inside))));
    if ((idx >= 0))
    {
        if (item.kind == s_kind_call)
            item.value.splice(idx, placeholder.size(), field.id);
        else if (item.kind == s_kind_str)
            item.value.splice(idx, placeholder.size(), field.id);

    };
}

static void walk_e6LfyD0V(s_Node& node, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    for (int i = 0; i < node.items.size(); i++)
    {
        s_Node* _0;
        (_0 = &(node.items.mutref(i)), walk_e6LfyD0V(*_0, placeholder, prefix, suffix, inside, field));
    };
    l_27_51_osIHCdhj(node, placeholder, prefix, suffix, inside, field);
}

inline static s_Node astReplace_rJlSlWv8(const s_Node& node, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    /*MOV*/ s_Node node_1 { node };
    walk_e6LfyD0V(node_1, placeholder, prefix, suffix, inside, field);
    return /*NRVO*/ node_1;
}

static s_SolvedNode solveForFieldsOf_THFq5txv(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    fu::view<char> placeholder = node.value;
    const s_Node& body_template = node.items[1];
    fu::str prefix = (placeholder + "_"_fu);
    fu::str suffix = ("_"_fu + placeholder);
    fu::str inside = (("_"_fu + placeholder) + "_"_fu);
    s_Type _0 {};
    fu::view<s_ScopeItem> fields = (_0 = evalTypeAnnot_NMH9TBVW(node.items[0], false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), lookupUserType_Dk03wXlJ(static_cast<s_Type&&>(_0), ss, _helpers, _here, ctx, module)).items;
    fu::vec<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        items_ast += astReplace_rJlSlWv8(body_template, placeholder, prefix, suffix, inside, field);
    };
    /*MOV*/ fu::vec<s_SolvedNode> items = solveNodes_OBTKdcXG(items_ast, s_DeadBreak_DeadBreak_Always, t_void, (*(const s_Type*)fu::NIL), false, s_StaticEval{}, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    const s_Type& type = (is_never_FfV8Zuj5(if_last_GN4mikiy(items).type) ? t_never : t_void);
    return createBlock_UZ3zi9cx(type, static_cast<fu::vec<s_SolvedNode>&&>(items), s_Helpers{}, ss, _helpers, _here, ctx, module);
}

static void compilerBreak_IzVdySJk(const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::str debug = "\nCompiler break:"_fu;
    if (_current_fn.out.target)
    {
        const s_Target& t = _current_fn.out.target;
        debug += (x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("\n    Current fn: "_fu, str_3AjvLtSQ(GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at ("_fu), fu::i64dec(int(unsigned((t._packed & 0xfffffull))))) + ", "_fu), fu::i64dec(int(unsigned(((t._packed >> 20ull) & 0xfffffull))))) + "):"_fu);
        fu::view<s_Overload> locals = EXT_7eVl0gy6(t, ss, ctx, module).locals;
        for (int i = 0; i < locals.size(); i++)
        {
            const s_Overload& item = locals[i];
            debug += x7E_gCeFmDFw("\n        "_fu, str_3AjvLtSQ(item, ss, _helpers, _here, ctx, module));
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

static s_SolvedNode executeCompilerPragma_GHe9EM0V(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.value != "break"_fu)
    {
        fu::vec<s_SolvedNode> _0 {};
        return (_0 = solveNodes_OBTKdcXG(node.items, s_DeadBreak_DeadBreak_Dont, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, s_StaticEval{}, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), SolvedNode_clCALdMt(s_kind_pragma, t_void, s_Flags{}, node.value, static_cast<fu::vec<s_SolvedNode>&&>(_0), s_Target{}, s_Helpers{}, _here));
    }
    else
    {
        compilerBreak_IzVdySJk(ss, _current_fn, _helpers, _here, ctx, module);
        return createEmpty_3tvTwH58(s_kind_empty, t_void, s_Target{}, _here);
    };
}

static s_SolvedNode createUnwrap_jhSbnBks(const s_TokenIdx& _here)
{
    return SolvedNode_clCALdMt(s_kind_unwrap, t_void, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode solveNode_xfI3NW7o(const s_Node& node, const s_Type& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    HERE_hEi2PUi5(node.token, _here);
    const s_kind k = node.kind;
    if (k == s_kind_root)
        return solveRoot_gMz6SXsx(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_block)
        return solveBlock_Rlp5uE9C(node, type, 0, s_HelpersMask_HM_CanBreak, (*(const fu::str*)fu::NIL), 0, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_argid)
        return solveArgID_6Hw4A6Rh(node, type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_let)
        return solveLet_K4QDx2st(node, (*(const s_Type*)fu::NIL), type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_call)
    {
        return solveCall_OI5IlGj4(node, s_Target{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    }
    else if (k == s_kind_arrlit)
        return solveArrlit_HHg66VEa(node, type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_not)
        return solveNot_kjQbSuaf(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_if)
        return solveIf_n3Rp2vSN(node, type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_or)
        return solveOr_NavoFjAD(node, type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_and)
        return solveAnd_eabNHJ4F(node, type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_loop)
        return solveLoop_MpKpflMl(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_break)
        return solveJump_2dqG9Kb1(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_return)
        return solveJump_2dqG9Kb1(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_continue)
        return solveJump_2dqG9Kb1(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_int)
        return solveInt_UVltXceU(node, type, ss, _helpers, _here, ctx, module, options);
    else if (k == s_kind_real)
        return solveReal_GiSZSn3o(node, type, _here);
    else if (k == s_kind_str)
        return solveString_sB7P2cpk(node, type, _here, ctx, module, options);
    else if (k == s_kind_char)
        return solveChar_Ekd3sZTG(node, _here);
    else if (k == s_kind_bool)
        return createBool_259f8rFk(node.value, s_Type(t_bool), ss, _helpers, _here, ctx, module);
    else if (k == s_kind_definit)
        return solveDefinit_ITxkOehH(type, ss, _helpers, _here, ctx, module);
    else if (k == s_kind_import)
        return solveImport_l7ZcDoms(node, ss, _current_fn, _helpers, _here, ctx, module);
    else if (k == s_kind_defer)
        return solveDefer_acPrG2GW(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_try)
        return solveTryCatch_BCQfsMMc(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_typecast)
        return solveTypeCast_lBDMGHuk(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_typeassert)
        return solveTypeAssert_SIdVh7fJ(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_typeparam)
        return solveTypeParam_DBfasIQK(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_addroffn)
        return solveAddrOfFn_MpAkaNtV(node, ss, _helpers, _here, ctx, module);
    else if (k == s_kind_forfieldsof)
        return solveForFieldsOf_THFq5txv(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_pragma)
        return executeCompilerPragma_GHe9EM0V(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_empty)
    {
        return createEmpty_3tvTwH58(s_kind_empty, t_void, s_Target{}, _here);
    }
    else if (k == s_kind_unwrap)
        return createUnwrap_jhSbnBks(_here);
    else if (unorderedClassify_j0FXxmzA(k))
        return solveDeclExpr_i0PXsJG1(node, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else
        fail_Ulv2WHKu((x7E_gCeFmDFw("TODO: solveNode("_fu, str_ZGqrvxJv(k)) + ")."_fu), ss, _helpers, _here, ctx, module);

}

inline static void l_27_93_077fs6qV(const s_Argument& host_arg, const int i, fu::vec<s_BitSet>& _may_alias, fu::vec<int>& _argPos_1b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!is_ref_gBx1AgSx(host_arg.type)))
    {
        int BL_2_v {};
        grow_if_oob_yq7gHTQs(_argPos_1b, (__extension__ (
        {
            const s_Target& t = host_arg.target;
            BL_2_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
        (void)0;}), BL_2_v)) = (i + 1);
        const s_BitSet& may_alias = ((host_arg.flags & s_Flags_F_WRITTEN_TO) ? host_arg.may_alias : (*(const s_BitSet*)fu::NIL));
        if (may_alias)
        {
            if (!is_mutref_hoadAQC0(host_arg.type, _here, ctx))
                BUG_V2MSl2gg("ensureArgSequencing: F_WRITTEN_TO but !is_mutref"_fu, ss, _helpers, _here, ctx, module);
            else if (!has_QTGTghRU(may_alias, i))
                BUG_V2MSl2gg("ensureArgSequencing: may_alias does not list self [1]"_fu, ss, _helpers, _here, ctx, module);

            grow_if_oob_ibzQKImi(_may_alias, i) = s_BitSet(may_alias);
        };
    };
}

                                #ifndef DEF_each_JuhEaDRxsaa
                                #define DEF_each_JuhEaDRxsaa
inline void each_JuhEaDRx(fu::view<s_Argument> a, fu::vec<s_BitSet>& _may_alias, fu::vec<int>& _argPos_1b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < a.size(); i++)
        l_27_93_077fs6qV(a[i], i, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);

}
                                #endif

inline static void l_27_94_gSRZqYfS(const int locid, s_Regions& regions, const bool dontUse_may_alias, fu::view<s_BitSet> _may_alias, fu::view<int> _argPos_1b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (locid && add_once_U5p6nLOf(regions.locals, (locid - 1)))
    {
        const int argPos_1b = unless_oob_iUAHahkV(_argPos_1b, locid);
        if (argPos_1b)
        {
            const int i = (argPos_1b - 1);
            const s_BitSet& may_alias = (!dontUse_may_alias ? unless_oob_yoNyPnA3(_may_alias, i) : (*(const s_BitSet*)fu::NIL));
            if (may_alias)
            {
                if (!has_QTGTghRU(may_alias, i))
                    BUG_V2MSl2gg("ensureArgSequencing: may_alias does not list self [2]"_fu, ss, _helpers, _here, ctx, module);
                else
                    regions.arguments |= may_alias;

            }
            else
                add_U5p6nLOf(regions.arguments, i);

        };
        flag_H0fafkKX(regions, Lifetime_climbType_n6B2CKz9(GET_emAmLQ3D(nested_nWBn0vig(locid, ss), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module).lifetime, dontUse_may_alias, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_Lifetime_each_l8QQyRyTJK2
                                #define DEF_Lifetime_each_l8QQyRyTJK2
inline void Lifetime_each_l8QQyRyT(const s_Lifetime& lifetime, s_Regions& regions, const bool dontUse_may_alias, fu::view<s_BitSet> _may_alias, fu::view<int> _argPos_1b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parseRegion(offset, chars);
        l_27_94_gSRZqYfS(int(((r & 1u) ? 0u : (r >> 1u))), regions, dontUse_may_alias, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static void flag_H0fafkKX(s_Regions& regions, const s_Lifetime& lifetime, const bool dontUse_may_alias, fu::view<s_BitSet> _may_alias, fu::view<int> _argPos_1b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    Lifetime_each_l8QQyRyT(lifetime, regions, dontUse_may_alias, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
}

                                #ifndef DEF_steal_thakp6lrIY3
                                #define DEF_steal_thakp6lrIY3
inline s_Unsequenced steal_thakp6lr(s_Unsequenced& v)
{
    /*MOV*/ s_Unsequenced ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

static void operator|=(s_Regions& a, const s_Regions& b)
{
    a.locals |= b.locals;
    a.arguments |= b.arguments;
}

static void operator|=(s_Unsequenced& events, const s_Unsequenced& other)
{
    events.writes |= other.writes;
    events.moves |= other.moves;
    events.reads |= other.reads;
}

static void clear_hyplxgHA(s_Regions& regions)
{
    clear_gNKGEQWi(regions.locals);
    clear_gNKGEQWi(regions.arguments);
}

static void clear_vx3rMJYc(s_Unsequenced& events)
{
    clear_hyplxgHA(events.writes);
    clear_hyplxgHA(events.moves);
    clear_hyplxgHA(events.reads);
}

static bool has_inter_Y66150fZ(const s_Regions& a, const s_Regions& b)
{
    return has_inter_gae63pSm(a.locals, b.locals) || has_inter_gae63pSm(a.arguments, b.arguments);
}

inline static void l_27_95_AjBkE3wY(const int i, const s_Argument& host_arg, const int revSeqIdx, const bool unsequencedOutside, const bool unsequencedHere, s_Unsequenced& outer, s_Unsequenced& parallel, int& MUSTSEQ_mask, fu::view_mut<s_SolvedNode> args, fu::view<s_BitSet> _may_alias, fu::view<int> _argPos_1b, int& _unseqDepth, s_Unsequenced& _inner, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (unsequencedHere)
    {
        if (revSeqIdx == 1)
            parallel = steal_thakp6lr(_inner);
        else if (revSeqIdx > 1)
        {
            parallel |= _inner;
            clear_vx3rMJYc(_inner);
        };
    };
    s_SolvedNode& arg = args.mutref(i);
    s_SolvedNode* BL_4_v;
    s_SolvedNode& arg_1 = ((arg.kind != s_kind_move) ? arg : (__extension__ (
    {
        s_SolvedNode& expr = only_Iovd0TM6(arg.items);
        if (unsequencedOutside)
        {
            flag_H0fafkKX(outer.moves, expr.type.lifetime, false, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
        };
        BL_4_v = &(expr);
    (void)0;}), *BL_4_v));
    visit_yIay3ksG(arg_1, _may_alias, _argPos_1b, _unseqDepth, _inner, ss, _notes, _helpers, _here, ctx, module, options);
    if (unsequencedOutside)
    {
        if (host_arg.flags & s_Flags_F_WRITTEN_TO)
        {
            flag_H0fafkKX(outer.writes, arg_1.type.lifetime, false, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
        };
    };
    if (unsequencedHere)
    {
        fu::never BL_9_v {};
        const s_SolverNotes note = ((has_inter_Y66150fZ(_inner.moves, parallel.reads) || has_inter_Y66150fZ(parallel.moves, _inner.reads)) ? s_SolverNotes_N_MoveMustSeq : ((has_inter_gae63pSm(_inner.writes.locals, parallel.reads.locals) || has_inter_gae63pSm(parallel.writes.locals, _inner.reads.locals)) ? s_SolverNotes_N_BckMustSeq : ((has_inter_gae63pSm(_inner.writes.arguments, parallel.reads.arguments) || has_inter_gae63pSm(parallel.writes.arguments, _inner.reads.arguments)) ? s_SolverNotes_N_AARMustSeq : (__extension__ (
        {
            return;
        (void)0;}), static_cast<fu::never&&>(BL_9_v)))));

        {
            const s_SolverState& ss_1 = ss;
            if (note & options.break_notes)
                fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
            else
                _notes |= note;

        };
        MUSTSEQ_mask |= (1 << (i & 31));
    };
}

                                #ifndef DEF_argsReverse_yf5lvewnKa5
                                #define DEF_argsReverse_yf5lvewnKa5
inline void argsReverse_yf5lvewn(const bool RTL, fu::view<s_Argument> host_args, const bool unsequencedOutside, const bool unsequencedHere, s_Unsequenced& outer, s_Unsequenced& parallel, int& MUSTSEQ_mask, fu::view_mut<s_SolvedNode> args, fu::view<s_BitSet> _may_alias, fu::view<int> _argPos_1b, int& _unseqDepth, s_Unsequenced& _inner, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    int revSeqIdx = 0;
    int lastPass = 1;
    bool ooe_isLast = true;
    for (int pass = 2; pass-- > lastPass; )
    {
        for (int i = host_args.size(); i-- > 0; )
        {
            const s_Argument& host_arg = host_args[i];
            if (!!pass != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_hoadAQC0(host_arg.type, _here, ctx))))
                lastPass = 0;
            else
            {
                l_27_95_AjBkE3wY(i, host_arg, revSeqIdx, unsequencedOutside, unsequencedHere, outer, parallel, MUSTSEQ_mask, args, _may_alias, _argPos_1b, _unseqDepth, _inner, ss, _notes, _helpers, _here, ctx, module, options);
                ooe_isLast = false;
                revSeqIdx++;
            };
        };
    };
}
                                #endif

[[noreturn]] static fu::never BUG_yR0apTos(const s_TokenIdx& token, const fu::str& reason, const s_SolverState& ss, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    _here = token;
    BUG_V2MSl2gg(fu::str(reason), ss, _helpers, _here, ctx, module);
}

static void visit_yIay3ksG(s_SolvedNode& node, fu::view<s_BitSet> _may_alias, fu::view<int> _argPos_1b, int& _unseqDepth, s_Unsequenced& _inner, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (node.kind == s_kind_call)
    {
        const s_Overload& o = GET_emAmLQ3D(node.target, ss, _helpers, _here, ctx, module);
        if (!node.items)
        {
            if ((o.kind == s_kind_var) && _unseqDepth)
            {
                flag_H0fafkKX(_inner.reads, o.type.lifetime, true, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
            };
        }
        else
        {
            const bool RTL = isRTL_N4q4L7uF(o);
            const bool unsequencedOutside = !!_unseqDepth;
            const bool unsequencedHere = (!RTL ? (node.items.size() > 1) : false);
            if (unsequencedHere)
                _unseqDepth++;

            s_Unsequenced outer = steal_thakp6lr(_inner);
            s_Unsequenced parallel {};
            int MUSTSEQ_mask = 0;
            fu::vec<s_Argument> host_args { EXT_7eVl0gy6(node.target, ss, ctx, module).args };
            fu::view_mut<s_SolvedNode> args = node.items;
            if (host_args.size() == args.size())
            {
                argsReverse_yf5lvewn(RTL, host_args, unsequencedOutside, unsequencedHere, outer, parallel, MUSTSEQ_mask, args, _may_alias, _argPos_1b, _unseqDepth, _inner, ss, _notes, _helpers, _here, ctx, module, options);
                if (unsequencedHere)
                    _unseqDepth--;

                node.helpers.index |= MUSTSEQ_mask;
                if (unsequencedOutside)
                {
                    outer |= _inner;
                    outer |= parallel;
                    std::swap(_inner, outer);
                }
                else if (outer)
                    BUG_V2MSl2gg("!unsequencedOutside but outer events non-empty."_fu, ss, _helpers, _here, ctx, module);
                else
                    clear_vx3rMJYc(_inner);

            }
            else
            {
                int BL_12_v {};
                BUG_yR0apTos(node.token, x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("ensureArgSequencing: host_args.len != args.len ("_fu, fu::i64dec(host_args.size())) + " != "_fu), fu::i64dec(args.size())) + "), nestingFnort= "_fu), fu::i64dec((__extension__ (
                {
                    const s_Target& t = ss._nestingFnort;
                    BL_12_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                (void)0;}), BL_12_v))) + " "_fu), str_3AjvLtSQ(GET_emAmLQ3D(ss._nestingFnort, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
            };
        };
    }
    else if (node.kind == s_kind_letdef)
    {
        s_SolvedNode root = steal_LyWpwxOa(GET_mut_uE8Nb6mH(node.target, ss, module).solved);
        visit_yIay3ksG(root, _may_alias, _argPos_1b, _unseqDepth, _inner, ss, _notes, _helpers, _here, ctx, module, options);
        std::swap(root, GET_mut_uE8Nb6mH(node.target, ss, module).solved);
    }
    else
    {
        if (node.kind == s_kind_move)
        {
            if (_unseqDepth && (node.kind == s_kind_move))
            {
                flag_H0fafkKX(_inner.moves, only_GN4mikiy(node.items).type.lifetime, false, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
            };
        };
        for (int i = 0; i < node.items.size(); i++)
        {
            s_SolvedNode* _0;
            (_0 = &(node.items.mutref(i)), visit_yIay3ksG(*_0, _may_alias, _argPos_1b, _unseqDepth, _inner, ss, _notes, _helpers, _here, ctx, module, options));
        };
    };
}

static void nestingFnort_ensureArgSequencing_ei0fLSHK(s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::vec<s_BitSet> _may_alias {};
    fu::vec<int> _argPos_1b {};
    each_JuhEaDRx(EXT_7eVl0gy6(ss._nestingFnort, ss, ctx, module).args, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
    int _unseqDepth = 0;
    s_Unsequenced _inner {};
    s_SolvedNode root = steal_LyWpwxOa(last_Iovd0TM6(GET_mut_uE8Nb6mH(ss._nestingFnort, ss, module).solved.items));
    visit_yIay3ksG(root, _may_alias, _argPos_1b, _unseqDepth, _inner, ss, _notes, _helpers, _here, ctx, module, options);
    std::swap(root, last_Iovd0TM6(GET_mut_uE8Nb6mH(ss._nestingFnort, ss, module).solved.items));
}

static void PASS_runAllVerifiers_Y68ZtQOt(s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (ss._nestingFnort)
    {
        BUG_V2MSl2gg("PASS_runAllVerifiers: non-empty _nestingFnort"_fu, ss, _helpers, _here, ctx, module);
    }
    else
    {
        for (int i = 0; i < ss._scope.overloads.size(); i++)
        {
            const s_Overload& o = ss._scope.overloads[i];
            if (o.kind == s_kind_fn)
            {
                ss._nestingFnort = Target_2jgCJZJY(module.modid, (i + 1), 0);
                nestingFnort_ensureArgSequencing_ei0fLSHK(ss, _notes, _helpers, _here, ctx, module, options);
            };
        };
        ss._nestingFnort = s_Target{};
    };
}

static void Scope_observeDefects_Y8ZCt5Ie(fu::view<s_ScopeItem> items, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    bool hasLets = false;
    bool hasPubTemplates = false;
    fu::vec<s_Target> privates {};
    for (int i = 0; i < items.size(); i++)
    {
        const s_Target t = target_NWTdzsfF(items[i]);
        if (!(int(unsigned((t._packed & 0xfffffull))) != module.modid))
        {
            const s_Overload& o = GET_emAmLQ3D(t, ss, _helpers, _here, ctx, module);
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
        if (note & options.break_notes)
            fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss, _helpers, _here, ctx, module);
        else
            _notes |= note;

    };
    if (privates && hasPubTemplates)
    {

        {
            const s_SolverNotes note = s_SolverNotes_N_SD_ExternPrivates;
            if (note & options.break_notes)
                fail_Ulv2WHKu((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_0xO8zo50(note))) + "."_fu), ss, _helpers, _here, ctx, module);
            else
                _notes |= note;

        };
        for (int i_1 = 0; i_1 < privates.size(); i_1++)
        {
            s_Overload& o = GET_mut_uE8Nb6mH(privates[i_1], ss, module);
            o.flags |= s_Flags_F_EXTERN;
        };
    };
}

s_SolverOutput solve_veJH3XG6(const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_TokenIdx _here {};
    s_SolverState ss {};
    s_SolverNotes _notes {};
    s_CurrentFn _current_fn {};
    fu::vec<s_Helpers> _helpers {};
    ss.shortModuleName = (module.modid ? getShortModuleName_UQKMOJue(module.fname) : fu::str{});
    ss._spec_errors = fu::vec<fu::str> { fu::slate<1, fu::str> { "BUG: Specializer reentry."_fu } };
    ss.TODO_FIX_convert_args = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode{} } };
    ss.TODO_FIX_convert_args.mutref(0).kind = s_kind___convert;
    ss._scope.extended += s_Extended{};
    push_lQ0cD0js(s_HelpersData{}, ss, _helpers);
    if (module.modid)
    {
        ss._scope.imports += module.modid;
        _Scope_import__forceCopy_hAHAQV1M(0, ss, ctx);
    }
    else
    {
        createRawTypedef_rDHIpaKD("i8"_fu, s_Type(t_i8), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("i16"_fu, s_Type(t_i16), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("i32"_fu, s_Type(t_i32), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("i64"_fu, s_Type(t_i64), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("i128"_fu, s_Type(t_i128), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("u8"_fu, s_Type(t_u8), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("u16"_fu, s_Type(t_u16), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("u32"_fu, s_Type(t_u32), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("u64"_fu, s_Type(t_u64), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("u128"_fu, s_Type(t_u128), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("f32"_fu, s_Type(t_f32), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("f64"_fu, s_Type(t_f64), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("bool"_fu, s_Type(t_bool), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("byte"_fu, s_Type(t_byte), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("void"_fu, s_Type(t_void), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_rDHIpaKD("never"_fu, s_Type(t_never), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
    };
    /*MOV*/ s_SolvedNode root = solveNode_xfI3NW7o(s_Node(module.in.parse.root), (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (_current_fn)
        BUG_V2MSl2gg("non-empty _current_fn."_fu, ss, _helpers, _here, ctx, module);
    else
    {
        PASS_runAllVerifiers_Y68ZtQOt(ss, _notes, _helpers, _here, ctx, module, options);
        if (ss._helpers_data[0])
            BUG_V2MSl2gg("non-empty _helpers_data[0]."_fu, ss, _helpers, _here, ctx, module);
        else
        {
            Scope_observeDefects_Y8ZCt5Ie(ss._scope.items, ss, _notes, _helpers, _here, ctx, module, options);
            for (int i = 0; i < ss._warnings.size(); i++)
            {
                const s_Warning& w = ss._warnings[i];
                if (w.token)
                {
                    _here = w.token;
                    fail_Ulv2WHKu(w.message, ss, _helpers, _here, ctx, module);
                };
            };
            return s_SolverOutput { static_cast<s_SolvedNode&&>(root), Scope_exports_KDliHbWi(ss._scope, module.modid, ss._field_items, ss._pub_imports), _notes };
        };
    };
}

#endif
