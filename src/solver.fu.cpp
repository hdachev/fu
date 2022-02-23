
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
struct s_Map_3Igdp5fJ;
struct s_Map_EmVtl5Qe;
struct s_Map_e04WMKmU;
struct s_Mi;
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

[[noreturn]] fu::never BUG_patsWWTe(fu_STR&&, const s_TokenIdx&, const s_Context&);
[[noreturn]] fu::never FAIL_FsVimAHf(fu::view<char>, const s_TokenIdx&, const s_Context&);
bool Region_isArg_4X1iL0ll(const s_Region&);
bool Region_isStatic_4X1iL0ll(const s_Region&);
bool Region_isTemp_4X1iL0ll(const s_Region&);
bool add_once_yDyCXbrU(s_BitSet&, int);
bool hasAssignment_YqscxHlw(fu::view<char>);
bool hasOperator_YqscxHlw(fu::view<char>);
bool has_CoC0247n(const s_BitSet&, int);
bool isAssignableAsArgument_lKMokzZR(const s_Type&, const s_Type&);
bool isAssignable_lKMokzZR(const s_Type&, const s_Type&);
bool isStruct_5BOF5uJ9(const s_Type&);
bool is_arithmetic_KyrTVXnz(const s_Type&);
bool is_floating_pt_KyrTVXnz(const s_Type&);
bool is_integral_KyrTVXnz(const s_Type&);
bool is_mutref_ceGfLbqY(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_never_ceGfLbqY(const s_Type&);
bool is_primitive_KyrTVXnz(const s_Type&);
bool is_ref2temp_ceGfLbqY(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_ref_ceGfLbqY(const s_Type&);
bool is_rx_copy_ceGfLbqY(const s_Type&);
bool is_rx_resize_ceGfLbqY(const s_Type&);
bool is_trivial_qcjLQIhC(const s_Type&, const s_Module&, const s_Context&);
bool is_unsigned_KyrTVXnz(const s_Type&);
bool is_void_ceGfLbqY(const s_Type&);
bool is_zeroes_ceGfLbqY(const s_Type&);
bool operator!=(const s_Region&, const s_Region&);
bool operator==(const s_Region&, const s_Region&);
bool operator==(const s_Target&, const s_Target&);
bool operator==(const s_Type&, const s_Type&);
bool operator>(const s_Region&, const s_Region&);
bool operator>=(const s_Region&, const s_Region&);
bool try_relax_YMk72lGd(s_Type&, const s_Type&, int);
bool type_isAddrOfFn_ceGfLbqY(const s_Type&);
const fu_STR& _fname_GF4X2sQy(const s_TokenIdx&, const s_Context&);
const fu_VEC<int>& lookupTypeImports_qcjLQIhC(const s_Type&, const s_Module&, const s_Context&);
const s_Struct& lookupStruct_jCnOT4Df(const s_Type&, const s_Module&, const s_Context&);
const s_Struct& tryLookupStruct_qcjLQIhC(const s_Type&, const s_Module&, const s_Context&);
const s_Token& _token_GF4X2sQy(const s_TokenIdx&, const s_Context&);
fu_STR formatCodeSnippet_LnIzFNvj(const s_TokenIdx&, s_TokenIdx&&, const s_Context&);
fu_STR getShortModuleName_bB04eegu(const fu_STR&);
fu_STR hash62_HxcQaXaI(fu::view<char>, int);
fu_STR humanizeQuals_ceGfLbqY(const s_Type&);
fu_STR packAddrOfFn_wA8no8pa(fu::view<s_Target>);
fu_STR qBAD_HIwg52Ja(const fu_STR&);
fu_STR qCODE_HIwg52Ja(const fu_STR&);
fu_STR qID_HIwg52Ja(const fu_STR&);
fu_STR qKW_HIwg52Ja(const fu_STR&);
fu_STR resolveFile_x_pcVfgwiN(const fu_STR&, const s_Context&);
fu_STR serializeType_4RxjLqQs(const s_Type&, fu::view<char>, const s_TokenIdx&, const s_Context&);
fu_STR serialize_ibraIJtk(const s_ClosureID&);
inline fu_VEC<s_Region> inter_gfBRuoGh(const fu_VEC<s_Region>&, const fu_VEC<s_Region>&);
inline static void Lifetime_each_Taf6gats(const s_Lifetime&, int, const s_CurrentFn&, const s_Target&, const s_TokenIdx&, const s_Context&, const s_Module&, s_Scope&);
int Region_asArgIndex_4X1iL0ll(const s_Region&);
int Region_asIndex_4X1iL0ll(const s_Region&);
int Region_toArgIndex_4X1iL0ll(const s_Region&);
int Region_toLocalIndex_4X1iL0ll(const s_Region&);
int modidOfOrigin_5BOF5uJ9(const s_Type&);
int popcount_pXOENYsj(const s_BitSet&);
s_BitSet ArgsAtRisk_listRiskFree_w6iboJyg(const s_Flow&, int);
s_ClosureID tryParseClosureID_RHyKU5hm(fu::view<char>);
s_Intlit Intlit_hdlyM3zq(fu::view<char>);
s_Lifetime Lifetime_inter_yRJeU5dj(const s_Lifetime&, const s_Lifetime&);
s_Lifetime Lifetime_makeShared_zJCUz9W3(const s_Lifetime&);
s_Lifetime Lifetime_static_8nlJDPX0();
s_Lifetime Lifetime_temporary_8nlJDPX0();
s_Lifetime Lifetime_union_yRJeU5dj(const s_Lifetime&, const s_Lifetime&);
s_Mi parseMi_t6R8uPsY(int&, fu::view<char>);
s_NativeOpts NativeOpts_RHyKU5hm(fu::view<char>);
s_Region Region_fromArgIndex_BaKYka79(int);
s_Region Region_fromLocalIndex_BaKYka79(int);
s_Scope Scope_exports_9JgiX8Q7(const s_Scope&, int, const fu_VEC<s_ScopeItem>&);
s_Scope listGlobals_6iVz8n7c(const s_Module&);
s_ScopeMemo Scope_snap_Gy3SoOnf(const s_Scope&, fu::view<s_Helpers>);
s_Struct& lookupStruct_mut_MHqzuNPp(fu::view<char>, s_Module&);
s_Target Scope_Typedef_n9y3Tebd(s_Scope&, const fu_STR&, const s_Type&, int, const fu_STR&, unsigned, const s_Module&);
s_Target Scope_create_h7gWxUs8(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, unsigned, int, const s_Module&);
s_Target search_dydpfI3t(fu::view<s_ScopeItem>, const fu_STR&, int&, fu::view<s_ScopeSkip>, bool&, const s_Target&, fu::view<s_Target>, fu::view<s_ScopeItem>);
s_Target target_dYaABoRz(const s_ScopeItem&);
s_Type add_mutref_UThBZuDl(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type add_ref_UThBZuDl(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type add_refs_lKMokzZR(const s_Type&, s_Type&&);
s_Type clear_mutref_ceGfLbqY(s_Type&&);
s_Type clear_refs_ceGfLbqY(s_Type&&);
s_Type clear_sliceable_ceGfLbqY(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type createArray_ceGfLbqY(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type createSlice_UThBZuDl(const s_Type&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type despeculateStruct_8liKyPID(s_Type&&);
s_Type initStruct_afXwHDbN(const fu_STR&, int, bool, s_Module&);
s_Type make_copyable_ceGfLbqY(s_Type&&);
s_Type relax_typeParam_ceGfLbqY(s_Type&&);
s_Type tryClear_array_ceGfLbqY(const s_Type&);
s_Type tryClear_mutref_ceGfLbqY(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_ref_ceGfLbqY(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_sliceable_ceGfLbqY(const s_Type&);
s_Type type_tryIntersect_lKMokzZR(const s_Type&, const s_Type&);
s_Type type_trySuper_lKMokzZR(const s_Type&, const s_Type&);
static bool Lifetime_allowsMutrefReturn_ThKyqveh(const s_Lifetime&, int, const s_CurrentFn&, const s_Target&, const s_TokenIdx&, const s_Context&, const s_Module&, s_Scope&);
static bool evalTypePattern_xXW6LGOg(const s_Node&, s_Map_3Igdp5fJ&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, s_ScopeSkipMemos&, const s_Target&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static bool lazySolveStart_2wgIEWVi(const s_Target&, const s_Overload&, s_Scope&, s_Module&, s_TokenIdx&, const s_Context&, const s_Target&, s_Map_e04WMKmU&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, s_CurrentFn&, fu_VEC<fu_STR>&, s_Target&, fu_VEC<s_Warning>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static bool trySolveTypeParams_m8l53K02(const s_Node&, s_Type&&, s_Map_3Igdp5fJ&, const s_TokenIdx&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&, const s_ScopeSkipMemos&);
static fu_STR qSTACK_0FnmlzHt(const s_Target&, const s_Region&, fu::view<s_Target>, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, const s_CurrentFn&);
static fu_STR qSTACK_HNuH0RuB(const s_Target&, int, fu::view<s_Target>, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&, const s_CurrentFn&);
static fu_VEC<s_SolvedNode> solveNodes_J7uR9TQA(fu::view<s_Node>, const s_Type&, const s_Type&, bool, int, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, const s_Context&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static fu_VEC<s_Target> tryConvert_X9H9DYNg(const s_Scope&, bool, const s_Type&, const s_Type&, const s_SolvedNode&, s_Scope&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, const s_Target&, s_TokenIdx&, const s_Context&, s_Module&, s_CurrentFn&, fu_VEC<s_ScopeItem>&, s_Map_e04WMKmU&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, fu_VEC<s_Warning>&, int&, const s_Options&, int&, const fu_STR&, const s_Type&);
static s_SolvedNode CallerNode_vitxf1Xv(const fu_STR&, s_Target&&, fu_VEC<s_SolvedNode>&&, int, const fu_VEC<int>&, fu::view<fu_VEC<s_Target>>, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_Target&, s_CurrentFn&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_e04WMKmU&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_Warning>&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, const s_Type&);
static s_SolvedNode SolvedNode_deepClone_aDzfBTyH(const s_SolvedNode&, const s_Target&, const s_TokenIdx&, const s_Context&, const s_Module&, s_Scope&, const s_Target&, const s_Target&);
static s_SolvedNode SolvedNode_deepClone_tWXBjoW7(const s_SolvedNode&, const s_Target&, const s_TokenIdx&, const s_Context&, const s_Module&, s_Scope&, const s_Target&);
static s_SolvedNode __solveStruct_XmElc5Yz(bool, const s_Node&, const s_Target&, s_CurrentFn&, const s_Target&, s_TokenIdx&, const s_Context&, s_Module&, s_Scope&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, s_Target&, fu_VEC<s_HelpersData>&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode bindImplicitArg_7bES7Ghd(const fu_STR&, const s_Type&, const s_Target&, s_Module&, s_Scope&, const s_Context&, s_CurrentFn&, const s_Target&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Target&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_e04WMKmU&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_Warning>&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, const s_Type&);
static s_SolvedNode solveAnd_p3dIUjC0(const s_Node&, s_Type&&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, const s_Context&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveArgID_5OHYpcvD(const s_Node&, const s_Type&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, const s_Context&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveArrlit_OOVLkW5Q(const s_Node&, const s_Type&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveBlock_1o3VlYFC(const fu_VEC<s_SolvedNode>&, int, bool, short, int, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_TokenIdx&, const s_Context&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveBlock_HVo1Po1s(const s_Node&, const s_Type&, int, short, int, const fu_STR&, int, s_Scope&, fu_VEC<s_Helpers>&, s_Module&, s_CurrentFn&, const s_Target&, s_TokenIdx&, const s_Context&, fu_VEC<s_HelpersData>&, s_Target&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveCall_ajgBzohn(const s_Node&, const s_Target&, int, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, const s_Context&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveDeclExpr_gxm6RiSD(const s_Node&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, const s_Context&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveDefer_Obl8FmJS(const s_Node&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, const s_Context&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveForFieldsOf_eBSqpqIS(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveIf_toKjv1r5(const s_Node&, s_Type&&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, const s_Context&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveJump_4s6MSKt7(int, fu::view<s_Node>, int, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Target&, s_Target&, s_Module&, s_Scope&, const s_Context&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveLetLike_dontTouchScope_8mF4zFmd(const s_Node&, const s_Type&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveLetStatement_mntFuLC1(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveLet_ScVmXNEy(const s_Node&, const s_Type&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveLoop_N8jPSkVJ(const s_Node&, s_Scope&, fu_VEC<s_Helpers>&, s_CurrentFn&, const s_Target&, s_TokenIdx&, const s_Context&, s_Module&, fu_VEC<s_HelpersData>&, s_Target&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveNode_DvkgWyBy(const s_Node&, const s_Type&, int, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, const s_Context&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveOr_g5XaCyCQ(const s_Node&, s_Type&&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, const s_Context&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveRoot_d1s6BB0E(const s_Node&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Target&, const s_Context&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveTryCatch_GYMNCWMP(const s_Node&, s_TokenIdx&, const s_Context&, s_Scope&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_Module&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveTypeAssert_Yu7Q0QCx(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveTypedef_s7pOnjMk(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_Target doTrySpecialize_hGfr9hqq(const s_Target&, const s_Target&, fu::view<s_SolvedNode>, fu_STR&&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, int, const s_Type&, const s_Target&, s_TokenIdx&, const s_Context&, s_Module&, s_Scope&, s_Map_e04WMKmU&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, s_CurrentFn&, fu_VEC<fu_STR>&, s_Target&, fu_VEC<s_Warning>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_Target tryMatch__mutargs_c3aAUtmN(fu_STR&&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu_STR&, bool, const s_Scope&, fu::view<s_SolvedNode>, int, const s_Target&, const s_Target&, s_TokenIdx&, const s_Context&, s_Module&, s_Scope&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_e04WMKmU&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, s_CurrentFn&, fu_VEC<fu_STR>&, s_Target&, fu_VEC<s_Warning>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, const s_Type&);
static s_Target trySpecialize_8DOXo9mU(const s_Target&, fu::view<s_SolvedNode>, fu_STR&, int, const s_Type&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, const s_Target&, s_Map_e04WMKmU&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, s_CurrentFn&, fu_VEC<fu_STR>&, s_Target&, fu_VEC<s_Warning>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_Type T_qgfM8wRA(int, const s_Node&, const s_Map_3Igdp5fJ&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_Type evalTypeAnnot_t9H2NZ5S(const s_Node&, const s_Map_3Igdp5fJ&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Target&, s_Module&, s_Scope&, s_Target&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static void Lifetime_F_MOVED_FROM_LlFJpWpZ(const s_Lifetime&, const s_CurrentFn&, const s_Target&, const s_TokenIdx&, const s_Context&, const s_Module&, s_Scope&);
static void bck_block_muSop7el(const s_SolvedNode&, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, s_Scope&, s_CurrentFn&, const s_Target&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Options&, int&);
static void bck_call_BFMFLdCd(const s_SolvedNode&, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, s_Scope&, s_CurrentFn&, const s_Target&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Options&, int&);
static void bck_if_YfQ7szar(const s_SolvedNode&, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, s_Scope&, s_CurrentFn&, const s_Target&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Options&, int&);
static void bck_let_7vuVxnLl(const s_SolvedNode&, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, s_Scope&, s_CurrentFn&, const s_Target&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Options&, int&);
static void bck_loop_jcPfImLP(const s_SolvedNode&, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, s_Scope&, s_CurrentFn&, const s_Target&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Options&, int&);
static void bck_node_EJjZXPYZ(const s_SolvedNode&, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, s_Scope&, s_CurrentFn&, const s_Target&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Options&, int&);
static void bck_nodes_NtvV5rdq(fu::view<s_SolvedNode>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, s_Scope&, s_CurrentFn&, const s_Target&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Options&, int&);
static void descend_GKVHyGTJ(const s_Type&, bool, bool, bool, bool, s_Scope&, const s_Scope&, s_ScopeSkipMemos&, fu_VEC<s_SolvedNode>&, const s_Target&, s_TokenIdx&, const s_Context&, s_Module&, s_CurrentFn&, const s_SolvedNode&, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu_VEC<s_ScopeItem>&, s_Map_e04WMKmU&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, fu_VEC<s_Warning>&, int&, const s_Options&, int&, const fu_STR&, const s_Type&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, const s_Type&, int);
static void foreach_HhFOYCnz(const s_Target&, fu_VEC<s_SolvedNode>&, const s_Target&, s_TokenIdx&, const s_Context&, s_Module&, s_Scope&, bool, s_CurrentFn&, bool, const s_SolvedNode&, const s_Type&, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_e04WMKmU&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, fu_VEC<s_Warning>&, int&, const s_Options&, int&, const fu_STR&, const s_Type&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, const s_Type&, bool, const s_Scope&, int);
static void lazySolveEnd_b7wxn2Y6(const s_Target&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, const s_Options&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, int&, const s_Target&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, s_CurrentFn&, fu_VEC<fu_STR>&, s_Target&, fu_VEC<s_Warning>&, int&, fu_VEC<s_SolvedNode>&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static void mcom_node_1o6H1Cy3(const s_SolvedNode&, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, s_Scope&, fu_VEC<s_HelpersData>&, const s_CurrentFn&, fu::view<s_Helpers>, const s_Target&, const s_Options&, int&);
static void propagateType_NNuUomCa(const s_SolvedNode&, const s_Type&, int, const s_Target&, s_TokenIdx&, const s_Context&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Target&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static void relaxBlockVar_kYsNupTY(const s_Target&, int, s_Scope&, s_Module&, const s_Context&, s_CurrentFn&, const s_Target&, s_TokenIdx&, fu_VEC<s_Warning>&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Target&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static void runAllPasses_VnsQEjJz(const s_SolvedNode&, const s_Target&, s_TokenIdx&, const s_Context&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Target&, s_Map_e04WMKmU&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static void test_node_Ox3KkYOv(const s_SolvedNode&, fu_STR&&, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, const s_Scope&);
static void test_nodes_kmfvsTVH(fu::view<s_SolvedNode>, fu::view<char>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, const s_Scope&);
static void walk_8KCTHuJs(s_Node&, fu::view<char>, const s_ScopeItem&);
void ArgsAtRisk_shake_bZZfza4U(s_Flow&);
void ArgsWritten_shake_2MlTalrh(const s_Flow&, s_BitSet&);
void HERE_fVfHq6aR(const s_TokenIdx&, s_TokenIdx&);
void Reference_trackArgument_VniSYxaW(s_Flow&, int, int);
void Reference_trackLocalRef_fiZRfh4j(s_Flow&, int, const s_Lifetime&);
void Scope_pop_o9RH7nTe(s_Scope&, const s_ScopeMemo&, fu_VEC<s_Helpers>&);
void Scope_set_Jn3gd5FG(s_Scope&, const fu_STR&, const s_Target&, bool);
void Scope_set_vOYMgdEn(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);
void add_yDyCXbrU(s_BitSet&, int);
void break_DX6KImTN();
void rem_yDyCXbrU(s_BitSet&, int);

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

                                #ifndef DEF_s_Map_EmVtl5Qe
                                #define DEF_s_Map_EmVtl5Qe
struct s_Map_EmVtl5Qe
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
    s_Map_EmVtl5Qe files;
    s_Map_EmVtl5Qe fuzzy;
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
    s_ScopeMemo scope0;
    s_Flow flow;
    s_Effects effects;
    s_Events events;
    int loop_start;
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
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Map_e04WMKmU
                                #define DEF_s_Map_e04WMKmU
struct s_Map_e04WMKmU
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

                                #ifndef DEF_s_Map_3Igdp5fJ
                                #define DEF_s_Map_3Igdp5fJ
struct s_Map_3Igdp5fJ
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

static void push_DOX5pwMC(const s_HelpersData& data, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data)
{
    _helpers += s_Helpers { _helpers_data.size() };
    _helpers_data += s_HelpersData(data);
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

                                #ifndef DEFt_grow_if_oob_FksXtj71
                                #define DEFt_grow_if_oob_FksXtj71
inline s_Extended& grow_if_oob_FksXtj71(fu_VEC<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static s_Extended& EXT_mut_lqSDNFDF(const s_Target& target, const s_Module& module, s_Scope& _scope)
{
    if (!(target.modid == module.modid))
        fu_ASSERT();

    return grow_if_oob_FksXtj71(_scope.extended, target.index);
}

static s_SolvedNode SolvedNode_create_z9Lnxtad(const s_SolvedNodeData& data, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    const s_Target& nodeown = _current_fn_or_type;
    fu_VEC<s_SolvedNodeData>& nodes = EXT_mut_lqSDNFDF(nodeown, module, _scope).nodes;
    nodes += s_SolvedNodeData(data);
    const int nodeidx = nodes.size();
    return s_SolvedNode { ((nodeidx << NODEIDX_signbits) | (_current_fnort.index & NODEIDX_signmask)) };
}

static s_SolvedNode SolvedNode_HaPiTdVO(const fu_STR& kind, const s_Type& type, const int flags, const fu_STR& value, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const int helpers, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    s_SolvedNodeData data = s_SolvedNodeData { fu_STR(kind), int(helpers), int(flags), fu_STR(value), fu_VEC<s_SolvedNode>(items), s_TokenIdx(_here), s_Type(type), s_Target(target), s_RWRanges{} };
    return SolvedNode_create_z9Lnxtad(data, _current_fnort, _current_fn_or_type, module, _scope);
}

static fu_VEC<s_SolvedNode> meh_bGN6F3bF(const s_Target& _current_fn_or_type, const s_TokenIdx& _here, const s_Module& module, s_Scope& _scope)
{
    const s_Target& _current_fnort = _current_fn_or_type;
    return fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { SolvedNode_HaPiTdVO((*(const fu_STR*)fu::NIL), s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope) } };
}

static void _Scope_import__forceCopy_wrJurZot(const int modid, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    _scope.items += fu::get_view(s.items, 0, s.pub_items);
    _scope.converts += fu::get_view(s.converts, 0, s.pub_cnvrts);
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void;
                                #endif

static int unorderedClassify_HdqtaGUx(fu::view<char> kind)
{
    if (kind == "fn"_fu)
        return 1;

    if (kind == "struct"_fu)
        return 10;

    return 0;
}

                                #ifndef DEFt_unless_oob_xA2YDgwT
                                #define DEFt_unless_oob_xA2YDgwT
inline const s_Extended& unless_oob_xA2YDgwT(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT_qHy9RJpv(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    if (target.modid == module.modid)
        return unless_oob_xA2YDgwT(_scope.extended, target.index);

    return (target.modid >= 0) ? unless_oob_xA2YDgwT(ctx.modules[target.modid].out.solve.scope.extended, target.index) : (*(const s_Extended*)fu::NIL);
}

static const s_SolvedNodeData& SolvedNodeData_WIlQTJ1v(const s_SolvedNode& sn, const s_Target& from, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    if (sn)
    {
        if (!((sn.signedidx & NODEIDX_signmask) == (from.index & NODEIDX_signmask)))
            BUG_patsWWTe("SolvedNodeData() signedidx is off."_fu, _here, ctx);

        const int nodeidx = (sn.signedidx >> NODEIDX_signbits);
        return sn ? EXT_qHy9RJpv(from, module, _scope, ctx).nodes[(nodeidx - 1)] : (*(const s_SolvedNodeData*)fu::NIL);
    };
    return (*(const s_SolvedNodeData*)fu::NIL);
}

static const s_SolvedNodeData& SolvedNodeData_KIpwZvpE(const s_SolvedNode& sn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return SolvedNodeData_WIlQTJ1v(sn, _current_fnort, _here, ctx, module, _scope);
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
extern const short HM_Function;
                                #endif

                                #ifndef DEF_HM_Struct
                                #define DEF_HM_Struct
extern const short HM_Struct;
                                #endif

static bool isFnOrType_a9Pxru24(const s_Helpers& h, fu::view<s_HelpersData> _helpers_data)
{
    return !!short((((void)void(), _helpers_data[h.index]).mask & short((HM_Function | HM_Struct))));
}

static bool isLocal_KoitUSjs(const s_Target& target)
{
    return target.modid < 0;
}

static const s_Overload& GET_EiJMwamT(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    if (isLocal_KoitUSjs(target))
        return _scope.extended[-target.modid].locals[(target.index - 1)];

    if (target.modid == module.modid)
        return _scope.overloads[(target.index - 1)];

    return ctx.modules[target.modid].out.solve.scope.overloads[(target.index - 1)];
}

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline constexpr int F_ARG = (1 << 9);
                                #endif

static int localOf_Yp26zAW1(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    if (isLocal_KoitUSjs(target))
        return -target.modid;

    return int(EXT_qHy9RJpv(target, module, _scope, ctx).local_of);
}

static s_Target parent_pWzRaF0U(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return s_Target { int(module.modid), localOf_Yp26zAW1(target, module, _scope, ctx) };
}

static fu_STR human_iY2blCZM(const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    const s_Target t = tryParseClosureID_RHyKU5hm(id).target;
    if (!t)
        return fu_STR(id);

    return (GET_EiJMwamT(parent_pWzRaF0U(t, module, _scope, ctx), _scope, module, ctx).name + ":"_fu) + GET_EiJMwamT(t, _scope, module, ctx).name;
}

static fu_STR qWHAT_5LWmus20(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    const fu_STR& kind = o.kind;
    fu_STR kind_1 = (((kind == "var"_fu) && (o.flags & F_ARG)) ? "arg"_fu : fu_STR(kind));
    return (qKW_HIwg52Ja(kind_1) + " "_fu) + qID_HIwg52Ja(human_iY2blCZM(o.name, module, _scope, ctx));
}

[[noreturn]] static fu::never fail_2n2GzXhw(fu_STR&& reason, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!(reason))
        BUG_patsWWTe(fu_STR{}, _here, ctx);

    int callstack = 0;
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (isFnOrType_a9Pxru24(h, _helpers_data))
        {
            if (!callstack++)
                reason += "\n\n        Solving "_fu;
            else
                reason += "\n                "_fu;

            const s_Overload& o = GET_EiJMwamT(((void)void(), _helpers_data[h.index]).target, _scope, module, ctx);
            reason += qWHAT_5LWmus20(o, module, _scope, ctx);
        };
    };
    FAIL_FsVimAHf(reason, _here, ctx);
}

static void makeNote_kDWiwp14(const int note, const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, int& _notes)
{
    if (note & options.break_notes)
        fail_2n2GzXhw((x7E("`break_notes`: Unwanted event: `"_fu, fu::i64dec(note)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    _notes |= note;
}

                                #ifndef DEF_SS_LAZY
                                #define DEF_SS_LAZY
inline constexpr unsigned SS_LAZY = (0x1u << 0u);
                                #endif

static s_Template createTemplate_CZbAaa86(const s_Node& node, const s_CurrentFn& _current_fn, const s_Scope& _scope, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss)
{
    return s_Template { s_Node(node), fu_VEC<int>((!_current_fn ? _scope.imports : (*(const fu_VEC<int>*)fu::NIL))), (_current_fn ? Scope_snap_Gy3SoOnf(_scope, _helpers) : s_ScopeMemo{}), s_ScopeSkipMemos((_current_fn ? _ss : (*(const s_ScopeSkipMemos*)fu::NIL))) };
}

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline constexpr int F_SHADOW = (1 << 23);
                                #endif

static bool shouldAutoshadow_lrSHGYgX(fu::view<char> id, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope)
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

static void autoshadow_xyz9Ip34(bool& shadows, const int local_of, fu::view<char> id, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope)
{
    if (!shadows && local_of && shouldAutoshadow_lrSHGYgX(id, _scope, _ss, _root_scope))
        shadows = true;

}

                                #ifndef DEF_F_CONVERSION
                                #define DEF_F_CONVERSION
inline constexpr int F_CONVERSION = (1 << 14);
                                #endif

static s_Type X_addrofTarget_HbwY7ZLu(const s_Target& target)
{
    return s_Type { s_ValueType { 0, packAddrOfFn_wA8no8pa((fu::slate<1, s_Target> { s_Target(target) })) }, s_Lifetime{} };
}

static s_SolvedNode createFnDef_qOKKqDIJ(const s_Type& type, const s_Target& target, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode_HaPiTdVO("fndef"_fu, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode uPrepFn_A_e3IBKEIn(const s_Node& node, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope, const s_Target& _current_fn_or_type)
{
    const fu_STR& id = node.value;
    const int local_of = SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index;
    const s_Target target = Scope_create_h7gWxUs8(_scope, "fn"_fu, "__prep__"_fu, (*(const s_Type*)fu::NIL), node.flags, SS_LAZY, 0, module);
    s_Extended& ext = EXT_mut_lqSDNFDF(target, module, _scope);
    ext.local_of = local_of;
    ext.tEmplate = createTemplate_CZbAaa86(node, _current_fn, _scope, _helpers, _ss);
    ext.min = int(0x7fffffffu);
    ext.max = 0;
    bool shadows = !!(node.flags & F_SHADOW);
    autoshadow_xyz9Ip34(shadows, local_of, id, _scope, _ss, _root_scope);
    Scope_set_Jn3gd5FG(_scope, id, target, shadows);
    if (node.flags & F_CONVERSION)
        _scope.converts.push(s_Target(target));

    return createFnDef_qOKKqDIJ(X_addrofTarget_HbwY7ZLu(target), target, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createEmpty_M9eYCmcR(const fu_STR& kind, const s_Type& type, const s_Target& target, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode_HaPiTdVO(kind, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_Overload& GET_mut_LT5T09Vv(const s_Target& target, s_Scope& _scope, const s_Module& module)
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

static s_Type T_qgfM8wRA(const int i, const s_Node& node, const s_Map_3Igdp5fJ& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ s_Type danglefix = evalTypeAnnot_t9H2NZ5S(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    return /*NRVO*/ danglefix;
}

                                #ifndef DEFt_if_last_symheVxb
                                #define DEFt_if_last_symheVxb
inline const s_SolvedNode& if_last_symheVxb(fu::view<s_SolvedNode> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never;
                                #endif

                                #ifndef DEFt_last_symheVxb
                                #define DEFt_last_symheVxb
inline s_SolvedNode& last_symheVxb(fu_VEC<s_SolvedNode>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEF_HM_LabelUsed
                                #define DEF_HM_LabelUsed
extern const short HM_LabelUsed;
                                #endif

                                #ifndef DEF_HM_KeepBlock
                                #define DEF_HM_KeepBlock
extern const short HM_KeepBlock;
                                #endif

                                #ifndef DEFt_only_SBGwWDq5
                                #define DEFt_only_SBGwWDq5
inline const s_SolvedNode& only_SBGwWDq5(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_SolvedNode createBlock_XLQezDDx(const s_Type& type, fu_VEC<s_SolvedNode>&& items, const s_Helpers& h, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type)
{
    for (int x = 0; x < items.size(); x++)
    {
        if (!SolvedNodeData_KIpwZvpE(items[x], _current_fnort, _here, ctx, module, _scope).kind)
            fu::fail(x7E("createBlock.before-flatten.items: no kind on item #"_fu, fu::i64dec(x)));

    };
    if (_here && (_helpers.size() > 10000001))
        fu::fail(x7E("woot: "_fu, fu::i64dec(_helpers.size())));

    if (OPTI_flatten_blocks)
    {
        while (items.size())
        {
            const s_SolvedNode& tail = last_symheVxb(items);
            const s_HelpersData* BL_8_v;
            if ((SolvedNodeData_KIpwZvpE(tail, _current_fnort, _here, ctx, module, _scope).kind != "block"_fu) || (SolvedNodeData_KIpwZvpE(tail, _current_fnort, _here, ctx, module, _scope).helpers && short(((__extension__ (
            {
                const s_Helpers h_1 = s_Helpers { int(SolvedNodeData_KIpwZvpE(tail, _current_fnort, _here, ctx, module, _scope).helpers) };
                BL_8_v = &(_helpers_data[h_1.index]);
            (void)0;}), *BL_8_v).mask & HM_LabelUsed))))
                break;

            fu::view<s_SolvedNode> unwrap = SolvedNodeData_KIpwZvpE(tail, _current_fnort, _here, ctx, module, _scope).items;
            items.pop();
            items += unwrap;
        };
    };
    for (int i = (items.size() - 1); i-- > 0; )
    {
        if (SolvedNodeData_KIpwZvpE(items[i], _current_fnort, _here, ctx, module, _scope).kind == "empty"_fu)
            items.splice(i, 1);

    };
    if (!short((((void)void(), _helpers_data[h.index]).mask & short((HM_LabelUsed | HM_KeepBlock)))) && (items.size() == 1))
        return s_SolvedNode(only_SBGwWDq5(items));

    return SolvedNode_HaPiTdVO("block"_fu, type, 0, (*(const fu_STR*)fu::NIL), items, s_Target{}, h.index, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode deadCall_CsEf0r95(const fu_VEC<s_SolvedNode>& args, const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, int& _notes, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    makeNote_kDWiwp14(N_DeadCall, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    return createBlock_XLQezDDx(t_never, fu_VEC<s_SolvedNode>(args), s_Helpers{}, _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data, _current_fn_or_type);
}

                                #ifndef DEF_F_COMPOUND_ID
                                #define DEF_F_COMPOUND_ID
inline constexpr int F_COMPOUND_ID = (1 << 6);
                                #endif

                                #ifndef DEFt_find_hCEGPwyG
                                #define DEFt_find_hCEGPwyG
inline int find_hCEGPwyG(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static const s_Module& findModule_CTJLAFdy(const fu_STR& fuzimport, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    fu_STR fname = resolveFile_x_pcVfgwiN(fuzimport, ctx);
    fu::view<s_Module> modules = ctx.modules;
    for (int i = 1; i < modules.size(); i++)
    {
        const s_Module& m = modules[i];
        if (m.fname == fname)
            return m;

    };
    fail_2n2GzXhw(("Cannot locate: "_fu + fname), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Scope& dequalify_andGetScope_l5p1Mpvq(fu_STR& id, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    const int split = find_hCEGPwyG(id, '\t');
    if (!((split >= 0)))
        BUG_patsWWTe(fu_STR{}, _here, ctx);

    fu_STR fname = fu::slice(id, 0, split);
    id = fu::slice(id, (split + 1));
    const s_Module& other = findModule_CTJLAFdy(fname, ctx, _here, _helpers, _helpers_data, _scope, module);
    if (other.modid != module.modid)
        return other.out.solve.scope;

    fail_2n2GzXhw((("Qualified "_fu + qBAD_HIwg52Ja(id)) + ":: access current module."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEFt_each_u7eTIGDg
                                #define DEFt_each_u7eTIGDg
inline void each_u7eTIGDg(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, int& count, const s_TokenIdx& _here, const s_Context& ctx)
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
                BUG_patsWWTe(fu_STR{}, _here, ctx);

        };
        i0 = ss.end;
    };
}
                                #endif

static int countUsings_x00nYEku(const bool local_scope, const s_Scope& _scope, const s_Scope& misc_scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx)
{
    const s_Scope& scope = (local_scope ? _scope : misc_scope);
    /*MOV*/ int count = 0;
    if (scope.usings)
        each_u7eTIGDg(scope.usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, count, _here, ctx);

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

                                #ifndef DEFt_each_lLwfHOVA
                                #define DEFt_each_lLwfHOVA
inline void each_lLwfHOVA(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, s_BitSet& seen)
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
            add_yDyCXbrU(seen, modid);
        };
        i0 = ss.end;
    };
}
                                #endif

static void visitTypeImports_bfa2qCrh(const s_Type& type, const s_Module& module, const s_Context& ctx, s_BitSet& seen, const s_Scope& _scope, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id, fu_VEC<s_Target>& extra_items)
{
    fu::view<int> visit = lookupTypeImports_qcjLQIhC(type, module, ctx);
    for (int i = -1; i < visit.size(); i++)
    {
        const int modid = ((i >= 0) ? int(visit[i]) : modidOfOrigin_5BOF5uJ9(type));
        if (has_CoC0247n(seen, modid))
            continue;

        if (!seen)
        {
            add_yDyCXbrU(seen, 0);
            add_yDyCXbrU(seen, module.modid);
            each_lLwfHOVA(_scope.imports, (local_scope ? _ss.imports : fu::view<s_ScopeSkip>{}), 0, seen);
        };
        if (!add_once_yDyCXbrU(seen, modid))
            continue;

        fu::view<s_ScopeItem> items = ctx.modules[modid].out.solve.scope.items;
        for (int i_1 = 0; i_1 < items.size(); i_1++)
        {
            if (items[i_1].id == id)
                extra_items.push(target_dYaABoRz(items[i_1]));

        };
    };
}

                                #ifndef DEFt_each_Z5AVQQDt
                                #define DEFt_each_Z5AVQQDt
inline void each_Z5AVQQDt(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, s_BitSet& seen, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id, fu_VEC<s_Target>& extra_items)
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
            visitTypeImports_bfa2qCrh(GET_EiJMwamT(u, _scope, module, ctx).type, module, ctx, seen, _scope, local_scope, _ss, id, extra_items);
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

                                #ifndef DEFt_last_fnMFgrK3
                                #define DEFt_last_fnMFgrK3
inline const s_Target& last_fnMFgrK3(fu::view<s_Target> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEFt_unpackAddrOfFn_rIKmmp34
                                #define DEFt_unpackAddrOfFn_rIKmmp34
inline void unpackAddrOfFn_rIKmmp34(fu::view<char> canon, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, int& parent_idx)
{
    if (!(canon[0] == '@'))
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

    int offset = 1;
    while (offset < canon.size())
    {
        const s_Mi mi = parseMi_t6R8uPsY(offset, canon);
        const s_Target target = s_Target { int(mi.modid), int(mi.index) };
        if ((target.modid < 0) || (target.modid == module.modid))
        {
            const int local_of = localOf_Yp26zAW1(target, module, _scope, ctx);
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

inline static int bfind_95IQxouv(const fu_STR& item, s_Map_e04WMKmU& _, const fu_STR& item_1)
{
    /*MOV*/ int N = _.keys.size();
    for (/*MOV*/ int i = 0; i < N; i++)
    {
        const fu_STR& k = _.keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                return /*NRVO*/ i;
            };
            N = i;
            break;
        };
    };
    _.keys.insert(N, fu_STR(item_1));
    _.vals.insert(N, s_Target{});
    return /*NRVO*/ N;
}

                                #ifndef DEFt_ref_9DwtG0j6
                                #define DEFt_ref_9DwtG0j6
inline s_Target& ref_9DwtG0j6(const fu_STR& item, s_Map_e04WMKmU& _)
{
    const int idx = bfind_95IQxouv(item, _, item);
    return _.vals.mutref(idx);
}
                                #endif

                                #ifndef DEFt_ref_pAZykvoV
                                #define DEFt_ref_pAZykvoV
inline s_Target& ref_pAZykvoV(s_Map_e04WMKmU& _, const fu_STR& key)
{
    return ref_9DwtG0j6(key, _);
}
                                #endif

static bool is_SPECFAIL_af5x8gdk(const s_Target& target)
{
    return target.modid == 2147483647;
}

inline static fu_STR id_81Oe9gkB(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return (is_SPECFAIL_af5x8gdk(target) ? "SPEC_FAIL"_fu : (("`"_fu + GET_EiJMwamT(target, _scope, module, ctx).name) + "`"_fu));
}

inline static fu_STR id_vq5viQye(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return (is_SPECFAIL_af5x8gdk(target) ? "SPEC_FAIL"_fu : (("`"_fu + GET_EiJMwamT(target, _scope, module, ctx).name) + "`"_fu));
}

static void setSpec_HPugG8x6(const fu_STR& mangle, const s_Target& target, const bool nx, const bool isInline, const s_TokenIdx& _here, const s_Context& ctx, s_Map_e04WMKmU& _specs, const s_Scope& _scope, const s_Module& module)
{
    if (isInline)
        BUG_patsWWTe("inline.setSpec"_fu, _here, ctx);

    s_Target& t = ref_pAZykvoV(_specs, mangle);
    if (!((!t && nx) || (is_SPECFAIL_af5x8gdk(t) && !nx)))
        BUG_patsWWTe(((((((x7E((x7E("About to screw up royally, replacing spec: "_fu, fu::i64dec(t.index)) + " with "_fu), fu::i64dec(target.index)) + ", mangle: "_fu) + mangle) + ", that's: "_fu) + id_81Oe9gkB(t, _scope, module, ctx)) + " becoming "_fu) + id_vq5viQye(target, _scope, module, ctx)), _here, ctx);

    t = target;
}

                                #ifndef DEFt_if_last_zygMIek6
                                #define DEFt_if_last_zygMIek6
inline const s_ScopeSkip& if_last_zygMIek6(fu::view<s_ScopeSkip> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_ScopeSkip*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_last_zygMIek6
                                #define DEFt_last_zygMIek6
inline s_ScopeSkip& last_zygMIek6(fu_VEC<s_ScopeSkip>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static void ScopeSkip_push_t743C4HF(fu_VEC<s_ScopeSkip>& scope_skip, const int start, const int end, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!((start <= end)))
        BUG_patsWWTe("ScopeSkip_push: bad args."_fu, _here, ctx);

    if (end == start)
        return;

    const s_ScopeSkip& last = if_last_zygMIek6(scope_skip);
    if (!((last.end <= start)))
        BUG_patsWWTe("ScopeSkip_push: last.end > start."_fu, _here, ctx);

    if (scope_skip && (last.end == start))
        last_zygMIek6(scope_skip).end = end;
    else
        scope_skip += s_ScopeSkip { int(start), int(end) };

}

static void Scope_import_XNMBMd9C(const int modid, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx)
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
        BUG_patsWWTe("Attempting to import modid-0."_fu, _here, ctx);

    _scope.imports += int(modid);
    _Scope_import__forceCopy_wrJurZot(modid, ctx, _scope);
}

static void _Scope_import__forceCopy_privates_1q3VOAfR(const int modid, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    _scope.items += fu::get_view(s.items, s.pub_items, s.items.size());
    _scope.converts += fu::get_view(s.converts, s.pub_cnvrts, s.converts.size());
}

static void Scope_import_privates_1zG3Fhlo(const int modid, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx)
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
        BUG_patsWWTe("Attempting to import_privates modid-0."_fu, _here, ctx);

    _scope.privates += int(modid);
    _Scope_import__forceCopy_privates_1q3VOAfR(modid, ctx, _scope);
}

static void ScopeSkip_setup_Ljn1fXiw(const s_Template& tEmplate, const s_ScopeMemo& scope0, const bool isInline, const s_ScopeMemo& _root_scope, s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, const s_CurrentFn& _current_fn, s_Scope& _scope)
{
    if (_root_scope)
    {
        const s_ScopeMemo& start = (tEmplate.scope_memo ? tEmplate.scope_memo : _root_scope);
        _ss = tEmplate.scope_skip;
        ScopeSkip_push_t743C4HF(_ss.items, start.items_len, scope0.items_len, _here, ctx);
        ScopeSkip_push_t743C4HF(_ss.implicits, start.implicits_len, (isInline ? _current_fn.scope0.implicits_len : scope0.implicits_len), _here, ctx);
        ScopeSkip_push_t743C4HF(_ss.imports, start.imports_len, scope0.imports_len, _here, ctx);
        ScopeSkip_push_t743C4HF(_ss.privates, start.privates_len, scope0.privates_len, _here, ctx);
        ScopeSkip_push_t743C4HF(_ss.usings, start.usings_len, scope0.usings_len, _here, ctx);
        ScopeSkip_push_t743C4HF(_ss.converts, start.converts_len, scope0.converts_len, _here, ctx);
        ScopeSkip_push_t743C4HF(_ss.helpers, start.helpers_len, scope0.helpers_len, _here, ctx);
    };
    for (int i = 0; i < tEmplate.imports.size(); i++)
    {
        Scope_import_XNMBMd9C(tEmplate.imports[i], _scope, _ss, _here, ctx);
        if (i == 0)
            Scope_import_privates_1zG3Fhlo(tEmplate.imports[i], _scope, _ss, _here, ctx);

    };
}

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
extern const int FN_ARGS_BACK;
                                #endif

                                #ifndef DEFt_has_hxLz1O11
                                #define DEFt_has_hxLz1O11
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

static bool couldRetype_1EyrKiHz(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind == "int"_fu) || (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind == "real"_fu) || (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind == "definit"_fu);
}

inline static int bfind_cvmLZR5s(const fu_STR& item, s_Map_3Igdp5fJ& _, const fu_STR& item_1)
{
    /*MOV*/ int N = _.keys.size();
    for (/*MOV*/ int i = 0; i < N; i++)
    {
        const fu_STR& k = _.keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                return /*NRVO*/ i;
            };
            N = i;
            break;
        };
    };
    _.keys.insert(N, fu_STR(item_1));
    _.vals.insert(N, s_TypeParam{});
    return /*NRVO*/ N;
}

                                #ifndef DEFt_ref_8RoXRQSq
                                #define DEFt_ref_8RoXRQSq
inline s_TypeParam& ref_8RoXRQSq(const fu_STR& item, s_Map_3Igdp5fJ& _)
{
    const int idx = bfind_cvmLZR5s(item, _, item);
    return _.vals.mutref(idx);
}
                                #endif

                                #ifndef DEFt_ref_SKEN9ihS
                                #define DEFt_ref_SKEN9ihS
inline s_TypeParam& ref_SKEN9ihS(s_Map_3Igdp5fJ& _, const fu_STR& key)
{
    return ref_8RoXRQSq(key, _);
}
                                #endif

static const s_Type& Scope_lookupType_Ec2uCGZp(fu_STR&& id, const int flags, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    int scope_iterator {};
    s_Target overloadIdx {};
    bool shadows {};
    const int qualified = (flags & F_COMPOUND_ID);
    const s_Scope& scope = (qualified ? dequalify_andGetScope_l5p1Mpvq(id, _here, ctx, _helpers, _helpers_data, _scope, module) : _scope);
    while ((overloadIdx = search_dydpfI3t(scope.items, id, scope_iterator, (!qualified ? _ss.items : fu::view<s_ScopeSkip>{}), shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
    {
        const s_Overload& maybe = GET_EiJMwamT(overloadIdx, _scope, module, ctx);
        if (maybe.kind == "type"_fu)
            return maybe.type ? maybe.type : BUG_patsWWTe(fu_STR{}, _here, ctx);

    };
    fail_2n2GzXhw((("No type `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Type& Scope_lookupType_Bl6TEtBi(const s_Node& annot, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    return Scope_lookupType_Ec2uCGZp(fu_STR(annot.value), annot.flags, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
}

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32;
                                #endif

static bool want_nbgbRWxd(const s_Type& t, const s_Type& type)
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

static const s_Type& solveInt_gNwK3BeV(fu::view<char> v, const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    s_Intlit parse = Intlit_hdlyM3zq(v);
    if (parse.error)
        fail_2n2GzXhw(fu_STR(parse.error), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (type)
    {
        if (!parse.uNsigned)
        {
            if (want_nbgbRWxd(t_f32, type) && (parse.minsize_f <= fu::u8(32u)))
                return t_f32;

            if (want_nbgbRWxd(t_f64, type) && (parse.minsize_f <= fu::u8(64u)))
                return t_f64;

            if (want_nbgbRWxd(t_i32, type) && (parse.minsize_i <= fu::u8(32u)))
                return t_i32;

            if (want_nbgbRWxd(t_i64, type) && (parse.minsize_i <= fu::u8(64u)))
                return t_i64;

            if (want_nbgbRWxd(t_i16, type) && (parse.minsize_i <= fu::u8(16u)))
                return t_i16;

            if (want_nbgbRWxd(t_i8, type) && (parse.minsize_i <= fu::u8(8u)))
                return t_i8;

        };
        if (!parse.sIgned)
        {
            if (want_nbgbRWxd(t_u32, type) && (parse.minsize_u <= fu::u8(32u)))
                return t_u32;

            if (want_nbgbRWxd(t_u64, type) && (parse.minsize_u <= fu::u8(64u)))
                return t_u64;

            if (want_nbgbRWxd(t_u16, type) && (parse.minsize_u <= fu::u8(16u)))
                return t_u16;

            if (want_nbgbRWxd(t_u8, type) && (parse.minsize_u <= fu::u8(8u)))
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
    fail_2n2GzXhw("Bad int literal."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Type& solveNum_J5pfEM04(const fu_STR& v, const s_Type& type)
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

static s_Type trySolveDefinit_wm6Odboh(const s_Type& type)
{
    if (!type)
        return s_Type(t_zeroes);

    return type_trySuper_lKMokzZR(t_zeroes, type);
}

static s_Type tryRetyping_l57zDXb3(const s_SolvedNode& node, const s_Type& expect, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (is_arithmetic_KyrTVXnz(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type) && is_arithmetic_KyrTVXnz(expect))
    {
        if (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind == "int"_fu)
            return s_Type(solveInt_gNwK3BeV(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).value, expect, _here, ctx, _helpers, _helpers_data, _scope, module));

        if (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind == "real"_fu)
            return s_Type(solveNum_J5pfEM04(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).value, expect));

    };
    if (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind == "definit"_fu)
        return trySolveDefinit_wm6Odboh(expect);

    return s_Type{};
}

static bool trySolveTypeParams_m8l53K02(const s_Node& node, s_Type&& type, s_Map_3Igdp5fJ& typeParams, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    if (node.kind == "call"_fu)
    {
        fu::view<s_Node> items = node.items;
        if (!items.size())
            return isAssignable_lKMokzZR(Scope_lookupType_Bl6TEtBi(node, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), type);


        { {
            if (items.size() == 1)
            {
                fu::never BL_5_v {};
                s_Type t = ((node.value == "&"_fu) ? tryClear_ref_ceGfLbqY(type, _here, ctx) : ((node.value == "&mut"_fu) ? tryClear_mutref_ceGfLbqY(type, _here, ctx) : ((node.value == "[]"_fu) ? tryClear_array_ceGfLbqY(type) : (__extension__ (
                {
                    goto BL_3;
                (void)0;}), static_cast<fu::never&&>(BL_5_v)))));
                if (!t)
                    return false;

                const s_Node* _0;
                return trySolveTypeParams_m8l53K02((*(_0 = &(items[0])) ? *_0 : BUG_patsWWTe(fu_STR{}, _here, ctx)), s_Type(t), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
            };
          } BL_3:;
        };
        fail_2n2GzXhw("TODO: do the stuff"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
    }
    else if (node.kind == "typeparam"_fu)
    {
        const fu_STR& id = (node.value ? node.value : BUG_patsWWTe(fu_STR{}, _here, ctx));
        s_TypeParam& _param = ref_SKEN9ihS(typeParams, id);
        if (_param)
        {
            s_Type uNion = type_trySuper_lKMokzZR(_param.matched, type);
            if (!uNion)
                return false;

            type = uNion;
        };
        _param.matched = relax_typeParam_ceGfLbqY(s_Type(type));
        return true;
    }
    else if ((node.kind == "arrlit"_fu) && (node.items.size() == 1))
    {
        s_Type t = tryClear_sliceable_ceGfLbqY(type);
        const s_Node* _1;
        return t && trySolveTypeParams_m8l53K02((*(_1 = &(node.items[0])) ? *_1 : BUG_patsWWTe(fu_STR{}, _here, ctx)), s_Type(t), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
    };
    fail_2n2GzXhw("TODO trySolveTypeParams fallthrough"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static fu_STR humanizeType_YKN1kOGX(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR result { (isStruct_5BOF5uJ9(type) ? lookupStruct_jCnOT4Df(type, module, ctx).name : type.vtype.canon) };
    if (type.vtype.quals)
        result += humanizeQuals_ceGfLbqY(type);

    return /*NRVO*/ result;
}

inline static fu_STR mangleArguments_STx3n2X8(fu::view<s_Type> args, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_4RxjLqQs(args[i], "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEFt_get_cZ1WxMoz
                                #define DEFt_get_cZ1WxMoz
inline const s_Target& get_cZ1WxMoz(fu::view<fu_STR> keys, const fu_STR& item, fu::view<s_Target> extras)
{
    int N = keys.size();
    for (int i = 0; i < N; i++)
    {
        const fu_STR& k = keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                return extras[i];
            };
            N = i;
            break;
        };
    };
    return (*(const s_Target*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_get_OHTTyvAW
                                #define DEFt_get_OHTTyvAW
inline const s_Target& get_OHTTyvAW(const s_Map_e04WMKmU& _, const fu_STR& key)
{
    return get_cZ1WxMoz(_.keys, key, _.vals);
}
                                #endif

static s_Target SPECFAIL_yP9888G7(const fu_STR& reason, fu_VEC<fu_STR>& _spec_errors, const s_Target& SPECFAIL_RentrySafety, const fu_STR& mangle00, const bool isInline, const s_TokenIdx& _here, const s_Context& ctx, s_Map_e04WMKmU& _specs, const s_Scope& _scope, const s_Module& module, const fu_STR& mangle)
{
    const int index = _spec_errors.size();
    _spec_errors += fu_STR(reason);
    /*MOV*/ const s_Target spec = s_Target { int(SPECFAIL_RentrySafety.modid), int(index) };
    setSpec_HPugG8x6(mangle00, spec, bool{}, isInline, _here, ctx, _specs, _scope, module);
    setSpec_HPugG8x6(mangle, spec, bool{}, isInline, _here, ctx, _specs, _scope, module);
    return /*NRVO*/ spec;
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEFt_get_fvbAmEwo
                                #define DEFt_get_fvbAmEwo
inline const s_TypeParam& get_fvbAmEwo(fu::view<fu_STR> keys, const fu_STR& item, fu::view<s_TypeParam> extras)
{
    int N = keys.size();
    for (int i = 0; i < N; i++)
    {
        const fu_STR& k = keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                return extras[i];
            };
            N = i;
            break;
        };
    };
    return (*(const s_TypeParam*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_get_ZnftNKNg
                                #define DEFt_get_ZnftNKNg
inline const s_TypeParam& get_ZnftNKNg(const s_Map_3Igdp5fJ& _, const fu_STR& key)
{
    return get_fvbAmEwo(_.keys, key, _.vals);
}
                                #endif

static const s_Type& evalTypeParam_h0N8m5LF(const fu_STR& id, const s_Map_3Igdp5fJ& typeParams, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    const s_Type* _0;
    return *(_0 = &(get_ZnftNKNg(typeParams, id).matched)) ? *_0 : *(_0 = &(Scope_lookupType_Ec2uCGZp(("$"_fu + (id ? id : fail_2n2GzXhw("Falsy type param id."_fu, _here, ctx, _helpers, _helpers_data, _scope, module))), 0, _here, ctx, _helpers, _helpers_data, _scope, module, _ss))) ? *_0 : fail_2n2GzXhw((("No type param `$"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static bool type_has_IHR3JtFa(const s_Type& type, fu::view<char> tag, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (tag == "trivial"_fu)
        return is_trivial_qcjLQIhC(type, module, ctx);

    if (tag == "copy"_fu)
        return is_rx_copy_ceGfLbqY(type);

    if (tag == "arithmetic"_fu)
        return is_arithmetic_KyrTVXnz(type);

    if (tag == "primitive"_fu)
        return is_primitive_KyrTVXnz(type);

    if (tag == "integral"_fu)
        return is_integral_KyrTVXnz(type);

    if (tag == "unsigned"_fu)
        return is_unsigned_KyrTVXnz(type);

    if (tag == "floating_point"_fu)
        return is_floating_pt_KyrTVXnz(type);

    if (tag == "mutref"_fu)
        return is_mutref_ceGfLbqY(type, _here, ctx);

    BUG_patsWWTe((("Unknown type tag: `"_fu + tag) + "`."_fu), _here, ctx);
}

static bool evalTypePattern_xXW6LGOg(const s_Node& node, s_Map_3Igdp5fJ& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, const s_Target& _current_fnort, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (node.kind == "and"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (!evalTypePattern_xXW6LGOg(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string))
                return false;

        };
        return true;
    }
    else if (node.kind == "or"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (evalTypePattern_xXW6LGOg(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string))
                return true;

        };
        return false;
    }
    else if (node.kind == "typeassert"_fu)
    {
        const s_Node* _0;
        const s_Node& left = (*(_0 = &(node.items[0])) ? *_0 : BUG_patsWWTe(fu_STR{}, _here, ctx));
        const s_Node* _1;
        const s_Node& right = (*(_1 = &(node.items[1])) ? *_1 : BUG_patsWWTe(fu_STR{}, _here, ctx));
        if ((left.kind == "typeparam"_fu) && (right.kind == "typetag"_fu))
            return type_has_IHR3JtFa(evalTypeParam_h0N8m5LF(left.value, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (right.value ? right.value : fail_2n2GzXhw("Falsy type tag."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)), module, ctx, _here);
        else
        {
            s_Type actual = evalTypeAnnot_t9H2NZ5S(left, typeParams, _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
            /*MOV*/ const bool ok = trySolveTypeParams_m8l53K02(right, s_Type(actual), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
            if (ok && (left.kind == "typeparam"_fu))
            {
                const fu_STR& id = left.value;
                s_TypeParam& tp = ref_SKEN9ihS(typeParams, id);
                s_Type _2 {};
                tp.consumed = (tp.consumed ? ((_2 = type_tryIntersect_lKMokzZR(tp.consumed, actual)) ? static_cast<s_Type&&>(_2) : fail_2n2GzXhw("typeassert intersect fail."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) : s_Type(actual));
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
                return !evalTypePattern_xXW6LGOg(node.items[0], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

        };
    };
    fail_2n2GzXhw((x7E((("TODO evalTypePattern fallthrough: "_fu + node.kind) + "("_fu), fu::i64dec(node.items.size())) + ")"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

static bool isNativeBody_z7fcGapq(const s_Node& n_body)
{
    return (n_body.kind == "call"_fu) && (n_body.value == "__native"_fu);
}

                                #ifndef DEFt_if_ref_mdWkW28Y
                                #define DEFt_if_ref_mdWkW28Y
inline bool if_ref_mdWkW28Y(const fu_STR& item, s_Map_3Igdp5fJ& _)
{
    int N = _.keys.size();
    for (int i = 0; i < N; i++)
    {
        const fu_STR& k = _.keys[i];
        if ((k >= item))
        {
            if (k == item)
            {

                {
                    s_TypeParam& tp = _.vals.mutref(i);
                    tp.matched = tp.consumed;
                };
                return true;
            };
            N = i;
            break;
        };
    };
    return false;
}
                                #endif

                                #ifndef DEFt_if_ref_FzxGZRJy
                                #define DEFt_if_ref_FzxGZRJy
inline bool if_ref_FzxGZRJy(s_Map_3Igdp5fJ& _, const fu_STR& key)
{
    return if_ref_mdWkW28Y(key, _);
}
                                #endif

static const s_Target& checkStruct_EjdYTVsH(const s_Type& type, const s_Module& module, const s_Context& ctx, const s_Scope& _scope)
{
    const s_Target& t = lookupStruct_jCnOT4Df(type, module, ctx).target;
    return (GET_EiJMwamT(t, _scope, module, ctx).type == type) ? t : (*(const s_Target*)fu::NIL);
}

                                #ifndef DEFt_pairs_awj7OENs
                                #define DEFt_pairs_awj7OENs
inline void pairs_awj7OENs(const s_Map_3Igdp5fJ& _, const s_Module& module, const s_Context& ctx, s_Scope& _scope, fu_VEC<s_ScopeItem>& res)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        fu::view<char> id = _.keys[i];
        const s_TypeParam& tp = _.vals[i];
        fu_STR name = ("$"_fu + id);
        const s_Type& type = tp.matched;
        s_Target _0 {};
        const s_Target target = ((_0 = s_Target((isStruct_5BOF5uJ9(type) ? checkStruct_EjdYTVsH(type, module, ctx, _scope) : (*(const s_Target*)fu::NIL)))) ? _0 : Scope_create_h7gWxUs8(_scope, "type"_fu, ("$"_fu + id), type, 0, 0u, 0, module));
        Scope_set_vOYMgdEn(res, name, target, false);
    };
}
                                #endif

static fu_VEC<s_ScopeItem> intoScopeItems_KzzBpR7D(const s_Map_3Igdp5fJ& typeParams, const s_Module& module, const s_Context& ctx, s_Scope& _scope)
{
    /*MOV*/ fu_VEC<s_ScopeItem> res {};
    pairs_awj7OENs(typeParams, module, ctx, _scope, res);
    return /*NRVO*/ res;
}

static s_SolvedNode solved_mViSzIsN(const s_Node& node, const s_Type& type, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode_HaPiTdVO(node.kind, type, node.flags, node.value, items, target, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNodeData& MUT_mMNEzOPJ(const s_SolvedNode& sn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    if (!((sn.signedidx & NODEIDX_signmask) == (_current_fnort.index & NODEIDX_signmask)))
        BUG_patsWWTe("MUT(): signedidx is off."_fu, _here, ctx);

    const int nodeidx = (sn.signedidx >> NODEIDX_signbits);
    return EXT_mut_lqSDNFDF(_current_fnort, module, _scope).nodes.mutref((nodeidx - 1));
}

static fu_VEC<s_SolvedNode>& outItems_R5PshaKs(const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    return MUT_mMNEzOPJ(_current_fn.out, _current_fnort, _here, ctx, module, _scope).items;
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

static s_Type tryGetArgSpecType_WDPdQFo8(fu::view<char> id, fu::view<s_ScopeItem> extra_items, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu_STR param = ("$"_fu + id);
    for (int i = 0; i < extra_items.size(); i++)
    {
        const s_ScopeItem& m = extra_items[i];
        if (m.id == param)
        {
            const s_Overload& o = GET_EiJMwamT(target_dYaABoRz(m), _scope, module, ctx);
            if (!(o.kind == "type"_fu))
                fail_2n2GzXhw((x7E((((("tryGetArgSpecType: Not a typeparam: `"_fu + o.kind) + ":"_fu) + param) + "("_fu), fu::i64dec(EXT_qHy9RJpv(target_dYaABoRz(m), module, _scope, ctx).max)) + ")`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

            return s_Type(o.type);
        };
    };
    return s_Type{};
}

                                #ifndef DEFt_find_3yRdKyg4
                                #define DEFt_find_3yRdKyg4
inline int find_3yRdKyg4(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEFt_find_6S2ralHV
                                #define DEFt_find_6S2ralHV
inline int find_6S2ralHV(fu::view<char> a, const char b, int start)
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

                                #ifndef DEFt_unpackAddrOfFn_qGSSgdCm
                                #define DEFt_unpackAddrOfFn_qGSSgdCm
inline void unpackAddrOfFn_qGSSgdCm(fu::view<char> canon, s_Scope& _scope, const fu_STR& id, const bool shadows)
{
    if (!(canon[0] == '@'))
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

    int offset = 1;
    while (offset < canon.size())
    {
        const s_Mi mi = parseMi_t6R8uPsY(offset, canon);
        const s_Target target = s_Target { int(mi.modid), int(mi.index) };
        Scope_set_vOYMgdEn(_scope.items, id, target, shadows);
    };
}
                                #endif

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline constexpr int F_PUB = (1 << 20);
                                #endif

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline constexpr int F_MUT = (1 << 16);
                                #endif

                                #ifndef DEF_F_USING
                                #define DEF_F_USING
inline constexpr int F_USING = (1 << 18);
                                #endif

static s_Target nested_sb4Efe9H(const int index, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    int _0 {};
    return s_Target { ((_0 = -SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index) ? _0 : int(module.modid)), int(index) };
}

static const s_Lifetime& Lifetime_test_J4SMmTB5(const s_Lifetime& lifetime, const bool tempsOK, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    if (SELF_TEST)
    {
        const s_Target& current_fn = SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target;
        const s_Overload& debug_2 = (current_fn ? GET_EiJMwamT(current_fn, _scope, module, ctx) : (*(const s_Overload*)fu::NIL));
        if (debug_2)
        {
        };
        if (!lifetime.uni0n.size())
            BUG_patsWWTe("Lifetime_test: no region set."_fu, _here, ctx);

        s_Region _last {};
        for (int i = 0; i < lifetime.uni0n.size(); i++)
        {
            const s_Region& region = lifetime.uni0n[i];

            {
                if (!(!i || (region > _last)))
                    BUG_patsWWTe("Lifetime_test: not a sorted set"_fu, _here, ctx);

                _last = region;
            };
            if (Region_isArg_4X1iL0ll(region))
                continue;

            if (Region_isTemp_4X1iL0ll(region))
            {
                if (!((i == (lifetime.uni0n.size() - 1)) && tempsOK))
                    BUG_patsWWTe("Lifetime_test: unexpected temporary."_fu, _here, ctx);

                continue;
            };
            const int index = Region_toLocalIndex_4X1iL0ll(region);
            if (index)
            {
                const s_Overload& o = GET_EiJMwamT(nested_sb4Efe9H(index, _current_fn, _current_fnort, _here, ctx, module, _scope), _scope, module, ctx);
                if (!(o.kind == "var"_fu))
                    BUG_patsWWTe(((("Lifetime_test: local is not a var: "_fu + o.kind) + " "_fu) + o.name), _here, ctx);

            };
        };
    };
    return lifetime;
}

static s_Lifetime Lifetime_fromBinding_rNvwTnPR(const s_Target& target, const int local_of, const int flags, const s_Module& module, const s_TokenIdx& _here, const s_Context& ctx, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_Scope& _scope)
{
    if (!((target.modid < 0) || (target.modid < 0) || (target.modid == module.modid)))
        BUG_patsWWTe("not from this module"_fu, _here, ctx);

    if (!local_of)
        return Lifetime_static_8nlJDPX0();

    const int index = target.index;
    const s_Region region = (((flags & (F_ARG | F_MUT)) == F_ARG) ? Region_fromArgIndex_BaKYka79(index) : Region_fromLocalIndex_BaKYka79(index));
    /*MOV*/ s_Lifetime res { Lifetime_test_J4SMmTB5(s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(region) } } }, bool{}, _current_fn, _current_fnort, _here, ctx, module, _scope) };
    return /*NRVO*/ res;
}

static s_Target Binding_AYh36Mtv(const fu_STR& id, s_Type&& type, const int flags, bool& shadows, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss)
{
    const fu_STR& name = id;
    const int local_of = SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index;
    if (_root_scope)
        autoshadow_xyz9Ip34(shadows, local_of, id, _scope, _ss, _root_scope);

    /*MOV*/ const s_Target target = Scope_create_h7gWxUs8(_scope, "var"_fu, name, (*(const s_Type*)fu::NIL), flags, 0u, local_of, module);
    s_Overload& overload = GET_mut_LT5T09Vv(target, _scope, module);

    {
        s_Lifetime lifetime = Lifetime_fromBinding_rNvwTnPR(target, local_of, flags, module, _here, ctx, _current_fn, _current_fnort, _scope);
        type.lifetime = s_Lifetime{};
        overload.type = ((flags & F_MUT) ? add_mutref_UThBZuDl(s_Type(type), lifetime, _here, ctx) : add_ref_UThBZuDl(s_Type(type), lifetime, _here, ctx));
    };
    return /*NRVO*/ target;
}

static s_SolvedNode& solved_set_bRjXPar3(const s_Target& target, const s_SolvedNode& node, s_Scope& _scope, const s_Module& module)
{
    return (GET_mut_LT5T09Vv(target, _scope, module).solved = node);
}

static s_SolvedNode createLetDef_rdvYC6ih(const s_Target& target, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return SolvedNode_HaPiTdVO("letdef"_fu, (*(const s_Type*)fu::NIL), 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveLet_axpNmfxF(s_SolvedNode& out, const fu_STR& id, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, const s_Target& _current_fn_or_type, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss)
{
    if (SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).kind != "let"_fu)
    {
        if (!(is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).type)))
            BUG_patsWWTe((((("solveLet: results in a `"_fu + SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).kind) + ": "_fu) + id) + "`."_fu), _here, ctx);

        return s_SolvedNode(out);
    };
    bool shadows = !!(SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).flags & F_SHADOW);
    const int isArg = (SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).flags & F_ARG);
    fu_STR cleanID {};
    if (SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).flags & F_COMPOUND_ID)
    {
        if (!(isArg))
            BUG_patsWWTe("solveLet: F_COMPOUND_ID on a non-F_ARG."_fu, _here, ctx);

        const int start = (find_3yRdKyg4(id, '!') + 1);
        const int end = find_6S2ralHV(id, '.', ((start > 0) ? int(start) : 0));
        cleanID = fu::slice(id, ((start > 0) ? int(start) : 0), ((end > 0) ? int(end) : id.size()));
        if (!(cleanID && (cleanID.size() < id.size())))
            BUG_patsWWTe("solveLet: F_COMPOUND_ID bad cleanID."_fu, _here, ctx);

    };
    const fu_STR& id_1 = (cleanID ? cleanID : id);
    if (type_isAddrOfFn_ceGfLbqY(SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).type))
    {
        const bool shadows_1 = true;
        unpackAddrOfFn_qGSSgdCm(fu_STR(SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).type.vtype.canon), _scope, id_1, shadows_1);
    }
    else
    {
        if (OPTI_dedupe_vars && !isArg && !(SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).flags & ((F_PUB | F_IMPLICIT) | F_MUT)))
        {
            const s_SolvedNode& init = SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).items[LET_INIT];
            if ((SolvedNodeData_KIpwZvpE(init, _current_fnort, _here, ctx, module, _scope).kind == "call"_fu) && !SolvedNodeData_KIpwZvpE(init, _current_fnort, _here, ctx, module, _scope).items)
            {
                const s_Target target { SolvedNodeData_KIpwZvpE(init, _current_fnort, _here, ctx, module, _scope).target };
                const s_Overload& other = GET_EiJMwamT(target, _scope, module, ctx);
                if (other.kind == "var"_fu)
                {
                    if (isAssignable_lKMokzZR(other.type, SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).type))
                    {
                        Scope_set_Jn3gd5FG(_scope, id_1, target, shadows);
                        if (SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).flags & F_USING)
                            _scope.usings.push(s_Target(target));

                        out = createEmpty_M9eYCmcR("empty"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
                        return s_SolvedNode(out);
                    };
                };
            };
        };
        const s_Target target { (MUT_mMNEzOPJ(out, _current_fnort, _here, ctx, module, _scope).target = Binding_AYh36Mtv(id_1, s_Type(SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).type), int(SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).flags), shadows, _current_fn, _current_fnort, _here, ctx, module, _scope, _root_scope, _ss)) };
        solved_set_bRjXPar3(target, out, _scope, module);
        Scope_set_Jn3gd5FG(_scope, id_1, target, shadows);
        if (SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).flags & F_IMPLICIT)
            Scope_set_vOYMgdEn(_scope.implicits, id_1, target, shadows);

        if (SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).flags & F_USING)
            _scope.usings.push(s_Target(target));

        return createLetDef_rdvYC6ih(target, _here, _current_fnort, _current_fn_or_type, module, _scope);
    };
    if (SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).flags & F_ARG)
        return s_SolvedNode(out);

    return createEmpty_M9eYCmcR("empty"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveLet_ScVmXNEy(const s_Node& node, const s_Type& specType, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    s_SolvedNode out = solveLetLike_dontTouchScope_8mF4zFmd(node, specType, _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    fu_STR id { SolvedNodeData_KIpwZvpE(out, _current_fnort, _here, ctx, module, _scope).value };
    return solveLet_axpNmfxF(out, id, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _current_fn, _root_scope, _ss);
}

                                #ifndef DEFt_only_JiLdc34E
                                #define DEFt_only_JiLdc34E
inline const s_Region& only_JiLdc34E(fu::view<s_Region> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Lifetime Lifetime_fromNative_TdsF2x1q(fu::view<s_Node> sig, fu::view<s_SolvedNode> args, const s_Type& actual, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Target& _current_fnort)
{
    if (!((sig.size() + FN_ARGS_BACK) == args.size()))
        BUG_patsWWTe("sig.len != args.len"_fu, _here, ctx);

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
                    fail_2n2GzXhw("Ambiguous __native lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                res = GET_EiJMwamT(SolvedNodeData_KIpwZvpE(args[i], _current_fnort, _here, ctx, module, _scope).target, _scope, module, ctx).type;
                if (!(res.lifetime))
                    fail_2n2GzXhw("Missing arg lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        if (!mutref || res.lifetime)
            break;

        mutref = false;
    };
    if (!(Region_isArg_4X1iL0ll(only_JiLdc34E(res.lifetime.uni0n))))
        fail_2n2GzXhw("Non-single-arg __native lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!isAssignable_lKMokzZR(actual, res))
        return Lifetime_makeShared_zJCUz9W3(res.lifetime);

    return static_cast<s_Lifetime&&>(res.lifetime);
}

                                #ifndef DEF_SS_UPDATED
                                #define DEF_SS_UPDATED
inline constexpr unsigned SS_UPDATED = (0x1u << 4u);
                                #endif

static fu_STR CompoundArgID_outerSplice_pC2dD4Vs(fu_STR& name, const s_TokenIdx& _here, const s_Context& ctx)
{
    bool exclam = false;
    for (int i = 0; i < name.size(); i++)
    {
        const char c = name[i];
        if (c == '!')
        {
            if (exclam)
                BUG_patsWWTe((("CompoundArgID: double bang in `"_fu + name) + "`."_fu), _here, ctx);

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
        BUG_patsWWTe((("CompoundArgID: no `.` nor `!` in id `"_fu + name) + "`."_fu), _here, ctx);

    return fu_STR{};
}

                                #ifndef DEFt_has_VOvG8QfK
                                #define DEFt_has_VOvG8QfK
inline bool has_VOvG8QfK(fu::view<s_Target> a, const s_Target& b)
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

static const s_Type& Lifetime_climbType_D5x6tF2p(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort)
{
    if (!(o.kind == "var"_fu))
        BUG_patsWWTe(("Lifetime_climbType: not a `var`: "_fu + qWHAT_5LWmus20(o, module, _scope, ctx)), _here, ctx);

    const s_SolvedNode& node = o.solved;
    return is_ref_ceGfLbqY(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type) ? SolvedNodeData_KIpwZvpE(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[LET_INIT], _current_fnort, _here, ctx, module, _scope).type : (*(const s_Type*)fu::NIL);
}

inline static void Lifetime_each_ODIWf1Sp(s_Lifetime& lifetime, const int locals_start, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;

        if (Region_isTemp_4X1iL0ll(r))
            continue;

        const s_Overload& o = GET_mut_LT5T09Vv(nested_sb4Efe9H(Region_toLocalIndex_4X1iL0ll(r), _current_fn, _current_fnort, _here, ctx, module, _scope), _scope, module);
        const s_Type& init = Lifetime_climbType_D5x6tF2p(o, module, _scope, ctx, _here, _current_fnort);
        if (!is_ref_ceGfLbqY(init))
            continue;

        if (!(init.lifetime.uni0n.size()))
            BUG_patsWWTe(fu_STR{}, _here, ctx);

        lifetime.uni0n.splice(i, 1);
        const int N0 = lifetime.uni0n.size();
        lifetime = Lifetime_union_yRJeU5dj(lifetime, init.lifetime);
        const int N1 = lifetime.uni0n.size();
        i += (N1 - N0);
    };
}

static s_Lifetime Lifetime_unwind_S617ISHL(/*MOV*/ s_Lifetime&& lifetime, const int locals_start, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    Lifetime_each_ODIWf1Sp(lifetime, locals_start, _current_fn, _current_fnort, _here, ctx, module, _scope);
    return static_cast<s_Lifetime&&>(lifetime);
}

                                #ifndef DEFt_has_pGNNepfS
                                #define DEFt_has_pGNNepfS
inline bool has_pGNNepfS(fu::view<s_Region> a, const s_Region& b)
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

static fu_STR addr_ozqPqrD6(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    const s_Token& t = _token_GF4X2sQy(token, ctx);
    if (token.modid != module.modid)
        return x7E((x7E((_fname_GF4X2sQy(token, ctx) + "@"_fu), fu::i64dec(t.line)) + ":"_fu), fu::i64dec(t.col));

    return x7E(x7E(fu::i64dec(t.line), ":"_fu), fu::i64dec(t.col));
}

static fu_STR addr_and_snippet_Pptk1rIT(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    return (addr_ozqPqrD6(token, ctx, module) + ":\n\n"_fu) + formatCodeSnippet_LnIzFNvj(token, s_TokenIdx{}, ctx);
}

static fu_STR qSTACK_HNuH0RuB(const s_Target& target, const int position, fu::view<s_Target> seen, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, const s_CurrentFn& _current_fn)
{
    return qSTACK_0FnmlzHt(target, Region_fromArgIndex_BaKYka79(EXT_qHy9RJpv(target, module, _scope, ctx).args[position].local), seen, module, _scope, ctx, _here, _current_fn);
}

static fu_STR qSTACK_0FnmlzHt(const s_Target& target, const s_Region& region, fu::view<s_Target> seen, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, const s_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR src = "\n            "_fu;
    const bool rec = has_VOvG8QfK(seen, target);
    if (rec)
        src += "recursively "_fu;

    const s_Target& _current_fnort = target;
    fu_VEC<s_SolvedNodeData> nodes { EXT_qHy9RJpv(target, module, _scope, ctx).nodes };
    for (int i = 0; i < nodes.size(); i++)
    {
        s_SolvedNodeData callsite { nodes[i] };
        if (callsite.kind == "call"_fu)
        {
            fu_VEC<s_Argument> host_args { EXT_qHy9RJpv(callsite.target, module, _scope, ctx).args };
            for (int i_1 = 0; i_1 < host_args.size(); i_1++)
            {
                const s_Argument& host_arg = host_args[i_1];
                if (host_arg.flags & F_WRITTEN_TO)
                {
                    const s_SolvedNode& arg = callsite.items[i_1];
                    if (has_pGNNepfS(Lifetime_unwind_S617ISHL(s_Lifetime(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).type.lifetime), 0, _current_fn, _current_fnort, _here, ctx, module, _scope).uni0n, region))
                    {
                        src += (("via "_fu + qWHAT_5LWmus20(GET_EiJMwamT(callsite.target, _scope, module, ctx), module, _scope, ctx)) + " at "_fu);
                        src += addr_and_snippet_Pptk1rIT(callsite.token, ctx, module);
                        if (!rec && (seen.size() < 8))
                            src += qSTACK_HNuH0RuB(callsite.target, i_1, (seen + target), module, _scope, ctx, _here, _current_fn);

                        goto LL_2;
                    };
                };
            };
        };
    } LL_2:;

    return /*NRVO*/ src;
}

                                #ifndef DEF_F_REST_ARG
                                #define DEF_F_REST_ARG
inline constexpr int F_REST_ARG = (1 << 26);
                                #endif

static const s_Overload& Region_GET_xySyDzrS(const s_Region& r, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    const int idx = (Region_isArg_4X1iL0ll(r) ? Region_toArgIndex_4X1iL0ll(r) : int(Region_toLocalIndex_4X1iL0ll(r)));
    return GET_EiJMwamT(nested_sb4Efe9H(idx, _current_fn, _current_fnort, _here, ctx, module, _scope), _scope, module, ctx);
}

static fu_STR qWHAT_Frhcu2qZ(const s_Lifetime& l, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    /*MOV*/ fu_STR str {};
    for (int i = 0; i < l.uni0n.size(); i++)
    {
        if (i)
            str += "|"_fu;

        const s_Region& r = l.uni0n[i];
        if (Region_isStatic_4X1iL0ll(r))
            str += "static"_fu;
        else if (Region_isTemp_4X1iL0ll(r))
            str += "temp"_fu;
        else
            str += qWHAT_5LWmus20(Region_GET_xySyDzrS(r, _current_fn, _current_fnort, _here, ctx, module, _scope), module, _scope, ctx);

    };
    return /*NRVO*/ str;
}

                                #ifndef DEFt_each_bJErgzrS
                                #define DEFt_each_bJErgzrS
inline void each_bJErgzrS(fu::view<s_Region> a, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope, const s_Type& retval)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Region& r = a[i];
        if (!(Region_isArg_4X1iL0ll(r) || Region_isStatic_4X1iL0ll(r)))
            BUG_patsWWTe(((("updateScope: Non-static/non-arg leaked:\n\t"_fu + qWHAT_5LWmus20(Region_GET_xySyDzrS(r, _current_fn, _current_fnort, _here, ctx, module, _scope), module, _scope, ctx)) + "\n\n\tIn retval lifetime:\n\t"_fu) + qWHAT_Frhcu2qZ(retval.lifetime, _current_fn, _current_fnort, _here, ctx, module, _scope)), _here, ctx);

    };
}
                                #endif

                                #ifndef DEF_F_OOE_RTL
                                #define DEF_F_OOE_RTL
inline constexpr int F_OOE_RTL = (1 << 25);
                                #endif

static int& isRTL_set_0XnE1lkF(s_Overload& o, const bool rtl)
{
    return (rtl ? (o.flags |= F_OOE_RTL) : (o.flags &= ~F_OOE_RTL));
}

static void updateScope_yjXZeo7w(const s_CurrentFn& out, const s_Type& retval, const bool maybeLast, const s_Target& target, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_Target& _current_fnort, const s_TokenIdx& _here, const bool isNative, const bool isUnspec, const int isPure, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const int isNovec, const bool isInline)
{
    if (GET_EiJMwamT(target, _scope, module, ctx).status & SS_DIRTY)
    {
        GET_mut_LT5T09Vv(target, _scope, module).status |= SS_UPDATED;
        return;
    };
    fu_VEC<s_SolvedNode> items { SolvedNodeData_KIpwZvpE(out.out, _current_fnort, _here, ctx, module, _scope).items };
    const int N = (items.size() + FN_ARGS_BACK);
    int min = 0;
    int max = 0;
    const s_NativeOpts NativeOpts = (isNative ? NativeOpts_RHyKU5hm(GET_EiJMwamT(target, _scope, module, ctx).name) : s_NativeOpts{});
    fu_VEC<s_Argument> args {};
    for (int i = 0; i < N; i++)
    {
        const s_SolvedNode& argNode = items[i];
        const s_SolvedNode argNode_1 { ((SolvedNodeData_KIpwZvpE(argNode, _current_fnort, _here, ctx, module, _scope).kind == "letdef"_fu) ? GET_EiJMwamT(SolvedNodeData_KIpwZvpE(argNode, _current_fnort, _here, ctx, module, _scope).target, _scope, module, ctx).solved : argNode) };
        if (!(SolvedNodeData_KIpwZvpE(argNode_1, _current_fnort, _here, ctx, module, _scope).kind == "let"_fu))
            BUG_patsWWTe(fu_STR{}, _here, ctx);

        fu_STR name { SolvedNodeData_KIpwZvpE(argNode_1, _current_fnort, _here, ctx, module, _scope).value };
        fu_STR autocall = ((SolvedNodeData_KIpwZvpE(argNode_1, _current_fnort, _here, ctx, module, _scope).flags & F_COMPOUND_ID) ? CompoundArgID_outerSplice_pC2dD4Vs(name, _here, ctx) : fu_STR{});
        const bool isImplicit = !!(SolvedNodeData_KIpwZvpE(argNode_1, _current_fnort, _here, ctx, module, _scope).flags & F_IMPLICIT);
        s_BitSet risk_free = ((!isNative || NativeOpts.no_AAR) && !isUnspec ? ArgsAtRisk_listRiskFree_w6iboJyg(out.flow, i) : s_BitSet{});
        const s_Target argTarget { SolvedNodeData_KIpwZvpE(argNode_1, _current_fnort, _here, ctx, module, _scope).target };
        const bool written_via = (is_mutref_ceGfLbqY(SolvedNodeData_KIpwZvpE(argNode_1, _current_fnort, _here, ctx, module, _scope).type, _here, ctx) && (isNative || has_CoC0247n(out.events.args_ever_written, argTarget.index)));
        if (isPure && written_via)
        {
            fu_STR _0 {};
            fu_STR _1 {};
            (_1 = (_0 = (((qWHAT_5LWmus20(GET_EiJMwamT(target, _scope, module, ctx), module, _scope, ctx) + " is not pure, writes to argument "_fu) + qID_HIwg52Ja(human_iY2blCZM(name, module, _scope, ctx))) + ":\n"_fu), (static_cast<fu_STR&&>(_0) + qSTACK_0FnmlzHt(target, Region_fromArgIndex_BaKYka79(argTarget.index), fu::view<s_Target>{}, module, _scope, ctx, _here, _current_fn))), fail_2n2GzXhw(static_cast<fu_STR&&>(_1), _here, ctx, _helpers, _helpers_data, _scope, module));
        };
        if (maybeLast && isNovec && (is_rx_copy_ceGfLbqY(SolvedNodeData_KIpwZvpE(argNode_1, _current_fnort, _here, ctx, module, _scope).type) || is_rx_resize_ceGfLbqY(SolvedNodeData_KIpwZvpE(argNode_1, _current_fnort, _here, ctx, module, _scope).type)))
            fail_2n2GzXhw(((((qWHAT_5LWmus20(GET_EiJMwamT(target, _scope, module, ctx), module, _scope, ctx) + " is not novec, argument "_fu) + qID_HIwg52Ja(human_iY2blCZM(name, module, _scope, ctx))) + " is "_fu) + humanizeType_YKN1kOGX(SolvedNodeData_KIpwZvpE(argNode_1, _current_fnort, _here, ctx, module, _scope).type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Argument arg = s_Argument { fu_STR(name), fu_STR(autocall), s_Type(SolvedNodeData_KIpwZvpE(argNode_1, _current_fnort, _here, ctx, module, _scope).type), s_SolvedNode((!isImplicit ? SolvedNodeData_KIpwZvpE(argNode_1, _current_fnort, _here, ctx, module, _scope).items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), (SolvedNodeData_KIpwZvpE(argNode_1, _current_fnort, _here, ctx, module, _scope).flags | (written_via ? F_WRITTEN_TO : (*(const int*)fu::NIL))), int(argTarget.index), s_BitSet(risk_free) };
        if (!(arg.type || isUnspec))
            BUG_patsWWTe((("updateScope: Unexpected untyped argument: `"_fu + name) + "`."_fu), _here, ctx);

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
    s_Overload overload { GET_EiJMwamT(target, _scope, module, ctx) };
    s_Extended& ext = EXT_mut_lqSDNFDF(target, module, _scope);
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
    s_Overload& overload_1 = GET_mut_LT5T09Vv(target, _scope, module);
    overload_1.type = retval;
    if (isInline)
        return;

    if (!(retval))
        BUG_patsWWTe("updateScope: no return type."_fu, _here, ctx);

    if (is_ref_ceGfLbqY(retval))
        Lifetime_test_J4SMmTB5(retval.lifetime, bool{}, _current_fn, _current_fnort, _here, ctx, module, _scope);

    each_bJErgzrS(retval.lifetime.uni0n, _current_fn, _current_fnort, _here, ctx, module, _scope, retval);
    overload_1.flags = SolvedNodeData_KIpwZvpE(out.out, _current_fnort, _here, ctx, module, _scope).flags;

    {
        const bool rtl = ((args.size() == 2) && (overload_1.flags & F_OPERATOR) && hasAssignment_YqscxHlw(overload_1.name));
        isRTL_set_0XnE1lkF(overload_1, rtl);
    };
    if (change)
        overload_1.status |= SS_UPDATED;

    solved_set_bRjXPar3(target, (!isUnspec ? out : (*(const s_CurrentFn*)fu::NIL)).out, _scope, module);
}

                                #ifndef DEF_F_EXTERN
                                #define DEF_F_EXTERN
extern const int F_EXTERN;
                                #endif

inline static fu_STR mangleArguments_9v4sgACJ(fu::view<s_Argument> args, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_4RxjLqQs(args[i].type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

static fu_STR HACK_nativeNameParts_ljnYNjn0(const bool isNative, const s_Node& n_body)
{
    /*MOV*/ fu_STR name {};
    if (isNative && n_body.items)
    {
        for (int i = 0; i < n_body.items.size(); i++)
            name += ("\n"_fu + n_body.items[i].value);

    };
    return /*NRVO*/ name;
}

                                #ifndef DEF_HM_CanReturn
                                #define DEF_HM_CanReturn
extern const short HM_CanReturn;
                                #endif

                                #ifndef DEF_F_LAMBDA
                                #define DEF_F_LAMBDA
inline constexpr int F_LAMBDA = (1 << 30);
                                #endif

                                #ifndef DEF_HM_Lambda
                                #define DEF_HM_Lambda
extern const short HM_Lambda;
                                #endif

static int GET_next_local_index_LA0p7vFN(const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index ? (_scope.extended[SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index].locals.size() + 1) : int{};
}

                                #ifndef DEFt_last_3cih1E88
                                #define DEFt_last_3cih1E88
inline const s_SolvedNode& last_3cih1E88(fu::view<s_SolvedNode> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEF_F_REF
                                #define DEF_F_REF
inline constexpr int F_REF = (1 << 22);
                                #endif

static bool Lifetime_allowsMutrefReturn_ThKyqveh(const s_Lifetime& lifetime, const int locals_start, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{

    {
        for (int i = lifetime.uni0n.size(); i-- > 0; )
        {
            const s_Region& r = lifetime.uni0n[i];
            if (r.index < locals_start)
                break;

            if (Region_isTemp_4X1iL0ll(r))
                continue;

            const s_Overload& o = GET_mut_LT5T09Vv(nested_sb4Efe9H(Region_toLocalIndex_4X1iL0ll(r), _current_fn, _current_fnort, _here, ctx, module, _scope), _scope, module);
            if (!(is_mutref_ceGfLbqY(o.type, _here, ctx)))
                BUG_patsWWTe(("Checking for mutref-return-ok found non-mutref: "_fu + qWHAT_5LWmus20(o, module, _scope, ctx)), _here, ctx);

            if ((o.kind == "var"_fu) && !(o.flags & F_REF))
                return false;

            const s_Type& init = Lifetime_climbType_D5x6tF2p(o, module, _scope, ctx, _here, _current_fnort);
            if (!Lifetime_allowsMutrefReturn_ThKyqveh(s_Lifetime(init.lifetime), locals_start, _current_fn, _current_fnort, _here, ctx, module, _scope))
                return false;

        };
    };
    return true;
}

static void checkAssignable_bkgTcirN(const s_Type& host, const s_Type& guest, fu::view<char> err, const fu_STR& id, const fu_STR& sep, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope)
{
    if (!(isAssignable_lKMokzZR((host ? host : BUG_patsWWTe("Bad host type."_fu, _here, ctx)), (guest ? guest : BUG_patsWWTe("Bad guest type."_fu, _here, ctx)))))
        fail_2n2GzXhw((((((err + (id ? ((" `"_fu + id) + "`"_fu) : fu_STR{})) + ": "_fu) + humanizeType_YKN1kOGX(host, module, ctx)) + (sep ? fu_STR(sep) : " <- "_fu)) + humanizeType_YKN1kOGX(guest, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

}

static s_Type superType_Ai0G5C3M(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_Type _0 {};
    return (_0 = type_trySuper_lKMokzZR(a, b)) ? static_cast<s_Type&&>(_0) : fail_2n2GzXhw((((((((id ? (("`"_fu + human_iY2blCZM(id, module, _scope, ctx)) + "`: "_fu) : fu_STR{}) + reason) + "No common supertype: `"_fu) + humanizeType_YKN1kOGX(a, module, ctx)) + "` | `"_fu) + humanizeType_YKN1kOGX(b, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void reportReturnType_NsDoShKi(const s_Helpers& h, const s_Type& type, fu_VEC<s_HelpersData>& _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu::view<s_Helpers> _helpers, const s_Scope& _scope)
{
    if (((void)void(), _helpers_data[h.index]).ret_expect)
        checkAssignable_bkgTcirN(((void)void(), _helpers_data[h.index]).ret_expect, type, "Actual return type does not match annotation"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, module, _helpers, _helpers_data, _scope);

    ((void)void(), _helpers_data.mutref(h.index)).ret_actual = (((void)void(), _helpers_data[h.index]).ret_actual ? superType_Ai0G5C3M("Subsequent return: "_fu, ((void)void(), _helpers_data[h.index]).ret_actual, type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data) : s_Type(type));
    if (!(((void)void(), _helpers_data[h.index]).ret_actual))
        BUG_patsWWTe("Can't be null past this point."_fu, _here, ctx);

}

static s_SolvedNode createJump_N6cyyHzw(const s_SolvedNode& expr, const s_Helpers& h, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope, const s_Context& ctx, fu_VEC<s_HelpersData>& _helpers_data, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers)
{
    /*MOV*/ const s_SolvedNode jump = SolvedNode_HaPiTdVO("jump"_fu, t_never, 0, (*(const fu_STR*)fu::NIL), (expr ? fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } } : fu_VEC<s_SolvedNode>{}), s_Target{}, h.index, _here, _current_fnort, _current_fn_or_type, module, _scope);
    s_Type type = ((is_mutref_ceGfLbqY(SolvedNodeData_KIpwZvpE(expr, _current_fnort, _here, ctx, module, _scope).type, _here, ctx) && !Lifetime_allowsMutrefReturn_ThKyqveh(s_Lifetime(SolvedNodeData_KIpwZvpE(expr, _current_fnort, _here, ctx, module, _scope).type.lifetime), ((void)void(), _helpers_data[h.index]).locals_start, _current_fn, _current_fnort, _here, ctx, module, _scope)) ? clear_mutref_ceGfLbqY(s_Type(SolvedNodeData_KIpwZvpE(expr, _current_fnort, _here, ctx, module, _scope).type)) : s_Type(SolvedNodeData_KIpwZvpE(expr, _current_fnort, _here, ctx, module, _scope).type));
    s_Type type_1 = (is_ref2temp_ceGfLbqY(type, _here, ctx) ? clear_refs_ceGfLbqY(s_Type(type)) : s_Type(type));
    reportReturnType_NsDoShKi(h, type_1, _helpers_data, _here, ctx, module, _helpers, _scope);
    return /*NRVO*/ jump;
}

                                #ifndef DEFt_if_last_3cih1E88
                                #define DEFt_if_last_3cih1E88
inline const s_SolvedNode& if_last_3cih1E88(fu::view<s_SolvedNode> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

static bool currentFn_mustBecomeInline_cOeXJelh(const s_CurrentFn& _current_fn)
{
    return _current_fn.effects.far_jumps.size() > 0;
}

static void test_nodes_kmfvsTVH(fu::view<s_SolvedNode> nodes, fu::view<char> debug, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    for (int i = 0; i < nodes.size(); i++)
        test_node_Ox3KkYOv(nodes[i], (x7E((debug + "["_fu), fu::i64dec(i)) + "]"_fu), _current_fnort, _here, ctx, module, _scope);

}

inline static fu_STR mangleArguments_tFFItOS8(fu::view<s_SolvedNode> args, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_4RxjLqQs(SolvedNodeData_KIpwZvpE(args[i], _current_fnort, _here, ctx, module, _scope).type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_F_MUSTNAME
                                #define DEF_F_MUSTNAME
inline constexpr int F_MUSTNAME = (1 << 19);
                                #endif

static fu_STR explainConversion_8BNJKfpL(fu::view<s_Target> path, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR res = "`"_fu;
    for (int i = 0; i < path.size(); i++)
    {
        if (i)
            res += "` -> `"_fu;

        const s_Overload& o = GET_EiJMwamT(path[i], _scope, module, ctx);
        res += qWHAT_5LWmus20(o, module, _scope, ctx);
        if (i < path.size())
            res += (": "_fu + humanizeType_YKN1kOGX(o.type, module, ctx));

    };
    res += "`"_fu;
    return /*NRVO*/ res;
}

static fu_STR explainWhichFn_9LDKdDLX(const s_Target& overload, fu::view<fu_VEC<s_Target>> conversions, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR result = ("`"_fu + GET_EiJMwamT(overload, _scope, module, ctx).name);
    if (EXT_qHy9RJpv(overload, module, _scope, ctx).args)
    {
        result += "("_fu;
        for (int i = 0; i < EXT_qHy9RJpv(overload, module, _scope, ctx).args.size(); i++)
        {
            const s_Argument& arg = EXT_qHy9RJpv(overload, module, _scope, ctx).args[i];
            if (i)
                result += ","_fu;

            result += (((("\n\t"_fu + qID_HIwg52Ja(human_iY2blCZM(arg.name, module, _scope, ctx))) + ((arg.flags & F_MUSTNAME) ? "!"_fu : fu_STR{})) + (arg.dEfault ? "?: "_fu : ": "_fu)) + (arg.type ? humanizeType_YKN1kOGX(arg.type, module, ctx) : "$"_fu));
            const fu_VEC<s_Target>& c = ((conversions.size() > i) ? conversions[i] : (*(const fu_VEC<s_Target>*)fu::NIL));
            if (c)
                result += (" via "_fu + explainConversion_8BNJKfpL(c, _scope, module, ctx));

        };
        result += ")"_fu;
    };
    result += "`"_fu;
    return /*NRVO*/ result;
}

[[noreturn]] static fu::never err_Rl7ZasyL(fu::view<char> reason, fu::view<char> debug, const s_SolvedNode& callsite, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    BUG_patsWWTe(((((debug + " "_fu) + qWHAT_5LWmus20(GET_EiJMwamT(SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).target, _scope, module, ctx), module, _scope, ctx)) + ": "_fu) + reason), _here, ctx);
}

static void test_CallSignature_B4numbX4(const s_SolvedNode& callsite, fu::view<char> debug, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    fu::view<s_Argument> host_args = EXT_qHy9RJpv(SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).target, module, _scope, ctx).args;
    fu::view<s_SolvedNode> args = SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).items;
    if ((args.size() == 0) && (GET_EiJMwamT(SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).target, _scope, module, ctx).kind == "type"_fu))
        return;

    if (!(host_args.size() == args.size()))
        err_Rl7ZasyL((((((x7E((x7E("host_args.len ("_fu, fu::i64dec(host_args.size())) + ") != args.len ("_fu), fu::i64dec(args.size())) + "):"_fu) + "\n\t\t"_fu) + mangleArguments_tFFItOS8(args, _current_fnort, _here, ctx, module, _scope)) + "\n\t\t"_fu) + explainWhichFn_9LDKdDLX(SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).target, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx)), debug, callsite, _current_fnort, _here, ctx, module, _scope);

    for (int i = 0; i < host_args.size(); i++)
    {
        const s_Argument& host_arg = host_args[i];
        const s_SolvedNode& arg = args[i];
        if (!(isAssignableAsArgument_lKMokzZR(host_arg.type, SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).type)))
            err_Rl7ZasyL(((((((x7E("Arg #"_fu, fu::i64dec(i)) + ", "_fu) + qID_HIwg52Ja(human_iY2blCZM(host_arg.name, module, _scope, ctx))) + " not assignable to host_arg: "_fu) + humanizeType_YKN1kOGX(host_arg.type, module, ctx)) + " <- "_fu) + humanizeType_YKN1kOGX(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).type, module, ctx)), debug, callsite, _current_fnort, _here, ctx, module, _scope);

    };
}

static void test_Statements_cWPmmTAP(const s_SolvedNode& block, fu::view<char> debug, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    fu::view<s_SolvedNode> items = SolvedNodeData_KIpwZvpE(block, _current_fnort, _here, ctx, module, _scope).items;
    for (int i = 0; i < items.size(); i++)
    {
        const s_SolvedNode& n = items[i];
        if (!(SolvedNodeData_KIpwZvpE(n, _current_fnort, _here, ctx, module, _scope).kind))
            BUG_patsWWTe((x7E((debug + ": No .kind on item["_fu), fu::i64dec(i)) + "]."_fu), _here, ctx);

    };
}

static void test_node_Ox3KkYOv(const s_SolvedNode& node, fu_STR&& debug, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    debug += ("/"_fu + SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind);
    if (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).value)
        debug += (("["_fu + SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).value) + "]"_fu);

    test_nodes_kmfvsTVH(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items, debug, _current_fnort, _here, ctx, module, _scope);
    _here = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).token;
    if (!(!is_ref_ceGfLbqY(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type) == !SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type.lifetime))
        BUG_patsWWTe(((debug + ": !!ref != !!lt: "_fu) + humanizeType_YKN1kOGX(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type, module, ctx)), _here, ctx);

    fu::view<char> k = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind;
    if (k == "call"_fu)
        return test_CallSignature_B4numbX4(node, debug, _current_fnort, _here, ctx, module, _scope);

    if (k == "let"_fu)
    {
        if (!(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size() == 2))
            BUG_patsWWTe(x7E("let.items.len: "_fu, fu::i64dec(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size())), _here, ctx);

        if (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[0])
            BUG_patsWWTe(("let.items[0] not empty: "_fu + SolvedNodeData_KIpwZvpE(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[0], _current_fnort, _here, ctx, module, _scope).kind), _here, ctx);

        return;
    };
    if ((k == "block"_fu) || (k == "and"_fu) || (k == "or"_fu) || (k == "if"_fu))
    {
        if ((k == "and"_fu) || (k == "or"_fu))
        {
            if (!(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size() > 1))
                BUG_patsWWTe(x7E((debug + ".len: "_fu), fu::i64dec(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size())), _here, ctx);

        };
        if (k == "if"_fu)
        {
            if (!(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size() == 3))
                BUG_patsWWTe(x7E((debug + ".len: "_fu), fu::i64dec(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size())), _here, ctx);

        };
        return test_Statements_cWPmmTAP(node, debug, _current_fnort, _here, ctx, module, _scope);
    };
}

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
extern const int RELAX_before_bck;
                                #endif

                                #ifndef DEFt_unless_oob_zhK7J6yd
                                #define DEFt_unless_oob_zhK7J6yd
inline const s_Type& unless_oob_zhK7J6yd(fu::view<s_Type> a, const int i)
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

                                #ifndef DEFt_grow_if_oob_HceKJI4D
                                #define DEFt_grow_if_oob_HceKJI4D
inline s_Warning& grow_if_oob_HceKJI4D(fu_VEC<s_Warning>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_F_UNUSED
                                #define DEF_F_UNUSED
inline constexpr int F_UNUSED = (1 << 10);
                                #endif

                                #ifndef DEF_F_RELAXABLE_REF
                                #define DEF_F_RELAXABLE_REF
inline constexpr int F_RELAXABLE_REF = (1 << 27);
                                #endif

static void relaxBlockVar_kYsNupTY(const s_Target& t, const int relax_mask, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_CurrentFn& _current_fn, const s_Target& _current_fnort, s_TokenIdx& _here, fu_VEC<s_Warning>& _warnings, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Target& _current_fn_or_type, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Overload& var = GET_EiJMwamT(t, _scope, module, ctx);
    s_Type usage { unless_oob_zhK7J6yd(_current_fn.var_usage, t.index) };
    if (!usage && (relax_mask == RELAX_all))
    {
        if (!(var.flags & F_LAX))
        {
            const s_TokenIdx& token = SolvedNodeData_KIpwZvpE(GET_EiJMwamT(t, _scope, module, ctx).solved, _current_fnort, _here, ctx, module, _scope).token;

            {
                s_Warning& a = grow_if_oob_HceKJI4D(_warnings, SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index);
                if (!(a))
                    a = s_Warning { s_TokenIdx(token), (((("Unused variable: "_fu + qBAD_HIwg52Ja(var.name)) + ": make it "_fu) + qKW_HIwg52Ja("lax"_fu)) + " if this is intentional."_fu) };

            };
        };
        GET_mut_LT5T09Vv(t, _scope, module).flags |= F_UNUSED;
    };
    s_Overload& o = GET_mut_LT5T09Vv(t, _scope, module);
    try_relax_YMk72lGd(o.type, usage, int(relax_mask));

    {
        const s_SolvedNode node { GET_EiJMwamT(t, _scope, module, ctx).solved };
        if (!(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type))
            BUG_patsWWTe("relaxBlockVar: !var.solved.type, can`t propagateType"_fu, _here, ctx);

        try_relax_YMk72lGd(MUT_mMNEzOPJ(node, _current_fnort, _here, ctx, module, _scope).type, usage, int(relax_mask));
        const s_SolvedNode init { (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items ? SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL)) };
        if (init)
        {
            propagateType_NNuUomCa(init, s_Type(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type), relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
            if (is_ref_ceGfLbqY(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type) && !(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).flags & F_ARG))
                MUT_mMNEzOPJ(node, _current_fnort, _here, ctx, module, _scope).type.lifetime = SolvedNodeData_KIpwZvpE(init, _current_fnort, _here, ctx, module, _scope).type.lifetime;

        };
    };
    s_Overload& o_1 = GET_mut_LT5T09Vv(t, _scope, module);
    if (o_1.flags & F_MUT)
    {
        if (is_mutref_ceGfLbqY(usage, _here, ctx))
        {
            const s_SolvedNode& node = GET_EiJMwamT(t, _scope, module, ctx).solved;
            s_Type type = clear_refs_ceGfLbqY(s_Type(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type));
            MUT_mMNEzOPJ(node, _current_fnort, _here, ctx, module, _scope).type = type;
        }
        else
            o_1.flags &= ~F_MUT;

    };
    s_Overload& o_2 = GET_mut_LT5T09Vv(t, _scope, module);
    if (o_2.flags & F_RELAXABLE_REF)
    {
        const int strip = (F_RELAXABLE_REF | (!is_mutref_ceGfLbqY(usage, _here, ctx) ? F_REF : (*(const int*)fu::NIL)));
        o_2.flags &= ~strip;
        MUT_mMNEzOPJ(GET_EiJMwamT(t, _scope, module, ctx).solved, _current_fnort, _here, ctx, module, _scope).flags &= ~strip;
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

static bool isNested_pkcJzuBi(const s_Target& target, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return target.modid == -SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index;
}

                                #ifndef DEFt_grow_if_oob_h4z4Xr0k
                                #define DEFt_grow_if_oob_h4z4Xr0k
inline s_Type& grow_if_oob_h4z4Xr0k(fu_VEC<s_Type>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static bool TODO_FIX_has_g1N2qBc1(fu::view<s_Region> a, const s_Region& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}

static fu_STR mangleArguments_EqnpZe1p(fu::view<s_SolvedNode> args, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort)
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
            mangle += serializeType_4RxjLqQs(GET_EiJMwamT(last_fnMFgrK3(conversions[i]), _scope, module, ctx).type, "mangle.conv"_fu, _here, ctx);
        else if ((callsiteIndex >= 0) && (callsiteIndex <= args.size()))
            mangle += serializeType_4RxjLqQs(SolvedNodeData_KIpwZvpE(args[callsiteIndex], _current_fnort, _here, ctx, module, _scope).type, "mangle.no-conv"_fu, _here, ctx);

    };
    if (REST_START < REST_END)
    {
        if (REST_START)
            mangle += ","_fu;

        mangle += serializeType_4RxjLqQs(REST_TYPE, "mangle[Nodes].rest"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEFt_get_wuMhlyq0
                                #define DEFt_get_wuMhlyq0
inline const s_Target& get_wuMhlyq0(fu::view<fu_STR> keys, const fu_STR& item, fu::view<s_Target> extras)
{
    int N = keys.size();
    for (int i = 0; i < N; i++)
    {
        const fu_STR& k = keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                return extras[i];
            };
            N = i;
            break;
        };
    };
    return (*(const s_Target*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_get_6sI9JXul
                                #define DEFt_get_6sI9JXul
inline const s_Target& get_6sI9JXul(const s_Map_e04WMKmU& _, const fu_STR& key)
{
    return get_wuMhlyq0(_.keys, key, _.vals);
}
                                #endif

static s_Target trySpecialize_8DOXo9mU(const s_Target& overloadIdx, fu::view<s_SolvedNode> args, fu_STR& args_mangled, const int REST_START, const s_Type& REST_TYPE, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, s_Map_e04WMKmU& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{

    {
        if (!(args_mangled))
            args_mangled = mangleArguments_EqnpZe1p(args, reorder, use_reorder, conversions, REST_START, REST_TYPE, _scope, module, ctx, _here, _current_fnort);

    };
    fu_STR mangle = ((x7E(x7E(fu::i64dec(overloadIdx.modid), "#"_fu), fu::i64dec(overloadIdx.index)) + " "_fu) + args_mangled);
    s_Target _0 {};
    return (_0 = s_Target(get_6sI9JXul(_specs, mangle))) ? _0 : (_0 = doTrySpecialize_hGfr9hqq(s_Target{}, overloadIdx, args, fu_STR(mangle), reorder, use_reorder, conversions, REST_START, REST_TYPE, _current_fnort, _here, ctx, module, _scope, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string)) ? _0 : BUG_patsWWTe("doTrySpecialize returns empty target."_fu, _here, ctx);
}

                                #ifndef DEFt_if_first_C86YoIYx
                                #define DEFt_if_first_C86YoIYx
inline const s_Region& if_first_C86YoIYx(fu::view<s_Region> s)
{
    return s.size() ? s[0] : (*(const s_Region*)fu::NIL);
}
                                #endif

static s_Lifetime Lifetime_replaceArgsAtCallsite_fYTZlVjT(const s_Target& target, fu::view<s_SolvedNode> argNodes, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort)
{
    const fu_VEC<s_Region>& returned = GET_EiJMwamT(target, _scope, module, ctx).type.lifetime.uni0n;
    fu::view<s_Argument> host_args = EXT_qHy9RJpv(target, module, _scope, ctx).args;
    if (!Region_isArg_4X1iL0ll(if_first_C86YoIYx(returned)))
        return s_Lifetime { fu_VEC<s_Region>(returned) };

    s_Lifetime keep {};
    s_Lifetime replace {};
    int offset = host_args.size();
    for (int i = 0; i < returned.size(); i++)
    { {
        const s_Region& region = returned[i];
        if (Region_isStatic_4X1iL0ll(region))
        {
            keep.uni0n += s_Region(region);
            continue;
        };
        if (!(Region_isArg_4X1iL0ll(region)))
            BUG_patsWWTe(x7E("Not an argument region: "_fu, fu::i64dec(region.index)), _here, ctx);

        const int index = Region_toArgIndex_4X1iL0ll(region);
        while (offset--)
        {
            const int here = host_args[offset].local;
            if (here == index)
            {
                const s_SolvedNode& argNode = argNodes[offset];
                const s_Lifetime* _0;
                s_Lifetime argLt = (is_ref_ceGfLbqY(SolvedNodeData_KIpwZvpE(argNode, _current_fnort, _here, ctx, module, _scope).type) ? s_Lifetime((*(_0 = &(SolvedNodeData_KIpwZvpE(argNode, _current_fnort, _here, ctx, module, _scope).type.lifetime)) ? *_0 : BUG_patsWWTe("refarg without lifetime"_fu, _here, ctx))) : Lifetime_temporary_8nlJDPX0());
                replace = Lifetime_union_yRJeU5dj(replace, argLt);
                goto BL_3;
            };
            if (!(!here || (here > index)))
                BUG_patsWWTe("Nope, going backwards."_fu, _here, ctx);

        };
        BUG_patsWWTe(x7E("Could not find argument region: "_fu, fu::i64dec(index)), _here, ctx);
      } BL_3:;
    };
    return Lifetime_union_yRJeU5dj(keep, replace);
}

static bool isRTL_CVJAIn2I(const s_Overload& o)
{
    return !!(o.flags & F_OOE_RTL);
}

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static const s_SolvedNode& post_2lq9uT3c(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[LOOP_POST];
}

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 3;
                                #endif

static const s_SolvedNode& post_cond_enhzf1Tp(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[LOOP_POST_COND];
}

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 2;
                                #endif

static const s_SolvedNode& body_mSS6XNoz(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[LOOP_BODY];
}

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline constexpr int LOOP_COND = 1;
                                #endif

static const s_SolvedNode& pre_cond_ucL6taAW(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[LOOP_COND];
}

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

static const s_SolvedNode& init_w8qanrJg(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[LOOP_INIT];
}

static const s_SolvedNode& recover_ToTf6qoN(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[2];
}

static const s_SolvedNode& error_WZ5lDHbB(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[1];
}

static const s_SolvedNode& attempt_r8vTnfYr(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[0];
}

static void propagateType_NNuUomCa(const s_SolvedNode& node, const s_Type& slot, const int relax_mask, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Target& _current_fn_or_type, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_STR k { SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind };
    if ((k == "let"_fu) || (k == "letdef"_fu))
    {
        if (!SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).target)
            return;

        return relaxBlockVar_kYsNupTY(s_Target(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).target), relax_mask, _scope, module, ctx, _current_fn, _current_fnort, _here, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    };
    const s_TokenIdx here0 { _here };
    _here = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).token;
    fu_DEFER(_here = here0);
    try_relax_YMk72lGd(MUT_mMNEzOPJ(node, _current_fnort, _here, ctx, module, _scope).type, slot, int(relax_mask));
    s_Type slot_1 { SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type };
    const int LAST = (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size() - 1);
    if (k == "and"_fu)
    {
        s_Type rest { ((is_mutref_ceGfLbqY(slot_1, _here, ctx) && CANNOT_definit_mutrefs) ? slot_1 : t_bool) };
        for (int i = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size(); i-- > 0; )
            propagateType_NNuUomCa(s_SolvedNode(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[i]), s_Type(((i == LAST) ? slot_1 : rest)), relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    }
    else if (k == "or"_fu)
    {
        for (int i = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size(); i-- > 0; )
            propagateType_NNuUomCa(s_SolvedNode(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[i]), slot_1, relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    }
    else if (k == "if"_fu)
    {
        for (int i = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size(); i-- > 0; )
            propagateType_NNuUomCa(s_SolvedNode(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[i]), ((i != 0) ? slot_1 : t_bool), relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    }
    else if (k == "call"_fu)
    {
        const s_Target t { SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).target };
        if (GET_EiJMwamT(t, _scope, module, ctx).kind == "field"_fu)
            return propagateType_NNuUomCa(s_SolvedNode(only_SBGwWDq5(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items)), slot_1, relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

        if (GET_EiJMwamT(t, _scope, module, ctx).kind == "var"_fu)
        {
            if (isNested_pkcJzuBi(t, _current_fn, _current_fnort, _here, ctx, module, _scope))
            {
                s_Type& usage = grow_if_oob_h4z4Xr0k(_current_fn.var_usage, t.index);
                if (!usage)
                    usage = slot_1;
                else
                {
                    s_Type _0 {};
                    usage = ((_0 = type_tryIntersect_lKMokzZR(usage, slot_1)) ? static_cast<s_Type&&>(_0) : fail_2n2GzXhw((((((qWHAT_5LWmus20(GET_EiJMwamT(t, _scope, module, ctx), module, _scope, ctx) + ": Usage intersection failure: `"_fu) + humanizeType_YKN1kOGX(usage, module, ctx)) + "` & `"_fu) + humanizeType_YKN1kOGX(slot_1, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module));
                };
            };
            return;
        };
        if (EXT_qHy9RJpv(t, module, _scope, ctx).spec_of && is_ref_ceGfLbqY(GET_EiJMwamT(t, _scope, module, ctx).type))
        {
            fu_VEC<s_SolvedNode> relaxed {};
            for (int i = 0; i < SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size(); i++)
            {
                const s_SolvedNode orig { SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[i] };
                if (TODO_FIX_has_g1N2qBc1(GET_EiJMwamT(t, _scope, module, ctx).type.lifetime.uni0n, Region_fromArgIndex_BaKYka79(EXT_qHy9RJpv(t, module, _scope, ctx).args[i].local)))
                {
                    s_Type type { SolvedNodeData_KIpwZvpE(orig, _current_fnort, _here, ctx, module, _scope).type };
                    if (try_relax_YMk72lGd(type, slot_1, int(relax_mask)))
                    {
                        if (!relaxed)
                            relaxed = fu::slice(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items, 0, i);

                        relaxed += SolvedNode_HaPiTdVO("__relaxed"_fu, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
                        continue;
                    };
                };
                if (relaxed)
                    relaxed += s_SolvedNode(orig);

            };
            if (relaxed)
            {
                fu_STR args_mangled {};
                const s_Target spec = trySpecialize_8DOXo9mU(s_Target(EXT_qHy9RJpv(t, module, _scope, ctx).spec_of), relaxed, args_mangled, relaxed.size(), (*(const s_Type*)fu::NIL), fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx, _here, _current_fnort, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
                if (!is_SPECFAIL_af5x8gdk(spec) && !(spec == t))
                {
                    checkAssignable_bkgTcirN(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type, GET_EiJMwamT(spec, _scope, module, ctx).type, "Relaxed specialization does not return a subtype"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, module, _helpers, _helpers_data, _scope);
                    if (is_ref_ceGfLbqY(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type))
                        MUT_mMNEzOPJ(node, _current_fnort, _here, ctx, module, _scope).type.lifetime = Lifetime_test_J4SMmTB5(Lifetime_replaceArgsAtCallsite_fYTZlVjT(spec, relaxed, _scope, module, ctx, _here, _current_fnort), true, _current_fn, _current_fnort, _here, ctx, module, _scope);

                    MUT_mMNEzOPJ(node, _current_fnort, _here, ctx, module, _scope).target = spec;
                    makeNote_kDWiwp14(N_RelaxRespec, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                };
            };
        };
        if (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items)
        {
            fu_VEC<s_Argument> host_args { EXT_qHy9RJpv(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).target, module, _scope, ctx).args };
            const bool rtl = isRTL_CVJAIn2I(GET_EiJMwamT(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).target, _scope, module, ctx));
            const int N = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size();
            const int start = (rtl ? 0 : (N - 1));
            const int end = (rtl ? int(N) : (0 - 1));
            const int incr = (rtl ? +1 : -1);
            for (int i = start; i != end; i += incr)
                propagateType_NNuUomCa(s_SolvedNode(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[i]), s_Type(host_args[i].type), relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

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
        propagateType_NNuUomCa(s_SolvedNode(only_SBGwWDq5(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items)), ((k == "copy"_fu) ? make_copyable_ceGfLbqY(s_Type(slot_1)) : s_Type(slot_1)), relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        if (!(is_ref_ceGfLbqY(SolvedNodeData_KIpwZvpE(only_SBGwWDq5(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items), _current_fnort, _here, ctx, module, _scope).type)))
            fail_2n2GzXhw("TODO: Relaxed a copy/move to a value, no point in keeping the outer node."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    }
    else if (k == "arrlit"_fu)
    {
        s_Type itemSlot = clear_sliceable_ceGfLbqY(slot_1, _here, ctx);
        for (int i = 0; i < SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size(); i++)
            propagateType_NNuUomCa(s_SolvedNode(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[i]), itemSlot, relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    }
    else if (k == "argid"_fu)
        propagateType_NNuUomCa(s_SolvedNode(only_SBGwWDq5(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items)), slot_1, relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    else if (k == "jump"_fu)
    {
        const s_Helpers h = s_Helpers { int(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).helpers) };
        if (!(((void)void(), _helpers_data[h.index]).ret_actual))
            fail_2n2GzXhw("propagateType(jump): h.ret_actual not available."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        propagateType_NNuUomCa(s_SolvedNode(only_SBGwWDq5(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items)), s_Type(((void)void(), _helpers_data[h.index]).ret_actual), relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    }
    else if (k == "block"_fu)
    {
        const s_Helpers h = s_Helpers { int(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).helpers) };
        try_relax_YMk72lGd(((void)void(), _helpers_data.mutref(h.index)).ret_actual, slot_1, int(relax_mask));
        bool isLast = true;
        for (int i = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size(); i-- > 0; )
        {
            const s_SolvedNode& node_1 = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[i];
            const s_SolvedNode node_2 { ((SolvedNodeData_KIpwZvpE(node_1, _current_fnort, _here, ctx, module, _scope).kind == "defer"_fu) ? only_SBGwWDq5(SolvedNodeData_KIpwZvpE(node_1, _current_fnort, _here, ctx, module, _scope).items) : node_1) };
            propagateType_NNuUomCa(node_2, (isLast ? ((void)(isLast = false), slot_1) : t_void), relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        };
        if (((void)void(), _helpers_data[h.index]).target == SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target)
        {
            fu_VEC<s_SolvedNode> sig { SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).items };
            for (int i_1 = (sig.size() + FN_ARGS_BACK); i_1-- > 0; )
            {
                const s_Target t { SolvedNodeData_KIpwZvpE(sig[i_1], _current_fnort, _here, ctx, module, _scope).target };
                if (t && (GET_EiJMwamT(t, _scope, module, ctx).flags & F_ARG))
                    relaxBlockVar_kYsNupTY(t, relax_mask, _scope, module, ctx, _current_fn, _current_fnort, _here, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

            };
        };
    }
    else if (k == "loop"_fu)
    {
        if (post_2lq9uT3c(node, _current_fnort, _here, ctx, module, _scope))
            propagateType_NNuUomCa(s_SolvedNode(post_2lq9uT3c(node, _current_fnort, _here, ctx, module, _scope)), t_void, relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

        if (post_cond_enhzf1Tp(node, _current_fnort, _here, ctx, module, _scope))
            propagateType_NNuUomCa(s_SolvedNode(post_cond_enhzf1Tp(node, _current_fnort, _here, ctx, module, _scope)), t_bool, relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

        if (body_mSS6XNoz(node, _current_fnort, _here, ctx, module, _scope))
            propagateType_NNuUomCa(s_SolvedNode(body_mSS6XNoz(node, _current_fnort, _here, ctx, module, _scope)), t_void, relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

        if (pre_cond_ucL6taAW(node, _current_fnort, _here, ctx, module, _scope))
            propagateType_NNuUomCa(s_SolvedNode(pre_cond_ucL6taAW(node, _current_fnort, _here, ctx, module, _scope)), t_bool, relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

        if (init_w8qanrJg(node, _current_fnort, _here, ctx, module, _scope))
            propagateType_NNuUomCa(s_SolvedNode(init_w8qanrJg(node, _current_fnort, _here, ctx, module, _scope)), t_void, relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    }
    else if (k == "try"_fu)
    {
        propagateType_NNuUomCa(s_SolvedNode(recover_ToTf6qoN(node, _current_fnort, _here, ctx, module, _scope)), t_void, relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        propagateType_NNuUomCa(s_SolvedNode(error_WZ5lDHbB(node, _current_fnort, _here, ctx, module, _scope)), t_string, relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        propagateType_NNuUomCa(s_SolvedNode(attempt_r8vTnfYr(node, _current_fnort, _here, ctx, module, _scope)), t_void, relax_mask, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    }
    else if (k == "root"_fu)
    {
    }
    else
        fail_2n2GzXhw((("TODO: propagateType("_fu + k) + ")."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

}

                                #ifndef DEFt_grow_oob_msuOMRke
                                #define DEFt_grow_oob_msuOMRke
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

                                #ifndef DEFt_if_first_b7LsY63y
                                #define DEFt_if_first_b7LsY63y
inline const s_Region& if_first_b7LsY63y(fu::view<s_Region> s)
{
    return s.size() ? s[0] : (*(const s_Region*)fu::NIL);
}
                                #endif

static s_Lifetime Lifetime_unwind_noStatic_gAqFZtw9(s_Lifetime&& lifetime, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    if (Region_isStatic_4X1iL0ll(if_first_b7LsY63y(lifetime.uni0n)))
        lifetime.uni0n.shift();

    return Lifetime_unwind_S617ISHL(s_Lifetime(lifetime), 0, _current_fn, _current_fnort, _here, ctx, module, _scope);
}

                                #ifndef DEFt_grow_if_oob_eq5Lu6Hw
                                #define DEFt_grow_if_oob_eq5Lu6Hw
inline fu_VEC<int>& grow_if_oob_eq5Lu6Hw(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_add_Ze6DW20r
                                #define DEFt_add_Ze6DW20r
inline bool add_Ze6DW20r(fu_VEC<int>& keys, const int item)
{
    int N = keys.size();
    for (int i = 0; i < N; i++)
    {
        const int k = keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                return false;
            };
            N = i;
            break;
        };
    };
    keys.insert(N, int(item));
    return true;
}
                                #endif

static bool BORROWCK_resolveByMutvar_NXqMlqfn(const int target, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    const s_Target t = nested_sb4Efe9H(target, _current_fn, _current_fnort, _here, ctx, module, _scope);
    s_Overload& o = GET_mut_LT5T09Vv(t, _scope, module);
    if ((o.flags & F_REF) || !is_rx_copy_ceGfLbqY(o.type))
        return false;

    if (is_mutref_ceGfLbqY(o.type, _here, ctx))
        BUG_patsWWTe(((qWHAT_5LWmus20(o, module, _scope, ctx) + ": Not F_REF but type.is_mutref"_fu) + " in BORROWCK_resolveByMutvar: is this a problem?"_fu), _here, ctx);

    if (!(o.kind == "var"_fu))
        BUG_patsWWTe("BORROWCK_resolveByMutvar: Not a variable."_fu, _here, ctx);

    if (!(o.type.lifetime.uni0n.size() == 1))
        BUG_patsWWTe("BORROWCK_resolveByMutvar: lt.len != 1"_fu, _here, ctx);

    if (!(o.flags & F_MUT))
    {
        o.flags |= F_MUT;
        s_Type t_let = clear_refs_ceGfLbqY(s_Type(o.type));
        MUT_mMNEzOPJ(GET_EiJMwamT(t, _scope, module, ctx).solved, _current_fnort, _here, ctx, module, _scope).type = t_let;
    };
    return true;
}

static bool BORROWCK_resolveByMutvar_bwdk3HFq(const s_Target& target, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    if (!(target.modid == -SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index))
        BUG_patsWWTe("Trying to mutvar a static."_fu, _here, ctx);

    return BORROWCK_resolveByMutvar_NXqMlqfn(target.index, _current_fn, _current_fnort, _here, ctx, module, _scope);
}

static bool acceptsTempCopies_dmFnRY5B(const s_Argument& arg)
{
    return !(arg.flags & (F_IMPLICIT | F_REF));
}

static s_SolvedNode createDefinit_8b8CqUUv(s_Type&& type, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    if (is_ref_ceGfLbqY(type))
        type.lifetime = Lifetime_static_8nlJDPX0();

    if (is_integral_KyrTVXnz(type))
        return SolvedNode_HaPiTdVO("int"_fu, type, 0, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);

    if (is_floating_pt_KyrTVXnz(type))
        return SolvedNode_HaPiTdVO("real"_fu, type, 0, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);

    return SolvedNode_HaPiTdVO("definit"_fu, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

                                #ifndef DEFt_first_3cih1E88
                                #define DEFt_first_3cih1E88
inline const s_SolvedNode& first_3cih1E88(fu::view<s_SolvedNode> s)
{
    return (s.size() ? s[0] : fu::fail("len == 0"_fu));
}
                                #endif

static void SWAP_hNtsr207(const s_SolvedNode& a, const s_SolvedNode& b, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    s_SolvedNodeData temp {};
    std::swap(MUT_mMNEzOPJ(a, _current_fnort, _here, ctx, module, _scope), temp);
    std::swap(MUT_mMNEzOPJ(b, _current_fnort, _here, ctx, module, _scope), temp);
    std::swap(MUT_mMNEzOPJ(a, _current_fnort, _here, ctx, module, _scope), temp);
}

static void definitWrap_qIGaGz0S(const s_SolvedNode& node, const s_Type& slot, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (is_mutref_ceGfLbqY(slot, _here, ctx) && CANNOT_definit_mutrefs)
        BUG_patsWWTe("Trying to definitWrap a mutref."_fu, _here, ctx);

    if (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind == "definit"_fu)
    {
        MUT_mMNEzOPJ(node, _current_fnort, _here, ctx, module, _scope).type = (is_ref_ceGfLbqY(slot) ? add_ref_UThBZuDl(clear_refs_ceGfLbqY(s_Type(slot)), Lifetime_static_8nlJDPX0(), _here, ctx) : s_Type(slot));
        return;
    };
    fu_VEC<s_SolvedNode> _0 {};
    const s_SolvedNode block = (_0 = fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { createEmpty_M9eYCmcR("__block_wrap_expr"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope), createDefinit_8b8CqUUv(s_Type(slot), _here, _current_fnort, _current_fn_or_type, module, _scope) } }, createBlock_XLQezDDx(slot, static_cast<fu_VEC<s_SolvedNode>&&>(_0), s_Helpers{}, _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data, _current_fn_or_type));
    SWAP_hNtsr207(node, s_SolvedNode(first_3cih1E88(SolvedNodeData_KIpwZvpE(block, _current_fnort, _here, ctx, module, _scope).items)), _current_fnort, _here, ctx, module, _scope);
    SWAP_hNtsr207(node, block, _current_fnort, _here, ctx, module, _scope);
}

                                #ifndef DEFt_if_last_C86YoIYx
                                #define DEFt_if_last_C86YoIYx
inline const s_Region& if_last_C86YoIYx(fu::view<s_Region> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_Region*)fu::NIL);
}
                                #endif

static int Lifetime_vs_luSRBHEP(const s_Lifetime& lifetime, const int locals_start)
{
    return ((Region_toLocalIndex_4X1iL0ll(if_first_C86YoIYx(lifetime.uni0n)) >= locals_start) ? +1 : ((Region_toLocalIndex_4X1iL0ll(if_last_C86YoIYx(lifetime.uni0n)) < locals_start) ? -1 : 0));
}

                                #ifndef DEF_F_MOVED_FROM
                                #define DEF_F_MOVED_FROM
inline constexpr int F_MOVED_FROM = (1 << 11);
                                #endif

inline static void Lifetime_each_Taf6gats(const s_Lifetime& lifetime, const int locals_start, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;

        if (Region_isTemp_4X1iL0ll(r))
            continue;

        s_Overload& o = GET_mut_LT5T09Vv(nested_sb4Efe9H(Region_toLocalIndex_4X1iL0ll(r), _current_fn, _current_fnort, _here, ctx, module, _scope), _scope, module);
        if (o.flags & F_MOVED_FROM)
            continue;

        o.flags |= F_MOVED_FROM;
        const s_Type& init = Lifetime_climbType_D5x6tF2p(o, module, _scope, ctx, _here, _current_fnort);
        if (is_ref_ceGfLbqY(init))
            Lifetime_F_MOVED_FROM_LlFJpWpZ(s_Lifetime(init.lifetime), _current_fn, _current_fnort, _here, ctx, module, _scope);

    };
}

static void Lifetime_F_MOVED_FROM_LlFJpWpZ(const s_Lifetime& lifetime, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    Lifetime_each_Taf6gats(lifetime, 0, _current_fn, _current_fnort, _here, ctx, module, _scope);
}

static s_SolvedNode createMove_Xd9AGUxw(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, const s_CurrentFn& _current_fn, const s_Target& _current_fn_or_type)
{
    Lifetime_F_MOVED_FROM_LlFJpWpZ(s_Lifetime(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type.lifetime), _current_fn, _current_fnort, _here, ctx, module, _scope);
    return SolvedNode_HaPiTdVO("move"_fu, clear_refs_ceGfLbqY(s_Type(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type)), 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createCopy_rlChhuSG(const s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    if (!is_rx_copy_ceGfLbqY(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type))
        fail_2n2GzXhw(("Needs an explicit STEAL or CLONE: "_fu + humanizeType_YKN1kOGX(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!is_trivial_qcjLQIhC(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type, module, ctx))
    {
        if (!(USE_nontriv_autocopy))
            fail_2n2GzXhw("Non-trivial implicit copy."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        makeNote_kDWiwp14(N_NonTrivAutoCopy, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    };
    return SolvedNode_HaPiTdVO("copy"_fu, clear_refs_ceGfLbqY(s_Type(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type)), 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

                                #ifndef DEFt_only_J6Omw3QM
                                #define DEFt_only_J6Omw3QM
inline s_SolvedNode& only_J6Omw3QM(fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static void maybeCopyOrMove_wEmNIwKP(const s_SolvedNode& node, const s_Type& slot, const bool isArgument, const bool isReturn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_CurrentFn& _current_fn, const s_Options& options, int& _notes)
{
    if ((slot.vtype.canon != SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type.vtype.canon) && !is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type))
    {
        if (is_zeroes_ceGfLbqY(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type) && !(is_mutref_ceGfLbqY(slot, _here, ctx) ? CANNOT_definit_mutrefs : (*(const bool*)fu::NIL)))
        {
            definitWrap_qIGaGz0S(node, slot, _here, ctx, _current_fnort, module, _scope, _current_fn_or_type, _helpers, _helpers_data);
            return;
        }
        else
            BUG_patsWWTe(((("Considering copy or move for incompatible types: "_fu + humanizeType_YKN1kOGX(slot, module, ctx)) + " <- "_fu) + humanizeType_YKN1kOGX(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type, module, ctx)), _here, ctx);

    };
    if (is_ref_ceGfLbqY(slot))
    {
        if (is_trivial_qcjLQIhC(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type, module, ctx))
        {
            if ((SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind == "definit"_fu) && isArgument)
                MUT_mMNEzOPJ(node, _current_fnort, _here, ctx, module, _scope).type = clear_refs_ceGfLbqY(s_Type(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type));

        };
        return;
    };
    if (!is_ref_ceGfLbqY(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type))
        return;

    if (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind == "definit"_fu)
    {
        MUT_mMNEzOPJ(node, _current_fnort, _here, ctx, module, _scope).type = clear_refs_ceGfLbqY(s_Type(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type));
        return;
    };
    if (is_zeroes_ceGfLbqY(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type))
    {
        definitWrap_qIGaGz0S(node, slot, _here, ctx, _current_fnort, module, _scope, _current_fn_or_type, _helpers, _helpers_data);
        return;
    };
    const bool canMove = (isReturn && (Lifetime_vs_luSRBHEP(Lifetime_unwind_S617ISHL(s_Lifetime(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type.lifetime), 0, _current_fn, _current_fnort, _here, ctx, module, _scope), 0) > 0));
    const s_SolvedNode newNode = (canMove ? createMove_Xd9AGUxw(node, _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type) : createCopy_rlChhuSG(node, _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data, options, _notes, _current_fn_or_type));
    s_SolvedNodeData temp {};
    s_SolvedNodeData& newNodeData = MUT_mMNEzOPJ(newNode, _current_fnort, _here, ctx, module, _scope);
    std::swap(temp, newNodeData);
    s_SolvedNodeData& oldNodeData = MUT_mMNEzOPJ(node, _current_fnort, _here, ctx, module, _scope);
    std::swap(temp, oldNodeData);
    only_J6Omw3QM(oldNodeData.items) = newNode;
    s_SolvedNodeData& newNodeData_1 = MUT_mMNEzOPJ(newNode, _current_fnort, _here, ctx, module, _scope);
    std::swap(temp, newNodeData_1);
}

static void BORROWCK_resolveByTempCopy_Wq4O8hT4(const s_SolvedNode& node, const s_Type& slot, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_CurrentFn& _current_fn, const s_Options& options, int& _notes)
{
    s_Type slot_1 = make_copyable_ceGfLbqY(clear_refs_ceGfLbqY(s_Type(slot)));
    maybeCopyOrMove_wEmNIwKP(node, slot_1, false, false, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _helpers, _helpers_data, _current_fn, options, _notes);
}

static void BORROWCK_resolveByTempCopy_axvczN41(const s_SolvedNode& callsite, const int idx, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_CurrentFn& _current_fn, const s_Options& options, int& _notes)
{
    fu::view<s_Argument> host_args = EXT_qHy9RJpv(SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).target, module, _scope, ctx).args;
    BORROWCK_resolveByTempCopy_Wq4O8hT4(s_SolvedNode(SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).items[idx]), host_args[idx].type, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _helpers, _helpers_data, _current_fn, options, _notes);
}

                                #ifndef DEF_DEV_DisableBCK
                                #define DEF_DEV_DisableBCK
inline constexpr unsigned DEV_DisableBCK = (0x1u << 0u);
                                #endif

static void validate_UV2T72oc(const int i, const s_Argument& host_arg, fu::view<s_Lifetime> bck_unwound, const int i0, const int arg_first, const int arg_last, const s_Lifetime& unwound, s_CurrentFn& _current_fn, fu::view<s_Argument> host_args, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_SolvedNode> args, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Target& target, const s_SolvedNode& callsite, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    if (has_CoC0247n(host_arg.risk_free, i))
        return;

    const s_Lifetime& unwound1 = bck_unwound[i];
    if ((i0 >= arg_first) && (i0 <= arg_last) && (i >= arg_first) && (i <= arg_last))
    {
        for (int i_1 = 0; i_1 < unwound.uni0n.size(); i_1++)
        {
            const int arg0 = Region_asArgIndex_4X1iL0ll(unwound.uni0n[i_1]);
            if (arg0 > 0)
            {
                for (int i_2 = 0; i_2 < unwound1.uni0n.size(); i_2++)
                {
                    const int arg1 = Region_asArgIndex_4X1iL0ll(unwound1.uni0n[i_2]);
                    if ((arg1 > 0) && (arg1 < arg0))
                        add_Ze6DW20r(grow_if_oob_eq5Lu6Hw(_current_fn.flow.args_at_risk, arg0), arg1);

                };
            };
        };
    };
    s_Lifetime inter = Lifetime_inter_yRJeU5dj(unwound, unwound1);
    if (!inter)
        return;

    const s_Argument& other = host_args[i];

    {
        int which = -1;
        if (!is_mutref_ceGfLbqY(host_arg.type, _here, ctx))
            which = i0;
        else if (!is_mutref_ceGfLbqY(other.type, _here, ctx))
            which = i;

        if ((which >= 0))
        {
            const s_SolvedNode& arg = args[which];
            if (is_rx_copy_ceGfLbqY(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).type))
            {
                if ((SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).kind == "call"_fu) && (GET_EiJMwamT(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).target, _scope, module, ctx).kind == "var"_fu) && !is_mutref_ceGfLbqY(GET_EiJMwamT(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).target, _scope, module, ctx).type, _here, ctx))
                {
                    if (BORROWCK_resolveByMutvar_bwdk3HFq(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).target, _current_fn, _current_fnort, _here, ctx, module, _scope))
                        return;

                };
                if (acceptsTempCopies_dmFnRY5B(host_args[which]))
                {
                    const int argLocalIdx = EXT_qHy9RJpv(target, module, _scope, ctx).args[which].local;
                    const s_Region argLt = Region_fromArgIndex_BaKYka79(argLocalIdx);
                    const bool isReturned = has_pGNNepfS(GET_EiJMwamT(target, _scope, module, ctx).type.lifetime.uni0n, argLt);
                    if (!isReturned)
                        return BORROWCK_resolveByTempCopy_axvczN41(callsite, which, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _helpers, _helpers_data, _current_fn, options, _notes);

                };
            };
        };
    };
    if (!(options.dev & DEV_DisableBCK))
    {
        fu_STR err = qWHAT_5LWmus20(GET_EiJMwamT(target, _scope, module, ctx), module, _scope, ctx);
        err += (((host_args.size() == 2) && (GET_EiJMwamT(target, _scope, module, ctx).flags & F_OPERATOR)) ? ": Both operands alias:\n"_fu : (x7E((x7E(((((": Arguments "_fu + qBAD_HIwg52Ja(human_iY2blCZM(host_args[i0].name, module, _scope, ctx))) + " and "_fu) + qBAD_HIwg52Ja(human_iY2blCZM(host_args[i].name, module, _scope, ctx))) + " (args #"_fu), fu::i64dec(i0)) + " and #"_fu), fu::i64dec(i)) + ") both alias:\n"_fu));
        for (int i_1 = 0; i_1 < inter.uni0n.size(); i_1++)
        {
            const s_Region& o = inter.uni0n[i_1];
            err += "\n                "_fu;
            err += qWHAT_5LWmus20(Region_GET_xySyDzrS(o, _current_fn, _current_fnort, _here, ctx, module, _scope), module, _scope, ctx);
        };
        fail_2n2GzXhw(fu_STR(err), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

                                #ifndef DEFt_add_3RR8VMNE
                                #define DEFt_add_3RR8VMNE
inline void add_3RR8VMNE(fu_VEC<s_Region>& a, fu::view<s_Region> b, fu_VEC<int>& extras, const int extra)
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

static s_Flow& flow_GuOB76kF(s_CurrentFn& _current_fn)
{
    return _current_fn.flow;
}

                                #ifndef DEFt_unless_oob_0EYwFJPW
                                #define DEFt_unless_oob_0EYwFJPW
inline const fu_VEC<int>& unless_oob_0EYwFJPW(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

static s_Events& events_dyOrTtLp(s_CurrentFn& _current_fn)
{
    return _current_fn.events;
}

                                #ifndef DEFt_unless_oob_o90d79Px
                                #define DEFt_unless_oob_o90d79Px
inline const s_ReadID& unless_oob_o90d79Px(fu::view<s_ReadID> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_ReadID*)fu::NIL);
}
                                #endif

static fu_STR bck_name_Q7JPSOtM(const int target, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return human_iY2blCZM(GET_EiJMwamT(nested_sb4Efe9H(target, _current_fn, _current_fnort, _here, ctx, module, _scope), _scope, module, ctx).name, module, _scope, ctx);
}

inline static const s_SolvedNodeData& SLOW_find_nbqxqf7v(const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope, const s_ReadID& read)
{
    fu::view<s_SolvedNodeData> nodes = EXT_qHy9RJpv(SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target, module, _scope, ctx).nodes;
    for (int i = 0; i < nodes.size(); i++)
    { {
        const s_SolvedNodeData& node = nodes[i];
        if (((void)void(), ((node.rwr.reads0 < read.id) && (node.rwr.reads1 >= read.id))))
        {
            fu::view<s_SolvedNode> items = node.items;
            for (int i_1 = 0; i_1 < items.size(); i_1++)
            {
                bool BL_6_v {};
                if ((__extension__ (
                {
                    const s_SolvedNode& node_1 = items[i_1];
                    BL_6_v = (((SolvedNodeData_KIpwZvpE(node_1, _current_fnort, _here, ctx, module, _scope).rwr.reads0 < read.id) && (SolvedNodeData_KIpwZvpE(node_1, _current_fnort, _here, ctx, module, _scope).rwr.reads1 >= read.id)));
                (void)0;}), bool(BL_6_v)))
                    goto BL_2;

            };
            return node;
        };
      } BL_2:;
    };
    BUG_patsWWTe((x7E("Cannot find ReadID("_fu, fu::i64dec(read.id)) + ")."_fu), _here, ctx);
}

static const s_SolvedNodeData& SLOW_findByReadID_WJQyHBGe(const s_ReadID& read, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return SLOW_find_nbqxqf7v(_current_fn, _current_fnort, _here, ctx, module, _scope, read);
}

                                #ifndef DEFt_grow_if_oob_6XOWTI6t
                                #define DEFt_grow_if_oob_6XOWTI6t
inline s_WriteID& grow_if_oob_6XOWTI6t(fu_VEC<s_WriteID>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_grow_if_oob_qOlBkKup
                                #define DEFt_grow_if_oob_qOlBkKup
inline fu_VEC<int>& grow_if_oob_qOlBkKup(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void bck_trackWrites_qVBw1m0z(const s_SolvedNode& callsite, fu::view<s_Region> regions, fu::view<int> positions, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, const s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    _here = SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).token;
    const int loop_start = _current_fn.loop_start;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target = Region_asIndex_4X1iL0ll(regions[i]);
        if (!target)
            continue;

        const int position = positions[i];
        fu_VEC<int> invalidates { unless_oob_0EYwFJPW(flow_GuOB76kF(_current_fn).invalidates, target) };
        for (int i_1 = 0; i_1 < invalidates.size(); i_1++)
        {
            const int other = invalidates[i_1];
            const s_ReadID& readID = unless_oob_o90d79Px(events_dyOrTtLp(_current_fn).used_in_a_loop, other);
            if (readID)
            {
                if (!(BORROWCK_resolveByMutvar_NXqMlqfn(other, _current_fn, _current_fnort, _here, ctx, module, _scope) || (options.dev & DEV_DisableBCK)))
                {
                    fu_STR _0 {};
                    fu_STR _1 {};
                    (_1 = (_0 = (((((((("Write to "_fu + qBAD_HIwg52Ja(bck_name_Q7JPSOtM(target, _current_fn, _current_fnort, _here, ctx, module, _scope))) + " at call to "_fu) + qWHAT_5LWmus20(GET_EiJMwamT(SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).target, _scope, module, ctx), module, _scope, ctx)) + " invalidates the use of "_fu) + qBAD_HIwg52Ja(bck_name_Q7JPSOtM(other, _current_fn, _current_fnort, _here, ctx, module, _scope))) + " at "_fu) + addr_and_snippet_Pptk1rIT(SLOW_findByReadID_WJQyHBGe(readID, _current_fn, _current_fnort, _here, ctx, module, _scope).token, ctx, module)) + "\n\t... on next loop iteration.\n\n\tWritten"_fu), (static_cast<fu_STR&&>(_0) + qSTACK_HNuH0RuB(s_Target(SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).target), position, fu::view<s_Target>{}, module, _scope, ctx, _here, _current_fn))), fail_2n2GzXhw(static_cast<fu_STR&&>(_1), _here, ctx, _helpers, _helpers_data, _scope, module));
                };
            };
        };
        events_dyOrTtLp(_current_fn).writes += s_RWEvent { int(target) };
        const s_WriteID writeID = s_WriteID { events_dyOrTtLp(_current_fn).writes.size() };
        for (int i_2 = 0; i_2 < invalidates.size(); i_2++)
        {
            s_WriteID& a = grow_if_oob_6XOWTI6t(events_dyOrTtLp(_current_fn).snap.invalidated_by, invalidates[i_2]);
            if (!(a))
                a = writeID;

        };
        if (has_CoC0247n(flow_GuOB76kF(_current_fn).is_arg, target))
        {
            add_Ze6DW20r(events_dyOrTtLp(_current_fn).snap.args_written, target);
            add_yDyCXbrU(events_dyOrTtLp(_current_fn).args_ever_written, target);
            if (loop_start)
            {
                for (int i_3 = 0; i_3 < events_dyOrTtLp(_current_fn).args_in_a_loop.size(); i_3++)
                    add_Ze6DW20r(grow_if_oob_qOlBkKup(flow_GuOB76kF(_current_fn).args_at_risk, int(events_dyOrTtLp(_current_fn).args_in_a_loop[i_3])), target);

            };
        };
    };
}

static s_RWEvent& RWEvent_3XVM9gta(const s_WriteID& write, s_CurrentFn& _current_fn)
{
    return _current_fn.events.writes.mutref((write.id - 1));
}

                                #ifndef DEFt_unless_oob_4Cjh8wBB
                                #define DEFt_unless_oob_4Cjh8wBB
inline const fu_VEC<int>& unless_oob_4Cjh8wBB(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_add_PY7CTxG3
                                #define DEFt_add_PY7CTxG3
inline void add_PY7CTxG3(fu_VEC<s_Region>& a, fu::view<s_Region> b)
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

                                #ifndef DEFt_keep_jcc1cpbK
                                #define DEFt_keep_jcc1cpbK
inline fu_VEC<s_Region>& keep_jcc1cpbK(fu_VEC<s_Region>& a, fu::view<s_Region> b)
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

                                #ifndef DEFt_inter_gfBRuoGh
                                #define DEFt_inter_gfBRuoGh
inline fu_VEC<s_Region> inter_gfBRuoGh(const fu_VEC<s_Region>& a, const fu_VEC<s_Region>& b)
{
    if (a.size() > b.size())
        return inter_gfBRuoGh(b, a);

    /*MOV*/ fu_VEC<s_Region> a_1 { a };
    keep_jcc1cpbK(a_1, b);
    return /*NRVO*/ a_1;
}
                                #endif

                                #ifndef DEFt_first_C86YoIYx
                                #define DEFt_first_C86YoIYx
inline const s_Region& first_C86YoIYx(fu::view<s_Region> s)
{
    return (s.size() ? s[0] : fu::fail("len == 0"_fu));
}
                                #endif

inline static const s_SolvedNodeData& SLOW_find_eqBmBLP7(const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope, const s_WriteID& write)
{
    fu::view<s_SolvedNodeData> nodes = EXT_qHy9RJpv(SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target, module, _scope, ctx).nodes;
    for (int i = 0; i < nodes.size(); i++)
    { {
        const s_SolvedNodeData& node = nodes[i];
        if (((void)void(), ((node.rwr.writes0 < write.id) && (node.rwr.writes1 >= write.id))))
        {
            fu::view<s_SolvedNode> items = node.items;
            for (int i_1 = 0; i_1 < items.size(); i_1++)
            {
                bool BL_6_v {};
                if ((__extension__ (
                {
                    const s_SolvedNode& node_1 = items[i_1];
                    BL_6_v = (((SolvedNodeData_KIpwZvpE(node_1, _current_fnort, _here, ctx, module, _scope).rwr.writes0 < write.id) && (SolvedNodeData_KIpwZvpE(node_1, _current_fnort, _here, ctx, module, _scope).rwr.writes1 >= write.id)));
                (void)0;}), bool(BL_6_v)))
                    goto BL_2;

            };
            return node;
        };
      } BL_2:;
    };
    BUG_patsWWTe((x7E("Cannot find WriteID("_fu, fu::i64dec(write.id)) + ")."_fu), _here, ctx);
}

static const s_SolvedNodeData& SLOW_findByWriteID_SbVdF2pa(const s_WriteID& write, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    return SLOW_find_eqBmBLP7(_current_fn, _current_fnort, _here, ctx, module, _scope, write);
}

static fu_STR RWEvent_stack_4hX87jfi(const s_WriteID& write, s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    s_SolvedNodeData node { SLOW_findByWriteID_SbVdF2pa(write, _current_fn, _current_fnort, _here, ctx, module, _scope) };
    if (node.kind != "call"_fu)
        return "\n\tVia "_fu + qKW_HIwg52Ja(node.kind);

    fu_STR stack {};

    {
        int _0 {};
        fu_VEC<s_Region> uni0n { GET_EiJMwamT((_0 = RWEvent_3XVM9gta(write, _current_fn).rw_target, nested_sb4Efe9H(int(_0), _current_fn, _current_fnort, _here, ctx, module, _scope)), _scope, module, ctx).type.lifetime.uni0n };
        if (uni0n)
        {
            for (int i = 0; i < node.items.size(); i++)
            {
                const s_SolvedNode& arg = node.items[i];
                if (inter_gfBRuoGh(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).type.lifetime.uni0n, uni0n))
                {
                    const s_Argument& host_arg = EXT_qHy9RJpv(node.target, module, _scope, ctx).args[i];
                    if (host_arg.flags & F_WRITTEN_TO)
                    {
                        stack = qSTACK_HNuH0RuB(s_Target(node.target), i, fu::view<s_Target>{}, module, _scope, ctx, _here, _current_fn);
                        break;
                    };
                };
            };
        };
    };
    const s_Overload& o = GET_EiJMwamT(node.target, _scope, module, ctx);
    return ((addr_and_snippet_Pptk1rIT(node.token, ctx, module) + "\n\tAt call to "_fu) + qID_HIwg52Ja(o.name)) + stack;
}

                                #ifndef DEFt_add_imMSkaAH
                                #define DEFt_add_imMSkaAH
inline void add_imMSkaAH(fu_VEC<int>& a, fu::view<int> b)
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

                                #ifndef DEFt_grow_if_oob_bSwqUbOp
                                #define DEFt_grow_if_oob_bSwqUbOp
inline s_ReadID& grow_if_oob_bSwqUbOp(fu_VEC<s_ReadID>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void bck_trackRead_gPdIQ4bN(const s_SolvedNode& callsite, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (!is_ref_ceGfLbqY(SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).type) || !SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index)
        return;

    _here = SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).token;
    fu_VEC<s_Region> regions { SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).type.lifetime.uni0n };
    const int loop_start = _current_fn.loop_start;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target = Region_asIndex_4X1iL0ll(regions[i]);
        if (!target)
            continue;

        if (events_dyOrTtLp(_current_fn).snap.invalidated_by.size() > target)
        {
            const s_WriteID u { events_dyOrTtLp(_current_fn).snap.invalidated_by[target] };
            if (u)
            {
                if (!(BORROWCK_resolveByMutvar_NXqMlqfn(target, _current_fn, _current_fnort, _here, ctx, module, _scope) || (options.dev & DEV_DisableBCK)))
                {
                    fu_STR _0 {};
                    int _1 {};
                    fu_STR _2 {};
                    fu_STR _3 {};
                    (_3 = (_2 = ((_0 = (((("Cannot access"_fu + " "_fu) + qBAD_HIwg52Ja(bck_name_Q7JPSOtM(target, _current_fn, _current_fnort, _here, ctx, module, _scope))) + ", reference invalidated by write to"_fu) + " "_fu), (static_cast<fu_STR&&>(_0) + qBAD_HIwg52Ja((_1 = RWEvent_3XVM9gta(u, _current_fn).rw_target, bck_name_Q7JPSOtM(int(_1), _current_fn, _current_fnort, _here, ctx, module, _scope))))) + " at "_fu), (static_cast<fu_STR&&>(_2) + RWEvent_stack_4hX87jfi(u, _current_fn, _current_fnort, _here, ctx, module, _scope))), fail_2n2GzXhw(static_cast<fu_STR&&>(_3), _here, ctx, _helpers, _helpers_data, _scope, module));
                };
            };
        };
        if (events_dyOrTtLp(_current_fn).snap.args_written && has_CoC0247n(flow_GuOB76kF(_current_fn).is_arg, target))
        {
            fu_VEC<int>* _4;
            (_4 = &(grow_if_oob_eq5Lu6Hw(flow_GuOB76kF(_current_fn).args_at_risk, target)), add_imMSkaAH(*_4, fu_VEC<int>(events_dyOrTtLp(_current_fn).snap.args_written)));
        };
        events_dyOrTtLp(_current_fn).reads += s_RWEvent { int(target) };
        const s_ReadID readID = s_ReadID { events_dyOrTtLp(_current_fn).reads.size() };
        if (loop_start)
        {
            if (target < loop_start)
            {
                s_ReadID& a = grow_if_oob_bSwqUbOp(events_dyOrTtLp(_current_fn).used_in_a_loop, target);
                if (!(a))
                    a = readID;

            };
            if (has_CoC0247n(flow_GuOB76kF(_current_fn).is_arg, target))
                add_Ze6DW20r(events_dyOrTtLp(_current_fn).args_in_a_loop, target);

        };
    };
}

static void bck_call_BFMFLdCd(const s_SolvedNode& callsite, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    const s_Target target { SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).target };
    fu_VEC<s_SolvedNode> args { SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).items };
    if (args)
    {
        fu_VEC<s_Argument> host_args { EXT_qHy9RJpv(target, module, _scope, ctx).args };
        const int ooe_read0 = _current_fn.events.reads.size();
        const int ooe_write0 = _current_fn.events.writes.size();
        fu_VEC<int> ooe_reads {};
        fu_VEC<int> ooe_writes {};
        const bool ooe_isRTL = isRTL_CVJAIn2I(GET_EiJMwamT(target, _scope, module, ctx));
        const int ooe_START = (ooe_isRTL ? (args.size() - 1) : 0);

        {
            int ooe_read0_1 = ooe_read0;
            int ooe_write0_1 = ooe_write0;
            for (int ooe_i = 0; ooe_i < args.size(); ooe_i++)
            {
                bck_node_EJjZXPYZ(s_SolvedNode(args[(ooe_isRTL ? (ooe_START - ooe_i) : int(ooe_i))]), _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
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
        for (int i0 = 0; i0 < args.size(); i0++)
        {
            s_Argument host_arg { host_args[i0] };
            s_Type expect { host_arg.type };
            if (is_ref_ceGfLbqY(expect))
            {
                if (!bck_unwound)
                {
                    if ((mutref_first >= 0) || ((ref_first >= 0) && is_mutref_ceGfLbqY(expect, _here, ctx)))
                    {
                        bck_unwound.resize(args.size());
                        for (int i0_1 = ref_first; (i0_1 <= ref_last); i0_1++)
                        {
                            const s_Lifetime& unwound = (bck_unwound.mutref(i0_1) = Lifetime_unwind_noStatic_gAqFZtw9(s_Lifetime(SolvedNodeData_KIpwZvpE(args[i0_1], _current_fnort, _here, ctx, module, _scope).type.lifetime), _current_fn, _current_fnort, _here, ctx, module, _scope));
                            for (int i = 0; i < unwound.uni0n.size(); i++)
                            {
                                if (Region_asIndex_4X1iL0ll(unwound.uni0n[i]) > 0)
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
                    const s_Lifetime& unwound = (bck_unwound.mutref(i0) = Lifetime_unwind_noStatic_gAqFZtw9(s_Lifetime(SolvedNodeData_KIpwZvpE(args[i0], _current_fnort, _here, ctx, module, _scope).type.lifetime), _current_fn, _current_fnort, _here, ctx, module, _scope));
                    for (int i = 0; i < unwound.uni0n.size(); i++)
                    {
                        if (Region_asIndex_4X1iL0ll(unwound.uni0n[i]) > 0)
                        {
                            arg_first = ((arg_first < 0) ? i0 : arg_first);
                            arg_last = i0;
                            continue;
                        };
                    };
                    if (is_mutref_ceGfLbqY(expect, _here, ctx))
                    {
                        for (int i_1 = ref_first; (i_1 <= ref_last); i_1++)
                        {
                            if (is_ref_ceGfLbqY(host_args[i_1].type))
                                validate_UV2T72oc(i_1, host_arg, bck_unwound, i0, arg_first, arg_last, unwound, _current_fn, host_args, _here, ctx, args, _current_fnort, module, _scope, target, callsite, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

                        };
                    }
                    else if (bck_unwound)
                    {
                        for (int i_1 = mutref_first; (i_1 <= mutref_last); i_1++)
                        {
                            if (is_mutref_ceGfLbqY(host_args[i_1].type, _here, ctx))
                                validate_UV2T72oc(i_1, host_arg, bck_unwound, i0, arg_first, arg_last, unwound, _current_fn, host_args, _here, ctx, args, _current_fnort, module, _scope, target, callsite, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

                        };
                    };
                };

                {
                    if (ref_first < 0)
                        ref_first = i0;

                    ref_last = i0;
                };
                if (is_mutref_ceGfLbqY(expect, _here, ctx))
                {
                    if (mutref_first < 0)
                        mutref_first = i0;

                    mutref_last = i0;
                    if (host_arg.flags & F_WRITTEN_TO)
                    {
                        const s_SolvedNode& arg = args[i0];
                        if (!(is_mutref_ceGfLbqY(host_arg.type, _here, ctx)))
                            BUG_patsWWTe((qID_HIwg52Ja(human_iY2blCZM(host_arg.name, module, _scope, ctx)) + ": host_arg.written but !host_arg.is_mutref"_fu), _here, ctx);

                        if (!(is_mutref_ceGfLbqY(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).type, _here, ctx)))
                            BUG_patsWWTe((qID_HIwg52Ja(human_iY2blCZM(host_arg.name, module, _scope, ctx)) + ": host_arg.written but !arg.is_mutref"_fu), _here, ctx);

                        add_3RR8VMNE(bck_writes, SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).type.lifetime.uni0n, bck_positions, i0);
                    };
                };
            };
        };
        if (bck_writes)
        {
            if (!(bck_positions.size() == bck_writes.size()))
                BUG_patsWWTe("bck_position.len is off"_fu, _here, ctx);

            bck_trackWrites_qVBw1m0z(callsite, bck_writes, bck_positions, _here, _current_fnort, ctx, module, _scope, _current_fn, options, _helpers, _helpers_data);
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
                    const s_RWEvent& write = RWEvent_3XVM9gta(writeID, _current_fn);
                    fu_VEC<s_Region> written { GET_EiJMwamT(nested_sb4Efe9H(write.rw_target, _current_fn, _current_fnort, _here, ctx, module, _scope), _scope, module, ctx).type.lifetime.uni0n };
                    const bool iw_evalsFirst = (ooe_iw == 0);
                    fu_VEC<s_Region> written_and_invalidated {};
                    if (!iw_evalsFirst)
                    {
                        written_and_invalidated = written;
                        for (int i = 0; i < written.size(); i++)
                        {
                            const int index = Region_asIndex_4X1iL0ll(written[i]);
                            if (!index)
                                continue;

                            fu::view<int> invalidates = unless_oob_4Cjh8wBB(flow_GuOB76kF(_current_fn).invalidates, index);
                            add_PY7CTxG3(written_and_invalidated, fu::view_of(invalidates, s_Region{}));
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
                                BUG_patsWWTe(fu_STR{}, _here, ctx);

                            for (int r = ooe_read0_1; r < ooe_read1; r++)
                            {
                                const s_RWEvent& read = _current_fn.events.reads[r];
                                const fu_VEC<s_Region>& regions = GET_EiJMwamT(nested_sb4Efe9H(read.rw_target, _current_fn, _current_fnort, _here, ctx, module, _scope), _scope, module, ctx).type.lifetime.uni0n;
                                if (!inter_gfBRuoGh(regions, written_1))
                                    continue;

                                const int r_1 = (ooe_isRTL ? (ooe_START - ooe_ir) : int(ooe_ir));
                                const int w_1 = (ooe_isRTL ? (ooe_START - ooe_iw) : int(ooe_iw));
                                if (ooe_ir_evalsBefore_iw)
                                {
                                    const s_SolvedNode& arg = args[r_1];
                                    const fu_VEC<s_Region>& bound = SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).type.lifetime.uni0n;
                                    fu_VEC<s_Region> inter = inter_gfBRuoGh(bound, written_1);
                                    if (inter)
                                    {
                                        if (is_mutref_ceGfLbqY(host_args[r_1].type, _here, ctx) || !is_rx_copy_ceGfLbqY(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).type))
                                        {
                                            _here = SolvedNodeData_KIpwZvpE(callsite, _current_fnort, _here, ctx, module, _scope).token;
                                            fu_STR _0 {};
                                            fu_STR _1 {};
                                            (_1 = (_0 = (x7E((((((((x7E((((("At call to "_fu + qWHAT_5LWmus20(GET_EiJMwamT(target, _scope, module, ctx), module, _scope, ctx)) + ", argument binding "_fu) + qBAD_HIwg52Ja(human_iY2blCZM(host_args[r_1].name, module, _scope, ctx))) + " (arg #"_fu), fu::i64dec(r_1)) + ") at "_fu) + addr_and_snippet_Pptk1rIT(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).token, ctx, module)) + "\n\t... invalidated by subsequent write to "_fu) + qWHAT_5LWmus20(Region_GET_xySyDzrS(first_C86YoIYx(inter), _current_fn, _current_fnort, _here, ctx, module, _scope), module, _scope, ctx)) + " upon evaluation of argument "_fu) + qBAD_HIwg52Ja(human_iY2blCZM(host_args[w_1].name, module, _scope, ctx))) + " (arg #"_fu), fu::i64dec(w_1)) + ") at "_fu), (static_cast<fu_STR&&>(_0) + RWEvent_stack_4hX87jfi(writeID, _current_fn, _current_fnort, _here, ctx, module, _scope))), fail_2n2GzXhw(static_cast<fu_STR&&>(_1), _here, ctx, _helpers, _helpers_data, _scope, module));
                                        };
                                        BORROWCK_resolveByTempCopy_axvczN41(callsite, r_1, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _helpers, _helpers_data, _current_fn, options, _notes);
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
        (!*(_2 = &(MUT_mMNEzOPJ(callsite, _current_fnort, _here, ctx, module, _scope).helpers)) ? *_2 : BUG_patsWWTe("helpers already contain something"_fu, _here, ctx)) = MUSTSEQ_mask;
    }
    else if (GET_EiJMwamT(target, _scope, module, ctx).kind == "var"_fu)
        bck_trackRead_gPdIQ4bN(callsite, _current_fnort, _here, ctx, module, _scope, _current_fn, options, _helpers, _helpers_data);

}

static void bck_loop_jcPfImLP(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    fu_VEC<s_SolvedNode> items { SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items };
    bck_node_EJjZXPYZ(s_SolvedNode(items[0]), _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
    const int loop_start0 = _current_fn.loop_start;
    const int loop_start = GET_next_local_index_LA0p7vFN(_current_fn, _current_fnort, _here, ctx, module, _scope);
    fu_VEC<s_ReadID> events0 { _current_fn.events.used_in_a_loop };
    _current_fn.loop_start = loop_start;
    fu_DEFER(_current_fn.loop_start = loop_start0);
    for (int i = 1; i < items.size(); i++)
        bck_node_EJjZXPYZ(items[i], _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

    _current_fn.events.used_in_a_loop = events0;
}

static void bck_nodes_NtvV5rdq(fu::view<s_SolvedNode> items, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    for (int i = 0; i < items.size(); i++)
        bck_node_EJjZXPYZ(items[i], _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

}

                                #ifndef DEFt_unless_oob_f1G7VdCE
                                #define DEFt_unless_oob_f1G7VdCE
inline const s_WriteID& unless_oob_f1G7VdCE(fu::view<s_WriteID> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_WriteID*)fu::NIL);
}
                                #endif

static void bck_trackInit_0gMTeydf(const s_Target& target, s_CurrentFn& _current_fn)
{
    const int index = target.index;
    if (!index)
        return;

    if (unless_oob_f1G7VdCE(events_dyOrTtLp(_current_fn).snap.invalidated_by, index))
        events_dyOrTtLp(_current_fn).snap.invalidated_by.mutref(index) = s_WriteID{};

    if (_current_fn.loop_start > index)
        _current_fn.loop_start = index;

}

static void bck_let_7vuVxnLl(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    bck_nodes_NtvV5rdq(fu_VEC<s_SolvedNode>(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items), _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
    if (is_ref_ceGfLbqY(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type))
    {
        if (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).flags & F_ARG)
            BUG_patsWWTe("bck_let: Found an argument!"_fu, _here, ctx);

        const s_SolvedNode& init = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[LET_INIT];
        if (!(is_ref_ceGfLbqY(SolvedNodeData_KIpwZvpE(init, _current_fnort, _here, ctx, module, _scope).type)))
            BUG_patsWWTe("What!"_fu, _here, ctx);

        Reference_trackLocalRef_fiZRfh4j(_current_fn.flow, SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).target.index, SolvedNodeData_KIpwZvpE(init, _current_fnort, _here, ctx, module, _scope).type.lifetime);
    };
    bck_trackInit_0gMTeydf(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).target, _current_fn);
}

inline static void Events_merge_O92JGKqx(fu_VEC<s_WriteID>& dest, fu::view<s_WriteID> src)
{
    if (dest.size() < src.size())
        dest.grow(src.size());

    for (int i = 0; i < src.size(); i++)
    {
        s_WriteID& a = dest.mutref(i);
        if (!(a))
            a = src[i];

    };
}

inline static void Events_merge_oHn24VgH(fu_VEC<int>& dest, fu::view<int> src)
{
    if (dest.size() < src.size())
        dest.grow(src.size());

    for (int i = 0; i < src.size(); i++)
    {
        int& a = dest.mutref(i);
        if (!(a))
            a = src[i];

    };
}

static void Events_merge_mPAMxr6a(s_Events& events, const s_EventsSnap& snap)
{
    Events_merge_O92JGKqx(events.snap.invalidated_by, snap.invalidated_by);
    Events_merge_oHn24VgH(events.snap.args_written, snap.args_written);
}

static void bck_if_YfQ7szar(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    fu_VEC<s_SolvedNode> items { SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items };
    bck_node_EJjZXPYZ(s_SolvedNode(items[0]), _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
    s_EventsSnap e_Restore_AfterCond { _current_fn.events.snap };
    bck_node_EJjZXPYZ(items[1], _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
    s_EventsSnap e_Merge_AfterCons { _current_fn.events.snap };
    _current_fn.events.snap = e_Restore_AfterCond;
    bck_node_EJjZXPYZ(items[2], _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
    Events_merge_mPAMxr6a(_current_fn.events, e_Merge_AfterCons);
}

static void bck_block_muSop7el(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    fu_VEC<s_SolvedNode> defers {};
    fu_VEC<s_SolvedNode> items { SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items };
    for (int i = 0; i < items.size(); i++)
    {
        const s_SolvedNode node_1 { items[i] };
        if (SolvedNodeData_KIpwZvpE(node_1, _current_fnort, _here, ctx, module, _scope).kind == "defer"_fu)
            defers += s_SolvedNode(only_SBGwWDq5(SolvedNodeData_KIpwZvpE(node_1, _current_fnort, _here, ctx, module, _scope).items));
        else
            bck_node_EJjZXPYZ(node_1, _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

    };
    for (int i_1 = defers.size(); i_1-- > 0; )
        bck_node_EJjZXPYZ(defers[i_1], _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);

}

static void bck_node_EJjZXPYZ(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    fu::view<char> k = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind;
    s_RWRanges rwr {};
    rwr.reads0 = _current_fn.events.reads.size();
    rwr.writes0 = _current_fn.events.writes.size();
    if (k == "call"_fu)
        bck_call_BFMFLdCd(node, _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
    else if (k == "loop"_fu)
        bck_loop_jcPfImLP(node, _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
    else if (k == "letdef"_fu)
        bck_node_EJjZXPYZ(s_SolvedNode(GET_EiJMwamT(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).target, _scope, module, ctx).solved), _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
    else if (k == "let"_fu)
        bck_let_7vuVxnLl(node, _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
    else if (k == "if"_fu)
        bck_if_YfQ7szar(node, _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
    else if (k == "block"_fu)
        bck_block_muSop7el(node, _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
    else if ((k == "root"_fu) || (k == "and"_fu) || (k == "or"_fu) || (k == "jump"_fu) || (k == "try"_fu) || (k == "copy"_fu) || (k == "move"_fu) || (k == "arrlit"_fu))
        bck_nodes_NtvV5rdq(fu_VEC<s_SolvedNode>(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items), _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
    else if (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items)
        fail_2n2GzXhw((("TODO: bck_node(non-empty "_fu + k) + ")."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    rwr.reads1 = _current_fn.events.reads.size();
    rwr.writes1 = _current_fn.events.writes.size();
    if ((rwr.reads1 > rwr.reads0) || (rwr.writes1 > rwr.writes0))
        MUT_mMNEzOPJ(node, _current_fnort, _here, ctx, module, _scope).rwr = rwr;

}

static void PASS_borrowCheck_rq1Ezv03(const s_SolvedNode& root, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, const s_Target& _current_fn_or_type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    bck_node_EJjZXPYZ(root, _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
}

static fu_VEC<int> Lifetime_slotsUp2_a5mKfgRv(const s_Lifetime& lifetime, const int locals_start, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    fu_VEC<s_Region> unwound = Lifetime_unwind_S617ISHL(s_Lifetime(lifetime), locals_start, _current_fn, _current_fnort, _here, ctx, module, _scope).uni0n;
    /*MOV*/ fu_VEC<int> result {};
    for (int i = 0; i < unwound.size(); i++)
    {
        const s_Region& r = unwound[i];
        if ((r.index >= locals_start))
            result += int(r.index);

    };
    return /*NRVO*/ result;
}

                                #ifndef DEF_F_HOIST
                                #define DEF_F_HOIST
extern const int F_HOIST;
                                #endif

                                #ifndef DEFt_each_ewsfNu9F
                                #define DEFt_each_ewsfNu9F
inline void each_ewsfNu9F(fu::view<int> a, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    for (int i = 0; i < a.size(); i++)
    {
        const int index = a[i];
        GET_mut_LT5T09Vv(nested_sb4Efe9H(index, _current_fn, _current_fnort, _here, ctx, module, _scope), _scope, module).flags |= F_HOIST;
    };
}
                                #endif

static void mcom_BlockReturns_CopyOrMoveDecision_iGazHfb1(const s_Helpers& h, fu_VEC<s_HelpersData>& _helpers_data, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    if (!is_ref_ceGfLbqY(((void)void(), _helpers_data[h.index]).ret_actual))
        return;

    if (((void)void(), _helpers_data[h.index]).mask & HM_Function)
    {
        s_Lifetime unwind = Lifetime_unwind_S617ISHL(s_Lifetime(((void)void(), _helpers_data[h.index]).ret_actual.lifetime), 0, _current_fn, _current_fnort, _here, ctx, module, _scope);
        if (Lifetime_vs_luSRBHEP(unwind, ((void)void(), _helpers_data[h.index]).locals_start) < 0)
            ((void)void(), _helpers_data.mutref(h.index)).ret_actual.lifetime = unwind;
        else
            reportReturnType_NsDoShKi(h, clear_refs_ceGfLbqY(s_Type(((void)void(), _helpers_data[h.index]).ret_actual)), _helpers_data, _here, ctx, module, _helpers, _scope);

    }
    else
    {
        fu_VEC<int> _0 {};
        (_0 = Lifetime_slotsUp2_a5mKfgRv(((void)void(), _helpers_data[h.index]).ret_actual.lifetime, ((void)void(), _helpers_data[h.index]).locals_start, _current_fn, _current_fnort, _here, ctx, module, _scope), each_ewsfNu9F(static_cast<fu_VEC<int>&&>(_0), _current_fn, _current_fnort, _here, ctx, module, _scope));
    };
}

static void mcom_node_1o6H1Cy3(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, fu_VEC<s_HelpersData>& _helpers_data, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, const s_Target& _current_fn_or_type, const s_Options& options, int& _notes)
{
    fu_STR k { SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).kind };
    s_Type t { SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type };
    if (k == "block"_fu)
    {
        if (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).helpers)
            mcom_BlockReturns_CopyOrMoveDecision_iGazHfb1(s_Helpers { int(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).helpers) }, _helpers_data, _current_fn, _current_fnort, _here, ctx, module, _scope, _helpers);

    };
    fu_VEC<s_SolvedNode> items { SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items };
    for (int i = 0; i < items.size(); i++)
        mcom_node_1o6H1Cy3(s_SolvedNode(items[i]), _current_fnort, _here, ctx, module, _scope, _helpers_data, _current_fn, _helpers, _current_fn_or_type, options, _notes);

    _here = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).token;
    if (k == "call"_fu)
    {
        const s_Target& target = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).target;
        if (GET_EiJMwamT(target, _scope, module, ctx).kind != "field"_fu)
        {
            fu_VEC<s_Argument> host_args { EXT_qHy9RJpv(target, module, _scope, ctx).args };
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_wEmNIwKP(items[i_1], s_Type(host_args[i_1].type), true, false, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _helpers, _helpers_data, _current_fn, options, _notes);

        };
    }
    else if ((k == "block"_fu) || (k == "jump"_fu))
    {
        const s_Helpers h = s_Helpers { int(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).helpers) };
        if (((void)void(), _helpers_data[h.index]).ret_actual && !is_void_ceGfLbqY(((void)void(), _helpers_data[h.index]).ret_actual) && !is_never_ceGfLbqY(((void)void(), _helpers_data[h.index]).ret_actual))
            maybeCopyOrMove_wEmNIwKP(s_SolvedNode(last_3cih1E88(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items)), ((void)void(), _helpers_data[h.index]).ret_actual, false, true, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _helpers, _helpers_data, _current_fn, options, _notes);

    }
    else if (k == "letdef"_fu)
        mcom_node_1o6H1Cy3(s_SolvedNode(GET_EiJMwamT(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).target, _scope, module, ctx).solved), _current_fnort, _here, ctx, module, _scope, _helpers_data, _current_fn, _helpers, _current_fn_or_type, options, _notes);
    else if (k == "let"_fu)
    {
        if (SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items)
        {
            const s_SolvedNode init { SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[LET_INIT] };
            if (init)
                maybeCopyOrMove_wEmNIwKP(init, s_Type(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type), false, false, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _helpers, _helpers_data, _current_fn, options, _notes);

        };
    }
    else if (k == "if"_fu)
    {
        if (!is_void_ceGfLbqY(t))
        {
            maybeCopyOrMove_wEmNIwKP(items[1], t, false, false, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _helpers, _helpers_data, _current_fn, options, _notes);
            maybeCopyOrMove_wEmNIwKP(items[2], t, false, false, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _helpers, _helpers_data, _current_fn, options, _notes);
        };
    }
    else if (k == "or"_fu)
    {
        if (!(t == t_bool))
        {
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_wEmNIwKP(items[i_1], t, false, false, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _helpers, _helpers_data, _current_fn, options, _notes);

        };
    }
    else if (k == "arrlit"_fu)
    {
        s_Type t_1 = clear_sliceable_ceGfLbqY(t, _here, ctx);
        for (int i_1 = 0; i_1 < items.size(); i_1++)
            maybeCopyOrMove_wEmNIwKP(items[i_1], t_1, false, false, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _helpers, _helpers_data, _current_fn, options, _notes);

    };
}

static void runAllPasses_VnsQEjJz(const s_SolvedNode& node, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Target& _current_fn_or_type, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (SELF_TEST)
        test_node_Ox3KkYOv(node, "PASS.0 "_fu, _current_fnort, _here, ctx, module, _scope);

    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType_NNuUomCa(node, s_Type(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type), RELAX_before_bck, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (SELF_TEST)
        test_node_Ox3KkYOv(node, "PASS.0.relax "_fu, _current_fnort, _here, ctx, module, _scope);

    PASS_borrowCheck_rq1Ezv03(node, _current_fnort, _here, ctx, module, _scope, _current_fn, _current_fn_or_type, _helpers, _helpers_data, options, _notes);
    if (SELF_TEST)
        test_node_Ox3KkYOv(node, "PASS.1 "_fu, _current_fnort, _here, ctx, module, _scope);

    mcom_node_1o6H1Cy3(node, _current_fnort, _here, ctx, module, _scope, _helpers_data, _current_fn, _helpers, _current_fn_or_type, options, _notes);
    if (SELF_TEST)
        test_node_Ox3KkYOv(node, "PASS.2 "_fu, _current_fnort, _here, ctx, module, _scope);

    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType_NNuUomCa(node, s_Type(SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).type), RELAX_all, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (SELF_TEST)
        test_node_Ox3KkYOv(node, "PASS.2.relax "_fu, _current_fnort, _here, ctx, module, _scope);

}

static s_SolvedNode solveBlock_1o3VlYFC(const fu_VEC<s_SolvedNode>& items, const int helpers_idx, const bool expr, const short mask, const int fnbody_of, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Helpers& h = _helpers[helpers_idx];
    if (!short((mask & HM_CanReturn)))
        ((void)void(), _helpers_data.mutref(h.index)).ret_expect = s_Type{};

    if (expr && items && !is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(last_3cih1E88(items), _current_fnort, _here, ctx, module, _scope).type))
        createJump_N6cyyHzw(last_3cih1E88(items), h, _here, _current_fnort, _current_fn_or_type, module, _scope, ctx, _helpers_data, _current_fn, _helpers);


    {
        if (is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(if_last_3cih1E88(items), _current_fnort, _here, ctx, module, _scope).type))
        {
            if (!((void)void(), _helpers_data[h.index]).ret_actual)
                reportReturnType_NsDoShKi(h, t_never, _helpers_data, _here, ctx, module, _helpers, _scope);

        }
        else if (fnbody_of)
        {
            if (((void)void(), _helpers_data[h.index]).ret_actual)
            {
                if (!(isAssignable_lKMokzZR(t_void, ((void)void(), _helpers_data[h.index]).ret_actual)))
                    fail_2n2GzXhw("Non-void returning fn missing a final return."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        if (!((void)void(), _helpers_data[h.index]).ret_actual)
            reportReturnType_NsDoShKi(h, t_void, _helpers_data, _here, ctx, module, _helpers, _scope);

    };
    const s_Type* _0;
    /*MOV*/ const s_SolvedNode block = createBlock_XLQezDDx((*(_0 = &(((void)void(), _helpers_data[h.index]).ret_actual)) ? *_0 : BUG_patsWWTe(fu_STR{}, _here, ctx)), fu_VEC<s_SolvedNode>(items), h, _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data, _current_fn_or_type);
    if (fnbody_of)
    {
        const unsigned status = GET_EiJMwamT(s_Target { int(module.modid), int(fnbody_of) }, _scope, module, ctx).status;
        if (!(status & SS_DIRTY) && !currentFn_mustBecomeInline_cOeXJelh(_current_fn))
            runAllPasses_VnsQEjJz(block, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    };
    return /*NRVO*/ block;
}

static s_SolvedNode solveBlock_HVo1Po1s(const s_Node& node, const s_Type& type, const int fnbody_of, const short mask, const int kills, const fu_STR& id, const int locals_start, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_HelpersData>& _helpers_data, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_Node> nodes = ((node.kind == "block"_fu) ? fu_VEC<s_Node>(node.items) : fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(node) } });
    const fu_STR& id_1 = (id ? id : ((node.kind == "block"_fu) ? node.value : (*(const fu_STR*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap_Gy3SoOnf(_scope, _helpers);
    fu_DEFER(Scope_pop_o9RH7nTe(_scope, scope0, _helpers));
    const int helpers_idx = _helpers.size();
    push_DOX5pwMC(s_HelpersData { (fnbody_of ? s_Target { int(module.modid), int(fnbody_of) } : s_Target{}), fu_STR(id_1), short(mask), int((fnbody_of ? fnbody_of : SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index)), int(kills), (fnbody_of ? +1 : (locals_start ? int(locals_start) : GET_next_local_index_LA0p7vFN(_current_fn, _current_fnort, _here, ctx, module, _scope))), s_Type(type), s_Type{} }, _helpers, _helpers_data);
    const bool expr = (!fnbody_of && !is_void_ceGfLbqY(type));
    fu_VEC<s_SolvedNode> items = solveNodes_J7uR9TQA(nodes, t_void, type, expr, (helpers_idx + 1), _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    return solveBlock_1o3VlYFC(items, helpers_idx, expr, mask, fnbody_of, _helpers, _helpers_data, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
}

static void lazySolveEnd_b7wxn2Y6(const s_Target& t, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, const s_Options& options, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, int& _notes, const s_Target& _current_fnort, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    s_Overload& o = GET_mut_LT5T09Vv(t, _scope, module);
    fu_VEC<int> reopen {};
    const int parent = EXT_qHy9RJpv(t, module, _scope, ctx).local_of;
    if (o.status & SS_UPDATED)
    {
        o.status &= ~SS_UPDATED;
        fu_VEC<int> callers { EXT_qHy9RJpv(t, module, _scope, ctx).callers };
        for (int i = 0; i < callers.size(); i++)
        { {
            int index = callers[i];
            for (; ; )
            {
                const s_Target t_1 = s_Target { int(module.modid), int(index) };
                s_Overload& o_1 = GET_mut_LT5T09Vv(t_1, _scope, module);
                if ((o_1.status & (SS_DID_START | SS_DIRTY)) != SS_DID_START)
                    goto BL_3;

                if (!(o_1.status & SS_FINALIZED))
                {
                    o_1.status |= SS_DIRTY;
                    goto BL_3;
                };
                const int up = EXT_qHy9RJpv(t_1, module, _scope, ctx).local_of;
                if (up != parent)
                {
                    if (!(up > parent))
                        BUG_patsWWTe("lazySolveEnd: about to climb up the wrong tree."_fu, _here, ctx);

                    index = up;
                    continue;
                };
                makeNote_kDWiwp14(((o_1.kind == "type"_fu) ? N_TypeReopen : N_FnReopen), options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                o_1.status &= ~((SS_DID_START | SS_DIRTY) | SS_FINALIZED);
                reopen += int(index);
                goto BL_3;
            };
          } BL_3:;
        };
    };
    s_Overload& o_1 = GET_mut_LT5T09Vv(t, _scope, module);
    if (!(o_1.status & SS_DIRTY))
        o_1.status |= SS_FINALIZED;
    else
    {
        if (o_1.status & SS_FINALIZED)
            BUG_patsWWTe("Stray SS_FINALIZED."_fu, _here, ctx);

        o_1.status &= ~(SS_DID_START | SS_DIRTY);
        makeNote_kDWiwp14(((o_1.kind == "type"_fu) ? N_TypeResolve : N_FnResolve), options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t_1 = s_Target { int(module.modid), int(reopen[i]) };
        lazySolveStart_2wgIEWVi(t_1, s_Overload(GET_EiJMwamT(t_1, _scope, module, ctx)), _scope, module, _here, ctx, _current_fnort, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    };
}

static s_Target doTrySpecialize_hGfr9hqq(const s_Target& into, const s_Target& overloadIdx, fu::view<s_SolvedNode> args_in, fu_STR&& mangle, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_Map_e04WMKmU& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_Type> args {};
    if (use_reorder)
    {
        for (int i = 0; i < reorder.size(); i++)
        {
            const int callsiteIndex = reorder[i];
            args.push(s_Type(((callsiteIndex >= 0) && (callsiteIndex < args_in.size()) ? SolvedNodeData_KIpwZvpE(args_in[callsiteIndex], _current_fnort, _here, ctx, module, _scope).type : (*(const s_Type*)fu::NIL))));
        };
    }
    else
    {
        for (int i = 0; i < args_in.size(); i++)
            args.push(s_Type(SolvedNodeData_KIpwZvpE(args_in[i], _current_fnort, _here, ctx, module, _scope).type));

    };
    for (int i = 0; i < conversions.size(); i++)
    {
        const fu_VEC<s_Target>& c = conversions[i];
        if (c)
            args.mutref(i) = GET_EiJMwamT(last_fnMFgrK3(c), _scope, module, ctx).type;

    };
    if (REST_TYPE)
        args.mutref(REST_START) = REST_TYPE;

    const s_Target SPECFAIL_RentrySafety = s_Target { 2147483647, 0 };
    fu_STR mangle00 { mangle };
    const s_Target& original = (overloadIdx ? overloadIdx : into ? into : BUG_patsWWTe(fu_STR{}, _here, ctx));
    s_Template tEmplate { EXT_qHy9RJpv(original, module, _scope, ctx).tEmplate };
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    _here = EXT_qHy9RJpv(original, module, _scope, ctx).tEmplate.node.token;
    int parent_idx = EXT_qHy9RJpv(original, module, _scope, ctx).local_of;
    for (int i_1 = 0; i_1 < args.size(); i_1++)
    {
        const s_Type& arg_t = args[i_1];
        if (type_isAddrOfFn_ceGfLbqY(arg_t))
            unpackAddrOfFn_rIKmmp34(arg_t.vtype.canon, module, _scope, ctx, parent_idx);

    };
    const bool isInline = !!(tEmplate.node.flags & F_INLINE);
    if (!into && !isInline)
        setSpec_HPugG8x6(mangle, SPECFAIL_RentrySafety, true, isInline, _here, ctx, _specs, _scope, module);

    /*MOV*/ s_Target target {};

    {
        const s_ScopeMemo scope0 = Scope_snap_Gy3SoOnf(_scope, _helpers);
        s_ScopeSkipMemos ss0 { _ss };
        const int helpers_data0 = _helpers_data.size();
        fu_DEFER(
        {
            Scope_pop_o9RH7nTe(_scope, scope0, _helpers);
            _ss = ss0;
            _helpers_data.shrink(helpers_data0);
        });
        ScopeSkip_setup_Ljn1fXiw(tEmplate, scope0, bool{}, _root_scope, _ss, _here, ctx, _current_fn, _scope);
        fu_VEC<s_Node> items { tEmplate.node.items };
        s_Node& n_fn = tEmplate.node;
        if (!(n_fn.kind == "fn"_fu))
            BUG_patsWWTe("n_fn not a `fn`."_fu, _here, ctx);

        fu_STR error {};
        bool remangle = false;
        s_Map_3Igdp5fJ typeParams {};
        if (!into)
        {
            fu::view<char> kind = tEmplate.node.kind;
            const int numArgs = ((kind == "fn"_fu) ? (items.size() + FN_ARGS_BACK) : fail_2n2GzXhw(("TODO numArgs for template:"_fu + kind), _here, ctx, _helpers, _helpers_data, _scope, module));
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
                    const s_Node& argNode = (*(_0 = &(items[i_2])) ? *_0 : BUG_patsWWTe(fu_STR{}, _here, ctx));
                    const s_Node& annot = argNode.items[LET_TYPE];
                    if (couldRetype_1EyrKiHz(inValue, _current_fnort, _here, ctx, module, _scope))
                    {
                        const s_Type& paramType = ((annot.kind == "typeparam"_fu) ? ref_SKEN9ihS(typeParams, annot.value).matched : ((annot.kind == "call"_fu) && !annot.items ? Scope_lookupType_Bl6TEtBi(annot, _here, ctx, _helpers, _helpers_data, _scope, module, _ss) : (*(const s_Type*)fu::NIL)));
                        if (paramType)
                        {
                            s_Type retype = tryRetyping_l57zDXb3(inValue, paramType, _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data);
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
                        BUG_patsWWTe(fu_STR{}, _here, ctx);

                    if (inType)
                    {
                        const s_Type& exactType = EXT_qHy9RJpv(original, module, _scope, ctx).args[i_2].type;
                        if (exactType)
                        {
                            args.mutref(i_2) = exactType;
                            continue;
                        };
                        const fu_STR& argName = (argNode.value ? argNode.value : BUG_patsWWTe(fu_STR{}, _here, ctx));
                        s_TypeParam& argName_typeParam = ref_SKEN9ihS(typeParams, argName);
                        inType = add_ref_UThBZuDl(s_Type(inType), Lifetime_temporary_8nlJDPX0(), _here, ctx);
                        (!argName_typeParam ? argName_typeParam : fail_2n2GzXhw((("Type param name collision with argument "_fu + qID_HIwg52Ja(argName)) + "."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)).matched = inType;
                        if (annot)
                        {
                            const bool argOk = trySolveTypeParams_m8l53K02(annot, s_Type(inType), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
                            if (!error && !argOk)
                                error = ((("Cannot solve argument "_fu + qID_HIwg52Ja(argName)) + " pattern for "_fu) + humanizeType_YKN1kOGX(inType, module, ctx));

                            if (error && !remangle)
                                break;

                        };
                    };
                };
            };
            if (remangle && !isInline)
            {
                int _1 {};
                const int start = ((_1 = (find_hCEGPwyG(mangle, ' ') + 1)) ? _1 : BUG_patsWWTe(fu_STR{}, _here, ctx));
                mangle = (fu::slice(mangle, 0, start) + mangleArguments_STx3n2X8(args, _here, ctx));
                if (mangle00 != mangle)
                {
                    /*MOV*/ const s_Target preexisting { get_OHTTyvAW(_specs, mangle) };
                    if (preexisting)
                    {
                        setSpec_HPugG8x6(mangle00, preexisting, bool{}, isInline, _here, ctx, _specs, _scope, module);
                        return /*NRVO*/ preexisting;
                    };
                    if (!into)
                        setSpec_HPugG8x6(mangle, SPECFAIL_RentrySafety, true, isInline, _here, ctx, _specs, _scope, module);

                };
            };
            if (error)
                return SPECFAIL_yP9888G7(error, _spec_errors, SPECFAIL_RentrySafety, mangle00, isInline, _here, ctx, _specs, _scope, module, mangle);

            const s_Node* _2;
            const s_Node& body = (*(_2 = &(items[(items.size() + FN_BODY_BACK)])) ? *_2 : BUG_patsWWTe(fu_STR{}, _here, ctx));
            if (body.kind == "pattern"_fu)
            {
                s_Map_3Igdp5fJ undo { typeParams };
                fu_VEC<s_Node> branches { body.items };
                bool did_match = false;
                for (int i_2 = 0; i_2 < branches.size(); i_2++)
                {
                    const s_Node& cond = branches[i_2].items[0];
                    if (cond && !evalTypePattern_xXW6LGOg(cond, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string))
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
                        sig.mutref((sig.size() + FN_BODY_BACK)) = (n_body ? n_body : BUG_patsWWTe("doTrySpec: no case/body."_fu, _here, ctx));
                    };
                    did_match = true;
                    break;
                };
                if (!did_match)
                    return SPECFAIL_yP9888G7("No body pattern matched."_fu, _spec_errors, SPECFAIL_RentrySafety, mangle00, isInline, _here, ctx, _specs, _scope, module, mangle);

            };
            const s_Node& n_body = n_fn.items[(n_fn.items.size() + FN_BODY_BACK)];
            if (isNativeBody_z7fcGapq(n_body))
            {
                for (int i_2 = 0; i_2 < numArgs; i_2++)
                {
                    const s_Node* _3;
                    const s_Node& argNode = (*(_3 = &(items[i_2])) ? *_3 : BUG_patsWWTe(fu_STR{}, _here, ctx));
                    const fu_STR& id = argNode.value;
                    if_ref_FzxGZRJy(typeParams, id);
                };
            };
        };
        fu_STR mangle0 { mangle };
        target = (into ? s_Target(into) : Scope_create_h7gWxUs8(_scope, "_no_kind_yet_"_fu, (*(const fu_STR*)fu::NIL), (*(const s_Type*)fu::NIL), 0, (SS_DID_START | SS_LAZY), 0, module));
        EXT_mut_lqSDNFDF(target, module, _scope).local_of = parent_idx;
        fu_VEC<s_ScopeItem> extra_items { (into ? EXT_qHy9RJpv(original, module, _scope, ctx).extra_items : (EXT_mut_lqSDNFDF(target, module, _scope).extra_items = intoScopeItems_KzzBpR7D(typeParams, module, ctx, _scope))) };
        if (!_current_fn_or_type)
            _anons = 0;

        const s_Target current_fn_or_type0 { _current_fn_or_type };
        fu_DEFER(_current_fn_or_type = current_fn_or_type0);
        _current_fn_or_type = target;
        const s_Target& _current_fnort_1 = target;

        {
            s_Extended& o = EXT_mut_lqSDNFDF(target, module, _scope);
            if (o.revision++ > 0)
            {
                o.locals.clear();
                o.nodes.clear();
                if (_warnings.size() > target.index)
                    _warnings.mutref(target.index) = s_Warning{};

            };
        };
        fu_VEC<s_SolvedNode> TODO_FIX_convert_args0 { TODO_FIX_convert_args };
        TODO_FIX_convert_args.mutref(0) = SolvedNode_HaPiTdVO("__convert"_fu, s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort_1, _current_fn_or_type, module, _scope);
        fu_DEFER(TODO_FIX_convert_args = TODO_FIX_convert_args0);
        s_CurrentFn out = s_CurrentFn { solved_mViSzIsN(n_fn, X_addrofTarget_HbwY7ZLu(target), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, _here, _current_fnort_1, _current_fn_or_type, module, _scope), s_ScopeMemo(scope0), s_Flow{}, s_Effects{}, s_Events{}, 0, fu_VEC<s_Type>{} };
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
        outItems_R5PshaKs(_current_fn, _current_fnort_1, _here, ctx, module, _scope).resize(inItems.size());
        _scope.items += extra_items;
        const bool isFirst = !GET_EiJMwamT(target, _scope, module, ctx).solved;
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
                fu_VEC<s_SolvedNode> _4 {};
                outItems_R5PshaKs(_current_fn, _current_fnort_1, _here, ctx, module, _scope).mutref(i_2) = (_4 = fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, (n_arg.items[LET_INIT] ? SolvedNode_HaPiTdVO("__defarg"_fu, (*(const s_Type*)fu::NIL), 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, 0, _here, _current_fnort_1, _current_fn_or_type, module, _scope) : s_SolvedNode{}) } }, SolvedNode_HaPiTdVO("let"_fu, s_Type{}, n_arg.flags, n_arg.value, static_cast<fu_VEC<s_SolvedNode>&&>(_4), s_Target{}, 0, _here, _current_fnort_1, _current_fn_or_type, module, _scope));
                continue;
            };
            s_Type specType = (isSpec ? tryGetArgSpecType_WDPdQFo8(n_arg.value, extra_items, _scope, module, ctx, _here, _helpers, _helpers_data) : s_Type{});
            const s_SolvedNode arg = solveLet_ScVmXNEy(n_arg, specType, _here, ctx, _helpers, _helpers_data, _current_fnort_1, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
            outItems_R5PshaKs(_current_fn, _current_fnort_1, _here, ctx, module, _scope).mutref(i_2) = arg;
            if (!isUnspec && SolvedNodeData_KIpwZvpE(arg, _current_fnort_1, _here, ctx, module, _scope).target)
                Reference_trackArgument_VniSYxaW(_current_fn.flow, SolvedNodeData_KIpwZvpE(arg, _current_fnort_1, _here, ctx, module, _scope).target.index, i_2);

        };
        const s_Node& n_ret = (!isUnspec ? inItems[(inItems.size() + FN_RET_BACK)] : (*(const s_Node*)fu::NIL));
        const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
        if (!(n_body))
            BUG_patsWWTe("solveFn: no body."_fu, _here, ctx);

        const bool isNative = isNativeBody_z7fcGapq(n_body);
        if (!isNative && !isUnspec)
        {
            if (!(n_body.kind == "block"_fu))
                BUG_patsWWTe((("solveFn: Body not a block: `"_fu + n_body.kind) + "`."_fu), _here, ctx);

        };
        s_Type ret_expect = (n_ret ? evalTypeAnnot_t9H2NZ5S(n_ret, (*(const s_Map_3Igdp5fJ*)fu::NIL), _here, ctx, _helpers, _helpers_data, _current_fnort_1, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_Type{});
        s_Type ret_seed { (n_ret ? (ret_expect ? ret_expect : BUG_patsWWTe(("falsy ret_expect: "_fu + n_fn.value), _here, ctx)) : t_never) };
        if (ret_seed.lifetime)
            ret_seed.lifetime = (isNative ? Lifetime_fromNative_TdsF2x1q(inItems, fu::get_view(SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort_1, _here, ctx, module, _scope).items, 0, (SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort_1, _here, ctx, module, _scope).items.size() + FN_ARGS_BACK)), ret_seed, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort_1) : Lifetime_static_8nlJDPX0());

        if (isFirst)
        {
            updateScope_yjXZeo7w(_current_fn, (isInline ? ret_expect : ret_seed), false, target, _scope, module, ctx, _current_fnort_1, _here, isNative, isUnspec, isPure, _current_fn, _helpers, _helpers_data, isNovec, isInline);

            {
                fu_STR name { (n_fn.value ? n_fn.value : fail_2n2GzXhw("TODO anonymous fns"_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) };
                if (!isNative && !isInline && !isUnspec && !(n_fn.flags & F_EXTERN) && !((n_fn.flags & F_OPERATOR) && hasOperator_YqscxHlw(name)))
                {
                    const int sourceModid = tEmplate.node.token.modid;
                    fu_STR shortModuleName_1 = ((sourceModid != module.modid) ? (sourceModid && module.modid ? getShortModuleName_bB04eegu(ctx.modules[sourceModid].fname) : fu_STR{}) : fu_STR(shortModuleName));
                    fu_STR sig = (((EXT_qHy9RJpv(target, module, _scope, ctx).local_of ? fu::i64dec(target.index) : fu_STR{}) + shortModuleName_1) + mangleArguments_9v4sgACJ(EXT_qHy9RJpv(target, module, _scope, ctx).args, _here, ctx));
                    if (sig)
                    {
                        fu_STR _5 {};
                        fu_STR hash = ((_5 = hash62_HxcQaXaI(sig, 8)) ? static_cast<fu_STR&&>(_5) : BUG_patsWWTe(fu_STR{}, _here, ctx));
                        name += ("_"_fu + hash);
                    };
                };
                s_Overload& overload = GET_mut_LT5T09Vv(target, _scope, module);
                fu_STR _6 {};
                overload.name = ((_6 = HACK_nativeNameParts_ljnYNjn0(isNative, n_body)) ? static_cast<fu_STR&&>(_6) : name ? fu_STR(name) : BUG_patsWWTe(fu_STR{}, _here, ctx));
                overload.kind = (isUnspec ? "template"_fu : (isNative ? "__native"_fu : (isInline ? "inline"_fu : "fn"_fu)));
                s_Extended& ext = EXT_mut_lqSDNFDF(target, module, _scope);
                ext.tEmplate = tEmplate;
                ext.spec_of = overloadIdx;
            };
            if (!into && !isInline)
            {
                int _7 {};
                const int start = ((_7 = (find_3yRdKyg4(mangle0, ' ') + 1)) ? _7 : BUG_patsWWTe(fu_STR{}, _here, ctx));
                mangle = (fu::slice(mangle0, 0, start) + mangleArguments_9v4sgACJ(EXT_qHy9RJpv(target, module, _scope, ctx).args, _here, ctx));
                /*MOV*/ s_Target preexisting {};
                const bool nx0 = (mangle0 != mangle);
                if (nx0)
                {
                    preexisting = get_OHTTyvAW(_specs, mangle);
                    setSpec_HPugG8x6(mangle0, (preexisting ? preexisting : target), bool{}, isInline, _here, ctx, _specs, _scope, module);
                };
                const bool nx00 = (mangle00 != mangle);
                if (nx00 && (mangle00 != mangle0))
                    setSpec_HPugG8x6(mangle00, (preexisting ? preexisting : target), bool{}, isInline, _here, ctx, _specs, _scope, module);

                if (preexisting)
                    return /*NRVO*/ preexisting;

                setSpec_HPugG8x6(mangle, target, (nx0 ? nx00 : (*(const bool*)fu::NIL)), isInline, _here, ctx, _specs, _scope, module);
            };
        };
        bool didSetBody = false;

        { {
            if (!isInline && !isUnspec)
            {
                s_Type retval { ret_seed };
                if (!isNative)
                {
                    const s_SolvedNode s_body = solveBlock_HVo1Po1s(n_body, ret_expect, target.index, short(short((short((short((HM_Function | HM_CanReturn)) | HM_LabelUsed)) | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL))))), 0, n_fn.value, 0, _scope, _helpers, module, _current_fn, _current_fnort_1, _here, ctx, _helpers_data, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
                    if (currentFn_mustBecomeInline_cOeXJelh(_current_fn))
                    {
                        if (!(isFirst))
                            fail_2n2GzXhw("Function wants to become inline on after first solve."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                        s_Overload& o = GET_mut_LT5T09Vv(target, _scope, module);
                        o.kind = "inline"_fu;
                        o.type = ret_expect;
                        goto BL_72;
                    };
                    const s_HelpersData* BL_77_v;
                    retval = (__extension__ (
                    {
                        const s_Helpers h = s_Helpers { int(SolvedNodeData_KIpwZvpE(s_body, _current_fnort_1, _here, ctx, module, _scope).helpers) };
                        BL_77_v = &(_helpers_data[h.index]);
                    (void)0;}), *BL_77_v).ret_actual;
                    checkAssignable_bkgTcirN(retval, SolvedNodeData_KIpwZvpE(s_body, _current_fnort_1, _here, ctx, module, _scope).type, "reval after runAllPasses"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, module, _helpers, _helpers_data, _scope);
                    const int idx_body = (outItems_R5PshaKs(_current_fn, _current_fnort_1, _here, ctx, module, _scope).size() + FN_BODY_BACK);
                    outItems_R5PshaKs(_current_fn, _current_fnort_1, _here, ctx, module, _scope).mutref(idx_body) = (s_body ? s_body : BUG_patsWWTe("falsy body"_fu, _here, ctx));
                    didSetBody = true;
                    ArgsAtRisk_shake_bZZfza4U(_current_fn.flow);
                    ArgsWritten_shake_2MlTalrh(s_Flow(_current_fn.flow), _current_fn.events.args_ever_written);
                };
                updateScope_yjXZeo7w(_current_fn, retval, true, target, _scope, module, ctx, _current_fnort_1, _here, isNative, isUnspec, isPure, _current_fn, _helpers, _helpers_data, isNovec, isInline);
            };
          } BL_72:;
        };
        if (!didSetBody)
        {
            const s_Overload& o = GET_EiJMwamT(target, _scope, module, ctx);
            if (!(o.kind != "fn"_fu))
                BUG_patsWWTe(((("did not set body on "_fu + qWHAT_5LWmus20(o, module, _scope, ctx)) + ": "_fu) + humanizeType_YKN1kOGX(o.type, module, ctx)), _here, ctx);

        };
    };
    lazySolveEnd_b7wxn2Y6(target, _scope, module, ctx, _here, options, _helpers, _helpers_data, _notes, _current_fnort, _specs, _ss, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, shortModuleName, _field_items, t_string);
    return /*NRVO*/ target;
}

static bool lazySolveStart_2wgIEWVi(const s_Target& target, const s_Overload& overload, s_Scope& _scope, s_Module& module, s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, s_Map_e04WMKmU& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if ((overload.status & (SS_DID_START | SS_LAZY)) != SS_LAZY)
        return false;


    {
        s_Overload& o = GET_mut_LT5T09Vv(target, _scope, module);
        if (o.status & ((SS_FINALIZED | SS_DID_START) | SS_DIRTY))
            BUG_patsWWTe(x7E("SS_DID_START: non-zero solver status: "_fu, fu::u64dec(overload.status)), _here, ctx);

        o.status |= SS_DID_START;
        if (o.kind == "fn"_fu)
            doTrySpecialize_hGfr9hqq(target, s_Target{}, fu::view<s_SolvedNode>{}, fu_STR{}, fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, 0, (*(const s_Type*)fu::NIL), _current_fnort, _here, ctx, module, _scope, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        else if (o.kind == "type"_fu)
            __solveStruct_XmElc5Yz(true, s_Node(EXT_qHy9RJpv(target, module, _scope, ctx).tEmplate.node), target, _current_fn, _current_fnort, _here, ctx, module, _scope, _helpers, _ss, _current_fn_or_type, _helpers_data, _warnings, _specs, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        else
            BUG_patsWWTe((("lazySolveStart: kind is `"_fu + o.kind) + "`."_fu), _here, ctx);

    };
    return true;
}

static fu_STR str_98lvWSFU(const int min, const int max)
{
    return ((min != max) ? (x7E((x7E("["_fu, fu::i64dec(min)) + ", "_fu), fu::i64dec(max)) + "]"_fu) : fu::i64dec(min));
}

static void reorderByNumUsings_0t9EtqJy(bool& use_reorder, fu_VEC<int>& reorder, fu::view<s_Argument> host_args, const int num_args, const int num_usings)
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

                                #ifndef DEFt_find_IswWtOx1
                                #define DEFt_find_IswWtOx1
inline int find_IswWtOx1(fu::view<fu_STR> a, fu::view<char> b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static bool reorderByArgIDs_0zq7wdwp(bool& use_reorder, fu_VEC<int>& reorder, fu::view<fu_STR> names, s_BitSet&& optional, fu::view<s_Argument> host_args, const int num_usings)
{
    use_reorder = true;
    reorder.clear();
    int used = 0;
    int offset = num_usings;
    for (int i = 0; i < host_args.size(); i++)
    {
        int idx = find_IswWtOx1(names, host_args[i].name);
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
            rem_yDyCXbrU(optional, i);
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
        if ((used + popcount_pXOENYsj(optional)) != names.size())
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

static int findRestStart_nybhczes(const s_Extended& ext)
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

static void foreach_HhFOYCnz(const s_Target& t, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_Scope& _scope, const bool nullary, s_CurrentFn& _current_fn, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_e04WMKmU& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
{
    s_Type arg0type0 { SolvedNodeData_KIpwZvpE(TODO_FIX_convert_args[0], _current_fnort, _here, ctx, module, _scope).type };
    if (!nullary)
    {
        const int here = SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index;
        if (here && (t.index > here) && (t.modid == module.modid) && (EXT_qHy9RJpv(t, module, _scope, ctx).local_of != here))
            return;

        if (root && retype)
            TODO_FIX_convert_args.mutref(0) = retype;
        else
            MUT_mMNEzOPJ(TODO_FIX_convert_args[0], _current_fnort, _here, ctx, module, _scope).type = from;

    };
    fu_DEFER(if (!nullary)
    {
        if (root && retype)
            TODO_FIX_convert_args.mutref(0) = arg0;
        else
            MUT_mMNEzOPJ(TODO_FIX_convert_args[0], _current_fnort, _here, ctx, module, _scope).type = arg0type0;

    });
    fu_STR error {};
    s_Target candidate {};
    if (nullary || (candidate = tryMatch__mutargs_c3aAUtmN(fu_STR{}, TODO_FIX_reorder, TODO_FIX_conversions, error, bool{}, (*(const s_Scope*)fu::NIL), fu_VEC<s_SolvedNode>(TODO_FIX_convert_args), F_CONVERSION, t, _current_fnort, _here, ctx, module, _scope, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string)))
    {
        const s_Target& t_1 = (nullary ? t : candidate);
        const s_Overload& convert = GET_EiJMwamT(t_1, _scope, module, ctx);
        if (!(convert.type))
            fail_2n2GzXhw((("No convert.type, perhaps a `using inline fn` without a return type annotation: `"_fu + qWHAT_5LWmus20(convert, module, _scope, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Type convertType = ((convert.kind == "field"_fu) ? add_refs_lKMokzZR((from ? from : BUG_patsWWTe(fu_STR{}, _here, ctx)), s_Type(convert.type)) : s_Type(convert.type));
        const bool isStruct = isStruct_5BOF5uJ9(convertType);
        if ((convert.status & (SS_DID_START | SS_FINALIZED)) == SS_DID_START)
        {
        }
        else if (isAssignableAsArgument_lKMokzZR(expect, convertType))
        {
            if (match)
            {
                fu_STR suffix = (((("\n\t\t"_fu + explainConversion_8BNJKfpL(match, _scope, module, ctx)) + "\n\tand:"_fu) + "\n\t\t"_fu) + explainConversion_8BNJKfpL((path + t_1), _scope, module, ctx));
                if (actual)
                    fail_2n2GzXhw(((((("Conversion ambiguity, multiple ways to convert `"_fu + humanizeType_YKN1kOGX(actual, module, ctx)) + "` into `"_fu) + humanizeType_YKN1kOGX(expect, module, ctx)) + "`: "_fu) + suffix), _here, ctx, _helpers, _helpers_data, _scope, module);
                else
                    fail_2n2GzXhw(((("`using` ambiguity, multiple ways to obtain a `"_fu + humanizeType_YKN1kOGX(expect, module, ctx)) + "` in this scope: "_fu) + suffix), _here, ctx, _helpers, _helpers_data, _scope, module);

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

                                const s_Overload& convert_1 = GET_EiJMwamT(path[i_1], _scope, module, ctx);
                                err += (((qWHAT_5LWmus20(convert_1, module, _scope, ctx) + ": "_fu) + humanizeType_YKN1kOGX(convertType, module, ctx)) + "` ->"_fu);
                            };
                            err += (("\n\t\t`"_fu + qWHAT_5LWmus20(convert, module, _scope, ctx)) + "`."_fu);
                            fail_2n2GzXhw(fu_STR(err), _here, ctx, _helpers, _helpers_data, _scope, module);
                        };
                    };
                };
                path.push(s_Target(t_1));
                fu_DEFER(path.pop());
                descend_GKVHyGTJ(convertType, false, isStruct, bool{}, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, _current_fnort, _here, ctx, module, _current_fn, retype, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, has_converts);
            };
        };
    };
}

                                #ifndef DEFt_each_vaZK3PmL
                                #define DEFt_each_vaZK3PmL
inline void each_vaZK3PmL(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_Scope& _scope, const bool nullary, s_CurrentFn& _current_fn, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_e04WMKmU& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
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
            foreach_HhFOYCnz(u, TODO_FIX_convert_args, _current_fnort, _here, ctx, module, _scope, nullary, _current_fn, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);
        };
        i0 = ss.end;
    };
}
                                #endif

                                #ifndef DEFt_each_78Q6YjBJ
                                #define DEFt_each_78Q6YjBJ
inline void each_78Q6YjBJ(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_Scope& _scope, const bool nullary, s_CurrentFn& _current_fn, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_e04WMKmU& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
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
            foreach_HhFOYCnz(items[i_1], TODO_FIX_convert_args, _current_fnort, _here, ctx, module, _scope, nullary, _current_fn, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

        i0 = ss.end;
    };
}
                                #endif

static void descend_GKVHyGTJ(const s_Type& from, const bool nullary, const bool isStruct, const bool root, const bool local_scope, s_Scope& _scope, const s_Scope& misc_scope, s_ScopeSkipMemos& _ss, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_CurrentFn& _current_fn, const s_SolvedNode& retype, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, fu_VEC<s_ScopeItem>& _field_items, s_Map_e04WMKmU& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const int has_converts)
{
    if (nullary)
        each_vaZK3PmL(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).usings), fu_VEC<s_ScopeSkip>((local_scope ? _ss.usings : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, TODO_FIX_convert_args, _current_fnort, _here, ctx, module, _scope, nullary, _current_fn, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);
    else
    {
        if (isStruct)
        {
            fu_VEC<s_Target> inner { lookupStruct_jCnOT4Df(from, module, ctx).converts };
            for (int i = 0; i < inner.size(); i++)
                foreach_HhFOYCnz(s_Target(inner[i]), TODO_FIX_convert_args, _current_fnort, _here, ctx, module, _scope, nullary, _current_fn, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

        };
        if (has_converts)
            each_78Q6YjBJ(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).converts), fu_VEC<s_ScopeSkip>((local_scope ? _ss.converts : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, TODO_FIX_convert_args, _current_fnort, _here, ctx, module, _scope, nullary, _current_fn, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

    };
}

static fu_VEC<s_Target> tryConvert_X9H9DYNg(const s_Scope& misc_scope, const bool local_scope, const s_Type& expect, const s_Type& actual, const s_SolvedNode& retype, s_Scope& _scope, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_CurrentFn& _current_fn, fu_VEC<s_ScopeItem>& _field_items, s_Map_e04WMKmU& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_Target> match {};
    fu_VEC<s_Target> path {};
    const int has_converts = (local_scope ? _scope : misc_scope).converts.size();
    const s_SolvedNode arg0 { TODO_FIX_convert_args[0] };
    fu_VEC<int> TODO_FIX_reorder {};
    fu_VEC<fu_VEC<s_Target>> TODO_FIX_conversions {};
    descend_GKVHyGTJ(actual, !actual, isStruct_5BOF5uJ9(actual), true, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, _current_fnort, _here, ctx, module, _current_fn, retype, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string, expect, match, path, actual, has_converts);
    return /*NRVO*/ match;
}

                                #ifndef DEFt_grow_if_oob_5polWuqW
                                #define DEFt_grow_if_oob_5polWuqW
inline fu_VEC<s_Target>& grow_if_oob_5polWuqW(fu_VEC<fu_VEC<s_Target>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu_STR qWHAT_hZE4ASQD(const s_Argument& arg, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return (qKW_HIwg52Ja("arg"_fu) + " "_fu) + qID_HIwg52Ja(human_iY2blCZM(arg.name, module, _scope, ctx));
}

                                #ifndef DEFt_replace_2qp5gcGE
                                #define DEFt_replace_2qp5gcGE
inline fu_STR replace_2qp5gcGE(const fu_STR& str, fu::view<char> all, fu::view<char> with)
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

                                #ifndef DEFt_only_kUArmqQn
                                #define DEFt_only_kUArmqQn
inline const fu_VEC<s_Target>& only_kUArmqQn(fu::view<fu_VEC<s_Target>> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

                                #ifndef DEFt_last_Glf4yxiW
                                #define DEFt_last_Glf4yxiW
inline s_Target& last_Glf4yxiW(fu_VEC<s_Target>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static s_Type solveArrlit_itemType_init_tXROWu90(const s_Type& head, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Type _0 {};
    return (_0 = clear_refs_ceGfLbqY(s_Type(head))) ? static_cast<s_Type&&>(_0) : BUG_patsWWTe(fu_STR{}, _here, ctx);
}

static s_Type solveArrlit_done_Aj6QxlAX(const s_Type& itemType, const s_TokenIdx& _here, const s_Context& ctx)
{
    return createArray_ceGfLbqY(itemType, _here, ctx);
}

static s_Target GETfn_sclNMF0A(const int idx, const s_Module& module)
{
    return s_Target { int(module.modid), int(idx) };
}

static fu_STR fnName_IdwmzhUc(const int idx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return (idx ? (("`"_fu + GET_EiJMwamT(GETfn_sclNMF0A(idx, module), _scope, module, ctx).name) + "`"_fu) : "global scope"_fu);
}

static void disambig_GWwf0cgS(const s_Target& matchIdx, const s_Target& overloadIdx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, fu::view<char> id, fu::view<fu_VEC<s_Target>> conversions, fu::view<fu_VEC<s_Target>> conversions_1, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (matchIdx)
    {
        const s_Target& PREV = matchIdx;
        const s_Target& NEXT = overloadIdx;
        const int inner = localOf_Yp26zAW1(PREV, module, _scope, ctx);
        const int outer = localOf_Yp26zAW1(NEXT, module, _scope, ctx);
        const int callsite = SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index;
        if (SELF_TEST && (GET_EiJMwamT(PREV, _scope, module, ctx).kind != "field"_fu))
        {
            int _c = callsite;
            while (_c > inner)
                _c = localOf_Yp26zAW1(GETfn_sclNMF0A(_c, module), module, _scope, ctx);

            if (!(_c == inner))
                BUG_patsWWTe(((((((("Leaking `"_fu + id) + "` between functions [inner/callsite]: "_fu) + fnName_IdwmzhUc(inner, module, _scope, ctx)) + "::"_fu) + qWHAT_5LWmus20(GET_EiJMwamT(PREV, _scope, module, ctx), module, _scope, ctx)) + " is seen from "_fu) + fnName_IdwmzhUc(callsite, module, _scope, ctx)), _here, ctx);

            int _i = inner;
            while (_i > outer)
                _i = localOf_Yp26zAW1(GETfn_sclNMF0A(_i, module), module, _scope, ctx);

            if (!(_i == outer))
                BUG_patsWWTe(((((((((((("Leaking `"_fu + id) + "` between functions [inner/outer]: "_fu) + fnName_IdwmzhUc(inner, module, _scope, ctx)) + "::"_fu) + qWHAT_5LWmus20(GET_EiJMwamT(PREV, _scope, module, ctx), module, _scope, ctx)) + " and "_fu) + fnName_IdwmzhUc(outer, module, _scope, ctx)) + "::"_fu) + qWHAT_5LWmus20(GET_EiJMwamT(NEXT, _scope, module, ctx), module, _scope, ctx)) + " as seen from "_fu) + fnName_IdwmzhUc(callsite, module, _scope, ctx)), _here, ctx);

        };
        fail_2n2GzXhw((((((((((("Ambiguous callsite, matches multiple items in scope: "_fu + explainWhichFn_9LDKdDLX(PREV, conversions, _scope, module, ctx)) + " from "_fu) + fnName_IdwmzhUc(inner, module, _scope, ctx)) + " and "_fu) + explainWhichFn_9LDKdDLX(NEXT, conversions_1, _scope, module, ctx)) + " from "_fu) + fnName_IdwmzhUc(outer, module, _scope, ctx)) + ", as seen from "_fu) + fnName_IdwmzhUc(callsite, module, _scope, ctx)) + "."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

                                #ifndef DEFt_last_At5ZlGyz
                                #define DEFt_last_At5ZlGyz
inline const fu_STR& last_At5ZlGyz(fu::view<fu_STR> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_Target tryMatch__mutargs_c3aAUtmN(fu_STR&& id, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, fu_STR& error, const bool local_scope, const s_Scope& misc_scope, fu::view<s_SolvedNode> args, const int flags, const s_Target& target, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_e04WMKmU& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
{
    const int error_len0 = error.size();
    if (SELF_TEST)
    {
        for (int i = 0; i < args.size(); i++)
        {
            if (!SolvedNodeData_KIpwZvpE(args[i], _current_fnort, _here, ctx, module, _scope).kind)
                BUG_patsWWTe("Falsy arg.kind!"_fu, _here, ctx);

        };
    };
    /*MOV*/ s_Target matchIdx {};
    int minArity = args.size();
    const int numUsings = countUsings_x00nYEku(local_scope, _scope, misc_scope, _ss, _here, ctx);
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
            names.push(fu_STR(((SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).kind == "argid"_fu) ? (*(_0 = &(((void)(some = true), SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).value))) ? *_0 : BUG_patsWWTe(fu_STR{}, _here, ctx)) : (*(const fu_STR*)fu::NIL))));
            if (SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).flags & F_OPT_ARG)
            {
                minArity--;
                add_yDyCXbrU(optional, i);
            };
        };
        if (!(some))
            BUG_patsWWTe(fu_STR{}, _here, ctx);

    };
    fu_STR reusable_mangle {};
    fu_VEC<s_Target> extra_items {};
    if (local_scope && !target)
    {
        s_BitSet seen {};
        if (numUsings)
            each_Z5AVQQDt((local_scope ? _scope : misc_scope).usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, _scope, module, ctx, seen, local_scope, _ss, id, extra_items);

        if (flags & ((F_ACCESS | F_METHOD) | F_OPERATOR))
        {
            for (int i = 0; i < args.size(); i++)
                visitTypeImports_bfa2qCrh(SolvedNodeData_KIpwZvpE(args[i], _current_fnort, _here, ctx, module, _scope).type, module, ctx, seen, _scope, local_scope, _ss, id, extra_items);

        };
    };
    fu_VEC<s_ScopeItem> field_items { (local_scope && ((flags & F_ACCESS) || !minArity) && (minArity <= 1) && maxArity ? _field_items : (*(const fu_VEC<s_ScopeItem>*)fu::NIL)) };
    fu_VEC<fu_STR> alternate_ids {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        bool shadows {};
        while ((overloadIdx = search_dydpfI3t((local_scope ? ((flags & F_IMPLICIT) ? _scope.implicits : _scope.items) : fu::get_view(misc_scope.items, 0, misc_scope.pub_items)), id, scope_iterator, (local_scope ? ((flags & F_IMPLICIT) ? _ss.implicits : _ss.items) : fu::view<s_ScopeSkip>{}), shadows, target, extra_items, field_items)))
        { {
            bool DEBUG_mustMatch = false;
            fu_VEC<fu_VEC<s_Target>> conversions_1 {};
            fu_VEC<int> reorder_1 {};
            bool TODO_FIX_skip_autocalls = false;
            while (true)
            {
                s_Overload overload { GET_EiJMwamT(overloadIdx, _scope, module, ctx) };
                if (lazySolveStart_2wgIEWVi(overloadIdx, overload, _scope, module, _here, ctx, _current_fnort, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string))
                    continue;

                fu_STR kind { overload.kind };
                const bool isType = (kind == "type"_fu);
                if (minArity && isType && !target)
                {
                    const fu_STR& alt = overload.type.vtype.canon;
                    if (alt != id)
                        alternate_ids.push(fu_STR(alt));

                };
                const s_Extended& arity = EXT_qHy9RJpv(overloadIdx, module, _scope, ctx);
                const bool isZeroInit = (isType && !explicitArity);
                if (!isZeroInit && ((arity.max < minArity) || (arity.min > maxArity)))
                {
                    if (DEBUG_mustMatch || error)
                    {
                        fu_STR err = ((qWHAT_5LWmus20(overload, module, _scope, ctx) + ": "_fu) + (((("Wrong number of arguments: expects "_fu + str_98lvWSFU(arity.min, arity.max)) + ", got "_fu) + str_98lvWSFU(minArity, maxArity)) + "."_fu));
                        if (DEBUG_mustMatch)
                            BUG_patsWWTe(("mustMatch.matchFail: "_fu + err), _here, ctx);
                        else
                            error += ("\n\n\t"_fu + err);

                    };
                    goto BL_18;
                };
                fu_VEC<s_Argument> host_args { arity.args };
                const int num_usings = (!isZeroInit && (arity.min > explicitArity) ? (arity.min - explicitArity) : int{});
                bool use_reorder = false;
                if (!names)
                    reorderByNumUsings_0t9EtqJy(use_reorder, reorder_1, host_args, args.size(), num_usings);
                else if (!reorderByArgIDs_0zq7wdwp(use_reorder, reorder_1, names, s_BitSet(optional), host_args, num_usings))
                {
                    if (DEBUG_mustMatch || error)
                    {
                        fu_STR err = ((qWHAT_5LWmus20(overload, module, _scope, ctx) + ": "_fu) + "Argument name mismatch [TODO REPORT]"_fu);
                        if (DEBUG_mustMatch)
                            BUG_patsWWTe(("mustMatch.matchFail: "_fu + err), _here, ctx);
                        else
                            error += ("\n\n\t"_fu + err);

                    };
                    goto BL_18;
                };
                if (optional && reorder_1 && (reorder_1.size() < args.size()) && (reorder_1.size() < arity.max))
                {
                    if (DEBUG_mustMatch || error)
                    {
                        fu_STR err = ((qWHAT_5LWmus20(overload, module, _scope, ctx) + ": "_fu) + "Optional argument ambiguity, not all optional arguments provided, and not all callsite arguments used. Cannot distinguish from a typo. [TODO LIST MISSING ARGS]"_fu);
                        if (DEBUG_mustMatch)
                            BUG_patsWWTe(("mustMatch.matchFail: "_fu + err), _here, ctx);
                        else
                            error += ("\n\n\t"_fu + err);

                    };
                    goto BL_18;
                };
                s_Type REST_TYPE {};
                s_Type REST_EXPECT {};
                const int REST_START = findRestStart_nybhczes(arity);
                const int N = std::max((use_reorder ? reorder_1.size() : args.size()), (!isZeroInit ? arity.min : (*(const int*)fu::NIL)));
                if (REST_START < N)
                {
                    const s_Type& expect = host_args[REST_START].type;
                    if (expect)
                    {
                        s_Type _1 {};
                        REST_EXPECT = ((_1 = tryClear_sliceable_ceGfLbqY(expect)) ? static_cast<s_Type&&>(_1) : fail_2n2GzXhw(((GET_EiJMwamT(overloadIdx, _scope, module, ctx).name + ": Rest argument annotation is not an array: "_fu) + humanizeType_YKN1kOGX(expect, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module));
                    };
                };
                if (N)
                {
                    if (!((reorder_1.size() >= args.size()) || !reorder_1 || optional))
                        BUG_patsWWTe("reorder < args."_fu, _here, ctx);

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
                                    fu_VEC<s_Target> conversion = tryConvert_X9H9DYNg(misc_scope, local_scope, expect, (*(const s_Type*)fu::NIL), s_SolvedNode{}, _scope, TODO_FIX_convert_args, _ss, _current_fnort, _here, ctx, module, _current_fn, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string);
                                    if (conversion)
                                    {
                                        grow_if_oob_5polWuqW(conversions_1, i) = conversion;
                                        continue;
                                    };
                                };
                            };
                            if (DEBUG_mustMatch || error)
                            {
                                fu_STR err = ((qWHAT_5LWmus20(overload, module, _scope, ctx) + ": "_fu) + ("Cannot infer missing argument "_fu + qWHAT_hZE4ASQD(host_arg, module, _scope, ctx)));
                                if (DEBUG_mustMatch)
                                    BUG_patsWWTe(("mustMatch.matchFail: "_fu + err), _here, ctx);
                                else
                                    error += ("\n\n\t"_fu + err);

                            };
                            goto BL_18;
                        };
                        if (host_arg.flags & F_MUSTNAME)
                        {
                            if ((names.size() <= callsiteIndex) || !names[callsiteIndex])
                            {
                                if (DEBUG_mustMatch || error)
                                {
                                    fu_STR err = ((qWHAT_5LWmus20(overload, module, _scope, ctx) + ": "_fu) + ("Argument must be :explicitly named "_fu + qWHAT_hZE4ASQD(host_arg, module, _scope, ctx)));
                                    if (DEBUG_mustMatch)
                                        BUG_patsWWTe(("mustMatch.matchFail: "_fu + err), _here, ctx);
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
                            fu_STR autocall_error = (error ? (((("Cannot match argument "_fu + qWHAT_hZE4ASQD(host_arg, module, _scope, ctx)) + " autocall "_fu) + qCODE_HIwg52Ja(host_arg.autocall)) + ": "_fu) : fu_STR{});
                            const s_Target t = tryMatch__mutargs_c3aAUtmN(fu_STR(host_arg.autocall), autocall_reorder, autocall_conversions, autocall_error, local_scope, misc_scope, autocall_args, 0, s_Target{}, _current_fnort, _here, ctx, module, _scope, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
                            if (!t)
                            {
                                if (DEBUG_mustMatch || error)
                                {
                                    fu_STR err = ((qWHAT_5LWmus20(overload, module, _scope, ctx) + ": "_fu) + replace_2qp5gcGE(autocall_error, "\t"_fu, "\t\t"_fu));
                                    if (DEBUG_mustMatch)
                                        BUG_patsWWTe(("mustMatch.matchFail: "_fu + err), _here, ctx);
                                    else
                                        error += ("\n\n\t"_fu + err);

                                };
                                goto BL_18;
                            };
                            if (autocall_conversions)
                                grow_if_oob_5polWuqW(conversions_1, i) += only_kUArmqQn(autocall_conversions);

                            grow_if_oob_5polWuqW(conversions_1, i) += s_Target(t);
                            if (!(autocall_reorder.size() < 2))
                                BUG_patsWWTe("autocall: reorder"_fu, _here, ctx);

                        };
                        const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                        s_Type actual { (hasConv ? GET_EiJMwamT(last_Glf4yxiW(conversions_1.mutref(i)), _scope, module, ctx).type : SolvedNodeData_KIpwZvpE(args[callsiteIndex], _current_fnort, _here, ctx, module, _scope).type) };
                        if (!expect)
                        {
                            if ((host_arg.flags & F_REF) && !is_mutref_ceGfLbqY(actual, _here, ctx))
                            {
                                if (DEBUG_mustMatch || error)
                                {
                                    fu_STR err = ((qWHAT_5LWmus20(overload, module, _scope, ctx) + ": "_fu) + ((("Argument "_fu + qWHAT_hZE4ASQD(host_arg, module, _scope, ctx)) + " expects a mutref, got "_fu) + humanizeType_YKN1kOGX(actual, module, ctx)));
                                    if (DEBUG_mustMatch)
                                        BUG_patsWWTe(("mustMatch.matchFail: "_fu + err), _here, ctx);
                                    else
                                        error += ("\n\n\t"_fu + err);

                                };
                                goto BL_18;
                            };
                            continue;
                        };
                        if (isAssignableAsArgument_lKMokzZR(expect, (actual ? actual : BUG_patsWWTe("tryMatch: !actual"_fu, _here, ctx))))
                            continue;

                        if (!hasConv)
                        {
                            const s_SolvedNode& arg = args[callsiteIndex];
                            const s_SolvedNode& arg_1 = ((SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).kind == "argid"_fu) ? only_SBGwWDq5(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).items) : arg);
                            s_Type retype = tryRetyping_l57zDXb3(arg_1, expect, _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data);
                            if (retype && isAssignableAsArgument_lKMokzZR(expect, retype))
                                continue;

                        };
                        if (!(flags & F_CONVERSION))
                        {
                            fu_VEC<s_Target> conversion = tryConvert_X9H9DYNg(misc_scope, local_scope, expect, actual, (!hasConv ? args[callsiteIndex] : (*(const s_SolvedNode*)fu::NIL)), _scope, TODO_FIX_convert_args, _ss, _current_fnort, _here, ctx, module, _current_fn, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _current_fn_or_type, _warnings, _anons, options, _notes, shortModuleName, t_string);
                            if (conversion)
                            {
                                grow_if_oob_5polWuqW(conversions_1, i) += conversion;
                                continue;
                            };
                        };
                        if (DEBUG_mustMatch || error)
                        {
                            fu_STR err = ((qWHAT_5LWmus20(overload, module, _scope, ctx) + ": "_fu) + ((((("Argument "_fu + qWHAT_hZE4ASQD(host_arg, module, _scope, ctx)) + " expects "_fu) + humanizeType_YKN1kOGX(expect, module, ctx)) + ", got "_fu) + humanizeType_YKN1kOGX(actual, module, ctx)));
                            if (DEBUG_mustMatch)
                                BUG_patsWWTe(("mustMatch.matchFail: "_fu + err), _here, ctx);
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
                        const s_Type& actual = (hasConv ? GET_EiJMwamT(last_Glf4yxiW(conversions_1.mutref(i)), _scope, module, ctx).type : SolvedNodeData_KIpwZvpE(args[callsiteIndex], _current_fnort, _here, ctx, module, _scope).type);
                        s_Type _3 {};
                        fu::never BL_80_v {};
                        REST_TYPE = ((i == REST_START) ? solveArrlit_itemType_init_tXROWu90(actual, _here, ctx) : ((_3 = type_trySuper_lKMokzZR(REST_TYPE, actual)) ? static_cast<s_Type&&>(_3) : (__extension__ (
                        {
                            if (DEBUG_mustMatch || error)
                            {
                                fu_STR err = ((qWHAT_5LWmus20(overload, module, _scope, ctx) + ": "_fu) + ((("Rest arguments have no common supertype: "_fu + humanizeType_YKN1kOGX(REST_TYPE, module, ctx)) + " <- "_fu) + humanizeType_YKN1kOGX(actual, module, ctx)));
                                if (DEBUG_mustMatch)
                                    BUG_patsWWTe(("mustMatch.matchFail: "_fu + err), _here, ctx);
                                else
                                    error += ("\n\n\t"_fu + err);

                            };
                            goto BL_18;
                        (void)0;}), static_cast<fu::never&&>(BL_80_v))));
                    };
                    REST_TYPE = solveArrlit_done_Aj6QxlAX(REST_TYPE, _here, ctx);
                };
                if (kind == "template"_fu)
                {
                    fu_STR cant_reuse {};
                    fu_STR& args_mangled = ((use_reorder || conversions_1) ? cant_reuse : reusable_mangle);
                    const s_Target specIdx = trySpecialize_8DOXo9mU(overloadIdx, args, args_mangled, REST_START, REST_TYPE, reorder_1, use_reorder, conversions_1, _scope, module, ctx, _here, _current_fnort, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
                    if (is_SPECFAIL_af5x8gdk(specIdx))
                    {
                        if (DEBUG_mustMatch || error)
                        {
                            fu_STR err = ((qWHAT_5LWmus20(overload, module, _scope, ctx) + ": "_fu) + ("Could not specialize: "_fu + _spec_errors[specIdx.index]));
                            if (DEBUG_mustMatch)
                                BUG_patsWWTe(("mustMatch.matchFail: "_fu + err), _here, ctx);
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
                disambig_GWwf0cgS(matchIdx, overloadIdx, module, _scope, ctx, _current_fn, _current_fnort, _here, id, conversions, conversions_1, _helpers, _helpers_data);
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

        id = last_At5ZlGyz(alternate_ids);
        alternate_ids.pop();
    };
    if (error && (error.size() == error_len0) && !matchIdx)
        error += (qID_HIwg52Ja(id) + " is not defined here."_fu);

    return /*NRVO*/ matchIdx;
}

static s_Target match__mutargs_Jo1NWMVs(const s_Scope& misc_scope, const bool local_scope, const fu_STR& id, fu::view<s_SolvedNode> args, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, const int flags, const s_Target& target, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_e04WMKmU& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
{
    fu_STR error {};
    /*MOV*/ const s_Target ret = tryMatch__mutargs_c3aAUtmN(fu_STR(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, _current_fnort, _here, ctx, module, _scope, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
    if (ret)
        return /*NRVO*/ ret;

    error = (("Bad call to "_fu + qID_HIwg52Ja(id)) + ": "_fu);
    const s_Target debug = tryMatch__mutargs_c3aAUtmN(fu_STR(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, _current_fnort, _here, ctx, module, _scope, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
    if (debug)
        BUG_patsWWTe(("Did match on second pass: "_fu + qWHAT_5LWmus20(GET_EiJMwamT(debug, _scope, module, ctx), module, _scope, ctx)), _here, ctx);

    fail_2n2GzXhw(fu_STR(error), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_Type solveArrlit_itemType_VWxU2pFo(fu::view<s_SolvedNode> items, /*MOV*/ s_Type&& itemType, int start, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Target& _current_fnort)
{
    if (!itemType)
    {
        if (start == items.size())
            fail_2n2GzXhw("Cannot infer empty arraylit."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        itemType = solveArrlit_itemType_init_tXROWu90(SolvedNodeData_KIpwZvpE(items[start++], _current_fnort, _here, ctx, module, _scope).type, _here, ctx);
    }
    else if (is_ref_ceGfLbqY(itemType))
        fail_2n2GzXhw("Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    for (int i = start; i < items.size(); i++)
        itemType = superType_Ai0G5C3M("Array literal: "_fu, itemType, SolvedNodeData_KIpwZvpE(items[i], _current_fnort, _here, ctx, module, _scope).type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data);

    return static_cast<s_Type&&>(itemType);
}

static s_SolvedNode createArrlit_X8qw0PcD(fu_VEC<s_SolvedNode>&& items, const s_Type& itemType, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    s_Type itemType_1 = solveArrlit_itemType_VWxU2pFo(items, s_Type(itemType), 0, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort);
    return SolvedNode_HaPiTdVO("arrlit"_fu, solveArrlit_done_Aj6QxlAX(itemType_1, _here, ctx), 0, (*(const fu_STR*)fu::NIL), items, s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode SolvedNode_deepClone_aDzfBTyH(const s_SolvedNode& sn, const s_Target& from, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    s_SolvedNodeData data { SolvedNodeData_WIlQTJ1v(sn, from, _here, ctx, module, _scope) };
    fu_VEC<s_SolvedNode>& items = data.items;
    for (int i = 0; i < items.size(); i++)
        items.mutref(i) = SolvedNode_deepClone_aDzfBTyH(items[i], from, _here, ctx, module, _scope, _current_fnort, _current_fn_or_type);

    return SolvedNode_create_z9Lnxtad(data, _current_fnort, _current_fn_or_type, module, _scope);
}

                                #ifndef DEF_F_EFFECT
                                #define DEF_F_EFFECT
extern const int F_EFFECT;
                                #endif

static s_Type intersectionType_7T3XO5B4(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_Type _0 {};
    return (_0 = type_tryIntersect_lKMokzZR(a, b)) ? static_cast<s_Type&&>(_0) : fail_2n2GzXhw((((((((id ? (("`"_fu + human_iY2blCZM(id, module, _scope, ctx)) + "`: "_fu) : fu_STR{}) + reason) + "Cannot intersect a common subtype: `"_fu) + humanizeType_YKN1kOGX(a, module, ctx)) + "` & `"_fu) + humanizeType_YKN1kOGX(b, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode createLet_2VZ8iLnz(const fu_STR& id, const s_Type& type, const int flags, bool& shadows, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Target& _current_fn_or_type)
{
    const s_Target target = Binding_AYh36Mtv(id, s_Type(type), flags, shadows, _current_fn, _current_fnort, _here, ctx, module, _scope, _root_scope, _ss);
    /*MOV*/ const s_SolvedNode ret = SolvedNode_HaPiTdVO("let"_fu, GET_EiJMwamT(target, _scope, module, ctx).type, flags, GET_EiJMwamT(target, _scope, module, ctx).name, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
    solved_set_bRjXPar3(target, ret, _scope, module);
    return /*NRVO*/ ret;
}

static const s_Target& injectImplicitArg_XhdzKBxw(const fu_STR& id, const s_Type& type, const s_Target& becauseOf, s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Target& _current_fn_or_type)
{
    if (!SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).items || (SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).flags & F_EXTERN))
    {
        if (isStruct_5BOF5uJ9(type))
        {
            const s_Struct& s = lookupStruct_jCnOT4Df(type, module, ctx);
            if (GET_EiJMwamT(s.target, _scope, module, ctx).flags & F_EFFECT)
                return s.target;

        };
        fail_2n2GzXhw((((("No implicit "_fu + qBAD_HIwg52Ja(id)) + " in scope, needed to call "_fu) + qWHAT_5LWmus20(GET_EiJMwamT(becauseOf, _scope, module, ctx), module, _scope, ctx)) + "."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
    for (int i = 0; i < (SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).items.size() + FN_ARGS_BACK); i++)
    {
        const s_SolvedNode arg { SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).items[i] };
        if (SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).value == id)
        {
            s_Type super = intersectionType_7T3XO5B4("Implicit argument collision: "_fu, add_ref_UThBZuDl(s_Type(type), SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).type.lifetime, _here, ctx), SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).type, id, module, _scope, ctx, _here, _helpers, _helpers_data);
            MUT_mMNEzOPJ(arg, _current_fnort, _here, ctx, module, _scope).type = super;
            GET_mut_LT5T09Vv(s_Target(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).target), _scope, module).type = super;
            const s_Target* _0;
            return *(_0 = &(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).target)) ? *_0 : BUG_patsWWTe(fu_STR{}, _here, ctx);
        };
    };
    bool shadows {};
    const int flags = (F_IMPLICIT | F_ARG);
    const s_SolvedNode newArgNode = createLet_2VZ8iLnz(id, type, flags, shadows, _current_fn, _current_fnort, _here, ctx, module, _scope, _root_scope, _ss, _current_fn_or_type);
    const int newArgIdx = (SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).items.size() + FN_ARGS_BACK);
    MUT_mMNEzOPJ(_current_fn.out, _current_fnort, _here, ctx, module, _scope).items.insert(newArgIdx, s_SolvedNode(newArgNode));
    Reference_trackArgument_VniSYxaW(_current_fn.flow, SolvedNodeData_KIpwZvpE(newArgNode, _current_fnort, _here, ctx, module, _scope).target.index, newArgIdx);
    return SolvedNodeData_KIpwZvpE(newArgNode, _current_fnort, _here, ctx, module, _scope).target;
}

static s_SolvedNode bindImplicitArg_7bES7Ghd(const fu_STR& name, const s_Type& type, const s_Target& becauseOf, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, const s_Target& _current_fnort, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Target& _current_fn_or_type, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_e04WMKmU& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_Warning>& _warnings, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
{

    {
        const s_ClosureID _ = tryParseClosureID_RHyKU5hm(name);
        if (isLocal_KoitUSjs(_.target) && (localOf_Yp26zAW1(_.target, module, _scope, ctx) == SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index))
        {
            if (!(_.revision == EXT_qHy9RJpv(SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target, module, _scope, ctx).revision))
                fail_2n2GzXhw(x7E((x7E((("ClosureID.revision mismatch: "_fu + qWHAT_5LWmus20(GET_EiJMwamT(_.target, _scope, module, ctx), module, _scope, ctx)) + "\n\tCaptured at: "_fu), fu::i64dec(_.revision)) + "\n\tCurrent rev: "_fu), fu::i64dec(EXT_qHy9RJpv(SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target, module, _scope, ctx).revision)), _here, ctx, _helpers, _helpers_data, _scope, module);

            if (!(GET_EiJMwamT(_.target, _scope, module, ctx).kind == "var"_fu))
                BUG_patsWWTe(("ClosureID.target is not a var: "_fu + qWHAT_5LWmus20(GET_EiJMwamT(_.target, _scope, module, ctx), module, _scope, ctx)), _here, ctx);

            return CallerNode_vitxf1Xv("__closure"_fu, s_Target(_.target), fu_VEC<s_SolvedNode>{}, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _spec_errors, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
        };
    };
    fu_STR error {};
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    s_Target _0 {};
    const s_Target target = ((_0 = tryMatch__mutargs_c3aAUtmN(fu_STR(name), reorder, conversions, error, true, (*(const s_Scope*)fu::NIL), fu::view<s_SolvedNode>{}, F_IMPLICIT, s_Target{}, _current_fnort, _here, ctx, module, _scope, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string)) ? _0 : (_0 = s_Target(injectImplicitArg_XhdzKBxw(name, type, becauseOf, _current_fn, _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data, _root_scope, _ss, _current_fn_or_type))) ? _0 : BUG_patsWWTe(fu_STR{}, _here, ctx));
    const s_Overload& o = GET_EiJMwamT(target, _scope, module, ctx);
    if (!(o.flags & F_IMPLICIT))
        fail_2n2GzXhw((((("Matching a non-implicit item in scope: `"_fu + name) + "`, binds to call to `"_fu) + GET_EiJMwamT(becauseOf, _scope, module, ctx).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    checkAssignable_bkgTcirN(type, o.type, (("Implicit `"_fu + name) + "` type mismatch"_fu), (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, module, _helpers, _helpers_data, _scope);
    return CallerNode_vitxf1Xv("__implicit"_fu, s_Target(target), fu_VEC<s_SolvedNode>{}, 0, reorder, conversions, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _spec_errors, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
}

static s_SolvedNode SolvedNode_deepClone_tWXBjoW7(const s_SolvedNode& sn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, const s_Target& _current_fn_or_type)
{
    return SolvedNode_deepClone_aDzfBTyH(sn, _current_fnort, _here, ctx, module, _scope, _current_fnort, _current_fn_or_type);
}

                                #ifndef DEFt_last_jhr9I4Fb
                                #define DEFt_last_jhr9I4Fb
inline const s_Node& last_jhr9I4Fb(fu::view<s_Node> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode solveLetLike_dontTouchScope_EYD5y7Cy(const fu_STR& id, int flags, const s_SolvedNode& init, const s_Type& annot, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type)
{
    if (!(annot || SolvedNodeData_KIpwZvpE(init, _current_fnort, _here, ctx, module, _scope).type))
        fail_2n2GzXhw((("Variable declarations without type annotations must be initialized: `"_fu + id) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (annot && SolvedNodeData_KIpwZvpE(init, _current_fnort, _here, ctx, module, _scope).type)
        checkAssignable_bkgTcirN(annot, SolvedNodeData_KIpwZvpE(init, _current_fnort, _here, ctx, module, _scope).type, "Type annotation does not match init expression"_fu, id, "="_fu, _here, ctx, module, _helpers, _helpers_data, _scope);

    const s_Type& t_init = SolvedNodeData_KIpwZvpE(init, _current_fnort, _here, ctx, module, _scope).type;
    s_Type t_init_1 = (is_ref2temp_ceGfLbqY(t_init, _here, ctx) ? clear_refs_ceGfLbqY(s_Type(t_init)) : s_Type(t_init));
    if (!(flags & F_ARG) && is_never_ceGfLbqY(t_init_1))
    {
        makeNote_kDWiwp14(N_DeadLet, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return s_SolvedNode(init);
    };
    if (is_mutref_ceGfLbqY(annot, _here, ctx))
        flags |= F_REF;

    if (flags & F_REF)
    {
        if (!(is_mutref_ceGfLbqY(t_init_1, _here, ctx) || (is_never_ceGfLbqY(t_init_1) && annot) || (!init && (flags & F_ARG))))
            fail_2n2GzXhw(((("`ref` variables must be initialized to a mutable reference: `"_fu + id) + "`"_fu) + (t_init_1 ? (" = "_fu + humanizeType_YKN1kOGX(t_init_1, module, ctx)) : "."_fu)), _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    s_Type t_let = ((annot && ((flags & F_ARG) || !t_init_1)) ? s_Type(annot) : ((is_mutref_ceGfLbqY(t_init_1, _here, ctx) && !(flags & F_REF)) ? clear_mutref_ceGfLbqY(s_Type(t_init_1)) : s_Type(t_init_1)));
    if ((flags & F_ARG) && !(flags & F_MUT))
        t_let = add_ref_UThBZuDl(s_Type(t_let), Lifetime_temporary_8nlJDPX0(), _here, ctx);

    return SolvedNode_HaPiTdVO("let"_fu, t_let, flags, id, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode createLet_x1yDZ5zF(const fu_STR& id, const int flags, const s_SolvedNode& init, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes, const s_Target& _current_fn_or_type, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss)
{
    s_SolvedNode out = solveLetLike_dontTouchScope_EYD5y7Cy(id, int(flags), init, (*(const s_Type*)fu::NIL), _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data, options, _notes, _current_fn_or_type);
    return solveLet_axpNmfxF(out, id, _current_fnort, _here, ctx, module, _scope, _current_fn_or_type, _current_fn, _root_scope, _ss);
}

                                #ifndef DEFt_add_zCNdZfJO
                                #define DEFt_add_zCNdZfJO
inline bool add_zCNdZfJO(fu_VEC<int>& keys, const int item)
{
    int N = keys.size();
    for (int i = 0; i < N; i++)
    {
        const int k = keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                return false;
            };
            N = i;
            break;
        };
    };
    keys.insert(N, int(item));
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

static void detectRecursion_8QJVTz3w(const s_Target& target, s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Options& options, int& _notes)
{
    s_Overload overload { GET_EiJMwamT(target, _scope, module, ctx) };
    if ((overload.status & (SS_FINALIZED | SS_LAZY)) != SS_LAZY)
        return;

    const int note = ((overload.kind == "type"_fu) ? N_TypeRecursion : N_FnRecursion);
    const unsigned status = ((overload.kind == "type"_fu) ? SS_TYPE_RECUR : SS_FN_RECUR);
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (!isFnOrType_a9Pxru24(h, _helpers_data))
            continue;

        if (((void)void(), _helpers_data[h.index]).mask & HM_Lambda)
            BUG_patsWWTe("Recursive lambda, what happened here?"_fu, _here, ctx);

        GET_mut_LT5T09Vv(((void)void(), _helpers_data[h.index]).target, _scope, module).status |= status;
        makeNote_kDWiwp14(note, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        if (((void)void(), _helpers_data[h.index]).target == target)
            return;

    };
    BUG_patsWWTe((x7E((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu), fu::u64dec(overload.status)) + ")`."_fu), _here, ctx);
}

static s_SolvedNode CallerNode_vitxf1Xv(const fu_STR& debug, s_Target&& target, fu_VEC<s_SolvedNode>&& args, const int kills, const fu_VEC<int>& reorder, fu::view<fu_VEC<s_Target>> conversions, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_e04WMKmU& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_Warning>& _warnings, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string)
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
            if (EXT_qHy9RJpv(t, module, _scope, ctx).min || (EXT_qHy9RJpv(t, module, _scope, ctx).max && args[argIdx]))
            {
                args.mutref(argIdx) = CallerNode_vitxf1Xv("__using.a"_fu, s_Target(t), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(args[argIdx]) } }, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _spec_errors, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
                continue;
            };
            if (i)
                fail_2n2GzXhw((("Bad conversion chain, non-leading nullary: `"_fu + GET_EiJMwamT(t, _scope, module, ctx).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

            if (args[argIdx])
                fail_2n2GzXhw("Bad conversion chain, about to throw away an argnode."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            args.mutref(argIdx) = CallerNode_vitxf1Xv("__using.b"_fu, s_Target(t), fu_VEC<s_SolvedNode>{}, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _spec_errors, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
        };
    };
    const int REST_START = findRestStart_nybhczes(EXT_qHy9RJpv(target, module, _scope, ctx));
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
                args.mutref(i) = createArrlit_X8qw0PcD(fu_VEC<s_SolvedNode>(rest), (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type);

        };
    };
    const bool isZeroInit = ((GET_EiJMwamT(target, _scope, module, ctx).kind == "type"_fu) && !args.size());
    if (!isZeroInit)
    {
        fu_VEC<s_Argument> host_args { EXT_qHy9RJpv(target, module, _scope, ctx).args };
        args.resize(host_args.size());
        for (int i = 0; i < args.size(); i++)
        {
            if (!args[i])
            {
                const s_Argument& host_arg = host_args[i];
                args.mutref(i) = (host_arg.dEfault ? SolvedNode_deepClone_aDzfBTyH(host_arg.dEfault, target, _here, ctx, module, _scope, _current_fnort, _current_fn_or_type) : ((void)((host_arg.flags & F_IMPLICIT) || fail_2n2GzXhw((((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + humanizeType_YKN1kOGX(host_arg.type, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)), bindImplicitArg_7bES7Ghd(host_arg.name, host_arg.type, target, module, _scope, ctx, _current_fn, _current_fnort, _here, _helpers, _helpers_data, _current_fn_or_type, _ss, _field_items, _specs, _root_scope, _spec_errors, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string)));
                if (is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(args[i], _current_fnort, _here, ctx, module, _scope).type))
                {
                    args.shrink((i + 1));
                    return deadCall_CsEf0r95(args, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes, _current_fnort, _current_fn_or_type);
                };
            };
        };
    };
    s_Type type { GET_EiJMwamT(target, _scope, module, ctx).type };
    if (GET_EiJMwamT(target, _scope, module, ctx).kind == "field"_fu)
    {
        const s_Type* _0;
        type = add_refs_lKMokzZR((*(_0 = &(SolvedNodeData_KIpwZvpE(only_SBGwWDq5(args), _current_fnort, _here, ctx, module, _scope).type)) ? *_0 : BUG_patsWWTe(fu_STR{}, _here, ctx)), s_Type(GET_EiJMwamT(target, _scope, module, ctx).type));
    }
    else if (GET_EiJMwamT(target, _scope, module, ctx).kind == "var"_fu)
    {
        if (GET_EiJMwamT(target, _scope, module, ctx).flags & F_INLINE)
            return SolvedNode_deepClone_tWXBjoW7(SolvedNodeData_KIpwZvpE(GET_EiJMwamT(target, _scope, module, ctx).solved, _current_fnort, _here, ctx, module, _scope).items[LET_INIT], _current_fnort, _here, ctx, module, _scope, _current_fn_or_type);

        if (!(type.lifetime.uni0n.size() == 1))
            BUG_patsWWTe((("CallerNode: var "_fu + GET_EiJMwamT(target, _scope, module, ctx).name) + " type.lifetime.len != 1"_fu), _here, ctx);

        if (isLocal_KoitUSjs(target) && (localOf_Yp26zAW1(target, module, _scope, ctx) != SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index))
        {
            s_ClosureID _1 {};
            int _2 {};
            const s_ClosureID clID = ((_1 = tryParseClosureID_RHyKU5hm(GET_EiJMwamT(target, _scope, module, ctx).name)) ? _1 : s_ClosureID { s_Target(target), int(((_2 = EXT_qHy9RJpv(parent_pWzRaF0U(target, module, _scope, ctx), module, _scope, ctx).revision) ? _2 : BUG_patsWWTe(("ClosureID: about to serialize at rev 0: "_fu + qWHAT_5LWmus20(GET_EiJMwamT(target, _scope, module, ctx), module, _scope, ctx)), _here, ctx))) });
            target = injectImplicitArg_XhdzKBxw(serialize_ibraIJtk(clID), s_Type(GET_EiJMwamT(target, _scope, module, ctx).type), target, _current_fn, _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data, _root_scope, _ss, _current_fn_or_type);
            const s_Type* _3;
            type = (*(_3 = &(GET_EiJMwamT(target, _scope, module, ctx).type)) ? *_3 : BUG_patsWWTe(("CallerNode: !type on var "_fu + GET_EiJMwamT(target, _scope, module, ctx).name), _here, ctx));
        };
    }
    else
    {
        if (args)
        {
            const fu_VEC<s_Argument>* _4;
            fu_VEC<s_Argument> host_args { (*(_4 = &(EXT_qHy9RJpv(target, module, _scope, ctx).args)) ? *_4 : BUG_patsWWTe(("CallerNode: no host args: "_fu + qWHAT_5LWmus20(GET_EiJMwamT(target, _scope, module, ctx), module, _scope, ctx)), _here, ctx)) };
            if (!((host_args.size() >= args.size())))
                BUG_patsWWTe(("CallerNode: host_arg.len mismatch: "_fu + qWHAT_5LWmus20(GET_EiJMwamT(target, _scope, module, ctx), module, _scope, ctx)), _here, ctx);

            for (int i0 = 0; i0 < args.size(); i0++)
            {
                const s_Argument& host_arg = host_args[i0];
                s_SolvedNode& arg = args.mutref(i0);
                if (SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).kind == "argid"_fu)
                    arg = only_SBGwWDq5(SolvedNodeData_KIpwZvpE(arg, _current_fnort, _here, ctx, module, _scope).items);

                const s_Type& expect = host_arg.type;
                s_Type retype = tryRetyping_l57zDXb3(arg, expect, _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data);
                if (retype && isAssignableAsArgument_lKMokzZR(expect, retype))
                    MUT_mMNEzOPJ(arg, _current_fnort, _here, ctx, module, _scope).type = retype;

            };
        };
        if (GET_EiJMwamT(target, _scope, module, ctx).kind == "inline"_fu)
        {
            const s_ScopeMemo scope0 = Scope_snap_Gy3SoOnf(_scope, _helpers);
            s_ScopeSkipMemos ss0 { _ss };
            fu_DEFER(
            {
                Scope_pop_o9RH7nTe(_scope, scope0, _helpers);
                _ss = ss0;
            });
            s_Template tEmplate { EXT_qHy9RJpv(target, module, _scope, ctx).tEmplate };
            ScopeSkip_setup_Ljn1fXiw(tEmplate, scope0, true, _root_scope, _ss, _here, ctx, _current_fn, _scope);
            _scope.items += fu_VEC<s_ScopeItem>(EXT_qHy9RJpv(target, module, _scope, ctx).extra_items);
            s_Node n_fn { tEmplate.node };
            s_Node n_body { last_jhr9I4Fb(n_fn.items) };
            s_Type ret_expect { GET_EiJMwamT(target, _scope, module, ctx).type };
            fu_VEC<s_Argument> host_args { EXT_qHy9RJpv(target, module, _scope, ctx).args };
            fu_VEC<s_SolvedNode> arg_defs {};
            if (!(host_args.size() == args.size()))
                BUG_patsWWTe("inline: arglen mismatch"_fu, _here, ctx);

            const int locals_start = (args ? GET_next_local_index_LA0p7vFN(_current_fn, _current_fnort, _here, ctx, module, _scope) : int{});
            for (int i = 0; i < args.size(); i++)
            {
                s_Argument slot { host_args[i] };
                arg_defs += createLet_x1yDZ5zF(fu_STR(slot.name), (slot.flags & ~(F_ARG | F_COMPOUND_ID)), args[i], _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data, options, _notes, _current_fn_or_type, _current_fn, _root_scope, _ss);
                if (slot.flags & F_INLINE)
                    arg_defs.pop();

            };
            /*MOV*/ const s_SolvedNode s_body = solveBlock_HVo1Po1s(n_body, ret_expect, 0, short(short((short((HM_CanReturn | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL)))) | (arg_defs ? HM_KeepBlock : (*(const short*)fu::NIL))))), kills, n_fn.value, locals_start, _scope, _helpers, module, _current_fn, _current_fnort, _here, ctx, _helpers_data, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
            if (!(SolvedNodeData_KIpwZvpE(s_body, _current_fnort, _here, ctx, module, _scope).kind))
                BUG_patsWWTe("inline: no s_body.kind"_fu, _here, ctx);

            MUT_mMNEzOPJ(s_body, _current_fnort, _here, ctx, module, _scope).items.splice(0, 0, arg_defs);
            return /*NRVO*/ s_body;
        };
        if (is_ref_ceGfLbqY(type))
            type.lifetime = Lifetime_test_J4SMmTB5(Lifetime_replaceArgsAtCallsite_fYTZlVjT(target, args, _scope, module, ctx, _here, _current_fnort), true, _current_fn, _current_fnort, _here, ctx, module, _scope);

    };
    /*MOV*/ const s_SolvedNode callsite = SolvedNode_HaPiTdVO("call"_fu, type, 0, debug, args, target, 0, _here, _current_fnort, _current_fn_or_type, module, _scope);
    if ((target.modid < 0) || (target.modid == module.modid))
    {
        fu::view<char> k = GET_EiJMwamT(target, _scope, module, ctx).kind;
        if ((k == "fn"_fu) || (k == "type"_fu))
        {
            add_zCNdZfJO(EXT_mut_lqSDNFDF(target, module, _scope).callers, _current_fn_or_type.index);
            detectRecursion_8QJVTz3w(target, _scope, module, ctx, _helpers, _helpers_data, _here, options, _notes);
        };
    };
    return /*NRVO*/ callsite;
}

static s_SolvedNode solveCall_ajgBzohn(const s_Node& node, const s_Target& target, const int kills, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> args = solveNodes_J7uR9TQA(node.items, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(if_last_symheVxb(args), _current_fnort, _here, ctx, module, _scope).type))
        return deadCall_CsEf0r95(args, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes, _current_fnort, _current_fn_or_type);

    fu_STR id { node.value };
    if (!id)
    {
        if (!(target))
            BUG_patsWWTe(fu_STR{}, _here, ctx);

    };
    const int qualified = (node.flags & F_COMPOUND_ID);
    const s_Scope& misc_scope = (qualified ? dequalify_andGetScope_l5p1Mpvq(id, _here, ctx, _helpers, _helpers_data, _scope, module) : (*(const s_Scope*)fu::NIL));
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    const s_Target callTargIdx = match__mutargs_Jo1NWMVs(misc_scope, !qualified, id, args, reorder, conversions, node.flags, target, _current_fnort, _here, ctx, module, _scope, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
    return CallerNode_vitxf1Xv(node.value, s_Target(callTargIdx), fu_VEC<s_SolvedNode>(args), kills, reorder, conversions, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fnort, _current_fn_or_type, _current_fn, _ss, _field_items, _specs, _root_scope, _spec_errors, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string);
}

static s_Type evalTypeAnnot_t9H2NZ5S(const s_Node& node, const s_Map_3Igdp5fJ& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (node.kind == "call"_fu)
    {
        fu::view<s_Node> items = node.items;
        if (items.size() == 1)
        {
            if (node.value == "&"_fu)
            {
                s_Type _0 {};
                return (_0 = T_qgfM8wRA(0, node, typeParams, _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), add_ref_UThBZuDl(static_cast<s_Type&&>(_0), Lifetime_temporary_8nlJDPX0(), _here, ctx));
            };
            if (node.value == "&mut"_fu)
            {
                s_Type _1 {};
                return (_1 = T_qgfM8wRA(0, node, typeParams, _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), add_mutref_UThBZuDl(static_cast<s_Type&&>(_1), Lifetime_temporary_8nlJDPX0(), _here, ctx));
            };
            if (node.value == "[]"_fu)
            {
                s_Type _2 {};
                return (_2 = T_qgfM8wRA(0, node, typeParams, _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), createArray_ceGfLbqY(static_cast<s_Type&&>(_2), _here, ctx));
            };
        };
        s_SolvedNode _3 {};
        return s_Type((_3 = solveCall_ajgBzohn(node, s_Target{}, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), SolvedNodeData_KIpwZvpE(s_SolvedNode(_3), _current_fnort, _here, ctx, module, _scope)).type);
    }
    else if (node.kind == "typeparam"_fu)
        return s_Type(evalTypeParam_h0N8m5LF(node.value, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss));
    else if ((node.kind == "arrlit"_fu) && (node.items.size() == 1))
    {
        s_Type _4 {};
        return (_4 = T_qgfM8wRA(0, node, typeParams, _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string), createSlice_UThBZuDl(static_cast<s_Type&&>(_4), Lifetime_temporary_8nlJDPX0(), _here, ctx));
    };
    fail_2n2GzXhw((x7E((("TODO evalTypeAnnot: "_fu + node.kind) + "["_fu), fu::i64dec(node.items.size())) + "]"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode solveLetLike_dontTouchScope_8mF4zFmd(const s_Node& node, const s_Type& specType, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Node& n_annot = node.items[LET_TYPE];
    s_Type annot = (n_annot ? evalTypeAnnot_t9H2NZ5S(n_annot, (*(const s_Map_3Igdp5fJ*)fu::NIL), _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_Type{});
    int flags = node.flags;
    if (is_mutref_ceGfLbqY(specType, _here, ctx) && !((flags & F_REF) || is_mutref_ceGfLbqY(annot, _here, ctx)))
        flags |= F_RELAXABLE_REF;

    const s_Type& annot_1 = (specType ? specType : annot);
    s_Type annot_2 = ((annot_1 && (node.flags & F_REF)) ? add_mutref_UThBZuDl(s_Type(annot_1), Lifetime_temporary_8nlJDPX0(), _here, ctx) : s_Type(annot_1));
    const s_Node& n_init = node.items[LET_INIT];
    const s_SolvedNode init = (n_init ? solveNode_DvkgWyBy(n_init, annot_2, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    const s_SolvedNode init_1 = ((specType && SolvedNodeData_KIpwZvpE(init, _current_fnort, _here, ctx, module, _scope).type && !isAssignable_lKMokzZR(specType, SolvedNodeData_KIpwZvpE(init, _current_fnort, _here, ctx, module, _scope).type)) ? s_SolvedNode{} : s_SolvedNode(init));
    return solveLetLike_dontTouchScope_EYD5y7Cy(node.value, int(flags), init_1, annot_2, _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data, options, _notes, _current_fn_or_type);
}

static s_SolvedNode solveMember_Vqp6DkUo(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Target& _current_fnort, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(node.kind == "let"_fu))
        BUG_patsWWTe(("solveStructMembers_1: "_fu + node.kind), _here, ctx);

    if (node.items[LET_INIT] && (node.items[LET_INIT].kind != "definit"_fu))
        fail_2n2GzXhw(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node.value) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return solveLetLike_dontTouchScope_8mF4zFmd(node, (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
}

                                #ifndef DEFt_map_hnKGtlPd
                                #define DEFt_map_hnKGtlPd
inline fu_VEC<s_SolvedNode> map_hnKGtlPd(fu::view<s_Node> a, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Target& _current_fnort, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember_Vqp6DkUo(a[i], _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_F_PREDICATE
                                #define DEF_F_PREDICATE
extern const int F_PREDICATE;
                                #endif

                                #ifndef DEFt_add_XzWcy3Df
                                #define DEFt_add_XzWcy3Df
inline void add_XzWcy3Df(fu_VEC<int>& a, fu::view<int> b)
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

                                #ifndef DEFt_each_PaoFbm2Y
                                #define DEFt_each_PaoFbm2Y
inline void each_PaoFbm2Y(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu_VEC<int>& structImports)
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
            add_zCNdZfJO(structImports, import);
        };
        i0 = ss.end;
    };
}
                                #endif

static s_SolvedNode __solveStruct_XmElc5Yz(const bool solve, const s_Node& node, const s_Target& into, s_CurrentFn& _current_fn, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, fu_VEC<s_HelpersData>& _helpers_data, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const fu_STR& origId = node.value;
    fu_STR _0 {};
    fu_STR name = (origId ? fu_STR(origId) : (_0 = fu_STR((SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target ? GET_EiJMwamT(SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target, _scope, module, ctx).name : (*(const fu_STR*)fu::NIL)))) ? static_cast<fu_STR&&>(_0) : "Anon"_fu);
    s_Target out_target { into };
    s_Type out_type {};
    if (out_target)
        out_type = GET_EiJMwamT(out_target, _scope, module, ctx).type;
    else
    {
        out_type = initStruct_afXwHDbN(name, node.flags, SELF_TEST, module);
        out_target = Scope_Typedef_n9y3Tebd(_scope, origId, out_type, node.flags, name, SS_LAZY, module);
        EXT_mut_lqSDNFDF(out_target, module, _scope).tEmplate = createTemplate_CZbAaa86(node, _current_fn, _scope, _helpers, _ss);
    };
    if (!solve)
        return createEmpty_M9eYCmcR("empty"_fu, out_type, out_target, _here, _current_fnort, _current_fn_or_type, module, _scope);

    const s_Target current_fn_or_type0 { _current_fn_or_type };
    fu_DEFER(_current_fn_or_type = current_fn_or_type0);
    _current_fn_or_type = out_target;
    const s_Target& _current_fnort_1 = out_target;
    GET_mut_LT5T09Vv(out_target, _scope, module).status |= SS_DID_START;
    const int helpers0 = _helpers.size();
    const int helpers_data0 = _helpers_data.size();
    fu_DEFER(
    {
        _helpers.shrink(helpers0);
        _helpers_data.shrink(helpers_data0);
    });
    push_DOX5pwMC(s_HelpersData { s_Target((out_target ? out_target : BUG_patsWWTe((("solveStruct: no out_target: `"_fu + origId) + "`."_fu), _here, ctx))), fu_STR{}, short(HM_Struct), 0, 0, 0, s_Type{}, s_Type{} }, _helpers, _helpers_data);
    fu_VEC<s_Target> structConverts {};
    fu_VEC<int> structImports {};
    int flat_cnt {};
    bool all_triv = true;
    fu_VEC<s_SolvedNode> members = map_hnKGtlPd(node.items, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort_1, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    {
        fu_VEC<s_ScopeItem>& innerScope = lookupStruct_mut_MHqzuNPp(out_type.vtype.canon, module).items;
        if (!innerScope && members)
        {
            fu_VEC<s_Argument> args = fu_VEC<s_Argument> { fu::slate<1, s_Argument> { s_Argument { "this"_fu, fu_STR{}, despeculateStruct_8liKyPID(s_Type(out_type)), s_SolvedNode{}, 0, 0, s_BitSet{} } } };
            for (int i = 0; i < members.size(); i++)
            {
                const fu_STR& id = node.items[i].value;
                const int isPredicate = (node.items[i].flags & F_PREDICATE);
                const s_Target target = Scope_create_h7gWxUs8(_scope, "field"_fu, (id ? id : BUG_patsWWTe(fu_STR{}, _here, ctx)), (*(const s_Type*)fu::NIL), (F_PUB | isPredicate), 0u, 0, module);
                s_Extended& ext = EXT_mut_lqSDNFDF(target, module, _scope);
                ext.args = args;
                ext.min = 1;
                ext.max = 1;
                Scope_set_vOYMgdEn(innerScope, id, target, false);
            };
            _field_items += innerScope;
        };
        if (!(innerScope.size() == members.size()))
            BUG_patsWWTe((((x7E((x7E((x7E("solveStructMembers_3: field lens mismatch: "_fu, fu::i64dec(innerScope.size())) + " vs "_fu), fu::i64dec(members.size())) + "/"_fu), fu::i64dec(node.items.size())) + ": `struct "_fu) + name) + "`."_fu), _here, ctx);

        for (int i = 0; i < innerScope.size(); i++)
        {
            const s_ScopeItem& item = innerScope[i];
            const s_SolvedNode& member = members[i];
            if (!(item.id == SolvedNodeData_KIpwZvpE(member, _current_fnort_1, _here, ctx, module, _scope).value))
                BUG_patsWWTe("solveStructMembers_4: field id mismatch."_fu, _here, ctx);

            s_Overload& field = GET_mut_LT5T09Vv(target_dYaABoRz(item), _scope, module);
            field.type = SolvedNodeData_KIpwZvpE(member, _current_fnort_1, _here, ctx, module, _scope).type;
            int _1 {};
            flat_cnt += ((_1 = int(tryLookupStruct_qcjLQIhC(SolvedNodeData_KIpwZvpE(member, _current_fnort_1, _here, ctx, module, _scope).type, module, ctx).flat_cnt)) ? _1 : 1);
            if (all_triv)
                all_triv = is_trivial_qcjLQIhC(SolvedNodeData_KIpwZvpE(member, _current_fnort_1, _here, ctx, module, _scope).type, module, ctx);

            if (SolvedNodeData_KIpwZvpE(member, _current_fnort_1, _here, ctx, module, _scope).flags & F_USING)
            {
                structConverts.push(target_dYaABoRz(item));
                const int m = modidOfOrigin_5BOF5uJ9(field.type);
                if (m && (m != module.modid))
                    add_Ze6DW20r(structImports, m);

                add_XzWcy3Df(structImports, lookupTypeImports_qcjLQIhC(field.type, module, ctx));
            };
        };
    };
    each_PaoFbm2Y(_scope.imports, _ss.imports, 0, structImports);

    {
        bool CHANGE = false;
        int commonQuals = -1;
        for (int i = 0; i < members.size(); i++)
            commonQuals &= SolvedNodeData_KIpwZvpE(members[i], _current_fnort_1, _here, ctx, module, _scope).type.vtype.quals;

        const int quals0 = out_type.vtype.quals;
        const int quals1 = (out_type.vtype.quals &= commonQuals);

        {
            if (!(CHANGE))
                CHANGE = (quals0 != quals1);

        };

        {
            s_Struct& s = lookupStruct_mut_MHqzuNPp(out_type.vtype.canon, module);
            s.target = (out_target ? out_target : BUG_patsWWTe("No struct/out_target."_fu, _here, ctx));
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
            if (!(GET_EiJMwamT(s.target, _scope, module, ctx).status & SS_DID_START))
                BUG_patsWWTe("Setting stuff but missing SS_DID_START."_fu, _here, ctx);

        };
        const int max = members.size();
        int min = 0;
        fu_VEC<s_Argument> args {};
        for (int i_1 = 0; i_1 < members.size(); i_1++)
        {
            const s_SolvedNode& member = members[i_1];
            const fu_STR* _2;
            const s_Type* _3;
            s_Argument arg = s_Argument { fu_STR((*(_2 = &(SolvedNodeData_KIpwZvpE(member, _current_fnort_1, _here, ctx, module, _scope).value)) ? *_2 : BUG_patsWWTe(fu_STR{}, _here, ctx))), fu_STR{}, s_Type((*(_3 = &(SolvedNodeData_KIpwZvpE(member, _current_fnort_1, _here, ctx, module, _scope).type)) ? *_3 : BUG_patsWWTe(fu_STR{}, _here, ctx))), s_SolvedNode(SolvedNodeData_KIpwZvpE(member, _current_fnort_1, _here, ctx, module, _scope).items[LET_INIT]), (SolvedNodeData_KIpwZvpE(member, _current_fnort_1, _here, ctx, module, _scope).flags & F_MUSTNAME), 0, s_BitSet{} };
            if (!arg.dEfault)
                min++;

            args.push(s_Argument(arg));
        };
        if (max && !min)
            min++;

        s_Extended& ext = EXT_mut_lqSDNFDF(out_target, module, _scope);
        ext.min = min;
        ext.max = max;
        ext.args = args;
        const int mustUpdate = (CHANGE ? ext.callers.size() : int{});
        s_Overload& overload = GET_mut_LT5T09Vv(out_target, _scope, module);
        overload.type = out_type;
        if (mustUpdate)
            overload.status |= SS_UPDATED;

    };
    lazySolveEnd_b7wxn2Y6(out_target, _scope, module, ctx, _here, options, _helpers, _helpers_data, _notes, _current_fnort_1, _specs, _ss, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, shortModuleName, _field_items, t_string);
    return s_SolvedNode{};
}

static s_SolvedNode uPrepStruct_YJybuXpC(const s_Node& node, s_CurrentFn& _current_fn, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_Target& _current_fn_or_type, fu_VEC<s_HelpersData>& _helpers_data, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    return __solveStruct_XmElc5Yz(false, node, s_Target{}, _current_fn, _current_fnort, _here, ctx, module, _scope, _helpers, _ss, _current_fn_or_type, _helpers_data, _warnings, _specs, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
}

static s_SolvedNode unorderedPrep_A_PhJ6EpYp(const s_Node& node, s_CurrentFn& _current_fn, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_Target& _current_fn_or_type, fu_VEC<s_HelpersData>& _helpers_data, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu::view<char> k = node.kind;
    if (k == "fn"_fu)
        return uPrepFn_A_e3IBKEIn(node, _current_fn, _current_fnort, _here, ctx, module, _scope, _helpers, _ss, _root_scope, _current_fn_or_type);

    if (k == "struct"_fu)
        return uPrepStruct_YJybuXpC(node, _current_fn, _current_fnort, _here, ctx, module, _scope, _helpers, _ss, _current_fn_or_type, _helpers_data, _warnings, _specs, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    fail_2n2GzXhw(("TODO: "_fu + k), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void uPrepFn_B_NT4ARUmK(const s_Target& target, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    s_Template& tEmplate = EXT_mut_lqSDNFDF(target, module, _scope).tEmplate;
    if (tEmplate.scope_memo)
        tEmplate.scope_memo = Scope_snap_Gy3SoOnf(_scope, _helpers);

}

static void unorderedPrep_B_ShfwCoSw(const s_Node& node, const s_Target& into, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    fu::view<char> k = node.kind;
    if (k == "fn"_fu)
        uPrepFn_B_NT4ARUmK(into, module, _scope, _helpers);

}

static fu_VEC<s_SolvedNode> solveNodes_J7uR9TQA(fu::view<s_Node> nodes, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const int kills, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_SolvedNode> result {};
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_Node& node = nodes[i];
        if (!node)
            continue;

        const int unorderedClass = unorderedClassify_HdqtaGUx(node.kind);
        if (!unorderedClass)
        {
            HERE_fVfHq6aR(node.token, _here);
            const bool last = (i == (nodes.size() - 1));
            const s_Type& type = ((last && use_type_last) ? type_last : type_all);
            const int kills_1 = (last ? kills : (*(const int*)fu::NIL));
            const s_SolvedNode solved = solveNode_DvkgWyBy(node, type, kills_1, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
            result += s_SolvedNode(solved);
            if (is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(solved, _current_fnort, _here, ctx, module, _scope).type))
            {
                if (i < (nodes.size() - 1))
                    makeNote_kDWiwp14(N_DeadCode, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

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
            const s_Node& node_1 = (*(_0 = &(nodes[i_1])) ? *_0 : BUG_patsWWTe("solveNodes, prep-a: falsy node"_fu, _here, ctx));
            if (unorderedClassify_HdqtaGUx(node_1.kind) != unorderedClass)
            {
                i1 = i_1;
                break;
            };
            HERE_fVfHq6aR(node_1.token, _here);
            result += unorderedPrep_A_PhJ6EpYp(node_1, _current_fn, _current_fnort, _here, ctx, module, _scope, _helpers, _ss, _root_scope, _current_fn_or_type, _helpers_data, _warnings, _specs, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        };
        if (!(i1 > i0))
            BUG_patsWWTe(fu_STR{}, _here, ctx);

        i = (i1 - 1);
        for (int i_2 = i0; i_2 < i1; i_2++)
        {
            const s_Node* _1;
            const s_Node& node_1 = (*(_1 = &(nodes[i_2])) ? *_1 : BUG_patsWWTe("solveNodes, prep-b: falsy node"_fu, _here, ctx));
            HERE_fVfHq6aR(node_1.token, _here);
            unorderedPrep_B_ShfwCoSw(node_1, SolvedNodeData_KIpwZvpE(result[(i_2 + offset)], _current_fnort, _here, ctx, module, _scope).target, module, _scope, _helpers);
        };
        bool repeat = true;
        while (repeat)
        {
            repeat = false;
            for (int i_3 = i0; i_3 < i1; i_3++)
            {
                const s_Node* _2;
                const s_Node& node_1 = (*(_2 = &(nodes[i_3])) ? *_2 : BUG_patsWWTe("solveNodes, solve: falsy node"_fu, _here, ctx));
                HERE_fVfHq6aR(node_1.token, _here);
                const s_Target into { SolvedNodeData_KIpwZvpE(result[(i_3 + offset)], _current_fnort, _here, ctx, module, _scope).target };
                if (lazySolveStart_2wgIEWVi(into, s_Overload(GET_EiJMwamT(into, _scope, module, ctx)), _scope, module, _here, ctx, _current_fnort, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _current_fn_or_type, _warnings, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string))
                    repeat = true;

            };
        };
    };
    return /*NRVO*/ result;
}

static s_SolvedNode solveRoot_d1s6BB0E(const s_Node& node, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    push_DOX5pwMC(s_HelpersData{}, _helpers, _helpers_data);
    fu_VEC<s_SolvedNode> items = solveNodes_J7uR9TQA(node.items, t_void, (*(const s_Type*)fu::NIL), bool{}, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (!is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(last_3cih1E88(items), _current_fnort, _here, ctx, module, _scope).type))
    {
        /*MOV*/ const s_SolvedNode root = solved_mViSzIsN(node, t_void, items, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
        runAllPasses_VnsQEjJz(root, _current_fnort, _here, ctx, module, _scope, _current_fn, _warnings, _helpers, _helpers_data, _current_fn_or_type, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        return /*NRVO*/ root;
    };
    _here = SolvedNodeData_KIpwZvpE(last_3cih1E88(items), _current_fnort, _here, ctx, module, _scope).token;
    fail_2n2GzXhw("Noreturn during static init: this program will never finish booting."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_HM_CanBreak
                                #define DEF_HM_CanBreak
extern const short HM_CanBreak;
                                #endif

                                #ifndef DEFt_only_vukGqR3r
                                #define DEFt_only_vukGqR3r
inline const s_Node& only_vukGqR3r(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_SolvedNode solveArgID_5OHYpcvD(const s_Node& node, const s_Type& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_SolvedNode expr = solveNode_DvkgWyBy(only_vukGqR3r(node.items), type, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    return solved_mViSzIsN(node, SolvedNodeData_KIpwZvpE(expr, _current_fnort, _here, ctx, module, _scope).type, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveArrlit_OOVLkW5Q(const s_Node& node, const s_Type& type, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    s_Type itemType = (type ? tryClear_sliceable_ceGfLbqY(type) : s_Type{});
    if (!itemType && isStruct_5BOF5uJ9(type))
        return solveCall_ajgBzohn(node, s_Target(lookupStruct_jCnOT4Df(type, module, ctx).target), 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    fu_VEC<s_SolvedNode> args = solveNodes_J7uR9TQA(node.items, itemType, (*(const s_Type*)fu::NIL), bool{}, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(if_last_symheVxb(args), _current_fnort, _here, ctx, module, _scope).type))
    {
        makeNote_kDWiwp14(N_DeadArrlit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return createBlock_XLQezDDx(t_never, fu_VEC<s_SolvedNode>(args), s_Helpers{}, _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data, _current_fn_or_type);
    };
    if (!(node.flags & F_NAMED_ARGS))
        return createArrlit_X8qw0PcD(fu_VEC<s_SolvedNode>(args), itemType, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type);

    fail_2n2GzXhw("TODO: solveArrlit: tryMatch by [ argnames: ... ] without function name."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode popAndOr_FA5FTcpQ(s_SolvedNode& node, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope)
{
    const int N = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items.size();
    /*MOV*/ const s_SolvedNode pop { MUT_mMNEzOPJ(node, _current_fnort, _here, ctx, module, _scope).items[(N - 1)] };
    if (N > 2)
        MUT_mMNEzOPJ(node, _current_fnort, _here, ctx, module, _scope).items.pop();
    else
    {
        const s_SolvedNode& head = SolvedNodeData_KIpwZvpE(node, _current_fnort, _here, ctx, module, _scope).items[0];
        node = head;
    };
    return /*NRVO*/ pop;
}

static s_SolvedNode if_A_and_NEVER_then_B_else_C_8lNoccKL(const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, int& _notes, s_SolvedNode& cond, const s_Target& _current_fnort)
{
    makeNote_kDWiwp14(N_DeadIfCons, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    return popAndOr_FA5FTcpQ(cond, _current_fnort, _here, ctx, module, _scope);
}

static s_SolvedNode solveIf_toKjv1r5(const s_Node& node, s_Type&& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    /*MOV*/ s_SolvedNode cond = solveNode_DvkgWyBy(node.items[0], t_bool, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(cond, _current_fnort, _here, ctx, module, _scope).type))
    {
        makeNote_kDWiwp14(N_DeadIfCond, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return /*NRVO*/ cond;
    };
    const s_SolvedNode cons = (((SolvedNodeData_KIpwZvpE(cond, _current_fnort, _here, ctx, module, _scope).kind == "and"_fu) && is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(last_3cih1E88(SolvedNodeData_KIpwZvpE(cond, _current_fnort, _here, ctx, module, _scope).items), _current_fnort, _here, ctx, module, _scope).type)) ? if_A_and_NEVER_then_B_else_C_8lNoccKL(options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes, cond, _current_fnort) : solveBlock_HVo1Po1s(node.items[1], type, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _here, ctx, _helpers_data, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string));
    const s_SolvedNode alt = solveBlock_HVo1Po1s(node.items[2], type, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _here, ctx, _helpers_data, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (!is_void_ceGfLbqY(type))
        type = superType_Ai0G5C3M("if/else: "_fu, SolvedNodeData_KIpwZvpE(cons, _current_fnort, _here, ctx, module, _scope).type, SolvedNodeData_KIpwZvpE(alt, _current_fnort, _here, ctx, module, _scope).type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data);

    if (is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(cons, _current_fnort, _here, ctx, module, _scope).type) && is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(alt, _current_fnort, _here, ctx, module, _scope).type))
        type = t_never;

    return solved_mViSzIsN(node, (type ? type : BUG_patsWWTe(fu_STR{}, _here, ctx)), fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(cond), s_SolvedNode(cons), s_SolvedNode(alt) } }, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveOr_g5XaCyCQ(const s_Node& node, s_Type&& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> items = solveNodes_J7uR9TQA(node.items, (is_void_ceGfLbqY(type) ? t_bool : type), type, true, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (items.size() < 2)
        return s_SolvedNode(only_SBGwWDq5(items));

    if (is_void_ceGfLbqY(type))
        type = t_bool;

    if (!(type == t_bool))
    {
        s_Type sumType {};
        bool hasNever = false;
        for (int i = items.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items[i];
            if (is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(item, _current_fnort, _here, ctx, module, _scope).type))
            {
                hasNever = true;
                continue;
            };
            const s_SolvedNode& andLast = (hasNever && (SolvedNodeData_KIpwZvpE(item, _current_fnort, _here, ctx, module, _scope).kind == "and"_fu) && SolvedNodeData_KIpwZvpE(item, _current_fnort, _here, ctx, module, _scope).items ? SolvedNodeData_KIpwZvpE(item, _current_fnort, _here, ctx, module, _scope).items[(SolvedNodeData_KIpwZvpE(item, _current_fnort, _here, ctx, module, _scope).items.size() - 1)] : (*(const s_SolvedNode*)fu::NIL));
            const s_Type& itemType = ((andLast && !is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(andLast, _current_fnort, _here, ctx, module, _scope).type)) ? (MUT_mMNEzOPJ(item, _current_fnort, _here, ctx, module, _scope).type = SolvedNodeData_KIpwZvpE(andLast, _current_fnort, _here, ctx, module, _scope).type) : SolvedNodeData_KIpwZvpE(item, _current_fnort, _here, ctx, module, _scope).type);
            if (sumType)
            {
                sumType = type_trySuper_lKMokzZR(sumType, itemType);
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
    return solved_mViSzIsN(node, type, items, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveAnd_p3dIUjC0(const s_Node& node, s_Type&& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> items = solveNodes_J7uR9TQA(node.items, (is_void_ceGfLbqY(type) ? t_bool : type), type, true, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (items.size() < 2)
        return s_SolvedNode(only_SBGwWDq5(items));

    if (is_void_ceGfLbqY(type))
        type = t_bool;

    if (!(type == t_bool))
    {
        s_Type sumType {};
        for (int i = items.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items[i];
            if (is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(item, _current_fnort, _here, ctx, module, _scope).type))
                continue;

            if (sumType)
            {
                sumType = type_trySuper_lKMokzZR(sumType, SolvedNodeData_KIpwZvpE(item, _current_fnort, _here, ctx, module, _scope).type);
                if (!is_ref_ceGfLbqY(sumType))
                    break;

            }
            else
            {
                type = SolvedNodeData_KIpwZvpE(item, _current_fnort, _here, ctx, module, _scope).type;
                sumType = SolvedNodeData_KIpwZvpE(item, _current_fnort, _here, ctx, module, _scope).type;
                if (is_zeroes_ceGfLbqY(type))
                    break;

            };
        };
        if (!is_ref_ceGfLbqY(sumType))
        {
            if (is_ref_ceGfLbqY(type))
            {
                if (CANNOT_definit_mutrefs)
                    type = clear_mutref_ceGfLbqY(s_Type(type));

                type.lifetime = Lifetime_makeShared_zJCUz9W3(type.lifetime);
            };
        }
        else
            type = sumType;

    };
    return solved_mViSzIsN(node, type, items, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

                                #ifndef DEF_HM_Anon
                                #define DEF_HM_Anon
extern const short HM_Anon;
                                #endif

static s_SolvedNode solveLetStatement_mntFuLC1(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(node.kind == "let"_fu))
        BUG_patsWWTe((("Expected a `let` statement, got: `"_fu + node.kind) + "`."_fu), _here, ctx);

    return solveNode_DvkgWyBy(node, t_void, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
}

static s_SolvedNode solveLoop_N8jPSkVJ(const s_Node& node, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, fu_VEC<s_HelpersData>& _helpers_data, s_Target& _current_fn_or_type, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_ScopeMemo scope0 = Scope_snap_Gy3SoOnf(_scope, _helpers);
    fu_DEFER(Scope_pop_o9RH7nTe(_scope, scope0, _helpers));
    const int brk_idx = _helpers.size();
    push_DOX5pwMC(s_HelpersData { s_Target{}, fu_STR(node.value), short((HM_Anon | HM_CanBreak)), int(SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index), 0, GET_next_local_index_LA0p7vFN(_current_fn, _current_fnort, _here, ctx, module, _scope), s_Type{}, s_Type(t_void) }, _helpers, _helpers_data);
    const s_Node& n_init = node.items[LOOP_INIT];
    const s_Node& n_pre_cond = node.items[LOOP_COND];
    const s_Node& n_body = node.items[LOOP_BODY];
    const s_Node& n_post_cond = node.items[LOOP_POST_COND];
    const s_Node& n_post = node.items[LOOP_POST];
    /*MOV*/ const s_SolvedNode init = (n_init ? solveLetStatement_mntFuLC1(n_init, _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    if (is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(init, _current_fnort, _here, ctx, module, _scope).type))
    {
        makeNote_kDWiwp14(N_DeadLoopInit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return /*NRVO*/ init;
    };
    const s_SolvedNode pre_cond = (n_pre_cond ? solveNode_DvkgWyBy(n_pre_cond, t_bool, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    const s_SolvedNode body = (n_body ? solveBlock_HVo1Po1s(n_body, t_void, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _here, ctx, _helpers_data, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    const s_SolvedNode post_cond = (n_post_cond ? solveNode_DvkgWyBy(n_post_cond, t_bool, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    const s_SolvedNode post = (n_post ? solveNode_DvkgWyBy(n_post, t_void, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    const s_Helpers& h = _helpers[brk_idx];
    const s_Type& type = ((!pre_cond && !post_cond && !short((((void)void(), _helpers_data[h.index]).mask & HM_LabelUsed))) ? t_never : t_void);
    return SolvedNode_HaPiTdVO("loop"_fu, type, 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<5, s_SolvedNode> { s_SolvedNode(init), s_SolvedNode(pre_cond), s_SolvedNode(body), s_SolvedNode(post_cond), s_SolvedNode(post) } }, s_Target{}, h.index, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

                                #ifndef DEF_F_SINGLE_STMT
                                #define DEF_F_SINGLE_STMT
extern const int F_SINGLE_STMT;
                                #endif

static int Scope_lookupReturn_L0AuYQEj(const fu_STR& id, const bool lambdaOK, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Scope& _scope, const s_Module& module)
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
            if (!short(((__extension__ (
            {
                const s_Helpers& h = item;
                BL_5_v = &(_helpers_data[h.index]);
            (void)0;}), *BL_5_v).mask & HM_CanReturn)))
                continue;

            const s_HelpersData* BL_7_v;
            if (short(((__extension__ (
            {
                const s_Helpers& h = item;
                BL_7_v = &(_helpers_data[h.index]);
            (void)0;}), *BL_7_v).mask & HM_Lambda)) && !lambdaOK)
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
    fail_2n2GzXhw((("No return `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static int Scope_lookupLabel_Bisq4Ao9(const fu_STR& id, const bool cont, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Scope& _scope, const s_Module& module)
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
            if (!short(((__extension__ (
            {
                const s_Helpers& h = item;
                BL_6_v = &(_helpers_data[h.index]);
            (void)0;}), *BL_6_v).mask & HM_CanBreak)))
            {
                if (!CONTINUE_BELOW)
                {
                    const s_HelpersData* BL_9_v;
                    if (id || !short(((__extension__ (
                    {
                        const s_Helpers& h = item;
                        BL_9_v = &(_helpers_data[h.index]);
                    (void)0;}), *BL_9_v).mask & HM_Lambda)))
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
                (void)0;}), *BL_13_v).id == id) : (short(((__extension__ (
                {
                    const s_Helpers& h = item;
                    BL_14_v = &(_helpers_data[h.index]);
                (void)0;}), *BL_14_v).mask & HM_Anon)) != short(0))))
                    continue;

                if (cont)
                {
                    i++;
                    if (!(i < _helpers.size()))
                        fail_2n2GzXhw((("Cannot continue to label `"_fu + id) + "` from here, did you mean to `break`?"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

                };
            };
            return /*NRVO*/ i;
        };
    };
    fail_2n2GzXhw((("No label `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_Helpers& h_Krn7svaO(fu_VEC<s_Helpers>& _helpers, const int helpers_idx)
{
    return _helpers.mutref(helpers_idx);
}

                                #ifndef DEFt_only_0T03m2Tp
                                #define DEFt_only_0T03m2Tp
inline const s_Node& only_0T03m2Tp(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_SolvedNode solveJump_4s6MSKt7(int helpers_idx, fu::view<s_Node> items, const int kills, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Target& _current_fnort, s_Target& _current_fn_or_type, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_HelpersData* BL_1_v;
    const s_Type* _0;
    const s_HelpersData* BL_2_v;
    s_Type type { (*(_0 = &((__extension__ (
    {
        const s_Helpers& h = h_Krn7svaO(_helpers, helpers_idx);
        BL_1_v = &(_helpers_data[h.index]);
    (void)0;}), *BL_1_v).ret_actual)) ? *_0 : (__extension__ (
    {
        const s_Helpers& h = h_Krn7svaO(_helpers, helpers_idx);
        BL_2_v = &(_helpers_data[h.index]);
    (void)0;}), *BL_2_v).ret_expect) };
    /*MOV*/ const s_SolvedNode expr = (!items ? createEmpty_M9eYCmcR("empty"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope) : solveNode_DvkgWyBy(only_0T03m2Tp(items), type, (helpers_idx + 1), _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string));
    if (is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(expr, _current_fnort, _here, ctx, module, _scope).type))
        return /*NRVO*/ expr;

    const s_HelpersData* BL_4_v;
    if ((__extension__ (
    {
        const s_Helpers& h = h_Krn7svaO(_helpers, helpers_idx);
        BL_4_v = &(_helpers_data[h.index]);
    (void)0;}), *BL_4_v).local_of != SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target.index)
    {
        const s_HelpersData* BL_6_v;
        add_zCNdZfJO(_current_fn.effects.far_jumps, (__extension__ (
        {
            const s_Helpers& h = h_Krn7svaO(_helpers, helpers_idx);
            BL_6_v = &(_helpers_data[h.index]);
        (void)0;}), *BL_6_v).local_of);
        return createEmpty_M9eYCmcR("__far_jump"_fu, t_never, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
    };
    const bool redundant = (kills == (helpers_idx + 1));
    if (redundant && is_void_ceGfLbqY(SolvedNodeData_KIpwZvpE(expr, _current_fnort, _here, ctx, module, _scope).type))
        return /*NRVO*/ expr;

    const s_HelpersData* BL_8_v;
    while ((__extension__ (
    {
        const s_Helpers& h = h_Krn7svaO(_helpers, helpers_idx);
        BL_8_v = &(_helpers_data[h.index]);
    (void)0;}), *BL_8_v).kills)
    {
        const s_HelpersData* BL_11_v;
        helpers_idx = ((__extension__ (
        {
            const s_Helpers& h = h_Krn7svaO(_helpers, helpers_idx);
            BL_11_v = &(_helpers_data[h.index]);
        (void)0;}), *BL_11_v).kills - 1);
    };
    const s_HelpersData* BL_12_v;
    if (redundant && !short(((__extension__ (
    {
        const s_Helpers& h = h_Krn7svaO(_helpers, helpers_idx);
        BL_12_v = &(_helpers_data[h.index]);
    (void)0;}), *BL_12_v).mask & HM_Function)))
        return /*NRVO*/ expr;

    s_HelpersData* BL_14_v;
    (__extension__ (
    {
        const s_Helpers& h = h_Krn7svaO(_helpers, helpers_idx);
        BL_14_v = &(_helpers_data.mutref(h.index));
    (void)0;}), *BL_14_v).mask |= HM_LabelUsed;
    const s_Helpers* _1;
    return (_1 = &(h_Krn7svaO(_helpers, helpers_idx)), createJump_N6cyyHzw(expr, *_1, _here, _current_fnort, _current_fn_or_type, module, _scope, ctx, _helpers_data, _current_fn, _helpers));
}

static s_SolvedNode solveJump_2rgMXsto(const s_Node& node, const int kills, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, s_Module& module, const s_Target& _current_fnort, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const int helpers_idx = ((node.kind == "return"_fu) ? Scope_lookupReturn_L0AuYQEj(node.value, !!(node.flags & F_SINGLE_STMT), _helpers, _ss, _helpers_data, _here, ctx, _scope, module) : Scope_lookupLabel_Bisq4Ao9(node.value, (node.kind == "continue"_fu), _helpers, _ss, _helpers_data, _here, ctx, _scope, module));
    return solveJump_4s6MSKt7(int(helpers_idx), node.items, kills, _helpers, _helpers_data, _here, _current_fnort, _current_fn_or_type, module, _scope, ctx, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
}

static s_SolvedNode solveInt_xV39XKZe(const s_Node& node, const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    return solved_mViSzIsN(node, solveInt_gNwK3BeV(node.value, type, _here, ctx, _helpers, _helpers_data, _scope, module), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveNum_UeiNdatO(const s_Node& node, const s_Type& type, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return solved_mViSzIsN(node, solveNum_J5pfEM04(node.value, type), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveStr_3A4wXAqe(const s_Node& node, const s_Type& t_string, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    if (!node.value)
        return createDefinit_8b8CqUUv(add_ref_UThBZuDl(s_Type(t_string), Lifetime_temporary_8nlJDPX0(), _here, ctx), _here, _current_fnort, _current_fn_or_type, module, _scope);

    return solved_mViSzIsN(node, t_string, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveChar_LK50y0qz(const s_Node& node, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_Target& _current_fn_or_type, const s_Module& module, s_Scope& _scope)
{
    return solved_mViSzIsN(node, t_byte, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDefinit_aauUiksn(const s_Type& type, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    s_Type _0 {};
    return createDefinit_8b8CqUUv(((_0 = trySolveDefinit_wm6Odboh(type)) ? static_cast<s_Type&&>(_0) : fail_2n2GzXhw(("Cannot definit type: "_fu + humanizeType_YKN1kOGX(type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module)), _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveImport_j32UYRjr(const s_Node& node, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    const s_Module& m = findModule_CTJLAFdy(node.value, ctx, _here, _helpers, _helpers_data, _scope, module);
    Scope_import_XNMBMd9C(m.modid, _scope, _ss, _here, ctx);
    return createEmpty_M9eYCmcR("empty"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDefer_Obl8FmJS(const s_Node& node, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_SolvedNode item = solveNode_DvkgWyBy(only_vukGqR3r(node.items), t_void, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    return solved_mViSzIsN(node, t_void, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(item) } }, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTryCatch_GYMNCWMP(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Module& module, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    if (!(node.items.size() == 3))
        BUG_patsWWTe(fu_STR{}, _here, ctx);

    const s_ScopeMemo scope0 = Scope_snap_Gy3SoOnf(_scope, _helpers);
    const s_SolvedNode tRy = solveNode_DvkgWyBy(node.items[0], t_void, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    Scope_pop_o9RH7nTe(_scope, scope0, _helpers);
    const s_ScopeMemo scope0_1 = Scope_snap_Gy3SoOnf(_scope, _helpers);
    const s_SolvedNode err = solveLetStatement_mntFuLC1(node.items[1], _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    const s_SolvedNode cAtch = solveNode_DvkgWyBy(node.items[2], t_void, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    Scope_pop_o9RH7nTe(_scope, scope0_1, _helpers);
    if (!((SolvedNodeData_KIpwZvpE(err, _current_fnort, _here, ctx, module, _scope).kind == "letdef"_fu) && isAssignableAsArgument_lKMokzZR(SolvedNodeData_KIpwZvpE(GET_EiJMwamT(SolvedNodeData_KIpwZvpE(err, _current_fnort, _here, ctx, module, _scope).target, _scope, module, ctx).solved, _current_fnort, _here, ctx, module, _scope).type, t_string)))
        fail_2n2GzXhw(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    const s_Type& type = ((is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(tRy, _current_fnort, _here, ctx, module, _scope).type) && is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(cAtch, _current_fnort, _here, ctx, module, _scope).type)) ? t_never : t_void);
    return solved_mViSzIsN(node, type, fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(tRy), s_SolvedNode(err), s_SolvedNode(cAtch) } }, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTypedef_s7pOnjMk(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    s_Type annot = evalTypeAnnot_t9H2NZ5S(only_vukGqR3r(node.items), (*(const s_Map_3Igdp5fJ*)fu::NIL), _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (isStruct_5BOF5uJ9(annot))
        Scope_set_Jn3gd5FG(_scope, node.value, lookupStruct_jCnOT4Df(annot, module, ctx).target, false);
    else
        Scope_Typedef_n9y3Tebd(_scope, node.value, annot, node.flags, (*(const fu_STR*)fu::NIL), 0u, module);

    return createEmpty_M9eYCmcR("empty"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveTypeAssert_Yu7Q0QCx(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Node& left = node.items[0];
    const s_Node& right = node.items[1];
    s_Type expect = evalTypeAnnot_t9H2NZ5S(right, (*(const s_Map_3Igdp5fJ*)fu::NIL), _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    /*MOV*/ const s_SolvedNode actual = solveNode_DvkgWyBy(left, expect, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    checkAssignable_bkgTcirN(expect, SolvedNodeData_KIpwZvpE(actual, _current_fnort, _here, ctx, module, _scope).type, "Type assertion failed"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, module, _helpers, _helpers_data, _scope);
    return /*NRVO*/ actual;
}

static s_SolvedNode solveTypeParam_5Fu45cXg(const s_Node& node, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    return solved_mViSzIsN(node, evalTypeParam_h0N8m5LF(node.value, (*(const s_Map_3Igdp5fJ*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static void visitScope_4bdtmc8o(fu::view<s_ScopeItem> items, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    int scope_iterator {};
    s_Target target {};
    bool shadows {};
    while (!shadow && (target = search_dydpfI3t(items, id, scope_iterator, _ss.items, shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
        result.unshift(s_Target(target));

}

                                #ifndef DEFt_each_a7ntIOPg
                                #define DEFt_each_a7ntIOPg
inline void each_a7ntIOPg(fu::view<s_Struct> a, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Struct& sTruct = a[i];
        visitScope_4bdtmc8o(sTruct.items, shadow, id, _ss, result);
    };
}
                                #endif

static void visitTypes_jNqkPyNB(const s_Module& module, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    each_a7ntIOPg(module.out.types, shadow, id, _ss, result);
}

                                #ifndef DEFt_each_29CGfBgn
                                #define DEFt_each_29CGfBgn
inline void each_29CGfBgn(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Context& ctx, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
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
            visitTypes_jNqkPyNB(ctx.modules[import], shadow, id, _ss, result);
        };
        i0 = ss.end;
    };
}
                                #endif

static fu_VEC<s_Target> solveAddrOfFn_yOtGtP7J(const fu_STR& id, const int flags, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const bool shadow = false;
    /*MOV*/ fu_VEC<s_Target> result {};
    visitScope_4bdtmc8o(_scope.items, shadow, id, _ss, result);
    if (flags & F_ACCESS)
    {
        visitTypes_jNqkPyNB(module, shadow, id, _ss, result);
        each_29CGfBgn(_scope.imports, _ss.imports, 0, ctx, shadow, id, _ss, result);
    };
    return static_cast<fu_VEC<s_Target>&&>((result ? result : fail_2n2GzXhw((("No `fn "_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)));
}

static s_SolvedNode solveAddrOfFn_eOQHeiY3(const s_Node& node, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fnort, const s_Target& _current_fn_or_type)
{
    const fu_STR& id = node.value;
    fu_VEC<s_Target> result = solveAddrOfFn_yOtGtP7J(id, node.flags, _scope, _ss, module, ctx, _here, _helpers, _helpers_data);
    s_Type type = s_Type { s_ValueType { 0, packAddrOfFn_wA8no8pa(result) }, s_Lifetime{} };
    return createEmpty_M9eYCmcR("empty"_fu, type, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveDeclExpr_gxm6RiSD(const s_Node& node, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    return s_SolvedNode(only_SBGwWDq5(solveNodes_J7uR9TQA((fu::slate<1, s_Node> { s_Node(node) }), (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string)));
}

static void walk_8KCTHuJs(s_Node& node, fu::view<char> placeholder, const s_ScopeItem& field)
{
    for (int i = 0; i < node.items.size(); i++)
        walk_8KCTHuJs(node.items.mutref(i), placeholder, field);


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

inline static s_Node astReplace_qPx2k8co(const s_Node& node, fu::view<char> placeholder, const s_ScopeItem& field)
{
    /*MOV*/ s_Node node_1 { node };
    walk_8KCTHuJs(node_1, placeholder, field);
    return /*NRVO*/ node_1;
}

static s_SolvedNode solveForFieldsOf_eBSqpqIS(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu::view<char> placeholder = node.value;
    const s_Node& body_template = node.items[1];
    s_Type fields_of = evalTypeAnnot_t9H2NZ5S(node.items[0], (*(const s_Map_3Igdp5fJ*)fu::NIL), _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (!(isStruct_5BOF5uJ9(fields_of)))
        fail_2n2GzXhw((("[for fieldname]: This is not a struct: `"_fu + humanizeType_YKN1kOGX(fields_of, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    fu::view<s_ScopeItem> fields = lookupStruct_jCnOT4Df(fields_of, module, ctx).items;
    fu_VEC<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        if (GET_EiJMwamT(target_dYaABoRz(field), _scope, module, ctx).kind == "field"_fu)
            items_ast += astReplace_qPx2k8co(body_template, placeholder, field);

    };
    fu_VEC<s_SolvedNode> items = solveNodes_J7uR9TQA(items_ast, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    const s_Type& type = (is_never_ceGfLbqY(SolvedNodeData_KIpwZvpE(last_3cih1E88(items), _current_fnort, _here, ctx, module, _scope).type) ? t_never : t_void);
    return createBlock_XLQezDDx(type, fu_VEC<s_SolvedNode>(items), s_Helpers{}, _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data, _current_fn_or_type);
}

static void compilerBreak_akWqcHs6(const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Scope& _scope)
{
    fu_STR debug = "\nCompiler break:"_fu;
    if (SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target)
    {
        const s_Target& t = SolvedNodeData_KIpwZvpE(_current_fn.out, _current_fnort, _here, ctx, module, _scope).target;
        debug += (x7E((x7E((("\n    Current fn: "_fu + qWHAT_5LWmus20(GET_EiJMwamT(t, _scope, module, ctx), module, _scope, ctx)) + " at ("_fu), fu::i64dec(t.modid)) + ", "_fu), fu::i64dec(t.index)) + "):"_fu);
        fu::view<s_Overload> locals = EXT_qHy9RJpv(t, module, _scope, ctx).locals;
        for (int i = 0; i < locals.size(); i++)
        {
            const s_Overload& item = locals[i];
            debug += ("\n        "_fu + qWHAT_5LWmus20(item, module, _scope, ctx));
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

static s_SolvedNode executeCompilerPragma_WXN0O23V(const s_Node& node, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Target& _current_fn_or_type)
{
    if (node.value == "break"_fu)
        compilerBreak_akWqcHs6(_current_fn, _current_fnort, _here, ctx, module, _scope);
    else
        fail_2n2GzXhw((("Unknown compiler pragma: `"_fu + node.value) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return createEmpty_M9eYCmcR("empty"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);
}

static s_SolvedNode solveNode_DvkgWyBy(const s_Node& node, const s_Type& type, const int kills, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, const s_Context& ctx, s_Module& module, s_Scope& _scope, s_Target& _current_fn_or_type, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_e04WMKmU& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    HERE_fVfHq6aR(node.token, _here);
    fu::view<char> k = node.kind;
    if (k == "root"_fu)
        return solveRoot_d1s6BB0E(node, _helpers, _helpers_data, _here, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "block"_fu)
        return solveBlock_HVo1Po1s(node, type, 0, HM_CanBreak, kills, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _here, ctx, _helpers_data, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "argid"_fu)
        return solveArgID_5OHYpcvD(node, type, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "let"_fu)
        return solveLet_ScVmXNEy(node, (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "call"_fu)
        return solveCall_ajgBzohn(node, s_Target{}, kills, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "arrlit"_fu)
        return solveArrlit_OOVLkW5Q(node, type, module, ctx, _here, _helpers, _helpers_data, _current_fnort, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "if"_fu)
        return solveIf_toKjv1r5(node, s_Type(type), _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "or"_fu)
        return solveOr_g5XaCyCQ(node, s_Type(type), _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "and"_fu)
        return solveAnd_p3dIUjC0(node, s_Type(type), _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "loop"_fu)
        return solveLoop_N8jPSkVJ(node, _scope, _helpers, _current_fn, _current_fnort, _here, ctx, module, _helpers_data, _current_fn_or_type, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "break"_fu)
        return solveJump_2rgMXsto(node, kills, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "return"_fu)
        return solveJump_2rgMXsto(node, kills, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "continue"_fu)
        return solveJump_2rgMXsto(node, kills, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fnort, _current_fn_or_type, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "int"_fu)
        return solveInt_xV39XKZe(node, type, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn_or_type);

    if (k == "real"_fu)
        return solveNum_UeiNdatO(node, type, _here, _current_fnort, _current_fn_or_type, module, _scope);

    if (k == "str"_fu)
        return solveStr_3A4wXAqe(node, t_string, _here, ctx, _current_fnort, _current_fn_or_type, module, _scope);

    if (k == "char"_fu)
        return solveChar_LK50y0qz(node, _here, _current_fnort, _current_fn_or_type, module, _scope);

    if (k == "definit"_fu)
        return solveDefinit_aauUiksn(type, module, ctx, _here, _helpers, _helpers_data, _scope, _current_fnort, _current_fn_or_type);

    if (k == "import"_fu)
        return solveImport_j32UYRjr(node, ctx, _here, _helpers, _helpers_data, _scope, module, _ss, _current_fnort, _current_fn_or_type);

    if (k == "defer"_fu)
        return solveDefer_Obl8FmJS(node, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "try"_fu)
        return solveTryCatch_GYMNCWMP(node, _here, ctx, _scope, _helpers, _helpers_data, _current_fnort, module, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "typedef"_fu)
        return solveTypedef_s7pOnjMk(node, _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "typeassert"_fu)
        return solveTypeAssert_Yu7Q0QCx(node, _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "typeparam"_fu)
        return solveTypeParam_5Fu45cXg(node, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fnort, _current_fn_or_type);

    if (k == "addroffn"_fu)
        return solveAddrOfFn_eOQHeiY3(node, _scope, _ss, module, ctx, _here, _helpers, _helpers_data, _current_fnort, _current_fn_or_type);

    if (k == "fn"_fu)
        return solveDeclExpr_gxm6RiSD(node, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "struct"_fu)
        return solveDeclExpr_gxm6RiSD(node, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "forfieldsof"_fu)
        return solveForFieldsOf_eBSqpqIS(node, _here, ctx, _helpers, _helpers_data, _current_fnort, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "compiler"_fu)
        return executeCompilerPragma_WXN0O23V(node, _current_fn, _current_fnort, _here, ctx, module, _scope, _helpers, _helpers_data, _current_fn_or_type);

    if (k == "void"_fu)
        return createEmpty_M9eYCmcR("empty"_fu, t_void, s_Target{}, _here, _current_fnort, _current_fn_or_type, module, _scope);

    fail_2n2GzXhw(("TODO: "_fu + k), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void Scope_observeDefects_M8IkuP1b(fu::view<s_ScopeItem> items, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_Options& options, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, int& _notes)
{
    bool hasLets = false;
    bool hasPubTemplates = false;
    fu_VEC<s_Target> privates {};
    for (int i = 0; i < items.size(); i++)
    {
        const s_Target t = target_dYaABoRz(items[i]);
        if (t.modid != module.modid)
            continue;

        const s_Overload& o = GET_EiJMwamT(t, _scope, module, ctx);
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
        makeNote_kDWiwp14(N_SD_HasStaticInit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

    if (privates && hasPubTemplates)
    {
        makeNote_kDWiwp14(N_SD_ExternPrivates, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        for (int i_1 = 0; i_1 < privates.size(); i_1++)
        {
            s_Overload& o = GET_mut_LT5T09Vv(privates[i_1], _scope, module);
            o.flags |= F_EXTERN;
        };
    };
}

s_SolverOutput solve_OL755WjA(const s_Context& ctx, s_Module& module, const s_Options& options)
{
    s_Node parse { module.in.parse.root };
    fu_STR shortModuleName = (module.modid ? getShortModuleName_bB04eegu(module.fname) : fu_STR{});
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
    push_DOX5pwMC(s_HelpersData{}, _helpers, _helpers_data);
    s_Target _current_fn_or_type = s_Target { int(module.modid), 0 };
    s_Map_e04WMKmU _specs {};
    fu_VEC<fu_STR> _spec_errors = fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "BUG: Specializer reentry."_fu } };
    fu_VEC<s_Warning> _warnings {};
    s_Type t_string = createArray_ceGfLbqY(t_byte, _here, ctx);
    fu_VEC<s_SolvedNode> TODO_FIX_convert_args = meh_bGN6F3bF(_current_fn_or_type, _here, module, _scope);
    if (module.modid)
    {
        _scope.imports += int(module.modid);
        _Scope_import__forceCopy_wrJurZot(0, ctx, _scope);
    }
    else
        _scope = listGlobals_6iVz8n7c(module);

    const s_Target _current_fnort = s_Target { int(module.modid), 0 };
    const s_SolvedNode root = solveNode_DvkgWyBy(parse, (*(const s_Type*)fu::NIL), 0, _here, _helpers, _helpers_data, _current_fnort, ctx, module, _scope, _current_fn_or_type, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (_current_fn.out)
        BUG_patsWWTe("non-empty _current_fn."_fu, _here, ctx);

    if (_helpers_data[0])
        BUG_patsWWTe("non-empty _helpers_data[0]."_fu, _here, ctx);

    Scope_observeDefects_M8IkuP1b(fu_VEC<s_ScopeItem>(_scope.items), module, _scope, ctx, options, _here, _helpers, _helpers_data, _notes);
    for (int i = 0; i < _warnings.size(); i++)
    {
        const s_Warning& w = _warnings[i];
        if (w.token)
        {
            _here = w.token;
            fail_2n2GzXhw(fu_STR(w.message), _here, ctx, _helpers, _helpers_data, _scope, module);
        };
    };
    return s_SolverOutput { s_SolvedNode(root), Scope_exports_9JgiX8Q7(_scope, module.modid, _field_items), int(_notes) };
}

#endif
