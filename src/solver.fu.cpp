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
#include <fu/vec/view_swap.h>
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
struct s_TEA;
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
struct s_Shape;
struct s_CodegenOutput;
typedef fu::u8 s_CGDefects;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Profile;
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
struct s_ReverseSpecialization;
struct s_RevSpecPrototype;
struct s_RevSpecInstance;
struct s_RevSpecOutput;
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
struct s_UnpackedOffset;
struct s_Map_S6ornWd95j4;
struct s_NativeHacks;
enum s_ArgQuery: fu::u8;
enum s_ArgRationale: fu::u8;
struct s_StructCanon;
enum s_BorrowCheckPass: fu::u8;
struct s_Map_9nkdZKTSB9h;
struct s_Unsequenced;
struct s_Regions;
fu::str getShortModuleName_dn61tipl(const fu::str&, const s_TokenIdx&, const s_Context&);
s_Type into_Typename_40rRB6L8(s_Type&&);
s_Target Scope_create_j83Ac6jp(s_Scope&, s_kind, const fu::str&, const s_Type&, s_Flags, s_SolverStatus, int, const s_Module&);
void Scope_set_5Z1f2QqZ(s_Scope&, const fu::str&, const s_Target&, bool);
void HERE_hEi2PUi5(const s_TokenIdx&, s_TokenIdx&);
static s_SolvedNode solveNode_dEyN38Q1(const s_Node&, const s_Type&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
bool is_never_FfV8Zuj5(const s_Type&);
unsigned is_AssumeNever_WhileSolvingRecursion_GSunVkiW(const s_Type&);
fu::str qBAD_3PsDzMvu(const fu::str&);
[[noreturn]] fu::never BUG_9SZtRVJ0(fu::str&&, const s_TokenIdx&, const s_Context&);
[[noreturn]] static fu::never fail_Szrpd5G6(const fu::str&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Target Target_2jgCJZJY(int, int, int);
static const s_Overload& GET_oTYbwQb8(const s_Target&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_ClosureID tryParseClosureID_54NQWyOV(fu::view<char>, const s_TokenIdx&, const s_Context&);
fu::str qID_3PsDzMvu(const fu::str&);
fu::str qKW_3PsDzMvu(const fu::str&);
bool isStruct_jSb6u57z(const s_ValueType&);
const s_Struct& lookupUserType_QHDuaMIF(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Type tryClear_sliceable_EA8Wup3K(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
static fu::str humanizeTypeName_CBtYqzzq(const s_Type&, const s_TokenIdx&, const s_Context&, const s_Module&);
bool TODO_FIX_isArray_40rRB6L8(const s_Type&);
fu::str formatTokenCoord_n86xTpVM(const s_TokenIdx&, int, const s_Context&);
[[noreturn]] fu::never FAIL_lTxCw5lL(fu::view<char>, const s_TokenIdx&, const s_Context&);
bool isIrrelevant_40rRB6L8(const s_Type&);
bool isCanonAssignable_IaeizMuX(fu::view<char>, fu::view<char>);
fu::str humanizeQuals_3VLS0hFo(unsigned);
unsigned parse7bit(fu::view<char>, int&);
fu::str qLT_3PsDzMvu(const fu::str&);
const s_Token& _token_xkeOqLCC(const s_TokenIdx&, const s_Context&);
fu::str formatCodeSnippet_IvKXzceX(fu::vec<s_TokenIdx>&&, int, s_CodeFmt, const s_Context&);
static fu::str explainWhichFn_KACWd7In(const s_Target&, fu::view<fu::vec<s_Target>>, fu::view<char>, s_CodeFmt, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_ScopeMemo Scope_snap_dcsfJwX5(const s_Scope&, fu::view<s_Helpers>);
fu::str packAddrOfFn_aofyNfjF(fu::view<s_Target>);
fu::str hash62_nHEuzL2I(fu::view<char>, int);
static s_Type evalTypeAnnot_OIK0vUDc(const s_Node&, bool, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
s_Type add_ref_XBf6EmLx(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type add_mutref_XBf6EmLx(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type createArray_i5AzHnyb(const s_Type&);
s_Type createSlice_Sedu2ErD(const s_Type&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
bool is_Typename_40rRB6L8(const s_Type&);
s_Type relax_typeParam_40rRB6L8(s_Type&&);
s_Type clear_Typename_40rRB6L8(s_Type&&);
fu::str resolveFile_x_aHG8xqFm(const fu::str&, const s_Context&);
void add_U5p6nLOf(s_BitSet&, int);
const fu::vec<int>& lookupTypeImports_QHDuaMIF(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
int modidOfOrigin_u9sdbuWn(const s_Type&);
bool has_QTGTghRU(const s_BitSet&, int);
bool add_once_U5p6nLOf(s_BitSet&, int);
s_Target target_NWTdzsfF(const s_ScopeItem&);
s_Target search_KfdOrUQd(const s_Target&, int&);
s_Target search_ihIw5OEs(fu::view_mut<s_ScopeItem>, fu::view<char>, int&, fu::view<s_ScopeSkip>, bool&, fu::view<s_Target>, fu::view<s_ScopeItem>);
s_Target search_yfyUVvrQ(fu::view<s_ScopeItem>, fu::view<char>, int&);
static void relinkNode_W2lA6R6l(s_SolvedNode&, const s_Target&, const s_Target&, fu::view_mut<s_Overload>, fu::vec<s_Helpers>&, int&, s_SolverState&, const s_CurrentFn&, fu::vec<s_Helpers>&, const s_TokenIdx&, const s_Context&, const s_Module&);
void force_relax_p4VopRXr(s_Type&, unsigned);
unsigned try_relax_c5Z7RHRf(s_Type&, const s_Type&, unsigned);
static void test_node_1Fk3l8OG(const s_SolvedNode&, s_SolverPass, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, s_TokenIdx&, const s_Context&, const s_Module&);
bool is_ref_gBx1AgSx(const s_Type&);
const s_Struct& tryLookupUserType_QHDuaMIF(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
bool isAssignableAsArgument_E3uCShzQ(const s_Type&, const s_Type&, bool, const s_TokenIdx&, const s_Context&);
bool isAssignable_v8EzC34Q(const s_Type&, const s_Type&, bool, bool, const s_TokenIdx&, const s_Context&);
fu::str serializeType_Eouw2usb(const s_ValueType&, fu::view<char>);
s_Lifetime Lifetime_union_YIGC7Sux(const s_Lifetime&, const s_Lifetime&, bool, const s_TokenIdx&, const s_Context&);
bool is_mutref_hoadAQC0(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_zeroes_FfV8Zuj5(const s_Type&);
bool hasStatic_Sd1Oo4TV(const s_Lifetime&);
bool hasTemporary_Sd1Oo4TV(const s_Lifetime&);
s_Type clear_refs_40rRB6L8(s_Type&&);
static void definitWrap_TdvXfwzc(s_SolvedNode&, const s_Type&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
bool isImmediatelyDiscardable_6wzYjnDc(s_kind);
bool is_trivial_QHDuaMIF(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
bool is_zst_QHDuaMIF(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
bool is_rx_copy_GSunVkiW(const s_Type&);
static void propagateType_pH8jMqgi(s_SolvedNode&, const s_Type&, unsigned, const s_Helpers&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
bool is_boolean_3t4EwFeQ(const s_ValueType&);
s_BitSet& operator|=(s_BitSet&, const s_BitSet&);
bool propositionOK_hoadAQC0(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_void_FfV8Zuj5(const s_Type&);
s_Type type_trySuper_2nNLpyR4(const s_Type&, const s_Type&, bool, const s_TokenIdx&, const s_Context&);
static s_SolvedNode createAnd_M01WDdrB(fu::vec<s_SolvedNode>&&, s_Type&&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
s_Type definitType_PeFmd5co(s_Type&&, bool, const s_TokenIdx&, const s_Context&);
bool is_integral_3t4EwFeQ(const s_ValueType&);
bool is_floating_pt_3t4EwFeQ(const s_ValueType&);
s_Type clear_vfacts_40rRB6L8(s_Type&&);
bool is_arithmetic_3t4EwFeQ(const s_ValueType&);
s_Intlit Intlit_sNwIFkW3(fu::view<char>);
bool is_primitive_3t4EwFeQ(const s_ValueType&);
int basePrimPrefixLen_OaQVyIZB(fu::view<char>);
static s_Type tryRetyping_1axCq2Iv(const s_SolvedNode&, const s_Type&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
static void applyRetype_LjVkTUf1(s_SolvedNode&, const s_Type&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
static s_Target tryMatch__mutargs_ZkfSrDkY(fu::str&&, s_Reorder&, fu::vec<fu::vec<s_Target>>&, fu::str&, bool, const s_Scope&, fu::view<s_SolvedNode>, s_Flags, const s_Target&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
s_Type make_field_reference_EIkJMWjY(unsigned, const s_Lifetime&, s_Type&&, int, int, const s_TokenIdx&, const s_Context&);
static void descend_6mpmtWGG(const s_Type&, bool, bool, bool, const s_Type&, bool, const s_Type&, const s_SolvedNode&, const s_Scope&, fu::vec<s_Target>&, fu::vec<s_Target>&, int, const s_SolvedNode&, s_Reorder&, fu::vec<fu::vec<s_Target>>&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
static bool applyConversion_VfaInRao(s_SolvedNode&, fu::view<s_Target>, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
static void visitNode_wt8mNrgI(s_SolvedNode&, int, const s_Target&, s_Map_S6ornWd95j4&, const s_Target&, int, fu::vec<s_Helpers>&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
int getFlatCount_QHDuaMIF(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Lifetime Lifetime_from_PFBW1nI4(int, int, const s_TokenIdx&, const s_Context&);
static s_SolvedNode CallerNode_X3mO7Hwg(const fu::str&, s_Target&&, fu::vec<s_SolvedNode>&&, const s_Reorder&, fu::view<fu::vec<s_Target>>, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
static fu::str qSTACK_implicit_RppLuiFz(const s_Target&, const s_SolvedNode&, fu::view<char>, const s_Type&, fu::view<s_Target>, s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Type type_tryIntersect_33NmLJZR(const s_Type&, const s_Type&, const s_TokenIdx&, const s_Context&);
fu::str serialize_LBuqoCCv(const s_ClosureID&, const s_TokenIdx&, const s_Context&);
static s_SolvedNode inlineExpression_8n84Drwr(const s_Target&, s_SolvedNode&&, s_Map_S6ornWd95j4&&, int, const s_Target&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
static bool Lifetime_allowsMutrefReturn_WvZdiAgU(const s_Lifetime&, int, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Type clear_mutref_40rRB6L8(s_Type&&);
s_Lifetime Lifetime_op_join_dwN33Lug(const s_Lifetime&, fu::view<char>, const s_TokenIdx&, const s_Context&);
void Lifetime_add_PUWFQPIX(s_Lifetime&, const s_Lifetime&, bool, const s_TokenIdx&, const s_Context&);
bool isRTL_N4q4L7uF(const s_Overload&);
fu::str cleanID_j6ljQymd(const fu::str&);
bool isAddrOfFn_gBx1AgSx(const s_Type&);
s_Target parseLocalOrGlobal_qtvefzpE(fu::view<char>, int&);
void Scope_set_pOqhE364(fu::vec<s_ScopeItem>&, const fu::str&, const s_Target&, bool);
void assertPathsValid_F77ZcVgF(fu::view<char>, int, int, bool, int, const s_TokenIdx&, const s_Context&);
void clear_quDuppI6(s_BitSet&, int);
s_Type USAGE_structUsageFromFieldUsage_ngdSJBk9(s_Type&&, int);
static bool trackUse_okCzYN3G(const s_Lifetime&, s_BitSet&, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
unsigned mask_retval_relaxable_Ky43XOkT(const s_Type&, unsigned, const s_TokenIdx&, const s_Context&);
static void ensureLazySolved_jf9BVo46(const s_Target&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
bool Lifetime_has_NRjdLNHo(const s_Lifetime&, int);
static s_Type conversionTailType_kzsICjzv(const s_Type&, fu::view<s_Target>, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
static bool couldRetype_3jHLVkop(const s_SolvedNode&);
static const s_Type& Scope_lookupType_xja9hZcj(const fu::str&, s_Flags, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
void ref_anonymize_ucOr4Guq(s_Type&);
s_Type tryClear_ref_hoadAQC0(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_mutref_hoadAQC0(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_array_lfb8k6Uf(const s_Type&, const s_TokenIdx&, const s_Context&, const s_Module&);
static bool trySolveTypeParams_fduoUjrB(const s_Node&, s_Type&&, fu::vec<s_Warning>&, bool, fu::view<int>, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
fu::view<char> tryGetPattern_sFkr07K7(fu::view<char>);
s_Target parseGlobal_qtvefzpE(fu::view<char>, int&);
bool scan(fu::view<char>, char, int&, bool&);
s_ValueType parseType_rxBOPBNl(fu::view<char>, const s_TokenIdx&, const s_Context&, const s_Module&);
static void intoTombstone_eP7F2cSI(const s_Target&, s_SolverState&, const s_Module&);
static bool evalTypePattern_jcr0vd81(const s_Node&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
bool is_bitfield_3t4EwFeQ(const s_ValueType&);
bool is_unsigned_3t4EwFeQ(const s_ValueType&);
bool is_enum_3t4EwFeQ(const s_ValueType&);
bool is_flags_3t4EwFeQ(const s_ValueType&);
bool is_reinterpretable_QHDuaMIF(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
void Scope_pop_5cTQENbb(s_Scope&, const s_ScopeMemo&, fu::vec<s_Helpers>&);
s_Lifetime Lifetime_makeShared_pCJ6hBta(const s_Lifetime&, int, const s_TokenIdx&, const s_Context&);
s_NativeHacks NativeHacks_aylVahSQ(fu::view<char>);
void add_range_y5kfkU4t(s_BitSet&, int);
bool rem_U5p6nLOf(s_BitSet&, int);
s_BitSet& and_not_assign_Brhxxkwh(s_BitSet&, const s_BitSet&);
bool is_rx_resize_GSunVkiW(const s_Type&);
static void visit_S4XVxygn(const s_Lifetime&, s_Lifetime&, bool&, int, bool, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
bool Lifetime_has_62UtfSbx(const s_Lifetime&, int);
static fu::str qSTACK_XVvwRcb5(const s_Target&, const s_SolvedNode&, int, fu::view<s_Target>, s_ArgQuery, s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_BitSet negated_zHKqtB3x(const s_BitSet&, int);
int popcount_5BwgL1Pz(const s_BitSet&);
s_Lifetime Lifetime_from_w8BwafZY(int, fu::view<char>, const s_TokenIdx&, const s_Context&);
bool isPassByValue_3t4EwFeQ(const s_ValueType&);
static fu::str qSTACK_2m0mr1nY(const s_Target&, const s_SolvedNode&, s_FxMask, fu::view<s_Target>, s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
bool hasAssignment_nLKt53sX(fu::view<char>);
void isRTL_set_Dys3hpLB(s_Overload&, bool);
static bool astChange_j7TL76Cv(const s_SolvedNode&, const s_SolvedNode&);
static fu::vec<s_SolvedNode> solveNodes_11fGwhsU(fu::view<s_Node>, s_DeadBreak, const s_Type&, const s_Type&, bool, s_StaticEval, bool, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
static void runAllPasses_5MvXZq77(s_SolvedNode&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
static bool lazySolveStart_O723BPnd(const s_Target&, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
static void cannotCOW_climbParents_WHLnoTds(const s_Lifetime&, fu::view<int>, const s_SolvedNode&, const s_TokenIdx&, const s_Target&, const s_Argument&, bool, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::view<s_Helpers>, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
s_Lifetime Lifetime_inter_lYlULmp8(const s_Lifetime&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
bool is_sliceable_3t4EwFeQ(const s_ValueType&);
s_Shape getShape_EA8Wup3K(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
static bool type_maybeInside_HP8L2Bym(const s_ValueType&, const s_ValueType&, uint64_t, fu::vec<s_StructCanon>&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_StructCanon parseStructCanon_9HOct2P6(fu::view<char>);
const s_Struct& lookupUserType_hlbT3GcY(const s_StructCanon&, const s_Module&, const s_Context&, const s_TokenIdx&);
static fu::str qSTACK_cow_inside_3sb4aurF(const s_Target&, const s_SolvedNode&, const s_Argument&, const s_TokenIdx&, fu::view<s_Target>, s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
static void cannotCOW_descendChildren_m07UqBHD(int, const s_Lifetime&, fu::view<int>, const s_SolvedNode&, const s_TokenIdx&, const s_Target&, const s_Argument&, bool, s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, s_TokenIdx&, const s_Context&, const s_Module&);
static int needsHardRisk_V1DY0eEu(int, const s_Overload&, const s_SolvedNode&, const s_Target&, const s_Argument&, bool, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Type USAGE_fieldUsageFromStructUsage_nUuDM8fi(s_Type&&, unsigned, int, int);
static void callarg_trackWrites_Wfa4pdTs(const s_Lifetime&, const s_SolverState&, s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
unsigned getMaxUsage_YfHAfesl(int);
bool USAGE_justOneThing_XyuwAq2h(unsigned, int);
static bool isFieldChain_JgEZs3yn(const s_SolvedNode&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
bool is_rx_move_40rRB6L8(const s_Type&);
s_Type make_copyable_40rRB6L8(s_Type&&);
s_Type make_moveable_40rRB6L8(s_Type&&);
static void Lifetime_F_MOVED_FROM_Ei5bGYSv(const s_Lifetime&, s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Type clear_sliceable_EA8Wup3K(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
static bool tryInjectJumps_cDNEgy8R(s_SolvedNode&, const s_Helpers&, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
static void SS_HOIST_returned_locals_ACsQmzEi(const s_Lifetime&, s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Lifetime Lifetime_AAR_KIn2aDsn(int, const s_TokenIdx&, const s_Context&);
void clear_gNKGEQWi(s_BitSet&);
static bool RESOLVE_byAAR_Fzey23bc(int, int, bool, s_BorrowCheckPass, const s_SolverState&, s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
static void bck_node_etixA00n(s_SolvedNode&, const s_SolvedNode&, s_BorrowCheckPass, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::view<s_Helpers>, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
bool Lifetime_hasInter_lYlULmp8(const s_Lifetime&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
fu::vec<int> Lifetime_interLocids_lYlULmp8(const s_Lifetime&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
static bool checkLoopStart_pieGR4ms(int, int, const s_SolverState&);
static s_SolvedNode __solveStruct_KhrF21lw(bool, const s_Node&, const s_Target&, bool, s_SolverState&, s_SolverNotes&, s_CurrentFn&, fu::vec<s_Helpers>&, s_TokenIdx&, const s_Context&, s_Module&, const s_Options&);
fu::str qCODE_3PsDzMvu(const fu::str&);
s_TEA hash_yvYDPKX8(fu::view<char>);
void hash_okLTgNyg(s_TEA&, fu::view<char>);
void appendGlobal_bpRG0scY(fu::str&, const s_Target&);
fu::str createStructCanon_KyLXJEuE(s_kind, fu::view<char>, int, int, fu::view<char>, uint64_t);
unsigned speculateStruct_TyznD8bm(s_DeclAsserts, int);
s_Struct& lookupUserType_mut_qsx9vYdk(fu::view<char>, s_Module&, const s_TokenIdx&, const s_Context&);
s_Type despeculateStruct_40rRB6L8(s_Type&&);
void hash_dDLcy6Ao(s_TEA&, uint64_t);
static fu::str TODO_FIX_getRecursionError_nhCfGxgn(const s_Struct&, const s_Type&, const s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
s_Intlit Intlit_LmjxY9JB(uint64_t, bool, fu::str&&, bool, bool, uint64_t);
s_Type make_non_copyable_40rRB6L8(s_Type&&);
void USAGE_setMaxUsage_TB5Kkwh9(s_Type&, int);
static void visit_MF0jhzkU(int, s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
static void walk_0xzu1MlK(s_Node&, fu::view<char>, fu::view<char>, fu::view<char>, fu::view<char>, const s_ScopeItem&);
void bReak_DX6KImTN();
void hash_KpbyTrxM(s_TEA&, const s_TEA&);
static void sighashNode_q8TBplv7(const s_SolvedNode&, const s_Target&, s_TEA&, s_Map_9nkdZKTSB9h&, fu::vec<s_Target>&, fu::vec<s_Target>&, s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
static const s_TEA& computeFnSighash_txpwDv7f(const s_Target&, s_Map_9nkdZKTSB9h&, fu::vec<s_Target>&, fu::vec<s_Target>&, s_SolverState&, const s_CurrentFn&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
void hash_CwEi37x3(s_TEA&, unsigned);
s_TEA& non_zero_T98svGTs(s_TEA&);
static void flag_4bfUL5uy(s_Regions&, const s_Lifetime&, bool, fu::view<s_BitSet>, fu::view<int>, const s_SolverState&, fu::view<s_Helpers>, const s_TokenIdx&, const s_Context&, const s_Module&);
static void visit_6ex3qFch(s_SolvedNode&, fu::view<s_BitSet>, fu::view<int>, int&, s_Unsequenced&, s_SolverState&, s_SolverNotes&, fu::view<s_Helpers>, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
bool has_inter_gae63pSm(const s_BitSet&, const s_BitSet&);
s_Scope Scope_exports_llrYisu8(const s_Scope&, int, const fu::vec<s_ScopeItem>&, const fu::vec<s_ScopeItem>&, const fu::vec<int>&);

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
    s_kind_definit = 11u,
    s_kind_empty = 12u,
    s_kind_struct = 13u,
    s_kind_union = 14u,
    s_kind_primitive = 15u,
    s_kind_flags = 16u,
    s_kind_enum = 17u,
    s_kind_fn = 18u,
    s_kind_copy = 19u,
    s_kind_move = 20u,
    s_kind_arrlit = 21u,
    s_kind_not = 22u,
    s_kind_call = 23u,
    s_kind_argid = 24u,
    s_kind_root = 25u,
    s_kind_block = 26u,
    s_kind_if = 27u,
    s_kind_or = 28u,
    s_kind_and = 29u,
    s_kind_loop = 30u,
    s_kind_jump = 31u,
    s_kind___far_jump = 32u,
    s_kind_defer = 33u,
    s_kind_try = 34u,
    s_kind_let = 35u,
    s_kind_letdef = 36u,
    s_kind_typecast = 37u,
    s_kind_typeassert = 38u,
    s_kind_typeparam = 39u,
    s_kind_unwrap = 40u,
    s_kind_pragma = 41u,
    s_kind_break = 42u,
    s_kind_return = 43u,
    s_kind_continue = 44u,
    s_kind_import = 45u,
    s_kind_addroffn = 46u,
    s_kind_forfieldsof = 47u,
    s_kind_members = 48u,
    s_kind_fnbranch = 49u,
    s_kind_pattern = 50u,
    s_kind_typeunion = 51u,
    s_kind_typetag = 52u,
    s_kind___relaxed = 53u,
    s_kind___convert = 54u,
    s_kind___preceding_ref_arg = 55u,
    s_kind___no_kind_yet = 56u,
    s_kind___tombstone = 57u,
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
inline constexpr s_Flags s_Flags_F_CALL_HAS_DOT = 1u;
inline constexpr s_Flags s_Flags_F_CALL_HAS_ARGPARENS = 2u;
inline constexpr s_Flags s_Flags_F_CALL_HAS_NAMED_ARGS = 4u;
inline constexpr s_Flags s_Flags_F_OPERATOR = 8u;
inline constexpr s_Flags s_Flags_F_TYPENAME = 16u;
inline constexpr s_Flags s_Flags_F_COMPOUND_ID = 32u;
inline constexpr s_Flags s_Flags_F_ARGID_IS_OPTIONAL = 64u;
inline constexpr s_Flags s_Flags_F_LAX = 128u;
inline constexpr s_Flags s_Flags_F_SHADOW = 256u;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 512u;
inline constexpr s_Flags s_Flags_F_WRITTEN_TO = 1024u;
inline constexpr s_Flags s_Flags_F_MUT = 2048u;
inline constexpr s_Flags s_Flags_F_CONST = 4096u;
inline constexpr s_Flags s_Flags_F_VAL = 8192u;
inline constexpr s_Flags s_Flags_F_REF = 16384u;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 32768u;
inline constexpr s_Flags s_Flags_F_USING = 65536u;
inline constexpr s_Flags s_Flags_F_CONVERSION = 131072u;
inline constexpr s_Flags s_Flags_F_PUB = 262144u;
inline constexpr s_Flags s_Flags_F_EXTERN = 524288u;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 1048576u;
inline constexpr s_Flags s_Flags_F_PREDICATE = 2097152u;
inline constexpr s_Flags s_Flags_F_REST_ARG = 4194304u;
inline constexpr s_Flags s_Flags_F_INJECTED = 8388608u;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 16777216u;
inline constexpr s_Flags s_Flags_F_INLINE = 33554432u;
inline constexpr s_Flags s_Flags_F_LAMBDA = 67108864u;
inline constexpr s_Flags s_Flags_F_COW_INSIDE = 134217728u;

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_F_CALL_HAS_DOT
    | s_Flags_F_CALL_HAS_ARGPARENS
    | s_Flags_F_CALL_HAS_NAMED_ARGS
    | s_Flags_F_OPERATOR
    | s_Flags_F_TYPENAME
    | s_Flags_F_COMPOUND_ID
    | s_Flags_F_ARGID_IS_OPTIONAL
    | s_Flags_F_LAX
    | s_Flags_F_SHADOW
    | s_Flags_F_MUSTNAME
    | s_Flags_F_WRITTEN_TO
    | s_Flags_F_MUT
    | s_Flags_F_CONST
    | s_Flags_F_VAL
    | s_Flags_F_REF
    | s_Flags_F_IMPLICIT
    | s_Flags_F_USING
    | s_Flags_F_CONVERSION
    | s_Flags_F_PUB
    | s_Flags_F_EXTERN
    | s_Flags_F_HOTSWAP
    | s_Flags_F_PREDICATE
    | s_Flags_F_REST_ARG
    | s_Flags_F_INJECTED
    | s_Flags_F_TEMPLATE
    | s_Flags_F_INLINE
    | s_Flags_F_LAMBDA
    | s_Flags_F_COW_INSIDE;
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
inline constexpr s_SolverStatus s_SolverStatus_SS_FN_OOE_RTL = s_SolverStatus(128u);
inline constexpr s_SolverStatus s_SolverStatus_SS_HOIST = s_SolverStatus(256u);
inline constexpr s_SolverStatus s_SolverStatus_SS_UNUSED = s_SolverStatus(512u);
inline constexpr s_SolverStatus s_SolverStatus_SS_MATCHED = s_SolverStatus(1024u);
inline constexpr s_SolverStatus s_SolverStatus_SS_MOVED_FROM = s_SolverStatus(2048u);
inline constexpr s_SolverStatus s_SolverStatus_SS_ARGUMENT = s_SolverStatus(4096u);
inline constexpr s_SolverStatus s_SolverStatus_SS_Debug_AllPassesComplete = s_SolverStatus(8192u);

inline constexpr s_SolverStatus MASK_s_SolverStatus
    = s_SolverStatus_SS_LAZY
    | s_SolverStatus_SS_DID_START
    | s_SolverStatus_SS_DIRTY
    | s_SolverStatus_SS_FINALIZED
    | s_SolverStatus_SS_UPDATED
    | s_SolverStatus_SS_TYPE_RECUR
    | s_SolverStatus_SS_FN_RECUR
    | s_SolverStatus_SS_FN_OOE_RTL
    | s_SolverStatus_SS_HOIST
    | s_SolverStatus_SS_UNUSED
    | s_SolverStatus_SS_MATCHED
    | s_SolverStatus_SS_MOVED_FROM
    | s_SolverStatus_SS_ARGUMENT
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
inline constexpr s_ParseSyntax s_ParseSyntax_PS_PARENS = s_ParseSyntax(1u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL = s_ParseSyntax(2u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_ALWAYS_DISCARD = s_ParseSyntax(4u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_NOT_AN_EXPRESSION = s_ParseSyntax(8u);

inline constexpr s_ParseSyntax MASK_s_ParseSyntax
    = s_ParseSyntax_PS_PARENS
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

                                #ifndef DEF_s_TEA
                                #define DEF_s_TEA
struct s_TEA
{
    unsigned v0;
    unsigned v1;
    explicit operator bool() const noexcept
    {
        return false
            || v0
            || v1
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
    int pub_implicits;
    int pub_converts;
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
            || pub_implicits
            || pub_converts
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
    s_TEA sighash;
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
inline constexpr s_CGDefects s_CGDefects_DuplicateFunctions = s_CGDefects(128u);

inline constexpr s_CGDefects MASK_s_CGDefects
    = s_CGDefects_GNUStmtExpr
    | s_CGDefects_Goto
    | s_CGDefects_PointlessMustSeq
    | s_CGDefects_LocalConstBool
    | s_CGDefects_ConstCast
    | s_CGDefects_PointlessLocal
    | s_CGDefects_IrrelevantLiteral
    | s_CGDefects_DuplicateFunctions;
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

                                #ifndef DEF_s_Shape
                                #define DEF_s_Shape
struct s_Shape
{
    fu::str basePrim;
    uint64_t non_triv_mask;
    uint64_t hash;
    int flatCount;
    int declDepth;
    explicit operator bool() const noexcept
    {
        return false
            || basePrim
            || non_triv_mask
            || hash
            || flatCount
            || declDepth
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
    s_Shape shape;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || target
            || items
            || imports
            || converts
            || shape
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

                                #ifndef DEF_s_Profile
                                #define DEF_s_Profile
struct s_Profile
{
    double now;
    explicit operator bool() const noexcept
    {
        return false
            || now
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
    s_Profile profile;
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
            || profile
        ;
    }
};
                                #endif

                                #ifndef DEF_s_DevOptions
                                #define DEF_s_DevOptions
inline constexpr s_DevOptions s_DevOptions_DEV_Print = s_DevOptions(1u);
inline constexpr s_DevOptions s_DevOptions_DEV_Parallel = s_DevOptions(2u);
inline constexpr s_DevOptions s_DevOptions_DEV_ExpectFail = s_DevOptions(4u);
inline constexpr s_DevOptions s_DevOptions_DEV_DontFoldLiterals = s_DevOptions(8u);
inline constexpr s_DevOptions s_DevOptions_DEV_CG_LifetimeAnnots = s_DevOptions(16u);

inline constexpr s_DevOptions MASK_s_DevOptions
    = s_DevOptions_DEV_Print
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

                                #ifndef DEF_s_RevSpecInstance
                                #define DEF_s_RevSpecInstance
struct s_RevSpecInstance
{
    s_Target original;
    unsigned relaxed_quals;
    explicit operator bool() const noexcept
    {
        return false
            || original
        ;
    }
};
                                #endif

                                #ifndef DEF_s_RevSpecOutput
                                #define DEF_s_RevSpecOutput
struct s_RevSpecOutput
{
    unsigned relaxed_quals;
    s_Target instance_targ;
    explicit operator bool() const noexcept
    {
        return false
            || relaxed_quals
            || instance_targ
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
    fu::vec<s_ScopeItem> _field_implicits;
    fu::vec<int> _pub_imports;
    fu::vec<s_HelpersData> _helpers_data;
    fu::vec<s_Ephemeral> _ephemeral;
    int _solver_safety;
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
            || _field_implicits
            || _pub_imports
            || _helpers_data
            || _ephemeral
            || _solver_safety
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

                                #ifndef DEF_s_RevSpecPrototype
                                #define DEF_s_RevSpecPrototype
struct s_RevSpecPrototype
{
    s_SolvedNode solved;
    fu::vec<s_Overload> locals;
    explicit operator bool() const noexcept
    {
        return false
            || solved
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

                                #ifndef DEF_s_ReverseSpecialization
                                #define DEF_s_ReverseSpecialization
struct s_ReverseSpecialization
{
    s_RevSpecPrototype prototype;
    s_RevSpecInstance instance;
    fu::vec<s_RevSpecOutput> outputs;
    explicit operator bool() const noexcept
    {
        return false
            || prototype
            || instance
            || outputs
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
    fu::vec<int> far_jumps;
    s_ReverseSpecialization rev_spec;
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
            || far_jumps
            || rev_spec
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Effects
                                #define DEF_s_Effects
struct s_Effects
{
    s_FxMask fx_mask;
    explicit operator bool() const noexcept
    {
        return false
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
    fu::vec<int> far_jumps;
    s_Effects effects;
    s_Events events;
    int autoshadow_ok;
    s_Usage relaxed;
    bool TODO_FIX_isInline;
    int TODO_FIX_catches;
    fu::vec<s_Target> already_inlined;
    int conv_safety;
    s_Postdom postdom;
    fu::vec<fu::vec<int>> TODO_FIX_children;
    int TODO_FIX_unique;
    s_RevSpecPrototype rev_spec_proto;
    int TODO_FIX_bckCantDealWithNestedDefers;
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

                                #ifndef DEF_s_Map_S6ornWd95j4
                                #define DEF_s_Map_S6ornWd95j4
struct s_Map_S6ornWd95j4
{
    fu::vec<s_Target> keys;
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
    s_ArgRationale_RequireVal_AliasesMutatedInjectedArgument = 7u,
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

                                #ifndef DEF_s_Map_9nkdZKTSB9h
                                #define DEF_s_Map_9nkdZKTSB9h
struct s_Map_9nkdZKTSB9h
{
    fu::vec<fu::str> keys;
    fu::vec<unsigned> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
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

static s_Helpers push_wE9ESfT8(const s_HelpersData& data, s_SolverState& ss, fu::vec<s_Helpers>& _helpers)
{
    const s_Helpers ret = s_Helpers { ss._helpers_data.size() };
    _helpers += s_Helpers(ret);
    ss._helpers_data += s_HelpersData(data);
    return ret;
}

static void _Scope_import__forceCopy_7nxeodlg(const int modid, s_SolverState& ss, const s_Context& ctx)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    ss._scope.items += fu::get_view_start0(s.items, s.pub_items);
    ss._scope.converts += fu::get_view_start0(s.converts, s.pub_converts);
    ss._scope.implicits += fu::get_view_start0(s.implicits, s.pub_implicits);
}

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
extern const s_Type t_i8;
                                #endif

static s_Target createRawTypedef_TErEn8Hv(const fu::str& id, s_Type&& type, const s_Flags flags, const fu::str& name, const s_SolverStatus status, s_SolverState& ss, const s_Module& module)
{
    type = into_Typename_40rRB6L8(s_Type(type));
    const s_Target target = Scope_create_j83Ac6jp(ss._scope, s_kind_type, (name ? name : id), type, flags, status, 0, module);
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

static bool isTypeDecl_BnhPDVZj(const s_kind kind)
{
    return (kind == s_kind_struct) || (kind == s_kind_union) || (kind == s_kind_primitive) || (kind == s_kind_enum) || (kind == s_kind_flags);
}

static int unorderedClassify_2xoVcnZp(const s_kind kind)
{
    if (kind == s_kind_fn)
        return 1;
    else if (isTypeDecl_BnhPDVZj(kind))
        return 10;
    else
        return 0;

}

                                #ifndef DEF_str_vnKE5IyQVOd
                                #define DEF_str_vnKE5IyQVOd
inline fu::str str_vnKE5IyQ(const s_SolverNotes n)
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

static bool isFnOrType_dk3U8OnF(const s_Helpers& h, const s_SolverState& ss, const s_TokenIdx& _here, const s_Context& ctx)
{
    return !!s_HelpersMask(((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).mask & s_HelpersMask((s_HelpersMask_HM_Function | s_HelpersMask_HM_Struct))));
}

                                #ifndef DEF_str_bjBEfa7rTQi
                                #define DEF_str_bjBEfa7rTQi
inline fu::str str_bjBEfa7r(const s_SolverPass n)
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

[[noreturn]] static fu::never BUG_zwQElfxV(/*MOV*/ fu::str&& reason, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fail_Szrpd5G6(("COMPILER BUG:\n\n\t"_fu + (reason ? static_cast<fu::str&&>(reason) : "Assertion failed."_fu)), ss, _helpers, _here, ctx, module);
}

static bool isLocal_nMI8cChU(const s_Target& target)
{
    return !!int(unsigned((target._packed & 0xfffffull)));
}

static s_Target parent_nUz4wbwT(const s_Target& target, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (isLocal_nMI8cChU(target))
        return Target_2jgCJZJY(int(unsigned(((target._packed >> 40ull) & 0xfffffull))), int(unsigned(((target._packed >> 20ull) & 0xfffffull))), 0);
    else
        BUG_zwQElfxV("Using .parent on a non-local"_fu, ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_str_n4lV73pjzGh
                                #define DEF_str_n4lV73pjzGh
inline fu::str str_n4lV73pj(const s_kind n)
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
    else if (n == s_kind_definit)
        return "definit"_fu;
    else if (n == s_kind_empty)
        return "empty"_fu;
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
    else if (n == s_kind_fn)
        return "fn"_fu;
    else if (n == s_kind_copy)
        return "copy"_fu;
    else if (n == s_kind_move)
        return "move"_fu;
    else if (n == s_kind_arrlit)
        return "arrlit"_fu;
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
    else if (n == s_kind_members)
        return "members"_fu;
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

static bool isArg_GtNDTeV7(const s_Overload& o)
{
    return !!s_SolverStatus((o.status & s_SolverStatus_SS_ARGUMENT));
}

static const s_Target& field_getParentStruct_pu9tON6y(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    return o.solved.target ? o.solved.target : BUG_9SZtRVJ0("field_getParentStruct: solved.target not set."_fu, _here, ctx);
}

static fu::str human_n8jXR2CC(const fu::str& id, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target t = tryParseClosureID_54NQWyOV(id, _here, ctx).target;
    if (!t)
        return fu::str(id);
    else
        return (GET_oTYbwQb8(parent_nUz4wbwT(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module).name + ":"_fu) + GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module).name;

}

static fu::str str_sdDZgf4z(const s_Overload& o, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_kind kind = o.kind;
    fu::str prefix = str_n4lV73pj(kind);
    if (kind == s_kind_var)
    {
        fu::str _0 {};
        prefix = ((_0 = (((((o.flags & s_Flags_F_INJECTED) ? "injected "_fu : fu::str{}) + ((o.flags & s_Flags_F_IMPLICIT) ? "implicit "_fu : fu::str{})) + ((o.flags & s_Flags_F_REF) ? "ref "_fu : fu::str{})) + (isArg_GtNDTeV7(o) ? "arg "_fu : fu::str{}))) ? static_cast<fu::str&&>(_0) : "var "_fu);
        prefix.pop();
    };
    fu::str ns = ""_fu;
    if (kind == s_kind_field)
    {
        const s_Target& from = field_getParentStruct_pu9tON6y(o, _here, ctx);
        ns = (qID_3PsDzMvu(human_n8jXR2CC(GET_oTYbwQb8(from, ss, _helpers, _here, ctx, module).name, ss, _helpers, _here, ctx, module)) + ":"_fu);
    };
    return ((qKW_3PsDzMvu(prefix) + " "_fu) + ns) + qID_3PsDzMvu(human_n8jXR2CC(o.name, ss, _helpers, _here, ctx, module));
}

                                #ifndef DEF_x7E_gCeFmDFw0L8
                                #define DEF_x7E_gCeFmDFw0L8
inline fu::str x7E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static const s_Overload& GET_oTYbwQb8(const s_Target& target, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int modid = int(unsigned(((target._packed >> 40ull) & 0xfffffull)));
    const int globid = int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
    const int locid = int(unsigned((target._packed & 0xfffffull)));
    const s_Scope& _scope = ((modid == module.modid) ? ss._scope : ctx.modules[modid].out.solve.scope);
    if ((globid > 0) && (_scope.overloads.size() >= globid))
    {
        if (locid)
        {
            if ((_scope.extended.size() <= globid))
                BUG_zwQElfxV("Invalid local target -modid."_fu, ss, _helpers, _here, ctx, module);
            else
            {
                fu::view<s_Overload> locals = _scope.extended[globid].locals;
                if (locals.size() < locid)
                    BUG_zwQElfxV(x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("Out of range local target from: "_fu, str_sdDZgf4z(GET_oTYbwQb8(parent_nUz4wbwT(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + "\n\tlocals="_fu), fu::i64dec(locals.size())) + "\n\tlocal="_fu), fu::i64dec(locid)), ss, _helpers, _here, ctx, module);
                else
                    return locals[(locid - 1)];

            };
        }
        else
            return _scope.overloads[(globid - 1)];

    }
    else
        BUG_zwQElfxV("GET: bad globid"_fu, ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_x7Ex3D_vuSW0Q9ulEj
                                #define DEF_x7Ex3D_vuSW0Q9ulEj
inline fu::str& x7Ex3D_vuSW0Q9u(fu::str& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

static const s_Extended& EXT_x9dYoBLb(const s_Target& target, const s_SolverState& ss, const s_Context& ctx, const s_Module& module)
{
    if (int(unsigned((target._packed & 0xfffffull))))
        return (*(const s_Extended*)fu::NIL);
    else
    {
        const int modid = int(unsigned(((target._packed >> 40ull) & 0xfffffull)));
        const int globid = int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
        const s_Scope& _scope = ((modid == module.modid) ? ss._scope : ctx.modules[modid].out.solve.scope);
        return _scope.extended[globid];
    };
}

                                #ifndef DEF_x3Cx3E_JhsazzkjAA1
                                #define DEF_x3Cx3E_JhsazzkjAA1
inline int x3Cx3E_Jhsazzkj(const s_VFacts a, const s_VFacts b)
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
    if ((cmp = x3Cx3E_Jhsazzkj(a.vfacts, b.vfacts)))
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

static fu::str humanizeTypeName_CBtYqzzq(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (isStruct_jSb6u57z(type.vtype))
        return fu::str(lookupUserType_QHDuaMIF(type.vtype, _here, ctx, module).name);
    else if (s_Type itemType = tryClear_sliceable_EA8Wup3K(type.vtype, _here, ctx, module))
    {
        if (itemType == t_byte)
            return "string"_fu;
        else
            return humanizeTypeName_CBtYqzzq(itemType, _here, ctx, module) + (TODO_FIX_isArray_40rRB6L8(type) ? "[]"_fu : "[:]"_fu);

    }
    else if (type.vtype.canon == t_bool.vtype.canon)
        return "bool"_fu;
    else if (type.vtype.canon == t_byte.vtype.canon)
        return "byte"_fu;
    else
        return fu::str(type.vtype.canon);

}

static fu::str fail_appendStack_6w3qOeIN(/*MOV*/ fu::str&& reason, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int callstack = 0;
    s_SolverPass pass0 {};
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (isFnOrType_dk3U8OnF(h, ss, _here, ctx))
        {
            if (!callstack++)
                reason += "\n"_fu;

            s_SolverPass _0 {};
            fu::str pass = (((_0 = pass0, (_0 != (pass0 = (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).pass))) || (callstack == 1)) ? x7E_gCeFmDFw(str_bjBEfa7r((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).pass), " "_fu) : fu::str{});
            reason += (fu::get_view_start0("\n                "_fu, max_mJGU9byO((17 - pass.size()), 1)) + pass);
            const s_Overload& o = GET_oTYbwQb8((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).target, ss, _helpers, _here, ctx, module);
            x7Ex3D_vuSW0Q9u(reason, str_sdDZgf4z(o, ss, _helpers, _here, ctx, module));

            {
                fu::str argsOut = ""_fu;
                fu::view<s_Argument> args = EXT_x9dYoBLb((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).target, ss, ctx, module).args;
                for (int i_1 = 0; i_1 < args.size(); i_1++)
                {
                    if (!argsOut)
                        argsOut += "("_fu;
                    else
                        argsOut += ", "_fu;

                    argsOut += humanizeTypeName_CBtYqzzq(args[i_1].type, _here, ctx, module);
                };
                if (argsOut)
                    reason += (argsOut += ")"_fu);

            };
            const s_TokenIdx& token = o.solved.token;
            if (token)
                reason += (" at "_fu + formatTokenCoord_n86xTpVM(token, module.modid, ctx));

        };
    };
    return static_cast<fu::str&&>(reason);
}

[[noreturn]] static fu::never fail_Szrpd5G6(const fu::str& reason, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (reason)
        FAIL_lTxCw5lL(fail_appendStack_6w3qOeIN(fu::str(reason), ss, _helpers, _here, ctx, module), _here, ctx);
    else
        BUG_zwQElfxV("fail(): No reason."_fu, ss, _helpers, _here, ctx, module);

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

static s_Target nested_h9CpDpVs(const int index, const s_Target& from, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (index > 0)
        return Target_2jgCJZJY(int(unsigned(((from._packed >> 40ull) & 0xfffffull))), int(unsigned(((from._packed >> 20ull) & 0xfffffull))), index);
    else
        BUG_zwQElfxV("nested(): bad locid"_fu, ss, _helpers, _here, ctx, module);

}

static s_Target nested_RctvSJIv(const int index, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return nested_h9CpDpVs(index, ss._nestingFnort, ss, _helpers, _here, ctx, module);
}

static fu::str& l_30_7_AL6jhVzD(fu::str& str)
{
    return (str += " ["_fu);
}

inline static fu::str& l_30_9_09FipO4H(const int flatCount, const int flatOffset, const bool isLastSubRegion, fu::str& str)
{
    return (str += (x7E_gCeFmDFw((x7E_gCeFmDFw(" #"_fu, fu::i64dec(flatCount)) + " @"_fu), fu::i64dec(flatOffset)) + (isLastSubRegion ? ""_fu : ","_fu)));
}

inline static fu::str& l_30_8_BCBYuL2h(const bool isLastPath, fu::str& str)
{
    return (str += (isLastPath ? " ]"_fu : " ],"_fu));
}

inline static void l_30_6_5oaDnNTO(const int locid, const bool isStatic, const bool isTemp, const bool isArgIdx, const int argidx, fu::view<char> paths, fu::str& str, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (str)
        str += "|"_fu;

    str += (locid ? str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module) : (isStatic ? qLT_3PsDzMvu("static"_fu) : (isTemp ? qLT_3PsDzMvu("temp"_fu) : (isArgIdx ? x7E_gCeFmDFw("arg#"_fu, fu::i64dec(argidx)) : BUG_zwQElfxV("invalid region"_fu, ss, _helpers, _here, ctx, module)))));
    int offset = 0;
    const s_TokenIdx& _here_1 = _here;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        l_30_7_AL6jhVzD(str);
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit(paths, offset);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(paths, offset) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            l_30_9_09FipO4H(flatCount, flatOffset, isLastSubRegion, str);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        l_30_8_BCBYuL2h(isLastPath, str);
        if (isLastPath)
            break;

    };
    if (!(offset == paths.size()))
        BUG_9SZtRVJ0("walkPaths(!tailOK): excess bytes"_fu, _here_1, ctx);

}

                                #ifndef DEF_Lifetime_each_Uayn6p4gY4b
                                #define DEF_Lifetime_each_Uayn6p4gY4b
inline void Lifetime_each_Uayn6p4g(const s_Lifetime& lifetime, fu::str& str, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    // Hoisted:
    int offset0;

    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        int BL_3_v {};
        const int sr = (__extension__ (
        {
            offset0 = (offset + 0);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            BL_3_v = (offset0);
        (void)0;}), BL_3_v);
        l_30_6_5oaDnNTO(int(((r & 1u) ? 0u : (r >> 1u))), (r == 0u), (r == 1u), ((r & 3u) == 3u), int(((r & 1u) ? (r >> 2u) : 0u)), fu::get_view(chars, sr, offset), str, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static fu::str str_XwwcWF8F(const s_Lifetime& lifetime, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::str str = ""_fu;
    Lifetime_each_Uayn6p4g(lifetime, str, ss, _helpers, _here, ctx, module);
    return /*NRVO*/ str;
}

                                #ifndef DEF_str_jCXen46QbVc
                                #define DEF_str_jCXen46QbVc
inline fu::str str_jCXen46Q(const s_VFacts n)
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

static fu::str humanizeType_kB3Te7GK(const s_Type& type, bool lt, bool no_quals, bool usage, bool no_vfacts, const s_Type& diff, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!type)
        return "< Empty Type >"_fu;
    else
    {
        if (diff)
        {
            no_quals = true;
            no_vfacts = true;
            if (isCanonAssignable_IaeizMuX(type.vtype.canon, diff.vtype.canon) || isCanonAssignable_IaeizMuX(diff.vtype.canon, type.vtype.canon))
            {
                no_quals = ((type.vtype.quals & q_TAGS) == (diff.vtype.quals & q_TAGS));
                no_vfacts = (type.vfacts == diff.vfacts);
                usage = ((type.vtype.quals & q_USAGE) != (diff.vtype.quals & q_USAGE));
                lt = (type.lifetime != diff.lifetime);
            };
        };
        /*MOV*/ fu::str result = humanizeTypeName_CBtYqzzq(type, _here, ctx, module);
        if (!no_quals)
            result += humanizeQuals_3VLS0hFo(type.vtype.quals);

        if (usage)
        {
            unsigned usage_1 = (type.vtype.quals & q_USAGE);
            int offset = -3;
            result += " { "_fu;
            if (!usage_1)
                result += "unused "_fu;
            else
            {
                do
                {
                    if (usage_1 & 1u)
                        result += (x7E_gCeFmDFw("#"_fu, fu::i64dec(offset)) + " "_fu);

                    usage_1 >>= 1u;
                    offset++;
                }
                while (usage_1);
            };
            result += "}"_fu;
        };
        if (lt && type.lifetime)
        {
            result += x7E_gCeFmDFw("`"_fu, str_XwwcWF8F(type.lifetime, ss, _helpers, _here, ctx, module));
        };
        if (!no_vfacts && type.vfacts)
            result += x7E_gCeFmDFw(" "_fu, str_jCXen46Q(type.vfacts));

        return /*NRVO*/ result;
    };
}

static const s_TokenIdx& token_6EfwnMnq(const s_Target& target, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_TokenIdx* _0;
    return *(_0 = &(EXT_x9dYoBLb(target, ss, ctx, module).tEmplate.node.token)) ? *_0 : GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).solved.token;
}

static s_TokenIdx tryBacktrack_6bOCzrPU(const s_TokenIdx& from, fu::view<char> v, const s_kind k, const s_Context& ctx)
{
    s_TokenIdx here { from };
    while (here.tokidx-- > 0)
    {
        const s_Token& token = _token_xkeOqLCC(here, ctx);
        if (token.kind != k)
            break;
        else if (token.value == v)
            return here;

    };
    return s_TokenIdx{};
}

static fu::str addr_and_snippet_2bGH8tqt(const s_TokenIdx& token, const s_CodeFmt fmt, fu::view<char> backtrack, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::vec<s_TokenIdx> tokens = fu::vec<s_TokenIdx> { fu::slate<1, s_TokenIdx> { s_TokenIdx(token) } };
    if (backtrack)
    {
        const s_TokenIdx other = tryBacktrack_6bOCzrPU(token, backtrack, s_kind_id, ctx);
        if (other)
        {
            tokens.unshift(s_TokenIdx(other));
        };
    };
    return formatCodeSnippet_IvKXzceX(static_cast<fu::vec<s_TokenIdx>&&>(tokens), module.modid, fmt, ctx);
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

static fu::str str_YPnuP2Bh(const s_Argument& arg, const bool brief, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::str prefix = ((((arg.flags & s_Flags_F_INJECTED) ? "injected "_fu : fu::str{}) + ((arg.flags & s_Flags_F_IMPLICIT) ? "implicit "_fu : fu::str{})) + ((arg.flags & s_Flags_F_REF) ? "ref "_fu : fu::str{}));
    prefix += "arg"_fu;
    fu::str fn = ""_fu;
    if (arg.target && !brief)
    {
        const s_Target parent = parent_nUz4wbwT(arg.target, ss, _helpers, _here, ctx, module);
        if (parent != _current_fn.out.target)
            fn = (qID_3PsDzMvu(human_n8jXR2CC(GET_oTYbwQb8(parent, ss, _helpers, _here, ctx, module).name, ss, _helpers, _here, ctx, module)) + ":"_fu);

    };
    return ((qKW_3PsDzMvu(prefix) + " "_fu) + fn) + qID_3PsDzMvu(human_n8jXR2CC(arg.name, ss, _helpers, _here, ctx, module));
}

static fu::str explainConversion_ZTaQXjUZ(fu::view<s_Target> path, fu::view<char> prefix, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
        res += explainWhichFn_KACWd7In(path[i], fu::view<fu::vec<s_Target>>{}, "using"_fu, s_CodeFmt_NoContext, ss, _current_fn, _helpers, _here, ctx, module);
    };
    return /*NRVO*/ res;
}

static fu::str explainWhichFn_KACWd7In(const s_Target& t, fu::view<fu::vec<s_Target>> conversions, fu::view<char> backtrack, const s_CodeFmt fmt, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::str result = str_sdDZgf4z(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module);
    if (GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module).flags & s_Flags_F_INJECTED)
        result += "\n"_fu;
    else
    {
        result += (" at "_fu + addr_and_snippet_2bGH8tqt(token_6EfwnMnq(t, ss, _helpers, _here, ctx, module), fmt, backtrack, ctx, module));
        for (int i = 0; i < conversions.size(); i++)
        {
            fu::view<s_Target> c = conversions[i];
            if (c)
            {
                result += explainConversion_ZTaQXjUZ(c, ((EXT_x9dYoBLb(t, ss, ctx, module).args.size() > 1) ? x7E_gCeFmDFw(str_YPnuP2Bh(EXT_x9dYoBLb(t, ss, ctx, module).args[i], false, ss, _current_fn, _helpers, _here, ctx, module), ": "_fu) : fu::str{}), ss, _current_fn, _helpers, _here, ctx, module);
            };
        };
    };
    return /*NRVO*/ result;
}

static s_StaticEval tryAbstractEvalAsBool_JCuol0P9(const s_SolvedNode& cond, const bool voidOk, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (cond.type.vfacts & s_VFacts((s_VFacts_AlwaysTrue | s_VFacts_AlwaysFalse)))
    {
        if (!s_VFacts((cond.type.vfacts & s_VFacts_AlwaysTrue)))
            return s_StaticEval_SE_False;
        else if (!s_VFacts((cond.type.vfacts & s_VFacts_AlwaysFalse)))
            return s_StaticEval_SE_True;
        else
            BUG_zwQElfxV("Expression both AlwaysTrue and AlwaysFalse."_fu, ss, _helpers, _here, ctx, module);

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
                a = s_Warning { s_TokenIdx(token), fail_appendStack_6w3qOeIN((("Condition is "_fu + humanizeType_kB3Te7GK(cond.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + ((cond.kind == s_kind_call) ? (", returned from "_fu + explainWhichFn_KACWd7In(cond.target, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn, _helpers, _here, ctx, module)) : ", not meaningful in a boolean context."_fu)), ss, _helpers, _here, ctx, module) };
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

static const s_Ephemeral& EPH_On3tAJ9X(const s_Target& target, const s_SolverState& ss, const s_Module& module)
{
    if (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid)
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

static s_Ephemeral& EPH_mut_xZZ73lBG(const int index, s_SolverState& ss)
{
    return grow_if_oob_XunIdQNd(ss._ephemeral, index);
}

static s_Ephemeral& EPH_mut_pSZyFPKm(const s_Target& target, s_SolverState& ss, const s_Module& module)
{
    if (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid)
        return EPH_mut_xZZ73lBG(int(unsigned(((target._packed >> 20ull) & 0xfffffull))), ss);
    else
        fu::fail("EPH_mut: modid is off."_fu);

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

static bool is_SPECFAIL_Dujo5Kxe(const s_Target& target)
{
    return !!(target._packed & 0x8000000000000000ull);
}

static s_Overload& GET_mut_j8q0a60a(const s_Target& target, s_SolverState& ss, const s_Module& module)
{
    const int globid = int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
    const int locid = int(unsigned((target._packed & 0xfffffull)));
    if ((globid > 0) && (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid))
    {
        if (locid)
            return ss._scope.extended.mutref(globid).locals.mutref((locid - 1));
        else
            return ss._scope.overloads.mutref((globid - 1));

    }
    else
        fu::fail("GET_mut: bad modid/globid"_fu);

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

static s_Target localfn_6C2dSDn6(const int index, const s_Module& module)
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

static s_Extended& EXT_mut_yu2tvQxN(const s_Target& target, s_SolverState& ss, const s_Module& module)
{
    const int globid = int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
    if ((globid > 0) && (globid < ss._scope.extended.size()) && (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid) && !int(unsigned((target._packed & 0xfffffull))))
        return ss._scope.extended.mutref(globid);
    else
        fu::fail("EXT_mut: bad modid/globid/locid"_fu);

}

static void resetChild_o8DFfjok(const s_Target& target, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(is_SPECFAIL_Dujo5Kxe(target)))
    {
        s_SolverStatus& status = GET_mut_j8q0a60a(target, ss, module).status;
        if (status & s_SolverStatus_SS_LAZY)
        {
            status &= s_SolverStatus(~s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_FINALIZED)) | s_SolverStatus_SS_DIRTY)));
            fu::vec<int> calls = steal_lZF84WJG(EPH_mut_pSZyFPKm(target, ss, module).calls);
            for (int i = 0; i < calls.size(); i++)
            {
                const s_Target callee = localfn_6C2dSDn6(calls[i], module);
                if (!(rem_jzOp5jol(EPH_mut_pSZyFPKm(callee, ss, module).callers, int(unsigned(((target._packed >> 20ull) & 0xfffffull))))))
                    BUG_zwQElfxV(x7E_gCeFmDFw("resetChild: Missing in callers on "_fu, str_sdDZgf4z(GET_oTYbwQb8(callee, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

            };
            fu::vec<int> callers = steal_lZF84WJG(EPH_mut_pSZyFPKm(target, ss, module).callers);
            for (int i_1 = 0; i_1 < callers.size(); i_1++)
            {
                const s_Target caller = localfn_6C2dSDn6(callers[i_1], module);
                if (!(rem_jzOp5jol(EPH_mut_pSZyFPKm(caller, ss, module).calls, int(unsigned(((target._packed >> 20ull) & 0xfffffull))))))
                    BUG_zwQElfxV(x7E_gCeFmDFw("resetChild: Missing in calls on "_fu, str_sdDZgf4z(GET_oTYbwQb8(caller, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

            };
            fu::vec<s_Argument>& args = EXT_mut_yu2tvQxN(target, ss, module).args;
            for (int i_2 = args.size(); i_2-- > 0; )
            {
                if (args[i_2].flags & s_Flags_F_INJECTED)
                    args.splice(i_2, 1);

            };
            if (EPH_On3tAJ9X(target, ss, module).calls)
            {
                BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
            };
        }
        else
            BUG_zwQElfxV(x7E_gCeFmDFw("resetChild: not SS_LAZY: "_fu, str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    };
}

inline static void l_30_44_1ZsCPrxl(const s_Target& target, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    resetChild_o8DFfjok(target, ss, _helpers, _here, ctx, module);
}

static s_Template createTemplate_WypZD4Kf(const s_Node& node, const s_SolverState& ss, const s_CurrentFn& _current_fn)
{
    return s_Template { s_Node(node), fu::vec<int>((!_current_fn ? ss._scope.imports : (*(const fu::vec<int>*)fu::NIL))) };
}

inline static void l_30_43_jEWNpamr(const s_Target& target, const s_Node& node, const s_SolverStatus status, s_SolverState& ss, const s_CurrentFn& _current_fn, const s_Module& module)
{
    s_Overload& o = GET_mut_j8q0a60a(target, ss, module);
    o.kind = s_kind_fn;
    o.name = ("prep "_fu + node.value);
    o.flags = node.flags;
    o.status = status;
    s_Extended& ext = EXT_mut_yu2tvQxN(target, ss, module);
    ext.tEmplate = createTemplate_WypZD4Kf(node, ss, _current_fn);
    ext.min = int(0x7fffffffu);
    ext.max = 0;
}

inline static s_Target getOrCreateChild_KRGUlX0T(const s_Node& node, const s_Node& node_1, const s_SolverStatus status, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target& parent = _current_fn.out.target;
    if (parent)
    {
        const unsigned parent_rev = EPH_On3tAJ9X(parent, ss, module).revision;
        fu::view_mut<s_ChildTarget> children = EPH_mut_pSZyFPKm(parent, ss, module).children;
        for (int i = 0; i < children.size(); i++)
        {
            s_ChildTarget& child = children.mutref(i);
            if (!((child.token != node.token) || (child.parent_rev == parent_rev)))
            {
                child.parent_rev = parent_rev;
                const s_Target target { child.target };
                l_30_44_1ZsCPrxl(target, ss, _helpers, _here, ctx, module);
                return target;
            };
        };
    };
    const s_Target target = Scope_create_j83Ac6jp(ss._scope, s_kind___no_kind_yet, (*(const fu::str*)fu::NIL), (*(const s_Type*)fu::NIL), s_Flags{}, s_SolverStatus{}, 0, module);
    l_30_43_jEWNpamr(target, node_1, status, ss, _current_fn, module);
    if (parent)
    {
        const unsigned parent_rev = EPH_On3tAJ9X(parent, ss, module).revision;
        fu::vec<s_ChildTarget>& children = EPH_mut_pSZyFPKm(parent, ss, module).children;
        children += s_ChildTarget { s_TokenIdx(node.token), parent_rev, s_Target(target) };
    };
    return target;
}

static bool shouldAutoshadow_8zABByMD(fu::view<char> id, const s_SolverState& ss)
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

static void autoshadow_r7hruJY4(bool& shadows, const int local_of, fu::view<char> id, const s_SolverState& ss, const s_CurrentFn& _current_fn)
{
    if (!(!_current_fn.autoshadow_ok))
    {
        if (!shadows && local_of && shouldAutoshadow_8zABByMD(id, ss))
            shadows = true;

    };
}

static s_Type X_addrofTarget_50QXKYhL(fu::view<s_Target> targets)
{
    return s_Type { s_ValueType { 0u, packAddrOfFn_aofyNfjF(targets) }, s_Lifetime{}, s_VFacts{} };
}

static s_Type X_addrofTarget_lBHAvjSd(const s_Target& target)
{
    return X_addrofTarget_50QXKYhL((fu::slate<1, s_Target> { s_Target(target) }));
}

static s_SolvedNode SolvedNode_wUIpeYIY(const s_kind kind, const s_Type& type, const s_Flags flags, const fu::str& value, const fu::vec<s_SolvedNode>& items, const s_Target& target, const s_Helpers& helpers, const s_TokenIdx& _here)
{
    return s_SolvedNode { kind, s_Helpers(helpers), flags, 0, fu::str(value), fu::vec<s_SolvedNode>(items), s_TokenIdx(_here), s_Type(type), s_Target(target) };
}

static s_SolvedNode createEmpty_hkWuvX58(const s_kind kind, const s_Type& type, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_wUIpeYIY(kind, type, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_SolvedNode uPrepFn_A_lbb7zMin(const s_Node& node, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const fu::str& id = node.value;
    int BL_1_v {};
    const int local_of = (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v);
    const s_SolverStatus status = s_SolverStatus_SS_LAZY;
    const s_Target target = getOrCreateChild_KRGUlX0T(node, node, status, ss, _current_fn, _helpers, _here, ctx, module);
    bool shadows = !!(node.flags & s_Flags_F_SHADOW);
    autoshadow_r7hruJY4(shadows, local_of, id, ss, _current_fn);
    Scope_set_5Z1f2QqZ(ss._scope, id, target, shadows);
    /*MOV*/ s_ScopeSkipMemos scope_skip { (_current_fn ? ss._ss : (*(const s_ScopeSkipMemos*)fu::NIL)) };
    s_Ephemeral& eph = EPH_mut_pSZyFPKm(target, ss, module);
    eph.local_of = local_of;
    eph.scope_memo = (_current_fn ? Scope_snap_dcsfJwX5(ss._scope, _helpers) : s_ScopeMemo{});
    eph.scope_skip = static_cast<s_ScopeSkipMemos&&>(scope_skip);
    if (node.flags & s_Flags_F_CONVERSION)
        ss._scope.converts.push(s_Target(target));

    return createEmpty_hkWuvX58(s_kind_empty, X_addrofTarget_lBHAvjSd(target), target, _here);
}

static fu::str stableTypeID_2Fn8pvEG(const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return humanizeType_kB3Te7GK(type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module);
}

inline static fu::str& l_30_60_rSu9HAbh(const s_TypeParam& tp, fu::view<char> key, fu::str& unique, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::str _0 {};
    return (_0 = ((key + ":"_fu) + stableTypeID_2Fn8pvEG(tp.matched, ss, _helpers, _here, ctx, module)), ((unique ? (unique += ","_fu) : unique) += static_cast<fu::str&&>(_0)));
}

                                #ifndef DEF_each_1B9AsJYyEGa
                                #define DEF_each_1B9AsJYyEGa
inline void each_1B9AsJYy(const s_Map_KlcLuPSIt9g& _, fu::str& unique, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < _.vals.size(); i++)
        l_30_60_rSu9HAbh(_.vals[i], _.keys[i], unique, ss, _helpers, _here, ctx, module);

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

static s_Type T_0gDLePV6(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    return evalTypeAnnot_OIK0vUDc(only_a6qr8qgs(node.items), false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
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

static const s_Module& findModule_ClwICBUT(const fu::str& fuzimport, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::str fname = resolveFile_x_aHG8xqFm(fuzimport, ctx);
    fu::view<s_Module> modules = ctx.modules;
    for (int i = 1; i < modules.size(); i++)
    {
        const s_Module& m = modules[i];
        if (m.fname == fname)
            return m;

    };
    BUG_zwQElfxV(("findModule: cannot locate: "_fu + fname), ss, _helpers, _here, ctx, module);
}

static const s_Scope& dequalify_andGetScope_6ckfQCHl(fu::str& id, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int split = find_KonMQ4KB(id, '\t');
    if ((split >= 0))
    {
        fu::str fname = fu::slice(id, 0, split);
        id = fu::slice(id, (split + 1));
        const s_Module& other = findModule_ClwICBUT(fname, ss, _helpers, _here, ctx, module);
        if (other.modid != module.modid)
            return other.out.solve.scope;
        else
        {
            fail_Szrpd5G6((("Qualified "_fu + qBAD_3PsDzMvu(id)) + ":: access current module."_fu), ss, _helpers, _here, ctx, module);
        };
    }
    else
    {
        BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

inline static int l_30_14_U6aylSh9(const s_Target& u, int& count, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (u)
        return count++;
    else
    {
        BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_each_dYoSsUAxiFk
                                #define DEF_each_dYoSsUAxiFk
inline void each_dYoSsUAx(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, int& count, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
                l_30_14_U6aylSh9(items[i_1], count, ss, _helpers, _here, ctx, module);

            i0 = ss_1.end;
        };
    };
}
                                #endif

static int countUsings_MPf6O9j0(const bool local_scope, const s_Scope& misc_scope, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Scope& scope = (local_scope ? ss._scope : misc_scope);
    int count = 0;
    if (scope.usings)
    {
        each_dYoSsUAx(scope.usings, (local_scope ? ss._ss.usings : fu::view<s_ScopeSkip>{}), 0, count, ss, _helpers, _here, ctx, module);
    };
    return count;
}

inline static void l_30_15_V8YYQEX9(const int modid, s_BitSet& seen)
{
    add_U5p6nLOf(seen, modid);
}

                                #ifndef DEF_each_QUqSFBTdlH5
                                #define DEF_each_QUqSFBTdlH5
inline void each_QUqSFBTd(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, s_BitSet& seen)
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
                l_30_15_V8YYQEX9(items[i_1], seen);

            i0 = ss.end;
        };
    };
}
                                #endif

static void visitTypeImports_YbRdnzEZ(const s_Type& type, fu::view<char> id, const bool local_scope, fu::vec<s_Target>& extra_items, s_BitSet& seen, const s_SolverState& ss, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<int> visit = lookupTypeImports_QHDuaMIF(type.vtype, _here, ctx, module);
    for (int i = -1; i < visit.size(); i++)
    {
        const int modid = ((i >= 0) ? visit[i] : modidOfOrigin_u9sdbuWn(type));
        if (!(has_QTGTghRU(seen, modid)))
        {
            if (!seen)
            {
                add_U5p6nLOf(seen, 0);
                add_U5p6nLOf(seen, module.modid);
                each_QUqSFBTd(ss._scope.imports, (local_scope ? ss._ss.imports : fu::view<s_ScopeSkip>{}), 0, seen);
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

inline static void l_30_16_Suk6xkPe(const s_Target& u, fu::view<char> id, const bool local_scope, fu::vec<s_Target>& extra_items, s_BitSet& seen, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    visitTypeImports_YbRdnzEZ(GET_oTYbwQb8(u, ss, _helpers, _here, ctx, module).type, id, local_scope, extra_items, seen, ss, _here, ctx, module);
}

                                #ifndef DEF_each_qwKNvZ79BY9
                                #define DEF_each_qwKNvZ79BY9
inline void each_qwKNvZ79(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu::view<char> id, const bool local_scope, fu::vec<s_Target>& extra_items, s_BitSet& seen, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
                l_30_16_Suk6xkPe(items[i_1], id, local_scope, extra_items, seen, ss, _helpers, _here, ctx, module);

            i0 = ss_1.end;
        };
    };
}
                                #endif

static const fu::vec<s_ScopeItem>& field_items_j55Z3wuG(const s_Flags flags, const int considerFieldItems, const s_SolverState& ss)
{
    if (considerFieldItems)
    {
        if (flags & s_Flags_F_IMPLICIT)
            return ss._field_implicits;
        else
            return ss._field_items;

    }
    else
        return (*(const fu::vec<s_ScopeItem>*)fu::NIL);

}

static void clear_pN1GzgxC(s_Reorder& reorder)
{
    reorder.applicable = false;
    reorder.map.clear();
}

                                #ifndef DEF_str_wO7dLc1gQC0
                                #define DEF_str_wO7dLc1gQC0
inline fu::str str_wO7dLc1g(const s_SolverStatus n)
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

        if (n & s_SolverStatus_SS_FN_OOE_RTL)
            res += ("SS_FN_OOE_RTL"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_HOIST)
            res += ("SS_HOIST"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_UNUSED)
            res += ("SS_UNUSED"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_MATCHED)
            res += ("SS_MATCHED"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_MOVED_FROM)
            res += ("SS_MOVED_FROM"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_ARGUMENT)
            res += ("SS_ARGUMENT"_fu + ", "_fu);

        if (n & s_SolverStatus_SS_Debug_AllPassesComplete)
            res += ("SS_Debug_AllPassesComplete"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_steal_d1hn13NeIo6
                                #define DEF_steal_d1hn13NeIo6
inline s_CurrentFn steal_d1hn13Ne(s_CurrentFn& v)
{
    /*MOV*/ s_CurrentFn ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

                                #ifndef DEF_exchange_jPHBkujOq4j
                                #define DEF_exchange_jPHBkujOq4j
inline s_Target exchange_jPHBkujO(s_Target& a, s_Target&& b)
{
    std::swap(a, b);
    return b;
}
                                #endif

                                #ifndef DEF_x3Dx3D_LngZZmWAHm3
                                #define DEF_x3Dx3D_LngZZmWAHm3
inline bool operator==(const s_Target& a, const s_Target& b)
{
    return !x3Cx3E_LngZZmWA(a, b);
}
                                #endif

static void replaceGlobid_6cAgAnCR(s_Target& t, const s_Target& target, const s_Target& original, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    {
        const s_TokenIdx& _here_1 = _here;
        if (!(parent_nUz4wbwT(t, ss, _helpers, _here, ctx, module) == original))
        {
            BUG_9SZtRVJ0(fu::str{}, _here_1, ctx);
        };
    };
    int BL_3_v {};
    t = Target_2jgCJZJY(int(unsigned(((target._packed >> 40ull) & 0xfffffull))), int(unsigned(((target._packed >> 20ull) & 0xfffffull))), (__extension__ (
    {
        const s_Target& t_1 = t;
        BL_3_v = (int(unsigned((t_1._packed & 0xfffffull))));
    (void)0;}), BL_3_v));
}

static s_Overload& local_iEXfNGJA(const int locid, fu::view_mut<s_Overload> locals)
{
    return locals.mutref((locid - 1));
}

static s_HelpersData HelpersReplica_GxLi1KXk(const int local_of, const int locals_start, const s_Type& ret_actual)
{
    return s_HelpersData { s_Target{}, s_SolverPass{}, fu::str{}, s_HelpersMask{}, local_of, locals_start, s_Type{}, s_Type(ret_actual), fu::vec<s_Type>{}, s_Postdom{}, s_Postdom{}, s_EventsSnap{}, s_Helpers{} };
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

static void relinkNode_W2lA6R6l(s_SolvedNode& node, const s_Target& target, const s_Target& original, fu::view_mut<s_Overload> locals, fu::vec<s_Helpers>& helpersReplicas, int& lastKnownLocal, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_kind k = node.kind;
    if (k == s_kind_letdef)
    {
        replaceGlobid_6cAgAnCR(node.target, target, original, ss, _helpers, _here, ctx, module);
        int BL_2_v {};
        const int locid = (__extension__ (
        {
            const s_Target& t = node.target;
            BL_2_v = (int(unsigned((t._packed & 0xfffffull))));
        (void)0;}), BL_2_v);
        lastKnownLocal = locid;
        s_SolvedNode letNode {};
        std::swap(letNode, local_iEXfNGJA(locid, locals).solved);
        relinkNode_W2lA6R6l(letNode, target, original, locals, helpersReplicas, lastKnownLocal, ss, _current_fn, _helpers, _here, ctx, module);
        std::swap(letNode, local_iEXfNGJA(locid, locals).solved);
    }
    else if ((k == s_kind_let) || (k == s_kind_call))
    {
        if (isLocal_nMI8cChU(node.target))
            replaceGlobid_6cAgAnCR(node.target, target, original, ss, _helpers, _here, ctx, module);

    }
    else if ((k == s_kind_block) || (k == s_kind_loop))
    {
        const s_Helpers foreign { node.helpers };
        if (foreign)
        {
            int BL_7_v {};
            const s_Helpers local = push_wE9ESfT8(HelpersReplica_GxLi1KXk((__extension__ (
            {
                const s_Target& t = _current_fn.out.target;
                BL_7_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
            (void)0;}), BL_7_v), (lastKnownLocal + 1), node.type), ss, _helpers);
            const s_Helpers* BL_8_v;
            grow_if_oob_ym0SxAmd(helpersReplicas, foreign.index) = s_Helpers((node.helpers = (__extension__ (
            {
                const s_TokenIdx& _here_1 = _here;
                BL_8_v = &((local ? local : BUG_9SZtRVJ0(fu::str{}, _here_1, ctx)));
            (void)0;}), *BL_8_v)));
        };
    }
    else if (k == s_kind_jump)
    {
        const s_Helpers& foreign = node.helpers;
        const s_Helpers& local = unless_oob_BJxn0BDS(helpersReplicas, foreign.index);
        const s_Helpers* BL_10_v;
        node.helpers = (__extension__ (
        {
            const s_TokenIdx& _here_1 = _here;
            BL_10_v = &((local ? local : BUG_9SZtRVJ0(fu::str{}, _here_1, ctx)));
        (void)0;}), *BL_10_v);
    };
    for (int i = 0; i < node.items.size(); i++)
    {
        s_SolvedNode* _0;
        (_0 = &(node.items.mutref(i)), relinkNode_W2lA6R6l(*_0, target, original, locals, helpersReplicas, lastKnownLocal, ss, _current_fn, _helpers, _here, ctx, module));
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

                                #ifndef DEF_steal_LyWpwxOay3c
                                #define DEF_steal_LyWpwxOay3c
inline s_SolvedNode steal_LyWpwxOa(s_SolvedNode& v)
{
    /*MOV*/ s_SolvedNode ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

static fu::str currentFn_mustBecomeInline_kUdU5Jsy(const s_CurrentFn& _current_fn)
{
    if (_current_fn.TODO_FIX_isInline)
        return "Explicitly marked inline."_fu;
    else if (_current_fn.far_jumps)
        return "Contains non-local control flow."_fu;
    else
    {
        return fu::str{};
    };
}

static fu::str explainTypeDiff_alC6xmK5(const s_Type& a, const s_Type& b, fu::view<char> sep, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return (((humanizeType_kB3Te7GK(a, false, false, false, false, b, ss, _helpers, _here, ctx, module) + " "_fu) + sep) + " "_fu) + humanizeType_kB3Te7GK(b, false, false, false, false, a, ss, _helpers, _here, ctx, module);
}

static fu::str str_x2vR7Kqe(const s_SolvedNode& n, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::str src = qKW_3PsDzMvu(str_n4lV73pj(n.kind));
    if ((n.kind == s_kind_call) || (n.kind == s_kind_let) || (n.kind == s_kind_letdef))
        src += (x7E_gCeFmDFw("("_fu, str_sdDZgf4z(GET_oTYbwQb8(n.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ")"_fu);
    else if (n.value)
        src += (("("_fu + qID_3PsDzMvu(n.value)) + ")"_fu);

    if (n.type)
        src += (" -> "_fu + humanizeType_kB3Te7GK(n.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module));

    return /*NRVO*/ src;
}

[[noreturn]] static fu::never err_qx0zwwof(fu::view<char> reason, const s_SolvedNode& node, const s_Overload& o, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    BUG_zwQElfxV(((x7E_gCeFmDFw(x7E_gCeFmDFw(str_x2vR7Kqe(node, ss, _helpers, _here, ctx, module), " "_fu), str_sdDZgf4z(o, ss, _helpers, _here, ctx, module)) + ": "_fu) + reason), ss, _helpers, _here, ctx, module);
}

inline static fu::str mangleArgTypes_AZfLJhWC(fu::view<s_SolvedNode> args)
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
            mangle += serializeType_Eouw2usb(argType.vtype, "mangle[$T]"_fu);

    };
    return /*NRVO*/ mangle;
}

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

static void checkLt_Lj4CAhVk(const s_Type& actual, fu::view<char> actualCopy, const s_SolvedNode& expect, fu::view<char> expectCopy, const s_SolvedNode& node, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!is_ref_gBx1AgSx(expect.type)))
    {
        s_Lifetime uNion = Lifetime_union_YIGC7Sux(expect.type.lifetime, actual.lifetime, false, _here, ctx);
        if (uNion != expect.type.lifetime)
        {
            s_Lifetime debug = Lifetime_union_YIGC7Sux(expect.type.lifetime, actual.lifetime, false, _here, ctx);
            BUG_zwQElfxV(x7E_gCeFmDFw((((((((((((((x7E_gCeFmDFw(str_x2vR7Kqe(node, ss, _helpers, _here, ctx, module), ": "_fu) + actualCopy) + " mentions a lifetime not listed in "_fu) + expectCopy) + ":"_fu) + "\n\n\t\t"_fu) + actualCopy) + ":\t"_fu) + humanizeType_kB3Te7GK(actual, true, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + "\n\n\t\t"_fu) + expectCopy) + ":\t"_fu) + humanizeType_kB3Te7GK(expect.type, true, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + "\n\n\t\tUNION:\t\t"_fu), str_XwwcWF8F(debug, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
        };
    };
}

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

                                #ifndef DEF_TRY_ERR
                                #define DEF_TRY_ERR
inline constexpr int TRY_ERR = 1;
                                #endif

static void test_node_1Fk3l8OG(const s_SolvedNode& node, const s_SolverPass pass, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < node.items.size(); i++)
        test_node_1Fk3l8OG(node.items[i], pass, ss, _current_fn, _helpers, _here, ctx, module);

    _here = node.token;
    unsigned BL_3_v {};
    if (is_never_FfV8Zuj5(node.type) && (__extension__ (
    {
        const s_ValueType& type = node.type.vtype;
        BL_3_v = ((type.quals & q_USAGE));
    (void)0;}), BL_3_v))
        BUG_zwQElfxV("node.is_never but some usage bits set"_fu, ss, _helpers, _here, ctx, module);
    else
    {
        const s_kind k = node.kind;
        if (!is_ref_gBx1AgSx(node.type) == !node.type.lifetime)
        {
            if (k == s_kind_call)
            {
                const s_Overload& o = GET_oTYbwQb8(node.target, ss, _helpers, _here, ctx, module);
                const s_kind k_1 = o.kind;
                fu::view<s_Argument> host_args = EXT_x9dYoBLb(node.target, ss, ctx, module).args;
                fu::view<s_SolvedNode> args = node.items;
                if ((host_args.size() == args.size()) || ((k_1 == s_kind_type) && !args.size()))
                {
                    if (!((o.kind == s_kind_type) && (tryLookupUserType_QHDuaMIF(o.type.vtype, _here, ctx, module).kind == s_kind_struct)))
                    {
                        for (int i_1 = 0; i_1 < args.size(); i_1++)
                        {
                            const s_Argument& host_arg = host_args[i_1];
                            const s_SolvedNode& arg = args[i_1];
                            if (isIrrelevant_40rRB6L8(host_arg.type))
                            {
                                if (o.kind == s_kind_field)
                                {
                                    if (!(isIrrelevant_40rRB6L8(node.type) || !isIrrelevant_40rRB6L8(arg.type)))
                                        BUG_zwQElfxV("Relevant data out of an irrelevant struct."_fu, ss, _helpers, _here, ctx, module);

                                };
                            }
                            else if (isAssignableAsArgument_E3uCShzQ(host_arg.type, arg.type, false, _here, ctx))
                            {
                                if ((pass >= s_SolverPass_RelaxCopyResize))
                                {
                                    if (!(is_ref_gBx1AgSx(host_arg.type) || !is_ref_gBx1AgSx(arg.type)))
                                    {
                                        err_qx0zwwof(((((x7E_gCeFmDFw("Missing copy or move for arg #"_fu, fu::i64dec(i_1)) + ", "_fu) + qID_3PsDzMvu(human_n8jXR2CC(host_arg.name, ss, _helpers, _here, ctx, module))) + ": "_fu) + explainTypeDiff_alC6xmK5(host_arg.type, arg.type, "<-"_fu, ss, _helpers, _here, ctx, module)), node, o, ss, _helpers, _here, ctx, module);
                                    };
                                };
                            }
                            else
                            {
                                err_qx0zwwof(((((x7E_gCeFmDFw("Arg #"_fu, fu::i64dec(i_1)) + ", "_fu) + qID_3PsDzMvu(human_n8jXR2CC(host_arg.name, ss, _helpers, _here, ctx, module))) + " not assignable to host_arg: "_fu) + explainTypeDiff_alC6xmK5(host_arg.type, arg.type, "<-"_fu, ss, _helpers, _here, ctx, module)), node, o, ss, _helpers, _here, ctx, module);
                            };
                        };
                    };
                    if (o.kind != s_kind_field)
                    {
                        if (!(isAssignable_v8EzC34Q(node.type, o.type, false, false, _here, ctx)))
                        {
                            err_qx0zwwof(("Return value not assignable to node.type: "_fu + explainTypeDiff_alC6xmK5(node.type, o.type, "<-"_fu, ss, _helpers, _here, ctx, module)), node, o, ss, _helpers, _here, ctx, module);
                        };
                    };
                }
                else
                {
                    err_qx0zwwof((((((x7E_gCeFmDFw((x7E_gCeFmDFw("host_args.len ("_fu, fu::i64dec(host_args.size())) + ") != args.len ("_fu), fu::i64dec(args.size())) + "):"_fu) + "\n\t\t"_fu) + mangleArgTypes_AZfLJhWC(args)) + "\n\t\t"_fu) + explainWhichFn_KACWd7In(node.target, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss, _current_fn, _helpers, _here, ctx, module)), node, o, ss, _helpers, _here, ctx, module);
                };
            }
            else if (k == s_kind_let)
            {
                if (node.items.size() == 2)
                {
                    if (node.items[0])
                        BUG_zwQElfxV(x7E_gCeFmDFw("let.items[0] not empty: "_fu, str_n4lV73pj(node.items[0].kind)), ss, _helpers, _here, ctx, module);

                }
                else
                    BUG_zwQElfxV(x7E_gCeFmDFw("let.items.len: "_fu, fu::i64dec(node.items.size())), ss, _helpers, _here, ctx, module);

            }
            else if ((k == s_kind_block) || (k == s_kind_and) || (k == s_kind_or) || (k == s_kind_if))
            {
                if (k == s_kind_block)
                {
                    checkLt_Lj4CAhVk(if_last_GN4mikiy(node.items).type, "block.tail"_fu, node, x7E_gCeFmDFw(str_n4lV73pj(node.kind), ".type"_fu), node, ss, _helpers, _here, ctx, module);
                    const s_HelpersData* BL_28_v;
                    const s_HelpersData* BL_29_v;
                    if ((__extension__ (
                    {
                        const s_Helpers& h = node.helpers;
                        BL_28_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                    (void)0;}), *BL_28_v).ret_actual && !s_HelpersMask(((__extension__ (
                    {
                        const s_Helpers& h = node.helpers;
                        BL_29_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                    (void)0;}), *BL_29_v).mask & s_HelpersMask_HM_Function)))
                    {
                        const s_HelpersData* BL_31_v;
                        checkLt_Lj4CAhVk((__extension__ (
                        {
                            const s_Helpers& h = node.helpers;
                            BL_31_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                        (void)0;}), *BL_31_v).ret_actual, "helpers.ret_actual"_fu, node, x7E_gCeFmDFw(str_n4lV73pj(node.kind), ".type"_fu), node, ss, _helpers, _here, ctx, module);
                    };
                }
                else if ((k == s_kind_and) || (k == s_kind_or))
                {
                    if ((node.items.size() >= 2))
                    {
                        const int start = (((k == s_kind_and) && !is_mutref_hoadAQC0(node.type, _here, ctx)) ? (node.items.size() - 1) : 0);
                        for (int i_1 = start; i_1 < node.items.size(); i_1++)
                            checkLt_Lj4CAhVk(node.items[i_1].type, (x7E_gCeFmDFw(x7E_gCeFmDFw(str_n4lV73pj(k), ".items["_fu), fu::i64dec(i_1)) + "]"_fu), node, x7E_gCeFmDFw(str_n4lV73pj(node.kind), ".type"_fu), node, ss, _helpers, _here, ctx, module);

                    }
                    else
                        BUG_zwQElfxV(x7E_gCeFmDFw(x7E_gCeFmDFw(str_x2vR7Kqe(node, ss, _helpers, _here, ctx, module), ".len: "_fu), fu::i64dec(node.items.size())), ss, _helpers, _here, ctx, module);

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
                                    BUG_zwQElfxV(x7E_gCeFmDFw(x7E_gCeFmDFw(str_x2vR7Kqe(node, ss, _helpers, _here, ctx, module), " never.alt not never: "_fu), str_x2vR7Kqe(node.items[2], ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                            }
                            else
                                BUG_zwQElfxV(x7E_gCeFmDFw(x7E_gCeFmDFw(str_x2vR7Kqe(node, ss, _helpers, _here, ctx, module), " never.cons not never: "_fu), str_x2vR7Kqe(node.items[1], ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                        };
                        checkLt_Lj4CAhVk(node.items[1].type, "if.then"_fu, node, x7E_gCeFmDFw(str_n4lV73pj(node.kind), ".type"_fu), node, ss, _helpers, _here, ctx, module);
                        checkLt_Lj4CAhVk(node.items[2].type, "if.else"_fu, node, x7E_gCeFmDFw(str_n4lV73pj(node.kind), ".type"_fu), node, ss, _helpers, _here, ctx, module);
                    }
                    else
                        BUG_zwQElfxV(x7E_gCeFmDFw(x7E_gCeFmDFw(str_x2vR7Kqe(node, ss, _helpers, _here, ctx, module), ".len: "_fu), fu::i64dec(node.items.size())), ss, _helpers, _here, ctx, module);

                };
                fu::view<s_SolvedNode> items = node.items;
                for (int i_1 = 0; i_1 < items.size(); i_1++)
                {
                    if (!(items[i_1].kind))
                        BUG_zwQElfxV((x7E_gCeFmDFw(x7E_gCeFmDFw(str_x2vR7Kqe(node, ss, _helpers, _here, ctx, module), ": No .kind on item["_fu), fu::i64dec(i_1)) + "]."_fu), ss, _helpers, _here, ctx, module);

                };
            }
            else if (k == s_kind_jump)
            {
                if ((pass >= s_SolverPass_RelaxCopyResize))
                {
                    const s_Helpers& h = node.helpers;
                    const s_SolvedNode& expr = only_GN4mikiy(node.items);
                    if (!(isAssignable_v8EzC34Q((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual, expr.type, false, false, _here, ctx)))
                        BUG_zwQElfxV(x7E_gCeFmDFw(((((("BROKEN JUMP TYPE"_fu + "\n\t\tret_actual: "_fu) + ((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual ? humanizeType_kB3Te7GK((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module) : qBAD_3PsDzMvu("N/A"_fu))) + "\n\t\tret_expect: "_fu) + ((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_expect ? humanizeType_kB3Te7GK((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_expect, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module) : qBAD_3PsDzMvu("N/A"_fu))) + "\n\t\texpr: "_fu), str_x2vR7Kqe(expr, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                };
            }
            else if (k == s_kind_try)
            {
                if (node.items.size() == 3)
                {
                    const s_SolvedNode& err = node.items[TRY_ERR];
                    if (!((err.kind == s_kind_letdef) || (err.kind == s_kind_empty)))
                        BUG_zwQElfxV(x7E_gCeFmDFw("TRY_ERR not a letdef/empty: "_fu, str_x2vR7Kqe(node.items[TRY_ERR], ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                }
                else
                    BUG_zwQElfxV("try.items.len != 3"_fu, ss, _helpers, _here, ctx, module);

            };
        }
        else
            BUG_zwQElfxV((x7E_gCeFmDFw(str_x2vR7Kqe(node, ss, _helpers, _here, ctx, module), ": !!ref != !!lt: "_fu) + humanizeType_kB3Te7GK(node.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    };
}

static void Postdom_resetAtFnEnd_tdY3Z3KG(s_Postdom& postdom)
{
    postdom = s_Postdom{};
    postdom.parent_loop_start = 1;
    postdom.snap.exitPaths = s_ExitPaths_XP_EmptyReturn;
}

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
extern const unsigned RELAX_before_bck;
                                #endif

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
extern const unsigned RELAX_all;
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

                                #ifndef DEF_CANNOT_definit_mutrefs
                                #define DEF_CANNOT_definit_mutrefs
inline constexpr bool CANNOT_definit_mutrefs = true;
                                #endif

static s_SolvedNode createBlock_4vpZBLng(const s_Type& type, fu::vec<s_SolvedNode>&& items, const s_Helpers& h, const s_TokenIdx& _here)
{
    return SolvedNode_wUIpeYIY(s_kind_block, type, s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, h, _here);
}

static s_SolvedNode createBlock_O5z3dG59(/*MOV*/ s_SolvedNode&& a, /*MOV*/ s_SolvedNode&& b, const s_TokenIdx& _here)
{
    if (b.kind == s_kind_block)
    {
        b.items.unshift(static_cast<s_SolvedNode&&>(a));
        return static_cast<s_SolvedNode&&>(b);
    }
    else
    {
        return createBlock_4vpZBLng(b.type, fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { static_cast<s_SolvedNode&&>(a), s_SolvedNode(b) } }, s_Helpers{}, _here);
    };
}

static void definitWrap_TdvXfwzc(s_SolvedNode& node, const s_Type& slot, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_mutref_hoadAQC0(slot, _here, ctx))
        BUG_zwQElfxV(("Trying to definitWrap a mutref: "_fu + humanizeType_kB3Te7GK(slot, true, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    else if (is_ref_gBx1AgSx(slot) && !hasStatic_Sd1Oo4TV(slot.lifetime))
    {
        if (hasTemporary_Sd1Oo4TV(slot.lifetime))
            definitWrap_TdvXfwzc(node, clear_refs_40rRB6L8(s_Type(slot)), ss, _helpers, _here, ctx, module);
        else
            BUG_zwQElfxV(("Trying to definitWrap a non-static reference: "_fu + humanizeType_kB3Te7GK(slot, true, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    }
    else
    {
        /*MOV*/ s_SolvedNode empty = createEmpty_hkWuvX58(s_kind_empty, slot, s_Target{}, _here);
        node = (isImmediatelyDiscardable_6wzYjnDc(node.kind) ? static_cast<s_SolvedNode&&>(empty) : createBlock_O5z3dG59(s_SolvedNode(node), static_cast<s_SolvedNode&&>(empty), _here));
    };
}

static void maybeCopyOrMove_9xQ8JW0m(s_SolvedNode& node, const s_Type& slot, const bool isArgument, const fu::str& debug, const s_SolverState& ss, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(isIrrelevant_40rRB6L8(slot)))
    {
        unsigned BL_2_v {};
        if (is_never_FfV8Zuj5(slot) && (__extension__ (
        {
            const s_ValueType& type = slot.vtype;
            BL_2_v = ((type.quals & q_USAGE));
        (void)0;}), BL_2_v))
            BUG_zwQElfxV("maybeCopyOrMove: slot.is_never but some usage bits set"_fu, ss, _helpers, _here, ctx, module);
        else if (!isCanonAssignable_IaeizMuX(slot.vtype.canon, node.type.vtype.canon) && !is_never_FfV8Zuj5(node.type))
        {
            if (is_zeroes_FfV8Zuj5(node.type) && !(is_mutref_hoadAQC0(slot, _here, ctx) && CANNOT_definit_mutrefs))
                definitWrap_TdvXfwzc(node, slot, ss, _helpers, _here, ctx, module);
            else
            {
                BUG_zwQElfxV(("Considering copy or move for incompatible types: "_fu + explainTypeDiff_alC6xmK5(slot, node.type, "<-"_fu, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
            };
        }
        else if (is_ref_gBx1AgSx(slot))
        {
            if (is_trivial_QHDuaMIF(node.type.vtype, _here, ctx, module))
            {
                if ((node.kind == s_kind_empty) && isArgument)
                    node.type = clear_refs_40rRB6L8(s_Type(node.type));

            };
        }
        else
        {
            if (!(!is_ref_gBx1AgSx(node.type)))
            {
                if (node.kind == s_kind_empty)
                    node.type = clear_refs_40rRB6L8(s_Type(node.type));
                else
                {
                    const s_TokenIdx here0 { _here };
                    fu_DEFER(_here = here0);
                    _here = node.token;
                    node = SolvedNode_wUIpeYIY(s_kind_copy, clear_refs_40rRB6L8(s_Type(node.type)), s_Flags{}, debug, fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, s_Helpers{}, _here);
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

static bool isMutVal_x3AUdppB(const s_Overload& o)
{
    return !(~o.flags & (s_Flags_F_MUT | s_Flags_F_VAL));
}

static void keepOrClearMutVal_LgzZOTwd(s_Overload& o, const bool keep, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if ((o.kind == s_kind_var) && isMutVal_x3AUdppB(o))
    {
        s_SolvedNode& node = o.solved;
        if (keep)
            node.type = clear_refs_40rRB6L8(s_Type(node.type));
        else
            o.flags &= ~s_Flags_F_MUT;

    }
    else
        BUG_zwQElfxV(x7E_gCeFmDFw("keepOrClearMutVal: Not a mut var: "_fu, str_sdDZgf4z(o, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

}

static void relaxBlockVar_Bj9dQ5wm(const s_Target& t, const unsigned relax_mask, const bool canDiscard, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_Overload BL_1_v {};
    s_Overload o = (__extension__ (
    {
        const s_Overload& __partcopy_ref = GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module);
        BL_1_v = (s_Overload { __partcopy_ref.kind, __partcopy_ref.flags, __partcopy_ref.status, fu::str(__partcopy_ref.name), s_Type { s_ValueType { {}, fu::str(__partcopy_ref.type.vtype.canon) }, {}, {} }, s_SolvedNode { {}, {}, {}, {}, {}, {}, s_TokenIdx(__partcopy_ref.solved.token), {}, s_Target(__partcopy_ref.solved.target) } });
    (void)0;}), static_cast<s_Overload&&>(BL_1_v));
    if (_current_fn)
    {
        const s_Type& usage = unless_oob_sNTK8wKW(_current_fn.relaxed.var_usage, int(unsigned((t._packed & 0xfffffull))));
        const bool isUnused = !usage;
        if (isUnused)
        {
            if (!((o.flags & s_Flags_F_LAX) || s_SolverStatus((o.status & s_SolverStatus_SS_MATCHED)) || is_zst_QHDuaMIF(o.type.vtype, _here, ctx, module)))
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
                    a = s_Warning { s_TokenIdx(token), fail_appendStack_6w3qOeIN((((x7E_gCeFmDFw("Unused variable: "_fu, str_sdDZgf4z(o, ss, _helpers, _here, ctx, module)) + ": make it "_fu) + qKW_3PsDzMvu("lax"_fu)) + " if this is intentional."_fu), ss, _helpers, _here, ctx, module) };
                };
            };
        };

        {
            const s_SolverState& ss_1 = ss;
            if (is_rx_copy_GSunVkiW(usage) && isIrrelevant_40rRB6L8(usage) && !is_zst_QHDuaMIF(usage.vtype, _here, ctx, module))
                BUG_zwQElfxV(((x7E_gCeFmDFw("relaxBlockVar "_fu, str_sdDZgf4z(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ": Usage is copy but no usage bits set: "_fu) + humanizeType_kB3Te7GK(usage, false, false, false, false, (*(const s_Type*)fu::NIL), ss_1, _helpers, _here, ctx, module)), ss_1, _helpers, _here, ctx, module);

        };
        s_Overload& o_1 = GET_mut_j8q0a60a(t, ss, module);
        if (isUnused)
            o_1.status |= s_SolverStatus_SS_UNUSED;
        else if (o_1.status & s_SolverStatus_SS_UNUSED)
            BUG_zwQElfxV(((x7E_gCeFmDFw("relaxBlockVar: previously SS_UNUSED "_fu, str_sdDZgf4z(o_1, ss, _helpers, _here, ctx, module)) + " now used as "_fu) + humanizeType_kB3Te7GK(usage, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        if (isUnused && canDiscard)
            o_1.solved.type = t_void;

        try_relax_c5Z7RHRf(o_1.type, usage, relax_mask);
        s_SolvedNode& node = o_1.solved;
        if (node.type)
        {
            try_relax_c5Z7RHRf(node.type, usage, relax_mask);
            if (isMutVal_x3AUdppB(o_1))
            {
                if (!isArg_GtNDTeV7(o_1))
                    keepOrClearMutVal_LgzZOTwd(o_1, is_mutref_hoadAQC0(usage, _here, ctx), ss, _helpers, _here, ctx, module);

            };
        }
        else
            BUG_zwQElfxV("relaxBlockVar: !var.solved.type, can`t propagateType"_fu, ss, _helpers, _here, ctx, module);

    };
    s_SolvedNode& node = GET_mut_j8q0a60a(t, ss, module).solved;
    if (node.items && node.items[LET_INIT] && !isArg_GtNDTeV7(o))
    {
        s_SolvedNode init {};
        std::swap(init, node.items.mutref(LET_INIT));
        propagateType_pH8jMqgi(init, s_Type(node.type), relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        s_Overload& o_1 = GET_mut_j8q0a60a(t, ss, module);
        s_SolvedNode& node_1 = o_1.solved;
        if (is_ref_gBx1AgSx(node_1.type))
        {
            node_1.type.lifetime = init.type.lifetime;
        };
        std::swap(init, node_1.items.mutref(LET_INIT));
    };
    add_U5p6nLOf(_current_fn.relaxed.done_relaxing, int(unsigned((t._packed & 0xfffffull))));
}

                                #ifndef DEF_t_proposition
                                #define DEF_t_proposition
extern const s_Type t_proposition;
                                #endif

static bool isDiscardable_6LKZeu6d(const s_SolvedNode& node, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (node.items)
        return false;
    else if ((node.kind == s_kind_call) || (node.kind == s_kind_letdef))
        return false;
    else if ((node.kind == s_kind_block) || isImmediatelyDiscardable_6wzYjnDc(node.kind))
        return true;
    else
        BUG_zwQElfxV((x7E_gCeFmDFw("TODO: isDiscardable("_fu, str_n4lV73pj(node.kind)) + ")"_fu), ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_x3Cx3E_aZbbFNK5KV3
                                #define DEF_x3Cx3E_aZbbFNK5KV3
inline int x3Cx3E_aZbbFNK5(const s_ExitPaths a, const s_ExitPaths b)
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
    else if ((cmp = x3Cx3E_aZbbFNK5(a.exitPaths, b.exitPaths)))
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

static void branch_RQi5rqrx(s_Postdom& dest, const s_Postdom& src, const s_TokenIdx& _here, const s_Context& ctx)
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

static int createAndOr_staticEvalFold_QnCU4kXP(fu::vec<s_SolvedNode>& items, const s_StaticEval static_eval_fold, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int trim = 0;
    for (int i = (items.size() - 1); i-- > 0; )
    {
        const s_StaticEval se = tryAbstractEvalAsBool_JCuol0P9(items[i], false, ss, _current_fn, _helpers, _here, ctx, module);
        if (se == static_eval_fold)
        {
            /*MOV*/ s_SolvedNode cond { items[i] };
            items.splice(i, 1);
            if (trim)
                trim--;

            s_SolvedNode& cons = items.mutref(i);
            cons = createBlock_O5z3dG59(static_cast<s_SolvedNode&&>(cond), s_SolvedNode(cons), _here);
        }
        else if (se)
            trim = (i + 1);

    };
    return trim;
}

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

static s_SolvedNode createOr_Vakj1ep0(fu::vec<s_SolvedNode>&& items, s_Type&& type, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    {
        const int trim = createAndOr_staticEvalFold_QnCU4kXP(items, s_StaticEval_SE_False, ss, _current_fn, _helpers, _here, ctx, module);
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
                        fail_Szrpd5G6(("Ambiguous ||, incompatible operands in a non-bool context: "_fu + explainTypeDiff_alC6xmK5(item.type, sumType, "||"_fu, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
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

    const s_Type& last_type = last_GN4mikiy(items).type;
    if (is_never_FfV8Zuj5(last_type) || s_VFacts((last_type.vfacts & s_VFacts_AlwaysTrue)))
        type.vfacts = s_VFacts_AlwaysTrue;

    return SolvedNode_wUIpeYIY(s_kind_or, type, s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode createBool_4AXYcGKj(const fu::str& value, s_Type&& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    type.vfacts = ((value == "true"_fu) ? s_VFacts_AlwaysTrue : ((value == "false"_fu) ? s_VFacts_AlwaysFalse : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module)));
    return SolvedNode_wUIpeYIY(s_kind_bool, type, s_Flags{}, value, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode createDefinit_CGnCwQAy(const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_ref_gBx1AgSx(type))
    {
        if (is_mutref_hoadAQC0(type, _here, ctx))
            BUG_zwQElfxV(("createDefinit: Cannot definit a mutref: "_fu + humanizeType_kB3Te7GK(type, true, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
        else if (!hasStatic_Sd1Oo4TV(type.lifetime))
            BUG_zwQElfxV(("createDefinit: Cannot definit a non-static reference: "_fu + humanizeType_kB3Te7GK(type, true, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    };
    if (is_integral_3t4EwFeQ(type.vtype))
    {
        return SolvedNode_wUIpeYIY(s_kind_int, type, s_Flags{}, "0"_fu, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    }
    else if (is_floating_pt_3t4EwFeQ(type.vtype))
    {
        return SolvedNode_wUIpeYIY(s_kind_real, type, s_Flags{}, "0"_fu, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    }
    else if (is_boolean_3t4EwFeQ(type.vtype))
        return createBool_4AXYcGKj("false"_fu, s_Type(type), ss, _helpers, _here, ctx, module);
    else
    {
        return SolvedNode_wUIpeYIY(s_kind_definit, type, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    };
}

static s_SolvedNode solveDefinit_0j7JC2L1(const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return createDefinit_CGnCwQAy(definitType_PeFmd5co(s_Type(type), false, _here, ctx), ss, _helpers, _here, ctx, module);
}

static const s_Struct& lookupUserType_ou8qkkyp(const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Struct* _0;
    return *(_0 = &(tryLookupUserType_QHDuaMIF(type.vtype, _here, ctx, module))) ? *_0 : fail_Szrpd5G6(("Not a struct nor custom primitive: "_fu + humanizeType_kB3Te7GK(type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
}

static const fu::str& getBasePrim_P6gLVbAT(const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int offset = basePrimPrefixLen_OaQVyIZB(type.vtype.canon);
    if (offset < type.vtype.canon.size())
        return lookupUserType_ou8qkkyp(type, ss, _helpers, _here, ctx, module).shape.basePrim;
    else
        return type.vtype.canon;

}

static bool want_rDktQBTI(const s_Type& t, fu::view<char> c)
{
    return c == t.vtype.canon;
}

static const s_Type& check_hcUZeRH3(const s_Type& type, const s_Intlit& parse, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (type && is_primitive_3t4EwFeQ(type.vtype))
    {
        fu::view<char> c = getBasePrim_P6gLVbAT(type, ss, _helpers, _here, ctx, module);
        if (!parse.uNsigned)
        {
            if (((parse.minsize_f <= fu::u8(32u)) && want_rDktQBTI(t_f32, c)) || ((parse.minsize_f <= fu::u8(64u)) && want_rDktQBTI(t_f64, c)) || ((parse.minsize_i <= fu::u8(32u)) && want_rDktQBTI(t_i32, c)) || ((parse.minsize_i <= fu::u8(64u)) && want_rDktQBTI(t_i64, c)) || ((parse.minsize_i <= fu::u8(16u)) && want_rDktQBTI(t_i16, c)) || ((parse.minsize_i <= fu::u8(8u)) && want_rDktQBTI(t_i8, c)))
                return type;

        };
        if (!parse.sIgned)
        {
            if (((parse.minsize_u <= fu::u8(32u)) && want_rDktQBTI(t_u32, c)) || ((parse.minsize_u <= fu::u8(64u)) && want_rDktQBTI(t_u64, c)) || ((parse.minsize_u <= fu::u8(16u)) && want_rDktQBTI(t_u16, c)) || ((parse.minsize_u <= fu::u8(8u)) && want_rDktQBTI(t_u8, c)))
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

    fail_Szrpd5G6("Bad int literal."_fu, ss, _helpers, _here, ctx, module);
}

static s_Type solveInt_gCZyni41(fu::view<char> v, const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    s_Intlit parse = Intlit_sNwIFkW3(v);
    if (parse.error)
        fail_Szrpd5G6(parse.error, ss, _helpers, _here, ctx, module);
    else
    {
        /*MOV*/ s_Type type_1 = clear_refs_40rRB6L8(s_Type(check_hcUZeRH3(type, parse, ss, _helpers, _here, ctx, module)));
        if (!s_DevOptions((options.dev & s_DevOptions_DEV_DontFoldLiterals)))
            type_1.vfacts = (parse.absval ? s_VFacts_AlwaysTrue : s_VFacts_AlwaysFalse);

        return /*NRVO*/ type_1;
    };
}

static const s_Type& solveReal_IYoJr7Ki(const s_Type& type)
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

static s_Type solveString_V8sDIyan(fu::view<char> v, const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (type && is_primitive_3t4EwFeQ(type.vtype))
    {
        fu::view<s_ScopeItem> a = tryLookupUserType_QHDuaMIF(type.vtype, _here, ctx, module).items;
        for (int i = 0; i < a.size(); i++)
        {
            const s_ScopeItem& member = a[i];
            if (member.id == v)
                return s_Type(GET_oTYbwQb8(target_NWTdzsfF(member), ss, _helpers, _here, ctx, module).type);

        };
    };
    /*MOV*/ s_Type ret { t_string };
    if (!s_DevOptions((options.dev & s_DevOptions_DEV_DontFoldLiterals)))
        ret.vfacts = (v.size() ? s_VFacts_AlwaysTrue : s_VFacts_AlwaysFalse);

    return /*NRVO*/ ret;
}

static s_Type tryRetyping_1axCq2Iv(const s_SolvedNode& node, const s_Type& expect, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if ((node.kind == s_kind_definit) || is_zeroes_FfV8Zuj5(node.type))
        return definitType_PeFmd5co(s_Type(expect), false, _here, ctx);
    else
    {
        if (is_arithmetic_3t4EwFeQ(node.type.vtype) && is_arithmetic_3t4EwFeQ(expect.vtype))
        {
            if (node.kind == s_kind_int)
                return solveInt_gCZyni41(node.value, expect, ss, _helpers, _here, ctx, module, options);
            else if (node.kind == s_kind_real)
                return s_Type(solveReal_IYoJr7Ki(expect));

        };
        if (node.kind == s_kind_str)
            return solveString_V8sDIyan(node.value, expect, ss, _helpers, _here, ctx, module, options);
        else if (node.kind == s_kind_if)
        {
            s_Type left = tryRetyping_1axCq2Iv(node.items[1], expect, ss, _helpers, _here, ctx, module, options);
            s_Type right = tryRetyping_1axCq2Iv(node.items[2], expect, ss, _helpers, _here, ctx, module, options);
            if (left && right)
                return type_trySuper_2nNLpyR4(left, right, false, _here, ctx);
            else
            {
                return s_Type{};
            };
        }
        else if (node.kind == s_kind_block)
        {
            const s_HelpersData* BL_11_v;
            if (!s_HelpersMask(((__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_11_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
            (void)0;}), *BL_11_v).mask & s_HelpersMask_HM_LabelUsed)))
                return tryRetyping_1axCq2Iv(last_GN4mikiy(node.items), expect, ss, _helpers, _here, ctx, module, options);
            else
            {
                return s_Type{};
            };
        }
        else
        {
            return s_Type{};
        };
    };
}

static void applyRetype_LjVkTUf1(s_SolvedNode& node, const s_Type& retype, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_zeroes_FfV8Zuj5(node.type))
        definitWrap_TdvXfwzc(node, retype, ss, _helpers, _here, ctx, module);
    else
    {
        if (node.kind == s_kind_if)
        {
            s_SolvedNode* _0;
            (_0 = &(node.items.mutref(1)), applyRetype_LjVkTUf1(*_0, retype, ss, _helpers, _here, ctx, module));
            s_SolvedNode* _1;
            (_1 = &(node.items.mutref(2)), applyRetype_LjVkTUf1(*_1, retype, ss, _helpers, _here, ctx, module));
        }
        else if (node.kind == s_kind_block)
        {
            const s_HelpersData* BL_5_v;
            if ((__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_5_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
            (void)0;}), *BL_5_v).mask & s_HelpersMask_HM_LabelUsed)
                BUG_zwQElfxV("Trying to retype a labelled block, we cant do this still."_fu, ss, _helpers, _here, ctx, module);
            else
            {
                s_SolvedNode* _2;
                (_2 = &(last_Iovd0TM6(node.items)), applyRetype_LjVkTUf1(*_2, retype, ss, _helpers, _here, ctx, module));
            };
        };
        node.type = retype;
    };
}

static s_UnpackedOffset field_unpackOffset_NCtF3vLS(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (o.kind == s_kind_field)
    {
        const int packed = o.solved.helpers.index;
        return s_UnpackedOffset { (packed & 0xffff), (packed >> 16) };
    }
    else
        BUG_9SZtRVJ0("field_unpackOffset: Not a field."_fu, _here, ctx);

}

                                #ifndef DEF_Lifetime_static
                                #define DEF_Lifetime_static
extern const s_Lifetime Lifetime_static;
                                #endif

static s_Type make_field_reference_IA27CM2I(const s_Type& from, const s_Overload& field, const bool TODO_FIX_useTemporaryLifetime, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_UnpackedOffset _ = field_unpackOffset_NCtF3vLS(field, _here, ctx);
    return make_field_reference_EIkJMWjY((from ? from : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module)).vtype.quals, (TODO_FIX_useTemporaryLifetime ? Lifetime_temporary : (!_.memberFlatCount ? Lifetime_static : from.lifetime)), s_Type(field.type), _.memberFlatOffset, _.memberFlatCount, _here, ctx);
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

static void foreach_ZUwiUf5l(const s_Target& t, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, s_Reorder& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
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
    if (nullary || (candidate = tryMatch__mutargs_ZkfSrDkY(""_fu, TODO_FIX_reorder, TODO_FIX_conversions, error, false, (*(const s_Scope*)fu::NIL), fu::vec<s_SolvedNode>(ss.TODO_FIX_convert_args), s_Flags_F_CONVERSION, t, ss, _notes, _current_fn, _helpers, _here, ctx, module, options)))
    {
        const s_Target& t_1 = (nullary ? t : candidate);
        const s_Overload& convert = GET_oTYbwQb8(t_1, ss, _helpers, _here, ctx, module);
        if (convert.type)
        {
            s_Type convertType = ((convert.kind != s_kind_field) ? s_Type(convert.type) : make_field_reference_IA27CM2I(from, convert, true, ss, _helpers, _here, ctx, module));
            const bool isStruct = isStruct_jSb6u57z(convertType.vtype);
            if (!(s_SolverStatus((convert.status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_FINALIZED)))) == s_SolverStatus_SS_DID_START))
            {
                if (isAssignableAsArgument_E3uCShzQ(expect, convertType, false, _here, ctx))
                {
                    if (match)
                    {
                        fu::str suffix = ((("\n"_fu + explainConversion_ZTaQXjUZ(match, fu::view<char>{}, ss, _current_fn, _helpers, _here, ctx, module)) + "\n\tand:\n"_fu) + explainConversion_ZTaQXjUZ((path + t_1), fu::view<char>{}, ss, _current_fn, _helpers, _here, ctx, module));
                        if (actual)
                            fail_Szrpd5G6(((((("Conversion ambiguity, multiple ways to convert "_fu + humanizeType_kB3Te7GK(actual, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " into "_fu) + humanizeType_kB3Te7GK(expect, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + ":"_fu) + suffix), ss, _helpers, _here, ctx, module);
                        else
                            fail_Szrpd5G6(((((qBAD_3PsDzMvu("using"_fu) + " ambiguity, multiple ways to obtain a "_fu) + humanizeType_kB3Te7GK(expect, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " in this scope:"_fu) + suffix), ss, _helpers, _here, ctx, module);

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
                                        const s_Overload& convert_1 = GET_oTYbwQb8(path[i_1], ss, _helpers, _here, ctx, module);
                                        err += ((x7E_gCeFmDFw(str_sdDZgf4z(convert_1, ss, _helpers, _here, ctx, module), ": "_fu) + humanizeType_kB3Te7GK(convertType, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " ->"_fu);
                                    };
                                    err += x7E_gCeFmDFw("\n\t        "_fu, str_sdDZgf4z(convert, ss, _helpers, _here, ctx, module));
                                    fail_Szrpd5G6(err, ss, _helpers, _here, ctx, module);
                                };
                            };
                        };
                        const int path0 = path.size();
                        fu_DEFER(path.shrink(path0));
                        if (TODO_FIX_conversions)
                            path += only_w5gyl1Mp(TODO_FIX_conversions);

                        path += s_Target(t_1);
                        descend_6mpmtWGG(convertType, false, isStruct, false, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    };
                };
            };
        }
        else
            BUG_zwQElfxV((x7E_gCeFmDFw("No convert.type, perhaps a `using inline fn` without a return type annotation: `"_fu, str_sdDZgf4z(convert, ss, _helpers, _here, ctx, module)) + "`."_fu), ss, _helpers, _here, ctx, module);

    };
}

inline static void l_30_20_VUSf1LrY(const s_Target& u, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, s_Reorder& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    foreach_ZUwiUf5l(u, from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

                                #ifndef DEF_each_YyCxh5o0tQe
                                #define DEF_each_YyCxh5o0tQe
inline void each_YyCxh5o0(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, s_Reorder& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
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
                l_30_20_VUSf1LrY(items[i_1], from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

            i0 = ss_1.end;
        };
    };
}
                                #endif

                                #ifndef DEF_each_efXVdBD4cDh
                                #define DEF_each_efXVdBD4cDh
inline void each_efXVdBD4(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Type& from, const bool nullary, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, s_Reorder& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
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
                foreach_ZUwiUf5l(items[i_1], from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

            i0 = ss_1.end;
        };
    };
}
                                #endif

static void descend_6mpmtWGG(const s_Type& from, const bool nullary, const bool isStruct, const bool root, const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, fu::vec<s_Target>& match, fu::vec<s_Target>& path, const int has_converts, const s_SolvedNode& arg0, s_Reorder& TODO_FIX_reorder, fu::vec<fu::vec<s_Target>>& TODO_FIX_conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (nullary)
        each_YyCxh5o0(fu::vec<s_Target>((local_scope ? ss._scope : misc_scope).usings), fu::vec<s_ScopeSkip>((local_scope ? ss._ss.usings : (*(const fu::vec<s_ScopeSkip>*)fu::NIL))), 0, from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else
    {
        if (isStruct)
        {
            fu::vec<s_Target> inner { lookupUserType_ou8qkkyp(from, ss, _helpers, _here, ctx, module).converts };
            for (int i = 0; i < inner.size(); i++)
                foreach_ZUwiUf5l(s_Target(inner[i]), from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

        };
        if (has_converts)
            each_efXVdBD4(fu::vec<s_Target>((local_scope ? ss._scope : misc_scope).converts), fu::vec<s_ScopeSkip>((local_scope ? ss._ss.converts : (*(const fu::vec<s_ScopeSkip>*)fu::NIL))), 0, from, nullary, root, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

    };
}

static fu::vec<s_Target> tryConvert_R8JgtFQr(const s_Type& expect, const bool local_scope, const s_Type& actual, const s_SolvedNode& retype, const s_Scope& misc_scope, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::vec<s_Target> match {};
    fu::vec<s_Target> path {};
    const int conv_safety0 = _current_fn.conv_safety++;
    if ((conv_safety0 >= 128))
    {
        fail_Szrpd5G6(("Conversion stack got too deep, exploring: "_fu + explainTypeDiff_alC6xmK5(actual, expect, "->"_fu, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    }
    else
    {
        fu_DEFER(_current_fn.conv_safety = conv_safety0);
        const int has_converts = (local_scope ? ss._scope : misc_scope).converts.size();
        s_SolvedNode arg0 { ss.TODO_FIX_convert_args[0] };
        s_Reorder TODO_FIX_reorder {};
        fu::vec<fu::vec<s_Target>> TODO_FIX_conversions {};
        descend_6mpmtWGG(actual, !actual, (actual ? isStruct_jSb6u57z(actual.vtype) : false), true, expect, local_scope, actual, retype, misc_scope, match, path, has_converts, arg0, TODO_FIX_reorder, TODO_FIX_conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        return /*NRVO*/ match;
    };
}

static fu::str& explain_E4U6Fagm(const s_Type& a, const s_Type& b, fu::view<s_Target> chain, fu::str& error, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return (error += ((("\n\t"_fu + explainTypeDiff_alC6xmK5(a, b, "->"_fu, ss, _helpers, _here, ctx, module)) + ":"_fu) + explainConversion_ZTaQXjUZ(chain, fu::view<char>{}, ss, _current_fn, _helpers, _here, ctx, module)));
}

static int findRestStart_gcKePdlK(const s_Extended& ext)
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

static s_Type solveArrlit_itemType_init_9PZFCkAf(const s_Type& head, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    s_Type _0 {};
    return (_0 = clear_refs_40rRB6L8(s_Type(head))) ? static_cast<s_Type&&>(_0) : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
}

static s_Type superType_fSrZ2yBH(fu::view<char> reason, const s_Type& a, const s_Type& b, const s_Target& target, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    s_Type _0 {};
    return (_0 = type_trySuper_2nNLpyR4(a, b, false, _here, ctx)) ? static_cast<s_Type&&>(_0) : fail_Szrpd5G6(((((target ? str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module) : fu::str{}) + reason) + "No common supertype: "_fu) + explainTypeDiff_alC6xmK5(a, b, "|"_fu, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
}

static s_Type solveArrlit_itemType_8v2zlVGP(fu::view<s_SolvedNode> items, /*MOV*/ s_Type&& itemType, int start, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!itemType)
    {
        if (start == items.size())
            fail_Szrpd5G6("Cannot infer empty arraylit."_fu, ss, _helpers, _here, ctx, module);
        else
            itemType = solveArrlit_itemType_init_9PZFCkAf(items[start++].type, ss, _helpers, _here, ctx, module);

    }
    else if (is_ref_gBx1AgSx(itemType))
        fail_Szrpd5G6("Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu, ss, _helpers, _here, ctx, module);

    for (int i = start; i < items.size(); i++)
    {
        itemType = superType_fSrZ2yBH("Array literal: "_fu, itemType, items[i].type, s_Target{}, ss, _helpers, _here, ctx, module);
    };
    return static_cast<s_Type&&>(itemType);
}

static s_Type solveArrlit_done_5DjBNoMU(const s_Type& itemType, const int itemCount, const s_Options& options)
{
    /*MOV*/ s_Type arrayType = createArray_i5AzHnyb(itemType);
    if ((itemCount >= 0) && !s_DevOptions((options.dev & s_DevOptions_DEV_DontFoldLiterals)))
        arrayType.vfacts = (itemCount ? s_VFacts_AlwaysTrue : s_VFacts_AlwaysFalse);

    return /*NRVO*/ arrayType;
}

static s_SolvedNode createArrlit_Zm60u2Pt(fu::vec<s_SolvedNode>&& items, const s_Type& itemType, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    s_Type itemType_1 = solveArrlit_itemType_8v2zlVGP(items, s_Type(itemType), 0, ss, _helpers, _here, ctx, module);
    return SolvedNode_wUIpeYIY(s_kind_arrlit, solveArrlit_done_5DjBNoMU(itemType_1, items.size(), options), s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
}

static int GET_next_local_index_3KGaHIS6(const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int BL_1_v {};
    const int globid = (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v);
    if (!globid)
        return 0;
    else if ((globid > 0) && (globid < ss._scope.extended.size()))
        return ss._scope.extended[globid].locals.size() + 1;
    else
        BUG_zwQElfxV("GET_next_local_index: bad globid"_fu, ss, _helpers, _here, ctx, module);

}

static fu::vec<s_Target>& l_6_0_1L4fRMhj(s_Map_S6ornWd95j4& _)
{
    return _.keys;
}

static fu::vec<s_Target>& l_6_1_UR9M5IeH(s_Map_S6ornWd95j4& _)
{
    return _.vals;
}

                                #ifndef DEF_update_ZJF7MpszDy2
                                #define DEF_update_ZJF7MpszDy2
inline bool update_ZJF7Mpsz(const s_Target& item, const s_Target& extra, s_Map_S6ornWd95j4& _)
{
    int lo = 0;
    int hi = l_6_0_1L4fRMhj(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_LngZZmWA(l_6_0_1L4fRMhj(_)[i], item);
        if (cmp == 0)
        {
            l_6_1_UR9M5IeH(_).mutref(i) = s_Target(extra);
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_0_1L4fRMhj(_).insert(lo, s_Target(item));
    l_6_1_UR9M5IeH(_).insert(lo, s_Target(extra));
    return true;
}
                                #endif

                                #ifndef DEF_set_CNrCVyMguyi
                                #define DEF_set_CNrCVyMguyi
inline bool set_CNrCVyMg(s_Map_S6ornWd95j4& _, const s_Target& key, const s_Target& value)
{
    return update_ZJF7Mpsz(key, value, _);
}
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

static s_Lifetime Lifetime_fromBinding_YJ9sU7w1(const s_Target& target, const int flatCount, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (int(unsigned((target._packed & 0xfffffull))) || (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid))
    {
        const int locid = int(unsigned((target._packed & 0xfffffull)));
        if (locid && (flatCount || !TODO_FIX_static_ZSTs))
        {
            return Lifetime_from_PFBW1nI4(locid, flatCount, _here, ctx);
        }
        else
        {
            return s_Lifetime(Lifetime_static);
        };
    }
    else
        BUG_zwQElfxV("not from this module"_fu, ss, _helpers, _here, ctx, module);

}

static void TEST_LifetimeEqual_5PdzK0k7(const s_Lifetime& a, fu::view<char> aa, const s_Lifetime& b, fu::view<char> bb, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(a == b))
    {
        BUG_zwQElfxV((x7E_gCeFmDFw((((((x7E_gCeFmDFw((((("visitNode TEST_LifetimeEqual:"_fu + "\n\n\t    "_fu) + aa) + ":\t"_fu) + "("_fu), str_XwwcWF8F(a, ss, _helpers, _here, ctx, module)) + ")"_fu) + "\n\n\t    "_fu) + bb) + ":\t"_fu) + "("_fu), str_XwwcWF8F(b, ss, _helpers, _here, ctx, module)) + ")"_fu), ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_get_aaMnv5rbjHc
                                #define DEF_get_aaMnv5rbjHc
inline const s_Target& get_aaMnv5rb(fu::view<s_Target> keys, const s_Target& item, fu::view<s_Target> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_LngZZmWA(keys[i], item);
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

                                #ifndef DEF_get_RRXQtBLSwWf
                                #define DEF_get_RRXQtBLSwWf
inline const s_Target& get_RRXQtBLS(const s_Map_S6ornWd95j4& _, const s_Target& key)
{
    return get_aaMnv5rb(_.keys, key, _.vals);
}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_8q0EObWT(fu::vec<s_SolvedNode>& arr)
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

static fu::str qSTACK_implicit_RppLuiFz(const s_Target& target, const s_SolvedNode& node, fu::view<char> id, const s_Type& type, fu::view<s_Target> seen, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target nestingFnort0 = exchange_jPHBkujO(ss._nestingFnort, s_Target(target));
    fu_DEFER(ss._nestingFnort = nestingFnort0);
    fu::str candidates = ""_fu;
    fu::vec<s_Target> seen_1 = (seen + target);

    {
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_8q0EObWT(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_oTYbwQb8(node_1.target, ss, _helpers, _here, ctx, module).solved : node_1);
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
                    if (candidate && !(GET_oTYbwQb8(candidate, ss, _helpers, _here, ctx, module).flags & s_Flags_F_INJECTED) && (GET_oTYbwQb8(candidate, ss, _helpers, _here, ctx, module).name == id) && isAssignableAsArgument_E3uCShzQ(type, GET_oTYbwQb8(candidate, ss, _helpers, _here, ctx, module).type, false, _here, ctx))
                    {
                        candidates += (x7E_gCeFmDFw("\n        Possible candidate in "_fu, str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ": "_fu);
                        if (!(GET_oTYbwQb8(candidate, ss, _helpers, _here, ctx, module).flags & s_Flags_F_IMPLICIT))
                            candidates += qBAD_3PsDzMvu("NOT implicit "_fu);

                        candidates += explainWhichFn_KACWd7In(candidate, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn_1, _helpers, _here, ctx, module);
                    };
                };
                if (!((node_3.kind != s_kind_call) || isLocal_nMI8cChU(node_3.target)))
                {
                    if (!(has_P9xEJb6w(seen_1, node_3.target)))
                    {

                        { {
                            fu::view<s_Argument> host_args = EXT_x9dYoBLb(node_3.target, ss, ctx, module).args;
                            for (int i = 0; i < host_args.size(); i++)
                            {
                                const s_Argument& host_arg = host_args[i];
                                if ((host_arg.flags & s_Flags_F_IMPLICIT) && (host_arg.name == id) && isAssignableAsArgument_E3uCShzQ(host_arg.type, type, false, _here, ctx))
                                    goto BL_11;

                            };
                            goto BL_5;
                          } BL_11:;
                        };
                        fu::str peek = qSTACK_implicit_RppLuiFz(s_Target(node_3.target), s_SolvedNode(GET_oTYbwQb8(node_3.target, ss, _helpers, _here, ctx, module).solved), id, type, seen_1, ss, _current_fn_1, _helpers, _here, ctx, module);
                        return (((x7E_gCeFmDFw(("\n            "_fu + "because of call to "_fu), str_sdDZgf4z(GET_oTYbwQb8(node_3.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu) + addr_and_snippet_2bGH8tqt(node_3.token, s_CodeFmt{}, fu::view<char>{}, ctx, module)) + peek) + candidates;
                    };
                };
              } BL_5:;
            };
            for (int i = node_3.items.size(); i-- > 0; )
                stack += s_SolvedNode(node_3.items[i]);

        };
    };
    fu::view<s_Argument> host_args = EXT_x9dYoBLb(target, ss, ctx, module).args;
    for (int i = 0; i < host_args.size(); i++)
    {
        const s_Argument& host_arg = host_args[i];
        if ((host_arg.flags & s_Flags_F_IMPLICIT) && (host_arg.name == id) && isAssignableAsArgument_E3uCShzQ(host_arg.type, type, false, _here, ctx))
        {
            return ("\n            "_fu + "because of "_fu) + explainWhichFn_KACWd7In(host_arg.target, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn, _helpers, _here, ctx, module);
        };
    };
    return ""_fu;
}

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
inline constexpr int FN_ARGS_BACK = FN_RET_BACK;
                                #endif

static s_Type intersectionType_BdeipU8k(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu::str& id, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    s_Type _0 {};
    return (_0 = type_tryIntersect_33NmLJZR(a, b, _here, ctx)) ? static_cast<s_Type&&>(_0) : fail_Szrpd5G6(((((id ? (qID_3PsDzMvu(id) + ": "_fu) : fu::str{}) + reason) + "Cannot intersect types: "_fu) + explainTypeDiff_alC6xmK5(a, b, "&"_fu, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
}

static s_Target Binding_ik4fVjuH(const fu::str& id, /*MOV*/ s_Type&& type, const s_Flags flags, bool& shadows, const bool asArgument, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const fu::str& name = id;
    int BL_1_v {};
    const int local_of = (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v);
    if (ss._root_scope)
        autoshadow_r7hruJY4(shadows, local_of, id, ss, _current_fn);

    const s_SolverStatus status = (asArgument ? s_SolverStatus_SS_ARGUMENT : s_SolverStatus{});
    const s_Target target = Scope_create_j83Ac6jp(ss._scope, s_kind_var, name, (*(const s_Type*)fu::NIL), flags, status, local_of, module);
    s_Overload& overload = GET_mut_j8q0a60a(target, ss, module);

    {
        s_Lifetime lifetime = Lifetime_fromBinding_YJ9sU7w1(target, getFlatCount_QHDuaMIF(type.vtype, _here, ctx, module), ss, _helpers, _here, ctx, module);
        type.lifetime = s_Lifetime{};
        overload.type = ((flags & s_Flags_F_MUT) ? add_mutref_XBf6EmLx(static_cast<s_Type&&>(type), lifetime, _here, ctx) : add_ref_XBf6EmLx(static_cast<s_Type&&>(type), lifetime, _here, ctx));
    };
    return target;
}

static s_SolvedNode& solved_set_M1Pf6o9d(const s_Target& target, const s_SolvedNode& node, s_SolverState& ss, const s_Module& module)
{
    return (GET_mut_j8q0a60a(target, ss, module).solved = s_SolvedNode(node));
}

static s_Target createLet_implicitArg_xxZDeiGc(const fu::str& id, const s_Type& type, const s_Flags flags, bool& shadows, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target target = Binding_ik4fVjuH(id, s_Type(type), flags, shadows, true, ss, _current_fn, _helpers, _here, ctx, module);
    s_SolvedNode ret = SolvedNode_wUIpeYIY(s_kind_let, GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).type, flags, GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).name, (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
    solved_set_M1Pf6o9d(target, ret, ss, module);
    return target;
}

static s_SolvedNode createLetDef_cIEFeLEc(const s_Target& target, const s_Type& letdefType, const s_TokenIdx& _here)
{
    return SolvedNode_wUIpeYIY(s_kind_letdef, ((letdefType == t_proposition) ? t_bool : t_void), s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_Target injectImplicitArg_EfUX7UrG(const fu::str& id, const s_Type& type, const s_Target& becauseOf, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!_current_fn.out.items || (_current_fn.out.flags & s_Flags_F_EXTERN))
    {
        fu::str _0 {};
        fu::str _1 {};
        (_1 = (_0 = (x7E_gCeFmDFw((((("No implicit "_fu + qBAD_3PsDzMvu(human_n8jXR2CC(id, ss, _helpers, _here, ctx, module))) + ": "_fu) + humanizeType_kB3Te7GK(type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " in scope, needed to call "_fu), str_sdDZgf4z(GET_oTYbwQb8(becauseOf, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ":\n"_fu), (static_cast<fu::str&&>(_0) + qSTACK_implicit_RppLuiFz(becauseOf, s_SolvedNode(GET_oTYbwQb8(becauseOf, ss, _helpers, _here, ctx, module).solved), id, type, fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Szrpd5G6(static_cast<fu::str&&>(_1), ss, _helpers, _here, ctx, module));
    }
    else
    {
        for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
        {
            s_SolvedNode& arg = _current_fn.out.items.mutref(i);
            const s_Target target { arg.target };
            s_SolvedNode& arg_1 = ((arg.kind == s_kind_letdef) ? GET_mut_j8q0a60a(target, ss, module).solved : arg);
            if ((arg_1.flags & s_Flags_F_IMPLICIT) && (arg_1.value == id))
            {
                if (arg_1.type == GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).type)
                {
                    /*MOV*/ s_Type super = intersectionType_BdeipU8k("Implicit argument collision: "_fu, add_ref_XBf6EmLx(s_Type(type), arg_1.type.lifetime, _here, ctx), arg_1.type, id, ss, _helpers, _here, ctx, module);
                    arg_1.type = super;
                    GET_mut_j8q0a60a(target, ss, module).type = static_cast<s_Type&&>(super);
                    return (target ? target : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
                }
                else
                {
                    BUG_zwQElfxV(("injectImplicitArg: arg.type != target.type:\n\n\t    "_fu + explainTypeDiff_alC6xmK5(arg_1.type, GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).type, "<->"_fu, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                };
            };
        };
        bool shadows {};
        const s_Flags flags = (((s_Flags_F_INJECTED | s_Flags_F_IMPLICIT) | s_Flags_F_LAX) | s_Flags_F_REF);
        const s_Target newArgTarget = createLet_implicitArg_xxZDeiGc(id, type, flags, shadows, ss, _current_fn, _helpers, _here, ctx, module);
        const int newArgIdx = (_current_fn.out.items.size() + FN_ARGS_BACK);
        /*MOV*/ s_SolvedNode newLetDef = createLetDef_cIEFeLEc(newArgTarget, (*(const s_Type*)fu::NIL), _here);
        _current_fn.out.items.insert(newArgIdx, static_cast<s_SolvedNode&&>(newLetDef));
        return newArgTarget;
    };
}

static void checkAssignable_wNHoCVE4(const s_Type& host, const s_Type& guest, fu::view<char> reason, const s_Target& target, const bool asArgument, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(isAssignable_v8EzC34Q((host ? host : BUG_zwQElfxV("Bad host type."_fu, ss, _helpers, _here, ctx, module)), (guest ? guest : BUG_zwQElfxV("Bad guest type."_fu, ss, _helpers, _here, ctx, module)), false, asArgument, _here, ctx)))
    {
        fail_Szrpd5G6(((((target ? str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module) : fu::str{}) + reason) + ": "_fu) + explainTypeDiff_alC6xmK5(host, guest, "<-"_fu, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    };
}

static s_SolvedNode bindImplicitArg_jx2FuD8J(const fu::str& name, const s_Type& type, const s_Target& becauseOf, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_ClosureID cid = tryParseClosureID_54NQWyOV(name, _here, ctx);
    if (cid && (parent_nUz4wbwT(cid.target, ss, _helpers, _here, ctx, module) == _current_fn.out.target))
    {
        if (cid.revision == EPH_On3tAJ9X(_current_fn.out.target, ss, module).revision)
        {
            if (GET_oTYbwQb8(cid.target, ss, _helpers, _here, ctx, module).kind == s_kind_var)
            {
                return CallerNode_X3mO7Hwg("__closure"_fu, s_Target(cid.target), fu::vec<s_SolvedNode>{}, (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            }
            else
                BUG_zwQElfxV(x7E_gCeFmDFw("ClosureID.target is not a var: "_fu, str_sdDZgf4z(GET_oTYbwQb8(cid.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        }
        else
            BUG_zwQElfxV(x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("ClosureID.revision mismatch: "_fu, str_sdDZgf4z(GET_oTYbwQb8(cid.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + "\n\tCaptured at: "_fu), fu::u64dec(cid.revision)) + "\n\tCurrent rev: "_fu), fu::u64dec(EPH_On3tAJ9X(_current_fn.out.target, ss, module).revision)), ss, _helpers, _here, ctx, module);

    }
    else
    {
        fu::str error {};
        s_Reorder reorder {};
        fu::vec<fu::vec<s_Target>> conversions {};
        s_Target _0 {};
        const s_Target target = ((_0 = (!cid ? tryMatch__mutargs_ZkfSrDkY(fu::str(name), reorder, conversions, error, true, (*(const s_Scope*)fu::NIL), fu::view<s_SolvedNode>{}, s_Flags_F_IMPLICIT, s_Target{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_Target{})) ? _0 : (_0 = injectImplicitArg_EfUX7UrG(name, type, becauseOf, ss, _current_fn, _helpers, _here, ctx, module)) ? _0 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
        /*MOV*/ s_SolvedNode call = CallerNode_X3mO7Hwg("__implicit"_fu, s_Target(target), fu::vec<s_SolvedNode>{}, reorder, conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        checkAssignable_wNHoCVE4(type, call.type, (("Implicit "_fu + qBAD_3PsDzMvu(name)) + " type mismatch"_fu), s_Target{}, true, ss, _helpers, _here, ctx, module);
        return /*NRVO*/ call;
    };
}

static s_Target injectForeignLocal_HRhrP275(const s_Target& target, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).kind == s_kind_var)
    {
        const s_ClosureID noClID = tryParseClosureID_54NQWyOV(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).name, _here, ctx);
        if (noClID)
            BUG_zwQElfxV(x7E_gCeFmDFw("injectForeignLocal: Unexpected closure-id: "_fu, str_sdDZgf4z(GET_oTYbwQb8(noClID.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    }
    else
        BUG_zwQElfxV(x7E_gCeFmDFw("injectForeignLocal: trying to inject a non-var: "_fu, str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    if (GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).flags & s_Flags_F_IMPLICIT)
        return injectImplicitArg_EfUX7UrG(fu::str(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).name), s_Type(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).type), target, ss, _current_fn, _helpers, _here, ctx, module);
    else
    {
        unsigned _0 {};
        const s_ClosureID clID = s_ClosureID { s_Target(target), ((_0 = EPH_On3tAJ9X(parent_nUz4wbwT(target, ss, _helpers, _here, ctx, module), ss, module).revision) ? _0 : BUG_zwQElfxV(x7E_gCeFmDFw("injectForeignLocal: About to serialize at rev 0: "_fu, str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module)) };
        return injectImplicitArg_EfUX7UrG(serialize_LBuqoCCv(clID, _here, ctx), s_Type(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).type), target, ss, _current_fn, _helpers, _here, ctx, module);
    };
}

static s_Target matchReplicaOrInjectForeignLocal_Ox0fR7XO(const s_Target& target, const s_Type& slot, const s_Target& from, const s_Map_S6ornWd95j4& letdefReplicas, const int minLocalIdx, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Target& replica = get_RRXQtBLS(letdefReplicas, target);
    if (replica)
        return replica;
    else if (parent_nUz4wbwT(target, ss, _helpers, _here, ctx, module) == _current_fn.out.target)
    {
        if (int(unsigned((target._packed & 0xfffffull))) < minLocalIdx)
            return target;
        else
            BUG_zwQElfxV(x7E_gCeFmDFw("Missing a local replica for: "_fu, str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    }
    else
    {
        const s_Overload& o = GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module);
        if (o.flags & s_Flags_F_IMPLICIT)
            return bindImplicitArg_jx2FuD8J(fu::str(o.name), s_Type((slot ? slot : o.type)), from, ss, _notes, _current_fn, _helpers, _here, ctx, module, options).target;
        else if (int(unsigned(((from._packed >> 40ull) & 0xfffffull))) != module.modid)
            BUG_zwQElfxV(x7E_gCeFmDFw("inlineExpression: about to use injectForeignLocal with an off-module target: "_fu, str_sdDZgf4z(o, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
        else
            return injectForeignLocal_HRhrP275(target, ss, _current_fn, _helpers, _here, ctx, module);

    };
}

static s_Flags isInlineLocal_OGN17PXK(const s_Overload& o)
{
    if (!isArg_GtNDTeV7(o))
        return o.flags & s_Flags_F_INLINE;
    else
    {
        return s_Flags{};
    };
}

static const s_Type& Lifetime_climbType_426itOgG(const s_Overload& o, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (o.kind == s_kind_var)
    {
        const s_SolvedNode& node = o.solved;
        if (is_ref_gBx1AgSx(node.type) && !isArg_GtNDTeV7(o))
            return node.items[LET_INIT].type;
        else
            return (*(const s_Type*)fu::NIL);

    }
    else
    {
        BUG_zwQElfxV(x7E_gCeFmDFw("Lifetime_climbType: not a `var`: "_fu, str_sdDZgf4z(o, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    };
}

static bool Lifetime_allowsMutrefReturn_WvZdiAgU(const s_Lifetime& lifetime, const int locals_start, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    { {
        fu::view<char> chars = lifetime.uni0n;
        int offset = 0;
        while (offset < chars.size())
        {
            const unsigned r = parse7bit(chars, offset);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            if (!(!locid))
            {
                if (locid < locals_start)
                    goto BL_1;
                else
                {
                    const s_Overload& o = GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module);
                    if ((o.kind == s_kind_var) && is_mutref_hoadAQC0(o.type, _here, ctx))
                    {
                        if (!(o.flags & s_Flags_F_REF))
                            return false;
                        else
                        {
                            const s_Type& init = Lifetime_climbType_426itOgG(o, ss, _helpers, _here, ctx, module);
                            if (!Lifetime_allowsMutrefReturn_WvZdiAgU(init.lifetime, locals_start, ss, _helpers, _here, ctx, module))
                                return false;

                        };
                    }
                    else
                    {
                        BUG_zwQElfxV(x7E_gCeFmDFw("Lifetime_allowsMutrefReturn: found non-mutref: "_fu, str_sdDZgf4z(o, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                    };
                };
            };
        };
      } BL_1:;
    };
    return true;
}

static s_Type superType_neverOK_AogzhHF7(fu::view<char> reason, const s_Type& a, const s_Type& b, const s_Target& target, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_never_FfV8Zuj5(a))
        return s_Type(b);
    else if (is_never_FfV8Zuj5(b))
        return s_Type(a);
    else
        return superType_fSrZ2yBH(reason, a, b, target, ss, _helpers, _here, ctx, module);

}

static void reportReturnType_FjwYL6rK(const s_Helpers& h, const s_Type& type, const bool NICEERR_missingReturn, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ s_Type type_1 = ((is_mutref_hoadAQC0(type, _here, ctx) && !Lifetime_allowsMutrefReturn_WvZdiAgU(type.lifetime, (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).locals_start, ss, _helpers, _here, ctx, module)) ? clear_mutref_40rRB6L8(s_Type(type)) : s_Type(type));
    /*MOV*/ s_Type type_2 = (hasTemporary_Sd1Oo4TV(type_1.lifetime) ? clear_refs_40rRB6L8(static_cast<s_Type&&>(type_1)) : static_cast<s_Type&&>(type_1));
    if ((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_expect)
        checkAssignable_wNHoCVE4((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_expect, type_2, (NICEERR_missingReturn ? " is missing a final return statement"_fu : "Actual return type does not match annotation"_fu), (NICEERR_missingReturn ? (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).target : (*(const s_Target*)fu::NIL)), false, ss, _helpers, _here, ctx, module);

    (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual = ((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual ? superType_neverOK_AogzhHF7((NICEERR_missingReturn ? " is missing a final return statement: "_fu : "Subsequent return: "_fu), (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual, type_2, (NICEERR_missingReturn ? (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).target : (*(const s_Target*)fu::NIL)), ss, _helpers, _here, ctx, module) : static_cast<s_Type&&>(type_2));
    if (!((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual))
        BUG_zwQElfxV("reportReturnType: no ret_actual."_fu, ss, _helpers, _here, ctx, module);

}

static s_SolvedNode createJump_0pdWGtwM(const s_Helpers& h, const s_SolvedNode& expr, const s_TokenIdx& _here)
{
    return SolvedNode_wUIpeYIY(s_kind_jump, t_never, s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, h, _here);
}

static s_SolvedNode solveJump_finish_inW6jANn(const s_Flags flags, const s_SolvedNode& expr, const s_Helpers& h, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).mask |= s_HelpersMask_HM_LabelUsed;
    reportReturnType_FjwYL6rK(h, expr.type, !!(flags & s_Flags_F_IMPLICIT), ss, _helpers, _here, ctx, module);
    return createJump_0pdWGtwM(h, expr, _here);
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

static void visit_O0AoZABE(const s_Lifetime& lifetime, s_Lifetime& result, bool& maybeOutOfOrder, const s_Target& from, const s_Map_S6ornWd95j4& letdefReplicas, const int minLocalIdx, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    // Hoisted:
    int offset0_1;

    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;

        {
            const unsigned r = parse7bit(chars, offset);
            int BL_4_v {};
            const int sr = (__extension__ (
            {
                offset0_1 = (offset + 0);
                for (; ; )
                {
                    bool isLastPath = false;
                    bool isFirstSubRegion = true;
                    for (; ; )
                    {
                        const unsigned raw_flatOffset = parse7bit(chars, offset);
                        const bool isLastSubRegion = !(raw_flatOffset & 1u);
                        const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                        isLastPath = !(raw_flatCount & 1u);
                        if (isLastSubRegion)
                            break;
                        else
                            isFirstSubRegion = false;

                    };
                    if (isLastPath)
                        break;

                };
                BL_4_v = (offset0_1);
            (void)0;}), BL_4_v);
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            fu::view<char> paths = fu::get_view(chars, sr, offset);
            if (!(!locid))
            {
                const s_Target foreign = nested_h9CpDpVs(locid, from, ss, _helpers, _here, ctx, module);
                const s_Target local = matchReplicaOrInjectForeignLocal_Ox0fR7XO(foreign, (*(const s_Type*)fu::NIL), from, letdefReplicas, minLocalIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                if (isInlineLocal_OGN17PXK(GET_oTYbwQb8(local, ss, _helpers, _here, ctx, module)))
                {
                    const s_SolvedNode* _0;
                    const s_SolvedNode& init = (*(_0 = &(GET_oTYbwQb8(local, ss, _helpers, _here, ctx, module).solved.items[LET_INIT])) ? *_0 : BUG_zwQElfxV(x7E_gCeFmDFw("inlineExpression TYPE: F_INLINE local has no LET_INIT: "_fu, str_sdDZgf4z(GET_oTYbwQb8(local, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module));
                    s_Lifetime replacement = (init.type.lifetime ? Lifetime_op_join_dwN33Lug(init.type.lifetime, paths, _here, ctx) : s_Lifetime(Lifetime_temporary));
                    const s_TokenIdx& _here_1 = _here;
                    maybeOutOfOrder = true;
                    Lifetime_add_PUWFQPIX(result, replacement, false, _here_1, ctx);
                    continue;
                }
                else
                {
                    s_Lifetime replacement_1 = (GET_oTYbwQb8(local, ss, _helpers, _here, ctx, module).type.lifetime ? Lifetime_op_join_dwN33Lug(GET_oTYbwQb8(local, ss, _helpers, _here, ctx, module).type.lifetime, paths, _here, ctx) : BUG_zwQElfxV("visitType: !local.type.lifetime"_fu, ss, _helpers, _here, ctx, module));
                    const s_TokenIdx& _here_2 = _here;
                    maybeOutOfOrder = true;
                    Lifetime_add_PUWFQPIX(result, replacement_1, false, _here_2, ctx);
                    continue;
                };
            };
        };
        if (maybeOutOfOrder)
        {
            result = Lifetime_union_YIGC7Sux(result, s_Lifetime { fu::slice(chars, offset0, offset) }, false, _here, ctx);
        }
        else
            result.uni0n += fu::get_view(chars, offset0, offset);

    };
}

                                #ifndef DEF_Lifetime_process_zem1bFJdx2a
                                #define DEF_Lifetime_process_zem1bFJdx2a
inline s_Lifetime Lifetime_process_zem1bFJd(const s_Lifetime& lifetime, const s_Target& from, const s_Map_S6ornWd95j4& letdefReplicas, const int minLocalIdx, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ s_Lifetime result {};
    bool maybeOutOfOrder = false;
    visit_O0AoZABE(lifetime, result, maybeOutOfOrder, from, letdefReplicas, minLocalIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return /*NRVO*/ result;
}
                                #endif

static void visitType_Nm51HVYj(s_Type& type, const s_Target& from, const s_Map_S6ornWd95j4& letdefReplicas, const int minLocalIdx, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    type.lifetime = Lifetime_process_zem1bFJd(type.lifetime, from, letdefReplicas, minLocalIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

static void visitNode_wt8mNrgI(s_SolvedNode& node, const int locals_start, const s_Target& from, s_Map_S6ornWd95j4& letdefReplicas, const s_Target& now_inlining, const int minLocalIdx, fu::vec<s_Helpers>& helpersReplicas, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if ((node.kind == s_kind_block) || (node.kind == s_kind_loop))
    {
        const s_Helpers& foreign = node.helpers;
        if (foreign)
        {
            int BL_3_v {};
            const s_Helpers local = push_wE9ESfT8(HelpersReplica_GxLi1KXk((__extension__ (
            {
                const s_Target& t = _current_fn.out.target;
                BL_3_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
            (void)0;}), BL_3_v), (locals_start ? locals_start : GET_next_local_index_3KGaHIS6(ss, _current_fn, _helpers, _here, ctx, module)), node.type), ss, _helpers);
            grow_if_oob_ym0SxAmd(helpersReplicas, foreign.index) = s_Helpers((local ? local : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module)));
            node.helpers = local;
        };
    };
    for (int i = 0; i < node.items.size(); i++)
        visitNode_wt8mNrgI(node.items.mutref(i), 0, from, letdefReplicas, now_inlining, minLocalIdx, helpersReplicas, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

    if (node.kind == s_kind_letdef)
    {
        /*MOV*/ s_Overload foreign { GET_oTYbwQb8(node.target, ss, _helpers, _here, ctx, module) };
        int BL_7_v {};
        const s_Target local = Scope_create_j83Ac6jp(ss._scope, s_kind___no_kind_yet, (*(const fu::str*)fu::NIL), (*(const s_Type*)fu::NIL), s_Flags{}, s_SolverStatus{}, (__extension__ (
        {
            const s_Target& t = _current_fn.out.target;
            BL_7_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_7_v), module);
        set_CNrCVyMg(letdefReplicas, node.target, (local ? local : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module)));
        /*MOV*/ s_Type type { foreign.type };
        if (type.lifetime == Lifetime_static)
        {
            if (!(is_zst_QHDuaMIF(type.vtype, _here, ctx, module)))
            {
                BUG_zwQElfxV(x7E_gCeFmDFw("Unexpected static lifetime on "_fu, str_sdDZgf4z(foreign, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
            };
        }
        else
        {
            const int flatCount = getFlatCount_QHDuaMIF(type.vtype, _here, ctx, module);
            TEST_LifetimeEqual_5PdzK0k7(type.lifetime, "foreign.type.lifetime"_fu, Lifetime_fromBinding_YJ9sU7w1(node.target, flatCount, ss, _helpers, _here, ctx, module), "Lifetime_fromBinding"_fu, ss, _helpers, _here, ctx, module);
            type.lifetime = Lifetime_fromBinding_YJ9sU7w1(local, flatCount, ss, _helpers, _here, ctx, module);
        };
        /*MOV*/ s_SolvedNode solved { foreign.solved };
        if ((solved.kind == s_kind_let) && (solved.target == node.target))
        {
            solved.target = local;
            visitNode_wt8mNrgI(solved, 0, from, letdefReplicas, now_inlining, minLocalIdx, helpersReplicas, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            GET_mut_j8q0a60a(local, ss, module) = s_Overload { foreign.kind, foreign.flags, s_SolverStatus((foreign.status & s_SolverStatus_SS_MATCHED)), static_cast<fu::str&&>(foreign.name), static_cast<s_Type&&>(type), static_cast<s_SolvedNode&&>(solved) };
            node.target = local;
        }
        else
        {
            BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
        };
    }
    else if (node.kind == s_kind_call)
    {
        if (isLocal_nMI8cChU(node.target))
        {
            const s_Target local = matchReplicaOrInjectForeignLocal_Ox0fR7XO(node.target, node.type, from, letdefReplicas, minLocalIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

            {
                const s_Overload& foreign = GET_oTYbwQb8(node.target, ss, _helpers, _here, ctx, module);
                if (!(isAssignable_v8EzC34Q(foreign.type, GET_oTYbwQb8(local, ss, _helpers, _here, ctx, module).type, false, false, _here, ctx) || (is_never_FfV8Zuj5(GET_oTYbwQb8(local, ss, _helpers, _here, ctx, module).type) && isInlineLocal_OGN17PXK(GET_oTYbwQb8(local, ss, _helpers, _here, ctx, module)))))
                    BUG_zwQElfxV((((((x7E_gCeFmDFw("matchReplicaOrInjectForeignLocal botching the type of "_fu, str_sdDZgf4z(foreign, ss, _helpers, _here, ctx, module)) + ":\n"_fu) + "\n\t\tExpect: "_fu) + humanizeType_kB3Te7GK(foreign.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + "\n\t\tActual: "_fu) + humanizeType_kB3Te7GK(GET_oTYbwQb8(local, ss, _helpers, _here, ctx, module).type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

            };
            node.target = local;
            if (isLocal_nMI8cChU(local))
                GET_mut_j8q0a60a(local, ss, module).status |= s_SolverStatus_SS_MATCHED;

            node.type.vfacts = GET_oTYbwQb8(local, ss, _helpers, _here, ctx, module).type.vfacts;
            if (isInlineLocal_OGN17PXK(GET_oTYbwQb8(local, ss, _helpers, _here, ctx, module)))
            {
                const s_SolvedNode* _0;
                node = inlineExpression_8n84Drwr(parent_nUz4wbwT(local, ss, _helpers, _here, ctx, module), s_SolvedNode((*(_0 = &(GET_oTYbwQb8(local, ss, _helpers, _here, ctx, module).solved.items[LET_INIT])) ? *_0 : BUG_zwQElfxV(x7E_gCeFmDFw("inlineExpression NODE: F_INLINE local has no LET_INIT: "_fu, str_sdDZgf4z(GET_oTYbwQb8(local, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module))), s_Map_S6ornWd95j4(letdefReplicas), 0, s_Target{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                return;
            };
        }
        else if ((node.target == now_inlining) || has_P9xEJb6w(_current_fn.already_inlined, node.target))
            fail_Szrpd5G6(x7E_gCeFmDFw("Cannot inline self-recursive fns: "_fu, str_sdDZgf4z(GET_oTYbwQb8(node.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    }
    else if ((node.kind == s_kind_jump) || (node.kind == s_kind___far_jump))
    { {
        if (node.kind == s_kind_jump)
        {
            const s_Helpers& foreign = node.helpers;
            const s_Helpers& local = unless_oob_BJxn0BDS(helpersReplicas, foreign.index);
            if (local)
            {
                node.helpers = local;
                (((local.index >= 0) && (local.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(local.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).mask |= s_HelpersMask_HM_LabelUsed;
                goto BL_20;
            }
            else
                node.kind = s_kind___far_jump;

        };
        const s_HelpersData* BL_24_v;
        int BL_25_v {};
        if ((__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_24_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_24_v).local_of == (__extension__ (
        {
            const s_Target& t = _current_fn.out.target;
            BL_25_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_25_v))
            node = solveJump_finish_inW6jANn(node.flags, only_GN4mikiy(node.items), node.helpers, ss, _helpers, _here, ctx, module);
        else
        {
            const s_HelpersData* BL_28_v;
            add_jzOp5jol(_current_fn.far_jumps, (__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_28_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
            (void)0;}), *BL_28_v).local_of);
        };
      } BL_20:;
    };
    visitType_Nm51HVYj(node.type, from, letdefReplicas, minLocalIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (node.helpers)
    {
        if ((node.kind == s_kind_block) || (node.kind == s_kind_loop))
        {
            const s_HelpersData* BL_31_v;
            if ((__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_31_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
            (void)0;}), *BL_31_v).ret_actual)
            {
                s_Type ret_actual {};
                s_HelpersData* BL_33_v;
                std::swap(ret_actual, (__extension__ (
                {
                    const s_Helpers& h = node.helpers;
                    BL_33_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                (void)0;}), *BL_33_v).ret_actual);
                visitType_Nm51HVYj(ret_actual, from, letdefReplicas, minLocalIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                s_HelpersData* BL_34_v;
                std::swap(ret_actual, (__extension__ (
                {
                    const s_Helpers& h = node.helpers;
                    BL_34_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                (void)0;}), *BL_34_v).ret_actual);
            };
        }
        else if ((node.kind != s_kind_jump) && (node.kind != s_kind___far_jump))
            BUG_zwQElfxV(x7E_gCeFmDFw("inlineExpression: TODO handle .helpers on a "_fu, str_n4lV73pj(node.kind)), ss, _helpers, _here, ctx, module);

    };
}

static s_SolvedNode inlineExpression_8n84Drwr(const s_Target& from, /*MOV*/ s_SolvedNode&& node, s_Map_S6ornWd95j4&& letdefReplicas, const int locals_start, const s_Target& now_inlining, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (from)
    {
        const int helpers0 = _helpers.size();
        fu_DEFER(_helpers.shrink(helpers0));
        const int minLocalIdx = GET_next_local_index_3KGaHIS6(ss, _current_fn, _helpers, _here, ctx, module);
        fu::vec<s_Helpers> helpersReplicas {};
        visitNode_wt8mNrgI(node, locals_start, from, letdefReplicas, now_inlining, minLocalIdx, helpersReplicas, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        return static_cast<s_SolvedNode&&>(node);
    }
    else
        BUG_zwQElfxV("TODO inlining from global scope, never happened before, might work, remove assert as needed."_fu, ss, _helpers, _here, ctx, module);

}

static s_SolvedNode deadCall_xlcWussB(const fu::vec<s_SolvedNode>& args, const s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{

    {
        const s_SolverNotes note = s_SolverNotes_N_DeadCall;
        if (note & options.break_notes)
            fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss, _helpers, _here, ctx, module);
        else
            _notes |= note;

    };
    return createBlock_4vpZBLng(t_never, fu::vec<s_SolvedNode>(args), s_Helpers{}, _here);
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

inline static bool l_30_5_8etjs6gZ(const int locid, const bool isStatic, const bool staticOK, const int expect)
{
    return (locid ? (!expect || (locid == expect)) : false) || (!isStatic ? isStatic : staticOK);
}

                                #ifndef DEF_Lifetime_if_only_1ZSIrJaJ7k1
                                #define DEF_Lifetime_if_only_1ZSIrJaJ7k1
inline bool Lifetime_if_only_1ZSIrJaJ(const s_Lifetime& lifetime, const bool staticOK, const int expect)
{
    bool first = true;

    { {
        fu::view<char> chars = lifetime.uni0n;
        int offset = 0;
        while (offset < chars.size())
        {
            const unsigned r = parse7bit(chars, offset);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            const bool isStatic = (r == 0u);
            if (!first)
                goto BL_1;
            else
            {
                first = false;
                if (l_30_5_8etjs6gZ(locid, isStatic, staticOK, expect))
                    return true;

            };
        };
      } BL_1:;
    };
    return false;
}
                                #endif

static void TEST_varLifetime_sPLjW7ch(const s_Lifetime& lifetime, const bool staticOK, const int expect, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!Lifetime_if_only_1ZSIrJaJ(lifetime, staticOK, expect))
    {
        BUG_zwQElfxV(x7E_gCeFmDFw("Bad local lifetime: "_fu, str_XwwcWF8F(lifetime, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    };
}

static int localOf_cCGDItnh(const s_Target& target, const s_SolverState& ss, const s_Module& module)
{
    if (isLocal_nMI8cChU(target))
        return int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
    else
        return EPH_On3tAJ9X(target, ss, module).local_of;

}

static void detectRecursion_c6tz23ns(const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Overload& overload = GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module);
    if (!(s_SolverStatus((overload.status & s_SolverStatus((s_SolverStatus_SS_FINALIZED | s_SolverStatus_SS_LAZY)))) != s_SolverStatus_SS_LAZY))
    {
        const s_SolverNotes note = ((overload.kind == s_kind_type) ? s_SolverNotes_N_TypeRecursion : s_SolverNotes_N_FnRecursion);
        const s_SolverStatus status = ((overload.kind == s_kind_type) ? s_SolverStatus_SS_TYPE_RECUR : s_SolverStatus_SS_FN_RECUR);
        for (int i = _helpers.size(); i-- > 0; )
        {
            const s_Helpers& h = _helpers[i];
            if (!(!isFnOrType_dk3U8OnF(h, ss, _here, ctx)))
            {
                GET_mut_j8q0a60a((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).target, ss, module).status |= status;

                {
                    const s_SolverState& ss_1 = ss;
                    if (note & options.break_notes)
                        fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                    else
                        _notes |= note;

                };
                if ((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).target == target)
                    return;

            };
        };
        BUG_zwQElfxV((x7E_gCeFmDFw((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu), str_wO7dLc1g(overload.status)) + ")`."_fu), ss, _helpers, _here, ctx, module);
    };
}

static bool tryConvertIfNeeded_cAtQ5Jev(s_SolvedNode& actual, const s_Type& expect, const bool asArgument, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (!isAssignable_v8EzC34Q(expect, actual.type, false, asArgument, _here, ctx))
    {
        fu::vec<s_Target> conv = tryConvert_R8JgtFQr(expect, true, actual.type, (*(const s_SolvedNode*)fu::NIL), (*(const s_Scope*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (!conv)
            return false;
        else
            applyConversion_VfaInRao(actual, conv, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

    };
    return true;
}

static void convertIfNeeded_zp67JUwj(s_SolvedNode& actual, const s_Type& expect, fu::view<char> err, const fu::str& id, const fu::str& sep, const bool asArgument, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (!tryConvertIfNeeded_cAtQ5Jev(actual, expect, asArgument, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
    {
        fail_Szrpd5G6((((err + (id ? (" "_fu + qID_3PsDzMvu(id)) : fu::str{})) + ": "_fu) + explainTypeDiff_alC6xmK5(expect, actual.type, (sep ? fu::str(sep) : "<-"_fu), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    };
}

static s_SolvedNode solveLetLike_dontTouchScope_ZVKYZKmm(const fu::str& id, s_Flags flags, /*MOV*/ s_SolvedNode&& init, const bool asArgument, const s_Type& annot, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (annot || init.type)
    {
        s_Type BL_2_v {};
        /*MOV*/ s_Type t_init = (init ? (__extension__ (
        {
            const bool init_isNever = is_never_FfV8Zuj5(init.type);
            fu::never BL_3_v {};
            s_Type BL_7_v {};
            BL_2_v = (((init_isNever && !(asArgument || (flags & s_Flags_F_INLINE))) ? (__extension__ (
            {

                {
                    const s_SolverNotes note = s_SolverNotes_N_DeadLet;
                    if (note & options.break_notes)
                        fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss, _helpers, _here, ctx, module);
                    else
                        _notes |= note;

                };
                return static_cast<s_SolvedNode&&>(init);
            (void)0;}), static_cast<fu::never&&>(BL_3_v)) : (__extension__ (
            {
                if (annot && init.type && !init_isNever)
                    convertIfNeeded_zp67JUwj(init, annot, "Type annotation does not match init expression"_fu, id, "<-"_fu, asArgument, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                /*MOV*/ s_Type t_init_1 = clear_Typename_40rRB6L8(s_Type(init.type));
                if (asArgument || (flags & s_Flags_F_MUT))
                {
                    t_init_1.vfacts = s_VFacts{};
                };
                BL_7_v = ((hasTemporary_Sd1Oo4TV(t_init_1.lifetime) ? clear_refs_40rRB6L8(static_cast<s_Type&&>(t_init_1)) : static_cast<s_Type&&>(t_init_1)));
            (void)0;}), static_cast<s_Type&&>(BL_7_v))));
        (void)0;}), static_cast<s_Type&&>(BL_2_v)) : s_Type{});
        if (is_mutref_hoadAQC0(annot, _here, ctx))
            flags |= s_Flags_F_REF;

        s_Type t_let = ((annot && (asArgument || !t_init)) ? s_Type(annot) : ((is_mutref_hoadAQC0(t_init, _here, ctx) && ((flags & (s_Flags_F_REF | s_Flags_F_CONST)) != s_Flags_F_REF)) ? clear_mutref_40rRB6L8(static_cast<s_Type&&>(t_init)) : static_cast<s_Type&&>(t_init)));
        if (asArgument)
        {
            t_let.lifetime = Lifetime_temporary;
        };
        unsigned BL_13_v {};
        if (is_Typename_40rRB6L8(t_let))
            BUG_zwQElfxV("solveLetLike_dontTouchScope: Ended up with a Typename"_fu, ss, _helpers, _here, ctx, module);
        else if ((asArgument || (flags & s_Flags_F_MUT)) && s_VFacts((t_let.vfacts & s_VFacts((s_VFacts_AlwaysTrue | s_VFacts_AlwaysFalse)))) && (__extension__ (
        {
            const s_ValueType& type = t_let.vtype;
            BL_13_v = ((type.quals & q_USAGE));
        (void)0;}), BL_13_v))
            BUG_zwQElfxV("solveLetLike_dontTouchScope: Ended up with an AlwaysTrue/False"_fu, ss, _helpers, _here, ctx, module);

        return SolvedNode_wUIpeYIY(s_kind_let, t_let, flags, id, fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, static_cast<s_SolvedNode&&>(init) } }, s_Target{}, s_Helpers{}, _here);
    }
    else
        fail_Szrpd5G6((("Variable declarations without type annotations must be initialized: "_fu + qBAD_3PsDzMvu(id)) + "."_fu), ss, _helpers, _here, ctx, module);

}

inline static void l_30_71_T4y2cQAC(const s_Target& target, const fu::str& id, const bool shadows, s_SolverState& ss)
{
    Scope_set_pOqhE364(ss._scope.items, id, target, shadows);
}

                                #ifndef DEF_unpackAddrOfFn_2FPoriNXRt4
                                #define DEF_unpackAddrOfFn_2FPoriNXRt4
inline void unpackAddrOfFn_2FPoriNX(fu::view<char> canon, const fu::str& id, const bool shadows, s_SolverState& ss)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            const s_Target mi = parseLocalOrGlobal_qtvefzpE(canon, offset);
            l_30_71_T4y2cQAC(Target_2jgCJZJY(int(unsigned(((mi._packed >> 40ull) & 0xfffffull))), int(unsigned(((mi._packed >> 20ull) & 0xfffffull))), int(unsigned((mi._packed & 0xfffffull)))), id, shadows, ss);
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

static void Scope_set_Ke7bqUKr(const s_Target& target, const s_SolvedNode& out, const bool setScope, const bool shadows, const fu::str& id, s_SolverState& ss)
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

static s_SolvedNode solveLet_createBindingAndGetLetdef_otiCw78O(/*MOV*/ s_SolvedNode&& out, const fu::str& id, const bool setScope, const bool isArg, const s_Type& letdefType, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (out.kind != s_kind_let)
    {
        if (is_never_FfV8Zuj5(out.type))
            return static_cast<s_SolvedNode&&>(out);
        else
            BUG_zwQElfxV((((x7E_gCeFmDFw("solveLet: results in a `"_fu, str_n4lV73pj(out.kind)) + ": "_fu) + id) + "`."_fu), ss, _helpers, _here, ctx, module);

    }
    else
    {
        bool shadows = !!(out.flags & s_Flags_F_SHADOW);
        fu::str id_1 = ((out.flags & s_Flags_F_COMPOUND_ID) ? cleanID_j6ljQymd(id) : fu::str(id));
        if (isAddrOfFn_gBx1AgSx(out.type))
        {
            const bool shadows_1 = true;
            if (setScope)
                unpackAddrOfFn_2FPoriNX(out.type.vtype.canon, id_1, shadows_1, ss);

        }
        else
        {
            if (!isArg && !(out.flags & (s_Flags_F_PUB | s_Flags_F_VAL)))
            {
                const s_SolvedNode& init = out.items[LET_INIT];
                if ((init.kind == s_kind_call) && !init.items)
                {
                    const s_Target& target = init.target;
                    const s_Overload& other = GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module);
                    if ((other.kind == s_kind_var) && !(other.flags & s_Flags_F_INLINE))
                    {
                        if (isAssignable_v8EzC34Q(other.type, out.type, false, false, _here, ctx))
                        {
                            Scope_set_Ke7bqUKr(target, out, setScope, shadows, id_1, ss);
                            out = createEmpty_hkWuvX58(s_kind_empty, t_void, target, _here);
                            return static_cast<s_SolvedNode&&>(out);
                        };
                    };
                };
            };
            const s_Target& target = (out.target = Binding_ik4fVjuH(id_1, s_Type(out.type), out.flags, shadows, isArg, ss, _current_fn, _helpers, _here, ctx, module));
            if (!hasTemporary_Sd1Oo4TV(out.type.lifetime) || isArg)
            {
                if (is_Typename_40rRB6L8(out.type))
                    BUG_zwQElfxV("solveLet_createBindingAndGetLetdef: Ended up with a Typename"_fu, ss, _helpers, _here, ctx, module);

            }
            else
            {
                BUG_zwQElfxV("solveLet_createBindingAndGetLetdef: Non-argument lifetime.hasTemporary"_fu, ss, _helpers, _here, ctx, module);
            };
            solved_set_M1Pf6o9d(target, out, ss, module);
            Scope_set_Ke7bqUKr(target, out, setScope, shadows, id_1, ss);
            return createLetDef_cIEFeLEc(target, letdefType, _here);
        };
        if (isArg)
        {
            if (isAddrOfFn_gBx1AgSx(out.type))
                out.type = clear_refs_40rRB6L8(s_Type(out.type));

            return static_cast<s_SolvedNode&&>(out);
        }
        else
        {
            return createEmpty_hkWuvX58(s_kind_empty, t_void, s_Target{}, _here);
        };
    };
}

static s_SolvedNode createLet_zTk5nnZY(const fu::str& id, const s_Flags flags, const s_SolvedNode& init, const bool setScope, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ s_SolvedNode out = solveLetLike_dontTouchScope_ZVKYZKmm(id, flags, s_SolvedNode(init), false, (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return solveLet_createBindingAndGetLetdef_otiCw78O(static_cast<s_SolvedNode&&>(out), id, setScope, false, (*(const s_Type*)fu::NIL), ss, _current_fn, _helpers, _here, ctx, module);
}

inline static void l_30_85_9Ft6drRW(const int i, fu::view<s_SolvedNode> args, fu::vec<s_SolvedNode>& argdefs, s_Map_S6ornWd95j4& letdefReplicas, fu::view<s_Argument> host_args, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Argument& host_arg = host_args[i];
    if (!(!host_arg.target))
    {
        s_SolvedNode argdef = createLet_zTk5nnZY(host_arg.name, (((host_arg.flags & ~s_Flags_F_COMPOUND_ID) | (host_arg.flags & (s_Flags_F_INJECTED | s_Flags_F_REF))) | s_Flags_F_LAX), args[i], false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if ((argdef.kind == s_kind_empty) || (argdef.kind == s_kind_letdef))
        {
            if (!(argdef.target))
                BUG_zwQElfxV(x7E_gCeFmDFw("Inliner: no argdef.target: "_fu, str_x2vR7Kqe(argdef, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        }
        else
            BUG_zwQElfxV(x7E_gCeFmDFw("Inliner: argdef neither letdef nor empty: "_fu, str_x2vR7Kqe(argdef, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        if ((argdef.kind != s_kind_empty) && !(GET_oTYbwQb8(argdef.target, ss, _helpers, _here, ctx, module).flags & s_Flags_F_INLINE))
            argdefs += s_SolvedNode(argdef);

        const s_Target& foreign = host_arg.target;
        set_CNrCVyMg(letdefReplicas, foreign, (argdef.target ? argdef.target : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module)));
        const s_Overload& foreign_1 = GET_oTYbwQb8(foreign, ss, _helpers, _here, ctx, module);
        if (!(isAssignable_v8EzC34Q(foreign_1.type, GET_oTYbwQb8(argdef.target, ss, _helpers, _here, ctx, module).type, false, false, _here, ctx) || (is_never_FfV8Zuj5(GET_oTYbwQb8(argdef.target, ss, _helpers, _here, ctx, module).type) && (GET_oTYbwQb8(argdef.target, ss, _helpers, _here, ctx, module).flags & s_Flags_F_INLINE))))
            BUG_zwQElfxV((((((x7E_gCeFmDFw("Inliner botching the argdef type of "_fu, str_sdDZgf4z(foreign_1, ss, _helpers, _here, ctx, module)) + ":\n"_fu) + "\n\t\tExpect: "_fu) + humanizeType_kB3Te7GK(foreign_1.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + "\n\t\tActual: "_fu) + humanizeType_kB3Te7GK(GET_oTYbwQb8(argdef.target, ss, _helpers, _here, ctx, module).type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    };
}

                                #ifndef DEF_argsForward_hdr3rhDTZU5
                                #define DEF_argsForward_hdr3rhDTZU5
inline void argsForward_hdr3rhDT(const bool RTL, fu::view<s_Argument> host_args, const int seqIdx_start, fu::view<s_SolvedNode> args, fu::vec<s_SolvedNode>& argdefs, s_Map_S6ornWd95j4& letdefReplicas, fu::view<s_Argument> host_args_1, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
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
                    l_30_85_9Ft6drRW(i, args, argdefs, letdefReplicas, host_args_1, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                seqIdx++;
            };
        };
    };
}
                                #endif

static s_SolvedNode CallerNode_inline_DasLq7Dt(const s_Target& target, fu::view<s_SolvedNode> args, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if ((int(unsigned(((target._packed >> 40ull) & 0xfffffull))) != module.modid) || (EPH_On3tAJ9X(target, ss, module).revision > 0u))
    {
        if (!(ss.TODO_FIX_inline_safety++ < 24))
            BUG_zwQElfxV(x7E_gCeFmDFw("Inliner recursion, something is off: "_fu, str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    }
    else
        BUG_zwQElfxV((x7E_gCeFmDFw("Inlining "_fu, str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at revision 0."_fu), ss, _helpers, _here, ctx, module);

    fu_DEFER(ss.TODO_FIX_inline_safety--);
    fu::vec<s_SolvedNode> argdefs {};
    /*MOV*/ s_Map_S6ornWd95j4 letdefReplicas {};
    const int locals_start = GET_next_local_index_3KGaHIS6(ss, _current_fn, _helpers, _here, ctx, module);
    fu::vec<s_Argument> host_args { EXT_x9dYoBLb(target, ss, ctx, module).args };
    if (host_args.size() == args.size())
    {
        const bool RTL = isRTL_N4q4L7uF(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module));
        argsForward_hdr3rhDT(RTL, host_args, 0, args, argdefs, letdefReplicas, host_args, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        const s_SolvedNode& n_body = last_GN4mikiy(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).solved.items);
        /*MOV*/ s_SolvedNode s_body = inlineExpression_8n84Drwr(target, s_SolvedNode(n_body), static_cast<s_Map_S6ornWd95j4&&>(letdefReplicas), locals_start, target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (argdefs)
        {
            if (s_body.kind)
            {
                if (s_body.kind != s_kind_block)
                {
                    s_body = createBlock_4vpZBLng(s_body.type, (argdefs + s_body), s_Helpers{}, _here);
                }
                else
                    s_body.items.splice(0, 0, argdefs);

            }
            else
                BUG_zwQElfxV("inline: no s_body.kind"_fu, ss, _helpers, _here, ctx, module);

        };
        return /*NRVO*/ s_body;
    }
    else
        BUG_zwQElfxV("inline: arglen mismatch"_fu, ss, _helpers, _here, ctx, module);

}

static void visit_6apqLHZa(const s_Lifetime& lifetime, s_Lifetime& result, bool& maybeOutOfOrder, fu::view<s_SolvedNode> argNodes, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    // Hoisted:
    int offset0_1;

    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;

        {
            const unsigned r = parse7bit(chars, offset);
            int BL_4_v {};
            const int sr = (__extension__ (
            {
                offset0_1 = (offset + 0);
                for (; ; )
                {
                    bool isLastPath = false;
                    bool isFirstSubRegion = true;
                    for (; ; )
                    {
                        const unsigned raw_flatOffset = parse7bit(chars, offset);
                        const bool isLastSubRegion = !(raw_flatOffset & 1u);
                        const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                        isLastPath = !(raw_flatCount & 1u);
                        if (isLastSubRegion)
                            break;
                        else
                            isFirstSubRegion = false;

                    };
                    if (isLastPath)
                        break;

                };
                BL_4_v = (offset0_1);
            (void)0;}), BL_4_v);
            const bool isStatic = (r == 0u);
            const bool isTemp = (r == 1u);
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            const int argidx = int(((r & 1u) ? (r >> 2u) : 0u));
            fu::view<char> paths = fu::get_view(chars, sr, offset);
            if (!(isStatic))
            {
                if (isTemp || locid)
                {
                    BUG_zwQElfxV("Lifetime_replaceArgsAtCallsite: Found a temp or locid."_fu, ss, _helpers, _here, ctx, module);
                }
                else
                {
                    const s_SolvedNode& argNode = argNodes[argidx];
                    const s_Lifetime& argLt = (is_ref_gBx1AgSx(argNode.type) ? argNode.type.lifetime : Lifetime_temporary);
                    s_Lifetime replacement = Lifetime_op_join_dwN33Lug(argLt, paths, _here, ctx);
                    const s_TokenIdx& _here_1 = _here;
                    maybeOutOfOrder = true;
                    Lifetime_add_PUWFQPIX(result, replacement, false, _here_1, ctx);
                    continue;
                };
            };
        };
        if (maybeOutOfOrder)
        {
            result = Lifetime_union_YIGC7Sux(result, s_Lifetime { fu::slice(chars, offset0, offset) }, false, _here, ctx);
        }
        else
            result.uni0n += fu::get_view(chars, offset0, offset);

    };
}

                                #ifndef DEF_Lifetime_process_GvvzSztyokh
                                #define DEF_Lifetime_process_GvvzSztyokh
inline s_Lifetime Lifetime_process_GvvzSzty(const s_Lifetime& lifetime, fu::view<s_SolvedNode> argNodes, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ s_Lifetime result {};
    bool maybeOutOfOrder = false;
    visit_6apqLHZa(lifetime, result, maybeOutOfOrder, argNodes, ss, _helpers, _here, ctx, module);
    return /*NRVO*/ result;
}
                                #endif

static s_Lifetime Lifetime_replaceArgsAtCallsite_SZjCw1ds(const s_Target& target, fu::view<s_SolvedNode> argNodes, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return Lifetime_process_GvvzSzty(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).type.lifetime, argNodes, ss, _helpers, _here, ctx, module);
}

inline static void l_30_4_qVo07YyZ(const int locid, const bool isStatic, const bool isTemp, const bool isArgIdx, const int argidx, fu::view<char> paths, const s_Type& type, const bool tempsOK, const bool argPositionsOK, bool& first, bool& hasStatic, int& lastLocid, int& lastArgIdx, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
                    BUG_zwQElfxV("TEST_Lifetime: temporary is not first"_fu, ss, _helpers, _here, ctx, module);
                };
            }
            else
            {
                BUG_zwQElfxV("TEST_Lifetime: unexpected temporary"_fu, ss, _helpers, _here, ctx, module);
            };
        };
        first = false;
        if (locid)
        {
            if (!argPositionsOK)
            {
                if (lastArgIdx == 1000000)
                {
                    if (lastLocid > locid)
                        lastLocid = locid;
                    else
                    {
                        BUG_zwQElfxV("TEST_Lifetime: locid out of order"_fu, ss, _helpers, _here, ctx, module);
                    };
                }
                else
                {
                    BUG_zwQElfxV("TEST_Lifetime: local after argpos"_fu, ss, _helpers, _here, ctx, module);
                };
            }
            else
            {
                BUG_zwQElfxV("TEST_Lifetime: unexpected locid"_fu, ss, _helpers, _here, ctx, module);
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
                        BUG_zwQElfxV("TEST_Lifetime: argidx out of order"_fu, ss, _helpers, _here, ctx, module);
                    };
                }
                else
                {
                    BUG_zwQElfxV("TEST_Lifetime: argidx after local"_fu, ss, _helpers, _here, ctx, module);
                };
            }
            else
            {
                BUG_zwQElfxV("TEST_Lifetime: unexpected argidx"_fu, ss, _helpers, _here, ctx, module);
            };
        };
        if (isStatic || isTemp)
        {
            if (!(paths == "\x00\x00"_fu))
            {
                BUG_zwQElfxV("TEST_Lifetime: static/temp paths != x00x00"_fu, ss, _helpers, _here, ctx, module);
            };
        }
        else
            assertPathsValid_F77ZcVgF(paths, getFlatCount_QHDuaMIF(type.vtype, _here, ctx, module), (locid ? getFlatCount_QHDuaMIF(GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module).type.vtype, _here, ctx, module) : -1), false, 1, _here, ctx);

    }
    else
    {
        BUG_zwQElfxV("TEST_Lifetime: static is not last"_fu, ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_Lifetime_each_vs7Ut0VKLU0
                                #define DEF_Lifetime_each_vs7Ut0VKLU0
inline void Lifetime_each_vs7Ut0VK(const s_Lifetime& lifetime, const s_Type& type, const bool tempsOK, const bool argPositionsOK, bool& first, bool& hasStatic, int& lastLocid, int& lastArgIdx, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    // Hoisted:
    int offset0;

    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        int BL_3_v {};
        const int sr = (__extension__ (
        {
            offset0 = (offset + 0);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            BL_3_v = (offset0);
        (void)0;}), BL_3_v);
        l_30_4_qVo07YyZ(int(((r & 1u) ? 0u : (r >> 1u))), (r == 0u), (r == 1u), ((r & 3u) == 3u), int(((r & 1u) ? (r >> 2u) : 0u)), fu::get_view(chars, sr, offset), type, tempsOK, argPositionsOK, first, hasStatic, lastLocid, lastArgIdx, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static const s_Lifetime& TEST_Lifetime_Sl7Nbilp(const s_Lifetime& lifetime, const s_Type& type, const bool tempsOK, const bool argPositionsOK, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!lifetime)
    {
        BUG_zwQElfxV("TEST_Lifetime: empty lifetime"_fu, ss, _helpers, _here, ctx, module);
    }
    else
    {
        bool first = true;
        bool hasStatic = false;
        int lastLocid = 1000000;
        int lastArgIdx = 1000000;
        Lifetime_each_vs7Ut0VK(lifetime, type, tempsOK, argPositionsOK, first, hasStatic, lastLocid, lastArgIdx, ss, _helpers, _here, ctx, module);
    };
    return lifetime;
}

static s_SolvedNode CallerNode_X3mO7Hwg(const fu::str& debug, s_Target&& target, /*MOV*/ fu::vec<s_SolvedNode>&& args, const s_Reorder& reorder, fu::view<fu::vec<s_Target>> conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
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
        if (applyConversion_VfaInRao(args.mutref(argIdx), conversion, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
        {
            args.shrink((argIdx + 1));

            {
                const s_SolverNotes note = s_SolverNotes_N_DeadConv;
                const s_SolverState& ss_1 = ss;
                if (note & options.break_notes)
                    fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                else
                    _notes |= note;

            };
            return createBlock_4vpZBLng(t_never, static_cast<fu::vec<s_SolvedNode>&&>(args), s_Helpers{}, _here);
        };
    };
    const int REST_START = findRestStart_gcKePdlK(EXT_x9dYoBLb(target, ss, ctx, module));
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
                args.mutref(i) = createArrlit_Zm60u2Pt(fu::vec<s_SolvedNode>(rest), (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module, options);

        };
    };
    const s_kind kind = GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).kind;
    const bool isZeroInit = ((kind == s_kind_type) ? !args.size() : false);
    if (!isZeroInit)
    {
        fu::vec<s_Argument> host_args { EXT_x9dYoBLb(target, ss, ctx, module).args };
        const s_Target spec_of { EXT_x9dYoBLb(target, ss, ctx, module).spec_of };
        fu::vec<s_Argument> spec_of_args { (spec_of ? EXT_x9dYoBLb(spec_of, ss, ctx, module).args : (*(const fu::vec<s_Argument>*)fu::NIL)) };
        args.resize(host_args.size());
        for (int i = 0; i < args.size(); i++)
        {
            s_Argument host_arg { host_args[i] };
            if (!args[i])
            {
                s_Target defaultFrom { target };
                const s_SolvedNode& dEfault = (host_arg.dEfault ? host_arg.dEfault : ((defaultFrom = spec_of), ((spec_of_args.size() > i) ? spec_of_args[i].dEfault : (*(const s_SolvedNode*)fu::NIL))));
                if (dEfault)
                {
                    args.mutref(i) = inlineExpression_8n84Drwr(defaultFrom, s_SolvedNode(dEfault), s_Map_S6ornWd95j4{}, 0, s_Target{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                }
                else if (host_arg.flags & s_Flags_F_IMPLICIT)
                    args.mutref(i) = bindImplicitArg_jx2FuD8J(host_arg.name, host_arg.type, target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                else
                    BUG_zwQElfxV(x7E_gCeFmDFw("tryMatch: about to implicit-bind a non-implicit argument: "_fu, str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

            };
            if (is_never_FfV8Zuj5(args[i].type) && !(host_arg.flags & s_Flags_F_INLINE))
            {
                args.shrink((i + 1));
                return deadCall_xlcWussB(args, ss, _notes, _helpers, _here, ctx, module, options);
            };
        };
    };
    s_Type type { GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).type };
    if (kind == s_kind_field)
    {
        s_SolvedNode* _0;
        s_SolvedNode& arg = (*(_0 = &(only_Iovd0TM6(args))) ? *_0 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
        type = make_field_reference_IA27CM2I(arg.type, GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), false, ss, _helpers, _here, ctx, module);
        if (is_zeroes_FfV8Zuj5(arg.type))
        {
            definitWrap_TdvXfwzc(arg, type, ss, _helpers, _here, ctx, module);
            return s_SolvedNode(arg);
        };
    }
    else if (kind == s_kind_var)
    {
        TEST_varLifetime_sPLjW7ch(type.lifetime, true, 0, ss, _helpers, _here, ctx, module);
        int BL_27_v {};
        int BL_28_v {};
        if ((__extension__ (
        {
            const s_Target& t = target;
            BL_27_v = (int(unsigned((t._packed & 0xfffffull))));
        (void)0;}), BL_27_v) || (((__extension__ (
        {
            const s_Target& t = target;
            BL_28_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
        (void)0;}), BL_28_v) == module.modid) && !(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).flags & s_Flags_F_PUB)))
            GET_mut_j8q0a60a(target, ss, module).status |= s_SolverStatus_SS_MATCHED;

        int BL_30_v {};
        if (isLocal_nMI8cChU(target) && (localOf_cCGDItnh(target, ss, module) != (__extension__ (
        {
            const s_Target& t = _current_fn.out.target;
            BL_30_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_30_v)))
        {
            target = injectForeignLocal_HRhrP275(target, ss, _current_fn, _helpers, _here, ctx, module);
            const s_Type* _1;
            type = (*(_1 = &(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).type)) ? *_1 : BUG_zwQElfxV(("CallerNode: !type on var "_fu + GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).name), ss, _helpers, _here, ctx, module));
        };
    }
    else
    {
        int BL_33_v {};
        if ((__extension__ (
        {
            const s_Target& t = target;
            BL_33_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
        (void)0;}), BL_33_v) == module.modid)
        {
            if ((kind == s_kind_fn) || (kind == s_kind_type) || (kind == s_kind_inline))
            {
                if (ss._solvingFnort)
                {
                    int BL_37_v {};
                    int _2 {};
                    if ((_2 = (__extension__ (
                    {
                        const s_Target& t = ss._solvingFnort;
                        BL_37_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                    (void)0;}), BL_37_v), add_jzOp5jol(EPH_mut_pSZyFPKm(target, ss, module).callers, _2)))
                    {
                        int BL_39_v {};
                        add_jzOp5jol(EPH_mut_pSZyFPKm(ss._solvingFnort, ss, module).calls, (__extension__ (
                        {
                            const s_Target& t = target;
                            BL_39_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                        (void)0;}), BL_39_v));
                    };
                    detectRecursion_c6tz23ns(target, ss, _notes, _helpers, _here, ctx, module, options);
                };
            };
        };
        if (args)
        {
            if (kind == s_kind_type)
                type = clear_Typename_40rRB6L8(s_Type(type));

            fu::view<s_Argument> _3 {};
            fu::view<s_Argument> host_args = ((_3 = EXT_x9dYoBLb(target, ss, ctx, module).args) ? static_cast<fu::view<s_Argument>&&>(_3) : BUG_zwQElfxV(x7E_gCeFmDFw("CallerNode: no host args: "_fu, str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module));
            if (host_args.size() == args.size())
            {
                for (int i0 = 0; i0 < args.size(); i0++)
                {
                    const s_Argument& host_arg = host_args[i0];
                    s_SolvedNode& arg = args.mutref(i0);
                    if (arg.kind == s_kind_argid)
                        arg = only_GN4mikiy(arg.items);

                    const s_Type& expect = host_arg.type;
                    s_Type retype = tryRetyping_1axCq2Iv(arg, expect, ss, _helpers, _here, ctx, module, options);
                    if (retype && isAssignableAsArgument_E3uCShzQ(expect, retype, false, _here, ctx))
                        applyRetype_LjVkTUf1(arg, retype, ss, _helpers, _here, ctx, module);

                };
            }
            else
                BUG_zwQElfxV(x7E_gCeFmDFw("CallerNode: host_arg.len mismatch: "_fu, str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        };
        if ((kind == s_kind_inline) && s_SolverStatus((GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_FINALIZED)))
            return CallerNode_inline_DasLq7Dt(target, args, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        else if (args && is_ref_gBx1AgSx(type))
        {
            type.lifetime = static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>(TEST_Lifetime_Sl7Nbilp(Lifetime_replaceArgsAtCallsite_SZjCw1ds(target, args, ss, _helpers, _here, ctx, module), type, true, false, ss, _helpers, _here, ctx, module)));
        };
    };
    return SolvedNode_wUIpeYIY(s_kind_call, type, s_Flags{}, debug, args, target, s_Helpers{}, _here);
}

static bool applyConversion_VfaInRao(s_SolvedNode& arg, fu::view<s_Target> conversion, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    for (int i = 0; i < conversion.size(); i++)
    {
        const s_Target& t = conversion[i];
        if (EXT_x9dYoBLb(t, ss, ctx, module).min || (EXT_x9dYoBLb(t, ss, ctx, module).max && arg))
        {
            arg = CallerNode_X3mO7Hwg("__using.a"_fu, s_Target(t), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(arg) } }, (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        }
        else if (i)
            BUG_zwQElfxV(x7E_gCeFmDFw("Bad conversion chain, non-leading nullary: "_fu, str_sdDZgf4z(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
        else if (arg)
            BUG_zwQElfxV("Bad conversion chain, about to throw away an argnode."_fu, ss, _helpers, _here, ctx, module);
        else
        {
            arg = CallerNode_X3mO7Hwg("__using.b"_fu, s_Target(t), fu::vec<s_SolvedNode>{}, (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        };
        if (is_never_FfV8Zuj5(arg.type))
            return true;

    };
    return false;
}

static s_Type convertToSuperType_BJqJod35(fu::view<char> topic, s_SolvedNode& a, s_SolvedNode& b, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{

    {
        /*MOV*/ s_Type super = type_trySuper_2nNLpyR4(a.type, b.type, false, _here, ctx);
        if (super)
            return /*NRVO*/ super;

    };
    s_Type b_T = clear_vfacts_40rRB6L8(s_Type(b.type));
    s_Type a_T = clear_vfacts_40rRB6L8(s_Type(a.type));

    {
        s_Type aRetype = tryRetyping_1axCq2Iv(a, b_T, ss, _helpers, _here, ctx, module, options);
        s_Type bRetype = tryRetyping_1axCq2Iv(b, a_T, ss, _helpers, _here, ctx, module, options);
        if (aRetype)
        {
            if (bRetype)
                fail_Szrpd5G6(((((topic + ": Type ambiguity, literals can be retyped both ways: "_fu) + humanizeType_kB3Te7GK(a.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " <-> "_fu) + humanizeType_kB3Te7GK(b.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
            else
            {
                /*MOV*/ s_Type super = type_trySuper_2nNLpyR4(aRetype, b.type, false, _here, ctx);
                if (super)
                {
                    applyRetype_LjVkTUf1(a, aRetype, ss, _helpers, _here, ctx, module);
                    return /*NRVO*/ super;
                };
            };
        };
        if (bRetype)
        {
            /*MOV*/ s_Type super = type_trySuper_2nNLpyR4(bRetype, a.type, false, _here, ctx);
            if (super)
            {
                applyRetype_LjVkTUf1(b, bRetype, ss, _helpers, _here, ctx, module);
                return /*NRVO*/ super;
            };
        };
    };

    {
        fu::vec<s_Target> aConv = tryConvert_R8JgtFQr(b_T, true, a.type, (*(const s_SolvedNode*)fu::NIL), (*(const s_Scope*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        fu::vec<s_Target> bConv = tryConvert_R8JgtFQr(a_T, true, b.type, (*(const s_SolvedNode*)fu::NIL), (*(const s_Scope*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (aConv)
        {
            if (bConv)
            {
                fu::str error = (topic + ": Type ambiguity, conversions exist both ways:\n"_fu);
                explain_E4U6Fagm(a.type, b.type, aConv, error, ss, _current_fn, _helpers, _here, ctx, module);
                explain_E4U6Fagm(b.type, a.type, bConv, error, ss, _current_fn, _helpers, _here, ctx, module);
                fail_Szrpd5G6(error, ss, _helpers, _here, ctx, module);
            }
            else
            {
                applyConversion_VfaInRao(a, aConv, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                s_Type _0 {};
                return (_0 = type_trySuper_2nNLpyR4(a.type, b.type, false, _here, ctx)) ? static_cast<s_Type&&>(_0) : BUG_zwQElfxV("convertToSuper: aConv super"_fu, ss, _helpers, _here, ctx, module);
            };
        }
        else if (bConv)
        {
            applyConversion_VfaInRao(b, bConv, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            s_Type _1 {};
            return (_1 = type_trySuper_2nNLpyR4(a.type, b.type, false, _here, ctx)) ? static_cast<s_Type&&>(_1) : BUG_zwQElfxV("convertToSuper: bConv super"_fu, ss, _helpers, _here, ctx, module);
        };
    };
    fail_Szrpd5G6(((((topic + ": No common supertype: "_fu) + humanizeType_kB3Te7GK(a.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " <-> "_fu) + humanizeType_kB3Te7GK(b.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
}

static s_SolvedNode createIf_uoAeG0uH(const s_SolvedNode& cond, /*MOV*/ s_SolvedNode&& cons, /*MOV*/ s_SolvedNode&& alt, /*MOV*/ s_Type&& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (is_never_FfV8Zuj5(cond.type))
        BUG_zwQElfxV("createIf: cond.is_never"_fu, ss, _helpers, _here, ctx, module);
    else if (const s_StaticEval ae_cond = tryAbstractEvalAsBool_JCuol0P9(cond, false, ss, _current_fn, _helpers, _here, ctx, module))
        return createBlock_O5z3dG59(s_SolvedNode(cond), static_cast<s_SolvedNode&&>(((ae_cond == s_StaticEval_SE_True) ? cons : ((ae_cond == s_StaticEval_SE_False) ? alt : BUG_zwQElfxV("createIf: ae_cond, neither True nor False."_fu, ss, _helpers, _here, ctx, module)))), _here);
    else
    {
        const bool cons_isNever = is_never_FfV8Zuj5(cons.type);
        const bool alt_isNever = is_never_FfV8Zuj5(alt.type);
        if (cons_isNever && alt_isNever)
            type = t_never;
        else if (!is_void_FfV8Zuj5(type))
        {
            type = (cons_isNever ? s_Type(alt.type) : (alt_isNever ? s_Type(cons.type) : convertToSuperType_BJqJod35("if/else"_fu, cons, alt, ss, _notes, _current_fn, _helpers, _here, ctx, module, options)));
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
                            return createBlock_4vpZBLng(type, fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(cond) } }, s_Helpers{}, _here);
                        }
                        else
                        {
                            return createOr_Vakj1ep0(fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(cond), static_cast<s_SolvedNode&&>(alt) } }, static_cast<s_Type&&>(type), ss, _current_fn, _helpers, _here, ctx, module);
                        };
                    }
                    else if (alt.kind == s_kind_empty)
                    {
                        return createAnd_M01WDdrB(fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(cond), static_cast<s_SolvedNode&&>(cons) } }, static_cast<s_Type&&>(type), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    };
                }
                else
                    BUG_zwQElfxV("!alt"_fu, ss, _helpers, _here, ctx, module);

            }
            else
                BUG_zwQElfxV("!cons"_fu, ss, _helpers, _here, ctx, module);

        }
        else
            BUG_zwQElfxV("!cond || cond.empty"_fu, ss, _helpers, _here, ctx, module);

        return SolvedNode_wUIpeYIY(s_kind_if, (type ? type : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module)), s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(cond), static_cast<s_SolvedNode&&>(cons), static_cast<s_SolvedNode&&>(alt) } }, s_Target{}, s_Helpers{}, _here);
    };
}

static s_SolvedNode createAnd_M01WDdrB(fu::vec<s_SolvedNode>&& items, s_Type&& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const int trim = createAndOr_staticEvalFold_QnCU4kXP(items, s_StaticEval_SE_True, ss, _current_fn, _helpers, _here, ctx, module);
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
            return (_0 = createAnd_M01WDdrB(static_cast<fu::vec<s_SolvedNode>&&>(cond), s_Type(t_bool), ss, _notes, _current_fn, _helpers, _here, ctx, module, options), createIf_uoAeG0uH(static_cast<s_SolvedNode&&>(_0), s_SolvedNode(cons), solveDefinit_0j7JC2L1(type, ss, _helpers, _here, ctx, module), s_Type{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
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
    const s_SolvedNode& last_type = last_GN4mikiy(items);
    if (is_never_FfV8Zuj5(last_type.type) || s_VFacts((last_type.type.vfacts & s_VFacts_AlwaysFalse)))
        type.vfacts = s_VFacts_AlwaysFalse;

    return SolvedNode_wUIpeYIY(s_kind_and, type, s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
}

                                #ifndef DEF_TRY_CATCH
                                #define DEF_TRY_CATCH
inline constexpr int TRY_CATCH = 2;
                                #endif

static s_SolvedNode& recover_NYvFEHIv(s_SolvedNode& node)
{
    return node.items.mutref(TRY_CATCH);
}

static s_SolvedNode& error_EKx4MtAM(s_SolvedNode& node)
{
    return node.items.mutref(TRY_ERR);
}

                                #ifndef DEF_TRY_TRY
                                #define DEF_TRY_TRY
inline constexpr int TRY_TRY = 0;
                                #endif

static s_SolvedNode& attempt_Bx7H3IEg(s_SolvedNode& node)
{
    return node.items.mutref(TRY_TRY);
}

static void Breakable_begin_PaHhDB4R(const bool loop_PREVITER, const s_SolvedNode& node, const unsigned relax_mask, s_SolverState& ss, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (node.helpers)
    {
        s_HelpersData* BL_2_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_2_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_2_v).postdom = s_Postdom(_current_fn.postdom);
    };
    if (loop_PREVITER && (relax_mask == RELAX_all))
    {
        const s_HelpersData* BL_4_v;
        branch_RQi5rqrx(_current_fn.postdom, (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_4_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_4_v).loop_PREVITER, _here, ctx);
    };
}

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 5;
                                #endif

static s_SolvedNode& post_cond_inMSLLJG(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST_COND);
}

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static s_SolvedNode& post_06V2t61b(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST);
}

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 3;
                                #endif

static s_SolvedNode& body_gK6pXLfO(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_BODY);
}

                                #ifndef DEF_LOOP_PRE
                                #define DEF_LOOP_PRE
inline constexpr int LOOP_PRE = 2;
                                #endif

static s_SolvedNode& pre_m7dYByKA(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_PRE);
}

                                #ifndef DEF_LOOP_PRE_COND
                                #define DEF_LOOP_PRE_COND
inline constexpr int LOOP_PRE_COND = 1;
                                #endif

static s_SolvedNode& pre_cond_AcdBKcSa(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_PRE_COND);
}

static void Breakable_end_jGm0IL8A(const bool loop_PREVITER, const s_SolvedNode& node, const unsigned relax_mask, s_SolverState& ss, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (loop_PREVITER && !(relax_mask == RELAX_all))
    {
        s_HelpersData* BL_2_v;
        s_Postdom& previter = (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_2_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_2_v).loop_PREVITER;
        previter = _current_fn.postdom;
        const s_HelpersData* BL_3_v;
        const int loop_start = (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_3_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_3_v).locals_start;
        clear_quDuppI6(previter.snap.used_again, loop_start);
        clear_quDuppI6(previter.snap.ever_written, loop_start);
    };
    if (node.helpers)
    {
        const s_HelpersData* BL_5_v;
        branch_RQi5rqrx(_current_fn.postdom, (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_5_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
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

static void trackVarUsage_T1lDq7R0(const int locid, const s_Type& slot, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_rx_copy_GSunVkiW(slot) && isIrrelevant_40rRB6L8(slot) && !is_zst_QHDuaMIF(slot.vtype, _here, ctx, module))
        BUG_zwQElfxV(((x7E_gCeFmDFw("trackVarUsage "_fu, str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ": Usage is copy but no usage bits set: "_fu) + humanizeType_kB3Te7GK(slot, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    else if (hasTemporary_Sd1Oo4TV(slot.lifetime))
        BUG_zwQElfxV((x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ", trackVarUsage: slot is ref2temp: "_fu) + humanizeType_kB3Te7GK(slot, true, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    s_Type& usage = grow_if_oob_8tYvLc8b(_current_fn.relaxed.var_usage, locid);
    if (!usage)
        usage = slot;
    else
    {
        s_Type _0 {};
        usage = ((_0 = type_tryIntersect_33NmLJZR(usage, slot, _here, ctx)) ? static_cast<s_Type&&>(_0) : BUG_zwQElfxV((x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ": Usage intersection failure: "_fu) + explainTypeDiff_alC6xmK5(usage, slot, "&"_fu, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module));
    };
}

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

static s_SolvedNode& init_DW2D9OU9(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_INIT);
}

static bool trackUse_e2Y0z1WC(const s_Target& t, s_BitSet& bitset, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int locid = int(unsigned((t._packed & 0xfffffull)));
    if (!add_once_U5p6nLOf(bitset, locid))
        return false;
    else
    {
        const s_Overload& o = GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module);
        const s_SolvedNode& letNode = o.solved;
        if (is_ref_gBx1AgSx(letNode.type))
        {
            if (isArg_GtNDTeV7(o))
                return isMutVal_x3AUdppB(o);
            else if (!trackUse_okCzYN3G(Lifetime_climbType_426itOgG(o, ss, _helpers, _here, ctx, module).lifetime, bitset, ss, _current_fn, _helpers, _here, ctx, module))
                return false;

        }
        else if (isArg_GtNDTeV7(o))
            BUG_zwQElfxV("trackUse: o.isArg but !o.solved.is_ref"_fu, ss, _helpers, _here, ctx, module);

        return (locid >= _current_fn.postdom.parent_loop_start);
    };
}

inline static void l_30_34_K1pZrVk5(const int locid, const bool isTemp, s_BitSet& bitset, bool& allTrue, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(isTemp))
    {
        if (!(locid && trackUse_e2Y0z1WC(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), bitset, ss, _current_fn, _helpers, _here, ctx, module)))
            allTrue = false;

    };
}

                                #ifndef DEF_Lifetime_each_IHoHl1npbli
                                #define DEF_Lifetime_each_IHoHl1npbli
inline void Lifetime_each_IHoHl1np(const s_Lifetime& lifetime, s_BitSet& bitset, bool& allTrue, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_34_K1pZrVk5(int(((r & 1u) ? 0u : (r >> 1u))), (r == 1u), bitset, allTrue, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static bool trackUse_okCzYN3G(const s_Lifetime& lt, s_BitSet& bitset, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    bool allTrue = true;
    Lifetime_each_IHoHl1np(lt, bitset, allTrue, ss, _current_fn, _helpers, _here, ctx, module);
    return allTrue;
}

static bool tryTrackLastUse_TG1knlTJ(const s_Lifetime& lt, const unsigned relax_mask, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (relax_mask == RELAX_all)
        return trackUse_okCzYN3G(lt, _current_fn.postdom.snap.used_again, ss, _current_fn, _helpers, _here, ctx, module);
    else
        return false;

}

static s_Target tryReverseSpecialize_rU7u0zIq(s_Target&& original, unsigned relaxed_quals, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    {
        s_Target up {};
        while ((up = EPH_On3tAJ9X(original, ss, module).rev_spec.instance.original))
        {
            unsigned _0 {};
            relaxed_quals |= ((_0 = EPH_On3tAJ9X(original, ss, module).rev_spec.instance.relaxed_quals) ? _0 : BUG_zwQElfxV((x7E_gCeFmDFw("tryReverseSpecialize: .original set on "_fu, str_sdDZgf4z(GET_oTYbwQb8(original, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " but !relaxed_quals"_fu), ss, _helpers, _here, ctx, module));
            original = up;
        };
    };
    if (!s_SolverStatus((GET_oTYbwQb8(original, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_FINALIZED)))
    {
        return s_Target{};
    }
    else
    {
        fu::view<s_RevSpecOutput> outputs = EPH_On3tAJ9X(original, ss, module).rev_spec.outputs;
        for (int i = 0; i < outputs.size(); i++)
        {
            if (outputs[i].relaxed_quals == relaxed_quals)
                return outputs[i].instance_targ;

        };
        const s_Target target = Scope_create_j83Ac6jp(ss._scope, s_kind_fn, (*(const fu::str*)fu::NIL), (*(const s_Type*)fu::NIL), s_Flags{}, s_SolverStatus{}, 0, module);
        GET_mut_j8q0a60a(target, ss, module) = s_Overload(GET_oTYbwQb8(original, ss, _helpers, _here, ctx, module));
        EXT_mut_yu2tvQxN(target, ss, module) = s_Extended(EXT_x9dYoBLb(original, ss, ctx, module));
        EPH_mut_pSZyFPKm(target, ss, module).rev_spec = s_ReverseSpecialization { s_RevSpecPrototype{}, s_RevSpecInstance { s_Target(original), relaxed_quals }, fu::vec<s_RevSpecOutput>{} };
        EPH_mut_pSZyFPKm(original, ss, module).rev_spec.outputs += s_RevSpecOutput { relaxed_quals, s_Target(target) };
        GET_mut_j8q0a60a(target, ss, module).status &= s_SolverStatus((s_SolverStatus_SS_LAZY | s_SolverStatus_SS_FN_RECUR));
        EPH_mut_pSZyFPKm(target, ss, module).local_of = EPH_On3tAJ9X(original, ss, module).local_of;
        int BL_9_v {};
        add_jzOp5jol(EPH_mut_pSZyFPKm(target, ss, module).calls, (__extension__ (
        {
            const s_Target& t = original;
            BL_9_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_9_v));
        add_jzOp5jol(EPH_mut_pSZyFPKm(original, ss, module).callers, int(unsigned(((target._packed >> 20ull) & 0xfffffull))));
        return target;
    };
}

inline static fu::str l_30_36_tXhq5gwb(const s_Argument& l_30_36, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return str_YPnuP2Bh(l_30_36, false, ss, _current_fn, _helpers, _here, ctx, module);
}

                                #ifndef DEF_map_RJdayscCzlc
                                #define DEF_map_RJdayscCzlc
inline fu::vec<fu::str> map_RJdayscC(fu::view<s_Argument> a, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = l_30_36_tXhq5gwb(a[i], ss, _current_fn, _helpers, _here, ctx, module);

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

inline static fu::str l_30_37_b9c5Sdco(const s_Argument& l_30_37, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return str_YPnuP2Bh(l_30_37, false, ss, _current_fn, _helpers, _here, ctx, module);
}

                                #ifndef DEF_map_RKPAyUMaJHk
                                #define DEF_map_RKPAyUMaJHk
inline fu::vec<fu::str> map_RKPAyUMa(fu::view<s_Argument> a, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = l_30_37_b9c5Sdco(a[i], ss, _current_fn, _helpers, _here, ctx, module);

    return /*NRVO*/ res;
}
                                #endif

static void redirectCallTarget_ktLc5HvG(const s_Target& spec, s_SolvedNode& node, const s_Target& t, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (!(spec == node.target))
    {
        ensureLazySolved_jf9BVo46(spec, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (EXT_x9dYoBLb(spec, ss, ctx, module).args.size() == EXT_x9dYoBLb(t, ss, ctx, module).args.size())
        {
            checkAssignable_wNHoCVE4(node.type, GET_oTYbwQb8(spec, ss, _helpers, _here, ctx, module).type, "Relaxed specialization does not return a subtype"_fu, s_Target{}, false, ss, _helpers, _here, ctx, module);
            if (is_ref_gBx1AgSx(node.type))
            {
                node.type.lifetime = static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>(TEST_Lifetime_Sl7Nbilp(Lifetime_replaceArgsAtCallsite_SZjCw1ds(spec, node.items, ss, _helpers, _here, ctx, module), node.type, true, false, ss, _helpers, _here, ctx, module)));
            };
            node.target = spec;
            const s_SolverNotes note = s_SolverNotes_N_RelaxRespec;
            const s_SolverState& ss_1 = ss;
            if (note & options.break_notes)
                fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
            else
                _notes |= note;

        }
        else
            BUG_zwQElfxV((((((x7E_gCeFmDFw((x7E_gCeFmDFw("Relaxed spec.args.len("_fu, fu::i64dec(EXT_x9dYoBLb(spec, ss, ctx, module).args.size())) + ") != original.args.len("_fu), fu::i64dec(EXT_x9dYoBLb(t, ss, ctx, module).args.size())) + "):"_fu) + "\n\n\t\t"_fu) + join_jCe9HYtv(map_RJdayscC(EXT_x9dYoBLb(spec, ss, ctx, module).args, ss, _current_fn, _helpers, _here, ctx, module), ", "_fu)) + "\n\n\t\t"_fu) + join_jCe9HYtv(map_RKPAyUMa(EXT_x9dYoBLb(t, ss, ctx, module).args, ss, _current_fn, _helpers, _here, ctx, module), ", "_fu)), ss, _helpers, _here, ctx, module);

    };
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

static fu::str mangleArgTypes_bIsM6mTT(fu::view<s_SolvedNode> args, const s_Reorder& reorder, fu::view<fu::vec<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
            mangle += serializeType_Eouw2usb(GET_oTYbwQb8(last_ohJwrXiS(conversions[i]), ss, _helpers, _here, ctx, module).type.vtype, "mangle.conv"_fu);
        else if ((callsiteIndex >= 0) && (callsiteIndex <= args.size()))
            mangle += serializeType_Eouw2usb(args[callsiteIndex].type.vtype, "mangle.no-conv"_fu);

    };
    if (REST_START < REST_END)
    {
        if (REST_START)
            mangle += ',';

        mangle += serializeType_Eouw2usb(REST_TYPE.vtype, "mangle[Nodes].rest"_fu);
    };
    return /*NRVO*/ mangle;
}

inline static void l_30_45_VYMvBCTR(const s_Target& target, int& parent_idx, const s_SolverState& ss, const s_Module& module)
{
    if (int(unsigned((target._packed & 0xfffffull))) || (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid))
    {
        const int local_of = localOf_cCGDItnh(target, ss, module);
        if (parent_idx < local_of)
            parent_idx = local_of;

    };
}

                                #ifndef DEF_unpackAddrOfFn_hKyMPG7f00k
                                #define DEF_unpackAddrOfFn_hKyMPG7f00k
inline void unpackAddrOfFn_hKyMPG7f(fu::view<char> canon, int& parent_idx, const s_SolverState& ss, const s_Module& module)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            const s_Target mi = parseLocalOrGlobal_qtvefzpE(canon, offset);
            l_30_45_VYMvBCTR(Target_2jgCJZJY(int(unsigned(((mi._packed >> 40ull) & 0xfffffull))), int(unsigned(((mi._packed >> 20ull) & 0xfffffull))), int(unsigned((mi._packed & 0xfffffull)))), parent_idx, ss, module);
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

static s_Map_NKYdFuVcECe& getSpecs_UdSfstkC(const int parent_idx, s_SolverState& ss)
{
    return EPH_mut_xZZ73lBG(parent_idx, ss).specs;
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

                                #ifndef DEF_steal_AYMWowQgqJe
                                #define DEF_steal_AYMWowQgqJe
inline s_Map_KlcLuPSIt9g steal_AYMWowQg(s_Map_KlcLuPSIt9g& v)
{
    /*MOV*/ s_Map_KlcLuPSIt9g ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

static s_Type conversionTailType_kzsICjzv(const s_Type& from, fu::view<s_Target> conversions, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = conversions.size(); i-- > 0; )
    {
        const s_Target& lastConv = conversions[i];
        if (GET_oTYbwQb8(lastConv, ss, _helpers, _here, ctx, module).kind == s_kind_field)
            return make_field_reference_IA27CM2I(conversionTailType_kzsICjzv(from, fu::get_view_start0(conversions, i), ss, _helpers, _here, ctx, module), GET_oTYbwQb8(lastConv, ss, _helpers, _here, ctx, module), true, ss, _helpers, _here, ctx, module);
        else
            return s_Type(GET_oTYbwQb8(lastConv, ss, _helpers, _here, ctx, module).type);

    };
    return s_Type(from);
}

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

                                #ifndef DEF_all_uqqFUlMcL7h
                                #define DEF_all_uqqFUlMcL7h
inline bool all_uqqFUlMc(fu::view<s_SolvedNode> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_SolvedNode& item = a[i];
        if (!couldRetype_3jHLVkop(item))
            return false;

    };
    return true;
}
                                #endif

static bool couldRetype_3jHLVkop(const s_SolvedNode& node)
{
    return (node.kind == s_kind_int) || (node.kind == s_kind_real) || (node.kind == s_kind_definit) || is_zeroes_FfV8Zuj5(node.type) || (node.kind == s_kind_str) || ((node.kind == s_kind_if) && all_uqqFUlMc(fu::get_view(node.items, 1, 3))) || ((node.kind == s_kind_block) && !node.helpers && couldRetype_3jHLVkop(last_GN4mikiy(node.items)));
}

static fu::vec<fu::str>& l_6_2_qfahIMra(s_Map_KlcLuPSIt9g& _)
{
    return _.keys;
}

static fu::vec<s_TypeParam>& l_6_3_cZ8mptLW(s_Map_KlcLuPSIt9g& _)
{
    return _.vals;
}

inline static int bfind_RZhjOFHM(fu::view<char> item, const fu::str& item_1, s_Map_KlcLuPSIt9g& _)
{
    int lo = 0;
    int hi = l_6_2_qfahIMra(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(l_6_2_qfahIMra(_)[i], item);
        if (cmp == 0)
            return i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_2_qfahIMra(_).insert(lo, fu::str(item_1));
    l_6_3_cZ8mptLW(_).insert(lo, s_TypeParam{});
    return lo;
}

                                #ifndef DEF_ref_Pna1VJqZbX2
                                #define DEF_ref_Pna1VJqZbX2
inline s_TypeParam& ref_Pna1VJqZ(const fu::str& item, s_Map_KlcLuPSIt9g& _)
{
    const int idx = bfind_RZhjOFHM(item, item, _);
    return l_6_3_cZ8mptLW(_).mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_Yr2SlHAwl9d
                                #define DEF_ref_Yr2SlHAwl9d
inline s_TypeParam& ref_Yr2SlHAw(s_Map_KlcLuPSIt9g& _, const fu::str& key)
{
    return ref_Pna1VJqZ(key, _);
}
                                #endif

                                #ifndef DEF_x21x3D_gCeFmDFw0L8
                                #define DEF_x21x3D_gCeFmDFw0L8
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

static bool isMutRef_QOE2f9pQ(const s_Flags flags)
{
    return !(~flags & (s_Flags_F_MUT | s_Flags_F_REF));
}

                                #ifndef DEF_DONT_match_zeroes
                                #define DEF_DONT_match_zeroes
inline constexpr bool DONT_match_zeroes = true;
                                #endif

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

static void visitScope_P6j476Wc(const bool local_scope, fu::view<s_ScopeItem> items, fu::view<char> id, const bool shadow, fu::vec<s_Target>& result, fu::vec<s_Target>& unique, s_SolverState& ss)
{
    int scope_iterator {};
    s_Target target {};
    bool shadows {};
    while (!shadow && (target = (local_scope ? search_ihIw5OEs(ss._scope.items, id, scope_iterator, ss._ss.items, shadows, fu::view<s_Target>{}, fu::view<s_ScopeItem>{}) : search_yfyUVvrQ(items, id, scope_iterator))))
    {
        if (add_eY6ht47h(unique, target))
            result += s_Target(target);

    };
}

                                #ifndef DEF_reverse_28eMcEjH0il
                                #define DEF_reverse_28eMcEjH0il
inline void reverse_28eMcEjH(fu::view_mut<s_Target> a)
{
    const int n1 = (a.size() - 1);
    const int n2 = (a.size() >> 1);
    for (int i = 0; i < n2; i++)
        fu::view_swap(a, i, (n1 - i));

}
                                #endif

static fu::str isNotDefinedHere_K630eNdN(const fu::str& id)
{
    return qID_3PsDzMvu(id) + " is not defined here."_fu;
}

[[noreturn]] static fu::never fail_ZlZZ6QYq(const fu::str& reason, const s_TokenIdx& token, const s_SolverState& ss, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    _here = token;
    fail_Szrpd5G6(reason, ss, _helpers, _here, ctx, module);
}

static fu::vec<s_Target> solveAddrOfFn_R1ppOMxl(fu::str&& id, const s_TokenIdx& token, const s_Flags flags, fu::view<int> imports, s_SolverState& ss, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const bool shadow = false;
    /*MOV*/ fu::vec<s_Target> result {};
    fu::vec<s_Target> unique {};
    const s_Flags qualified = (flags & s_Flags_F_COMPOUND_ID);
    if (qualified || !imports)
    {
        fu::view<s_ScopeItem> _0 {};
        (_0 = (qualified ? dequalify_andGetScope_6ckfQCHl(id, ss, _helpers, _here, ctx, module).items : fu::view<s_ScopeItem>{}), visitScope_P6j476Wc(!qualified, static_cast<fu::view<s_ScopeItem>&&>(_0), id, shadow, result, unique, ss));
    }
    else
    {
        for (int i = 0; i < imports.size(); i++)
        {
            const int modid = imports[i];
            const s_Scope& scope = ((modid == module.modid) ? ss._scope : ctx.modules[modid].out.solve.scope);
            visitScope_P6j476Wc(false, fu::vec<s_ScopeItem>(scope.items), id, shadow, result, unique, ss);
        };
    };
    reverse_28eMcEjH(result);
    return static_cast<fu::vec<s_Target>&&>((result ? result : fail_ZlZZ6QYq(isNotDefinedHere_K630eNdN(id), token, ss, _helpers, _here, ctx, module)));
}

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

static bool trySolveTypeParams_fduoUjrB(const s_Node& node, /*MOV*/ s_Type&& type, fu::vec<s_Warning>& errout, bool invariant, fu::view<int> imports, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
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
                    errout += s_Warning { s_TokenIdx(node.token), ("Not a reference: "_fu + humanizeType_kB3Te7GK(type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) };
                };
                return false;
            (void)0;}), static_cast<fu::never&&>(BL_3_v))) : ((node.value == "&mut"_fu) ? ((_1 = tryClear_mutref_hoadAQC0(type, _here, ctx)) ? static_cast<s_Type&&>(_1) : (__extension__ (
            {
                if (errout)
                {
                    errout += s_Warning { s_TokenIdx(node.token), ("Not a mutref: "_fu + humanizeType_kB3Te7GK(type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) };
                };
                return false;
            (void)0;}), static_cast<fu::never&&>(BL_5_v))) : ((node.value == "[]"_fu) ? ((_2 = tryClear_array_lfb8k6Uf(type, _here, ctx, module)) ? static_cast<s_Type&&>(_2) : (__extension__ (
            {
                if (errout)
                {
                    errout += s_Warning { s_TokenIdx(node.token), ("Not an array: "_fu + humanizeType_kB3Te7GK(type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) };
                };
                return false;
            (void)0;}), static_cast<fu::never&&>(BL_7_v))) : ((node.value == "[:]"_fu) ? ((_3 = tryClear_sliceable_EA8Wup3K(type.vtype, _here, ctx, module)) ? static_cast<s_Type&&>(_3) : (__extension__ (
            {
                if (errout)
                {
                    errout += s_Warning { s_TokenIdx(node.token), ("Not sliceable: "_fu + humanizeType_kB3Te7GK(type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) };
                };
                return false;
            (void)0;}), static_cast<fu::never&&>(BL_9_v))) : (__extension__ (
            {
                goto BL_1;
            (void)0;}), static_cast<fu::never&&>(BL_11_v))))));
            if ((node.value == "[]"_fu) || (node.value == "[:]"_fu))
                invariant = true;

            const s_Node* _4;
            return trySolveTypeParams_fduoUjrB((*(_4 = &(node.items[0])) ? *_4 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module)), static_cast<s_Type&&>(t), errout, invariant, imports, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        };
      } BL_1:;
    }
    else if (node.kind == s_kind_typeparam)
    { {
        const fu::str& id = (node.value ? node.value : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
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
                            errout += s_Warning { s_TokenIdx(node.token), ((("Incompatible types for "_fu + qBAD_3PsDzMvu(id)) + ": "_fu) + explainTypeDiff_alC6xmK5(param.matched, type, "->"_fu, ss, _helpers, _here, ctx, module)) };
                        };
                        return false;
                    };
                }
                else
                {
                    /*MOV*/ s_Type uNion = type_trySuper_2nNLpyR4(param.matched, type, false, _here, ctx);
                    if (!uNion)
                    {
                        if (errout)
                        {
                            errout += s_Warning { s_TokenIdx(node.token), ((("Incompatible types for "_fu + qBAD_3PsDzMvu(id)) + ": "_fu) + explainTypeDiff_alC6xmK5(param.matched, type, "<->"_fu, ss, _helpers, _here, ctx, module)) };
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
                        errout += s_Warning { s_TokenIdx(node.token), ((("Incompatible types for "_fu + qBAD_3PsDzMvu(id)) + ": "_fu) + explainTypeDiff_alC6xmK5(param.invariant, type, "<-"_fu, ss, _helpers, _here, ctx, module)) };
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
        /*MOV*/ s_Type t = ((_5 = tryClear_sliceable_EA8Wup3K(type.vtype, _here, ctx, module)) ? static_cast<s_Type&&>(_5) : (__extension__ (
        {
            if (errout)
            {
                errout += s_Warning { s_TokenIdx(node.token), ("Not sliceable: "_fu + humanizeType_kB3Te7GK(type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) };
            };
            return false;
        (void)0;}), static_cast<fu::never&&>(BL_28_v)));
        const s_Node* _6;
        return trySolveTypeParams_fduoUjrB((*(_6 = &(node.items[0])) ? *_6 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module)), static_cast<s_Type&&>(t), errout, invariant, imports, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    }
    else if (node.kind == s_kind_typeunion)
    {
        const int errout0 = errout.size();
        s_Map_KlcLuPSIt9g typeParams0 { ss._typeParams };
        for (int i = 0; i < node.items.size(); i++)
        {
            if (trySolveTypeParams_fduoUjrB(node.items[i], s_Type(type), errout, invariant, imports, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
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
        fu::vec<s_Target> targets = solveAddrOfFn_R1ppOMxl(fu::str(node.value), node.token, (node.flags & s_Flags_F_COMPOUND_ID), imports, ss, _helpers, _here, ctx, module);
        if (!targets)
        {
            if (errout)
            {
                errout += s_Warning { s_TokenIdx(node.token), isNotDefinedHere_K630eNdN(node.value) };
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
                                                errout += s_Warning { s_TokenIdx(node.token), x7E_gCeFmDFw((x7E_gCeFmDFw("Missing type argument for "_fu, str_sdDZgf4z(GET_oTYbwQb8(spec_of, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ": "_fu), str_YPnuP2Bh(EXT_x9dYoBLb(spec_of, ss, ctx, module).args[argIdx], false, ss, _current_fn, _helpers, _here, ctx, module)) };
                                            };
                                            goto BL_42;
                                        }
                                        else
                                        {
                                            const s_Node& node_1 = node.items[argIdx];
                                            /*MOV*/ s_Type type_1 = s_Type { parseType_rxBOPBNl(argSpecType, _here, ctx, module), s_Lifetime{}, s_VFacts{} };
                                            if (!trySolveTypeParams_fduoUjrB(node_1, static_cast<s_Type&&>(type_1), errout, true, imports, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
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
                                    errout += s_Warning { s_TokenIdx(node.token), (x7E_gCeFmDFw("Too many type arguments for "_fu, str_sdDZgf4z(GET_oTYbwQb8(spec_of, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + "."_fu) };
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
                    errout += s_Warning { s_TokenIdx(node.token), ((x7E_gCeFmDFw("Not produced by "_fu, str_sdDZgf4z(GET_oTYbwQb8(targets[i], ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ": "_fu) + humanizeType_kB3Te7GK(type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) };
                };
            };
            return false;
        };
    }
    else
    {
        s_Type expect = evalTypeAnnot_OIK0vUDc(node, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (!isAssignable_v8EzC34Q(expect, type, DONT_match_zeroes, false, _here, ctx))
        {
            if (errout)
            {
                errout += s_Warning { s_TokenIdx(node.token), ("Incompatible types: "_fu + explainTypeDiff_alC6xmK5(expect, type, "<-"_fu, ss, _helpers, _here, ctx, module)) };
            };
            return false;
        }
        else
            return true;

    };
}

inline static fu::str mangleArgTypes_Z4b5cu9l(fu::view<s_Type> args)
{
    /*MOV*/ fu::str mangle = ""_fu;
    int numNonInjected = 0;
    for (int i = 0; i < args.size(); i++)
    {
        const s_Type& arg = args[i];
        if (numNonInjected++)
            mangle += ',';

        if (arg)
            mangle += serializeType_Eouw2usb(arg.vtype, "mangle[$T]"_fu);

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

inline static void l_30_46_uT4HYd2M(const s_Target& spec, s_SolverState& ss, const s_Module& module)
{
    intoTombstone_eP7F2cSI(spec, ss, module);
}

                                #ifndef DEF_each_od2uMferv13
                                #define DEF_each_od2uMferv13
inline void each_od2uMfer(const s_Map_NKYdFuVcECe& _, s_SolverState& ss, const s_Module& module)
{
    for (int i = 0; i < _.vals.size(); i++)
        l_30_46_uT4HYd2M(_.vals[i], ss, module);

}
                                #endif

static void intoTombstone_eP7F2cSI(const s_Target& t, s_SolverState& ss, const s_Module& module)
{
    s_Extended& ext = EXT_mut_yu2tvQxN(t, ss, module);
    ext = s_Extended{};
    s_Overload& o = GET_mut_j8q0a60a(t, ss, module);
    o = s_Overload{};
    o.kind = s_kind___tombstone;
    fu::vec<s_ChildTarget> children { EPH_On3tAJ9X(t, ss, module).children };
    for (int i = 0; i < children.size(); i++)
        intoTombstone_eP7F2cSI(s_Target(children[i].target), ss, module);

    s_Map_NKYdFuVcECe specs = s_Map_NKYdFuVcECe { {}, fu::vec<s_Target>(EPH_On3tAJ9X(t, ss, module).specs.vals) };
    each_od2uMfer(specs, ss, module);
}

static void destroyOverload_E6DyHeiJ(const s_Target& t, s_SolverState& ss, const s_Module& module)
{
    intoTombstone_eP7F2cSI(t, ss, module);
}

static fu::vec<fu::str>& l_6_2_pn2kUJ4L(s_Map_NKYdFuVcECe& _)
{
    return _.keys;
}

static fu::vec<s_Target>& l_6_3_TqrCA8Lb(s_Map_NKYdFuVcECe& _)
{
    return _.vals;
}

inline static int bfind_FrHa2mFW(fu::view<char> item, const fu::str& item_1, s_Map_NKYdFuVcECe& _)
{
    int lo = 0;
    int hi = l_6_2_pn2kUJ4L(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(l_6_2_pn2kUJ4L(_)[i], item);
        if (cmp == 0)
            return i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_2_pn2kUJ4L(_).insert(lo, fu::str(item_1));
    l_6_3_TqrCA8Lb(_).insert(lo, s_Target{});
    return lo;
}

                                #ifndef DEF_ref_Yo17xeZwPLl
                                #define DEF_ref_Yo17xeZwPLl
inline s_Target& ref_Yo17xeZw(const fu::str& item, s_Map_NKYdFuVcECe& _)
{
    const int idx = bfind_FrHa2mFW(item, item, _);
    return l_6_3_TqrCA8Lb(_).mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_4YbBPAwj1Pa
                                #define DEF_ref_4YbBPAwj1Pa
inline s_Target& ref_4YbBPAwj(s_Map_NKYdFuVcECe& _, const fu::str& key)
{
    return ref_Yo17xeZw(key, _);
}
                                #endif

inline static fu::str id_KtOsgGOI(const s_Target& target, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_SPECFAIL_Dujo5Kxe(target))
        return qBAD_3PsDzMvu("SPEC_FAIL"_fu);
    else
        return str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module);

}

static void setSpec_bqJttnNg(const fu::str& mangle, const s_Target& target, const bool nx, const bool allowReplaceNonSpecfails, const int parent_idx, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    s_Target& t = ref_4YbBPAwj(getSpecs_UdSfstkC(parent_idx, ss), mangle);
    if ((!t == nx) && (!t || is_SPECFAIL_Dujo5Kxe(t) || allowReplaceNonSpecfails))
        t = target;
    else
    {
        int BL_3_v {};
        BUG_zwQElfxV(((((((x7E_gCeFmDFw((x7E_gCeFmDFw("About to screw up royally, replacing spec: "_fu, fu::i64dec((__extension__ (
        {
            const s_Target& t_1 = t;
            BL_3_v = (int(unsigned(((t_1._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_3_v))) + " with "_fu), fu::i64dec(int(unsigned(((target._packed >> 20ull) & 0xfffffull))))) + ", mangle: "_fu) + mangle) + ", that's: "_fu) + id_KtOsgGOI(t, ss, _helpers, _here, ctx, module)) + " becoming "_fu) + id_KtOsgGOI(target, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
    };
}

static void resetSpec_xTyaJ0Gs(const s_Target& spec, const bool allowReplaceNonSpecfails, const int parent_idx, fu::view<fu::str> mangles, s_Target& currentSpec, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(spec == currentSpec))
    {
        currentSpec = spec;
        for (int i = 0; i < mangles.size(); i++)
            setSpec_bqJttnNg(mangles[i], spec, false, allowReplaceNonSpecfails, parent_idx, ss, _helpers, _here, ctx, module);

    };
}

static s_Target SPECFAIL_RQESMPxD(const fu::str& reason, const int parent_idx, const s_Target& SPECFAIL_RentrySafety, fu::view<fu::str> mangles, s_Target& currentSpec, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int index = ss._spec_errors.size();
    ss._spec_errors += fu::str(reason);
    const s_Target spec = s_Target { (SPECFAIL_RentrySafety._packed | uint64_t(unsigned(index))) };
    resetSpec_xTyaJ0Gs(spec, false, parent_idx, mangles, currentSpec, ss, _helpers, _here, ctx, module);
    return spec;
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

static bool isNativeBody_JE4gc7uM(const s_Node& n_body)
{
    if (n_body.kind == s_kind_call)
        return n_body.value == "__native"_fu;
    else
        return false;

}

inline static bool useConsumedType_ifNative_9FOXn7ih(const s_TypeParam& tp)
{
    return s_TypeParamFlags((tp.flags & s_TypeParamFlags((s_TypeParamFlags_TP_isArgSpec | s_TypeParamFlags_TP_isTypenameArgSpec)))) == s_TypeParamFlags_TP_isArgSpec;
}

inline static void l_30_49_WvOVvKSR(s_TypeParam& tp)
{
    if (useConsumedType_ifNative_9FOXn7ih(tp))
        tp.flags |= s_TypeParamFlags_TP_needsConsumedTypes;

}

                                #ifndef DEF_each_z0tJsw21xwd
                                #define DEF_each_z0tJsw21xwd
inline void each_z0tJsw21(s_Map_KlcLuPSIt9g& _)
{
    for (int i = 0; i < _.vals.size(); i++)
        l_30_49_WvOVvKSR(_.vals.mutref(i));

}
                                #endif

static bool type_has_IWYUwavY(const s_Type& type, fu::view<char> tag, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (tag == "trivial"_fu)
        return is_trivial_QHDuaMIF(type.vtype, _here, ctx, module);
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
        return is_reinterpretable_QHDuaMIF(type.vtype, _here, ctx, module);
    else
        BUG_zwQElfxV((("Unknown type tag: `"_fu + tag) + "`."_fu), ss, _helpers, _here, ctx, module);

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

static bool evalTypePattern_jcr0vd81(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.kind == s_kind_and)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (!evalTypePattern_jcr0vd81(node.items[i], ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
                return false;

        };
        return true;
    }
    else if (node.kind == s_kind_or)
    {
        s_Map_KlcLuPSIt9g undo { ss._typeParams };
        for (int i = 0; i < node.items.size(); i++)
        {
            if (evalTypePattern_jcr0vd81(node.items[i], ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
                return true;
            else
                ss._typeParams = undo;

        };
        return false;
    }
    else if (node.kind == s_kind_typeassert)
    {
        const s_Node* _0;
        const s_Node& left = (*(_0 = &(node.items[0])) ? *_0 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
        const s_Node* _1;
        const s_Node& right = (*(_1 = &(node.items[1])) ? *_1 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
        /*MOV*/ s_Type actual = evalTypeAnnot_OIK0vUDc(left, true, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (right.kind == s_kind_typetag)
            return type_has_IWYUwavY(actual, (right.value ? right.value : fail_Szrpd5G6("Falsy type tag."_fu, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
        else
        {
            fu::vec<s_Warning> errout {};
            const bool ok = trySolveTypeParams_fduoUjrB(right, static_cast<s_Type&&>(actual), errout, false, fu::view<int>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            if (errout)
                BUG_zwQElfxV("Inefficient: trySolveTypeParams pushing errors when told not to (falsy errout)."_fu, ss, _helpers, _here, ctx, module);
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
                            /*MOV*/ s_Type expect = evalTypeAnnot_OIK0vUDc(right, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                            s_TypeParam& tp = ref_Yr2SlHAw(ss._typeParams, id);
                            s_Type _3 {};
                            tp.consumed = (tp.consumed ? ((_3 = type_tryIntersect_33NmLJZR(tp.consumed, expect, _here, ctx)) ? static_cast<s_Type&&>(_3) : fail_Szrpd5G6("typeassert intersect fail."_fu, ss, _helpers, _here, ctx, module)) : static_cast<s_Type&&>(expect));
                        };
                    };
                };
                return ok;
            };
        };
    }
    else if (node.kind == s_kind_not)
        return !evalTypePattern_jcr0vd81(only_a6qr8qgs(node.items), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

    fail_Szrpd5G6("Invalid type pattern."_fu, ss, _helpers, _here, ctx, module);
}

static s_Node& n_fn_pUsLehMi(s_Template& tEmplate)
{
    return tEmplate.node;
}

static fu::vec<s_Node>& sig_7j7bdC9C(s_Template& tEmplate)
{
    return n_fn_pUsLehMi(tEmplate).items;
}

inline static void l_30_50_ys75yg7O(s_TypeParam& tp)
{
    if (useConsumedType_ifNative_9FOXn7ih(tp))
        tp.matched = tp.consumed;

}

                                #ifndef DEF_each_gVtI2ReJ9Q2
                                #define DEF_each_gVtI2ReJ9Q2
inline void each_gVtI2ReJ(s_Map_KlcLuPSIt9g& _)
{
    for (int i = 0; i < _.vals.size(); i++)
        l_30_50_ys75yg7O(_.vals.mutref(i));

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

static void ScopeSkip_push_jMawKC22(fu::vec<s_ScopeSkip>& scope_skip, const int start, const int end, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
                BUG_zwQElfxV("ScopeSkip_push: last.end > start."_fu, ss, _helpers, _here, ctx, module);

        };
    }
    else
        BUG_zwQElfxV("ScopeSkip_push: bad args."_fu, ss, _helpers, _here, ctx, module);

}

static bool Scope_import_0bWDyLig(const int modid, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
        _Scope_import__forceCopy_7nxeodlg(modid, ss, ctx);
        return true;
    }
    else
        BUG_zwQElfxV("Attempting to import modid-0."_fu, ss, _helpers, _here, ctx, module);

}

static void _Scope_import__forceCopy_privates_1kd8XYU3(const int modid, s_SolverState& ss, const s_Context& ctx)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    ss._scope.items += fu::get_view(s.items, s.pub_items);
    ss._scope.converts += fu::get_view(s.converts, s.pub_converts);
    ss._scope.implicits += fu::get_view(s.implicits, s.pub_implicits);
}

static void Scope_import_privates_PzLS1s4u(const int modid, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
        _Scope_import__forceCopy_privates_1kd8XYU3(modid, ss, ctx);
    }
    else
        BUG_zwQElfxV("Attempting to import_privates modid-0."_fu, ss, _helpers, _here, ctx, module);

}

static fu::vec<fu::str>& l_6_0_JgfScGbl(s_Map_GCAYRMKeHTh& _)
{
    return _.keys;
}

static fu::vec<s_Type>& l_6_1_U48WZNJb(s_Map_GCAYRMKeHTh& _)
{
    return _.vals;
}

                                #ifndef DEF_update_fKelCXKCKwc
                                #define DEF_update_fKelCXKCKwc
inline bool update_fKelCXKC(const fu::str& item, const s_Type& extra, s_Map_GCAYRMKeHTh& _)
{
    int lo = 0;
    int hi = l_6_0_JgfScGbl(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(l_6_0_JgfScGbl(_)[i], item);
        if (cmp == 0)
        {
            l_6_1_U48WZNJb(_).mutref(i) = s_Type(extra);
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_0_JgfScGbl(_).insert(lo, fu::str(item));
    l_6_1_U48WZNJb(_).insert(lo, s_Type(extra));
    return true;
}
                                #endif

                                #ifndef DEF_set_mUPT2O59u6j
                                #define DEF_set_mUPT2O59u6j
inline bool set_mUPT2O59(s_Map_GCAYRMKeHTh& _, const fu::str& key, const s_Type& value)
{
    return update_fKelCXKC(key, value, _);
}
                                #endif

static void createTypedef_PqjujjKL(const fu::str& id, const s_Type& annot, const s_Flags flags, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Struct& s = tryLookupUserType_QHDuaMIF(annot.vtype, _here, ctx, module);
    if (s.target && !(flags & s_Flags_F_PUB))
        Scope_set_5Z1f2QqZ(ss._scope, id, s.target, !!(flags & s_Flags_F_SHADOW));
    else
    {
        const s_Target target = createRawTypedef_TErEn8Hv(id, s_Type(annot), flags, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        if (s.target)
        {
            GET_mut_j8q0a60a(target, ss, module) = s_Overload(GET_oTYbwQb8(s.target, ss, _helpers, _here, ctx, module));
            EXT_mut_yu2tvQxN(target, ss, module) = s_Extended(EXT_x9dYoBLb(s.target, ss, ctx, module));
        };
    };
}

inline static void l_30_58_uSzoE4rm(const fu::str& id, const s_TypeParam& tp, s_SpecExtras& res, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Type& type = tp.matched;
    if (!(!type))
    {
        if (tp.flags & s_TypeParamFlags_TP_isArgSpec)
            set_mUPT2O59(res.arg_spec_types, id, type);
        else
        {
            createTypedef_PqjujjKL(id, type, s_Flags{}, ss, _helpers, _here, ctx, module);
        };
    };
}

                                #ifndef DEF_pairs_6EoJqJmx4T9
                                #define DEF_pairs_6EoJqJmx4T9
inline void pairs_6EoJqJmx(const s_Map_KlcLuPSIt9g& _, s_SpecExtras& res, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < _.keys.size(); i++)
        l_30_58_uSzoE4rm(_.keys[i], _.vals[i], res, ss, _helpers, _here, ctx, module);

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

static s_SpecExtras intoSpecExtras_R2DeLdpo(const s_Map_KlcLuPSIt9g& typeParams, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ s_SpecExtras res {};
    const int scopeItems0 = ss._scope.items.size();
    pairs_6EoJqJmx(typeParams, res, ss, _helpers, _here, ctx, module);
    res.scope_items = steal_t1nNqERa(ss._scope.items, scopeItems0);
    return /*NRVO*/ res;
}

static s_SolvedNode solved_8M42guvz(const s_Node& node, const s_Type& type, const fu::vec<s_SolvedNode>& items, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_wUIpeYIY(node.kind, type, node.flags, node.value, items, target, s_Helpers{}, _here);
}

static fu::vec<s_SolvedNode>& outItems_2O38m2uX(s_CurrentFn& _current_fn)
{
    return _current_fn.out.items;
}

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

static s_SolvedNode solveTypedef_gVh6I0UZ(const s_Node& node, const bool asArgument, const s_Type& specType, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.items[LET_TYPE])
    {
        _here = node.items[LET_TYPE].token;
        fail_Szrpd5G6("Type annotations on type aliases are not supported."_fu, ss, _helpers, _here, ctx, module);
    }
    else if (specType && !is_Typename_40rRB6L8(specType))
        BUG_zwQElfxV("solveTypedef: specType is not a Typename"_fu, ss, _helpers, _here, ctx, module);
    else
    {
        const s_Node* _0;
        /*MOV*/ s_Type annot = (specType ? s_Type(specType) : evalTypeAnnot_OIK0vUDc((*(_0 = &(node.items[LET_INIT])) ? *_0 : fail_Szrpd5G6("Type aliases must be initialized."_fu, ss, _helpers, _here, ctx, module)), false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
        fu::str id = ((node.flags & s_Flags_F_COMPOUND_ID) ? cleanID_j6ljQymd(node.value) : fu::str(node.value));
        createTypedef_PqjujjKL(id, annot, node.flags, ss, _helpers, _here, ctx, module);
        if (asArgument)
        {
            s_Type relaxed = static_cast<s_Type&&>(annot);
            relaxed.vtype.quals &= ~q_USAGE;
            return createEmpty_hkWuvX58(s_kind_empty, relaxed, s_Target{}, _here);
        }
        else
        {
            return createEmpty_hkWuvX58(s_kind_empty, t_void, s_Target{}, _here);
        };
    };
}

inline static bool at_most_one_set_p1u6uZTb(const uint64_t v)
{
    return !(v & (v - 1ull));
}

static s_SolvedNode solveLetLike_dontTouchScope_3J6SwK9E(const s_Node& node, const bool asArgument, const s_Type& specType, const s_Type& primType, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    // Hoisted:
    s_Type specType_1 {};

    const s_Node& n_annot = node.items[LET_TYPE];
    /*MOV*/ s_Type annot = ((n_annot && (n_annot.kind != s_kind_typeunion)) ? evalTypeAnnot_OIK0vUDc(n_annot, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_Type{});
    const s_Flags flags = node.flags;
    if (at_most_one_set_p1u6uZTb(uint64_t((flags & (s_Flags_F_VAL | s_Flags_F_REF)))))
    {
        if (at_most_one_set_p1u6uZTb(uint64_t((flags & (s_Flags_F_CONST | s_Flags_F_MUT)))))
        {
            s_Type annot_1 = (specType ? static_cast<s_Type&&>((specType_1 = ((!(flags & s_Flags_F_REF) || (flags & s_Flags_F_CONST)) ? clear_mutref_40rRB6L8(s_Type(specType)) : s_Type(specType)), specType_1)) : (primType ? s_Type(primType) : ((annot && ((node.flags & (s_Flags_F_REF | s_Flags_F_CONST)) == s_Flags_F_REF)) ? add_mutref_XBf6EmLx(static_cast<s_Type&&>(annot), Lifetime_temporary, _here, ctx) : static_cast<s_Type&&>(annot))));
            const s_Node& n_init = (!specType ? node.items[LET_INIT] : (*(const s_Node*)fu::NIL));
            /*MOV*/ s_SolvedNode init = (n_init ? solveNode_dEyN38Q1(n_init, annot_1, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
            _here = node.token;
            return solveLetLike_dontTouchScope_ZVKYZKmm(node.value, flags, static_cast<s_SolvedNode&&>(init), asArgument, annot_1, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        }
        else
            BUG_zwQElfxV("F_CONST & F_MUT both set"_fu, ss, _helpers, _here, ctx, module);

    }
    else
        BUG_zwQElfxV("F_VAL & F_REF both set"_fu, ss, _helpers, _here, ctx, module);

}

static s_SolvedNode solveLet_45O7r6fI(const s_Node& node, const bool asArgument, const s_Type& letdefType, const s_Type& specType, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.flags & s_Flags_F_TYPENAME)
        return solveTypedef_gVh6I0UZ(node, asArgument, specType, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else
    {
        s_SolvedNode out = solveLetLike_dontTouchScope_3J6SwK9E(node, asArgument, specType, (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        const fu::str& id = out.value;
        return solveLet_createBindingAndGetLetdef_otiCw78O(s_SolvedNode(out), id, true, asArgument, letdefType, ss, _current_fn, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_t_AssumeNever_WhileSolvingRecursion
                                #define DEF_t_AssumeNever_WhileSolvingRecursion
extern const s_Type t_AssumeNever_WhileSolvingRecursion;
                                #endif

inline static bool l_30_3_1QWNvBhc(const int locid)
{
    return !!locid;
}

                                #ifndef DEF_Lifetime_if_only_i24M1hq48Vl
                                #define DEF_Lifetime_if_only_i24M1hq48Vl
inline bool Lifetime_if_only_i24M1hq4(const s_Lifetime& lifetime)
{
    bool first = true;

    { {
        fu::view<char> chars = lifetime.uni0n;
        int offset = 0;
        while (offset < chars.size())
        {
            const unsigned r = parse7bit(chars, offset);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            if (!first)
                goto BL_1;
            else
            {
                first = false;
                if (l_30_3_1QWNvBhc(locid))
                    return true;

            };
        };
      } BL_1:;
    };
    return false;
}
                                #endif

static s_Lifetime Lifetime_fromNative_4ahma87i(fu::view<s_Node> sig, fu::view<s_SolvedNode> args, const s_Type& actual, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ s_Type res {};
    if ((sig.size() + FN_ARGS_BACK) == args.size())
    {
        for (int i = 0; i < args.size(); i++)
        {
            if (sig[i].flags & s_Flags_F_REF)
            {
                if (res)
                    fail_Szrpd5G6("Multiple ref arguments, cannot infer what the returned reference points to."_fu, ss, _helpers, _here, ctx, module);
                else
                {
                    res = GET_oTYbwQb8(args[i].target, ss, _helpers, _here, ctx, module).type;
                    if (!(res.lifetime))
                    {
                        fail_Szrpd5G6("Missing ref argument lifetime."_fu, ss, _helpers, _here, ctx, module);
                    };
                };
            };
        };
        if (res.lifetime)
        {
            if (Lifetime_if_only_i24M1hq4(res.lifetime))
            {
                if (!isAssignable_v8EzC34Q(actual, res, false, false, _here, ctx))
                {
                    const int flatCount = getFlatCount_QHDuaMIF(actual.vtype, _here, ctx, module);
                    if (!flatCount)
                    {
                        return s_Lifetime(Lifetime_static);
                    }
                    else
                    {
                        return Lifetime_makeShared_pCJ6hBta(res.lifetime, flatCount, _here, ctx);
                    };
                }
                else
                {
                    return static_cast<s_Lifetime&&>(res.lifetime);
                };
            }
            else
            {
                fail_Szrpd5G6(x7E_gCeFmDFw("Infered a non-single-local __native lifetime: "_fu, str_XwwcWF8F(res.lifetime, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
            };
        }
        else
            fail_Szrpd5G6("No ref arguments, cannot infer what the returned reference points to."_fu, ss, _helpers, _here, ctx, module);

    }
    else
        BUG_zwQElfxV("sig.len != args.len"_fu, ss, _helpers, _here, ctx, module);

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

                                #ifndef DEF_parse_Nu5dfeQxKHc
                                #define DEF_parse_Nu5dfeQxKHc
inline s_FxMask parse_Nu5dfeQx(fu::view<char> v)
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

                                #ifndef DEF_grow_if_oob_yq7gHTQsrb1
                                #define DEF_grow_if_oob_yq7gHTQsrb1
inline int& grow_if_oob_yq7gHTQs(fu::vec<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu::str CompoundArgID_outerSplice_r06biR2l(fu::str& name, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    bool exclam = false;
    for (int i = 0; i < name.size(); i++)
    {
        const char c = name[i];
        if (c == '!')
        {
            if (exclam)
                BUG_zwQElfxV((("CompoundArgID: double bang in `"_fu + name) + "`."_fu), ss, _helpers, _here, ctx, module);
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
        BUG_zwQElfxV((("CompoundArgID: no `.` nor `!` in id `"_fu + name) + "`."_fu), ss, _helpers, _here, ctx, module);
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

inline static void l_30_52_2ivF6Rzo(const int other, s_BitSet& output, fu::view<int> argPos_1b)
{
    const int otherPos_1b = unless_oob_iUAHahkV(argPos_1b, other);
    if (otherPos_1b)
        add_U5p6nLOf(output, (otherPos_1b - 1));

}

                                #ifndef DEF_each_rzAtguR1We6
                                #define DEF_each_rzAtguR1We6
inline void each_rzAtguR1(const s_BitSet& _, s_BitSet& output, fu::view<int> argPos_1b)
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
                    l_30_52_2ivF6Rzo(((i << 3) | int(b)), output, argPos_1b);

            };
        };
    };
}
                                #endif

static void ArgsAtRisk_list_l52L6cJp(s_BitSet& output, fu::view<s_BitSet> at_risk, fu::view<int> argPos_1b, const s_Target& argTarget)
{
    each_rzAtguR1(unless_oob_yoNyPnA3(at_risk, int(unsigned((argTarget._packed & 0xfffffull)))), output, argPos_1b);
}

static void l_30_53_7lhBDduc(const int index, fu::view<s_SolvedNode> items, s_BitSet& hard_risk, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_SolvedNode& other = GET_oTYbwQb8(items[index].target, ss, _helpers, _here, ctx, module).solved;
    if (!TODO_FIX_isArray_40rRB6L8(other.type))
        add_U5p6nLOf(hard_risk, index);

}

                                #ifndef DEF_each_BQ9GheD7fyl
                                #define DEF_each_BQ9GheD7fyl
inline void each_BQ9GheD7(const s_BitSet& _, fu::view<s_SolvedNode> items, s_BitSet& hard_risk, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
                    l_30_53_7lhBDduc(((i << 3) | int(b)), items, hard_risk, ss, _helpers, _here, ctx, module);

            };
        };
    };
}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_aYhkIiun(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static bool isNoVec_2wSlaUDF(const s_Type& t, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return is_trivial_QHDuaMIF(t.vtype, _here, ctx, module) || !(is_rx_copy_GSunVkiW(t) || is_rx_resize_GSunVkiW(t));
}

static void visit_S4XVxygn(const s_Lifetime& lifetime, s_Lifetime& result, bool& maybeOutOfOrder, const int locals_start, const bool locals_only, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    // Hoisted:
    int offset0_1;

    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;

        { {
            const unsigned r = parse7bit(chars, offset);
            int BL_4_v {};
            const int sr = (__extension__ (
            {
                offset0_1 = (offset + 0);
                for (; ; )
                {
                    bool isLastPath = false;
                    bool isFirstSubRegion = true;
                    for (; ; )
                    {
                        const unsigned raw_flatOffset = parse7bit(chars, offset);
                        const bool isLastSubRegion = !(raw_flatOffset & 1u);
                        const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                        isLastPath = !(raw_flatCount & 1u);
                        if (isLastSubRegion)
                            break;
                        else
                            isFirstSubRegion = false;

                    };
                    if (isLastPath)
                        break;

                };
                BL_4_v = (offset0_1);
            (void)0;}), BL_4_v);

            { {
                const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
                fu::view<char> paths = fu::get_view(chars, sr, offset);
                if (!locid)
                {
                    if (locals_only)
                        goto BL_12;

                }
                else if ((locid >= locals_start))
                {
                    const s_Type& init = Lifetime_climbType_426itOgG(GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module);
                    if (is_ref_gBx1AgSx(init))
                    {
                        s_Lifetime parent = Lifetime_op_join_dwN33Lug(init.lifetime, paths, _here, ctx);
                        fu::view<s_Helpers> _helpers_1 = _helpers;
                        const s_TokenIdx& _here_1 = _here;
                        const s_Module& module_1 = module;
                        maybeOutOfOrder = true;
                        visit_S4XVxygn(parent, result, maybeOutOfOrder, locals_start, locals_only, ss, _helpers_1, _here_1, ctx, module_1);
                        continue;
                    };
                };
                goto BL_3;
              } BL_12:;
            };
            continue;
          } BL_3:;
        };
        if (maybeOutOfOrder)
        {
            result = Lifetime_union_YIGC7Sux(result, s_Lifetime { fu::slice(chars, offset0, offset) }, false, _here, ctx);
        }
        else
            result.uni0n += fu::get_view(chars, offset0, offset);

    };
}

                                #ifndef DEF_Lifetime_process_14GA3uiQuj7
                                #define DEF_Lifetime_process_14GA3uiQuj7
inline s_Lifetime Lifetime_process_14GA3uiQ(const s_Lifetime& lifetime, const int locals_start, const bool locals_only, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ s_Lifetime result {};
    bool maybeOutOfOrder = false;
    visit_S4XVxygn(lifetime, result, maybeOutOfOrder, locals_start, locals_only, ss, _helpers, _here, ctx, module);
    return /*NRVO*/ result;
}
                                #endif

static s_Lifetime Lifetime_unwind_rpRStrev(const s_Lifetime& lifetime, const int locals_start, const bool locals_only, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return Lifetime_process_14GA3uiQ(lifetime, locals_start, locals_only, ss, _helpers, _here, ctx, module);
}

static fu::str qSTACK_uBYo48YW(const s_Target& target, const int locid, fu::view<s_Target> seen, const s_ArgQuery query, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return qSTACK_XVvwRcb5(target, s_SolvedNode(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).solved), locid, seen, query, ss, _current_fn, _helpers, _here, ctx, module);
}

static fu::str qSTACK_XWgwXpjF(const s_Target& target, const int position, fu::view<s_Target> seen, const s_ArgQuery query, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int BL_1_v {};
    return qSTACK_uBYo48YW(target, (__extension__ (
    {
        const s_Target& t = EXT_x9dYoBLb(target, ss, ctx, module).args[position].target;
        BL_1_v = (int(unsigned((t._packed & 0xfffffull))));
    (void)0;}), BL_1_v), seen, query, ss, _current_fn, _helpers, _here, ctx, module);
}

static fu::str qSTACK_XVvwRcb5(const s_Target& target, const s_SolvedNode& node, const int locid, fu::view<s_Target> seen, const s_ArgQuery query, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target nestingFnort0 = exchange_jPHBkujO(ss._nestingFnort, s_Target(target));
    fu_DEFER(ss._nestingFnort = nestingFnort0);
    fu::vec<s_Target> seen_1 = (seen + target);

    {
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_aYhkIiun(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_oTYbwQb8(node_1.target, ss, _helpers, _here, ctx, module).solved : node_1);
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
                        fu::vec<s_Argument> host_args { EXT_x9dYoBLb(node_3.target, ss, ctx, module).args };
                        if (args.size() == host_args.size())
                        {
                            for (int i = 0; i < host_args.size(); i++)
                            {
                                const s_Argument& host_arg = host_args[i];
                                if (query == s_ArgQuery_AQ_WhyNotNovec)
                                {
                                    if (isNoVec_2wSlaUDF(host_arg.type, _here, ctx, module))
                                        continue;

                                }
                                else if (!(host_arg.flags & s_Flags_F_WRITTEN_TO))
                                    continue;

                                const s_SolvedNode& arg = args[i];
                                s_Lifetime unwound = Lifetime_unwind_rpRStrev(arg.type.lifetime, 0, false, ss, _helpers, _here, ctx, module);
                                if (!(!Lifetime_has_62UtfSbx(unwound, locid)))
                                {
                                    fu::str peek = qSTACK_XWgwXpjF(s_Target(node_3.target), i, seen_1, query, ss, _current_fn_1, _helpers, _here, ctx, module);
                                    if (!(!peek && (GET_oTYbwQb8(node_3.target, ss, _helpers, _here, ctx, module).kind == s_kind_fn)))
                                    {
                                        return ((x7E_gCeFmDFw(("\n            "_fu + "via "_fu), str_sdDZgf4z(GET_oTYbwQb8(node_3.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu) + addr_and_snippet_2bGH8tqt(node_3.token, s_CodeFmt{}, fu::view<char>{}, ctx, module)) + peek;
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

[[noreturn]] static fu::never fail_wxP4avWH(const fu::str& reason, fu::view<char> backtrack, const s_SolverState& ss, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (backtrack)
    {
        s_TokenIdx _0 {};
        _here = ((_0 = tryBacktrack_6bOCzrPU(_here, backtrack, s_kind_id, ctx)) ? _0 : s_TokenIdx(_here));
    };
    fail_Szrpd5G6(reason, ss, _helpers, _here, ctx, module);
}

inline static bool l_30_54_mt7rrAga(const s_COWInside& cow, const s_Target& argTarget)
{
    return cow.argTarget == int(unsigned((argTarget._packed & 0xfffffull)));
}

                                #ifndef DEF_some_mHSEiOwDhE6
                                #define DEF_some_mHSEiOwDhE6
inline bool some_mHSEiOwD(fu::view<s_COWInside> a, const s_Target& argTarget)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_COWInside& item = a[i];
        if (l_30_54_mt7rrAga(item, argTarget))
            return true;

    };
    return false;
}
                                #endif

static void visit_RlVMjbu6(const s_Lifetime& lifetime, s_Lifetime& result, bool& maybeOutOfOrder, fu::view<int> argPos_1b, fu::view<s_Argument> args, s_BitSet& returned, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    // Hoisted:
    int offset0_1;

    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;

        {
            const unsigned r = parse7bit(chars, offset);
            int BL_4_v {};
            const int sr = (__extension__ (
            {
                offset0_1 = (offset + 0);
                for (; ; )
                {
                    bool isLastPath = false;
                    bool isFirstSubRegion = true;
                    for (; ; )
                    {
                        const unsigned raw_flatOffset = parse7bit(chars, offset);
                        const bool isLastSubRegion = !(raw_flatOffset & 1u);
                        const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                        isLastPath = !(raw_flatCount & 1u);
                        if (isLastSubRegion)
                            break;
                        else
                            isFirstSubRegion = false;

                    };
                    if (isLastPath)
                        break;

                };
                BL_4_v = (offset0_1);
            (void)0;}), BL_4_v);
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            const bool isStatic = (r == 0u);
            fu::view<char> paths = fu::get_view(chars, sr, offset);
            if (!locid)
            {
                if (!(isStatic))
                {
                    BUG_zwQElfxV("Non-local/non-static in retval.lifetime."_fu, ss, _helpers, _here, ctx, module);
                };
            }
            else
            {
                int _0 {};
                const int argPos_1b_1 = ((_0 = unless_oob_iUAHahkV(argPos_1b, locid)) ? _0 : BUG_zwQElfxV(x7E_gCeFmDFw("Non-argument local in retval.lifetime: "_fu, str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module));
                const int i = (argPos_1b_1 - 1);
                const s_Argument& arg = args[i];
                if (is_ref_gBx1AgSx(arg.type))
                {
                    add_U5p6nLOf(returned, i);
                    s_Lifetime replacement = Lifetime_from_w8BwafZY(i, paths, _here, ctx);
                    const s_TokenIdx& _here_1 = _here;
                    maybeOutOfOrder = true;
                    Lifetime_add_PUWFQPIX(result, replacement, false, _here_1, ctx);
                    continue;
                }
                else
                {
                    BUG_zwQElfxV(x7E_gCeFmDFw("Non-ref argument in retval.lifetime: "_fu, str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                };
            };
        };
        if (maybeOutOfOrder)
        {
            result = Lifetime_union_YIGC7Sux(result, s_Lifetime { fu::slice(chars, offset0, offset) }, false, _here, ctx);
        }
        else
            result.uni0n += fu::get_view(chars, offset0, offset);

    };
}

                                #ifndef DEF_Lifetime_process_32jyoiziGvi
                                #define DEF_Lifetime_process_32jyoiziGvi
inline s_Lifetime Lifetime_process_32jyoizi(const s_Lifetime& lifetime, fu::view<int> argPos_1b, fu::view<s_Argument> args, s_BitSet& returned, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ s_Lifetime result {};
    bool maybeOutOfOrder = false;
    visit_RlVMjbu6(lifetime, result, maybeOutOfOrder, argPos_1b, args, returned, ss, _helpers, _here, ctx, module);
    return /*NRVO*/ result;
}
                                #endif

static s_ArgRationale rejectsTempCopies_0fNG4Leq(const s_Argument& arg, const s_ArgRationale requireVal, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (arg.flags & s_Flags_F_IMPLICIT)
        return s_ArgRationale_CantTempCopy_HostArg_Implicit;
    else if (arg.flags & s_Flags_F_REF)
        return s_ArgRationale_CantTempCopy_HostArg_Ref;
    else if (is_mutref_hoadAQC0(arg.type, _here, ctx))
        return s_ArgRationale_CantTempCopy_HostArg_MutRef;
    else if (!(arg.flags & s_Flags_F_VAL))
        return requireVal;
    else
    {
        return s_ArgRationale{};
    };
}

static bool acceptsTempCopies_gNf7LKIL(const s_Argument& arg, const s_ArgRationale requireVal, const s_TokenIdx& _here, const s_Context& ctx)
{
    return !rejectsTempCopies_0fNG4Leq(arg, requireVal, _here, ctx);
}

static bool willPassByValue_63P7ypUp(const s_Argument& arg, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (acceptsTempCopies_gNf7LKIL(arg, s_ArgRationale{}, _here, ctx))
        return isPassByValue_3t4EwFeQ(arg.type.vtype);
    else
        return false;

}

inline static bool l_30_56_xJHDUyl6(const bool isArgIdx, const bool isStatic, const s_Type& retval, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return isArgIdx ? isArgIdx : isStatic ? isStatic : BUG_zwQElfxV(x7E_gCeFmDFw("updateScope: Non-static/non-arg leaked:\n\t"_fu, str_XwwcWF8F(retval.lifetime, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
}

                                #ifndef DEF_Lifetime_each_h8zo7qJC4Ma
                                #define DEF_Lifetime_each_h8zo7qJC4Ma
inline void Lifetime_each_h8zo7qJC(const s_Lifetime& lifetime, const s_Type& retval, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_56_xJHDUyl6(((r & 3u) == 3u), (r == 0u), retval, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static const s_Type& ignoreLocalLts_Dxad6CP9(const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_ref_gBx1AgSx(type))
    {
        if (!(type.lifetime == Lifetime_temporary))
        {
            BUG_zwQElfxV("type.lifetime != Lifetime_temporary"_fu, ss, _helpers, _here, ctx, module);
        };
    };
    return type;
}

inline static s_SolvedNode TODO_FIX_pop_QwLcgqMB(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static fu::str qSTACK_2m0mr1nY(const s_Target& target, const s_SolvedNode& node, const s_FxMask fx_mask, fu::view<s_Target> seen, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target nestingFnort0 = exchange_jPHBkujO(ss._nestingFnort, s_Target(target));
    fu_DEFER(ss._nestingFnort = nestingFnort0);
    fu::vec<s_Target> seen_1 = (seen + target);

    {
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_QwLcgqMB(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_oTYbwQb8(node_1.target, ss, _helpers, _here, ctx, module).solved : node_1);
            s_SolvedNode BL_4_v {};
            s_SolvedNode node_3 = (__extension__ (
            {
                const s_SolvedNode& __partcopy_ref = ((node_2.kind == s_kind___preceding_ref_arg) ? _current_fn.events.preceding_ref_args[node_2.helpers.index].arg : node_2);
                BL_4_v = (s_SolvedNode { __partcopy_ref.kind, {}, {}, {}, {}, fu::vec<s_SolvedNode>(__partcopy_ref.items), s_TokenIdx(__partcopy_ref.token), {}, s_Target(__partcopy_ref.target) });
            (void)0;}), static_cast<s_SolvedNode&&>(BL_4_v));

            {
                const s_CurrentFn& _current_fn_1 = _current_fn;
                if (!((node_3.kind != s_kind_call) || isLocal_nMI8cChU(node_3.target)))
                {
                    if (!(has_P9xEJb6w(seen_1, node_3.target)))
                    {
                        if (!(!s_FxMask((EXT_x9dYoBLb(node_3.target, ss, ctx, module).fx_mask & fx_mask))))
                        {
                            fu::str peek = qSTACK_2m0mr1nY(s_Target(node_3.target), s_SolvedNode(GET_oTYbwQb8(node_3.target, ss, _helpers, _here, ctx, module).solved), fx_mask, seen_1, ss, _current_fn_1, _helpers, _here, ctx, module);
                            if (!(!peek && (GET_oTYbwQb8(node_3.target, ss, _helpers, _here, ctx, module).kind == s_kind_fn)))
                            {
                                return ((x7E_gCeFmDFw(("\n            "_fu + "via "_fu), str_sdDZgf4z(GET_oTYbwQb8(node_3.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu) + addr_and_snippet_2bGH8tqt(node_3.token, s_CodeFmt{}, fu::view<char>{}, ctx, module)) + peek;
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

                                #ifndef DEF_first_8o6rzxnHj51
                                #define DEF_first_8o6rzxnHj51
inline int first_8o6rzxnH(fu::view<int> s)
{
    if (s.size())
        return s[0];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

inline static bool l_30_57_tAVFZ7qT(const s_Argument& l_30_57)
{
    return isAddrOfFn_gBx1AgSx(l_30_57.type);
}

                                #ifndef DEF_some_LzKAMckUDqj
                                #define DEF_some_LzKAMckUDqj
inline bool some_LzKAMckU(fu::view<s_Argument> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Argument& item = a[i];
        if (l_30_57_tAVFZ7qT(item))
            return true;

    };
    return false;
}
                                #endif

static bool astChange_j7TL76Cv(const s_SolvedNode& a, const s_SolvedNode& b)
{
    if ((a.kind != b.kind) || (a.items.size() != b.items.size()))
        return true;
    else
    {
        for (int i = a.items.size(); i-- > 0; )
        {
            if (astChange_j7TL76Cv(a.items[i], b.items[i]))
                return true;

        };
        return false;
    };
}

                                #ifndef DEF_steal_4yOrAYAGAFk
                                #define DEF_steal_4yOrAYAGAFk
inline s_RevSpecPrototype steal_4yOrAYAG(s_RevSpecPrototype& v)
{
    /*MOV*/ s_RevSpecPrototype ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

static void doUpdateScope_KArjMmkp(/*MOV*/ s_Type&& retval, const s_Target& target, const bool maybeLast, const bool isNative, const bool isUnspec, const s_DeclAsserts asserts, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (target == _current_fn.out.target)
    {
        fu::view<s_SolvedNode> items = _current_fn.out.items;
        fu::str mustBecomeInline = currentFn_mustBecomeInline_kUdU5Jsy(_current_fn);
        const int N = (items.size() + FN_ARGS_BACK);
        int min = 0;
        int max = 0;
        const s_NativeHacks NativeHacks = (isNative ? NativeHacks_aylVahSQ(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).name) : s_NativeHacks{});
        int numArgsWritten = 0;
        const bool relaxMutValArgs = (maybeLast ? !mustBecomeInline : false);
        fu::vec<int> argPos_1b {};
        for (int i = 0; i < N; i++)
        {
            const s_SolvedNode& argNode = items[i];
            const s_Target& argTarget = argNode.target;
            if (!(!argTarget))
            {
                grow_if_oob_yq7gHTQs(argPos_1b, int(unsigned((argTarget._packed & 0xfffffull)))) = (i + 1);
                if (relaxMutValArgs)
                {
                    s_Overload& o = GET_mut_j8q0a60a(argTarget, ss, module);
                    if (isMutVal_x3AUdppB(o))
                        keepOrClearMutVal_LgzZOTwd(o, (is_mutref_hoadAQC0(o.type, _here, ctx) || s_SolverStatus((o.status & s_SolverStatus_SS_MOVED_FROM))), ss, _helpers, _here, ctx, module);

                };
            };
        };
        fu::vec<s_Argument> args {};
        for (int i_1 = 0; i_1 < N; i_1++)
        {
            const s_SolvedNode& argNode = items[i_1];
            if (!(argNode.kind == s_kind_letdef))
            {
                if (argNode.target)
                    BUG_zwQElfxV(x7E_gCeFmDFw("Argnode is not letdef, but has a target: "_fu, str_sdDZgf4z(GET_oTYbwQb8(argNode.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

            };
            const s_SolvedNode& argNode_1 = ((argNode.kind == s_kind_letdef) ? GET_oTYbwQb8(argNode.target, ss, _helpers, _here, ctx, module).solved : argNode);
            if ((argNode_1.kind == s_kind_let) || (argNode_1.kind == s_kind_empty))
            {
                /*MOV*/ fu::str name { argNode_1.value };
                /*MOV*/ fu::str autocall = ((argNode_1.flags & s_Flags_F_COMPOUND_ID) ? CompoundArgID_outerSplice_r06biR2l(name, ss, _helpers, _here, ctx, module) : fu::str{});
                const bool isImplicit = !!(argNode_1.flags & s_Flags_F_IMPLICIT);
                const bool isInjected = !!(argNode_1.flags & s_Flags_F_INJECTED);
                const s_Target& argTarget = argNode_1.target;
                const bool written_via = ((!isUnspec && is_mutref_hoadAQC0(argNode_1.type, _here, ctx)) ? (isNative || has_QTGTghRU(_current_fn.postdom.snap.ever_written, int(unsigned((argTarget._packed & 0xfffffull))))) : false);
                s_BitSet soft_risk {};
                s_BitSet hard_risk {};
                if (written_via)
                {
                    numArgsWritten++;
                    if (isNative)
                    {
                        add_range_y5kfkU4t(soft_risk, N);
                        rem_U5p6nLOf(soft_risk, i_1);
                        if (!NativeHacks.soft_risk)
                            hard_risk = soft_risk;

                    }
                    else
                    {
                        ArgsAtRisk_list_l52L6cJp(soft_risk, _current_fn.flow.at_soft_risk, argPos_1b, argTarget);
                        ArgsAtRisk_list_l52L6cJp(hard_risk, _current_fn.flow.at_hard_risk, argPos_1b, argTarget);
                        if (TODO_FIX_isArray_40rRB6L8(argNode_1.type))
                        {
                            s_BitSet soft { soft_risk };
                            and_not_assign_Brhxxkwh(soft, hard_risk);
                            each_BQ9GheD7(soft, items, hard_risk, ss, _helpers, _here, ctx, module);
                        };
                    };
                };
                if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE)) && written_via)
                {
                    fu::str _0 {};
                    fu::str _1 {};
                    (_1 = (_0 = (x7E_gCeFmDFw(x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not pure, writes to "_fu), str_sdDZgf4z(GET_oTYbwQb8(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ":\n"_fu), (static_cast<fu::str&&>(_0) + qSTACK_XVvwRcb5(target, _current_fn.out, int(unsigned((argTarget._packed & 0xfffffull))), fu::view<s_Target>{}, s_ArgQuery{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_wxP4avWH(static_cast<fu::str&&>(_1), "pure"_fu, ss, _helpers, _here, ctx, module));
                }
                else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_CTX)) && isImplicit && written_via)
                {
                    fu::str _2 {};
                    fu::str _3 {};
                    (_3 = (_2 = (x7E_gCeFmDFw(x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not purectx, writes to "_fu), str_sdDZgf4z(GET_oTYbwQb8(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ":\n"_fu), (static_cast<fu::str&&>(_2) + qSTACK_XVvwRcb5(target, _current_fn.out, int(unsigned((argTarget._packed & 0xfffffull))), fu::view<s_Target>{}, s_ArgQuery{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_wxP4avWH(static_cast<fu::str&&>(_3), "purectx"_fu, ss, _helpers, _here, ctx, module));
                }
                else if (maybeLast && s_DeclAsserts((asserts & s_DeclAsserts_A_NOVEC)) && !isNoVec_2wSlaUDF(argNode_1.type, _here, ctx, module) && !mustBecomeInline)
                {
                    fu::str _4 {};
                    fu::str _5 {};
                    (_5 = (_4 = (((x7E_gCeFmDFw(x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not novec, "_fu), str_sdDZgf4z(GET_oTYbwQb8(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " is "_fu) + humanizeType_kB3Te7GK(argNode_1.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + ":\n"_fu), (static_cast<fu::str&&>(_4) + qSTACK_XVvwRcb5(target, _current_fn.out, int(unsigned((argTarget._packed & 0xfffffull))), fu::view<s_Target>{}, s_ArgQuery_AQ_WhyNotNovec, ss, _current_fn, _helpers, _here, ctx, module))), fail_wxP4avWH(static_cast<fu::str&&>(_5), "novec"_fu, ss, _helpers, _here, ctx, module));
                }
                else
                {
                    const bool cow_inside = some_mHSEiOwD(_current_fn.events.cows_inside, argTarget);
                    if (has_QTGTghRU(soft_risk, i_1))
                        BUG_zwQElfxV((x7E_gCeFmDFw("updateScope: "_fu, str_sdDZgf4z(GET_oTYbwQb8(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " soft_risk lists self"_fu), ss, _helpers, _here, ctx, module);
                    else if (has_QTGTghRU(hard_risk, i_1))
                        BUG_zwQElfxV((x7E_gCeFmDFw("updateScope: "_fu, str_sdDZgf4z(GET_oTYbwQb8(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " hard_risk lists self"_fu), ss, _helpers, _here, ctx, module);

                    /*MOV*/ s_BitSet may_alias = negated_zHKqtB3x(hard_risk, N);
                    /*MOV*/ s_BitSet may_invalidate = negated_zHKqtB3x(soft_risk, N);
                    if (popcount_5BwgL1Pz(may_alias) > N)
                        BUG_zwQElfxV((x7E_gCeFmDFw("updateScope: "_fu, str_sdDZgf4z(GET_oTYbwQb8(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " may_alias.popcount > N"_fu), ss, _helpers, _here, ctx, module);
                    else if (popcount_5BwgL1Pz(may_invalidate) > N)
                        BUG_zwQElfxV((x7E_gCeFmDFw("updateScope: "_fu, str_sdDZgf4z(GET_oTYbwQb8(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " may_invalidate.popcount > N"_fu), ss, _helpers, _here, ctx, module);

                    /*MOV*/ s_Argument arg = s_Argument { static_cast<fu::str&&>(name), static_cast<fu::str&&>(autocall), s_Type(argNode_1.type), s_SolvedNode(((!isImplicit && argNode_1.items) ? argNode_1.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), ((argNode_1.flags | (written_via ? s_Flags_F_WRITTEN_TO : s_Flags{})) | (cow_inside ? s_Flags_F_COW_INSIDE : s_Flags{})), s_Target(argTarget), static_cast<s_BitSet&&>(may_invalidate), static_cast<s_BitSet&&>(may_alias) };
                    if (arg.type.lifetime && !(arg.flags & s_Flags_F_INJECTED))
                    {
                        if (!(arg.type.lifetime == Lifetime_temporary))
                            BUG_zwQElfxV(x7E_gCeFmDFw("Non-temporary lt on ref arg: "_fu, str_sdDZgf4z(GET_oTYbwQb8(argTarget, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                    }
                    else
                        ref_anonymize_ucOr4Guq(arg.type);

                    if (arg.type || isUnspec)
                    {
                        unsigned BL_29_v {};
                        if (s_VFacts((arg.type.vfacts & s_VFacts((s_VFacts_AlwaysTrue | s_VFacts_AlwaysFalse)))) && (__extension__ (
                        {
                            const s_ValueType& type = arg.type.vtype;
                            BL_29_v = ((type.quals & q_USAGE));
                        (void)0;}), BL_29_v) && !tryParseClosureID_54NQWyOV(arg.name, _here, ctx))
                            BUG_zwQElfxV("updateScope: arg.type is AlwaysTrue/False."_fu, ss, _helpers, _here, ctx, module);

                    }
                    else
                        BUG_zwQElfxV("updateScope: Unexpected untyped argument."_fu, ss, _helpers, _here, ctx, module);

                    if (!isInjected)
                    {
                        if (max != int(0x7fffffffu))
                            max++;

                        if (!arg.dEfault && !isImplicit)
                            min++;

                    };
                    if (arg.flags & s_Flags_F_REST_ARG)
                        max = int(0x7fffffffu);

                    if ((arg.flags & s_Flags_F_VAL) && is_mutref_hoadAQC0(arg.type, _here, ctx))
                        BUG_zwQElfxV("F_VAL but arg.type.is_mutref"_fu, ss, _helpers, _here, ctx, module);
                    else if (isMutRef_QOE2f9pQ(arg.flags) && arg.type && !is_mutref_hoadAQC0(arg.type, _here, ctx))
                        BUG_zwQElfxV("F_MUT|F_REF but !arg.type.is_mutref"_fu, ss, _helpers, _here, ctx, module);

                    args.push(static_cast<s_Argument&&>(arg));
                };
            }
            else
            {
                BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
            };
        };

        {
            s_BitSet returned {};
            if (is_ref_gBx1AgSx(retval))
            {
                TEST_Lifetime_Sl7Nbilp(retval.lifetime, retval, false, false, ss, _helpers, _here, ctx, module);
            };
            retval.lifetime = Lifetime_process_32jyoizi(retval.lifetime, argPos_1b, args, returned, ss, _helpers, _here, ctx, module);
            for (int i_2 = 0; i_2 < args.size(); i_2++)
            {
                if (!(has_QTGTghRU(returned, i_2)))
                {
                    s_Argument& arg = args.mutref(i_2);
                    if (is_ref_gBx1AgSx(arg.type) && willPassByValue_63P7ypUp(arg, _here, ctx))
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
                TEST_Lifetime_Sl7Nbilp(retval.lifetime, retval, false, true, ss, _helpers, _here, ctx, module);
            };
            /*MOV*/ s_Type& retval_1 = retval;

            {
                Lifetime_each_h8zo7qJC(retval_1.lifetime, retval_1, ss, _helpers, _here, ctx, module);
                if (isNative && is_Typename_40rRB6L8(retval_1))
                    BUG_zwQElfxV(("updateScope: native retval.is_Typename: "_fu + humanizeType_kB3Te7GK(retval_1, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

            };
            s_Overload BL_50_v {};
            s_Overload overload = (__extension__ (
            {
                const s_Overload& __partcopy_ref = GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module);
                BL_50_v = (s_Overload { {}, __partcopy_ref.flags, {}, {}, s_Type(__partcopy_ref.type), {} });
            (void)0;}), static_cast<s_Overload&&>(BL_50_v));
            s_Extended& ext = EXT_mut_yu2tvQxN(target, ss, module);
            bool change = false;
            const bool hasCallers = !!EPH_On3tAJ9X(target, ss, module).callers;
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
                        if (!((a.name == b.name) && (ignoreLocalLts_Dxad6CP9(a.type, ss, _helpers, _here, ctx, module) == ignoreLocalLts_Dxad6CP9(b.type, ss, _helpers, _here, ctx, module))))
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
                ext.fx_mask = _current_fn.effects.fx_mask;

            ext.cows_inside = _current_fn.events.cows_inside;
            if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOTHROW)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Throws)))
            {
                fu::str _6 {};
                fu::str _7 {};
                (_7 = (_6 = x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not nothrow, throws here:\n"_fu), (static_cast<fu::str&&>(_6) + qSTACK_2m0mr1nY(target, _current_fn.out, s_FxMask_Fx_Throws, fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Szrpd5G6(static_cast<fu::str&&>(_7), ss, _helpers, _here, ctx, module));
            }
            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOCRASH)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Crashes)))
            {
                fu::str _8 {};
                fu::str _9 {};
                (_9 = (_8 = x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not nocrash, can crash here:\n"_fu), (static_cast<fu::str&&>(_8) + qSTACK_2m0mr1nY(target, _current_fn.out, s_FxMask_Fx_Crashes, fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Szrpd5G6(static_cast<fu::str&&>(_9), ss, _helpers, _here, ctx, module));
            }
            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOIO)) && s_FxMask((ext.fx_mask & s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)))))
            {
                fu::str _10 {};
                fu::str _11 {};
                (_11 = (_10 = x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not noio, performs I/O here:\n"_fu), (static_cast<fu::str&&>(_10) + qSTACK_2m0mr1nY(target, _current_fn.out, s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_Output)), fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Szrpd5G6(static_cast<fu::str&&>(_11), ss, _helpers, _here, ctx, module));
            }
            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_PURE_FX)) && s_FxMask((ext.fx_mask & s_FxMask_Fx_Output)))
            {
                fu::str _12 {};
                fu::str _13 {};
                (_13 = (_12 = x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not purefx, outputs here:\n"_fu), (static_cast<fu::str&&>(_12) + qSTACK_2m0mr1nY(target, _current_fn.out, s_FxMask_Fx_Output, fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))), fail_Szrpd5G6(static_cast<fu::str&&>(_13), ss, _helpers, _here, ctx, module));
            }
            else if (s_DeclAsserts((asserts & s_DeclAsserts_A_NOFLOW)) && _current_fn.far_jumps)
                fail_Szrpd5G6((x7E_gCeFmDFw(x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not noflow: contains non-local control flow, jumping out to "_fu), str_sdDZgf4z(GET_oTYbwQb8(localfn_6C2dSDn6(first_8o6rzxnH(_current_fn.far_jumps), module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + "."_fu), ss, _helpers, _here, ctx, module);
            else
            {
                if (maybeLast && !mustBecomeInline)
                {
                    if (!(numArgsWritten || ext.fx_mask || !is_void_FfV8Zuj5(retval_1) || (overload.flags & s_Flags_F_LAX) || some_LzKAMckU(args)))
                    {
                        const s_TokenIdx& token = _current_fn.out.token;
                        int BL_66_v {};
                        s_Warning& a = grow_if_oob_fnaTFAcU(ss._warnings, (__extension__ (
                        {
                            const s_Target& t = _current_fn.out.target;
                            BL_66_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                        (void)0;}), BL_66_v));
                        if (!(a))
                        {
                            a = s_Warning { s_TokenIdx(token), fail_appendStack_6w3qOeIN((((x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " does nothing: returns void and has no effects."_fu) + " Make it "_fu) + qKW_3PsDzMvu("lax"_fu)) + " if this is intentional."_fu), ss, _helpers, _here, ctx, module) };
                        };
                    };
                };
                s_Overload& overload_1 = GET_mut_j8q0a60a(target, ss, module);
                overload_1.type = static_cast<s_Type&&>(retval_1);
                overload_1.flags = _current_fn.out.flags;
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
                const s_SolvedNode& solved = (!isUnspec ? _current_fn.out : (*(const s_SolvedNode*)fu::NIL));
                if (hasCallers)
                {
                    if (!change && (kind == s_kind_inline))
                        change = astChange_j7TL76Cv(overload_1.solved, solved);

                    if (change)
                        overload_1.status |= s_SolverStatus_SS_UPDATED;

                };
                overload_1.solved = solved;
                s_Ephemeral& eph = EPH_mut_pSZyFPKm(target, ss, module);
                eph.far_jumps = _current_fn.far_jumps;
                eph.rev_spec.prototype = steal_4yOrAYAG(_current_fn.rev_spec_proto);
            };
        }
        else
            BUG_zwQElfxV("updateScope: no return type."_fu, ss, _helpers, _here, ctx, module);

    }
    else
        BUG_zwQElfxV("doUpdateScope: target mismatch"_fu, ss, _helpers, _here, ctx, module);

}

inline static fu::str mangleArgTypes_Hjof3PC2(fu::view<s_Argument> args)
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
                mangle += serializeType_Eouw2usb(argType.vtype, "mangle[$T]"_fu);

        };
    };
    return /*NRVO*/ mangle;
}

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

static bool compare_u7aSYYQy(const s_SolvedNode& a, const s_SolvedNode& b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Overload& a_1 = GET_oTYbwQb8(a.target, ss, _helpers, _here, ctx, module);
    const s_Overload& b_1 = GET_oTYbwQb8(b.target, ss, _helpers, _here, ctx, module);
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
                BL_5_v = (int(unsigned((t._packed & 0xfffffull))));
            (void)0;}), BL_5_v) - (__extension__ (
            {
                const s_Target& t = bcid.target;
                BL_6_v = (int(unsigned((t._packed & 0xfffffull))));
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

static void sort_EjPya7Yc(fu::view_mut<s_SolvedNode> a, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    s_SolvedNode l {};
    s_SolvedNode r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = compare_u7aSYYQy(l, r, ss, _helpers, _here, ctx, module);
    return lt;
            });

}

                                #ifndef DEF_sort_BXQ7GtLCgpd
                                #define DEF_sort_BXQ7GtLCgpd
inline void sort_BXQ7GtLC(fu::view_mut<s_SolvedNode> a, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    sort_EjPya7Yc(a, ss, _helpers, _here, ctx, module);
}
                                #endif

static void sortInjectedArguments_f2hHZDf2(const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view_mut<s_SolvedNode> args = fu::get_view_start0_mut(_current_fn.out.items, (_current_fn.out.items.size() + FN_ARGS_BACK));
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg = args[i];
        if (arg.target && (GET_oTYbwQb8(arg.target, ss, _helpers, _here, ctx, module).flags & s_Flags_F_INJECTED))
        {
            fu::view_mut<s_SolvedNode> _0 {};
            (_0 = fu::get_view_mut(args, i), sort_BXQ7GtLC(static_cast<fu::view_mut<s_SolvedNode>&&>(_0), ss, _helpers, _here, ctx, module));
            return;
        };
    };
}

static void mcom_FnReturn_CopyOrMoveDecision_is4ppL5R(const s_Helpers& h, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Type& retval = (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual;
    if (!(!is_ref_gBx1AgSx(retval)))
    {
        /*MOV*/ s_Lifetime unwound = Lifetime_unwind_rpRStrev(retval.lifetime, 0, false, ss, _helpers, _here, ctx, module);

        {
            fu::view<char> chars = unwound.uni0n;
            int offset = 0;
            while (offset < chars.size())
            {
                const unsigned r = parse7bit(chars, offset);
                for (; ; )
                {
                    bool isLastPath = false;
                    bool isFirstSubRegion = true;
                    for (; ; )
                    {
                        const unsigned raw_flatOffset = parse7bit(chars, offset);
                        const bool isLastSubRegion = !(raw_flatOffset & 1u);
                        const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                        isLastPath = !(raw_flatCount & 1u);
                        if (isLastSubRegion)
                            break;
                        else
                            isFirstSubRegion = false;

                    };
                    if (isLastPath)
                        break;

                };
                const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
                const bool isStatic = (r == 0u);
                const bool isTemp = (r == 1u);
                const s_Overload& o = (locid ? GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module) : (*(const s_Overload*)fu::NIL));
                const bool isRefArg = (isArg_GtNDTeV7(o) ? !isMutVal_x3AUdppB(o) : false);
                if (!isRefArg && !isStatic)
                {
                    if (locid || isTemp)
                    {
                        reportReturnType_FjwYL6rK(h, clear_refs_40rRB6L8(s_Type((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual)), false, ss, _helpers, _here, ctx, module);
                        return;
                    }
                    else
                        BUG_zwQElfxV("mcom_FnReturn_CopyOrMoveDecision: !locid && !isStatic && !isTemp."_fu, ss, _helpers, _here, ctx, module);

                };
            };
        };
        (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual.lifetime = static_cast<s_Lifetime&&>(unwound);
    };
}

static s_SolvedNode solveBlock_OdZn4fK7(const s_Node& node, const s_Type& type, const int fnbody_of, const s_HelpersMask mask, const fu::str& id, const int locals_start, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    fu::vec<s_Node> nodes = ((node.kind == s_kind_block) ? fu::vec<s_Node>(node.items) : fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(node) } });
    const fu::str& id_1 = (id ? id : ((node.kind == s_kind_block) ? node.value : (*(const fu::str*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
    fu_DEFER(if (!s_HelpersMask((mask & s_HelpersMask_HM_LoopPreheader)))
        Scope_pop_5cTQENbb(ss._scope, scope0, _helpers););
    const int helpers_idx = _helpers.size();
    int BL_2_v {};
    push_wE9ESfT8(s_HelpersData { (fnbody_of ? localfn_6C2dSDn6(fnbody_of, module) : s_Target{}), s_SolverPass{}, fu::str(id_1), mask, (fnbody_of ? fnbody_of : (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_2_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_2_v)), (fnbody_of ? +1 : (locals_start ? locals_start : GET_next_local_index_3KGaHIS6(ss, _current_fn, _helpers, _here, ctx, module))), s_Type(type), s_Type{}, fu::vec<s_Type>{}, s_Postdom{}, s_Postdom{}, s_EventsSnap{}, s_Helpers{} }, ss, _helpers);
    const s_Helpers h { _helpers[helpers_idx] };
    if (fnbody_of && nodes)
    {
        const s_kind k = last_a6qr8qgs(nodes).kind;
        if (k == s_kind_unwrap)
            _current_fn.TODO_FIX_isInline = true;
        else
        {
            last_4PVbatPg(nodes) = s_Node { s_kind_return, s_DeclAsserts{}, s_ParseSyntax{}, (((node.kind == s_kind_block) ? s_Flags_F_IMPLICIT : s_Flags{}) | s_Flags_F_LAMBDA), fu::str{}, ((last_a6qr8qgs(nodes).kind != s_kind_empty) ? fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(last_a6qr8qgs(nodes)) } } : fu::vec<s_Node>{}), s_TokenIdx(last_a6qr8qgs(nodes).token) };
        };
    };
    /*MOV*/ fu::vec<s_SolvedNode> items = solveNodes_11fGwhsU(nodes, s_DeadBreak_DeadBreak_Always, t_void, type, !is_void_FfV8Zuj5(type), s_StaticEval{}, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (!fnbody_of)
    {
        (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_expect = s_Type{};
    };

    {
        const s_Type& tail = (items ? last_GN4mikiy(items).type : t_void);
        if (!is_never_FfV8Zuj5(tail))
            reportReturnType_FjwYL6rK(h, (items ? last_GN4mikiy(items).type : t_void), false, ss, _helpers, _here, ctx, module);
        else if (!(((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual)
            (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual = s_Type(t_never);

    };
    if ((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual)
    {
        const s_Type* _0;
        /*MOV*/ s_SolvedNode block = createBlock_4vpZBLng((*(_0 = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual)) ? *_0 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module)), static_cast<fu::vec<s_SolvedNode>&&>(items), h, _here);
        if (fnbody_of)
        { {
            const s_SolverStatus status = GET_oTYbwQb8(localfn_6C2dSDn6(fnbody_of, module), ss, _helpers, _here, ctx, module).status;
            if (!s_SolverStatus((status & s_SolverStatus_SS_DIRTY)))
            {
                sortInjectedArguments_f2hHZDf2(ss, _current_fn, _helpers, _here, ctx, module);
                if (currentFn_mustBecomeInline_kUdU5Jsy(_current_fn))
                {
                    mcom_FnReturn_CopyOrMoveDecision_is4ppL5R(h, ss, _helpers, _here, ctx, module);
                    goto BL_11;
                }
                else
                {

                    {
                        const s_Target target = localfn_6C2dSDn6(fnbody_of, module);
                        const fu::vec<s_Overload>& locals = EXT_x9dYoBLb(target, ss, ctx, module).locals;
                        /*MOV*/ s_SolvedNode solved { _current_fn.out };
                        last_Iovd0TM6(solved.items) = s_SolvedNode(block);
                        _current_fn.rev_spec_proto = s_RevSpecPrototype { static_cast<s_SolvedNode&&>(solved), fu::vec<s_Overload>(locals) };
                    };
                    runAllPasses_5MvXZq77(block, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
            };
          } BL_11:;
        };
        return /*NRVO*/ block;
    }
    else
        BUG_zwQElfxV("No ret_actual"_fu, ss, _helpers, _here, ctx, module);

}

static void lazySolveEnd_rlWxz9m0(const s_Target& t, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_Overload& o = GET_mut_j8q0a60a(t, ss, module);
    fu::vec<int> reopen {};
    const int parent = EPH_On3tAJ9X(t, ss, module).local_of;
    if (o.status & s_SolverStatus_SS_UPDATED)
    {
        o.status &= s_SolverStatus(~s_SolverStatus_SS_UPDATED);
        fu::vec<int> callers { EPH_mut_pSZyFPKm(t, ss, module).callers };
        for (int i = 0; i < callers.size(); i++)
        { {
            int index = callers[i];
            for (; ; )
            {
                const s_Target t_1 = localfn_6C2dSDn6(index, module);
                s_Overload& o_1 = GET_mut_j8q0a60a(t_1, ss, module);
                if (s_SolverStatus((o_1.status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)))) != s_SolverStatus_SS_DID_START)
                    goto BL_3;
                else if (!s_SolverStatus((o_1.status & s_SolverStatus_SS_FINALIZED)))
                {
                    o_1.status |= s_SolverStatus_SS_DIRTY;
                    goto BL_3;
                }
                else
                {
                    const int up = EPH_On3tAJ9X(t_1, ss, module).local_of;
                    if (up != parent)
                    {
                        if (up > parent)
                            index = up;
                        else
                            BUG_zwQElfxV("lazySolveEnd: about to climb up the wrong tree."_fu, ss, _helpers, _here, ctx, module);

                    }
                    else
                    {

                        {
                            const s_SolverNotes note = ((o_1.kind == s_kind_type) ? s_SolverNotes_N_TypeReopen : s_SolverNotes_N_FnReopen);
                            const s_SolverState& ss_1 = ss;
                            if (note & options.break_notes)
                                fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
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
    s_Overload& o_1 = GET_mut_j8q0a60a(t, ss, module);
    if (!s_SolverStatus((o_1.status & s_SolverStatus_SS_DIRTY)))
        o_1.status |= s_SolverStatus_SS_FINALIZED;
    else if (o_1.status & s_SolverStatus_SS_FINALIZED)
        BUG_zwQElfxV("Stray SS_FINALIZED."_fu, ss, _helpers, _here, ctx, module);
    else
    {
        o_1.status &= s_SolverStatus(~s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)));
        const s_SolverNotes note = ((o_1.kind == s_kind_type) ? s_SolverNotes_N_TypeResolve : s_SolverNotes_N_FnResolve);
        const s_SolverState& ss_1 = ss;
        if (note & options.break_notes)
            fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
        else
            _notes |= note;

    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t_1 = localfn_6C2dSDn6(reopen[i], module);
        lazySolveStart_O723BPnd(t_1, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    };
}

static s_Target doTrySpecialize_BRnzkzgy(const int parent_idx, const s_Target& into, const s_Target& overloadIdx, fu::view<s_SolvedNode> args_in, const fu::str& mangle, const s_Reorder& reorder, fu::view<fu::vec<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Target SPECFAIL_RentrySafety = s_Target { 0x8000000000000000ull };
    const s_Target& original = (overloadIdx ? overloadIdx : into ? into : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
    s_Template tEmplate { EXT_x9dYoBLb(original, ss, ctx, module).tEmplate };
    const s_TokenIdx here0 { _here };
    _here = EXT_x9dYoBLb(original, ss, ctx, module).tEmplate.node.token;
    fu_DEFER(_here = here0);
    const int solver_safety0 = ss._solver_safety++;
    if ((solver_safety0 >= 128))
        fail_Szrpd5G6(("Solver stack got too deep, was about to start working on "_fu + qID_3PsDzMvu(tEmplate.node.value)), ss, _helpers, _here, ctx, module);
    else
    {
        fu_DEFER(ss._solver_safety = solver_safety0);
        fu::vec<fu::str> mangles {};
        s_Target currentSpec { SPECFAIL_RentrySafety };
        fu::view<s_Node> items = tEmplate.node.items;
        const int numArgs = ((tEmplate.node.kind == s_kind_fn) ? (items.size() + FN_ARGS_BACK) : BUG_zwQElfxV("template.node.kind != `fn`"_fu, ss, _helpers, _here, ctx, module));
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
                s_Type& arg = args.mutref(i);
                arg = conversionTailType_kzsICjzv(arg, conversions[i], ss, _helpers, _here, ctx, module);
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
                    const s_Node& argNode = (*(_0 = &(items[i_1])) ? *_0 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
                    const s_Node& annot = argNode.items[LET_TYPE];
                    s_Argument host_arg { EXT_x9dYoBLb(original, ss, ctx, module).args[i_1] };
                    s_SolvedNode inValue_1 { (inValue ? inValue : ((inType = host_arg.dEfault.type), host_arg.dEfault)) };
                    if (couldRetype_3jHLVkop(inValue_1))
                    {
                        if (!pass_retype)
                        {
                            retypeIndices.push(i_1);
                            continue;
                        }
                        else
                        {
                            const s_Type& paramType = ((annot.kind == s_kind_typeparam) ? ref_Yr2SlHAw(ss._typeParams, annot.value).matched : (((annot.kind == s_kind_call) && !annot.items) ? Scope_lookupType_xja9hZcj(annot.value, annot.flags, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : (*(const s_Type*)fu::NIL)));
                            if (paramType)
                            {
                                /*MOV*/ s_Type retype = tryRetyping_1axCq2Iv(inValue_1, paramType, ss, _helpers, _here, ctx, module, options);
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
                    else if (isMutRef_QOE2f9pQ(host_arg.flags) && !is_mutref_hoadAQC0(inType, _here, ctx))
                    {
                        error = (x7E_gCeFmDFw(str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module), " expects a mutref, got "_fu) + humanizeType_kB3Te7GK(inType, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module));
                        break;
                    }
                    else if (argNode.kind == s_kind_let)
                    {
                        if (inType)
                        {
                            ref_anonymize_ucOr4Guq(inType);
                            /*MOV*/ s_Type exactType { host_arg.type };
                            if (exactType && !isAssignableAsArgument_E3uCShzQ(exactType, inType, DONT_match_zeroes, _here, ctx))
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
                                        if (!(is_Typename_40rRB6L8(inType)))
                                            BUG_zwQElfxV(((argName + " not a typename: "_fu) + humanizeType_kB3Te7GK(inType, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                                    }
                                    else
                                        inType = clear_Typename_40rRB6L8(s_Type(inType));

                                    inType.vfacts = (isTypedef ? s_VFacts_Typename : s_VFacts{});
                                    (!argName_typeParam ? argName_typeParam : fail_Szrpd5G6((x7E_gCeFmDFw("Type param name collision with "_fu, str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module)) + "."_fu), ss, _helpers, _here, ctx, module)).matched = s_Type(inType);
                                    argName_typeParam.flags |= s_TypeParamFlags_TP_isArgSpec;
                                    if (isTypedef)
                                        argName_typeParam.flags |= s_TypeParamFlags_TP_isTypenameArgSpec;

                                    if (annot && !exactType)
                                    {
                                        const bool argOk = trySolveTypeParams_fduoUjrB(annot, static_cast<s_Type&&>(inType), errout, false, tEmplate.imports, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                        if (!error && !argOk)
                                        {
                                            error = (((qKW_3PsDzMvu("arg"_fu) + " "_fu) + qID_3PsDzMvu(argName)) + ":"_fu);
                                            if (errout.size() > 1)
                                                for (int i_2 = 1; i_2 < errout.size(); i_2++)
                                                    error += ("\n\t    "_fu + errout[i_2].message);

                                            else
                                                BUG_zwQElfxV("BUG trySolveTypeParams did not provide an explanation."_fu, ss, _helpers, _here, ctx, module);

                                        };
                                        if (error)
                                            break;

                                    };
                                }
                                else
                                    BUG_zwQElfxV("No argName"_fu, ss, _helpers, _here, ctx, module);

                            };
                        };
                    }
                    else
                    {
                        BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
                    };
                };
            };

            {
                const bool allowReplaceNonSpecfails = false;
                int _1 {};
                const int start = ((_1 = (find_KonMQ4KB(mangle, ' ') + 1)) ? _1 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
                fu::str mangle_1 = (fu::slice(mangle, 0, start) + mangleArgTypes_Z4b5cu9l(args));
                if (add_mts1NXJ4(mangles, mangle_1))
                {
                    const s_Target preexisting { get_55pvGtB1(getSpecs_UdSfstkC(parent_idx, ss), mangle_1) };
                    if (preexisting)
                    {
                        rem_3FUJFPIi(mangles, mangle_1);
                        if (!is_SPECFAIL_Dujo5Kxe(currentSpec))
                            destroyOverload_E6DyHeiJ(currentSpec, ss, module);

                        resetSpec_xTyaJ0Gs(preexisting, allowReplaceNonSpecfails, parent_idx, mangles, currentSpec, ss, _helpers, _here, ctx, module);
                        return preexisting;
                    }
                    else
                        setSpec_bqJttnNg(mangle_1, currentSpec, true, false, parent_idx, ss, _helpers, _here, ctx, module);

                };
            };
            if (error)
                return SPECFAIL_RQESMPxD(error, parent_idx, SPECFAIL_RentrySafety, mangles, currentSpec, ss, _helpers, _here, ctx, module);

        };
        if (!into)
        {
            const s_Node* _2;
            const s_Node& body = (*(_2 = &(items[(items.size() + FN_BODY_BACK)])) ? *_2 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
            if (body.kind == s_kind_pattern)
            {
                s_Map_KlcLuPSIt9g undo { ss._typeParams };
                fu::view<s_Node> branches = body.items;
                bool did_match = false;
                for (int i = 0; i < branches.size(); i++)
                {
                    fu::view<s_Node> branch = branches[i].items;
                    /*MOV*/ s_Node n_body { branch[(branch.size() + FN_BODY_BACK)] };
                    if (isNativeBody_JE4gc7uM(n_body))
                        each_z0tJsw21(ss._typeParams);

                    const s_Node& cond = branches[i].items[0];
                    if (cond && !evalTypePattern_jcr0vd81(cond, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
                        ss._typeParams = undo;
                    else
                    {

                        {
                            const s_Node& n_ret = branch[(branch.size() + FN_RET_BACK)];
                            if (n_ret)
                                sig_7j7bdC9C(tEmplate).mutref((sig_7j7bdC9C(tEmplate).size() + FN_RET_BACK)) = s_Node(n_ret);

                            sig_7j7bdC9C(tEmplate).mutref((sig_7j7bdC9C(tEmplate).size() + FN_BODY_BACK)) = static_cast<s_Node&&>((n_body ? n_body : BUG_zwQElfxV("doTrySpec: no case/body."_fu, ss, _helpers, _here, ctx, module)));
                        };
                        did_match = true;
                        break;
                    };
                };
                if (!did_match)
                    return SPECFAIL_RQESMPxD("No body pattern matched."_fu, parent_idx, SPECFAIL_RentrySafety, mangles, currentSpec, ss, _helpers, _here, ctx, module);

            };
            const s_Node& n_body = n_fn_pUsLehMi(tEmplate).items[(n_fn_pUsLehMi(tEmplate).items.size() + FN_BODY_BACK)];
            if (isNativeBody_JE4gc7uM(n_body))
            {
                fu::view_mut<s_Node> argNodes = fu::get_view_start0_mut(n_fn_pUsLehMi(tEmplate).items, (n_fn_pUsLehMi(tEmplate).items.size() + FN_ARGS_BACK));
                for (int i = 0; i < argNodes.size(); i++)
                {
                    s_Node& argNode = argNodes.mutref(i);
                    if (!((argNode.flags & ((s_Flags_F_REF | s_Flags_F_CONST) | s_Flags_F_MUT)) != s_Flags_F_REF))
                    {
                        fu::str argName = ((argNode.flags & s_Flags_F_COMPOUND_ID) ? cleanID_j6ljQymd(argNode.value) : fu::str(argNode.value));
                        const s_Type* _3;
                        const s_Type& matched = (*(_3 = &(get_XmCAq2jw(ss._typeParams, (argName ? argName : BUG_zwQElfxV("No argName"_fu, ss, _helpers, _here, ctx, module))).matched)) ? *_3 : BUG_zwQElfxV("native F_REF arg without a matched type"_fu, ss, _helpers, _here, ctx, module));
                        if (!is_mutref_hoadAQC0(matched, _here, ctx))
                            argNode.flags |= s_Flags_F_CONST;

                    };
                };
                each_gVtI2ReJ(ss._typeParams);
            };
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
                    const s_Target* _4;
                    const s_Ephemeral& eph = EPH_On3tAJ9X((*(_4 = &(EXT_x9dYoBLb(original, ss, ctx, module).spec_of)) ? *_4 : original), ss, module);
                    const s_ScopeMemo start { (eph.scope_memo ? eph.scope_memo : ss._root_scope) };
                    ss._ss = eph.scope_skip;
                    ScopeSkip_push_jMawKC22(ss._ss.items, start.items_len, scope0.items_len, ss, _helpers, _here, ctx, module);
                    ScopeSkip_push_jMawKC22(ss._ss.implicits, start.implicits_len, scope0.implicits_len, ss, _helpers, _here, ctx, module);
                    ScopeSkip_push_jMawKC22(ss._ss.imports, start.imports_len, scope0.imports_len, ss, _helpers, _here, ctx, module);
                    ScopeSkip_push_jMawKC22(ss._ss.privates, start.privates_len, scope0.privates_len, ss, _helpers, _here, ctx, module);
                    ScopeSkip_push_jMawKC22(ss._ss.usings, start.usings_len, scope0.usings_len, ss, _helpers, _here, ctx, module);
                    ScopeSkip_push_jMawKC22(ss._ss.converts, start.converts_len, scope0.converts_len, ss, _helpers, _here, ctx, module);
                    ScopeSkip_push_jMawKC22(ss._ss.helpers, start.helpers_len, scope0.helpers_len, ss, _helpers, _here, ctx, module);
                };
                fu::view<int> imports = tEmplate.imports;
                for (int i = 0; i < imports.size(); i++)
                {
                    Scope_import_0bWDyLig(imports[i], ss, _helpers, _here, ctx, module);
                    if (i == 0)
                        Scope_import_privates_PzLS1s4u(imports[i], ss, _helpers, _here, ctx, module);

                };
            };
            target = (into ? s_Target(into) : Scope_create_j83Ac6jp(ss._scope, s_kind___no_kind_yet, (*(const fu::str*)fu::NIL), (*(const s_Type*)fu::NIL), s_Flags{}, s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_LAZY)), 0, module));
            s_Ephemeral& eph = EPH_mut_pSZyFPKm(target, ss, module);
            eph.local_of = parent_idx;
            s_SpecExtras spec_extras { (into ? EPH_On3tAJ9X(into, ss, module).spec_extras : (EPH_mut_pSZyFPKm(target, ss, module).spec_extras = intoSpecExtras_R2DeLdpo(s_Map_KlcLuPSIt9g(ss._typeParams), ss, _helpers, _here, ctx, module))) };
            const s_Target solvingFnort0 = exchange_jPHBkujO(ss._solvingFnort, s_Target(target));
            const s_Target nestingFnort0 = exchange_jPHBkujO(ss._nestingFnort, s_Target(target));
            fu_DEFER(
            {
                ss._solvingFnort = solvingFnort0;
                ss._nestingFnort = nestingFnort0;
            });

            {
                s_Ephemeral& eph_1 = EPH_mut_pSZyFPKm(target, ss, module);
                const unsigned rev0 = eph_1.revision++;
                if (rev0)
                {
                    if ((rev0 >= 1024u))
                        BUG_zwQElfxV((x7E_gCeFmDFw("Looping forever: "_fu, str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ".revision >= 1024"_fu), ss, _helpers, _here, ctx, module);
                    else
                    {
                        s_Extended& o = EXT_mut_yu2tvQxN(target, ss, module);
                        o.locals.clear();
                        int BL_79_v {};
                        if (ss._warnings.size() > (__extension__ (
                        {
                            const s_Target& t = target;
                            BL_79_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                        (void)0;}), BL_79_v))
                        {
                            int BL_81_v {};
                            ss._warnings.mutref((__extension__ (
                            {
                                const s_Target& t = target;
                                BL_81_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                            (void)0;}), BL_81_v)) = s_Warning{};
                        };
                        fu::vec<s_Target> specs { EPH_On3tAJ9X(target, ss, module).specs.vals };
                        for (int i = 0; i < specs.size(); i++)
                            resetChild_o8DFfjok(s_Target(specs[i]), ss, _helpers, _here, ctx, module);

                    };
                };
            };
            const s_DeclAsserts asserts = tEmplate.node.asserts;
            s_CurrentFn out = s_CurrentFn { solved_8M42guvz(n_fn_pUsLehMi(tEmplate), X_addrofTarget_lBHAvjSd(target), (*(const fu::vec<s_SolvedNode>*)fu::NIL), target, _here), s_ScopeMemo(scope0), asserts, s_Flow{}, fu::vec<int>{}, s_Effects{}, s_Events{}, ((n_fn_pUsLehMi(tEmplate).flags & s_Flags_F_TEMPLATE) ? 1 : 0), s_Usage{}, false, 0, fu::vec<s_Target>{}, 0, s_Postdom{}, fu::vec<fu::vec<int>>{}, 0, s_RevSpecPrototype{}, 0 };
            const s_ScopeMemo root_scope0 { ss._root_scope };
            if (!root_scope0)
                ss._root_scope = scope0;

            std::swap(_current_fn, out);
            fu_DEFER(
            {
                std::swap(_current_fn, out);
                ss._root_scope = root_scope0;
            });
            fu::view<s_Node> inItems = n_fn_pUsLehMi(tEmplate).items;
            outItems_2O38m2uX(_current_fn).resize(inItems.size());
            ss._scope.items += spec_extras.scope_items;
            const bool isFirst = (!into || !GET_oTYbwQb8(into, ss, _helpers, _here, ctx, module).solved);
            const s_Flags isTemplate = (tEmplate.node.flags & s_Flags_F_TEMPLATE);
            const bool isSpec = (isTemplate ? (!into || !isFirst) : false);
            const bool isUnspec = (isTemplate ? !isSpec : false);
            for (int i = 0; i < (inItems.size() + FN_ARGS_BACK); i++)
            {
                const s_Node& n_arg = inItems[i];
                _here = n_arg.token;
                if (isUnspec && ((n_arg.flags & s_Flags_F_TEMPLATE) || !n_arg.items[LET_TYPE]))
                {
                    s_SolvedNode init = (n_arg.items[LET_INIT] ? solveNode_dEyN38Q1(n_arg.items[LET_INIT], (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
                    outItems_2O38m2uX(_current_fn).mutref(i) = SolvedNode_wUIpeYIY(s_kind_let, s_Type{}, n_arg.flags, n_arg.value, fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, s_Helpers{}, _here);
                }
                else
                {
                    const s_Type& specType = (isSpec ? get_OJ3gYwrz(spec_extras.arg_spec_types, ((n_arg.flags & s_Flags_F_COMPOUND_ID) ? cleanID_j6ljQymd(n_arg.value) : fu::str(n_arg.value))) : (*(const s_Type*)fu::NIL));
                    /*MOV*/ s_SolvedNode arg = solveLet_45O7r6fI(n_arg, true, (*(const s_Type*)fu::NIL), specType, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    outItems_2O38m2uX(_current_fn).mutref(i) = static_cast<s_SolvedNode&&>(arg);
                };
            };
            const s_Node& n_ret = (!isUnspec ? inItems[(inItems.size() + FN_RET_BACK)] : (*(const s_Node*)fu::NIL));
            const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
            if (n_body)
            {
                const bool isNative = isNativeBody_JE4gc7uM(n_body);
                s_Type ret_expect = (n_ret ? evalTypeAnnot_OIK0vUDc(n_ret, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_Type{});
                /*MOV*/ s_Type ret_seed { (n_ret ? (ret_expect ? ret_expect : BUG_zwQElfxV(("falsy ret_expect: "_fu + n_fn_pUsLehMi(tEmplate).value), ss, _helpers, _here, ctx, module)) : t_AssumeNever_WhileSolvingRecursion) };
                if (ret_seed.lifetime)
                {
                    ret_seed.lifetime = (isNative ? Lifetime_fromNative_4ahma87i(inItems, fu::get_view_start0(_current_fn.out.items, (_current_fn.out.items.size() + FN_ARGS_BACK)), ret_seed, ss, _helpers, _here, ctx, module) : s_Lifetime(Lifetime_static));
                }
                else if (isNative)
                {
                    for (int i_1 = 0; i_1 < (inItems.size() + FN_ARGS_BACK); i_1++)
                    {
                        const s_Node& arg = inItems[i_1];
                        if ((arg.flags & s_Flags_F_REF) && !(arg.flags & (s_Flags_F_MUT | s_Flags_F_CONST)))
                        {
                            fail_ZlZZ6QYq(((((((((qKW_3PsDzMvu("ref"_fu) + " arguments to "_fu) + qKW_3PsDzMvu("__native"_fu)) + " fns must either be ref-returned"_fu) + " or explicitly specified "_fu) + qKW_3PsDzMvu("mut"_fu)) + " or "_fu) + qKW_3PsDzMvu("const"_fu)) + "."_fu), arg.token, ss, _helpers, _here, ctx, module);
                        };
                    };
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
                                s_FxMask _5 {};
                                fx_mask |= ((item == "|output"_fu) ? EFFECTS_output : ((_5 = parse_Nu5dfeQx(fu::get_view(item, 1))) ? _5 : BUG_zwQElfxV(("Invalid |Fx mask: "_fu + qBAD_3PsDzMvu(item)), ss, _helpers, _here, ctx, module)));
                            }
                            else
                                name += ("\n"_fu + item);

                        };
                    };
                    if (!(name))
                    {
                        const fu::str* _6;
                        name = (*(_6 = &(n_fn_pUsLehMi(tEmplate).value)) ? *_6 : BUG_zwQElfxV("TODO anonymous fns"_fu, ss, _helpers, _here, ctx, module));
                    };
                    s_Overload& overload = GET_mut_j8q0a60a(target, ss, module);
                    overload.name = static_cast<fu::str&&>(name);
                    s_Extended& ext = EXT_mut_yu2tvQxN(target, ss, module);
                    ext.tEmplate = tEmplate;
                    ext.spec_of = overloadIdx;
                    ext.fx_mask = fx_mask;
                    /*MOV*/ s_Type& retval = ret_seed;
                    const bool maybeLast = (isNative ? !isUnspec : false);
                    const s_TokenIdx* _7;
                    _here = (*(_7 = &(n_fn_pUsLehMi(tEmplate).token)) ? *_7 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
                    if (GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_DIRTY)
                        GET_mut_j8q0a60a(target, ss, module).status |= s_SolverStatus_SS_UPDATED;
                    else
                    {
                        doUpdateScope_KArjMmkp(static_cast<s_Type&&>(retval), target, maybeLast, isNative, isUnspec, asserts, ss, _current_fn, _helpers, _here, ctx, module);
                        if (!into)
                        {

                            {
                                fu::view<s_Argument> args = EXT_x9dYoBLb(target, ss, ctx, module).args;
                                int _8 {};
                                const int start = ((_8 = (find_KonMQ4KB(mangle, ' ') + 1)) ? _8 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
                                fu::str mangle_1 = (fu::slice(mangle, 0, start) + mangleArgTypes_Hjof3PC2(args));
                                if (add_mts1NXJ4(mangles, mangle_1))
                                {
                                    const s_Target preexisting { get_55pvGtB1(getSpecs_UdSfstkC(parent_idx, ss), mangle_1) };
                                    if (preexisting)
                                    {
                                        rem_3FUJFPIi(mangles, mangle_1);
                                        if (!is_SPECFAIL_Dujo5Kxe(currentSpec))
                                            destroyOverload_E6DyHeiJ(currentSpec, ss, module);

                                        resetSpec_xTyaJ0Gs(preexisting, maybeLast, parent_idx, mangles, currentSpec, ss, _helpers, _here, ctx, module);
                                        return preexisting;
                                    }
                                    else
                                        setSpec_bqJttnNg(mangle_1, currentSpec, true, false, parent_idx, ss, _helpers, _here, ctx, module);

                                };
                            };
                            resetSpec_xTyaJ0Gs(target, false, parent_idx, mangles, currentSpec, ss, _helpers, _here, ctx, module);
                        };
                    };
                };
                bool didSetBody = false;
                if (!isUnspec && !isNative)
                {
                    if (isFirst)
                    {
                        s_Extended& ext = EXT_mut_yu2tvQxN(target, ss, module);
                        for (int i_1 = 0; i_1 < ext.args.size(); i_1++)
                            force_relax_p4VopRXr(ext.args.mutref(i_1).type, (RELAX_all & ~q_USAGE));

                        ext.fx_mask |= s_FxMask((s_FxMask_Fx_NotDeadCode | s_FxMask_Fx_Throws));
                    };

                    {
                        int BL_116_v {};
                        const int self = (__extension__ (
                        {
                            const s_Target& t = target;
                            BL_116_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                        (void)0;}), BL_116_v);
                        fu::vec<int> calls = steal_lZF84WJG(EPH_mut_pSZyFPKm(target, ss, module).calls);
                        for (int i_1 = 0; i_1 < calls.size(); i_1++)
                        {
                            const s_Target call = localfn_6C2dSDn6(calls[i_1], module);
                            if (!(rem_jzOp5jol(EPH_mut_pSZyFPKm(call, ss, module).callers, self)))
                                BUG_zwQElfxV(x7E_gCeFmDFw((x7E_gCeFmDFw("doTrySpec: "_fu, str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " not listed as a caller of "_fu), str_sdDZgf4z(GET_oTYbwQb8(call, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                        };
                    };
                    const s_SolverStatus status = (GET_mut_j8q0a60a(target, ss, module).status &= s_SolverStatus(~s_SolverStatus_SS_Debug_AllPassesComplete));
                    if (s_SolverStatus((status & s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_DIRTY | s_SolverStatus_SS_FINALIZED)) | s_SolverStatus_SS_DID_START)))) != s_SolverStatus_SS_DID_START)
                        BUG_zwQElfxV(x7E_gCeFmDFw(x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " is not SS_DID_START just before solve: "_fu), str_wO7dLc1g(status)), ss, _helpers, _here, ctx, module);
                    else
                    {
                        _current_fn.TODO_FIX_isInline = !!(tEmplate.node.flags & s_Flags_F_INLINE);
                        /*MOV*/ s_SolvedNode s_body {};
                        int BL_122_v {};
                        s_body = solveBlock_OdZn4fK7(n_body, ret_expect, (__extension__ (
                        {
                            const s_Target& t = target;
                            BL_122_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                        (void)0;}), BL_122_v), s_HelpersMask((s_HelpersMask((s_HelpersMask((s_HelpersMask_HM_Function | s_HelpersMask_HM_CanReturn)) | s_HelpersMask_HM_LabelUsed)) | ((n_fn_pUsLehMi(tEmplate).flags & s_Flags_F_LAMBDA) ? s_HelpersMask_HM_Lambda : s_HelpersMask{}))), n_fn_pUsLehMi(tEmplate).value, 0, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                        const s_HelpersData* BL_123_v;
                        const s_Type* _9;
                        const s_Type& retval = (*(_9 = &((__extension__ (
                        {
                            const s_Helpers& h = s_body.helpers;
                            BL_123_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                        (void)0;}), *BL_123_v).ret_actual)) ? *_9 : BUG_zwQElfxV("doTrySpec: no body.ret_actual"_fu, ss, _helpers, _here, ctx, module));
                        const int idx_body = (outItems_2O38m2uX(_current_fn).size() + FN_BODY_BACK);
                        outItems_2O38m2uX(_current_fn).mutref(idx_body) = static_cast<s_SolvedNode&&>((s_body ? s_body : BUG_zwQElfxV("falsy body"_fu, ss, _helpers, _here, ctx, module)));
                        didSetBody = true;
                        const s_Type& retval_1 = retval;
                        const bool maybeLast = true;
                        const s_TokenIdx* _10;
                        _here = (*(_10 = &(n_fn_pUsLehMi(tEmplate).token)) ? *_10 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
                        if (GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_DIRTY)
                            GET_mut_j8q0a60a(target, ss, module).status |= s_SolverStatus_SS_UPDATED;
                        else
                        {
                            doUpdateScope_KArjMmkp(s_Type(retval_1), target, maybeLast, isNative, isUnspec, asserts, ss, _current_fn, _helpers, _here, ctx, module);
                            if (!into)
                            {

                                {
                                    fu::view<s_Argument> args = EXT_x9dYoBLb(target, ss, ctx, module).args;
                                    int _11 {};
                                    const int start = ((_11 = (find_KonMQ4KB(mangle, ' ') + 1)) ? _11 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
                                    fu::str mangle_1 = (fu::slice(mangle, 0, start) + mangleArgTypes_Hjof3PC2(args));
                                    if (add_mts1NXJ4(mangles, mangle_1))
                                    {
                                        const s_Target preexisting { get_55pvGtB1(getSpecs_UdSfstkC(parent_idx, ss), mangle_1) };
                                        if (preexisting)
                                        {
                                            rem_3FUJFPIi(mangles, mangle_1);
                                            if (!is_SPECFAIL_Dujo5Kxe(currentSpec))
                                                destroyOverload_E6DyHeiJ(currentSpec, ss, module);

                                            resetSpec_xTyaJ0Gs(preexisting, maybeLast, parent_idx, mangles, currentSpec, ss, _helpers, _here, ctx, module);
                                            return preexisting;
                                        }
                                        else
                                            setSpec_bqJttnNg(mangle_1, currentSpec, true, false, parent_idx, ss, _helpers, _here, ctx, module);

                                    };
                                };
                                resetSpec_xTyaJ0Gs(target, false, parent_idx, mangles, currentSpec, ss, _helpers, _here, ctx, module);
                            };
                        };
                    };
                };
                if (!didSetBody)
                {
                    const s_Overload& o = GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module);
                    if (!(o.kind != s_kind_fn))
                        BUG_zwQElfxV(((x7E_gCeFmDFw("did not set body on "_fu, str_sdDZgf4z(o, ss, _helpers, _here, ctx, module)) + ": "_fu) + humanizeType_kB3Te7GK(o.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                };
            }
            else
                BUG_zwQElfxV("solveFn: no body."_fu, ss, _helpers, _here, ctx, module);

        };
        lazySolveEnd_rlWxz9m0(target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        return target;
    };
}

static s_Target trySpecialize_Cftkei7L(const s_Target& overloadIdx, fu::view<s_SolvedNode> args, fu::str& args_mangled, const int REST_START, const s_Type& REST_TYPE, const s_Reorder& reorder, fu::view<fu::vec<s_Target>> conversions, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (!(args_mangled))
        args_mangled = mangleArgTypes_bIsM6mTT(args, reorder, conversions, REST_START, REST_TYPE, ss, _helpers, _here, ctx, module);

    int parent_idx = EPH_On3tAJ9X(overloadIdx, ss, module).local_of;
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg_t = args[i];
        if (isAddrOfFn_gBx1AgSx(arg_t.type))
            unpackAddrOfFn_hKyMPG7f(arg_t.type.vtype.canon, parent_idx, ss, module);

    };
    fu::str mangle = ((x7E_gCeFmDFw(x7E_gCeFmDFw(fu::i64dec(int(unsigned(((overloadIdx._packed >> 40ull) & 0xfffffull)))), "#"_fu), fu::i64dec(int(unsigned(((overloadIdx._packed >> 20ull) & 0xfffffull))))) + " "_fu) + args_mangled);
    s_Target _0 {};
    return (_0 = s_Target(get_55pvGtB1(getSpecs_UdSfstkC(parent_idx, ss), mangle))) ? _0 : (_0 = doTrySpecialize_BRnzkzgy(parent_idx, s_Target{}, overloadIdx, args, mangle, reorder, conversions, REST_START, REST_TYPE, ss, _notes, _current_fn, _helpers, _here, ctx, module, options)) ? _0 : BUG_zwQElfxV("doTrySpecialize returns empty target."_fu, ss, _helpers, _here, ctx, module);
}

static bool isDiscardable_43Piwd0W(const s_Target& t, const s_SolverState& ss, const s_Context& ctx, const s_Module& module)
{
    if (EXT_x9dYoBLb(t, ss, ctx, module).fx_mask & s_FxMask_Fx_NotDeadCode)
        return false;
    else
    {
        fu::view<s_Argument> host_args = EXT_x9dYoBLb(t, ss, ctx, module).args;
        for (int i = 0; i < host_args.size(); i++)
        {
            if (host_args[i].flags & s_Flags_F_WRITTEN_TO)
                return false;

        };
        return true;
    };
}

static void discardIntoBlock_y7RsXvXu(s_SolvedNode& node, const s_Type& slot, const unsigned relax_mask, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    node = createBlock_4vpZBLng(slot, fu::vec<s_SolvedNode>(node.items), s_Helpers{}, _here);
    propagateType_pH8jMqgi(node, slot, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
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

static bool type_maybeInside_HP8L2Bym(const s_ValueType& host, const s_ValueType& guest, const uint64_t guest_non_triv_mask, fu::vec<s_StructCanon>& seen, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (host.canon == guest.canon)
        return true;
    else if (is_sliceable_3t4EwFeQ(host))
    {
        s_ValueType host_sliceT = parseType_rxBOPBNl(fu::slice(host.canon, 1, (host.canon.size() - 1)), _here, ctx, module);
        return type_maybeInside_HP8L2Bym(host_sliceT, guest, guest_non_triv_mask, seen, ss, _helpers, _here, ctx, module);
    }
    else
    {
        if (isStruct_jSb6u57z(host))
        {
            const s_StructCanon scp = parseStructCanon_9HOct2P6(host.canon);
            const s_Struct& s = lookupUserType_hlbT3GcY(scp, module, ctx, _here);
            if ((s.shape.non_triv_mask & guest_non_triv_mask) != guest_non_triv_mask)
                return false;
            else if (add_p4YxMLtO(seen, scp))
            {
                for (int i = 0; i < s.items.size(); i++)
                {
                    const s_Target f = target_NWTdzsfF(s.items[i]);
                    if (type_maybeInside_HP8L2Bym(GET_oTYbwQb8(f, ss, _helpers, _here, ctx, module).type.vtype, guest, guest_non_triv_mask, seen, ss, _helpers, _here, ctx, module))
                        return true;

                };
            };
        };
        return false;
    };
}

static bool SLOW_type_maybeInside_5BKnMbk7(const s_ValueType& host, const s_ValueType& guest, const uint64_t guest_non_triv_mask, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::vec<s_StructCanon> seen {};
    return type_maybeInside_HP8L2Bym(host, guest, guest_non_triv_mask, seen, ss, _helpers, _here, ctx, module);
}

static bool type_mayPointInto_8KIT1Gbn(const s_ValueType& host, const s_ValueType& guest, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_reinterpretable_QHDuaMIF(guest, _here, ctx, module))
        return true;
    else
    {
        if (is_sliceable_3t4EwFeQ(guest))
        {
            s_ValueType sliceT = parseType_rxBOPBNl(fu::slice(guest.canon, 1, (guest.canon.size() - 1)), _here, ctx, module);
            if (is_reinterpretable_QHDuaMIF(sliceT, _here, ctx, module))
                return true;

        };
        const uint64_t guest_non_triv_mask = getShape_EA8Wup3K(guest, _here, ctx, module).non_triv_mask;
        if (!guest_non_triv_mask)
            return false;
        else
        {
            const uint64_t host_non_triv_mask = getShape_EA8Wup3K(host, _here, ctx, module).non_triv_mask;
            if ((host_non_triv_mask & guest_non_triv_mask) != guest_non_triv_mask)
                return false;
            else
                return SLOW_type_maybeInside_5BKnMbk7(host, guest, guest_non_triv_mask, ss, _helpers, _here, ctx, module);

        };
    };
}

inline static s_SolvedNode TODO_FIX_pop_IYZ5SpLW(fu::vec<s_SolvedNode>& arr)
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

inline static bool l_30_82_UALq7Bit(const s_COWInside& cow, const s_Argument& host_arg, const s_TokenIdx& cow_inside)
{
    int BL_1_v {};
    if (cow.argTarget == (__extension__ (
    {
        const s_Target& t = host_arg.target;
        BL_1_v = (int(unsigned((t._packed & 0xfffffull))));
    (void)0;}), BL_1_v))
        return cow.token == cow_inside;
    else
        return false;

}

                                #ifndef DEF_some_qeNzAa7iS79
                                #define DEF_some_qeNzAa7iS79
inline bool some_qeNzAa7i(fu::view<s_COWInside> a, const s_Argument& host_arg, const s_TokenIdx& cow_inside)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_COWInside& item = a[i];
        if (l_30_82_UALq7Bit(item, host_arg, cow_inside))
            return true;

    };
    return false;
}
                                #endif

static fu::str qSTACK_cow_inside_3sb4aurF(const s_Target& target, const s_SolvedNode& node, const s_Argument& host_arg, const s_TokenIdx& cow_inside, fu::view<s_Target> seen, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target nestingFnort0 = exchange_jPHBkujO(ss._nestingFnort, s_Target(target));
    fu_DEFER(ss._nestingFnort = nestingFnort0);
    int BL_1_v {};
    const int locid = (__extension__ (
    {
        const s_Target& t = host_arg.target;
        BL_1_v = (int(unsigned((t._packed & 0xfffffull))));
    (void)0;}), BL_1_v);
    fu::str candidates = ""_fu;
    fu::vec<s_Target> seen_1 = (seen + target);

    {
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_IYZ5SpLW(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_oTYbwQb8(node_1.target, ss, _helpers, _here, ctx, module).solved : node_1);
            s_SolvedNode node_3 { ((node_2.kind == s_kind___preceding_ref_arg) ? _current_fn.events.preceding_ref_args[node_2.helpers.index].arg : node_2) };

            {
                const s_CurrentFn& _current_fn_1 = _current_fn;
                if ((node_3.kind == s_kind_copy) && (only_GN4mikiy(node_3.items).token == cow_inside))
                {
                    return (x7E_gCeFmDFw(("\n            "_fu + "in "_fu), str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu) + addr_and_snippet_2bGH8tqt(cow_inside, s_CodeFmt{}, fu::view<char>{}, ctx, module);
                }
                else
                {
                    if (!((node_3.kind != s_kind_call) || !node_3.items))
                    {
                        if (!(has_P9xEJb6w(seen_1, node_3.target)))
                        {
                            fu::view<s_Argument> host_args = EXT_x9dYoBLb(node_3.target, ss, ctx, module).args;
                            for (int i = 0; i < host_args.size(); i++)
                            {
                                s_Argument BL_12_v {};
                                s_Argument host_arg_1 = (__extension__ (
                                {
                                    const s_Argument& __partcopy_ref = host_args[i];
                                    BL_12_v = (s_Argument { {}, {}, {}, {}, __partcopy_ref.flags, s_Target(__partcopy_ref.target), {}, {} });
                                (void)0;}), static_cast<s_Argument&&>(BL_12_v));
                                if ((host_arg_1.flags & s_Flags_F_COW_INSIDE) && some_qeNzAa7i(EXT_x9dYoBLb(node_3.target, ss, ctx, module).cows_inside, host_arg_1, cow_inside) && Lifetime_has_62UtfSbx(Lifetime_unwind_rpRStrev(node_3.items[i].type.lifetime, 0, false, ss, _helpers, _here, ctx, module), locid))
                                {
                                    fu::str peek = qSTACK_cow_inside_3sb4aurF(s_Target(node_3.target), s_SolvedNode(GET_oTYbwQb8(node_3.target, ss, _helpers, _here, ctx, module).solved), host_arg_1, cow_inside, seen_1, ss, _current_fn_1, _helpers, _here, ctx, module);
                                    return (((x7E_gCeFmDFw((x7E_gCeFmDFw(("\n            "_fu + "in "_fu), str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " via "_fu), str_sdDZgf4z(GET_oTYbwQb8(node_3.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu) + addr_and_snippet_2bGH8tqt(node_3.token, s_CodeFmt{}, fu::view<char>{}, ctx, module)) + peek) + candidates;
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

inline static void l_30_33_UHhUdoyL(const s_ValueType& vtype, const s_TokenIdx& token, const s_Target& t, const s_Overload& o, const int parent_locid, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (type_mayPointInto_8KIT1Gbn(vtype, o.type.vtype, ss, _helpers, _here, ctx, module))
    {
        fu::str _0 {};
        fu::str err = (!callee ? "A copy is needed, but "_fu : ((_0 = (x7E_gCeFmDFw(x7E_gCeFmDFw(str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module), " to "_fu), str_sdDZgf4z(GET_oTYbwQb8(callee, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " is indirectly copied from:\n"_fu), (static_cast<fu::str&&>(_0) + qSTACK_cow_inside_3sb4aurF(callee, s_SolvedNode(GET_oTYbwQb8(callee, ss, _helpers, _here, ctx, module).solved), host_arg, token, fu::view<s_Target>{}, ss, _current_fn, _helpers, _here, ctx, module))) + "\n\t... but "_fu));
        err += ("COW will break due to pre-existing mutref: "_fu + explainWhichFn_KACWd7In(t, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn, _helpers, _here, ctx, module));
        err += ("\n\tBoth refer to: "_fu + explainWhichFn_KACWd7In(nested_RctvSJIv(parent_locid, ss, _helpers, _here, ctx, module), fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn, _helpers, _here, ctx, module));
        _here = here;
        fail_Szrpd5G6(err, ss, _helpers, _here, ctx, module);
    };
}

inline static void eachCOWInside_oEQuwGGz(const s_Target& t, const s_Overload& o, const int parent_locid, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (callee)
    {
        fu::vec<s_COWInside> callee_cows { EXT_x9dYoBLb(callee, ss, ctx, module).cows_inside };
        for (int i = 0; i < callee_cows.size(); i++)
        {
            const s_COWInside& callee_cow = callee_cows[i];
            if (!(calleeReturnDiscarded && !callee_cow.mayEscapeVia))
            {
                int BL_5_v {};
                if (callee_cow.argTarget == (__extension__ (
                {
                    const s_Target& t_1 = host_arg.target;
                    BL_5_v = (int(unsigned((t_1._packed & 0xfffffull))));
                (void)0;}), BL_5_v))
                    l_30_33_UHhUdoyL(callee_cow.vtype, s_TokenIdx(callee_cow.token), t, o, parent_locid, here, callee, host_arg, ss, _current_fn, _helpers, _here, ctx, module);

            };
        };
    }
    else
        l_30_33_UHhUdoyL(item.type.vtype, _here, t, o, parent_locid, here, callee, host_arg, ss, _current_fn, _helpers, _here, ctx, module);

}

inline static void l_30_32_5PqiPCV0(const int child, const s_Target& t, const s_Overload& o, const int parent_locid, const s_Lifetime& parent_region, fu::view<int> expected_refs, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(has_wxSKDW5V(expected_refs, child)))
    {
        s_Lifetime inter = Lifetime_inter_lYlULmp8(unless_oob_pcvjJeir(_current_fn.flow.rg_parents, child), parent_region, _here, ctx);
        if (!(!inter))
        {
            if (has_QTGTghRU(_current_fn.postdom.snap.ever_written, child))
                eachCOWInside_oEQuwGGz(t, o, parent_locid, item, here, callee, host_arg, calleeReturnDiscarded, ss, _current_fn, _helpers, _here, ctx, module);

            cannotCOW_descendChildren_m07UqBHD(child, inter, expected_refs, item, here, callee, host_arg, calleeReturnDiscarded, ss, _current_fn, _helpers, _here, ctx, module);
        };
    };
}

inline static void eachLiveChildMutref_ArmJ3dvB(const int index, const int parent_locid, const s_Lifetime& parent_region, fu::view<int> expected_refs, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<int> children = unless_oob_6AZJyJXO(_current_fn.TODO_FIX_children, index);
    for (int i = 0; i < children.size(); i++)
    {
        const int child = children[i];
        const s_Target t = nested_RctvSJIv(child, ss, _helpers, _here, ctx, module);
        const s_Overload& o = GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module);
        if (!(!is_mutref_hoadAQC0(o.solved.type, _here, ctx)))
        {
            if (!(has_QTGTghRU(_current_fn.relaxed.done_relaxing, child)))
                l_30_32_5PqiPCV0(child, t, o, parent_locid, parent_region, expected_refs, item, here, callee, host_arg, calleeReturnDiscarded, ss, _current_fn, _helpers, _here, ctx, module);

        };
    };
}

static void cannotCOW_descendChildren_m07UqBHD(const int parent_locid, const s_Lifetime& parent_region, fu::view<int> expected_refs, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    eachLiveChildMutref_ArmJ3dvB(parent_locid, parent_locid, parent_region, expected_refs, item, here, callee, host_arg, calleeReturnDiscarded, ss, _current_fn, _helpers, _here, ctx, module);
}

static int needsHardRisk_V1DY0eEu(const int index, const s_Overload& o, const s_SolvedNode& item, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    {
        fu::view<int> children = unless_oob_6AZJyJXO(_current_fn.TODO_FIX_children, index);
        for (int i = 0; i < children.size(); i++)
        {
            const int child = children[i];
            const s_Target t = nested_RctvSJIv(child, ss, _helpers, _here, ctx, module);
            const s_Overload& o_1 = GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module);
            if (!(!is_mutref_hoadAQC0(o_1.solved.type, _here, ctx)))
            {
                if (!(has_QTGTghRU(_current_fn.relaxed.done_relaxing, child)))
                {
                    const s_CurrentFn& _current_fn_1 = _current_fn;
                    const int reason = needsHardRisk_V1DY0eEu(child, o, item, callee, host_arg, calleeReturnDiscarded, ss, _current_fn_1, _helpers, _here, ctx, module);
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
            fu::view<s_COWInside> callee_cows = EXT_x9dYoBLb(callee, ss, ctx, module).cows_inside;
            for (int i = 0; i < callee_cows.size(); i++)
            {
                const s_COWInside& callee_cow = callee_cows[i];
                if (!(calleeReturnDiscarded && !callee_cow.mayEscapeVia))
                {
                    int BL_12_v {};
                    if (callee_cow.argTarget == (__extension__ (
                    {
                        const s_Target& t = host_arg.target;
                        BL_12_v = (int(unsigned((t._packed & 0xfffffull))));
                    (void)0;}), BL_12_v))
                    {
                        const s_ValueType& vtype = callee_cow.vtype;
                        const bool uncaughtThrowOnly = ((callee_cow.exitPaths == s_ExitPaths_XP_NoReturn) ? !_current_fn.TODO_FIX_catches : false);
                        if (!(uncaughtThrowOnly))
                        {
                            if (type_mayPointInto_8KIT1Gbn(vtype, o.type.vtype, ss, _helpers, _here, ctx, module))
                                return index;

                        };
                    };
                };
            };
        }
        else
        {
            const s_ValueType& vtype = item.type.vtype;
            if (type_mayPointInto_8KIT1Gbn(vtype, o.type.vtype, ss, _helpers, _here, ctx, module))
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

static bool TODO_FIX_slicesAgain_gOeUvygj(const int t, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return is_sliceable_3t4EwFeQ(GET_oTYbwQb8(nested_RctvSJIv(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module).type.vtype);
}

static void cannotCOW_climbParents_WHLnoTds(const s_Lifetime& lifetime, fu::view<int> expected_refs, const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    // Hoisted:
    int offset0_1;

    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parse7bit(chars, offset);
        int BL_3_v {};
        const int sr = (__extension__ (
        {
            offset0_1 = (offset + 0);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            BL_3_v = (offset0_1);
        (void)0;}), BL_3_v);
        const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
        s_Lifetime region = s_Lifetime { fu::slice(chars, offset0, offset) };
        fu::view<char> paths = fu::get_view(chars, sr, offset);
        if (!(!locid))
        {
            s_Overload BL_12_v {};
            s_Overload o = (__extension__ (
            {
                const s_Overload& __partcopy_ref = GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module);
                BL_12_v = (s_Overload { __partcopy_ref.kind, __partcopy_ref.flags, __partcopy_ref.status, fu::str(__partcopy_ref.name), {}, s_SolvedNode { {}, {}, {}, {}, {}, fu::vec<s_SolvedNode>(__partcopy_ref.solved.items), {}, s_Type(__partcopy_ref.solved.type), s_Target(__partcopy_ref.solved.target) } });
            (void)0;}), static_cast<s_Overload&&>(BL_12_v));
            if (o.kind == s_kind_var)
            {
                cannotCOW_climbParents_WHLnoTds(Lifetime_op_join_dwN33Lug(Lifetime_climbType_426itOgG(o, ss, _helpers, _here, ctx, module).lifetime, paths, _here, ctx), (expected_refs + locid), item, here, callee, host_arg, calleeReturnDiscarded, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                cannotCOW_descendChildren_m07UqBHD(locid, region, expected_refs, item, here, callee, host_arg, calleeReturnDiscarded, ss, _current_fn, _helpers, _here, ctx, module);
                s_Flow& flow = _current_fn.flow;
                if (isArg_GtNDTeV7(o))
                {
                    fu::vec<int> arg_targets { flow.arg_targets };
                    for (int i = 0; i < arg_targets.size(); i++)
                    {
                        const int t = arg_targets[i];
                        if (!(!t || (t == locid)))
                        {
                            const s_Overload& o_1 = GET_oTYbwQb8(nested_RctvSJIv(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module);
                            if (!(!is_mutref_hoadAQC0(o_1.solved.type, _here, ctx)))
                            {
                                if (!(has_QTGTghRU(unless_oob_yoNyPnA3(flow.at_hard_risk, t), locid)))
                                {
                                    const int reason = needsHardRisk_V1DY0eEu(t, o_1, item, callee, host_arg, calleeReturnDiscarded, ss, _current_fn, _helpers, _here, ctx, module);
                                    if (reason)
                                    {

                                        {
                                            const s_SolverNotes note = s_SolverNotes_N_COWRestrict;
                                            const s_SolverState& ss_1 = ss;
                                            if (note & options.break_notes)
                                                fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + (x7E_gCeFmDFw((x7E_gCeFmDFw(x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " at risk from "_fu), str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " via "_fu), str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(reason, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) ? ("\n\t\t"_fu + x7E_gCeFmDFw((x7E_gCeFmDFw(x7E_gCeFmDFw(str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), " at risk from "_fu), str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " via "_fu), str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(reason, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module))) : "."_fu)), ss_1, _helpers, _here, ctx, module);
                                            else
                                                _notes |= note;

                                        };
                                        add_U5p6nLOf(grow_if_oob_ibzQKImi(flow.at_soft_risk, t), locid);
                                        if ((reason != t) || TODO_FIX_slicesAgain_gOeUvygj(t, ss, _helpers, _here, ctx, module))
                                        {
                                            add_U5p6nLOf(grow_if_oob_ibzQKImi(flow.at_hard_risk, t), locid);
                                        };
                                    };
                                };
                            };
                        };
                    };
                    const s_SolverState& ss_2 = ss;
                    if (callee)
                    {
                        fu::view<s_COWInside> callee_cows = EXT_x9dYoBLb(callee, ss_2, ctx, module).cows_inside;
                        for (int i_1 = 0; i_1 < callee_cows.size(); i_1++)
                        {
                            const s_COWInside& callee_cow = callee_cows[i_1];
                            if (!(calleeReturnDiscarded && !callee_cow.mayEscapeVia))
                            {
                                int BL_29_v {};
                                if (callee_cow.argTarget == (__extension__ (
                                {
                                    const s_Target& t_1 = host_arg.target;
                                    BL_29_v = (int(unsigned((t_1._packed & 0xfffffull))));
                                (void)0;}), BL_29_v))
                                {
                                    const s_ValueType& vtype = callee_cow.vtype;
                                    const s_TokenIdx& token = callee_cow.token;
                                    const bool uncaughtThrowOnly = ((callee_cow.exitPaths == s_ExitPaths_XP_NoReturn) ? !_current_fn.TODO_FIX_catches : false);
                                    const int mayEscapeVia = _current_fn.postdom.snap.mayEscapeVia;
                                    const s_ExitPaths exitPaths = (uncaughtThrowOnly ? s_ExitPaths_XP_NoReturn : (_current_fn.postdom.snap.exitPaths ? _current_fn.postdom.snap.exitPaths : BUG_zwQElfxV("No current_fn.exitPaths"_fu, ss_2, _helpers, _here, ctx, module)));
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
                        const s_ValueType& vtype_1 = item.type.vtype;
                        const int mayEscapeVia_1 = _current_fn.postdom.snap.mayEscapeVia;
                        const s_ExitPaths exitPaths_1 = (_current_fn.postdom.snap.exitPaths ? _current_fn.postdom.snap.exitPaths : BUG_zwQElfxV("No current_fn.exitPaths"_fu, ss_2, _helpers, _here, ctx, module));
                        fu::vec<s_COWInside>& my_cows_1 = _current_fn.events.cows_inside;
                        for (int i_3 = 0; i_3 < my_cows_1.size(); i_3++)
                        {
                            s_COWInside& my_cow_1 = my_cows_1.mutref(i_3);
                            if ((my_cow_1.argTarget == locid) && (my_cow_1.vtype.canon == vtype_1.canon))
                            {
                                my_cow_1.vtype.quals |= vtype_1.quals;
                                my_cow_1.mayEscapeVia |= mayEscapeVia_1;
                                my_cow_1.exitPaths |= exitPaths_1;
                                return;
                            };
                        };
                        my_cows_1 += s_COWInside { s_ValueType(vtype_1), s_TokenIdx(_here), locid, mayEscapeVia_1, exitPaths_1 };
                    };
                };
            }
            else
                BUG_zwQElfxV(x7E_gCeFmDFw("cannotCOW_climbParents found a non-var: "_fu, str_sdDZgf4z(o, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        };
    };
}

static void validateCOW_l4pirMKN(const s_SolvedNode& item, const s_TokenIdx& here, const s_Target& callee, const s_Argument& host_arg, const bool calleeReturnDiscarded, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    cannotCOW_climbParents_WHLnoTds(item.type.lifetime, fu::view<int>{}, item, here, callee, host_arg, calleeReturnDiscarded, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

inline static void l_30_35_OstnXcOr(const int locid, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (locid && add_once_U5p6nLOf(_current_fn.postdom.snap.ever_written, locid))
    {
        const s_Target t = nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module);
        callarg_trackWrites_Wfa4pdTs(Lifetime_climbType_426itOgG(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module).lifetime, ss, _current_fn, _helpers, _here, ctx, module);
        if (isArg_GtNDTeV7(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module)))
            _current_fn.postdom.snap.mayEscapeVia |= (1 << (locid % 32));

    };
}

                                #ifndef DEF_Lifetime_each_n2N8jBMVXOk
                                #define DEF_Lifetime_each_n2N8jBMVXOk
inline void Lifetime_each_n2N8jBMV(const s_Lifetime& lifetime, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_35_OstnXcOr(int(((r & 1u) ? 0u : (r >> 1u))), ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static void callarg_trackWrites_Wfa4pdTs(const s_Lifetime& lt, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    Lifetime_each_n2N8jBMV(lt, ss, _current_fn, _helpers, _here, ctx, module);
}

inline static void l_30_39_bjiNqrNU(const int i, const s_Argument& host_arg, s_SolvedNode& node, const unsigned relax_mask, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_SolvedNode& arg = node.items.mutref(i);
    if (relax_mask == RELAX_all)
        maybeCopyOrMove_9xQ8JW0m(arg, host_arg.type, true, (*(const fu::str*)fu::NIL), ss, _helpers, _here, ctx, module);

    propagateType_pH8jMqgi(arg, host_arg.type, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (host_arg.flags & s_Flags_F_WRITTEN_TO)
    {
        callarg_trackWrites_Wfa4pdTs(arg.type.lifetime, ss, _current_fn, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_argsReverse_ix3JpkJnN76
                                #define DEF_argsReverse_ix3JpkJnN76
inline void argsReverse_ix3JpkJn(const bool RTL, fu::view<s_Argument> host_args, s_SolvedNode& node, const unsigned relax_mask, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
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
                l_30_39_bjiNqrNU(i, host_arg, node, relax_mask, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                ooe_isLast = false;
                revSeqIdx++;
            };
        };
    };
}
                                #endif

static bool isFieldChain_JgEZs3yn(const s_SolvedNode& arg, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (arg.kind != s_kind_call)
        return false;
    else
    {
        const s_kind t = GET_oTYbwQb8(arg.target, ss, _helpers, _here, ctx, module).kind;
        return (t == s_kind_var) || ((t == s_kind_field) && isFieldChain_JgEZs3yn(only_GN4mikiy(arg.items), ss, _helpers, _here, ctx, module));
    };
}

inline static void l_30_65_4H4cYne1(const int locid, const bool isTemp, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!locid)
    {
        if (!(isTemp))
            BUG_zwQElfxV("Attempting to move from a non-local, non-temporary region."_fu, ss, _helpers, _here, ctx, module);

    }
    else
    {
        s_Overload& o = GET_mut_j8q0a60a(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, module);
        if (!(o.status & s_SolverStatus_SS_MOVED_FROM))
        {
            o.status |= s_SolverStatus_SS_MOVED_FROM;
            const s_Type& init = Lifetime_climbType_426itOgG(o, ss, _helpers, _here, ctx, module);
            if (is_ref_gBx1AgSx(init))
            {
                Lifetime_F_MOVED_FROM_Ei5bGYSv(s_Lifetime(init.lifetime), ss, _helpers, _here, ctx, module);
            };
        };
    };
}

                                #ifndef DEF_Lifetime_each_V2fPBAXDkm7
                                #define DEF_Lifetime_each_V2fPBAXDkm7
inline void Lifetime_each_V2fPBAXD(const s_Lifetime& lifetime, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_65_4H4cYne1(int(((r & 1u) ? 0u : (r >> 1u))), (r == 1u), ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static void Lifetime_F_MOVED_FROM_Ei5bGYSv(const s_Lifetime& lifetime, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    Lifetime_each_V2fPBAXD(lifetime, ss, _helpers, _here, ctx, module);
}

static void injectJumps_kOoKVJdj(s_SolvedNode& expr, const s_Helpers& h, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!tryInjectJumps_cDNEgy8R(expr, h, ss, _helpers, _here, ctx, module))
        expr = createJump_0pdWGtwM(h, expr, _here);

}

static bool tryInjectJumps_cDNEgy8R(s_SolvedNode& expr, const s_Helpers& h, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_HelpersData* BL_2_v;
    if (is_never_FfV8Zuj5(expr.type))
        return true;
    else if ((__extension__ (
    {
        const s_Helpers& h_1 = h;
        BL_2_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
    (void)0;}), *BL_2_v).ret_actual)
    {
        const s_HelpersData* BL_4_v;
        if (is_void_FfV8Zuj5((__extension__ (
        {
            const s_Helpers& h_1 = h;
            BL_4_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_4_v).ret_actual) && !is_void_FfV8Zuj5(expr.type))
        {
            if (expr.kind != s_kind_block)
            {
                expr = createBlock_4vpZBLng(t_void, fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Helpers{}, _here);
            };
            if (is_void_FfV8Zuj5(if_last_GN4mikiy(expr.items).type))
                BUG_zwQElfxV(("tryInjectJumps: Block tail is void, but block.type isn't: "_fu + humanizeType_kB3Te7GK(expr.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
            else
            {
                expr.items += createEmpty_hkWuvX58(s_kind_empty, t_void, s_Target{}, _here);
            };
        };
        const s_HelpersData* BL_9_v;
        if ((expr.kind == s_kind_block) && expr.items && !s_HelpersMask(((__extension__ (
        {
            const s_Helpers& h_1 = expr.helpers;
            BL_9_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_9_v).mask & s_HelpersMask_HM_LabelUsed)))
        {
            s_SolvedNode* _0;
            (_0 = &(last_Iovd0TM6(expr.items)), injectJumps_kOoKVJdj(*_0, h, ss, _helpers, _here, ctx, module));
            expr.type = t_never;
            return true;
        }
        else if (expr.kind == s_kind_if)
        {
            for (int i = 1; i < expr.items.size(); i++)
            {
                s_SolvedNode* _1;
                (_1 = &(expr.items.mutref(i)), injectJumps_kOoKVJdj(*_1, h, ss, _helpers, _here, ctx, module));
            };
            expr.type = t_never;
            return true;
        };
        return false;
    }
    else
        BUG_zwQElfxV(x7E_gCeFmDFw("tryInjectJumps: no h.ret_actual on #"_fu, fu::i64dec(h.index)), ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_steal_dvUcLa7r1Ka
                                #define DEF_steal_dvUcLa7r1Ka
inline fu::vec<s_SolvedNode> steal_dvUcLa7r(fu::vec<s_SolvedNode>& a, const int start, const int end)
{
    const int size = (end - start);
    /*MOV*/ fu::vec<s_SolvedNode> ret {};
    ret.resize(size);
    for (int i = 0; i < size; i++)
        std::swap(ret.mutref(i), a.mutref((i + start)));

    a.splice(start, size);
    return /*NRVO*/ ret;
}
                                #endif

inline static void l_30_40_Bw9lVXKd(const s_Target& t, const int position, const unsigned relax_mask, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    relaxBlockVar_Bj9dQ5wm(t, relax_mask, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (s_SolverStatus((GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_UNUSED)) && (GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module).flags & s_Flags_F_IMPLICIT))
    {

        {
            const s_SolverNotes note = s_SolverNotes_N_UnusedImplicit;
            const s_SolverState& ss_1 = ss;
            if (note & options.break_notes)
                fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
            else
                _notes |= note;

        };
        if (_current_fn.out.items[position].target == t)
            _current_fn.out.items.splice(position, 1);
        else
        {
            BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
        };
    };
}

inline static void _current_fn_eachArg_BACK_xDwWqarN(const unsigned relax_mask, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    for (int i = (_current_fn.out.items.size() + FN_ARGS_BACK); i-- > 0; )
    {
        const s_Target t { _current_fn.out.items[i].target };
        if (t)
        {

            {
                const s_TokenIdx& _here_1 = _here;
                if (!(isArg_GtNDTeV7(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module))))
                {
                    BUG_9SZtRVJ0(fu::str{}, _here_1, ctx);
                };
            };
            l_30_40_Bw9lVXKd(t, i, relax_mask, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        };
    };
}

inline static void l_30_41_wjpb8ug1(const int locid, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!locid || !has_QTGTghRU(_current_fn.relaxed.done_relaxing, locid)))
    {
        const s_Target t = nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module);
        const s_Type& climbType = Lifetime_climbType_426itOgG(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module);
        if (climbType)
        {
            SS_HOIST_returned_locals_ACsQmzEi(s_Lifetime(climbType.lifetime), ss, _current_fn, _helpers, _here, ctx, module);
        }
        else
            GET_mut_j8q0a60a(t, ss, module).status |= s_SolverStatus_SS_HOIST;

    };
}

                                #ifndef DEF_Lifetime_each_kCmX9s4wvJd
                                #define DEF_Lifetime_each_kCmX9s4wvJd
inline void Lifetime_each_kCmX9s4w(const s_Lifetime& lifetime, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_41_wjpb8ug1(int(((r & 1u) ? 0u : (r >> 1u))), ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static void SS_HOIST_returned_locals_ACsQmzEi(const s_Lifetime& lifetime, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    Lifetime_each_kCmX9s4w(lifetime, ss, _current_fn, _helpers, _here, ctx, module);
}

                                #ifndef DEF_EFFECTS_clock
                                #define DEF_EFFECTS_clock
extern const s_FxMask EFFECTS_clock;
                                #endif

                                #ifndef DEF_EFFECTS_input
                                #define DEF_EFFECTS_input
extern const s_FxMask EFFECTS_input;
                                #endif

static void propagateType_pH8jMqgi(s_SolvedNode& node, const s_Type& slot, const unsigned relax_mask, const s_Helpers& kills, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
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
                s_SolvedNode& node_1 = GET_mut_j8q0a60a(node.target, ss, module).solved;
                s_Type type { node_1.type };
                s_SolvedNode& init = node_1.items.mutref(LET_INIT);
                if (init)
                    maybeCopyOrMove_9xQ8JW0m(init, type, false, (*(const fu::str*)fu::NIL), ss, _helpers, _here, ctx, module);

            };
            relaxBlockVar_Bj9dQ5wm(node.target, relax_mask, canDiscard, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            if (k == s_kind_letdef)
            {
                if (GET_oTYbwQb8(node.target, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_UNUSED)
                {

                    {
                        const s_SolverNotes note = s_SolverNotes_N_UnusedLet;
                        const s_SolverState& ss_1 = ss;
                        if (note & options.break_notes)
                            fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                        else
                            _notes |= note;

                    };
                    s_SolvedNode _0 {};
                    node = ((_0 = s_SolvedNode(GET_oTYbwQb8(node.target, ss, _helpers, _here, ctx, module).solved.items[LET_INIT])) ? static_cast<s_SolvedNode&&>(_0) : createEmpty_hkWuvX58(s_kind_empty, t_void, s_Target{}, _here));
                };
            }
            else
                BUG_zwQElfxV("Unexpected let node."_fu, ss, _helpers, _here, ctx, module);

        };
    }
    else
    {
        const unsigned relaxed_quals = try_relax_c5Z7RHRf(node.type, slot, relax_mask);
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
                    maybeCopyOrMove_9xQ8JW0m(item, type, false, (*(const fu::str*)fu::NIL), ss, _helpers, _here, ctx, module);

                propagateType_pH8jMqgi(item, ((i == (items.size() - 1)) ? slot : rest), relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                if (canDiscard && (i == (items.size() - 1)) && isDiscardable_6LKZeu6d(item, ss, _helpers, _here, ctx, module))
                {

                    {
                        const s_SolverNotes note = s_SolverNotes_N_UnusedAndOr;
                        const s_SolverState& ss_1 = ss;
                        if (note & options.break_notes)
                            fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                        else
                            _notes |= note;

                    };
                    items.pop();
                    if (!(_current_fn.postdom == postdom0))
                    {
                        BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
                    };
                };
                if (i)
                    branch_RQi5rqrx(_current_fn.postdom, postdom0, _here, ctx);

            };
            if (items.size() < 2)
            {
                s_SolvedNode _1 {};
                node = ((_1 = s_SolvedNode(if_only_GN4mikiy(items))) ? static_cast<s_SolvedNode&&>(_1) : createEmpty_hkWuvX58(s_kind_empty, slot, s_Target{}, _here));
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
                    (_2 = &(items.mutref(i)), maybeCopyOrMove_9xQ8JW0m(*_2, type, false, (*(const fu::str*)fu::NIL), ss, _helpers, _here, ctx, module));
                };
            };
            s_Postdom postdom0 { _current_fn.postdom };
            bool canDiscard_cond = canDiscard;
            for (int i = items.size(); i-- > 0; )
            {
                if (i == 1)
                    std::swap(postdom0, _current_fn.postdom);
                else if (i == 0)
                    branch_RQi5rqrx(_current_fn.postdom, postdom0, _here, ctx);

                propagateType_pH8jMqgi(items.mutref(i), (((i != 0) || canDiscard_cond) ? slot : t_proposition), relax_mask, ((i != 0) ? kills : (*(const s_Helpers*)fu::NIL)), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                if (canDiscard_cond && i && !isDiscardable_6LKZeu6d(items[i], ss, _helpers, _here, ctx, module))
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
                            fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                        else
                            _notes |= note;

                    };
                    node = items[0];
                }
                else if (isDiscardable_6LKZeu6d(items[1], ss, _helpers, _here, ctx, module))
                {
                    node = createOr_Vakj1ep0(fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(items[0]), s_SolvedNode(items[2]) } }, s_Type(t_void), ss, _current_fn, _helpers, _here, ctx, module);
                }
                else if (isDiscardable_6LKZeu6d(items[2], ss, _helpers, _here, ctx, module))
                    node = createAnd_M01WDdrB(fu::slice(items, 0, 2), s_Type(t_void), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                else
                    node.type = t_void;

            }
            else if (kills)
            {
                node.type = superType_neverOK_AogzhHF7("if/else after control flow simplification: "_fu, items[1].type, items[2].type, s_Target{}, ss, _helpers, _here, ctx, module);
            };
            node._loop_start = _current_fn.postdom.parent_loop_start;
        }
        else if (k == s_kind_try)
        {
            s_Postdom postdom0 { _current_fn.postdom };
            propagateType_pH8jMqgi(recover_NYvFEHIv(node), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            branch_RQi5rqrx(_current_fn.postdom, postdom0, _here, ctx);
            propagateType_pH8jMqgi(error_EKx4MtAM(node), t_string, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            const s_FxMask throws0 = s_FxMask((_current_fn.effects.fx_mask & s_FxMask_Fx_Throws));
            _current_fn.effects.fx_mask &= s_FxMask(~s_FxMask_Fx_Throws);
            _current_fn.TODO_FIX_catches++;
            propagateType_pH8jMqgi(attempt_Bx7H3IEg(node), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            _current_fn.TODO_FIX_catches--;
            if (!s_FxMask((_current_fn.effects.fx_mask & s_FxMask_Fx_Throws)))
            {

                {
                    const s_SolverNotes note = s_SolverNotes_N_UnusedTry;
                    const s_SolverState& ss_1 = ss;
                    if (note & options.break_notes)
                        fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                    else
                        _notes |= note;

                };
                node = attempt_Bx7H3IEg(node);
            };
            _current_fn.effects.fx_mask &= s_FxMask(~s_FxMask_Fx_Throws);
            _current_fn.effects.fx_mask |= throws0;
        }
        else if (k == s_kind_loop)
        {
            Breakable_begin_PaHhDB4R(true, node, relax_mask, ss, _current_fn, _here, ctx);
            const int loop_start0 = (_current_fn.postdom.parent_loop_start ? _current_fn.postdom.parent_loop_start : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
            const s_HelpersData* BL_48_v;
            int _3 {};
            _current_fn.postdom.parent_loop_start = ((_3 = (__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_48_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
            (void)0;}), *BL_48_v).locals_start) ? _3 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module));
            /*MOV*/ fu::vec<s_Type> var_usage0 {};
            std::swap(_current_fn.relaxed.var_usage, var_usage0);
            if (post_cond_inMSLLJG(node))
            {
                propagateType_pH8jMqgi(post_cond_inMSLLJG(node), t_proposition, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            };
            if (post_06V2t61b(node))
            {
                const s_SolvedNode* _4;
                if ((_4 = &(post_06V2t61b(node)), isDiscardable_6LKZeu6d(*_4, ss, _helpers, _here, ctx, module)))
                {
                    post_06V2t61b(node) = s_SolvedNode{};
                }
                else
                {
                    propagateType_pH8jMqgi(post_06V2t61b(node), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
            };
            if (body_gK6pXLfO(node))
            {
                const s_SolvedNode* _5;
                if ((_5 = &(body_gK6pXLfO(node)), isDiscardable_6LKZeu6d(*_5, ss, _helpers, _here, ctx, module)))
                {
                    body_gK6pXLfO(node) = s_SolvedNode{};
                }
                else
                {
                    propagateType_pH8jMqgi(body_gK6pXLfO(node), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
            };
            if (pre_m7dYByKA(node))
            {
                s_Postdom postdom0 { _current_fn.postdom };
                const s_SolvedNode* _6;
                if ((_6 = &(pre_m7dYByKA(node)), isDiscardable_6LKZeu6d(*_6, ss, _helpers, _here, ctx, module)))
                {
                    pre_m7dYByKA(node) = s_SolvedNode{};
                }
                else
                {
                    propagateType_pH8jMqgi(pre_m7dYByKA(node), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
                branch_RQi5rqrx(_current_fn.postdom, postdom0, _here, ctx);
            };
            if (pre_cond_AcdBKcSa(node))
            {
                propagateType_pH8jMqgi(pre_cond_AcdBKcSa(node), t_proposition, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            };
            _current_fn.postdom.parent_loop_start = loop_start0;
            Breakable_end_jGm0IL8A(true, node, relax_mask, ss, _current_fn, _here, ctx);
            if (_current_fn.postdom.parent_loop_start == loop_start0)
            {
                std::swap(_current_fn.relaxed.var_usage, var_usage0);
                for (int i = 0; i < var_usage0.size(); i++)
                {
                    const s_Type& slot_1 = var_usage0[i];
                    if (slot_1)
                        trackVarUsage_T1lDq7R0(i, slot_1, ss, _current_fn, _helpers, _here, ctx, module);

                };
                s_HelpersData* BL_64_v;
                (__extension__ (
                {
                    const s_Helpers& h = node.helpers;
                    BL_64_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                (void)0;}), *BL_64_v).usage = static_cast<fu::vec<s_Type>&&>(var_usage0);
                if (init_DW2D9OU9(node))
                {
                    propagateType_pH8jMqgi(init_DW2D9OU9(node), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
            }
            else
            {
                BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
            };
        }
        else if (k == s_kind_not)
        {
            if (canDiscard)
            {
                node = only_GN4mikiy(node.items);
                propagateType_pH8jMqgi(node, t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            }
            else
            {
                propagateType_pH8jMqgi(only_Iovd0TM6(node.items), t_proposition, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            };
        }
        else if (k == s_kind_call)
        {
            node._loop_start = _current_fn.postdom.parent_loop_start;
            const s_Target t { node.target };
            if (GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module).kind == s_kind_field)
            {
                const s_UnpackedOffset _ = field_unpackOffset_NCtF3vLS(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module), _here, ctx);
                s_Type slot_1 = USAGE_structUsageFromFieldUsage_ngdSJBk9(s_Type(slot), _.memberFlatOffset);
                if (canDiscard)
                {
                    node = only_GN4mikiy(node.items);
                    propagateType_pH8jMqgi(node, slot_1, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                }
                else
                {
                    propagateType_pH8jMqgi(only_Iovd0TM6(node.items), slot_1, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
            }
            else if (GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module).kind == s_kind_var)
            {
                if (canDiscard)
                {
                    node = createEmpty_hkWuvX58(s_kind_empty, slot, s_Target{}, _here);
                }
                else if (isLocal_nMI8cChU(t))
                {
                    trackVarUsage_T1lDq7R0(int(unsigned((t._packed & 0xfffffull))), node.type, ss, _current_fn, _helpers, _here, ctx, module);
                    tryTrackLastUse_TG1knlTJ(node.type.lifetime, relax_mask, ss, _current_fn, _helpers, _here, ctx, module);
                };
            }
            else
            {
                const unsigned mask_retval_relaxable = mask_retval_relaxable_Ky43XOkT(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module).type, relaxed_quals, _here, ctx);
                if (mask_retval_relaxable)
                {
                    if ((GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module).kind == s_kind_fn) && (int(unsigned(((t._packed >> 40ull) & 0xfffffull))) == module.modid))
                    {
                        const s_Target spec = tryReverseSpecialize_rU7u0zIq(s_Target(t), mask_retval_relaxable, ss, _helpers, _here, ctx, module);
                        if (spec)
                            redirectCallTarget_ktLc5HvG(spec, node, t, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                    }
                    else if (EXT_x9dYoBLb(t, ss, ctx, module).spec_of)
                    {
                        fu::vec<s_SolvedNode> relaxed {};
                        for (int i = 0; i < node.items.size(); i++)
                        {
                            const s_SolvedNode& orig = node.items[i];
                            if (Lifetime_has_NRjdLNHo(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module).type.lifetime, i))
                            {
                                const unsigned relax_mask_1 = (relax_mask & ~q_USAGE);
                                s_Type type { orig.type };
                                if (try_relax_c5Z7RHRf(type, slot, relax_mask_1))
                                {
                                    if (!relaxed)
                                        relaxed = fu::slice(node.items, 0, i);

                                    relaxed += SolvedNode_wUIpeYIY(s_kind___relaxed, type, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
                                    continue;
                                };
                            };
                            if (relaxed)
                                relaxed += s_SolvedNode(orig);

                        };
                        if (relaxed)
                        {
                            fu::str args_mangled {};
                            const s_Target spec = trySpecialize_Cftkei7L(s_Target(EXT_x9dYoBLb(t, ss, ctx, module).spec_of), relaxed, args_mangled, relaxed.size(), (*(const s_Type*)fu::NIL), (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                            if (!is_SPECFAIL_Dujo5Kxe(spec))
                                redirectCallTarget_ktLc5HvG(spec, node, t, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                        };
                    };
                };
                if (canDiscard && isDiscardable_43Piwd0W(node.target, ss, ctx, module))
                {

                    {
                        const s_SolverNotes note = s_SolverNotes_N_UnusedCall;
                        const s_SolverState& ss_1 = ss;
                        if (note & options.break_notes)
                            fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                        else
                            _notes |= note;

                    };
                    discardIntoBlock_y7RsXvXu(node, slot, relax_mask, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                }
                else
                {
                    if (is_never_FfV8Zuj5(GET_oTYbwQb8(node.target, ss, _helpers, _here, ctx, module).type) && !_current_fn.TODO_FIX_catches)
                    {
                        _current_fn.postdom.snap = s_PostdomSnap{};
                        _current_fn.postdom.snap.exitPaths = s_ExitPaths_XP_NoReturn;
                    };
                    _current_fn.effects.fx_mask |= EXT_x9dYoBLb(node.target, ss, ctx, module).fx_mask;
                    if ((relax_mask == RELAX_all) && node.items)
                    {
                        fu::vec<s_Argument> host_args { EXT_x9dYoBLb(t, ss, ctx, module).args };
                        for (int i = 0; i < host_args.size(); i++)
                        {
                            const s_SolvedNode& arg = node.items[i];
                            s_Argument host_arg { host_args[i] };
                            if (is_ref_gBx1AgSx(host_arg.type))
                            {
                                tryTrackLastUse_TG1knlTJ(arg.type.lifetime, relax_mask, ss, _current_fn, _helpers, _here, ctx, module);
                            };
                            if (host_arg.flags & s_Flags_F_COW_INSIDE)
                                validateCOW_l4pirMKN(arg, arg.token, node.target, host_arg, canDiscard, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                        };
                    };
                    if (node.items)
                    { {
                        if (GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module).kind == s_kind_type)
                        {
                            s_Struct BL_103_v {};
                            s_Struct s = (__extension__ (
                            {
                                const s_Struct& __partcopy_ref = tryLookupUserType_QHDuaMIF(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module).type.vtype, _here, ctx, module);
                                BL_103_v = (s_Struct { __partcopy_ref.kind, {}, {}, fu::vec<s_ScopeItem>(__partcopy_ref.items), {}, {}, {} });
                            (void)0;}), static_cast<s_Struct&&>(BL_103_v));
                            if (!(s.kind != s_kind_struct))
                            {
                                if (s.items.size() == node.items.size())
                                {
                                    for (int i = node.items.size(); i-- > 0; )
                                    {
                                        const s_Overload& field = GET_oTYbwQb8(target_NWTdzsfF(s.items[i]), ss, _helpers, _here, ctx, module);
                                        s_SolvedNode& arg = node.items.mutref(i);
                                        const s_UnpackedOffset _ = field_unpackOffset_NCtF3vLS(field, _here, ctx);
                                        unsigned BL_108_v {};
                                        s_Type slot_1 = USAGE_fieldUsageFromStructUsage_nUuDM8fi(s_Type(field.type), (__extension__ (
                                        {
                                            const s_ValueType& type = slot.vtype;
                                            BL_108_v = ((type.quals & q_USAGE));
                                        (void)0;}), BL_108_v), _.memberFlatOffset, _.memberFlatCount);
                                        if (relax_mask == RELAX_all)
                                            maybeCopyOrMove_9xQ8JW0m(arg, slot_1, true, (*(const fu::str*)fu::NIL), ss, _helpers, _here, ctx, module);

                                        propagateType_pH8jMqgi(arg, slot_1, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                    };
                                    goto BL_101;
                                }
                                else
                                    BUG_zwQElfxV("Call(type): struct.items.len != call.items.len"_fu, ss, _helpers, _here, ctx, module);

                            };
                        };
                        fu::vec<s_Argument> host_args { EXT_x9dYoBLb(node.target, ss, ctx, module).args };
                        const bool RTL = isRTL_N4q4L7uF(GET_oTYbwQb8(node.target, ss, _helpers, _here, ctx, module));
                        if (host_args.size() == node.items.size())
                            argsReverse_ix3JpkJn(RTL, host_args, node, relax_mask, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                        else
                            BUG_zwQElfxV(x7E_gCeFmDFw("propagateType(call) args.len != host_args.len at call to "_fu, str_sdDZgf4z(GET_oTYbwQb8(node.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                      } BL_101:;
                    };
                };
            };
        }
        else if (isImmediatelyDiscardable_6wzYjnDc(k))
        {
            if (canDiscard || (k == s_kind_definit))
            {
                if (node.items)
                    BUG_zwQElfxV((x7E_gCeFmDFw("propagateType canDiscard("_fu, str_n4lV73pj(k)) + ") has items."_fu), ss, _helpers, _here, ctx, module);
                else
                {
                    node.kind = s_kind_empty;
                    node.value = ""_fu;
                };
            };
        }
        else if (k == s_kind_copy)
        {
            if (canDiscard)
                BUG_zwQElfxV(x7E_gCeFmDFw("Trying to discard a copy: "_fu, str_x2vR7Kqe(node, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
            else if (relax_mask != RELAX_all)
                BUG_zwQElfxV(x7E_gCeFmDFw("Found a copy node during first relax: "_fu, str_x2vR7Kqe(node, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
            else
            {
                const s_SolvedNode& item = only_GN4mikiy(node.items);
                bool isCopy = true;
                if (!is_trivial_QHDuaMIF(item.type.vtype, _here, ctx, module))
                {
                    if (tryTrackLastUse_TG1knlTJ(item.type.lifetime, relax_mask, ss, _current_fn, _helpers, _here, ctx, module))
                        isCopy = false;
                    else
                    {
                        if (!is_trivial_QHDuaMIF(item.type.vtype, _here, ctx, module))
                        {
                            validateCOW_l4pirMKN(item, s_TokenIdx(_here), s_Target{}, (*(const s_Argument*)fu::NIL), false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                        };
                        unsigned BL_125_v {};
                        const unsigned usage = (__extension__ (
                        {
                            const s_ValueType& type = node.type.vtype;
                            BL_125_v = ((type.quals & q_USAGE));
                        (void)0;}), BL_125_v);
                        const int flatCount = getFlatCount_QHDuaMIF(node.type.vtype, _here, ctx, module);
                        const unsigned maxUsage = getMaxUsage_YfHAfesl(flatCount);
                        if (usage != maxUsage)
                        {
                            s_Struct BL_127_v {};
                            s_Struct s = (__extension__ (
                            {
                                const s_Struct& __partcopy_ref = tryLookupUserType_QHDuaMIF(node.type.vtype, _here, ctx, module);
                                BL_127_v = (s_Struct { __partcopy_ref.kind, {}, s_Target(__partcopy_ref.target), fu::vec<s_ScopeItem>(__partcopy_ref.items), {}, {}, {} });
                            (void)0;}), static_cast<s_Struct&&>(BL_127_v));
                            if (!(s.kind != s_kind_struct))
                            {
                                if (!USAGE_justOneThing_XyuwAq2h(usage, flatCount) && !isFieldChain_JgEZs3yn(item, ss, _helpers, _here, ctx, module))
                                {
                                    /*MOV*/ s_SolvedNode letdef = createLet_zTk5nnZY("__partcopy_ref"_fu, s_Flags{}, item, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                    only_Iovd0TM6(node.items) = CallerNode_X3mO7Hwg("__partcopy_ref"_fu, s_Target((letdef.target ? letdef.target : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module))), fu::vec<s_SolvedNode>{}, (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                    node = createBlock_O5z3dG59(static_cast<s_SolvedNode&&>(letdef), s_SolvedNode(node), _here);
                                }
                                else
                                {
                                    /*MOV*/ fu::vec<s_SolvedNode> args {};
                                    for (int i = 0; i < s.items.size(); i++)
                                    {
                                        const s_Target fieldTarget = target_NWTdzsfF(s.items[i]);
                                        const s_Overload& field = GET_oTYbwQb8(fieldTarget, ss, _helpers, _here, ctx, module);
                                        const s_UnpackedOffset _ = field_unpackOffset_NCtF3vLS(field, _here, ctx);
                                        /*MOV*/ s_Type usedFieldType = USAGE_fieldUsageFromStructUsage_nUuDM8fi(s_Type(field.type), usage, _.memberFlatOffset, _.memberFlatCount);
                                        if (isIrrelevant_40rRB6L8(usedFieldType))
                                            args += createDefinit_CGnCwQAy(field.type, ss, _helpers, _here, ctx, module);
                                        else
                                        {
                                            /*MOV*/ s_SolvedNode copy { node };
                                            copy.type = static_cast<s_Type&&>(usedFieldType);
                                            copy.items = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { CallerNode_X3mO7Hwg("__partcopy_field"_fu, s_Target(fieldTarget), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(item) } }, (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) } };
                                            args += static_cast<s_SolvedNode&&>(copy);
                                        };
                                    };
                                    /*MOV*/ s_Type type0 { node.type };
                                    node = CallerNode_X3mO7Hwg("__partcopy_struct"_fu, s_Target(s.target), static_cast<fu::vec<s_SolvedNode>&&>(args), (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                    node.type = static_cast<s_Type&&>(type0);
                                };
                                propagateType_pH8jMqgi(node, slot, relax_mask, kills, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                return;
                            };
                        };
                    };
                };
                s_SolvedNode& item_1 = only_Iovd0TM6(node.items);
                if (!(isCopy ? is_rx_copy_GSunVkiW(item_1.type) : is_rx_move_40rRB6L8(item_1.type)))
                {
                    if (!isCopy && is_sliceable_3t4EwFeQ(item_1.type.vtype))
                        fail_Szrpd5G6(("An array value is needed, but cannot be copied or moved from a slice: "_fu + humanizeType_kB3Te7GK(item_1.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                    else
                        fail_Szrpd5G6(("A value is needed, but cannot be copied or moved from: "_fu + humanizeType_kB3Te7GK(item_1.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                }
                else
                {
                    if (isCopy && !is_trivial_QHDuaMIF(node.type.vtype, _here, ctx, module))
                    {
                        const s_SolverNotes note = s_SolverNotes_N_NonTrivAutoCopy;
                        const s_SolverState& ss_1 = ss;
                        if (note & options.break_notes)
                            fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                        else
                            _notes |= note;

                    };
                    s_Type itemSlot = (isCopy ? make_copyable_40rRB6L8(s_Type(slot)) : make_moveable_40rRB6L8(s_Type(slot)));
                    propagateType_pH8jMqgi(item_1, itemSlot, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
                if (is_ref_gBx1AgSx(item_1.type))
                {
                    if (!isCopy)
                    {
                        Lifetime_F_MOVED_FROM_Ei5bGYSv(item_1.type.lifetime, ss, _helpers, _here, ctx, module);
                        node.kind = s_kind_move;
                    };
                }
                else
                    BUG_zwQElfxV(x7E_gCeFmDFw("Nothing to copy, item is not a ref: "_fu, str_x2vR7Kqe(item_1, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

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
                        fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                    else
                        _notes |= note;

                };
                discardIntoBlock_y7RsXvXu(node, slot, relax_mask, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            }
            else
            {
                fu::view_mut<s_SolvedNode> items = node.items;
                s_Type itemSlot = clear_sliceable_EA8Wup3K(node.type.vtype, _here, ctx, module);
                if (relax_mask == RELAX_all)
                {
                    for (int i = 0; i < items.size(); i++)
                    {
                        s_SolvedNode* _7;
                        (_7 = &(items.mutref(i)), maybeCopyOrMove_9xQ8JW0m(*_7, itemSlot, false, (*(const fu::str*)fu::NIL), ss, _helpers, _here, ctx, module));
                    };
                };
                for (int i = 0; i < items.size(); i++)
                {
                    propagateType_pH8jMqgi(items.mutref(i), itemSlot, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
            };
        }
        else if (k == s_kind_argid)
        {
            node = only_GN4mikiy(node.items);
            propagateType_pH8jMqgi(node, slot, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        }
        else if (k == s_kind_jump)
        {
            s_Helpers h { node.helpers };
            const s_HelpersData* BL_158_v;
            while ((__extension__ (
            {
                const s_Helpers& h_1 = h;
                BL_158_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
            (void)0;}), *BL_158_v).kills)
            {
                const s_HelpersData* BL_161_v;
                h = (node.helpers = (__extension__ (
                {
                    const s_Helpers& h_1 = h;
                    BL_161_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                (void)0;}), *BL_161_v).kills);
            };
            const s_HelpersData* BL_162_v;
            if ((__extension__ (
            {
                const s_Helpers& h_1 = h;
                BL_162_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
            (void)0;}), *BL_162_v).ret_actual)
            {
                s_SolvedNode& expr = only_Iovd0TM6(node.items);

                {
                    const s_HelpersData* BL_165_v;
                    const s_Postdom* _8;
                    _current_fn.postdom = (*(_8 = &((__extension__ (
                    {
                        const s_Helpers& h_1 = h;
                        BL_165_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                    (void)0;}), *BL_165_v).postdom)) ? *_8 : BUG_zwQElfxV(x7E_gCeFmDFw("propagateType(jump): h.loop_start not available: #"_fu, fu::i64dec(h.index)), ss, _helpers, _here, ctx, module));
                    const s_HelpersData* BL_166_v;
                    if ((__extension__ (
                    {
                        const s_Helpers& h_1 = h;
                        BL_166_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                    (void)0;}), *BL_166_v).mask & s_HelpersMask_HM_Function)
                    {
                        const s_kind kind = expr.kind;
                        _current_fn.postdom.snap.exitPaths = (((kind == s_kind_empty) || (kind == s_kind_definit)) ? s_ExitPaths_XP_EmptyReturn : s_ExitPaths_XP_NonEmptyReturn);
                    };
                };
                const bool redundant = (kills ? (kills.index <= h.index) : false);
                const s_Helpers& kills_1 = (redundant ? kills : h);
                if (relax_mask == RELAX_all)
                {
                    const s_HelpersData* BL_169_v;
                    maybeCopyOrMove_9xQ8JW0m(expr, (__extension__ (
                    {
                        const s_Helpers& h_1 = h;
                        BL_169_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                    (void)0;}), *BL_169_v).ret_actual, false, (*(const fu::str*)fu::NIL), ss, _helpers, _here, ctx, module);
                };
                const s_HelpersData* BL_170_v;
                propagateType_pH8jMqgi(expr, s_Type((__extension__ (
                {
                    const s_Helpers& h_1 = h;
                    BL_170_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                (void)0;}), *BL_170_v).ret_actual), relax_mask, kills_1, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                if (redundant)
                    node = expr;
                else
                {
                    s_HelpersData* BL_173_v;
                    (__extension__ (
                    {
                        const s_Helpers& h_1 = h;
                        BL_173_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h_1.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                    (void)0;}), *BL_173_v).mask |= s_HelpersMask_HM_LabelUsed;
                    const s_HelpersData* BL_174_v;
                    if (isIrrelevant_40rRB6L8((__extension__ (
                    {
                        const s_Helpers& h_1 = h;
                        BL_174_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                    (void)0;}), *BL_174_v).ret_actual))
                    {
                        if (expr.kind == s_kind_empty)
                        {
                            const s_HelpersData* BL_177_v;
                            expr.type = (__extension__ (
                            {
                                const s_Helpers& h_1 = h;
                                BL_177_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                            (void)0;}), *BL_177_v).ret_actual;
                        }
                        else
                        {
                            const s_HelpersData* BL_179_v;
                            /*MOV*/ s_SolvedNode not_empty = createEmpty_hkWuvX58(s_kind_empty, (__extension__ (
                            {
                                const s_Helpers& h_1 = h;
                                BL_179_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                            (void)0;}), *BL_179_v).ret_actual, s_Target{}, _here);
                            std::swap(expr, not_empty);
                            node = createBlock_O5z3dG59(static_cast<s_SolvedNode&&>(not_empty), s_SolvedNode(node), _here);
                        };
                    }
                    else if (tryInjectJumps_cDNEgy8R(expr, h, ss, _helpers, _here, ctx, module))
                        node = expr;

                };
            }
            else
                BUG_zwQElfxV(x7E_gCeFmDFw("propagateType(jump): h.ret_actual not available: #"_fu, fu::i64dec(h.index)), ss, _helpers, _here, ctx, module);

        }
        else if (k == s_kind_block)
        {
            const s_Helpers h { node.helpers };
            if ((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual)
            {
                if ((relax_mask == RELAX_all) && s_HelpersMask(((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).mask & s_HelpersMask_HM_Function)))
                    mcom_FnReturn_CopyOrMoveDecision_is4ppL5R(h, ss, _helpers, _here, ctx, module);

                try_relax_c5Z7RHRf((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual, slot, relax_mask);
                if ((relax_mask == RELAX_all) && !canDiscard && !is_never_FfV8Zuj5((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual))
                {
                    const s_Type* _9;
                    s_SolvedNode* _10;
                    (_9 = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual), _10 = &(last_Iovd0TM6(node.items)), maybeCopyOrMove_9xQ8JW0m(*_10, *_9, false, (*(const fu::str*)fu::NIL), ss, _helpers, _here, ctx, module));
                };
            };
            if (h)
            {
                (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).mask &= s_HelpersMask(~s_HelpersMask_HM_LabelUsed);
                (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).kills = s_Helpers(kills);
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
                        propagateType_pH8jMqgi(expr, t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                        if (isDiscardable_6LKZeu6d(expr, ss, _helpers, _here, ctx, module))
                        {

                            {
                                const s_SolverNotes note = s_SolverNotes_N_UnusedDefer;
                                const s_SolverState& ss_1 = ss;
                                if (note & options.break_notes)
                                    fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
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
                            s_SolvedNode cond_1 = ((k_1 == s_kind_and) ? createAnd_M01WDdrB(static_cast<fu::vec<s_SolvedNode>&&>(cond), s_Type(t_proposition), ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : createOr_Vakj1ep0(static_cast<fu::vec<s_SolvedNode>&&>(cond), s_Type(t_proposition), ss, _current_fn, _helpers, _here, ctx, module));
                            /*MOV*/ s_SolvedNode alt_1 = createBlock_4vpZBLng(last_GN4mikiy(alt).type, fu::vec<s_SolvedNode>(alt), s_Helpers{}, _here);
                            /*MOV*/ s_SolvedNode replacement = createIf_uoAeG0uH(cond_1, s_SolvedNode(((k_1 == s_kind_and) ? cons : alt_1)), static_cast<s_SolvedNode&&>(((k_1 == s_kind_and) ? alt_1 : cons)), s_Type{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                            items.mutref(i) = static_cast<s_SolvedNode&&>(replacement);
                        };
                    }
                    else if (k_1 == s_kind_block)
                    {
                        if (if_last_GN4mikiy(node_1.items).kind == s_kind_unwrap)
                        {
                            if (relax_mask == RELAX_before_bck)
                            {
                                const s_HelpersData* BL_200_v;
                                if ((node_1.kind == s_kind_block) && !s_HelpersMask(((__extension__ (
                                {
                                    const s_Helpers& h_1 = node_1.helpers;
                                    BL_200_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                                (void)0;}), *BL_200_v).mask & s_HelpersMask_HM_LabelUsed)))
                                {
                                    items.splice(i, 1, steal_dvUcLa7r(node_1.items, 0, (node_1.items.size() - 1)));
                                    i--;
                                    continue;
                                }
                                else
                                    fail_Szrpd5G6("`unwrap` doesn't currently support early returns."_fu, ss, _helpers, _here, ctx, module);

                            }
                            else
                                BUG_zwQElfxV("Unwrapping a `defer` after BCK, changes control flow."_fu, ss, _helpers, _here, ctx, module);

                        };
                    };
                };
                Breakable_begin_PaHhDB4R(false, node, relax_mask, ss, _current_fn, _here, ctx);
                fu_DEFER(Breakable_end_jGm0IL8A(false, node, relax_mask, ss, _current_fn, _here, ctx));
                while (items)
                {
                    s_SolvedNode& tail = last_Iovd0TM6(items);
                    if (tail.kind == s_kind_defer)
                    {
                        tail = ((tail.value == "err"_fu) ? createEmpty_hkWuvX58(s_kind_empty, t_void, s_Target{}, _here) : s_SolvedNode(only_GN4mikiy(tail.items)));
                    };
                    const s_Helpers& kills_1 = (!(s_HelpersMask(((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).mask & s_HelpersMask_HM_Function)) && !is_void_FfV8Zuj5((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual)) ? (kills ? kills : h) : (*(const s_Helpers*)fu::NIL));
                    propagateType_pH8jMqgi(tail, slot, relax_mask, kills_1, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    if (!canDiscard || !isDiscardable_6LKZeu6d(tail, ss, _helpers, _here, ctx, module))
                        break;
                    else
                        items.pop();

                };
                for (int i_1 = (items.size() - 1); i_1-- > 0; )
                {
                    s_SolvedNode& expr = items.mutref(i_1);
                    if (expr.kind != s_kind_defer)
                    {
                        propagateType_pH8jMqgi(expr, t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                        if (isDiscardable_6LKZeu6d(expr, ss, _helpers, _here, ctx, module))
                            items.splice(i_1, 1);

                    };
                };
            };
            if ((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).target == _current_fn.out.target)
                _current_fn_eachArg_BACK_xDwWqarN(relax_mask, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            else if (relax_mask == RELAX_all)
            {
                SS_HOIST_returned_locals_ACsQmzEi(node.type.lifetime, ss, _current_fn, _helpers, _here, ctx, module);
            };
            if (!items && !s_HelpersMask(((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).mask & s_HelpersMask_HM_Function)))
            {
                if (!canDiscard)
                    BUG_zwQElfxV(("Empty block type is relevant: "_fu + humanizeType_kB3Te7GK(node.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                else
                {
                    node.kind = s_kind_empty;
                    node.helpers = s_Helpers{};
                };
            }
            else if ((items.size() == 1) && !s_HelpersMask(((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).mask & s_HelpersMask((s_HelpersMask_HM_LabelUsed | s_HelpersMask_HM_Function)))))
                node = only_GN4mikiy(items);
            else
            {
                if (canDiscard)
                    node.type = slot;
                else if (kills)
                {
                    if (items)
                    {
                        const s_SolvedNode& tail = last_GN4mikiy(items);
                        if ((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual)
                        {
                            reportReturnType_FjwYL6rK(h, tail.type, false, ss, _helpers, _here, ctx, module);
                            node.type = (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual;
                        }
                        else
                            node.type = tail.type;

                    };
                };
                const s_SolvedNode& tail = if_last_GN4mikiy(node.items);
                const s_HelpersData* BL_225_v;
                if ((tail.kind == s_kind_block) && !s_HelpersMask(((__extension__ (
                {
                    const s_Helpers& h_1 = tail.helpers;
                    BL_225_v = &((((h_1.index >= 0) && (h_1.index < ss._helpers_data.size())) ? ss._helpers_data[h_1.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                (void)0;}), *BL_225_v).mask & s_HelpersMask_HM_LabelUsed)))
                    node.items.splice((node.items.size() - 1), 1, fu::vec<s_SolvedNode>(tail.items));

            };
        }
        else if (k == s_kind_root)
        {
            for (int i = node.items.size(); i-- > 0; )
            {
                propagateType_pH8jMqgi(node.items.mutref(i), t_void, relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            };
        }
        else if (k == s_kind_pragma)
        {
            node._loop_start = _current_fn.postdom.parent_loop_start;
            for (int i = 0; i < node.items.size(); i++)
            {
                s_SolvedNode& item = node.items.mutref(i);
                propagateType_pH8jMqgi(item, s_Type(node.items[i].type), relax_mask, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                if (is_mutref_hoadAQC0(item.type, _here, ctx))
                {
                    callarg_trackWrites_Wfa4pdTs(item.type.lifetime, ss, _current_fn, _helpers, _here, ctx, module);
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
            BUG_zwQElfxV(("relax: Unexpected "_fu + str_n4lV73pj(k)), ss, _helpers, _here, ctx, module);

    };
}

inline static void l_30_93_ZvUxoOpz(const int locid, const bool isStatic, int& left, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(isStatic))
    {
        (!left ? left : BUG_zwQElfxV("Lifetime_getRefLocid_unlessStatic: multiple locids in left_lt"_fu, ss, _helpers, _here, ctx, module)) = (locid ? locid : BUG_zwQElfxV("Lifetime_getRefLocid_unlessStatic: non-locid/non-static in left_lt"_fu, ss, _helpers, _here, ctx, module));
    };
}

                                #ifndef DEF_Lifetime_each_gWTOvJ6m8Zf
                                #define DEF_Lifetime_each_gWTOvJ6m8Zf
inline void Lifetime_each_gWTOvJ6m(const s_Lifetime& lifetime, int& left, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_93_ZvUxoOpz(int(((r & 1u) ? 0u : (r >> 1u))), (r == 0u), left, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static int Lifetime_getRefLocid_unlessStatic_LaP4nCMF(const s_Lifetime& lifetime, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int left {};
    Lifetime_each_gWTOvJ6m(lifetime, left, ss, _helpers, _here, ctx, module);
    return left;
}

static bool acceptsTempCopies_Er0Fj2Xv(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    if ((o.kind == s_kind_var) && !(o.flags & (s_Flags_F_IMPLICIT | s_Flags_F_REF)))
        return !is_mutref_hoadAQC0(o.type, _here, ctx);
    else
        return false;

}

static bool willPassByValue_LlyNq60C(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (acceptsTempCopies_Er0Fj2Xv(o, _here, ctx))
        return isPassByValue_3t4EwFeQ(o.type.vtype);
    else
        return false;

}

inline static void l_30_110_dkEXwRmK(const s_Target& target, s_Lifetime& consts, s_Lifetime& refs, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int BL_1_v {};
    if (int(unsigned(((target._packed >> 20ull) & 0xfffffull))) == (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v))
    {
        const s_Type& type = GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).solved.type;
        s_Lifetime region = Lifetime_AAR_KIn2aDsn(int(unsigned((target._packed & 0xfffffull))), _here, ctx);
        if (!(!Lifetime_getRefLocid_unlessStatic_LaP4nCMF(region, ss, _helpers, _here, ctx, module)))
        {
            if (is_mutref_hoadAQC0(type, _here, ctx) && has_QTGTghRU(_current_fn.postdom.snap.ever_written, int(unsigned((target._packed & 0xfffffull)))))
            {
                Lifetime_add_PUWFQPIX(refs, region, false, _here, ctx);
            }
            else if (is_ref_gBx1AgSx(type) && !willPassByValue_LlyNq60C(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), _here, ctx))
            {
                Lifetime_add_PUWFQPIX(consts, region, false, _here, ctx);
            };
        };
    }
    else
    {
        BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

inline static void _current_fn_eachArg_FWD_kWEXYECy(s_Lifetime& consts, s_Lifetime& refs, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = _current_fn.out.items[i].target;
        if (t)
        {

            {
                const s_TokenIdx& _here_1 = _here;
                if (!(isArg_GtNDTeV7(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module))))
                {
                    BUG_9SZtRVJ0(fu::str{}, _here_1, ctx);
                };
            };
            l_30_110_dkEXwRmK(t, consts, refs, ss, _current_fn, _helpers, _here, ctx, module);
        };
    };
}

inline static void l_30_111_FEjkjzxA(const int locid, int& refs_len, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (locid)
        refs_len++;
    else
        BUG_zwQElfxV("AAR: refs contains non-locals"_fu, ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_Lifetime_each_OMzxJByiHzk
                                #define DEF_Lifetime_each_OMzxJByiHzk
inline void Lifetime_each_OMzxJByi(const s_Lifetime& lifetime, int& refs_len, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_111_FEjkjzxA(int(((r & 1u) ? 0u : (r >> 1u))), refs_len, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static void clear_eKcXbM7Z(s_Flow& flow)
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

static void clear_YZ7BoKfq(s_Events& events)
{
    events = s_Events{};
}

static s_Flow& flow_6fvDawde(s_CurrentFn& _current_fn)
{
    return _current_fn.flow;
}

static void Reference_trackArgument_En3HikOj(const int target, const int position, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if ((flow_6fvDawde(_current_fn).arg_targets.size() <= position))
    {
        flow_6fvDawde(_current_fn).arg_targets.grow((position + 1));
        flow_6fvDawde(_current_fn).arg_targets.mutref(position) = target;
        add_U5p6nLOf(flow_6fvDawde(_current_fn).is_arg, target);
    }
    else
        BUG_zwQElfxV("Reference_trackArgument: positions out of order."_fu, ss, _helpers, _here, ctx, module);

}

inline static void l_30_112_RCUYoUJs(const s_Target& target, const int position, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int BL_1_v {};
    if (int(unsigned(((target._packed >> 20ull) & 0xfffffull))) == (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v))
        Reference_trackArgument_En3HikOj(int(unsigned((target._packed & 0xfffffull))), position, ss, _current_fn, _helpers, _here, ctx, module);
    else
        BUG_zwQElfxV(x7E_gCeFmDFw("Arg target not local to current-fn: "_fu, str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

}

inline static void _current_fn_eachArg_FWD_1V6HnZxJ(const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = _current_fn.out.items[i].target;
        if (t)
        {

            {
                const s_TokenIdx& _here_1 = _here;
                if (!(isArg_GtNDTeV7(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module))))
                {
                    BUG_9SZtRVJ0(fu::str{}, _here_1, ctx);
                };
            };
            l_30_112_RCUYoUJs(t, i, ss, _current_fn, _helpers, _here, ctx, module);
        };
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

inline static void l_30_113_sz0BYDWu(const int target, const s_Lifetime& other_refs, const s_Lifetime& consts, s_Flow& flow, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (target)
    {
        if (consts)
        {
            s_Lifetime* _0;
            (!*(_0 = &(grow_if_oob_UaKCknOx(flow.rg_invalidates, target))) ? *_0 : BUG_zwQElfxV("AAR: ref arg already has invalidates."_fu, ss, _helpers, _here, ctx, module)) = s_Lifetime(consts);
        };
        if (other_refs)
        {
            Lifetime_add_PUWFQPIX(grow_if_oob_UaKCknOx(flow.rg_invalidates, target), other_refs, false, _here, ctx);
        };
        if (consts || other_refs)
        {
            const s_Lifetime* _1;
            s_Lifetime* _2;
            (!*(_2 = &(grow_if_oob_UaKCknOx(flow.rg_parents, target))) ? *_2 : BUG_zwQElfxV("AAR: ref arg already has parents."_fu, ss, _helpers, _here, ctx, module)) = s_Lifetime((*(_1 = &(unless_oob_pcvjJeir(flow.rg_invalidates, target))) ? *_1 : BUG_zwQElfxV("AAR: (refs.len > 1 || consts), but no invalidates."_fu, ss, _helpers, _here, ctx, module)));
        };
    }
    else
    {
        BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_Lifetime_each_TFY1kVXRSpg
                                #define DEF_Lifetime_each_TFY1kVXRSpg
inline void Lifetime_each_TFY1kVXR(const s_Lifetime& lifetime, const s_Lifetime& consts, s_Flow& flow, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_113_sz0BYDWu(int(((r & 1u) ? 0u : (r >> 1u))), s_Lifetime { (fu::get_view_start0(chars, offset0) + fu::get_view(chars, offset)) }, consts, flow, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

inline static void l_30_114_I3NZ35ky(const int target, const s_Lifetime& refs, s_Flow& flow, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (target)
    {
        s_Lifetime* _0;
        (!*(_0 = &(grow_if_oob_UaKCknOx(flow.rg_invalidates, target))) ? *_0 : BUG_zwQElfxV("AAR: const arg already has invalidates."_fu, ss, _helpers, _here, ctx, module)) = s_Lifetime(refs);
        s_Lifetime* _1;
        (!*(_1 = &(grow_if_oob_UaKCknOx(flow.rg_parents, target))) ? *_1 : BUG_zwQElfxV("AAR: const arg already has parents."_fu, ss, _helpers, _here, ctx, module)) = s_Lifetime(refs);
    }
    else
    {
        BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_Lifetime_each_EsDvXyxuDp9
                                #define DEF_Lifetime_each_EsDvXyxuDp9
inline void Lifetime_each_EsDvXyxu(const s_Lifetime& lifetime, const s_Lifetime& refs, s_Flow& flow, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_114_I3NZ35ky(int(((r & 1u) ? 0u : (r >> 1u))), refs, flow, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static fu::vec<s_SolvedNode>& args_jZKsBk2k(s_SolvedNode& callsite)
{
    return callsite.items;
}

static s_Target& target_6F5qhEWP(s_SolvedNode& callsite)
{
    return callsite.target;
}

static s_Events& events_AfdJjf5X(s_CurrentFn& _current_fn)
{
    return _current_fn.events;
}

static int locid_eyMSeXbN(const s_WriteID& w)
{
    return int((w._locid_and_hash & 0xfffffu));
}

static bool acceptsSoftRisk_pUjSo69s(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (isArg_GtNDTeV7(o))
        return !acceptsTempCopies_Er0Fj2Xv(o, _here, ctx);
    else
        return false;

}

static bool RESOLVE_byAAR_Fzey23bc(const int read, const int write, const bool trySoft, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (pass == s_BorrowCheckPass_BCK_aar)
    {
        if (read != write)
        {
            if ((!trySoft || !acceptsSoftRisk_pUjSo69s(GET_oTYbwQb8(nested_RctvSJIv(read, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), _here, ctx)) && !add_once_U5p6nLOf(grow_if_oob_ibzQKImi(_current_fn.flow.at_hard_risk, write), read))
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
                                    RESOLVE_byAAR_Fzey23bc(read, parent, trySoft, pass, ss, _current_fn, _helpers, _here, ctx, module);

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
                                    RESOLVE_byAAR_Fzey23bc(parent, write, false, pass, ss, _current_fn, _helpers, _here, ctx, module);

                            };
                            return true;
                        };
                    };
                };
                return true;
            };
        }
        else
            BUG_zwQElfxV("RESOLVE_byAAR: read == write"_fu, ss, _helpers, _here, ctx, module);

    }
    else
    {
        BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

static bool RESOLVE_byAAR_NnYOs4tY(fu::view<s_WriteID> writes, const int read, const bool trySoft, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < writes.size(); i++)
        RESOLVE_byAAR_Fzey23bc(read, locid_eyMSeXbN(writes[i]), trySoft, pass, ss, _current_fn, _helpers, _here, ctx, module);

    return true;
}

static bool RESOLVE_byMutvar_r8FpLETs(const int target, const s_BorrowCheckPass pass, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (pass == s_BorrowCheckPass_BCK_bck)
    {
        const s_Target t = nested_RctvSJIv(target, ss, _helpers, _here, ctx, module);
        s_Overload& o = GET_mut_j8q0a60a(t, ss, module);
        if (!acceptsTempCopies_Er0Fj2Xv(o, _here, ctx))
            return false;
        else if (is_mutref_hoadAQC0(o.type, _here, ctx))
            BUG_zwQElfxV((x7E_gCeFmDFw(str_sdDZgf4z(o, ss, _helpers, _here, ctx, module), ": Not F_REF but type.is_mutref"_fu) + " in RESOLVE_byMutvar: is this a problem?"_fu), ss, _helpers, _here, ctx, module);
        else if (o.kind == s_kind_var)
        {
            TEST_varLifetime_sPLjW7ch(o.type.lifetime, false, 0, ss, _helpers, _here, ctx, module);
            if (!is_rx_copy_GSunVkiW(o.type))
                return false;
            else
            {
                if (is_ref_gBx1AgSx(o.solved.type))
                    o.solved.type = clear_refs_40rRB6L8(s_Type(o.type));

                return true;
            };
        }
        else
            BUG_zwQElfxV("RESOLVE_byMutvar: Not a variable."_fu, ss, _helpers, _here, ctx, module);

    }
    else
    {
        BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
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

inline static s_SolvedNode TODO_FIX_pop_1Hlf3jIq(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static unsigned tokenHash_venKZknz(const s_TokenIdx& token)
{
    return ((unsigned(token.modid) * 9973u) ^ unsigned(token.tokidx)) << 20u;
}

static unsigned tokenHash_EaKUI636(const s_WriteID& w)
{
    return w._locid_and_hash & 0xfff00000u;
}

static fu::str RWEvent_stack_Ct5QDEnZ(const s_WriteID& write, const s_SolvedNode& root, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int locid = locid_eyMSeXbN(write);

    {
        const s_SolvedNode& node = root;
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_1Hlf3jIq(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_oTYbwQb8(node_1.target, ss, _helpers, _here, ctx, module).solved : node_1);
            const s_SolvedNode& node_3 = ((node_2.kind == s_kind___preceding_ref_arg) ? _current_fn.events.preceding_ref_args[node_2.helpers.index].arg : node_2);

            {
                const s_CurrentFn& _current_fn_1 = _current_fn;
                if (!(tokenHash_venKZknz(node_3.token) != tokenHash_EaKUI636(write)))
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
                                    const s_Argument& host_arg = EXT_x9dYoBLb(node_3.target, ss, ctx, module).args[i];
                                    if (host_arg.flags & s_Flags_F_WRITTEN_TO)
                                    {
                                        fu::str _0 {};
                                        return (_0 = x7E_gCeFmDFw((addr_and_snippet_2bGH8tqt(node_3.token, s_CodeFmt{}, fu::view<char>{}, ctx, module) + "\n\tAt call to "_fu), str_sdDZgf4z(GET_oTYbwQb8(node_3.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), (static_cast<fu::str&&>(_0) + qSTACK_XWgwXpjF(s_Target(node_3.target), i, fu::view<s_Target>{}, s_ArgQuery{}, ss, _current_fn_1, _helpers, _here, ctx, module)));
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
                                    return (addr_and_snippet_2bGH8tqt(arg.token, s_CodeFmt{}, fu::view<char>{}, ctx, module) + "\n\tvia pragma "_fu) + qID_3PsDzMvu(node_3.value);
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
    return x7E_gCeFmDFw("\n\n\tCOMPILER BUG: RWEvent_stack could not find write to "_fu, str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(locid_eyMSeXbN(write), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module));
}

                                #ifndef DEF_str_rqFdzu6zgHe
                                #define DEF_str_rqFdzu6zgHe
inline fu::str str_rqFdzu6z(const s_BorrowCheckPass n)
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

[[noreturn]] static fu::never cannotFailAfterBCK_1CaTVxAT(const fu::str& reason, const s_BorrowCheckPass pass, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (pass == s_BorrowCheckPass_BCK_bck)
        fail_Szrpd5G6(reason, ss, _helpers, _here, ctx, module);
    else
        BUG_zwQElfxV((x7E_gCeFmDFw(str_rqFdzu6z(pass), " is trying to emit an error:\n\n\t"_fu) + reason), ss, _helpers, _here, ctx, module);

}

static void bck_trackRead_wGhSWphE(const s_SolvedNode& callsite, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!isLocal_nMI8cChU(callsite.target)))
    {
        _here = callsite.token;
        int BL_2_v {};
        const int target = (__extension__ (
        {
            const s_Target& t = callsite.target;
            BL_2_v = (int(unsigned((t._packed & 0xfffffull))));
        (void)0;}), BL_2_v);
        const int loop_start = (callsite._loop_start ? callsite._loop_start : BUG_zwQElfxV("bck_trackRead: loop_start not set on callsite."_fu, ss, _helpers, _here, ctx, module));
        TEST_varLifetime_sPLjW7ch(callsite.type.lifetime, TODO_FIX_static_ZSTs, target, ss, _helpers, _here, ctx, module);
        if (events_AfdJjf5X(_current_fn).snap.invalidated_by.size() > target)
        {
            fu::vec<s_WriteID> u { events_AfdJjf5X(_current_fn).snap.invalidated_by[target] };
            if (u)
            {
                if (((pass == s_BorrowCheckPass_BCK_aar) ? !RESOLVE_byAAR_NnYOs4tY(u, target, true, pass, ss, _current_fn, _helpers, _here, ctx, module) : !RESOLVE_byMutvar_r8FpLETs(target, pass, ss, _helpers, _here, ctx, module)))
                {
                    fu::str _0 {};
                    fu::str _1 {};
                    (_1 = (_0 = (x7E_gCeFmDFw(((x7E_gCeFmDFw(("Cannot access"_fu + " "_fu), str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ", reference invalidated by write to"_fu) + " "_fu), str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(locid_eyMSeXbN(first_B5STuDZh(u)), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu), (static_cast<fu::str&&>(_0) + RWEvent_stack_Ct5QDEnZ(first_B5STuDZh(u), root, ss, _current_fn, _helpers, _here, ctx, module))), cannotFailAfterBCK_1CaTVxAT(static_cast<fu::str&&>(_1), pass, ss, _helpers, _here, ctx, module));
                }
                else
                {
                    events_AfdJjf5X(_current_fn).snap.invalidated_by.mutref(target) = fu::vec<s_WriteID>{};
                };
            };
        };
        if (target < loop_start)
            add_U5p6nLOf(events_AfdJjf5X(_current_fn).used_in_a_loop, target);

    };
}

inline static void l_30_103_gJNXVBZc(const int i, const s_Argument& host_arg, const bool ooe_isLast, s_SolvedNode& callsite, int& pra_first, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if ((pra_first >= 0))
        _current_fn.events.preceding_ref_args.mutref(pra_first).w = i;

    s_SolvedNode& arg = args_jZKsBk2k(callsite).mutref(i);
    bck_node_etixA00n(arg, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (!ooe_isLast && is_ref_gBx1AgSx(arg.type) && is_ref_gBx1AgSx(host_arg.type))
    {
        /*MOV*/ s_SolvedNode pra {};
        pra.kind = s_kind___preceding_ref_arg;
        const int pra_index = _current_fn.events.preceding_ref_args.size();
        pra.helpers.index = pra_index;
        if (pra_first < 0)
            pra_first = pra_index;

        std::swap(pra, arg);
        _current_fn.events.preceding_ref_args += s_PrecedingRefArg { s_TokenIdx(callsite.token), s_Target(target_6F5qhEWP(callsite)), i, -1, static_cast<s_SolvedNode&&>(pra) };
    };
}

                                #ifndef DEF_argsForward_sdMkjYLWWG2
                                #define DEF_argsForward_sdMkjYLWWG2
inline void argsForward_sdMkjYLW(const bool RTL, fu::view<s_Argument> host_args, const int seqIdx_start, s_SolvedNode& callsite, int& pra_first, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
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
                    l_30_103_gJNXVBZc(i, host_arg, (seqIdx == (host_args.size() - 1)), callsite, pra_first, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                seqIdx++;
            };
        };
    };
}
                                #endif

inline static void l_30_104_SzFVttKW(const int locid, int& arg_first, int& arg_last, const int i0)
{
    if (locid)
    {
        arg_first = ((arg_first < 0) ? i0 : arg_first);
        arg_last = i0;
    };
}

                                #ifndef DEF_Lifetime_each_0uYEazmT7F0
                                #define DEF_Lifetime_each_0uYEazmT7F0
inline void Lifetime_each_0uYEazmT(const s_Lifetime& lifetime, int& arg_first, int& arg_last, const int i0)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_104_SzFVttKW(int(((r & 1u) ? 0u : (r >> 1u))), arg_first, arg_last, i0);
    };
}
                                #endif

inline static void l_30_105_Vdw4MoHt(const int locid, int& arg_first, int& arg_last, const int i0)
{
    if (locid)
    {
        arg_first = ((arg_first < 0) ? i0 : arg_first);
        arg_last = i0;
    };
}

                                #ifndef DEF_Lifetime_each_xAS9m5gld84
                                #define DEF_Lifetime_each_xAS9m5gld84
inline void Lifetime_each_xAS9m5gl(const s_Lifetime& lifetime, int& arg_first, int& arg_last, const int i0)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_105_Vdw4MoHt(int(((r & 1u) ? 0u : (r >> 1u))), arg_first, arg_last, i0);
    };
}
                                #endif

static bool softRiskSafe_ojI7EsGh(const s_SolvedNode& arg, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return isFieldChain_JgEZs3yn(arg, ss, _helpers, _here, ctx, module);
}

inline static void l_30_107_qnhXKB5v(const int region1, const int region0, const int i1, const s_Argument& host_arg1, const s_SolvedNode& arg1, const int i0, const s_Argument& host_arg0, const s_SolvedNode& arg0, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!(region1 && (region0 != region1))))
    {
        if (is_mutref_hoadAQC0(host_arg0.type, _here, ctx))
            RESOLVE_byAAR_Fzey23bc(region1, region0, (has_QTGTghRU(host_arg0.may_alias, i1) ? softRiskSafe_ojI7EsGh(arg1, ss, _helpers, _here, ctx, module) : false), pass, ss, _current_fn, _helpers, _here, ctx, module);

        if (is_mutref_hoadAQC0(host_arg1.type, _here, ctx))
            RESOLVE_byAAR_Fzey23bc(region0, region1, (has_QTGTghRU(host_arg1.may_alias, i0) ? softRiskSafe_ojI7EsGh(arg0, ss, _helpers, _here, ctx, module) : false), pass, ss, _current_fn, _helpers, _here, ctx, module);

    };
}

                                #ifndef DEF_Lifetime_each_VQTLNTYtYti
                                #define DEF_Lifetime_each_VQTLNTYtYti
inline void Lifetime_each_VQTLNTYt(const s_Lifetime& lifetime, const int region0, const int i1, const s_Argument& host_arg1, const s_SolvedNode& arg1, const int i0, const s_Argument& host_arg0, const s_SolvedNode& arg0, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_107_qnhXKB5v(int(((r & 1u) ? 0u : (r >> 1u))), region0, i1, host_arg1, arg1, i0, host_arg0, arg0, pass, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

inline static void l_30_106_Dj8bZOgW(const int region0, const int i1, const s_Argument& host_arg1, const s_SolvedNode& arg1, const s_Lifetime& shallow1, const int i0, const s_Argument& host_arg0, const s_SolvedNode& arg0, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!region0))
    {
        Lifetime_each_VQTLNTYt(shallow1, region0, i1, host_arg1, arg1, i0, host_arg0, arg0, pass, ss, _current_fn, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_Lifetime_each_FUrtIqWbV61
                                #define DEF_Lifetime_each_FUrtIqWbV61
inline void Lifetime_each_FUrtIqWb(const s_Lifetime& lifetime, const int i1, const s_Argument& host_arg1, const s_SolvedNode& arg1, const s_Lifetime& shallow1, const int i0, const s_Argument& host_arg0, const s_SolvedNode& arg0, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_106_Dj8bZOgW(int(((r & 1u) ? 0u : (r >> 1u))), i1, host_arg1, arg1, shallow1, i0, host_arg0, arg0, pass, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static bool isInvalidatedBy_u1SOPvZW(const s_Lifetime& read, const s_Lifetime& write, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx)
{

    {
        fu::view<char> chars = write.uni0n;
        int offset = 0;
        while (offset < chars.size())
        {
            const unsigned r = parse7bit(chars, offset);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            if (locid && Lifetime_hasInter_lYlULmp8(read, unless_oob_pcvjJeir(flow_6fvDawde(_current_fn).rg_invalidates, locid), _here, ctx))
                return true;

        };
    };
    return false;
}

inline static bool l_30_108_MT2K9Taw(const int locid, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (locid)
        return !(GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module).flags & s_Flags_F_INJECTED);
    else
        return false;

}

                                #ifndef DEF_Lifetime_some_JlrCmaOs7f7
                                #define DEF_Lifetime_some_JlrCmaOs7f7
inline bool Lifetime_some_JlrCmaOs(const s_Lifetime& lifetime, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    {
        fu::view<char> chars = lifetime.uni0n;
        int offset = 0;
        while (offset < chars.size())
        {
            const unsigned r = parse7bit(chars, offset);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            if (l_30_108_MT2K9Taw(locid, ss, _helpers, _here, ctx, module))
                return true;

        };
    };
    return false;
}
                                #endif

static s_ArgRationale requireVal_tQ2fAYkO(const s_Argument& other, const s_SolvedNode& other_arg, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(other.flags & s_Flags_F_INJECTED) || !Lifetime_some_JlrCmaOs(other_arg.type.lifetime, ss, _helpers, _here, ctx, module))
    {
        return s_ArgRationale{};
    }
    else
        return s_ArgRationale_RequireVal_AliasesMutatedInjectedArgument;

}

static bool RESOLVE_byMutvar_O3Ao0Mh7(const s_Target& target, const s_BorrowCheckPass pass, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int BL_1_v {};
    if (int(unsigned(((target._packed >> 20ull) & 0xfffffull))) == (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v))
        return RESOLVE_byMutvar_r8FpLETs(int(unsigned((target._packed & 0xfffffull))), pass, ss, _helpers, _here, ctx, module);
    else
        return false;

}

static s_ArgRationale RESOLVE_byTempCopy_lBTPjsk8(s_SolvedNode& arg, const s_Target& target, const int position, const fu::str& debug, const s_ArgRationale requireVal, const s_BorrowCheckPass pass, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (pass == s_BorrowCheckPass_BCK_bck)
    {
        if (_current_fn.asserts & s_DeclAsserts_A_FAST)
            return s_ArgRationale_CantTempCopy_FastFn;
        else
        {
            fu::vec<s_Argument> host_args { EXT_x9dYoBLb(target, ss, ctx, module).args };
            s_Argument BL_4_v {};
            s_Argument host_arg = (__extension__ (
            {
                const s_Argument& __partcopy_ref = host_args[position];
                BL_4_v = (s_Argument { {}, {}, s_Type(__partcopy_ref.type), {}, __partcopy_ref.flags, {}, {}, {} });
            (void)0;}), static_cast<s_Argument&&>(BL_4_v));
            if (!is_rx_copy_GSunVkiW(arg.type))
                return s_ArgRationale_CantTempCopy_NonCopiable;
            else if ((arg.kind == s_kind_call) && RESOLVE_byMutvar_O3Ao0Mh7(arg.target, pass, ss, _current_fn, _helpers, _here, ctx, module))
            {
                return s_ArgRationale{};
            }
            else
            {
                const s_ArgRationale r = rejectsTempCopies_0fNG4Leq(host_arg, requireVal, _here, ctx);
                if (r)
                    return r;
                else
                {
                    const bool isReturned = Lifetime_has_NRjdLNHo(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).type.lifetime, position);
                    if (isReturned)
                        return s_ArgRationale_CantTempCopy_ReturnedFromFn;
                    else
                    {
                        const s_Type& slot = host_args[position].type;
                        s_Type slot_1 = make_copyable_40rRB6L8(clear_refs_40rRB6L8(s_Type(slot)));
                        maybeCopyOrMove_9xQ8JW0m(arg, slot_1, false, debug, ss, _helpers, _here, ctx, module);
                        return s_ArgRationale{};
                    };
                };
            };
        };
    }
    else
    {
        BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

static s_ArgRationale RESOLVE_byTempCopy_Ky45pjZI(s_SolvedNode& callsite, const int position, const fu::str& debug, const s_ArgRationale requireVal, const s_BorrowCheckPass pass, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target target { callsite.target };
    s_SolvedNode& arg = callsite.items.mutref(position);
    return RESOLVE_byTempCopy_lBTPjsk8(arg, target, position, debug, requireVal, pass, ss, _current_fn, _helpers, _here, ctx, module);
}

inline static fu::str& l_30_109_zTIOuHol(const int locid, fu::str& err, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return (err += ("\n\t    "_fu + explainWhichFn_KACWd7In(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn, _helpers, _here, ctx, module)));
}

                                #ifndef DEF_each_PxJDkKtqthh
                                #define DEF_each_PxJDkKtqthh
inline void each_PxJDkKtq(fu::view<int> a, fu::str& err, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < a.size(); i++)
        l_30_109_zTIOuHol(a[i], err, ss, _current_fn, _helpers, _here, ctx, module);

}
                                #endif

static fu::str ArgRationale_explain_Fel1sDVR(const s_ArgRationale r, const s_Target& callee, const s_SolvedNode& arg, const s_Argument& host_arg, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (r == s_ArgRationale_CantTempCopy_FastFn)
        return "Temporary copies not allowed in fast fns."_fu;
    else if (r == s_ArgRationale_CantTempCopy_NonCopiable)
        return x7E_gCeFmDFw(str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module), " is non-copyable: "_fu) + humanizeType_kB3Te7GK(arg.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module);
    else if (r == s_ArgRationale_CantTempCopy_HostArg_Ref)
        return x7E_gCeFmDFw(str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module), " is "_fu) + qBAD_3PsDzMvu("ref"_fu);
    else if (r == s_ArgRationale_CantTempCopy_HostArg_Implicit)
        return x7E_gCeFmDFw(str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module), " is "_fu) + qBAD_3PsDzMvu("implicit"_fu);
    else if (r == s_ArgRationale_CantTempCopy_HostArg_MutRef)
        return x7E_gCeFmDFw(str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module), " is a mutref: "_fu) + humanizeType_kB3Te7GK(arg.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module);
    else if (r == s_ArgRationale_CantTempCopy_ReturnedFromFn)
        return x7E_gCeFmDFw(x7E_gCeFmDFw(str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module), " is ref-returned from "_fu), str_sdDZgf4z(GET_oTYbwQb8(callee, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module));
    else if (r == s_ArgRationale_RequireVal_AliasesMutatedInjectedArgument)
    {
        return x7E_gCeFmDFw(((((((((((((((x7E_gCeFmDFw(str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module), " needs an explicit "_fu) + qKW_3PsDzMvu("ref"_fu)) + " or "_fu) + qKW_3PsDzMvu("val"_fu)) + " for disambiguation:"_fu) + "\n\n\t\t- Use "_fu) + qKW_3PsDzMvu("ref"_fu)) + " if you want "_fu) + str_YPnuP2Bh(host_arg, true, ss, _current_fn, _helpers, _here, ctx, module)) + " to reflect changes made to the aliased injected arg."_fu) + "\n\n\t\t- Use "_fu) + qKW_3PsDzMvu("val"_fu)) + " if you want "_fu) + str_YPnuP2Bh(host_arg, true, ss, _current_fn, _helpers, _here, ctx, module)) + " to remain constant throughout "_fu), str_sdDZgf4z(GET_oTYbwQb8(callee, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module));
    }
    else
        BUG_zwQElfxV("Unknown reason."_fu, ss, _helpers, _here, ctx, module);

}

static void validate_OPUSaBEB(const int i1, s_SolvedNode& callsite, fu::view<s_Argument> host_args, fu::view<s_Lifetime> bck_unwound, const int arg_first, const int arg_last, const int i0, const s_Argument& host_arg0, const s_SolvedNode& arg0, const s_Lifetime& shallow0, const s_Lifetime& unwound0, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Argument& host_arg1 = host_args[i1];
    if (!(has_QTGTghRU(host_arg0.may_invalidate, i1) && has_QTGTghRU(host_arg1.may_invalidate, i0)))
    {
        s_SolvedNode BL_2_v {};
        s_SolvedNode arg1 = (__extension__ (
        {
            const s_SolvedNode& __partcopy_ref = args_jZKsBk2k(callsite)[i1];
            BL_2_v = (s_SolvedNode { __partcopy_ref.kind, {}, {}, {}, {}, fu::vec<s_SolvedNode>(__partcopy_ref.items), {}, s_Type(__partcopy_ref.type), s_Target(__partcopy_ref.target) });
        (void)0;}), static_cast<s_SolvedNode&&>(BL_2_v));
        const s_Lifetime& shallow1 = arg1.type.lifetime;
        if (pass == s_BorrowCheckPass_BCK_aar)
        {
            if ((i0 >= arg_first) && (i0 <= arg_last) && (i1 >= arg_first) && (i1 <= arg_last))
            {
                Lifetime_each_FUrtIqWb(shallow0, i1, host_arg1, arg1, shallow1, i0, host_arg0, arg0, pass, ss, _current_fn, _helpers, _here, ctx, module);
            };
        }
        else
        {
            const s_Lifetime& unwound1 = bck_unwound[i1];
            if (!(!Lifetime_hasInter_lYlULmp8(unwound0, unwound1, _here, ctx)))
            {
                if (has_QTGTghRU(host_arg0.may_alias, i1) && has_QTGTghRU(host_arg1.may_alias, i0))
                {
                    if ((has_QTGTghRU(host_arg0.may_invalidate, i1) || (softRiskSafe_ojI7EsGh(arg1, ss, _helpers, _here, ctx, module) && !isInvalidatedBy_u1SOPvZW(shallow1, shallow0, _current_fn, _here, ctx))) && (has_QTGTghRU(host_arg1.may_invalidate, i0) || (softRiskSafe_ojI7EsGh(arg0, ss, _helpers, _here, ctx, module) && !isInvalidatedBy_u1SOPvZW(shallow0, shallow1, _current_fn, _here, ctx))))
                    {

                        {
                            const s_SolverNotes note = s_SolverNotes_N_AARSoftRisk;
                            if (note & options.break_notes)
                                fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss, _helpers, _here, ctx, module);
                            else
                                _notes |= note;

                        };
                        return;
                    };
                };
                s_ArgRationale noTempCopy0 {};
                s_ArgRationale noTempCopy1 {};
                if ((noTempCopy0 = RESOLVE_byTempCopy_Ky45pjZI(callsite, i0, x7E_gCeFmDFw("bck:vi "_fu, fu::i64dec(i1)), requireVal_tQ2fAYkO(host_arg1, arg1, ss, _helpers, _here, ctx, module), pass, ss, _current_fn, _helpers, _here, ctx, module)) && (noTempCopy1 = RESOLVE_byTempCopy_Ky45pjZI(callsite, i1, x7E_gCeFmDFw("bck:vi "_fu, fu::i64dec(i0)), requireVal_tQ2fAYkO(host_arg0, arg0, ss, _helpers, _here, ctx, module), pass, ss, _current_fn, _helpers, _here, ctx, module)))
                {
                    fu::str err = ("At call to "_fu + str_sdDZgf4z(GET_oTYbwQb8(target_6F5qhEWP(callsite), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module));
                    err += (((host_args.size() == 2) && (GET_oTYbwQb8(target_6F5qhEWP(callsite), ss, _helpers, _here, ctx, module).flags & s_Flags_F_OPERATOR)) ? ", both operands alias:\n"_fu : (x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw(", arguments:\n\n\t    "_fu, fu::i64dec((i0 + 1))) + ":\t"_fu), str_YPnuP2Bh(host_arg0, false, ss, _current_fn, _helpers, _here, ctx, module)) + " and\n\t    "_fu), fu::i64dec((i1 + 1))) + ":\t"_fu), str_YPnuP2Bh(host_arg1, false, ss, _current_fn, _helpers, _here, ctx, module)) + "\n\n\t    both alias:\n"_fu));
                    each_PxJDkKtq(Lifetime_interLocids_lYlULmp8(unwound0, unwound1, _here, ctx), err, ss, _current_fn, _helpers, _here, ctx, module);
                    fu::str noTempCopy0_1 = ArgRationale_explain_Fel1sDVR(noTempCopy0, target_6F5qhEWP(callsite), arg0, host_arg0, ss, _current_fn, _helpers, _here, ctx, module);
                    fu::str noTempCopy1_1 = ArgRationale_explain_Fel1sDVR(noTempCopy1, target_6F5qhEWP(callsite), arg1, host_arg1, ss, _current_fn, _helpers, _here, ctx, module);
                    err += "\n\tCannot resolve aliasing by a temporary copy:"_fu;
                    err += ("\n\n\t    "_fu + noTempCopy0_1);
                    if (noTempCopy0_1 != noTempCopy1_1)
                        err += ("\n\n\t    "_fu + noTempCopy1_1);

                    _here = args_jZKsBk2k(callsite)[i0].token;
                    cannotFailAfterBCK_1CaTVxAT(err, pass, ss, _helpers, _here, ctx, module);
                };
            };
        };
    };
}

static void visit_2YexueLU(const s_Lifetime& lifetime, s_Lifetime& result, const bool maybeOutOfOrder, const s_Lifetime& all_written, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx)
{
    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;

        { {
            const unsigned r = parse7bit(chars, offset);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };

            {
                const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
                const s_Lifetime& parents = unless_oob_pcvjJeir(flow_6fvDawde(_current_fn).rg_parents, locid);
                if (Lifetime_hasInter_lYlULmp8(parents, all_written, _here, ctx))
                    goto BL_3;

            };
            continue;
          } BL_3:;
        };
        if (maybeOutOfOrder)
        {
            result = Lifetime_union_YIGC7Sux(result, s_Lifetime { fu::slice(chars, offset0, offset) }, false, _here, ctx);
        }
        else
            result.uni0n += fu::get_view(chars, offset0, offset);

    };
}

                                #ifndef DEF_Lifetime_process_Hmc4LQww0g2
                                #define DEF_Lifetime_process_Hmc4LQww0g2
inline s_Lifetime Lifetime_process_Hmc4LQww(const s_Lifetime& lifetime, const s_Lifetime& all_written, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ s_Lifetime result {};
    const bool maybeOutOfOrder = false;
    visit_2YexueLU(lifetime, result, maybeOutOfOrder, all_written, _current_fn, _here, ctx);
    return /*NRVO*/ result;
}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_ZiE5iFpx(fu::vec<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static bool checkLoopStart_pieGR4ms(const int _loop_start, const int loop_start, const s_SolverState& ss)
{
    if ((_loop_start <= loop_start))
        return _loop_start == loop_start;
    else
    {
        for (int i = 0; i < ss._helpers_data.size(); i++)
        {
            const s_HelpersData& h = ss._helpers_data[i];
            if (h.locals_start == _loop_start)
                return checkLoopStart_pieGR4ms(h.postdom.parent_loop_start, loop_start, ss);

        };
        return false;
    };
}

inline static bool l_30_91_PSGc8pxr(const s_SolvedNode& node, const int read, const int loop_start, const s_SolverState& ss)
{
    int BL_1_v {};
    if ((node.kind == s_kind_call) && isLocal_nMI8cChU(node.target) && ((__extension__ (
    {
        const s_Target& t = node.target;
        BL_1_v = (int(unsigned((t._packed & 0xfffffull))));
    (void)0;}), BL_1_v) == read))
        return checkLoopStart_pieGR4ms(node._loop_start, loop_start, ss);
    else
        return false;

}

inline static s_SolvedNode SLOW_find_vgMtRqqv(const int read, const int loop_start, const s_SolvedNode& root, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    {
        const s_SolvedNode& node = root;
        fu::vec<s_SolvedNode> stack = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_ZiE5iFpx(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_oTYbwQb8(node_1.target, ss, _helpers, _here, ctx, module).solved : node_1);
            const s_SolvedNode& node_3 = ((node_2.kind == s_kind___preceding_ref_arg) ? _current_fn.events.preceding_ref_args[node_2.helpers.index].arg : node_2);
            if (l_30_91_PSGc8pxr(node_3, read, loop_start, ss))
                return s_SolvedNode(node_3);
            else
                for (int i = node_3.items.size(); i-- > 0; )
                    stack += s_SolvedNode(node_3.items[i]);
;
        };
    };
    return s_SolvedNode{};
}

static s_SolvedNode SLOW_findByReadID_CQF1lehg(const int read, const int loop_start, const s_SolvedNode& root, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    s_SolvedNode _0 {};
    return (_0 = SLOW_find_vgMtRqqv(read, loop_start, root, ss, _current_fn, _helpers, _here, ctx, module)) ? static_cast<s_SolvedNode&&>(_0) : BUG_zwQElfxV((x7E_gCeFmDFw((x7E_gCeFmDFw("Cannot find read("_fu, str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(read, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ") in loop("_fu), fu::i64dec(loop_start)) + ")."_fu), ss, _helpers, _here, ctx, module);
}

static fu::str qSTACK_llh6pkWn(const s_SolvedNode& callsite, const int write, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<s_SolvedNode> args = callsite.items;
    fu::view<s_Argument> host_args = ((callsite.kind == s_kind_call) ? EXT_x9dYoBLb(callsite.target, ss, ctx, module).args : fu::view<s_Argument>{});
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
                    return qSTACK_XWgwXpjF(callsite.target, i, fu::view<s_Target>{}, s_ArgQuery{}, ss, _current_fn, _helpers, _here, ctx, module);
                };
            };
        };
    };
    return ""_fu;
}

inline static void l_30_101_508swN7T(const int read, const int write, const s_SolvedNode& callOrPragma, const int loop_start, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (read)
    {
        if (read < loop_start)
        {
            if (has_QTGTghRU(events_AfdJjf5X(_current_fn).used_in_a_loop, read))
            {
                if (pass == s_BorrowCheckPass_BCK_aar)
                    RESOLVE_byAAR_Fzey23bc(read, write, true, pass, ss, _current_fn, _helpers, _here, ctx, module);
                else
                {
                    if (!(RESOLVE_byMutvar_r8FpLETs(read, pass, ss, _helpers, _here, ctx, module)))
                    {
                        fu::str _0 {};
                        fu::str _1 {};
                        (_1 = (_0 = (((x7E_gCeFmDFw(((x7E_gCeFmDFw("Write to "_fu, str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(write, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ((callOrPragma.kind == s_kind_call) ? x7E_gCeFmDFw(" at call to "_fu, str_sdDZgf4z(GET_oTYbwQb8(callOrPragma.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) : fu::str{})) + " invalidates the use of "_fu), str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(read, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at "_fu) + addr_and_snippet_2bGH8tqt(SLOW_findByReadID_CQF1lehg(read, loop_start, root, ss, _current_fn, _helpers, _here, ctx, module).token, s_CodeFmt{}, fu::view<char>{}, ctx, module)) + "\n\t... on next loop iteration.\n\n\tWritten"_fu), (static_cast<fu::str&&>(_0) + qSTACK_llh6pkWn(callOrPragma, write, ss, _current_fn, _helpers, _here, ctx, module))), cannotFailAfterBCK_1CaTVxAT(static_cast<fu::str&&>(_1), pass, ss, _helpers, _here, ctx, module));
                    };
                };
            };
        };
    }
    else
        BUG_zwQElfxV("bck_trackWrites: invalidates contains non-locals."_fu, ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_Lifetime_each_tgzuF3lLA2e
                                #define DEF_Lifetime_each_tgzuF3lLA2e
inline void Lifetime_each_tgzuF3lL(const s_Lifetime& lifetime, const int write, const s_SolvedNode& callOrPragma, const int loop_start, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_101_508swN7T(int(((r & 1u) ? 0u : (r >> 1u))), write, callOrPragma, loop_start, root, pass, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static s_WriteID WriteID_ZfUTnH47(const int locid, const s_TokenIdx& token, const s_BorrowCheckPass pass)
{
    return s_WriteID { (unsigned(locid) | ((pass == s_BorrowCheckPass_BCK_bck) ? tokenHash_venKZknz(token) : 0u)) };
}

inline static void l_30_88_D9bzk0ci(const int read, const int write, const bool trySoft, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (read && (read != write))
        RESOLVE_byAAR_Fzey23bc(read, write, trySoft, pass, ss, _current_fn, _helpers, _here, ctx, module);

}

                                #ifndef DEF_each_k7fXFeOFj8e
                                #define DEF_each_k7fXFeOFj8e
inline void each_k7fXFeOF(fu::view<int> a, const int write, const bool trySoft, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < a.size(); i++)
        l_30_88_D9bzk0ci(a[i], write, trySoft, pass, ss, _current_fn, _helpers, _here, ctx, module);

}
                                #endif

static bool RESOLVE_byAAR_RYnv3IyL(const int write, fu::view<int> reads, const bool trySoft, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    each_k7fXFeOF(reads, write, trySoft, pass, ss, _current_fn, _helpers, _here, ctx, module);
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

inline static void l_30_102_lOkSyHnr(const int invalidatee, const int write, const s_WriteID& writeID, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::vec<s_WriteID>& set = grow_if_oob_RboYuHKW(events_AfdJjf5X(_current_fn).snap.invalidated_by, invalidatee);
    if (pass == s_BorrowCheckPass_BCK_bck)
    {
        if (!set)
            set += s_WriteID(writeID);

    }
    else if (int(writeID._locid_and_hash) == write)
        add_9xxHJudC(set, writeID);
    else
        BUG_zwQElfxV("AAR: writeID._locid != write locid, set::add wont be able to dedupe"_fu, ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_Lifetime_each_pduDCbkEsF5
                                #define DEF_Lifetime_each_pduDCbkEsF5
inline void Lifetime_each_pduDCbkE(const s_Lifetime& lifetime, const int write, const s_WriteID& writeID, const s_BorrowCheckPass pass, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_102_lOkSyHnr(int(((r & 1u) ? 0u : (r >> 1u))), write, writeID, pass, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

inline static void l_30_99_5WnyBj3v(const int write, const s_Lifetime& write_region, fu::view<char> write_paths, const s_SolvedNode& callOrPragma, const int loop_start, const bool OPTI_isLoop, const bool OPTI_hasPRA, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!write))
    {
        /*MOV*/ s_Lifetime all_written { write_region };
        Lifetime_add_PUWFQPIX(all_written, Lifetime_op_join_dwN33Lug(unless_oob_pcvjJeir(flow_6fvDawde(_current_fn).rg_parents, write), write_paths, _here, ctx), false, _here, ctx);
        const s_Lifetime& invalidates = unless_oob_pcvjJeir(flow_6fvDawde(_current_fn).rg_invalidates, write);
        if (Lifetime_has_62UtfSbx(invalidates, write))
            BUG_zwQElfxV(x7E_gCeFmDFw("flow.invalidates[write].has(write): "_fu, str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(write, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
        else
        {
            s_Lifetime invalidates_1 = Lifetime_process_Hmc4LQww(invalidates, all_written, _current_fn, _here, ctx);
            if (OPTI_isLoop)
            {
                Lifetime_each_tgzuF3lL(invalidates_1, write, callOrPragma, loop_start, root, pass, ss, _current_fn, _helpers, _here, ctx, module);
            };
            const s_WriteID writeID = WriteID_ZfUTnH47(write, callOrPragma.token, pass);
            if (OPTI_hasPRA)
            {
                s_Lifetime all_written_and_invalidated = static_cast<s_Lifetime&&>(all_written);
                Lifetime_add_PUWFQPIX(all_written_and_invalidated, invalidates_1, true, _here, ctx);
                int w = -1;
                for (int i = 0; i < _current_fn.events.preceding_ref_args.size(); i++)
                {
                    s_PrecedingRefArg& pra = _current_fn.events.preceding_ref_args.mutref(i);
                    if (pra.w < 0)
                    {
                        if (!((w >= 0)))
                            BUG_zwQElfxV("preceding_ref_args: No leading .w position."_fu, ss, _helpers, _here, ctx, module);

                    }
                    else
                        w = pra.w;

                    const int r = pra.r;
                    const s_Lifetime& bound = pra.arg.type.lifetime;
                    fu::vec<int> inter = Lifetime_interLocids_lYlULmp8(bound, all_written_and_invalidated, _here, ctx);
                    if (!(!inter))
                    {
                        if (((pass == s_BorrowCheckPass_BCK_aar) ? !RESOLVE_byAAR_RYnv3IyL(write, inter, softRiskSafe_ojI7EsGh(pra.arg, ss, _helpers, _here, ctx, module), pass, ss, _current_fn, _helpers, _here, ctx, module) : !!RESOLVE_byTempCopy_lBTPjsk8(pra.arg, pra.target, r, x7E_gCeFmDFw("bck:pra "_fu, fu::i64dec(write)), s_ArgRationale{}, pass, ss, _current_fn, _helpers, _here, ctx, module)))
                        {
                            const s_PrecedingRefArg& pra_1 = _current_fn.events.preceding_ref_args[i];
                            _here = pra_1.callsite_token;
                            fu::str _0 {};
                            fu::str _1 {};
                            (_1 = (_0 = (x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw((((x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("At call to "_fu, str_sdDZgf4z(GET_oTYbwQb8(pra_1.target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + ", binding for "_fu), str_YPnuP2Bh(EXT_x9dYoBLb(pra_1.target, ss, ctx, module).args[r], false, ss, _current_fn, _helpers, _here, ctx, module)) + " (arg #"_fu), fu::i64dec(r)) + ") at "_fu) + addr_and_snippet_2bGH8tqt(pra_1.arg.token, s_CodeFmt{}, fu::view<char>{}, ctx, module)) + "\n\t... invalidated by subsequent write to "_fu), str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(write, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " upon evaluation of "_fu), str_YPnuP2Bh(EXT_x9dYoBLb(pra_1.target, ss, ctx, module).args[w], false, ss, _current_fn, _helpers, _here, ctx, module)) + " (arg #"_fu), fu::i64dec(w)) + ") at "_fu), (static_cast<fu::str&&>(_0) + RWEvent_stack_Ct5QDEnZ(writeID, root, ss, _current_fn, _helpers, _here, ctx, module))), cannotFailAfterBCK_1CaTVxAT(static_cast<fu::str&&>(_1), pass, ss, _helpers, _here, ctx, module));
                        };
                    };
                };
            };
            Lifetime_each_pduDCbkE(invalidates_1, write, writeID, pass, ss, _current_fn, _helpers, _here, ctx, module);
        };
    };
}

                                #ifndef DEF_Lifetime_each_uvVAQrV7rZ3
                                #define DEF_Lifetime_each_uvVAQrV7rZ3
inline void Lifetime_each_uvVAQrV7(const s_Lifetime& lifetime, const s_SolvedNode& callOrPragma, const int loop_start, const bool OPTI_isLoop, const bool OPTI_hasPRA, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    // Hoisted:
    int offset0_1;

    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parse7bit(chars, offset);
        int BL_3_v {};
        const int sr = (__extension__ (
        {
            offset0_1 = (offset + 0);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            BL_3_v = (offset0_1);
        (void)0;}), BL_3_v);
        l_30_99_5WnyBj3v(int(((r & 1u) ? 0u : (r >> 1u))), s_Lifetime { fu::slice(chars, offset0, offset) }, fu::get_view(chars, sr, offset), callOrPragma, loop_start, OPTI_isLoop, OPTI_hasPRA, root, pass, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static void bck_trackWrites_EGmn8G6O(const s_SolvedNode& callOrPragma, const s_Lifetime& lifetime, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int loop_start = (callOrPragma._loop_start ? callOrPragma._loop_start : BUG_zwQElfxV("bck_trackWrites: _loop_start not set on callsite."_fu, ss, _helpers, _here, ctx, module));
    const bool OPTI_isLoop = ((loop_start != 1) ? !!events_AfdJjf5X(_current_fn).used_in_a_loop : false);
    const bool OPTI_hasPRA = !!events_AfdJjf5X(_current_fn).preceding_ref_args;
    Lifetime_each_uvVAQrV7(lifetime, callOrPragma, loop_start, OPTI_isLoop, OPTI_hasPRA, root, pass, ss, _current_fn, _helpers, _here, ctx, module);
}

static void bck_call_7GvYCzlV(s_SolvedNode& callsite, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (!args_jZKsBk2k(callsite))
    {
        if (GET_oTYbwQb8(target_6F5qhEWP(callsite), ss, _helpers, _here, ctx, module).kind == s_kind_var)
            bck_trackRead_wGhSWphE(callsite, root, pass, ss, _current_fn, _helpers, _here, ctx, module);

    }
    else
    {
        const bool RTL = isRTL_N4q4L7uF(GET_oTYbwQb8(target_6F5qhEWP(callsite), ss, _helpers, _here, ctx, module));
        fu::vec<s_Argument> host_args { EXT_x9dYoBLb(target_6F5qhEWP(callsite), ss, ctx, module).args };

        {
            const int pra_len0 = _current_fn.events.preceding_ref_args.size();
            int pra_first = -1;
            argsForward_sdMkjYLW(RTL, host_args, 0, callsite, pra_first, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            for (int i = 0; i < args_jZKsBk2k(callsite).size(); i++)
            {
                s_SolvedNode& arg = args_jZKsBk2k(callsite).mutref(i);
                if (arg.kind == s_kind___preceding_ref_arg)
                {
                    s_PrecedingRefArg& pra = _current_fn.events.preceding_ref_args.mutref(arg.helpers.index);
                    if ((pra.target == target_6F5qhEWP(callsite)) && (pra.r == i))
                        std::swap(arg, pra.arg);
                    else
                        BUG_zwQElfxV("preceding_ref_args got messed up"_fu, ss, _helpers, _here, ctx, module);

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
        for (int i0 = 0; i0 < args_jZKsBk2k(callsite).size(); i0++)
        {
            s_Argument host_arg0 { host_args[i0] };
            s_Type expect { host_arg0.type };
            if (is_ref_gBx1AgSx(expect))
            {
                if (!bck_unwound)
                {
                    if ((mutref_first >= 0) || ((ref_first >= 0) && is_mutref_hoadAQC0(expect, _here, ctx)))
                    {
                        bck_unwound.resize(args_jZKsBk2k(callsite).size());
                        for (int i0_1 = ref_first; (i0_1 <= ref_last); i0_1++)
                        {
                            const s_Lifetime& unwound = (bck_unwound.mutref(i0_1) = Lifetime_unwind_rpRStrev(args_jZKsBk2k(callsite)[i0_1].type.lifetime, 0, true, ss, _helpers, _here, ctx, module));
                            Lifetime_each_0uYEazmT(unwound, arg_first, arg_last, i0_1);
                        };
                    };
                };
                if (bck_unwound)
                {
                    s_SolvedNode BL_18_v {};
                    s_SolvedNode arg0 = (__extension__ (
                    {
                        const s_SolvedNode& __partcopy_ref = args_jZKsBk2k(callsite)[i0];
                        BL_18_v = (s_SolvedNode { __partcopy_ref.kind, {}, {}, {}, {}, fu::vec<s_SolvedNode>(__partcopy_ref.items), {}, s_Type(__partcopy_ref.type), s_Target(__partcopy_ref.target) });
                    (void)0;}), static_cast<s_SolvedNode&&>(BL_18_v));
                    s_Lifetime shallow0 { arg0.type.lifetime };
                    const s_Lifetime& unwound0 = (bck_unwound.mutref(i0) = Lifetime_unwind_rpRStrev(shallow0, 0, true, ss, _helpers, _here, ctx, module));
                    Lifetime_each_xAS9m5gl(unwound0, arg_first, arg_last, i0);
                    if (is_mutref_hoadAQC0(expect, _here, ctx))
                    {
                        for (int i = ref_first; (i <= ref_last); i++)
                        {
                            if (is_ref_gBx1AgSx(host_args[i].type))
                                validate_OPUSaBEB(i, callsite, host_args, bck_unwound, arg_first, arg_last, i0, host_arg0, arg0, shallow0, unwound0, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                        };
                    }
                    else
                    {
                        for (int i = mutref_first; (i <= mutref_last); i++)
                        {
                            if (is_mutref_hoadAQC0(host_args[i].type, _here, ctx))
                                validate_OPUSaBEB(i, callsite, host_args, bck_unwound, arg_first, arg_last, i0, host_arg0, arg0, shallow0, unwound0, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

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
                        const s_SolvedNode& arg0 = args_jZKsBk2k(callsite)[i0];
                        if (is_mutref_hoadAQC0(host_arg0.type, _here, ctx))
                        {
                            if (is_mutref_hoadAQC0(arg0.type, _here, ctx))
                            {
                                Lifetime_add_PUWFQPIX(bck_writes, arg0.type.lifetime, false, _here, ctx);
                            }
                            else
                                BUG_zwQElfxV((qID_3PsDzMvu(human_n8jXR2CC(host_arg0.name, ss, _helpers, _here, ctx, module)) + ": host_arg0.written but !arg.is_mutref"_fu), ss, _helpers, _here, ctx, module);

                        }
                        else
                            BUG_zwQElfxV((qID_3PsDzMvu(human_n8jXR2CC(host_arg0.name, ss, _helpers, _here, ctx, module)) + ": host_arg0.written but !host_arg0.is_mutref"_fu), ss, _helpers, _here, ctx, module);

                    };
                };
            };
        };
        if (bck_writes)
        {
            _here = callsite.token;
            bck_trackWrites_EGmn8G6O(callsite, bck_writes, root, pass, ss, _current_fn, _helpers, _here, ctx, module);
        };
    };
}

static void bck_loop_OdwYHMY5(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    s_SolvedNode* _0;
    (_0 = &(items.mutref(0)), bck_node_etixA00n(*_0, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
    for (int i = 1; i < items.size(); i++)
    {
        s_SolvedNode* _1;
        (_1 = &(items.mutref(i)), bck_node_etixA00n(*_1, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
    };
    const s_HelpersData* BL_3_v;
    int _2 {};
    const int parent_loop_start = ((_2 = (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_3_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
    (void)0;}), *BL_3_v).postdom.parent_loop_start) ? _2 : BUG_zwQElfxV("bck_loop: parent_loop_start not set."_fu, ss, _helpers, _here, ctx, module));
    clear_quDuppI6(_current_fn.events.used_in_a_loop, parent_loop_start);
}

static void visit_B1uTV7C6(const s_Lifetime& lifetime, s_Lifetime& result, const bool maybeOutOfOrder, const s_TokenIdx& _here, const s_Context& ctx)
{
    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;

        { {
            const unsigned r = parse7bit(chars, offset);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };

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
            result = Lifetime_union_YIGC7Sux(result, s_Lifetime { fu::slice(chars, offset0, offset) }, false, _here, ctx);
        }
        else
            result.uni0n += fu::get_view(chars, offset0, offset);

    };
}

                                #ifndef DEF_Lifetime_process_i9nr1z2MFNc
                                #define DEF_Lifetime_process_i9nr1z2MFNc
inline s_Lifetime Lifetime_process_i9nr1z2M(const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ s_Lifetime result {};
    const bool maybeOutOfOrder = false;
    visit_B1uTV7C6(lifetime, result, maybeOutOfOrder, _here, ctx);
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

inline static void l_30_95_hME5MYxY(const int right, fu::view<char> paths, const s_Type& t_left, const int left, s_Lifetime& parents, s_Lifetime& siblings, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!right))
    {
        if (!right)
            BUG_zwQElfxV("Reference_trackLocalRef: right has non-locals."_fu, ss, _helpers, _here, ctx, module);
        else
        {
            const s_Type& t_right = GET_oTYbwQb8(nested_RctvSJIv(right, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module).type;
            if (!(type_mayPointInto_8KIT1Gbn(t_right.vtype, t_left.vtype, ss, _helpers, _here, ctx, module)))
                BUG_zwQElfxV(x7E_gCeFmDFw((x7E_gCeFmDFw("type_mayPointInto fails for "_fu, str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(left, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " := "_fu), str_sdDZgf4z(GET_oTYbwQb8(nested_RctvSJIv(right, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

        };
        int _0 {};
        (_0 = left, add_jzOp5jol(grow_if_oob_8tJoRZmS(flow_6fvDawde(_current_fn).rg_children, right), _0));
        Lifetime_add_PUWFQPIX(parents, Lifetime_op_join_dwN33Lug(unless_oob_pcvjJeir(flow_6fvDawde(_current_fn).rg_parents, right), paths, _here, ctx), false, _here, ctx);
        Lifetime_add_PUWFQPIX(siblings, unless_oob_pcvjJeir(flow_6fvDawde(_current_fn).rg_invalidates, right), false, _here, ctx);
        if (has_QTGTghRU(flow_6fvDawde(_current_fn).is_arg, right))
        {
            add_U5p6nLOf(flow_6fvDawde(_current_fn).is_arg, left);
            add_jzOp5jol(grow_if_oob_8tJoRZmS(flow_6fvDawde(_current_fn).arg_parents, left), right);
        };
    };
}

                                #ifndef DEF_Lifetime_each_mpvM4FUt506
                                #define DEF_Lifetime_each_mpvM4FUt506
inline void Lifetime_each_mpvM4FUt(const s_Lifetime& lifetime, const s_Type& t_left, const int left, s_Lifetime& parents, s_Lifetime& siblings, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    // Hoisted:
    int offset0;

    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        int BL_3_v {};
        const int sr = (__extension__ (
        {
            offset0 = (offset + 0);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            BL_3_v = (offset0);
        (void)0;}), BL_3_v);
        l_30_95_hME5MYxY(int(((r & 1u) ? 0u : (r >> 1u))), fu::get_view(chars, sr, offset), t_left, left, parents, siblings, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static void visit_yW4JmLfv(const s_Lifetime& lifetime, s_Lifetime& result, const bool maybeOutOfOrder, const s_Lifetime& parents, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx)
{
    const fu::str& chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;

        { {
            const unsigned r = parse7bit(chars, offset);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };

            {
                const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
                const s_Lifetime& sibling_parents = unless_oob_pcvjJeir(flow_6fvDawde(_current_fn).rg_parents, locid);
                if (Lifetime_hasInter_lYlULmp8(parents, sibling_parents, _here, ctx))
                    goto BL_3;

            };
            continue;
          } BL_3:;
        };
        if (maybeOutOfOrder)
        {
            result = Lifetime_union_YIGC7Sux(result, s_Lifetime { fu::slice(chars, offset0, offset) }, false, _here, ctx);
        }
        else
            result.uni0n += fu::get_view(chars, offset0, offset);

    };
}

                                #ifndef DEF_Lifetime_process_9ORoArxnOI0
                                #define DEF_Lifetime_process_9ORoArxnOI0
inline s_Lifetime Lifetime_process_9ORoArxn(const s_Lifetime& lifetime, const s_Lifetime& parents, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ s_Lifetime result {};
    const bool maybeOutOfOrder = false;
    visit_yW4JmLfv(lifetime, result, maybeOutOfOrder, parents, _current_fn, _here, ctx);
    return /*NRVO*/ result;
}
                                #endif

inline static void l_30_97_5yZS11qs(const int sibling, const s_Type& t_left, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!sibling)
        BUG_zwQElfxV("Reference_trackLocalRef: siblings has non-locals."_fu, ss, _helpers, _here, ctx, module);
    else
    {
        Lifetime_add_PUWFQPIX(grow_if_oob_UaKCknOx(flow_6fvDawde(_current_fn).rg_invalidates, sibling), t_left.lifetime, false, _here, ctx);
    };
}

                                #ifndef DEF_Lifetime_each_LalISdfQfvi
                                #define DEF_Lifetime_each_LalISdfQfvi
inline void Lifetime_each_LalISdfQ(const s_Lifetime& lifetime, const s_Type& t_left, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_97_5yZS11qs(int(((r & 1u) ? 0u : (r >> 1u))), t_left, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

inline static void l_30_98_MK3MpO91(const int parent, const s_Type& t_left, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!parent)
        BUG_zwQElfxV("Reference_trackLocalRef: parents has non-locals."_fu, ss, _helpers, _here, ctx, module);
    else
    {
        Lifetime_add_PUWFQPIX(grow_if_oob_UaKCknOx(flow_6fvDawde(_current_fn).rg_invalidates, parent), t_left.lifetime, false, _here, ctx);
    };
}

                                #ifndef DEF_Lifetime_each_EWLAZKBSRS4
                                #define DEF_Lifetime_each_EWLAZKBSRS4
inline void Lifetime_each_EWLAZKBS(const s_Lifetime& lifetime, const s_Type& t_left, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_98_MK3MpO91(int(((r & 1u) ? 0u : (r >> 1u))), t_left, ss, _current_fn, _helpers, _here, ctx, module);
    };
}
                                #endif

static void Reference_trackLocalRef_GJ8o8YYm(const s_Type& t_left, const s_Lifetime& right, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int left = Lifetime_getRefLocid_unlessStatic_LaP4nCMF(t_left.lifetime, ss, _helpers, _here, ctx, module);
    if (!(!left))
    {
        s_Lifetime right_1 = Lifetime_process_i9nr1z2M(right, _here, ctx);
        s_Lifetime parents {};
        s_Lifetime siblings {};
        Lifetime_add_PUWFQPIX(parents, right_1, false, _here, ctx);
        Lifetime_each_mpvM4FUt(right_1, t_left, left, parents, siblings, ss, _current_fn, _helpers, _here, ctx, module);
        siblings = Lifetime_process_9ORoArxn(siblings, parents, _current_fn, _here, ctx);
        if (siblings)
        {
            if (Lifetime_has_62UtfSbx(siblings, left))
                BUG_zwQElfxV("siblings.has(left)"_fu, ss, _helpers, _here, ctx, module);
            else
            {
                s_Lifetime* _0;
                (!*(_0 = &(grow_if_oob_UaKCknOx(flow_6fvDawde(_current_fn).rg_invalidates, left))) ? *_0 : BUG_zwQElfxV("rg_invalidates already set"_fu, ss, _helpers, _here, ctx, module)) = s_Lifetime(siblings);
                Lifetime_each_LalISdfQ(siblings, t_left, ss, _current_fn, _helpers, _here, ctx, module);
            };
        };
        if (parents)
        {
            s_Lifetime* _1;
            (!*(_1 = &(grow_if_oob_UaKCknOx(flow_6fvDawde(_current_fn).rg_parents, left))) ? *_1 : BUG_zwQElfxV("rg_parents already set"_fu, ss, _helpers, _here, ctx, module)) = s_Lifetime(parents);
            Lifetime_each_EWLAZKBS(parents, t_left, ss, _current_fn, _helpers, _here, ctx, module);
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

static void bck_trackInit_OakYCiK6(const s_Target& target, const s_SolverState& ss, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int index = int(unsigned((target._packed & 0xfffffull)));
    if (!(!index))
    {
        if (unless_oob_HinAk6KE(events_AfdJjf5X(_current_fn).snap.invalidated_by, index))
        {
            BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
        };
    };
}

static void bck_let_XusKJ9y4(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    s_SolvedNode* _0;
    (_0 = &(node.items.mutref(LET_INIT)), bck_node_etixA00n(*_0, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
    if (is_ref_gBx1AgSx(node.type) && !willPassByValue_LlyNq60C(GET_oTYbwQb8(node.target, ss, _helpers, _here, ctx, module), _here, ctx))
    {
        if (isArg_GtNDTeV7(GET_oTYbwQb8(node.target, ss, _helpers, _here, ctx, module)))
            BUG_zwQElfxV("bck_let: Found an argument!"_fu, ss, _helpers, _here, ctx, module);
        else
        {
            const s_SolvedNode& init = node.items[LET_INIT];
            if (is_ref_gBx1AgSx(init.type))
            {
                Reference_trackLocalRef_GJ8o8YYm(GET_oTYbwQb8(node.target, ss, _helpers, _here, ctx, module).type, init.type.lifetime, ss, _current_fn, _helpers, _here, ctx, module);
            }
            else
                BUG_zwQElfxV("What!"_fu, ss, _helpers, _here, ctx, module);

        };
    };
    bck_trackInit_OakYCiK6(node.target, ss, _current_fn, _helpers, _here, ctx, module);
}

inline static void Events_restore_gobrCFQP(fu::vec<fu::vec<s_WriteID>>& dest, fu::view<fu::vec<s_WriteID>> src, const int parent_loop_start)
{
    if (dest.size() > parent_loop_start)
        dest.shrink(parent_loop_start);

    if (src.size() > parent_loop_start)
    {
        dest.grow(parent_loop_start);
        dest += fu::get_view(src, parent_loop_start);
    };
}

static void Events_restore_kGL4Oh9n(s_Events& events, const s_EventsSnap& restore, const int parent_loop_start, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!parent_loop_start)
        BUG_9SZtRVJ0("Events_restore: no parent_loop_start, cant decide which events need to be survive"_fu, _here, ctx);
    else if (parent_loop_start == 1)
        events.snap = restore;
    else
        Events_restore_gobrCFQP(events.snap.invalidated_by, restore.invalidated_by, parent_loop_start);

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

inline static void Events_merge_aIbAadCv(fu::vec<fu::vec<s_WriteID>>& dest, fu::view<fu::vec<s_WriteID>> src)
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

static void Events_merge_xuxXaEiE(s_EventsSnap& events, const s_EventsSnap& snap)
{
    Events_merge_aIbAadCv(events.invalidated_by, snap.invalidated_by);
}

static void bck_if_NtbbZWJE(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    s_SolvedNode& cond = items.mutref(0);
    bck_node_etixA00n(cond, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    const s_StaticEval ae_cond = tryAbstractEvalAsBool_JCuol0P9(cond, false, ss, _current_fn, _helpers, _here, ctx, module);
    if (ae_cond)
    {
        s_SolvedNode& cons = items.mutref(((ae_cond == s_StaticEval_SE_True) ? 1 : 2));
        bck_node_etixA00n(cons, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        node = createBlock_O5z3dG59(s_SolvedNode(items[0]), s_SolvedNode(cons), _here);
    }
    else
    {
        s_EventsSnap e_Restore_AfterCond { _current_fn.events.snap };
        s_SolvedNode* _0;
        (_0 = &(items.mutref(1)), bck_node_etixA00n(*_0, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
        s_EventsSnap e_Merge_AfterCons { _current_fn.events.snap };
        Events_restore_kGL4Oh9n(_current_fn.events, e_Restore_AfterCond, node._loop_start, _here, ctx);
        s_SolvedNode* _1;
        (_1 = &(items.mutref(2)), bck_node_etixA00n(*_1, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
        Events_merge_xuxXaEiE(_current_fn.events.snap, e_Merge_AfterCons);
    };
}

static void bck_and_or_dHBfSNRI(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::vec<s_SolvedNode>& items = node.items;
    for (int i = 0; i < items.size(); i++)
    {
        s_SolvedNode& expr = items.mutref(i);
        bck_node_etixA00n(expr, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        const s_StaticEval ae_expr = tryAbstractEvalAsBool_JCuol0P9(expr, (i == (items.size() - 1)), ss, _current_fn, _helpers, _here, ctx, module);
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
                cons = createBlock_O5z3dG59(static_cast<s_SolvedNode&&>(cond), s_SolvedNode(cons), _here);
            };
        };
    };
    if (node.items.size() < 2)
        node = only_GN4mikiy(node.items);

}

static void bck_not_bMZyjOWP(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    s_SolvedNode& expr = only_Iovd0TM6(node.items);
    bck_node_etixA00n(expr, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    const s_StaticEval ae_expr = tryAbstractEvalAsBool_JCuol0P9(expr, false, ss, _current_fn, _helpers, _here, ctx, module);
    if (ae_expr)
        node.type.vfacts |= ((ae_expr == s_StaticEval_SE_True) ? s_VFacts_AlwaysFalse : s_VFacts_AlwaysTrue);

}

static void bck_block_NxRB6v1q(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::vec<int> defers {};
    const int TODO_FIX_nesteDefers0 = _current_fn.TODO_FIX_bckCantDealWithNestedDefers;
    fu::vec<s_SolvedNode>& items = node.items;
    for (int i = 0; i < items.size(); i++)
    {
        s_SolvedNode& stmt = items.mutref(i);
        if (stmt.kind == s_kind_defer)
        {
            const s_HelpersData* BL_4_v;
            if (!defers && ((__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_4_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
            (void)0;}), *BL_4_v).target != _current_fn.out.target))
                _current_fn.TODO_FIX_bckCantDealWithNestedDefers++;

            defers += i;
            if (is_never_FfV8Zuj5(stmt.type))
                BUG_zwQElfxV("bck, block: defer.is_never"_fu, ss, _helpers, _here, ctx, module);

        }
        else
        {
            bck_node_etixA00n(stmt, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            if (is_never_FfV8Zuj5(stmt.type))
            {
                items.shrink((i + 1));
                const s_HelpersData* BL_9_v;
                if (!s_HelpersMask(((__extension__ (
                {
                    const s_Helpers& h = node.helpers;
                    BL_9_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                (void)0;}), *BL_9_v).mask & s_HelpersMask_HM_LabelUsed)))
                    node.type = t_never;

                break;
            };
        };
    };
    const s_HelpersData* BL_11_v;
    Events_merge_xuxXaEiE(_current_fn.events.snap, (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_11_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
    (void)0;}), *BL_11_v).postevt);
    for (int i_1 = defers.size(); i_1-- > 0; )
    {
        s_SolvedNode* _0;
        (_0 = &(only_Iovd0TM6(node.items.mutref(defers[i_1]).items)), bck_node_etixA00n(*_0, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
    };
    _current_fn.TODO_FIX_bckCantDealWithNestedDefers = TODO_FIX_nesteDefers0;
}

static void bck_node_etixA00n(s_SolvedNode& node, const s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_kind k = node.kind;
    if (k == s_kind_call)
        bck_call_7GvYCzlV(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_loop)
        bck_loop_OdwYHMY5(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_letdef)
    {
        std::swap(GET_mut_j8q0a60a(node.target, ss, module).solved, node);
        bck_node_etixA00n(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        std::swap(GET_mut_j8q0a60a(node.target, ss, module).solved, node);
    }
    else if (k == s_kind_let)
        bck_let_XusKJ9y4(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_if)
    {
        bck_if_NtbbZWJE(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    }
    else if ((k == s_kind_and) || (k == s_kind_or))
        bck_and_or_dHBfSNRI(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_not)
        bck_not_bMZyjOWP(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_block)
        bck_block_NxRB6v1q(node, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if ((k == s_kind_root) || (k == s_kind_jump) || (k == s_kind_try) || (k == s_kind_copy) || (k == s_kind_move) || (k == s_kind_arrlit))
    {
        fu::view_mut<s_SolvedNode> items = node.items;
        for (int i = 0; i < items.size(); i++)
        {
            s_SolvedNode* _0;
            (_0 = &(items.mutref(i)), bck_node_etixA00n(*_0, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
        };
        if (k == s_kind_jump)
        {
            const s_HelpersData* BL_13_v;
            if ((__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_13_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
            (void)0;}), *BL_13_v).postevt)
            {
                s_HelpersData* BL_15_v;
                Events_merge_xuxXaEiE((__extension__ (
                {
                    const s_Helpers& h = node.helpers;
                    BL_15_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                (void)0;}), *BL_15_v).postevt, _current_fn.events.snap);
            }
            else
            {
                s_HelpersData* BL_17_v;
                (__extension__ (
                {
                    const s_Helpers& h = node.helpers;
                    BL_17_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                (void)0;}), *BL_17_v).postevt = s_EventsSnap(_current_fn.events.snap);
            };
            if (!_current_fn.TODO_FIX_bckCantDealWithNestedDefers)
            {
                const s_HelpersData* BL_19_v;
                int _1 {};
                Events_restore_kGL4Oh9n(_current_fn.events, (*(const s_EventsSnap*)fu::NIL), ((_1 = (__extension__ (
                {
                    const s_Helpers& h = node.helpers;
                    BL_19_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                (void)0;}), *BL_19_v).postdom.parent_loop_start) ? _1 : BUG_zwQElfxV("bck_node(jump): helpers.postdom.parent_loop_start not set."_fu, ss, _helpers, _here, ctx, module)), _here, ctx);
            };
        };
    }
    else if (k == s_kind_pragma)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            s_SolvedNode& item = node.items.mutref(i);
            bck_node_etixA00n(item, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            if (is_mutref_hoadAQC0(item.type, _here, ctx))
            {
                _here = item.token;
                bck_trackWrites_EGmn8G6O(node, item.type.lifetime, root, pass, ss, _current_fn, _helpers, _here, ctx, module);
            };
        };
    }
    else if (node.items)
        BUG_zwQElfxV(x7E_gCeFmDFw("bck: Unexpected "_fu, str_n4lV73pj(k)), ss, _helpers, _here, ctx, module);

}

static void PASS_borrowCheck_JE5YFxmv(s_SolvedNode& root, const s_BorrowCheckPass pass, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (pass == s_BorrowCheckPass_BCK_aar)
    {
        s_Lifetime consts {};
        s_Lifetime refs {};
        _current_fn_eachArg_FWD_kWEXYECy(consts, refs, ss, _current_fn, _helpers, _here, ctx, module);
        int refs_len = 0;
        Lifetime_each_OMzxJByi(refs, refs_len, ss, _helpers, _here, ctx, module);
        if (!refs_len || ((refs_len == 1) && !consts))
            return;
        else
        {
            clear_eKcXbM7Z(_current_fn.flow);
            clear_YZ7BoKfq(_current_fn.events);
            _current_fn_eachArg_FWD_1V6HnZxJ(ss, _current_fn, _helpers, _here, ctx, module);
            s_Flow& flow = _current_fn.flow;
            Lifetime_each_TFY1kVXR(refs, consts, flow, ss, _helpers, _here, ctx, module);
            if (refs)
            {
                Lifetime_each_EsDvXyxu(consts, refs, flow, ss, _helpers, _here, ctx, module);
            };
            if (refs)
            {
                _current_fn.events = s_Events{};
            }
            else
                BUG_zwQElfxV("Wasting time on AAR without ref args."_fu, ss, _helpers, _here, ctx, module);

        };
    };
    bck_node_etixA00n(root, root, pass, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

static void runAllPasses_5MvXZq77(s_SolvedNode& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (_current_fn)
    {
        if (currentFn_mustBecomeInline_kUdU5Jsy(_current_fn))
            return;
        else if (GET_oTYbwQb8(_current_fn.out.target, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_Debug_AllPassesComplete)
            BUG_zwQElfxV("runAllPasses: All passes already complete."_fu, ss, _helpers, _here, ctx, module);

    };
    const s_HelpersData* BL_4_v;
    test_node_1Fk3l8OG(node, (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_4_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
    (void)0;}), *BL_4_v).pass, ss, _current_fn, _helpers, _here, ctx, module);

    {
        s_HelpersData* BL_6_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_6_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_6_v).pass = s_SolverPass_RelaxMut;
        if (_current_fn.relaxed.var_usage)
            BUG_zwQElfxV("_current_fn.var_usage not empty before propagateType."_fu, ss, _helpers, _here, ctx, module);
        else if (_current_fn.postdom)
            BUG_zwQElfxV("_current_fn.postdom not empty before propagateType."_fu, ss, _helpers, _here, ctx, module);
        else
        {
            Postdom_resetAtFnEnd_tdY3Z3KG(_current_fn.postdom);
            propagateType_pH8jMqgi(node, s_Type(node.type), RELAX_before_bck, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        };
    };
    const s_HelpersData* BL_10_v;
    test_node_1Fk3l8OG(node, (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_10_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
    (void)0;}), *BL_10_v).pass, ss, _current_fn, _helpers, _here, ctx, module);

    {
        s_HelpersData* BL_12_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_12_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_12_v).pass = s_SolverPass_BorrowCheck;
        PASS_borrowCheck_JE5YFxmv(node, s_BorrowCheckPass_BCK_bck, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    };

    {
        s_HelpersData* BL_14_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_14_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_14_v).pass = s_SolverPass_ArgumentsAtRisk;
        _current_fn.TODO_FIX_children = _current_fn.flow.rg_children;
        PASS_borrowCheck_JE5YFxmv(node, s_BorrowCheckPass_BCK_aar, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    };
    const s_HelpersData* BL_15_v;
    test_node_1Fk3l8OG(node, (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_15_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
    (void)0;}), *BL_15_v).pass, ss, _current_fn, _helpers, _here, ctx, module);

    {
        s_HelpersData* BL_17_v;
        (__extension__ (
        {
            const s_Helpers& h = node.helpers;
            BL_17_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_17_v).pass = s_SolverPass_RelaxCopyResize;
        _current_fn.effects.fx_mask = s_FxMask{};
        _current_fn.relaxed = s_Usage{};
        if (_current_fn.postdom.parent_loop_start == 1)
        {
            Postdom_resetAtFnEnd_tdY3Z3KG(_current_fn.postdom);
            propagateType_pH8jMqgi(node, s_Type(node.type), RELAX_all, s_Helpers{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        }
        else
            BUG_zwQElfxV("_current_fn.loop_start leak."_fu, ss, _helpers, _here, ctx, module);

    };
    const s_HelpersData* BL_20_v;
    test_node_1Fk3l8OG(node, (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_20_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
    (void)0;}), *BL_20_v).pass, ss, _current_fn, _helpers, _here, ctx, module);
    if (_current_fn)
    {
        if (currentFn_mustBecomeInline_kUdU5Jsy(_current_fn))
            BUG_zwQElfxV("runAllPasses: currentFn_mustBecomeInline after all."_fu, ss, _helpers, _here, ctx, module);
        else
            GET_mut_j8q0a60a(_current_fn.out.target, ss, module).status |= s_SolverStatus_SS_Debug_AllPassesComplete;

    };
}

static void doReverseSpecialize_KdMYgtXU(const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_RevSpecInstance& instance = EPH_On3tAJ9X(target, ss, module).rev_spec.instance;
    const s_Target original { instance.original };
    const unsigned relaxed_quals = instance.relaxed_quals;
    const s_RevSpecPrototype& prototype = EPH_On3tAJ9X(original, ss, module).rev_spec.prototype;
    s_SolvedNode solved { (prototype.solved ? prototype.solved : BUG_zwQElfxV("doReverseSpecialize: no rev_spec.prototype.solved"_fu, ss, _helpers, _here, ctx, module)) };
    /*MOV*/ fu::vec<s_Overload> locals { prototype.locals };
    const int helpers0 = _helpers.size();
    const int helpers_data0 = ss._helpers_data.size();
    s_CurrentFn current_fn0 = steal_d1hn13Ne(_current_fn);
    const s_Target solvingFnort0 = exchange_jPHBkujO(ss._solvingFnort, s_Target(target));
    const s_Target nestingFnort0 = exchange_jPHBkujO(ss._nestingFnort, s_Target(target));
    fu_DEFER(
    {
        _helpers.shrink(helpers0);
        ss._helpers_data.shrink(helpers_data0);
        std::swap(current_fn0, _current_fn);
        ss._solvingFnort = solvingFnort0;
        ss._nestingFnort = nestingFnort0;
    });

    {
        fu::vec<s_Helpers> helpersReplicas {};
        int lastKnownLocal {};
        relinkNode_W2lA6R6l(solved, target, original, locals, helpersReplicas, lastKnownLocal, ss, _current_fn, _helpers, _here, ctx, module);
    };
    EXT_mut_yu2tvQxN(target, ss, module).locals = static_cast<fu::vec<s_Overload>&&>(locals);
    GET_mut_j8q0a60a(target, ss, module).status &= s_SolverStatus(~s_SolverStatus_SS_Debug_AllPassesComplete);

    {
        solved.target = target;
        s_SolvedNode& n_body = last_Iovd0TM6(solved.items);
        s_HelpersData* BL_4_v;
        (__extension__ (
        {
            const s_Helpers& h = n_body.helpers;
            BL_4_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_4_v).target = s_Target(target);
        s_HelpersData* BL_5_v;
        (__extension__ (
        {
            const s_Helpers& h = n_body.helpers;
            BL_5_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data.mutref(h.index) : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_5_v).mask = s_HelpersMask_HM_Function;
        s_Type slot = s_Type { s_ValueType { n_body.type.vtype.quals, {} }, {}, {} };
        force_relax_p4VopRXr(slot, relaxed_quals);
        const unsigned did_relax = try_relax_c5Z7RHRf(n_body.type, slot, relaxed_quals);
        if (!(did_relax == relaxed_quals))
            BUG_zwQElfxV((x7E_gCeFmDFw(((x7E_gCeFmDFw("doReverseSpecialize: did_relax("_fu, fu::u64dec(did_relax)) + ")"_fu) + " != relaxed_quals("_fu), fu::u64dec(relaxed_quals)) + ")"_fu), ss, _helpers, _here, ctx, module);

    };
    /*MOV*/ s_Type retval {};

    {
        s_SolvedNode n_body = steal_LyWpwxOa(last_Iovd0TM6(solved.items));
        std::swap(_current_fn.out, solved);
        runAllPasses_5MvXZq77(n_body, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        const s_HelpersData* BL_8_v;
        retval = (__extension__ (
        {
            const s_Helpers& h = n_body.helpers;
            BL_8_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
        (void)0;}), *BL_8_v).ret_actual;
        if (retval.vtype.quals & relaxed_quals)
            BUG_zwQElfxV("reported retval intersects relaxed_quals"_fu, ss, _helpers, _here, ctx, module);
        else
            std::swap(last_Iovd0TM6(_current_fn.out.items), n_body);

    };
    doUpdateScope_KArjMmkp(static_cast<s_Type&&>(retval), target, true, false, false, s_DeclAsserts{}, ss, _current_fn, _helpers, _here, ctx, module);
    lazySolveEnd_rlWxz9m0(target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

static bool lazySolveStart_O723BPnd(const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (s_SolverStatus((GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module).status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_LAZY)))) != s_SolverStatus_SS_LAZY)
        return false;
    else
    {
        s_Overload& o = GET_mut_j8q0a60a(target, ss, module);
        if (o.status & s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_FINALIZED | s_SolverStatus_SS_DID_START)) | s_SolverStatus_SS_DIRTY)))
            BUG_zwQElfxV(x7E_gCeFmDFw("SS_DID_START: non-zero solver status: "_fu, str_wO7dLc1g(o.status)), ss, _helpers, _here, ctx, module);
        else
        {
            o.status |= s_SolverStatus_SS_DID_START;
            if ((o.kind == s_kind_fn) || (o.kind == s_kind_inline) || (o.kind == s_kind_template))
            {
                if (EPH_On3tAJ9X(target, ss, module).rev_spec.instance.original)
                    doReverseSpecialize_KdMYgtXU(target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                else
                {
                    doTrySpecialize_BRnzkzgy(EPH_On3tAJ9X(target, ss, module).local_of, target, s_Target{}, fu::view<s_SolvedNode>{}, (*(const fu::str*)fu::NIL), (*(const s_Reorder*)fu::NIL), fu::view<fu::vec<s_Target>>{}, 0, (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                };
            }
            else if (o.kind == s_kind_type)
                __solveStruct_KhrF21lw(true, s_Node(EXT_x9dYoBLb(target, ss, ctx, module).tEmplate.node), target, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            else
                BUG_zwQElfxV((x7E_gCeFmDFw("lazySolveStart: kind is `"_fu, str_n4lV73pj(o.kind)) + "`."_fu), ss, _helpers, _here, ctx, module);

            return true;
        };
    };
}

static void ensureLazySolved_jf9BVo46(const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    int repeats = 0;
    while (lazySolveStart_O723BPnd(target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
    {
        if (repeats++ > 1000)
            BUG_zwQElfxV(x7E_gCeFmDFw("Repeat-solved too many times: "_fu, str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

    };
}

static fu::str str_ooyn6luh(const int min, const int max)
{
    if (min != max)
        return x7E_gCeFmDFw((x7E_gCeFmDFw("["_fu, fu::i64dec(min)) + " upto "_fu), fu::i64dec(max)) + "]"_fu;
    else
        return fu::i64dec(min);

}

static void reorderByNumUsings_4bSkJD1Y(s_Reorder& reorder, fu::view<s_Argument> host_args, const int num_args, const int num_usings)
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

static bool reorderByArgIDs_eXyQpRnz(s_Reorder& reorder, fu::view<fu::str> names, s_BitSet&& optional, fu::view<s_Argument> host_args, const int num_usings, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    reorder.applicable = true;
    reorder.map.clear();
    int used = 0;
    int offset = 0;
    int usings_left = num_usings;
    for (int i = 0; i < host_args.size(); i++)
    {
        const s_Argument& host_arg = host_args[i];
        if (!(host_arg.flags & s_Flags_F_INJECTED))
        {
            int idx = find_g5ZsWtbd(names, host_arg.name);
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
    };
    if (usings_left)
        BUG_zwQElfxV("reorderByArgIDs: usings_left != 0"_fu, ss, _helpers, _here, ctx, module);
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
            clear_pN1GzgxC(reorder);
            return true;
        };
    };
}

inline static void l_30_13_fNGcb4uf(fu::view<char> n, const int i, fu::view<char> name, int& count, int& first)
{
    if ((n == name) && !count++)
        first = i;

}

                                #ifndef DEF_each_ZmjsTNwZ61d
                                #define DEF_each_ZmjsTNwZ61d
inline void each_ZmjsTNwZ(fu::view<fu::str> a, fu::view<char> name, int& count, int& first)
{
    for (int i = 0; i < a.size(); i++)
        l_30_13_fNGcb4uf(a[i], i, name, count, first);

}
                                #endif

static fu::str ERRMSG_findUnmatchedArgName_2ZCcw40D(const s_Reorder& reorder, fu::view<fu::str> names)
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
            each_ZmjsTNwZ(names, name, count, first);
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

static fu::str fnName_Cr2H3NBk(const int idx, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (idx)
        return str_sdDZgf4z(GET_oTYbwQb8(localfn_6C2dSDn6(idx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module);
    else
        return "global scope"_fu;

}

inline static fu::str l_30_21_HOqkVsia(const s_SolvedNode& l_30_21, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return humanizeType_kB3Te7GK(l_30_21.type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module);
}

                                #ifndef DEF_map_Kzobq1Tk5T8
                                #define DEF_map_Kzobq1Tk5T8
inline fu::vec<fu::str> map_Kzobq1Tk(fu::view<s_SolvedNode> a, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = l_30_21_HOqkVsia(a[i], ss, _helpers, _here, ctx, module);

    return /*NRVO*/ res;
}
                                #endif

static fu::str explainBadCallArguments_GiNpCowP(const fu::str& id, const s_Target& target, fu::view<s_SolvedNode> args, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return (target ? str_sdDZgf4z(GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module) : qID_3PsDzMvu(id)) + (args ? ((" with args ("_fu + join_jCe9HYtv(map_Kzobq1Tk(args, ss, _helpers, _here, ctx, module), ", "_fu)) + ")"_fu) : fu::str{});
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

static s_Target tryMatch__mutargs_ZkfSrDkY(fu::str&& id, s_Reorder& reorder_out, fu::vec<fu::vec<s_Target>>& conversions_out, fu::str& error, const bool local_scope, const s_Scope& misc_scope, fu::view<s_SolvedNode> args, const s_Flags flags, const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const int error_len0 = error.size();
    for (int i = 0; i < args.size(); i++)
    {
        if (!args[i].kind)
            BUG_zwQElfxV("Falsy arg.kind!"_fu, ss, _helpers, _here, ctx, module);

    };
    s_Target matchIdx {};
    s_Target ambigOkIdx {};
    int minArity = args.size();
    const int numUsings = countUsings_MPf6O9j0(local_scope, misc_scope, ss, _helpers, _here, ctx, module);
    const int explicitArity = minArity;
    const int maxArity = (explicitArity + numUsings);
    fu::vec<fu::str> names {};
    s_BitSet optional {};
    if (flags & s_Flags_F_CALL_HAS_NAMED_ARGS)
    {
        bool some = false;
        for (int i_1 = 0; i_1 < args.size(); i_1++)
        {
            const s_SolvedNode& arg = args[i_1];
            const fu::str* _0;
            names.push(((arg.kind == s_kind_argid) ? fu::str((*(_0 = &(((some = true), arg.value))) ? *_0 : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module))) : ""_fu));
            if (arg.flags & s_Flags_F_ARGID_IS_OPTIONAL)
            {
                minArity--;
                add_U5p6nLOf(optional, i_1);
            };
        };
        if (!(some))
        {
            BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
        };
    };
    fu::str reusable_mangle {};
    fu::vec<s_Target> extra_items {};
    if (local_scope && !target)
    {
        s_BitSet seen {};
        if (numUsings)
        {
            each_qwKNvZ79((local_scope ? ss._scope : misc_scope).usings, (local_scope ? ss._ss.usings : fu::view<s_ScopeSkip>{}), 0, id, local_scope, extra_items, seen, ss, _helpers, _here, ctx, module);
        };
        if (flags & (s_Flags_F_CALL_HAS_DOT | s_Flags_F_OPERATOR))
            for (int i_1 = 0; i_1 < args.size(); i_1++)
                visitTypeImports_YbRdnzEZ(args[i_1].type, id, local_scope, extra_items, seen, ss, _here, ctx, module);
;
    };
    const int considerFieldItems = ((local_scope && !target && ((flags & s_Flags_F_CALL_HAS_DOT) || !minArity) && (minArity <= 1)) ? maxArity : 0);
    fu::vec<fu::str> alternate_ids {};
    fu::vec<fu::vec<s_Target>> conversions {};
    s_Reorder reorder {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        if (!local_scope && (extra_items || field_items_j55Z3wuG(flags, considerFieldItems, ss)))
            BUG_zwQElfxV("!local_scope but extra_items or field_items"_fu, ss, _helpers, _here, ctx, module);
        else
        {
            bool shadows {};
            while ((overloadIdx = (target ? search_KfdOrUQd(target, scope_iterator) : (local_scope ? search_ihIw5OEs(((flags & s_Flags_F_IMPLICIT) ? ss._scope.implicits : ss._scope.items), id, scope_iterator, ((flags & s_Flags_F_IMPLICIT) ? ss._ss.implicits : ss._ss.items), shadows, extra_items, fu::vec<s_ScopeItem>(field_items_j55Z3wuG(flags, considerFieldItems, ss))) : search_yfyUVvrQ(fu::get_view_start0(misc_scope.items, misc_scope.pub_items), id, scope_iterator)))))
            { {
                if (!local_scope && shadows)
                    BUG_zwQElfxV("!local_scope but shadows"_fu, ss, _helpers, _here, ctx, module);
                else
                {
                    bool TODO_FIX_dontBotherSpecializing = false;
                    conversions.clear();
                    clear_pN1GzgxC(reorder);
                    ensureLazySolved_jf9BVo46(overloadIdx, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    const s_Overload& overload = GET_oTYbwQb8(overloadIdx, ss, _helpers, _here, ctx, module);
                    const s_kind kind = overload.kind;
                    const bool isType = (kind == s_kind_type);
                    if (minArity && isType && !target)
                    {
                        const fu::str& alt = overload.type.vtype.canon;
                        if (alt != id)
                            alternate_ids.push(fu::str(alt));

                    };
                    const s_Extended& arity = EXT_x9dYoBLb(overloadIdx, ss, ctx, module);
                    const bool isZeroInit = (isType ? !explicitArity : false);
                    if (!isZeroInit && ((arity.max < minArity) || (arity.min > maxArity)))
                    {
                        if (arity.min > arity.max)
                        {
                            const s_SolverState& ss_1 = ss;
                            const s_CurrentFn& _current_fn_1 = _current_fn;
                            if (error)
                            {
                                error += ((("\n\n\t"_fu + explainWhichFn_KACWd7In(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + (((x7E_gCeFmDFw(((("Declaration cycle, signature not yet available."_fu + "\n\n\t    To fix this, you might need to shuffle functions around"_fu) + "\n\t\tuntil every dependency (type annot or arg default expr)"_fu) + "\n\t\tof "_fu), str_sdDZgf4z(GET_oTYbwQb8(overloadIdx, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " is declared above it."_fu) + "\n\n\t    This borders on a compiler bug, sorry about it,"_fu) + "\n\t\twe gotta come up with a better solve order algorithm."_fu));
                            };
                        }
                        else
                        {
                            const s_SolverState& ss_1 = ss;
                            const s_CurrentFn& _current_fn_1 = _current_fn;
                            if (error)
                            {
                                error += ((("\n\n\t"_fu + explainWhichFn_KACWd7In(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + (((("Wrong number of arguments: expects "_fu + str_ooyn6luh(arity.min, arity.max)) + ", got "_fu) + str_ooyn6luh(minArity, maxArity)) + "."_fu));
                            };
                        };
                    }
                    else
                    {
                        fu::vec<s_Argument> host_args { arity.args };
                        const int num_usings = ((!isZeroInit && (arity.min > explicitArity)) ? (arity.min - explicitArity) : 0);
                        if (!names)
                            reorderByNumUsings_4bSkJD1Y(reorder, host_args, args.size(), num_usings);
                        else if (!reorderByArgIDs_eXyQpRnz(reorder, names, s_BitSet(optional), host_args, num_usings, ss, _helpers, _here, ctx, module))
                        {
                            const s_SolverState& ss_1 = ss;
                            const s_CurrentFn& _current_fn_1 = _current_fn;
                            if (error)
                            {
                                error += ((("\n\n\t"_fu + explainWhichFn_KACWd7In(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + ERRMSG_findUnmatchedArgName_2ZCcw40D(reorder, names));
                            };
                            continue;
                        };
                        if (optional && reorder && (reorder.map.size() < args.size()) && (reorder.map.size() < arity.max))
                        {
                            const s_SolverState& ss_1 = ss;
                            const s_CurrentFn& _current_fn_1 = _current_fn;
                            if (error)
                            {
                                error += ((("\n\n\t"_fu + explainWhichFn_KACWd7In(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + "Optional argument ambiguity, not all optional arguments provided, and not all callsite arguments used. Cannot distinguish from a typo. [TODO LIST MISSING ARGS]"_fu);
                            };
                        }
                        else
                        {
                            s_Type REST_TYPE {};
                            const int REST_START = findRestStart_gcKePdlK(arity);
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
                                        REST_TYPE = ((_1 = tryClear_sliceable_EA8Wup3K(expect.vtype, _here, ctx, module)) ? static_cast<s_Type&&>(_1) : fail_Szrpd5G6(((GET_oTYbwQb8(overloadIdx, ss, _helpers, _here, ctx, module).name + ": Rest argument annotation is not an array: "_fu) + humanizeType_kB3Te7GK(expect, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module));
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
                                                        /*MOV*/ fu::vec<s_Target> conversion = tryConvert_R8JgtFQr(expect, local_scope, (*(const s_Type*)fu::NIL), (*(const s_SolvedNode*)fu::NIL), misc_scope, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
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
                                                    error += ((("\n\n\t"_fu + explainWhichFn_KACWd7In(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + x7E_gCeFmDFw("Cannot infer missing "_fu, str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module)));
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
                                                        error += ((("\n\n\t"_fu + explainWhichFn_KACWd7In(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + x7E_gCeFmDFw(str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module), " must be :explicitly named."_fu));
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
                                                fu::str autocall_error = (error ? (((x7E_gCeFmDFw("Cannot match "_fu, str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module)) + " autocall "_fu) + qCODE_3PsDzMvu(host_arg.autocall)) + ": "_fu) : fu::str{});
                                                const s_Target t = tryMatch__mutargs_ZkfSrDkY(fu::str(host_arg.autocall), autocall_reorder, autocall_conversions, autocall_error, true, (*(const s_Scope*)fu::NIL), autocall_args, (s_Flags_F_CALL_HAS_DOT | (flags & s_Flags_F_CONVERSION)), s_Target{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                                if (!t)
                                                {
                                                    const s_SolverState& ss_1 = ss;
                                                    const s_CurrentFn& _current_fn_1 = _current_fn;
                                                    if (error)
                                                    {
                                                        error += ((("\n\n\t"_fu + explainWhichFn_KACWd7In(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + replace_t9kb9bFx(autocall_error, "\t"_fu, "\t\t"_fu));
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
                                                        BUG_zwQElfxV("autocall: reorder"_fu, ss, _helpers, _here, ctx, module);

                                                };
                                            };
                                            fu::view<s_Target> argConv = ((conversions.size() > i_1) ? conversions[i_1] : fu::view<s_Target>{});
                                            s_Type actual = conversionTailType_kzsICjzv(args[callsiteIndex].type, argConv, ss, _helpers, _here, ctx, module);
                                            if (is_never_FfV8Zuj5(actual))
                                            {
                                                if (!(host_arg.flags & s_Flags_F_INLINE))
                                                    TODO_FIX_dontBotherSpecializing = true;

                                            }
                                            else if (!expect)
                                            {
                                                if ((host_arg.flags & s_Flags_F_TYPENAME) && !is_Typename_40rRB6L8(actual))
                                                {
                                                    const s_SolverState& ss_1 = ss;
                                                    const s_CurrentFn& _current_fn_1 = _current_fn;
                                                    if (error)
                                                    {
                                                        error += ((("\n\n\t"_fu + explainWhichFn_KACWd7In(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + (x7E_gCeFmDFw(str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module), " expects a type, got a value: "_fu) + humanizeType_kB3Te7GK(actual, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)));
                                                    };
                                                    goto BL_19;
                                                };
                                            }
                                            else
                                            {
                                                if (!(isAssignableAsArgument_E3uCShzQ(expect, (actual ? actual : BUG_zwQElfxV("tryMatch: !actual"_fu, ss, _helpers, _here, ctx, module)), false, _here, ctx)))
                                                {
                                                    if (!argConv)
                                                    {
                                                        const s_SolvedNode& arg = args[callsiteIndex];
                                                        const s_SolvedNode& arg_1 = ((arg.kind == s_kind_argid) ? only_GN4mikiy(arg.items) : arg);
                                                        s_Type retype = tryRetyping_1axCq2Iv(arg_1, expect, ss, _helpers, _here, ctx, module, options);
                                                        if (retype && isAssignableAsArgument_E3uCShzQ(expect, retype, false, _here, ctx))
                                                            continue;

                                                    };
                                                    if (!(flags & s_Flags_F_CONVERSION))
                                                    {
                                                        fu::vec<s_Target> conversion = tryConvert_R8JgtFQr(expect, local_scope, actual, (!argConv ? args[callsiteIndex] : (*(const s_SolvedNode*)fu::NIL)), misc_scope, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
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
                                                        error += ((("\n\n\t"_fu + explainWhichFn_KACWd7In(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + (((x7E_gCeFmDFw(str_YPnuP2Bh(host_arg, false, ss, _current_fn, _helpers, _here, ctx, module), " expects "_fu) + humanizeType_kB3Te7GK(expect, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + ", got "_fu) + humanizeType_kB3Te7GK(actual, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)));
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
                                            const int callsiteIndex = (reorder ? reorder.map[i_2] : i_2);
                                            s_Type actual = conversionTailType_kzsICjzv(args[callsiteIndex].type, ((conversions.size() > i_2) ? conversions[i_2] : fu::view<s_Target>{}), ss, _helpers, _here, ctx, module);
                                            s_Type _2 {};
                                            fu::never BL_77_v {};
                                            REST_TYPE = ((i_2 == REST_START) ? solveArrlit_itemType_init_9PZFCkAf(actual, ss, _helpers, _here, ctx, module) : ((_2 = type_trySuper_2nNLpyR4(REST_TYPE, actual, false, _here, ctx)) ? static_cast<s_Type&&>(_2) : (__extension__ (
                                            {
                                                const s_SolverState& ss_1 = ss;
                                                const s_CurrentFn& _current_fn_1 = _current_fn;
                                                if (error)
                                                {
                                                    error += ((("\n\n\t"_fu + explainWhichFn_KACWd7In(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + ((("Rest arguments have no common supertype: "_fu + humanizeType_kB3Te7GK(REST_TYPE, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)) + " <- "_fu) + humanizeType_kB3Te7GK(actual, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)));
                                                };
                                                goto BL_19;
                                            (void)0;}), static_cast<fu::never&&>(BL_77_v))));
                                        };
                                        REST_TYPE = solveArrlit_done_5DjBNoMU(REST_TYPE, -1, options);
                                    };
                                }
                                else
                                    BUG_zwQElfxV(x7E_gCeFmDFw((x7E_gCeFmDFw("reorder < args:\n\t\treorder="_fu, fu::i64dec(reorder.map.size())) + "\n\t\t#args="_fu), fu::i64dec(args.size())), ss, _helpers, _here, ctx, module);

                            };
                            if ((kind == s_kind_template) && !TODO_FIX_dontBotherSpecializing)
                            {
                                fu::str cant_reuse {};
                                fu::str& args_mangled = ((reorder || conversions) ? cant_reuse : reusable_mangle);
                                const s_Target specIdx = trySpecialize_Cftkei7L(overloadIdx, args, args_mangled, REST_START, REST_TYPE, reorder, conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                                if (is_SPECFAIL_Dujo5Kxe(specIdx))
                                {
                                    const s_SolverState& ss_1 = ss;
                                    const s_CurrentFn& _current_fn_1 = _current_fn;
                                    if (error)
                                    {
                                        fu::str _3 {};
                                        error += ((("\n\n\t"_fu + explainWhichFn_KACWd7In(overloadIdx, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss_1, _current_fn_1, _helpers, _here, ctx, module)) + "\n\t    "_fu) + ((_3 = fu::str(ss._spec_errors[int(unsigned(specIdx._packed))])) ? static_cast<fu::str&&>(_3) : "Could not specialize."_fu));
                                    };
                                    continue;
                                }
                                else
                                    ensureLazySolved_jf9BVo46((overloadIdx = specIdx), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

                            };
                            if (ambigOkIdx && !TODO_FIX_dontBotherSpecializing)
                                matchIdx = ambigOkIdx;

                            if (matchIdx)
                            {
                                const s_Target& PREV = matchIdx;
                                const s_Target& NEXT = overloadIdx;

                                {
                                    const int inner = localOf_cCGDItnh(PREV, ss, module);
                                    const int outer = localOf_cCGDItnh(NEXT, ss, module);
                                    int BL_87_v {};
                                    const int callsite = (__extension__ (
                                    {
                                        const s_Target& t = _current_fn.out.target;
                                        BL_87_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                                    (void)0;}), BL_87_v);
                                    int _c = callsite;
                                    while (_c > inner)
                                        _c = localOf_cCGDItnh(localfn_6C2dSDn6(_c, module), ss, module);

                                    if (_c == inner)
                                    {
                                        int _i = inner;
                                        while (_i > outer)
                                            _i = localOf_cCGDItnh(localfn_6C2dSDn6(_i, module), ss, module);

                                        if (!(_i == outer))
                                            BUG_zwQElfxV(((x7E_gCeFmDFw((((x7E_gCeFmDFw((((("Leaking `"_fu + id) + "` between functions [inner/outer]: "_fu) + fnName_Cr2H3NBk(inner, ss, _helpers, _here, ctx, module)) + "::"_fu), str_sdDZgf4z(GET_oTYbwQb8(PREV, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " and "_fu) + fnName_Cr2H3NBk(outer, ss, _helpers, _here, ctx, module)) + "::"_fu), str_sdDZgf4z(GET_oTYbwQb8(NEXT, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " as seen from "_fu) + fnName_Cr2H3NBk(callsite, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                                    }
                                    else
                                        BUG_zwQElfxV(((x7E_gCeFmDFw((((("Leaking `"_fu + id) + "` between functions [inner/callsite]: "_fu) + fnName_Cr2H3NBk(inner, ss, _helpers, _here, ctx, module)) + "::"_fu), str_sdDZgf4z(GET_oTYbwQb8(PREV, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " is seen from "_fu) + fnName_Cr2H3NBk(callsite, ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

                                };
                                fail_Szrpd5G6((((((("Ambiguous call to "_fu + explainBadCallArguments_GiNpCowP(id, target, args, ss, _helpers, _here, ctx, module)) + ", matches multiple items in scope:\n"_fu) + "\n\t"_fu) + explainWhichFn_KACWd7In(PREV, conversions_out, fu::view<char>{}, s_CodeFmt_NoContext, ss, _current_fn, _helpers, _here, ctx, module)) + "\n\t"_fu) + explainWhichFn_KACWd7In(NEXT, conversions, fu::view<char>{}, s_CodeFmt_NoContext, ss, _current_fn, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
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
        error += isNotDefinedHere_K630eNdN(id);

    return (matchIdx ? matchIdx : ambigOkIdx);
}

static s_Target match__mutargs_R4CX6pO4(const s_Scope& misc_scope, const bool local_scope, const fu::str& id, fu::view<s_SolvedNode> args, s_Reorder& reorder, fu::vec<fu::vec<s_Target>>& conversions, const s_Flags flags, const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    fu::str error {};
    const s_Target ret = tryMatch__mutargs_ZkfSrDkY(fu::str(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (ret)
        return ret;
    else
    {
        error = (("Bad call to "_fu + explainBadCallArguments_GiNpCowP(id, target, args, ss, _helpers, _here, ctx, module)) + ": "_fu);
        const s_Target debug = tryMatch__mutargs_ZkfSrDkY(fu::str(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (debug)
            BUG_zwQElfxV(x7E_gCeFmDFw("Did match on second pass: "_fu, str_sdDZgf4z(GET_oTYbwQb8(debug, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
        else
            fail_Szrpd5G6(error, ss, _helpers, _here, ctx, module);

    };
}

static s_SolvedNode solveCall_zFLgBpv6(fu::str&& id, /*MOV*/ fu::vec<s_SolvedNode>&& args, const s_Flags flags, const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (id || target)
    {
        const s_Flags qualified = (flags & s_Flags_F_COMPOUND_ID);
        const s_Scope& misc_scope = (qualified ? dequalify_andGetScope_6ckfQCHl(id, ss, _helpers, _here, ctx, module) : (*(const s_Scope*)fu::NIL));
        s_Reorder reorder {};
        fu::vec<fu::vec<s_Target>> conversions {};
        const s_Target callTargIdx = match__mutargs_R4CX6pO4(misc_scope, !qualified, id, args, reorder, conversions, flags, target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        return CallerNode_X3mO7Hwg(id, s_Target(callTargIdx), static_cast<fu::vec<s_SolvedNode>&&>(args), reorder, conversions, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    }
    else
        BUG_zwQElfxV("solveCall: No id, no target."_fu, ss, _helpers, _here, ctx, module);

}

static const s_Type& Scope_lookupType_xja9hZcj(const fu::str& id, const s_Flags flags, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_SolvedNode callsite = solveCall_zFLgBpv6(fu::str(id), fu::vec<s_SolvedNode>{}, flags, s_Target{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (GET_oTYbwQb8(callsite.target, ss, _helpers, _here, ctx, module).kind != s_kind_type)
        fail_Szrpd5G6((("No type "_fu + qBAD_3PsDzMvu(id)) + " in scope."_fu), ss, _helpers, _here, ctx, module);
    else if (callsite.items)
        fail_Szrpd5G6("Scope_lookupType: Wasting time setting up callargs."_fu, ss, _helpers, _here, ctx, module);
    else
        return GET_oTYbwQb8(callsite.target, ss, _helpers, _here, ctx, module).type;

}

static const s_Type& evalTypeParam_7TWFkbjG(const fu::str& id, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Type* _0;
    return *(_0 = &(get_XmCAq2jw(ss._typeParams, id).matched)) ? *_0 : *(_0 = &(Scope_lookupType_xja9hZcj((id ? id : fail_Szrpd5G6("Falsy type param id."_fu, ss, _helpers, _here, ctx, module)), s_Flags{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))) ? *_0 : fail_Szrpd5G6((("No type param "_fu + qID_3PsDzMvu(id)) + " in scope."_fu), ss, _helpers, _here, ctx, module);
}

static s_Type evalTypeAnnot_OIK0vUDc(const s_Node& node, const bool TODO_FIX_typeof_dontStripRefs, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
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
                return add_ref_XBf6EmLx(T_0gDLePV6(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), Lifetime_temporary, _here, ctx);
            }
            else if (node.value == "&mut"_fu)
            {
                return add_mutref_XBf6EmLx(T_0gDLePV6(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), Lifetime_temporary, _here, ctx);
            }
            else if (node.value == "[]"_fu)
                return createArray_i5AzHnyb(T_0gDLePV6(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options));
            else if (node.value == "[:]"_fu)
            {
                return createSlice_Sedu2ErD(T_0gDLePV6(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), Lifetime_temporary, _here, ctx);
            }
            else if (node.value == "typeof"_fu)
            {
                /*MOV*/ s_Type type = solveNode_dEyN38Q1(only_a6qr8qgs(node.items), (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options).type;
                if (is_Typename_40rRB6L8(type))
                {
                    _here = only_a6qr8qgs(node.items).token;
                    fail_Szrpd5G6(((("Redundant "_fu + qBAD_3PsDzMvu("typeof"_fu)) + ", this is a type, not a value: "_fu) + humanizeType_kB3Te7GK(type, false, false, false, false, (*(const s_Type*)fu::NIL), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
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
        return createSlice_Sedu2ErD(T_0gDLePV6(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), Lifetime_temporary, _here, ctx);
    }
    else if (node.kind == s_kind_definit)
        return s_Type(t_zeroes);

    /*MOV*/ s_Type exprType = ((node.kind == s_kind_typeparam) ? s_Type(evalTypeParam_7TWFkbjG(node.value, ss, _notes, _current_fn, _helpers, _here, ctx, module, options)) : solveNode_dEyN38Q1(node, (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options).type);
    if (!is_Typename_40rRB6L8(exprType))
        fail_Szrpd5G6(("Invalid type annotation: evaluates to a value, not a type."_fu + " Consider wrapping it in typeof()."_fu), ss, _helpers, _here, ctx, module);
    else
        return clear_Typename_40rRB6L8(static_cast<s_Type&&>(exprType));

}

static fu::str TODO_FIX_getSpecPat_WAvCOZ73(const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Target& spec_of = (!_current_fn.out.target ? _current_fn.out.target : EXT_x9dYoBLb(_current_fn.out.target, ss, ctx, module).spec_of);
    if (!spec_of)
        return ""_fu;
    else
    {
        /*MOV*/ fu::str specPat = ""_fu;
        for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
        {
            const s_SolvedNode& arg = _current_fn.out.items[i];
            const s_SolvedNode& arg_1 = ((arg.kind == s_kind_letdef) ? GET_oTYbwQb8(arg.target, ss, _helpers, _here, ctx, module).solved : arg);
            if (!specPat)
            {
                specPat = "("_fu;
                appendGlobal_bpRG0scY(specPat, spec_of);
            };
            specPat += ":"_fu;
            specPat += serializeType_Eouw2usb(arg_1.type.vtype, "TODO_FIX_getSpecPat"_fu);
        };
        if (specPat)
            specPat += ")"_fu;

        return /*NRVO*/ specPat;
    };
}

static s_Type initStruct_1PY4Che4(const s_kind kind, const s_Shape& shape, const fu::str& name, const s_DeclAsserts asserts, fu::view<char> specPat, const uint64_t initialHash, s_Module& module)
{
    if (fu::u8((fu::u8(fu::u8(name[0])) - fu::u8(fu::u8('0')))) > fu::u8(unsigned(9)))
    {
        const int index = module.out.types.size();
        module.out.types += s_Struct { kind, fu::str(name), s_Target{}, fu::vec<s_ScopeItem>{}, fu::vec<int>{}, fu::vec<s_Target>{}, s_Shape(shape) };
        /*MOV*/ fu::str canon = createStructCanon_KyLXJEuE(kind, shape.basePrim, module.modid, index, specPat, initialHash);
        return s_Type { s_ValueType { speculateStruct_TyznD8bm(asserts, shape.flatCount), static_cast<fu::str&&>(canon) }, s_Lifetime{}, s_VFacts{} };
    }
    else
        fu::fail((("Bad struct name, leading digit: `"_fu + name) + "`."_fu));

}

                                #ifndef DEF_STRUCT_MEMBERS
                                #define DEF_STRUCT_MEMBERS
inline constexpr int STRUCT_MEMBERS = 1;
                                #endif

static s_SolvedNode solveMember_ShTOaIyx(const s_Node& node, const bool isPrimDecl, const s_Type& primType, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.kind == s_kind_let)
    {
        if (!isPrimDecl && node.items[LET_INIT] && (node.items[LET_INIT].kind != s_kind_definit))
            fail_Szrpd5G6(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member "_fu) + qBAD_3PsDzMvu(node.value)) + "."_fu), ss, _helpers, _here, ctx, module);
        else
        {
            /*MOV*/ s_SolvedNode ret = solveLetLike_dontTouchScope_3J6SwK9E(node, false, (*(const s_Type*)fu::NIL), primType, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            ret.type.vfacts = s_VFacts{};
            return /*NRVO*/ ret;
        };
    }
    else
        BUG_zwQElfxV(x7E_gCeFmDFw("solveStructMembers_1: "_fu, str_n4lV73pj(node.kind)), ss, _helpers, _here, ctx, module);

}

                                #ifndef DEF_map_EB1qWaHdT5f
                                #define DEF_map_EB1qWaHdT5f
inline fu::vec<s_SolvedNode> map_EB1qWaHd(fu::view<s_Node> a, const bool isPrimDecl, const s_Type& primType, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::vec<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember_ShTOaIyx(a[i], isPrimDecl, primType, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

    return /*NRVO*/ res;
}
                                #endif

static void field_setParentStruct_c64LTl3m(s_Overload& o, const s_Target& structTarget, const s_TokenIdx& _here, const s_Context& ctx)
{
    (!o.solved.target ? o.solved.target : BUG_9SZtRVJ0("field_setParentStruct: solved.target already set."_fu, _here, ctx)) = s_Target(structTarget);
}

inline static void l_30_61_DW1ebEM8(const s_ScopeItem& item, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (GET_oTYbwQb8(target_NWTdzsfF(item), ss, _helpers, _here, ctx, module).flags & s_Flags_F_IMPLICIT)
        ss._field_implicits += s_ScopeItem(item);

}

                                #ifndef DEF_each_hH3I3op8oDj
                                #define DEF_each_hH3I3op8oDj
inline void each_hH3I3op8(fu::view<s_ScopeItem> a, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < a.size(); i++)
        l_30_61_DW1ebEM8(a[i], ss, _helpers, _here, ctx, module);

}
                                #endif

                                #ifndef DEF_q_USAGE_bitsize
                                #define DEF_q_USAGE_bitsize
extern const int q_USAGE_bitsize;
                                #endif

static fu::str TODO_FIX_getRecursionError_nhCfGxgn(const s_Struct& s, const s_Type& instType, const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < s.items.size(); i++)
    {
        const s_Target item = target_NWTdzsfF(s.items[i]);
        const s_Type& itemType = GET_oTYbwQb8(item, ss, _helpers, _here, ctx, module).type;
        if (isStruct_jSb6u57z(itemType.vtype))
        {
            fu::str rec = ""_fu;
            if ((itemType.vtype.canon == instType.vtype.canon) || (rec = TODO_FIX_getRecursionError_nhCfGxgn(lookupUserType_ou8qkkyp(itemType, ss, _helpers, _here, ctx, module), instType, ss, _current_fn, _helpers, _here, ctx, module)))
            {
                return ("\n\t\tvia "_fu + explainWhichFn_KACWd7In(item, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_FullContext, ss, _current_fn, _helpers, _here, ctx, module)) + rec;
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

static void field_packOffset_Z9jqObBu(s_Overload& o, const int memberFlatOffset, const int memberFlatCount, const s_TokenIdx& _here, const s_Context& ctx)
{
    const int packed = (memberFlatOffset | (memberFlatCount << 16));
    if (o.kind == s_kind_field)
    {
        o.solved.helpers = s_Helpers { packed };
    }
    else
        BUG_9SZtRVJ0("field_packOffset: Not a field."_fu, _here, ctx);

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

inline static bool l_30_62_VQx0f58B(const int import, fu::vec<int>& structImports)
{
    return add_jzOp5jol(structImports, import);
}

                                #ifndef DEF_each_pcxFlXU3YO2
                                #define DEF_each_pcxFlXU3YO2
inline void each_pcxFlXU3(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu::vec<int>& structImports)
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
                l_30_62_VQx0f58B(items[i_1], structImports);

            i0 = ss.end;
        };
    };
}
                                #endif

inline static bool l_30_63_IoAtfNYL(const s_SolvedNode& member)
{
    return !is_rx_copy_GSunVkiW(member.type);
}

                                #ifndef DEF_some_HgBdJJKL1aa
                                #define DEF_some_HgBdJJKL1aa
inline bool some_HgBdJJKL(fu::view<s_SolvedNode> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_SolvedNode& item = a[i];
        if (l_30_63_IoAtfNYL(item))
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEF_x3Cx3E_rS649qDbyad
                                #define DEF_x3Cx3E_rS649qDbyad
inline int x3Cx3E_rS649qDb(const s_Shape& a, const s_Shape& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_62dxnA0D(a.non_triv_mask, b.non_triv_mask)))
        return cmp;
    else if ((cmp = x3Cx3E_62dxnA0D(a.hash, b.hash)))
        return cmp;
    else if ((cmp = x3Cx3E_mJGU9byO(a.flatCount, b.flatCount)))
        return cmp;
    else if ((cmp = x3Cx3E_mJGU9byO(a.declDepth, b.declDepth)))
        return cmp;

    if ((cmp = x3Cx3E_gCeFmDFw(a.basePrim, b.basePrim)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x21x3D_rS649qDbyad
                                #define DEF_x21x3D_rS649qDbyad
inline bool operator!=(const s_Shape& a, const s_Shape& b)
{
    return !!x3Cx3E_rS649qDb(a, b);
}
                                #endif

static s_SolvedNode __solveStruct_KhrF21lw(const bool solve, const s_Node& node, const s_Target& into, const bool TODO_FIX_useSpecPath, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    // Hoisted:
    s_Target out_target_1;

    const fu::str& origId = node.value;
    fu::str _0 {};
    fu::str _1 {};
    fu::str name = (origId ? fu::str(origId) : (_1 = ((_0 = fu::str((_current_fn.out.target ? GET_oTYbwQb8(_current_fn.out.target, ss, _helpers, _here, ctx, module).name : (*(const fu::str*)fu::NIL)))) ? static_cast<fu::str&&>(_0) : "Anon"_fu), (static_cast<fu::str&&>(_1) + (_current_fn.TODO_FIX_unique++ ? x7E_gCeFmDFw("_"_fu, fu::i64dec(_current_fn.TODO_FIX_unique++)) : fu::str{}))));

    {
        fu::str unique = ""_fu;
        each_1B9AsJYy(ss._typeParams, unique, ss, _helpers, _here, ctx, module);
        if (unique)
            name += ("_"_fu + hash62_nHEuzL2I(unique, 11));

    };
    const s_kind kind = node.kind;
    const bool isStruct = (kind == s_kind_struct);
    const bool isUnion = (kind == s_kind_union);
    const bool isPrimDecl = (!isStruct ? !isUnion : false);
    /*MOV*/ s_Type basePrimType {};
    fu::str basePrim {};
    if (isPrimDecl)
    {
        const s_Node& baseannot = node.items[STRUCT_BASE];
        basePrimType = (baseannot ? evalTypeAnnot_OIK0vUDc(baseannot, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_Type(t_u8));
        basePrim = getBasePrim_P6gLVbAT(basePrimType, ss, _helpers, _here, ctx, module);
    };
    s_TEA shape_hasher = hash_yvYDPKX8(name);
    uint64_t BL_4_v {};
    s_Shape shape = s_Shape { fu::str(basePrim), 0ull, (__extension__ (
    {
        const s_TEA& tea = shape_hasher;
        BL_4_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
    (void)0;}), BL_4_v), (isPrimDecl ? 1 : 0), 0 };
    if (isPrimDecl)
        hash_okLTgNyg(shape_hasher, basePrim);

    const s_DeclAsserts asserts = node.asserts;
    const s_Target* BL_6_v;
    const s_Target& out_target = (into ? into : (__extension__ (
    {
        fu::str specPat = ((!origId && TODO_FIX_useSpecPath) ? TODO_FIX_getSpecPat_WAvCOZ73(ss, _current_fn, _helpers, _here, ctx, module) : fu::str{});
        s_Type _2 {};
        out_target_1 = (_2 = initStruct_1PY4Che4(kind, shape, name, asserts, specPat, shape.hash, module), createRawTypedef_TErEn8Hv(origId, static_cast<s_Type&&>(_2), node.flags, name, s_SolverStatus_SS_LAZY, ss, module));
        EXT_mut_yu2tvQxN(out_target_1, ss, module).tEmplate = createTemplate_WypZD4Kf(node, ss, _current_fn);
        BL_6_v = &(out_target_1);
    (void)0;}), *BL_6_v));
    s_Type out_Typename { GET_oTYbwQb8(out_target, ss, _helpers, _here, ctx, module).type };
    /*MOV*/ s_Type instType = clear_Typename_40rRB6L8(s_Type(out_Typename));
    if (!solve)
        return createEmpty_hkWuvX58(s_kind_empty, t_void, out_target, _here);
    else
    {
        const s_Target solvingFnort0 = exchange_jPHBkujO(ss._solvingFnort, s_Target(out_target));
        fu_DEFER(ss._solvingFnort = solvingFnort0);
        GET_mut_j8q0a60a(out_target, ss, module).status |= s_SolverStatus_SS_DID_START;
        const int helpers0 = _helpers.size();
        const int helpers_data0 = ss._helpers_data.size();
        fu_DEFER(
        {
            _helpers.shrink(helpers0);
            ss._helpers_data.shrink(helpers_data0);
        });
        push_wE9ESfT8(s_HelpersData { s_Target((out_target ? out_target : BUG_zwQElfxV((("solveStruct: no out_target: `"_fu + origId) + "`."_fu), ss, _helpers, _here, ctx, module))), s_SolverPass{}, fu::str{}, s_HelpersMask_HM_Struct, 0, 0, s_Type{}, s_Type{}, fu::vec<s_Type>{}, s_Postdom{}, s_Postdom{}, s_EventsSnap{}, s_Helpers{} }, ss, _helpers);
        /*MOV*/ fu::vec<s_Target> structConverts {};
        /*MOV*/ fu::vec<int> structImports {};
        int non_triv_reason = (!is_rx_copy_GSunVkiW(instType) ? -1 : 0);
        const s_Type& primType = (isPrimDecl ? (instType ? instType : BUG_zwQElfxV("Falsy isPrimDecl.instType"_fu, ss, _helpers, _here, ctx, module)) : (*(const s_Type*)fu::NIL));
        fu::view<s_Node> items = (!node.items ? node.items : node.items[STRUCT_MEMBERS].items);
        fu::vec<s_SolvedNode> members = map_EB1qWaHd(items, isPrimDecl, primType, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

        {
            fu::vec<s_ScopeItem>& innerScope = lookupUserType_mut_qsx9vYdk(instType.vtype.canon, module, _here, ctx).items;
            if (!innerScope && members)
            {
                const bool isUnscoped = !!(node.flags & s_Flags_F_USING);
                fu::vec<s_Argument> args = (!isPrimDecl ? fu::vec<s_Argument> { fu::slate<1, s_Argument> { s_Argument { "this"_fu, fu::str{}, despeculateStruct_40rRB6L8(s_Type(instType)), s_SolvedNode{}, s_Flags{}, s_Target{}, s_BitSet{}, s_BitSet{} } } } : fu::vec<s_Argument> { fu::slate<1, s_Argument> { s_Argument { "This"_fu, fu::str{}, s_Type(out_Typename), (isUnscoped ? createEmpty_hkWuvX58(s_kind_empty, out_Typename, s_Target{}, _here) : s_SolvedNode{}), s_Flags{}, s_Target{}, s_BitSet{}, s_BitSet{} } } });
                for (int i = 0; i < members.size(); i++)
                {
                    const s_Node& item = items[i];
                    const fu::str& id = item.value;
                    const s_Flags flags = (item.flags & (s_Flags_F_PREDICATE | s_Flags_F_IMPLICIT));
                    if (flags && isPrimDecl)
                    {
                        fail_ZlZZ6QYq((((("Unexpected "_fu + qKW_3PsDzMvu("true"_fu)) + " or "_fu) + qKW_3PsDzMvu("implicit"_fu)) + " qualifier."_fu), item.token, ss, _helpers, _here, ctx, module);
                    }
                    else
                    {
                        const s_Target target = Scope_create_j83Ac6jp(ss._scope, (!isPrimDecl ? s_kind_field : s_kind_enumv), (id ? id : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module)), (*(const s_Type*)fu::NIL), (s_Flags_F_PUB | flags), s_SolverStatus{}, 0, module);
                        s_Extended& ext = EXT_mut_yu2tvQxN(target, ss, module);
                        ext.args = args;
                        ext.min = ((isUnscoped && isPrimDecl) ? 0 : args.size());
                        ext.max = args.size();
                        ext.tEmplate.node.token = items[i].token;
                        Scope_set_pOqhE364(innerScope, id, target, false);
                        field_setParentStruct_c64LTl3m(GET_mut_j8q0a60a(target, ss, module), out_target, _here, ctx);
                    };
                };
                if (isPrimDecl)
                    ss._scope.items += innerScope;
                else
                {
                    ss._field_items += innerScope;
                    each_hH3I3op8(innerScope, ss, _helpers, _here, ctx, module);
                };
            };
            if (innerScope.size() == members.size())
            {
                for (int i_1 = 0; i_1 < innerScope.size(); i_1++)
                {
                    const s_ScopeItem& item_1 = innerScope[i_1];
                    const s_SolvedNode& member = members[i_1];
                    if (item_1.id == member.value)
                    {
                        const s_Target field_target = target_NWTdzsfF(item_1);
                        s_Overload& field = GET_mut_j8q0a60a(field_target, ss, module);
                        field.type = member.type;
                        s_Shape member_shape = getShape_EA8Wup3K(member.type.vtype, _here, ctx, module);
                        int memberFlatOffset = 0;
                        if (!isPrimDecl)
                        {
                            hash_okLTgNyg(shape_hasher, item_1.id);
                            hash_dDLcy6Ao(shape_hasher, member_shape.hash);
                            shape.declDepth = max_mJGU9byO(shape.declDepth, (member_shape.declDepth + 1));
                            memberFlatOffset = shape.flatCount;
                            shape.flatCount += member_shape.flatCount;
                            if (member_shape.non_triv_mask)
                            {
                                if (!(non_triv_reason))
                                    non_triv_reason = (non_triv_reason = (i_1 + 1));

                                shape.non_triv_mask |= member_shape.non_triv_mask;
                            };
                        };

                        {
                            const int expect = min_mJGU9byO(member_shape.flatCount, q_USAGE_bitsize);
                            unsigned BL_26_v {};
                            const int actual = __builtin_popcount((__extension__ (
                            {
                                const s_ValueType& type = member.type.vtype;
                                BL_26_v = ((type.quals & q_USAGE));
                            (void)0;}), BL_26_v));
                            if ((actual == expect) || isStruct_jSb6u57z(member.type.vtype))
                            {
                                if ((!is_trivial_QHDuaMIF(member.type.vtype, _here, ctx, module) != !!member_shape.non_triv_mask) && member_shape.flatCount)
                                    BUG_zwQElfxV((x7E_gCeFmDFw(((x7E_gCeFmDFw("member.is_trivial("_fu, fu::booldec(is_trivial_QHDuaMIF(member.type.vtype, _here, ctx, module))) + "),"_fu) + " but non_triv_mask("_fu), fu::u64dec(member_shape.non_triv_mask)) + ")"_fu), ss, _helpers, _here, ctx, module);

                            }
                            else
                                BUG_zwQElfxV((x7E_gCeFmDFw(((x7E_gCeFmDFw("member.type.usage popcount("_fu, fu::i64dec(actual)) + ")"_fu) + " != member_shape.flatCount("_fu), fu::i64dec(member_shape.flatCount)) + ")"_fu), ss, _helpers, _here, ctx, module);

                        };
                        fu::str recursionError = (isStruct_jSb6u57z(member.type.vtype) ? TODO_FIX_getRecursionError_nhCfGxgn(tryLookupUserType_QHDuaMIF(member.type.vtype, _here, ctx, module), instType, ss, _current_fn, _helpers, _here, ctx, module) : fu::str{});
                        if (recursionError)
                            fail_Szrpd5G6(((("Type "_fu + qBAD_3PsDzMvu(name)) + " is self-recursive:\n"_fu) + recursionError), ss, _helpers, _here, ctx, module);
                        else
                        {
                            if (member.flags & s_Flags_F_USING)
                            {
                                structConverts.push(target_NWTdzsfF(item_1));
                                const int m = modidOfOrigin_u9sdbuWn(field.type);
                                if (m && (m != module.modid))
                                    add_jzOp5jol(structImports, m);

                                add_HFuH3ZyJ(structImports, lookupTypeImports_QHDuaMIF(field.type.vtype, _here, ctx, module));
                            };
                            if (!isPrimDecl)
                                field_packOffset_Z9jqObBu(field, memberFlatOffset, member_shape.flatCount, _here, ctx);

                        };
                    }
                    else
                        BUG_zwQElfxV("solveStructMembers_4: field id mismatch."_fu, ss, _helpers, _here, ctx, module);

                };
                if (isPrimDecl)
                {
                    const bool sIgned = (basePrim[0] == 'i');
                    const bool uNsigned = (basePrim[0] == 'u');
                    fu::view<char> size_str = fu::get_view(basePrim, 1);
                    const fu::u8 size = ((size_str == "8"_fu) ? fu::u8(8u) : ((size_str == "16"_fu) ? fu::u8(16u) : ((size_str == "32"_fu) ? fu::u8(32u) : ((size_str == "64"_fu) ? fu::u8(64u) : ((size_str == "128"_fu) ? fu::u8(128u) : BUG_zwQElfxV(("Enum auto-incrementer: unknown prim size: "_fu + size_str), ss, _helpers, _here, ctx, module))))));
                    s_Intlit last {};
                    for (int i_2 = 0; i_2 < innerScope.size(); i_2++)
                    {
                        s_SolvedNode& init = GET_mut_j8q0a60a(target_NWTdzsfF(innerScope[i_2]), ss, module).solved;
                        const s_SolvedNode& member_1 = members[i_2];
                        init = member_1.items[LET_INIT];
                        _here = member_1.token;
                        if (init)
                        {
                            _here = init.token;
                            if (init.kind == s_kind_int)
                            {
                                last = Intlit_sNwIFkW3(init.value);
                                if (last.error)
                                    fail_Szrpd5G6(last.error, ss, _helpers, _here, ctx, module);
                                else
                                    continue;

                            }
                            else
                                last.error = "Cannot auto-increment, please provide an explicit value."_fu;

                        };
                        if (last.error)
                            fail_Szrpd5G6(last.error, ss, _helpers, _here, ctx, module);
                        else if (last.negative)
                        {
                            fail_Szrpd5G6("Previous constant is negative, not sure how to increment, please specify an explicit value."_fu, ss, _helpers, _here, ctx, module);
                        }
                        else
                        {
                            /*MOV*/ s_Intlit next = Intlit_LmjxY9JB(((kind == s_kind_flags) ? (i_2 ? (last.absval << 1ull) : 1ull) : (last.absval + 1ull)), false, fu::str{}, uNsigned, sIgned, 10ull);
                            if (next.error || (next.absval > last.absval))
                            {
                                const fu::u8 minsize = (sIgned ? next.minsize_i : next.minsize_u);
                                if (minsize > size)
                                    fail_Szrpd5G6((x7E_gCeFmDFw((x7E_gCeFmDFw("Primitive range exhausted: requires "_fu, fu::u64dec(minsize)) + " bits, got "_fu), fu::u64dec(size)) + "."_fu), ss, _helpers, _here, ctx, module);
                                else
                                {
                                    last = next;
                                    if (sIgned || uNsigned)
                                    {
                                        init = SolvedNode_wUIpeYIY(s_kind_int, primType, s_Flags{}, x7E_gCeFmDFw((next.negative ? "-"_fu : fu::str{}), fu::u64dec(next.absval)), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
                                    }
                                    else
                                        fail_Szrpd5G6(("Cannot auto-increment this type: "_fu + basePrim), ss, _helpers, _here, ctx, module);

                                };
                            }
                            else
                                fail_Szrpd5G6((next.error ? static_cast<fu::str&&>(next.error) : "Failed to auto-increment, range exhausted."_fu), ss, _helpers, _here, ctx, module);

                        };
                    };
                };
            }
            else
                BUG_zwQElfxV((((x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("solveStructMembers_3: field lens mismatch: "_fu, fu::i64dec(innerScope.size())) + " vs "_fu), fu::i64dec(members.size())) + "/"_fu), fu::i64dec(items.size())) + ": `struct "_fu) + name) + "`."_fu), ss, _helpers, _here, ctx, module);

        };
        uint64_t BL_54_v {};
        shape.hash = (__extension__ (
        {
            const s_TEA& tea = shape_hasher;
            BL_54_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
        (void)0;}), BL_54_v);
        if (EPH_On3tAJ9X(out_target, ss, module).callers)
            shape.hash = lookupUserType_ou8qkkyp(instType, ss, _helpers, _here, ctx, module).shape.hash;

        if (non_triv_reason)
        {
            if (asserts & s_DeclAsserts_A_TRIVIAL)
                fail_Szrpd5G6((("Struct is not "_fu + qKW_3PsDzMvu("trivial"_fu)) + ((non_triv_reason < 1) ? ((" because it is "_fu + qKW_3PsDzMvu("nocopy"_fu)) + "."_fu) : (" because of non-trivial member "_fu + qID_3PsDzMvu(unless_oob_tDd5KGnR(items, (non_triv_reason - 1)).value)))), ss, _helpers, _here, ctx, module);
            else if (shape.non_triv_mask || (non_triv_reason < 0))
                shape.non_triv_mask |= (1ull << (shape.hash & 63ull));
            else
                BUG_zwQElfxV("solveStruct: Empty non_triv_mask, but some member is non-trivial."_fu, ss, _helpers, _here, ctx, module);

        };
        each_pcxFlXU3(ss._scope.imports, ss._ss.imports, 0, structImports);
        /*MOV*/ s_Type instType_1 = static_cast<s_Type&&>(instType);

        {
            bool CHANGE = false;
            if (is_rx_copy_GSunVkiW(instType_1) && some_HgBdJJKL(members))
            {
                CHANGE = true;
                instType_1 = make_non_copyable_40rRB6L8(s_Type(instType_1));
            };
            if (!isStruct && !isUnion)
            {
                if (!(shape.flatCount == 1))
                    BUG_zwQElfxV(((x7E_gCeFmDFw((x7E_gCeFmDFw("solveStruct: Bad flatCount("_fu, fu::i64dec(shape.flatCount)) + "): "_fu), str_n4lV73pj(kind)) + " "_fu) + name), ss, _helpers, _here, ctx, module);

            };

            {
                s_Struct& s = lookupUserType_mut_qsx9vYdk(instType_1.vtype.canon, module, _here, ctx);
                s.target = (out_target ? out_target : BUG_zwQElfxV("solveStruct: No struct/out_target."_fu, ss, _helpers, _here, ctx, module));
                s.converts = static_cast<fu::vec<s_Target>&&>(structConverts);
                s.imports = static_cast<fu::vec<int>&&>(structImports);

                {
                    s_Shape shape0 { s.shape };
                    s.shape = shape;
                    if (!(CHANGE))
                        CHANGE = (shape0 != shape);

                };
                if (GET_oTYbwQb8(s.target, ss, _helpers, _here, ctx, module).status & s_SolverStatus_SS_DID_START)
                {

                    {
                        const int actual_1 = getFlatCount_QHDuaMIF(instType_1.vtype, _here, ctx, module);
                        if (actual_1 != shape.flatCount)
                            BUG_zwQElfxV((x7E_gCeFmDFw((x7E_gCeFmDFw("solveStruct: getFlatCount("_fu, fu::i64dec(actual_1)) + ") !== shape.flatCount("_fu), fu::i64dec(shape.flatCount)) + ")"_fu), ss, _helpers, _here, ctx, module);

                    };
                    USAGE_setMaxUsage_TB5Kkwh9(instType_1, shape.flatCount);
                }
                else
                    BUG_zwQElfxV("solveStruct: Setting stuff but missing SS_DID_START."_fu, ss, _helpers, _here, ctx, module);

            };
            /*MOV*/ s_Type& instType_2 = instType_1;
            /*MOV*/ s_Type out_Typename_1 = into_Typename_40rRB6L8(static_cast<s_Type&&>(instType_2));
            int min = 0;
            /*MOV*/ fu::vec<s_Argument> args_1 {};
            if (isPrimDecl)
            {
                args_1.push(s_Argument { "value"_fu, fu::str{}, static_cast<s_Type&&>(basePrimType), s_SolvedNode{}, s_Flags{}, s_Target{}, s_BitSet{}, s_BitSet{} });
            }
            else
            {
                int N = members.size();
                if (N && isUnion)
                    N = 1;

                for (int i_3 = 0; i_3 < N; i_3++)
                {
                    const s_SolvedNode& member_2 = members[i_3];
                    s_SolvedNode _3 {};
                    /*MOV*/ s_Argument arg = s_Argument { fu::str((member_2.value ? member_2.value : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module))), fu::str{}, s_Type((member_2.type ? member_2.type : BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module))), ((_3 = s_SolvedNode(member_2.items[LET_INIT])) ? static_cast<s_SolvedNode&&>(_3) : (isUnion ? createDefinit_CGnCwQAy(member_2.type, ss, _helpers, _here, ctx, module) : s_SolvedNode{})), (member_2.flags & s_Flags_F_MUSTNAME), s_Target{}, s_BitSet{}, s_BitSet{} };
                    if (!arg.dEfault)
                        min++;

                    args_1.push(static_cast<s_Argument&&>(arg));
                };
            };
            const int max = args_1.size();
            if (max && !min)
                min++;

            s_Extended& ext_1 = EXT_mut_yu2tvQxN(out_target, ss, module);
            ext_1.min = min;
            ext_1.max = max;
            ext_1.args = static_cast<fu::vec<s_Argument>&&>(args_1);
            const int mustUpdate = (CHANGE ? EPH_On3tAJ9X(out_target, ss, module).callers.size() : 0);
            s_Overload& overload = GET_mut_j8q0a60a(out_target, ss, module);
            overload.type = static_cast<s_Type&&>(out_Typename_1);
            if (mustUpdate)
                overload.status |= s_SolverStatus_SS_UPDATED;

        };
        lazySolveEnd_rlWxz9m0(out_target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        return s_SolvedNode{};
    };
}

static s_SolvedNode uPrepStruct_85d0tiHn(const s_Node& node, const bool TODO_FIX_useSpecPath, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    return __solveStruct_KhrF21lw(false, node, s_Target{}, TODO_FIX_useSpecPath, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

static s_SolvedNode unorderedPrep_A_4jEuEqU9(const s_Node& node, const bool TODO_FIX_useSpecPath, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_kind kind = node.kind;
    if (kind == s_kind_fn)
        return uPrepFn_A_lbb7zMin(node, ss, _current_fn, _helpers, _here, ctx, module);
    else if (isTypeDecl_BnhPDVZj(kind))
        return uPrepStruct_85d0tiHn(node, TODO_FIX_useSpecPath, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else
        BUG_zwQElfxV((x7E_gCeFmDFw("TODO: unorderedPrep_A("_fu, str_n4lV73pj(node.kind)) + ")."_fu), ss, _helpers, _here, ctx, module);

}

static void unorderedPrep_B_T0PWqbJL(fu::view<s_Node> nodes, fu::view<s_SolvedNode> results, const int unorderedClass, s_SolverState& ss, const s_Module& module)
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
            s_Ephemeral& eph = EPH_mut_pSZyFPKm(target, ss, module);
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

static fu::vec<s_SolvedNode> solveNodes_11fGwhsU(fu::view<s_Node> nodes, const s_DeadBreak dead_brk, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const s_StaticEval static_eval_brk, const bool TODO_FIX_useSpecPath, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::vec<s_SolvedNode> result {};
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_Node& node = nodes[i];
        if (!(!node))
        {
            const int unorderedClass = unorderedClassify_2xoVcnZp(node.kind);
            if (!unorderedClass)
            {
                HERE_hEi2PUi5(node.token, _here);
                const bool last = (i == (nodes.size() - 1));
                const s_Type& type = ((last && use_type_last) ? type_last : type_all);
                s_SolvedNode solved = solveNode_dEyN38Q1(node, type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                result += s_SolvedNode(solved);
                if (is_never_FfV8Zuj5(solved.type) && dead_brk && ((dead_brk != s_DeadBreak_DeadBreak_Only_WhileSolvingRecursion) || is_AssumeNever_WhileSolvingRecursion_GSunVkiW(solved.type)))
                {
                    if (i < (nodes.size() - 1))
                    {
                        const s_SolverNotes note = s_SolverNotes_N_DeadCode;
                        const s_SolverState& ss_1 = ss;
                        if (note & options.break_notes)
                            fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                        else
                            _notes |= note;

                    };
                    break;
                }
                else if (static_eval_brk)
                {
                    const s_StaticEval ae_item = tryAbstractEvalAsBool_JCuol0P9(solved, (i == (nodes.size() - 1)), ss, _current_fn, _helpers, _here, ctx, module);
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
                    const s_Node& node_1 = (*(_0 = &(nodes[i_1])) ? *_0 : BUG_zwQElfxV("solveNodes, prep-a: falsy node"_fu, ss, _helpers, _here, ctx, module));
                    if (unorderedClassify_2xoVcnZp(node_1.kind) != unorderedClass)
                    {
                        i1 = i_1;
                        break;
                    }
                    else
                    {
                        HERE_hEi2PUi5(node_1.token, _here);
                        result += unorderedPrep_A_4jEuEqU9(node_1, TODO_FIX_useSpecPath, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
                    };
                };
                if (i1 > i0)
                {
                    i = (i1 - 1);
                    unorderedPrep_B_T0PWqbJL(fu::get_view(nodes, i0, i1), fu::get_view(result, (i0 + offset), (i1 + offset)), unorderedClass, ss, module);
                    bool repeat = true;
                    while (repeat)
                    {
                        repeat = false;
                        for (int i_2 = i0; i_2 < i1; i_2++)
                        {
                            const s_Node* _1;
                            const s_Node& node_1 = (*(_1 = &(nodes[i_2])) ? *_1 : BUG_zwQElfxV("solveNodes, solve: falsy node"_fu, ss, _helpers, _here, ctx, module));
                            HERE_hEi2PUi5(node_1.token, _here);
                            const s_Target& into = result[(i_2 + offset)].target;
                            if (lazySolveStart_O723BPnd(into, ss, _notes, _current_fn, _helpers, _here, ctx, module, options))
                                repeat = true;

                        };
                    };
                }
                else
                {
                    BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
                };
            };
        };
    };
    return /*NRVO*/ result;
}

static s_SolvedNode solveRoot_0cW9s34s(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Helpers helpers = s_Helpers { _helpers.size() };
    push_wE9ESfT8(s_HelpersData{}, ss, _helpers);
    fu::vec<s_SolvedNode> items = solveNodes_11fGwhsU(node.items, s_DeadBreak_DeadBreak_Always, t_void, (*(const s_Type*)fu::NIL), false, s_StaticEval{}, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (is_never_FfV8Zuj5(if_last_GN4mikiy(items).type))
    {
        _here = last_GN4mikiy(items).token;
        fail_Szrpd5G6("Noreturn during static init: this program will never finish booting."_fu, ss, _helpers, _here, ctx, module);
    }
    else
    {
        /*MOV*/ s_SolvedNode root = SolvedNode_wUIpeYIY(s_kind_root, t_void, s_Flags{}, (*(const fu::str*)fu::NIL), items, s_Target{}, helpers, _here);
        runAllPasses_5MvXZq77(root, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        return /*NRVO*/ root;
    };
}

static s_SolvedNode solveArgID_sYwZJFjf(const s_Node& node, const s_Type& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_SolvedNode expr = solveNode_dEyN38Q1(only_a6qr8qgs(node.items), type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return solved_8M42guvz(node, expr.type, fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, _here);
}

static s_SolvedNode solveCall_yLz7Ddul(const s_Node& node, const s_Target& target, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::vec<s_SolvedNode> args = solveNodes_11fGwhsU(node.items, s_DeadBreak_DeadBreak_Only_WhileSolvingRecursion, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, s_StaticEval{}, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (is_AssumeNever_WhileSolvingRecursion_GSunVkiW(if_last_GN4mikiy(args).type))
        return s_SolvedNode(last_GN4mikiy(args));
    else
        return solveCall_zFLgBpv6(fu::str(node.value), static_cast<fu::vec<s_SolvedNode>&&>(args), node.flags, target, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

}

static s_SolvedNode solveArrlit_Ur65BzXO(const s_Node& node, const s_Type& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_Type itemType = (type ? tryClear_sliceable_EA8Wup3K(type.vtype, _here, ctx, module) : s_Type{});
    if (!itemType && type && isStruct_jSb6u57z(type.vtype))
        return solveCall_yLz7Ddul(node, s_Target(lookupUserType_ou8qkkyp(type, ss, _helpers, _here, ctx, module).target), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else
    {
        /*MOV*/ fu::vec<s_SolvedNode> args = solveNodes_11fGwhsU(node.items, s_DeadBreak_DeadBreak_Always, itemType, (*(const s_Type*)fu::NIL), false, s_StaticEval{}, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (is_never_FfV8Zuj5(if_last_GN4mikiy(args).type))
        {

            {
                const s_SolverNotes note = s_SolverNotes_N_DeadArrlit;
                const s_SolverState& ss_1 = ss;
                if (note & options.break_notes)
                    fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
                else
                    _notes |= note;

            };
            return createBlock_4vpZBLng(t_never, static_cast<fu::vec<s_SolvedNode>&&>(args), s_Helpers{}, _here);
        }
        else if (!(node.flags & s_Flags_F_CALL_HAS_NAMED_ARGS))
            return createArrlit_Zm60u2Pt(static_cast<fu::vec<s_SolvedNode>&&>(args), itemType, ss, _helpers, _here, ctx, module, options);
        else
            fail_Szrpd5G6("TODO: solveArrlit: tryMatch by [ argnames: ... ] without function name."_fu, ss, _helpers, _here, ctx, module);

    };
}

static s_SolvedNode createBool_ozDkj4yA(const bool value, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return createBool_4AXYcGKj((value ? "true"_fu : "false"_fu), s_Type(t_bool), ss, _helpers, _here, ctx, module);
}

static s_SolvedNode createNot_zC79f6pc(const s_SolvedNode& item, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (item.kind == s_kind_bool)
    {
        if (item.value == "true"_fu)
            return createBool_ozDkj4yA(false, ss, _helpers, _here, ctx, module);
        else if (item.value == "false"_fu)
            return createBool_ozDkj4yA(true, ss, _helpers, _here, ctx, module);
        else
            BUG_zwQElfxV(("Invalid bool literal: "_fu + qBAD_3PsDzMvu(item.value)), ss, _helpers, _here, ctx, module);

    }
    else
    {
        s_Type type { t_bool };
        const s_StaticEval ae = tryAbstractEvalAsBool_JCuol0P9(item, false, ss, _current_fn, _helpers, _here, ctx, module);
        if (ae)
            type.vfacts = ((ae == s_StaticEval_SE_True) ? s_VFacts_AlwaysFalse : s_VFacts_AlwaysTrue);

        return SolvedNode_wUIpeYIY(s_kind_not, type, s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(item) } }, s_Target{}, s_Helpers{}, _here);
    };
}

static s_SolvedNode solveNot_aID0p1FU(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_SolvedNode item = solveNode_dEyN38Q1(only_a6qr8qgs(node.items), t_proposition, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    _here = node.token;
    return createNot_zC79f6pc(item, ss, _current_fn, _helpers, _here, ctx, module);
}

static s_SolvedNode solveIf_DGQpyMrz(const s_Node& node, const s_Type& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_ScopeMemo scope0 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
    fu_DEFER(Scope_pop_5cTQENbb(ss._scope, scope0, _helpers));
    /*MOV*/ s_SolvedNode cond = solveNode_dEyN38Q1(node.items[0], t_proposition, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (is_never_FfV8Zuj5(cond.type))
        return /*NRVO*/ cond;
    else
    {
        const s_StaticEval ae_cond = tryAbstractEvalAsBool_JCuol0P9(cond, false, ss, _current_fn, _helpers, _here, ctx, module);
        if (ae_cond)
            return createBlock_O5z3dG59(static_cast<s_SolvedNode&&>(cond), solveNode_dEyN38Q1(node.items[((ae_cond == s_StaticEval_SE_True) ? 1 : 2)], type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), _here);
        else
        {
            /*MOV*/ s_SolvedNode cons = solveNode_dEyN38Q1(node.items[1], type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            fu_DEFER(Scope_pop_5cTQENbb(ss._scope, scope0, _helpers));
            /*MOV*/ s_SolvedNode alt = solveNode_dEyN38Q1(node.items[2], type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
            _here = node.token;
            return createIf_uoAeG0uH(cond, static_cast<s_SolvedNode&&>(cons), static_cast<s_SolvedNode&&>(alt), s_Type(type), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        };
    };
}

static s_SolvedNode solveOr_JdLWoGcd(const s_Node& node, const s_Type& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_ScopeMemo scope0 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
    fu_DEFER(Scope_pop_5cTQENbb(ss._scope, scope0, _helpers));
    /*MOV*/ fu::vec<s_SolvedNode> items = solveNodes_11fGwhsU(node.items, s_DeadBreak_DeadBreak_Always, (is_void_FfV8Zuj5(type) ? t_proposition : type), type, true, s_StaticEval_SE_True, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return createOr_Vakj1ep0(static_cast<fu::vec<s_SolvedNode>&&>(items), s_Type(type), ss, _current_fn, _helpers, _here, ctx, module);
}

static s_SolvedNode solveAnd_D7KKQnia(const s_Node& node, const s_Type& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_ScopeMemo scope0 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
    fu_DEFER(Scope_pop_5cTQENbb(ss._scope, scope0, _helpers));
    const bool staticEvalBrk = ((type == t_void) || propositionOK_hoadAQC0(type, _here, ctx));
    /*MOV*/ fu::vec<s_SolvedNode> items = solveNodes_11fGwhsU(node.items, s_DeadBreak_DeadBreak_Always, t_proposition, type, true, (staticEvalBrk ? s_StaticEval_SE_False : s_StaticEval{}), false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return createAnd_M01WDdrB(static_cast<fu::vec<s_SolvedNode>&&>(items), s_Type(type), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
}

static s_SolvedNode solveLetStatement_1nX1GXVT(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.kind == s_kind_let)
        return solveNode_dEyN38Q1(node, t_void, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else
        BUG_zwQElfxV((x7E_gCeFmDFw("Expected a `let` statement, got: `"_fu, str_n4lV73pj(node.kind)) + "`."_fu), ss, _helpers, _here, ctx, module);

}

static s_SolvedNode solveLoop_bsaTMoSd(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_ScopeMemo scope0 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
    fu_DEFER(Scope_pop_5cTQENbb(ss._scope, scope0, _helpers));
    const int brk_idx = _helpers.size();
    int BL_1_v {};
    push_wE9ESfT8(s_HelpersData { s_Target{}, s_SolverPass{}, fu::str(node.value), s_HelpersMask((s_HelpersMask_HM_Anon | s_HelpersMask_HM_CanBreak)), (__extension__ (
    {
        const s_Target& t = _current_fn.out.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v), GET_next_local_index_3KGaHIS6(ss, _current_fn, _helpers, _here, ctx, module), s_Type{}, s_Type(t_void), fu::vec<s_Type>{}, s_Postdom{}, s_Postdom{}, s_EventsSnap{}, s_Helpers{} }, ss, _helpers);
    const s_Node& n_init = node.items[LOOP_INIT];
    const s_Node& n_pre_cond = node.items[LOOP_PRE_COND];
    const s_Node& n_pre = node.items[LOOP_PRE];
    const s_Node& n_body = node.items[LOOP_BODY];
    const s_Node& n_post = node.items[LOOP_POST];
    const s_Node& n_post_cond = node.items[LOOP_POST_COND];
    /*MOV*/ s_SolvedNode init = (n_init ? solveLetStatement_1nX1GXVT(n_init, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
    if (is_never_FfV8Zuj5(init.type))
    {

        {
            const s_SolverNotes note = s_SolverNotes_N_DeadLoopInit;
            const s_SolverState& ss_1 = ss;
            if (note & options.break_notes)
                fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
            else
                _notes |= note;

        };
        return /*NRVO*/ init;
    }
    else
    {
        /*MOV*/ s_SolvedNode pre_cond = (n_pre_cond ? solveNode_dEyN38Q1(n_pre_cond, t_proposition, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode pre = (n_pre ? solveBlock_OdZn4fK7(n_pre, t_void, 0, s_HelpersMask_HM_LoopPreheader, (*(const fu::str*)fu::NIL), 0, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode body = (n_body ? solveBlock_OdZn4fK7(n_body, t_void, 0, s_HelpersMask_HM_CanBreak, (*(const fu::str*)fu::NIL), 0, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode post = (n_post ? solveBlock_OdZn4fK7(n_post, t_void, 0, s_HelpersMask_HM_CanBreak, (*(const fu::str*)fu::NIL), 0, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode post_cond = (n_post_cond ? solveNode_dEyN38Q1(n_post_cond, t_proposition, ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : s_SolvedNode{});
        const s_Helpers& h = _helpers[brk_idx];
        const s_Type& type = ((!pre_cond && !post_cond && !s_HelpersMask(((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).mask & s_HelpersMask_HM_LabelUsed))) ? t_never : t_void);
        HERE_hEi2PUi5(node.token, _here);
        return SolvedNode_wUIpeYIY(s_kind_loop, type, s_Flags{}, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<6, s_SolvedNode> { static_cast<s_SolvedNode&&>(init), static_cast<s_SolvedNode&&>(pre_cond), static_cast<s_SolvedNode&&>(pre), static_cast<s_SolvedNode&&>(body), static_cast<s_SolvedNode&&>(post), static_cast<s_SolvedNode&&>(post_cond) } }, s_Target{}, h, _here);
    };
}

static s_Helpers& Scope_lookupReturn_n6ELY7JP(const fu::str& id, const bool lambdaOK, const s_SolverState& ss, fu::view_mut<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
                    BL_6_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                (void)0;}), *BL_6_v).mask & s_HelpersMask_HM_CanReturn))))
                {
                    const s_HelpersData* BL_8_v;
                    if (!(s_HelpersMask(((__extension__ (
                    {
                        const s_Helpers& h = item;
                        BL_8_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                    (void)0;}), *BL_8_v).mask & s_HelpersMask_HM_Lambda)) && !lambdaOK))
                    {
                        const s_HelpersData* BL_10_v;
                        if (!(id && ((__extension__ (
                        {
                            const s_Helpers& h = item;
                            BL_10_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                        (void)0;}), *BL_10_v).id != id)))
                            return item;

                    };
                };
            };
        };
    };
    fail_Szrpd5G6((("No return "_fu + qBAD_3PsDzMvu(id)) + " in scope."_fu), ss, _helpers, _here, ctx, module);
}

                                #ifndef DEF_each_vBPtN1ubDD0
                                #define DEF_each_vBPtN1ubDD0
inline void each_vBPtN1ub(fu::view<s_ScopeSkip> a, int& i)
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

static s_Helpers& Scope_lookupLabel_WCClyApl(const fu::str& id, const bool cont, const s_SolverState& ss, fu::view_mut<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
                    BL_7_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                (void)0;}), *BL_7_v).mask & s_HelpersMask_HM_CanBreak)))
                {
                    if (!CONTINUE_BELOW)
                    {
                        const s_HelpersData* BL_10_v;
                        if (id || !s_HelpersMask(((__extension__ (
                        {
                            const s_Helpers& h = item;
                            BL_10_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
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
                        BL_14_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                    (void)0;}), *BL_14_v).id == id) : !!s_HelpersMask(((__extension__ (
                    {
                        const s_Helpers& h = item;
                        BL_15_v = &((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)));
                    (void)0;}), *BL_15_v).mask & s_HelpersMask_HM_Anon))))
                        continue;
                    else if (cont)
                    {
                        i++;
                        each_vBPtN1ub(ss._ss.helpers, i);
                        if (!(i < _helpers.size()))
                            fail_Szrpd5G6((((("Cannot "_fu + qBAD_3PsDzMvu(("continue :"_fu + id))) + " from here, did you mean to "_fu) + qKW_3PsDzMvu("break"_fu)) + "?"_fu), ss, _helpers, _here, ctx, module);

                    };
                };
                return _helpers.mutref(i);
            };
        };
    };
    fail_Szrpd5G6((("No label "_fu + qBAD_3PsDzMvu(id)) + " in scope."_fu), ss, _helpers, _here, ctx, module);
}

static s_SolvedNode solveDeclExpr_ifOpCxkR(const s_Node& node, const bool TODO_FIX_useSpecPath, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ s_SolvedNode res { only_GN4mikiy(solveNodes_11fGwhsU((fu::slate<1, s_Node> { s_Node(node) }), s_DeadBreak_DeadBreak_Dont, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, s_StaticEval{}, TODO_FIX_useSpecPath, ss, _notes, _current_fn, _helpers, _here, ctx, module, options)) };
    if (res.target && (GET_oTYbwQb8(res.target, ss, _helpers, _here, ctx, module).kind == s_kind_type))
        res.type = GET_oTYbwQb8(res.target, ss, _helpers, _here, ctx, module).type;

    return /*NRVO*/ res;
}

static s_SolvedNode solveJump_PAgKBd3K(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Helpers h { ((node.kind == s_kind_return) ? Scope_lookupReturn_n6ELY7JP(node.value, !!(node.flags & s_Flags_F_LAMBDA), ss, _helpers, _here, ctx, module) : Scope_lookupLabel_WCClyApl(node.value, (node.kind == s_kind_continue), ss, _helpers, _here, ctx, module)) };
    const s_Node& n_expr = if_only_a6qr8qgs(node.items);
    /*MOV*/ s_SolvedNode expr = (!n_expr ? createEmpty_hkWuvX58(s_kind_empty, t_void, s_Target{}, _here) : (unorderedClassify_2xoVcnZp(n_expr.kind) ? solveDeclExpr_ifOpCxkR(n_expr, ((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).target == _current_fn.out.target), ss, _notes, _current_fn, _helpers, _here, ctx, module, options) : solveNode_dEyN38Q1(n_expr, ((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual ? clear_vfacts_40rRB6L8(s_Type((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_actual)) : s_Type((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_expect)), ss, _notes, _current_fn, _helpers, _here, ctx, module, options)));
    if (is_never_FfV8Zuj5(expr.type))
        return /*NRVO*/ expr;
    else
    {
        if ((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_expect)
            tryConvertIfNeeded_cAtQ5Jev(expr, s_Type((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).ret_expect), false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);

        int BL_4_v {};
        if ((((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).local_of != (__extension__ (
        {
            const s_Target& t = _current_fn.out.target;
            BL_4_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_4_v))
        {
            add_jzOp5jol(_current_fn.far_jumps, (((h.index >= 0) && (h.index < ss._helpers_data.size())) ? ss._helpers_data[h.index] : BUG_9SZtRVJ0("Helpers.GET: h.index is oob"_fu, _here, ctx)).local_of);
            return SolvedNode_wUIpeYIY(s_kind___far_jump, t_never, node.flags, (*(const fu::str*)fu::NIL), fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { static_cast<s_SolvedNode&&>(expr) } }, s_Target{}, h, _here);
        }
        else
            return solveJump_finish_inW6jANn(node.flags, expr, h, ss, _helpers, _here, ctx, module);

    };
}

static s_SolvedNode solveInt_xrwwsmWT(const s_Node& node, const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return solved_8M42guvz(node, solveInt_gCZyni41(node.value, type, ss, _helpers, _here, ctx, module, options), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveReal_DyEatQ7S(const s_Node& node, const s_Type& type, const s_TokenIdx& _here)
{
    return solved_8M42guvz(node, solveReal_IYoJr7Ki(type), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveString_ZS10ySDC(const s_Node& node, const s_Type& type, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return solved_8M42guvz(node, solveString_V8sDIyan(node.value, type, ss, _helpers, _here, ctx, module, options), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveChar_xrgfyyss(const s_Node& node, const s_TokenIdx& _here)
{
    return solved_8M42guvz(node, t_byte, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static void visit_MF0jhzkU(const int modid, s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!Scope_import_0bWDyLig(modid, ss, _helpers, _here, ctx, module)))
    {
        const s_Scope& s = ctx.modules[modid].out.solve.scope;
        for (int i = 0; i < s.imports.size(); i++)
            visit_MF0jhzkU(s.imports[i], ss, _helpers, _here, ctx, module);

    };
}

static s_SolvedNode solveImport_Y3tEdlKf(const s_Node& node, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Module& m = findModule_ClwICBUT(node.value, ss, _helpers, _here, ctx, module);
    visit_MF0jhzkU(m.modid, ss, _helpers, _here, ctx, module);
    if (node.flags & s_Flags_F_PUB)
    {
        if (_current_fn.scope0)
            fail_Szrpd5G6("Cannot pub import from here."_fu, ss, _helpers, _here, ctx, module);
        else
            add_jzOp5jol(ss._pub_imports, m.modid);

    };
    return createEmpty_hkWuvX58(s_kind_empty, t_void, s_Target{}, _here);
}

static s_SolvedNode solveDefer_6eFUublF(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    /*MOV*/ s_SolvedNode item = solveNode_dEyN38Q1(only_a6qr8qgs(node.items), t_void, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return solved_8M42guvz(node, t_void, fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { static_cast<s_SolvedNode&&>(item) } }, s_Target{}, _here);
}

static s_SolvedNode solveTryCatch_EPk4bwK3(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.items.size() == 3)
    {
        const s_ScopeMemo scope0 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
        /*MOV*/ s_SolvedNode tRy = solveNode_dEyN38Q1(node.items[0], t_void, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        Scope_pop_5cTQENbb(ss._scope, scope0, _helpers);
        const s_ScopeMemo scope0_1 = Scope_snap_dcsfJwX5(ss._scope, _helpers);
        /*MOV*/ s_SolvedNode err = solveLetStatement_1nX1GXVT(node.items[1], ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        /*MOV*/ s_SolvedNode cAtch = solveNode_dEyN38Q1(node.items[2], t_void, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        Scope_pop_5cTQENbb(ss._scope, scope0_1, _helpers);
        if ((err.kind == s_kind_letdef) && isAssignableAsArgument_E3uCShzQ(GET_oTYbwQb8(err.target, ss, _helpers, _here, ctx, module).solved.type, t_string, false, _here, ctx))
        {
            const s_Type& type = ((is_never_FfV8Zuj5(tRy.type) && is_never_FfV8Zuj5(cAtch.type)) ? t_never : t_void);
            return solved_8M42guvz(node, type, fu::vec<s_SolvedNode> { fu::slate<3, s_SolvedNode> { static_cast<s_SolvedNode&&>(tRy), static_cast<s_SolvedNode&&>(err), static_cast<s_SolvedNode&&>(cAtch) } }, s_Target{}, _here);
        }
        else
            fail_Szrpd5G6(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), ss, _helpers, _here, ctx, module);

    }
    else
    {
        BUG_zwQElfxV(fu::str{}, ss, _helpers, _here, ctx, module);
    };
}

static s_SolvedNode solveTypeCast_xDoANr6N(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Node& left = node.items[0];
    const s_Node& right = node.items[1];
    s_Type expect = evalTypeAnnot_OIK0vUDc(right, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    /*MOV*/ s_SolvedNode actual = solveNode_dEyN38Q1(left, expect, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    convertIfNeeded_zp67JUwj(actual, expect, "Cannot convert: "_fu, (*(const fu::str*)fu::NIL), (*(const fu::str*)fu::NIL), false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    return /*NRVO*/ actual;
}

static s_SolvedNode solveTypeAssert_JX3ind0z(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_Map_KlcLuPSIt9g typeParams0 = steal_AYMWowQg(ss._typeParams);
    fu_DEFER(std::swap(ss._typeParams, typeParams0));
    bool _0 {};
    return (_0 = evalTypePattern_jcr0vd81(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), createBool_ozDkj4yA(_0, ss, _helpers, _here, ctx, module));
}

static s_SolvedNode solveTypeParam_1vM0Xl8I(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    const s_Type* _0;
    return (_0 = &(evalTypeParam_7TWFkbjG(node.value, ss, _notes, _current_fn, _helpers, _here, ctx, module, options)), solved_8M42guvz(node, *_0, (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, _here));
}

static s_SolvedNode solveAddrOfFn_IHpIn58l(const s_Node& node, s_SolverState& ss, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const fu::str& id = node.value;
    s_Type type = X_addrofTarget_50QXKYhL(solveAddrOfFn_R1ppOMxl(fu::str(id), node.token, node.flags, fu::view<int>{}, ss, _helpers, _here, ctx, module));
    return createEmpty_hkWuvX58(s_kind_empty, type, s_Target{}, _here);
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

static void l_30_70_MaHoo5SR(s_Node& item, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
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

static void walk_0xzu1MlK(s_Node& node, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    for (int i = 0; i < node.items.size(); i++)
    {
        s_Node* _0;
        (_0 = &(node.items.mutref(i)), walk_0xzu1MlK(*_0, placeholder, prefix, suffix, inside, field));
    };
    l_30_70_MaHoo5SR(node, placeholder, prefix, suffix, inside, field);
}

inline static s_Node astReplace_Zbh4yFM6(const s_Node& node, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    /*MOV*/ s_Node node_1 { node };
    walk_0xzu1MlK(node_1, placeholder, prefix, suffix, inside, field);
    return /*NRVO*/ node_1;
}

static s_SolvedNode solveForFieldsOf_JuTZBfz1(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    fu::view<char> placeholder = node.value;
    const s_Node& body_template = node.items[1];
    fu::str prefix = (placeholder + "_"_fu);
    fu::str suffix = ("_"_fu + placeholder);
    fu::str inside = (("_"_fu + placeholder) + "_"_fu);
    s_Type _0 {};
    fu::view<s_ScopeItem> fields = (_0 = evalTypeAnnot_OIK0vUDc(node.items[0], false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), lookupUserType_ou8qkkyp(static_cast<s_Type&&>(_0), ss, _helpers, _here, ctx, module)).items;
    fu::vec<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        items_ast += astReplace_Zbh4yFM6(body_template, placeholder, prefix, suffix, inside, field);
    };
    /*MOV*/ fu::vec<s_SolvedNode> items = solveNodes_11fGwhsU(items_ast, s_DeadBreak_DeadBreak_Always, t_void, (*(const s_Type*)fu::NIL), false, s_StaticEval{}, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    const s_Type& type = (is_never_FfV8Zuj5(if_last_GN4mikiy(items).type) ? t_never : t_void);
    return createBlock_4vpZBLng(type, static_cast<fu::vec<s_SolvedNode>&&>(items), s_Helpers{}, _here);
}

static void compilerBreak_pUHhhKcY(const s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    /*MOV*/ fu::str debug = "\nCompiler break:"_fu;
    if (_current_fn.out.target)
    {
        const s_Target& t = _current_fn.out.target;
        debug += (x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("\n    Current fn: "_fu, str_sdDZgf4z(GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)) + " at ("_fu), fu::i64dec(int(unsigned(((t._packed >> 40ull) & 0xfffffull))))) + ", "_fu), fu::i64dec(int(unsigned(((t._packed >> 20ull) & 0xfffffull))))) + "):"_fu);
        fu::view<s_Overload> locals = EXT_x9dYoBLb(t, ss, ctx, module).locals;
        for (int i = 0; i < locals.size(); i++)
        {
            const s_Overload& item = locals[i];
            debug += x7E_gCeFmDFw("\n        "_fu, str_sdDZgf4z(item, ss, _helpers, _here, ctx, module));
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

static s_SolvedNode executeCompilerPragma_gIg4YZbd(const s_Node& node, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    if (node.value != "break"_fu)
    {
        fu::vec<s_SolvedNode> _0 {};
        return (_0 = solveNodes_11fGwhsU(node.items, s_DeadBreak_DeadBreak_Dont, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), false, s_StaticEval{}, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options), SolvedNode_wUIpeYIY(s_kind_pragma, t_void, s_Flags{}, node.value, static_cast<fu::vec<s_SolvedNode>&&>(_0), s_Target{}, s_Helpers{}, _here));
    }
    else
    {
        compilerBreak_pUHhhKcY(ss, _current_fn, _helpers, _here, ctx, module);
        return createEmpty_hkWuvX58(s_kind_empty, t_void, s_Target{}, _here);
    };
}

static s_SolvedNode createUnwrap_md0kaTaY(const s_TokenIdx& _here)
{
    return SolvedNode_wUIpeYIY(s_kind_unwrap, t_void, s_Flags{}, (*(const fu::str*)fu::NIL), (*(const fu::vec<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode solveNode_dEyN38Q1(const s_Node& node, const s_Type& type, s_SolverState& ss, s_SolverNotes& _notes, s_CurrentFn& _current_fn, fu::vec<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, const s_Options& options)
{
    HERE_hEi2PUi5(node.token, _here);
    const s_kind k = node.kind;
    if (k == s_kind_root)
        return solveRoot_0cW9s34s(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_block)
        return solveBlock_OdZn4fK7(node, type, 0, s_HelpersMask_HM_CanBreak, (*(const fu::str*)fu::NIL), 0, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_argid)
        return solveArgID_sYwZJFjf(node, type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_let)
        return solveLet_45O7r6fI(node, false, type, (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_call)
    {
        return solveCall_yLz7Ddul(node, s_Target{}, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    }
    else if (k == s_kind_arrlit)
        return solveArrlit_Ur65BzXO(node, type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_not)
        return solveNot_aID0p1FU(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_if)
        return solveIf_DGQpyMrz(node, type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_or)
        return solveOr_JdLWoGcd(node, type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_and)
        return solveAnd_D7KKQnia(node, type, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_loop)
        return solveLoop_bsaTMoSd(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_break)
        return solveJump_PAgKBd3K(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_return)
        return solveJump_PAgKBd3K(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_continue)
        return solveJump_PAgKBd3K(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_int)
        return solveInt_xrwwsmWT(node, type, ss, _helpers, _here, ctx, module, options);
    else if (k == s_kind_real)
        return solveReal_DyEatQ7S(node, type, _here);
    else if (k == s_kind_str)
        return solveString_ZS10ySDC(node, type, ss, _helpers, _here, ctx, module, options);
    else if (k == s_kind_char)
        return solveChar_xrgfyyss(node, _here);
    else if (k == s_kind_bool)
        return createBool_4AXYcGKj(node.value, s_Type(t_bool), ss, _helpers, _here, ctx, module);
    else if (k == s_kind_definit)
        return solveDefinit_0j7JC2L1(type, ss, _helpers, _here, ctx, module);
    else if (k == s_kind_import)
        return solveImport_Y3tEdlKf(node, ss, _current_fn, _helpers, _here, ctx, module);
    else if (k == s_kind_defer)
        return solveDefer_6eFUublF(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_try)
        return solveTryCatch_EPk4bwK3(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_typecast)
        return solveTypeCast_xDoANr6N(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_typeassert)
        return solveTypeAssert_JX3ind0z(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_typeparam)
        return solveTypeParam_1vM0Xl8I(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_addroffn)
        return solveAddrOfFn_IHpIn58l(node, ss, _helpers, _here, ctx, module);
    else if (k == s_kind_forfieldsof)
        return solveForFieldsOf_JuTZBfz1(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_pragma)
        return executeCompilerPragma_gIg4YZbd(node, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    else if (k == s_kind_empty)
    {
        return createEmpty_hkWuvX58(s_kind_empty, t_void, s_Target{}, _here);
    }
    else if (k == s_kind_unwrap)
        return createUnwrap_md0kaTaY(_here);
    else if (unorderedClassify_2xoVcnZp(k))
    {
        return solveDeclExpr_ifOpCxkR(node, false, ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    }
    else
        BUG_zwQElfxV(x7E_gCeFmDFw("solve: Unexpected "_fu, str_n4lV73pj(k)), ss, _helpers, _here, ctx, module);

}

static void hash_X4armfTT(s_TEA& hash, const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    hash_KpbyTrxM(hash, s_TEA { unsigned((type.vtype.quals & q_TAGS)), (type.lifetime.uni0n.size() ? unsigned(1) : 0u) });
    hash_dDLcy6Ao(hash, getShape_EA8Wup3K(type.vtype, _here, ctx, module).hash);
}

static void sighashNode_q8TBplv7(const s_SolvedNode& n, const s_Target& fn_target, s_TEA& hash, s_Map_9nkdZKTSB9h& name_counts, fu::vec<s_Target>& already_hashing, fu::vec<s_Target>& cycle_participants, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (isImmediatelyDiscardable_6wzYjnDc(n.kind))
    {
        if (n.value)
            hash_okLTgNyg(hash, n.value);

    }
    else
    {
        hash_KpbyTrxM(hash, s_TEA { unsigned(n.kind), unsigned(n.items.size()) });
        for (int i = 0; i < n.items.size(); i++)
            sighashNode_q8TBplv7(n.items[i], fn_target, hash, name_counts, already_hashing, cycle_participants, ss, _current_fn, _helpers, _here, ctx, module);

        if (n.kind == s_kind_letdef)
            sighashNode_q8TBplv7(GET_oTYbwQb8(n.target, ss, _helpers, _here, ctx, module).solved, fn_target, hash, name_counts, already_hashing, cycle_participants, ss, _current_fn, _helpers, _here, ctx, module);
        else if (n.kind == s_kind_let)
        {
            int BL_8_v {};
            hash_dDLcy6Ao(hash, uint64_t(unsigned((__extension__ (
            {
                const s_Target& t = n.target;
                BL_8_v = (int(unsigned((t._packed & 0xfffffull))));
            (void)0;}), BL_8_v))));
            hash_X4armfTT(hash, n.type, _here, ctx, module);
        }
        else if (n.kind == s_kind_call)
        {
            const s_Target& target = n.target;
            const int locid = int(unsigned((target._packed & 0xfffffull)));
            if (locid)
                hash_dDLcy6Ao(hash, uint64_t(unsigned(locid)));
            else
            {
                const s_Overload& o = GET_oTYbwQb8(target, ss, _helpers, _here, ctx, module);
                const s_kind k = o.kind;
                if (k == s_kind_fn)
                {
                    s_TEA sighash { EXT_x9dYoBLb(target, ss, ctx, module).sighash };
                    if (!sighash)
                    {
                        const int idx = find_P9xEJb6w(already_hashing, target);
                        if ((idx >= 0))
                        {
                            add_eY6ht47h(cycle_participants, fn_target);
                            sighash = s_TEA { 0xffffffffu, unsigned(idx) };
                        }
                        else if (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid)
                            sighash = computeFnSighash_txpwDv7f(target, name_counts, already_hashing, cycle_participants, ss, _current_fn, _helpers, _here, ctx, module);
                        else
                        {
                            BUG_zwQElfxV(("Off-module fn with no sighash: "_fu + explainWhichFn_KACWd7In(target, fu::view<fu::vec<s_Target>>{}, fu::view<char>{}, s_CodeFmt_NoContext, ss, _current_fn, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
                        };
                    };
                    hash_KpbyTrxM(hash, sighash);
                }
                else if ((k == s_kind___native) || (k == s_kind_enumv))
                    hash_okLTgNyg(hash, o.name);
                else if (k == s_kind_field)
                {
                    const int offset = field_unpackOffset_NCtF3vLS(o, _here, ctx).memberFlatOffset;
                    hash_dDLcy6Ao(hash, uint64_t(unsigned(offset)));
                }
                else if (k == s_kind_var)
                    sighashNode_q8TBplv7(o.solved, fn_target, hash, name_counts, already_hashing, cycle_participants, ss, _current_fn, _helpers, _here, ctx, module);
                else if ((k != s_kind_type) && (k != s_kind_definit))
                    BUG_zwQElfxV(x7E_gCeFmDFw("computeFnSighash: no support for kind="_fu, str_n4lV73pj(k)), ss, _helpers, _here, ctx, module);

            };
        };
    };
}

inline static void l_30_127_LEzHgUuF(const s_SolvedNode& l_30_127, const s_Target& fn_target, s_TEA& hash, s_Map_9nkdZKTSB9h& name_counts, fu::vec<s_Target>& already_hashing, fu::vec<s_Target>& cycle_participants, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    sighashNode_q8TBplv7(l_30_127, fn_target, hash, name_counts, already_hashing, cycle_participants, ss, _current_fn, _helpers, _here, ctx, module);
}

                                #ifndef DEF_each_kBQernkmlxc
                                #define DEF_each_kBQernkmlxc
inline void each_kBQernkm(fu::view<s_SolvedNode> a, const s_Target& fn_target, s_TEA& hash, s_Map_9nkdZKTSB9h& name_counts, fu::vec<s_Target>& already_hashing, fu::vec<s_Target>& cycle_participants, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < a.size(); i++)
        l_30_127_LEzHgUuF(a[i], fn_target, hash, name_counts, already_hashing, cycle_participants, ss, _current_fn, _helpers, _here, ctx, module);

}
                                #endif

static fu::vec<fu::str>& l_6_2_kkbwM2bb(s_Map_9nkdZKTSB9h& _)
{
    return _.keys;
}

static fu::vec<unsigned>& l_6_3_5UbWZHjT(s_Map_9nkdZKTSB9h& _)
{
    return _.vals;
}

inline static int bfind_9gAERYrq(fu::view<char> item, const fu::str& item_1, s_Map_9nkdZKTSB9h& _)
{
    int lo = 0;
    int hi = l_6_2_kkbwM2bb(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(l_6_2_kkbwM2bb(_)[i], item);
        if (cmp == 0)
            return i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_2_kkbwM2bb(_).insert(lo, fu::str(item_1));
    l_6_3_5UbWZHjT(_).insert(lo, unsigned{});
    return lo;
}

                                #ifndef DEF_ref_UY4Pln2oC69
                                #define DEF_ref_UY4Pln2oC69
inline unsigned& ref_UY4Pln2o(const fu::str& item, s_Map_9nkdZKTSB9h& _)
{
    const int idx = bfind_9gAERYrq(item, item, _);
    return l_6_3_5UbWZHjT(_).mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_CG78E43lf0e
                                #define DEF_ref_CG78E43lf0e
inline unsigned& ref_CG78E43l(s_Map_9nkdZKTSB9h& _, const fu::str& key)
{
    return ref_UY4Pln2o(key, _);
}
                                #endif

static const s_TEA& computeFnSighash_txpwDv7f(const s_Target& fn_target, s_Map_9nkdZKTSB9h& name_counts, fu::vec<s_Target>& already_hashing, fu::vec<s_Target>& cycle_participants, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    s_TEA hash {};
    const s_Overload& o = GET_oTYbwQb8(fn_target, ss, _helpers, _here, ctx, module);
    if (o.kind == s_kind_fn)
    {
        if (o.flags & s_Flags_F_TEMPLATE)
        {
            hash_X4armfTT(hash, o.type, _here, ctx, module);
            already_hashing += s_Target(fn_target);
            each_kBQernkm(fu::vec<s_SolvedNode>(o.solved.items), fn_target, hash, name_counts, already_hashing, cycle_participants, ss, _current_fn, _helpers, _here, ctx, module);
            already_hashing.pop();
        }
        else
        {
            hash_okLTgNyg(hash, ss.shortModuleName);
            hash_CwEi37x3(hash, ref_CG78E43l(name_counts, GET_oTYbwQb8(fn_target, ss, _helpers, _here, ctx, module).name)++);
        };
        s_TEA* _0;
        const s_TEA& sighash = ((!*(_0 = &(EXT_mut_yu2tvQxN(fn_target, ss, module).sighash)) ? *_0 : BUG_zwQElfxV("sighash already set"_fu, ss, _helpers, _here, ctx, module)) = s_TEA(non_zero_T98svGTs(hash)));
        return sighash;
    }
    else
        BUG_zwQElfxV(x7E_gCeFmDFw("computeFnSighash: Not a fn: "_fu, str_sdDZgf4z(GET_oTYbwQb8(fn_target, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);

}

static void computeFnSighash_asIfCycleRoot_kDKqK703(const s_Target& fn_target, s_Map_9nkdZKTSB9h& name_counts, s_SolverState& ss, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::vec<s_Target> already_hashing {};
    fu::vec<s_Target> cycle_participants {};
    const s_TEA cycle_root_hash { computeFnSighash_txpwDv7f(fn_target, name_counts, already_hashing, cycle_participants, ss, _current_fn, _helpers, _here, ctx, module) };
    for (int i = 0; i < cycle_participants.size(); i++)
        hash_KpbyTrxM(EXT_mut_yu2tvQxN(cycle_participants[i], ss, module).sighash, cycle_root_hash);

}

inline static void l_30_124_Ygypiakk(const s_Argument& host_arg, const int i, fu::vec<s_BitSet>& _may_alias, fu::vec<int>& _argPos_1b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!is_ref_gBx1AgSx(host_arg.type)))
    {
        int BL_2_v {};
        grow_if_oob_yq7gHTQs(_argPos_1b, (__extension__ (
        {
            const s_Target& t = host_arg.target;
            BL_2_v = (int(unsigned((t._packed & 0xfffffull))));
        (void)0;}), BL_2_v)) = (i + 1);
        const s_BitSet& may_alias = ((host_arg.flags & s_Flags_F_WRITTEN_TO) ? host_arg.may_alias : (*(const s_BitSet*)fu::NIL));
        if (may_alias)
        {
            if (!is_mutref_hoadAQC0(host_arg.type, _here, ctx))
                BUG_zwQElfxV("ensureArgSequencing: F_WRITTEN_TO but !is_mutref"_fu, ss, _helpers, _here, ctx, module);
            else if (!has_QTGTghRU(may_alias, i))
                BUG_zwQElfxV("ensureArgSequencing: may_alias does not list self [1]"_fu, ss, _helpers, _here, ctx, module);

            grow_if_oob_ibzQKImi(_may_alias, i) = s_BitSet(may_alias);
        };
    };
}

                                #ifndef DEF_each_b6rI449Zqoh
                                #define DEF_each_b6rI449Zqoh
inline void each_b6rI449Z(fu::view<s_Argument> a, fu::vec<s_BitSet>& _may_alias, fu::vec<int>& _argPos_1b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < a.size(); i++)
        l_30_124_Ygypiakk(a[i], i, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);

}
                                #endif

inline static void l_30_125_byNdpqfh(const int locid, s_Regions& regions, const bool dontUse_may_alias, fu::view<s_BitSet> _may_alias, fu::view<int> _argPos_1b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
                    BUG_zwQElfxV("ensureArgSequencing: may_alias does not list self [2]"_fu, ss, _helpers, _here, ctx, module);
                else
                    regions.arguments |= may_alias;

            }
            else
                add_U5p6nLOf(regions.arguments, i);

        };
        flag_4bfUL5uy(regions, Lifetime_climbType_426itOgG(GET_oTYbwQb8(nested_RctvSJIv(locid, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module).lifetime, dontUse_may_alias, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
    };
}

                                #ifndef DEF_Lifetime_each_b5FdJrKIrZj
                                #define DEF_Lifetime_each_b5FdJrKIrZj
inline void Lifetime_each_b5FdJrKI(const s_Lifetime& lifetime, s_Regions& regions, const bool dontUse_may_alias, fu::view<s_BitSet> _may_alias, fu::view<int> _argPos_1b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit(chars, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        l_30_125_byNdpqfh(int(((r & 1u) ? 0u : (r >> 1u))), regions, dontUse_may_alias, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
    };
}
                                #endif

static void flag_4bfUL5uy(s_Regions& regions, const s_Lifetime& lifetime, const bool dontUse_may_alias, fu::view<s_BitSet> _may_alias, fu::view<int> _argPos_1b, const s_SolverState& ss, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    Lifetime_each_b5FdJrKI(lifetime, regions, dontUse_may_alias, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
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

static void clear_mtAcIAVx(s_Regions& regions)
{
    clear_gNKGEQWi(regions.locals);
    clear_gNKGEQWi(regions.arguments);
}

static void clear_sTvpTDcY(s_Unsequenced& events)
{
    clear_mtAcIAVx(events.writes);
    clear_mtAcIAVx(events.moves);
    clear_mtAcIAVx(events.reads);
}

static bool has_inter_ddHwB0Ua(const s_Regions& a, const s_Regions& b)
{
    return has_inter_gae63pSm(a.locals, b.locals) || has_inter_gae63pSm(a.arguments, b.arguments);
}

inline static void l_30_126_6MhOuyiJ(const int i, const s_Argument& host_arg, const int revSeqIdx, const bool unsequencedOutside, const bool unsequencedHere, s_Unsequenced& outer, s_Unsequenced& parallel, int& MUSTSEQ_mask, fu::view_mut<s_SolvedNode> args, fu::view<s_BitSet> _may_alias, fu::view<int> _argPos_1b, int& _unseqDepth, s_Unsequenced& _inner, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (unsequencedHere)
    {
        if (revSeqIdx == 1)
            parallel = steal_thakp6lr(_inner);
        else if (revSeqIdx > 1)
        {
            parallel |= _inner;
            clear_sTvpTDcY(_inner);
        };
    };
    s_SolvedNode& arg = args.mutref(i);
    s_SolvedNode* BL_4_v;
    s_SolvedNode& arg_1 = ((arg.kind != s_kind_move) ? arg : (__extension__ (
    {
        s_SolvedNode& expr = only_Iovd0TM6(arg.items);
        if (unsequencedOutside)
        {
            flag_4bfUL5uy(outer.moves, expr.type.lifetime, false, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
        };
        BL_4_v = &(expr);
    (void)0;}), *BL_4_v));
    visit_6ex3qFch(arg_1, _may_alias, _argPos_1b, _unseqDepth, _inner, ss, _notes, _helpers, _here, ctx, module, options);
    if (unsequencedOutside)
    {
        if (host_arg.flags & s_Flags_F_WRITTEN_TO)
        {
            flag_4bfUL5uy(outer.writes, arg_1.type.lifetime, false, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
        };
    };
    if (unsequencedHere)
    {
        fu::never BL_9_v {};
        const s_SolverNotes note = ((has_inter_ddHwB0Ua(_inner.moves, parallel.reads) || has_inter_ddHwB0Ua(parallel.moves, _inner.reads)) ? s_SolverNotes_N_MoveMustSeq : ((has_inter_gae63pSm(_inner.writes.locals, parallel.reads.locals) || has_inter_gae63pSm(parallel.writes.locals, _inner.reads.locals)) ? s_SolverNotes_N_BckMustSeq : ((has_inter_gae63pSm(_inner.writes.arguments, parallel.reads.arguments) || has_inter_gae63pSm(parallel.writes.arguments, _inner.reads.arguments)) ? s_SolverNotes_N_AARMustSeq : (__extension__ (
        {
            return;
        (void)0;}), static_cast<fu::never&&>(BL_9_v)))));

        {
            const s_SolverState& ss_1 = ss;
            if (note & options.break_notes)
                fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss_1, _helpers, _here, ctx, module);
            else
                _notes |= note;

        };
        MUSTSEQ_mask |= (1 << (i & 31));
    };
}

                                #ifndef DEF_argsReverse_wjx34UwgOG0
                                #define DEF_argsReverse_wjx34UwgOG0
inline void argsReverse_wjx34Uwg(const bool RTL, fu::view<s_Argument> host_args, const bool unsequencedOutside, const bool unsequencedHere, s_Unsequenced& outer, s_Unsequenced& parallel, int& MUSTSEQ_mask, fu::view_mut<s_SolvedNode> args, fu::view<s_BitSet> _may_alias, fu::view<int> _argPos_1b, int& _unseqDepth, s_Unsequenced& _inner, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
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
                l_30_126_6MhOuyiJ(i, host_arg, revSeqIdx, unsequencedOutside, unsequencedHere, outer, parallel, MUSTSEQ_mask, args, _may_alias, _argPos_1b, _unseqDepth, _inner, ss, _notes, _helpers, _here, ctx, module, options);
                ooe_isLast = false;
                revSeqIdx++;
            };
        };
    };
}
                                #endif

[[noreturn]] static fu::never BUG_9UY21ZcI(const s_TokenIdx& token, const fu::str& reason, const s_SolverState& ss, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    _here = token;
    BUG_zwQElfxV(fu::str(reason), ss, _helpers, _here, ctx, module);
}

static void visit_6ex3qFch(s_SolvedNode& node, fu::view<s_BitSet> _may_alias, fu::view<int> _argPos_1b, int& _unseqDepth, s_Unsequenced& _inner, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (node.kind == s_kind_call)
    {
        const s_Overload& o = GET_oTYbwQb8(node.target, ss, _helpers, _here, ctx, module);
        if (!node.items)
        {
            if ((o.kind == s_kind_var) && _unseqDepth)
            {
                flag_4bfUL5uy(_inner.reads, o.type.lifetime, true, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
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
            fu::vec<s_Argument> host_args { EXT_x9dYoBLb(node.target, ss, ctx, module).args };
            fu::view_mut<s_SolvedNode> args = node.items;
            if (host_args.size() == args.size())
            {
                argsReverse_wjx34Uwg(RTL, host_args, unsequencedOutside, unsequencedHere, outer, parallel, MUSTSEQ_mask, args, _may_alias, _argPos_1b, _unseqDepth, _inner, ss, _notes, _helpers, _here, ctx, module, options);
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
                    BUG_zwQElfxV("!unsequencedOutside but outer events non-empty."_fu, ss, _helpers, _here, ctx, module);
                else
                    clear_sTvpTDcY(_inner);

            }
            else
            {
                int BL_12_v {};
                BUG_9UY21ZcI(node.token, x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("ensureArgSequencing: host_args.len != args.len ("_fu, fu::i64dec(host_args.size())) + " != "_fu), fu::i64dec(args.size())) + "), nestingFnort= "_fu), fu::i64dec((__extension__ (
                {
                    const s_Target& t = ss._nestingFnort;
                    BL_12_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
                (void)0;}), BL_12_v))) + " "_fu), str_sdDZgf4z(GET_oTYbwQb8(ss._nestingFnort, ss, _helpers, _here, ctx, module), ss, _helpers, _here, ctx, module)), ss, _helpers, _here, ctx, module);
            };
        };
    }
    else if (node.kind == s_kind_letdef)
    {
        s_SolvedNode root = steal_LyWpwxOa(GET_mut_j8q0a60a(node.target, ss, module).solved);
        visit_6ex3qFch(root, _may_alias, _argPos_1b, _unseqDepth, _inner, ss, _notes, _helpers, _here, ctx, module, options);
        std::swap(root, GET_mut_j8q0a60a(node.target, ss, module).solved);
    }
    else
    {
        if (node.kind == s_kind_move)
        {
            if (_unseqDepth && (node.kind == s_kind_move))
            {
                flag_4bfUL5uy(_inner.moves, only_GN4mikiy(node.items).type.lifetime, false, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
            };
        };
        for (int i = 0; i < node.items.size(); i++)
        {
            s_SolvedNode* _0;
            (_0 = &(node.items.mutref(i)), visit_6ex3qFch(*_0, _may_alias, _argPos_1b, _unseqDepth, _inner, ss, _notes, _helpers, _here, ctx, module, options));
        };
    };
}

static void nestingFnort_ensureArgSequencing_UtDGXE7V(s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::vec<s_BitSet> _may_alias {};
    fu::vec<int> _argPos_1b {};
    each_b6rI449Z(EXT_x9dYoBLb(ss._nestingFnort, ss, ctx, module).args, _may_alias, _argPos_1b, ss, _helpers, _here, ctx, module);
    int _unseqDepth = 0;
    s_Unsequenced _inner {};
    s_SolvedNode root = steal_LyWpwxOa(last_Iovd0TM6(GET_mut_j8q0a60a(ss._nestingFnort, ss, module).solved.items));
    visit_6ex3qFch(root, _may_alias, _argPos_1b, _unseqDepth, _inner, ss, _notes, _helpers, _here, ctx, module, options);
    std::swap(root, last_Iovd0TM6(GET_mut_j8q0a60a(ss._nestingFnort, ss, module).solved.items));
}

static void PASS_runAllVerifiers_sX39hmhN(s_SolverState& ss, s_SolverNotes& _notes, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{

    {
        s_Map_9nkdZKTSB9h name_counts {};
        for (int i = 0; i < ss._scope.overloads.size(); i++)
        {
            const s_Overload& o = ss._scope.overloads[i];
            if (o.kind == s_kind_fn)
            {
                const s_Target target = Target_2jgCJZJY(module.modid, (i + 1), 0);
                const s_SolverStatus status = o.status;
                if (s_SolverStatus(~status) & s_SolverStatus_SS_FINALIZED)
                {
                    destroyOverload_E6DyHeiJ(target, ss, module);
                    continue;
                }
                else if (!EXT_x9dYoBLb(target, ss, ctx, module).sighash)
                    computeFnSighash_asIfCycleRoot_kDKqK703(target, name_counts, ss, _current_fn, _helpers, _here, ctx, module);

            };
        };
    };
    if (ss._nestingFnort)
    {
        BUG_zwQElfxV("PASS_runAllVerifiers: non-empty _nestingFnort"_fu, ss, _helpers, _here, ctx, module);
    }
    else
    {
        for (int i = 0; i < ss._scope.overloads.size(); i++)
        {
            const s_Overload& o = ss._scope.overloads[i];
            if (o.kind == s_kind_fn)
            {
                ss._nestingFnort = Target_2jgCJZJY(module.modid, (i + 1), 0);
                nestingFnort_ensureArgSequencing_UtDGXE7V(ss, _notes, _helpers, _here, ctx, module, options);
            };
        };
    };
    ss._nestingFnort = s_Target{};
}

static void Scope_observeDefects_nHHmNIZX(fu::view<s_ScopeItem> items, s_SolverState& ss, s_SolverNotes& _notes, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    bool hasLets = false;
    bool hasPubTemplates = false;
    fu::vec<s_Target> privates {};
    for (int i = 0; i < items.size(); i++)
    {
        const s_Target t = target_NWTdzsfF(items[i]);
        if (!(int(unsigned(((t._packed >> 40ull) & 0xfffffull))) != module.modid))
        {
            const s_Overload& o = GET_oTYbwQb8(t, ss, _helpers, _here, ctx, module);
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
            fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss, _helpers, _here, ctx, module);
        else
            _notes |= note;

    };
    if (privates && hasPubTemplates)
    {

        {
            const s_SolverNotes note = s_SolverNotes_N_SD_ExternPrivates;
            if (note & options.break_notes)
                fail_Szrpd5G6((("`break_notes`: Unwanted event: "_fu + qBAD_3PsDzMvu(str_vnKE5IyQ(note))) + "."_fu), ss, _helpers, _here, ctx, module);
            else
                _notes |= note;

        };
        for (int i_1 = 0; i_1 < privates.size(); i_1++)
        {
            s_Overload& o = GET_mut_j8q0a60a(privates[i_1], ss, module);
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
    ss.shortModuleName = (module.modid ? getShortModuleName_dn61tipl(module.fname, _here, ctx) : fu::str{});
    ss._spec_errors = fu::vec<fu::str> { fu::slate<1, fu::str> { "BUG: Specializer reentry."_fu } };
    ss.TODO_FIX_convert_args = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode{} } };
    ss.TODO_FIX_convert_args.mutref(0).kind = s_kind___convert;
    ss._scope.extended += s_Extended{};
    push_wE9ESfT8(s_HelpersData{}, ss, _helpers);
    if (module.modid)
    {
        ss._scope.imports += module.modid;
        _Scope_import__forceCopy_7nxeodlg(0, ss, ctx);
    }
    else
    {
        createRawTypedef_TErEn8Hv("i8"_fu, s_Type(t_i8), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("i16"_fu, s_Type(t_i16), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("i32"_fu, s_Type(t_i32), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("i64"_fu, s_Type(t_i64), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("i128"_fu, s_Type(t_i128), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("u8"_fu, s_Type(t_u8), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("u16"_fu, s_Type(t_u16), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("u32"_fu, s_Type(t_u32), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("u64"_fu, s_Type(t_u64), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("u128"_fu, s_Type(t_u128), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("f32"_fu, s_Type(t_f32), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("f64"_fu, s_Type(t_f64), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("bool"_fu, s_Type(t_bool), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("byte"_fu, s_Type(t_byte), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("void"_fu, s_Type(t_void), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
        createRawTypedef_TErEn8Hv("never"_fu, s_Type(t_never), s_Flags_F_PUB, (*(const fu::str*)fu::NIL), s_SolverStatus{}, ss, module);
    };
    /*MOV*/ s_SolvedNode root = solveNode_dEyN38Q1(s_Node(module.in.parse.root), (*(const s_Type*)fu::NIL), ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
    if (_current_fn)
        BUG_zwQElfxV("non-empty _current_fn."_fu, ss, _helpers, _here, ctx, module);
    else
    {
        PASS_runAllVerifiers_sX39hmhN(ss, _notes, _current_fn, _helpers, _here, ctx, module, options);
        if (ss._helpers_data[0])
            BUG_zwQElfxV("non-empty _helpers_data[0]."_fu, ss, _helpers, _here, ctx, module);
        else
        {
            Scope_observeDefects_nHHmNIZX(ss._scope.items, ss, _notes, _helpers, _here, ctx, module, options);
            for (int i = 0; i < ss._warnings.size(); i++)
            {
                const s_Warning& w = ss._warnings[i];
                if (w.token)
                {
                    _here = w.token;
                    fail_Szrpd5G6(w.message, ss, _helpers, _here, ctx, module);
                };
            };
            return s_SolverOutput { static_cast<s_SolvedNode&&>(root), Scope_exports_llrYisu8(ss._scope, module.modid, ss._field_items, ss._field_implicits, ss._pub_imports), _notes };
        };
    };
}

#endif
