
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
struct s_Map_FNvBVj2X;
struct s_Map_JBAFFW0D;
struct s_Map_mUYWjxvp;
struct s_Mi;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStat;
struct s_ModuleStats;
struct s_NativeHacks;
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
bool Region_isArgPosition_MvT8pzW6(const s_Region&);
bool Region_isStatic_MvT8pzW6(const s_Region&);
bool Region_isTemp_MvT8pzW6(const s_Region&);
bool TODO_FIX_isArray_zJCUz9W3(const s_Type&);
bool add_once_PCSel0xp(s_BitSet&, int);
bool hasAssignment_YqscxHlw(fu::view<char>);
bool hasOperator_YqscxHlw(fu::view<char>);
bool has_noL0hivx(const s_BitSet&, int);
bool isAssignableAsArgument_yRJeU5dj(const s_Type&, const s_Type&);
bool isAssignable_yRJeU5dj(const s_Type&, const s_Type&);
bool isStruct_usAEukhR(const s_Type&);
bool is_arithmetic_oPp5yWwB(const s_Type&);
bool is_floating_pt_oPp5yWwB(const s_Type&);
bool is_integral_oPp5yWwB(const s_Type&);
bool is_mutref_zJCUz9W3(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_never_zJCUz9W3(const s_Type&);
bool is_primitive_oPp5yWwB(const s_Type&);
bool is_ref2temp_zJCUz9W3(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_ref_zJCUz9W3(const s_Type&);
bool is_rx_copy_zJCUz9W3(const s_Type&);
bool is_rx_resize_zJCUz9W3(const s_Type&);
bool is_trivial_JKdxRWxB(const s_Type&, const s_Module&, const s_Context&);
bool is_unsigned_oPp5yWwB(const s_Type&);
bool is_void_zJCUz9W3(const s_Type&);
bool is_zeroes_zJCUz9W3(const s_Type&);
bool operator==(const s_Region&, const s_Region&);
bool operator==(const s_Target&, const s_Target&);
bool operator==(const s_Type&, const s_Type&);
bool rem_PCSel0xp(s_BitSet&, int);
bool try_relax_2CttqzuO(s_Type&, const s_Type&, int);
bool type_isAddrOfFn_zJCUz9W3(const s_Type&);
const fu_STR& _fname_GF4X2sQy(const s_TokenIdx&, const s_Context&);
const fu_VEC<int>& lookupTypeImports_JKdxRWxB(const s_Type&, const s_Module&, const s_Context&);
const s_Struct& lookupStruct_GBXUPXZt(const s_Type&, const s_Module&, const s_Context&);
const s_Struct& tryLookupStruct_JKdxRWxB(const s_Type&, const s_Module&, const s_Context&);
const s_Token& _token_GF4X2sQy(const s_TokenIdx&, const s_Context&);
fu_STR formatCodeSnippet_LnIzFNvj(const s_TokenIdx&, s_TokenIdx&&, const s_Context&);
fu_STR getShortModuleName_bB04eegu(const fu_STR&);
fu_STR hash62_HxcQaXaI(fu::view<char>, int);
fu_STR humanizeQuals_zJCUz9W3(const s_Type&);
fu_STR packAddrOfFn_wA8no8pa(fu::view<s_Target>);
fu_STR qBAD_HIwg52Ja(const fu_STR&);
fu_STR qCODE_HIwg52Ja(const fu_STR&);
fu_STR qID_HIwg52Ja(const fu_STR&);
fu_STR qKW_HIwg52Ja(const fu_STR&);
fu_STR resolveFile_x_pcVfgwiN(const fu_STR&, const s_Context&);
fu_STR serializeType_FJyl5kxv(const s_Type&, fu::view<char>, const s_TokenIdx&, const s_Context&);
fu_STR serialize_db1BrgVV(const s_ClosureID&);
inline fu_VEC<s_Region> inter_2hwZIj1v(const fu_VEC<s_Region>&, const fu_VEC<s_Region>&);
inline static void Lifetime_each_G8WTSir0(const s_Lifetime&, int, const s_Target&, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&);
inline void each_EqBEPba0(fu::view<int>, s_CurrentFn&);
int Region_asLocal_MvT8pzW6(const s_Region&);
int Region_toArgPosition_MvT8pzW6(const s_Region&);
int Region_toLocal_MvT8pzW6(const s_Region&);
int modidOfOrigin_usAEukhR(const s_Type&);
int popcount_jPdA3jy1(const s_BitSet&);
s_BitSet& and_not_assign_Vnn4kEu4(s_BitSet&, const s_BitSet&);
s_ClosureID tryParseClosureID_RHyKU5hm(fu::view<char>);
s_Intlit Intlit_hdlyM3zq(fu::view<char>);
s_Lifetime Lifetime_inter_87LkAOV4(const s_Lifetime&, const s_Lifetime&);
s_Lifetime Lifetime_makeShared_4X1iL0ll(const s_Lifetime&);
s_Lifetime Lifetime_static_8nlJDPX0();
s_Lifetime Lifetime_temporary_8nlJDPX0();
s_Lifetime Lifetime_union_87LkAOV4(const s_Lifetime&, const s_Lifetime&);
s_Mi parseMi_t6R8uPsY(int&, fu::view<char>);
s_NativeHacks NativeHacks_RHyKU5hm(fu::view<char>);
s_Region Region_fromArgPosition_BaKYka79(int);
s_Region Region_fromLocal_BaKYka79(int);
s_Scope Scope_exports_lbD2qaob(const s_Scope&, int, const fu_VEC<s_ScopeItem>&);
s_Scope listGlobals_6iVz8n7c(const s_Module&);
s_ScopeMemo Scope_snap_xL8BbLPe(const s_Scope&, fu::view<s_Helpers>);
s_Struct& lookupStruct_mut_MHqzuNPp(fu::view<char>, s_Module&);
s_Target Scope_Typedef_CUDLzI5V(s_Scope&, const fu_STR&, const s_Type&, int, const fu_STR&, unsigned, const s_Module&);
s_Target Scope_create_ogkrG8By(s_Scope&, const fu_STR&, const fu_STR&, const s_Type&, int, unsigned, int, const s_Module&);
s_Target search_qV63L7fS(fu::view<s_ScopeItem>, const fu_STR&, int&, fu::view<s_ScopeSkip>, bool&, const s_Target&, fu::view<s_Target>, fu::view<s_ScopeItem>);
s_Target target_e3eS1o6f(const s_ScopeItem&);
s_Type add_mutref_EgWfyCPW(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type add_ref_EgWfyCPW(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type add_refs_yRJeU5dj(const s_Type&, s_Type&&);
s_Type clear_mutref_zJCUz9W3(s_Type&&);
s_Type clear_refs_zJCUz9W3(s_Type&&);
s_Type clear_sliceable_zJCUz9W3(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type createArray_zJCUz9W3(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type createSlice_EgWfyCPW(const s_Type&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type despeculateStruct_c5L0jVYk(s_Type&&);
s_Type initStruct_afXwHDbN(const fu_STR&, int, bool, s_Module&);
s_Type make_copyable_zJCUz9W3(s_Type&&);
s_Type relax_typeParam_zJCUz9W3(s_Type&&);
s_Type tryClear_array_zJCUz9W3(const s_Type&);
s_Type tryClear_mutref_zJCUz9W3(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_ref_zJCUz9W3(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_sliceable_zJCUz9W3(const s_Type&);
s_Type type_tryIntersect_yRJeU5dj(const s_Type&, const s_Type&);
s_Type type_trySuper_yRJeU5dj(const s_Type&, const s_Type&);
static bool Lifetime_allowsMutrefReturn_meKDx7nP(const s_Lifetime&, int, const s_Target&, const s_Module&, s_Scope&, const s_TokenIdx&, const s_Context&);
static bool RESOLVE_byAAR_JhgNEnZ6(int, fu::view<s_Region>, bool, bool, const s_TokenIdx&, const s_Context&, const s_Target&, const s_Module&, const s_Scope&, s_CurrentFn&);
static bool RESOLVE_byAAR_aBga54ug(fu::view<s_WriteID>, int, bool, s_CurrentFn&, bool, const s_TokenIdx&, const s_Context&, const s_Target&, const s_Module&, const s_Scope&);
static bool RESOLVE_byAAR_qh7t07Xi(int, int, bool, bool, const s_TokenIdx&, const s_Context&, const s_Target&, const s_Module&, const s_Scope&, s_CurrentFn&);
static bool evalTypePattern_OExrTXiF(const s_Node&, s_Map_mUYWjxvp&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, s_ScopeSkipMemos&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static bool lazySolveStart_2KG8rFWC(const s_Target&, const s_Overload&, s_Scope&, s_Module&, s_TokenIdx&, const s_Context&, s_Map_FNvBVj2X&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, s_CurrentFn&, fu_VEC<fu_STR>&, fu_VEC<s_Warning>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static bool trySolveTypeParams_AjGYzb4a(const s_Node&, s_Type&&, s_Map_mUYWjxvp&, const s_TokenIdx&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&, const s_ScopeSkipMemos&);
static fu_STR qSTACK_1ljfoRg4(const s_Target&, const s_Region&, fu::view<s_Target>, s_Scope&, const s_Module&, const s_Context&, const s_TokenIdx&);
static fu_STR qSTACK_6ipuBtz0(const s_Target&, const s_SolvedNode&, const s_Region&, fu::view<s_Target>, s_Scope&, const s_Module&, const s_Context&, const s_Target&, const s_TokenIdx&);
static fu_STR qSTACK_T8yWuHOa(const s_Target&, int, fu::view<s_Target>, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&);
static fu_VEC<s_SolvedNode> solveNodes_llR9thfD(fu::view<s_Node>, const s_Type&, const s_Type&, bool, int, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static fu_VEC<s_Target> tryConvert_vTitLEL7(const s_Type&, const s_Type&, const s_SolvedNode&, bool, const s_Scope&, s_Scope&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, s_CurrentFn&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_ScopeItem>&, s_Map_FNvBVj2X&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, fu_VEC<fu_STR>&, fu_VEC<s_Warning>&, s_Target&, int&, const s_Options&, int&, const fu_STR&, const s_Target&, const s_Type&);
static s_SolvedNode CallerNode_3U4yFUKm(const fu_STR&, s_Target&&, fu_VEC<s_SolvedNode>&&, int, const fu_VEC<int>&, fu::view<fu_VEC<s_Target>>, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_FNvBVj2X&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_Warning>&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, const s_Type&, const s_Target&);
static s_SolvedNode __solveStruct_cu2RbRgF(bool, const s_Node&, const s_Target&, s_CurrentFn&, s_Scope&, s_Module&, const s_Context&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, s_TokenIdx&, s_Target&, fu_VEC<s_HelpersData>&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeMemo&, fu_VEC<fu_STR>&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode bindImplicitArg_NacMFoQm(const fu_STR&, const s_Type&, const s_Target&, s_Module&, s_Scope&, const s_Context&, s_CurrentFn&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_FNvBVj2X&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_Warning>&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, const s_Type&, const s_Target&);
static s_SolvedNode executeCompilerPragma_tx7DWBKn(const s_Node&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveAnd_O6v3z7qg(const s_Node&, s_Type&&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveArgID_K6TJeDkO(const s_Node&, const s_Type&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveArrlit_9NXkRkOQ(const s_Node&, const s_Type&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveBlock_2VZylqU6(const fu_VEC<s_SolvedNode>&, int, bool, short, int, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Context&, const s_Target&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveBlock_eBBvZxr1(const s_Node&, const s_Type&, int, short, int, const fu_STR&, int, s_Scope&, fu_VEC<s_Helpers>&, s_Module&, s_CurrentFn&, const s_Target&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Context&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveCall_3FifiTBa(const s_Node&, const s_Target&, int, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveDeclExpr_vJJRvOiR(const s_Node&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveDefer_66Nzpvtw(const s_Node&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveForFieldsOf_YJybuXpC(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveIf_VqbuAkky(const s_Node&, s_Type&&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveJump_bq4MphXU(int, fu::view<s_Node>, int, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveLetLike_dontTouchScope_ipjKU5Ae(const s_Node&, const s_Type&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveLetStatement_c9l45yME(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveLet_RtOR64Sn(const s_Node&, const s_Type&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveLoop_m4KhD3Bx(const s_Node&, s_Scope&, fu_VEC<s_Helpers>&, s_CurrentFn&, const s_Target&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Context&, s_Module&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Type&);
static s_SolvedNode solveNode_Tf69aXec(const s_Node&, const s_Type&, int, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveOr_4ZBArO8d(const s_Node&, s_Type&&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveRoot_lXkjPeBQ(const s_Node&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveTryCatch_qS2Urdrm(const s_Node&, s_TokenIdx&, const s_Context&, s_Scope&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveTypeAssert_reJoGAoS(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_SolvedNode solveTypedef_2wFstYlM(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_Target doTrySpecialize_U9Z0yXFm(const s_Target&, const s_Target&, fu::view<s_SolvedNode>, fu_STR&&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, int, const s_Type&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, s_Map_FNvBVj2X&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, s_CurrentFn&, fu_VEC<fu_STR>&, fu_VEC<s_Warning>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_Target tryMatch__mutargs_9RPoFoMP(fu_STR&&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu_STR&, bool, const s_Scope&, fu::view<s_SolvedNode>, int, const s_Target&, s_TokenIdx&, const s_Context&, s_Scope&, s_ScopeSkipMemos&, s_Module&, fu_VEC<s_ScopeItem>&, s_Map_FNvBVj2X&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, s_CurrentFn&, fu_VEC<fu_STR>&, fu_VEC<s_Warning>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, const s_Target&, const s_Type&);
static s_Target trySpecialize_VH570CZ3(const s_Target&, fu::view<s_SolvedNode>, fu_STR&, int, const s_Type&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, s_Map_FNvBVj2X&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, s_CurrentFn&, fu_VEC<fu_STR>&, fu_VEC<s_Warning>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_Type T_rVMRJfWj(int, const s_Node&, const s_Map_mUYWjxvp&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static s_Type evalTypeAnnot_nHP0Ok9t(const s_Node&, const s_Map_mUYWjxvp&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static void Lifetime_F_MOVED_FROM_4k7EsX1f(const s_Lifetime&, const s_Target&, const s_Module&, s_Scope&, const s_Context&, const s_TokenIdx&);
static void applyConversion_yl20i8ho(s_SolvedNode&, fu::view<s_Target>, s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_CurrentFn&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_FNvBVj2X&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_Warning>&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, const s_Type&, const s_Target&);
static void bck_block_GT3GvFI0(s_SolvedNode&, s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view<s_HelpersData>, int&, const s_SolvedNode&);
static void bck_call_mMvjQ8QE(s_SolvedNode&, const s_Module&, s_Scope&, const s_Context&, s_CurrentFn&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view<s_HelpersData>, int&, const s_SolvedNode&);
static void bck_if_dtwgmQ6z(s_SolvedNode&, s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view<s_HelpersData>, int&, const s_SolvedNode&);
static void bck_let_hlYWedz8(s_SolvedNode&, s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view<s_HelpersData>, int&, const s_SolvedNode&);
static void bck_loop_XdjwTDPb(s_SolvedNode&, s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view<s_HelpersData>, int&, const s_SolvedNode&);
static void bck_node_s1pQpfN3(s_SolvedNode&, s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view<s_HelpersData>, int&, const s_SolvedNode&);
static void bck_nodes_8xlLdpAD(fu::view_mut<s_SolvedNode>, s_CurrentFn&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, const s_Target&, bool, const s_Options&, fu::view<s_Helpers>, fu::view<s_HelpersData>, int&, const s_SolvedNode&);
static void descend_1jfMyvGw(const s_Type&, bool, bool, bool, bool, s_Scope&, const s_Scope&, s_ScopeSkipMemos&, fu_VEC<s_SolvedNode>&, s_CurrentFn&, s_Module&, const s_Context&, const s_SolvedNode&, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, s_TokenIdx&, fu_VEC<s_ScopeItem>&, s_Map_FNvBVj2X&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, fu_VEC<fu_STR>&, fu_VEC<s_Warning>&, s_Target&, int&, const s_Options&, int&, const fu_STR&, const s_Target&, const s_Type&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, const s_Type&, int);
static void foreach_zbWomr3E(const s_Target&, fu_VEC<s_SolvedNode>&, bool, s_CurrentFn&, s_Module&, s_Scope&, const s_Context&, bool, const s_SolvedNode&, const s_Type&, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, s_TokenIdx&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_FNvBVj2X&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_ScopeMemo&, fu_VEC<fu_STR>&, fu_VEC<s_Warning>&, s_Target&, int&, const s_Options&, int&, const fu_STR&, const s_Target&, const s_Type&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, const s_Type&, bool, const s_Scope&, int);
static void lazySolveEnd_7UxqRdjt(const s_Target&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, const s_Options&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, int&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, s_CurrentFn&, fu_VEC<fu_STR>&, fu_VEC<s_Warning>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static void mcom_node_nQQ0FVJp(s_SolvedNode&, fu::view_mut<s_HelpersData>, const s_Target&, const s_Module&, s_Scope&, const s_Context&, s_TokenIdx&, fu::view<s_Helpers>, const s_Options&, int&);
static void propagateType_NmbfUOia(s_SolvedNode&, const s_Type&, int, s_Scope&, s_Module&, const s_Context&, s_CurrentFn&, fu_VEC<s_Warning>&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static void relaxBlockVar_i35rJBcQ(const s_Target&, int, s_Scope&, s_Module&, const s_Context&, s_CurrentFn&, fu_VEC<s_Warning>&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static void runAllPasses_rpqNGiUY(s_SolvedNode&, s_TokenIdx&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Map_FNvBVj2X&, s_ScopeSkipMemos&, s_ScopeMemo&, fu_VEC<fu_STR>&, s_Target&, int&, fu_VEC<s_SolvedNode>&, const s_Options&, int&, const fu_STR&, fu_VEC<s_ScopeItem>&, const s_Target&, const s_Type&);
static void tagWritten_k39UFIKw(int, s_CurrentFn&);
static void test_node_zhOHu6Rv(const s_SolvedNode&, fu_STR&&, s_TokenIdx&, const s_Module&, const s_Context&, const s_Scope&);
static void test_nodes_QY8AAftO(fu::view<s_SolvedNode>, fu::view<char>, s_TokenIdx&, const s_Module&, const s_Context&, const s_Scope&);
static void walk_oHr6IuAu(s_Node&, fu::view<char>, const s_ScopeItem&);
void ArgsAtRisk_list_nt15hMGe(s_BitSet&, const s_Flow&, int, fu::view<fu_VEC<int>>);
void HERE_fVfHq6aR(const s_TokenIdx&, s_TokenIdx&);
void Reference_trackArgument_f7E00fpg(s_Flow&, int, int, const s_TokenIdx&, const s_Context&);
void Reference_trackLocalRef_wvzGTQIs(s_Flow&, int, const s_Lifetime&);
void Scope_pop_GvGeMzm4(s_Scope&, const s_ScopeMemo&, fu_VEC<s_Helpers>&);
void Scope_set_CN2X3aNb(s_Scope&, const fu_STR&, const s_Target&, bool);
void Scope_set_dXgzwdCQ(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);
void add_PCSel0xp(s_BitSet&, int);
void add_range_PCSel0xp(s_BitSet&, int);
void break_DX6KImTN();

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
    fu_STR kind;
    s_Helpers helpers;
    int flags;
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

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_STR kind;
    fu_STR name;
    fu_STR sighash;
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
    fu_VEC<fu_STR> link;
    fu_VEC<fu_STR> include_dirs;
    fu_VEC<fu_STR> extra_sources;
    explicit operator bool() const noexcept
    {
        return false
            || src
            || link
            || include_dirs
            || extra_sources
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

                                #ifndef DEF_s_Map_JBAFFW0D
                                #define DEF_s_Map_JBAFFW0D
struct s_Map_JBAFFW0D
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
    s_Map_JBAFFW0D files;
    s_Map_JBAFFW0D fuzzy;
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

                                #ifndef DEF_s_Map_FNvBVj2X
                                #define DEF_s_Map_FNvBVj2X
struct s_Map_FNvBVj2X
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

                                #ifndef DEF_s_Map_mUYWjxvp
                                #define DEF_s_Map_mUYWjxvp
struct s_Map_mUYWjxvp
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

                                #ifndef DEF_N_BckSoftRisk
                                #define DEF_N_BckSoftRisk
inline constexpr int N_BckSoftRisk = (1 << 15);
                                #endif

                                #ifndef DEF_N_BckMustSeq
                                #define DEF_N_BckMustSeq
inline constexpr int N_BckMustSeq = (1 << 16);
                                #endif

                                #ifndef DEF_N_SD_HasStaticInit
                                #define DEF_N_SD_HasStaticInit
inline constexpr int N_SD_HasStaticInit = (1 << 30);
                                #endif

                                #ifndef DEF_N_SD_ExternPrivates
                                #define DEF_N_SD_ExternPrivates
inline constexpr int N_SD_ExternPrivates = (1 << 31);
                                #endif

static const bool OPTI_autoshadow = true;

static const bool OPTI_dedupe_vars = true;

static const bool OPTI_flatten_blocks = true;

static const bool OPTI_bck = true;

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

static void push_smTlTOYR(const s_HelpersData& data, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data)
{
    _helpers += s_Helpers { _helpers_data.size() };
    _helpers_data += s_HelpersData(data);
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

static s_SolvedNode SolvedNode_AK4GvqCq(const fu_STR& kind, const s_Type& type, const int flags, const fu_STR& value, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const s_Helpers& helpers, const s_TokenIdx& _here)
{
    return s_SolvedNode { fu_STR(kind), s_Helpers(helpers), int(flags), fu_STR(value), fu_VEC<s_SolvedNode>(items), s_TokenIdx(_here), s_Type(type), s_Target(target), s_RWRanges{} };
}

static void _Scope_import__forceCopy_fbuJQRWp(const int modid, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    _scope.items += fu::get_view(s.items, 0, s.pub_items);
    _scope.converts += fu::get_view(s.converts, 0, s.pub_cnvrts);
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void;
                                #endif

static int unorderedClassify_84V0qMVh(fu::view<char> kind)
{
    if (kind == "fn"_fu)
        return 1;

    if (kind == "struct"_fu)
        return 10;

    return 0;
}

                                #ifndef DEFt_x7E_KclJlPSOsdf
                                #define DEFt_x7E_KclJlPSOsdf
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

static bool isFnOrType_SMNqnQpk(const s_Helpers& h, fu::view<s_HelpersData> _helpers_data)
{
    return !!short((((void)void(), _helpers_data[h.index]).mask & short((HM_Function | HM_Struct))));
}

static bool isLocal_Yp26zAW1(const s_Target& target)
{
    return target.modid < 0;
}

static const s_Overload& GET_pWzRaF0U(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    if (isLocal_Yp26zAW1(target))
        return _scope.extended[-target.modid].locals[(target.index - 1)];

    if (target.modid == module.modid)
        return _scope.overloads[(target.index - 1)];

    return ctx.modules[target.modid].out.solve.scope.overloads[(target.index - 1)];
}

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline constexpr int F_ARG = (1 << 9);
                                #endif

                                #ifndef DEFt_unless_oob_UKLZzMsv
                                #define DEFt_unless_oob_UKLZzMsv
inline const s_Extended& unless_oob_UKLZzMsv(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT_hGjgwR4E(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    if (target.modid == module.modid)
        return unless_oob_UKLZzMsv(_scope.extended, target.index);

    return (target.modid >= 0) ? unless_oob_UKLZzMsv(ctx.modules[target.modid].out.solve.scope.extended, target.index) : (*(const s_Extended*)fu::NIL);
}

static int localOf_oTWzaKhX(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    if (isLocal_Yp26zAW1(target))
        return -target.modid;

    return int(EXT_hGjgwR4E(target, module, _scope, ctx).local_of);
}

static s_Target parent_hsxlvpJB(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return s_Target { int(module.modid), localOf_oTWzaKhX(target, module, _scope, ctx) };
}

static fu_STR human_7SdJ5Hgt(const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    const s_Target t = tryParseClosureID_RHyKU5hm(id).target;
    if (!t)
        return fu_STR(id);

    return (GET_pWzRaF0U(parent_hsxlvpJB(t, module, _scope, ctx), _scope, module, ctx).name + ":"_fu) + GET_pWzRaF0U(t, _scope, module, ctx).name;
}

static fu_STR qWHAT_RTL9wrOX(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    const fu_STR& kind = o.kind;
    fu_STR kind_1 = (((kind == "var"_fu) && (o.flags & F_ARG)) ? "arg"_fu : fu_STR(kind));
    return (qKW_HIwg52Ja(kind_1) + " "_fu) + qID_HIwg52Ja(human_7SdJ5Hgt(o.name, module, _scope, ctx));
}

[[noreturn]] static fu::never fail_1X59Y46x(fu_STR&& reason, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!(reason))
        BUG_patsWWTe(fu_STR{}, _here, ctx);

    int callstack = 0;
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (isFnOrType_SMNqnQpk(h, _helpers_data))
        {
            if (!callstack++)
                reason += "\n\n        Solving "_fu;
            else
                reason += "\n                "_fu;

            const s_Overload& o = GET_pWzRaF0U(((void)void(), _helpers_data[h.index]).target, _scope, module, ctx);
            reason += qWHAT_RTL9wrOX(o, module, _scope, ctx);
        };
    };
    FAIL_FsVimAHf(reason, _here, ctx);
}

static void makeNote_1zG3Fhlo(const int note, const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, int& _notes)
{
    if (note & options.break_notes)
        fail_1X59Y46x((x7E("`break_notes`: Unwanted event: `"_fu, fu::i64dec(note)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    _notes |= note;
}

                                #ifndef DEF_SS_LAZY
                                #define DEF_SS_LAZY
inline constexpr unsigned SS_LAZY = (0x1u << 0u);
                                #endif

                                #ifndef DEFt_grow_if_oob_5lGz9ZEs
                                #define DEFt_grow_if_oob_5lGz9ZEs
inline s_Extended& grow_if_oob_5lGz9ZEs(fu_VEC<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static s_Extended& EXT_mut_neoUwv0o(const s_Target& target, const s_Module& module, s_Scope& _scope)
{
    if (!(target.modid == module.modid))
        fu_ASSERT();

    return grow_if_oob_5lGz9ZEs(_scope.extended, target.index);
}

static s_Template createTemplate_BqIH0wtI(const s_Node& node, const s_CurrentFn& _current_fn, const s_Scope& _scope, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss)
{
    return s_Template { s_Node(node), fu_VEC<int>((!_current_fn ? _scope.imports : (*(const fu_VEC<int>*)fu::NIL))), (_current_fn ? Scope_snap_xL8BbLPe(_scope, _helpers) : s_ScopeMemo{}), s_ScopeSkipMemos((_current_fn ? _ss : (*(const s_ScopeSkipMemos*)fu::NIL))) };
}

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline constexpr int F_SHADOW = (1 << 23);
                                #endif

static bool shouldAutoshadow_fhTJQXji(fu::view<char> id, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope)
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

static void autoshadow_oKChgCHk(bool& shadows, const int local_of, fu::view<char> id, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope)
{
    if (!shadows && local_of && shouldAutoshadow_fhTJQXji(id, _scope, _ss, _root_scope))
        shadows = true;

}

                                #ifndef DEF_F_CONVERSION
                                #define DEF_F_CONVERSION
inline constexpr int F_CONVERSION = (1 << 14);
                                #endif

static s_Type X_addrofTarget_OPGCV9Jh(const s_Target& target)
{
    return s_Type { s_ValueType { 0, packAddrOfFn_wA8no8pa((fu::slate<1, s_Target> { s_Target(target) })) }, s_Lifetime{} };
}

static s_SolvedNode createFnDef_wHZXsO7m(const s_Type& type, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_AK4GvqCq("fndef"_fu, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_SolvedNode uPrepFn_A_OFmG0Kuz(const s_Node& node, const s_CurrentFn& _current_fn, s_Scope& _scope, const s_Module& module, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope, const s_TokenIdx& _here)
{
    const fu_STR& id = node.value;
    const int local_of = _current_fn.out.target.index;
    const s_Target target = Scope_create_ogkrG8By(_scope, "fn"_fu, "__prep__"_fu, (*(const s_Type*)fu::NIL), node.flags, SS_LAZY, 0, module);
    s_Extended& ext = EXT_mut_neoUwv0o(target, module, _scope);
    ext.local_of = local_of;
    ext.tEmplate = createTemplate_BqIH0wtI(node, _current_fn, _scope, _helpers, _ss);
    ext.min = int(0x7fffffffu);
    ext.max = 0;
    bool shadows = !!(node.flags & F_SHADOW);
    autoshadow_oKChgCHk(shadows, local_of, id, _scope, _ss, _root_scope);
    Scope_set_CN2X3aNb(_scope, id, target, shadows);
    if (node.flags & F_CONVERSION)
        _scope.converts.push(s_Target(target));

    return createFnDef_wHZXsO7m(X_addrofTarget_OPGCV9Jh(target), target, _here);
}

static s_SolvedNode createEmpty_extETXwG(const fu_STR& kind, const s_Type& type, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_AK4GvqCq(kind, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_Overload& GET_mut_lqSDNFDF(const s_Target& target, s_Scope& _scope, const s_Module& module)
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

static s_Type T_rVMRJfWj(const int i, const s_Node& node, const s_Map_mUYWjxvp& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    /*MOV*/ s_Type danglefix = evalTypeAnnot_nHP0Ok9t(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    return /*NRVO*/ danglefix;
}

                                #ifndef DEFt_if_last_cCrdPZ3P
                                #define DEFt_if_last_cCrdPZ3P
inline const s_SolvedNode& if_last_cCrdPZ3P(fu::view<s_SolvedNode> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never;
                                #endif

                                #ifndef DEFt_last_cCrdPZ3P
                                #define DEFt_last_cCrdPZ3P
inline const s_SolvedNode& last_cCrdPZ3P(fu::view<s_SolvedNode> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
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

                                #ifndef DEFt_only_gF1gIgkM
                                #define DEFt_only_gF1gIgkM
inline const s_SolvedNode& only_gF1gIgkM(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_SolvedNode createBlock_zloQ2DK8(const s_Type& type, fu_VEC<s_SolvedNode>&& items, const s_Helpers& h, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    for (int x = 0; x < items.size(); x++)
    {
        if (!items[x].kind)
            fu::fail(x7E("createBlock.before-flatten.items: no kind on item #"_fu, fu::i64dec(x)));

    };
    if (_here && (_helpers.size() > 10000001))
        fu::fail(x7E("woot: "_fu, fu::i64dec(_helpers.size())));

    if (OPTI_flatten_blocks)
    {
        while (items.size())
        {
            const s_SolvedNode& tail = last_cCrdPZ3P(items);
            const s_HelpersData* BL_8_v;
            if ((tail.kind != "block"_fu) || (tail.helpers && short(((__extension__ (
            {
                const s_Helpers& h_1 = tail.helpers;
                BL_8_v = &(_helpers_data[h_1.index]);
            (void)0;}), *BL_8_v).mask & HM_LabelUsed))))
                break;

            fu_VEC<s_SolvedNode> unwrap { tail.items };
            items.pop();
            items += unwrap;
        };
    };
    for (int i = (items.size() - 1); i-- > 0; )
    {
        if (items[i].kind == "empty"_fu)
            items.splice(i, 1);

    };
    if (!short((((void)void(), _helpers_data[h.index]).mask & short((HM_LabelUsed | HM_KeepBlock)))) && (items.size() == 1))
        return s_SolvedNode(only_gF1gIgkM(items));

    return SolvedNode_AK4GvqCq("block"_fu, type, 0, (*(const fu_STR*)fu::NIL), items, s_Target{}, h, _here);
}

static s_SolvedNode deadCall_ZuGcCbJG(const fu_VEC<s_SolvedNode>& args, const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, int& _notes)
{
    makeNote_1zG3Fhlo(N_DeadCall, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    return createBlock_zloQ2DK8(t_never, fu_VEC<s_SolvedNode>(args), s_Helpers{}, _here, _helpers, _helpers_data);
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

static const s_Module& findModule_2Of81qwt(const fu_STR& fuzimport, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    fu_STR fname = resolveFile_x_pcVfgwiN(fuzimport, ctx);
    fu::view<s_Module> modules = ctx.modules;
    for (int i = 1; i < modules.size(); i++)
    {
        const s_Module& m = modules[i];
        if (m.fname == fname)
            return m;

    };
    fail_1X59Y46x(("Cannot locate: "_fu + fname), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Scope& dequalify_andGetScope_zKJ0x8ny(fu_STR& id, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    const int split = find_hCEGPwyG(id, '\t');
    if (!((split >= 0)))
        BUG_patsWWTe(fu_STR{}, _here, ctx);

    fu_STR fname = fu::slice(id, 0, split);
    id = fu::slice(id, (split + 1));
    const s_Module& other = findModule_2Of81qwt(fname, ctx, _here, _helpers, _helpers_data, _scope, module);
    if (other.modid != module.modid)
        return other.out.solve.scope;

    fail_1X59Y46x((("Qualified "_fu + qBAD_HIwg52Ja(id)) + ":: access current module."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEFt_each_TY1d8jpD
                                #define DEFt_each_TY1d8jpD
inline void each_TY1d8jpD(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, int& count, const s_TokenIdx& _here, const s_Context& ctx)
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

static int countUsings_J5CL8nv5(const bool local_scope, const s_Scope& _scope, const s_Scope& misc_scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx)
{
    const s_Scope& scope = (local_scope ? _scope : misc_scope);
    /*MOV*/ int count = 0;
    if (scope.usings)
        each_TY1d8jpD(scope.usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, count, _here, ctx);

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

                                #ifndef DEFt_each_6Fzd5B62
                                #define DEFt_each_6Fzd5B62
inline void each_6Fzd5B62(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, s_BitSet& seen)
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
            add_PCSel0xp(seen, modid);
        };
        i0 = ss.end;
    };
}
                                #endif

static void visitTypeImports_RlOgDZHL(const s_Type& type, const s_Module& module, const s_Context& ctx, s_BitSet& seen, const s_Scope& _scope, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id, fu_VEC<s_Target>& extra_items)
{
    fu::view<int> visit = lookupTypeImports_JKdxRWxB(type, module, ctx);
    for (int i = -1; i < visit.size(); i++)
    {
        const int modid = ((i >= 0) ? int(visit[i]) : modidOfOrigin_usAEukhR(type));
        if (has_noL0hivx(seen, modid))
            continue;

        if (!seen)
        {
            add_PCSel0xp(seen, 0);
            add_PCSel0xp(seen, module.modid);
            each_6Fzd5B62(_scope.imports, (local_scope ? _ss.imports : fu::view<s_ScopeSkip>{}), 0, seen);
        };
        if (!add_once_PCSel0xp(seen, modid))
            continue;

        fu::view<s_ScopeItem> items = ctx.modules[modid].out.solve.scope.items;
        for (int i_1 = 0; i_1 < items.size(); i_1++)
        {
            if (items[i_1].id == id)
                extra_items.push(target_e3eS1o6f(items[i_1]));

        };
    };
}

                                #ifndef DEFt_each_75Z7PGDA
                                #define DEFt_each_75Z7PGDA
inline void each_75Z7PGDA(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, s_BitSet& seen, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id, fu_VEC<s_Target>& extra_items)
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
            visitTypeImports_RlOgDZHL(GET_pWzRaF0U(u, _scope, module, ctx).type, module, ctx, seen, _scope, local_scope, _ss, id, extra_items);
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

                                #ifndef DEFt_unpackAddrOfFn_jBUTgwxr
                                #define DEFt_unpackAddrOfFn_jBUTgwxr
inline void unpackAddrOfFn_jBUTgwxr(fu::view<char> canon, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, int& parent_idx)
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
            const int local_of = localOf_oTWzaKhX(target, module, _scope, ctx);
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

                                #ifndef DEFt_x3Cx3E_gcxVH86X
                                #define DEFt_x3Cx3E_gcxVH86X
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_b25bS2EX
                                #define DEFt_x3Cx3E_b25bS2EX
inline int x3Cx3E_b25bS2EX(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_wtS8CFRs
                                #define DEFt_x3Cx3E_wtS8CFRs
inline int x3Cx3E_wtS8CFRs(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_b25bS2EX(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

inline static int bfind_1RDtLvGZ(fu::view<char> item, s_Map_FNvBVj2X& _, const fu_STR& item_1)
{
    /*MOV*/ int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_wtS8CFRs(_.keys[i], item);
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

                                #ifndef DEFt_ref_BdOFVxYD
                                #define DEFt_ref_BdOFVxYD
inline s_Target& ref_BdOFVxYD(const fu_STR& item, s_Map_FNvBVj2X& _)
{
    const int idx = bfind_1RDtLvGZ(item, _, item);
    return _.vals.mutref(idx);
}
                                #endif

                                #ifndef DEFt_ref_05uH0PW4
                                #define DEFt_ref_05uH0PW4
inline s_Target& ref_05uH0PW4(s_Map_FNvBVj2X& _, const fu_STR& key)
{
    return ref_BdOFVxYD(key, _);
}
                                #endif

static bool is_SPECFAIL_fPaHmQWG(const s_Target& target)
{
    return target.modid == 2147483647;
}

inline static fu_STR id_vfw9OQba(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return (is_SPECFAIL_fPaHmQWG(target) ? "SPEC_FAIL"_fu : (("`"_fu + GET_pWzRaF0U(target, _scope, module, ctx).name) + "`"_fu));
}

inline static fu_STR id_iWAsDRWh(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return (is_SPECFAIL_fPaHmQWG(target) ? "SPEC_FAIL"_fu : (("`"_fu + GET_pWzRaF0U(target, _scope, module, ctx).name) + "`"_fu));
}

static void setSpec_W9qt07qP(const fu_STR& mangle, const s_Target& target, const bool nx, const bool isInline, const s_TokenIdx& _here, const s_Context& ctx, s_Map_FNvBVj2X& _specs, const s_Scope& _scope, const s_Module& module)
{
    if (isInline)
        BUG_patsWWTe("inline.setSpec"_fu, _here, ctx);

    s_Target& t = ref_05uH0PW4(_specs, mangle);
    if (!((!t && nx) || (is_SPECFAIL_fPaHmQWG(t) && !nx)))
        BUG_patsWWTe(((((((x7E((x7E("About to screw up royally, replacing spec: "_fu, fu::i64dec(t.index)) + " with "_fu), fu::i64dec(target.index)) + ", mangle: "_fu) + mangle) + ", that's: "_fu) + id_vfw9OQba(t, _scope, module, ctx)) + " becoming "_fu) + id_iWAsDRWh(target, _scope, module, ctx)), _here, ctx);

    t = target;
}

                                #ifndef DEFt_if_last_6CuunbF5
                                #define DEFt_if_last_6CuunbF5
inline const s_ScopeSkip& if_last_6CuunbF5(fu::view<s_ScopeSkip> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_ScopeSkip*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_last_erWMr9lO
                                #define DEFt_last_erWMr9lO
inline s_ScopeSkip& last_erWMr9lO(fu::view_mut<s_ScopeSkip> s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static void ScopeSkip_push_zbdq4D2a(fu_VEC<s_ScopeSkip>& scope_skip, const int start, const int end, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!((start <= end)))
        BUG_patsWWTe("ScopeSkip_push: bad args."_fu, _here, ctx);

    if (end == start)
        return;

    const s_ScopeSkip& last = if_last_6CuunbF5(scope_skip);
    if (!((last.end <= start)))
        BUG_patsWWTe("ScopeSkip_push: last.end > start."_fu, _here, ctx);

    if (scope_skip && (last.end == start))
        last_erWMr9lO(scope_skip).end = end;
    else
        scope_skip += s_ScopeSkip { int(start), int(end) };

}

static void Scope_import_xOUhkVOX(const int modid, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx)
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
        BUG_patsWWTe("Attempting to import modid-0."_fu, _here, ctx);

    _scope.imports += int(modid);
    _Scope_import__forceCopy_fbuJQRWp(modid, ctx, _scope);
}

static void _Scope_import__forceCopy_privates_h7iR7bGI(const int modid, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    _scope.items += fu::get_view(s.items, s.pub_items, s.items.size());
    _scope.converts += fu::get_view(s.converts, s.pub_cnvrts, s.converts.size());
}

static void Scope_import_privates_tNr6KtQT(const int modid, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx)
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
        BUG_patsWWTe("Attempting to import_privates modid-0."_fu, _here, ctx);

    _scope.privates += int(modid);
    _Scope_import__forceCopy_privates_h7iR7bGI(modid, ctx, _scope);
}

static void ScopeSkip_setup_9AeV5A2A(const s_Template& tEmplate, const s_ScopeMemo& scope0, const bool isInline, const s_ScopeMemo& _root_scope, s_ScopeSkipMemos& _ss, const s_TokenIdx& _here, const s_Context& ctx, const s_CurrentFn& _current_fn, s_Scope& _scope)
{
    if (_root_scope)
    {
        const s_ScopeMemo& start = (tEmplate.scope_memo ? tEmplate.scope_memo : _root_scope);
        _ss = tEmplate.scope_skip;
        ScopeSkip_push_zbdq4D2a(_ss.items, start.items_len, scope0.items_len, _here, ctx);
        ScopeSkip_push_zbdq4D2a(_ss.implicits, ((isInline && (start.implicits_len > _current_fn.scope0.implicits_len)) ? _current_fn.scope0.implicits_len : start.implicits_len), (isInline ? _current_fn.scope0.implicits_len : scope0.implicits_len), _here, ctx);
        ScopeSkip_push_zbdq4D2a(_ss.imports, start.imports_len, scope0.imports_len, _here, ctx);
        ScopeSkip_push_zbdq4D2a(_ss.privates, start.privates_len, scope0.privates_len, _here, ctx);
        ScopeSkip_push_zbdq4D2a(_ss.usings, start.usings_len, scope0.usings_len, _here, ctx);
        ScopeSkip_push_zbdq4D2a(_ss.converts, start.converts_len, scope0.converts_len, _here, ctx);
        ScopeSkip_push_zbdq4D2a(_ss.helpers, start.helpers_len, scope0.helpers_len, _here, ctx);
    };
    for (int i = 0; i < tEmplate.imports.size(); i++)
    {
        Scope_import_xOUhkVOX(tEmplate.imports[i], _scope, _ss, _here, ctx);
        if (i == 0)
            Scope_import_privates_tNr6KtQT(tEmplate.imports[i], _scope, _ss, _here, ctx);

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

static bool couldRetype_rqZdIMW7(const s_SolvedNode& node)
{
    return (node.kind == "int"_fu) || (node.kind == "real"_fu) || (node.kind == "definit"_fu);
}

inline static int bfind_mAkVwtBy(fu::view<char> item, s_Map_mUYWjxvp& _, const fu_STR& item_1)
{
    /*MOV*/ int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_wtS8CFRs(_.keys[i], item);
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

                                #ifndef DEFt_ref_6JbqED5D
                                #define DEFt_ref_6JbqED5D
inline s_TypeParam& ref_6JbqED5D(const fu_STR& item, s_Map_mUYWjxvp& _)
{
    const int idx = bfind_mAkVwtBy(item, _, item);
    return _.vals.mutref(idx);
}
                                #endif

                                #ifndef DEFt_ref_jNZ3TSp2
                                #define DEFt_ref_jNZ3TSp2
inline s_TypeParam& ref_jNZ3TSp2(s_Map_mUYWjxvp& _, const fu_STR& key)
{
    return ref_6JbqED5D(key, _);
}
                                #endif

static const s_Type& Scope_lookupType_QpyW554M(fu_STR&& id, const int flags, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    int scope_iterator {};
    s_Target overloadIdx {};
    bool shadows {};
    const int qualified = (flags & F_COMPOUND_ID);
    const s_Scope& scope = (qualified ? dequalify_andGetScope_zKJ0x8ny(id, _here, ctx, _helpers, _helpers_data, _scope, module) : _scope);
    while ((overloadIdx = search_qV63L7fS(scope.items, id, scope_iterator, (!qualified ? _ss.items : fu::view<s_ScopeSkip>{}), shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
    {
        const s_Overload& maybe = GET_pWzRaF0U(overloadIdx, _scope, module, ctx);
        if (maybe.kind == "type"_fu)
            return maybe.type ? maybe.type : BUG_patsWWTe(fu_STR{}, _here, ctx);

    };
    fail_1X59Y46x((("No type `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Type& Scope_lookupType_xhvMEt8C(const s_Node& annot, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    return Scope_lookupType_QpyW554M(fu_STR(annot.value), annot.flags, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
}

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32;
                                #endif

static bool want_bbOXkAXV(const s_Type& t, const s_Type& type)
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

static const s_Type& solveInt_q6G1lDcP(fu::view<char> v, const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    s_Intlit parse = Intlit_hdlyM3zq(v);
    if (parse.error)
        fail_1X59Y46x(fu_STR(parse.error), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (type)
    {
        if (!parse.uNsigned)
        {
            if (want_bbOXkAXV(t_f32, type) && (parse.minsize_f <= fu::u8(32u)))
                return t_f32;

            if (want_bbOXkAXV(t_f64, type) && (parse.minsize_f <= fu::u8(64u)))
                return t_f64;

            if (want_bbOXkAXV(t_i32, type) && (parse.minsize_i <= fu::u8(32u)))
                return t_i32;

            if (want_bbOXkAXV(t_i64, type) && (parse.minsize_i <= fu::u8(64u)))
                return t_i64;

            if (want_bbOXkAXV(t_i16, type) && (parse.minsize_i <= fu::u8(16u)))
                return t_i16;

            if (want_bbOXkAXV(t_i8, type) && (parse.minsize_i <= fu::u8(8u)))
                return t_i8;

        };
        if (!parse.sIgned)
        {
            if (want_bbOXkAXV(t_u32, type) && (parse.minsize_u <= fu::u8(32u)))
                return t_u32;

            if (want_bbOXkAXV(t_u64, type) && (parse.minsize_u <= fu::u8(64u)))
                return t_u64;

            if (want_bbOXkAXV(t_u16, type) && (parse.minsize_u <= fu::u8(16u)))
                return t_u16;

            if (want_bbOXkAXV(t_u8, type) && (parse.minsize_u <= fu::u8(8u)))
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
    fail_1X59Y46x("Bad int literal."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static const s_Type& solveNum_gzjaNsUe(const fu_STR& v, const s_Type& type)
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

static s_Type trySolveDefinit_3WQGxi0C(const s_Type& type)
{
    if (!type)
        return s_Type(t_zeroes);

    return type_trySuper_yRJeU5dj(t_zeroes, type);
}

static s_Type tryRetyping_Um0Yg81P(const s_SolvedNode& node, const s_Type& expect, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (is_arithmetic_oPp5yWwB(node.type) && is_arithmetic_oPp5yWwB(expect))
    {
        if (node.kind == "int"_fu)
            return s_Type(solveInt_q6G1lDcP(node.value, expect, _here, ctx, _helpers, _helpers_data, _scope, module));

        if (node.kind == "real"_fu)
            return s_Type(solveNum_gzjaNsUe(node.value, expect));

    };
    if (node.kind == "definit"_fu)
        return trySolveDefinit_3WQGxi0C(expect);

    return s_Type{};
}

static bool trySolveTypeParams_AjGYzb4a(const s_Node& node, s_Type&& type, s_Map_mUYWjxvp& typeParams, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    if (node.kind == "call"_fu)
    {
        fu::view<s_Node> items = node.items;
        if (!items.size())
            return isAssignable_yRJeU5dj(Scope_lookupType_xhvMEt8C(node, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), type);


        { {
            if (items.size() == 1)
            {
                fu::never BL_5_v {};
                s_Type t = ((node.value == "&"_fu) ? tryClear_ref_zJCUz9W3(type, _here, ctx) : ((node.value == "&mut"_fu) ? tryClear_mutref_zJCUz9W3(type, _here, ctx) : ((node.value == "[]"_fu) ? tryClear_array_zJCUz9W3(type) : (__extension__ (
                {
                    goto BL_3;
                (void)0;}), static_cast<fu::never&&>(BL_5_v)))));
                if (!t)
                    return false;

                const s_Node* _0;
                return trySolveTypeParams_AjGYzb4a((*(_0 = &(items[0])) ? *_0 : BUG_patsWWTe(fu_STR{}, _here, ctx)), s_Type(t), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
            };
          } BL_3:;
        };
        fail_1X59Y46x("TODO: do the stuff"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
    }
    else if (node.kind == "typeparam"_fu)
    {
        const fu_STR& id = (node.value ? node.value : BUG_patsWWTe(fu_STR{}, _here, ctx));
        s_TypeParam& _param = ref_jNZ3TSp2(typeParams, id);
        if (_param)
        {
            s_Type uNion = type_trySuper_yRJeU5dj(_param.matched, type);
            if (!uNion)
                return false;

            type = uNion;
        };
        s_Type type_1 = relax_typeParam_zJCUz9W3(s_Type(type));
        _param.matched = relax_typeParam_zJCUz9W3(s_Type(type_1));
        return true;
    }
    else if ((node.kind == "arrlit"_fu) && (node.items.size() == 1))
    {
        s_Type t = tryClear_sliceable_zJCUz9W3(type);
        const s_Node* _1;
        return t && trySolveTypeParams_AjGYzb4a((*(_1 = &(node.items[0])) ? *_1 : BUG_patsWWTe(fu_STR{}, _here, ctx)), s_Type(t), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
    };
    fail_1X59Y46x("TODO trySolveTypeParams fallthrough"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static fu_STR humanizeType_nkNrw01H(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR result { (isStruct_usAEukhR(type) ? lookupStruct_GBXUPXZt(type, module, ctx).name : type.vtype.canon) };
    if (type.vtype.quals)
        result += humanizeQuals_zJCUz9W3(type);

    return /*NRVO*/ result;
}

inline static fu_STR mangleArguments_GUqTHDp6(fu::view<s_Type> args, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_FJyl5kxv(args[i], "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEFt_x3Cx3E_6qQfdfXM
                                #define DEFt_x3Cx3E_6qQfdfXM
inline int x3Cx3E_6qQfdfXM(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_8hN0LrtI
                                #define DEFt_x3Cx3E_8hN0LrtI
inline int x3Cx3E_8hN0LrtI(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_6qQfdfXM(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEFt_get_rEat7DTW
                                #define DEFt_get_rEat7DTW
inline const s_Target& get_rEat7DTW(fu::view<fu_STR> keys, fu::view<char> item, fu::view<s_Target> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_8hN0LrtI(keys[i], item);
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

                                #ifndef DEFt_get_uXcAbnMV
                                #define DEFt_get_uXcAbnMV
inline const s_Target& get_uXcAbnMV(const s_Map_FNvBVj2X& _, fu::view<char> key)
{
    return get_rEat7DTW(_.keys, key, _.vals);
}
                                #endif

static s_Target SPECFAIL_VTokR948(const fu_STR& reason, fu_VEC<fu_STR>& _spec_errors, const s_Target& SPECFAIL_RentrySafety, const fu_STR& mangle00, const bool isInline, const s_TokenIdx& _here, const s_Context& ctx, s_Map_FNvBVj2X& _specs, const s_Scope& _scope, const s_Module& module, const fu_STR& mangle)
{
    const int index = _spec_errors.size();
    _spec_errors += fu_STR(reason);
    /*MOV*/ const s_Target spec = s_Target { int(SPECFAIL_RentrySafety.modid), int(index) };
    setSpec_W9qt07qP(mangle00, spec, bool{}, isInline, _here, ctx, _specs, _scope, module);
    setSpec_W9qt07qP(mangle, spec, bool{}, isInline, _here, ctx, _specs, _scope, module);
    return /*NRVO*/ spec;
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEFt_x3Cx3E_hkY7hbvG
                                #define DEFt_x3Cx3E_hkY7hbvG
inline int x3Cx3E_hkY7hbvG(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_KclJlPSO
                                #define DEFt_x3Cx3E_KclJlPSO
inline int x3Cx3E_KclJlPSO(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_hkY7hbvG(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEFt_get_XN8G79En
                                #define DEFt_get_XN8G79En
inline const s_TypeParam& get_XN8G79En(fu::view<fu_STR> keys, fu::view<char> item, fu::view<s_TypeParam> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_KclJlPSO(keys[i], item);
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

                                #ifndef DEFt_get_3d2cCCTJ
                                #define DEFt_get_3d2cCCTJ
inline const s_TypeParam& get_3d2cCCTJ(const s_Map_mUYWjxvp& _, fu::view<char> key)
{
    return get_XN8G79En(_.keys, key, _.vals);
}
                                #endif

static const s_Type& evalTypeParam_Bss0PTf1(fu::view<char> id, const s_Map_mUYWjxvp& typeParams, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    const s_Type* _0;
    return *(_0 = &(get_3d2cCCTJ(typeParams, id).matched)) ? *_0 : *(_0 = &(Scope_lookupType_QpyW554M(("$"_fu + (id ? id : fail_1X59Y46x("Falsy type param id."_fu, _here, ctx, _helpers, _helpers_data, _scope, module))), 0, _here, ctx, _helpers, _helpers_data, _scope, module, _ss))) ? *_0 : fail_1X59Y46x((("No type param `$"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static bool type_has_2TVU9uSv(const s_Type& type, fu::view<char> tag, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (tag == "trivial"_fu)
        return is_trivial_JKdxRWxB(type, module, ctx);

    if (tag == "copy"_fu)
        return is_rx_copy_zJCUz9W3(type);

    if (tag == "arithmetic"_fu)
        return is_arithmetic_oPp5yWwB(type);

    if (tag == "primitive"_fu)
        return is_primitive_oPp5yWwB(type);

    if (tag == "integral"_fu)
        return is_integral_oPp5yWwB(type);

    if (tag == "unsigned"_fu)
        return is_unsigned_oPp5yWwB(type);

    if (tag == "floating_point"_fu)
        return is_floating_pt_oPp5yWwB(type);

    if (tag == "mutref"_fu)
        return is_mutref_zJCUz9W3(type, _here, ctx);

    BUG_patsWWTe((("Unknown type tag: `"_fu + tag) + "`."_fu), _here, ctx);
}

static bool evalTypePattern_OExrTXiF(const s_Node& node, s_Map_mUYWjxvp& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    if (node.kind == "and"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (!evalTypePattern_OExrTXiF(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string))
                return false;

        };
        return true;
    }
    else if (node.kind == "or"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (evalTypePattern_OExrTXiF(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string))
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
            return type_has_2TVU9uSv(evalTypeParam_Bss0PTf1(left.value, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (right.value ? right.value : fail_1X59Y46x("Falsy type tag."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)), module, ctx, _here);
        else
        {
            s_Type actual = evalTypeAnnot_nHP0Ok9t(left, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
            /*MOV*/ const bool ok = trySolveTypeParams_AjGYzb4a(right, s_Type(actual), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
            if (ok && (left.kind == "typeparam"_fu))
            {
                s_Type expect = evalTypeAnnot_nHP0Ok9t(right, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
                const fu_STR& id = left.value;
                s_TypeParam& tp = ref_jNZ3TSp2(typeParams, id);
                s_Type _2 {};
                tp.consumed = (tp.consumed ? ((_2 = type_tryIntersect_yRJeU5dj(tp.consumed, expect)) ? static_cast<s_Type&&>(_2) : fail_1X59Y46x("typeassert intersect fail."_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) : s_Type(expect));
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
                return !evalTypePattern_OExrTXiF(node.items[0], typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

        };
    };
    fail_1X59Y46x((x7E((("TODO evalTypePattern fallthrough: "_fu + node.kind) + "("_fu), fu::i64dec(node.items.size())) + ")"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

static bool isNativeBody_f7SekL2g(const s_Node& n_body)
{
    return (n_body.kind == "call"_fu) && (n_body.value == "__native"_fu);
}

                                #ifndef DEFt_if_ref_DNp8IETM
                                #define DEFt_if_ref_DNp8IETM
inline bool if_ref_DNp8IETM(fu::view<char> item, s_Map_mUYWjxvp& _)
{
    int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_wtS8CFRs(_.keys[i], item);
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

                                #ifndef DEFt_if_ref_vgnDtdao
                                #define DEFt_if_ref_vgnDtdao
inline bool if_ref_vgnDtdao(s_Map_mUYWjxvp& _, fu::view<char> key)
{
    return if_ref_DNp8IETM(key, _);
}
                                #endif

static const s_Target& checkStruct_iSeUBzdA(const s_Type& type, const s_Module& module, const s_Context& ctx, const s_Scope& _scope)
{
    const s_Target& t = lookupStruct_GBXUPXZt(type, module, ctx).target;
    return (GET_pWzRaF0U(t, _scope, module, ctx).type == type) ? t : (*(const s_Target*)fu::NIL);
}

                                #ifndef DEFt_pairs_acjaP1Cz
                                #define DEFt_pairs_acjaP1Cz
inline void pairs_acjaP1Cz(const s_Map_mUYWjxvp& _, const s_Module& module, const s_Context& ctx, s_Scope& _scope, fu_VEC<s_ScopeItem>& res)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        fu::view<char> id = _.keys[i];
        const s_TypeParam& tp = _.vals[i];
        fu_STR name = ("$"_fu + id);
        const s_Type& type = tp.matched;
        s_Target _0 {};
        const s_Target target = ((_0 = s_Target((isStruct_usAEukhR(type) ? checkStruct_iSeUBzdA(type, module, ctx, _scope) : (*(const s_Target*)fu::NIL)))) ? _0 : Scope_create_ogkrG8By(_scope, "type"_fu, ("$"_fu + id), type, 0, 0u, 0, module));
        Scope_set_dXgzwdCQ(res, name, target, false);
    };
}
                                #endif

static fu_VEC<s_ScopeItem> intoScopeItems_kBY2JzJR(const s_Map_mUYWjxvp& typeParams, const s_Module& module, const s_Context& ctx, s_Scope& _scope)
{
    /*MOV*/ fu_VEC<s_ScopeItem> res {};
    pairs_acjaP1Cz(typeParams, module, ctx, _scope, res);
    return /*NRVO*/ res;
}

static s_SolvedNode solved_KVUVmvqw(const s_Node& node, const s_Type& type, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_AK4GvqCq(node.kind, type, node.flags, node.value, items, target, s_Helpers{}, _here);
}

static fu_VEC<s_SolvedNode>& outItems_K3hQg5lU(s_CurrentFn& _current_fn)
{
    return _current_fn.out.items;
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

                                #ifndef DEF_F_PURE_CTX
                                #define DEF_F_PURE_CTX
extern const int F_PURE_CTX;
                                #endif

                                #ifndef DEF_F_NOFLOW
                                #define DEF_F_NOFLOW
extern const int F_NOFLOW;
                                #endif

static s_Type tryGetArgSpecType_c0XLyJnh(fu::view<char> id, fu::view<s_ScopeItem> extra_items, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    fu_STR param = ("$"_fu + id);
    for (int i = 0; i < extra_items.size(); i++)
    {
        const s_ScopeItem& m = extra_items[i];
        if (m.id == param)
        {
            const s_Overload& o = GET_pWzRaF0U(target_e3eS1o6f(m), _scope, module, ctx);
            if (!(o.kind == "type"_fu))
                fail_1X59Y46x((x7E((((("tryGetArgSpecType: Not a typeparam: `"_fu + o.kind) + ":"_fu) + param) + "("_fu), fu::i64dec(EXT_hGjgwR4E(target_e3eS1o6f(m), module, _scope, ctx).max)) + ")`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

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

                                #ifndef DEFt_unpackAddrOfFn_yhh11bh4
                                #define DEFt_unpackAddrOfFn_yhh11bh4
inline void unpackAddrOfFn_yhh11bh4(fu::view<char> canon, s_Scope& _scope, const fu_STR& id, const bool shadows)
{
    if (!(canon[0] == '@'))
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

    int offset = 1;
    while (offset < canon.size())
    {
        const s_Mi mi = parseMi_t6R8uPsY(offset, canon);
        const s_Target target = s_Target { int(mi.modid), int(mi.index) };
        Scope_set_dXgzwdCQ(_scope.items, id, target, shadows);
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

                                #ifndef DEFt_x3Cx3E_PpOiPx6i
                                #define DEFt_x3Cx3E_PpOiPx6i
inline int x3Cx3E_PpOiPx6i(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_oh6UfVgT
                                #define DEFt_x3Cx3E_oh6UfVgT
inline int x3Cx3E_oh6UfVgT(const s_Region& a, const s_Region& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_PpOiPx6i(a.index, b.index);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

static s_Target nested_jjhiAa3t(const int index, const s_Target& _current_fnort, const s_Module& module)
{
    int _0 {};
    return s_Target { ((_0 = -_current_fnort.index) ? _0 : int(module.modid)), int(index) };
}

static const s_Lifetime& Lifetime_test_HRmImHZi(const s_Lifetime& lifetime, const bool tempsOK, const s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort)
{
    if (SELF_TEST)
    {
        const s_Target& current_fn = _current_fn.out.target;
        const s_Overload& debug_2 = (current_fn ? GET_pWzRaF0U(current_fn, _scope, module, ctx) : (*(const s_Overload*)fu::NIL));
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
                if (!(!i || (x3Cx3E_oh6UfVgT(region, _last) > 0)))
                    BUG_patsWWTe("Lifetime_test: not a sorted set"_fu, _here, ctx);

                _last = region;
            };
            if (Region_isArgPosition_MvT8pzW6(region))
                continue;

            if (Region_isTemp_MvT8pzW6(region))
            {
                if (!((i == (lifetime.uni0n.size() - 1)) && tempsOK))
                    BUG_patsWWTe("Lifetime_test: unexpected temporary."_fu, _here, ctx);

                continue;
            };
            const int index = Region_toLocal_MvT8pzW6(region);
            if (index)
            {
                const s_Overload& o = GET_pWzRaF0U(nested_jjhiAa3t(index, _current_fnort, module), _scope, module, ctx);
                if (!(o.kind == "var"_fu))
                    BUG_patsWWTe(((("Lifetime_test: local is not a var: "_fu + o.kind) + " "_fu) + o.name), _here, ctx);

            };
        };
    };
    return lifetime;
}

static s_Lifetime Lifetime_fromBinding_7TtGgkRZ(const s_Target& target, const int local_of, const s_Module& module, const s_TokenIdx& _here, const s_Context& ctx, const s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Target& _current_fnort)
{
    if (!((target.modid < 0) || (target.modid < 0) || (target.modid == module.modid)))
        BUG_patsWWTe("not from this module"_fu, _here, ctx);

    if (!local_of)
        return Lifetime_static_8nlJDPX0();

    const int index = target.index;
    const s_Region region = Region_fromLocal_BaKYka79(index);
    return /* MOVE_FROM_CONST_REF */static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>(Lifetime_test_HRmImHZi(s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(region) } } }, bool{}, _current_fn, _scope, module, ctx, _here, _current_fnort)));
}

static s_Target Binding_uziOSlJc(const fu_STR& id, s_Type&& type, const int flags, bool& shadows, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort)
{
    const fu_STR& name = id;
    const int local_of = _current_fn.out.target.index;
    if (_root_scope)
        autoshadow_oKChgCHk(shadows, local_of, id, _scope, _ss, _root_scope);

    /*MOV*/ const s_Target target = Scope_create_ogkrG8By(_scope, "var"_fu, name, (*(const s_Type*)fu::NIL), flags, 0u, local_of, module);
    s_Overload& overload = GET_mut_lqSDNFDF(target, _scope, module);

    {
        s_Lifetime lifetime = Lifetime_fromBinding_7TtGgkRZ(target, local_of, module, _here, ctx, _current_fn, _scope, _current_fnort);
        type.lifetime = s_Lifetime{};
        overload.type = ((flags & F_MUT) ? add_mutref_EgWfyCPW(s_Type(type), lifetime, _here, ctx) : add_ref_EgWfyCPW(s_Type(type), lifetime, _here, ctx));
    };
    return /*NRVO*/ target;
}

static s_SolvedNode& solved_set_mBIs9g0H(const s_Target& target, const s_SolvedNode& node, s_Scope& _scope, const s_Module& module)
{
    return (GET_mut_lqSDNFDF(target, _scope, module).solved = node);
}

static s_SolvedNode createLetDef_fScRM1R5(const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_AK4GvqCq("letdef"_fu, (*(const s_Type*)fu::NIL), 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_SolvedNode solveLet_qDDArhnT(s_SolvedNode& out, const fu_STR& id, const s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, const s_Module& module, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Target& _current_fnort)
{
    if (out.kind != "let"_fu)
    {
        if (!(is_never_zJCUz9W3(out.type)))
            BUG_patsWWTe((((("solveLet: results in a `"_fu + out.kind) + ": "_fu) + id) + "`."_fu), _here, ctx);

        return s_SolvedNode(out);
    };
    bool shadows = !!(out.flags & F_SHADOW);
    const int isArg = (out.flags & F_ARG);
    fu_STR cleanID {};
    if (out.flags & F_COMPOUND_ID)
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
    if (type_isAddrOfFn_zJCUz9W3(out.type))
    {
        const bool shadows_1 = true;
        unpackAddrOfFn_yhh11bh4(out.type.vtype.canon, _scope, id_1, shadows_1);
    }
    else
    {
        if (OPTI_dedupe_vars && !isArg && !(out.flags & ((F_PUB | F_IMPLICIT) | F_MUT)))
        {
            const s_SolvedNode& init = out.items[LET_INIT];
            if ((init.kind == "call"_fu) && !init.items)
            {
                const s_Target& target = init.target;
                const s_Overload& other = GET_pWzRaF0U(target, _scope, module, ctx);
                if (other.kind == "var"_fu)
                {
                    if (isAssignable_yRJeU5dj(other.type, out.type))
                    {
                        Scope_set_CN2X3aNb(_scope, id_1, target, shadows);
                        if (out.flags & F_USING)
                            _scope.usings.push(s_Target(target));

                        out = createEmpty_extETXwG("empty"_fu, t_void, s_Target{}, _here);
                        return s_SolvedNode(out);
                    };
                };
            };
        };
        const s_Target& target = (out.target = Binding_uziOSlJc(id_1, s_Type(out.type), out.flags, shadows, _current_fn, _root_scope, _scope, _ss, module, _here, ctx, _current_fnort));
        solved_set_mBIs9g0H(target, out, _scope, module);
        Scope_set_CN2X3aNb(_scope, id_1, target, shadows);
        if (out.flags & F_IMPLICIT)
            Scope_set_dXgzwdCQ(_scope.implicits, id_1, target, shadows);

        if (out.flags & F_USING)
            _scope.usings.push(s_Target(target));

        return createLetDef_fScRM1R5(target, _here);
    };
    if (out.flags & F_ARG)
        return s_SolvedNode(out);

    return createEmpty_extETXwG("empty"_fu, t_void, s_Target{}, _here);
}

static s_SolvedNode solveLet_RtOR64Sn(const s_Node& node, const s_Type& specType, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    s_SolvedNode out = solveLetLike_dontTouchScope_ipjKU5Ae(node, specType, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    const fu_STR& id = out.value;
    return solveLet_qDDArhnT(out, id, _here, ctx, _scope, module, _current_fn, _root_scope, _ss, _current_fnort);
}

                                #ifndef DEFt_only_JobYyADH
                                #define DEFt_only_JobYyADH
inline const s_Region& only_JobYyADH(fu::view<s_Region> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Lifetime Lifetime_fromNative_ZLjxQBNJ(fu::view<s_Node> sig, fu::view<s_SolvedNode> args, const s_Type& actual, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
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
                    fail_1X59Y46x("Ambiguous __native lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                res = GET_pWzRaF0U(args[i].target, _scope, module, ctx).type;
                if (!(res.lifetime))
                    fail_1X59Y46x("Missing arg lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        if (!mutref || res.lifetime)
            break;

        mutref = false;
    };
    if (!(Region_asLocal_MvT8pzW6(only_JobYyADH(res.lifetime.uni0n))))
        fail_1X59Y46x("Non-single-local __native lifetime."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!isAssignable_yRJeU5dj(actual, res))
        return Lifetime_makeShared_4X1iL0ll(res.lifetime);

    return static_cast<s_Lifetime&&>(res.lifetime);
}

                                #ifndef DEF_SS_UPDATED
                                #define DEF_SS_UPDATED
inline constexpr unsigned SS_UPDATED = (0x1u << 4u);
                                #endif

static fu_STR CompoundArgID_outerSplice_FGBXSUsm(fu_STR& name, const s_TokenIdx& _here, const s_Context& ctx)
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

                                #ifndef DEFt_each_orrPvSPv
                                #define DEFt_each_orrPvSPv
inline void each_orrPvSPv(const s_BitSet& _, fu::view<s_SolvedNode> items, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, s_BitSet& hard_risk)
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
                    const s_SolvedNode& other = GET_pWzRaF0U(items[index].target, _scope, module, ctx).solved;
                    if (!TODO_FIX_isArray_zJCUz9W3(other.type))
                        add_PCSel0xp(hard_risk, index);

                };
            };
        };
    };
}
                                #endif

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

inline static s_SolvedNode TODO_FIX_pop_3yvYxVCR(fu_VEC<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

                                #ifndef DEF_F_WRITTEN_TO
                                #define DEF_F_WRITTEN_TO
extern const int F_WRITTEN_TO;
                                #endif

static const s_Type& Lifetime_climbType_CEsET367(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (!(o.kind == "var"_fu))
        BUG_patsWWTe(("Lifetime_climbType: not a `var`: "_fu + qWHAT_RTL9wrOX(o, module, _scope, ctx)), _here, ctx);

    const s_SolvedNode& node = o.solved;
    return is_ref_zJCUz9W3(node.type) && node.items ? node.items[LET_INIT].type : (*(const s_Type*)fu::NIL);
}

inline static void Lifetime_each_AXjiWFiU(s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;

        if (Region_isTemp_MvT8pzW6(r))
            continue;

        const s_Overload& o = GET_mut_lqSDNFDF(nested_jjhiAa3t(Region_toLocal_MvT8pzW6(r), _current_fnort, module), _scope, module);
        const s_Type& init = Lifetime_climbType_CEsET367(o, module, _scope, ctx, _here);
        if (!is_ref_zJCUz9W3(init))
            continue;

        if (!(init.lifetime.uni0n.size()))
            BUG_patsWWTe(fu_STR{}, _here, ctx);

        lifetime.uni0n.splice(i, 1);
        const int N0 = lifetime.uni0n.size();
        lifetime = Lifetime_union_87LkAOV4(lifetime, init.lifetime);
        const int N1 = lifetime.uni0n.size();
        i += (N1 - N0);
    };
}

static s_Lifetime Lifetime_unwind_4wfydpXJ(/*MOV*/ s_Lifetime&& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    Lifetime_each_AXjiWFiU(lifetime, locals_start, _current_fnort, module, _scope, ctx, _here);
    return static_cast<s_Lifetime&&>(lifetime);
}

                                #ifndef DEFt_has_qmMTl2lk
                                #define DEFt_has_qmMTl2lk
inline bool has_qmMTl2lk(fu::view<s_Region> a, const s_Region& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEFt_x7E_KclJlPSOsdf
                                #define DEFt_x7E_KclJlPSOsdf
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR addr_q9WYiLxa(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    const s_Token& t = _token_GF4X2sQy(token, ctx);
    if (token.modid != module.modid)
        return x7E((x7E((_fname_GF4X2sQy(token, ctx) + "@"_fu), fu::i64dec(t.line)) + ":"_fu), fu::i64dec(t.col));

    return x7E(x7E(fu::i64dec(t.line), ":"_fu), fu::i64dec(t.col));
}

static fu_STR addr_and_snippet_LengIYLC(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    return (addr_q9WYiLxa(token, ctx, module) + ":\n\n"_fu) + formatCodeSnippet_LnIzFNvj(token, s_TokenIdx{}, ctx);
}

static fu_STR qSTACK_1ljfoRg4(const s_Target& target, const s_Region& region, fu::view<s_Target> seen, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    const s_Target& _current_fnort = target;
    return qSTACK_6ipuBtz0(target, GET_pWzRaF0U(target, _scope, module, ctx).solved, region, seen, _scope, module, ctx, _current_fnort, _here);
}

static fu_STR qSTACK_T8yWuHOa(const s_Target& target, const int position, fu::view<s_Target> seen, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    return qSTACK_1ljfoRg4(target, Region_fromLocal_BaKYka79(EXT_hGjgwR4E(target, module, _scope, ctx).args[position].local), seen, _scope, module, ctx, _here);
}

static fu_STR qSTACK_6ipuBtz0(const s_Target& target, const s_SolvedNode& node, const s_Region& region, fu::view<s_Target> seen, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_Target& _current_fnort, const s_TokenIdx& _here)
{
    /*MOV*/ fu_STR src = "\n            "_fu;
    const bool rec = has_VOvG8QfK(seen, target);
    if (rec)
        src += "recursively "_fu;


    { {
        fu_VEC<s_SolvedNode> stack = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_3yvYxVCR(stack);
            s_SolvedNode node_2 { ((node_1.kind == "letdef"_fu) ? GET_pWzRaF0U(node_1.target, _scope, module, ctx).solved : node_1) };

            { {
                if (node_2.kind != "call"_fu)
                    goto BL_5;

                fu_VEC<s_Argument> host_args { EXT_hGjgwR4E(node_2.target, module, _scope, ctx).args };
                for (int i = 0; i < host_args.size(); i++)
                {
                    const s_Argument& host_arg = host_args[i];
                    if (!(host_arg.flags & F_WRITTEN_TO))
                        continue;

                    const s_SolvedNode& arg = node_2.items[i];
                    if (!has_qmMTl2lk(Lifetime_unwind_4wfydpXJ(s_Lifetime(arg.type.lifetime), 0, _current_fnort, module, _scope, ctx, _here).uni0n, region))
                        continue;

                    src += (("via "_fu + qWHAT_RTL9wrOX(GET_pWzRaF0U(node_2.target, _scope, module, ctx), module, _scope, ctx)) + " at "_fu);
                    src += addr_and_snippet_LengIYLC(node_2.token, ctx, module);
                    if (!rec && (seen.size() < 8))
                        src += qSTACK_T8yWuHOa(node_2.target, i, (seen + target), module, _scope, ctx, _here);

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

                                #ifndef DEF_F_REST_ARG
                                #define DEF_F_REST_ARG
inline constexpr int F_REST_ARG = (1 << 26);
                                #endif

                                #ifndef DEFt_find_2zHVP3FB
                                #define DEFt_find_2zHVP3FB
inline int find_2zHVP3FB(fu::view<s_Region> a, const s_Region& b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEFt_x3Cx3E_yxV5QT4l
                                #define DEFt_x3Cx3E_yxV5QT4l
inline int x3Cx3E_yxV5QT4l(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_rl89SHvN
                                #define DEFt_x3Cx3E_rl89SHvN
inline int x3Cx3E_rl89SHvN(const s_Region& a, const s_Region& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_yxV5QT4l(a.index, b.index);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEFt_add_wDpzx7i5
                                #define DEFt_add_wDpzx7i5
inline bool add_wDpzx7i5(fu_VEC<s_Region>& keys, const s_Region& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_rl89SHvN(keys[i], item);
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

static const s_Overload& Region_GET_mJLiCbCV(const s_Region& r, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return GET_pWzRaF0U(nested_jjhiAa3t(Region_toLocal_MvT8pzW6(r), _current_fnort, module), _scope, module, ctx);
}

static fu_STR qWHAT_6ZCvWaaR(const s_Lifetime& l, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    /*MOV*/ fu_STR str {};
    for (int i = 0; i < l.uni0n.size(); i++)
    {
        if (i)
            str += "|"_fu;

        const s_Region& r = l.uni0n[i];
        if (Region_isStatic_MvT8pzW6(r))
            str += "static"_fu;
        else if (Region_isTemp_MvT8pzW6(r))
            str += "temp"_fu;
        else
            str += qWHAT_RTL9wrOX(Region_GET_mJLiCbCV(r, _current_fnort, module, _scope, ctx), module, _scope, ctx);

    };
    return /*NRVO*/ str;
}

                                #ifndef DEFt_each_zdri6JD5
                                #define DEFt_each_zdri6JD5
inline void each_zdri6JD5(fu::view<s_Region> a, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_Type& retval, const s_TokenIdx& _here)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Region& r = a[i];
        if (!(Region_isArgPosition_MvT8pzW6(r) || Region_isStatic_MvT8pzW6(r)))
            BUG_patsWWTe(((("updateScope: Non-static/non-arg leaked:\n\t"_fu + qWHAT_RTL9wrOX(Region_GET_mJLiCbCV(r, _current_fnort, module, _scope, ctx), module, _scope, ctx)) + "\n\n\tIn retval lifetime:\n\t"_fu) + qWHAT_6ZCvWaaR(retval.lifetime, _current_fnort, module, _scope, ctx)), _here, ctx);

    };
}
                                #endif

                                #ifndef DEF_F_OOE_RTL
                                #define DEF_F_OOE_RTL
inline constexpr int F_OOE_RTL = (1 << 25);
                                #endif

static int& isRTL_set_daXRgA1Y(s_Overload& o, const bool rtl)
{
    return (rtl ? (o.flags |= F_OOE_RTL) : (o.flags &= ~F_OOE_RTL));
}

static void updateScope_Oep1NfPH(const s_CurrentFn& out, s_Type&& retval, const bool maybeLast, const s_Target& target, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const bool isNative, const s_TokenIdx& _here, const bool isUnspec, const int isPure, const s_Target& _current_fnort, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const int isPureCtx, const int isNovec, const bool isInline, const s_CurrentFn& _current_fn)
{
    if (GET_pWzRaF0U(target, _scope, module, ctx).status & SS_DIRTY)
    {
        GET_mut_lqSDNFDF(target, _scope, module).status |= SS_UPDATED;
        return;
    };
    fu::view<s_SolvedNode> items = out.out.items;
    const int N = (items.size() + FN_ARGS_BACK);
    int min = 0;
    int max = 0;
    const s_NativeHacks NativeHacks = (isNative ? NativeHacks_RHyKU5hm(GET_pWzRaF0U(target, _scope, module, ctx).name) : s_NativeHacks{});
    fu_VEC<s_Argument> args {};
    for (int i = 0; i < N; i++)
    {
        const s_SolvedNode& argNode = items[i];
        if (!(argNode.kind == "letdef"_fu))
        {
            if (argNode.target)
                BUG_patsWWTe(("Argnode is not letdef, but has a target: "_fu + qWHAT_RTL9wrOX(GET_pWzRaF0U(argNode.target, _scope, module, ctx), module, _scope, ctx)), _here, ctx);

        };
        s_SolvedNode argNode_1 { ((argNode.kind == "letdef"_fu) ? GET_pWzRaF0U(argNode.target, _scope, module, ctx).solved : argNode) };
        if (!(argNode_1.kind == "let"_fu))
            BUG_patsWWTe(fu_STR{}, _here, ctx);

        fu_STR name { argNode_1.value };
        fu_STR autocall = ((argNode_1.flags & F_COMPOUND_ID) ? CompoundArgID_outerSplice_FGBXSUsm(name, _here, ctx) : fu_STR{});
        const bool isImplicit = !!(argNode_1.flags & F_IMPLICIT);
        const s_Target argTarget { argNode_1.target };
        const bool written_via = (!isUnspec && is_mutref_zJCUz9W3(argNode_1.type, _here, ctx) && (isNative || has_noL0hivx(out.events.ever_written, argTarget.index)));
        s_BitSet soft_risk {};
        s_BitSet hard_risk {};
        if (written_via)
        {
            if (!isNative)
            {
                ArgsAtRisk_list_nt15hMGe(soft_risk, out.flow, i, out.flow.at_soft_risk);
                ArgsAtRisk_list_nt15hMGe(hard_risk, out.flow, i, out.flow.at_hard_risk);
                if (TODO_FIX_isArray_zJCUz9W3(argNode_1.type))
                {
                    s_BitSet soft { soft_risk };
                    and_not_assign_Vnn4kEu4(soft, hard_risk);
                    each_orrPvSPv(soft, items, _scope, module, ctx, hard_risk);
                };
            }
            else
            {
                add_range_PCSel0xp(soft_risk, N);
                rem_PCSel0xp(soft_risk, i);
                if (!NativeHacks.soft_risk)
                    hard_risk = soft_risk;

            };
        };
        if (isPure && written_via)
        {
            fu_STR _0 {};
            fu_STR _1 {};
            (_1 = (_0 = (((qWHAT_RTL9wrOX(GET_pWzRaF0U(target, _scope, module, ctx), module, _scope, ctx) + " is not pure, writes to argument "_fu) + qID_HIwg52Ja(human_7SdJ5Hgt(name, module, _scope, ctx))) + ":\n"_fu), (static_cast<fu_STR&&>(_0) + qSTACK_6ipuBtz0(target, out.out, Region_fromLocal_BaKYka79(argTarget.index), fu::view<s_Target>{}, _scope, module, ctx, _current_fnort, _here))), fail_1X59Y46x(static_cast<fu_STR&&>(_1), _here, ctx, _helpers, _helpers_data, _scope, module));
        };
        if (isPureCtx && written_via && isImplicit)
        {
            fu_STR _2 {};
            fu_STR _3 {};
            (_3 = (_2 = (((qWHAT_RTL9wrOX(GET_pWzRaF0U(target, _scope, module, ctx), module, _scope, ctx) + " is not purectx, writes to implicit argument "_fu) + qID_HIwg52Ja(human_7SdJ5Hgt(name, module, _scope, ctx))) + ":\n"_fu), (static_cast<fu_STR&&>(_2) + qSTACK_6ipuBtz0(target, out.out, Region_fromLocal_BaKYka79(argTarget.index), fu::view<s_Target>{}, _scope, module, ctx, _current_fnort, _here))), fail_1X59Y46x(static_cast<fu_STR&&>(_3), _here, ctx, _helpers, _helpers_data, _scope, module));
        };
        if (maybeLast && isNovec && !is_trivial_JKdxRWxB(argNode_1.type, module, ctx) && (is_rx_copy_zJCUz9W3(argNode_1.type) || is_rx_resize_zJCUz9W3(argNode_1.type)))
            fail_1X59Y46x(((((qWHAT_RTL9wrOX(GET_pWzRaF0U(target, _scope, module, ctx), module, _scope, ctx) + " is not novec, argument "_fu) + qID_HIwg52Ja(human_7SdJ5Hgt(name, module, _scope, ctx))) + " is "_fu) + humanizeType_nkNrw01H(argNode_1.type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Argument arg = s_Argument { fu_STR(name), fu_STR(autocall), s_Type(argNode_1.type), s_SolvedNode((!isImplicit ? argNode_1.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL))), (argNode_1.flags | (written_via ? F_WRITTEN_TO : (*(const int*)fu::NIL))), int(argTarget.index), s_BitSet(soft_risk), s_BitSet(hard_risk) };
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

        if (is_ref_zJCUz9W3(retval) && is_ref_zJCUz9W3(argNode_1.type))
        {
            const s_Region region = Region_fromLocal_BaKYka79(argTarget.index);
            const int idx = find_2zHVP3FB(retval.lifetime.uni0n, region);
            if ((idx >= 0))
            {
                retval.lifetime.uni0n.splice(idx, 1);
                add_wDpzx7i5(retval.lifetime.uni0n, Region_fromArgPosition_BaKYka79(i));
            };
        };
    };
    s_Overload overload { GET_pWzRaF0U(target, _scope, module, ctx) };
    s_Extended& ext = EXT_mut_neoUwv0o(target, module, _scope);
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
    s_Overload& overload_1 = GET_mut_lqSDNFDF(target, _scope, module);
    overload_1.type = retval;
    if (isInline)
        return;

    if (!(retval))
        BUG_patsWWTe("updateScope: no return type."_fu, _here, ctx);

    if (is_ref_zJCUz9W3(retval))
        Lifetime_test_HRmImHZi(retval.lifetime, bool{}, _current_fn, _scope, module, ctx, _here, _current_fnort);

    each_zdri6JD5(retval.lifetime.uni0n, _current_fnort, module, _scope, ctx, retval, _here);
    overload_1.flags = out.out.flags;

    {
        const bool rtl = ((args.size() == 2) && (overload_1.flags & F_OPERATOR) && hasAssignment_YqscxHlw(overload_1.name));
        isRTL_set_daXRgA1Y(overload_1, rtl);
    };
    if (change)
        overload_1.status |= SS_UPDATED;

    solved_set_mBIs9g0H(target, (!isUnspec ? out : (*(const s_CurrentFn*)fu::NIL)).out, _scope, module);
}

inline static fu_STR mangleArguments_KLKU0IZr(fu::view<s_Argument> args, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_FJyl5kxv(args[i].type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_F_EXTERN
                                #define DEF_F_EXTERN
extern const int F_EXTERN;
                                #endif

static fu_STR HACK_nativeNameParts_EfxQrhZt(const bool isNative, const s_Node& n_body)
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

static int GET_next_local_index_k5ok1B4G(const s_Target& _current_fnort, const s_CurrentFn& _current_fn, const s_Scope& _scope)
{
    return _current_fn.out.target.index ? (_scope.extended[_current_fnort.index].locals.size() + 1) : int{};
}

                                #ifndef DEF_F_REF
                                #define DEF_F_REF
inline constexpr int F_REF = (1 << 22);
                                #endif

static bool Lifetime_allowsMutrefReturn_meKDx7nP(const s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_TokenIdx& _here, const s_Context& ctx)
{

    {
        for (int i = lifetime.uni0n.size(); i-- > 0; )
        {
            const s_Region& r = lifetime.uni0n[i];
            if (r.index < locals_start)
                break;

            if (Region_isTemp_MvT8pzW6(r))
                continue;

            const s_Overload& o = GET_mut_lqSDNFDF(nested_jjhiAa3t(Region_toLocal_MvT8pzW6(r), _current_fnort, module), _scope, module);
            if (!(is_mutref_zJCUz9W3(o.type, _here, ctx)))
                BUG_patsWWTe(("Checking for mutref-return-ok found non-mutref: "_fu + qWHAT_RTL9wrOX(o, module, _scope, ctx)), _here, ctx);

            if ((o.kind == "var"_fu) && !(o.flags & F_REF))
                return false;

            const s_Type& init = Lifetime_climbType_CEsET367(o, module, _scope, ctx, _here);
            if (!Lifetime_allowsMutrefReturn_meKDx7nP(s_Lifetime(init.lifetime), locals_start, _current_fnort, module, _scope, _here, ctx))
                return false;

        };
    };
    return true;
}

static void checkAssignable_b4W6xpY2(const s_Type& host, const s_Type& guest, fu::view<char> err, const fu_STR& id, const fu_STR& sep, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope)
{
    if (!(isAssignable_yRJeU5dj((host ? host : BUG_patsWWTe("Bad host type."_fu, _here, ctx)), (guest ? guest : BUG_patsWWTe("Bad guest type."_fu, _here, ctx)))))
        fail_1X59Y46x((((((err + (id ? ((" `"_fu + id) + "`"_fu) : fu_STR{})) + ": "_fu) + humanizeType_nkNrw01H(host, module, ctx)) + (sep ? fu_STR(sep) : " <- "_fu)) + humanizeType_nkNrw01H(guest, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

}

static s_Type superType_FwjTBhwl(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_Type _0 {};
    return (_0 = type_trySuper_yRJeU5dj(a, b)) ? static_cast<s_Type&&>(_0) : fail_1X59Y46x((((((((id ? (("`"_fu + human_7SdJ5Hgt(id, module, _scope, ctx)) + "`: "_fu) : fu_STR{}) + reason) + "No common supertype: `"_fu) + humanizeType_nkNrw01H(a, module, ctx)) + "` | `"_fu) + humanizeType_nkNrw01H(b, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void reportReturnType_dvQfvbXf(const s_Helpers& h, const s_Type& type, fu::view_mut<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu::view<s_Helpers> _helpers, const s_Scope& _scope)
{
    if (((void)void(), _helpers_data[h.index]).ret_expect)
        checkAssignable_b4W6xpY2(((void)void(), _helpers_data[h.index]).ret_expect, type, "Actual return type does not match annotation"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, module, _helpers, _helpers_data, _scope);

    ((void)void(), _helpers_data.mutref(h.index)).ret_actual = (((void)void(), _helpers_data[h.index]).ret_actual ? superType_FwjTBhwl("Subsequent return: "_fu, ((void)void(), _helpers_data[h.index]).ret_actual, type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data) : s_Type(type));
    if (!(((void)void(), _helpers_data[h.index]).ret_actual))
        BUG_patsWWTe("Can't be null past this point."_fu, _here, ctx);

}

static s_SolvedNode createJump_NoogGtYZ(const s_SolvedNode& expr, const s_Helpers& h, const s_TokenIdx& _here, const s_Context& ctx, fu::view_mut<s_HelpersData> _helpers_data, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    /*MOV*/ s_SolvedNode jump = SolvedNode_AK4GvqCq("jump"_fu, t_never, 0, (*(const fu_STR*)fu::NIL), (expr ? fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } } : fu_VEC<s_SolvedNode>{}), s_Target{}, h, _here);
    s_Type type = ((is_mutref_zJCUz9W3(expr.type, _here, ctx) && !Lifetime_allowsMutrefReturn_meKDx7nP(expr.type.lifetime, ((void)void(), _helpers_data[h.index]).locals_start, _current_fnort, module, _scope, _here, ctx)) ? clear_mutref_zJCUz9W3(s_Type(expr.type)) : s_Type(expr.type));
    s_Type type_1 = (is_ref2temp_zJCUz9W3(type, _here, ctx) ? clear_refs_zJCUz9W3(s_Type(type)) : s_Type(type));
    reportReturnType_dvQfvbXf(h, type_1, _helpers_data, _here, ctx, module, _helpers, _scope);
    return /*NRVO*/ jump;
}

static fu_STR currentFn_mustBecomeInline_fPOO6tIf(const s_CurrentFn& _current_fn)
{
    return (_current_fn.effects.far_jumps.size() > 0) ? "Contains non-local control flow."_fu : fu_STR{};
}

static void test_nodes_QY8AAftO(fu::view<s_SolvedNode> nodes, fu::view<char> debug, s_TokenIdx& _here, const s_Module& module, const s_Context& ctx, const s_Scope& _scope)
{
    for (int i = 0; i < nodes.size(); i++)
        test_node_zhOHu6Rv(nodes[i], (x7E((debug + "["_fu), fu::i64dec(i)) + "]"_fu), _here, module, ctx, _scope);

}

inline static fu_STR mangleArguments_uyz3rSlJ(fu::view<s_SolvedNode> args, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_FJyl5kxv(args[i].type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEF_F_MUSTNAME
                                #define DEF_F_MUSTNAME
inline constexpr int F_MUSTNAME = (1 << 19);
                                #endif

static fu_STR explainConversion_oOVZszdh(fu::view<s_Target> path, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR res {};
    for (int i = 0; i < path.size(); i++)
    {
        if (i)
            res += " -> "_fu;

        const s_Overload& o = GET_pWzRaF0U(path[i], _scope, module, ctx);
        res += qWHAT_RTL9wrOX(o, module, _scope, ctx);
        if (i < (path.size() - 1))
            res += (": "_fu + humanizeType_nkNrw01H(o.type, module, ctx));

    };
    return /*NRVO*/ res;
}

static fu_STR explainWhichFn_VeQF0Ixi(const s_Target& overload, fu::view<fu_VEC<s_Target>> conversions, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR result = qWHAT_RTL9wrOX(GET_pWzRaF0U(overload, _scope, module, ctx), module, _scope, ctx);
    if (EXT_hGjgwR4E(overload, module, _scope, ctx).args)
    {
        result += "("_fu;
        for (int i = 0; i < EXT_hGjgwR4E(overload, module, _scope, ctx).args.size(); i++)
        {
            const s_Argument& arg = EXT_hGjgwR4E(overload, module, _scope, ctx).args[i];
            if (i)
                result += ","_fu;

            result += (((("\n\t    "_fu + qID_HIwg52Ja(human_7SdJ5Hgt(arg.name, module, _scope, ctx))) + ((arg.flags & F_MUSTNAME) ? "!"_fu : fu_STR{})) + (arg.dEfault ? "?: "_fu : ": "_fu)) + (arg.type ? humanizeType_nkNrw01H(arg.type, module, ctx) : "$"_fu));
            const fu_VEC<s_Target>& c = ((conversions.size() > i) ? conversions[i] : (*(const fu_VEC<s_Target>*)fu::NIL));
            if (c)
                result += ("\n\t        via "_fu + explainConversion_oOVZszdh(c, _scope, module, ctx));

        };
        result += ")"_fu;
    };
    return /*NRVO*/ result;
}

[[noreturn]] static fu::never err_FCvh3ih1(fu::view<char> reason, fu::view<char> debug, const s_SolvedNode& callsite, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    BUG_patsWWTe(((((debug + " "_fu) + qWHAT_RTL9wrOX(GET_pWzRaF0U(callsite.target, _scope, module, ctx), module, _scope, ctx)) + ": "_fu) + reason), _here, ctx);
}

static void test_CallSignature_Q08TV1vn(const s_SolvedNode& callsite, fu::view<char> debug, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    fu::view<s_Argument> host_args = EXT_hGjgwR4E(callsite.target, module, _scope, ctx).args;
    fu::view<s_SolvedNode> args = callsite.items;
    if ((args.size() == 0) && (GET_pWzRaF0U(callsite.target, _scope, module, ctx).kind == "type"_fu))
        return;

    if (!(host_args.size() == args.size()))
        err_FCvh3ih1((((((x7E((x7E("host_args.len ("_fu, fu::i64dec(host_args.size())) + ") != args.len ("_fu), fu::i64dec(args.size())) + "):"_fu) + "\n\t\t"_fu) + mangleArguments_uyz3rSlJ(args, _here, ctx)) + "\n\t\t"_fu) + explainWhichFn_VeQF0Ixi(callsite.target, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx)), debug, callsite, _scope, module, ctx, _here);

    for (int i = 0; i < host_args.size(); i++)
    {
        const s_Argument& host_arg = host_args[i];
        const s_SolvedNode& arg = args[i];
        if (!(isAssignableAsArgument_yRJeU5dj(host_arg.type, arg.type)))
            err_FCvh3ih1(((((((x7E("Arg #"_fu, fu::i64dec(i)) + ", "_fu) + qID_HIwg52Ja(human_7SdJ5Hgt(host_arg.name, module, _scope, ctx))) + " not assignable to host_arg: "_fu) + humanizeType_nkNrw01H(host_arg.type, module, ctx)) + " <- "_fu) + humanizeType_nkNrw01H(arg.type, module, ctx)), debug, callsite, _scope, module, ctx, _here);

    };
}

static void test_Statements_GCaDW6Qk(const s_SolvedNode& block, fu::view<char> debug, const s_TokenIdx& _here, const s_Context& ctx)
{
    fu::view<s_SolvedNode> items = block.items;
    for (int i = 0; i < items.size(); i++)
    {
        const s_SolvedNode& n = items[i];
        if (!(n.kind))
            BUG_patsWWTe((x7E((debug + ": No .kind on item["_fu), fu::i64dec(i)) + "]."_fu), _here, ctx);

    };
}

static void test_node_zhOHu6Rv(const s_SolvedNode& node, fu_STR&& debug, s_TokenIdx& _here, const s_Module& module, const s_Context& ctx, const s_Scope& _scope)
{
    debug += ("/"_fu + node.kind);
    if (node.value)
        debug += (("["_fu + node.value) + "]"_fu);

    test_nodes_QY8AAftO(node.items, debug, _here, module, ctx, _scope);
    _here = node.token;
    if (!(!is_ref_zJCUz9W3(node.type) == !node.type.lifetime))
        BUG_patsWWTe(((debug + ": !!ref != !!lt: "_fu) + humanizeType_nkNrw01H(node.type, module, ctx)), _here, ctx);

    fu::view<char> k = node.kind;
    if (k == "call"_fu)
        return test_CallSignature_Q08TV1vn(node, debug, module, _scope, ctx, _here);

    if (k == "let"_fu)
    {
        if (!(node.items.size() == 2))
            BUG_patsWWTe(x7E("let.items.len: "_fu, fu::i64dec(node.items.size())), _here, ctx);

        if (node.items[0])
            BUG_patsWWTe(("let.items[0] not empty: "_fu + node.items[0].kind), _here, ctx);

        return;
    };
    if ((k == "block"_fu) || (k == "and"_fu) || (k == "or"_fu) || (k == "if"_fu))
    {
        if ((k == "and"_fu) || (k == "or"_fu))
        {
            if (!(node.items.size() > 1))
                BUG_patsWWTe(x7E((debug + ".len: "_fu), fu::i64dec(node.items.size())), _here, ctx);

        };
        if (k == "if"_fu)
        {
            if (!(node.items.size() == 3))
                BUG_patsWWTe(x7E((debug + ".len: "_fu), fu::i64dec(node.items.size())), _here, ctx);

        };
        return test_Statements_GCaDW6Qk(node, debug, _here, ctx);
    };
}

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
extern const int RELAX_before_bck;
                                #endif

                                #ifndef DEFt_unless_oob_FlH16U1x
                                #define DEFt_unless_oob_FlH16U1x
inline const s_Type& unless_oob_FlH16U1x(fu::view<s_Type> a, const int i)
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

                                #ifndef DEFt_grow_if_oob_SPXnFDvW
                                #define DEFt_grow_if_oob_SPXnFDvW
inline s_Warning& grow_if_oob_SPXnFDvW(fu_VEC<s_Warning>& a, const int i)
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

static void relaxBlockVar_i35rJBcQ(const s_Target& t, const int relax_mask, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    const s_Overload& var = GET_pWzRaF0U(t, _scope, module, ctx);
    s_Type usage { unless_oob_FlH16U1x(_current_fn.var_usage, t.index) };
    if (!usage && (relax_mask == RELAX_all))
    {
        if (!(var.flags & F_LAX))
        {
            const s_TokenIdx& token = GET_pWzRaF0U(t, _scope, module, ctx).solved.token;

            {
                s_Warning& a = grow_if_oob_SPXnFDvW(_warnings, _current_fn.out.target.index);
                if (!(a))
                    a = s_Warning { s_TokenIdx(token), (((("Unused variable: "_fu + qBAD_HIwg52Ja(var.name)) + ": make it "_fu) + qKW_HIwg52Ja("lax"_fu)) + " if this is intentional."_fu) };

            };
        };
        GET_mut_lqSDNFDF(t, _scope, module).flags |= F_UNUSED;
    };
    s_Overload& o = GET_mut_lqSDNFDF(t, _scope, module);
    try_relax_2CttqzuO(o.type, usage, int(relax_mask));

    {
        s_SolvedNode& node = o.solved;
        if (!(node.type))
            BUG_patsWWTe("relaxBlockVar: !var.solved.type, can`t propagateType"_fu, _here, ctx);

        try_relax_2CttqzuO(node.type, usage, int(relax_mask));
        if (node.items && node.items[LET_INIT])
        {
            s_SolvedNode init {};
            std::swap(init, node.items.mutref(LET_INIT));
            propagateType_NmbfUOia(init, s_Type(node.type), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
            s_Overload& o_1 = GET_mut_lqSDNFDF(t, _scope, module);
            s_SolvedNode& node_1 = o_1.solved;
            if (is_ref_zJCUz9W3(node_1.type) && !(node_1.flags & F_ARG))
                node_1.type.lifetime = init.type.lifetime;

            std::swap(init, node_1.items.mutref(LET_INIT));
        };
    };
    s_Overload& o_1 = GET_mut_lqSDNFDF(t, _scope, module);
    if (o_1.flags & F_MUT)
    {
        if (is_mutref_zJCUz9W3(usage, _here, ctx))
        {
            s_SolvedNode& node = GET_mut_lqSDNFDF(t, _scope, module).solved;
            s_Type type = clear_refs_zJCUz9W3(s_Type(node.type));
            node.type = type;
        }
        else
            o_1.flags &= ~F_MUT;

    };
    s_Overload& o_2 = GET_mut_lqSDNFDF(t, _scope, module);
    if (o_2.flags & F_RELAXABLE_REF)
    {
        const int strip = (F_RELAXABLE_REF | (!is_mutref_zJCUz9W3(usage, _here, ctx) ? F_REF : (*(const int*)fu::NIL)));
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

                                #ifndef DEFt_only_6kzN7tIx
                                #define DEFt_only_6kzN7tIx
inline s_SolvedNode& only_6kzN7tIx(fu::view_mut<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s.mutref(0) : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static bool isNested_EIDQTDAx(const s_Target& target, const s_CurrentFn& _current_fn)
{
    return target.modid == -_current_fn.out.target.index;
}

                                #ifndef DEFt_grow_if_oob_hkxU7cY4
                                #define DEFt_grow_if_oob_hkxU7cY4
inline s_Type& grow_if_oob_hkxU7cY4(fu_VEC<s_Type>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu_STR mangleArguments_BLTr3gug(fu::view<s_SolvedNode> args, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
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
            mangle += serializeType_FJyl5kxv(GET_pWzRaF0U(last_fnMFgrK3(conversions[i]), _scope, module, ctx).type, "mangle.conv"_fu, _here, ctx);
        else if ((callsiteIndex >= 0) && (callsiteIndex <= args.size()))
            mangle += serializeType_FJyl5kxv(args[callsiteIndex].type, "mangle.no-conv"_fu, _here, ctx);

    };
    if (REST_START < REST_END)
    {
        if (REST_START)
            mangle += ","_fu;

        mangle += serializeType_FJyl5kxv(REST_TYPE, "mangle[Nodes].rest"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

                                #ifndef DEFt_get_z5PdIjnx
                                #define DEFt_get_z5PdIjnx
inline const s_Target& get_z5PdIjnx(fu::view<fu_STR> keys, fu::view<char> item, fu::view<s_Target> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_KclJlPSO(keys[i], item);
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

                                #ifndef DEFt_get_Mfb0r1DR
                                #define DEFt_get_Mfb0r1DR
inline const s_Target& get_Mfb0r1DR(const s_Map_FNvBVj2X& _, fu::view<char> key)
{
    return get_z5PdIjnx(_.keys, key, _.vals);
}
                                #endif

static s_Target trySpecialize_VH570CZ3(const s_Target& overloadIdx, fu::view<s_SolvedNode> args, fu_STR& args_mangled, const int REST_START, const s_Type& REST_TYPE, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Map_FNvBVj2X& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{

    {
        if (!(args_mangled))
            args_mangled = mangleArguments_BLTr3gug(args, reorder, use_reorder, conversions, REST_START, REST_TYPE, _scope, module, ctx, _here);

    };
    fu_STR mangle = ((x7E(x7E(fu::i64dec(overloadIdx.modid), "#"_fu), fu::i64dec(overloadIdx.index)) + " "_fu) + args_mangled);
    s_Target _0 {};
    return (_0 = s_Target(get_Mfb0r1DR(_specs, mangle))) ? _0 : (_0 = doTrySpecialize_U9Z0yXFm(s_Target{}, overloadIdx, args, fu_STR(mangle), reorder, use_reorder, conversions, REST_START, REST_TYPE, _scope, module, ctx, _here, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string)) ? _0 : BUG_patsWWTe("doTrySpecialize returns empty target."_fu, _here, ctx);
}

static s_Lifetime Lifetime_replaceArgsAtCallsite_6QxbuJjh(const s_Target& target, fu::view<s_SolvedNode> argNodes, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    s_Lifetime keep {};
    s_Lifetime replace {};
    const s_Lifetime& returned = GET_pWzRaF0U(target, _scope, module, ctx).type.lifetime;
    for (int i = 0; i < returned.uni0n.size(); i++)
    {
        const s_Region& region = returned.uni0n[i];
        if (Region_isStatic_MvT8pzW6(region))
        {
            keep.uni0n += s_Region(region);
            continue;
        };
        const s_SolvedNode& argNode = argNodes[Region_toArgPosition_MvT8pzW6(region)];
        s_Lifetime argLt = (is_ref_zJCUz9W3(argNode.type) ? s_Lifetime(argNode.type.lifetime) : Lifetime_temporary_8nlJDPX0());
        replace = Lifetime_union_87LkAOV4(replace, (argLt ? argLt : BUG_patsWWTe("refarg without lifetime"_fu, _here, ctx)));
    };
    return (replace ? (keep ? Lifetime_union_87LkAOV4(keep, replace) : s_Lifetime(replace)) : s_Lifetime(returned));
}

static bool isRTL_KmKZ4rju(const s_Overload& o)
{
    return !!(o.flags & F_OOE_RTL);
}

inline static void _current_fn_eachArg_BACK_p3xMYQYk(s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, const int relax_mask, fu_VEC<s_Warning>& _warnings, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> sig { _current_fn.out.items };
    for (int i = (sig.size() + FN_ARGS_BACK); i-- > 0; )
    {
        const s_Target t { sig[i].target };
        if (t && (GET_pWzRaF0U(t, _scope, module, ctx).flags & F_ARG))
        {
            relaxBlockVar_i35rJBcQ(t, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
        };
    };
}

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static s_SolvedNode& post_N9DJNlQH(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST);
}

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 3;
                                #endif

static s_SolvedNode& post_cond_QE8cPbqV(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST_COND);
}

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 2;
                                #endif

static s_SolvedNode& body_mZI5GcT1(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_BODY);
}

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline constexpr int LOOP_COND = 1;
                                #endif

static s_SolvedNode& pre_cond_BnLFTv8m(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_COND);
}

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

static s_SolvedNode& init_GDzz3sk3(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_INIT);
}

static s_SolvedNode& recover_41bI4M5n(s_SolvedNode& node)
{
    return node.items.mutref(2);
}

static s_SolvedNode& error_WtG9L6qp(s_SolvedNode& node)
{
    return node.items.mutref(1);
}

static s_SolvedNode& attempt_fLrj366G(s_SolvedNode& node)
{
    return node.items.mutref(0);
}

static void propagateType_NmbfUOia(s_SolvedNode& node, const s_Type& slot, const int relax_mask, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    fu_STR k { node.kind };
    if ((k == "let"_fu) || (k == "letdef"_fu))
    {
        if (!node.target)
            return;

        return relaxBlockVar_i35rJBcQ(node.target, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    };
    const s_TokenIdx here0 { _here };
    _here = node.token;
    fu_DEFER(_here = here0);
    try_relax_2CttqzuO(node.type, slot, int(relax_mask));
    s_Type slot_1 { node.type };
    const int LAST = (node.items.size() - 1);
    if (k == "and"_fu)
    {
        s_Type rest { ((is_mutref_zJCUz9W3(slot_1, _here, ctx) && CANNOT_definit_mutrefs) ? slot_1 : t_bool) };
        for (int i = node.items.size(); i-- > 0; )
            propagateType_NmbfUOia(node.items.mutref(i), ((i == LAST) ? slot_1 : rest), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    }
    else if (k == "or"_fu)
    {
        for (int i = node.items.size(); i-- > 0; )
            propagateType_NmbfUOia(node.items.mutref(i), slot_1, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    }
    else if (k == "if"_fu)
    {
        for (int i = node.items.size(); i-- > 0; )
            propagateType_NmbfUOia(node.items.mutref(i), ((i != 0) ? slot_1 : t_bool), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    }
    else if (k == "call"_fu)
    {
        const s_Target t { node.target };
        if (GET_pWzRaF0U(t, _scope, module, ctx).kind == "field"_fu)
            return propagateType_NmbfUOia(only_6kzN7tIx(node.items), slot_1, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

        if (GET_pWzRaF0U(t, _scope, module, ctx).kind == "var"_fu)
        {
            if (isNested_EIDQTDAx(t, _current_fn))
            {
                s_Type& usage = grow_if_oob_hkxU7cY4(_current_fn.var_usage, t.index);
                if (!usage)
                    usage = slot_1;
                else
                {
                    s_Type _0 {};
                    usage = ((_0 = type_tryIntersect_yRJeU5dj(usage, slot_1)) ? static_cast<s_Type&&>(_0) : fail_1X59Y46x((((((qWHAT_RTL9wrOX(GET_pWzRaF0U(t, _scope, module, ctx), module, _scope, ctx) + ": Usage intersection failure: `"_fu) + humanizeType_nkNrw01H(usage, module, ctx)) + "` & `"_fu) + humanizeType_nkNrw01H(slot_1, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module));
                };
            };
            return;
        };
        if (EXT_hGjgwR4E(t, module, _scope, ctx).spec_of && is_ref_zJCUz9W3(GET_pWzRaF0U(t, _scope, module, ctx).type))
        {
            fu_VEC<s_SolvedNode> relaxed {};
            for (int i = 0; i < node.items.size(); i++)
            {
                const s_SolvedNode& orig = node.items[i];
                if (has_qmMTl2lk(GET_pWzRaF0U(t, _scope, module, ctx).type.lifetime.uni0n, Region_fromArgPosition_BaKYka79(i)))
                {
                    s_Type type { orig.type };
                    if (try_relax_2CttqzuO(type, slot_1, int(relax_mask)))
                    {
                        if (!relaxed)
                            relaxed = fu::slice(node.items, 0, i);

                        relaxed += SolvedNode_AK4GvqCq("__relaxed"_fu, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
                        continue;
                    };
                };
                if (relaxed)
                    relaxed += s_SolvedNode(orig);

            };
            if (relaxed)
            {
                fu_STR args_mangled {};
                const s_Target spec = trySpecialize_VH570CZ3(s_Target(EXT_hGjgwR4E(t, module, _scope, ctx).spec_of), relaxed, args_mangled, relaxed.size(), (*(const s_Type*)fu::NIL), fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx, _here, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
                if (!is_SPECFAIL_fPaHmQWG(spec) && !(spec == t))
                {
                    checkAssignable_b4W6xpY2(node.type, GET_pWzRaF0U(spec, _scope, module, ctx).type, "Relaxed specialization does not return a subtype"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, module, _helpers, _helpers_data, _scope);
                    if (is_ref_zJCUz9W3(node.type))
                        node.type.lifetime = Lifetime_test_HRmImHZi(Lifetime_replaceArgsAtCallsite_6QxbuJjh(spec, relaxed, _scope, module, ctx, _here), true, _current_fn, _scope, module, ctx, _here, _current_fnort);

                    node.target = spec;
                    makeNote_1zG3Fhlo(N_RelaxRespec, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                };
            };
        };
        if (node.items)
        {
            fu_VEC<s_Argument> host_args { EXT_hGjgwR4E(node.target, module, _scope, ctx).args };
            const bool rtl = isRTL_KmKZ4rju(GET_pWzRaF0U(node.target, _scope, module, ctx));
            const int N = node.items.size();
            const int start = (rtl ? 0 : (N - 1));
            const int end = (rtl ? int(N) : (0 - 1));
            const int incr = (rtl ? +1 : -1);
            for (int i = start; i != end; i += incr)
                propagateType_NmbfUOia(node.items.mutref(i), s_Type(host_args[i].type), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

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
        propagateType_NmbfUOia(only_6kzN7tIx(node.items), ((k == "copy"_fu) ? make_copyable_zJCUz9W3(s_Type(slot_1)) : s_Type(slot_1)), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
        if (!(is_ref_zJCUz9W3(only_gF1gIgkM(node.items).type)))
            fail_1X59Y46x("TODO: Relaxed a copy/move to a value, no point in keeping the outer node."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    }
    else if (k == "arrlit"_fu)
    {
        s_Type itemSlot = clear_sliceable_zJCUz9W3(slot_1, _here, ctx);
        for (int i = 0; i < node.items.size(); i++)
            propagateType_NmbfUOia(node.items.mutref(i), itemSlot, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    }
    else if (k == "argid"_fu)
        propagateType_NmbfUOia(only_6kzN7tIx(node.items), slot_1, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    else if (k == "jump"_fu)
    {
        const s_Helpers h { node.helpers };
        if (!(((void)void(), _helpers_data[h.index]).ret_actual))
            fail_1X59Y46x("propagateType(jump): h.ret_actual not available."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        propagateType_NmbfUOia(only_6kzN7tIx(node.items), s_Type(((void)void(), _helpers_data[h.index]).ret_actual), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    }
    else if (k == "block"_fu)
    {
        const s_Helpers h { node.helpers };
        try_relax_2CttqzuO(((void)void(), _helpers_data.mutref(h.index)).ret_actual, slot_1, int(relax_mask));
        bool isLast = true;
        for (int i = node.items.size(); i-- > 0; )
        {
            s_SolvedNode& node_1 = node.items.mutref(i);
            s_SolvedNode& node_2 = ((node_1.kind == "defer"_fu) ? only_6kzN7tIx(node_1.items) : node_1);
            propagateType_NmbfUOia(node_2, (isLast ? ((void)(isLast = false), slot_1) : t_void), relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
        };
        if (((void)void(), _helpers_data[h.index]).target == _current_fn.out.target)
            _current_fn_eachArg_BACK_p3xMYQYk(_current_fn, _scope, module, ctx, relax_mask, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    }
    else if (k == "loop"_fu)
    {
        if (post_N9DJNlQH(node))
            propagateType_NmbfUOia(post_N9DJNlQH(node), t_void, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

        if (post_cond_QE8cPbqV(node))
            propagateType_NmbfUOia(post_cond_QE8cPbqV(node), t_bool, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

        if (body_mZI5GcT1(node))
            propagateType_NmbfUOia(body_mZI5GcT1(node), t_void, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

        if (pre_cond_BnLFTv8m(node))
            propagateType_NmbfUOia(pre_cond_BnLFTv8m(node), t_bool, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

        if (init_GDzz3sk3(node))
            propagateType_NmbfUOia(init_GDzz3sk3(node), t_void, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    }
    else if (k == "try"_fu)
    {
        propagateType_NmbfUOia(recover_41bI4M5n(node), t_void, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
        propagateType_NmbfUOia(error_WtG9L6qp(node), t_string, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
        propagateType_NmbfUOia(attempt_fLrj366G(node), t_void, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    }
    else if (k == "root"_fu)
    {
    }
    else if (k == "compiler"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            s_SolvedNode* _1;
            (_1 = &(node.items.mutref(i)), propagateType_NmbfUOia(*_1, node.items[i].type, relax_mask, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string));
        };
    }
    else
        fail_1X59Y46x((("TODO: propagateType("_fu + k) + ")."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

}

static s_Flow& flow_m42eTjEH(s_CurrentFn& _current_fn)
{
    return _current_fn.flow;
}

inline static void _current_fn_eachArg_FWD_zS6QWA9f(s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    fu_VEC<s_SolvedNode> sig { _current_fn.out.items };
    for (int i = 0; i < (sig.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = sig[i].target;
        if (t && (GET_pWzRaF0U(t, _scope, module, ctx).flags & F_ARG))
        {
            Reference_trackArgument_f7E00fpg(flow_m42eTjEH(_current_fn), int(t.index), i, _here, ctx);
        };
    };
}

static fu_VEC<s_SolvedNode>& args_6GI2g4ps(s_SolvedNode& callsite)
{
    return callsite.items;
}

static s_Target& target_59jgZ58c(s_SolvedNode& callsite)
{
    return callsite.target;
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

                                #ifndef DEFt_if_first_tZvRQ2Ac
                                #define DEFt_if_first_tZvRQ2Ac
inline const s_Region& if_first_tZvRQ2Ac(fu::view<s_Region> s)
{
    return s.size() ? s[0] : (*(const s_Region*)fu::NIL);
}
                                #endif

static s_Lifetime Lifetime_unwind_noStatic_vb6bgBY0(s_Lifetime&& lifetime, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (Region_isStatic_MvT8pzW6(if_first_tZvRQ2Ac(lifetime.uni0n)))
        lifetime.uni0n.shift();

    return Lifetime_unwind_4wfydpXJ(s_Lifetime(lifetime), 0, _current_fnort, module, _scope, ctx, _here);
}

static bool acceptsTempCopies_oprs4Qiy(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (o.kind == "var"_fu) && !(o.flags & (F_IMPLICIT | F_REF)) && !is_mutref_zJCUz9W3(o.type, _here, ctx);
}

static bool acceptsSoftRisk_Jp1bPAe2(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (o.flags & F_ARG) && !acceptsTempCopies_oprs4Qiy(o, _here, ctx);
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

                                #ifndef DEFt_add_itJnJlI8
                                #define DEFt_add_itJnJlI8
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

                                #ifndef DEFt_unless_oob_0EYwFJPW
                                #define DEFt_unless_oob_0EYwFJPW
inline const fu_VEC<int>& unless_oob_0EYwFJPW(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

static bool RESOLVE_byAAR_qh7t07Xi(const int read, const int write, const bool trySoft, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, s_CurrentFn& _current_fn)
{
    if (!(AAR))
        BUG_patsWWTe(fu_STR{}, _here, ctx);

    if (!(read != write))
        BUG_patsWWTe("RESOLVE_byAAR: read == write"_fu, _here, ctx);

    if ((!trySoft || !acceptsSoftRisk_Jp1bPAe2(GET_pWzRaF0U(nested_jjhiAa3t(read, _current_fnort, module), _scope, module, ctx), _here, ctx)) && !add_itJnJlI8(grow_if_oob_eq5Lu6Hw(_current_fn.flow.at_hard_risk, write), read))
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
                        RESOLVE_byAAR_qh7t07Xi(read, parent, trySoft, AAR, _here, ctx, _current_fnort, module, _scope, _current_fn);

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
                        RESOLVE_byAAR_qh7t07Xi(parent, write, false, AAR, _here, ctx, _current_fnort, module, _scope, _current_fn);

                };
                return true;
            };
        };
    };
    return true;
}

static bool softRiskSafe_uFAaDvfC(const s_SolvedNode& arg, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return (arg.kind == "call"_fu) && (GET_pWzRaF0U(arg.target, _scope, module, ctx).kind == "var"_fu);
}

                                #ifndef DEFt_unless_oob_4Cjh8wBB
                                #define DEFt_unless_oob_4Cjh8wBB
inline const fu_VEC<int>& unless_oob_4Cjh8wBB(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_has_inter_NbZ6E9Ai
                                #define DEFt_has_inter_NbZ6E9Ai
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

static bool isInvalidatedBy_k8fj2BCR(fu::view<s_Region> read, fu::view<s_Region> write, s_CurrentFn& _current_fn)
{
    fu::view<int> read_1 = fu::view_of(read, int{});

    {
        for (int i = 0; i < write.size(); i++)
        {
            const int w = Region_asLocal_MvT8pzW6(write[i]);
            if (w && has_inter_NbZ6E9Ai(unless_oob_4Cjh8wBB(flow_m42eTjEH(_current_fn).invalidates, w), read_1))
                return true;

        };
    };
    return false;
}

static bool RESOLVE_byMutvar_0OlTyiA3(const int target, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope)
{
    if (AAR)
        BUG_patsWWTe(fu_STR{}, _here, ctx);

    const s_Target t = nested_jjhiAa3t(target, _current_fnort, module);
    s_Overload& o = GET_mut_lqSDNFDF(t, _scope, module);
    if (!acceptsTempCopies_oprs4Qiy(o, _here, ctx))
        return false;

    if (is_mutref_zJCUz9W3(o.type, _here, ctx))
        BUG_patsWWTe(((qWHAT_RTL9wrOX(o, module, _scope, ctx) + ": Not F_REF but type.is_mutref"_fu) + " in RESOLVE_byMutvar: is this a problem?"_fu), _here, ctx);

    if (!(o.kind == "var"_fu))
        BUG_patsWWTe("RESOLVE_byMutvar: Not a variable."_fu, _here, ctx);

    if (!(o.type.lifetime.uni0n.size() == 1))
        BUG_patsWWTe("RESOLVE_byMutvar: lt.len != 1"_fu, _here, ctx);

    if (!is_rx_copy_zJCUz9W3(o.type))
        return false;

    if (!(o.flags & F_MUT))
    {
        o.flags |= F_MUT;
        s_Type t_let = clear_refs_zJCUz9W3(s_Type(o.type));
        o.solved.type = t_let;
    };
    return true;
}

static bool RESOLVE_byMutvar_YevHeDai(const s_Target& target, const s_CurrentFn& _current_fn, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope)
{
    return (target.modid == -_current_fn.out.target.index) && RESOLVE_byMutvar_0OlTyiA3(target.index, AAR, _here, ctx, _current_fnort, module, _scope);
}

static bool acceptsTempCopies_QgafCGHN(const s_Argument& arg)
{
    return !(arg.flags & (F_IMPLICIT | F_REF));
}

static s_SolvedNode createDefinit_YMRzC9oa(s_Type&& type, const s_TokenIdx& _here)
{
    if (is_ref_zJCUz9W3(type))
        type.lifetime = Lifetime_static_8nlJDPX0();

    if (is_integral_oPp5yWwB(type))
        return SolvedNode_AK4GvqCq("int"_fu, type, 0, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);

    if (is_floating_pt_oPp5yWwB(type))
        return SolvedNode_AK4GvqCq("real"_fu, type, 0, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);

    return SolvedNode_AK4GvqCq("definit"_fu, type, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
}

static void definitWrap_MnVqVUz6(s_SolvedNode& node, const s_Type& slot, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (is_mutref_zJCUz9W3(slot, _here, ctx) && CANNOT_definit_mutrefs)
        BUG_patsWWTe("Trying to definitWrap a mutref."_fu, _here, ctx);

    if (node.kind == "definit"_fu)
        node.type = (is_ref_zJCUz9W3(slot) ? add_ref_EgWfyCPW(clear_refs_zJCUz9W3(s_Type(slot)), Lifetime_static_8nlJDPX0(), _here, ctx) : s_Type(slot));
    else
        node = createBlock_zloQ2DK8(slot, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(node), createDefinit_YMRzC9oa(s_Type(slot), _here) } }, s_Helpers{}, _here, _helpers, _helpers_data);

}

static bool isRefArg_oY6T3ANF(const s_Overload& o)
{
    return (o.flags & F_ARG) && (o.kind == "var"_fu) && is_ref_zJCUz9W3(o.solved.type);
}

static int Lifetime_vs_l4fNqLya(const s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    bool neg = false;
    bool pos = false;
    fu::view<s_Region> r = lifetime.uni0n;
    for (int i = 0; (i < r.size()) && !(pos ? neg : (*(const bool*)fu::NIL)); i++)
    {
        const s_Region& r_1 = r[i];
        if (Region_toLocal_MvT8pzW6(r_1) < locals_start)
            neg = true;
        else if (Region_isTemp_MvT8pzW6(r_1))
            pos = true;
        else if (isRefArg_oY6T3ANF(Region_GET_mJLiCbCV(r_1, _current_fnort, module, _scope, ctx)))
            neg = true;
        else
            pos = true;

    };
    return ((neg == pos) ? 0 : (neg ? -1 : +1));
}

                                #ifndef DEF_F_MOVED_FROM
                                #define DEF_F_MOVED_FROM
inline constexpr int F_MOVED_FROM = (1 << 11);
                                #endif

inline static void Lifetime_each_G8WTSir0(const s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;

        if (Region_isTemp_MvT8pzW6(r))
            continue;

        s_Overload& o = GET_mut_lqSDNFDF(nested_jjhiAa3t(Region_toLocal_MvT8pzW6(r), _current_fnort, module), _scope, module);
        if (o.flags & F_MOVED_FROM)
            continue;

        o.flags |= F_MOVED_FROM;
        const s_Type& init = Lifetime_climbType_CEsET367(o, module, _scope, ctx, _here);
        if (is_ref_zJCUz9W3(init))
            Lifetime_F_MOVED_FROM_4k7EsX1f(s_Lifetime(init.lifetime), _current_fnort, module, _scope, ctx, _here);

    };
}

static void Lifetime_F_MOVED_FROM_4k7EsX1f(const s_Lifetime& lifetime, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    Lifetime_each_G8WTSir0(lifetime, 0, _current_fnort, module, _scope, ctx, _here);
}

static s_SolvedNode createMove_WSj5Nh7X(const s_SolvedNode& node, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    Lifetime_F_MOVED_FROM_4k7EsX1f(node.type.lifetime, _current_fnort, module, _scope, ctx, _here);
    return SolvedNode_AK4GvqCq("move"_fu, clear_refs_zJCUz9W3(s_Type(node.type)), 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode createCopy_LGehH6nU(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Options& options, int& _notes)
{
    if (!is_rx_copy_zJCUz9W3(node.type))
        fail_1X59Y46x(("Needs an explicit STEAL or CLONE: "_fu + humanizeType_nkNrw01H(node.type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (!is_trivial_JKdxRWxB(node.type, module, ctx))
    {
        if (!(USE_nontriv_autocopy))
            fail_1X59Y46x("Non-trivial implicit copy."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        makeNote_1zG3Fhlo(N_NonTrivAutoCopy, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    };
    return SolvedNode_AK4GvqCq("copy"_fu, clear_refs_zJCUz9W3(s_Type(node.type)), 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, s_Helpers{}, _here);
}

static void maybeCopyOrMove_PCFPXhxT(s_SolvedNode& node, const s_Type& slot, const bool isArgument, const bool isReturn, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Module& module, const s_Target& _current_fnort, s_Scope& _scope, const s_Options& options, int& _notes)
{
    if ((slot.vtype.canon != node.type.vtype.canon) && !is_never_zJCUz9W3(node.type))
    {
        if (is_zeroes_zJCUz9W3(node.type) && !(is_mutref_zJCUz9W3(slot, _here, ctx) ? CANNOT_definit_mutrefs : (*(const bool*)fu::NIL)))
        {
            definitWrap_MnVqVUz6(node, slot, _here, ctx, _helpers, _helpers_data);
            return;
        }
        else
            BUG_patsWWTe(((("Considering copy or move for incompatible types: "_fu + humanizeType_nkNrw01H(slot, module, ctx)) + " <- "_fu) + humanizeType_nkNrw01H(node.type, module, ctx)), _here, ctx);

    };
    if (is_ref_zJCUz9W3(slot))
    {
        if (is_trivial_JKdxRWxB(node.type, module, ctx))
        {
            if ((node.kind == "definit"_fu) && isArgument)
                node.type = clear_refs_zJCUz9W3(s_Type(node.type));

        };
        return;
    };
    if (!is_ref_zJCUz9W3(node.type))
        return;

    if (node.kind == "definit"_fu)
    {
        node.type = clear_refs_zJCUz9W3(s_Type(node.type));
        return;
    };
    if (is_zeroes_zJCUz9W3(node.type))
    {
        definitWrap_MnVqVUz6(node, slot, _here, ctx, _helpers, _helpers_data);
        return;
    };
    s_Lifetime _0 {};
    const bool canMove = (isReturn && ((_0 = Lifetime_unwind_4wfydpXJ(s_Lifetime(node.type.lifetime), 0, _current_fnort, module, _scope, ctx, _here), Lifetime_vs_l4fNqLya(static_cast<s_Lifetime&&>(_0), 0, _current_fnort, module, _scope, ctx)) > 0));
    node = (canMove ? createMove_WSj5Nh7X(node, _current_fnort, module, _scope, ctx, _here) : createCopy_LGehH6nU(node, module, ctx, _here, _helpers, _helpers_data, _scope, options, _notes));
}

static bool RESOLVE_byTempCopy_fyQfuiEb(s_SolvedNode& node, const s_Type& slot, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Module& module, const s_Target& _current_fnort, s_Scope& _scope, const s_Options& options, int& _notes)
{
    s_Type slot_1 = make_copyable_zJCUz9W3(clear_refs_zJCUz9W3(s_Type(slot)));
    maybeCopyOrMove_PCFPXhxT(node, slot_1, false, false, _here, ctx, _helpers, _helpers_data, module, _current_fnort, _scope, options, _notes);
    return true;
}

static bool RESOLVE_byTempCopy_5dzSw6B1(s_SolvedNode& callsite, const int position, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Scope& _scope, const s_CurrentFn& _current_fn, const s_Target& _current_fnort, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Options& options, int& _notes)
{
    if (AAR)
        BUG_patsWWTe(fu_STR{}, _here, ctx);

    const s_Target& target = callsite.target;
    fu_VEC<s_Argument> host_args { EXT_hGjgwR4E(target, module, _scope, ctx).args };
    s_Argument host_arg { host_args[position] };
    const s_SolvedNode& arg = callsite.items[position];
    if (!is_rx_copy_zJCUz9W3(arg.type))
        return false;

    if ((arg.kind == "call"_fu) && RESOLVE_byMutvar_YevHeDai(arg.target, _current_fn, AAR, _here, ctx, _current_fnort, module, _scope))
        return true;

    if (!acceptsTempCopies_QgafCGHN(host_arg))
        return false;

    const s_Region argLt = Region_fromArgPosition_BaKYka79(position);
    const bool isReturned = has_qmMTl2lk(GET_pWzRaF0U(target, _scope, module, ctx).type.lifetime.uni0n, argLt);
    if (isReturned)
        return false;

    return RESOLVE_byTempCopy_fyQfuiEb(callsite.items.mutref(position), host_args[position].type, _here, ctx, _helpers, _helpers_data, module, _current_fnort, _scope, options, _notes);
}

                                #ifndef DEF_DEV_DisableBCK
                                #define DEF_DEV_DisableBCK
inline constexpr unsigned DEV_DisableBCK = (0x1u << 0u);
                                #endif

[[noreturn]] static fu::never AAR_cannotFail_hBpMFzcE(const fu_STR& reason, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (AAR)
        BUG_patsWWTe(("AAR PASS is trying to emit an error:\n\n\t"_fu + reason), _here, ctx);
    else
        fail_1X59Y46x(fu_STR(reason), _here, ctx, _helpers, _helpers_data, _scope, module);

}

static void validate_ZipljjrE(const int i1, fu::view<s_Argument> host_args, const s_Argument& host_arg0, const int i0, s_SolvedNode& callsite, const bool AAR, const int arg_first, const int arg_last, const s_Lifetime& shallow0, s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu::view<s_Lifetime> bck_unwound, const s_Lifetime& unwound0, const s_SolvedNode& arg0, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, int& _notes)
{
    const s_Argument& host_arg1 = host_args[i1];
    if (!has_noL0hivx(host_arg0.soft_risk, i1) && !has_noL0hivx(host_arg1.soft_risk, i0))
        return;

    const s_SolvedNode& arg1 = args_6GI2g4ps(callsite)[i1];
    const s_Lifetime& shallow1 = arg1.type.lifetime;
    if (AAR)
    {
        if ((i0 >= arg_first) && (i0 <= arg_last) && (i1 >= arg_first) && (i1 <= arg_last))
        {
            for (int r0 = 0; r0 < shallow0.uni0n.size(); r0++)
            {
                const int region0 = Region_asLocal_MvT8pzW6(shallow0.uni0n[r0]);
                if (region0)
                {
                    for (int r1 = 0; r1 < shallow1.uni0n.size(); r1++)
                    {
                        const int region1 = Region_asLocal_MvT8pzW6(shallow1.uni0n[r1]);
                        if (region1 && (region0 != region1))
                        {
                            if (is_mutref_zJCUz9W3(host_arg0.type, _here, ctx))
                                RESOLVE_byAAR_qh7t07Xi(region1, region0, !has_noL0hivx(host_arg0.hard_risk, i1), AAR, _here, ctx, _current_fnort, module, _scope, _current_fn);

                            if (is_mutref_zJCUz9W3(host_arg1.type, _here, ctx))
                                RESOLVE_byAAR_qh7t07Xi(region0, region1, !has_noL0hivx(host_arg1.hard_risk, i0), AAR, _here, ctx, _current_fnort, module, _scope, _current_fn);

                        };
                    };
                };
            };
        };
        return;
    };
    const s_Lifetime& unwound1 = bck_unwound[i1];
    s_Lifetime inter = Lifetime_inter_87LkAOV4(unwound0, unwound1);
    if (!inter)
        return;

    if (!has_noL0hivx(host_arg0.hard_risk, i1) && !has_noL0hivx(host_arg1.hard_risk, i0))
    {
        if ((!has_noL0hivx(host_arg0.soft_risk, i1) || (softRiskSafe_uFAaDvfC(arg1, _scope, module, ctx) && !isInvalidatedBy_k8fj2BCR(shallow1.uni0n, shallow0.uni0n, _current_fn))) && (!has_noL0hivx(host_arg1.soft_risk, i0) || (softRiskSafe_uFAaDvfC(arg0, _scope, module, ctx) && !isInvalidatedBy_k8fj2BCR(shallow0.uni0n, shallow1.uni0n, _current_fn))))
            return makeNote_1zG3Fhlo(N_BckSoftRisk, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

    };

    {
        int which = -1;
        if (!is_mutref_zJCUz9W3(host_arg0.type, _here, ctx))
            which = i0;
        else if (!is_mutref_zJCUz9W3(host_arg1.type, _here, ctx))
            which = i1;

        if ((which >= 0))
        {
            if (RESOLVE_byTempCopy_5dzSw6B1(callsite, which, AAR, _here, ctx, module, _scope, _current_fn, _current_fnort, _helpers, _helpers_data, options, _notes))
                return;

        };
    };
    if (!(options.dev & DEV_DisableBCK))
    {
        fu_STR err = qWHAT_RTL9wrOX(GET_pWzRaF0U(target_59jgZ58c(callsite), _scope, module, ctx), module, _scope, ctx);
        err += (((host_args.size() == 2) && (GET_pWzRaF0U(target_59jgZ58c(callsite), _scope, module, ctx).flags & F_OPERATOR)) ? ": Both operands alias:\n"_fu : (x7E((x7E(((((": Arguments "_fu + qBAD_HIwg52Ja(human_7SdJ5Hgt(host_arg0.name, module, _scope, ctx))) + " and "_fu) + qBAD_HIwg52Ja(human_7SdJ5Hgt(host_arg1.name, module, _scope, ctx))) + " (args #"_fu), fu::i64dec(i0)) + " and #"_fu), fu::i64dec(i1)) + ") both alias:\n"_fu));
        for (int i = 0; i < inter.uni0n.size(); i++)
        {
            const s_Region& o = inter.uni0n[i];
            err += "\n                "_fu;
            err += qWHAT_RTL9wrOX(Region_GET_mJLiCbCV(o, _current_fnort, module, _scope, ctx), module, _scope, ctx);
        };
        _here = args_6GI2g4ps(callsite)[i0].token;
        AAR_cannotFail_hBpMFzcE(err, AAR, _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

                                #ifndef DEFt_x3Cx3E_PsqHNzQD
                                #define DEFt_x3Cx3E_PsqHNzQD
inline int x3Cx3E_PsqHNzQD(const s_Region& a, const s_Region& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_gcxVH86X(a.index, b.index);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEFt_add_69YRndj3
                                #define DEFt_add_69YRndj3
inline void add_69YRndj3(fu_VEC<s_Region>& a, fu::view<s_Region> b, fu_VEC<int>& extras, const int extra)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        const int cmp = x3Cx3E_PsqHNzQD(X, Y);
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

static s_Events& events_BzMJsoce(s_CurrentFn& _current_fn)
{
    return _current_fn.events;
}

                                #ifndef DEFt_unless_oob_3rB772Sn
                                #define DEFt_unless_oob_3rB772Sn
inline const s_ReadID& unless_oob_3rB772Sn(fu::view<s_ReadID> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_ReadID*)fu::NIL);
}
                                #endif

static fu_STR bck_name_ojGXLlRX(const int target, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return human_7SdJ5Hgt(GET_pWzRaF0U(nested_jjhiAa3t(target, _current_fnort, module), _scope, module, ctx).name, module, _scope, ctx);
}

inline static s_SolvedNode TODO_FIX_pop_5jMan8vB(fu_VEC<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

inline static void SLOW_traverse_FqnSJTEW(const s_SolvedNode& node, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_ReadID& read, s_SolvedNode& result)
{
    fu_VEC<s_SolvedNode> stack = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
    while (stack)
    {
        s_SolvedNode node_1 = TODO_FIX_pop_5jMan8vB(stack);
        const s_SolvedNode& node_2 = ((node_1.kind == "letdef"_fu) ? GET_pWzRaF0U(node_1.target, _scope, module, ctx).solved : node_1);

        {
            if (((void)void(), ((node_2.rwr.reads0 < read.id) && (node_2.rwr.reads1 >= read.id))))
                result = node_2;

        };
        for (int i = node_2.items.size(); i-- > 0; )
            stack += s_SolvedNode(node_2.items[i]);

    };
}

inline static s_SolvedNode SLOW_find_i8UKjVI1(const s_SolvedNode& root, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_ReadID& read)
{
    /*MOV*/ s_SolvedNode result {};
    SLOW_traverse_FqnSJTEW(root, _scope, module, ctx, read, result);
    return /*NRVO*/ result;
}

static s_SolvedNode SLOW_findByReadID_WOb4xpa5(const s_ReadID& read, const s_SolvedNode& root, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return SLOW_find_i8UKjVI1(root, _scope, module, ctx, read);
}

                                #ifndef DEFt_grow_if_oob_LsgH6Unw
                                #define DEFt_grow_if_oob_LsgH6Unw
inline fu_VEC<s_WriteID>& grow_if_oob_LsgH6Unw(fu_VEC<fu_VEC<s_WriteID>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_each_EqBEPba0
                                #define DEFt_each_EqBEPba0
inline void each_EqBEPba0(fu::view<int> a, s_CurrentFn& _current_fn)
{
    for (int i = 0; i < a.size(); i++)
        tagWritten_k39UFIKw(a[i], _current_fn);

}
                                #endif

static void tagWritten_k39UFIKw(const int target, s_CurrentFn& _current_fn)
{
    if (add_once_PCSel0xp(events_BzMJsoce(_current_fn).ever_written, target))
        each_EqBEPba0(fu_VEC<int>(unless_oob_0EYwFJPW(flow_m42eTjEH(_current_fn).parents, target)), _current_fn);

}

static void bck_trackWrites_8hvIosGg(const s_SolvedNode& callsite, fu::view<s_Region> regions, fu::view<int> positions, s_TokenIdx& _here, s_CurrentFn& _current_fn, const bool AAR, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_SolvedNode& root, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    _here = callsite.token;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target = Region_asLocal_MvT8pzW6(regions[i]);
        if (!target)
            continue;

        const int position = positions[i];
        fu_VEC<int> invalidates { unless_oob_0EYwFJPW(flow_m42eTjEH(_current_fn).invalidates, target) };
        if (events_BzMJsoce(_current_fn).used_in_a_loop)
        {
            for (int i_1 = 0; i_1 < invalidates.size(); i_1++)
            {
                const int read = invalidates[i_1];
                const s_ReadID& readID = unless_oob_3rB772Sn(events_BzMJsoce(_current_fn).used_in_a_loop, read);
                if (readID)
                {
                    if (AAR)
                        RESOLVE_byAAR_qh7t07Xi(read, target, true, AAR, _here, ctx, _current_fnort, module, _scope, _current_fn);
                    else
                    {
                        if (!(RESOLVE_byMutvar_0OlTyiA3(read, AAR, _here, ctx, _current_fnort, module, _scope)))
                        {
                            fu_STR _0 {};
                            fu_STR _1 {};
                            (_1 = (_0 = (((((((("Write to "_fu + qBAD_HIwg52Ja(bck_name_ojGXLlRX(target, _current_fnort, module, _scope, ctx))) + " at call to "_fu) + qWHAT_RTL9wrOX(GET_pWzRaF0U(callsite.target, _scope, module, ctx), module, _scope, ctx)) + " invalidates the use of "_fu) + qBAD_HIwg52Ja(bck_name_ojGXLlRX(read, _current_fnort, module, _scope, ctx))) + " at "_fu) + addr_and_snippet_LengIYLC(SLOW_findByReadID_WOb4xpa5(readID, root, _scope, module, ctx).token, ctx, module)) + "\n\t... on next loop iteration.\n\n\tWritten"_fu), (static_cast<fu_STR&&>(_0) + qSTACK_T8yWuHOa(callsite.target, position, fu::view<s_Target>{}, module, _scope, ctx, _here))), AAR_cannotFail_hBpMFzcE(static_cast<fu_STR&&>(_1), AAR, _here, ctx, _helpers, _helpers_data, _scope, module));
                        };
                    };
                };
            };
        };
        events_BzMJsoce(_current_fn).writes += s_RWEvent { int(target) };
        const s_WriteID writeID = s_WriteID { events_BzMJsoce(_current_fn).writes.size() };
        for (int i_1 = 0; i_1 < invalidates.size(); i_1++)
        {
            fu_VEC<s_WriteID>& set = grow_if_oob_LsgH6Unw(events_BzMJsoce(_current_fn).snap.invalidated_by, invalidates[i_1]);
            if (!OPTI_bck || AAR || !set)
                set += s_WriteID(writeID);

        };
        tagWritten_k39UFIKw(target, _current_fn);
    };
}

static s_RWEvent& RWEvent_EDJHl8X8(const s_WriteID& write, s_CurrentFn& _current_fn)
{
    return _current_fn.events.writes.mutref((write.id - 1));
}

                                #ifndef DEFt_add_BqwRK6Ej
                                #define DEFt_add_BqwRK6Ej
inline void add_BqwRK6Ej(fu_VEC<s_Region>& a, fu::view<s_Region> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        const int cmp = x3Cx3E_PsqHNzQD(X, Y);
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

                                #ifndef DEFt_has_inter_2hwZIj1v
                                #define DEFt_has_inter_2hwZIj1v
inline bool has_inter_2hwZIj1v(fu::view<s_Region> l, fu::view<s_Region> r)
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
            (void)0;}), static_cast<fu::never&&>(BL_4_v)) : +1) : (r_done ? -1 : x3Cx3E_PsqHNzQD(l[li], r[ri])));
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

inline static void merge_mxJWxN0D(fu::view<s_Region> l, fu::view<s_Region> r, bool& useResult, fu_VEC<s_Region>& result, const fu_VEC<s_Region>& l_1)
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
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : +1) : (r_done ? -1 : x3Cx3E_PsqHNzQD(l[li], r[ri])));
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

                                #ifndef DEFt_inter_2hwZIj1v
                                #define DEFt_inter_2hwZIj1v
inline fu_VEC<s_Region> inter_2hwZIj1v(const fu_VEC<s_Region>& l, const fu_VEC<s_Region>& r)
{
    if (r.size() < l.size())
        return inter_2hwZIj1v(r, l);

    fu_VEC<s_Region> result {};
    bool useResult = false;
    merge_mxJWxN0D(l, r, useResult, result, l);
    return fu_VEC<s_Region>((useResult ? result : l));
}
                                #endif

static bool RESOLVE_byAAR_JhgNEnZ6(const int write, fu::view<s_Region> reads, const bool trySoft, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, s_CurrentFn& _current_fn)
{
    for (int r = 0; r < reads.size(); r++)
    {
        const int read = Region_asLocal_MvT8pzW6(reads[r]);
        if (read && (read != write))
            RESOLVE_byAAR_qh7t07Xi(read, write, trySoft, AAR, _here, ctx, _current_fnort, module, _scope, _current_fn);

    };
    return true;
}

                                #ifndef DEFt_first_tZvRQ2Ac
                                #define DEFt_first_tZvRQ2Ac
inline const s_Region& first_tZvRQ2Ac(fu::view<s_Region> s)
{
    return (s.size() ? s[0] : fu::fail("len == 0"_fu));
}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_ZDlMx94O(fu_VEC<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

inline static void SLOW_traverse_T3eWTfDK(const s_SolvedNode& node, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_WriteID& write, s_SolvedNode& result)
{
    fu_VEC<s_SolvedNode> stack = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
    while (stack)
    {
        s_SolvedNode node_1 = TODO_FIX_pop_ZDlMx94O(stack);
        const s_SolvedNode& node_2 = ((node_1.kind == "letdef"_fu) ? GET_pWzRaF0U(node_1.target, _scope, module, ctx).solved : node_1);

        {
            if (((void)void(), ((node_2.rwr.writes0 < write.id) && (node_2.rwr.writes1 >= write.id))))
                result = node_2;

        };
        for (int i = node_2.items.size(); i-- > 0; )
            stack += s_SolvedNode(node_2.items[i]);

    };
}

inline static s_SolvedNode SLOW_find_wumD3k4I(const s_SolvedNode& root, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_WriteID& write)
{
    /*MOV*/ s_SolvedNode result {};
    SLOW_traverse_T3eWTfDK(root, _scope, module, ctx, write, result);
    return /*NRVO*/ result;
}

static s_SolvedNode SLOW_findByWriteID_M5H0hU8G(const s_WriteID& write, const s_SolvedNode& root, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    return SLOW_find_wumD3k4I(root, _scope, module, ctx, write);
}

static fu_STR RWEvent_stack_WkyXQvEJ(const s_WriteID& write, const s_SolvedNode& root, s_Scope& _scope, const s_Module& module, const s_Context& ctx, s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_TokenIdx& _here)
{
    s_SolvedNode node = SLOW_findByWriteID_M5H0hU8G(write, root, _scope, module, ctx);
    if (node.kind != "call"_fu)
        return "\n\tVia "_fu + qKW_HIwg52Ja(node.kind);

    fu_STR stack {};

    {
        fu_VEC<s_Region> uni0n { GET_pWzRaF0U(nested_jjhiAa3t(RWEvent_EDJHl8X8(write, _current_fn).rw_target, _current_fnort, module), _scope, module, ctx).type.lifetime.uni0n };
        if (uni0n)
        {
            for (int i = 0; i < node.items.size(); i++)
            {
                const s_SolvedNode& arg = node.items[i];
                if (inter_2hwZIj1v(arg.type.lifetime.uni0n, uni0n))
                {
                    const s_Argument& host_arg = EXT_hGjgwR4E(node.target, module, _scope, ctx).args[i];
                    if (host_arg.flags & F_WRITTEN_TO)
                    {
                        stack = qSTACK_T8yWuHOa(node.target, i, fu::view<s_Target>{}, module, _scope, ctx, _here);
                        break;
                    };
                };
            };
        };
    };
    const s_Overload& o = GET_pWzRaF0U(node.target, _scope, module, ctx);
    return ((addr_and_snippet_LengIYLC(node.token, ctx, module) + "\n\tAt call to "_fu) + qID_HIwg52Ja(o.name)) + stack;
}

static bool RESOLVE_byAAR_aBga54ug(fu::view<s_WriteID> writes, const int read, const bool trySoft, s_CurrentFn& _current_fn, const bool AAR, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope)
{
    for (int i = 0; i < writes.size(); i++)
    {
        int _0 {};
        (_0 = int(RWEvent_EDJHl8X8(writes[i], _current_fn).rw_target), RESOLVE_byAAR_qh7t07Xi(read, int(_0), trySoft, AAR, _here, ctx, _current_fnort, module, _scope, _current_fn));
    };
    return true;
}

                                #ifndef DEFt_first_QUBdTA4N
                                #define DEFt_first_QUBdTA4N
inline const s_WriteID& first_QUBdTA4N(fu::view<s_WriteID> s)
{
    return (s.size() ? s[0] : fu::fail("len == 0"_fu));
}
                                #endif

                                #ifndef DEFt_grow_if_oob_AcqswnRo
                                #define DEFt_grow_if_oob_AcqswnRo
inline s_ReadID& grow_if_oob_AcqswnRo(fu_VEC<s_ReadID>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void bck_trackRead_EdCfT0qq(const s_SolvedNode& callsite, s_CurrentFn& _current_fn, s_TokenIdx& _here, const bool AAR, const s_Context& ctx, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_SolvedNode& root, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (!is_ref_zJCUz9W3(callsite.type) || !_current_fn.out.target.index)
        return;

    _here = callsite.token;
    fu::view<s_Region> regions = callsite.type.lifetime.uni0n;
    const int loop_start = _current_fn.loop_start;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target = Region_asLocal_MvT8pzW6(regions[i]);
        if (!target)
            continue;

        if (events_BzMJsoce(_current_fn).snap.invalidated_by.size() > target)
        {
            fu_VEC<s_WriteID> u { events_BzMJsoce(_current_fn).snap.invalidated_by[target] };
            if (u)
            {
                if ((AAR ? !RESOLVE_byAAR_aBga54ug(u, target, true, _current_fn, AAR, _here, ctx, _current_fnort, module, _scope) : !RESOLVE_byMutvar_0OlTyiA3(target, AAR, _here, ctx, _current_fnort, module, _scope)))
                {
                    fu_STR _0 {};
                    fu_STR _1 {};
                    fu_STR _2 {};
                    (_2 = (_1 = ((_0 = (((("Cannot access"_fu + " "_fu) + qBAD_HIwg52Ja(bck_name_ojGXLlRX(target, _current_fnort, module, _scope, ctx))) + ", reference invalidated by write to"_fu) + " "_fu), (static_cast<fu_STR&&>(_0) + qBAD_HIwg52Ja(bck_name_ojGXLlRX(RWEvent_EDJHl8X8(first_QUBdTA4N(u), _current_fn).rw_target, _current_fnort, module, _scope, ctx)))) + " at "_fu), (static_cast<fu_STR&&>(_1) + RWEvent_stack_WkyXQvEJ(first_QUBdTA4N(u), root, _scope, module, ctx, _current_fn, _current_fnort, _here))), AAR_cannotFail_hBpMFzcE(static_cast<fu_STR&&>(_2), AAR, _here, ctx, _helpers, _helpers_data, _scope, module));
                };
                if (OPTI_bck)
                    events_BzMJsoce(_current_fn).snap.invalidated_by.mutref(target) = fu_VEC<s_WriteID>{};

            };
        };
        events_BzMJsoce(_current_fn).reads += s_RWEvent { int(target) };
        const s_ReadID readID = s_ReadID { events_BzMJsoce(_current_fn).reads.size() };
        if (loop_start && (target < loop_start))
        {
            s_ReadID& a = grow_if_oob_AcqswnRo(events_BzMJsoce(_current_fn).used_in_a_loop, target);
            if (!(a))
                a = readID;

        };
    };
}

static void bck_call_mMvjQ8QE(s_SolvedNode& callsite, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    if (args_6GI2g4ps(callsite))
    {
        fu_VEC<s_Argument> host_args { EXT_hGjgwR4E(target_59jgZ58c(callsite), module, _scope, ctx).args };
        const int ooe_read0 = _current_fn.events.reads.size();
        const int ooe_write0 = _current_fn.events.writes.size();
        fu_VEC<int> ooe_reads {};
        fu_VEC<int> ooe_writes {};
        const bool ooe_isRTL = isRTL_KmKZ4rju(GET_pWzRaF0U(target_59jgZ58c(callsite), _scope, module, ctx));
        const int ooe_START = (ooe_isRTL ? (args_6GI2g4ps(callsite).size() - 1) : 0);

        {
            int ooe_read0_1 = ooe_read0;
            int ooe_write0_1 = ooe_write0;
            for (int ooe_i = 0; ooe_i < args_6GI2g4ps(callsite).size(); ooe_i++)
            {
                bck_node_s1pQpfN3(args_6GI2g4ps(callsite).mutref((ooe_isRTL ? (ooe_START - ooe_i) : int(ooe_i))), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
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
        for (int i0 = 0; i0 < args_6GI2g4ps(callsite).size(); i0++)
        {
            s_Argument host_arg0 { host_args[i0] };
            s_Type expect { host_arg0.type };
            if (is_ref_zJCUz9W3(expect))
            {
                if (!bck_unwound)
                {
                    if ((mutref_first >= 0) || ((ref_first >= 0) && is_mutref_zJCUz9W3(expect, _here, ctx)))
                    {
                        bck_unwound.resize(args_6GI2g4ps(callsite).size());
                        for (int i0_1 = ref_first; (i0_1 <= ref_last); i0_1++)
                        {
                            const s_Lifetime& unwound = (bck_unwound.mutref(i0_1) = Lifetime_unwind_noStatic_vb6bgBY0(s_Lifetime(args_6GI2g4ps(callsite)[i0_1].type.lifetime), _current_fnort, module, _scope, ctx, _here));
                            for (int i = 0; i < unwound.uni0n.size(); i++)
                            {
                                if (Region_asLocal_MvT8pzW6(unwound.uni0n[i]))
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
                    s_SolvedNode arg0 { args_6GI2g4ps(callsite)[i0] };
                    s_Lifetime shallow0 { arg0.type.lifetime };
                    const s_Lifetime& unwound0 = (bck_unwound.mutref(i0) = Lifetime_unwind_noStatic_vb6bgBY0(s_Lifetime(shallow0), _current_fnort, module, _scope, ctx, _here));
                    for (int i = 0; i < unwound0.uni0n.size(); i++)
                    {
                        if (Region_asLocal_MvT8pzW6(unwound0.uni0n[i]))
                        {
                            arg_first = ((arg_first < 0) ? i0 : arg_first);
                            arg_last = i0;
                            continue;
                        };
                    };
                    if (is_mutref_zJCUz9W3(expect, _here, ctx))
                    {
                        for (int i_1 = ref_first; (i_1 <= ref_last); i_1++)
                        {
                            if (is_ref_zJCUz9W3(host_args[i_1].type))
                                validate_ZipljjrE(i_1, host_args, host_arg0, i0, callsite, AAR, arg_first, arg_last, shallow0, _here, ctx, _current_fnort, module, _scope, _current_fn, bck_unwound, unwound0, arg0, options, _helpers, _helpers_data, _notes);

                        };
                    }
                    else
                    {
                        for (int i_1 = mutref_first; (i_1 <= mutref_last); i_1++)
                        {
                            if (is_mutref_zJCUz9W3(host_args[i_1].type, _here, ctx))
                                validate_ZipljjrE(i_1, host_args, host_arg0, i0, callsite, AAR, arg_first, arg_last, shallow0, _here, ctx, _current_fnort, module, _scope, _current_fn, bck_unwound, unwound0, arg0, options, _helpers, _helpers_data, _notes);

                        };
                    };
                };

                {
                    if (ref_first < 0)
                        ref_first = i0;

                    ref_last = i0;
                };
                if (is_mutref_zJCUz9W3(expect, _here, ctx))
                {
                    if (mutref_first < 0)
                        mutref_first = i0;

                    mutref_last = i0;
                    if (host_arg0.flags & F_WRITTEN_TO)
                    {
                        const s_SolvedNode& arg0 = args_6GI2g4ps(callsite)[i0];
                        if (!(is_mutref_zJCUz9W3(host_arg0.type, _here, ctx)))
                            BUG_patsWWTe((qID_HIwg52Ja(human_7SdJ5Hgt(host_arg0.name, module, _scope, ctx)) + ": host_arg0.written but !host_arg0.is_mutref"_fu), _here, ctx);

                        if (!(is_mutref_zJCUz9W3(arg0.type, _here, ctx)))
                            BUG_patsWWTe((qID_HIwg52Ja(human_7SdJ5Hgt(host_arg0.name, module, _scope, ctx)) + ": host_arg0.written but !arg.is_mutref"_fu), _here, ctx);

                        add_69YRndj3(bck_writes, arg0.type.lifetime.uni0n, bck_positions, i0);
                    };
                };
            };
        };
        if (bck_writes)
        {
            if (!(bck_positions.size() == bck_writes.size()))
                BUG_patsWWTe("bck_position.len is off"_fu, _here, ctx);

            bck_trackWrites_8hvIosGg(callsite, bck_writes, bck_positions, _here, _current_fn, AAR, ctx, _current_fnort, module, _scope, root, _helpers, _helpers_data);
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
                    const int write = RWEvent_EDJHl8X8(writeID, _current_fn).rw_target;
                    const bool iw_evalsFirst = (ooe_iw == 0);
                    fu_VEC<s_Region> just_the_write = fu_VEC<s_Region> { fu::slate<1, s_Region> { Region_fromLocal_BaKYka79(write) } };
                    fu_VEC<s_Region> written_and_invalidated {};
                    if (!iw_evalsFirst)
                    {
                        written_and_invalidated = just_the_write;
                        fu::view<int> invalidates = unless_oob_4Cjh8wBB(flow_m42eTjEH(_current_fn).invalidates, write);
                        add_BqwRK6Ej(written_and_invalidated, fu::view_of(invalidates, s_Region{}));
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
                                BUG_patsWWTe(fu_STR{}, _here, ctx);

                            for (int r = ooe_read0_1; r < ooe_read1; r++)
                            {
                                const s_RWEvent& read = _current_fn.events.reads[r];
                                fu::view<s_Region> regions = GET_pWzRaF0U(nested_jjhiAa3t(read.rw_target, _current_fnort, module), _scope, module, ctx).type.lifetime.uni0n;
                                if (!has_inter_2hwZIj1v(regions, written))
                                    continue;

                                const int r_1 = (ooe_isRTL ? (ooe_START - ooe_ir) : int(ooe_ir));
                                const int w_1 = (ooe_isRTL ? (ooe_START - ooe_iw) : int(ooe_iw));
                                if (ooe_ir_evalsBefore_iw)
                                {
                                    s_SolvedNode arg { args_6GI2g4ps(callsite)[r_1] };
                                    const fu_VEC<s_Region>& bound = arg.type.lifetime.uni0n;
                                    fu_VEC<s_Region> inter = inter_2hwZIj1v(bound, written);
                                    if (inter)
                                    {
                                        if ((AAR ? !RESOLVE_byAAR_JhgNEnZ6(write, inter, true, AAR, _here, ctx, _current_fnort, module, _scope, _current_fn) : !RESOLVE_byTempCopy_5dzSw6B1(callsite, r_1, AAR, _here, ctx, module, _scope, _current_fn, _current_fnort, _helpers, _helpers_data, options, _notes)))
                                        {
                                            _here = callsite.token;
                                            fu_STR _0 {};
                                            fu_STR _1 {};
                                            (_1 = (_0 = (x7E((((((((x7E((((("At call to "_fu + qWHAT_RTL9wrOX(GET_pWzRaF0U(target_59jgZ58c(callsite), _scope, module, ctx), module, _scope, ctx)) + ", argument binding "_fu) + qBAD_HIwg52Ja(human_7SdJ5Hgt(host_args[r_1].name, module, _scope, ctx))) + " (arg #"_fu), fu::i64dec(r_1)) + ") at "_fu) + addr_and_snippet_LengIYLC(arg.token, ctx, module)) + "\n\t... invalidated by subsequent write to "_fu) + qWHAT_RTL9wrOX(Region_GET_mJLiCbCV(first_tZvRQ2Ac(just_the_write), _current_fnort, module, _scope, ctx), module, _scope, ctx)) + " upon evaluation of argument "_fu) + qBAD_HIwg52Ja(human_7SdJ5Hgt(host_args[w_1].name, module, _scope, ctx))) + " (arg #"_fu), fu::i64dec(w_1)) + ") at "_fu), (static_cast<fu_STR&&>(_0) + RWEvent_stack_WkyXQvEJ(writeID, root, _scope, module, ctx, _current_fn, _current_fnort, _here))), AAR_cannotFail_hBpMFzcE(static_cast<fu_STR&&>(_1), AAR, _here, ctx, _helpers, _helpers_data, _scope, module));
                                        };
                                    };
                                };
                                if (!ooe_isRTL)
                                {
                                    const int mustSeq = (ooe_ir_evalsBefore_iw ? r_1 : w_1);
                                    MUSTSEQ_mask |= (1 << (mustSeq & 31));
                                    makeNote_1zG3Fhlo(N_BckMustSeq, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
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
            BUG_patsWWTe("MUSTSEQ_mask: helpers already contain something"_fu, _here, ctx);

        helpers = s_Helpers { (MUSTSEQ_mask | helpers.index) };
    }
    else if (GET_pWzRaF0U(target_59jgZ58c(callsite), _scope, module, ctx).kind == "var"_fu)
        bck_trackRead_EdCfT0qq(callsite, _current_fn, _here, AAR, ctx, _current_fnort, module, _scope, root, _helpers, _helpers_data);

}

static void bck_loop_XdjwTDPb(s_SolvedNode& node, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    bck_node_s1pQpfN3(items.mutref(0), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    const int loop_start0 = _current_fn.loop_start;
    const int loop_start = GET_next_local_index_k5ok1B4G(_current_fnort, _current_fn, _scope);
    fu_VEC<s_ReadID> events0 { _current_fn.events.used_in_a_loop };
    _current_fn.loop_start = loop_start;
    fu_DEFER(_current_fn.loop_start = loop_start0);
    for (int i = 1; i < items.size(); i++)
        bck_node_s1pQpfN3(items.mutref(i), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);

    _current_fn.events.used_in_a_loop = events0;
}

static void bck_nodes_8xlLdpAD(fu::view_mut<s_SolvedNode> items, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    for (int i = 0; i < items.size(); i++)
        bck_node_s1pQpfN3(items.mutref(i), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);

}

                                #ifndef DEFt_unless_oob_tT6t7EsJ
                                #define DEFt_unless_oob_tT6t7EsJ
inline const fu_VEC<s_WriteID>& unless_oob_tT6t7EsJ(fu::view<fu_VEC<s_WriteID>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<s_WriteID>*)fu::NIL);
}
                                #endif

static void bck_trackInit_ilFDWkBP(const s_Target& target, s_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx)
{
    const int index = target.index;
    if (!index)
        return;

    if (unless_oob_tT6t7EsJ(events_BzMJsoce(_current_fn).snap.invalidated_by, index))
        BUG_patsWWTe(fu_STR{}, _here, ctx);

    if (_current_fn.loop_start > index)
        _current_fn.loop_start = index;

}

static void bck_let_hlYWedz8(s_SolvedNode& node, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    bck_nodes_8xlLdpAD(node.items, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    if (is_ref_zJCUz9W3(node.type))
    {
        if (node.flags & F_ARG)
            BUG_patsWWTe("bck_let: Found an argument!"_fu, _here, ctx);

        const s_SolvedNode& init = node.items[LET_INIT];
        if (!(is_ref_zJCUz9W3(init.type)))
            BUG_patsWWTe("What!"_fu, _here, ctx);

        Reference_trackLocalRef_wvzGTQIs(_current_fn.flow, node.target.index, init.type.lifetime);
    };
    bck_trackInit_ilFDWkBP(node.target, _current_fn, _here, ctx);
}

                                #ifndef DEFt_x3Cx3E_I7RwnvAA
                                #define DEFt_x3Cx3E_I7RwnvAA
inline int x3Cx3E_I7RwnvAA(const s_WriteID& a, const s_WriteID& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_gcxVH86X(a.id, b.id);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEFt_add_bTFhlnDS
                                #define DEFt_add_bTFhlnDS
inline void add_bTFhlnDS(fu_VEC<s_WriteID>& a, fu::view<s_WriteID> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_WriteID& X = a[x];
        const s_WriteID& Y = b[y];
        const int cmp = x3Cx3E_I7RwnvAA(X, Y);
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

inline static void Events_merge_nLsoZsd1(fu_VEC<fu_VEC<s_WriteID>>& dest, fu::view<fu_VEC<s_WriteID>> src)
{
    if (dest.size() < src.size())
        dest.grow(src.size());

    for (int i = 0; i < src.size(); i++)
    {
        const fu_VEC<s_WriteID>& src_1 = src[i];
        if (src_1)
            add_bTFhlnDS(dest.mutref(i), src_1);

    };
}

static void Events_merge_s17x2Aht(s_Events& events, const s_EventsSnap& snap)
{
    Events_merge_nLsoZsd1(events.snap.invalidated_by, snap.invalidated_by);
}

static void bck_if_dtwgmQ6z(s_SolvedNode& node, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    bck_node_s1pQpfN3(items.mutref(0), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    s_EventsSnap e_Restore_AfterCond { _current_fn.events.snap };
    bck_node_s1pQpfN3(items.mutref(1), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    s_EventsSnap e_Merge_AfterCons { _current_fn.events.snap };
    _current_fn.events.snap = e_Restore_AfterCond;
    bck_node_s1pQpfN3(items.mutref(2), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    Events_merge_s17x2Aht(_current_fn.events, e_Merge_AfterCons);
}

static void bck_block_GT3GvFI0(s_SolvedNode& node, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    fu_VEC<s_SolvedNode> defers {};
    fu::view_mut<s_SolvedNode> items = node.items;
    for (int i = 0; i < items.size(); i++)
    {
        s_SolvedNode& node_1 = items.mutref(i);
        if (node_1.kind == "defer"_fu)
            defers += s_SolvedNode(only_gF1gIgkM(node_1.items));
        else
            bck_node_s1pQpfN3(node_1, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);

    };
    for (int i_1 = defers.size(); i_1-- > 0; )
        bck_node_s1pQpfN3(defers.mutref(i_1), _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);

}

static void bck_node_s1pQpfN3(s_SolvedNode& node, s_CurrentFn& _current_fn, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, int& _notes, const s_SolvedNode& root)
{
    fu::view<char> k = node.kind;
    s_RWRanges rwr {};
    rwr.reads0 = _current_fn.events.reads.size();
    rwr.writes0 = _current_fn.events.writes.size();
    if (k == "call"_fu)
        bck_call_mMvjQ8QE(node, module, _scope, ctx, _current_fn, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    else if (k == "loop"_fu)
        bck_loop_XdjwTDPb(node, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    else if (k == "letdef"_fu)
    {
        std::swap(GET_mut_lqSDNFDF(node.target, _scope, module).solved, node);
        bck_node_s1pQpfN3(node, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
        std::swap(GET_mut_lqSDNFDF(node.target, _scope, module).solved, node);
    }
    else if (k == "let"_fu)
        bck_let_hlYWedz8(node, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    else if (k == "if"_fu)
        bck_if_dtwgmQ6z(node, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    else if (k == "block"_fu)
        bck_block_GT3GvFI0(node, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    else if ((k == "root"_fu) || (k == "and"_fu) || (k == "or"_fu) || (k == "jump"_fu) || (k == "try"_fu) || (k == "copy"_fu) || (k == "move"_fu) || (k == "arrlit"_fu))
        bck_nodes_8xlLdpAD(node.items, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
    else if (k == "compiler"_fu)
    {
    }
    else if (node.items)
        AAR_cannotFail_hBpMFzcE((("TODO: bck_node(non-empty "_fu + k) + ")."_fu), AAR, _here, ctx, _helpers, _helpers_data, _scope, module);

    rwr.reads1 = _current_fn.events.reads.size();
    rwr.writes1 = _current_fn.events.writes.size();
    if ((rwr.reads1 > rwr.reads0) || (rwr.writes1 > rwr.writes0))
        node.rwr = rwr;

}

inline static void _current_fn_eachArg_FWD_4jZ04j1h(const s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, int& last, fu_VEC<int>& refs, fu_VEC<int>& consts)
{
    fu::view<s_SolvedNode> sig = _current_fn.out.items;
    for (int i = 0; i < (sig.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = sig[i].target;
        if (t && (GET_pWzRaF0U(t, _scope, module, ctx).flags & F_ARG))
        {
            if (!(t.modid == -_current_fn.out.target.index))
                BUG_patsWWTe(fu_STR{}, _here, ctx);

            int _0 {};
            if (!((_0 = int(last), (int(_0) < (last = t.index)))))
                BUG_patsWWTe(fu_STR{}, _here, ctx);

            if (is_mutref_zJCUz9W3(GET_pWzRaF0U(t, _scope, module, ctx).solved.type, _here, ctx))
                refs += int(t.index);
            else if (is_ref_zJCUz9W3(GET_pWzRaF0U(t, _scope, module, ctx).solved.type))
                consts += int(t.index);

        };
    };
}

                                #ifndef DEFt_rem_itJnJlI8
                                #define DEFt_rem_itJnJlI8
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

                                #ifndef DEFt_add_KIHP0U19
                                #define DEFt_add_KIHP0U19
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

static void PASS_borrowCheck_5mII17vJ(s_SolvedNode& root, s_CurrentFn& _current_fn, s_Scope& _scope, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, int& _notes)
{
    bool AAR = false;
    _current_fn_eachArg_FWD_zS6QWA9f(_current_fn, _scope, module, ctx, _here);
    bck_node_s1pQpfN3(root, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);

    { {
        fu_VEC<int> consts {};
        fu_VEC<int> refs {};

        {
            int last = 0;
            _current_fn_eachArg_FWD_4jZ04j1h(_current_fn, _scope, module, ctx, _here, last, refs, consts);
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
        bck_node_s1pQpfN3(root, _current_fn, module, _scope, ctx, _here, _current_fnort, AAR, options, _helpers, _helpers_data, _notes, root);
      } BL_1:;
    };
}

static fu_VEC<int> Lifetime_slotsUp2_9kV7XloX(const s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here)
{
    fu_VEC<s_Region> unwound = Lifetime_unwind_4wfydpXJ(s_Lifetime(lifetime), locals_start, _current_fnort, module, _scope, ctx, _here).uni0n;
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

                                #ifndef DEFt_each_VHOwvdnP
                                #define DEFt_each_VHOwvdnP
inline void each_VHOwvdnP(fu::view<int> a, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope)
{
    for (int i = 0; i < a.size(); i++)
    {
        const int index = a[i];
        s_Overload& o = GET_mut_lqSDNFDF(nested_jjhiAa3t(index, _current_fnort, module), _scope, module);
        if (!(o.flags & F_ARG))
            o.flags |= F_HOIST;

    };
}
                                #endif

static void mcom_BlockReturns_CopyOrMoveDecision_6Mmh2zEC(const s_Helpers& h, fu::view_mut<s_HelpersData> _helpers_data, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers)
{
    if (!is_ref_zJCUz9W3(((void)void(), _helpers_data[h.index]).ret_actual))
        return;

    if (((void)void(), _helpers_data[h.index]).mask & HM_Function)
    {
        s_Lifetime unwind = Lifetime_unwind_4wfydpXJ(s_Lifetime(((void)void(), _helpers_data[h.index]).ret_actual.lifetime), 0, _current_fnort, module, _scope, ctx, _here);
        if (Lifetime_vs_l4fNqLya(unwind, ((void)void(), _helpers_data[h.index]).locals_start, _current_fnort, module, _scope, ctx) < 0)
            ((void)void(), _helpers_data.mutref(h.index)).ret_actual.lifetime = unwind;
        else
            reportReturnType_dvQfvbXf(h, clear_refs_zJCUz9W3(s_Type(((void)void(), _helpers_data[h.index]).ret_actual)), _helpers_data, _here, ctx, module, _helpers, _scope);

    }
    else
    {
        fu_VEC<int> _0 {};
        (_0 = Lifetime_slotsUp2_9kV7XloX(((void)void(), _helpers_data[h.index]).ret_actual.lifetime, ((void)void(), _helpers_data[h.index]).locals_start, _current_fnort, module, _scope, ctx, _here), each_VHOwvdnP(static_cast<fu_VEC<int>&&>(_0), _current_fnort, module, _scope));
    };
}

                                #ifndef DEFt_last_dtiT84H8
                                #define DEFt_last_dtiT84H8
inline s_SolvedNode& last_dtiT84H8(fu::view_mut<s_SolvedNode> s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static void mcom_node_nQQ0FVJp(s_SolvedNode& node, fu::view_mut<s_HelpersData> _helpers_data, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu::view<s_Helpers> _helpers, const s_Options& options, int& _notes)
{
    fu_STR k { node.kind };
    s_Type t { node.type };
    if (k == "block"_fu)
    {
        if (node.helpers)
            mcom_BlockReturns_CopyOrMoveDecision_6Mmh2zEC(node.helpers, _helpers_data, _current_fnort, module, _scope, ctx, _here, _helpers);

    };
    fu::view_mut<s_SolvedNode> items = node.items;
    for (int i = 0; i < items.size(); i++)
        mcom_node_nQQ0FVJp(items.mutref(i), _helpers_data, _current_fnort, module, _scope, ctx, _here, _helpers, options, _notes);

    _here = node.token;
    if (k == "call"_fu)
    {
        const s_Target& target = node.target;
        if (GET_pWzRaF0U(target, _scope, module, ctx).kind != "field"_fu)
        {
            fu_VEC<s_Argument> host_args { EXT_hGjgwR4E(target, module, _scope, ctx).args };
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_PCFPXhxT(items.mutref(i_1), host_args[i_1].type, true, false, _here, ctx, _helpers, _helpers_data, module, _current_fnort, _scope, options, _notes);

        };
    }
    else if ((k == "block"_fu) || (k == "jump"_fu))
    {
        const s_Helpers h { node.helpers };
        if (((void)void(), _helpers_data[h.index]).ret_actual && !is_void_zJCUz9W3(((void)void(), _helpers_data[h.index]).ret_actual) && !is_never_zJCUz9W3(((void)void(), _helpers_data[h.index]).ret_actual))
            maybeCopyOrMove_PCFPXhxT(last_dtiT84H8(node.items), ((void)void(), _helpers_data[h.index]).ret_actual, false, true, _here, ctx, _helpers, _helpers_data, module, _current_fnort, _scope, options, _notes);

    }
    else if (k == "letdef"_fu)
    {
        std::swap(GET_mut_lqSDNFDF(node.target, _scope, module).solved, node);
        mcom_node_nQQ0FVJp(node, _helpers_data, _current_fnort, module, _scope, ctx, _here, _helpers, options, _notes);
        std::swap(GET_mut_lqSDNFDF(node.target, _scope, module).solved, node);
    }
    else if (k == "let"_fu)
    {
        if (node.items)
        {
            s_SolvedNode& init = node.items.mutref(LET_INIT);
            if (init)
                maybeCopyOrMove_PCFPXhxT(init, s_Type(node.type), false, false, _here, ctx, _helpers, _helpers_data, module, _current_fnort, _scope, options, _notes);

        };
    }
    else if (k == "if"_fu)
    {
        if (!is_void_zJCUz9W3(t))
        {
            maybeCopyOrMove_PCFPXhxT(items.mutref(1), t, false, false, _here, ctx, _helpers, _helpers_data, module, _current_fnort, _scope, options, _notes);
            maybeCopyOrMove_PCFPXhxT(items.mutref(2), t, false, false, _here, ctx, _helpers, _helpers_data, module, _current_fnort, _scope, options, _notes);
        };
    }
    else if (k == "or"_fu)
    {
        if (!(t == t_bool))
        {
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_PCFPXhxT(items.mutref(i_1), t, false, false, _here, ctx, _helpers, _helpers_data, module, _current_fnort, _scope, options, _notes);

        };
    }
    else if (k == "arrlit"_fu)
    {
        s_Type t_1 = clear_sliceable_zJCUz9W3(t, _here, ctx);
        for (int i_1 = 0; i_1 < items.size(); i_1++)
            maybeCopyOrMove_PCFPXhxT(items.mutref(i_1), t_1, false, false, _here, ctx, _helpers, _helpers_data, module, _current_fnort, _scope, options, _notes);

    };
}

static void runAllPasses_rpqNGiUY(s_SolvedNode& node, s_TokenIdx& _here, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    if (SELF_TEST)
        test_node_zhOHu6Rv(node, "PASS.0 "_fu, _here, module, ctx, _scope);

    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType_NmbfUOia(node, node.type, RELAX_before_bck, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    if (SELF_TEST)
        test_node_zhOHu6Rv(node, "PASS.0.relax "_fu, _here, module, ctx, _scope);

    PASS_borrowCheck_5mII17vJ(node, _current_fn, _scope, module, ctx, _here, _current_fnort, options, _helpers, _helpers_data, _notes);
    if (SELF_TEST)
        test_node_zhOHu6Rv(node, "PASS.1 "_fu, _here, module, ctx, _scope);

    mcom_node_nQQ0FVJp(node, _helpers_data, _current_fnort, module, _scope, ctx, _here, _helpers, options, _notes);
    if (SELF_TEST)
        test_node_zhOHu6Rv(node, "PASS.2 "_fu, _here, module, ctx, _scope);

    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType_NmbfUOia(node, node.type, RELAX_all, _scope, module, ctx, _current_fn, _warnings, _here, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    if (SELF_TEST)
        test_node_zhOHu6Rv(node, "PASS.2.relax "_fu, _here, module, ctx, _scope);

}

static s_SolvedNode solveBlock_2VZylqU6(const fu_VEC<s_SolvedNode>& items, const int helpers_idx, const bool expr, const short mask, const int fnbody_of, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_Helpers& h = _helpers[helpers_idx];
    if (!short((mask & HM_CanReturn)))
        ((void)void(), _helpers_data.mutref(h.index)).ret_expect = s_Type{};

    if (expr && items && !is_never_zJCUz9W3(last_cCrdPZ3P(items).type))
        createJump_NoogGtYZ(last_cCrdPZ3P(items), h, _here, ctx, _helpers_data, _current_fnort, module, _scope, _helpers);


    {
        if (is_never_zJCUz9W3(if_last_cCrdPZ3P(items).type))
        {
            if (!((void)void(), _helpers_data[h.index]).ret_actual)
                reportReturnType_dvQfvbXf(h, t_never, _helpers_data, _here, ctx, module, _helpers, _scope);

        }
        else if (fnbody_of)
        {
            if (((void)void(), _helpers_data[h.index]).ret_actual)
            {
                if (!(isAssignable_yRJeU5dj(t_void, ((void)void(), _helpers_data[h.index]).ret_actual)))
                    fail_1X59Y46x("Non-void returning fn missing a final return."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

            };
        };
        if (!((void)void(), _helpers_data[h.index]).ret_actual)
            reportReturnType_dvQfvbXf(h, t_void, _helpers_data, _here, ctx, module, _helpers, _scope);

    };
    const s_Type* _0;
    /*MOV*/ s_SolvedNode block = createBlock_zloQ2DK8((*(_0 = &(((void)void(), _helpers_data[h.index]).ret_actual)) ? *_0 : BUG_patsWWTe(fu_STR{}, _here, ctx)), fu_VEC<s_SolvedNode>(items), h, _here, _helpers, _helpers_data);
    if (fnbody_of)
    {
        const unsigned status = GET_pWzRaF0U(s_Target { int(module.modid), int(fnbody_of) }, _scope, module, ctx).status;
        if (!(status & SS_DIRTY) && !currentFn_mustBecomeInline_fPOO6tIf(_current_fn))
            runAllPasses_rpqNGiUY(block, _here, module, ctx, _scope, _current_fn, _warnings, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    };
    return /*NRVO*/ block;
}

static s_SolvedNode solveBlock_eBBvZxr1(const s_Node& node, const s_Type& type, const int fnbody_of, const short mask, const int kills, const fu_STR& id, const int locals_start, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Target& _current_fnort, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu_VEC<s_Node> nodes = ((node.kind == "block"_fu) ? fu_VEC<s_Node>(node.items) : fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(node) } });
    const fu_STR& id_1 = (id ? id : ((node.kind == "block"_fu) ? node.value : (*(const fu_STR*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap_xL8BbLPe(_scope, _helpers);
    fu_DEFER(Scope_pop_GvGeMzm4(_scope, scope0, _helpers));
    const int helpers_idx = _helpers.size();
    push_smTlTOYR(s_HelpersData { (fnbody_of ? s_Target { int(module.modid), int(fnbody_of) } : s_Target{}), fu_STR(id_1), short(mask), int((fnbody_of ? fnbody_of : _current_fn.out.target.index)), int(kills), (fnbody_of ? +1 : (locals_start ? int(locals_start) : GET_next_local_index_k5ok1B4G(_current_fnort, _current_fn, _scope))), s_Type(type), s_Type{} }, _helpers, _helpers_data);
    const bool expr = (!fnbody_of && !is_void_zJCUz9W3(type));
    fu_VEC<s_SolvedNode> items = solveNodes_llR9thfD(nodes, t_void, type, expr, (helpers_idx + 1), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    return solveBlock_2VZylqU6(items, helpers_idx, expr, mask, fnbody_of, _helpers, _helpers_data, _here, ctx, _current_fnort, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
}

static void lazySolveEnd_7UxqRdjt(const s_Target& t, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, const s_Options& options, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, int& _notes, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    s_Overload& o = GET_mut_lqSDNFDF(t, _scope, module);
    fu_VEC<int> reopen {};
    const int parent = EXT_hGjgwR4E(t, module, _scope, ctx).local_of;
    if (o.status & SS_UPDATED)
    {
        o.status &= ~SS_UPDATED;
        fu_VEC<int> callers { EXT_hGjgwR4E(t, module, _scope, ctx).callers };
        for (int i = 0; i < callers.size(); i++)
        { {
            int index = callers[i];
            for (; ; )
            {
                const s_Target t_1 = s_Target { int(module.modid), int(index) };
                s_Overload& o_1 = GET_mut_lqSDNFDF(t_1, _scope, module);
                if ((o_1.status & (SS_DID_START | SS_DIRTY)) != SS_DID_START)
                    goto BL_3;

                if (!(o_1.status & SS_FINALIZED))
                {
                    o_1.status |= SS_DIRTY;
                    goto BL_3;
                };
                const int up = EXT_hGjgwR4E(t_1, module, _scope, ctx).local_of;
                if (up != parent)
                {
                    if (!(up > parent))
                        BUG_patsWWTe("lazySolveEnd: about to climb up the wrong tree."_fu, _here, ctx);

                    index = up;
                    continue;
                };
                makeNote_1zG3Fhlo(((o_1.kind == "type"_fu) ? N_TypeReopen : N_FnReopen), options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                o_1.status &= ~((SS_DID_START | SS_DIRTY) | SS_FINALIZED);
                reopen += int(index);
                goto BL_3;
            };
          } BL_3:;
        };
    };
    s_Overload& o_1 = GET_mut_lqSDNFDF(t, _scope, module);
    if (!(o_1.status & SS_DIRTY))
        o_1.status |= SS_FINALIZED;
    else
    {
        if (o_1.status & SS_FINALIZED)
            BUG_patsWWTe("Stray SS_FINALIZED."_fu, _here, ctx);

        o_1.status &= ~(SS_DID_START | SS_DIRTY);
        makeNote_1zG3Fhlo(((o_1.kind == "type"_fu) ? N_TypeResolve : N_FnResolve), options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t_1 = s_Target { int(module.modid), int(reopen[i]) };
        lazySolveStart_2KG8rFWC(t_1, s_Overload(GET_pWzRaF0U(t_1, _scope, module, ctx)), _scope, module, _here, ctx, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    };
}

static s_Target doTrySpecialize_U9Z0yXFm(const s_Target& into, const s_Target& overloadIdx, fu::view<s_SolvedNode> args_in, fu_STR&& mangle, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Map_FNvBVj2X& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
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
            args.mutref(i) = GET_pWzRaF0U(last_fnMFgrK3(c), _scope, module, ctx).type;

    };
    if (REST_TYPE)
        args.mutref(REST_START) = REST_TYPE;

    const s_Target SPECFAIL_RentrySafety = s_Target { 2147483647, 0 };
    fu_STR mangle00 { mangle };
    const s_Target& original = (overloadIdx ? overloadIdx : into ? into : BUG_patsWWTe(fu_STR{}, _here, ctx));
    s_Template tEmplate { EXT_hGjgwR4E(original, module, _scope, ctx).tEmplate };
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    _here = EXT_hGjgwR4E(original, module, _scope, ctx).tEmplate.node.token;
    int parent_idx = EXT_hGjgwR4E(original, module, _scope, ctx).local_of;
    for (int i_1 = 0; i_1 < args.size(); i_1++)
    {
        const s_Type& arg_t = args[i_1];
        if (type_isAddrOfFn_zJCUz9W3(arg_t))
            unpackAddrOfFn_jBUTgwxr(arg_t.vtype.canon, module, _scope, ctx, parent_idx);

    };
    const bool isInline = !!(tEmplate.node.flags & F_INLINE);
    if (!into && !isInline)
        setSpec_W9qt07qP(mangle, SPECFAIL_RentrySafety, true, isInline, _here, ctx, _specs, _scope, module);

    /*MOV*/ s_Target target {};

    {
        const s_ScopeMemo scope0 = Scope_snap_xL8BbLPe(_scope, _helpers);
        s_ScopeSkipMemos ss0 { _ss };
        const int helpers_data0 = _helpers_data.size();
        fu_DEFER(
        {
            Scope_pop_GvGeMzm4(_scope, scope0, _helpers);
            _ss = ss0;
            _helpers_data.shrink(helpers_data0);
        });
        ScopeSkip_setup_9AeV5A2A(tEmplate, scope0, bool{}, _root_scope, _ss, _here, ctx, _current_fn, _scope);
        fu_VEC<s_Node> items { tEmplate.node.items };
        s_Node& n_fn = tEmplate.node;
        if (!(n_fn.kind == "fn"_fu))
            BUG_patsWWTe("n_fn not a `fn`."_fu, _here, ctx);

        fu_STR error {};
        bool remangle = false;
        s_Map_mUYWjxvp typeParams {};
        if (!into)
        {
            fu::view<char> kind = tEmplate.node.kind;
            const int numArgs = ((kind == "fn"_fu) ? (items.size() + FN_ARGS_BACK) : fail_1X59Y46x(("TODO numArgs for template:"_fu + kind), _here, ctx, _helpers, _helpers_data, _scope, module));
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
                    if (couldRetype_rqZdIMW7(inValue))
                    {
                        const s_Type& paramType = ((annot.kind == "typeparam"_fu) ? ref_jNZ3TSp2(typeParams, annot.value).matched : ((annot.kind == "call"_fu) && !annot.items ? Scope_lookupType_xhvMEt8C(annot, _here, ctx, _helpers, _helpers_data, _scope, module, _ss) : (*(const s_Type*)fu::NIL)));
                        if (paramType)
                        {
                            s_Type retype = tryRetyping_Um0Yg81P(inValue, paramType, _here, ctx, _helpers, _helpers_data, _scope, module);
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
                        const s_Type& exactType = EXT_hGjgwR4E(original, module, _scope, ctx).args[i_2].type;
                        if (exactType)
                        {
                            args.mutref(i_2) = exactType;
                            continue;
                        };
                        const fu_STR& argName = (argNode.value ? argNode.value : BUG_patsWWTe(fu_STR{}, _here, ctx));
                        s_TypeParam& argName_typeParam = ref_jNZ3TSp2(typeParams, argName);
                        inType = add_ref_EgWfyCPW(s_Type(inType), Lifetime_temporary_8nlJDPX0(), _here, ctx);
                        (!argName_typeParam ? argName_typeParam : fail_1X59Y46x((("Type param name collision with argument "_fu + qID_HIwg52Ja(argName)) + "."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)).matched = inType;
                        if (annot)
                        {
                            const bool argOk = trySolveTypeParams_AjGYzb4a(annot, s_Type(inType), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);
                            if (!error && !argOk)
                                error = ((("Cannot solve argument "_fu + qID_HIwg52Ja(argName)) + " pattern for "_fu) + humanizeType_nkNrw01H(inType, module, ctx));

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
                mangle = (fu::slice(mangle, 0, start) + mangleArguments_GUqTHDp6(args, _here, ctx));
                if (mangle00 != mangle)
                {
                    /*MOV*/ const s_Target preexisting { get_uXcAbnMV(_specs, mangle) };
                    if (preexisting)
                    {
                        setSpec_W9qt07qP(mangle00, preexisting, bool{}, isInline, _here, ctx, _specs, _scope, module);
                        return /*NRVO*/ preexisting;
                    };
                    if (!into)
                        setSpec_W9qt07qP(mangle, SPECFAIL_RentrySafety, true, isInline, _here, ctx, _specs, _scope, module);

                };
            };
            if (error)
                return SPECFAIL_VTokR948(error, _spec_errors, SPECFAIL_RentrySafety, mangle00, isInline, _here, ctx, _specs, _scope, module, mangle);

            const s_Node* _2;
            const s_Node& body = (*(_2 = &(items[(items.size() + FN_BODY_BACK)])) ? *_2 : BUG_patsWWTe(fu_STR{}, _here, ctx));
            if (body.kind == "pattern"_fu)
            {
                s_Map_mUYWjxvp undo { typeParams };
                fu_VEC<s_Node> branches { body.items };
                bool did_match = false;
                for (int i_2 = 0; i_2 < branches.size(); i_2++)
                {
                    const s_Node& cond = branches[i_2].items[0];
                    if (cond && !evalTypePattern_OExrTXiF(cond, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string))
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
                        sig.mutref((sig.size() + FN_BODY_BACK)) = (n_body ? n_body : BUG_patsWWTe("doTrySpec: no case/body."_fu, _here, ctx));
                    };
                    did_match = true;
                    break;
                };
                if (!did_match)
                    return SPECFAIL_VTokR948("No body pattern matched."_fu, _spec_errors, SPECFAIL_RentrySafety, mangle00, isInline, _here, ctx, _specs, _scope, module, mangle);

            };
            const s_Node& n_body = n_fn.items[(n_fn.items.size() + FN_BODY_BACK)];
            if (isNativeBody_f7SekL2g(n_body))
            {
                for (int i_2 = 0; i_2 < numArgs; i_2++)
                {
                    const s_Node* _3;
                    const s_Node& argNode = (*(_3 = &(items[i_2])) ? *_3 : BUG_patsWWTe(fu_STR{}, _here, ctx));
                    fu::view<char> id = argNode.value;
                    if_ref_vgnDtdao(typeParams, id);
                };
            };
        };
        fu_STR mangle0 { mangle };
        target = (into ? s_Target(into) : Scope_create_ogkrG8By(_scope, "_no_kind_yet_"_fu, (*(const fu_STR*)fu::NIL), (*(const s_Type*)fu::NIL), 0, (SS_DID_START | SS_LAZY), 0, module));
        EXT_mut_neoUwv0o(target, module, _scope).local_of = parent_idx;
        fu_VEC<s_ScopeItem> extra_items { (into ? EXT_hGjgwR4E(original, module, _scope, ctx).extra_items : (EXT_mut_neoUwv0o(target, module, _scope).extra_items = intoScopeItems_kBY2JzJR(typeParams, module, ctx, _scope))) };
        if (!_current_fn_or_type)
            _anons = 0;

        const s_Target current_fn_or_type0 { _current_fn_or_type };
        fu_DEFER(_current_fn_or_type = current_fn_or_type0);
        _current_fn_or_type = target;
        const s_Target& _current_fnort_1 = target;

        {
            s_Extended& o = EXT_mut_neoUwv0o(target, module, _scope);
            if (o.revision++ > 0)
            {
                o.locals.clear();
                if (_warnings.size() > target.index)
                    _warnings.mutref(target.index) = s_Warning{};

            };
        };
        fu_VEC<s_SolvedNode> TODO_FIX_convert_args0 { TODO_FIX_convert_args };
        TODO_FIX_convert_args.mutref(0) = SolvedNode_AK4GvqCq("__convert"_fu, s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
        fu_DEFER(TODO_FIX_convert_args = TODO_FIX_convert_args0);
        s_CurrentFn out = s_CurrentFn { solved_KVUVmvqw(n_fn, X_addrofTarget_OPGCV9Jh(target), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, _here), s_ScopeMemo(scope0), s_Flow{}, s_Effects{}, s_Events{}, 0, fu_VEC<s_Type>{} };
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
        outItems_K3hQg5lU(_current_fn).resize(inItems.size());
        _scope.items += extra_items;
        const bool isFirst = !GET_pWzRaF0U(target, _scope, module, ctx).solved;
        const int isTemplate = (tEmplate.node.flags & F_TEMPLATE);
        const bool isSpec = (isTemplate && (!into || !isFirst));
        const bool isUnspec = (isTemplate && !isSpec);
        const int isPure = (tEmplate.node.flags & F_PURE);
        const int isNovec = (tEmplate.node.flags & F_NOVEC);
        const int isPureCtx = (tEmplate.node.flags & F_PURE_CTX);
        const int isNoFlow = (tEmplate.node.flags & F_NOFLOW);
        for (int i_2 = 0; i_2 < (inItems.size() + FN_ARGS_BACK); i_2++)
        {
            const s_Node& n_arg = inItems[i_2];
            if (isUnspec && ((n_arg.flags & F_TEMPLATE) || !n_arg.items[LET_TYPE]))
            {
                outItems_K3hQg5lU(_current_fn).mutref(i_2) = SolvedNode_AK4GvqCq("let"_fu, s_Type{}, n_arg.flags, n_arg.value, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, (n_arg.items[LET_INIT] ? SolvedNode_AK4GvqCq("__defarg"_fu, (*(const s_Type*)fu::NIL), 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here) : s_SolvedNode{}) } }, s_Target{}, s_Helpers{}, _here);
                continue;
            };
            s_Type specType = (isSpec ? tryGetArgSpecType_c0XLyJnh(n_arg.value, extra_items, _scope, module, ctx, _here, _helpers, _helpers_data) : s_Type{});
            s_SolvedNode arg = solveLet_RtOR64Sn(n_arg, specType, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort_1, t_string);
            outItems_K3hQg5lU(_current_fn).mutref(i_2) = arg;
        };
        const s_Node& n_ret = (!isUnspec ? inItems[(inItems.size() + FN_RET_BACK)] : (*(const s_Node*)fu::NIL));
        const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
        if (!(n_body))
            BUG_patsWWTe("solveFn: no body."_fu, _here, ctx);

        const bool isNative = isNativeBody_f7SekL2g(n_body);
        if (!isNative && !isUnspec)
        {
            if (!(n_body.kind == "block"_fu))
                BUG_patsWWTe((("solveFn: Body not a block: `"_fu + n_body.kind) + "`."_fu), _here, ctx);

        };
        s_Type ret_expect = (n_ret ? evalTypeAnnot_nHP0Ok9t(n_ret, (*(const s_Map_mUYWjxvp*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort_1, t_string) : s_Type{});
        s_Type ret_seed { (n_ret ? (ret_expect ? ret_expect : BUG_patsWWTe(("falsy ret_expect: "_fu + n_fn.value), _here, ctx)) : t_never) };
        if (ret_seed.lifetime)
            ret_seed.lifetime = (isNative ? Lifetime_fromNative_ZLjxQBNJ(inItems, fu::get_view(_current_fn.out.items, 0, (_current_fn.out.items.size() + FN_ARGS_BACK)), ret_seed, _here, ctx, _helpers, _helpers_data, _scope, module) : Lifetime_static_8nlJDPX0());

        if (isFirst)
        {
            updateScope_Oep1NfPH(_current_fn, s_Type((isInline ? ret_expect : ret_seed)), false, target, _scope, module, ctx, isNative, _here, isUnspec, isPure, _current_fnort_1, _helpers, _helpers_data, isPureCtx, isNovec, isInline, _current_fn);

            {
                fu_STR name { (n_fn.value ? n_fn.value : fail_1X59Y46x("TODO anonymous fns"_fu, _here, ctx, _helpers, _helpers_data, _scope, module)) };
                fu_STR sighash {};
                if (!isNative && !isInline && !isUnspec)
                {
                    const int sourceModid = tEmplate.node.token.modid;
                    fu_STR shortModuleName_1 = ((sourceModid != module.modid) ? (sourceModid && module.modid ? getShortModuleName_bB04eegu(ctx.modules[sourceModid].fname) : fu_STR{}) : fu_STR(shortModuleName));
                    fu_STR sig = (((EXT_hGjgwR4E(target, module, _scope, ctx).local_of ? fu::i64dec(target.index) : fu_STR{}) + shortModuleName_1) + mangleArguments_KLKU0IZr(EXT_hGjgwR4E(target, module, _scope, ctx).args, _here, ctx));
                    if (sig)
                    {
                        fu_STR _4 {};
                        sighash = ((_4 = hash62_HxcQaXaI(sig, 11)) ? static_cast<fu_STR&&>(_4) : BUG_patsWWTe(fu_STR{}, _here, ctx));
                        if (!((n_fn.flags & F_EXTERN) || ((n_fn.flags & F_OPERATOR) && hasOperator_YqscxHlw(name))))
                        {
                            name += '_';
                            name += fu::get_view(sighash, 0, 8);
                            sighash = fu_STR{};
                        };
                    };
                };
                s_Overload& overload = GET_mut_lqSDNFDF(target, _scope, module);
                fu_STR _5 {};
                overload.name = ((_5 = HACK_nativeNameParts_EfxQrhZt(isNative, n_body)) ? static_cast<fu_STR&&>(_5) : name ? fu_STR(name) : BUG_patsWWTe(fu_STR{}, _here, ctx));
                overload.sighash = sighash;
                overload.kind = (isUnspec ? "template"_fu : (isNative ? "__native"_fu : (isInline ? "inline"_fu : "fn"_fu)));
                s_Extended& ext = EXT_mut_neoUwv0o(target, module, _scope);
                ext.tEmplate = tEmplate;
                ext.spec_of = overloadIdx;
            };
            if (!into && !isInline)
            {
                int _6 {};
                const int start = ((_6 = (find_3yRdKyg4(mangle0, ' ') + 1)) ? _6 : BUG_patsWWTe(fu_STR{}, _here, ctx));
                mangle = (fu::slice(mangle0, 0, start) + mangleArguments_KLKU0IZr(EXT_hGjgwR4E(target, module, _scope, ctx).args, _here, ctx));
                /*MOV*/ s_Target preexisting {};
                const bool nx0 = (mangle0 != mangle);
                if (nx0)
                {
                    preexisting = get_uXcAbnMV(_specs, mangle);
                    setSpec_W9qt07qP(mangle0, (preexisting ? preexisting : target), bool{}, isInline, _here, ctx, _specs, _scope, module);
                };
                const bool nx00 = (mangle00 != mangle);
                if (nx00 && (mangle00 != mangle0))
                    setSpec_W9qt07qP(mangle00, (preexisting ? preexisting : target), bool{}, isInline, _here, ctx, _specs, _scope, module);

                if (preexisting)
                    return /*NRVO*/ preexisting;

                setSpec_W9qt07qP(mangle, target, (nx0 ? nx00 : (*(const bool*)fu::NIL)), isInline, _here, ctx, _specs, _scope, module);
            };
        };
        bool didSetBody = false;

        { {
            if (!isInline && !isUnspec)
            {
                s_Type retval { ret_seed };
                if (!isNative)
                {
                    s_SolvedNode s_body = solveBlock_eBBvZxr1(n_body, ret_expect, target.index, short(short((short((short((HM_Function | HM_CanReturn)) | HM_LabelUsed)) | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL))))), 0, n_fn.value, 0, _scope, _helpers, module, _current_fn, _current_fnort_1, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
                    fu_STR mustBecomeInlineBecause = currentFn_mustBecomeInline_fPOO6tIf(_current_fn);
                    if (mustBecomeInlineBecause)
                    {
                        if (!(isFirst))
                            fail_1X59Y46x("Function wants to become inline on after first solve."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

                        if (isNoFlow)
                            fail_1X59Y46x(("Function is not noflow: "_fu + qBAD_HIwg52Ja(mustBecomeInlineBecause)), _here, ctx, _helpers, _helpers_data, _scope, module);

                        s_Overload& o = GET_mut_lqSDNFDF(target, _scope, module);
                        o.kind = "inline"_fu;
                        o.type = ret_expect;
                        goto BL_72;
                    };
                    const s_HelpersData* BL_78_v;
                    retval = (__extension__ (
                    {
                        const s_Helpers& h = s_body.helpers;
                        BL_78_v = &(_helpers_data[h.index]);
                    (void)0;}), *BL_78_v).ret_actual;
                    checkAssignable_b4W6xpY2(retval, s_body.type, "reval after runAllPasses"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, module, _helpers, _helpers_data, _scope);
                    const int idx_body = (outItems_K3hQg5lU(_current_fn).size() + FN_BODY_BACK);
                    outItems_K3hQg5lU(_current_fn).mutref(idx_body) = (s_body ? s_body : BUG_patsWWTe("falsy body"_fu, _here, ctx));
                    didSetBody = true;
                };
                updateScope_Oep1NfPH(_current_fn, s_Type(retval), true, target, _scope, module, ctx, isNative, _here, isUnspec, isPure, _current_fnort_1, _helpers, _helpers_data, isPureCtx, isNovec, isInline, _current_fn);
            };
          } BL_72:;
        };
        if (!didSetBody)
        {
            const s_Overload& o = GET_pWzRaF0U(target, _scope, module, ctx);
            if (!(o.kind != "fn"_fu))
                BUG_patsWWTe(((("did not set body on "_fu + qWHAT_RTL9wrOX(o, module, _scope, ctx)) + ": "_fu) + humanizeType_nkNrw01H(o.type, module, ctx)), _here, ctx);

        };
    };
    lazySolveEnd_7UxqRdjt(target, _scope, module, ctx, _here, options, _helpers, _helpers_data, _notes, _specs, _ss, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, shortModuleName, _field_items, _current_fnort, t_string);
    return /*NRVO*/ target;
}

static bool lazySolveStart_2KG8rFWC(const s_Target& target, const s_Overload& overload, s_Scope& _scope, s_Module& module, s_TokenIdx& _here, const s_Context& ctx, s_Map_FNvBVj2X& _specs, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    if ((overload.status & (SS_DID_START | SS_LAZY)) != SS_LAZY)
        return false;


    {
        s_Overload& o = GET_mut_lqSDNFDF(target, _scope, module);
        if (o.status & ((SS_FINALIZED | SS_DID_START) | SS_DIRTY))
            BUG_patsWWTe(x7E("SS_DID_START: non-zero solver status: "_fu, fu::u64dec(overload.status)), _here, ctx);

        o.status |= SS_DID_START;
        if (o.kind == "fn"_fu)
            doTrySpecialize_U9Z0yXFm(target, s_Target{}, fu::view<s_SolvedNode>{}, fu_STR{}, fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, 0, (*(const s_Type*)fu::NIL), _scope, module, ctx, _here, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
        else if (o.kind == "type"_fu)
            __solveStruct_cu2RbRgF(true, s_Node(EXT_hGjgwR4E(target, module, _scope, ctx).tEmplate.node), target, _current_fn, _scope, module, ctx, _helpers, _ss, _here, _current_fn_or_type, _helpers_data, _warnings, _specs, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        else
            BUG_patsWWTe((("lazySolveStart: kind is `"_fu + o.kind) + "`."_fu), _here, ctx);

    };
    return true;
}

static fu_STR str_3BFbHLow(const int min, const int max)
{
    return ((min != max) ? (x7E((x7E("["_fu, fu::i64dec(min)) + ", "_fu), fu::i64dec(max)) + "]"_fu) : fu::i64dec(min));
}

static void reorderByNumUsings_LheF3QcD(bool& use_reorder, fu_VEC<int>& reorder, fu::view<s_Argument> host_args, const int num_args, const int num_usings)
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

static bool reorderByArgIDs_uLVSO6BF(bool& use_reorder, fu_VEC<int>& reorder, fu::view<fu_STR> names, s_BitSet&& optional, fu::view<s_Argument> host_args, const int num_usings)
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
            rem_PCSel0xp(optional, i);
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
        if ((used + popcount_jPdA3jy1(optional)) != names.size())
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

static int findRestStart_xqki5EuP(const s_Extended& ext)
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

static void foreach_zbWomr3E(const s_Target& t, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const bool nullary, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_TokenIdx& _here, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_FNvBVj2X& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
{
    s_Type arg0type0 { TODO_FIX_convert_args[0].type };
    if (!nullary)
    {
        const int here = _current_fn.out.target.index;
        if (here && (t.index > here) && (t.modid == module.modid) && (EXT_hGjgwR4E(t, module, _scope, ctx).local_of != here))
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
    if (nullary || (candidate = tryMatch__mutargs_9RPoFoMP(fu_STR{}, TODO_FIX_reorder, TODO_FIX_conversions, error, bool{}, (*(const s_Scope*)fu::NIL), fu_VEC<s_SolvedNode>(TODO_FIX_convert_args), F_CONVERSION, t, _here, ctx, _scope, _ss, module, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort, t_string)))
    {
        const s_Target& t_1 = (nullary ? t : candidate);
        const s_Overload& convert = GET_pWzRaF0U(t_1, _scope, module, ctx);
        if (!(convert.type))
            fail_1X59Y46x((("No convert.type, perhaps a `using inline fn` without a return type annotation: `"_fu + qWHAT_RTL9wrOX(convert, module, _scope, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        s_Type convertType = ((convert.kind == "field"_fu) ? add_refs_yRJeU5dj((from ? from : BUG_patsWWTe(fu_STR{}, _here, ctx)), s_Type(convert.type)) : s_Type(convert.type));
        const bool isStruct = isStruct_usAEukhR(convertType);
        if ((convert.status & (SS_DID_START | SS_FINALIZED)) == SS_DID_START)
        {
        }
        else if (isAssignableAsArgument_yRJeU5dj(expect, convertType))
        {
            if (match)
            {
                fu_STR suffix = (((("\n\t\t"_fu + explainConversion_oOVZszdh(match, _scope, module, ctx)) + "\n\tand:"_fu) + "\n\t\t"_fu) + explainConversion_oOVZszdh((path + t_1), _scope, module, ctx));
                if (actual)
                    fail_1X59Y46x(((((("Conversion ambiguity, multiple ways to convert `"_fu + humanizeType_nkNrw01H(actual, module, ctx)) + "` into `"_fu) + humanizeType_nkNrw01H(expect, module, ctx)) + "`: "_fu) + suffix), _here, ctx, _helpers, _helpers_data, _scope, module);
                else
                    fail_1X59Y46x(((("`using` ambiguity, multiple ways to obtain a `"_fu + humanizeType_nkNrw01H(expect, module, ctx)) + "` in this scope: "_fu) + suffix), _here, ctx, _helpers, _helpers_data, _scope, module);

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
                                const s_Overload& convert_1 = GET_pWzRaF0U(path[i_1], _scope, module, ctx);
                                err += (((qWHAT_RTL9wrOX(convert_1, module, _scope, ctx) + ": "_fu) + humanizeType_nkNrw01H(convertType, module, ctx)) + " ->"_fu);
                            };
                            err += ("\n\t        "_fu + qWHAT_RTL9wrOX(convert, module, _scope, ctx));
                            fail_1X59Y46x(fu_STR(err), _here, ctx, _helpers, _helpers_data, _scope, module);
                        };
                    };
                };
                path.push(s_Target(t_1));
                fu_DEFER(path.pop());
                descend_1jfMyvGw(convertType, false, isStruct, bool{}, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, _current_fn, module, ctx, retype, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _warnings, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, t_string, expect, match, path, actual, has_converts);
            };
        };
    };
}

                                #ifndef DEFt_each_esqImWfG
                                #define DEFt_each_esqImWfG
inline void each_esqImWfG(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const bool nullary, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_TokenIdx& _here, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_FNvBVj2X& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
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
            foreach_zbWomr3E(u, TODO_FIX_convert_args, nullary, _current_fn, module, _scope, ctx, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _warnings, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);
        };
        i0 = ss.end;
    };
}
                                #endif

                                #ifndef DEFt_each_S5UFXod6
                                #define DEFt_each_S5UFXod6
inline void each_S5UFXod6(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const bool nullary, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_TokenIdx& _here, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_FNvBVj2X& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
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
            foreach_zbWomr3E(items[i_1], TODO_FIX_convert_args, nullary, _current_fn, module, _scope, ctx, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _warnings, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

        i0 = ss.end;
    };
}
                                #endif

static void descend_1jfMyvGw(const s_Type& from, const bool nullary, const bool isStruct, const bool root, const bool local_scope, s_Scope& _scope, const s_Scope& misc_scope, s_ScopeSkipMemos& _ss, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_CurrentFn& _current_fn, s_Module& module, const s_Context& ctx, const s_SolvedNode& retype, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, s_TokenIdx& _here, fu_VEC<s_ScopeItem>& _field_items, s_Map_FNvBVj2X& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort, const s_Type& t_string, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const int has_converts)
{
    if (nullary)
        each_esqImWfG(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).usings), fu_VEC<s_ScopeSkip>((local_scope ? _ss.usings : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, TODO_FIX_convert_args, nullary, _current_fn, module, _scope, ctx, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _warnings, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);
    else
    {
        if (isStruct)
        {
            fu_VEC<s_Target> inner { lookupStruct_GBXUPXZt(from, module, ctx).converts };
            for (int i = 0; i < inner.size(); i++)
                foreach_zbWomr3E(s_Target(inner[i]), TODO_FIX_convert_args, nullary, _current_fn, module, _scope, ctx, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _warnings, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

        };
        if (has_converts)
            each_S5UFXod6(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).converts), fu_VEC<s_ScopeSkip>((local_scope ? _ss.converts : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, TODO_FIX_convert_args, nullary, _current_fn, module, _scope, ctx, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _ss, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _warnings, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, t_string, expect, match, path, actual, local_scope, misc_scope, has_converts);

    };
}

static fu_VEC<s_Target> tryConvert_vTitLEL7(const s_Type& expect, const s_Type& actual, const s_SolvedNode& retype, const bool local_scope, const s_Scope& misc_scope, s_Scope& _scope, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, s_CurrentFn& _current_fn, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_ScopeItem>& _field_items, s_Map_FNvBVj2X& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_Target> match {};
    fu_VEC<s_Target> path {};
    const int has_converts = (local_scope ? _scope : misc_scope).converts.size();
    s_SolvedNode arg0 { TODO_FIX_convert_args[0] };
    fu_VEC<int> TODO_FIX_reorder {};
    fu_VEC<fu_VEC<s_Target>> TODO_FIX_conversions {};
    descend_1jfMyvGw(actual, !actual, isStruct_usAEukhR(actual), true, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, _current_fn, module, ctx, retype, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _here, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _warnings, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, t_string, expect, match, path, actual, has_converts);
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

static fu_STR qWHAT_5zpgsRT3(const s_Argument& arg, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return (qKW_HIwg52Ja("arg"_fu) + " "_fu) + qID_HIwg52Ja(human_7SdJ5Hgt(arg.name, module, _scope, ctx));
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

static s_Type solveArrlit_itemType_init_1NKPFBp0(const s_Type& head, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Type _0 {};
    return (_0 = clear_refs_zJCUz9W3(s_Type(head))) ? static_cast<s_Type&&>(_0) : BUG_patsWWTe(fu_STR{}, _here, ctx);
}

static s_Type solveArrlit_done_8nEAoJoK(const s_Type& itemType, const s_TokenIdx& _here, const s_Context& ctx)
{
    return createArray_zJCUz9W3(itemType, _here, ctx);
}

static s_Target GETfn_ZOU0OiRF(const int idx, const s_Module& module)
{
    return s_Target { int(module.modid), int(idx) };
}

static fu_STR fnName_yu3ZS2Rv(const int idx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return (idx ? (("`"_fu + GET_pWzRaF0U(GETfn_ZOU0OiRF(idx, module), _scope, module, ctx).name) + "`"_fu) : "global scope"_fu);
}

static void disambig_ZQUe63oZ(const s_Target& matchIdx, const s_Target& overloadIdx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_CurrentFn& _current_fn, fu::view<char> id, const s_TokenIdx& _here, fu::view<fu_VEC<s_Target>> conversions, fu::view<fu_VEC<s_Target>> conversions_1, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    if (matchIdx)
    {
        const s_Target& PREV = matchIdx;
        const s_Target& NEXT = overloadIdx;
        const int inner = localOf_oTWzaKhX(PREV, module, _scope, ctx);
        const int outer = localOf_oTWzaKhX(NEXT, module, _scope, ctx);
        const int callsite = _current_fn.out.target.index;
        if (SELF_TEST && (GET_pWzRaF0U(PREV, _scope, module, ctx).kind != "field"_fu))
        {
            int _c = callsite;
            while (_c > inner)
                _c = localOf_oTWzaKhX(GETfn_ZOU0OiRF(_c, module), module, _scope, ctx);

            if (!(_c == inner))
                BUG_patsWWTe(((((((("Leaking `"_fu + id) + "` between functions [inner/callsite]: "_fu) + fnName_yu3ZS2Rv(inner, module, _scope, ctx)) + "::"_fu) + qWHAT_RTL9wrOX(GET_pWzRaF0U(PREV, _scope, module, ctx), module, _scope, ctx)) + " is seen from "_fu) + fnName_yu3ZS2Rv(callsite, module, _scope, ctx)), _here, ctx);

            int _i = inner;
            while (_i > outer)
                _i = localOf_oTWzaKhX(GETfn_ZOU0OiRF(_i, module), module, _scope, ctx);

            if (!(_i == outer))
                BUG_patsWWTe(((((((((((("Leaking `"_fu + id) + "` between functions [inner/outer]: "_fu) + fnName_yu3ZS2Rv(inner, module, _scope, ctx)) + "::"_fu) + qWHAT_RTL9wrOX(GET_pWzRaF0U(PREV, _scope, module, ctx), module, _scope, ctx)) + " and "_fu) + fnName_yu3ZS2Rv(outer, module, _scope, ctx)) + "::"_fu) + qWHAT_RTL9wrOX(GET_pWzRaF0U(NEXT, _scope, module, ctx), module, _scope, ctx)) + " as seen from "_fu) + fnName_yu3ZS2Rv(callsite, module, _scope, ctx)), _here, ctx);

        };
        fail_1X59Y46x((((((((((((("Ambiguous callsite, matches multiple items in scope:"_fu + "\n\n\t"_fu) + explainWhichFn_VeQF0Ixi(PREV, conversions, _scope, module, ctx)) + " from "_fu) + fnName_yu3ZS2Rv(inner, module, _scope, ctx)) + " and "_fu) + "\n\n\t"_fu) + explainWhichFn_VeQF0Ixi(NEXT, conversions_1, _scope, module, ctx)) + " from "_fu) + fnName_yu3ZS2Rv(outer, module, _scope, ctx)) + ", as seen from "_fu) + fnName_yu3ZS2Rv(callsite, module, _scope, ctx)) + "."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
}

                                #ifndef DEFt_last_At5ZlGyz
                                #define DEFt_last_At5ZlGyz
inline const fu_STR& last_At5ZlGyz(fu::view<fu_STR> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_Target tryMatch__mutargs_9RPoFoMP(fu_STR&& id, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, fu_STR& error, const bool local_scope, const s_Scope& misc_scope, fu::view<s_SolvedNode> args, const int flags, const s_Target& target, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, s_ScopeSkipMemos& _ss, s_Module& module, fu_VEC<s_ScopeItem>& _field_items, s_Map_FNvBVj2X& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort, const s_Type& t_string)
{
    const int error_len0 = error.size();
    if (SELF_TEST)
    {
        for (int i = 0; i < args.size(); i++)
        {
            if (!args[i].kind)
                BUG_patsWWTe("Falsy arg.kind!"_fu, _here, ctx);

        };
    };
    /*MOV*/ s_Target matchIdx {};
    int minArity = args.size();
    const int numUsings = countUsings_J5CL8nv5(local_scope, _scope, misc_scope, _ss, _here, ctx);
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
            names.push(fu_STR(((arg.kind == "argid"_fu) ? (*(_0 = &(((void)(some = true), arg.value))) ? *_0 : BUG_patsWWTe(fu_STR{}, _here, ctx)) : (*(const fu_STR*)fu::NIL))));
            if (arg.flags & F_OPT_ARG)
            {
                minArity--;
                add_PCSel0xp(optional, i);
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
            each_75Z7PGDA((local_scope ? _scope : misc_scope).usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, _scope, module, ctx, seen, local_scope, _ss, id, extra_items);

        if (flags & ((F_ACCESS | F_METHOD) | F_OPERATOR))
        {
            for (int i = 0; i < args.size(); i++)
                visitTypeImports_RlOgDZHL(args[i].type, module, ctx, seen, _scope, local_scope, _ss, id, extra_items);

        };
    };
    fu_VEC<s_ScopeItem> field_items { (local_scope && ((flags & F_ACCESS) || !minArity) && (minArity <= 1) && maxArity ? _field_items : (*(const fu_VEC<s_ScopeItem>*)fu::NIL)) };
    fu_VEC<fu_STR> alternate_ids {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        bool shadows {};
        while ((overloadIdx = search_qV63L7fS((local_scope ? ((flags & F_IMPLICIT) ? _scope.implicits : _scope.items) : fu::get_view(misc_scope.items, 0, misc_scope.pub_items)), id, scope_iterator, (local_scope ? ((flags & F_IMPLICIT) ? _ss.implicits : _ss.items) : fu::view<s_ScopeSkip>{}), shadows, target, extra_items, field_items)))
        { {
            bool DEBUG_mustMatch = false;
            fu_VEC<fu_VEC<s_Target>> conversions_1 {};
            fu_VEC<int> reorder_1 {};
            bool TODO_FIX_skip_autocalls = false;
            while (true)
            {
                s_Overload overload { GET_pWzRaF0U(overloadIdx, _scope, module, ctx) };
                if (lazySolveStart_2KG8rFWC(overloadIdx, overload, _scope, module, _here, ctx, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string))
                    continue;

                fu_STR kind { overload.kind };
                const bool isType = (kind == "type"_fu);
                if (minArity && isType && !target)
                {
                    const fu_STR& alt = overload.type.vtype.canon;
                    if (alt != id)
                        alternate_ids.push(fu_STR(alt));

                };
                const s_Extended& arity = EXT_hGjgwR4E(overloadIdx, module, _scope, ctx);
                const bool isZeroInit = (isType && !explicitArity);
                if (!isZeroInit && ((arity.max < minArity) || (arity.min > maxArity)))
                {
                    if (DEBUG_mustMatch || error)
                    {
                        fu_STR err = ((qWHAT_RTL9wrOX(overload, module, _scope, ctx) + ": "_fu) + (((("Wrong number of arguments: expects "_fu + str_3BFbHLow(arity.min, arity.max)) + ", got "_fu) + str_3BFbHLow(minArity, maxArity)) + "."_fu));
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
                    reorderByNumUsings_LheF3QcD(use_reorder, reorder_1, host_args, args.size(), num_usings);
                else if (!reorderByArgIDs_uLVSO6BF(use_reorder, reorder_1, names, s_BitSet(optional), host_args, num_usings))
                {
                    if (DEBUG_mustMatch || error)
                    {
                        fu_STR err = ((qWHAT_RTL9wrOX(overload, module, _scope, ctx) + ": "_fu) + "Argument name mismatch [TODO REPORT]"_fu);
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
                        fu_STR err = ((qWHAT_RTL9wrOX(overload, module, _scope, ctx) + ": "_fu) + "Optional argument ambiguity, not all optional arguments provided, and not all callsite arguments used. Cannot distinguish from a typo. [TODO LIST MISSING ARGS]"_fu);
                        if (DEBUG_mustMatch)
                            BUG_patsWWTe(("mustMatch.matchFail: "_fu + err), _here, ctx);
                        else
                            error += ("\n\n\t"_fu + err);

                    };
                    goto BL_18;
                };
                s_Type REST_TYPE {};
                s_Type REST_EXPECT {};
                const int REST_START = findRestStart_xqki5EuP(arity);
                const int N = std::max((use_reorder ? reorder_1.size() : args.size()), (!isZeroInit ? arity.min : (*(const int*)fu::NIL)));
                if (REST_START < N)
                {
                    const s_Type& expect = host_args[REST_START].type;
                    if (expect)
                    {
                        s_Type _1 {};
                        REST_EXPECT = ((_1 = tryClear_sliceable_zJCUz9W3(expect)) ? static_cast<s_Type&&>(_1) : fail_1X59Y46x(((GET_pWzRaF0U(overloadIdx, _scope, module, ctx).name + ": Rest argument annotation is not an array: "_fu) + humanizeType_nkNrw01H(expect, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module));
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
                                    fu_VEC<s_Target> conversion = tryConvert_vTitLEL7(expect, (*(const s_Type*)fu::NIL), (*(const s_SolvedNode*)fu::NIL), local_scope, misc_scope, _scope, TODO_FIX_convert_args, _ss, _current_fn, module, ctx, _here, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _warnings, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, t_string);
                                    if (conversion)
                                    {
                                        grow_if_oob_5polWuqW(conversions_1, i) = conversion;
                                        continue;
                                    };
                                };
                            };
                            if (DEBUG_mustMatch || error)
                            {
                                fu_STR err = ((qWHAT_RTL9wrOX(overload, module, _scope, ctx) + ": "_fu) + ("Cannot infer missing argument "_fu + qWHAT_5zpgsRT3(host_arg, module, _scope, ctx)));
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
                                    fu_STR err = ((qWHAT_RTL9wrOX(overload, module, _scope, ctx) + ": "_fu) + ("Argument must be :explicitly named "_fu + qWHAT_5zpgsRT3(host_arg, module, _scope, ctx)));
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
                            fu_STR autocall_error = (error ? (((("Cannot match argument "_fu + qWHAT_5zpgsRT3(host_arg, module, _scope, ctx)) + " autocall "_fu) + qCODE_HIwg52Ja(host_arg.autocall)) + ": "_fu) : fu_STR{});
                            const s_Target t = tryMatch__mutargs_9RPoFoMP(fu_STR(host_arg.autocall), autocall_reorder, autocall_conversions, autocall_error, local_scope, misc_scope, autocall_args, 0, s_Target{}, _here, ctx, _scope, _ss, module, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort, t_string);
                            if (!t)
                            {
                                if (DEBUG_mustMatch || error)
                                {
                                    fu_STR err = ((qWHAT_RTL9wrOX(overload, module, _scope, ctx) + ": "_fu) + replace_2qp5gcGE(autocall_error, "\t"_fu, "\t\t"_fu));
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
                        s_Type actual { (hasConv ? GET_pWzRaF0U(last_fnMFgrK3(conversions_1[i]), _scope, module, ctx).type : args[callsiteIndex].type) };
                        if (!expect)
                        {
                            if ((host_arg.flags & F_REF) && !is_mutref_zJCUz9W3(actual, _here, ctx))
                            {
                                if (DEBUG_mustMatch || error)
                                {
                                    fu_STR err = ((qWHAT_RTL9wrOX(overload, module, _scope, ctx) + ": "_fu) + ((("Argument "_fu + qWHAT_5zpgsRT3(host_arg, module, _scope, ctx)) + " expects a mutref, got "_fu) + humanizeType_nkNrw01H(actual, module, ctx)));
                                    if (DEBUG_mustMatch)
                                        BUG_patsWWTe(("mustMatch.matchFail: "_fu + err), _here, ctx);
                                    else
                                        error += ("\n\n\t"_fu + err);

                                };
                                goto BL_18;
                            };
                            continue;
                        };
                        if (isAssignableAsArgument_yRJeU5dj(expect, (actual ? actual : BUG_patsWWTe("tryMatch: !actual"_fu, _here, ctx))))
                            continue;

                        if (!hasConv)
                        {
                            const s_SolvedNode& arg = args[callsiteIndex];
                            const s_SolvedNode& arg_1 = ((arg.kind == "argid"_fu) ? only_gF1gIgkM(arg.items) : arg);
                            s_Type retype = tryRetyping_Um0Yg81P(arg_1, expect, _here, ctx, _helpers, _helpers_data, _scope, module);
                            if (retype && isAssignableAsArgument_yRJeU5dj(expect, retype))
                                continue;

                        };
                        if (!(flags & F_CONVERSION))
                        {
                            fu_VEC<s_Target> conversion = tryConvert_vTitLEL7(expect, actual, (!hasConv ? args[callsiteIndex] : (*(const s_SolvedNode*)fu::NIL)), local_scope, misc_scope, _scope, TODO_FIX_convert_args, _ss, _current_fn, module, ctx, _here, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _warnings, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, t_string);
                            if (conversion)
                            {
                                grow_if_oob_5polWuqW(conversions_1, i) += conversion;
                                continue;
                            };
                        };
                        if (DEBUG_mustMatch || error)
                        {
                            fu_STR err = ((qWHAT_RTL9wrOX(overload, module, _scope, ctx) + ": "_fu) + ((((("Argument "_fu + qWHAT_5zpgsRT3(host_arg, module, _scope, ctx)) + " expects "_fu) + humanizeType_nkNrw01H(expect, module, ctx)) + ", got "_fu) + humanizeType_nkNrw01H(actual, module, ctx)));
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
                        const s_Type& actual = (hasConv ? GET_pWzRaF0U(last_fnMFgrK3(conversions_1[i]), _scope, module, ctx).type : args[callsiteIndex].type);
                        s_Type _3 {};
                        fu::never BL_80_v {};
                        REST_TYPE = ((i == REST_START) ? solveArrlit_itemType_init_1NKPFBp0(actual, _here, ctx) : ((_3 = type_trySuper_yRJeU5dj(REST_TYPE, actual)) ? static_cast<s_Type&&>(_3) : (__extension__ (
                        {
                            if (DEBUG_mustMatch || error)
                            {
                                fu_STR err = ((qWHAT_RTL9wrOX(overload, module, _scope, ctx) + ": "_fu) + ((("Rest arguments have no common supertype: "_fu + humanizeType_nkNrw01H(REST_TYPE, module, ctx)) + " <- "_fu) + humanizeType_nkNrw01H(actual, module, ctx)));
                                if (DEBUG_mustMatch)
                                    BUG_patsWWTe(("mustMatch.matchFail: "_fu + err), _here, ctx);
                                else
                                    error += ("\n\n\t"_fu + err);

                            };
                            goto BL_18;
                        (void)0;}), static_cast<fu::never&&>(BL_80_v))));
                    };
                    REST_TYPE = solveArrlit_done_8nEAoJoK(REST_TYPE, _here, ctx);
                };
                if (kind == "template"_fu)
                {
                    fu_STR cant_reuse {};
                    fu_STR& args_mangled = ((use_reorder || conversions_1) ? cant_reuse : reusable_mangle);
                    const s_Target specIdx = trySpecialize_VH570CZ3(overloadIdx, args, args_mangled, REST_START, REST_TYPE, reorder_1, use_reorder, conversions_1, _scope, module, ctx, _here, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
                    if (is_SPECFAIL_fPaHmQWG(specIdx))
                    {
                        if (DEBUG_mustMatch || error)
                        {
                            fu_STR err = ((qWHAT_RTL9wrOX(overload, module, _scope, ctx) + ": "_fu) + ("Could not specialize: "_fu + _spec_errors[specIdx.index]));
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
                disambig_ZQUe63oZ(matchIdx, overloadIdx, module, _scope, ctx, _current_fn, id, _here, conversions, conversions_1, _helpers, _helpers_data);
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

static s_Target match__mutargs_eP5JLbPu(const s_Scope& misc_scope, const bool local_scope, const fu_STR& id, fu::view<s_SolvedNode> args, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, const int flags, const s_Target& target, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, s_ScopeSkipMemos& _ss, s_Module& module, fu_VEC<s_ScopeItem>& _field_items, s_Map_FNvBVj2X& _specs, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort, const s_Type& t_string)
{
    fu_STR error {};
    /*MOV*/ const s_Target ret = tryMatch__mutargs_9RPoFoMP(fu_STR(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, _here, ctx, _scope, _ss, module, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort, t_string);
    if (ret)
        return /*NRVO*/ ret;

    error = (("Bad call to "_fu + qID_HIwg52Ja(id)) + ": "_fu);
    const s_Target debug = tryMatch__mutargs_9RPoFoMP(fu_STR(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, _here, ctx, _scope, _ss, module, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort, t_string);
    if (debug)
        BUG_patsWWTe(("Did match on second pass: "_fu + qWHAT_RTL9wrOX(GET_pWzRaF0U(debug, _scope, module, ctx), module, _scope, ctx)), _here, ctx);

    fail_1X59Y46x(fu_STR(error), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void applyConversion_yl20i8ho(s_SolvedNode& arg, fu::view<s_Target> conversion, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_FNvBVj2X& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_Warning>& _warnings, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Target& _current_fnort)
{
    for (int i = 0; i < conversion.size(); i++)
    {
        const s_Target& t = conversion[i];
        if (EXT_hGjgwR4E(t, module, _scope, ctx).min || (EXT_hGjgwR4E(t, module, _scope, ctx).max && arg))
        {
            arg = CallerNode_3U4yFUKm("__using.a"_fu, s_Target(t), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(arg) } }, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string, _current_fnort);
            continue;
        };
        if (i)
            fail_1X59Y46x((("Bad conversion chain, non-leading nullary: `"_fu + GET_pWzRaF0U(t, _scope, module, ctx).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

        if (arg)
            fail_1X59Y46x("Bad conversion chain, about to throw away an argnode."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        arg = CallerNode_3U4yFUKm("__using.b"_fu, s_Target(t), fu_VEC<s_SolvedNode>{}, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string, _current_fnort);
    };
}

static s_Type solveArrlit_itemType_HCckHx9A(fu::view<s_SolvedNode> items, /*MOV*/ s_Type&& itemType, int start, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    if (!itemType)
    {
        if (start == items.size())
            fail_1X59Y46x("Cannot infer empty arraylit."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

        itemType = solveArrlit_itemType_init_1NKPFBp0(items[start++].type, _here, ctx);
    }
    else if (is_ref_zJCUz9W3(itemType))
        fail_1X59Y46x("Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu, _here, ctx, _helpers, _helpers_data, _scope, module);

    for (int i = start; i < items.size(); i++)
        itemType = superType_FwjTBhwl("Array literal: "_fu, itemType, items[i].type, (*(const fu_STR*)fu::NIL), module, _scope, ctx, _here, _helpers, _helpers_data);

    return static_cast<s_Type&&>(itemType);
}

static s_SolvedNode createArrlit_Nb6niWYK(fu_VEC<s_SolvedNode>&& items, const s_Type& itemType, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    s_Type itemType_1 = solveArrlit_itemType_HCckHx9A(items, s_Type(itemType), 0, _here, ctx, _helpers, _helpers_data, _scope, module);
    return SolvedNode_AK4GvqCq("arrlit"_fu, solveArrlit_done_8nEAoJoK(itemType_1, _here, ctx), 0, (*(const fu_STR*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
}

                                #ifndef DEF_F_EFFECT
                                #define DEF_F_EFFECT
extern const int F_EFFECT;
                                #endif

static s_Type intersectionType_SKbQHvIC(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    s_Type _0 {};
    return (_0 = type_tryIntersect_yRJeU5dj(a, b)) ? static_cast<s_Type&&>(_0) : fail_1X59Y46x((((((((id ? (("`"_fu + human_7SdJ5Hgt(id, module, _scope, ctx)) + "`: "_fu) : fu_STR{}) + reason) + "Cannot intersect a common subtype: `"_fu) + humanizeType_nkNrw01H(a, module, ctx)) + "` & `"_fu) + humanizeType_nkNrw01H(b, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_Target createLet_LJpr4onN(const fu_STR& id, const s_Type& type, const int flags, bool& shadows, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_TokenIdx& _here, const s_Context& ctx, const s_Target& _current_fnort)
{
    /*MOV*/ const s_Target target = Binding_uziOSlJc(id, s_Type(type), flags, shadows, _current_fn, _root_scope, _scope, _ss, module, _here, ctx, _current_fnort);
    s_SolvedNode ret = SolvedNode_AK4GvqCq("let"_fu, GET_pWzRaF0U(target, _scope, module, ctx).type, flags, GET_pWzRaF0U(target, _scope, module, ctx).name, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
    solved_set_mBIs9g0H(target, ret, _scope, module);
    return /*NRVO*/ target;
}

static s_Target injectImplicitArg_U2DaLDgD(const fu_STR& id, const s_Type& type, const s_Target& becauseOf, s_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, s_Scope& _scope, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Target& _current_fnort)
{
    if (!_current_fn.out.items || (_current_fn.out.flags & F_EXTERN))
    {
        if (isStruct_usAEukhR(type))
        {
            const s_Struct& s = lookupStruct_GBXUPXZt(type, module, ctx);
            if (GET_pWzRaF0U(s.target, _scope, module, ctx).flags & F_EFFECT)
                return s_Target(s.target);

        };
        fail_1X59Y46x((((("No implicit "_fu + qBAD_HIwg52Ja(id)) + " in scope, needed to call "_fu) + qWHAT_RTL9wrOX(GET_pWzRaF0U(becauseOf, _scope, module, ctx), module, _scope, ctx)) + "."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
    };
    for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
    {
        s_SolvedNode& arg = _current_fn.out.items.mutref(i);
        /*MOV*/ const s_Target target { arg.target };
        s_SolvedNode& arg_1 = ((arg.kind == "letdef"_fu) ? GET_mut_lqSDNFDF(target, _scope, module).solved : arg);
        if (arg_1.value == id)
        {
            s_Type super = intersectionType_SKbQHvIC("Implicit argument collision: "_fu, add_ref_EgWfyCPW(s_Type(type), arg_1.type.lifetime, _here, ctx), arg_1.type, id, module, _scope, ctx, _here, _helpers, _helpers_data);
            arg_1.type = super;
            GET_mut_lqSDNFDF(target, _scope, module).type = super;
            return s_Target((target ? target : BUG_patsWWTe(fu_STR{}, _here, ctx)));
        };
    };
    bool shadows {};
    int flags = (F_IMPLICIT | F_ARG);
    if (is_mutref_zJCUz9W3(type, _here, ctx))
        flags |= (F_REF | F_RELAXABLE_REF);

    /*MOV*/ const s_Target newArgTarget = createLet_LJpr4onN(id, type, flags, shadows, _current_fn, _root_scope, _scope, _ss, module, _here, ctx, _current_fnort);
    const int newArgIdx = (_current_fn.out.items.size() + FN_ARGS_BACK);
    s_SolvedNode newLetDef = createLetDef_fScRM1R5(newArgTarget, _here);
    _current_fn.out.items.insert(newArgIdx, s_SolvedNode(newLetDef));
    return /*NRVO*/ newArgTarget;
}

static s_SolvedNode bindImplicitArg_NacMFoQm(const fu_STR& name, const s_Type& type, const s_Target& becauseOf, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_FNvBVj2X& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_Warning>& _warnings, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Target& _current_fnort)
{

    {
        const s_ClosureID _ = tryParseClosureID_RHyKU5hm(name);
        if (isLocal_Yp26zAW1(_.target) && (localOf_oTWzaKhX(_.target, module, _scope, ctx) == _current_fn.out.target.index))
        {
            if (!(_.revision == EXT_hGjgwR4E(_current_fn.out.target, module, _scope, ctx).revision))
                fail_1X59Y46x(x7E((x7E((("ClosureID.revision mismatch: "_fu + qWHAT_RTL9wrOX(GET_pWzRaF0U(_.target, _scope, module, ctx), module, _scope, ctx)) + "\n\tCaptured at: "_fu), fu::i64dec(_.revision)) + "\n\tCurrent rev: "_fu), fu::i64dec(EXT_hGjgwR4E(_current_fn.out.target, module, _scope, ctx).revision)), _here, ctx, _helpers, _helpers_data, _scope, module);

            if (!(GET_pWzRaF0U(_.target, _scope, module, ctx).kind == "var"_fu))
                BUG_patsWWTe(("ClosureID.target is not a var: "_fu + qWHAT_RTL9wrOX(GET_pWzRaF0U(_.target, _scope, module, ctx), module, _scope, ctx)), _here, ctx);

            return CallerNode_3U4yFUKm("__closure"_fu, s_Target(_.target), fu_VEC<s_SolvedNode>{}, 0, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string, _current_fnort);
        };
    };
    fu_STR error {};
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    s_Target _0 {};
    const s_Target target = ((_0 = tryMatch__mutargs_9RPoFoMP(fu_STR(name), reorder, conversions, error, true, (*(const s_Scope*)fu::NIL), fu::view<s_SolvedNode>{}, F_IMPLICIT, s_Target{}, _here, ctx, _scope, _ss, module, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort, t_string)) ? _0 : (_0 = injectImplicitArg_U2DaLDgD(name, type, becauseOf, _current_fn, module, ctx, _scope, _here, _helpers, _helpers_data, _root_scope, _ss, _current_fnort)) ? _0 : BUG_patsWWTe(fu_STR{}, _here, ctx));
    const s_Overload& o = GET_pWzRaF0U(target, _scope, module, ctx);
    if (!(o.flags & F_IMPLICIT))
        fail_1X59Y46x((((("Matching a non-implicit item in scope: `"_fu + name) + "`, binds to call to `"_fu) + GET_pWzRaF0U(becauseOf, _scope, module, ctx).name) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    checkAssignable_b4W6xpY2(type, o.type, (("Implicit `"_fu + name) + "` type mismatch"_fu), (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, module, _helpers, _helpers_data, _scope);
    return CallerNode_3U4yFUKm("__implicit"_fu, s_Target(target), fu_VEC<s_SolvedNode>{}, 0, reorder, conversions, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string, _current_fnort);
}

static void applyRetype_lLHfgU6F(s_SolvedNode& arg, const s_Type& retype)
{
    arg.type = retype;
}

                                #ifndef DEFt_last_jhr9I4Fb
                                #define DEFt_last_jhr9I4Fb
inline const s_Node& last_jhr9I4Fb(fu::view<s_Node> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_SolvedNode solveLetLike_dontTouchScope_higbY2ax(const fu_STR& id, int flags, const s_SolvedNode& init, const s_Type& annot, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Options& options, int& _notes)
{
    if (!(annot || init.type))
        fail_1X59Y46x((("Variable declarations without type annotations must be initialized: `"_fu + id) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    if (annot && init.type)
        checkAssignable_b4W6xpY2(annot, init.type, "Type annotation does not match init expression"_fu, id, "="_fu, _here, ctx, module, _helpers, _helpers_data, _scope);

    const s_Type& t_init = init.type;
    s_Type t_init_1 = (is_ref2temp_zJCUz9W3(t_init, _here, ctx) ? clear_refs_zJCUz9W3(s_Type(t_init)) : s_Type(t_init));
    if (!(flags & F_ARG) && is_never_zJCUz9W3(t_init_1))
    {
        makeNote_1zG3Fhlo(N_DeadLet, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return s_SolvedNode(init);
    };
    if (is_mutref_zJCUz9W3(annot, _here, ctx))
        flags |= F_REF;

    if (flags & F_REF)
    {
        if (!(is_mutref_zJCUz9W3(t_init_1, _here, ctx) || (is_never_zJCUz9W3(t_init_1) && annot) || (!init && (flags & F_ARG))))
            fail_1X59Y46x(((("`ref` variables must be initialized to a mutable reference: `"_fu + id) + "`"_fu) + (t_init_1 ? (" = "_fu + humanizeType_nkNrw01H(t_init_1, module, ctx)) : "."_fu)), _here, ctx, _helpers, _helpers_data, _scope, module);

    };
    s_Type t_let = ((annot && ((flags & F_ARG) || !t_init_1)) ? s_Type(annot) : ((is_mutref_zJCUz9W3(t_init_1, _here, ctx) && !(flags & F_REF)) ? clear_mutref_zJCUz9W3(s_Type(t_init_1)) : s_Type(t_init_1)));
    if ((flags & F_ARG) && !(flags & F_MUT))
        t_let = add_ref_EgWfyCPW(s_Type(t_let), Lifetime_temporary_8nlJDPX0(), _here, ctx);

    return SolvedNode_AK4GvqCq("let"_fu, t_let, flags, id, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode createLet_43gkAQrb(const fu_STR& id, const int flags, const s_SolvedNode& init, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Options& options, int& _notes, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Target& _current_fnort)
{
    s_SolvedNode out = solveLetLike_dontTouchScope_higbY2ax(id, int(flags), init, (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes);
    return solveLet_qDDArhnT(out, id, _here, ctx, _scope, module, _current_fn, _root_scope, _ss, _current_fnort);
}

                                #ifndef DEFt_x3Cx3E_W8M95nYl
                                #define DEFt_x3Cx3E_W8M95nYl
inline int x3Cx3E_W8M95nYl(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_add_9EOxwUBL
                                #define DEFt_add_9EOxwUBL
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

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline constexpr unsigned SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

                                #ifndef DEF_SS_FN_RECUR
                                #define DEF_SS_FN_RECUR
inline constexpr unsigned SS_FN_RECUR = (0x1u << 17u);
                                #endif

static void detectRecursion_EhF9l70D(const s_Target& target, s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Options& options, int& _notes)
{
    s_Overload overload { GET_pWzRaF0U(target, _scope, module, ctx) };
    if ((overload.status & (SS_FINALIZED | SS_LAZY)) != SS_LAZY)
        return;

    const int note = ((overload.kind == "type"_fu) ? N_TypeRecursion : N_FnRecursion);
    const unsigned status = ((overload.kind == "type"_fu) ? SS_TYPE_RECUR : SS_FN_RECUR);
    for (int i = _helpers.size(); i-- > 0; )
    {
        const s_Helpers& h = _helpers[i];
        if (!isFnOrType_SMNqnQpk(h, _helpers_data))
            continue;

        if (((void)void(), _helpers_data[h.index]).mask & HM_Lambda)
            BUG_patsWWTe("Recursive lambda, what happened here?"_fu, _here, ctx);

        GET_mut_lqSDNFDF(((void)void(), _helpers_data[h.index]).target, _scope, module).status |= status;
        makeNote_1zG3Fhlo(note, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        if (((void)void(), _helpers_data[h.index]).target == target)
            return;

    };
    BUG_patsWWTe((x7E((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu), fu::u64dec(overload.status)) + ")`."_fu), _here, ctx);
}

static s_SolvedNode CallerNode_3U4yFUKm(const fu_STR& debug, s_Target&& target, fu_VEC<s_SolvedNode>&& args, const int kills, const fu_VEC<int>& reorder, fu::view<fu_VEC<s_Target>> conversions, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_CurrentFn& _current_fn, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_FNvBVj2X& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_Warning>& _warnings, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Type& t_string, const s_Target& _current_fnort)
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
        applyConversion_yl20i8ho(args.mutref(argIdx), conversion, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string, _current_fnort);
    };
    const int REST_START = findRestStart_xqki5EuP(EXT_hGjgwR4E(target, module, _scope, ctx));
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
                args.mutref(i) = createArrlit_Nb6niWYK(fu_VEC<s_SolvedNode>(rest), (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module);

        };
    };
    const bool isZeroInit = ((GET_pWzRaF0U(target, _scope, module, ctx).kind == "type"_fu) && !args.size());
    if (!isZeroInit)
    {
        fu_VEC<s_Argument> host_args { EXT_hGjgwR4E(target, module, _scope, ctx).args };
        args.resize(host_args.size());
        for (int i = 0; i < args.size(); i++)
        {
            if (!args[i])
            {
                const s_Argument& host_arg = host_args[i];
                args.mutref(i) = (host_arg.dEfault ? s_SolvedNode(host_arg.dEfault) : ((void)((host_arg.flags & F_IMPLICIT) || fail_1X59Y46x((((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + humanizeType_nkNrw01H(host_arg.type, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)), bindImplicitArg_NacMFoQm(fu_STR(host_arg.name), s_Type(host_arg.type), target, module, _scope, ctx, _current_fn, _here, _helpers, _helpers_data, _ss, _field_items, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string, _current_fnort)));
                if (is_never_zJCUz9W3(args[i].type))
                {
                    args.shrink((i + 1));
                    return deadCall_ZuGcCbJG(args, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
                };
            };
        };
    };
    s_Type type { GET_pWzRaF0U(target, _scope, module, ctx).type };
    if (GET_pWzRaF0U(target, _scope, module, ctx).kind == "field"_fu)
    {
        const s_Type* _0;
        type = add_refs_yRJeU5dj((*(_0 = &(only_gF1gIgkM(args).type)) ? *_0 : BUG_patsWWTe(fu_STR{}, _here, ctx)), s_Type(GET_pWzRaF0U(target, _scope, module, ctx).type));
    }
    else if (GET_pWzRaF0U(target, _scope, module, ctx).kind == "var"_fu)
    {
        if (GET_pWzRaF0U(target, _scope, module, ctx).flags & F_INLINE)
            return s_SolvedNode(GET_pWzRaF0U(target, _scope, module, ctx).solved.items[LET_INIT]);

        if (!(type.lifetime.uni0n.size() == 1))
            BUG_patsWWTe((("CallerNode: var "_fu + GET_pWzRaF0U(target, _scope, module, ctx).name) + " type.lifetime.len != 1"_fu), _here, ctx);

        if (isLocal_Yp26zAW1(target) && (localOf_oTWzaKhX(target, module, _scope, ctx) != _current_fn.out.target.index))
        {
            s_ClosureID _1 {};
            int _2 {};
            const s_ClosureID clID = ((_1 = tryParseClosureID_RHyKU5hm(GET_pWzRaF0U(target, _scope, module, ctx).name)) ? _1 : s_ClosureID { s_Target(target), int(((_2 = EXT_hGjgwR4E(parent_hsxlvpJB(target, module, _scope, ctx), module, _scope, ctx).revision) ? _2 : BUG_patsWWTe(("ClosureID: about to serialize at rev 0: "_fu + qWHAT_RTL9wrOX(GET_pWzRaF0U(target, _scope, module, ctx), module, _scope, ctx)), _here, ctx))) });
            target = injectImplicitArg_U2DaLDgD(serialize_db1BrgVV(clID), s_Type(GET_pWzRaF0U(target, _scope, module, ctx).type), target, _current_fn, module, ctx, _scope, _here, _helpers, _helpers_data, _root_scope, _ss, _current_fnort);
            const s_Type* _3;
            type = (*(_3 = &(GET_pWzRaF0U(target, _scope, module, ctx).type)) ? *_3 : BUG_patsWWTe(("CallerNode: !type on var "_fu + GET_pWzRaF0U(target, _scope, module, ctx).name), _here, ctx));
        };
    }
    else
    {
        if (args)
        {
            fu::view<s_Argument> _4 {};
            fu::view<s_Argument> host_args = ((_4 = EXT_hGjgwR4E(target, module, _scope, ctx).args) ? static_cast<fu::view<s_Argument>&&>(_4) : BUG_patsWWTe(("CallerNode: no host args: "_fu + qWHAT_RTL9wrOX(GET_pWzRaF0U(target, _scope, module, ctx), module, _scope, ctx)), _here, ctx));
            if (!((host_args.size() >= args.size())))
                BUG_patsWWTe(("CallerNode: host_arg.len mismatch: "_fu + qWHAT_RTL9wrOX(GET_pWzRaF0U(target, _scope, module, ctx), module, _scope, ctx)), _here, ctx);

            for (int i0 = 0; i0 < args.size(); i0++)
            {
                const s_Argument& host_arg = host_args[i0];
                s_SolvedNode& arg = args.mutref(i0);
                if (arg.kind == "argid"_fu)
                    arg = only_gF1gIgkM(arg.items);

                const s_Type& expect = host_arg.type;
                s_Type retype = tryRetyping_Um0Yg81P(arg, expect, _here, ctx, _helpers, _helpers_data, _scope, module);
                if (retype && isAssignableAsArgument_yRJeU5dj(expect, retype))
                    applyRetype_lLHfgU6F(arg, retype);

            };
        };
        if (GET_pWzRaF0U(target, _scope, module, ctx).kind == "inline"_fu)
        {
            const s_ScopeMemo scope0 = Scope_snap_xL8BbLPe(_scope, _helpers);
            s_ScopeSkipMemos ss0 { _ss };
            fu_DEFER(
            {
                Scope_pop_GvGeMzm4(_scope, scope0, _helpers);
                _ss = ss0;
            });
            s_Template tEmplate { EXT_hGjgwR4E(target, module, _scope, ctx).tEmplate };
            ScopeSkip_setup_9AeV5A2A(tEmplate, scope0, true, _root_scope, _ss, _here, ctx, _current_fn, _scope);
            _scope.items += fu_VEC<s_ScopeItem>(EXT_hGjgwR4E(target, module, _scope, ctx).extra_items);
            s_Node n_fn { tEmplate.node };
            s_Node n_body { last_jhr9I4Fb(n_fn.items) };
            s_Type ret_expect { GET_pWzRaF0U(target, _scope, module, ctx).type };
            fu_VEC<s_Argument> host_args { EXT_hGjgwR4E(target, module, _scope, ctx).args };
            fu_VEC<s_SolvedNode> arg_defs {};
            if (!(host_args.size() == args.size()))
                BUG_patsWWTe("inline: arglen mismatch"_fu, _here, ctx);

            const int locals_start = (args ? GET_next_local_index_k5ok1B4G(_current_fnort, _current_fn, _scope) : int{});
            for (int i = 0; i < args.size(); i++)
            {
                s_Argument slot { host_args[i] };
                arg_defs += createLet_43gkAQrb(fu_STR(slot.name), (slot.flags & ~(F_ARG | F_COMPOUND_ID)), args[i], _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes, _current_fn, _root_scope, _ss, _current_fnort);
                if (slot.flags & F_INLINE)
                    arg_defs.pop();

            };
            /*MOV*/ s_SolvedNode s_body = solveBlock_eBBvZxr1(n_body, ret_expect, 0, short(short((short((HM_CanReturn | ((n_fn.flags & F_LAMBDA) ? HM_Lambda : (*(const short*)fu::NIL)))) | (arg_defs ? HM_KeepBlock : (*(const short*)fu::NIL))))), kills, n_fn.value, locals_start, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
            if (!(s_body.kind))
                BUG_patsWWTe("inline: no s_body.kind"_fu, _here, ctx);

            s_body.items.splice(0, 0, fu_VEC<s_SolvedNode>(arg_defs));
            return /*NRVO*/ s_body;
        };
        if (is_ref_zJCUz9W3(type))
            type.lifetime = Lifetime_test_HRmImHZi(Lifetime_replaceArgsAtCallsite_6QxbuJjh(target, args, _scope, module, ctx, _here), true, _current_fn, _scope, module, ctx, _here, _current_fnort);

    };
    /*MOV*/ s_SolvedNode callsite = SolvedNode_AK4GvqCq("call"_fu, type, 0, debug, args, target, s_Helpers{}, _here);
    if ((target.modid < 0) || (target.modid == module.modid))
    {
        fu::view<char> k = GET_pWzRaF0U(target, _scope, module, ctx).kind;
        if ((k == "fn"_fu) || (k == "type"_fu))
        {
            add_9EOxwUBL(EXT_mut_neoUwv0o(target, module, _scope).callers, _current_fn_or_type.index);
            detectRecursion_EhF9l70D(target, _scope, module, ctx, _helpers, _helpers_data, _here, options, _notes);
        };
    };
    return /*NRVO*/ callsite;
}

static s_SolvedNode solveCall_3FifiTBa(const s_Node& node, const s_Target& target, const int kills, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> args = solveNodes_llR9thfD(node.items, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    if (is_never_zJCUz9W3(if_last_cCrdPZ3P(args).type))
        return deadCall_ZuGcCbJG(args, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

    fu_STR id { node.value };
    if (!id)
    {
        if (!(target))
            BUG_patsWWTe(fu_STR{}, _here, ctx);

    };
    const int qualified = (node.flags & F_COMPOUND_ID);
    const s_Scope& misc_scope = (qualified ? dequalify_andGetScope_zKJ0x8ny(id, _here, ctx, _helpers, _helpers_data, _scope, module) : (*(const s_Scope*)fu::NIL));
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    const s_Target callTargIdx = match__mutargs_eP5JLbPu(misc_scope, !qualified, id, args, reorder, conversions, node.flags, target, _here, ctx, _scope, _ss, module, _field_items, _specs, _helpers, _helpers_data, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _current_fnort, t_string);
    return CallerNode_3U4yFUKm(node.value, s_Target(callTargIdx), fu_VEC<s_SolvedNode>(args), kills, reorder, conversions, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string, _current_fnort);
}

static s_Type evalTypeAnnot_nHP0Ok9t(const s_Node& node, const s_Map_mUYWjxvp& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    if (node.kind == "call"_fu)
    {
        fu::view<s_Node> items = node.items;
        if (items.size() == 1)
        {
            if (node.value == "&"_fu)
            {
                s_Type _0 {};
                return (_0 = T_rVMRJfWj(0, node, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string), add_ref_EgWfyCPW(static_cast<s_Type&&>(_0), Lifetime_temporary_8nlJDPX0(), _here, ctx));
            };
            if (node.value == "&mut"_fu)
            {
                s_Type _1 {};
                return (_1 = T_rVMRJfWj(0, node, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string), add_mutref_EgWfyCPW(static_cast<s_Type&&>(_1), Lifetime_temporary_8nlJDPX0(), _here, ctx));
            };
            if (node.value == "[]"_fu)
            {
                s_Type _2 {};
                return (_2 = T_rVMRJfWj(0, node, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string), createArray_zJCUz9W3(static_cast<s_Type&&>(_2), _here, ctx));
            };
        };
        return solveCall_3FifiTBa(node, s_Target{}, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string).type;
    }
    else if (node.kind == "typeparam"_fu)
        return s_Type(evalTypeParam_Bss0PTf1(node.value, typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _ss));
    else if ((node.kind == "arrlit"_fu) && (node.items.size() == 1))
    {
        s_Type _3 {};
        return (_3 = T_rVMRJfWj(0, node, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string), createSlice_EgWfyCPW(static_cast<s_Type&&>(_3), Lifetime_temporary_8nlJDPX0(), _here, ctx));
    };
    fail_1X59Y46x((x7E((("TODO evalTypeAnnot: "_fu + node.kind) + "["_fu), fu::i64dec(node.items.size())) + "]"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode solveLetLike_dontTouchScope_ipjKU5Ae(const s_Node& node, const s_Type& specType, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    const s_Node& n_annot = node.items[LET_TYPE];
    s_Type annot = (n_annot ? evalTypeAnnot_nHP0Ok9t(n_annot, (*(const s_Map_mUYWjxvp*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string) : s_Type{});
    int flags = node.flags;
    if (is_mutref_zJCUz9W3(specType, _here, ctx) && !((flags & F_REF) || is_mutref_zJCUz9W3(annot, _here, ctx)))
        flags |= F_RELAXABLE_REF;

    const s_Type& annot_1 = (specType ? specType : annot);
    s_Type annot_2 = ((annot_1 && (node.flags & F_REF)) ? add_mutref_EgWfyCPW(s_Type(annot_1), Lifetime_temporary_8nlJDPX0(), _here, ctx) : s_Type(annot_1));
    const s_Node& n_init = node.items[LET_INIT];
    s_SolvedNode init = (n_init ? solveNode_Tf69aXec(n_init, annot_2, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string) : s_SolvedNode{});
    s_SolvedNode init_1 = ((specType && init.type && !isAssignable_yRJeU5dj(specType, init.type)) ? s_SolvedNode{} : s_SolvedNode(init));
    return solveLetLike_dontTouchScope_higbY2ax(node.value, int(flags), init_1, annot_2, _here, ctx, _helpers, _helpers_data, _scope, module, options, _notes);
}

static s_SolvedNode solveMember_y10rAzd7(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    if (!(node.kind == "let"_fu))
        BUG_patsWWTe(("solveStructMembers_1: "_fu + node.kind), _here, ctx);

    if (node.items[LET_INIT] && (node.items[LET_INIT].kind != "definit"_fu))
        fail_1X59Y46x(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node.value) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    return solveLetLike_dontTouchScope_ipjKU5Ae(node, (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
}

                                #ifndef DEFt_map_mtrvsBEj
                                #define DEFt_map_mtrvsBEj
inline fu_VEC<s_SolvedNode> map_mtrvsBEj(fu::view<s_Node> a, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember_y10rAzd7(a[i], _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_F_PREDICATE
                                #define DEF_F_PREDICATE
extern const int F_PREDICATE;
                                #endif

                                #ifndef DEFt_add_N7IVeTyr
                                #define DEFt_add_N7IVeTyr
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

                                #ifndef DEFt_each_zCkNo6Ij
                                #define DEFt_each_zCkNo6Ij
inline void each_zCkNo6Ij(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu_VEC<int>& structImports)
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

static s_SolvedNode __solveStruct_cu2RbRgF(const bool solve, const s_Node& node, const s_Target& into, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_HelpersData>& _helpers_data, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const fu_STR& origId = node.value;
    fu_STR _0 {};
    fu_STR name = (origId ? fu_STR(origId) : (_0 = fu_STR((_current_fn.out.target ? GET_pWzRaF0U(_current_fn.out.target, _scope, module, ctx).name : (*(const fu_STR*)fu::NIL)))) ? static_cast<fu_STR&&>(_0) : "Anon"_fu);
    s_Target out_target { into };
    s_Type out_type {};
    if (out_target)
        out_type = GET_pWzRaF0U(out_target, _scope, module, ctx).type;
    else
    {
        out_type = initStruct_afXwHDbN(name, node.flags, SELF_TEST, module);
        out_target = Scope_Typedef_CUDLzI5V(_scope, origId, out_type, node.flags, name, SS_LAZY, module);
        EXT_mut_neoUwv0o(out_target, module, _scope).tEmplate = createTemplate_BqIH0wtI(node, _current_fn, _scope, _helpers, _ss);
    };
    if (!solve)
        return createEmpty_extETXwG("empty"_fu, out_type, out_target, _here);

    const s_Target current_fn_or_type0 { _current_fn_or_type };
    fu_DEFER(_current_fn_or_type = current_fn_or_type0);
    _current_fn_or_type = out_target;
    const s_Target& _current_fnort = out_target;
    GET_mut_lqSDNFDF(out_target, _scope, module).status |= SS_DID_START;
    const int helpers0 = _helpers.size();
    const int helpers_data0 = _helpers_data.size();
    fu_DEFER(
    {
        _helpers.shrink(helpers0);
        _helpers_data.shrink(helpers_data0);
    });
    push_smTlTOYR(s_HelpersData { s_Target((out_target ? out_target : BUG_patsWWTe((("solveStruct: no out_target: `"_fu + origId) + "`."_fu), _here, ctx))), fu_STR{}, short(HM_Struct), 0, 0, 0, s_Type{}, s_Type{} }, _helpers, _helpers_data);
    fu_VEC<s_Target> structConverts {};
    fu_VEC<int> structImports {};
    int flat_cnt {};
    bool all_triv = true;
    fu_VEC<s_SolvedNode> members = map_mtrvsBEj(node.items, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    {
        fu_VEC<s_ScopeItem>& innerScope = lookupStruct_mut_MHqzuNPp(out_type.vtype.canon, module).items;
        if (!innerScope && members)
        {
            fu_VEC<s_Argument> args = fu_VEC<s_Argument> { fu::slate<1, s_Argument> { s_Argument { "this"_fu, fu_STR{}, despeculateStruct_c5L0jVYk(s_Type(out_type)), s_SolvedNode{}, 0, 0, s_BitSet{}, s_BitSet{} } } };
            for (int i = 0; i < members.size(); i++)
            {
                const fu_STR& id = node.items[i].value;
                const int isPredicate = (node.items[i].flags & F_PREDICATE);
                const s_Target target = Scope_create_ogkrG8By(_scope, "field"_fu, (id ? id : BUG_patsWWTe(fu_STR{}, _here, ctx)), (*(const s_Type*)fu::NIL), (F_PUB | isPredicate), 0u, 0, module);
                s_Extended& ext = EXT_mut_neoUwv0o(target, module, _scope);
                ext.args = args;
                ext.min = 1;
                ext.max = 1;
                Scope_set_dXgzwdCQ(innerScope, id, target, false);
            };
            _field_items += innerScope;
        };
        if (!(innerScope.size() == members.size()))
            BUG_patsWWTe((((x7E((x7E((x7E("solveStructMembers_3: field lens mismatch: "_fu, fu::i64dec(innerScope.size())) + " vs "_fu), fu::i64dec(members.size())) + "/"_fu), fu::i64dec(node.items.size())) + ": `struct "_fu) + name) + "`."_fu), _here, ctx);

        for (int i = 0; i < innerScope.size(); i++)
        {
            const s_ScopeItem& item = innerScope[i];
            const s_SolvedNode& member = members[i];
            if (!(item.id == member.value))
                BUG_patsWWTe("solveStructMembers_4: field id mismatch."_fu, _here, ctx);

            s_Overload& field = GET_mut_lqSDNFDF(target_e3eS1o6f(item), _scope, module);
            field.type = member.type;
            int _1 {};
            flat_cnt += ((_1 = int(tryLookupStruct_JKdxRWxB(member.type, module, ctx).flat_cnt)) ? _1 : 1);
            if (all_triv)
                all_triv = is_trivial_JKdxRWxB(member.type, module, ctx);

            if (member.flags & F_USING)
            {
                structConverts.push(target_e3eS1o6f(item));
                const int m = modidOfOrigin_usAEukhR(field.type);
                if (m && (m != module.modid))
                    add_itJnJlI8(structImports, m);

                add_N7IVeTyr(structImports, lookupTypeImports_JKdxRWxB(field.type, module, ctx));
            };
        };
    };
    each_zCkNo6Ij(_scope.imports, _ss.imports, 0, structImports);

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
            if (!(GET_pWzRaF0U(s.target, _scope, module, ctx).status & SS_DID_START))
                BUG_patsWWTe("Setting stuff but missing SS_DID_START."_fu, _here, ctx);

        };
        const int max = members.size();
        int min = 0;
        fu_VEC<s_Argument> args {};
        for (int i_1 = 0; i_1 < members.size(); i_1++)
        {
            const s_SolvedNode& member = members[i_1];
            s_Argument arg = s_Argument { fu_STR((member.value ? member.value : BUG_patsWWTe(fu_STR{}, _here, ctx))), fu_STR{}, s_Type((member.type ? member.type : BUG_patsWWTe(fu_STR{}, _here, ctx))), s_SolvedNode(member.items[LET_INIT]), (member.flags & F_MUSTNAME), 0, s_BitSet{}, s_BitSet{} };
            if (!arg.dEfault)
                min++;

            args.push(s_Argument(arg));
        };
        if (max && !min)
            min++;

        s_Extended& ext = EXT_mut_neoUwv0o(out_target, module, _scope);
        ext.min = min;
        ext.max = max;
        ext.args = args;
        const int mustUpdate = (CHANGE ? ext.callers.size() : int{});
        s_Overload& overload = GET_mut_lqSDNFDF(out_target, _scope, module);
        overload.type = out_type;
        if (mustUpdate)
            overload.status |= SS_UPDATED;

    };
    lazySolveEnd_7UxqRdjt(out_target, _scope, module, ctx, _here, options, _helpers, _helpers_data, _notes, _specs, _ss, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, shortModuleName, _field_items, _current_fnort, t_string);
    return s_SolvedNode{};
}

static s_SolvedNode uPrepStruct_JIrTuLYZ(const s_Node& node, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_TokenIdx& _here, s_Target& _current_fn_or_type, fu_VEC<s_HelpersData>& _helpers_data, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    return __solveStruct_cu2RbRgF(false, node, s_Target{}, _current_fn, _scope, module, ctx, _helpers, _ss, _here, _current_fn_or_type, _helpers_data, _warnings, _specs, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
}

static s_SolvedNode unorderedPrep_A_zVLMfjSF(const s_Node& node, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_TokenIdx& _here, const s_Context& ctx, s_Target& _current_fn_or_type, fu_VEC<s_HelpersData>& _helpers_data, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, fu_VEC<fu_STR>& _spec_errors, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    fu::view<char> k = node.kind;
    if (k == "fn"_fu)
        return uPrepFn_A_OFmG0Kuz(node, _current_fn, _scope, module, _helpers, _ss, _root_scope, _here);

    if (k == "struct"_fu)
        return uPrepStruct_JIrTuLYZ(node, _current_fn, _scope, module, ctx, _helpers, _ss, _here, _current_fn_or_type, _helpers_data, _warnings, _specs, _root_scope, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    fail_1X59Y46x(("TODO: "_fu + k), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void uPrepFn_B_RrFVZO0X(const s_Target& target, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    s_Template& tEmplate = EXT_mut_neoUwv0o(target, module, _scope).tEmplate;
    if (tEmplate.scope_memo)
        tEmplate.scope_memo = Scope_snap_xL8BbLPe(_scope, _helpers);

}

static void unorderedPrep_B_tDWdio4T(const s_Node& node, const s_Target& into, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    fu::view<char> k = node.kind;
    if (k == "fn"_fu)
        uPrepFn_B_RrFVZO0X(into, module, _scope, _helpers);

}

static fu_VEC<s_SolvedNode> solveNodes_llR9thfD(fu::view<s_Node> nodes, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const int kills, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    /*MOV*/ fu_VEC<s_SolvedNode> result {};
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_Node& node = nodes[i];
        if (!node)
            continue;

        const int unorderedClass = unorderedClassify_84V0qMVh(node.kind);
        if (!unorderedClass)
        {
            HERE_fVfHq6aR(node.token, _here);
            const bool last = (i == (nodes.size() - 1));
            const s_Type& type = ((last && use_type_last) ? type_last : type_all);
            const int kills_1 = (last ? kills : (*(const int*)fu::NIL));
            s_SolvedNode solved = solveNode_Tf69aXec(node, type, kills_1, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
            result += s_SolvedNode(solved);
            if (is_never_zJCUz9W3(solved.type))
            {
                if (i < (nodes.size() - 1))
                    makeNote_1zG3Fhlo(N_DeadCode, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

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
            if (unorderedClassify_84V0qMVh(node_1.kind) != unorderedClass)
            {
                i1 = i_1;
                break;
            };
            HERE_fVfHq6aR(node_1.token, _here);
            result += unorderedPrep_A_zVLMfjSF(node_1, _current_fn, _scope, module, _helpers, _ss, _root_scope, _here, ctx, _current_fn_or_type, _helpers_data, _warnings, _specs, _spec_errors, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
        };
        if (!(i1 > i0))
            BUG_patsWWTe(fu_STR{}, _here, ctx);

        i = (i1 - 1);
        for (int i_2 = i0; i_2 < i1; i_2++)
        {
            const s_Node* _1;
            const s_Node& node_1 = (*(_1 = &(nodes[i_2])) ? *_1 : BUG_patsWWTe("solveNodes, prep-b: falsy node"_fu, _here, ctx));
            HERE_fVfHq6aR(node_1.token, _here);
            unorderedPrep_B_tDWdio4T(node_1, result[(i_2 + offset)].target, module, _scope, _helpers);
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
                const s_Target& into = result[(i_3 + offset)].target;
                if (lazySolveStart_2KG8rFWC(into, s_Overload(GET_pWzRaF0U(into, _scope, module, ctx)), _scope, module, _here, ctx, _specs, _helpers, _ss, _helpers_data, _root_scope, _current_fn, _spec_errors, _warnings, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string))
                    repeat = true;

            };
        };
    };
    return /*NRVO*/ result;
}

static s_SolvedNode solveRoot_lXkjPeBQ(const s_Node& node, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    push_smTlTOYR(s_HelpersData{}, _helpers, _helpers_data);
    fu_VEC<s_SolvedNode> items = solveNodes_llR9thfD(node.items, t_void, (*(const s_Type*)fu::NIL), bool{}, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    if (!is_never_zJCUz9W3(last_cCrdPZ3P(items).type))
    {
        /*MOV*/ s_SolvedNode root = solved_KVUVmvqw(node, t_void, items, s_Target{}, _here);
        runAllPasses_rpqNGiUY(root, _here, module, ctx, _scope, _current_fn, _warnings, _helpers, _helpers_data, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
        return /*NRVO*/ root;
    };
    _here = last_cCrdPZ3P(items).token;
    fail_1X59Y46x("Noreturn during static init: this program will never finish booting."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
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

static s_SolvedNode solveArgID_K6TJeDkO(const s_Node& node, const s_Type& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    s_SolvedNode expr = solveNode_Tf69aXec(only_vukGqR3r(node.items), type, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    return solved_KVUVmvqw(node, expr.type, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, _here);
}

static s_SolvedNode solveArrlit_9NXkRkOQ(const s_Node& node, const s_Type& type, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    s_Type itemType = (type ? tryClear_sliceable_zJCUz9W3(type) : s_Type{});
    if (!itemType && isStruct_usAEukhR(type))
        return solveCall_3FifiTBa(node, s_Target(lookupStruct_GBXUPXZt(type, module, ctx).target), 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    fu_VEC<s_SolvedNode> args = solveNodes_llR9thfD(node.items, itemType, (*(const s_Type*)fu::NIL), bool{}, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    if (is_never_zJCUz9W3(if_last_cCrdPZ3P(args).type))
    {
        makeNote_1zG3Fhlo(N_DeadArrlit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return createBlock_zloQ2DK8(t_never, fu_VEC<s_SolvedNode>(args), s_Helpers{}, _here, _helpers, _helpers_data);
    };
    if (!(node.flags & F_NAMED_ARGS))
        return createArrlit_Nb6niWYK(fu_VEC<s_SolvedNode>(args), itemType, _here, ctx, _helpers, _helpers_data, _scope, module);

    fail_1X59Y46x("TODO: solveArrlit: tryMatch by [ argnames: ... ] without function name."_fu, _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode popAndOr_nQmoUffx(s_SolvedNode& node)
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

static s_SolvedNode if_A_and_NEVER_then_B_else_C_h4MhHfxb(const s_Options& options, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, int& _notes, s_SolvedNode& cond)
{
    makeNote_1zG3Fhlo(N_DeadIfCons, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
    return popAndOr_nQmoUffx(cond);
}

static s_Type convertToSuperType_0uE6ceMy(fu::view<char> topic, s_SolvedNode& a, s_SolvedNode& b, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, s_CurrentFn& _current_fn, fu_VEC<s_ScopeItem>& _field_items, s_Map_FNvBVj2X& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_Warning>& _warnings, s_Target& _current_fn_or_type, int& _anons, const s_Options& options, int& _notes, const fu_STR& shortModuleName, const s_Target& _current_fnort, const s_Type& t_string)
{

    {
        /*MOV*/ s_Type super = type_trySuper_yRJeU5dj(a.type, b.type);
        if (super)
            return /*NRVO*/ super;

    };

    { {
        s_Type aRetype = tryRetyping_Um0Yg81P(a, b.type, _here, ctx, _helpers, _helpers_data, _scope, module);
        s_Type bRetype = tryRetyping_Um0Yg81P(b, a.type, _here, ctx, _helpers, _helpers_data, _scope, module);
        if (aRetype)
        {
            if (bRetype)
                goto BL_3;

            /*MOV*/ s_Type super = type_trySuper_yRJeU5dj(aRetype, b.type);
            if (super)
            {
                applyRetype_lLHfgU6F(a, aRetype);
                return /*NRVO*/ super;
            };
        };
        if (bRetype)
        {
            /*MOV*/ s_Type super = type_trySuper_yRJeU5dj(bRetype, a.type);
            if (super)
            {
                applyRetype_lLHfgU6F(b, bRetype);
                return /*NRVO*/ super;
            };
        };
      } BL_3:;
    };

    { {
        if (true)
            BUG_patsWWTe("TRY_CONVERT has no test coverage."_fu, _here, ctx);

        fu_VEC<s_Target> aConv = tryConvert_vTitLEL7(b.type, a.type, (*(const s_SolvedNode*)fu::NIL), true, (*(const s_Scope*)fu::NIL), _scope, TODO_FIX_convert_args, _ss, _current_fn, module, ctx, _here, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _warnings, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, t_string);
        fu_VEC<s_Target> bConv = tryConvert_vTitLEL7(a.type, b.type, (*(const s_SolvedNode*)fu::NIL), true, (*(const s_Scope*)fu::NIL), _scope, TODO_FIX_convert_args, _ss, _current_fn, module, ctx, _here, _field_items, _specs, _helpers, _helpers_data, _root_scope, _spec_errors, _warnings, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, t_string);
        if (aConv)
        {
            if (bConv)
                goto BL_9;

            applyConversion_yl20i8ho(a, aConv, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string, _current_fnort);
            return s_Type(b.type);
        };
        if (bConv)
        {
            applyConversion_yl20i8ho(b, bConv, module, _scope, ctx, _here, _helpers, _helpers_data, _current_fn, _ss, _field_items, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, _warnings, TODO_FIX_convert_args, options, _notes, shortModuleName, t_string, _current_fnort);
            return s_Type(a.type);
        };
      } BL_9:;
    };
    fail_1X59Y46x(((((topic + ": No common supertype: "_fu) + humanizeType_nkNrw01H(a.type, module, ctx)) + " <-> "_fu) + humanizeType_nkNrw01H(b.type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_SolvedNode solveIf_VqbuAkky(const s_Node& node, s_Type&& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    /*MOV*/ s_SolvedNode cond = solveNode_Tf69aXec(node.items[0], t_bool, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    if (is_never_zJCUz9W3(cond.type))
    {
        makeNote_1zG3Fhlo(N_DeadIfCond, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return /*NRVO*/ cond;
    };
    s_SolvedNode cons = (((cond.kind == "and"_fu) && is_never_zJCUz9W3(last_cCrdPZ3P(cond.items).type)) ? if_A_and_NEVER_then_B_else_C_h4MhHfxb(options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes, cond) : solveBlock_eBBvZxr1(node.items[1], type, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string));
    s_SolvedNode alt = solveBlock_eBBvZxr1(node.items[2], type, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);
    if (!is_void_zJCUz9W3(type))
        type = convertToSuperType_0uE6ceMy("if/else"_fu, cons, alt, _here, ctx, _helpers, _helpers_data, _scope, module, TODO_FIX_convert_args, _ss, _current_fn, _field_items, _specs, _root_scope, _spec_errors, _warnings, _current_fn_or_type, _anons, options, _notes, shortModuleName, _current_fnort, t_string);

    if (is_never_zJCUz9W3(cons.type) && is_never_zJCUz9W3(alt.type))
        type = t_never;

    return solved_KVUVmvqw(node, (type ? type : BUG_patsWWTe(fu_STR{}, _here, ctx)), fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(cond), s_SolvedNode(cons), s_SolvedNode(alt) } }, s_Target{}, _here);
}

static s_SolvedNode solveOr_4ZBArO8d(const s_Node& node, s_Type&& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> items = solveNodes_llR9thfD(node.items, (is_void_zJCUz9W3(type) ? t_bool : type), type, true, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    if (items.size() < 2)
        return s_SolvedNode(only_gF1gIgkM(items));

    if (is_void_zJCUz9W3(type))
        type = t_bool;

    if (!(type == t_bool))
    {
        s_Type sumType {};
        bool hasNever = false;
        for (int i = items.size(); i-- > 0; )
        {
            s_SolvedNode& item = items.mutref(i);
            if (is_never_zJCUz9W3(item.type))
            {
                hasNever = true;
                continue;
            };
            const s_SolvedNode& andLast = (hasNever && (item.kind == "and"_fu) && item.items ? item.items[(item.items.size() - 1)] : (*(const s_SolvedNode*)fu::NIL));
            const s_Type& itemType = ((andLast && !is_never_zJCUz9W3(andLast.type)) ? (item.type = andLast.type) : item.type);
            if (sumType)
            {
                sumType = type_trySuper_yRJeU5dj(sumType, itemType);
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
    return solved_KVUVmvqw(node, type, items, s_Target{}, _here);
}

static s_SolvedNode solveAnd_O6v3z7qg(const s_Node& node, s_Type&& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    fu_VEC<s_SolvedNode> items = solveNodes_llR9thfD(node.items, (is_void_zJCUz9W3(type) ? t_bool : type), type, true, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    if (items.size() < 2)
        return s_SolvedNode(only_gF1gIgkM(items));

    if (is_void_zJCUz9W3(type))
        type = t_bool;

    if (!(type == t_bool))
    {
        s_Type sumType {};
        for (int i = items.size(); i-- > 0; )
        {
            const s_SolvedNode& item = items[i];
            if (is_never_zJCUz9W3(item.type))
                continue;

            if (sumType)
            {
                sumType = type_trySuper_yRJeU5dj(sumType, item.type);
                if (!is_ref_zJCUz9W3(sumType))
                    break;

            }
            else
            {
                type = item.type;
                sumType = item.type;
                if (is_zeroes_zJCUz9W3(type))
                    break;

            };
        };
        if (!is_ref_zJCUz9W3(sumType))
        {
            if (is_ref_zJCUz9W3(type))
            {
                if (CANNOT_definit_mutrefs)
                    type = clear_mutref_zJCUz9W3(s_Type(type));

                type.lifetime = Lifetime_makeShared_4X1iL0ll(type.lifetime);
            };
        }
        else
            type = sumType;

    };
    return solved_KVUVmvqw(node, type, items, s_Target{}, _here);
}

                                #ifndef DEF_HM_Anon
                                #define DEF_HM_Anon
extern const short HM_Anon;
                                #endif

static s_SolvedNode solveLetStatement_c9l45yME(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    if (!(node.kind == "let"_fu))
        BUG_patsWWTe((("Expected a `let` statement, got: `"_fu + node.kind) + "`."_fu), _here, ctx);

    return solveNode_Tf69aXec(node, t_void, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
}

static s_SolvedNode solveLoop_m4KhD3Bx(const s_Node& node, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, const s_Target& _current_fnort, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Context& ctx, s_Module& module, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Type& t_string)
{
    const s_ScopeMemo scope0 = Scope_snap_xL8BbLPe(_scope, _helpers);
    fu_DEFER(Scope_pop_GvGeMzm4(_scope, scope0, _helpers));
    const int brk_idx = _helpers.size();
    push_smTlTOYR(s_HelpersData { s_Target{}, fu_STR(node.value), short((HM_Anon | HM_CanBreak)), int(_current_fn.out.target.index), 0, GET_next_local_index_k5ok1B4G(_current_fnort, _current_fn, _scope), s_Type{}, s_Type(t_void) }, _helpers, _helpers_data);
    const s_Node& n_init = node.items[LOOP_INIT];
    const s_Node& n_pre_cond = node.items[LOOP_COND];
    const s_Node& n_body = node.items[LOOP_BODY];
    const s_Node& n_post_cond = node.items[LOOP_POST_COND];
    const s_Node& n_post = node.items[LOOP_POST];
    /*MOV*/ s_SolvedNode init = (n_init ? solveLetStatement_c9l45yME(n_init, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string) : s_SolvedNode{});
    if (is_never_zJCUz9W3(init.type))
    {
        makeNote_1zG3Fhlo(N_DeadLoopInit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        return /*NRVO*/ init;
    };
    s_SolvedNode pre_cond = (n_pre_cond ? solveNode_Tf69aXec(n_pre_cond, t_bool, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string) : s_SolvedNode{});
    s_SolvedNode body = (n_body ? solveBlock_eBBvZxr1(n_body, t_void, 0, HM_CanBreak, 0, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string) : s_SolvedNode{});
    s_SolvedNode post_cond = (n_post_cond ? solveNode_Tf69aXec(n_post_cond, t_bool, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string) : s_SolvedNode{});
    s_SolvedNode post = (n_post ? solveNode_Tf69aXec(n_post, t_void, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string) : s_SolvedNode{});
    const s_Helpers& h = _helpers[brk_idx];
    const s_Type& type = ((!pre_cond && !post_cond && !short((((void)void(), _helpers_data[h.index]).mask & HM_LabelUsed))) ? t_never : t_void);
    return SolvedNode_AK4GvqCq("loop"_fu, type, 0, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<5, s_SolvedNode> { s_SolvedNode(init), s_SolvedNode(pre_cond), s_SolvedNode(body), s_SolvedNode(post_cond), s_SolvedNode(post) } }, s_Target{}, h, _here);
}

                                #ifndef DEF_F_SINGLE_STMT
                                #define DEF_F_SINGLE_STMT
extern const int F_SINGLE_STMT;
                                #endif

static int Scope_lookupReturn_E6UoGvNN(const fu_STR& id, const bool lambdaOK, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Scope& _scope, const s_Module& module)
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
    fail_1X59Y46x((("No return `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static int Scope_lookupLabel_l9sB8tMa(const fu_STR& id, const bool cont, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Context& ctx, const s_Scope& _scope, const s_Module& module)
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
                        fail_1X59Y46x((("Cannot continue to label `"_fu + id) + "` from here, did you mean to `break`?"_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

                };
            };
            return /*NRVO*/ i;
        };
    };
    fail_1X59Y46x((("No label `"_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static s_Helpers& h_EwrGSfIQ(fu::view_mut<s_Helpers> _helpers, const int helpers_idx)
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

static s_SolvedNode solveJump_bq4MphXU(int helpers_idx, fu::view<s_Node> items, const int kills, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    const s_HelpersData* BL_1_v;
    const s_Type* _0;
    const s_HelpersData* BL_2_v;
    s_Type type { (*(_0 = &((__extension__ (
    {
        const s_Helpers& h = h_EwrGSfIQ(_helpers, helpers_idx);
        BL_1_v = &(_helpers_data[h.index]);
    (void)0;}), *BL_1_v).ret_actual)) ? *_0 : (__extension__ (
    {
        const s_Helpers& h = h_EwrGSfIQ(_helpers, helpers_idx);
        BL_2_v = &(_helpers_data[h.index]);
    (void)0;}), *BL_2_v).ret_expect) };
    /*MOV*/ s_SolvedNode expr = (!items ? createEmpty_extETXwG("empty"_fu, t_void, s_Target{}, _here) : solveNode_Tf69aXec(only_0T03m2Tp(items), type, (helpers_idx + 1), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string));
    if (is_never_zJCUz9W3(expr.type))
        return /*NRVO*/ expr;

    const s_HelpersData* BL_4_v;
    if ((__extension__ (
    {
        const s_Helpers& h = h_EwrGSfIQ(_helpers, helpers_idx);
        BL_4_v = &(_helpers_data[h.index]);
    (void)0;}), *BL_4_v).local_of != _current_fn.out.target.index)
    {
        const s_HelpersData* BL_6_v;
        add_9EOxwUBL(_current_fn.effects.far_jumps, (__extension__ (
        {
            const s_Helpers& h = h_EwrGSfIQ(_helpers, helpers_idx);
            BL_6_v = &(_helpers_data[h.index]);
        (void)0;}), *BL_6_v).local_of);
        return createEmpty_extETXwG("__far_jump"_fu, t_never, s_Target{}, _here);
    };
    const bool redundant = (kills == (helpers_idx + 1));
    if (redundant && is_void_zJCUz9W3(expr.type))
        return /*NRVO*/ expr;

    const s_HelpersData* BL_8_v;
    while ((__extension__ (
    {
        const s_Helpers& h = h_EwrGSfIQ(_helpers, helpers_idx);
        BL_8_v = &(_helpers_data[h.index]);
    (void)0;}), *BL_8_v).kills)
    {
        const s_HelpersData* BL_11_v;
        helpers_idx = ((__extension__ (
        {
            const s_Helpers& h = h_EwrGSfIQ(_helpers, helpers_idx);
            BL_11_v = &(_helpers_data[h.index]);
        (void)0;}), *BL_11_v).kills - 1);
    };
    const s_HelpersData* BL_12_v;
    if (redundant && !short(((__extension__ (
    {
        const s_Helpers& h = h_EwrGSfIQ(_helpers, helpers_idx);
        BL_12_v = &(_helpers_data[h.index]);
    (void)0;}), *BL_12_v).mask & HM_Function)))
        return /*NRVO*/ expr;

    s_HelpersData* BL_14_v;
    (__extension__ (
    {
        const s_Helpers& h = h_EwrGSfIQ(_helpers, helpers_idx);
        BL_14_v = &(_helpers_data.mutref(h.index));
    (void)0;}), *BL_14_v).mask |= HM_LabelUsed;
    const s_Helpers* _1;
    return (_1 = &(h_EwrGSfIQ(_helpers, helpers_idx)), createJump_NoogGtYZ(expr, *_1, _here, ctx, _helpers_data, _current_fnort, module, _scope, _helpers));
}

static s_SolvedNode solveJump_vP1kYeTT(const s_Node& node, const int kills, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, s_Module& module, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    const int helpers_idx = ((node.kind == "return"_fu) ? Scope_lookupReturn_E6UoGvNN(node.value, !!(node.flags & F_SINGLE_STMT), _helpers, _ss, _helpers_data, _here, ctx, _scope, module) : Scope_lookupLabel_l9sB8tMa(node.value, (node.kind == "continue"_fu), _helpers, _ss, _helpers_data, _here, ctx, _scope, module));
    return solveJump_bq4MphXU(int(helpers_idx), node.items, kills, _helpers, _helpers_data, _here, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
}

static s_SolvedNode solveInt_RAUBIwaq(const s_Node& node, const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module)
{
    return solved_KVUVmvqw(node, solveInt_q6G1lDcP(node.value, type, _here, ctx, _helpers, _helpers_data, _scope, module), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveNum_5v5YcBgs(const s_Node& node, const s_Type& type, const s_TokenIdx& _here)
{
    return solved_KVUVmvqw(node, solveNum_gzjaNsUe(node.value, type), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveStr_R4gJpN6w(const s_Node& node, const s_Type& t_string, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!node.value)
        return createDefinit_YMRzC9oa(add_ref_EgWfyCPW(s_Type(t_string), Lifetime_temporary_8nlJDPX0(), _here, ctx), _here);

    return solved_KVUVmvqw(node, t_string, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveChar_mbJmrxFH(const s_Node& node, const s_TokenIdx& _here)
{
    return solved_KVUVmvqw(node, t_byte, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveDefinit_n6toplic(const s_Type& type, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope)
{
    s_Type _0 {};
    return createDefinit_YMRzC9oa(((_0 = trySolveDefinit_3WQGxi0C(type)) ? static_cast<s_Type&&>(_0) : fail_1X59Y46x(("Cannot definit type: "_fu + humanizeType_nkNrw01H(type, module, ctx)), _here, ctx, _helpers, _helpers_data, _scope, module)), _here);
}

static s_SolvedNode solveImport_J9eZxtXO(const s_Node& node, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    const s_Module& m = findModule_2Of81qwt(node.value, ctx, _here, _helpers, _helpers_data, _scope, module);
    Scope_import_xOUhkVOX(m.modid, _scope, _ss, _here, ctx);
    return createEmpty_extETXwG("empty"_fu, t_void, s_Target{}, _here);
}

static s_SolvedNode solveDefer_66Nzpvtw(const s_Node& node, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    s_SolvedNode item = solveNode_Tf69aXec(only_vukGqR3r(node.items), t_void, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    return solved_KVUVmvqw(node, t_void, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(item) } }, s_Target{}, _here);
}

static s_SolvedNode solveTryCatch_qS2Urdrm(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    if (!(node.items.size() == 3))
        BUG_patsWWTe(fu_STR{}, _here, ctx);

    const s_ScopeMemo scope0 = Scope_snap_xL8BbLPe(_scope, _helpers);
    s_SolvedNode tRy = solveNode_Tf69aXec(node.items[0], t_void, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    Scope_pop_GvGeMzm4(_scope, scope0, _helpers);
    const s_ScopeMemo scope0_1 = Scope_snap_xL8BbLPe(_scope, _helpers);
    s_SolvedNode err = solveLetStatement_c9l45yME(node.items[1], _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    s_SolvedNode cAtch = solveNode_Tf69aXec(node.items[2], t_void, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    Scope_pop_GvGeMzm4(_scope, scope0_1, _helpers);
    if (!((err.kind == "letdef"_fu) && isAssignableAsArgument_yRJeU5dj(GET_pWzRaF0U(err.target, _scope, module, ctx).solved.type, t_string)))
        fail_1X59Y46x(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    const s_Type& type = ((is_never_zJCUz9W3(tRy.type) && is_never_zJCUz9W3(cAtch.type)) ? t_never : t_void);
    return solved_KVUVmvqw(node, type, fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(tRy), s_SolvedNode(err), s_SolvedNode(cAtch) } }, s_Target{}, _here);
}

static s_SolvedNode solveTypedef_2wFstYlM(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    s_Type annot = evalTypeAnnot_nHP0Ok9t(only_vukGqR3r(node.items), (*(const s_Map_mUYWjxvp*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    if (isStruct_usAEukhR(annot))
        Scope_set_CN2X3aNb(_scope, node.value, lookupStruct_GBXUPXZt(annot, module, ctx).target, false);
    else
        Scope_Typedef_CUDLzI5V(_scope, node.value, annot, node.flags, (*(const fu_STR*)fu::NIL), 0u, module);

    return createEmpty_extETXwG("empty"_fu, t_void, s_Target{}, _here);
}

static s_SolvedNode solveTypeAssert_reJoGAoS(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    const s_Node& left = node.items[0];
    const s_Node& right = node.items[1];
    s_Type expect = evalTypeAnnot_nHP0Ok9t(right, (*(const s_Map_mUYWjxvp*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    /*MOV*/ s_SolvedNode actual = solveNode_Tf69aXec(left, expect, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    checkAssignable_b4W6xpY2(expect, actual.type, "Type assertion failed"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _here, ctx, module, _helpers, _helpers_data, _scope);
    return /*NRVO*/ actual;
}

static s_SolvedNode solveTypeParam_yDa8hsAk(const s_Node& node, const s_TokenIdx& _here, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss)
{
    return solved_KVUVmvqw(node, evalTypeParam_Bss0PTf1(node.value, (*(const s_Map_mUYWjxvp*)fu::NIL), _here, ctx, _helpers, _helpers_data, _scope, module, _ss), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static void visitScope_FqYGMNDv(fu::view<s_ScopeItem> items, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    int scope_iterator {};
    s_Target target {};
    bool shadows {};
    while (!shadow && (target = search_qV63L7fS(items, id, scope_iterator, _ss.items, shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
        result.unshift(s_Target(target));

}

                                #ifndef DEFt_each_4Oz4cwA5
                                #define DEFt_each_4Oz4cwA5
inline void each_4Oz4cwA5(fu::view<s_Struct> a, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Struct& sTruct = a[i];
        visitScope_FqYGMNDv(sTruct.items, shadow, id, _ss, result);
    };
}
                                #endif

static void visitTypes_yX47XuNa(const s_Module& module, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    each_4Oz4cwA5(module.out.types, shadow, id, _ss, result);
}

                                #ifndef DEFt_each_6ZLlKnWI
                                #define DEFt_each_6ZLlKnWI
inline void each_6ZLlKnWI(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Context& ctx, const bool shadow, const fu_STR& id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
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
            visitTypes_yX47XuNa(ctx.modules[import], shadow, id, _ss, result);
        };
        i0 = ss.end;
    };
}
                                #endif

static fu_VEC<s_Target> solveAddrOfFn_5mDp3adS(const fu_STR& id, const int flags, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const bool shadow = false;
    /*MOV*/ fu_VEC<s_Target> result {};
    visitScope_FqYGMNDv(_scope.items, shadow, id, _ss, result);
    if (flags & F_ACCESS)
    {
        visitTypes_yX47XuNa(module, shadow, id, _ss, result);
        each_6ZLlKnWI(_scope.imports, _ss.imports, 0, ctx, shadow, id, _ss, result);
    };
    return static_cast<fu_VEC<s_Target>&&>((result ? result : fail_1X59Y46x((("No `fn "_fu + id) + "` in scope."_fu), _here, ctx, _helpers, _helpers_data, _scope, module)));
}

static s_SolvedNode solveAddrOfFn_rzLWiGuP(const s_Node& node, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data)
{
    const fu_STR& id = node.value;
    fu_VEC<s_Target> result = solveAddrOfFn_5mDp3adS(id, node.flags, _scope, _ss, module, ctx, _here, _helpers, _helpers_data);
    s_Type type = s_Type { s_ValueType { 0, packAddrOfFn_wA8no8pa(result) }, s_Lifetime{} };
    return createEmpty_extETXwG("empty"_fu, type, s_Target{}, _here);
}

static s_SolvedNode solveDeclExpr_vJJRvOiR(const s_Node& node, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    return s_SolvedNode(only_gF1gIgkM(solveNodes_llR9thfD((fu::slate<1, s_Node> { s_Node(node) }), (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string)));
}

static void walk_oHr6IuAu(s_Node& node, fu::view<char> placeholder, const s_ScopeItem& field)
{
    for (int i = 0; i < node.items.size(); i++)
        walk_oHr6IuAu(node.items.mutref(i), placeholder, field);


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

inline static s_Node astReplace_PwoRIbka(const s_Node& node, fu::view<char> placeholder, const s_ScopeItem& field)
{
    /*MOV*/ s_Node node_1 { node };
    walk_oHr6IuAu(node_1, placeholder, field);
    return /*NRVO*/ node_1;
}

static s_SolvedNode solveForFieldsOf_YJybuXpC(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    fu::view<char> placeholder = node.value;
    const s_Node& body_template = node.items[1];
    s_Type fields_of = evalTypeAnnot_nHP0Ok9t(node.items[0], (*(const s_Map_mUYWjxvp*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    if (!(isStruct_usAEukhR(fields_of)))
        fail_1X59Y46x((("[for fieldname]: This is not a struct: `"_fu + humanizeType_nkNrw01H(fields_of, module, ctx)) + "`."_fu), _here, ctx, _helpers, _helpers_data, _scope, module);

    fu::view<s_ScopeItem> fields = lookupStruct_GBXUPXZt(fields_of, module, ctx).items;
    fu_VEC<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        if (GET_pWzRaF0U(target_e3eS1o6f(field), _scope, module, ctx).kind == "field"_fu)
            items_ast += astReplace_PwoRIbka(body_template, placeholder, field);

    };
    fu_VEC<s_SolvedNode> items = solveNodes_llR9thfD(items_ast, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    const s_Type& type = (is_never_zJCUz9W3(last_cCrdPZ3P(items).type) ? t_never : t_void);
    return createBlock_zloQ2DK8(type, fu_VEC<s_SolvedNode>(items), s_Helpers{}, _here, _helpers, _helpers_data);
}

static void compilerBreak_NGn8Oefi(const s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    fu_STR debug = "\nCompiler break:"_fu;
    if (_current_fn.out.target)
    {
        const s_Target& t = _current_fn.out.target;
        debug += (x7E((x7E((("\n    Current fn: "_fu + qWHAT_RTL9wrOX(GET_pWzRaF0U(t, _scope, module, ctx), module, _scope, ctx)) + " at ("_fu), fu::i64dec(t.modid)) + ", "_fu), fu::i64dec(t.index)) + "):"_fu);
        fu::view<s_Overload> locals = EXT_hGjgwR4E(t, module, _scope, ctx).locals;
        for (int i = 0; i < locals.size(); i++)
        {
            const s_Overload& item = locals[i];
            debug += ("\n        "_fu + qWHAT_RTL9wrOX(item, module, _scope, ctx));
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

static s_SolvedNode executeCompilerPragma_tx7DWBKn(const s_Node& node, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    if (node.value != "break"_fu)
    {
        fu_VEC<s_SolvedNode> _0 {};
        return (_0 = solveNodes_llR9thfD(node.items, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string), SolvedNode_AK4GvqCq("compiler"_fu, t_void, 0, node.value, static_cast<fu_VEC<s_SolvedNode>&&>(_0), s_Target{}, s_Helpers{}, _here));
    };
    compilerBreak_NGn8Oefi(_current_fn, _scope, module, ctx);
    return createEmpty_extETXwG("empty"_fu, t_void, s_Target{}, _here);
}

static s_SolvedNode solveNode_Tf69aXec(const s_Node& node, const s_Type& type, const int kills, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, s_Map_FNvBVj2X& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<fu_STR>& _spec_errors, s_Target& _current_fn_or_type, int& _anons, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, int& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items, const s_Target& _current_fnort, const s_Type& t_string)
{
    HERE_fVfHq6aR(node.token, _here);
    fu::view<char> k = node.kind;
    if (k == "root"_fu)
        return solveRoot_lXkjPeBQ(node, _helpers, _helpers_data, _here, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "block"_fu)
        return solveBlock_eBBvZxr1(node, type, 0, HM_CanBreak, kills, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "argid"_fu)
        return solveArgID_K6TJeDkO(node, type, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "let"_fu)
        return solveLet_RtOR64Sn(node, (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "call"_fu)
        return solveCall_3FifiTBa(node, s_Target{}, kills, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "arrlit"_fu)
        return solveArrlit_9NXkRkOQ(node, type, module, ctx, _here, _helpers, _helpers_data, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "if"_fu)
        return solveIf_VqbuAkky(node, s_Type(type), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "or"_fu)
        return solveOr_4ZBArO8d(node, s_Type(type), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "and"_fu)
        return solveAnd_O6v3z7qg(node, s_Type(type), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "loop"_fu)
        return solveLoop_m4KhD3Bx(node, _scope, _helpers, _current_fn, _current_fnort, _helpers_data, _here, ctx, module, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, t_string);

    if (k == "break"_fu)
        return solveJump_vP1kYeTT(node, kills, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "return"_fu)
        return solveJump_vP1kYeTT(node, kills, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "continue"_fu)
        return solveJump_vP1kYeTT(node, kills, _helpers, _ss, _helpers_data, _here, ctx, _scope, module, _current_fn, _warnings, _specs, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "int"_fu)
        return solveInt_RAUBIwaq(node, type, _here, ctx, _helpers, _helpers_data, _scope, module);

    if (k == "real"_fu)
        return solveNum_5v5YcBgs(node, type, _here);

    if (k == "str"_fu)
        return solveStr_R4gJpN6w(node, t_string, _here, ctx);

    if (k == "char"_fu)
        return solveChar_mbJmrxFH(node, _here);

    if (k == "definit"_fu)
        return solveDefinit_n6toplic(type, module, ctx, _here, _helpers, _helpers_data, _scope);

    if (k == "import"_fu)
        return solveImport_J9eZxtXO(node, ctx, _here, _helpers, _helpers_data, _scope, module, _ss);

    if (k == "defer"_fu)
        return solveDefer_66Nzpvtw(node, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "try"_fu)
        return solveTryCatch_qS2Urdrm(node, _here, ctx, _scope, _helpers, _helpers_data, module, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "typedef"_fu)
        return solveTypedef_2wFstYlM(node, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "typeassert"_fu)
        return solveTypeAssert_reJoGAoS(node, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "typeparam"_fu)
        return solveTypeParam_yDa8hsAk(node, _here, ctx, _helpers, _helpers_data, _scope, module, _ss);

    if (k == "addroffn"_fu)
        return solveAddrOfFn_rzLWiGuP(node, _scope, _ss, module, ctx, _here, _helpers, _helpers_data);

    if (k == "fn"_fu)
        return solveDeclExpr_vJJRvOiR(node, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "struct"_fu)
        return solveDeclExpr_vJJRvOiR(node, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "forfieldsof"_fu)
        return solveForFieldsOf_YJybuXpC(node, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "compiler"_fu)
        return executeCompilerPragma_tx7DWBKn(node, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);

    if (k == "void"_fu)
        return createEmpty_extETXwG("empty"_fu, t_void, s_Target{}, _here);

    fail_1X59Y46x(("TODO: "_fu + k), _here, ctx, _helpers, _helpers_data, _scope, module);
}

static void Scope_observeDefects_XGO8gWUO(fu::view<s_ScopeItem> items, const s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_Options& options, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, int& _notes)
{
    bool hasLets = false;
    bool hasPubTemplates = false;
    fu_VEC<s_Target> privates {};
    for (int i = 0; i < items.size(); i++)
    {
        const s_Target t = target_e3eS1o6f(items[i]);
        if (t.modid != module.modid)
            continue;

        const s_Overload& o = GET_pWzRaF0U(t, _scope, module, ctx);
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
        makeNote_1zG3Fhlo(N_SD_HasStaticInit, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);

    if (privates && hasPubTemplates)
    {
        makeNote_1zG3Fhlo(N_SD_ExternPrivates, options, _here, ctx, _helpers, _helpers_data, _scope, module, _notes);
        for (int i_1 = 0; i_1 < privates.size(); i_1++)
        {
            s_Overload& o = GET_mut_lqSDNFDF(privates[i_1], _scope, module);
            o.flags |= F_EXTERN;
        };
    };
}

s_SolverOutput solve_j5ptKWox(const s_Context& ctx, s_Module& module, const s_Options& options)
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
    push_smTlTOYR(s_HelpersData{}, _helpers, _helpers_data);
    s_Target _current_fn_or_type = s_Target { int(module.modid), 0 };
    s_Map_FNvBVj2X _specs {};
    fu_VEC<fu_STR> _spec_errors = fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "BUG: Specializer reentry."_fu } };
    fu_VEC<s_Warning> _warnings {};
    s_Type t_string = createArray_zJCUz9W3(t_byte, _here, ctx);
    fu_VEC<s_SolvedNode> TODO_FIX_convert_args = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { SolvedNode_AK4GvqCq((*(const fu_STR*)fu::NIL), s_Type{}, 0, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here) } };
    if (module.modid)
    {
        _scope.imports += int(module.modid);
        _Scope_import__forceCopy_fbuJQRWp(0, ctx, _scope);
    }
    else
        _scope = listGlobals_6iVz8n7c(module);

    const s_Target _current_fnort = s_Target { int(module.modid), 0 };
    s_SolvedNode root = solveNode_Tf69aXec(parse, (*(const s_Type*)fu::NIL), 0, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _specs, _ss, _root_scope, _spec_errors, _current_fn_or_type, _anons, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items, _current_fnort, t_string);
    if (_current_fn.out)
        BUG_patsWWTe("non-empty _current_fn."_fu, _here, ctx);

    if (_helpers_data[0])
        BUG_patsWWTe("non-empty _helpers_data[0]."_fu, _here, ctx);

    Scope_observeDefects_XGO8gWUO(_scope.items, module, _scope, ctx, options, _here, _helpers, _helpers_data, _notes);
    for (int i = 0; i < _warnings.size(); i++)
    {
        const s_Warning& w = _warnings[i];
        if (w.token)
        {
            _here = w.token;
            fail_1X59Y46x(fu_STR(w.message), _here, ctx, _helpers, _helpers_data, _scope, module);
        };
    };
    return s_SolverOutput { s_SolvedNode(root), Scope_exports_lbD2qaob(_scope, module.modid, _field_items), int(_notes) };
}

#endif
